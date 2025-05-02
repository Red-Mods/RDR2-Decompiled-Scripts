//Decompiled with MagicRDR v1.0
//Function Count : 552
//Statics Count : 1293
//Natives Count : 780
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 12;
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
	var uLocal_56 = 1;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 8;
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
	var uLocal_98 = 1;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 1;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 5;
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
	var uLocal_134 = 6;
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
	var uLocal_150 = 5;
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
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 4;
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
	var uLocal_188 = 4;
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
	var uLocal_200 = 8;
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
	var uLocal_220 = 6;
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
	var uLocal_236 = 8;
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
	var uLocal_268 = 8;
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
	var uLocal_288 = 6;
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
	var uLocal_304 = 8;
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
	var uLocal_324 = 7;
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
	var uLocal_342 = 8;
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
	var uLocal_362 = 5;
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
	var uLocal_376 = 3;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 4;
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
	var uLocal_398 = 4;
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
	var uLocal_410 = 1;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 1;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 6;
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
	var uLocal_458 = 1;
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
	int iLocal_470 = 0;
	var uLocal_471 = 0;
	struct<6> Local_472 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 58;
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
	bool bLocal_718 = false;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
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
	bool bLocal_734 = false;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 13;
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
	struct<15> Local_797[6];
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
	var uLocal_907 = 5;
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
	var uLocal_937 = 5;
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
	var uLocal_967 = 5;
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
	int iLocal_979[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	bool bLocal_995 = false;
	bool bLocal_996 = false;
	bool bLocal_997 = false;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 6;
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
	int iLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	bool bLocal_1066 = false;
	var uLocal_1067 = 0;
	bool bLocal_1068 = false;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072[2] = { 0, 0 };
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078[6] = { 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	int iLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	int iLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	int iLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	int iLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	int iLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	int iLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	int iLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	int iLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	int iLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	int iLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	float fLocal_1152 = 0.0f;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	int iLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	int iLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	int iLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	bool bLocal_1169 = false;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	float fLocal_1180 = 0.0f;
	float fLocal_1181 = 0.0f;
	var uLocal_1182 = 10;
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
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	bool bLocal_1211 = false;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	bool bLocal_1214 = false;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	var uLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	int iLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	int iLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
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
	int iLocal_1257 = 0;
	int iLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	int iLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	int iLocal_1266 = 0;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	bool bLocal_1271 = false;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
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
	iLocal_1269 = 0;
	Local_472 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_718 = 99;
	iLocal_719 = 6;
	iLocal_720 = 1000;
	while (Function_234())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x41 / 65
{
	Function_233(49165);
	Function_231(9);
	Function_230();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	SET_ACTOR_CAN_DEADEYE_TAG_ANYTHING(&Global_54076, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_229(1);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	SET_INFINITE_DEADEYE(0, 0);
	SET_MAX_DEADEYE_POINTS(0, 100.0f);
	SET_PLAYER_PERFECT_ACCURACY(&Global_54076, 0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 1);
	DECOR_SET_BOOL(&Global_54076, "bThreeStrikes", 0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	if (bLocal_1214)
	{
		_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 7, 0);
		_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 8, 0);
		ACTOR_SET_WEAPON_AMMO(&Global_54076, 4, fLocal_1180);
		ACTOR_SET_WEAPON_AMMO(&Global_54076, 8, fLocal_1181);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 368))
	{
		SQUAD_SET_FACTION(&iLocal_4 + 368, 21);
		Function_228(&iLocal_4 + 368);
		Function_227(&iLocal_4 + 368, 1);
		Function_226(&iLocal_4 + 368);
		Function_225(&iLocal_4 + 368);
		Function_223(&iLocal_4 + 368, 1, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_1068))
	{
		DECOR_REMOVE(&bLocal_1068, "Aguila");
		DESTROY_ACTOR(&bLocal_1068);
	}
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_222();
	Function_221();
	Function_220(&iLocal_470);
	Function_220(&iLocal_4);
	if (IS_SOUND_ID_VALID(&uLocal_1249))
	{
		STOP_SOUND(&uLocal_1249);
		RELEASE_SOUND_ID(&uLocal_1249);
	}
	if (IS_SOUND_ID_VALID(&uLocal_1251))
	{
		STOP_SOUND(&uLocal_1251);
		RELEASE_SOUND_ID(&uLocal_1251);
	}
	if (IS_SOUND_ID_VALID(&uLocal_1253))
	{
		STOP_SOUND(&uLocal_1253);
		RELEASE_SOUND_ID(&uLocal_1253);
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	ENABLE_CURVE("rsdROAD_tum_arm_roaddetachedCurve2", true);
	UI_ENABLE("loadingspinner");
	if (bLocal_995)
	{
		Function_193(bLocal_996, 1, 1, 1, 0, 1, 1, 1);
		MEMORY_PREFER_RIDING(&iLocal_1062, true);
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_1062, 0);
		Function_190(2, 0, 0, 1, 1);
		Function_189();
		Function_188(StackVal, &iLocal_1062, Function_189(), 131088, 3, 1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&iLocal_1062, false);
		SET_ACTOR_FACTION(&iLocal_1062, 20);
		MEMORY_CONSIDER_AS(&iLocal_1062, &Global_54076, false);
	}
	else
	{
		Function_193(bLocal_996, 1, 1, 1, 1, 1, 1, 1);
		Function_190(2, 1, 0, 1, 1);
	}
	Function_178();
	if (IS_ITERATOR_VALID(&uLocal_732))
	{
		DESTROY_ITERATOR(&uLocal_732);
	}
	Function_174(&iLocal_484);
	RELEASE_LAYOUT_REF(&iLocal_470);
	if (bLocal_995)
	{
		DECOR_SET_BOOL(&Global_54076, "bBeatFadeIn", 1);
		Function_26(Local_472, 1, 1, 1, 0);
	}
	else if (bLocal_996)
	{
		Function_22(Local_472);
	}
	else
	{
		Function_2(Local_472);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2D9 / 729
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2FA / 762
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x317 / 791
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x33A / 826
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x351 / 849
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

void Function_7(int iParam0) //Position: 0x3F3 / 1011
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x416 / 1046
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

void Function_9() //Position: 0x460 / 1120
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x479 / 1145
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

void Function_11(var uParam0, bool bParam1) //Position: 0x4CC / 1228
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

struct<16> Function_12(int iParam0) //Position: 0x5F6 / 1526
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

bool Function_13() //Position: 0x630 / 1584
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x64B / 1611
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x658 / 1624
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x678 / 1656
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x68F / 1679
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x6AA / 1706
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8F1 / 2289
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x91D / 2333
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

bool Function_21(int iParam0) //Position: 0x941 / 2369
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x956 / 2390
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x974 / 2420
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

struct<16> Function_24(int iParam0) //Position: 0xA1A / 2586
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

struct<24> Function_25(char* cParam0) //Position: 0xA59 / 2649
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCAF / 3247
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
		Function_169(&(Global_6667[iVar228]));
		Function_168(4194304);
		if (&bParam3)
		{
			Function_120(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_114(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_120(iVar2, &uVar0, 0);
		}
		bVar1 = Function_113();
		if (&bParam1)
		{
			Function_97(iVar2, bParam0, bVar1);
			Function_96();
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

void Function_27() //Position: 0xDA3 / 3491
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

int Function_28(int iParam0, bool bParam1) //Position: 0xDD5 / 3541
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

int Function_29(int iParam0) //Position: 0xE13 / 3603
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xE2D / 3629
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xE43 / 3651
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1140 / 4416
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

void Function_33(char* cParam0) //Position: 0x11B5 / 4533
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x11EF / 4591
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

bool Function_35(var uParam0, int iParam1) //Position: 0x126B / 4715
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x127E / 4734
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

int Function_37(int iParam0) //Position: 0x131F / 4895
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x135C / 4956
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1372 / 4978
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
		if (Function_95())
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
		if (Function_95())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_91();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_95())
	{
		Function_90();
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
			Function_83(bParam0);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x15D0 / 5584
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x160E / 5646
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

void Function_42(bool bParam0) //Position: 0x164D / 5709
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

void Function_43() //Position: 0x16A2 / 5794
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

void Function_44() //Position: 0x16ED / 5869
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

void Function_45() //Position: 0x17F3 / 6131
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

void Function_46() //Position: 0x1826 / 6182
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

void Function_47() //Position: 0x19B9 / 6585
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

void Function_48() //Position: 0x1B72 / 7026
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B80 / 7040
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

bool Function_50() //Position: 0x1D9D / 7581
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1DB2 / 7602
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E59 / 7769
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20F5 / 8437
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

var Function_54() //Position: 0x2733 / 10035
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x273C / 10044
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x274D / 10061
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

struct<32> Function_57(char* cParam0) //Position: 0x2844 / 10308
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x285F / 10335
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x28C6 / 10438
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x28D8 / 10456
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28EA / 10474
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

int Function_62(int iParam0) //Position: 0x2A1E / 10782
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2A2D / 10797
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A66 / 10854
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2AA3 / 10915
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C3D / 11325
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

int Function_67(bool bParam0) //Position: 0x2E81 / 11905
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2EC2 / 11970
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

struct<8> Function_69() //Position: 0x2F4B / 12107
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

struct<8> Function_70() //Position: 0x2FE2 / 12258
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

void Function_71() //Position: 0x3061 / 12385
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x309E / 12446
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

void Function_73() //Position: 0x32AA / 12970
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_80(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_80(&Global_53524 + 12, &Global_53524 + 16);
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

bool Function_74(char* cParam0) //Position: 0x3361 / 13153
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3379 / 13177
{
	int iVar0;
	
	iVar0 = Function_78(&uParam2, &uParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_76(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_76(&Global_99144, 2);
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
		Function_76(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_189();
	return StackVal, Function_189();
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3471 / 13425
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3482 / 13442
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3498 / 13464
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
	if (!Function_77(iVar0) && !&bParam1)
	{
		iVar0 = Function_78(&bParam0, 1);
	}
	return iVar0;
}

float Function_79(struct<2> Param0, struct<2> Param2) //Position: 0x3564 / 13668
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_80(float fParam0, int iParam1) //Position: 0x3581 / 13697
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_82(&Global_54076, &Var3);
	if (!Function_81(Global_46760[0]))
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
	if (!Function_81(Global_46760[2]))
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
	if (!Function_81(Global_46760[1]))
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
	if (!Function_81(Global_46796[1]))
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
	if (!Function_81(Global_46796[3]))
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
	if (!Function_81(Global_46796[2]))
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
	if (!Function_81(Global_46796[4]))
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
	if (!Function_81(Global_46816[0]))
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
	if (!Function_81(Global_46816[1]))
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
	if (!Function_81(Global_46816[2]))
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
	if (!Function_81(Global_46838[0]))
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
	if (!Function_81(Global_46850[0]))
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
	if (!Function_81(Global_46850[1]))
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
	if (!Function_81(Global_46850[2]))
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
	if (!Function_81(Global_46866[0]))
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
	if (!Function_81(Global_46866[1]))
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
	if (!Function_81(Global_46866[2]))
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
	if (!Function_81(Global_46894[2]))
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
	if (!Function_81(Global_46894[3]))
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
	if (!Function_81(Global_46894[0]))
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
	if (!Function_81(Global_46914[0]))
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
	if (!Function_81(Global_46926[2]))
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
	if (!Function_81(Global_46926[1]))
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
	if (!Function_81(Global_46926[0]))
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
	if (!Function_81(Global_46838[1]))
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
	if (!Function_81(Global_46894[1]))
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
	Function_76(&Global_99144, 2);
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

bool Function_81(int iParam0) //Position: 0x3DAD / 15789
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_82(var uParam0, int iParam1) //Position: 0x3DE8 / 15848
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_83(bool bParam0) //Position: 0x3DF7 / 15863
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
				Function_88(12, 1, 0, 0);
				Function_87(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_88(13, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_88(14, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_88(15, 1, 0, 0);
				Function_87(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_88(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_86(bParam0) == 1)
					{
						iVar0 = Function_85(bParam0);
						if (Function_84(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_87(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_87(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_87(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_87(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_87(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_87(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_87(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_87(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_87(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_87(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_87(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_87(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_87(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_87(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_87(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_87(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_87(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_87(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_87(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_87(4, 19);
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
								Function_88(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_88(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_88(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_85(bParam0) == 0)
			{
				if (Function_86(bParam0) == 1)
				{
					Function_88(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_84(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_87(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_87(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_87(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_87(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_87(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_87(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_87(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_87(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_86(bParam0) == 1)
			{
				Function_88(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_88(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_87(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_87(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_88(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_87(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 9);
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

bool Function_84(int iParam0) //Position: 0x42D3 / 17107
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0) //Position: 0x42E9 / 17129
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_86(bool bParam0) //Position: 0x4308 / 17160
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_87(int iParam0, int iParam1) //Position: 0x4322 / 17186
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

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x438C / 17292
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
	Function_89(iParam0);
	return 1;
}

void Function_89(int iParam0) //Position: 0x45B4 / 17844
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

void Function_90() //Position: 0x4652 / 18002
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

void Function_91() //Position: 0x47B4 / 18356
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_94(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_94(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_92(int iParam0, char* cParam1) //Position: 0x4834 / 18484
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
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B8B / 19339
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

int Function_94(int iParam0) //Position: 0x4C13 / 19475
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95() //Position: 0x4C2D / 19501
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_96() //Position: 0x4C58 / 19544
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

void Function_97(int iParam0, int iParam1, bool bParam2) //Position: 0x4C86 / 19590
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
		iVar14 = Function_112(iParam0);
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
		iVar15 = Function_111(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_98(50, 1, 0);
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

void Function_98(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F22 / 20258
{
	int iVar0;
	bool bVar1;
	
	if (Function_110(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
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
	Function_107();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_105(3, bVar1);
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
		Function_88(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
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

void Function_99(int iParam0, int iParam1) //Position: 0x50F6 / 20726
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

int Function_100(int iParam0, char* cParam1) //Position: 0x5360 / 21344
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
	Function_92(iParam0, &cParam1, 0, 1);
	iVar1 = Function_101();
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

int Function_101() //Position: 0x54F0 / 21744
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
	Function_102();
	return 0;
}

void Function_102() //Position: 0x5591 / 21905
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
		Function_103(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_103(int iParam0) //Position: 0x564F / 22095
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

var Function_104(int iParam0) //Position: 0x56B5 / 22197
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

int Function_105(int iParam0, bool bParam1) //Position: 0x5744 / 22340
{
	bool bVar0;
	int iVar1;
	
	Function_88(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_106(iParam0, 4294967295);
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
	iVar1 = Function_101();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_106(int iParam0, int iParam1) //Position: 0x58F0 / 22768
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

void Function_107() //Position: 0x5935 / 22837
{
	Function_109(3, 0.0f);
	Function_108(3, 10000.0f);
	return;
}

int Function_108(int iParam0, int iParam1) //Position: 0x594B / 22859
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_109(int iParam0, int iParam1) //Position: 0x598B / 22923
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_110(int iParam0) //Position: 0x59CB / 22987
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_111(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x59DA / 23002
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

int Function_112(int iParam0) //Position: 0x5BA2 / 23458
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

var Function_113() //Position: 0x5C37 / 23607
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_114(int iParam0) //Position: 0x5C5C / 23644
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
			Function_98(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_98(25, 1, 0);
			Function_119(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			Function_115(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_119(50, 1, 1);
			Function_98(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_119(5, 1, 1);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_98(75, 1, 0);
			Function_115(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_119(5, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_119(25, 1, 1);
			Function_98(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_119(10, 1, 1);
			Function_98(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_98(50, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_98(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_115(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_119(20, 1, 1);
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_119(25, 1, 1);
			Function_98(150, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_119(10, 1, 1);
			Function_98(150, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_98(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_115(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_115(100, 1, 0);
			Function_119(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_119(3, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_115(125, 1, 0);
			Function_98(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_119(50, 1, 1);
			Function_98(100, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_119(75, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_98(250, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_98(75, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_98(200, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_98(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_119(100, 1, 1);
			Function_98(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_98(200, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_98(500, 1, 0);
			Function_115(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_98(150, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_115(25, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_98(150, 1, 0);
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_115(150, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_115(150, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x612B / 24875
{
	int iVar0;
	bool bVar1;
	
	if (Function_110(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
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
			Function_105(1, bVar1);
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
			Function_118(1, (4294967295 * bVar1));
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
		Function_88(1, bVar1, 0, 0);
	}
	else
	{
		Function_117(1, (4294967295 * bVar1), 0);
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
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_100(2, Function_116(Global_21369.f_244), 0);
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
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_100(2, Function_116(Global_21369.f_244), 1);
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
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_100(2, Function_116(Global_21369.f_244), 1);
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
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			break;
	}
	Function_99(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_116(int iParam0) //Position: 0x6452 / 25682
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

int Function_117(int iParam0, bool bParam1, int iParam2) //Position: 0x64F5 / 25845
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

int Function_118(int iParam0, bool bParam1) //Position: 0x66F2 / 26354
{
	bool bVar0;
	int iVar1;
	
	Function_117(iParam0, bParam1, 0);
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
	iVar1 = Function_106(iParam0, 4294967295);
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
	iVar1 = Function_101();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x689D / 26781
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_88(0, bParam0, 0, 0);
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
		Function_88(597, bParam0, 0, 0);
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

void Function_120(int iParam0, var uParam1, bool bParam2) //Position: 0x696F / 26991
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
			Function_166(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_163(Global_46816[0]);
			Function_153(0);
			Function_151(2, 1);
			Function_151(0, 1);
			Function_151(1, 1);
			break;
		
		case 0x00000003:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_163(Global_46816[0]);
			Function_163(Global_46760[0]);
			Function_149(0, 1);
			Function_149(15, 1);
			Function_149(9, 1);
			Function_149(12, 1);
			Function_149(16, 1);
			Function_151(3, 1);
			break;
		
		case 0x00000005:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_161(21, &bParam2, 4);
			Function_163(Global_46816[0]);
			Function_151(39, 1);
			break;
		
		case 0x00000007:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_148())
				{
					if (!Function_147(4))
					{
						Function_137(4, 0, 0, 1, 0);
					}
				}
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_163(Global_46760[0]);
			Function_163(Global_46816[2]);
			Function_136(&(Global_43791[Global_46816[2]]), 32768);
			Function_135(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_161(9, &bParam2, 4);
			Function_163(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_163(Global_46760[0]);
			Function_163(Global_46796[0]);
			Function_136(&(Global_43791[Global_46796[0]]), 32768);
			Function_135(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_163(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_163(Global_46760[1]);
			Function_163(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_163(Global_46838[0]);
			Function_163(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_163(Global_46796[5]);
			Function_163(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_161(21, &bParam2, 4);
			Function_163(Global_46760[4]);
			Function_163(Global_46796[4]);
			Function_134(&Global_119935, 0x2000000);
			Function_134(&Global_119935, 0x4000000);
			Function_134(&Global_119935, 4096);
			Function_134(&Global_119935, 8);
			Function_134(&Global_119935, 8388608);
			Function_134(&Global_119935, 524288);
			Function_134(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_163(Global_46760[4]);
			Function_163(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_135(&(Global_43791[Global_46760[4]]), 256);
			Function_163(Global_46760[4]);
			Function_163(Global_46796[0]);
			Function_136(&(Global_43791[Global_46796[0]]), 32768);
			Function_135(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_163(Global_46760[0]);
			Function_163(Global_46760[5]);
			Function_161(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_163(Global_46796[3]);
			Function_136(&(Global_43791[Global_46796[3]]), 32768);
			Function_135(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_161(9, &bParam2, 4);
			Function_163(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_136(&(Global_43791[Global_46838[1]]), 32768);
			Function_163(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_161(12, &bParam2, 4);
			Function_135(&(Global_43791[Global_46838[1]]), 256);
			Function_163(Global_46816[3]);
			Function_163(Global_46866[0]);
			Function_163(Global_46850[0]);
			Function_153(4);
			Function_149(13, 1);
			Function_149(1, 1);
			Function_149(18, 1);
			Function_151(34, 1);
			Function_151(44, 1);
			Function_151(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_161(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_163(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_163(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_163(Global_46866[0]);
			Function_163(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_163(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_163(Global_46850[0]);
			Function_163(Global_46866[0]);
			Function_163(Global_46866[1]);
			Function_163(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_161(23, &bParam2, 3);
			Function_149(23, 1);
			Function_163(Global_46850[0]);
			Function_163(Global_46850[2]);
			Function_136(&(Global_43791[Global_46850[2]]), 32768);
			Function_135(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_161(19, &bParam2, 4);
			Function_163(Global_46850[0]);
			Function_163(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_161(24, &bParam2, 3);
			Function_149(24, 1);
			Function_163(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_163(Global_46850[0]);
			Function_163(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_163(Global_46866[12]);
			Function_163(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_163(Global_46866[12]);
			Function_163(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_161(25, &bParam2, 10);
			Function_163(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_163(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_163(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_161(13, &bParam2, 4);
			Function_163(Global_46866[2]);
			Function_163(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_147(8))
				{
					Function_137(8, 0, 0, 1, 0);
				}
			}
			Function_163(Global_46850[0]);
			Function_153(9);
			Function_149(7, 1);
			Function_149(11, 1);
			Function_149(3, 1);
			Function_149(20, 1);
			Function_151(57, 1);
			break;
		
		case 0x0000002A:
			Function_161(2, &bParam2, 4);
			Function_163(Global_46914[0]);
			Function_163(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_163(Global_46914[0]);
			Function_163(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_161(17, &bParam2, 4);
			Function_163(Global_46926[0]);
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_132(15))
				{
					Function_127(15, 0, 1);
				}
			}
			Function_87(2, 26);
			Function_135(&(Global_43791[Global_46914[1]]), 256);
			Function_153(11);
			Function_163(Global_46914[1]);
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_163(Global_46914[1]);
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_163(Global_46914[1]);
			Function_121(11);
			Function_153(12);
			Global_26200[1114].f_40 = 0;
			Function_151(56, 1);
			if (!&bParam2)
			{
				if (!Function_147(9))
				{
					Function_137(9, 0, 0, 0, 0);
				}
				if (!Function_147(10))
				{
					Function_137(10, 0, 0, 1, 0);
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

void Function_121(int iParam0) //Position: 0x728A / 29322
{
	var uVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_126(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_126(&Global_26200[iParam014] + 88, 0);
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
			Function_122(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_122(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7407 / 29703
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
		Function_124(Function_125(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_124(Function_125(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_124(StackVal);
				Var1 = Function_124(StackVal);
				if (Function_123(StackVal, StackVal, Var1, Var3))
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

bool Function_123(struct<2> Param0, struct<2> Param2) //Position: 0x7512 / 29970
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_124(int iParam0) //Position: 0x753E / 30014
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

var Function_125(vector3 vParam0) //Position: 0x7595 / 30101
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

void Function_126(var uParam0, int iParam1) //Position: 0x75E3 / 30179
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

void Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x763E / 30270
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		if (!Function_147(bParam0))
		{
			Function_137(bParam0, 1, 0, 0, 1);
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
		Function_88(457, 1, 0, 0);
		Function_130(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
	}
	return;
}

void Function_128() //Position: 0x77DF / 30687
{
	return;
}

bool Function_129(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77E5 / 30693
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

void Function_130(bool bParam0, int iParam1) //Position: 0x7894 / 30868
{
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_131(int iParam0) //Position: 0x78E9 / 30953
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_132(int iParam0) //Position: 0x78FF / 30975
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x7950 / 31056
{
	int iVar0;
	
	if (!Function_131(iParam0))
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

void Function_134(var uParam0, int iParam1) //Position: 0x797D / 31101
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x798E / 31118
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x79A8 / 31144
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x79B9 / 31161
{
	struct<8> Var0;
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_146(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_147(bParam0))
	{
		Function_88(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_128();
			}
		}
		Function_140(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_139() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_139() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_138(&Var0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_138(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7B15 / 31509
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
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_139() //Position: 0x7BA0 / 31648
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_140(bool bParam0) //Position: 0x7BCD / 31693
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
			if (Function_144(bParam0, Function_145(bVar24)))
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
			if (Function_144(bParam0, Function_145(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_143(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_142(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_141(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_141(int iParam0) //Position: 0x7D7D / 32125
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

void Function_142(char* cParam0, bool bParam1) //Position: 0x7DD4 / 32212
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

var Function_143(int iParam0) //Position: 0x7DF9 / 32249
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

bool Function_144(bool bParam0, bool bParam1) //Position: 0x7E4F / 32335
{
	int iVar0;
	
	if (!Function_131(bParam0))
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

bool Function_145(bool bParam0) //Position: 0x7EAE / 32430
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_146(int iParam0) //Position: 0x7EBA / 32442
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_147(int iParam0) //Position: 0x7ED6 / 32470
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_148() //Position: 0x7F28 / 32552
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_149(int iParam0, int iParam1) //Position: 0x7F58 / 32600
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_150(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7FCD / 32717
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x8052 / 32850
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_152(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x80C5 / 32965
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_153(int iParam0) //Position: 0x8120 / 33056
{
	var uVar0;
	var uVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_160(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_160(&Global_26200[iParam014] + 88, 0);
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
			Function_88(468, 1, 0, 0);
			Function_87(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_138("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_122(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_137(14, 1, 0, 0, 0);
				Function_154(14, 1, 0, 0, 0);
			}
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_128();
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
			Function_138("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_88(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_87(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_154(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x83E0 / 33760
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_146(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!&bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_138(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_144(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_130(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_140(bParam0);
		if (StackVal && !Function_14(((((!Function_139() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_139() || Global_6623) || Global_6635) || Global_6627), 1))
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
			Function_156();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_155(3, bParam1);
				break;
			
			case 0x00000005:
				Function_155(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_155(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_155(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_155(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_155(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_155(int iParam0, bool bParam1) //Position: 0x867F / 34431
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

void Function_156() //Position: 0x86EE / 34542
{
	if (Function_131(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_159(Global_42827);
			(&Global_42827 + 8) = Function_157(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_159(Global_42827);
			*(&Global_42827 + 8) = Function_157(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_157(int iParam0, int iParam1) //Position: 0x876E / 34670
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
					if (Function_158(13) && iVar14)
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
					if (Function_158(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(23) && iVar15)
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
					if (Function_158(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_158(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_158(27) && iVar16)
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
					if (Function_158(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(49) && iVar13)
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
					if (Function_158(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_158(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_158(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_158(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_158(15) && iVar17)
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

int Function_158(int iParam0) //Position: 0x93D1 / 37841
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_159(int iParam0) //Position: 0x93E6 / 37862
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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

void Function_160(var uParam0, int iParam1) //Position: 0x9435 / 37941
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

void Function_161(bool bParam0, bool bParam1, int iParam2) //Position: 0x948D / 38029
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_162(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_166(bParam0, 0, 0);
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

bool Function_162(int iParam0, int iParam1) //Position: 0x9500 / 38144
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_163(int iParam0) //Position: 0x9514 / 38164
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_165(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_136(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_88(473, 1, 0, 0);
		iVar0 = Function_164(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_88(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_88(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_88(476, 1, 0, 0);
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
		Function_87(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_87(7, 30);
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

var Function_164(int iParam0) //Position: 0x9605 / 38405
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_84(iParam0))
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

bool Function_165(var uParam0, int iParam1) //Position: 0x965D / 38493
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_166(bool bParam0, bool bParam1, int iParam2) //Position: 0x967A / 38522
{
	if (!Function_167(bParam0))
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

bool Function_167(int iParam0) //Position: 0x96D4 / 38612
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_168(bool bParam0) //Position: 0x96E6 / 38630
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

void Function_169(struct<185> Param0) //Position: 0x971A / 38682
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
			Function_170(4, 0, 0);
		}
	}
	return;
}

void Function_170(bool bParam0, var uParam1, int iParam2) //Position: 0x9785 / 38789
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
		Function_171(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_171(bool bParam0, bool bParam1, bool bParam2) //Position: 0x986F / 39023
{
	int iVar0;
	
	Function_173(bParam0);
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
	Function_172();
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

void Function_172() //Position: 0x99EE / 39406
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_173(int iParam0) //Position: 0x99FA / 39418
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

void Function_174(int iParam0) //Position: 0x9A40 / 39488
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_175(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_175(struct<2>[] Param0, int iParam1) //Position: 0x9A68 / 39528
{
	if (Function_177(&(Param0[iParam12]), 4))
	{
		if (Function_177(&(Param0[iParam12]), 1))
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
			Function_176(&(Param0[iParam12]), 1);
			Function_176(&(Param0[iParam12]), 2);
			Function_176(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_176(struct<13> Param0) //Position: 0x9BB3 / 39859
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_177(struct<13> Param0) //Position: 0x9BD0 / 39888
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178() //Position: 0x9BEE / 39918
{
	Function_179();
	return;
}

void Function_179() //Position: 0x9BF7 / 39927
{
	Function_174(&iLocal_4 + 8);
	Function_180(&Global_11146, &Global_12992, 1, 0);
	Function_180(&Global_11146, &Global_12992, 2, 0);
	Function_180(&Global_11146, &Global_12992, 3, 0);
	Function_180(&Global_11146, &Global_12992, 4, 0);
	Function_180(&Global_11146, &Global_12992, 5, 0);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_180(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9C41 / 40001
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_187(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_187(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_187(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_186(&(Param0[iVar02]), 8);
	}
	Function_186(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_185(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_181(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_181(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x9CE9 / 40169
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_184(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_183(Global_43790), Function_182(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_187(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_187(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_184(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_183(Global_43790), Function_182(Global_43790), false, 0);
	}
}

int Function_182(int iParam0) //Position: 0x9E4F / 40527
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

int Function_183(int iParam0) //Position: 0x9E7A / 40570
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

void Function_184(var uParam0, int iParam1) //Position: 0x9EAE / 40622
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_185(int iParam0) //Position: 0x9EBF / 40639
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

void Function_186(var uParam0, int iParam1) //Position: 0x9F68 / 40808
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_187(int iParam0, int iParam1) //Position: 0x9F82 / 40834
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_188(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x9F9F / 40863
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

struct<8> Function_189() //Position: 0xA0BE / 41150
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_190(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA0C8 / 41160
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
		Function_192(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_191(&Global_15402[iParam014] + 8);
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

void Function_191(int iParam0) //Position: 0xA40A / 41994
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

void Function_192(bool bParam0) //Position: 0xA43D / 42045
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&bParam0);
	return;
}

void Function_193(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0xA454 / 42068
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_219());
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
	Function_218();
	CLEAR_PRINTED_OBJECTIVE();
	Function_217();
	Function_215(0);
	Function_214();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_213();
	Function_212();
	Function_218();
	ENABLE_JOURNAL_REPLAY(1);
	Function_211(1);
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
		Function_210(&Global_54076);
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
	Function_207(Global_42825);
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
	Function_206();
	Function_233(1178687);
	Function_231(33039);
	Function_205(0x218003f);
	Function_204(4194560);
	Function_203();
	Function_202();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_199(0, 1, 1);
	}
	else
	{
		Function_199(0, 1, 1);
	}
	Function_198();
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
	Function_194();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_194() //Position: 0xA660 / 42592
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
		if (Function_197() > 3)
		{
			bVar0 *= 2;
		}
		Function_195(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA6B7 / 42679
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_196(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_196(bool bParam0) //Position: 0xA707 / 42759
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_197() //Position: 0xA730 / 42800
{
	return Global_21369.f_248;
}

void Function_198() //Position: 0xA73B / 42811
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_135(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_199(int iParam0, bool bParam1, int iParam2) //Position: 0xA765 / 42853
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
		if (Function_84(Global_43789))
		{
			Function_136(&(Global_43791[Global_43789]), 131072);
			Function_135(&(Global_43791[Global_43789]), 2097152);
			Function_200(Global_43789);
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
				if (Function_165(&(Global_43791[iVar0]), 4) || Function_165(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_135(&(Global_43791[iVar0]), 2097155);
					Function_136(&(Global_43791[iVar0]), 262144);
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

void Function_200(int iParam0) //Position: 0xA871 / 43121
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_201())
			{
				return;
			}
		}
		if (!Function_165(&(Global_43791[iParam0]), 2048))
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

bool Function_201() //Position: 0xA8F0 / 43248
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_165(&(Global_43791[iVar0]), 4) || Function_165(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_202() //Position: 0xA959 / 43353
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

void Function_203() //Position: 0xA97F / 43391
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

void Function_204(int iParam0) //Position: 0xA9A5 / 43429
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_205(var uParam0) //Position: 0xA9C2 / 43458
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

void Function_206() //Position: 0xA9D5 / 43477
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

void Function_207(int iParam0) //Position: 0xAA4D / 43597
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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
		Function_208(78, 1, 1);
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

int Function_208(bool bParam0, bool bParam1, int iParam2) //Position: 0xAB83 / 43907
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_209(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_209(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_209(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_209(bool bParam0) //Position: 0xABD1 / 43985
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

void Function_210(int iParam0) //Position: 0xACC5 / 44229
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

void Function_211(bool bParam0) //Position: 0xAD48 / 44360
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

void Function_212() //Position: 0xADBF / 44479
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

void Function_213() //Position: 0xAE03 / 44547
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

void Function_214() //Position: 0xAE47 / 44615
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_215(int iParam0) //Position: 0xAE5D / 44637
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_216())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_216() //Position: 0xAE9D / 44701
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

void Function_217() //Position: 0xAEC2 / 44738
{
	Global_15862 = 0.0f;
	return;
}

void Function_218() //Position: 0xAECC / 44748
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

int Function_219() //Position: 0xAEF7 / 44791
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_220(int iParam0) //Position: 0xAF14 / 44820
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&uVar1))
	{
		while (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&uVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_221() //Position: 0xAF7C / 44924
{
	if (IS_OBJECT_VALID(&Global_40058))
	{
		if (DECOR_CHECK_EXIST(&Global_40058, "crimeInMonitorVolume"))
		{
			DECOR_REMOVE(&Global_40058, "crimeInMonitorVolume");
		}
	}
	Global_40058 = "";
	return;
}

void Function_222() //Position: 0xAFD2 / 45010
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uLocal_1092))
	{
		DESTROY_OBJECT(&uLocal_1092);
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_OBJECT_VALID(&(uLocal_1078[iVar0])))
		{
			DESTROY_OBJECT(&(uLocal_1078[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_223(var uParam0, bool bParam1, bool bParam2) //Position: 0xB014 / 45076
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			SQUAD_LEAVE(&iVar1);
			if (&bParam2)
			{
				if (!Function_224(&iVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&iVar1);
				}
			}
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&iVar1);
				}
				else
				{
					RELEASE_ACTOR(&iVar1);
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

bool Function_224(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB09D / 45213
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, &fParam1, &fParam2, &iParam3, &iParam4, &iParam5);
}

void Function_225(int iParam0) //Position: 0xB0BD / 45245
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

void Function_226(int iParam0) //Position: 0xB0F2 / 45298
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
				RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xB133 / 45363
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
				SET_ALLOW_EXECUTE(&uVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_228(int iParam0) //Position: 0xB175 / 45429
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xB1AD / 45485
{
	if (bParam0)
	{
	}
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 0, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 2, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 3, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 4, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 5, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 6, bParam0);
	return;
}

void Function_230() //Position: 0xB1F7 / 45559
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_231(int iParam0) //Position: 0xB20C / 45580
{
	Function_232(&Global_43580, iParam0);
	return;
}

void Function_232(var uParam0, int iParam1) //Position: 0xB21A / 45594
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_233(bool bParam0) //Position: 0xB239 / 45625
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_234() //Position: 0xB266 / 45670
{
	if (IS_EXITFLAG_SET())
	{
		Function_550(bLocal_718);
		Function_546(StackVal, 4, &bLocal_996, &bLocal_718, Function_551(bLocal_718), Function_550(bLocal_718), 0);
		return 0;
	}
	Function_545(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718, iLocal_719, &bLocal_997, &bLocal_995, &bLocal_996);
	if (bLocal_718 == 99 && bLocal_718 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_550(bLocal_718);
			Function_546(StackVal, 1, &bLocal_996, &bLocal_718, Function_551(bLocal_718), Function_550(bLocal_718), 0);
			return 1;
		}
		if (Function_526(&Local_797, &uLocal_743, &uLocal_735, &uLocal_732, uLocal_998))
		{
			if (Function_524(&uLocal_735))
			{
				Function_550(bLocal_718);
				Function_546(StackVal, 5, &bLocal_996, &bLocal_718, Function_551(bLocal_718), Function_550(bLocal_718), 0);
				return 1;
			}
		}
		if (Global_6646 || Global_6647)
		{
			Function_550(bLocal_718);
			Function_546(StackVal, 2, &bLocal_996, &bLocal_718, Function_551(bLocal_718), Function_550(bLocal_718), 0);
			return 1;
		}
		Function_523();
	}
	switch (bLocal_718)
	{
		case 0x00000063:
			Function_466();
			break;
		
		case 0x00000000:
			Function_434();
			break;
		
		case 0x00000001:
			Function_399();
			break;
		
		case 0x00000002:
			Function_390();
			break;
		
		case 0x00000003:
			Function_385();
			break;
		
		case 0x00000004:
			Function_363();
			break;
		
		case 0x00000005:
			Function_295();
			break;
		
		case 0x00000065:
			Function_243();
			break;
		
		case 0x00000064:
			if (Function_242(&bLocal_996))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_241(&bLocal_718, &iLocal_719, &iLocal_720))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_995)
	{
		Function_240(&bLocal_995, 8);
		Function_1();
		return 0;
	}
	if (bLocal_996 && bLocal_718 == 100)
	{
		Function_550(bLocal_718);
		Function_546(StackVal, 5, &bLocal_996, &bLocal_718, Function_551(bLocal_718), Function_550(bLocal_718), 0);
	}
	if (bLocal_997)
	{
		Function_235(&bLocal_997, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_235(var uParam0, int iParam1) //Position: 0xB414 / 46100
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_236(&iParam1);
	uParam0 = 1;
	return;
}

void Function_236(int iParam0) //Position: 0xB439 / 46137
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_239("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_238(2) || Function_238(8)) || Function_238(9)) || Function_238(10))
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
		Function_239("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_239("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_239("");
	}
	else if (iParam0 == 8)
	{
		Function_237();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_237();
	}
	return;
}

void Function_237() //Position: 0xB530 / 46384
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_238(int iParam0) //Position: 0xB53C / 46396
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

void Function_239(char* cParam0) //Position: 0xB572 / 46450
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_240(var uParam0, int iParam1) //Position: 0xB5DE / 46558
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_236(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_241(var uParam0, var uParam1, int iParam2) //Position: 0xB603 / 46595
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

bool Function_242(int iParam0) //Position: 0xB64C / 46668
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_243() //Position: 0xB660 / 46688
{
	if (iLocal_719 < 4 && iLocal_719 > 105)
	{
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_230();
			Function_293(&iLocal_1100);
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			if (Function_246("$/cutscene/MERCHANT02_END_seq/MERCHANT02_END_seq", &iLocal_720, &Local_472, &bLocal_718, 55104, 54293, 53949, 50447, 50048, 50041, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_244(1.0f);
				Function_199(0, 1, 1);
				iLocal_719 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_995 = true;
			}
			break;
	}
	return;
}

void Function_244(bool bParam0) //Position: 0xB720 / 46880
{
	Function_245(bParam0);
	return;
}

void Function_245(bool bParam0) //Position: 0xB72B / 46891
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

bool Function_246(int iParam0, int iParam1, struct<41> Param2) //Position: 0xB748 / 46920
{
	if (!&bParam15)
	{
		Function_258(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_257(&Param2) || Param2.f_40 < 1))
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
				Function_293(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_256())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_255(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
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
					Function_255(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_252(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_252(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_250(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_255(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
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
						Function_245(1.0f);
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
						Function_248();
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
					Function_247(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_257(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_247(var uParam0, bool bParam1) //Position: 0xBDAA / 48554
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
		Function_206();
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

void Function_248() //Position: 0xBE79 / 48761
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_249();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_249() //Position: 0xBEBE / 48830
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_250(var uParam0, int iParam1) //Position: 0xBED0 / 48848
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
			if ((&iVar3 == &Global_54076 && !Function_251(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_251(int iParam0) //Position: 0xBF62 / 48994
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

float Function_252(vector3 vParam0) //Position: 0xBF93 / 49043
{
	if (Function_254(&vParam0))
	{
		if (Function_253(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_253(int iParam0) //Position: 0xC0A0 / 49312
{
	return Function_14(iParam0, 2);
}

bool Function_254(int iParam0) //Position: 0xC0AE / 49326
{
	return Function_14(iParam0, 1);
}

int Function_255(bool bParam0) //Position: 0xC0BC / 49340
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

bool Function_256() //Position: 0xC17F / 49535
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

bool Function_257(struct<37> Param0) //Position: 0xC1BC / 49596
{
	return Param0.f_36;
}

void Function_258(var uParam0, int iParam1) //Position: 0xC1C7 / 49607
{
	Function_259(&uParam0, &iParam1, 0);
	return;
}

void Function_259(int iParam0, bool bParam1, bool bParam2) //Position: 0xC1D7 / 49623
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
			Function_260(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_88(20, 1, 0, 0);
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
							Function_260(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_88(20, 1, 0, 0);
					iParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_260(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC34F / 49999
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

int Function_261() //Position: 0xC379 / 50041
{
	return 1;
}

int Function_262() //Position: 0xC380 / 50048
{
	switch (bLocal_718)
	{
		case 0x00000002:
			Function_264(1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_264(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000005:
			Function_264(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			DESTROY_ACTOR(&iLocal_4 + 400[02]);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_4 + 376[02], false);
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 376[02]);
			return 1;
			break;
		
		case 0x00000065:
			Function_264(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			return 1;
			break;
		
		default:
			Function_263();
			return 1;
			break;
	}
	return 0;
}

int Function_263() //Position: 0xC42B / 50219
{
	Function_264(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_264(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xC440 / 50240
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
		Function_88(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_230();
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
	Function_247(&iParam9, &bParam10);
}

int Function_265() //Position: 0xC50F / 50447
{
	if (DECOR_CHECK_EXIST(&Global_54076, "__EndGroundAttack"))
	{
		DECOR_REMOVE(&Global_54076, "__EndGroundAttack");
	}
	switch (bLocal_718)
	{
		case 0x00000063:
			Function_279(&iLocal_1062, &iLocal_4 + 688[2], 1, 1, 1);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_1062, &bLocal_1066, 1, 1, 0);
			SET_ACTOR_HEADING(&Global_54076, 160.0f, 1);
			if (!iLocal_1218)
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			else
			{
				iLocal_1218 = 0;
			}
			return 1;
			break;
		
		case 0x00000002:
			Function_278(&iLocal_1062, &iLocal_4 + 864[3], 0, 1, 1, 1);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			Function_278(&Global_54076, &iLocal_4 + 864[1], "", 0, 1, 1);
			if (iLocal_719 == 95)
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, true), 0);
			}
			Function_270(&iLocal_4 + 368, &iLocal_4 + 920, 1, 0, 1);
			Function_278(&bLocal_1068, &iLocal_4 + 864[5], 0, 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
			if (!IS_OBJECT_VALID(&iLocal_1229))
			{
				Function_268();
			}
			return 1;
			break;
		
		case 0x00000003:
			Function_278(&iLocal_1062, &iLocal_4 + 1008[2], 0, 1, 1, 1);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			Function_278(&bLocal_1068, &iLocal_4 + 1008[3], 0, 1, 1, 1);
			if (!IS_OBJECT_VALID(&uLocal_1096))
			{
				uLocal_1096 = DROP_ACCESSORY_ENUM(&bLocal_1068, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1096, GET_OBJECT_FROM_ACTOR(&bLocal_1068), 0);
				GIVE_OBJECT_TO_LAYOUT(&uLocal_1096, &iLocal_4);
			}
			uLocal_1098 = ATTACH_OBJECTS_USING_LOCATOR(&uLocal_1096, GET_OBJECT_FROM_ACTOR(&bLocal_1068), Function_54(), "hat", 4294967295);
			uLocal_1227 = GET_PROP_FROM_OBJECT(&uLocal_1096);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1068, 1);
			TASK_CLEAR(&bLocal_1068);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1068, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1068, "hat_toss", 0);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_1068, "hat_toss/hat_toss_idle");
			uLocal_1098 = ATTACH_OBJECTS_USING_LOCATOR(&uLocal_1227, &bLocal_1068, "wrist_r_attachment", "grab", 0);
			Function_278(&Global_54076, &iLocal_4 + 1008[1], 0, 1, 1, 1);
			Function_270(&iLocal_4 + 368, &iLocal_4 + 1048, 1, 0, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_278(&iLocal_1062, &iLocal_4 + 1136[2], 0, 1, 1, 1);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			Function_278(&bLocal_1068, &iLocal_4 + 1136[5], 0, 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
			DEEQUIP_ACCESSORY(&bLocal_1068, 0);
			Function_278(&Global_54076, &iLocal_4 + 1136[1], 0, 1, 1, 1);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			Function_270(&iLocal_4 + 368, &iLocal_4 + 1192, 1, 0, 1);
			if (IS_ATTACHMENT_VALID(&uLocal_1098))
			{
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1098);
			}
			if (IS_OBJECT_VALID(&uLocal_1096))
			{
				DESTROY_OBJECT(&uLocal_1096);
			}
			return 1;
			break;
		
		case 0x00000005:
			Function_278(&iLocal_1062, &iLocal_4 + 1280[3], 0, 1, 1, 1);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			Function_278(&Global_54076, &iLocal_4 + 1280[1], 0, 1, 1, 1);
			Function_270(&iLocal_4 + 368, &iLocal_4 + 1344, 1, 0, 1);
			Function_267(&iLocal_4 + 368);
			SET_DRAW_ACTOR(&bLocal_1068, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_278(&bLocal_1066, &iLocal_4 + 1432[4], 0, 1, 1, 1);
			SET_ACTOR_IN_VEHICLE(&iLocal_1062, &bLocal_1066, false);
			MEMORY_PREFER_RIDING(&iLocal_1062, true);
			Function_278(&Global_54076, &iLocal_4 + 1432[1], 0, 1, 1, 1);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			if (!iLocal_1218)
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			else
			{
				iLocal_1218 = 0;
			}
			return 1;
			break;
		
		default:
			Function_266();
			LOG_ERROR("unknown CUTSCENE_CUSTOM_SET_POSES");
			return 1;
			break;
	}
	return 0;
}

int Function_266() //Position: 0xC924 / 51492
{
	return 1;
}

void Function_267(var uParam0) //Position: 0xC92B / 51499
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	strcpy(&cVar0, "crowd_cheer/merchant02_react/react", 64);
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar36 = false;
		while (bVar36 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar37 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar36);
			if (IS_ACTOR_VALID(&uVar37))
			{
				RESET_ANIM_SET_FOR_ACTOR(&uVar37, 1);
				SET_ANIM_SET_FOR_ACTOR(&uVar37, "crowd_cheer", 0);
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				if (bVar36 <= 7)
				{
					cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
					itos(&cVar32, bVar36 + 1, 16);
					stradd(&cVar16, &cVar32, 64);
					TASK_ACTION_PERFORM(false, &cVar16);
				}
				else
				{
					cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
					itos(&cVar32, RAND_INT_RANGE(true, 7), 16);
					stradd(&cVar16, &cVar32, 64);
					TASK_ACTION_PERFORM(false, &cVar16);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&uVar37, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
			}
			bVar36++;
		}
	}
	return;
}

void Function_268() //Position: 0xCA11 / 51729
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	SET_ACTOR_FACE_STYLE(&iLocal_1062, 2);
	TASK_FACE_ACTOR(&iLocal_1062, &Global_54076, 1, 3212836864);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_1062, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_269(&bLocal_1271);
	uVar2 = Function_269(&bLocal_1271);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			bLocal_1169 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
			TASK_FACE_COORD(0, &uVar2, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
			TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
		}
		bVar0++;
	}
	SET_ENABLE_NAV_STICK_INPUT(0, 0);
	SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(0, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 5);
	AI_IGNORE_ACTOR(&Global_54076);
	SET_PLAYER_PERFECT_ACCURACY(&Global_54076, 1);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	SET_INFINITE_DEADEYE(0, 1);
	Function_229(0);
	fLocal_1180 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 4);
	fLocal_1181 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 8);
	Function_166(4, 1, 0);
	Function_166(8, 1, 0);
	_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 7, 1);
	_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 8, 1);
	iLocal_1229 = CREATE_EVENT_TRAP(Function_54(), 6, &iLocal_470);
	EVENT_TRAP_ON_PERPETRATOR(&iLocal_1229, GET_OBJECT_FROM_ACTOR(&Global_54076));
	if (IS_PHYSINST_VALID(&bLocal_1271 + 8))
	{
	}
	if (IS_OBJECT_VALID(&bLocal_1271))
	{
		iLocal_1267 = 1;
		CREATE_OBJECT_GLOW(StackVal, &bLocal_1271, 0f, Vector(0.0f, 0,4f, 0,2f), 1);
		if (!IS_BLIP_VALID(&bLocal_1271 + 24))
		{
			(&bLocal_1271 + 24) = ADD_BLIP_FOR_OBJECT(&bLocal_1271, 322, 0f, 2, 0);
			SET_BLIP_NAME(&bLocal_1271 + 24, "Merchant02_blip_skull");
		}
	}
	bLocal_1214 = true;
	Function_293(&iLocal_1136);
	iLocal_1266 = 0;
	return;
}

struct<8> Function_269(bool bParam0) //Position: 0xCBBB / 52155
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

void Function_270(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xCBE4 / 52196
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar5;
	var uVar7;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		if (iParam4 || bVar0 < 2)
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
				if (IS_OBJECT_VALID(&bVar2))
				{
					Function_277(&bVar2);
					uVar3 = Function_277(&bVar2);
					Function_276(&bVar2);
					uVar5 = Function_276(&bVar2);
					Function_269(&iLocal_4 + 864[2]);
					uVar7 = Function_269(&iLocal_4 + 864[2]);
					if (!bParam2)
					{
						bLocal_1169 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
						TASK_GO_TO_COORD(0, &uVar3, 1);
						TASK_FACE_COORD(0, &uVar7, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
						TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
						TASK_PRIORITY_SET(&uVar1, 2);
					}
					else if (!&bParam3)
					{
						Function_278(&uVar1, &bVar2, 0, 1, 1, 1);
						TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
						Function_275(&uVar1, bVar0);
					}
					else
					{
						TELEPORT_ACTOR(&uVar1, &uVar3, 1, 1, 1);
						Function_269(&iLocal_4 + 1528[2]);
						Function_272(StackVal, &uVar1, Function_269(&iLocal_4 + 1528[2]));
						TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
						Function_271(&uVar1, bVar0);
					}
				}
			}
		}
		bVar0++;
	}
}

void Function_271(var uParam0, bool bParam1) //Position: 0xCCF6 / 52470
{
	switch (bParam1)
	{
		case 0x00000000:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_right", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_right");
			break;
		
		case 0x00000001:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_callout_R", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_callout_R");
			break;
		
		case 0x00000002:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_pointer", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_pointer");
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_right", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_right");
			break;
		
		case 0x00000004:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_left", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_left");
			break;
		
		case 0x00000005:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_left", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_left");
			break;
		
		case 0x00000006:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_right", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_right");
			break;
		
		case 0x00000007:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_callout", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_callout");
			break;
		
		case 0x00000008:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_left", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_left");
			break;
	}
	return;
}

void Function_272(var uParam0, struct<2> Param1) //Position: 0xCF20 / 53024
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_273(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_273(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_273(var uParam0, struct<2> Param1) //Position: 0xCF5B / 53083
{
	struct<2> Var0;
	
	Function_274(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_274(int iParam0) //Position: 0xCFDC / 53212
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_275(var uParam0, bool bParam1) //Position: 0xCFEE / 53230
{
	switch ((bParam1 % 3))
	{
		case 0x00000000:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_idles", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_idles/idleA");
			break;
		
		case 0x00000001:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_idles", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_idles/idleB");
			break;
		
		case 0x00000002:
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "crowd_idles", 0);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "crowd_idles/idleC");
			break;
		
		default:
			LOG_ERROR("SETUP_STANDARD_CROWD_IDLES - invalid idle num");
			break;
	}
	return;
}

struct<8> Function_276(int iParam0) //Position: 0xD0F6 / 53494
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_277(bool bParam0) //Position: 0xD11F / 53535
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

void Function_278(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD18D / 53645
{
	iParam2 = &iParam2;
	Function_279(&bParam0, &uParam1, &iParam3, &iParam4, &iParam5);
}

void Function_279(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xD1AD / 53677
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

int Function_280() //Position: 0xD2BD / 53949
{
	switch (bLocal_718)
	{
		case 0x00000002:
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			return 1;
			break;
		
		case 0x00000004:
			if (IS_ATTACHMENT_VALID(&uLocal_1098))
			{
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1098);
			}
			if (IS_OBJECT_VALID(&uLocal_1096))
			{
				DESTROY_OBJECT(&uLocal_1096);
			}
			break;
		
		case 0x00000005:
			if (GET_DRAW_ACTOR(&bLocal_1068))
			{
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1068, 5, 0);
				SET_DRAW_ACTOR(&bLocal_1068, 0);
			}
			if (GET_TASK_STATUS(&bLocal_1068, 35) != 1)
			{
				Function_278(&bLocal_1068, &iLocal_4 + 1280[5], 0, 1, 1, 1);
				TASK_CLEAR(&bLocal_1068);
				TASK_POINT_GUN_AT_OBJECT(&bLocal_1068, &iLocal_4 + 1280[6], -1.0f, 1);
				TASK_PRIORITY_SET(&bLocal_1068, true);
			}
			break;
		
		case 0x00000065:
			SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 368);
			if (!iLocal_1223)
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					if (STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "WagonSpawn"))
					{
						ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
						Function_278(&bLocal_1066, &iLocal_4 + 1432[4], 0, 1, 1, 1);
						iLocal_1223 = 1;
						LOG_ERROR("WagonSpawn");
						return 1;
					}
				}
			}
			return 0;
			break;
		
		default:
			Function_281();
			LOG_ERROR("unknown CUTSCENE_CUSTOM_FIRSTSHOT");
			return 1;
			break;
	}
	return 0;
}

int Function_281() //Position: 0xD40E / 54286
{
	return 1;
}

int Function_282() //Position: 0xD415 / 54293
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	switch (bLocal_718)
	{
		case 0x00000002:
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1068, true);
			if (IS_ACTOR_VALID(&bLocal_1066))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1066))
				{
					uVar1 = GET_DRAFT_ACTOR(bVar0, &bLocal_1066);
					ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar1, true);
					bVar0++;
				}
			}
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			Function_284(1);
			return 1;
			break;
		
		case 0x00000005:
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1068, true);
			if (IS_ACTOR_VALID(&bLocal_1066))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1066))
				{
					uVar2 = GET_DRAFT_ACTOR(bVar0, &bLocal_1066);
					ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar2, true);
					bVar0++;
				}
			}
			Function_269(&iLocal_4 + 1280[3]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_269(&iLocal_4 + 1280[3]), 0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000065:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
			{
				uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar0);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar3, true);
				bVar0++;
			}
			if (IS_ACTOR_VALID(&bLocal_1066))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1066))
				{
					uVar4 = GET_DRAFT_ACTOR(bVar0, &bLocal_1066);
					ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar4, true);
					bVar0++;
				}
			}
			CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_1068);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1068, 1, 1);
			return 1;
			break;
		
		default:
			Function_283();
			if (IS_ACTOR_VALID(&bLocal_1066))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1066))
				{
					uVar5 = GET_DRAFT_ACTOR(bVar0, &bLocal_1066);
					ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar5, true);
					bVar0++;
				}
			}
			DECOR_SET_BOOL(&Global_54076, "__EndGroundAttack", 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
	}
	return 0;
}

int Function_283() //Position: 0xD5D5 / 54741
{
	return 1;
}

void Function_284(bool bParam0) //Position: 0xD5DC / 54748
{
	if (iLocal_1224)
	{
		return;
	}
	if (IS_OBJECT_VALID(&bLocal_1271))
	{
		if (!bParam0)
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1231))
			{
				EVENT_TRAP_CLEAR_EVENTS(&uLocal_1231);
				Function_239("Merchant02_property_destruction");
				bLocal_996 = true;
			}
		}
	}
	if (!IS_PHYSINST_VALID(&bLocal_1271 + 8))
	{
		Function_269(&iLocal_4 + 1528[2]);
		*(&bLocal_1271 + 8) = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_269(&iLocal_4 + 1528[2]), 2.0f, "skullcattle03", 1);
		if (IS_PHYSINST_VALID(&bLocal_1271 + 8))
		{
			return;
		}
		return;
	}
	if (!IS_OBJECT_VALID(&bLocal_1271))
	{
		bLocal_1271 = GET_OBJECT_FROM_PHYSINST(&bLocal_1271 + 8);
		if (IS_OBJECT_VALID(&bLocal_1271))
		{
			if (!IS_OBJECT_VALID(&uLocal_1231))
			{
				*(&bLocal_1271 + 16) = _GET_OBJECT_ATTACHMENT(&bLocal_1271);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1271, GET_OBJECT_FROM_ACTOR(&Global_54076), 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&bLocal_1271, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(&bLocal_1271, 0);
				Function_285(&bLocal_1271);
				uLocal_1231 = CREATE_EVENT_TRAP(Function_54(), 5, &bLocal_1271);
				EVENT_TRAP_ON_TARGET(&uLocal_1231, &bLocal_1271);
			}
		}
		else
		{
			return;
		}
	}
	if (!iLocal_1267 && bParam0)
	{
		Function_268();
	}
	return;
}

void Function_285(bool bParam0) //Position: 0xD709 / 55049
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

int Function_286() //Position: 0xD740 / 55104
{
	switch (bLocal_718)
	{
		case 0x00000063:
			Function_290(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_269(&iLocal_4 + 688[0]);
			Function_288(StackVal, &iLocal_470, Function_269(&iLocal_4 + 688[0]), &iLocal_4 + 520[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_290(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_269(&iLocal_4 + 864[0]);
			Function_288(StackVal, &iLocal_470, Function_269(&iLocal_4 + 864[0]), &iLocal_4 + 520[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			Function_290(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_269(&iLocal_4 + 1008[0]);
			Function_288(StackVal, &iLocal_470, Function_269(&iLocal_4 + 1008[0]), &iLocal_4 + 520[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_290(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_269(&iLocal_4 + 1136[0]);
			Function_288(StackVal, &iLocal_470, Function_269(&iLocal_4 + 1136[0]), &iLocal_4 + 520[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000005:
			Function_290(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_269(&iLocal_4 + 1280[0]);
			Function_288(StackVal, &iLocal_470, Function_269(&iLocal_4 + 1280[0]), &iLocal_4 + 520[4], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			Function_290(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_269(&iLocal_4 + 1432[0]);
			Function_288(StackVal, &iLocal_470, Function_269(&iLocal_4 + 1432[0]), &iLocal_4 + 520[5], 0, 0, 0, 0, 1, 1);
			TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
			return 1;
			break;
		
		default:
			Function_287();
			LOG_ERROR("unknown CUTSCENE_CUSTOM_SETUP");
			return 1;
			break;
	}
	return 0;
}

int Function_287() //Position: 0xD91A / 55578
{
	bool bVar0;
	
	Function_290(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2,802597E-45f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_288(StackVal, &Global_10996, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_288(int iParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xD980 / 55680
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &iParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_289(&uVar1, &iParam0);
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

void Function_289(var uParam0, float fParam1) //Position: 0xDC20 / 56352
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

void Function_290(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xDCA2 / 56482
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_230();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_50();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, false);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
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
				Function_274(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_274(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_88(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_292()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_292()));
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
	if (Function_291(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_168(0x4000000);
	}
	if (Function_291(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_168(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_291(int iParam0) //Position: 0xDF54 / 57172
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_292() //Position: 0xDF70 / 57200
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

void Function_293(int iParam0) //Position: 0xDFFE / 57342
{
	Function_294(&iParam0, 0.0f);
	return;
}

void Function_294(vector3 vParam0) //Position: 0xE00B / 57355
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_295() //Position: 0xE030 / 57392
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_719 < 4 && iLocal_719 > 105)
	{
		Function_269(&iLocal_4 + 1432[0]);
		Function_359(StackVal, "$/cutscene/MERCHANT02_END_seq/MERCHANT02_END_seq", &uLocal_999, Function_269(&iLocal_4 + 1432[0]), 70005, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		if (!IS_ACTOR_ALIVE(&bLocal_1068))
		{
			Function_230();
			Function_239("Merchant02_killed_aquila");
			bLocal_996 = true;
		}
		if (iLocal_1221 == 0)
		{
			if (Function_358())
			{
				Function_230();
				HUD_ENABLE(0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				CANCEL_DEADEYE();
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1068, "Merchant02_shothand", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1068, "Merchant02_shothand");
				Function_357();
				Function_356(&iLocal_4 + 368, 1);
				uLocal_1251 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1251, "MERCHANT02_CHEER_MASTER", Global_54078);
				Function_355(&iLocal_1148);
				iLocal_1221 = 1;
				Function_226(&iLocal_4 + 368);
				Function_270(&iLocal_4 + 368, &iLocal_4 + 1344, 0, 0, 1);
				Function_354(&iLocal_1148);
				iLocal_719 = 106;
			}
		}
		Function_352();
		Function_349(&bLocal_1068);
		Function_348();
		Function_343(Function_344(&bVar0, &uLocal_1168, 1, 0x40c00000, 0));
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_339(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_734 = Global_46760[1];
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ENABLE_NAV_STICK_INPUT(0, 0);
			SET_PLAYER_CONTROL_CONFIG(0, 5);
			Function_229(0);
			if (iLocal_979[4] == 0)
			{
				Function_338(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_PLAYER_PERFECT_ACCURACY(&Global_54076, 1);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				SET_INFINITE_DEADEYE(0, 1);
				fLocal_1180 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 4);
				fLocal_1181 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 8);
				Function_166(4, 1, 0);
				Function_166(8, 1, 0);
				_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 7, 1);
				_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 8, 1);
				bLocal_1214 = true;
				SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
				Function_168(49165);
				Function_336(9);
				Function_199(1, 0, 1);
				Function_278(&Global_54076, &iLocal_4 + 1280[1], 0, 1, 1, 1);
				Function_278(&iLocal_1062, &iLocal_4 + 1280[3], 0, 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
				Function_278(&bLocal_1066, &iLocal_4 + 1528[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
				Function_335();
				Function_269(&iLocal_4 + 1528[1]);
				Function_276(&iLocal_4 + 1528[1]);
				uLocal_1092 = CREATE_PROP_IN_LAYOUT(&iLocal_4, Function_54(), "p_gen_tableSnakeOil01x", Function_269(&iLocal_4 + 1528[1]), Function_276(&iLocal_4 + 1528[1]), 1);
				Function_220(&iLocal_470);
				Function_220(&iLocal_4);
				Function_218();
				iLocal_719 = 1;
			}
			else
			{
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_334(bLocal_734)) && Function_165(&(Global_43791[bLocal_734]), 8))
			{
				Function_321();
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
				{
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar1);
					if (IS_ACTOR_VALID(&iVar2))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
						Function_278(&iVar2, &iLocal_4 + 1352[bVar1], 0, 1, 1, 1);
						TASK_STAND_STILL(&iVar2, -1.0f, 0, 0);
					}
					bVar1++;
				}
				Function_278(&iLocal_1062, &iLocal_4 + 1280[3], 0, 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
				TASK_CLEAR(&bLocal_1068);
				Function_278(&bLocal_1068, &iLocal_4 + 1280[5], 0, 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
				Function_320(&(Local_797[315]));
				Function_285(&bLocal_1068);
				SET_ACTOR_FACTION(&bLocal_1068, 21);
				SET_ACTOR_HEALTH(&bLocal_1068, GET_ACTOR_MAX_HEALTH(&bLocal_1068));
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1068, 5, 1);
				TASK_POINT_GUN_AT_OBJECT(&bLocal_1068, &Global_54076, -1.0f, 1);
				TASK_PRIORITY_SET(&bLocal_1068, true);
				DECOR_REMOVE(&bLocal_1068, "Aguila");
				DECOR_SET_BOOL(&bLocal_1068, "CanBeLasso", 0);
				DEEQUIP_ACCESSORY(&bLocal_1068, 0);
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718) && !Global_99145)
			{
				Function_269(&iLocal_4 + 1488[2]);
				if (Function_359(StackVal, "$/cutscene/MERCHANT02_CS03_C_P1/MERCHANT02_CS03_C_P1", &uLocal_999, Function_269(&iLocal_4 + 1488[2]), 62181, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
				{
					uLocal_1253 = GET_SOUND_ID();
					Function_269(&iLocal_4 + 1648[0]);
					PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
					SET_ACTOR_HEALTH(&bLocal_1068, GET_ACTOR_MAX_HEALTH(&bLocal_1068));
					iLocal_719 = 3;
				}
			}
			else
			{
				Function_265();
				uLocal_1253 = GET_SOUND_ID();
				Function_269(&iLocal_4 + 1648[0]);
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
				Function_278(&bLocal_1068, &iLocal_4 + 1280[5], 0, 1, 1, 1);
				TASK_CLEAR(&bLocal_1068);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1068, 5, 0);
				TASK_POINT_GUN_AT_OBJECT(&bLocal_1068, &iLocal_4 + 1280[6], -1.0f, 1);
				TASK_PRIORITY_SET(&bLocal_1068, true);
				SET_ACTOR_HEALTH(&bLocal_1068, GET_ACTOR_MAX_HEALTH(&bLocal_1068));
				PRINTSTRING("TASK_POINT_GUN_AT_OBJECT - GID_POST_STREAMING(no cutscene)");
				PRINTNL();
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_246("$/cutscene/MERCHANT02_CS03_C_P1/MERCHANT02_CS03_C_P1", &iLocal_720, &Local_472, &bLocal_718, 55104, 54293, 53949, 50447, 50048, 62109, 0, 1, 1, 2, 2, 0, 1))
			{
				if (!GET_DRAW_ACTOR(&bLocal_1068))
				{
					SET_DRAW_ACTOR(&bLocal_1068, 1);
				}
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000004:
			Function_312(bLocal_718);
			Function_303(StackVal, Function_312(bLocal_718), bLocal_718, Global_46736[1], Function_311(bLocal_718), 0);
			Function_244(1.0f);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(&Global_54076, 4, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			SET_INFINITE_DEADEYE(0, 1);
			CLEAR_LAST_HIT(&bLocal_1068);
			SET_ALLOW_DEADEYE_LOCKS(&bLocal_1068, false);
			if (!GET_DRAW_ACTOR(&bLocal_1068))
			{
				SET_DRAW_ACTOR(&bLocal_1068, 1);
			}
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000007:
			Function_302("Merchant02_disarm_aquila", 7,5f, 1, 2, 0, 0, 0, 0);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1068)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1068, 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1068), "Merchant02_blip_aquila");
			}
			iLocal_1225 = 15;
			iLocal_719 = 8;
			break;
		
		case 0x00000008:
			Function_296();
			break;
		
		case 0x0000006A:
			iLocal_979[5] = 1;
			if (IS_SOUND_ID_VALID(&uLocal_1253))
			{
				STOP_SOUND(&uLocal_1253);
			}
			if (IS_SOUND_ID_VALID(&uLocal_1251))
			{
				STOP_SOUND(&uLocal_1251);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 368))
			{
				Function_228(&iLocal_4 + 368);
				Function_227(&iLocal_4 + 368, 1);
				Function_226(&iLocal_4 + 368);
				Function_225(&iLocal_4 + 368);
				AI_GLOBAL_CLEAR_ALL_DANGER();
			}
			if (IS_ACTOR_VALID(&bLocal_1068))
			{
				RELEASE_ACTOR(&bLocal_1068);
			}
			_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 7, 0);
			_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 8, 0);
			ACTOR_SET_WEAPON_AMMO(&Global_54076, 4, fLocal_1180);
			ACTOR_SET_WEAPON_AMMO(&Global_54076, 8, fLocal_1181);
			bLocal_1214 = false;
			bLocal_718 = 101;
			iLocal_719 = 0;
			break;
	}
	return;
}

int Function_296() //Position: 0xE862 / 59490
{
	int iVar0;
	
	switch (iLocal_1225)
	{
		case 0x00000000:
			Function_138("Merchant02_deadeye_01a", 10.0f, 1, 0, 2, 1, 0);
			Function_293(&iLocal_1104);
			iLocal_1225 = 6;
			break;
		
		case 0x00000006:
			if (Function_252(&iLocal_1104) < (10,5f / 2.0f))
			{
				Function_302("Merchant02_wait_for_hat", 5.0f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_1104);
				iLocal_1225 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_252(&iLocal_1104) < 5.0f)
			{
				iLocal_1225 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_301(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_298();
				}
				else
				{
					Function_302("Merchant02_draw_gun", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_1225 = 9;
					return 1;
				}
			}
			iLocal_1225 = 9;
			return 1;
			break;
		
		case 0x00000009:
			if (!IS_PLAYER_DEADEYE(0))
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_138("Merchant02_deadeye_01b", 10.0f, 1, 0, 2, 1, 0);
					Function_293(&iLocal_1104);
				}
			}
			else
			{
				iLocal_1225 = 10;
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000F:
			Function_138("Merchant02_deadeye_02", 10.0f, 1, 0, 2, 1, 0);
			Function_293(&iLocal_1104);
			iLocal_1225 = 16;
			break;
		
		case 0x00000010:
			if (Function_252(&iLocal_1104) < 10,5f)
			{
				Function_138("Merchant02_deadeye_03", 10.0f, 1, 0, 2, 1, 0);
				iLocal_1225 = 17;
			}
			break;
		
		case 0x00000011:
			if (Function_252(&iLocal_1104) < 4,5f || GET_LAST_ATTACKER(&bLocal_1068) != &Global_54076)
			{
				Function_297(&bLocal_1068);
				iVar0 = Function_297(&bLocal_1068);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1068, 15, true);
				TASK_SHOOT_FROM_POSITION(&bLocal_1068, &Global_54076, &iVar0);
				Function_354(&iLocal_1104);
				iLocal_1225 = 18;
			}
			break;
		
		case 0x00000012:
			break;
	}
	return 0;
}

struct<8> Function_297(int iParam0) //Position: 0xEA8E / 60046
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

void Function_298() //Position: 0xEAFA / 60154
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_remJonDraw", "Merchant02_remJonDraw", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_299(int iParam0) //Position: 0xEB4D / 60237
{
	Function_300(0, &Global_54076, iParam0, 0);
	Function_300(1, &iLocal_1062, iParam0, 0);
	Function_300(2, &iLocal_4 + 232[12], iParam0, 0);
	Function_300(3, &iLocal_4 + 232[02], iParam0, 0);
	Function_300(4, &iLocal_4 + 232[62], iParam0, 0);
	Function_300(5, &bLocal_1068, iParam0, 0);
	return;
}

void Function_300(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0xEBA1 / 60321
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_145(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

bool Function_301(bool bParam0) //Position: 0xEBC9 / 60361
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

void Function_302(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xEC0F / 60431
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

void Function_303(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xECA4 / 60580
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
	if (iParam2 != Global_53524.f_48 && !Function_310())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_309(0);
	Function_308();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_95())
	{
		Function_306(iParam2);
	}
	Function_305(uParam3, iVar0, iVar1);
	Function_304();
}

void Function_304() //Position: 0xED4D / 60749
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

void Function_305(int iParam0, bool bParam1, bool bParam2) //Position: 0xED8E / 60814
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
	if (Function_84(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_306(bool bParam0) //Position: 0xEEF7 / 61175
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_307() };
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

struct<16> Function_307() //Position: 0xF08F / 61583
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

void Function_308() //Position: 0xF0D5 / 61653
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_309(bool bParam0) //Position: 0xF0F9 / 61689
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

bool Function_310() //Position: 0xF128 / 61736
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_311(int iParam0) //Position: 0xF143 / 61763
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 688[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 736[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 864[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 1008[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 1136[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&iLocal_4 + 1280[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1432[0]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 1432[0]);
}

struct<8> Function_312(int iParam0) //Position: 0xF1F0 / 61936
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_269(&iLocal_4 + 688[0]);
			return StackVal, Function_269(&iLocal_4 + 688[0]);
			break;
		
		case 0x00000001:
			Function_269(&iLocal_4 + 736[0]);
			return StackVal, Function_269(&iLocal_4 + 736[0]);
			break;
		
		case 0x00000002:
			Function_269(&iLocal_4 + 864[0]);
			return StackVal, Function_269(&iLocal_4 + 864[0]);
			break;
		
		case 0x00000003:
			Function_269(&iLocal_4 + 1008[0]);
			return StackVal, Function_269(&iLocal_4 + 1008[0]);
			break;
		
		case 0x00000004:
			Function_269(&iLocal_4 + 1136[0]);
			return StackVal, Function_269(&iLocal_4 + 1136[0]);
			break;
		
		case 0x00000005:
			Function_269(&iLocal_4 + 1280[0]);
			return StackVal, Function_269(&iLocal_4 + 1280[0]);
			break;
		
		default:
			Function_269(&iLocal_4 + 1432[0]);
			return StackVal, Function_269(&iLocal_4 + 1432[0]);
			break;
	}
	Function_269(&iLocal_4 + 1432[0]);
	return StackVal, Function_269(&iLocal_4 + 1432[0]);
}

int Function_313() //Position: 0xF29D / 62109
{
	switch (bLocal_718)
	{
		case 0x00000063:
			iLocal_1218 = 1;
			return 1;
			break;
		
		case 0x00000065:
			Function_233(49165);
			Function_231(9);
			Function_199(1, 0, 1);
			iLocal_1218 = 1;
			return 1;
			break;
		
		default:
			Function_261();
			return 1;
			break;
	}
	return 0;
}

int Function_314() //Position: 0xF2E5 / 62181
{
	bool bVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	if (Function_317())
	{
		if (!IS_ACTOR_ALIVE(&iLocal_4 + 400[02]))
		{
			Function_316();
			TASK_STAND_STILL(&iLocal_4 + 400[02], -1.0f, 0, 0);
			bVar0 = false;
			while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar3))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
					if (Function_315(iVar5))
					{
						if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 400[02]))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 400[02]);
						}
					}
				}
				bVar0++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_315(int iParam0) //Position: 0xF367 / 62311
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_316() //Position: 0xF37E / 62334
{
	*(&iLocal_4 + 400[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 611, Vector(-3249,586f, 15,95999f, 2719,999f), Vector(0.0f, 114,265f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 400[02], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 400[02], 4, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 400[02], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 400[02], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 400[02], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 400[02], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 400[02]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 400[02]);
	return;
}

bool Function_317() //Position: 0xF422 / 62498
{
	bool bVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar3))
		{
			iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (Function_315(iVar5))
			{
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[22]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[22]);
				}
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[52]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[52]);
				}
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[62]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[62]);
				}
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[02]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[02]);
				}
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[12]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[12]);
				}
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[32]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[32]);
				}
				if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[42]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[42]);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 232[72]))
				{
					if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 232[72]))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 232[72]);
					}
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_318(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0xF566 / 62822
{
	if (Function_319(&uParam0) == iParam6 || Function_310())
	{
		return 1;
	}
	return 0;
}

int Function_319(int iParam0) //Position: 0xF585 / 62853
{
	if (Function_257(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_320(struct<69> Param0) //Position: 0xF59E / 62878
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

void Function_321() //Position: 0xF65E / 63070
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iLocal_4 + 368) && Function_165(&(Global_43791[Global_46760[1]]), 8))
	{
		Function_333();
		if (bLocal_718 > 3)
		{
			if (IS_ACTOR_VALID(&iLocal_4 + 232[72]))
			{
				DESTROY_ACTOR(&iLocal_4 + 232[72]);
			}
		}
		if (!iLocal_1219)
		{
			Function_331(&iLocal_4 + 232[22], &uLocal_1000);
			Function_331(&iLocal_4 + 232[52], &uLocal_1000);
			Function_331(&iLocal_4 + 232[62], &uLocal_1000);
			iLocal_1219 = 1;
		}
		Function_330();
		bLocal_1068 = &iLocal_4 + 376[02];
		if (bLocal_718 == 1)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar1, 2);
				TASK_CLEAR(&uVar1);
				TASK_WANDER(&uVar1, -1.0f);
				bVar0++;
			}
			TASK_CLEAR(&iLocal_4 + 232[12]);
			Function_279(&iLocal_4 + 232[12], &iLocal_4 + 784[1], 1, 1, 1);
			Function_329(&iLocal_4 + 232[12], &iLocal_1062);
			TASK_STAND_STILL(&iLocal_4 + 232[12], -1.0f, 0, 0);
			Function_275(&iLocal_4 + 232[12], 1);
			TASK_CLEAR(&iLocal_4 + 232[22]);
			Function_279(&iLocal_4 + 232[22], &iLocal_4 + 784[2], 1, 1, 1);
			Function_329(&iLocal_4 + 232[22], &iLocal_1062);
			TASK_STAND_STILL(&iLocal_4 + 232[22], -1.0f, 0, 0);
			Function_275(&iLocal_4 + 232[22], 3);
			TASK_WANDER(&bLocal_1068, -1.0f);
		}
		if (bLocal_718 == 4)
		{
			Function_270(&iLocal_4 + 368, &iLocal_4 + 1192, 1, 0, 1);
		}
		Function_227(&iLocal_4 + 368, 0);
		Function_325(&(Local_797[215]), &iLocal_4 + 368, "RWCrowd", 0, 0x5f5e100, 1);
		Function_322(&(Local_797[215]), 256, 1);
		Function_325(&(Local_797[315]), &bLocal_1068, "RWCrowd", 0, 0x5f5e100, 1);
		Function_322(&(Local_797[315]), 256, 1);
	}
	return;
}

void Function_322(var uParam0, int iParam1, int iParam2) //Position: 0xF848 / 63560
{
	if (iParam1 != 100000000)
	{
		Function_324(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_323(&uParam0, &iParam2);
	}
	return;
}

void Function_323(struct<69> Param0) //Position: 0xF86F / 63599
{
	Param0.f_68 = 0;
	Function_324(&Param0, 2, &bParam1);
	Function_324(&Param0, 4, &bParam1);
	Function_324(&Param0, 8, &bParam1);
	Function_324(&Param0, 16, &bParam1);
	Function_324(&Param0, 32, &bParam1);
	Function_324(&Param0, 64, &bParam1);
	Function_324(&Param0, 128, &bParam1);
	Function_324(&Param0, 256, &bParam1);
	Function_324(&Param0, 512, &bParam1);
	Function_324(&Param0, 1024, &bParam1);
	return;
}

void Function_324(int iParam0, int iParam1, bool bParam2) //Position: 0xF8EA / 63722
{
	bool bVar0;
	
	Function_76(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_76(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_76(&iParam0 + 68, bVar0);
	}
	return;
}

int Function_325(struct<69> Param0) //Position: 0xF929 / 63785
{
	if (!Function_328(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_327(&Param0, &iParam2))
	{
		return 0;
	}
	Function_326(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_322(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_326(char* cParam0) //Position: 0xF96F / 63855
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_327(int iParam0, char* cParam1) //Position: 0xF97C / 63868
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

bool Function_328(struct<61> Param0) //Position: 0xFA09 / 64009
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

void Function_329(int iParam0, int iParam1) //Position: 0xFBBC / 64444
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_272(StackVal, &iParam0, Var0);
	return;
}

void Function_330() //Position: 0xFBD8 / 64472
{
	(&iLocal_4 + 376[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 611, Vector(-3293,099f, 17,62123f, 2675,808f), Vector(0.0f, 200.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 376[02], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 376[02], 4, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 376[02], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 376[02], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 376[02], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 376[02], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 376[02]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 376[02]);
	return;
}

void Function_331(int iParam0, struct<5>[] Param1) //Position: 0xFC7C / 64636
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = Function_332(&iParam0, &Param1);
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

int Function_332(int iParam0, struct<5>[] Param1) //Position: 0xFCCB / 64715
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

void Function_333() //Position: 0xFD05 / 64773
{
	*(&iLocal_4 + 368) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Crowd"));
	*(&iLocal_4 + 232[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 173, Vector(-3301,04f, 16,043f, 2724,344f), Vector(0.0f, 330.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[02], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[02], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[02], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[02], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[02], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[02]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[02]);
	*(&iLocal_4 + 232[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 172, Vector(-3288,594f, 17,47133f, 2704,387f), Vector(0.0f, 7,23038f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[12], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[12], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[12], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[12], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[12], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[12]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[12]);
	*(&iLocal_4 + 232[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 39, Vector(-3285,89f, 17,54202f, 2702,334f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[22], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[22], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[22], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[22], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[22], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[22]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[22]);
	*(&iLocal_4 + 232[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 765, Vector(-3248,759f, 15,89632f, 2735,604f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[32], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[32], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[32], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[32], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[32], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[32]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[32]);
	*(&iLocal_4 + 232[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 760, Vector(-3259,775f, 15,9903f, 2719,28f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[42], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[42], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[42], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[42], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[42], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[42]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[42]);
	*(&iLocal_4 + 232[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 758, Vector(-3260,072f, 15,09948f, 2751,998f), Vector(0.0f, 270.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[52], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[52], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[52], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[52], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[52], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[52]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[52]);
	*(&iLocal_4 + 232[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 763, Vector(-3260,618f, 15,87009f, 2727,228f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[62], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[62], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[62], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[62], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[62], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[62]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[62]);
	*(&iLocal_4 + 232[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 171, Vector(-3285,616f, 17,54202f, 2703,524f), Vector(0.0f, 55.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 232[72], &iLocal_4 + 368);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 232[72], false);
	SET_ACTOR_FACTION(&iLocal_4 + 232[72], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 232[72], 0, 0);
	EQUIP_ACCESSORY(&iLocal_4 + 232[72], 0, 1);
	AI_IGNORE_ACTOR(&iLocal_4 + 232[72]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 232[72]);
	return;
}

bool Function_334(bool bParam0) //Position: 0x1015F / 65887
{
	if (!Function_84(bParam0))
	{
		return 1;
	}
	return Function_165(&(Global_43791[bParam0]), 4);
}

void Function_335() //Position: 0x1017B / 65915
{
	struct<16> Var0[6];
	int iVar97;
	
	strcpy(&(Var0[016]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[116]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[216]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[316]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[416]), "p_gen_bottleSnakeOil02x", 64);
	strcpy(&(Var0[516]), "p_gen_bottleSnakeOil02x", 64);
	iVar97 = 0;
	while (iVar97 <= 6)
	{
		uLocal_1078[iVar97] = CREATE_PROP_IN_LAYOUT(&iLocal_470, Function_54(), &(Var0[iVar9716]), *(&iLocal_4 + 1664[iVar973]), *(&iLocal_4 + 1664[iVar973] + 12), 1);
		uLocal_1235[iVar97] = CREATE_EVENT_TRAP(Function_54(), 13, &iLocal_470);
		EVENT_TRAP_ON_TARGET(&(uLocal_1235[iVar97]), &(uLocal_1078[iVar97]));
		iVar97++;
	}
	if (bLocal_718 == 1 && bLocal_718 == 2)
	{
		if (IS_OBJECT_VALID(&(uLocal_1078[0])))
		{
			DESTROY_OBJECT(&(uLocal_1078[0]));
			EVENT_TRAP_CLEAR_EVENTS(&(uLocal_1235[0]));
		}
	}
	return;
}

void Function_336(int iParam0) //Position: 0x102E5 / 66277
{
	Function_337(&Global_43580, iParam0);
	return;
}

void Function_337(var uParam0, bool bParam1) //Position: 0x102F3 / 66291
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_338(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1031B / 66331
{
	Function_260(fParam0, fParam1, fParam2, fParam3, fParam4, &iParam5);
}

void Function_339(bool bParam0) //Position: 0x10333 / 66355
{
	Function_340(0, 0x40400000);
	Function_213();
	Function_212();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_340(float fParam0, float fParam1) //Position: 0x10369 / 66409
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
	Function_342();
	Function_341();
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

void Function_341() //Position: 0x1047A / 66682
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_342() //Position: 0x104AE / 66734
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

void Function_343(int iParam0) //Position: 0x105B4 / 66996
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (&iParam0 == &iLocal_1062)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_gunOnWest_demo", "Merchant02_gunOnWest_demo", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
		}
	}
	return;
}

int Function_344(bool bParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x10619 / 67097
{
	float fVar0;
	
	if (Function_301(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		if (IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			if (GET_CURRENT_GAME_TIME() <= uParam1)
			{
				fVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
				if (IS_ACTOR_VALID(&fVar0))
				{
					if (IS_ACTOR_VALID(&bParam0))
					{
						if ((bParam4 && (GET_CURRENT_GAME_TIME() - uParam1) <= 5,5f) || (!&bParam4 && (GET_CURRENT_GAME_TIME() - uParam1) <= 2,5f))
						{
							if (Function_345(&bParam0, &Global_54076, 50.0f))
							{
								if (!IS_ACTOR_ANIMAL(&fVar0))
								{
									if (!AI_IS_HOSTILE_OR_ENEMY(&fVar0, &Global_54076))
									{
										if (&bParam2)
										{
											ABORT_SCRIPTED_CONVERSATION(0);
										}
										uParam1 = (GET_CURRENT_GAME_TIME() + &fParam3);
										return &fVar0;
									}
								}
							}
						}
					}
					if (uParam1 <= 0.0f)
					{
						bParam0 = &fVar0;
						uParam1 = GET_CURRENT_GAME_TIME();
					}
				}
				else
				{
					bParam0 = "";
					uParam1 = 0.0f;
				}
			}
		}
	}
	return "";
}

bool Function_345(var uParam0, var uParam1, float fParam2) //Position: 0x106FB / 67323
{
	float fVar0;
	
	fVar0 = Function_346(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_346(var uParam0, int iParam1) //Position: 0x1071A / 67354
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_347(&uVar0, &uVar2);
	return iVar4;
}

var Function_347(struct<2> Param0) //Position: 0x1073B / 67387
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_348() //Position: 0x1075A / 67418
{
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		uLocal_1064 = GET_MOST_RECENT_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&uLocal_1064))
		{
			if (IS_VOLUME_VALID(&iLocal_4 + 584[4]))
			{
				if (IS_ACTOR_IN_VOLUME(&uLocal_1064, &iLocal_4 + 584[4]))
				{
					if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uLocal_1064)) && !DECOR_CHECK_EXIST(&uLocal_1064, "HorseLeash"))
					{
						if (GET_TASK_STATUS(&bLocal_1068, 25) != 1)
						{
							TASK_FLEE_ACTOR(&uLocal_1064, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_349(bool bParam0) //Position: 0x107E7 / 67559
{
	int iVar0;
	
	if ((Function_351(&iLocal_4 + 368, &Global_54076) || MEMORY_GET_IS_VISIBLE(&iLocal_1062, &Global_54076)) || MEMORY_GET_IS_VISIBLE(&bLocal_1068, &Global_54076))
	{
		iVar0 = GET_LAST_ATTACK_TARGET(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (IS_ACTOR_HUMAN(&iVar0) || IS_ACTOR_HORSE(&iVar0))
			{
				if (&iVar0 != &bParam0)
				{
					if (&iVar0 != &Global_54076)
					{
						Function_350(&iLocal_4 + 368, &Global_54076, 50.0f, -1.0f, 1, 1);
						if (IS_ACTOR_HUMAN(&iVar0))
						{
							if (IS_ACTOR_ALIVE(&iVar0))
							{
								Function_239("RWCrowd_attacked");
							}
							else
							{
								Function_239("RWCrowd_killed");
							}
						}
						else if (IS_ACTOR_HORSE(&iVar0))
						{
							if (IS_ACTOR_ALIVE(&iVar0))
							{
								Function_239("RWCrowd_horse_attacked");
							}
							else
							{
								Function_239("RWCrowd_horse_killed");
							}
						}
						else
						{
							Function_239("Merchant02_disrupt_show");
						}
						bLocal_996 = true;
					}
				}
			}
		}
	}
	return;
}

void Function_350(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x10911 / 67857
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

int Function_351(var uParam0, int iParam1) //Position: 0x1098A / 67978
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
			if (IS_ACTOR_ALIVE(&uVar1) && MEMORY_GET_IS_VISIBLE(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_352() //Position: 0x109E8 / 68072
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_OBJECT_VALID(&(uLocal_1078[iVar0])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(uLocal_1235[iVar0])))
			{
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(uLocal_1235[iVar0]));
				Function_277(&(uLocal_1078[iVar0]));
				UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iLocal_470, "exp_snake_oil", "exp_snake_oil", Function_277(&(uLocal_1078[iVar0]))), Vector(0.0f, 0.0f, 0.0f));
				DESTROY_OBJECT(&(uLocal_1078[iVar0]));
				iLocal_1173++;
				if (iLocal_1173 <= 2)
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_353();
				}
				else
				{
					Function_239("Merchant02_disrupt_show");
					bLocal_996 = true;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_353() //Position: 0x10AA7 / 68263
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonShootsBottle", "Merchant02_jonShootsBottle", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354(vector3 vParam0) //Position: 0x10B04 / 68356
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_355(int iParam0) //Position: 0x10B1B / 68379
{
	if (!Function_254(&iParam0))
	{
		Function_294(&iParam0, 0.0f);
	}
	return;
}

void Function_356(var uParam0, bool bParam1) //Position: 0x10B32 / 68402
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
				if (&bParam1)
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(&uVar1, "crowd_win_lose", 0);
					bLocal_1169 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Win");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
					TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(&uVar1, "crowd_win_lose", 0);
					bLocal_1169 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Win");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
					TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_357() //Position: 0x10C3D / 68669
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonShoots1st_v1_AA", "Merchant02_jonShoots1st_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonShoots1st_v1_AB", "Merchant02_jonShoots1st_v1_AB", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_358() //Position: 0x10CE9 / 68841
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	uVar4 = CREATE_OBJECT_ITERATOR(&iLocal_470);
	ITERATE_IN_LAYOUT(&uVar4, GET_EVENT_LAYOUT());
	uVar5 = START_OBJECT_ITERATOR(&uVar4);
	while (IS_OBJECT_VALID(&uVar5))
	{
		uVar6 = GET_EVENT_FROM_OBJECT(&uVar5);
		if (IS_EVENT_VALID(&uVar6))
		{
			if (GET_EVENT_TYPE(&uVar6) == 11)
			{
				if (GET_EVENT_TARGET_AS_OBJECT(&uVar6) != GET_OBJECT_FROM_ACTOR(&bLocal_1068) && GET_EVENT_PERPETRATOR(&uVar6) != GET_OBJECT_FROM_ACTOR(&Global_54076))
				{
					GET_OBJECT_POSITION(&bLocal_1068, &Var1);
					uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var1, 3.0f, "revolver", 1);
					if (IS_PHYSINST_VALID(&uVar0))
					{
						DESTROY_OBJECT(&uVar0);
					}
					DESTROY_ITERATOR(&uVar4);
					return 1;
				}
			}
		}
		uVar5 = OBJECT_ITERATOR_NEXT(&uVar4);
	}
	DESTROY_ITERATOR(&uVar4);
	if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&bLocal_1068)))
	{
		if (GET_LAST_ATTACKER(&bLocal_1068) == &Global_54076)
		{
			if (GET_LAST_HIT_ZONE(&bLocal_1068, &iVar3))
			{
				if (iVar3 == 6)
				{
					GET_OBJECT_POSITION(&bLocal_1068, &Var1);
					uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var1, 3.0f, "revolver", 1);
					if (IS_PHYSINST_VALID(&uVar0))
					{
						DESTROY_OBJECT(&uVar0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_359(var uParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x10DFB / 69115
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_360(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_361()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
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
	else if ((!Function_360(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_361()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_360(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_360(int iParam0, struct<2> Param1, float fParam3) //Position: 0x110DA / 69850
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_297(&iParam0);
		if (VDIST(Function_297(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_361() //Position: 0x11166 / 69990
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_362() //Position: 0x11175 / 70005
{
	bool bVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	if (Function_317())
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar3))
			{
				iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
				if (Function_315(iVar5))
				{
					if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 376[02]))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 376[02]);
					}
				}
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

void Function_363() //Position: 0x111D5 / 70101
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (iLocal_719 < 3 && iLocal_719 >= 105)
	{
		Function_269(&iLocal_4 + 1488[2]);
		Function_359(StackVal, "$/cutscene/MERCHANT02_CS03_C_P1/MERCHANT02_CS03_C_P1", &uLocal_999, Function_269(&iLocal_4 + 1488[2]), 62181, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		if (!IS_ACTOR_ALIVE(&bLocal_1068))
		{
			Function_230();
			Function_239("Merchant02_killed_aquila");
			bLocal_996 = true;
		}
		if (Function_378(&fLocal_1152, &iLocal_4 + 640[1], &iLocal_4 + 640[2], "", "Merchant02_abandoned_fight", &bLocal_996, 1, 0, 0, 330, 1))
		{
			Function_377();
			if (IS_ACTOR_IN_VOLUME(&bLocal_1068, &iLocal_4 + 640[1]))
			{
				if (Function_254(&iLocal_1140))
				{
					Function_376();
					Function_354(&iLocal_1140);
				}
				if (!iLocal_1215)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						HUD_CLEAR_OBJECTIVE();
						Function_302("Merchant02_return_fight_02", 7,5f, 1, 2, 0, 0, 0, 0);
						iLocal_1215 = 1;
					}
				}
			}
			if (GET_TASK_STATUS(&bLocal_1068, 0) != 1)
			{
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 1648[0], 1, 0, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_TAUNT_ACTOR_IN_PLACE(0, &Global_54076, -1f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1068, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
			}
		}
		else
		{
			Function_377();
			if (!Function_254(&iLocal_1140))
			{
				Function_355(&iLocal_1140);
			}
			if (GET_TASK_STATUS(&bLocal_1068, 45) != 1)
			{
				COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&bLocal_1068, 0,75f);
				TASK_MELEE_ATTACK(&bLocal_1068, &Global_54076, -1.0f);
				iLocal_1215 = 0;
			}
		}
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (iLocal_1216 == 0)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_302("Merchant02_put_away_weapon", 7,5f, 1, 2, 0, 0, 0, 0);
				SAY_SINGLE_LINE_STRING_OVER_PAIN(&bLocal_1068, "Merchant02_gunOnAquila", 1, 0, 3, 0);
				iLocal_1216 = 1;
			}
			if (Function_374(&bLocal_1068, "Merchant02_killed_aquila", &uLocal_1182, &bLocal_996, 1, 0.0f, 0, 0, 1))
			{
				Function_350(&iLocal_4 + 368, &Global_54076, 50.0f, -1.0f, 1, 1);
			}
			if (Function_373(&bLocal_1068))
			{
				Function_350(&iLocal_4 + 368, &Global_54076, 50.0f, -1.0f, 1, 1);
				Function_239("Merchant02_disrupt_show");
				bLocal_996 = true;
			}
			if (GET_LAST_HIT_WEAPON(&bLocal_1068) != 4294967295)
			{
				Function_350(&iLocal_4 + 368, &Global_54076, 50.0f, -1.0f, 1, 1);
				Function_239("Merchant02_disrupt_show");
				bLocal_996 = true;
			}
		}
		else if (iLocal_1216 == 1)
		{
			iLocal_1216 = 0;
		}
		Function_369();
		Function_352();
		Function_348();
		Function_343(Function_344(&bVar0, &uLocal_1168, 1, 0x40c00000, 0));
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_339(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_734 = Global_46760[1];
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (iLocal_979[3] == 0)
			{
				Function_338(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ENABLE_NAV_STICK_INPUT(0, 1);
				SET_PLAYER_CONTROL_CONFIG(0, 0);
				SET_PLAYER_PERFECT_ACCURACY(&Global_54076, 1);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				SET_INFINITE_DEADEYE(0, 1);
				Function_229(1);
				fLocal_1180 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 4);
				fLocal_1181 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 8);
				Function_166(4, 1, 0);
				Function_166(8, 1, 0);
				_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 7, 1);
				_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 8, 1);
				bLocal_1214 = true;
				SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
				Function_168(49165);
				Function_336(9);
				Function_278(&Global_54076, &iLocal_4 + 1136[1], 0, 1, 1, 1);
				Function_279(&iLocal_1062, &iLocal_4 + 1576[1], 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
				Function_278(&bLocal_1066, &iLocal_4 + 1528[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
				Function_335();
				Function_269(&iLocal_4 + 1528[1]);
				Function_276(&iLocal_4 + 1528[1]);
				uLocal_1092 = CREATE_PROP_IN_LAYOUT(&iLocal_4, Function_54(), "p_gen_tableSnakeOil01x", Function_269(&iLocal_4 + 1528[1]), Function_276(&iLocal_4 + 1528[1]), 1);
				Function_220(&iLocal_470);
				Function_220(&iLocal_4);
				Function_218();
				iLocal_719 = 1;
			}
			else
			{
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_334(bLocal_734)) && Function_165(&(Global_43791[bLocal_734]), 8))
			{
				Function_321();
				TASK_CLEAR(&bLocal_1068);
				Function_278(&bLocal_1068, &iLocal_4 + 1136[4], 0, 1, 1, 1);
				Function_329(&bLocal_1068, &iLocal_1062);
				TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
				Function_244(1.0f);
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000002:
			uLocal_1253 = GET_SOUND_ID();
			Function_269(&iLocal_4 + 1648[0]);
			PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			if (Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718))
			{
				iLocal_719 = 3;
			}
			else
			{
				Function_278(&Global_54076, &iLocal_4 + 1136[0], 0, 1, 1, 1);
				Function_279(&iLocal_1062, &iLocal_4 + 1576[1], 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
				{
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar1);
					Function_278(&iVar2, &iLocal_4 + 1200[bVar1], 0, 1, 1, 1);
					TASK_STAND_STILL(&iVar2, -1.0f, 0, 0);
					bVar1++;
				}
				Function_278(&bLocal_1068, &iLocal_4 + 1136[4], 0, 1, 1, 1);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1068, &iLocal_4 + 640[0], 2, true);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_1068, &Global_54076, 1);
				TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
				DECOR_SET_BOOL(&bLocal_1068, "Aguila", 1);
				Function_265();
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_246("$/cutscene/MERCHANT02_CS03_B_S/MERCHANT02_CS03_B_S", &iLocal_720, &Local_472, &bLocal_718, 55104, 54741, 53949, 50447, 50048, 62109, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000004:
			Function_312(bLocal_718);
			Function_303(StackVal, Function_312(bLocal_718), bLocal_718, Global_46736[1], Function_311(bLocal_718), 0);
			Function_244(1.0f);
			AUDIO_MUSIC_SET_MOOD("FIST_FIGHT", 0, 4294967295, 4294967295);
			AUDIO_SET_PLAYER_MOOD(2, 0);
			SET_ACTOR_KO_POINTS(&Global_54076, GET_ACTOR_MAX_KO_POINTS(&Global_54076));
			DECOR_SET_BOOL(&Global_54076, "bThreeStrikes", 1);
			SET_PLAYER_MELEE_MODE_SELECTED(1, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
			{
				iVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar3);
				if (Function_368())
				{
					Function_329(&iVar4, &Global_54076);
				}
				else
				{
					Function_329(&iVar4, &bLocal_1068);
				}
				RESET_ANIM_SET_FOR_ACTOR(&iVar4, 1);
				SET_ANIM_SET_FOR_ACTOR(&iVar4, "crowd_cheer", 0);
				SET_ACTION_NODE_FOR_ACTOR(&iVar4, "crowd_cheer/random_loop");
				bVar3++;
			}
			Function_366(&(Local_797[215]), 128);
			SET_ACTOR_FACTION(&bLocal_1068, 19);
			AUDIO_TURN_OFF_PAIN_VOCALS(&bLocal_1068);
			DECOR_SET_BOOL(&bLocal_1068, "bDoNotBlock", 1);
			SET_ACTOR_HEALTH(&bLocal_1068, 1.0f);
			Function_320(&(Local_797[315]));
			if (IS_ATTACHMENT_VALID(&uLocal_1098))
			{
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1098);
			}
			if (IS_OBJECT_VALID(&uLocal_1096))
			{
				DESTROY_OBJECT(&uLocal_1096);
			}
			iLocal_1226 = 0;
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_365();
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000007:
			SET_ACTOR_KO_POINTS(&bLocal_1068, GET_ACTOR_MAX_KO_POINTS(&bLocal_1068));
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(2, 19, 0,4f);
			iLocal_719 = 8;
			break;
		
		case 0x00000008:
			if (UNK_0x7A207FFE(&Global_54076))
			{
				Function_364(&iLocal_4 + 368, 1);
				uLocal_1249 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1249, "MERCHANT02_BOO_MASTER", Global_54078);
				Function_239("Merchant02_fail_fight");
				bLocal_996 = true;
			}
			if (UNK_0x7A207FFE(&bLocal_1068))
			{
				Function_230();
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1068));
				AUDIO_TURN_ON_PAIN_VOCALS(&bLocal_1068);
				Function_356(&iLocal_4 + 368, 1);
				uLocal_1251 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1251, "MERCHANT02_CHEER_MASTER", Global_54078);
				Function_293(&iLocal_1148);
				iLocal_719 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_252(&iLocal_1148) < 2.0f)
			{
				iLocal_979[4] = 1;
				Function_226(&iLocal_4 + 368);
				Function_228(&iLocal_4 + 368);
				AI_GLOBAL_CLEAR_ALL_DANGER();
				Function_322(&(Local_797[215]), 128, 1);
				bLocal_718 = 5;
				iLocal_719 = 0;
			}
			break;
	}
	return;
}

void Function_364(var uParam0, bool bParam1) //Position: 0x11B4C / 72524
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
				if (&bParam1)
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(&uVar1, "crowd_win_lose", 0);
					bLocal_1169 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Lose");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
					TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(&uVar1, "crowd_win_lose", 0);
					bLocal_1169 = TASK_SEQUENCE_OPEN();
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Lose");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
					TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_365() //Position: 0x11C4E / 72782
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_announcefight", "Merchant02_announcefight", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_366(int iParam0, int iParam1) //Position: 0x11CA7 / 72871
{
	if (iParam1 != 100000000)
	{
		Function_367(&iParam0, iParam1);
	}
	else
	{
		Function_323(&iParam0, 1);
	}
	return;
}

void Function_367(int iParam0, bool bParam1) //Position: 0x11CC9 / 72905
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

bool Function_368() //Position: 0x11CF6 / 72950
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_369() //Position: 0x11D09 / 72969
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (iLocal_1210 != 0 && iLocal_1209 != 0)
		{
			if (GET_ACTOR_KO_POINTS(&Global_54076) > 50.0f)
			{
				Function_372();
				iLocal_1210 = 1;
			}
		}
		if (iLocal_1209 != 0 && iLocal_1210 != 0)
		{
			if (GET_ACTOR_KO_POINTS(&bLocal_1068) > 50.0f)
			{
				Function_371();
				iLocal_1209 = 1;
			}
		}
	}
	if (!iLocal_1208 && GET_ACTOR_KO_POINTS(&bLocal_1068) < 0.0f)
	{
		if (Function_254(&iLocal_1140))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_252(&iLocal_1140) < RAND_FLOAT_RANGE(10.0f, 12.0f))
				{
					if (RAND_INT_RANGE(false, 100) >= 20)
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(&bLocal_1068, "Merchant02_tauntfight", 1, 0, 3, 0);
					}
					else if (GET_ACTOR_KO_POINTS(&bLocal_1068) > 50.0f && GET_ACTOR_KO_POINTS(&Global_54076) < GET_ACTOR_KO_POINTS(&bLocal_1068))
					{
						SAY_SINGLE_LINE_STRING(&iLocal_4 + 232[02], "Merchant02_jonFightWell_Crowd", true, false, 3, 0, true, false);
					}
					else
					{
						SAY_SINGLE_LINE_STRING(&iLocal_4 + 232[02], "Merchant02_jonFightBad_Crowd", true, false, 3, 0, true, false);
					}
					Function_293(&iLocal_1140);
				}
			}
		}
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "GroundAttack/TakeDown") || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "GroundAttack/Idle"))
		{
			SAY_SINGLE_LINE_STRING_OVER_PAIN(&bLocal_1068, "Merchant02_tackled", 1, 0, 3, 0);
			Function_293(&iLocal_1140);
			iLocal_1208 = 1;
		}
		else
		{
			iLocal_1208 = 0;
		}
	}
	switch (iLocal_1226)
	{
		case 0x00000000:
			Function_138("Merchant02_fighting_01", -1.0f, 1, 0, 2, 1, 0);
			iLocal_1226 = 6;
			break;
		
		case 0x00000006:
			if (Function_370())
			{
				HUD_CLEAR_HELP();
				Function_138("Merchant02_fighting_02", -1.0f, 1, 0, 2, 1, 0);
				iLocal_1226 = 7;
			}
			break;
		
		case 0x00000007:
			if (GET_LAST_ATTACKER(&bLocal_1068) == &Global_54076)
			{
				HUD_CLEAR_HELP();
				Function_138("Merchant02_fighting_03", 10.0f, 1, 0, 2, 1, 0);
				Function_302("Merchant02_defeat_aquila", 7,5f, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(&bLocal_1068, 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1068), "Merchant02_blip_aquila");
				Function_293(&iLocal_1104);
				iLocal_1226 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_252(&iLocal_1104) < 10,5f)
			{
				Function_138("Merchant02_fighting_04", 10.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_1104);
				iLocal_1226 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_252(&iLocal_1104) < 10,5f)
			{
				Function_138("Merchant02_fighting_05", 10.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_1104);
				iLocal_1226 = 11;
			}
			break;
		
		case 0x0000000B:
			break;
	}
	return;
}

bool Function_370() //Position: 0x12071 / 73841
{
	return UNK_0x062C5047("@GENERIC.TARGET", 1, 0);
}

void Function_371() //Position: 0x1208E / 73870
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonFightWell_West", "Merchant02_jonFightWell_West", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372() //Position: 0x120EF / 73967
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonFightBad_West", "Merchant02_jonFightBad_West", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_373(bool bParam0) //Position: 0x1214E / 74062
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

bool Function_374(var uParam0, char* cParam1, float fParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x1215D / 74077
{
	if (uParam3 == 1)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_375(&uParam0, &cParam1, &fParam2, &uParam3, &iParam4, &fParam5, &uParam6, 0);
	}
	else if (&bParam7)
	{
	}
	if (uParam3 == 1)
	{
		return 1;
	}
	if (&bParam8)
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			if (!GET_ACTORS_HORSE(&uParam0) != GET_MOUNT(&uParam0))
			{
				SET_ACTORS_HORSE(&uParam0, GET_MOUNT(&uParam0));
			}
		}
		if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&uParam0)))
		{
			Function_375(GET_ACTORS_HORSE(&uParam0), &cParam1, &fParam2, &uParam3, &iParam4, &fParam5, &uParam6, 1);
		}
		else if (&bParam7)
		{
		}
	}
	return uParam3;
}

void Function_375(int iParam0, char* cParam1) //Position: 0x1220C / 74252
{
	char* cVar0[32];
	char* cVar8[32];
	var uVar16[10];
	int iVar27;
	int iVar28;
	char* cVar29[32];
	var uVar37[10];
	int iVar48;
	int iVar49;
	char* cVar50[32];
	
	if ((uParam6 && GET_WEAPON_IN_HAND(&Global_54076) != 21) && GET_LAST_ATTACKER(&iParam0) != &Global_54076)
	{
		uParam3 = 1;
		if (!&bParam7)
		{
			Function_239(&cParam1);
		}
		else
		{
			strcpy(&cVar0, &cParam1, 32);
			stradd(&cVar0, "_horse", 32);
			Function_239(&cVar0);
		}
		return;
	}
	if (GET_LAST_ATTACK_TARGET(&Global_54076) == &iParam0)
	{
		if ((uParam6 && GET_WEAPON_IN_HAND(&Global_54076) != 21) || IS_ACTOR_DEAD(&iParam0))
		{
			uParam3 = 1;
			if (!&bParam7)
			{
				Function_239(&cParam1);
			}
			else
			{
				strcpy(&cVar8, &cParam1, 32);
				stradd(&cVar8, "_horse", 32);
				Function_239(&cVar8);
			}
			return;
		}
		iVar27 = 0;
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= 10)
		{
			if ((fParam2[iVar28] + &fParam5) <= GET_CURRENT_GAME_TIME() && fParam2[iVar28] < 0.0f)
			{
				uVar16[iVar27] = fParam2[iVar28];
				iVar27++;
			}
			fParam2[iVar28] = -1.0f;
			iVar28++;
		}
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= iVar27)
		{
			fParam2[iVar28] = uVar16[iVar28];
			iVar28++;
		}
		fParam2[iVar27] = GET_CURRENT_GAME_TIME();
		iVar27++;
		CLEAR_LAST_ATTACK(&Global_54076);
		if (iVar27 <= &iParam4 && fParam2[(iVar27 - 1)] > (fParam2[0] + &fParam5))
		{
			uParam3 = 1;
			if (!&bParam7)
			{
				Function_239(&cParam1);
			}
			else
			{
				strcpy(&cVar29, &cParam1, 32);
				stradd(&cVar29, "_horse", 32);
				Function_239(&cVar29);
			}
		}
	}
	else if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (GET_LAST_ATTACK_TARGET(GET_MOUNT(&Global_54076)) == &iParam0)
		{
			iVar48 = 0;
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= 10)
			{
				if ((fParam2[iVar49] + &fParam5) <= GET_CURRENT_GAME_TIME() && fParam2[iVar49] < 0.0f)
				{
					uVar37[iVar48] = fParam2[iVar49];
					iVar48++;
				}
				fParam2[iVar49] = -1.0f;
				iVar49++;
			}
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= iVar48)
			{
				fParam2[iVar49] = uVar37[iVar49];
				iVar49++;
			}
			fParam2[iVar48] = GET_CURRENT_GAME_TIME();
			iVar48++;
			CLEAR_LAST_ATTACK(GET_MOUNT(&Global_54076));
			if (iVar48 <= &iParam4 && fParam2[(iVar48 - 1)] > (fParam2[0] + &fParam5))
			{
				uParam3 = 1;
				if (!&bParam7)
				{
					Function_239(&cParam1);
				}
				else
				{
					strcpy(&cVar50, &cParam1, 32);
					stradd(&cVar50, "_horse", 32);
					Function_239(&cVar50);
				}
			}
		}
	}
}

void Function_376() //Position: 0x12493 / 74899
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_walksFromFight", "Merchant02_walksFromFight", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_377() //Position: 0x124EE / 74990
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar0);
		if (ACTORS_IN_RANGE(&Global_54076, &uVar1, 3.0f) && GET_TASK_STATUS(&bLocal_1068, 45) != 1)
		{
			if (GET_TASK_STATUS(&uVar1, 25) != 1)
			{
				RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
				TASK_FLEE_ACTOR(&uVar1, &Global_54076, 5.0f, 3.0f, 0, 1, 0);
			}
		}
		else if (ACTORS_IN_RANGE(&bLocal_1068, &uVar1, 3.0f))
		{
			if (GET_TASK_STATUS(&uVar1, 25) != 1)
			{
				RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
				TASK_FLEE_ACTOR(&uVar1, &bLocal_1068, 5.0f, 3.0f, 0, 1, 0);
			}
		}
		else if (GET_TASK_STATUS(&uVar1, 0) != 1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
			bLocal_1169 = TASK_SEQUENCE_OPEN();
			if (Function_368())
			{
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			}
			else
			{
				TASK_FACE_ACTOR(0, &bLocal_1068, 0, 3212836864);
			}
			TASK_STAND_STILL(false, 3.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1169);
			TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
		}
		if (GET_TASK_STATUS(&uVar1, 6) == 1)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "crowd_cheer"))
			{
				RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
				SET_ANIM_SET_FOR_ACTOR(&uVar1, "crowd_cheer", 0);
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "crowd_cheer/random_loop");
			}
		}
		bVar0++;
	}
	return;
}

bool Function_378(struct<2> Param0, var uParam2, int iParam3, char* cParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x12646 / 75334
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&uParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &uParam2))
	{
		Function_239(&cParam4);
		uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_384(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_302(&iParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_383(64);
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_382(&uParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_382(&uParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &uParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_384(64))
	{
		Function_381(64);
		if (!Function_380())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_379();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_382(&uParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_382(&uParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_379() //Position: 0x127E1 / 75745
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

bool Function_380() //Position: 0x1280F / 75791
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

void Function_381(bool bParam0) //Position: 0x12856 / 75862
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

void Function_382(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x128BD / 75965
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

void Function_383(bool bParam0) //Position: 0x12978 / 76152
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_76(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_384(bool bParam0) //Position: 0x129DF / 76255
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

void Function_385() //Position: 0x12A29 / 76329
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	
	if ((iLocal_719 < 3 && iLocal_719 > 105) && iLocal_719 == 95)
	{
		Function_269(&iLocal_4 + 1488[2]);
		if (Function_359(StackVal, "$/cutscene/MERCHANT02_CS03_B_S/MERCHANT02_CS03_B_S", &uLocal_999, Function_269(&iLocal_4 + 1488[2]), 62498, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
		{
			iLocal_1222 = 1;
		}
		else
		{
			iLocal_1222 = 0;
		}
		Function_352();
		Function_349(0);
		Function_348();
		Function_343(Function_344(&bVar0, &uLocal_1168, 1, 0x40c00000, 0));
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_339(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_734 = Global_46760[1];
			if (iLocal_979[2] == 0)
			{
				Function_338(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ENABLE_NAV_STICK_INPUT(0, 0);
				SET_PLAYER_CONTROL_CONFIG(0, 5);
				SET_PLAYER_PERFECT_ACCURACY(&Global_54076, 1);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				SET_INFINITE_DEADEYE(0, 1);
				Function_229(0);
				fLocal_1180 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 4);
				fLocal_1181 = ACTOR_GET_WEAPON_AMMO(&Global_54076, 8);
				Function_166(4, 1, 0);
				Function_166(8, 1, 0);
				_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 7, 1);
				_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 8, 1);
				bLocal_1214 = true;
				SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
				Function_168(49165);
				Function_336(9);
				Function_335();
				Function_269(&iLocal_4 + 1528[0]);
				Function_276(&iLocal_4 + 1528[0]);
				uLocal_1092 = CREATE_PROP_IN_LAYOUT(&iLocal_4, Function_54(), "p_gen_tableSnakeOil01x", Function_269(&iLocal_4 + 1528[0]), Function_276(&iLocal_4 + 1528[0]), 1);
				Function_279(&Global_54076, &iLocal_4 + 1008[1], 1, 1, 1);
				Function_220(&iLocal_470);
				Function_220(&iLocal_4);
				Function_218();
				iLocal_719 = 1;
			}
			else
			{
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_334(bLocal_734)) && Function_165(&(Global_43791[bLocal_734]), 8))
			{
				Function_278(&Global_54076, &iLocal_4 + 1008[1], 0, 1, 1, 1);
				Function_279(&iLocal_1062, &iLocal_4 + 1576[1], 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
				Function_278(&bLocal_1066, &iLocal_4 + 1528[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
				Function_321();
				Function_270(&iLocal_4 + 368, &iLocal_4 + 1048, 1, 1, 1);
				TASK_CLEAR(&bLocal_1068);
				Function_278(&bLocal_1068, &iLocal_4 + 1008[3], 0, 1, 1, 1);
				Function_329(&bLocal_1068, &iLocal_1062);
				TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000002:
			uLocal_1253 = GET_SOUND_ID();
			Function_269(&iLocal_4 + 1648[0]);
			PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
			if (Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718))
			{
				iLocal_719 = 3;
			}
			else
			{
				Function_278(&Global_54076, &iLocal_4 + 1008[1], 0, 1, 1, 1);
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar1);
					Function_269(&iLocal_4 + 1624[0]);
					Function_272(StackVal, &uVar2, Function_269(&iLocal_4 + 1624[0]));
					bVar1++;
				}
				TASK_CLEAR(&bLocal_1068);
				Function_278(&bLocal_1068, &iLocal_4 + 1624[0], 0, 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1068, "hat_toss", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1068, "hat_toss/hat_toss_idle");
				Function_265();
				SET_CAMERA_DIRECTION(StackVal, GET_GAME_CAMERA(), Vector(0,891f, -0,04f, 0,452f), 1);
				Function_244(1.0f);
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_246("$/cutscene/MERCHANT02_CS03_A_S/MERCHANT02_CS03_A_S", &iLocal_720, &Local_472, &bLocal_718, 55104, 54741, 54286, 50447, 50219, 62109, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_1268 = 1;
				iLocal_719 = 4;
			}
			break;
		
		case 0x0000005F:
			if (IS_OBJECT_VALID(&uLocal_1096))
			{
				if (GET_DRAW_OBJECT(&uLocal_1096))
				{
					SET_DRAW_OBJECT(&uLocal_1096, 0);
				}
			}
			if (Function_246("$/cutscene/MERCHANT02_CS03_B_F/MERCHANT02_CS03_B_F", &iLocal_720, &Local_472, &bLocal_718, 55578, 54741, 54286, 50447, 50219, 50041, 0, 1, 1, 2, 2, 0, 1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1096)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1096));
				}
				if (IS_OBJECT_VALID(&uLocal_1096))
				{
					SET_DRAW_OBJECT(&uLocal_1096, 1);
				}
				bVar3 = false;
				while (bVar3 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
				{
					uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar3);
					if (IS_ACTOR_VALID(&uVar4))
					{
						bLocal_1169 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
						TASK_FACE_ACTOR(0, &bLocal_1068, 1, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&uVar4, bLocal_1169);
						TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
					}
					bVar3++;
				}
				UI_ENABLE("loadingspinner");
				Function_244(1.0f);
				iLocal_1268 = 0;
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000004:
			Function_312(bLocal_718);
			Function_303(StackVal, Function_312(bLocal_718), bLocal_718, Global_46736[1], Function_311(bLocal_718), 0);
			Function_244(1.0f);
			AUDIO_MUSIC_SET_MOOD("PASTORAL_LOW", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
			bVar5 = false;
			while (bVar5 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
			{
				uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar5);
				if (IS_ACTOR_VALID(&uVar6))
				{
					Function_274(&bLocal_1068);
					uVar7 = Function_274(&bLocal_1068);
					bLocal_1169 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_FACE_COORD(0, &uVar7, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uVar6, bLocal_1169);
					TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				}
				bVar5++;
			}
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_1225 = 0;
				if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 1)
				{
					ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
				}
				iLocal_1170 = 0;
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000007:
			Function_296();
			if (Function_386())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_230();
				Function_356(&iLocal_4 + 368, 1);
				if (IS_SOUND_ID_VALID(&uLocal_1249))
				{
					STOP_SOUND(&uLocal_1249);
				}
				uLocal_1251 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1251, "MERCHANT02_CHEER_MASTER", Global_54078);
				Function_355(&iLocal_1148);
				iLocal_719 = 106;
			}
			break;
		
		case 0x0000006A:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ENABLE_NAV_STICK_INPUT(0, 1);
			SET_PLAYER_CONTROL_CONFIG(0, 0);
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
			SET_ACTOR_CAN_DEADEYE_TAG_ANYTHING(&Global_54076, 0);
			Function_229(1);
			Function_226(&iLocal_4 + 368);
			Function_228(&iLocal_4 + 368);
			AI_GLOBAL_CLEAR_ALL_DANGER();
			iLocal_979[3] = 1;
			bLocal_718 = 4;
			iLocal_719 = 0;
			break;
	}
	return;
}

bool Function_386() //Position: 0x13140 / 78144
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	switch (iLocal_1268)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(&uLocal_1096))
			{
				uLocal_1096 = DROP_ACCESSORY_ENUM(&bLocal_1068, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1096, GET_OBJECT_FROM_ACTOR(&bLocal_1068), 0);
				GIVE_OBJECT_TO_LAYOUT(&uLocal_1096, &iLocal_4);
			}
			uLocal_1098 = ATTACH_OBJECTS_USING_LOCATOR(&uLocal_1096, GET_OBJECT_FROM_ACTOR(&bLocal_1068), Function_54(), "hat", 4294967295);
			uLocal_1227 = GET_PROP_FROM_OBJECT(&uLocal_1096);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1068, 1);
			TASK_CLEAR(&bLocal_1068);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1068, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1068, "hat_toss", 0);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_1068, "hat_toss/hat_toss_idle");
			uLocal_1098 = ATTACH_OBJECTS_USING_LOCATOR(&uLocal_1227, &bLocal_1068, "wrist_r_attachment", "grab", 0);
			iLocal_1268 = 1;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(&uLocal_1096))
			{
				if (IS_ATTACHMENT_VALID(&uLocal_1098))
				{
					if (IS_OBJECT_VALID(&uLocal_1227))
					{
						iLocal_1268 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_389();
				iLocal_1268 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_1225 > 9)
			{
				if (iLocal_1222 || Global_99145)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_301(GET_WEAPON_IN_HAND(&Global_54076)))
						{
							TASK_ACTION_PERFORM(&bLocal_1068, "hat_toss/hat_toss");
							SET_PROP_TARGETABLE(&uLocal_1227, 1, 1);
							SET_ACTOR_CAN_DEADEYE_TAG_ANYTHING(&Global_54076, 1);
							SAY_SINGLE_LINE_SCRIPTED(&bLocal_1068, "Merchant02_AquilaTauntsWait", &Global_54076, 0, 0, 0, 1, 2);
							Function_293(&iLocal_1128);
							iLocal_1268 = 4;
						}
						else if (!Function_254(&iLocal_1128))
						{
							Function_293(&iLocal_1128);
						}
						else if (Function_252(&iLocal_1128) < 6.0f)
						{
							SAY_SINGLE_LINE_SCRIPTED(&bLocal_1068, "Merchant02_AquilaTauntsWait", &Global_54076, 0, 0, 0, 1, 2);
							Function_293(&iLocal_1128);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			iLocal_1233 = CREATE_EVENT_TRAP(Function_54(), 5, &iLocal_470);
			EVENT_TRAP_ON_TARGET(&iLocal_1233, &uLocal_1096);
			Function_302("Merchant02_shoot_hat", 7,5f, 1, 2, 0, 0, 0, 0);
			ADD_BLIP_FOR_OBJECT(&uLocal_1096, 322, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&uLocal_1096), "Merchant02_blip_hat");
			iLocal_1170++;
			iLocal_1268 = 5;
			break;
		
		case 0x00000005:
			if (!Function_388(&bLocal_1068, &uLocal_1096, 3.0f) && IS_ATTACHMENT_VALID(&uLocal_1098))
			{
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1098);
				SET_PHYSINST_FROZEN(&uLocal_1227, 0);
				GET_ACTOR_AXIS(&Global_54076, &Var0, 1);
				GET_ACTOR_AXIS(&Global_54076, &Var2, 0);
				GET_ACTOR_AXIS(&Global_54076, &Var4, 2);
				switch (iLocal_1170)
				{
					case 0x00000001:
						VSCALE(&Var0, 7.0f);
						break;
					
					case 0x00000002:
						VSCALE(&Var0, 7,75f);
						break;
					
					default:
						VSCALE(&Var0, 8,5f);
						break;
				}
				VSCALE(&Var2, -1.0f);
				VSCALE(&Var4, -1.0f);
				Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var0, StackVal);
				Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
				SET_PROP_VELOCITY(&uLocal_1227, &Var0);
			}
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&iLocal_1233))
			{
				EVENT_TRAP_CLEAR_TRAP_FLAG(&iLocal_1233);
				HUD_CLEAR_OBJECTIVE();
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1096));
				Function_356(&iLocal_4 + 368, 1);
				iLocal_1268 = 7;
			}
			else if (Function_387(&uLocal_1096))
			{
				HUD_CLEAR_OBJECTIVE();
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1096));
				Function_364(&iLocal_4 + 368, 1);
				uLocal_1249 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1249, "MERCHANT02_BOO_MASTER", Global_54078);
				iLocal_1268 = 6;
			}
			break;
		
		case 0x00000006:
			if (iLocal_1170 > 3)
			{
				Function_239("Merchant02_fail_poor_show");
				bLocal_996 = true;
			}
			else if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0,5f, 1f, 1);
				}
			}
			else
			{
				iLocal_1268 = 0;
				UI_DISABLE("loadingspinner");
				iLocal_719 = 95;
			}
			break;
		
		case 0x00000007:
			if (!IS_PLAYER_DEADEYE(0) || !IS_ACTOR_SHOOTING(&Global_54076))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_387(int iParam0) //Position: 0x135AD / 79277
{
	var uVar0;
	var uVar2;
	var uVar4;
	
	GET_OBJECT_POSITION(&iParam0, &uVar0);
	return FIND_GROUND_INTERSECTION(&uVar0, 0,25f, &uVar2, &uVar4);
}

bool Function_388(int iParam0, var uParam1, float fParam2) //Position: 0x135CA / 79306
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_297(&iParam0);
			Function_277(&uParam1);
			if (VDIST(Function_297(&iParam0), Function_277(&uParam1)) >= fParam2)
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

void Function_389() //Position: 0x136E8 / 79592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_readyForHat", "Merchant02_readyForHat", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390() //Position: 0x1373D / 79677
{
	bool bVar0;
	
	if ((iLocal_719 < 4 && iLocal_719 > 105) && iLocal_719 == 95)
	{
		Function_269(&iLocal_4 + 1488[2]);
		Function_359(StackVal, "$/cutscene/MERCHANT02_CS03_A_S/MERCHANT02_CS03_A_S", &uLocal_999, Function_269(&iLocal_4 + 1488[2]), 62498, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_284(1);
		Function_352();
		Function_349(0);
		Function_348();
		Function_343(Function_344(&bVar0, &uLocal_1168, 1, 0x40c00000, 0));
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_339(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_734 = Global_46760[1];
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (iLocal_979[1] == 0)
			{
				Function_338(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_278(&Global_54076, &iLocal_4 + 864[0], 0, 1, 1, 1);
				Function_278(&iLocal_1062, &iLocal_4 + 864[2], 0, 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1062, -1.0f, 0, 0);
				MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_1062);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 0);
				SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
				Function_168(49165);
				Function_336(9);
				Function_278(&bLocal_1066, &iLocal_4 + 1528[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
				Function_269(&iLocal_4 + 1528[1]);
				Function_276(&iLocal_4 + 1528[1]);
				uLocal_1092 = CREATE_PROP_IN_LAYOUT(&iLocal_4, Function_54(), "p_gen_tableSnakeOil01x", Function_269(&iLocal_4 + 1528[1]), Function_276(&iLocal_4 + 1528[1]), 1);
				Function_335();
				Function_220(&iLocal_470);
				Function_220(&iLocal_4);
				Function_218();
				iLocal_719 = 1;
			}
			else
			{
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_334(bLocal_734) && Function_165(&(Global_43791[bLocal_734]), 8))
				{
					Function_321();
					Function_270(&iLocal_4 + 368, &iLocal_4 + 920, 1, 0, 1);
					TASK_CLEAR(&bLocal_1068);
					Function_278(&bLocal_1068, &iLocal_4 + 864[4], 0, 1, 1, 1);
					Function_329(&bLocal_1068, &iLocal_1062);
					TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
					ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(&Global_54076, 4, 0);
					iLocal_719 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718))
			{
				if (iLocal_979[1] == 0)
				{
					Function_269(&iLocal_4 + 1488[2]);
					if (Function_359(StackVal, "$/cutscene/MERCHANT02_CS02_seq/MERCHANT02_CS02_seq", &uLocal_999, Function_269(&iLocal_4 + 1488[2]), 62498, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
					{
						uLocal_1253 = GET_SOUND_ID();
						Function_269(&iLocal_4 + 1648[0]);
						PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
						iLocal_719 = 3;
					}
				}
				else
				{
					uLocal_1253 = GET_SOUND_ID();
					Function_269(&iLocal_4 + 1648[0]);
					PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
					iLocal_719 = 3;
				}
			}
			else
			{
				Function_270(&iLocal_4 + 368, &iLocal_4 + 920, 1, 0, 1);
				TASK_CLEAR(&bLocal_1068);
				Function_278(&bLocal_1068, &iLocal_4 + 864[4], 0, 1, 1, 1);
				Function_329(&bLocal_1068, &iLocal_1062);
				TASK_STAND_STILL(&bLocal_1068, -1.0f, 0, 0);
				uLocal_1253 = GET_SOUND_ID();
				Function_269(&iLocal_4 + 1648[0]);
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
				Function_265();
				if (IS_ACTOR_VALID(&iLocal_4 + 232[72]))
				{
					DESTROY_ACTOR(&iLocal_4 + 232[72]);
				}
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_246("$/cutscene/MERCHANT02_CS02_seq/MERCHANT02_CS02_seq", &iLocal_720, &Local_472, &bLocal_718, 55104, 54293, 53949, 50447, 50048, 50041, 0, 1, 1, 2, 2, 0, 1))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 232[72]))
				{
					DESTROY_ACTOR(&iLocal_4 + 232[72]);
				}
				iLocal_719 = 4;
			}
			break;
		
		case 0x0000005F:
			if (Function_246("$/cutscene/MERCHANT02_CS03_A_F/MERCHANT02_CS03_A_F", &iLocal_720, &Local_472, &bLocal_718, 55104, 82306, 53949, 50447, 50219, 50041, 0, 1, 1, 2, 2, 0, 1))
			{
				UI_ENABLE("loadingspinner");
				Function_244(1.0f);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1271)))
				{
					ADD_BLIP_FOR_OBJECT(&bLocal_1271, 322, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&bLocal_1271), "Merchant02_blip_skull");
				}
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 4, 0);
				Function_138("Merchant02_help_aim", 10.0f, 1, 0, 2, 1, 0);
				Function_302("Merchant02_shoot_skull", 7,5f, 1, 2, 0, 0, 0, 0);
				iLocal_1266 = 10;
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000004:
			Function_312(bLocal_718);
			Function_303(StackVal, Function_312(bLocal_718), bLocal_718, Global_46760[1], Function_311(bLocal_718), 0);
			Function_244(1.0f);
			ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(&Global_54076, 4, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			Function_397();
			if (!HUD_IS_FADING())
			{
				Function_138("Merchant02_help_aim", 10.0f, 1, 0, 2, 1, 0);
				Function_302("Merchant02_shoot_skull", 7,5f, 1, 2, 0, 0, 0, 0);
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000007:
			Function_391();
			Function_397();
			break;
		
		case 0x0000006A:
			iLocal_979[2] = 1;
			if (IS_BLIP_VALID(&bLocal_1271 + 24))
			{
				REMOVE_BLIP(&bLocal_1271 + 24);
			}
			Function_226(&iLocal_4 + 368);
			Function_228(&iLocal_4 + 368);
			AI_GLOBAL_CLEAR_ALL_DANGER();
			bLocal_718 = 3;
			iLocal_719 = 0;
			break;
	}
	return;
}

void Function_391() //Position: 0x13D9C / 81308
{
	switch (iLocal_1266)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_293(&iLocal_1136);
				iLocal_1266 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_396(&iLocal_1136, 10.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_395();
					Function_293(&iLocal_1136);
					iLocal_1266 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_293(&iLocal_1136);
				iLocal_1266 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_396(&iLocal_1136, 10.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_394();
					Function_293(&iLocal_1136);
					iLocal_1266 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_393();
				Function_293(&iLocal_1136);
				if (Function_368())
				{
					iLocal_1266 = 0;
				}
				else
				{
					iLocal_1266 = 2;
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_392();
				uLocal_1249 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1249, "MERCHANT02_BOO_MASTER", Global_54078);
				iLocal_1266 = 0;
			}
			break;
	}
	return;
}

void Function_392() //Position: 0x13EA0 / 81568
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Merchant02_jonMissSkull_crowd", "Merchant02_jonMissSkull_crowd", false, 1, 1, 0, 1);
		Function_299(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_393() //Position: 0x13F04 / 81668
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_respondJeer_v1_AA", "Merchant02_respondJeer_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_respondJeer_v1_AB", "Merchant02_respondJeer_v1_AB", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_394() //Position: 0x13FAC / 81836
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Merchant02_CrowdJeer", "Merchant02_CrowdJeer", false, 1, 1, 0, 1);
		Function_299(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x14000 / 81920
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_waitJonSkull", "Merchant02_waitJonSkull", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_396(int iParam0, float fParam1) //Position: 0x14057 / 82007
{
	if (Function_254(&iParam0))
	{
		if (Function_252(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_397() //Position: 0x14075 / 82037
{
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&iLocal_1229))
	{
		EVENT_TRAP_CLEAR_TRAP_FLAG(&iLocal_1229);
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1231) || HAS_PROP_BEEN_DAMAGED(&bLocal_1271 + 8))
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_230();
			Function_356(&iLocal_4 + 368, 1);
			if (IS_SOUND_ID_VALID(&uLocal_1249))
			{
				STOP_SOUND(&uLocal_1249);
			}
			uLocal_1251 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1251, "MERCHANT02_CHEER_MASTER", Global_54078);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&iLocal_1229);
			DESTROY_OBJECT_GLOW(&bLocal_1271);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1271)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_1271));
			}
			Function_354(&iLocal_1136);
			Function_355(&iLocal_1148);
			iLocal_1224 = 1;
			iLocal_719 = 106;
		}
		else
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1231);
			uLocal_1249 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1249, "MERCHANT02_BOO_MASTER", Global_54078);
			Function_355(&iLocal_1148);
			UI_DISABLE("loadingspinner");
			iLocal_1224 = 0;
			iLocal_719 = 95;
		}
	}
	return;
}

int Function_398() //Position: 0x14182 / 82306
{
	switch (bLocal_718)
	{
		case 0x00000002:
			Function_284(1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1068, true);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		default:
			Function_283();
			return 1;
			break;
	}
	return 0;
}

void Function_399() //Position: 0x141BE / 82366
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (iLocal_719 < 3 && iLocal_719 > 105)
	{
		if (iLocal_1219 == 1)
		{
			Function_269(&iLocal_4 + 1488[2]);
			Function_359(StackVal, "$/cutscene/MERCHANT02_CS02_seq/MERCHANT02_CS02_seq", &uLocal_999, Function_269(&iLocal_4 + 1488[2]), 62498, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
		if (Function_388(&Global_54076, &iLocal_4 + 1488[2], 70.0f))
		{
			iLocal_1212 = 1;
		}
		if (iLocal_1212 == 0)
		{
			Function_433(&fLocal_1152, 200.0f, 250.0f, &iLocal_4 + 1488[2], "Merchant02_return_show_01", "Merchant02_abandoned_show", &bLocal_996, 1, 0, 0, 4294967295, 1, 0);
		}
		else
		{
			Function_433(&fLocal_1152, 100.0f, 200.0f, &iLocal_4 + 1488[2], "Merchant02_return_show_02", "Merchant02_abandoned_show", &bLocal_996, 1, 0, 0, 4294967295, 1, 0);
		}
		if (Function_432())
		{
			Function_550(bLocal_718);
			Function_546(StackVal, 2, &bLocal_996, &bLocal_718, Function_551(bLocal_718), Function_550(bLocal_718), 0);
		}
		Function_321();
		Function_284(0);
		Function_352();
		Function_349(0);
		Function_348();
		Function_343(Function_344(&uVar0, &uLocal_1168, 1, 0x40c00000, 0));
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_339(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_734 = Global_46736[0];
			Function_168(49165);
			Function_336(9);
			Function_427();
			Function_325(&(Local_797[415]), &iLocal_4 + 512, "RWCrowd", 0, 0x5f5e100, 1);
			Function_322(&(Local_797[415]), 256, 1);
			Function_269(&iLocal_4 + 1528[1]);
			Function_276(&iLocal_4 + 1528[1]);
			uLocal_1092 = CREATE_PROP_IN_LAYOUT(&iLocal_4, Function_54(), "p_gen_tableSnakeOil01x", Function_269(&iLocal_4 + 1528[1]), Function_276(&iLocal_4 + 1528[1]), 1);
			Function_335();
			Function_425(&iLocal_4 + 584[2]);
			if (iLocal_979[0] == 0)
			{
				Function_338(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
				Function_278(&Global_54076, &iLocal_4 + 736[0], 0, 1, 1, 1);
				Function_278(&bLocal_1066, &iLocal_4 + 736[3], 0, 1, 1, 1);
				START_VEHICLE(&bLocal_1066);
				SET_ACTOR_IN_VEHICLE(&iLocal_1062, &bLocal_1066, false);
				MEMORY_PREFER_RIDING(&iLocal_1062, true);
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1856, 4, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1062, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				Function_220(&iLocal_470);
				Function_220(&iLocal_4);
				Function_218();
				iLocal_719 = 1;
			}
			else if (Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718))
			{
				iLocal_719 = 3;
			}
			else
			{
				iLocal_719 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_334(bLocal_734))
			{
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000002:
			iLocal_719 = 4;
			break;
		
		case 0x00000003:
			if (Function_411())
			{
				iLocal_719 = 4;
			}
			break;
		
		case 0x00000004:
			Function_312(bLocal_718);
			Function_303(StackVal, Function_312(bLocal_718), bLocal_718, Global_46736[0], Function_311(bLocal_718), 0);
			Function_244(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 584[3]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 584[3]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 584[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 584[3], 15);
			uLocal_1253 = GET_SOUND_ID();
			Function_269(&iLocal_4 + 1648[0]);
			PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1253, "MERCHANT02_CROWD_A_MASTER", Function_269(&iLocal_4 + 1648[0]));
			Function_302("Merchant02_go_to_show", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_269(&iLocal_4 + 1488[2]);
			Function_269(&iLocal_4 + 1488[2]);
			uLocal_1094 = Function_410(StackVal, StackVal, &iLocal_470, Function_54(), Function_269(&iLocal_4 + 1488[2]), Function_269(&iLocal_4 + 1488[2]), &Global_54076, 6.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			Function_355(&iLocal_1132);
			iLocal_719 = 7;
			break;
		
		case 0x00000007:
			Function_403();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				Function_269(&iLocal_4 + 1488[2]);
				if (Function_360(StackVal, &Global_54076, Function_269(&iLocal_4 + 1488[2]), (8.0f + 0,5f)))
				{
					RESET_ACTOR_GAITS(GET_MOUNT(&Global_54076), 1);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						HUD_ENABLE(0);
					}
					bLocal_1169 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_DISMOUNT(false, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1169);
					TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
					Function_402(&uLocal_1094);
					Function_401();
					Function_354(&iLocal_1132);
					iLocal_719 = 8;
				}
			}
			else
			{
				Function_269(&iLocal_4 + 1488[2]);
				if (Function_360(StackVal, &Global_54076, Function_269(&iLocal_4 + 1488[2]), (2,5f + 0,5f)))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						HUD_ENABLE(0);
					}
					Function_402(&uLocal_1094);
					Function_354(&iLocal_1132);
					iLocal_719 = 105;
				}
			}
			break;
		
		case 0x00000008:
			if (GET_TASK_STATUS(&Global_54076, 6) == 1)
			{
				iLocal_719 = 105;
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_400())
				{
					Function_260(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				}
				iLocal_719 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (HUD_IS_FADED())
				{
					ACTOR_DISMOUNT_NOW(&iLocal_1062);
					MAKE_ACTOR_READY_FOR_ACTION(&iLocal_1062, 1);
					Function_278(&iLocal_1062, &iLocal_4 + 864[2], 0, 1, 1, 1);
					Function_278(&bLocal_1066, &iLocal_4 + 1528[0], 0, 1, 1, 1);
					Function_321();
					Function_270(&iLocal_4 + 368, &iLocal_4 + 920, 1, 0, 1);
				}
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar1);
					if (IS_ACTOR_VALID(&uVar2))
					{
						UNK_0x99AFD2D1(&uVar2, 1, 0);
					}
					bVar1++;
				}
				Function_221();
				iLocal_979[1] = 1;
				bLocal_718 = 2;
				iLocal_719 = 0;
			}
			break;
	}
	return;
}

bool Function_400() //Position: 0x147D5 / 83925
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	GET_ACTOR_VEHICLE_STATE(&iLocal_1062, &iVar0, &iVar1);
	if (iVar1 == 0)
	{
		return 1;
	}
	return 0;
}

void Function_401() //Position: 0x147F3 / 83955
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_fullCrowd", "Merchant02_fullCrowd", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402(var uParam0) //Position: 0x14844 / 84036
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

void Function_403() //Position: 0x148DA / 84186
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	if (!iLocal_1206)
	{
		if (GET_VEHICLE(&iLocal_1062) == &bLocal_1066)
		{
			if (Function_409(&bLocal_1066, 0) < 0,5f || !Function_388(&bLocal_1066, &iLocal_4 + 1528[0], 5.0f))
			{
				if (!ACTORS_IN_RANGE(&bLocal_1066, &Global_54076, 95.0f))
				{
					if (!Function_224(&bLocal_1066, 1.0f, 95.0f, 1, 1, 0))
					{
						Function_278(&bLocal_1066, &iLocal_4 + 1528[0], 0, 1, 1, 1);
					}
				}
			}
			else
			{
				SET_ACTOR_SPEED(&bLocal_1066, 0.0f);
				if (GET_TASK_STATUS(&iLocal_1062, 55) != 1)
				{
					STOP_VEHICLE(&bLocal_1066);
					TASK_VEHICLE_LEAVE(&iLocal_1062);
				}
			}
		}
		else if (!Function_388(&iLocal_1062, &iLocal_4 + 864[2], 1,5f))
		{
			if (GET_TASK_STATUS(&iLocal_1062, 0) == 1)
			{
				if (!ACTORS_IN_RANGE(&iLocal_1062, &Global_54076, 95.0f))
				{
					if (!Function_224(&iLocal_1062, 1.0f, 95.0f, 1, 1, 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_1062, 0);
						SNAP_ACTOR_TO_GRINGO(&iLocal_1062, &iLocal_4 + 1848, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1848), "UseCase1", 1, 1);
						Function_355(&iLocal_1132);
						MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_1062);
						ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
						iLocal_1206 = 1;
					}
				}
			}
			else
			{
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 864[2], 1, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1848), "UseCase1", 1, 1);
				TASK_SEQUENCE_CLOSE();
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_1062, 1);
				TASK_SEQUENCE_PERFORM(&iLocal_1062, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				Function_355(&iLocal_1132);
				MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_1062);
				ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
				iLocal_1206 = 1;
			}
		}
		else
		{
			RESET_ANIM_SET_FOR_ACTOR(&iLocal_1062, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1848), "UseCase1", 1, 1);
			Function_355(&iLocal_1132);
			MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_1062);
			ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
			iLocal_1206 = 1;
		}
	}
	else if (!IS_ANY_SPEECH_PLAYING(&iLocal_1062))
	{
		if (Function_408(&Global_54076, &iLocal_1062, 36.0f))
		{
			fVar0 = 10.0f;
			if (Function_408(&Global_54076, &iLocal_1062, 10.0f))
			{
				fVar0 = 5.0f;
			}
			else if (Function_408(&Global_54076, &iLocal_1062, 20.0f))
			{
				fVar0 = 7,5f;
			}
			else
			{
				fVar0 = 10.0f;
			}
			if (Function_396(&iLocal_1132, 10.0f))
			{
				iVar2 = 0;
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&iLocal_4 + 368))
				{
					iVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar1);
					if (Function_388(&iVar3, &iLocal_4 + 784[bVar1], 1,5f))
					{
						iVar2++;
					}
					bVar1++;
				}
				if (Function_388(&bLocal_1068, &iLocal_4 + 864[4], 1,5f))
				{
					iVar2++;
				}
				if (iVar2 < 7)
				{
					Function_407();
				}
				else
				{
					Function_406();
				}
				Function_293(&iLocal_1132);
			}
		}
	}
	if (!iLocal_1207)
	{
		if (Function_388(&Global_54076, &iLocal_4 + 1488[2], 100.0f))
		{
			Function_270(&iLocal_4 + 368, &iLocal_4 + 776, 0, 0, 1);
			Function_269(&iLocal_4 + 864[2]);
			uLocal_1177 = Function_269(&iLocal_4 + 864[2]);
			bLocal_1169 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 864[4], 1, 0, 1);
			TASK_FACE_COORD(0, &uLocal_1177, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1068, bLocal_1169);
			TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
			Function_355(&iLocal_1258);
			Function_355(&iLocal_1262);
			iLocal_1207 = 1;
		}
	}
	else
	{
		bVar4 = RAND_INT_RANGE(false, (SQUAD_GET_SIZE(&iLocal_4 + 368) - 1));
		iVar5 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 368, bVar4);
		if (IS_ACTOR_VALID(&iVar5))
		{
			if (Function_396(&iLocal_1258, 10.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(&iVar5))
				{
					if (Function_388(&iVar5, &iLocal_4 + 784[bVar4], 2.0f) && ACTORS_IN_RANGE(&iVar5, &Global_54076, 8.0f))
					{
						bVar6 = Function_404();
						if (CAN_ACTOR_ENUM_PLAY_SPEECH_CONTEXT(GET_ACTOR_ENUM(&iVar5), bVar6))
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar5, bVar6, 0, 1, 0, 1, 4294967295, 4294967295, 0, 1);
							LOG_ERROR("play context...");
							Function_293(&iLocal_1258);
							iLocal_1257 = 1;
						}
					}
				}
			}
			if (Function_396(&iLocal_1262, 7,5f))
			{
				if (!IS_ANY_SPEECH_PLAYING(&iVar5))
				{
					if (ACTORS_IN_RANGE(&iVar5, &Global_54076, 8.0f))
					{
						if (Function_368())
						{
							AUDIO_PLAY_VOCAL_EFFECT(&iVar5, 7, 1);
							Function_293(&iLocal_1262);
						}
						else
						{
							AUDIO_PLAY_VOCAL_EFFECT(&iVar5, 8, 1);
							Function_293(&iLocal_1262);
						}
					}
				}
			}
		}
	}
	return;
}

int Function_404() //Position: 0x14D40 / 85312
{
	if (iLocal_1257)
	{
		if (Function_405() == 2)
		{
			return 45;
		}
		if (Function_405() == 16)
		{
			return 42;
		}
		return 43;
	}
	switch (RAND_INT_RANGE(false, 4))
	{
		case 0x00000000:
			return 34;
			break;
		
		case 0x00000001:
			return 33;
			break;
		
		case 0x00000002:
			return 35;
			break;
	}
	return 38;
}

int Function_405() //Position: 0x14D9D / 85405
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99473, &Global_99475))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99475, &Global_99477))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99477, &Global_99479))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99479, &Global_99481))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99481, &Global_99483))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99483, &Global_99473))
	{
		return 32;
	}
	return 32;
}

void Function_406() //Position: 0x14E3B / 85563
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_noFollowMen", "Merchant02_noFollowMen", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_407() //Position: 0x14E90 / 85648
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_drawCrowd", "Merchant02_drawCrowd", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_408(var uParam0, int iParam1, bool bParam2) //Position: 0x14EE1 / 85729
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &iParam1, bParam2))
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

float Function_409(int iParam0, bool bParam1) //Position: 0x14FF6 / 86006
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&iParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_410(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x15017 / 86039
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
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

bool Function_411() //Position: 0x15102 / 86274
{
	var uVar0;
	
	Function_259(&iLocal_720, 1, 0);
	switch (iLocal_720)
	{
		case 0x000003E8:
			Function_290(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &iLocal_1062);
				(&iLocal_720 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				*(&iLocal_720 + 24) = Function_417(&iLocal_4, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_720 + 24))
				{
				}
				else
				{
					LOG_ERROR("Merchant02_Cutscene01 - Failed to create Merchant02_Cutscene01_Cutscene.");
				}
			}
			Function_278(&bLocal_1066, &iLocal_4 + 736[2], 0, 1, 1, 1);
			iLocal_720 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_720 + 24), 0))
			{
				Function_416(&Global_54076, 1, 1);
				Function_416(&iLocal_1062, 1, 1);
				Function_355(&iLocal_720 + 4);
				iLocal_720 = 1002;
			}
			break;
		
		case 0x000003EA:
			iLocal_720 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_252(&iLocal_720 + 4) < 0.0f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
					Function_293(&iLocal_720 + 4);
					iLocal_1279 = 15;
					iLocal_1280 = 15;
					iLocal_720 = 1004;
				}
			}
			else
			{
				Function_293(&iLocal_720 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_413() && Function_412())
			{
				Function_293(&iLocal_720 + 4);
				iLocal_720 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_230();
				TASK_CLEAR(&Global_54076);
				Function_416(&Global_54076, 0, 1);
				Function_416(&iLocal_1062, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				Function_264(2, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.0f, 0);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_720 + 24))
				{
					DESTROY_OBJECT(&iLocal_720 + 24);
				}
				iLocal_720 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_278(&Global_54076, &iLocal_4 + 736[1], 0, 1, 1, 1);
				Function_278(&bLocal_1066, &iLocal_4 + 736[3], 0, 1, 1, 1);
				START_VEHICLE(&bLocal_1066);
				SET_ACTOR_IN_VEHICLE(&iLocal_1062, &bLocal_1066, false);
				MEMORY_PREFER_RIDING(&iLocal_1062, true);
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1856, 4, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1062, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				SET_ACTOR_SPEED(&bLocal_1066, 8.0f);
				iLocal_720 = 1104;
			}
			break;
	}
	return 0;
}

int Function_412() //Position: 0x153D0 / 86992
{
	var uVar0;
	var uVar2;
	
	switch (iLocal_1280)
	{
		case 0x0000000F:
			if (Function_252(&iLocal_720 + 4) < 6.0f)
			{
				TASK_VEHICLE_LEAVE(&Global_54076);
				iLocal_1280 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_252(&iLocal_720 + 4) < 7.0f)
			{
				START_VEHICLE(&bLocal_1066);
				MEMORY_PREFER_RIDING(&iLocal_1062, true);
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1066, 0, 2, 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1856, 4, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1062, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				iLocal_1280 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_252(&iLocal_720 + 4) < 9.0f)
			{
				uVar0 = Vector(-3,5f, 0.0f, -15.0f);
				GET_ACTOR_OFFSET_WORLD_COORDS(&bLocal_1066, &uVar0, &uVar2);
				bLocal_1169 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uVar2, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1169);
				TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
				iLocal_1280 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_252(&iLocal_720 + 4) < 15.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_413() //Position: 0x154D6 / 87254
{
	switch (iLocal_1279)
	{
		case 0x0000000F:
			if (Function_252(&iLocal_720 + 4) < 0.0f)
			{
				Function_415();
				iLocal_1279 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_252(&iLocal_720 + 4) < 8.0f)
			{
				Function_414();
				iLocal_1279 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_252(&iLocal_720 + 4) < 15.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_414() //Position: 0x15541 / 87361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_takesReins", "Merchant02_takesReins", false, 2, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415() //Position: 0x15594 / 87444
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_arriveOutskirtRidge", "Merchant02_arriveOutskirtRidge", false, 4, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_416(int iParam0, bool bParam1, bool bParam2) //Position: 0x155F9 / 87545
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
		SET_ACTOR_INVULNERABILITY(&iParam0, 1);
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
		SET_ACTOR_INVULNERABILITY(&iParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
	}
	return;
}

var Function_417(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x156A9 / 87721
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 6, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Merchant02_Cutscene01", 6, 1);
	}
	Function_418(&uVar0, &uParam2);
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

void Function_418(var uParam0, int iParam1) //Position: 0x1573B / 87867
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_424(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_423(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_422(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_421(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_420(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_419(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 4, 5, 5.0f, 3, 0);
	return;
}

void Function_419(int iParam0) //Position: 0x157F3 / 88051
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,20208f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3155,922f, 18,48034f, 2793,134f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,060075f, -1,078128f, 0,002023f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_420(int iParam0) //Position: 0x1586C / 88172
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,28232f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3154,219f, 18,48283f, 2794,701f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,025446f, -0,911715f, 0,00202f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_421(int iParam0) //Position: 0x158E5 / 88293
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,28232f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3140,326f, 17,84324f, 2793,679f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,051312f, 0,999628f, 0,002022f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_422(int iParam0) //Position: 0x1595E / 88414
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,28232f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3137,64f, 17,91048f, 2793,611f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,020505f, 0,996919f, 0,00202f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_423(int iParam0) //Position: 0x159D7 / 88535
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,31504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3144f, 18,28687f, 2794,482f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,020941f, -0,671641f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_424(int iParam0) //Position: 0x15A4C / 88652
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,31504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3145,765f, 18,25973f, 2795,249f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,173329f, 0,635013f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_425(int iParam0) //Position: 0x15AC1 / 88769
{
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) != 9 || GET_OBJECT_TYPE(&iParam0) != 10)
		{
			if (IS_VOLUME_VALID(GET_VOLUME_FROM_OBJECT(&iParam0)))
			{
				Global_40058 = &iParam0;
				if (DECOR_CHECK_EXIST(&iParam0, "crimeInMonitorVolume"))
				{
					DECOR_REMOVE(&iParam0, "crimeInMonitorVolume");
				}
				Function_426(0);
			}
		}
	}
	return;
}

void Function_426(int iParam0) //Position: 0x15B44 / 88900
{
	if (IS_OBJECT_VALID(&Global_40058))
	{
		if (DECOR_CHECK_EXIST(&Global_40058, "crimeInMonitorVolume"))
		{
			DECOR_REMOVE(&Global_40058, "crimeInMonitorVolume");
		}
		DECOR_SET_BOOL(&Global_40058, "crimeInMonitorVolume", iParam0);
	}
	return;
}

void Function_427() //Position: 0x15BB8 / 89016
{
	*(&iLocal_4 + 512) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 424[02]) = Function_428(StackVal, StackVal, &Global_11146, &Global_12992, 1, Vector(-3283,07f, 15,48869f, 2737,789f), Vector(0.0f, 0.0f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 424[02], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 424[02], false);
	TASK_WANDER(&iLocal_4 + 424[02], 3212836864);
	SET_ACTOR_FACTION(&iLocal_4 + 424[02], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 424[02], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 424[02], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 424[02], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 424[02]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 424[02]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 424[02], &iLocal_4 + 584[3]);
	*(&iLocal_4 + 424[12]) = Function_428(StackVal, StackVal, &Global_11146, &Global_12992, 2, Vector(-3231,563f, 15,94393f, 2728,857f), Vector(0.0f, 270.0f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 424[12], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 424[12], false);
	TASK_WANDER(&iLocal_4 + 424[12], 3212836864);
	SET_ACTOR_FACTION(&iLocal_4 + 424[12], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 424[12], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 424[12], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 424[12], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 424[12]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 424[12]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 424[12], &iLocal_4 + 584[3]);
	*(&iLocal_4 + 424[22]) = Function_428(StackVal, StackVal, &Global_11146, &Global_12992, 3, Vector(-3240,034f, 15,97463f, 2711,994f), Vector(0.0f, 90.0f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 424[22], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 424[22], false);
	TASK_WANDER(&iLocal_4 + 424[22], 3212836864);
	SET_ACTOR_FACTION(&iLocal_4 + 424[22], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 424[22], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 424[22], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 424[22], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 424[22]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 424[22]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 424[22], &iLocal_4 + 584[3]);
	*(&iLocal_4 + 424[32]) = Function_428(StackVal, StackVal, &Global_11146, &Global_12992, 4, Vector(-3252,054f, 17,29321f, 2688f), Vector(0.0f, 90.0f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 424[32], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 424[32], false);
	TASK_WANDER(&iLocal_4 + 424[32], 3212836864);
	SET_ACTOR_FACTION(&iLocal_4 + 424[32], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 424[32], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 424[32], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 424[32], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 424[32]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 424[32]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 424[32], &iLocal_4 + 584[3]);
	*(&iLocal_4 + 424[42]) = Function_428(StackVal, StackVal, &Global_11146, &Global_12992, 5, Vector(-3304,291f, 17,94205f, 2656,68f), Vector(0.0f, 17,5f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 424[42], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 424[42], false);
	TASK_WANDER(&iLocal_4 + 424[42], 3212836864);
	SET_ACTOR_FACTION(&iLocal_4 + 424[42], 20);
	ACTOR_START_FORCE_HOLSTER(&iLocal_4 + 424[42], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 424[42], 0);
	SET_ALLOW_EXECUTE(&iLocal_4 + 424[42], 0);
	AI_IGNORE_ACTOR(&iLocal_4 + 424[42]);
	AI_DONT_HARM_ACTOR(&iLocal_4 + 424[42]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 424[42], &iLocal_4 + 584[3]);
	return;
}

int Function_428(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x15F91 / 90001
{
	var uVar0;
	var uVar1;
	
	uVar0 = fParam2;
	uVar1 = Function_429(&iParam0, &fParam1, uVar0, &iParam7, 0, 1);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		LOG_ERROR("CREATE_ACTOR_AS_REGIONAL got NULL when it tried to steal the character");
		return "";
	}
	PRINTSTRING("Spawning Regional Character at ");
	PRINTVECTOR(Param3);
	PRINTNL();
	SET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&uVar1), Param3);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar1), Param5);
	GET_POSITION(&uVar1, &Param3);
	PRINTSTRING("New position is ");
	PRINTVECTOR(Param3);
	PRINTNL();
	return &uVar1;
}

var Function_429(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x16081 / 90241
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_187(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_187(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_187(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_184(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_431(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_187(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_184(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_184(&(Param0[iVar02]), 1);
	Function_430(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_430(int iParam0, bool bParam1) //Position: 0x16248 / 90696
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_431(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x162FA / 90874
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_54(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

bool Function_432() //Position: 0x16421 / 91169
{
	if (IS_OBJECT_VALID(&Global_40058))
	{
		if (!DECOR_CHECK_EXIST(&Global_40058, "crimeInMonitorVolume"))
		{
			return 0;
		}
		return DECOR_GET_BOOL(&Global_40058, "crimeInMonitorVolume");
	}
	return 0;
}

int Function_433(struct<2> Param0, float fParam2, int iParam3, int iParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1647B / 91259
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_388(&Global_54076, &iParam3, fParam2))
	{
		Function_239(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_388(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_384(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_302(&iParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_383(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_382(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_382(&iParam9, 0, 15, 1, &iParam3);
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
	if (Function_384(1))
	{
		Function_381(1);
		if (!Function_380())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_379();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_382(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_382(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_434() //Position: 0x16624 / 91684
{
	if (iLocal_719 < 3 && iLocal_719 > 105)
	{
		Function_462();
		if (iLocal_1220 == 0)
		{
			Function_269(&iLocal_4 + 1488[1]);
			if (Function_360(StackVal, &Global_54076, Function_269(&iLocal_4 + 1488[1]), 100.0f))
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1220 = 1;
			}
		}
		Function_284(0);
	}
	switch (iLocal_719)
	{
		case 0x00000000:
			Function_339(0);
			SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_734 = Global_46736[0];
			Function_312(bLocal_718);
			Function_303(StackVal, Function_312(bLocal_718), bLocal_718, Global_46736[0], Function_311(bLocal_718), 0);
			iLocal_719 = 1;
			break;
		
		case 0x00000001:
			if (Function_257(&Local_472))
			{
				if (STREAMING_IS_WORLD_LOADED() && Function_334(bLocal_734))
				{
					Function_279(&iLocal_1062, &iLocal_4 + 688[2], 1, 1, 1);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_1062, &bLocal_1066, 1, 1, 0);
					iLocal_719 = 2;
				}
			}
			else
			{
				iLocal_719 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_719 = 5;
			break;
		
		case 0x00000005:
			Function_244(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_719 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				Function_461();
				if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v1_AA"))
				{
					iLocal_1270 = 0;
				}
				else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v2_AA"))
				{
					iLocal_1270 = 1;
				}
				else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v3_AA"))
				{
					iLocal_1270 = 2;
				}
				else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v4_AA"))
				{
					iLocal_1270 = 3;
				}
				else
				{
					iLocal_1270 = 99;
				}
				uLocal_1255 = ADD_BLIP_FOR_OBJECT(&bLocal_1066, 325, 0f, 2, 0);
				iLocal_719 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_302("Merchant02_wagon_on", 7,5f, 1, 2, 0, 0, 0, 0);
				iLocal_719 = 8;
			}
			break;
		
		case 0x00000008:
			Function_459(&fLocal_1152, 60.0f, 200.0f, &iLocal_1062, "Merchant02_wagon_on", "Merchant02_abandoned", &bLocal_996, 1, 0, 0, 325, 1);
			if (Function_458(&Global_54076, &bLocal_1066, 0))
			{
				if (!Function_456(&iLocal_1062, &bLocal_1066))
				{
					STOP_VEHICLE(&bLocal_1066);
				}
				else
				{
					START_VEHICLE(&bLocal_1066);
					if (Function_254(&iLocal_1108))
					{
						Function_354(&iLocal_1108);
					}
					Function_230();
					Function_249();
					iLocal_1269 = 1;
					Function_355(&iLocal_1128);
					iLocal_719 = 9;
				}
			}
			else
			{
				if (!Function_254(&iLocal_1108))
				{
					Function_355(&iLocal_1108);
				}
				if (Function_252(&iLocal_1108) <= 15.0f)
				{
					Function_293(&iLocal_1108);
				}
			}
			break;
		
		case 0x00000009:
			Function_459(&fLocal_1152, 60.0f, 200.0f, &iLocal_1062, "Merchant02_wagon_return_02", "Merchant02_abandoned", &bLocal_996, 1, 0, 0, 325, 1);
			Function_456(&iLocal_1062, &bLocal_1066);
			Function_444(&uLocal_1094);
			if (Function_439())
			{
				Function_438();
				if (IS_OBJECT_VALID(&uLocal_1094))
				{
					if (Function_435(&uLocal_1094, 0, 1, 0, 0, 0))
					{
						Function_402(&uLocal_1094);
						Function_218();
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						STOP_VEHICLE(&bLocal_1066);
						ENABLE_VEHICLE_SEAT(&bLocal_1066, 0, 0);
						ENABLE_VEHICLE_SEAT(&bLocal_1066, 1, 0);
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_719 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_979[0] = 1;
				bLocal_718 = true;
				iLocal_719 = 0;
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			break;
	}
	return;
}

bool Function_435(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x16A21 / 92705
{
	var uVar0;
	int iVar1;
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
				iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&iVar1))
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
			iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&iVar1))
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
				Function_437(&iVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&iVar1))
			{
				if (Function_409(&iVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&iVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&iVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&iVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&iVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_409(&iVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&iVar1, &iVar3, &uVar5);
					Function_436(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&iVar1, &iVar3, &uVar5);
					Function_436(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
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

int Function_436(vector3 vParam0) //Position: 0x16C56 / 93270
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

void Function_437(bool bParam0, bool bParam1) //Position: 0x16CCC / 93388
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(&bParam0))
	{
		uVar0 = GET_MOUNT(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&bParam0))
	{
		bVar1 = GET_VEHICLE(&bParam0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			STOP_VEHICLE(&bVar1);
		}
	}
	else if (!&bParam1 || Function_409(&bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&bParam0, 1);
	}
	return;
}

void Function_438() //Position: 0x16D36 / 93494
{
	char[] cVar0[4];
	
	if (!Function_254(&iLocal_1112))
	{
		Function_355(&iLocal_1112);
	}
	cVar0 = GET_ACTOR_STUCK_STATE(&bLocal_1066);
	switch (cVar0)
	{
		case 0xFFFFFFFF:
			break;
		
		case 0x00000000:
			Function_293(&iLocal_1112);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (Function_252(&iLocal_1112) < 30.0f)
			{
				iLocal_1213 = 1;
			}
			break;
		
		case 0x00000003:
			iLocal_1213 = 1;
			break;
		
		case 0x00000004:
			iLocal_1213 = 1;
			break;
	}
	if (iLocal_1213 == 1)
	{
		Function_239("Merchant02_wagon_stuck");
		bLocal_996 = true;
	}
	return;
}

bool Function_439() //Position: 0x16DDA / 93658
{
	if (Function_458(&Global_54076, &bLocal_1066, 0) && Function_458(&iLocal_1062, &bLocal_1066, 1))
	{
		if (iLocal_1205 == 0)
		{
			if (!IS_OBJECT_VALID(&uLocal_1094))
			{
				if (IS_BLIP_VALID(&uLocal_1255))
				{
					REMOVE_BLIP(&uLocal_1255);
				}
				HUD_CLEAR_OBJECTIVE();
				Function_269(&iLocal_4 + 1488[1]);
				Function_269(&iLocal_4 + 1488[1]);
				uLocal_1094 = Function_410(StackVal, StackVal, &iLocal_470, Function_54(), Function_269(&iLocal_4 + 1488[1]), Function_269(&iLocal_4 + 1488[1]), &Global_54076, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_269(&iLocal_4 + 1488[1]);
				Function_442(StackVal, Function_269(&iLocal_4 + 1488[1]), 0, 16, 1);
				Function_163(Global_46760[1]);
				iLocal_1171 = 0;
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_302("Merchant02_go_to_farm", 7,5f, 1, 2, 0, 0, 0, 0);
				iLocal_1205 = 1;
			}
		}
		return 1;
	}
	if (iLocal_1171 == 0)
	{
		if (!IS_BLIP_VALID(&uLocal_1255))
		{
			if (IS_OBJECT_VALID(&uLocal_1094))
			{
				Function_402(&uLocal_1094);
				Function_218();
			}
			uLocal_1255 = ADD_BLIP_FOR_OBJECT(&bLocal_1066, 325, 0f, 2, 0);
			HUD_CLEAR_OBJECTIVE();
			Function_441();
			Function_354(&iLocal_1120);
		}
		if (!Function_458(&Global_54076, &bLocal_1066, 0))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_302("Merchant02_wagon_back_on", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_1116);
				iLocal_1171 = 1;
			}
		}
	}
	else if (iLocal_1171 == 1)
	{
		if (Function_252(&iLocal_1116) < 15.0f)
		{
			Function_440();
			Function_293(&iLocal_1116);
		}
	}
	iLocal_1205 = 0;
	return 0;
}

void Function_440() //Position: 0x16F6D / 94061
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_standstill", "Merchant02_standstill", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441() //Position: 0x16FC0 / 94144
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jumpsOutStagecoach", "Merchant02_jumpsOutStagecoach", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_442(struct<2> Param0, var uParam2, var uParam3, var uParam4) //Position: 0x17023 / 94243
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = uParam3;
	if (uParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (uParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_443(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_443(var uParam0) //Position: 0x170E4 / 94436
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

void Function_444(int iParam0) //Position: 0x1712D / 94509
{
	if (Function_439())
	{
		if (IS_OBJECT_VALID(&iParam0))
		{
			if (Function_388(&Global_54076, &iParam0, 20.0f))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				if (Function_254(&iLocal_1128))
				{
					Function_354(&iLocal_1128);
				}
				if (iLocal_1269 != 10)
				{
					iLocal_1269 = 10;
				}
			}
		}
		if (Function_455())
		{
			if (!bLocal_1211)
			{
				Function_454(&iLocal_1062, "Merchant02_gunOnWest", "Merchant02_gunOnChar", "Merchant02_shootsRand", "Merchant02_stagecoach_tooFast", "Merchant02_stagecoach_tooSlow", "Merchant02_stagecoach_offRoad", "Merchant02_stagecoachStealHorse");
				Function_453();
				switch (iLocal_1269)
				{
					case 0x00000001:
						if (Function_396(&iLocal_1128, 5.0f))
						{
							iLocal_1269 = 2;
						}
						break;
					
					case 0x00000002:
						if (!Function_139())
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1062, 8.0f))
							{
								Function_447(&iLocal_1270);
								AUDIO_MUSIC_SET_MOOD("RIDING", 0, 4294967295, 4294967295);
								iLocal_1269 = 3;
							}
						}
						break;
					
					case 0x00000003:
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_1062, 36.0f))
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
						}
						else
						{
							Function_293(&iLocal_1128);
							iLocal_1269 = 4;
						}
						break;
					
					case 0x00000004:
						if (Function_396(&iLocal_1128, 10.0f))
						{
							iLocal_1269 = 5;
						}
						break;
					
					case 0x00000005:
						if (!Function_139())
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1062, 8.0f))
							{
								Function_447(&iLocal_1270);
								iLocal_1269 = 6;
							}
						}
						break;
					
					case 0x00000006:
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_1062, 36.0f))
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
						}
						else
						{
							Function_293(&iLocal_1128);
							iLocal_1269 = 7;
						}
						break;
					
					case 0x00000007:
						Function_269(&iLocal_4 + 1488[1]);
						if (Function_360(StackVal, &Global_54076, Function_269(&iLocal_4 + 1488[1]), 800.0f))
						{
							iLocal_1204 = 1;
							iLocal_1269 = 8;
						}
						break;
					
					case 0x00000008:
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!Function_139())
							{
								if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1062, 8.0f))
								{
									Function_446(0);
									Function_445();
									iLocal_1269 = 9;
								}
							}
						}
						break;
					
					case 0x00000009:
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_1062, 36.0f))
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
						}
						else
						{
							Function_293(&iLocal_1128);
							iLocal_1269 = 10;
						}
						break;
					
					case 0x0000000A:
						break;
					}
				}
			}
	}
	return;
}

void Function_445() //Position: 0x17409 / 95241
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AA", "Merchant02_planHatched_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AB", "Merchant02_planHatched_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AC", "Merchant02_planHatched_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AD", "Merchant02_planHatched_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AE", "Merchant02_planHatched_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_5000", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AF", "Merchant02_planHatched_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AG", "Merchant02_planHatched_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AH", "Merchant02_planHatched_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AI", "Merchant02_planHatched_v1_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AJ", "Merchant02_planHatched_v1_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AK", "Merchant02_planHatched_v1_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AL", "Merchant02_planHatched_v1_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AM", "Merchant02_planHatched_v1_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AN", "Merchant02_planHatched_v1_AN", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AO", "Merchant02_planHatched_v1_AO", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AP", "Merchant02_planHatched_v1_AP", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AQ", "Merchant02_planHatched_v1_AQ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_350", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AR", "Merchant02_planHatched_v1_AR", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AS", "Merchant02_planHatched_v1_AS", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AT", "Merchant02_planHatched_v1_AT", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AU", "Merchant02_planHatched_v1_AU", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AV", "Merchant02_planHatched_v1_AV", true, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446(int iParam0) //Position: 0x17A97 / 96919
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

void Function_447(int iParam0) //Position: 0x17ABC / 96956
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_452();
			break;
		
		case 0x00000001:
			Function_451();
			break;
		
		case 0x00000002:
			Function_450();
			break;
		
		case 0x00000003:
			Function_449();
			break;
		
		default:
			Function_448();
			iLocal_1269 = 10;
			break;
	}
	iParam0++;
	return;
}

void Function_448() //Position: 0x17B10 / 97040
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_noTalk", "Merchant02_noTalk", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x17B5B / 97115
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AA", "Merchant02_rideBanter_v4_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AB", "Merchant02_rideBanter_v4_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AC", "Merchant02_rideBanter_v4_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AD", "Merchant02_rideBanter_v4_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AE", "Merchant02_rideBanter_v4_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AF", "Merchant02_rideBanter_v4_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AG", "Merchant02_rideBanter_v4_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AH", "Merchant02_rideBanter_v4_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AI", "Merchant02_rideBanter_v4_AI", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AJ", "Merchant02_rideBanter_v4_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AK", "Merchant02_rideBanter_v4_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AL", "Merchant02_rideBanter_v4_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AM1", "Merchant02_rideBanter_v4_AM1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AM2", "Merchant02_rideBanter_v4_AM2", false, 1, 0, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x17F3F / 98111
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AA", "Merchant02_rideBanter_v3_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AB", "Merchant02_rideBanter_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AC", "Merchant02_rideBanter_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AD", "Merchant02_rideBanter_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AE", "Merchant02_rideBanter_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AF", "Merchant02_rideBanter_v3_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AG", "Merchant02_rideBanter_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AH", "Merchant02_rideBanter_v3_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AI", "Merchant02_rideBanter_v3_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AJ", "Merchant02_rideBanter_v3_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AK", "Merchant02_rideBanter_v3_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AL", "Merchant02_rideBanter_v3_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AM1", "Merchant02_rideBanter_v3_AM1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AM2", "Merchant02_rideBanter_v3_AM2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AN", "Merchant02_rideBanter_v3_AN", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AO", "Merchant02_rideBanter_v3_AO", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AP", "Merchant02_rideBanter_v3_AP", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AQ", "Merchant02_rideBanter_v3_AQ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AR", "Merchant02_rideBanter_v3_AR", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AS", "Merchant02_rideBanter_v3_AS", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AT", "Merchant02_rideBanter_v3_AT", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AU", "Merchant02_rideBanter_v3_AU", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AV", "Merchant02_rideBanter_v3_AV", true, 1, 0, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451() //Position: 0x18598 / 99736
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AA", "Merchant02_rideBanter_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AB", "Merchant02_rideBanter_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AC", "Merchant02_rideBanter_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AD", "Merchant02_rideBanter_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AE", "Merchant02_rideBanter_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AF", "Merchant02_rideBanter_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AG", "Merchant02_rideBanter_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AH", "Merchant02_rideBanter_v2_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AI", "Merchant02_rideBanter_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AJ", "Merchant02_rideBanter_v2_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AK", "Merchant02_rideBanter_v2_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AL", "Merchant02_rideBanter_v2_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AM", "Merchant02_rideBanter_v2_AM", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AN", "Merchant02_rideBanter_v2_AN", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AO", "Merchant02_rideBanter_v2_AO", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AP", "Merchant02_rideBanter_v2_AP", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AQ", "Merchant02_rideBanter_v2_AQ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AR", "Merchant02_rideBanter_v2_AR", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AS", "Merchant02_rideBanter_v2_AS", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AT", "Merchant02_rideBanter_v2_AT", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AU", "Merchant02_rideBanter_v2_AU", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AV", "Merchant02_rideBanter_v2_AV", false, 1, 0, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452() //Position: 0x18BA0 / 101280
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AA", "Merchant02_rideBanter_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AB", "Merchant02_rideBanter_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AC", "Merchant02_rideBanter_v1_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AD", "Merchant02_rideBanter_v1_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AE", "Merchant02_rideBanter_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2220", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AF", "Merchant02_rideBanter_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AG", "Merchant02_rideBanter_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AH", "Merchant02_rideBanter_v1_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AI", "Merchant02_rideBanter_v1_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AJ", "Merchant02_rideBanter_v1_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AK", "Merchant02_rideBanter_v1_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AL", "Merchant02_rideBanter_v1_AL", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AM", "Merchant02_rideBanter_v1_AM", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AN", "Merchant02_rideBanter_v1_AN", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AO", "Merchant02_rideBanter_v1_AO", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AP", "Merchant02_rideBanter_v1_AP", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AQ", "Merchant02_rideBanter_v1_AQ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AR", "Merchant02_rideBanter_v1_AR", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AS", "Merchant02_rideBanter_v1_AS", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1890", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AT", "Merchant02_rideBanter_v1_AT", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AU", "Merchant02_rideBanter_v1_AU", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AV", "Merchant02_rideBanter_v1_AV", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AW", "Merchant02_rideBanter_v1_AW", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AX1", "Merchant02_rideBanter_v1_AX1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AX2", "Merchant02_rideBanter_v1_AX2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4190", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AY", "Merchant02_rideBanter_v1_AY", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AZ", "Merchant02_rideBanter_v1_AZ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_BA", "Merchant02_rideBanter_v1_BA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_BB", "Merchant02_rideBanter_v1_BB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_BC", "Merchant02_rideBanter_v1_BC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_BD", "Merchant02_rideBanter_v1_BD", false, 1, 0, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453() //Position: 0x19476 / 103542
{
	if (!iLocal_1204)
	{
		Function_269(&iLocal_4 + 1488[1]);
		if (Function_360(StackVal, &Global_54076, Function_269(&iLocal_4 + 1488[1]), 800.0f))
		{
			ABORT_SCRIPTED_CONVERSATION(1);
			LOG_ERROR("Hatching Plan.");
			iLocal_1269 = 8;
			iLocal_1204 = 1;
		}
	}
	return;
}

void Function_454(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x194C0 / 103616
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
	int iVar9;
	
	if (!Function_254(&iLocal_1156))
	{
		Function_355(&iLocal_1156);
	}
	else if (Function_396(&iLocal_1156, 5.0f))
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 1;
		iVar3 = 0;
		iVar4 = 0;
		uVar5 = "";
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_301(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				iVar9 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam3, &uParam3, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
						LOG_ERROR(&uParam3);
						Function_293(&iLocal_1156);
					}
				}
				if (IS_ACTOR_VALID(&iVar9))
				{
					if (IS_ACTOR_HUMAN(&iVar9))
					{
						if (&iVar9 == &iParam0)
						{
							if (Function_254(&iLocal_1160))
							{
								if (Function_396(&iLocal_1160, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam1, &uParam1, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
									Function_293(&iLocal_1156);
								}
							}
							else
							{
								Function_293(&iLocal_1160);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &iVar9))
						{
							if (Function_254(&iLocal_1160))
							{
								if (Function_396(&iLocal_1160, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam2, &uParam2, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
									LOG_ERROR(&uParam2);
									Function_293(&iLocal_1156);
								}
							}
							else
							{
								Function_293(&iLocal_1160);
							}
						}
						else if (Function_254(&iLocal_1160))
						{
							if (Function_396(&iLocal_1160, 0,25f))
							{
								Function_354(&iLocal_1160);
							}
						}
					}
					else if (Function_254(&iLocal_1160))
					{
						if (Function_396(&iLocal_1160, 0,25f))
						{
							Function_354(&iLocal_1160);
						}
					}
				}
				else if (Function_254(&iLocal_1160))
				{
					if (Function_396(&iLocal_1160, 0,25f))
					{
						Function_354(&iLocal_1160);
					}
				}
			}
			else if (Function_254(&iLocal_1160))
			{
				if (Function_396(&iLocal_1160, 0,25f))
				{
					Function_354(&iLocal_1160);
				}
			}
		}
		else if (Function_254(&iLocal_1160))
		{
			if (Function_396(&iLocal_1160, 0,25f))
			{
				Function_354(&iLocal_1160);
			}
		}
		if (Function_458(&Global_54076, &bLocal_1066, 0) && Function_458(&iParam0, &bLocal_1066, 1))
		{
			Function_269(&iLocal_4 + 1488[1]);
			if (!Function_360(StackVal, &bLocal_1066, Function_269(&iLocal_4 + 1488[1]), 20.0f))
			{
				if (Function_409(&bLocal_1066, 0) <= 12,5f)
				{
					if (Function_254(&iLocal_1164))
					{
						if (Function_396(&iLocal_1160, 7,5f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam4, &uParam4, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
							Function_293(&iLocal_1156);
						}
					}
					else
					{
						Function_293(&iLocal_1164);
					}
				}
				else if (Function_409(&bLocal_1066, 0) <= 2,5f)
				{
					if (Function_254(&iLocal_1164))
					{
						if (Function_396(&iLocal_1160, 7,5f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam5, &uParam5, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
							Function_293(&iLocal_1156);
						}
					}
					else
					{
						Function_293(&iLocal_1164);
					}
				}
				else if (Function_254(&iLocal_1164))
				{
					Function_354(&iLocal_1164);
				}
				if (Function_254(&iLocal_1164))
				{
					Function_354(&iLocal_1164);
				}
				if (!Function_254(&iLocal_1124))
				{
					Function_293(&iLocal_1124);
				}
				else if (Function_252(&iLocal_1124) < 0,5f)
				{
					if (GET_VEHICLE_BUMP_COUNT(&bLocal_1066) > 4)
					{
						RESET_VEHICLE_BUMP_COUNT(&bLocal_1066);
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam6, &uParam6, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
						LOG_ERROR(&uParam6);
						Function_293(&iLocal_1156);
						Function_293(&iLocal_1124);
					}
					else
					{
						RESET_VEHICLE_BUMP_COUNT(&bLocal_1066);
						Function_293(&iLocal_1124);
					}
				}
			}
		}
		else
		{
			if (Function_254(&iLocal_1164))
			{
				Function_354(&iLocal_1164);
			}
			if (GET_VEHICLE(&Global_54076) != &bLocal_1066)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam7, &uParam7, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
				Function_293(&iLocal_1156);
			}
		}
	}
}

bool Function_455() //Position: 0x1988E / 104590
{
	struct<2> Var0;
	bool bVar2;
	
	GET_ACTOR_VELOCITY(&bLocal_1066, &Var0);
	bVar2 = VMAG(Var0);
	if (bVar2 > 1.0f)
	{
		if (!Function_254(&iLocal_1120))
		{
			Function_355(&iLocal_1120);
		}
		if (Function_252(&iLocal_1120) < 8.0f)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_StopsCoach", "Merchant02_StopsCoach", 0, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
			Function_293(&iLocal_1120);
		}
		return 0;
	}
	Function_293(&iLocal_1120);
	return 1;
}

bool Function_456(int iParam0, int iParam1) //Position: 0x19923 / 104739
{
	if (Function_457(&iParam1, 4294967295, 1, 4294967295))
	{
		if (!Function_458(&iParam0, &iParam1, 1) && GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, true) == &iParam0)
		{
			if (GET_TASK_STATUS(&iParam0, 54) != 1)
			{
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iParam0, &iParam1, 1, 2, 0);
			}
		}
		else
		{
			if (GET_TASK_STATUS(&iParam0, 6) != 1)
			{
				TASK_STAND_STILL(&iParam0, -1.0f, 0, 0);
			}
			return 1;
		}
	}
	if (GET_TASK_STATUS(&iParam0, 0) != 1)
	{
		bLocal_1169 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_ACTOR(0, &Global_54076, 5.0f, 1);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iParam0, bLocal_1169);
		TASK_SEQUENCE_RELEASE(bLocal_1169, 1);
	}
	return 0;
}

bool Function_457(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x199B9 / 104889
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

bool Function_458(int iParam0, int iParam1, bool bParam2) //Position: 0x19A87 / 105095
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

int Function_459(struct<2> Param0, var uParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x19AB1 / 105137
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_408(&Global_54076, &iParam3, uParam2))
	{
		Function_239(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_408(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_384(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_302(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_383(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_382(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_382(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_384(2))
	{
		Function_381(2);
		if (!Function_380())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_379();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_191(&iParam3);
				Function_460(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_382(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_382(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_460(bool bParam0) //Position: 0x19C6F / 105583
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

void Function_461() //Position: 0x19CA2 / 105634
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_toRidgewood", "Merchant02_toRidgewood", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x19CF7 / 105719
{
	int iVar0;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&bLocal_1066);
	if (iVar0 <= iLocal_1172)
	{
		if (iVar0 > 1)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				Function_465();
			}
			else
			{
				Function_464();
			}
		}
		else
		{
			Function_463();
		}
		iLocal_1172 = iVar0;
	}
	return;
}

void Function_463() //Position: 0x19D32 / 105778
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_losesStageHorse2", "Merchant02_losesStageHorse2", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464() //Position: 0x19D91 / 105873
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_losesStageHorse", "Merchant02_losesStageHorse", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x19DEE / 105966
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_shootsStageHorse", "Merchant02_shootsStageHorse", false, 1, 1, 0, 1);
		Function_299(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x19E4D / 106061
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_719)
	{
		case 0x00000006:
			Function_514(&Local_472, 1);
			iLocal_470 = CREATE_LAYOUT(Function_54());
			if (!Function_257(&Local_472))
			{
				TELEPORT_ACTOR(&Global_54076, &Global_6667[1128] + 88, 1, 1, 1);
				bLocal_734 = Global_46736[0];
				Function_199(1, 0, 1);
				DESTROY_GC_OBJECTS(0, 1);
			}
			Function_513();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_04", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_719 = 7;
			break;
		
		case 0x00000007:
			if (Function_486())
			{
				Function_484();
				Function_479();
				bLocal_1066 = &iLocal_4 + 208[02];
				ENABLE_VEHICLE_SEAT(&bLocal_1066, 1, 0);
				Function_478(&bLocal_1066);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, true);
				iLocal_1172 = 2;
				bVar0 = false;
				while (bVar0 <= 2)
				{
					uLocal_1072[bVar0] = GET_DRAFT_ACTOR(bVar0, &bLocal_1066);
					if (IS_ACTOR_VALID(&(uLocal_1072[bVar0])))
					{
						SET_ACTOR_FACTION(&(uLocal_1072[bVar0]), 20);
						ACTOR_SET_GRABBED_BY_CUTSCENE(&(uLocal_1072[bVar0]), true);
					}
					bVar0++;
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 584[0]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 584[0]);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 584[0]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 584[0], 15);
				Function_336(9);
				if (Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, bLocal_718) && !Function_257(&Local_472))
				{
					if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Merchant_02/Merchant_02"))
					{
						Function_331(&Global_54076, &uLocal_1000);
						Function_331(&iLocal_1062, &uLocal_1000);
						Function_473(StackVal, "$/cutscene/Merchant_02/Merchant_02", &uLocal_999, &uLocal_1000, (&Global_6667[1128] + 88), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
						AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
						iLocal_719 = 8;
					}
					else
					{
						iLocal_719 = 8;
					}
				}
				else
				{
					iLocal_719 = 10;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_334(bLocal_734))
			{
				Global_99147 = 1;
				if (STREAMING_IS_WORLD_LOADED())
				{
					iLocal_719 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_246("$/cutscene/merchant_02/merchant_02", &iLocal_720, &Local_472, &bLocal_718, 55104, 54741, 54286, 50447, 50219, 62109, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_719 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_732 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, false);
			RESET_ACTOR_GAITS(&iLocal_1062, 0);
			SET_CRIPPLE_ENABLE(&iLocal_1062, 0);
			TASK_PRIORITY_SET(&iLocal_1062, true);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_1062, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_1062, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_1062, GET_ACTOR_MAX_HEALTH(&iLocal_1062));
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1062);
			ACTOR_START_FORCE_HOLSTER(&iLocal_1062, 0, 0);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1066, false);
			bVar1 = false;
			while (bVar1 <= 2)
			{
				uLocal_1072[bVar1] = GET_DRAFT_ACTOR(bVar1, &bLocal_1066);
				if (IS_ACTOR_VALID(&(uLocal_1072[bVar1])))
				{
					ACTOR_SET_GRABBED_BY_CUTSCENE(&(uLocal_1072[bVar1]), false);
				}
				bVar1++;
			}
			Function_231(9);
			Function_355(&iLocal_1100);
			Function_355(&iLocal_1104);
			Function_355(&iLocal_1116);
			Function_471(&uLocal_743, &iLocal_470);
			Function_325(&(Local_797[015]), &iLocal_1062, "Merchant", 0, 0x5f5e100, 1);
			Function_325(&(Local_797[115]), &bLocal_1066, "Wagon", 1, 0x5f5e100, 1);
			Function_470(&(Local_797[515]), &iLocal_470, 0x5f5e100);
			bLocal_718 = false;
			iLocal_719 = 0;
			Function_468(&Local_472, &bLocal_718, &iLocal_719);
			Function_467(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472);
			break;
	}
	return;
}

void Function_467(struct<41> Param0) //Position: 0x1A21E / 107038
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_718 = false;
			break;
		
		case 0x00000002:
			bLocal_718 = true;
			break;
		
		case 0x00000003:
			bLocal_718 = 2;
			break;
		
		case 0x00000004:
			bLocal_718 = 3;
			break;
		
		case 0x00000005:
			bLocal_718 = 4;
			break;
		
		case 0x00000006:
			bLocal_718 = 5;
			break;
		
		case 0x00000007:
			bLocal_718 = 101;
			break;
	}
}

void Function_468(int iParam0, var uParam1, int iParam2) //Position: 0x1A28B / 107147
{
	if (Function_257(&iParam0))
	{
		uParam1 = Function_319(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_469();
	}
	return;
}

void Function_469() //Position: 0x1A2C7 / 107207
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

int Function_470(struct<69> Param0) //Position: 0x1A318 / 107288
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
	Function_189();
	Function_189();
	Param0 = CREATE_POINT_IN_LAYOUT(&uParam1, "nMFT_Dummy", Function_189(), Function_189());
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	Param0.f_56 = 8;
	Param0.f_60 = 2;
	if (!Function_327(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_326(&Param0, 0);
	Param0.f_68 = 0;
	Function_322(&Param0, &iParam2, 0);
	Function_366(&Param0, 3);
	return 1;
}

int Function_471(struct<2>[] Param0) //Position: 0x1A439 / 107577
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_472(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_472(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_472(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_472(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_472(struct<13> Param0) //Position: 0x1AB12 / 109330
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
	Function_76(&Param0 + 12, iParam4);
	return 1;
}

int Function_473(var uParam0, var uParam1, var uParam2, struct<2> Param3, bool bParam5, float fParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x1ABE1 / 109537
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_360(StackVal, &Global_54076, Param3, (&fParam6 + ((IntToFloat(Function_361()) * (&fParam7 - &fParam6)) * 0,5f))))
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
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam8, &uParam9, &uParam10, &uParam11);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Function_477(&uParam2);
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_474(&uParam2);
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
	else if (!Function_360(StackVal, &Global_54076, Param3, (&fParam7 + ((IntToFloat(Function_361()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_360(StackVal, &Global_54076, Param3, &fParam6))
	{
	}
	return 0;
}

void Function_474(int iParam0) //Position: 0x1AF34 / 110388
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			Function_476(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, &iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var5, &Var7);
			Function_475(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_475(char* cParam0) //Position: 0x1AF95 / 110485
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

void Function_476(var uParam0, bool bParam1, struct<5>[] Param2) //Position: 0x1B0BE / 110782
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

void Function_477(struct<5>[] Param0) //Position: 0x1B15C / 110940
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

void Function_478(bool bParam0) //Position: 0x1B1B1 / 111025
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

void Function_479() //Position: 0x1B229 / 111145
{
	*(&iLocal_4 + 208[02]) = Function_480(StackVal, StackVal, &iLocal_4, Function_54(), 1202, 976, Vector(-2130,073f, 16,14567f, 2606,818f), Vector(103,4585f, 82,5474f, 105,7469f), 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 208[02], false);
	return;
}

int Function_480(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x1B27D / 111229
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
			if (Function_483(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_482(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_481(bVar16, &iVar1))
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

bool Function_481(int iParam0, bool[] bParam1) //Position: 0x1B4D0 / 111824
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

var Function_482(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x1B504 / 111876
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_483(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1B520 / 111904
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

void Function_484() //Position: 0x1B54C / 111948
{
	var uVar0;
	
	Function_485(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Merchant02_layout");
	(&iLocal_4 + 576) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 520[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-2125,186f, 19,28341f, 2607,215f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 9.0f, 12,5f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 520[0]);
	*(&iLocal_4 + 520[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3274,833f, 17,63433f, 2712,728f), Vector(0.0f, -44,45238f, 0.0f), Vector(51,85812f, 9.0f, 21,23197f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 520[1]);
	*(&iLocal_4 + 520[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3280,628f, 17,6777f, 2706,993f), Vector(0.0f, -44,45238f, 0.0f), Vector(35,56076f, 9.0f, 21,23197f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 520[2]);
	*(&iLocal_4 + 520[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3285,689f, 18,69407f, 2702,417f), Vector(0.0f, -44,45238f, 0.0f), Vector(21,23197f, 9.0f, 21,23197f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 520[3]);
	*(&iLocal_4 + 520[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3285,689f, 18,69407f, 2702,417f), Vector(0.0f, -44,45238f, 0.0f), Vector(21,23197f, 9.0f, 21,23197f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 520[4]);
	*(&iLocal_4 + 520[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3296,355f, 17,56864f, 2714,065f), Vector(0.0f, -18,24995f, 0.0f), Vector(15,07722f, 9.0f, 9,59585f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 520[5]);
	*(&iLocal_4 + 632) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "nnVols_set");
	*(&iLocal_4 + 584[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-2126,056f, 19.0f, 2609,883f), Vector(0.0f, 0.0f, 0.0f), Vector(25,92578f, 9.0f, 20,35836f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 632, &iLocal_4 + 584[0]);
	*(&iLocal_4 + 584[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3143,977f, 16,24136f, 2791,949f), Vector(0.0f, -9,345558f, 0.0f), Vector(8,869763f, 9.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 632, &iLocal_4 + 584[1]);
	*(&iLocal_4 + 584[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3269,475f, 16,56333f, 2706,536f), Vector(0.0f, -30,05278f, 0.0f), Vector(154,7367f, 24.0f, 101.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 632, &iLocal_4 + 584[2]);
	*(&iLocal_4 + 584[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-3288,58f, 17,56864f, 2701,39f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 3.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 632, &iLocal_4 + 584[3]);
	*(&iLocal_4 + 584[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3261,084f, 20,19365f, 2718,114f), Vector(0.0f, -30,05278f, 0.0f), Vector(69,70601f, 24.0f, 56,11283f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 632, &iLocal_4 + 584[4]);
	*(&iLocal_4 + 672) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "RingVols_set");
	*(&iLocal_4 + 640[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-3282,472f, 19,40771f, 2704,901f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 672, &iLocal_4 + 640[0]);
	*(&iLocal_4 + 640[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-3282,472f, 19,40771f, 2704,901f), Vector(0.0f, 20.0f, 0.0f), Vector(6.0f, 3.0f, 6.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 672, &iLocal_4 + 640[1]);
	*(&iLocal_4 + 640[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-3282,472f, 19,40771f, 2704,901f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 3.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 672, &iLocal_4 + 640[2]);
	*(&iLocal_4 + 680) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 688[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-2126,809f, 16,74994f, 2601,492f), Vector(-5,407139f, 632,0066f, 6,247584f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 688[0], &iLocal_4 + 680);
	*(&iLocal_4 + 688[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-2126,809f, 16,74994f, 2601,492f), Vector(-5,407139f, 632,0066f, 6,247584f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 688[1], &iLocal_4 + 680);
	*(&iLocal_4 + 688[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-2128,317f, 16,453f, 2604,632f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 688[2], &iLocal_4 + 680);
	*(&iLocal_4 + 688[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-2128,317f, 16,453f, 2604,632f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 688[3], &iLocal_4 + 680);
	*(&iLocal_4 + 728) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 736[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3146,211f, 16,591f, 2793,734f), Vector(0.0f, 80.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 736[0], &iLocal_4 + 728);
	*(&iLocal_4 + 736[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3146,211f, 16,591f, 2793,734f), Vector(0.0f, 80.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 736[1], &iLocal_4 + 728);
	*(&iLocal_4 + 736[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3139,789f, 16,31471f, 2791,551f), Vector(0.0f, 80.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 736[2], &iLocal_4 + 728);
	*(&iLocal_4 + 736[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3172,248f, 19,30604f, 2785,766f), Vector(0.0f, 57,8384f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 736[3], &iLocal_4 + 728);
	*(&iLocal_4 + 776) = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 784[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3286,827f, 17,53143f, 2705,174f), Vector(0.0f, 22,68684f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[0], &iLocal_4 + 776);
	*(&iLocal_4 + 784[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3283,228f, 17,56864f, 2701,82f), Vector(0.0f, 70,30385f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[1], &iLocal_4 + 776);
	*(&iLocal_4 + 784[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,972f, 17,56863f, 2704f), Vector(0.0f, 45,5f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[2], &iLocal_4 + 776);
	*(&iLocal_4 + 784[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,46f, 17,5687f, 2700,85f), Vector(0.0f, 67,2076f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[3], &iLocal_4 + 776);
	*(&iLocal_4 + 784[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,918f, 17,56863f, 2704f), Vector(0.0f, 407,7205f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[4], &iLocal_4 + 776);
	*(&iLocal_4 + 784[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3286,371f, 17,5689f, 2702,115f), Vector(0.0f, 45,5f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[5], &iLocal_4 + 776);
	*(&iLocal_4 + 784[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3286,378f, 17,56863f, 2704f), Vector(0.0f, 29,59031f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[6], &iLocal_4 + 776);
	*(&iLocal_4 + 784[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3283,2f, 17,56865f, 2700f), Vector(0.0f, 77,34872f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 784[7], &iLocal_4 + 776);
	*(&iLocal_4 + 856) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 864[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,002f, 17,49146f, 2704,027f), Vector(0.0f, 25.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 864[0], &iLocal_4 + 856);
	*(&iLocal_4 + 864[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,55f, 17,5687f, 2704,5f), Vector(0.0f, -145,722f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 864[1], &iLocal_4 + 856);
	*(&iLocal_4 + 864[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3289,257f, 17,56863f, 2699,545f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 864[2], &iLocal_4 + 856);
	*(&iLocal_4 + 864[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,21f, 17,5687f, 2703,43f), Vector(0.0f, -177,793f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 864[3], &iLocal_4 + 856);
	*(&iLocal_4 + 864[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,797f, 17,54202f, 2701,744f), Vector(0.0f, 50.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 864[4], &iLocal_4 + 856);
	*(&iLocal_4 + 864[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,81f, 17,5687f, 2702,6f), Vector(0.0f, -169,849f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 864[5], &iLocal_4 + 856);
	*(&iLocal_4 + 920) = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 928[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3290,07f, 17,3092f, 2704.0f), Vector(0.0f, -109,8062f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[0], &iLocal_4 + 920);
	*(&iLocal_4 + 928[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3288,59f, 17,446f, 2704,39f), Vector(0.0f, -101,4068f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[1], &iLocal_4 + 920);
	*(&iLocal_4 + 928[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,68f, 17,5687f, 2701,43f), Vector(0.0f, -175,822f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[2], &iLocal_4 + 920);
	*(&iLocal_4 + 928[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,46f, 17,5687f, 2700,85f), Vector(0.0f, -140,2759f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[3], &iLocal_4 + 920);
	*(&iLocal_4 + 928[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,8f, 17,5504f, 2704,58f), Vector(0.0f, -66,3408f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[4], &iLocal_4 + 920);
	*(&iLocal_4 + 928[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,43f, 17,5249f, 2705,38f), Vector(0.0f, -84,7577f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[5], &iLocal_4 + 920);
	*(&iLocal_4 + 928[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3286,818f, 17,5249f, 2706,036f), Vector(0.0f, -123,3669f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[6], &iLocal_4 + 920);
	*(&iLocal_4 + 928[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3281,56f, 17,5687f, 2702,09f), Vector(0.0f, 161,904f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 928[7], &iLocal_4 + 920);
	*(&iLocal_4 + 1000) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1008[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,364f, 17,569f, 2704,64f), Vector(0.0f, 315.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[0], &iLocal_4 + 1000);
	*(&iLocal_4 + 1008[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,494f, 17,56863f, 2703,507f), Vector(0.0f, -116,4592f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[1], &iLocal_4 + 1000);
	*(&iLocal_4 + 1008[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,07f, 17,5687f, 2700,82f), Vector(0.0f, 174,983f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[2], &iLocal_4 + 1000);
	*(&iLocal_4 + 1008[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3279,71f, 17,5661f, 2707,31f), Vector(0.0f, 49,92233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[3], &iLocal_4 + 1000);
	*(&iLocal_4 + 1048) = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3290,07f, 17,3092f, 2704.0f), Vector(0.0f, -113,2185f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[0], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3288,59f, 17,446f, 2704,39f), Vector(0.0f, -99,08442f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[1], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,61f, 17,5687f, 2698,39f), Vector(0.0f, -169,908f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[2], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,46f, 17,5687f, 2700,85f), Vector(0.0f, 192,0645f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[3], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,33f, 17,5577f, 2704,35f), Vector(0.0f, -76,1881f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[4], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,73f, 17,5039f, 2704,72f), Vector(0.0f, -97,7808f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[5], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,85f, 17,5687f, 2699,44f), Vector(0.0f, -160,4786f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[6], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,69f, 17,5687f, 2698,77f), Vector(0.0f, 173,594f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[7], &iLocal_4 + 1048);
	*(&iLocal_4 + 1128) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1136[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285.0f, 17,45723f, 2704,901f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1136[0], &iLocal_4 + 1128);
	*(&iLocal_4 + 1136[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,42f, 17,5687f, 2703,06f), Vector(0.0f, -159,589f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1136[1], &iLocal_4 + 1128);
	*(&iLocal_4 + 1136[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,07f, 17,5687f, 2700,82f), Vector(0.0f, 174,983f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1136[2], &iLocal_4 + 1128);
	*(&iLocal_4 + 1136[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3283,37f, 17,5687f, 2704,16f), Vector(0.0f, 25,5173f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1136[3], &iLocal_4 + 1128);
	*(&iLocal_4 + 1136[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3280.0f, 17,45723f, 2704,901f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1136[4], &iLocal_4 + 1128);
	*(&iLocal_4 + 1136[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3283,39f, 17,5687f, 2704,14f), Vector(0.0f, 23,5428f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1136[5], &iLocal_4 + 1128);
	*(&iLocal_4 + 1192) = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd05Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1200[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3290,07f, 17,3093f, 2704.0f), Vector(0.0f, -10,0006f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[0], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3288,59f, 17,446f, 2704,39f), Vector(0.0f, 7,23038f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[1], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,61f, 17,5687f, 2698,39f), Vector(0.0f, 76,1922f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[2], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,56f, 17,5687f, 2700,86f), Vector(0.0f, 67,2015f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[3], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,04f, 17,481f, 2706,77f), Vector(0.0f, -23,8158f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[4], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3281,9f, 17,5507f, 2706,67f), Vector(0.0f, 35,2156f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[5], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,85f, 17,5687f, 2699,44f), Vector(0.0f, 92,837f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[6], &iLocal_4 + 1192);
	*(&iLocal_4 + 1200[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,69f, 17,5687f, 2698,77f), Vector(0.0f, 121,303f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1200[7], &iLocal_4 + 1192);
	*(&iLocal_4 + 1272) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1280[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,835f, 17,46827f, 2707,166f), Vector(0.0f, 676,3422f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[0], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,16f, 17,569f, 2703,13f), Vector(0.0f, -122,9742f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[1], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,727f, 17,56863f, 2699,271f), Vector(0.0f, 179,5994f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[2], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3286,74f, 17,569f, 2703,37f), Vector(0.0f, -118,0117f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[3], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3280.0f, 17,45723f, 2704,901f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[4], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3280,89f, 17,5687f, 2705,82f), Vector(0.0f, 58,33288f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[5], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,11f, 19,0687f, 2703,08f), Vector(0.0f, -148,555f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[6], &iLocal_4 + 1272);
	*(&iLocal_4 + 1344) = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd06Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1352[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,82f, 17,56863f, 2703,818f), Vector(0.0f, -112,1606f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[0], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3286,955f, 17,56863f, 2705,046f), Vector(0.0f, -98,53657f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[1], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3283,51f, 17,569f, 2699,94f), Vector(0.0f, 209,0319f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[2], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,219f, 17,56863f, 2700,348f), Vector(0.0f, 190,5756f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[3], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,259f, 17,56863f, 2698,61f), Vector(0.0f, -160,3826f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[4], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,23f, 17,66887f, 2707,756f), Vector(0.0f, 6,841308f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[5], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,825f, 17,56863f, 2700,098f), Vector(0.0f, 212,7094f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[6], &iLocal_4 + 1344);
	*(&iLocal_4 + 1352[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,69f, 17,5687f, 2698,77f), Vector(0.0f, 205,0759f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1352[7], &iLocal_4 + 1344);
	*(&iLocal_4 + 1424) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1432[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3285,11f, 17,5687f, 2703,08f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[0], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3293,445f, 15,98061f, 2715,046f), Vector(0.0f, 252,3665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[1], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3289,15f, 17,56864f, 2701,734f), Vector(0.0f, 226,8113f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[2], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3305,65f, 16,17f, 2712,22f), Vector(0.0f, 446,9353f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[3], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3312,432f, 16,26849f, 2711,641f), Vector(0.0f, 446,9353f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[4], &iLocal_4 + 1424);
	*(&iLocal_4 + 1480) = CREATE_OBJECTSET_IN_LAYOUT("nStageOneSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1488[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-2130,073f, 16,14567f, 2606,818f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1488[0], &iLocal_4 + 1480);
	*(&iLocal_4 + 1488[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3143,977f, 16,24136f, 2792,155f), Vector(0.0f, 80.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1488[1], &iLocal_4 + 1480);
	*(&iLocal_4 + 1488[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "AtShow", Vector(-3287,002f, 17,49146f, 2704,027f), Vector(0.0f, 25.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1488[2], &iLocal_4 + 1480);
	*(&iLocal_4 + 1520) = CREATE_OBJECTSET_IN_LAYOUT("nStageTwoSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1528[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,36f, 17,5692f, 2694,98f), Vector(0.0f, 105.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[0], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,55f, 17,57f, 2701,12f), Vector(0.0f, 48,32f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[1], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3258,318f, 18,88402f, 2725,888f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[2], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3284,797f, 17,54202f, 2701,744f), Vector(0.0f, 50.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[3], &iLocal_4 + 1520);
	*(&iLocal_4 + 1568) = CREATE_OBJECTSET_IN_LAYOUT("nStageThreeSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1576[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3288,183f, 17,56864f, 2702,6f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[0], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3288,892f, 17,56864f, 2701,089f), Vector(0.0f, 225.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[1], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3292,908f, 17,44635f, 2703,474f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[2], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3287,625f, 17,569f, 2703,617f), Vector(0.0f, 235,9931f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[3], &iLocal_4 + 1568);
	*(&iLocal_4 + 1616) = CREATE_OBJECTSET_IN_LAYOUT("nStageFourSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1624[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3279,71f, 17,5661f, 2707,31f), Vector(0.0f, 49,92233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1624[0], &iLocal_4 + 1616);
	*(&iLocal_4 + 1640) = CREATE_OBJECTSET_IN_LAYOUT("nStageFiveSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1648[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3282,472f, 17,319f, 2704,901f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1648[0], &iLocal_4 + 1640);
	*(&iLocal_4 + 1664[03]) = Vector(-3288,046f, 18,371f, 2700,637f);
	*(&iLocal_4 + 1664[03] + 12) = Vector(0.0f, 111,8781f, 0.0f);
	*(&iLocal_4 + 1664[13]) = Vector(-3287,409f, 18,371f, 2700,875f);
	*(&iLocal_4 + 1664[13] + 12) = Vector(0.0f, 50.0f, 0.0f);
	*(&iLocal_4 + 1664[23]) = Vector(-3287,259f, 18,371f, 2700,4f);
	*(&iLocal_4 + 1664[23] + 12) = Vector(0.0f, 72,06677f, 0.0f);
	*(&iLocal_4 + 1664[33]) = Vector(-3287,99f, 18,371f, 2700,467f);
	*(&iLocal_4 + 1664[33] + 12) = Vector(0.0f, 20.0f, 0.0f);
	*(&iLocal_4 + 1664[43]) = Vector(-3287,486f, 18,371f, 2700,566f);
	*(&iLocal_4 + 1664[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1664[53]) = Vector(-3287,693f, 18,371f, 2700,51f);
	*(&iLocal_4 + 1664[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1816[03]) = Vector(-3120,142f, 15,28346f, 2801,411f);
	*(&iLocal_4 + 1816[03] + 12) = Vector(0.0f, 50.0f, 0.0f);
	*(&iLocal_4 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "merchant02_idle", Vector(-3289,701f, 17,56863f, 2699,406f), Vector(0.0f, -107,3376f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 1856) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "RidgeEnterPath");
	return;
}

void Function_485(int iParam0, int iParam1) //Position: 0x1D376 / 119670
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

bool Function_486() //Position: 0x1D3C0 / 119744
{
	struct<9> Var0;
	
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_512(0))
		{
			return 0;
		}
		if (!Function_508())
		{
			return 0;
		}
		if (!Function_503(&iLocal_484))
		{
			return 0;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\MERCHANT02"))
		{
			return 0;
		}
		Function_269(&iLocal_4 + 688[2]);
		vVar0 = Function_269(&iLocal_4 + 688[2]);
		if (!IS_ACTOR_VALID(&iLocal_1062))
		{
			iLocal_1062 = Function_494(2, 0, 1, vVar0.x, vVar0.y, vVar0.z, 0, 0, 0);
			EQUIP_ACCESSORY(&iLocal_1062, 0, 1);
			return 0;
		}
		if (!IS_ACTOR_VALID(&uLocal_1064))
		{
			uLocal_1064 = Function_487(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&uLocal_1064, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_487(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1D480 / 119936
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
		Function_493(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_492())
		{
			return "";
		}
	}
	if (!Function_490())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_206();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_269(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_269(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_269(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_269(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_489(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_489(StackVal, Var4, 0, 1, 1);
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
		Function_488(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_488(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1D7DD / 120797
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

var Function_489(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1D827 / 120871
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

bool Function_490() //Position: 0x1D8C7 / 121031
{
	if (Function_491() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_491() //Position: 0x1D8DD / 121053
{
	return Global_21369.f_244;
}

bool Function_492() //Position: 0x1D8E8 / 121064
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_493(var uParam0, bool bParam1, bool bParam2) //Position: 0x1D908 / 121096
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_76(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_76(&Global_21369 + 72 + 32, 64);
	}
	return;
}

var Function_494(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1D937 / 121143
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
		if (!Function_165(&(Global_43791[Global_46722[3]]), 4))
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
		Function_502(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_501(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_497(&Global_15402[iParam014] + 16, &uParam7);
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
		Function_496(&bVar1, 0, 0, 0, 0);
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
		Function_495(&bVar1, 0);
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

void Function_495(var uParam0, bool bParam1) //Position: 0x1DE77 / 122487
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_496(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x1DE99 / 122521
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

var Function_497(int iParam0, int iParam1) //Position: 0x1DEFA / 122618
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_315(iParam0))
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
						Function_498(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_498(var uParam0, int iParam1) //Position: 0x1DF88 / 122760
{
	Function_500(&uParam0);
	Function_499(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_499(int iParam0) //Position: 0x1DFB4 / 122804
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_500(int iParam0) //Position: 0x1DFDA / 122842
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

var Function_501(int iParam0, int iParam1) //Position: 0x1E0B0 / 123056
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
					if (IS_LAYOUTREF_VALID(&iParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &iParam1);
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

void Function_502(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E156 / 123222
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
			(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
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
						Function_191(&uVar1);
					}
				}
				Function_460(&uVar0);
			}
		}
	}
	return;
}

bool Function_503(struct<2>[] Param0) //Position: 0x1E265 / 123493
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_507();
	iVar1 = 0;
	if (!Function_177(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_506(&(Param0[iVar02]), 8);
		}
		else if (Function_505())
		{
			iVar1 = 1;
			Function_506(&(Param0[iVar02]), 8);
		}
		Function_506(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_177(&(Param0[iVar02]), 4))
		{
			if (!Function_177(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_177(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_177(&(Param0[02]), 8) || iVar1));
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
				Function_506(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_177(&(Param0[iVar02]), 4))
		{
			if (!Function_177(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_506(&(Param0[iVar02]), 2);
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
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_506(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_506(&(Param0[iVar02]), 2);
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
	Function_504();
	return 1;
}

void Function_504() //Position: 0x1E627 / 124455
{
	if (!Function_291(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_505() //Position: 0x1E667 / 124519
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

void Function_506(struct<13> Param0) //Position: 0x1E695 / 124565
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_507() //Position: 0x1E6A8 / 124584
{
	if (!Function_291(128))
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

bool Function_508() //Position: 0x1E6EA / 124650
{
	Function_511(&iLocal_4 + 8, 1202, 2, 0);
	Function_511(&iLocal_4 + 8, 976, 2, 0);
	Function_511(&iLocal_4 + 8, 173, 2, 0);
	Function_511(&iLocal_4 + 8, 172, 2, 0);
	Function_511(&iLocal_4 + 8, 39, 2, 0);
	Function_511(&iLocal_4 + 8, 765, 2, 0);
	Function_511(&iLocal_4 + 8, 760, 2, 0);
	Function_511(&iLocal_4 + 8, 758, 2, 0);
	Function_511(&iLocal_4 + 8, 763, 2, 0);
	Function_511(&iLocal_4 + 8, 171, 2, 0);
	Function_511(&iLocal_4 + 8, 611, 2, 0);
	Function_509(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/merchant02_idle", 1, 0);
	if (Function_503(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_509(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1E7CC / 124876
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_510(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_506(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_510(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1E80A / 124938
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_177(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_506(&(Param0[iVar02]), 4);
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

var Function_511(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1E8D9 / 125145
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_177(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_506(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_506(&(Param0[iVar02]), 8);
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

bool Function_512(bool bParam0) //Position: 0x1E9B5 / 125365
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

void Function_513() //Position: 0x1E9E5 / 125413
{
	Function_509(&iLocal_484, "hat_toss", 5, 0);
	Function_509(&iLocal_484, "custom/hat_toss", 8, 0);
	Function_509(&iLocal_484, "crowd_win_lose", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_win_lose", 8, 0);
	Function_509(&iLocal_484, "stand_shove", 5, 0);
	Function_509(&iLocal_484, "custom/stand_shove", 8, 0);
	Function_509(&iLocal_484, "crowd_cheer", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_cheer", 8, 0);
	Function_509(&iLocal_484, "gather", 5, 0);
	Function_509(&iLocal_484, "custom/gather", 8, 0);
	Function_509(&iLocal_484, "crowd_callout_r", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_callout_r", 8, 0);
	Function_509(&iLocal_484, "crowd_callout", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_callout", 8, 0);
	Function_509(&iLocal_484, "crowd_right", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_right", 8, 0);
	Function_509(&iLocal_484, "crowd_left", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_left", 8, 0);
	Function_509(&iLocal_484, "crowd_pointer", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_pointer", 8, 0);
	Function_509(&iLocal_484, "crowd_front", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_front", 8, 0);
	Function_509(&iLocal_484, "crowd_center", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_center", 8, 0);
	Function_509(&iLocal_484, "crowd_idles", 5, 0);
	Function_509(&iLocal_484, "custom/crowd_idles", 8, 0);
	Function_509(&iLocal_484, "Merchant02_shothand", 5, 0);
	Function_509(&iLocal_484, "custom/Merchant02_shothand", 8, 0);
	Function_509(&iLocal_484, "merchant02_idle", 5, 0);
	Function_509(&iLocal_484, "custom/merchant02_idle", 8, 0);
	Function_509(&iLocal_484, "aguila_mel", 5, 0);
	Function_511(&iLocal_484, 546, 3, 0);
	Function_511(&iLocal_484, 173, 2, 0);
	Function_511(&iLocal_484, 37, 2, 0);
	Function_511(&iLocal_484, 38, 2, 0);
	Function_511(&iLocal_484, 175, 2, 0);
	Function_511(&iLocal_484, 174, 2, 0);
	Function_511(&iLocal_484, 39, 2, 0);
	Function_511(&iLocal_484, 170, 2, 0);
	Function_511(&iLocal_484, 171, 2, 0);
	Function_511(&iLocal_484, 172, 2, 0);
	Function_509(&iLocal_484, "$/fragments/p_gen_skullcattle03x", 0, 0);
	Function_509(&iLocal_484, "$/fragments/p_gen_tableSnakeOil01x", 0, 0);
	Function_509(&iLocal_484, "$/fragments/p_gen_bottleSnakeOil01x", 0, 0);
	Function_509(&iLocal_484, "$/fragments/p_gen_bottleSnakeOil02x", 0, 0);
	Function_509(&iLocal_484, "RidgewoodFarm", 12, 0);
	Function_509(&iLocal_484, "Merchant02", 10, 0);
	return;
}

void Function_514(int iParam0, bool bParam1) //Position: 0x1EEA1 / 126625
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_521(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_257(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_96();
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
	if (!Function_257(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_520();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230();
	Function_249();
	Function_239("");
	Function_519(0);
	Function_518();
	Function_213();
	Function_212();
	ENABLE_JOURNAL_REPLAY(0);
	Function_517();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_487(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_340(0, 0x40400000);
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
	Function_516(13);
	Function_516(14);
	Function_516(25);
	Function_516(24);
	Function_516(12);
	Function_516(27);
	Function_516(26);
	Function_516(15);
	Function_515();
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

void Function_515() //Position: 0x1F2E1 / 127713
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

void Function_516(int iParam0) //Position: 0x1F366 / 127846
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_517() //Position: 0x1F386 / 127878
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

void Function_518() //Position: 0x1F3CC / 127948
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_519(int iParam0) //Position: 0x1F3E2 / 127970
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_216())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_520() //Position: 0x1F41B / 128027
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_521(int iParam0, int iParam1) //Position: 0x1F424 / 128036
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
			Function_522(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_522(struct<113> Param0) //Position: 0x1F4AB / 128171
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

void Function_523() //Position: 0x1F509 / 128265
{
	return;
}

bool Function_524(struct<25> Param0) //Position: 0x1F50F / 128271
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000005:
					if (bLocal_718 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_shootMember_demo", "Merchant02_shootMember_demo", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_718 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_shootsWest_demo", "Merchant02_shootsWest_demo", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000005:
					if (bLocal_718 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_shootMember_demo", "Merchant02_shootMember_demo", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_718 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_shootsWest_demo", "Merchant02_shootsWest_demo", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000005:
					if (bLocal_718 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1062, "Merchant02_shootMember_demo", "Merchant02_shootMember_demo", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_525(&Param0, 1);
			return 1;
		}
	}
	Function_525(&Param0, 0);
	return 0;
}

void Function_525(struct<25> Param0) //Position: 0x1F789 / 128905
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

bool Function_526(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1F7B4 / 128948
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
		Function_525(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_544(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_543(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_543(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_530(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_525(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_529(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_528(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_529(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_527(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_239(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_528(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_525(&Param2, 0);
	return 0;
}

void Function_527(char* cParam0) //Position: 0x1FBCA / 129994
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

void Function_528(struct<25> Param0) //Position: 0x1FCBE / 130238
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

void Function_529(bool bParam0) //Position: 0x1FD36 / 130358
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_530(struct<57> Param0) //Position: 0x1FD5A / 130394
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
			return Function_541(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_534(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_541(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_531(&Param0, bVar2);
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
						bVar2 = Function_541(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_531(&Param0, bVar2);
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

var Function_531(int iParam0, bool bParam1) //Position: 0x1FECB / 130763
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
				bParam1 = Function_533(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_532(16);
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
				bParam1 = Function_533(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_532(256);
			}
		}
	}
	return bParam1;
}

bool Function_532(int iParam0) //Position: 0x20008 / 131080
{
	return 2 | iParam0;
}

int Function_533(int iParam0) //Position: 0x20012 / 131090
{
	return 4 | iParam0;
}

int Function_534(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2001C / 131100
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
				iParam3 = Function_540(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_532(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_535(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_532(16);
		}
	}
	return 0;
}

int Function_535(int iParam0, vector3 vParam1) //Position: 0x200D7 / 131287
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_539(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_538(iVar0, 3, 1, bParam3))
			{
				if (!Function_543(&iParam0, 8, 1))
				{
					return Function_537(64, 1024, bParam2);
				}
			}
			return Function_536(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_538(iVar0, 2, 1, bParam3))
			{
				if (!Function_543(&iParam0, 32, 1))
				{
					return Function_537(64, 1024, bParam2);
				}
			}
			return Function_536(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_538(iVar0, 1, 1, bParam3))
			{
				if (!Function_543(&iParam0, 64, 1))
				{
					return Function_537(64, 1024, bParam2);
				}
			}
			return Function_536(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_538(iVar0, 3, 1, bParam3))
			{
				if (!Function_543(&iParam0, 128, 1))
				{
					return Function_537(64, 1024, bParam2);
				}
			}
			return Function_536(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_538(iVar0, 1, 1, bParam3))
			{
				if (!Function_543(&iParam0, 1024, 1))
				{
					return Function_537(64, 1024, bParam2);
				}
			}
			return Function_536(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_538(iVar0, 1, 1, bParam3))
			{
				if (!Function_543(&iParam0, 1024, 1))
				{
					return Function_537(64, 1024, bParam2);
				}
			}
			return Function_536(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_536(int iParam0, int iParam1, bool bParam2) //Position: 0x2029F / 131743
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_537(int iParam0, int iParam1, bool bParam2) //Position: 0x202B4 / 131764
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_538(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x202C9 / 131785
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_539(int iParam0) //Position: 0x202E6 / 131814
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

int Function_540(var uParam0, vector3 vParam1) //Position: 0x20359 / 131929
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_539(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_538(iVar0, 3, 1, bParam2))
			{
				if (!Function_543(&uParam0, 8, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000009:
			if (Function_538(iVar0, 3, 1, bParam2))
			{
				if (!Function_543(&uParam0, 8, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x0000006E:
			if (Function_538(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(&uParam0, 16, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x0000005B:
			if (Function_538(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(&uParam0, 32, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000031:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&uParam0, 64, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000007:
			if (Function_538(iVar0, 3, 1, bParam2))
			{
				if (!Function_543(&uParam0, 128, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000008:
			if (Function_538(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(&uParam0, 256, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000014:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&uParam0, 512, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000018:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&uParam0, 512, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000057:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&uParam0, 1024, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000058:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&uParam0, 1024, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_541(struct<65> Param0) //Position: 0x20582 / 132482
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
						return Function_540(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_543(&Param0, 2, 1))
					{
						return Function_533(8);
					}
					return Function_532(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_543(&Param0, 4, 1))
					{
						return Function_533(16);
					}
					return Function_532(16);
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
							return Function_535(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_543(&Param0, 2, 1))
						{
							return Function_533(128);
						}
						return Function_532(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_543(&Param0, 4, 1))
						{
							return Function_533(256);
						}
						return Function_532(256);
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
						return Function_535(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_543(&Param0, 2, 1))
					{
						return Function_533(8);
					}
					return Function_532(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_543(&Param0, 4, 1))
					{
						return Function_533(16);
					}
					return Function_532(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_542(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_543(&Param0, 2, 1))
					{
						return Function_533(8);
					}
					return Function_532(8);
				}
				if (!Function_543(&Param0, 4, 1))
				{
					return Function_533(16);
				}
				return Function_532(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_535(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_457(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_532(128);
							}
							if (!Function_543(&Param0, 2, 1))
							{
								return Function_533(8);
							}
							return Function_532(8);
						}
						if (iParam4 == 2)
						{
							if (Function_457(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_532(256);
							}
							if (!Function_543(&Param0, 4, 1))
							{
								return Function_533(16);
							}
							return Function_532(16);
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

int Function_542(int iParam0, vector3 vParam1) //Position: 0x20868 / 133224
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_539(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_538(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(&iParam0, 16, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x0000005B:
			if (Function_538(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(&iParam0, 32, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000057:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&iParam0, 1024, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		case 0x00000058:
			if (Function_538(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(&iParam0, 1024, 1))
				{
					return Function_533(64);
				}
			}
			return Function_532(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_543(struct<69> Param0) //Position: 0x2098A / 133514
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

int Function_544(bool bParam0) //Position: 0x209B4 / 133556
{
	if (IS_ITERATOR_VALID(&bParam0))
	{
		ITERATE_EVERYWHERE(&bParam0);
		ITERATE_ON_PARTIAL_NAME(&bParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&bParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_545(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x209EA / 133610
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_546(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x20A17 / 133655
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_547(StackVal, Param4, uParam3, &iParam6);
		Function_236(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_547(struct<2> Param0, var uParam2, var uParam3) //Position: 0x20A58 / 133720
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_549(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_548(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_548(int iParam0) //Position: 0x20ADA / 133850
{
	if (!Function_84(iParam0))
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

var Function_549(struct<2> Param0, bool bParam2) //Position: 0x20F88 / 135048
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

struct<8> Function_550(int iParam0) //Position: 0x20FF4 / 135156
{
	Function_312(iParam0 + 1);
	return StackVal, Function_312(iParam0 + 1);
}

int Function_551(int iParam0) //Position: 0x21001 / 135169
{
	return Function_311(iParam0 + 1);
}

