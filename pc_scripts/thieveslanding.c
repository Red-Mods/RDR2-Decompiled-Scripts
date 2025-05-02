//Decompiled with MagicRDR v1.0
//Function Count : 144
//Statics Count : 709
//Natives Count : 179
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 52;
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
	int iLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	char[] cLocal_337[4] = 0;
	var uLocal_338 = 0;
	char[] cLocal_339[4] = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	bool bLocal_343 = false;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 14;
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
	int iLocal_656 = 0;
	var uLocal_657 = 8;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_334 = 0;
	Function_143("Initializing Thieves Landing", 3);
	SET_DUST_LEVEL(0);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_343 = 1000;
		switch (iLocal_334)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_334 = 1;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000001:
				if (Function_142())
				{
					Global_98961 = 0;
					iLocal_334 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
					AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
					AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
				}
				bLocal_343 = false;
				break;
			
			case 0x00000002:
				if (Function_133())
				{
					Function_132(&(Global_43791[iScriptParam_0]), 32);
					iLocal_334 = 3;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000003:
				uLocal_344 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ThievesLandingVol", &iScriptParam_0, 2, 0);
				Function_131(&Global_11646, &Global_13732, iScriptParam_0);
				iLocal_334 = 5;
				bLocal_343 = false;
				break;
			
			case 0x00000005:
				if (Function_130(&Global_11646, &Global_13732, iScriptParam_0))
				{
					iLocal_334 = 4;
					bLocal_343 = false;
				}
				else
				{
					bLocal_343 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_129(&(Global_43791[iScriptParam_0]), 16) && Function_128(Global_44085[iScriptParam_09]))
				{
					iLocal_334 = 6;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000006:
				Function_127(0, &uLocal_346, 30.0f);
				Function_126(StackVal, 0, &uLocal_346, Vector(163,809f, 73,566f, 2190,791f));
				Function_125(StackVal, 0, &uLocal_346, Vector(163,809f, 73,566f, 2190,791f));
				Function_124(StackVal, 0, &uLocal_346, Vector(163,809f, 73,566f, 2190,791f));
				Function_123(StackVal, 0, &uLocal_346, Vector(163,809f, 73,566f, 2190,791f));
				Function_122(StackVal, 0, &uLocal_346, Vector(163,809f, 73,566f, 2190,791f));
				Function_121(StackVal, 0, &uLocal_346, Vector(163,809f, 73,566f, 2190,791f));
				Function_120(0, &uLocal_346, &iLocal_4);
				Function_127(1, &uLocal_346, 40.0f);
				Function_119(1, &uLocal_346, &iLocal_14 + 1104);
				Function_125(StackVal, 1, &uLocal_346, Vector(172,154f, 73,83222f, 2231,446f));
				Function_124(StackVal, 1, &uLocal_346, Vector(172,154f, 73,83222f, 2231,446f));
				Function_123(StackVal, 1, &uLocal_346, Vector(172,154f, 73,83222f, 2231,446f));
				Function_122(StackVal, 1, &uLocal_346, Vector(172,154f, 73,83222f, 2231,446f));
				Function_121(StackVal, 1, &uLocal_346, Vector(172,154f, 73,83222f, 2231,446f));
				Function_120(1, &uLocal_346, &iLocal_4);
				Function_127(2, &uLocal_346, 40.0f);
				Function_126(StackVal, 2, &uLocal_346, Vector(155,1374f, 73,782f, 2196,109f));
				Function_125(StackVal, 2, &uLocal_346, Vector(155,1374f, 73,782f, 2196,109f));
				Function_124(StackVal, 2, &uLocal_346, Vector(155,1374f, 73,782f, 2196,109f));
				Function_123(StackVal, 2, &uLocal_346, Vector(155,1374f, 73,782f, 2196,109f));
				Function_122(StackVal, 2, &uLocal_346, Vector(168,639f, 73,754f, 2230,877f));
				Function_121(StackVal, 2, &uLocal_346, Vector(205,134f, 73,533f, 2192,076f));
				Function_120(2, &uLocal_346, &iLocal_4);
				Function_127(3, &uLocal_346, 40.0f);
				Function_126(StackVal, 3, &uLocal_346, Vector(151,681f, 73,958f, 2244,202f));
				Function_125(StackVal, 3, &uLocal_346, Vector(151,681f, 73,958f, 2244,202f));
				Function_124(StackVal, 3, &uLocal_346, Vector(151,681f, 73,958f, 2244,202f));
				Function_123(StackVal, 3, &uLocal_346, Vector(151,681f, 73,958f, 2244,202f));
				Function_122(StackVal, 3, &uLocal_346, Vector(151,681f, 73,958f, 2244,202f));
				Function_121(StackVal, 3, &uLocal_346, Vector(151,681f, 73,958f, 2244,202f));
				Function_120(3, &uLocal_346, &iLocal_4);
				Function_127(4, &uLocal_346, 30.0f);
				Function_126(StackVal, 4, &uLocal_346, Vector(138,3975f, 76,53075f, 2327,367f));
				Function_125(StackVal, 4, &uLocal_346, Vector(138,3975f, 76,53075f, 2327,367f));
				Function_124(StackVal, 4, &uLocal_346, Vector(138,3975f, 76,53075f, 2327,367f));
				Function_123(StackVal, 4, &uLocal_346, Vector(138,3975f, 76,53075f, 2327,367f));
				Function_122(StackVal, 4, &uLocal_346, Vector(146,5062f, 73,78095f, 2238,222f));
				Function_121(StackVal, 4, &uLocal_346, Vector(186,746f, 73,205f, 2223,258f));
				Function_120(4, &uLocal_346, &iLocal_4);
				Function_127(5, &uLocal_346, 40.0f);
				Function_126(StackVal, 5, &uLocal_346, Vector(135,955f, 73,676f, 2319,85f));
				Function_125(StackVal, 5, &uLocal_346, Vector(135,955f, 73,676f, 2319,85f));
				Function_124(StackVal, 5, &uLocal_346, Vector(135,955f, 73,676f, 2319,85f));
				Function_123(StackVal, 5, &uLocal_346, Vector(135,955f, 73,676f, 2319,85f));
				Function_122(StackVal, 5, &uLocal_346, Vector(135,955f, 73,676f, 2319,85f));
				Function_121(StackVal, 5, &uLocal_346, Vector(135,955f, 73,676f, 2319,85f));
				Function_120(5, &uLocal_346, &iLocal_4);
				Function_127(6, &uLocal_346, 40.0f);
				Function_119(6, &uLocal_346, &iLocal_14 + 1032);
				Function_125(StackVal, 6, &uLocal_346, Vector(176,031f, 76,483f, 2180,656f));
				Function_124(StackVal, 6, &uLocal_346, Vector(176,031f, 76,483f, 2180,656f));
				Function_123(StackVal, 6, &uLocal_346, Vector(176,031f, 76,483f, 2180,656f));
				Function_122(StackVal, 6, &uLocal_346, Vector(176,031f, 76,483f, 2180,656f));
				Function_118(6, &uLocal_346, &iLocal_14 + 1032);
				Function_120(6, &uLocal_346, &iLocal_4);
				Function_127(7, &uLocal_346, 60.0f);
				Function_126(StackVal, 7, &uLocal_346, Vector(127,69f, 73,286f, 2220,064f));
				Function_125(StackVal, 7, &uLocal_346, Vector(127,69f, 73,286f, 2220,064f));
				Function_124(StackVal, 7, &uLocal_346, Vector(127,69f, 73,286f, 2220,064f));
				Function_123(StackVal, 7, &uLocal_346, Vector(127,69f, 73,286f, 2220,064f));
				Function_122(StackVal, 7, &uLocal_346, Vector(142,092f, 76,821f, 2244,598f));
				Function_121(StackVal, 7, &uLocal_346, Vector(209,204f, 73,42f, 2186,115f));
				Function_120(7, &uLocal_346, &iLocal_4);
				Function_127(8, &uLocal_346, 60.0f);
				Function_126(StackVal, 8, &uLocal_346, Vector(168,562f, 73,754f, 2235,864f));
				Function_125(StackVal, 8, &uLocal_346, Vector(127,2727f, 73,286f, 2222,097f));
				Function_124(StackVal, 8, &uLocal_346, Vector(127,2727f, 73,286f, 2222,097f));
				Function_123(StackVal, 8, &uLocal_346, Vector(127,2727f, 73,286f, 2222,097f));
				Function_122(StackVal, 8, &uLocal_346, Vector(166,916f, 73,754f, 2227,444f));
				Function_121(StackVal, 8, &uLocal_346, Vector(168,562f, 73,754f, 2235,864f));
				Function_120(8, &uLocal_346, &iLocal_4);
				Function_127(9, &uLocal_346, 40.0f);
				Function_126(StackVal, 9, &uLocal_346, Vector(95,238f, 73,592f, 2265,981f));
				Function_117(9, &uLocal_346, &iLocal_14 + 1128);
				Function_116(9, &uLocal_346, &iLocal_14 + 1128);
				Function_115(9, &uLocal_346, &iLocal_14 + 1128);
				Function_114(9, &uLocal_346, &iLocal_14 + 1128);
				Function_121(StackVal, 9, &uLocal_346, Vector(95,238f, 73,592f, 2265,981f));
				Function_120(9, &uLocal_346, &iLocal_4);
				Function_127(10, &uLocal_346, 30.0f);
				Function_126(StackVal, 10, &uLocal_346, Vector(172,128f, 73,543f, 2181,927f));
				Function_125(StackVal, 10, &uLocal_346, Vector(172,128f, 73,543f, 2181,927f));
				Function_124(StackVal, 10, &uLocal_346, Vector(172,128f, 73,543f, 2181,927f));
				Function_123(StackVal, 10, &uLocal_346, Vector(172,128f, 73,543f, 2181,927f));
				Function_122(StackVal, 10, &uLocal_346, Vector(172,128f, 73,543f, 2181,927f));
				Function_121(StackVal, 10, &uLocal_346, Vector(172,128f, 73,543f, 2181,927f));
				Function_120(10, &uLocal_346, &iLocal_4);
				Function_127(11, &uLocal_346, 60.0f);
				Function_119(11, &uLocal_346, &iLocal_14 + 1136);
				Function_117(11, &uLocal_346, &iLocal_14 + 1152);
				Function_116(11, &uLocal_346, &iLocal_14 + 1120);
				Function_115(11, &uLocal_346, &iLocal_14 + 1152);
				Function_114(11, &uLocal_346, &iLocal_14 + 1024);
				Function_118(11, &uLocal_346, &iLocal_14 + 1024);
				Function_120(11, &uLocal_346, &iLocal_4);
				Function_127(12, &uLocal_346, 40.0f);
				Function_126(StackVal, 12, &uLocal_346, Vector(171,913f, 73,754f, 2223,275f));
				Function_125(StackVal, 12, &uLocal_346, Vector(171,913f, 73,754f, 2223,275f));
				Function_124(StackVal, 12, &uLocal_346, Vector(171,913f, 73,754f, 2223,275f));
				Function_123(StackVal, 12, &uLocal_346, Vector(171,913f, 73,754f, 2223,275f));
				Function_122(StackVal, 12, &uLocal_346, Vector(171,913f, 73,754f, 2223,275f));
				Function_121(StackVal, 12, &uLocal_346, Vector(171,913f, 73,754f, 2223,275f));
				if (Global_39266[2])
				{
					Function_113(&(Global_11646[122]), 2);
				}
				else
				{
					Function_112(&(Global_11646[122]), 2);
				}
				Function_127(13, &uLocal_346, 40.0f);
				Function_126(StackVal, 13, &uLocal_346, Vector(151,353f, 76,958f, 2240,619f));
				Function_125(StackVal, 13, &uLocal_346, Vector(149,36f, 73,81f, 2243,81f));
				Function_124(StackVal, 13, &uLocal_346, Vector(149,36f, 73,81f, 2243,81f));
				Function_123(StackVal, 13, &uLocal_346, Vector(149,36f, 73,81f, 2243,81f));
				Function_122(StackVal, 13, &uLocal_346, Vector(149,36f, 73,81f, 2243,81f));
				Function_121(StackVal, 13, &uLocal_346, Vector(149,36f, 73,81f, 2243,81f));
				Function_120(13, &uLocal_346, &iLocal_4);
				Function_108(&Global_11646, &Global_13732, &uLocal_346, &Global_10996, iScriptParam_0);
				if (Function_129(&(Global_43791[iScriptParam_0]), 256) || !Function_107(2))
				{
					iLocal_656 = 1;
				}
				uLocal_335 = Function_106(Global_46816[1], "ThievesLanding", "pawnShop01", 1);
				if (IS_DOOR_VALID(&uLocal_335))
				{
					Function_105(&uLocal_335, &Global_12796[53] + 16);
				}
				cLocal_337 = Function_106(Global_46816[1], "ThievesLanding", "tailorsDoctors01", 3);
				if (IS_DOOR_VALID(&cLocal_337))
				{
					Function_105(&cLocal_337, &Global_12796[63] + 16);
				}
				cLocal_339 = Function_106(Global_46816[1], "ThievesLanding", "gunsmith01", 1);
				if (IS_DOOR_VALID(&cLocal_339))
				{
					Function_105(&cLocal_339, &Global_12796[03] + 16);
				}
				uLocal_341 = Function_106(Global_46816[1], "ThievesLanding", "tailorsDoctors01", 1);
				if (IS_DOOR_VALID(&uLocal_341))
				{
					Function_105(&uLocal_341, &Global_12796[103] + 16);
				}
				Function_104(&Global_13732[53] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_pawnshop_set"));
				Function_103(&Global_13732[53] + 16, 1);
				Function_102(&Global_13732[53] + 16, 397);
				Function_104(&Global_13732[63] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_doctor_set"));
				Function_103(&Global_13732[63] + 16, 3);
				Function_102(&Global_13732[63] + 16, 398);
				Function_104(&Global_13732[03] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_gunsmith_set"));
				Function_103(&Global_13732[03] + 16, 2);
				Function_102(&Global_13732[03] + 16, 399);
				Function_104(&Global_13732[103] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_tailor_set"));
				Function_103(&Global_13732[103] + 16, 4);
				Function_102(&Global_13732[103] + 16, 520);
				Function_101(1);
				Function_95(2, &iLocal_14 + 1096, &iLocal_14 + 872, &iLocal_14 + 1008, Function_106(iScriptParam_0, "thievesLanding", "npigFarm01", 2), 0, &iLocal_4 + 32);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "thiv_players_room"));
				}
				else
				{
					LOG_ERROR("THI: Cannot find thiv_players_room to restrict players room");
				}
				Function_132(&(Global_43791[iScriptParam_0]), 8);
				if (Function_129(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_94(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_334 = 10;
				}
				else
				{
					iLocal_334 = 7;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000007:
				Function_93(iScriptParam_0);
				if (Function_92())
				{
					Function_83(StackVal, &Global_98318, 0, Global_46816[1], "$/content/Frontier/Mini_Games/Poker_THI/Poker_THI", 4294967295, 0, "ThiPokerHC", 433, Vector(164,503f, 73,349f, 2230,934f), 2,5f, 0, 0);
					Function_82(&Global_98318, 0, 15);
				}
				else
				{
					Function_83(StackVal, &Global_98318, 0, Global_46816[1], "$/content/Frontier/Mini_Games/Poker_THI/Poker_THI", 4294967295, 0, "ThiPoker", 433, Vector(164,503f, 73,349f, 2230,934f), 2,5f, 0, 0);
					Function_82(&Global_98318, 0, 25);
				}
				if (Function_92())
				{
					Function_83(StackVal, &Global_98318, 2, Global_46816[1], "$/content/Frontier/Mini_Games/BlackJack_THI/BlackJack_THI", 4294967295, 0, "ThiBlackJackHC", 349, Vector(172,915f, 73,754f, 2224,359f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "thiv_blackjack"));
					Function_82(&Global_98318, 2, 20);
				}
				else
				{
					Function_83(StackVal, &Global_98318, 2, Global_46816[1], "$/content/Frontier/Mini_Games/BlackJack_THI/BlackJack_THI", 4294967295, 0, "ThiBlackJack", 349, Vector(172,915f, 73,754f, 2224,359f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "thiv_blackjack"));
					Function_82(&Global_98318, 2, 40);
				}
				if (Function_81(49) && !Function_81(50))
				{
					Function_83(StackVal, &Global_98318, 7, Global_46816[1], "$/content/Frontier/Mini_Games/LiarsDice_THI/LiarsDice_THI", 4294967295, 0, "RcmLiarsDice", 426, Vector(167,344f, 73,755f, 2224,521f), 1.0f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "thiv_liarsdice"));
					Function_82(&Global_98318, 7, 200);
				}
				else if (Function_92())
				{
					Function_83(StackVal, &Global_98318, 7, Global_46816[1], "$/content/Frontier/Mini_Games/LiarsDice_THI/LiarsDice_THI", 4294967295, 0, "ThiLiarsDiceHC", 426, Vector(167,344f, 73,755f, 2224,521f), 1.0f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "thiv_liarsdice"));
					Function_82(&Global_98318, 7, 10);
				}
				else
				{
					Function_83(StackVal, &Global_98318, 7, Global_46816[1], "$/content/Frontier/Mini_Games/LiarsDice_THI/LiarsDice_THI", 4294967295, 0, "ThiLiarsDice", 426, Vector(167,344f, 73,755f, 2224,521f), 1.0f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "thiv_liarsdice"));
					Function_82(&Global_98318, 7, 20);
				}
				Function_83(StackVal, &Global_98318, 8, Global_46816[1], "$/content/Frontier/Mini_Games/FiveFingerFillet_THI/FiveFingerFillet_THI", 4294967295, 0, "ThiFiveFinger", 353, Vector(161,0631f, 73,82803f, 2294,619f), 2,2f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "thiv_fff"));
				Function_82(&Global_98318, 8, 1);
				Function_80(&Global_98318, 8);
				CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_79(), "$/fragments/p_gen_feedBag01x", Vector(128,186f, 73,286f, 2229,634f), Vector(0.0f, 180.0f, 0.0f), false);
				if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), MAKE_TIME_OF_DAY_EX(21, false, 0, 0)))
				{
					CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_79(), "$/fragments/p_gen_deadPokerPlayer01x", Vector(164,09f, 73,725f, 2224,024f), Vector(0.0f, -122,487f, 0.0f), false);
				}
				Function_78(iScriptParam_0);
				Function_74(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 70.0f, 8, 70, 0);
				Function_73(&Global_27462[952] + 188, 2, 5.0f, 1, 4294967295);
				Function_74(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 70.0f, 8, 70, 0);
				Function_73(&Global_27462[852] + 188, 2, 5.0f, 1, 4294967295);
				Function_74(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 70.0f, 8, 70, 0);
				Function_73(&Global_27462[1052] + 188, 2, 5.0f, 1, 4294967295);
				Function_74(15, 1, 0, 50, 50, 7, 2050, 0, 2, iScriptParam_0, "$/Content/Ambient/Town/first_time_duel", 31, 0, 200.0f, 2, 60, Function_68(2, 1, 3));
				Function_67(&Global_27462[1552] + 188, 4, &Global_44085[Global_46816[1]9] + 8, 1);
				Function_66(iScriptParam_0);
				Function_74(35, 1, 25, 4294967276, 50, 1, 0, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_town_abduction", 63, 2, 70.0f, 8, 110, 0);
				Function_73(&Global_27462[3552] + 188, 2, 3.0f, 64, 4294967295);
				Function_65(&Global_27462[3552] + 188, -3.0f, 2);
				Function_63(iScriptParam_0);
				if (!Global_39324[5])
				{
					CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Dixon_Crossing", Vector(173,56f, 73,482f, 2065,165f), Vector(0.0f, 349.0f, 0.0f), Vector(30.0f, 20.0f, 80.0f));
				}
				iLocal_334 = 8;
				bLocal_343 = false;
				break;
			
			case 0x00000008:
				if (Function_58(iScriptParam_0, &Global_11646, iLocal_656))
				{
					Function_54(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_50(2, 4294967295, 4294967295, 0, 3);
					Function_48(&iLocal_4);
				}
				else
				{
					Function_54(4, 0.0f, 2, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_47(2);
					Function_46(64);
					Function_50(2, 4294967295, 4294967295, 0, 3);
				}
				Function_132(&(Global_43791[iScriptParam_0]), 512);
				iLocal_334 = 9;
				bLocal_343 = false;
				break;
			
			case 0x00000009:
				if (Global_26182 == 0)
				{
					Function_41(1, 1);
					Global_26182 = 1;
				}
				Function_39(&iLocal_4, iScriptParam_0);
				Function_132(&(Global_43791[iScriptParam_0]), 4);
				Function_38("Finished Initializing Thieves Landing", 5.0f);
				iLocal_334 = 10;
				bLocal_343 = false;
				break;
			
			case 0x0000000A:
				if (!Function_37(Global_98961, 1))
				{
					if (Function_35(&(Global_46816[1]), 0))
					{
						Function_34(&Global_98961, 1);
					}
				}
				if (!Function_37(Global_98961, 2))
				{
					if (Function_32(&(Global_46816[1])))
					{
						Function_34(&Global_98961, 2);
					}
				}
				if (!Function_37(Global_98961, 4))
				{
					if (Function_30(&(Global_46816[1])))
					{
						Function_34(&Global_98961, 4);
					}
				}
				if (!Function_37(Global_98961, 8))
				{
					if (Function_28(&(Global_46816[1])))
					{
						Function_24(&(Global_46816[1]));
						Function_34(&Global_98961, 8);
					}
				}
				if (!Function_37(Global_98961, 64))
				{
					if (Function_22(&(Global_46816[1])))
					{
						Function_34(&Global_98961, 64);
					}
				}
				Function_19(&uLocal_657);
				if (Function_129(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_334 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_343);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(1);
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(1);
	Function_101(0);
	Function_12(&Global_11646, &Global_13732, iScriptParam_0, (iLocal_656 || Global_6623));
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_1();
	Function_46(64);
	Function_94(&(Global_43791[iScriptParam_0]), 32);
	Function_94(&(Global_43791[iScriptParam_0]), 64);
	Function_94(&(Global_43791[iScriptParam_0]), 8);
	Function_94(&(Global_43791[iScriptParam_0]), 512);
	Function_94(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_344))
	{
		TERMINATE_SCRIPT(&uLocal_344);
	}
	Function_38("Unloaded Thieves Landing", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x17F2 / 6130
{
	Global_43580.f_60 = 4294967295;
	return;
}

void Function_2(int iParam0) //Position: 0x17FE / 6142
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

void Function_3(int iParam0) //Position: 0x1834 / 6196
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x1856 / 6230
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x186C / 6252
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x1882 / 6274
{
	Function_7(&iLocal_14 + 8);
	RELEASE_LAYOUT_REF(&iLocal_14);
	return;
}

void Function_7(int iParam0) //Position: 0x1895 / 6293
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_8(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(struct<2>[] Param0, int iParam1) //Position: 0x18BD / 6333
{
	if (Function_10(&(Param0[iParam12]), 4))
	{
		if (Function_10(&(Param0[iParam12]), 1))
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
			Function_9(&(Param0[iParam12]), 1);
			Function_9(&(Param0[iParam12]), 2);
			Function_9(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_9(struct<13> Param0) //Position: 0x1A08 / 6664
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_10(struct<13> Param0) //Position: 0x1A25 / 6693
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x1A43 / 6723
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x1A4F / 6735
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_129(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_94(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_16(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_16(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_112(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_16(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_112(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_129(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_107(2) || Function_129(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_16(&(Param0[iVar162]), 2) && !Function_16(&(Param0[iVar162]), 4))
		{
			Function_13(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_16(&(Param0[iVar162]), 2) && !Function_16(&(Param0[iVar162]), 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_132(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x1C6D / 7277
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_113(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_16(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_113(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0x1DD3 / 7635
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

int Function_15(int iParam0) //Position: 0x1DFE / 7678
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

bool Function_16(int iParam0, int iParam1) //Position: 0x1E32 / 7730
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_17() //Position: 0x1E4F / 7759
{
	if (Function_37(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_18(int iParam0) //Position: 0x1E6A / 7786
{
	if (!Function_5(iParam0))
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

void Function_19(vector3[] vParam0) //Position: 0x2318 / 8984
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (vParam0 - 1))
	{
		if (IS_GRINGO_VALID(&(vParam0[bVar03])) && IS_GRINGO_VALID(&vParam0[bVar03] + 8))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&(vParam0[bVar03]), "UseCase1")))
			{
				Function_34(&vParam0[bVar03] + 16, 64);
				if (Function_37(vParam0[bVar03].f_16, 2))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_37(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_37(vParam0[bVar03].f_16, 16))
				{
					Function_20(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_37(vParam0[bVar03].f_16, 32))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_20(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_20(&vParam0[bVar03] + 16, 64);
				}
				if (Function_37(vParam0[bVar03].f_16, 2))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_37(vParam0[bVar03].f_16, 4))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
			}
			else
			{
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] == &vParam0[iVar13] + 8)
					{
						if (Function_37(vParam0[iVar13].f_16, 64))
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_37(vParam0[bVar03].f_16, 64) && Function_37(vParam0[bVar03].f_16, 16))
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_20(&vParam0[bVar03] + 16, 64);
						if (Function_37(vParam0[bVar03].f_16, 1))
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_37(vParam0[bVar03].f_16, 64) && Function_37(vParam0[bVar03].f_16, 16))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_20(&vParam0[bVar03] + 16, 64);
					if (Function_37(vParam0[bVar03].f_16, 1))
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_37(vParam0[bVar03].f_16, 64))
					{
						if (Function_37(vParam0[bVar03].f_16, 32))
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_37(vParam0[bVar03].f_16, 8))
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_20(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_37(vParam0[bVar03].f_16, 64))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_37(vParam0[bVar03].f_16, 8))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_20(&vParam0[bVar03] + 16, 64);
					Function_21(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_37(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x2B48 / 11080
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_21(struct<17> Param0) //Position: 0x2B5E / 11102
{
	if (Function_37(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

bool Function_22(var uParam0) //Position: 0x2B87 / 11143
{
	int iVar0;
	
	Function_23(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(uParam0), 1.0f, "p_gen_organstool01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make piano stool fixed but the physinst is invalid");
	}
	return 1;
}

struct<8> Function_23(int iParam0) //Position: 0x2C0A / 11274
{
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(154,443f, 73,832f, 2245,542f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2170,534f, 16,879f, 2589,138f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(721,884f, 78,476f, 1311,799f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_24(int iParam0) //Position: 0x2C90 / 11408
{
	var uVar0;
	var uVar2;
	int iVar3;
	
	Function_27(iParam0);
	uVar0 = Function_27(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain", true);
	}
	Function_26(iParam0);
	uVar0 = Function_26(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain", true);
	}
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		Function_25(iParam0, iVar3);
		uVar0 = Function_25(iParam0, iVar3);
		uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &uVar0, 0,25f, 0);
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &uVar0, 0,25f, 0);
		}
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &uVar0, 0,25f, 0);
		}
		if (IS_GRINGO_VALID(&uVar2))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain", true);
		}
		iVar3++;
	}
	return;
}

struct<8> Function_25(int iParam0, int iParam1) //Position: 0x2EDB / 11995
{
	if (iParam0 == Global_46760[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-2192,956f, 16,5768f, 2591,536f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-2193,327f, 16,5768f, 2593,874f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(-2192,68f, 16,5768f, 2592,817f);
		}
	}
	if (iParam0 == Global_46816[1])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(163,185f, 73,837f, 2293,025f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(163,4155f, 73,837f, 2293,8f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(163,604f, 73,837f, 2294,628f);
		}
	}
	if (iParam0 == Global_46850[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-4276,273f, 18,09486f, 4452,201f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-4275,895f, 18,09486f, 4451,213f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(-4274,775f, 18,09486f, 4452,317f);
		}
	}
	if (iParam0 == Global_46894[3])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(356,5144f, 76,29012f, 3446,935f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(356,5144f, 76,29012f, 3448,271f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(357,207f, 76,29012f, 3448,271f);
		}
	}
	if (iParam0 == Global_46926[1])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-463,5462f, 152,3519f, 1598,171f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-464,753f, 152,3517f, 1598,612f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(-462,8687f, 152,352f, 1597,15f);
		}
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_26(int iParam0) //Position: 0x30D1 / 12497
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,299f, 16,57026f, 2593,136f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,0631f, 73,82803f, 2294,619f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,766f, 18,07059f, 4453,27f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,6982f, 76,28821f, 3447,546f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-465,0943f, 152,3517f, 1596,716f);
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_27(int iParam0) //Position: 0x31A9 / 12713
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,388f, 16,57687f, 2592,54f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,1002f, 73,83751f, 2294,133f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,772f, 18,07059f, 4453,844f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,5946f, 76,28807f, 3448,024f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-464,3469f, 152,3559f, 1596,59f);
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_28(int iParam0) //Position: 0x327D / 12925
{
	var uVar0;
	
	Function_27(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_27(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_26(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_26(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_29(&iParam0);
	return 1;
}

void Function_29(var uParam0) //Position: 0x338E / 13198
{
	var uVar0;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	Function_27(uParam0);
	uVar0 = Function_27(uParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		uVar3 = GRINGO_GET_USE_COMPONENT_EXT(&uVar2, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(&uVar3))
		{
			bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, 0);
			while (bVar4 >= 4294967295)
			{
				iVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar4, &uVar3);
				uVar6 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar5, &uVar2);
				if (IS_PHYSINST_VALID(&uVar6))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
				}
				bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, bVar4 + 1);
			}
		}
	}
	return;
}

bool Function_30(int iParam0) //Position: 0x347C / 13436
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (iParam0 == Global_46850[0])
		{
			Function_31(iParam0, iVar1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_31(iParam0, iVar1), 1.0f, "p_gen_chair06x", 1);
		}
		else
		{
			Function_31(iParam0, iVar1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_31(iParam0, iVar1), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(&uVar0))
		{
			SET_PROP_FIXED(&uVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make liars dice chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

struct<8> Function_31(int iParam0, int iParam1) //Position: 0x3545 / 13637
{
	if (iParam0 == Global_46850[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-4288,696f, 26,72937f, 4381,383f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-4289,277f, 26,72937f, 4381,477f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-4289,651f, 26,72937f, 4381,039f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-4289,435f, 26,72937f, 4380,51f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-4288,878f, 26,72937f, 4380,39f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-4288,485f, 26,72937f, 4380,807f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(167,5964f, 73,74156f, 2222,775f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(167,958f, 73,74529f, 2222,327f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(168,5496f, 73,74591f, 2222,387f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(168,7889f, 73,74529f, 2222,935f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(168,4313f, 73,74976f, 2223,425f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(167,8298f, 73,74976f, 2223,35f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-788,6586f, 13,16462f, 3698,422f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-788,4316f, 13,16762f, 3698,957f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-788,7964f, 13,165f, 3699,425f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-789,389f, 13,165f, 3699,35f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-789,6095f, 13,165f, 3698,805f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-789,2333f, 13,165f, 3698,335f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(856,9058f, 77,51558f, 1278,093f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(856,6888f, 77,51558f, 1277,556f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(857,0518f, 77,51558f, 1277,099f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(857,629f, 77,51558f, 1277,148f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(857,8614f, 77,51558f, 1277,699f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(857,4864f, 77,51558f, 1278,173f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_32(int iParam0) //Position: 0x3832 / 14386
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_33(iParam0, iVar1);
		uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_33(iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
		if (IS_PHYSINST_VALID(&uVar0))
		{
			SET_PROP_FIXED(&uVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make blackjack stool fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

struct<8> Function_33(int iParam0, int iParam1) //Position: 0x38C8 / 14536
{
	if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2685,328f, 31,35269f, 4284,425f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2686,254f, 31,35269f, 4284,686f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2686,982f, 31,35269f, 4284,026f);
				break;
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-3640,897f, 42,76801f, 2104,235f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-3640,023f, 42,76801f, 2104,636f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-3639,895f, 42,76801f, 2105,61f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(719,9783f, 78,4736f, 1312,265f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(719,0787f, 78,4736f, 1312,605f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(718,2963f, 78,4736f, 1312,011f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(172,2084f, 73,75179f, 2224,902f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(170,9445f, 73,75179f, 2224,73f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(170,7396f, 73,74976f, 2223,559f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_34(var uParam0, int iParam1) //Position: 0x3A7D / 14973
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_35(int iParam0, bool bParam1) //Position: 0x3A8E / 14990
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_36(iParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_36(iParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_36(iParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_36(iParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(&uVar0))
		{
			if (!IS_PROP_FIXED(&uVar0))
			{
				SET_PROP_FIXED(&uVar0, 1);
			}
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make poker chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

struct<8> Function_36(int iParam0, int iParam1, bool bParam2) //Position: 0x3B63 / 15203
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

bool Function_37(var uParam0, int iParam1) //Position: 0x4114 / 16660
{
	return (uParam0 && iParam1) == 0;
}

void Function_38(char* cParam0) //Position: 0x4121 / 16673
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

void Function_39(int iParam0, bool bParam1) //Position: 0x4161 / 16737
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
		Function_40(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x4251 / 16977
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x425E / 16990
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_45(uParam0);
	Function_44(&uVar0);
	PRINTNL();
	Function_42(uParam0, &uVar0, &iParam1);
	return;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4287 / 17031
{
	int iVar0;
	
	Function_45(bParam0);
	Function_44(&bParam1);
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
	Function_43();
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

void Function_43() //Position: 0x4406 / 17414
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_44(int iParam0) //Position: 0x4412 / 17426
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

void Function_45(int iParam0) //Position: 0x445C / 17500
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

void Function_46(int iParam0) //Position: 0x44A2 / 17570
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_47(int iParam0) //Position: 0x44B5 / 17589
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 3;
	}
	Global_43580.f_60 = iParam0;
	return;
}

void Function_48(int iParam0) //Position: 0x44D3 / 17619
{
	struct<2> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	*(&Global_40000 + 16) = &iParam0;
	*(&Global_40000 + 24) = CREATE_OBJECT_ITERATOR(&Global_40000 + 16);
	ITERATE_EVERYWHERE(&Global_40000 + 24);
	ITERATE_ON_OBJECT_TYPE(&Global_40000 + 24, 8);
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(&Global_40000 + 24) >= 0)
	{
		*(&Global_40000 + 32) = START_OBJECT_ITERATOR(&Global_40000 + 24);
		GET_OBJECT_POSITION(&Global_40000 + 32, &Var0);
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_79(), 3, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_49(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_49(int iParam0) //Position: 0x45CF / 17871
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x45EC / 17900
{
	if (Global_40000 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_40000, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_40022 = Global_40000;
	Global_40022.f_4 = StackVal;
	Global_40022.f_8 = StackVal;
	Global_40022.f_12 = Global_40000.f_12;
	*(&Global_40022 + 16) = &Global_40000 + 16;
	*(&Global_40022 + 24) = &Global_40000 + 24;
	*(&Global_40022 + 32) = &Global_40000 + 32;
	*(&Global_40022 + 48) = &Global_40000 + 48;
	Global_40022.f_64 = Global_40000.f_64;
	Global_40022.f_68 = Global_40000.f_68;
	Global_40000.f_8 = iParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &iParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_51();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_51() //Position: 0x46DA / 18138
{
	int iVar0;
	
	Global_41176 = Function_52(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_52(int iParam0) //Position: 0x4728 / 18216
{
	if (!Function_53(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_53(bool bParam0) //Position: 0x4740 / 18240
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_54(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x4755 / 18261
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
	*(&Global_43580 + 24) = &iParam3;
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
		Function_57();
	}
	if (&bParam5)
	{
		Function_55(1048576);
	}
}

void Function_55(int iParam0) //Position: 0x4863 / 18531
{
	Function_56(&Global_43580, iParam0);
	return;
}

void Function_56(var uParam0, var uParam1) //Position: 0x4871 / 18545
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_57() //Position: 0x4890 / 18576
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_55(16384);
	}
	return;
}

bool Function_58(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x48AC / 18604
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_129(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_59(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = Param1;
	stradd(&cVar0, &Global_44085[Global_46722[Global_43787]9] + 32, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

int Function_59(var uParam0, bool bParam1) //Position: 0x496A / 18794
{
	int iVar0;
	
	iVar0 = Function_61(uParam0);
	if (!Function_60(iVar0))
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

bool Function_60(int iParam0) //Position: 0x49A8 / 18856
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_61(int iParam0) //Position: 0x49BF / 18879
{
	if (!Function_62(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_62(int iParam0) //Position: 0x49D9 / 18905
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_63(int iParam0) //Position: 0x49EF / 18927
{
	Function_74(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_64(&Global_27462[3352] + 188, 2, 0);
	return;
}

void Function_64(struct<149> Param0) //Position: 0x4A52 / 19026
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_65(int iParam0, var uParam1, int iParam2) //Position: 0x4A69 / 19049
{
	(&iParam0 + 84)->f_24 = uParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_66(int iParam0) //Position: 0x4A81 / 19073
{
	Function_74(41, 1, 25, 4294967276, 50, 1, 0, 1, 4, iParam0, "$/content/Ambient/Town/event_unforgiven", 63, 2, 65.0f, 8, 100, 0);
	return;
}

void Function_67(struct<157> Param0) //Position: 0x4AD0 / 19152
{
	Param0.f_156 = uParam1;
	(&Param0 + 156)->f_4 = uParam2;
	(&Param0 + 156)->f_8 = uParam3;
}

int Function_68(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4AF1 / 19185
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_72(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_69(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_69(bParam0, bParam1, bParam2, 4294967295);
}

int Function_69(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4B4F / 19279
{
	var uVar0;
	
	if (!Function_71(bParam2))
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
	uVar0 = Function_72(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_70(uVar0);
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

var Function_70(int iParam0) //Position: 0x4CB3 / 19635
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

bool Function_71(int iParam0) //Position: 0x4CF1 / 19697
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_72(int iParam0, int iParam1, int iParam2) //Position: 0x4D06 / 19718
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_73(struct<85> Param0) //Position: 0x4D26 / 19750
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x4D50 / 19792
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Function_75(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_75(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x4D97 / 19863
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052][0] = iParam2;
	Global_27462[iParam052][1] = iParam3;
	Global_27462[iParam052][2] = iParam4;
	(*&Global_27462[iParam052] + 32)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_27462[iParam052] + 32)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_27462[iParam052] + 32)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_27462[iParam052] + 64)[0] = (Global_27462[iParam052][0] - (*&Global_27462[iParam052] + 32)[0]);
	(*&Global_27462[iParam052] + 64)[1] = (Global_27462[iParam052][1] - (*&Global_27462[iParam052] + 32)[1]);
	(*&Global_27462[iParam052] + 64)[2] = (Global_27462[iParam052][2] - (*&Global_27462[iParam052] + 32)[2]);
	Global_27462[iParam052].f_140 = uParam1;
	Global_27462[iParam052].f_188 = uParam5;
	(&Global_27462[iParam052] + 188)->f_4 = iParam6;
	(&Global_27462[iParam052] + 188)->f_8 = &bParam13;
	Global_27462[iParam052].f_144 = uParam7;
	Global_27462[iParam052].f_148 = uParam8;
	Global_27462[iParam052].f_156 = 4294967295;
	Global_27462[iParam052].f_152 = &uParam15;
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&cParam9, 4);
	Global_27462[iParam052].f_168 = uParam10;
	Global_27462[iParam052].f_172 = uParam11;
	Global_27462[iParam052].f_136 = &uParam12;
	(&Global_27462[iParam052] + 188)->f_156 = 0;
	strcpy(&Global_27462[iParam052] + 188 + 36, "", 8);
	(&Global_27462[iParam052] + 188 + 36)->f_16 = 50.0f;
	(&Global_27462[iParam052] + 188 + 36)->f_20 = 4294967295;
	(&Global_27462[iParam052] + 188)->f_84 = 1;
	(&Global_27462[iParam052] + 188 + 84)->f_4 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_8 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_12 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_16 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_24 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_32 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_28 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_36 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_40 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_44 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_52 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_48 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_56 = 0.0f;
	(&Global_27462[iParam052] + 188)->f_148 = 0;
	if (!Function_17())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_6606)
		{
			if (Global_6665)
			{
				bVar2 = false;
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_77(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_76(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_77(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_76(int iParam0, int iParam1) //Position: 0x5155 / 20821
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_77(int iParam0) //Position: 0x5178 / 20856
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_78(var uParam0) //Position: 0x518F / 20879
{
	Function_74(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, uParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

var Function_79() //Position: 0x51E1 / 20961
{
	int iVar0;
	
	return &iVar0;
}

void Function_80(struct<28>[] Param0, int iParam1) //Position: 0x51EA / 20970
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

bool Function_81(int iParam0) //Position: 0x5207 / 20999
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_82(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x521C / 21020
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_83(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x5243 / 21059
{
	if (0 && !&bParam11)
	{
		return;
	}
	if (1 && bParam11)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(&(Global_98936[iParam1])))
	{
		DESTROY_OBJECTSET(&(Global_98936[iParam1]));
	}
	Param0[iParam128].f_4 = Function_68(iParam2, iParam1, 4);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[iParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[iParam128] + 8) = 4294967295;
	}
	(&Param0[iParam128] + 64) = "";
	(&Param0[iParam128] + 72) = "";
	*(&Param0[iParam128] + 80) = &iParam12;
	Param0[iParam128].f_136 = iParam7;
	Param0[iParam128].f_152 = 5;
	Param0[iParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[iParam128].f_188 = iParam4;
	Param0[iParam128].f_192 = 4294967295;
	Param0[iParam128].f_196 = 4294967295;
	Param0[iParam128].f_200 = 4294967295;
	strcpy(&Param0[iParam128] + 16, &cParam6, 16);
	*(&Param0[iParam128] + 88) = Param8;
	Param0[iParam128].f_100 = iParam10;
	Param0[iParam128].f_112 = iParam2;
	if (Global_39266[iParam1] && Function_91(iParam1))
	{
		Function_84(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_84(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x53AC / 21420
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_90(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_89(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_88(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_87(uVar3);
		Var6 = Function_87(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_87(StackVal);
				Var4 = Function_87(StackVal);
				if (Function_86(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_85(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_85(int iParam0) //Position: 0x5595 / 21909
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_86(struct<2> Param0, struct<2> Param2) //Position: 0x56CC / 22220
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_87(int iParam0) //Position: 0x56F8 / 22264
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

var Function_88(vector3 vParam0) //Position: 0x574F / 22351
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

int Function_89(int iParam0) //Position: 0x579D / 22429
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_90(vector3 vParam0) //Position: 0x5855 / 22613
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_91(int iParam0) //Position: 0x586D / 22637
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

bool Function_92() //Position: 0x5890 / 22672
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_93(int iParam0) //Position: 0x58BB / 22715
{
	Function_74(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_64(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_94(var uParam0, int iParam1) //Position: 0x5922 / 22818
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x593C / 22844
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_100(&uParam1, &uParam2);
	if (!Function_99(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_98(&uParam4, 0);
		}
		else
		{
			Function_97(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_98(&iParam5, 0);
		}
		else
		{
			Function_97(&iParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		*(&Global_26200[iParam014] + 104) = &uParam1;
		if (Global_26200[iParam014].f_40 != 3 || !Global_6606)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), true);
			DECOR_SET_BOOL(&uParam1, "SavingAtBedAllowed", true);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), false);
			if (DECOR_CHECK_EXIST(&uParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(&uParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(&iParam6))
	{
		GET_OBJECT_POSITION(&iParam6, &uVar0);
		uVar2[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		uVar2[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(&(uVar2[0])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_96(&(uVar2[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[0]), 0);
		}
		if (IS_GRINGO_VALID(&(uVar2[1])))
		{
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_96(&(uVar2[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar6) && !&iVar6 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar6);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[1]), 0);
		}
		if (Global_26200[iParam014].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(&iParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(&iParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(&iParam6, "PlayerHouse_NoHorse", true);
		}
	}
	*(&Global_26200[iParam014] + 80) = &uParam4;
	*(&Global_26200[iParam014] + 88) = &iParam5;
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 56))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 56);
		(&Global_26200[iParam014] + 56) = "";
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 64))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 64);
		(&Global_26200[iParam014] + 64) = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iParam014] + 72))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iParam014] + 72);
		(&Global_26200[iParam014] + 72) = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(&uParam2, &(Global_26200[iParam014]));
	}
	Global_26200[iParam014].f_12 = GET_OBJECT_HEADING(&uParam2);
	GET_OBJECT_POSITION(&uParam3, &Global_26200[iParam014] + 16);
	*(&Global_26200[iParam014] + 96) = &iParam6;
}

var Function_96(var uParam0, int iParam1) //Position: 0x5D0C / 23820
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_97(var uParam0, int iParam1) //Position: 0x5D1B / 23835
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

void Function_98(var uParam0, int iParam1) //Position: 0x5D76 / 23926
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

bool Function_99(int iParam0) //Position: 0x5DCE / 24014
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_100(var uParam0, int iParam1) //Position: 0x5DE4 / 24036
{
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(&uParam0), "nPlayerUse", "MyRestartFlag", &iParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

void Function_101(bool bParam0) //Position: 0x5F42 / 24386
{
	if (bParam0)
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN", true);
	}
	else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN");
	}
	return;
}

int Function_102(bool bParam0, int iParam1) //Position: 0x5FBF / 24511
{
	var uVar0;
	int iVar1;
	
	if (!IS_PERS_CHAR_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(&uVar0), "Settings", "blipID", iParam1))
		{
			iVar1 = GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0));
			if (IS_BLIP_VALID(&iVar1))
			{
				REMOVE_BLIP(&iVar1);
			}
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_BLIP_ICON: This Shopkeeper is not set up correctly in the XML data - Missing blipID in Settings");
	}
	return 0;
}

int Function_103(var uParam0, int iParam1) //Position: 0x60B7 / 24759
{
	var uVar0;
	
	if (!IS_PERS_CHAR_VALID(&uParam0))
	{
		return 0;
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&uParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(&uVar0), "ShopSettings", "ShopType", iParam1))
		{
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_TYPE: This Shopkeeper is not set up correctly in the XML data - Missing ShopType in ShopSettings");
	}
	return 0;
}

int Function_104(var uParam0, int iParam1) //Position: 0x619B / 24987
{
	var uVar0;
	
	if (!IS_PERS_CHAR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_VOLUME_VALID(&iParam1))
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&uParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar0))
		{
			if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(&uVar0), "ShopSettings", "ShopVolumeRef", GET_OBJECT_FROM_VOLUME(&iParam1)))
			{
				return 1;
			}
			LOG_ERROR("SK_SHOP_REGISTER_VOLUME: This Shopkeeper is not set up correctly in the XML data - Missing ShopVolumeRef in ShopSettings");
		}
	}
	else
	{
		LOG_ERROR("SK_SHOP_REGISTER_VOLUME: called with an invalid volume");
	}
	return 0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x62D7 / 25303
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(&uParam0, "owner", &iParam1);
	return;
}

int Function_106(int iParam0, char* cParam1, bool bParam3) //Position: 0x62FA / 25338
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_5(iParam0))
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

bool Function_107(int iParam0) //Position: 0x639F / 25503
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_108(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x63BB / 25531
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_107(2))
	{
		return;
	}
	if (Function_129(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_16(&(Param0[iVar02]), 2))
		{
			if (Function_109(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_94(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_132(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_109(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x6473 / 25715
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_129(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(&iParam0, 2))
	{
		return 1;
	}
	if (Function_16(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, false))
		{
			return 0;
		}
	}
	if (&iParam1 + 8 == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_44085[iParam59] + 32, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = Function_111(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_90(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_112(&iParam0, 4);
	}
	Function_110(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_110(int iParam0, struct<2> Param1) //Position: 0x65F4 / 26100
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_90(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_90(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_90(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_90(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_90(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_90(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_111(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x673A / 26426
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_79(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_112(int iParam0, int iParam1) //Position: 0x6861 / 26721
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

void Function_113(var uParam0, int iParam1) //Position: 0x687B / 26747
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_114(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x688C / 26764
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 48);
	return;
}

void Function_115(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x68F5 / 26869
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 36);
	return;
}

void Function_116(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x6960 / 26976
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 24);
	return;
}

void Function_117(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x69C6 / 27078
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 12);
	return;
}

void Function_118(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x6A2F / 27183
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 60);
	return;
}

void Function_119(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x6A96 / 27286
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &(Param1[bVar011]));
	PRINTVECTOR(Param1[bVar011]);
	PRINTNL();
	return;
}

void Function_120(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x6B09 / 27401
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 72) = &iParam2;
	return;
}

void Function_121(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x6B68 / 27496
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_86(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_122(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x6BCF / 27599
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_86(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_123(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x6C38 / 27704
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_86(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_124(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x6CA3 / 27811
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_86(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_125(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x6D09 / 27913
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_86(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_126(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x6D72 / 28018
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_86(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

void Function_127(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x6DD6 / 28118
{
	int iVar0;
	
	iVar0 = iParam0;
	Param1[iVar011].f_80 = iParam2;
	return;
}

int Function_128(int iParam0) //Position: 0x6DEB / 28139
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_129(&(Global_43791[iParam0]), 4);
}

bool Function_129(var uParam0, int iParam1) //Position: 0x6E07 / 28167
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_130(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x6E24 / 28196
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_18(iParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_129(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_16(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_16(&(Param0[iVar02]), 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED(vParam1[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_131(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x6F0D / 28429
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_18(iParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_129(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_132(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_113(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_113(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_132(var uParam0, int iParam1) //Position: 0x6FFD / 28669
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_133() //Position: 0x700E / 28686
{
	var uVar0;
	
	Function_141(3, 3);
	uVar0 = &uVar0;
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/factory_foreman", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_back", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_knock_on_door", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_leanrail_tlkpsnt_hrassol_link", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_leanwall_tlkpsnt_hrassol_link", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_139(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	if (!Function_134(&iLocal_14 + 8))
	{
		return 0;
	}
	iLocal_14 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_14))
	{
		iLocal_14 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	*(&iLocal_14 + 848) = Vector(124,9729f, 76,74391f, 2235,933f);
	*(&iLocal_14 + 848 + 12) = Vector(0.0f, 166,6715f, 0.0f);
	*(&iLocal_14 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_save_flag_THI", Vector(124,9729f, 76,74391f, 2235,933f), Vector(0.0f, 166,6715f, 0.0f));
	*(&iLocal_14 + 880) = Vector(136,0498f, 73,67673f, 2317,337f);
	*(&iLocal_14 + 880 + 12) = Vector(0.0f, 93,55386f, 0.0f);
	*(&iLocal_14 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_shop_flag_GEN", Vector(136,0498f, 73,67673f, 2317,337f), Vector(0.0f, 93,55386f, 0.0f));
	*(&iLocal_14 + 912) = Vector(165,9136f, 73,57568f, 2192,765f);
	*(&iLocal_14 + 912 + 12) = Vector(0.0f, -123,0706f, 0.0f);
	*(&iLocal_14 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_shop_flag_GUN", Vector(165,9136f, 73,57568f, 2192,765f), Vector(0.0f, -123,0706f, 0.0f));
	*(&iLocal_14 + 944) = Vector(179,1635f, 76,41071f, 2181,879f);
	*(&iLocal_14 + 944 + 12) = Vector(0.0f, -124,0029f, 0.0f);
	*(&iLocal_14 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_shop_flag_DOC", Vector(179,1635f, 76,41071f, 2181,879f), Vector(0.0f, -124,0029f, 0.0f));
	*(&iLocal_14 + 976) = Vector(175,666f, 73,4645f, 2185,915f);
	*(&iLocal_14 + 976 + 12) = Vector(0.0f, -126,0845f, 0.0f);
	*(&iLocal_14 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_shop_flag_TAL", Vector(175,666f, 73,4645f, 2185,915f), Vector(0.0f, -126,0845f, 0.0f));
	*(&iLocal_14 + 1008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_purchase_flag_THI", Vector(124,5248f, 76,76834f, 2238,376f), Vector(0.0f, 166,6715f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn", "rand_idle_stand", Vector(103,2619f, 73,28625f, 2348,182f), Vector(0.0f, -18,37911f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall", Vector(99,16253f, 73,28625f, 2342,14f), Vector(0.0f, 27,80631f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table", "Rand_Idle_NearWall_Shoulder_L", Vector(94,69112f, 73,28625f, 2345,365f), Vector(0.0f, 476,4314f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall", "look_out_window_L", Vector(112,6999f, 73,28625f, 2361,683f), Vector(0.0f, 47,89365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground", Vector(122,6798f, 73,28625f, 2343,501f), Vector(0.0f, 92,65137f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground", Vector(119,9363f, 73,28625f, 2340,813f), Vector(0.0f, -181,9192f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall", Vector(118,175f, 73,28747f, 2341,222f), Vector(0.0f, 177,6908f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn4", "Rand_Idle_NearWall", Vector(128,0218f, 73,40476f, 2352,993f), Vector(0.0f, 185,1149f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn5", "Rand_Idle_NearWall", Vector(145,9207f, 73,28773f, 2372,854f), Vector(0.0f, 209,6982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn6", "Rand_Idle_NearWall", Vector(155,8487f, 73,46634f, 2376,893f), Vector(0.0f, 26,72732f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn", "repair_kneel", Vector(109,6413f, 73,3111f, 2359,164f), Vector(0.0f, -218,6753f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn1", "repair_kneel", Vector(110,8482f, 73,28625f, 2369,707f), Vector(0.0f, -58,15013f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn2", "stand_hammer_wall", Vector(121,7901f, 73,28625f, 2378,15f), Vector(0.0f, 90,82857f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn3", "repair_kneel", Vector(141,8578f, 73,28625f, 2366,919f), Vector(0.0f, -60,71556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn4", "repair_kneel", Vector(141,5047f, 73,28625f, 2388,455f), Vector(0.0f, 90,78696f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn5", "repair_kneel", Vector(130,4333f, 73,28625f, 2392,791f), Vector(0.0f, 116,4589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn1", "rand_idle_stand", Vector(122,6969f, 73,41091f, 2346,896f), Vector(0.0f, 96,77221f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn2", "rand_idle_stand", Vector(122,7366f, 73,40178f, 2353,972f), Vector(0.0f, 91,07431f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn3", "rand_idle_stand", Vector(147,5175f, 73,28064f, 2374,788f), Vector(0.0f, 67,15102f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_announce1", "stand_announce", Vector(126,4111f, 73,28625f, 2361,106f), Vector(0.0f, 178,9376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_announce3", "rand_idle_stand", Vector(110,8999f, 73,28446f, 2334,17f), Vector(0.0f, 67,23986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall1", "stand_hammer_wall", Vector(106,5678f, 73,28625f, 2361,159f), Vector(0.0f, 114,0241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall3", "stand_hammer_wall", Vector(129,7742f, 73,28625f, 2363,876f), Vector(0.0f, -90,71701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall4", "stand_hammer_wall", Vector(136,3572f, 73,28625f, 2388,477f), Vector(0.0f, -95,94325f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall5e", "look_out_window_L", Vector(122,313f, 73,28625f, 2390,016f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall6", "stand_hammer_wall", Vector(138,6337f, 73,28625f, 2382,366f), Vector(0.0f, 37,34141f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(146,6764f, 76,74119f, 2346,201f), Vector(0.0f, -129,7471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(172,5974f, 73,4637f, 2370,526f), Vector(0.0f, -137,664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table1", "stand_hammer_table", Vector(132,8993f, 73,40009f, 2354,398f), Vector(0.0f, -359,4876f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table2", "repair_kneel", Vector(114,1847f, 73,28625f, 2364,058f), Vector(0.0f, -93,23808f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table3", "repair_kneel", Vector(101,8119f, 73,28625f, 2360,029f), Vector(0.0f, 207,1182f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table4", "repair_kneel", Vector(130,3594f, 73,28625f, 2374,866f), Vector(0.0f, -147,32f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table5", "repair_kneel", Vector(138,5067f, 73,28625f, 2380,349f), Vector(0.0f, 115,6076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table6", "repair_kneel", Vector(147,1725f, 73,28625f, 2382,578f), Vector(0.0f, -152,5903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall7", "stand_hammer_wall", Vector(134,9044f, 73,54241f, 2344,865f), Vector(0.0f, 5,65044f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall8", "stand_hammer_wall", Vector(136,0702f, 73,58056f, 2339,477f), Vector(0.0f, 95,47497f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall9", "stand_hammer_wall", Vector(132,2244f, 73,55187f, 2333,965f), Vector(0.0f, -86,92f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall10", "stand_hammer_wall", Vector(132,6039f, 73,55187f, 2338,582f), Vector(0.0f, 274,2444f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table8", "stand_hammer_table", Vector(139,5221f, 75,37659f, 2337,468f), Vector(0.0f, 27,90876f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table9", "Rand_Idle_Sit_Ground", Vector(129,514f, 75,36185f, 2339,563f), Vector(0.0f, 365,377f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn6", "repair_kneel", Vector(129,8123f, 73,55024f, 2329,274f), Vector(0.0f, -85,16898f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn9", "repair_kneel", Vector(133,7885f, 73,62351f, 2341,859f), Vector(0.0f, 5,706647f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn10", "repair_kneel", Vector(134,4044f, 73,55187f, 2333,902f), Vector(0.0f, 91,81328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn7", "lean_fence_H_talking", Vector(146,392f, 73,56291f, 2330,533f), Vector(0.0f, 116,5848f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn8", "Rand_Idle_NearWall", Vector(147,2202f, 73,67674f, 2317,726f), Vector(0.0f, -84,78227f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn10", "Rand_Idle_NearWall", Vector(145,0678f, 73,67674f, 2310,818f), Vector(0.0f, 3,75836f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn", "rand_idle_stand", Vector(149,8716f, 73,59654f, 2338,909f), Vector(0.0f, -78,05576f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn1", "rand_idle_stand", Vector(163,1858f, 73,55964f, 2337,646f), Vector(0.0f, -86,18456f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn3", "rand_idle_stand", Vector(152,2381f, 73,66331f, 2312,329f), Vector(0.0f, -175,3676f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn11", "repair_kneel", Vector(161,3031f, 73,57859f, 2331,742f), Vector(0.0f, 89,69541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn12", "Rand_Idle_NearWall", Vector(147,2681f, 73,56516f, 2340,306f), Vector(0.0f, 275,847f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn13", "repair_kneel", Vector(153,1657f, 73,59799f, 2334,79f), Vector(0.0f, 180,0599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn14", "repair_kneel", Vector(157,721f, 73,85658f, 2293,901f), Vector(0.0f, 185,1122f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall11", "stand_hammer_table", Vector(157,052f, 73,54263f, 2331,817f), Vector(0.0f, -13,07989f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn", "nlean_rail", Vector(146,1787f, 76,53436f, 2325,79f), Vector(0.0f, -84,59093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn11", "look_out_window_L", Vector(158,913f, 73,42699f, 2376,41f), Vector(0.0f, 71,31748f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn1", "nlean_rail", Vector(138,7581f, 76,74641f, 2349,171f), Vector(0.0f, 3,735764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn2", "nlean_rail", Vector(125,9068f, 76,48775f, 2330,677f), Vector(0.0f, 182,2475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_peeing_b_any", "stand_peeing_b_any", Vector(80,02197f, 73,53244f, 2300,382f), Vector(0.0f, 39,69128f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn3", "lean_rail_forward", Vector(163,1191f, 73,55384f, 2340,401f), Vector(0.0f, -88,30766f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn4", "lean_rail_forward", Vector(148,5517f, 73,68066f, 2309,117f), Vector(0.0f, -47,8219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn5", "nlean_rail", Vector(146,7918f, 76,74517f, 2349,736f), Vector(0.0f, -85,14004f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn6", "lean_rail_forward", Vector(150,1364f, 73,70547f, 2346,601f), Vector(0.0f, -90,62691f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn13", "Rand_Idle_NearWall", Vector(129,3307f, 73,69775f, 2301,194f), Vector(0.0f, 92,15813f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn14", "Rand_Idle_NearWall", Vector(130,4859f, 73,68796f, 2293,559f), Vector(0.0f, 3,729819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn15", "Rand_Idle_NearWall", Vector(134,9162f, 73,67674f, 2311,673f), Vector(0.0f, 6,688671f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn4", "rand_idle_stand", Vector(129,1465f, 73,69827f, 2293,931f), Vector(0.0f, 55,72235f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn5", "nlean_rail", Vector(133,3266f, 73,69484f, 2320,677f), Vector(0.0f, 95,61906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee_nospawn", "Pee", Vector(135,813f, 73,28625f, 2324,196f), Vector(0.0f, 206,8083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn9", "lean_rail_forward", Vector(163,5975f, 73,47475f, 2367,703f), Vector(0.0f, 66,37308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn10", "lean_rail_forward", Vector(131,3503f, 73,70515f, 2288,613f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn8", "nlean_rail", Vector(104,1816f, 73,74413f, 2279,425f), Vector(0.0f, 170,4221f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn9", "rand_idle_stand", Vector(106,2985f, 73,66705f, 2279,59f), Vector(0.0f, 553,5125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn6", "rand_idle_stand", Vector(97,97188f, 73,7619f, 2278,514f), Vector(0.0f, 171,6827f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn16", "Rand_Idle_NearWall", Vector(102,744f, 73,77241f, 2278,027f), Vector(0.0f, 170,537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_mid1", "stand_lookdistance_w_any", Vector(114,3716f, 73,60643f, 2265,442f), Vector(0.0f, -51,31233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any3", "look_out_window_L", Vector(110,3297f, 73,76719f, 2279,426f), Vector(0.0f, -18,77471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn7", "Rand_Idle_NearWall", Vector(112,0166f, 73,6276f, 2272,368f), Vector(0.0f, -100,7933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn17", "Rand_Idle_NearWall", Vector(112,2481f, 73,69337f, 2271,047f), Vector(0.0f, -99,55605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn11", "rand_idle_stand", Vector(132,1682f, 73,6768f, 2288,496f), Vector(0.0f, 10,71783f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_tend", "horse_tend", Vector(131,9962f, 73,28625f, 2202,152f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_tend1", "horse_tend", Vector(135,5981f, 73,28625f, 2202,152f), Vector(0.0f, 82,4436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_tend2", "horse_tend", Vector(133,3824f, 73,29127f, 2212,425f), Vector(0.0f, -84,78606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_mid2", "rand_idle_stand", Vector(131,86f, 73,3621f, 2240,092f), Vector(0.0f, 561,9264f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn12", "stand_lookdistance_w_any", Vector(115,4255f, 73,6384f, 2239,399f), Vector(0.0f, 74,76141f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn13", "nlean_rail", Vector(148,7087f, 73,82098f, 2232,834f), Vector(0.0f, 59,34599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn14", "nlean_rail", Vector(142,1514f, 73,80496f, 2245,453f), Vector(0.0f, 150,7977f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn15", "lean_rail_whore", Vector(142,5839f, 76,81945f, 2243,469f), Vector(0.0f, 59,66037f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn17", "nlean_rail", Vector(154,3298f, 73,81388f, 2252,261f), Vector(0.0f, -122,2239f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee_nospawn2", "Pee", Vector(172,2254f, 73,28625f, 2174,107f), Vector(0.0f, 180,8495f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee_nospawn3", "Pee", Vector(114,3967f, 73,28625f, 2200,496f), Vector(0.0f, 8,595164f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn18", "Rand_Idle_NearWall", Vector(157,6425f, 73,78448f, 2196,301f), Vector(0.0f, 21,76999f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn20", "Rand_Idle_NearWall", Vector(145,4704f, 76,82064f, 2240,03f), Vector(0.0f, 58,17909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn21", "Rand_Idle_NearWall", Vector(155,5014f, 73,81388f, 2247,832f), Vector(0.0f, -118,4601f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn22", "Rand_Idle_NearWall", Vector(157,755f, 73,81388f, 2243,974f), Vector(0.0f, -120,7321f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn23", "Rand_Idle_NearWall", Vector(180,5959f, 73,63771f, 2227,717f), Vector(0.0f, -118,4006f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn24", "Rand_Idle_NearWall", Vector(172,1167f, 73,75426f, 2240,195f), Vector(0.0f, 149,9878f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn10", "look_out_window_R", Vector(162,4337f, 73,75426f, 2224,253f), Vector(0.0f, 62,93216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn11", "rand_idle_stand", Vector(173,0663f, 73,46745f, 2217,189f), Vector(0.0f, 54,76099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn17", "repair_kneel", Vector(216,054f, 73,41138f, 2188,434f), Vector(0.0f, 409,3009f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn18", "rand_idle_stand", Vector(159,6794f, 72,6578f, 2247,079f), Vector(0.0f, -87,12622f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_announce4", "stand_announce", Vector(148,836f, 76,82731f, 2232,562f), Vector(0.0f, -57,52115f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn18", "nlean_rail", Vector(124,976f, 76,75856f, 2238,798f), Vector(0.0f, -102,9391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_up", "stand_yelling_up", Vector(140,9386f, 73,28625f, 2233,781f), Vector(0.0f, -120,1535f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn19", "lean_rail_whore", Vector(146,7686f, 76,82224f, 2236,193f), Vector(0.0f, 60,10175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn12", "Rand_Idle_NearWall", Vector(154,3668f, 73,78206f, 2199,263f), Vector(0.0f, -150,2802f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn26", "Rand_Idle_NearWall", Vector(158,2312f, 73,78206f, 2197,509f), Vector(0.0f, -155,0991f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn27", "Rand_Idle_NearWall", Vector(161,0387f, 73,78206f, 2196,253f), Vector(0.0f, 203,278f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn28", "Rand_Idle_NearWall", Vector(150,2932f, 73,27614f, 2196,279f), Vector(0.0f, 116,2921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn29", "Rand_Idle_NearWall", Vector(162,85f, 73,75478f, 2193,054f), Vector(0.0f, 146,6199f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn30", "Rand_Idle_NearWall", Vector(167,919f, 73,56548f, 2192,654f), Vector(0.0f, -123,617f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn31", "Rand_Idle_NearWall_Shoulder_L", Vector(161,6451f, 73,78206f, 2194,805f), Vector(0.0f, -68,02848f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn32", "Rand_Idle_NearWall", Vector(151,2086f, 73,78206f, 2187,42f), Vector(0.0f, 24,01754f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn33", "Rand_Idle_NearWall", Vector(157,8458f, 73,78206f, 2186,092f), Vector(0.0f, -65,44751f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn34", "Rand_Idle_NearWall", Vector(167,0756f, 73,52133f, 2178,41f), Vector(0.0f, 56,39145f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn35", "Rand_Idle_NearWall", Vector(178,1037f, 73,54301f, 2186,599f), Vector(0.0f, -125,4801f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn36", "Rand_Idle_NearWall", Vector(176,0082f, 73,47186f, 2188,105f), Vector(0.0f, 144,8304f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn37", "Rand_Idle_NearWall", Vector(170,6258f, 73,56548f, 2188,695f), Vector(0.0f, -126,2383f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn38", "Rand_Idle_NearWall", Vector(179,1333f, 76,49473f, 2189,062f), Vector(0.0f, -124,531f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn40", "Rand_Idle_NearWall", Vector(211,9012f, 73,65852f, 2170,414f), Vector(0.0f, 84,65209f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn41", "Rand_Idle_NearWall", Vector(209,0799f, 73,46049f, 2186,02f), Vector(0.0f, 52,56473f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn42", "Rand_Idle_NearWall", Vector(210,6349f, 73,43044f, 2191,392f), Vector(0.0f, -128,0166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn43", "Rand_Idle_NearWall", Vector(214,6504f, 73,44994f, 2190,235f), Vector(0.0f, -131,2736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn44", "Rand_Idle_NearWall", Vector(218,8724f, 73,63784f, 2176,317f), Vector(0.0f, -95,7122f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn46", "Rand_Idle_NearWall", Vector(187,6161f, 73,20745f, 2220,618f), Vector(0.0f, -119,2397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn47", "Rand_Idle_NearWall", Vector(184,9287f, 73,20745f, 2225,3f), Vector(0.0f, -116,5522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn48", "Rand_Idle_NearWall", Vector(174,526f, 73,49428f, 2217,346f), Vector(0.0f, 60,49486f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn49", "Rand_Idle_NearWall", Vector(176,703f, 73,46745f, 2213,684f), Vector(0.0f, 58,51295f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn50", "Rand_Idle_NearWall", Vector(166,1488f, 73,75426f, 2220,32f), Vector(0.0f, 58,10432f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn51", "Rand_Idle_NearWall", Vector(168,1117f, 73,28625f, 2223,375f), Vector(0.0f, -33,14394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn52", "Rand_Idle_NearWall", Vector(165,1904f, 73,75426f, 2236,116f), Vector(0.0f, 148,7856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn53", "Rand_Idle_NearWall", Vector(173,7209f, 73,63088f, 2239,716f), Vector(0.0f, -120,6409f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn54", "Rand_Idle_NearWall", Vector(156,518f, 76,83068f, 2246,268f), Vector(0.0f, -119,7563f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn20", "nlean_rail", Vector(162,9397f, 73,83677f, 2287,079f), Vector(0.0f, 2,396759f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn22", "stand_lookdistance_w_any", Vector(178,308f, 76,48302f, 2187,849f), Vector(0.0f, -167,4938f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn23", "nlean_rail", Vector(180,0342f, 76,48302f, 2188,844f), Vector(0.0f, -123,1623f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn24", "nlean_rail", Vector(154,3631f, 76,82948f, 2252,071f), Vector(0.0f, 237,6618f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn25", "lean_rail_whore", Vector(144,9005f, 76,82732f, 2247,115f), Vector(0.0f, 148,8906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn26", "lean_rail_whore", Vector(148,3964f, 76,82549f, 2233,379f), Vector(0.0f, 60,65953f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn27", "nlean_rail", Vector(157,9456f, 76,83321f, 2245,976f), Vector(0.0f, -119,7373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn28", "lean_fence_L_talking", Vector(158,6685f, 76,81478f, 2244,421f), Vector(0.0f, -119,099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn4", "Rand_Idle_Sit_Ground", Vector(198,0423f, 73,15266f, 2195,307f), Vector(0.0f, 49,87036f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn5", "Rand_Idle_Sit_Ground", Vector(196,9534f, 73,28625f, 2193,129f), Vector(0.0f, 143,7826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn6", "Rand_Idle_Sit_Ground", Vector(198,3165f, 73,28625f, 2194,158f), Vector(0.0f, 89,74829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn7", "Rand_Idle_Sit_Ground", Vector(189,9721f, 73,28625f, 2194,89f), Vector(0.0f, -34,36646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn12", "nlean_rail", Vector(156,0245f, 73,78206f, 2199,935f), Vector(0.0f, -161,921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn14", "rand_idle_stand", Vector(151,9087f, 73,77082f, 2185,979f), Vector(0.0f, 397,7903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn16", "look_out_window_R", Vector(168,0098f, 73,56548f, 2194,658f), Vector(0.0f, -124,3027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn17", "rand_idle_stand", Vector(179,3362f, 73,54301f, 2186,124f), Vector(0.0f, -124,0135f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn18", "rand_idle_stand", Vector(180,6332f, 76,48302f, 2184,323f), Vector(0.0f, -122,8769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn19", "rand_idle_stand", Vector(210,454f, 73,63454f, 2176,098f), Vector(0.0f, 146,1605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn21", "rand_idle_stand", Vector(223,3816f, 73,47279f, 2170,998f), Vector(0.0f, -161,8313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn22", "sit_barrel", Vector(210,6463f, 73,41881f, 2183,103f), Vector(0.0f, -132,35f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn23", "rand_idle_stand", Vector(174,9694f, 73,46745f, 2213,82f), Vector(0.0f, 60,6209f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn24", "rand_idle_stand", Vector(162,9935f, 73,75426f, 2222,596f), Vector(0.0f, 59,50672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn25", "rand_idle_stand", Vector(146,3379f, 73,81388f, 2236,853f), Vector(0.0f, 61,42546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn26", "look_out_window_R", Vector(143,2908f, 76,81455f, 2242,425f), Vector(0.0f, 61,20352f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn13", "rand_idle_stand", Vector(144,9732f, 73,81388f, 2237,794f), Vector(0.0f, 61,12049f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn15", "rand_idle_stand", Vector(141,7776f, 73,81388f, 2244,714f), Vector(0.0f, 63,28223f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn16", "rand_idle_stand", Vector(155,6526f, 73,81388f, 2250,707f), Vector(0.0f, -119,5261f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn17", "rand_idle_stand", Vector(157,474f, 76,82356f, 2247,253f), Vector(0.0f, -120,4127f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn18", "rand_idle_stand", Vector(165,4725f, 72,64388f, 2247,119f), Vector(0.0f, -129,0039f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn19", "rand_idle_stand", Vector(176,1605f, 73,63088f, 2238,39f), Vector(0.0f, -106,2054f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn20", "rand_idle_stand", Vector(198,9652f, 73,30279f, 2222,876f), Vector(0.0f, -248,9262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn22", "look_out_window_L", Vector(209,4493f, 73,66834f, 2175,811f), Vector(0.0f, 83,93378f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn24", "Rand_Idle_NearWall", Vector(219,394f, 73,64899f, 2170,657f), Vector(0.0f, 265,3259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn25", "nlean_rail", Vector(180,9642f, 76,48096f, 2183,506f), Vector(0.0f, 237,0177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn26", "rand_idle_stand", Vector(178,7432f, 73,57933f, 2185,224f), Vector(0.0f, 238,1238f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn27", "rand_idle_stand", Vector(169,3693f, 73,56548f, 2191,835f), Vector(0.0f, 198,473f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn28", "dealer_and_customer", Vector(172,1274f, 73,56548f, 2185,708f), Vector(0.0f, 204,7478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn29", "rand_idle_stand", Vector(177,8279f, 73,54575f, 2189,23f), Vector(0.0f, 236,4579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn30", "rand_idle_stand", Vector(165,7789f, 73,75471f, 2194,562f), Vector(0.0f, 145,9898f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn31", "look_out_window_L", Vector(161,5329f, 73,78206f, 2197,307f), Vector(0.0f, 202,1866f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer", "dealer_and_customer", Vector(130,6866f, 73,28625f, 2353,961f), Vector(0.0f, 188,6099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer1", "kneel_hammer", Vector(125,683f, 73,55f, 2348,527f), Vector(0.0f, -85,25365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer2", "dealer_and_customer", Vector(141,0156f, 73,31409f, 2323,592f), Vector(0.0f, -275,7468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer4", "dealer_and_customer", Vector(154,1151f, 73,85268f, 2287,329f), Vector(0.0f, 270,6472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer5", "rand_idle_stand", Vector(90,74138f, 74,66713f, 2308,572f), Vector(0.0f, -100,5757f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1016), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer7", "dealer_and_customer", Vector(163,8873f, 73,75426f, 2235,227f), Vector(0.0f, 150,2487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer8", "dealer_and_customer", Vector(160,0556f, 72,64388f, 2255,108f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer9", "dealer_and_customer", Vector(210,839f, 73,42136f, 2189,67f), Vector(0.0f, 55,73087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer10", "dealer_and_customer", Vector(160,4873f, 73,75481f, 2191,298f), Vector(0.0f, -158,8176f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer11", "dealer_and_customer", Vector(179,4895f, 73,72922f, 2223,627f), Vector(0.0f, 150,2913f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve", "bar_drink_serve", Vector(171,0132f, 73,75444f, 2229,289f), Vector(0.0f, -119,699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve1", "Bar_lean_stand", Vector(170,5644f, 73,75444f, 2230,074f), Vector(0.0f, -119,699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve2", "Bar_lean_stand", Vector(169,7218f, 73,75444f, 2231,545f), Vector(0.0f, -119,699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1024), 0);
	*(&iLocal_14 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleep_doctor", "lie_sleep_on_bed_l", Vector(176,0292f, 76,48578f, 2185,546f), Vector(0.0f, -121,4194f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn34", "rand_idle_stand", Vector(172,0621f, 73,54302f, 2183,253f), Vector(0.0f, -108,9609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bbb", "rand_idle_stand", Vector(177,3621f, 73,2863f, 2191,641f), Vector(0.0f, -143,5755f, 0.0f));
	*(&iLocal_14 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "yyy", "Rand_Idle_NearWall", Vector(128,8749f, 73,28173f, 2228,78f), Vector(0.0f, -103,9595f, 0.0f));
	*(&iLocal_14 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "xxx", "stand_lookdistance_w_any", Vector(118,9509f, 73,34741f, 2280,659f), Vector(0.0f, 153,858f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks1", "nsit_docks", Vector(162,9294f, 73,564f, 2332,318f), Vector(0.0f, -86,14869f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks2", "nsit_docks", Vector(162,3817f, 72,28434f, 2352,144f), Vector(0.0f, -59,27157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks3", "nsit_docks", Vector(147,0426f, 72,49009f, 2303,115f), Vector(0.0f, -55,57274f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks4", "nsit_docks", Vector(165,2861f, 72,64388f, 2248,028f), Vector(0.0f, -120,6229f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks5", "nsit_docks", Vector(184,6858f, 73,56883f, 2247,097f), Vector(0.0f, 330,1573f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn58", "Rand_Idle_NearWall", Vector(170,2435f, 73,75426f, 2237,508f), Vector(0.0f, 58,94427f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1064), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn27", "rand_idle_stand", Vector(165,4406f, 73,75738f, 2224,04f), Vector(0.0f, 55,40129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn28", "rand_idle_stand", Vector(161,9366f, 73,75017f, 2230,418f), Vector(0.0f, 58,35014f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(168,4318f, 73,76094f, 2226,639f), Vector(0.0f, 266,7429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_mid3", "stand_drunk_rowdydrink", Vector(169,4894f, 73,75426f, 2226,749f), Vector(0.0f, 76,24605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn60", "Rand_Idle_NearWall", Vector(149,3802f, 73,83691f, 2237,958f), Vector(0.0f, -120,377f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn61", "Rand_Idle_NearWall", Vector(152,0736f, 73,81389f, 2242,438f), Vector(0.0f, 148,9812f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn19", "Rand_Idle_NearWall", Vector(148,323f, 73,71426f, 2347,169f), Vector(0.0f, -84,30215f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn39", "Rand_Idle_NearWall", Vector(122,183f, 73,28625f, 2326,572f), Vector(0.0f, 96,41321f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "whore_and_john", "mex_flirt_stand_link", Vector(149,7026f, 73,82844f, 2241,592f), Vector(0.0f, 49,67746f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "whore_and_john1", "mex_flirt_stand_link", Vector(149,6772f, 73,84079f, 2244,001f), Vector(0.0f, 27,76822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "whore_and_john2", "mex_flirt_stand_link", Vector(144,2717f, 73,81388f, 2242,877f), Vector(0.0f, -29,83286f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "whore_and_john3", "mex_flirt_stand_link", Vector(144,0075f, 76,83716f, 2241,222f), Vector(0.0f, -30,34649f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "whore_and_john4", "mex_flirt_stand_link", Vector(149,1605f, 73,81388f, 2234,522f), Vector(0.0f, -210,0102f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn29", "rand_idle_stand", Vector(168,9241f, 73,56548f, 2188,436f), Vector(0.0f, -124,3425f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn62", "Rand_Idle_NearWall", Vector(164,8631f, 73,56548f, 2192,288f), Vector(0.0f, -33,51538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "thig_cattle_scrap", "Locked_Footlocker", Vector(141,3577f, 76,49444f, 2325,332f), Vector(0.0f, 184,6398f, 0.0f));
	DECOR_SET_BOOL(&iLocal_14 + 1072, "scrap", true);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(102,0871f, 73,28625f, 2345,933f), Vector(0.0f, -66,6981f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table17", "factory_foreman", Vector(101,7579f, 73,28625f, 2347,537f), Vector(0.0f, 304,3614f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand", "rand_idle_stand", Vector(118,7538f, 73,28625f, 2341,647f), Vector(0.0f, 116,1614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L", "rand_idle_stand", Vector(121,4669f, 73,28625f, 2342,886f), Vector(0.0f, 537,7509f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_H_talking", "lean_fence_H_talking", Vector(116,2634f, 73,28625f, 2341,259f), Vector(0.0f, -3,907263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_H_talking1", "lean_fence_H_talking", Vector(105,5503f, 73,28625f, 2351,953f), Vector(0.0f, 120,0867f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel", "repair_kneel", Vector(104,6921f, 73,28625f, 2350,171f), Vector(0.0f, 113,4379f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_peeing_b_any1", "stand_peeing_b_any", Vector(138,2596f, 73,28625f, 2393,823f), Vector(0.0f, -122,7125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any4e", "leaning_stand", Vector(131,5875f, 73,28625f, 2384,887f), Vector(0.0f, 180,5612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(154,8701f, 73,4667f, 2377,47f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", Vector(124,0531f, 73,28625f, 2393,393f), Vector(0.0f, -16,53536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_check_clipboard", "factory_foreman", Vector(122,962f, 73,44438f, 2354,93f), Vector(0.0f, 124,2605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_check_clipboard1", "factory_foreman", Vector(122,8961f, 76,48626f, 2401,053f), Vector(0.0f, -19,84688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R", "look_out_window_R", Vector(140,7156f, 73,28625f, 2359,224f), Vector(0.0f, 73,24349f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs", "look_distance_binocs", Vector(123,7755f, 76,48626f, 2401,335f), Vector(0.0f, -34,88149f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs1", "look_distance_binocs", Vector(146,9737f, 76,73775f, 2350,274f), Vector(0.0f, 225,8853f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_announce7", "stand_announce", Vector(135,9999f, 73,28625f, 2361,193f), Vector(0.0f, -149,1626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R1", "look_out_window_R", Vector(128,21f, 73,28625f, 2371,165f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs2", "look_distance_binocs", Vector(146,225f, 76,53544f, 2324,571f), Vector(0.0f, -8,881503f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand1", "rand_idle_stand", Vector(127,1303f, 73,41247f, 2353,552f), Vector(0.0f, -174,652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs3", "look_distance_binocs", Vector(133,7941f, 76,74585f, 2350,913f), Vector(0.0f, 179,4245f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand2", "rand_idle_stand", Vector(124,2498f, 73,39103f, 2354,982f), Vector(0.0f, 222,762f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel1", "repair_kneel", Vector(115,5754f, 73,28625f, 2334,591f), Vector(0.0f, -182,059f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table18", "stand_hammer_table", Vector(129,3355f, 75,35422f, 2343,552f), Vector(0.0f, -36,73936f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_check_clipboard2", "stand_check_clipboard", Vector(139,4906f, 75,36517f, 2343,603f), Vector(0.0f, 36,6756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand3", "rand_idle_stand", Vector(149,8012f, 73,59628f, 2338,13f), Vector(0.0f, -94,69578f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R2", "look_out_window_R", Vector(132,9257f, 73,68758f, 2316,721f), Vector(0.0f, 96,14486f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nlean_rail", "nlean_rail", Vector(117,6258f, 73,64547f, 2240,629f), Vector(0.0f, 348,0325f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table", "lean_table", Vector(153,2972f, 73,75396f, 2189,657f), Vector(0.0f, 27,42689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table1", "lean_table", Vector(192,9261f, 73,28625f, 2195,061f), Vector(0.0f, 153,7607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R3", "look_out_window_R", Vector(159,1342f, 73,7813f, 2198,38f), Vector(0.0f, -153,0153f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve3", "bar_drink_serve", Vector(170,1309f, 73,75444f, 2230,839f), Vector(0.0f, -120,255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1080), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L2", "look_out_window_L", Vector(209,8049f, 73,63802f, 2171,682f), Vector(0.0f, 86,40276f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_H_talking2", "lean_fence_H_talking", Vector(204,4074f, 73,46024f, 2190,132f), Vector(0.0f, -130,5307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1088), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L3", "look_out_window_L", Vector(172,7247f, 73,46582f, 2218,187f), Vector(0.0f, 57,57725f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail1", "look_out_window_L", Vector(174,7788f, 73,46717f, 2214,63f), Vector(0.0f, 60,74233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L4", "look_out_window_L", Vector(161,3649f, 73,75426f, 2225,964f), Vector(0.0f, 60,32926f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking", "lean_fence_L_talking", Vector(159,7699f, 73,75426f, 2228,997f), Vector(0.0f, 60,55851f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking1", "lean_fence_H_talking", Vector(179,1047f, 73,63927f, 2230,498f), Vector(0.0f, 52,13071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail2", "stand_lookdistance_w_any", Vector(177,0822f, 73,63087f, 2237,354f), Vector(0.0f, -120,9184f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs4", "look_distance_binocs", Vector(182,13f, 73,56882f, 2247,761f), Vector(0.0f, 169,2248f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L5", "look_out_window_L", Vector(177,4312f, 73,63087f, 2236,735f), Vector(0.0f, -118,4928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking2", "lean_fence_L_talking", Vector(173,2836f, 76,69426f, 2233,045f), Vector(0.0f, 59,15214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(172,8711f, 76,69328f, 2224,43f), Vector(0.0f, 149,0642f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail3", "nlean_rail", Vector(174,9511f, 76,69796f, 2225,769f), Vector(0.0f, 148,884f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail4", "nlean_rail", Vector(173,6953f, 76,69426f, 2232,026f), Vector(0.0f, 58,70247f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R4", "look_out_window_R", Vector(173,3275f, 76,69427f, 2224,151f), Vector(0.0f, -27,97389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R5", "look_out_window_R", Vector(165,186f, 76,69427f, 2234,438f), Vector(0.0f, 151,595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L8", "look_out_window_L", Vector(144,667f, 73,81286f, 2239,996f), Vector(0.0f, 58,49026f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking4", "lean_fence_L_talking", Vector(145,806f, 76,8245f, 2238,15f), Vector(0.0f, 59,17937f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", Vector(143,7272f, 76,82088f, 2246,569f), Vector(0.0f, 145,6983f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R6", "look_out_window_R", Vector(147,4457f, 76,82196f, 2235,212f), Vector(0.0f, 60,09358f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R7", "look_out_window_R", Vector(151,1565f, 73,81388f, 2231,672f), Vector(0.0f, -28,19856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking5", "lean_fence_L_talking", Vector(153,1256f, 73,81388f, 2232,829f), Vector(0.0f, -29,73376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R8", "look_out_window_R", Vector(149,0742f, 76,83578f, 2236,598f), Vector(0.0f, 59,11226f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail5", "nlean_rail", Vector(149,0436f, 76,84858f, 2239,234f), Vector(0.0f, -29,42319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking6", "lean_fence_L_talking", Vector(151,353f, 76,83315f, 2240,619f), Vector(0.0f, -28,69592f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking7", "lean_fence_L_talking", Vector(155,2794f, 76,82482f, 2250,429f), Vector(0.0f, -119,0518f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any8", "lean_rail_forward", Vector(177,9397f, 76,49626f, 2187,579f), Vector(0.0f, 145,6753f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking8", "lean_fence_L_talking", Vector(181,6758f, 76,48103f, 2182,197f), Vector(0.0f, -123,1586f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nuse_shelf", "nuse_shelf", Vector(174,9261f, 76,48208f, 2181,924f), Vector(0.0f, 52,80502f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf1", "nuse_shelf", Vector(173,7551f, 73,54302f, 2179,545f), Vector(0.0f, 56,13665f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking9", "lean_fence_L_talking", Vector(180,3415f, 73,52628f, 2184,111f), Vector(0.0f, -122,578f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table2", "lean_table", Vector(168,9315f, 73,56548f, 2186,26f), Vector(0.0f, 234,4648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_H_talking3", "lean_fence_H_talking", Vector(142,2411f, 73,28625f, 2202,388f), Vector(0.0f, 118,8441f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L10", "look_out_window_L", Vector(111,1127f, 73,54504f, 2265,196f), Vector(0.0f, -10,09419f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L11", "look_out_window_L", Vector(96,83973f, 73,6824f, 2278,072f), Vector(0.0f, 170,0341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L12", "look_out_window_L", Vector(133,0539f, 73,68559f, 2318,519f), Vector(0.0f, 92,81506f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking10", "lean_fence_L_talking", Vector(132,6401f, 73,67674f, 2313,29f), Vector(0.0f, 96,25826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L13", "look_out_window_L", Vector(127,5265f, 73,70184f, 2292,825f), Vector(0.0f, 88,84258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_L_talking11", "lean_fence_L_talking", Vector(171,6611f, 73,86037f, 2289,666f), Vector(0.0f, -93,94854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R10", "look_out_window_R", Vector(170,6469f, 73,85049f, 2308,955f), Vector(0.0f, 182,7837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", Vector(139,5279f, 73,67674f, 2314,778f), Vector(0.0f, 85,33865f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_sleep_THI", "player_sleep_bed_L", Vector(125,452f, 76,74474f, 2234,143f), Vector(0.0f, -15,91076f, 0.0f));
	*(&iLocal_14 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_bartender_bar_work", "stand_bartender_bar_work", Vector(172,5178f, 73,75304f, 2230,373f), Vector(0.0f, 59,93721f, 0.0f));
	*(&iLocal_14 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Locked_Footlocker", "Locked_Footlocker", Vector(123,6983f, 76,7431f, 2232,502f), Vector(0.0f, 164,1285f, 0.0f));
	DECOR_SET_BOOL(&iLocal_14 + 1112, "PlayerHouseChest", true);
	*(&iLocal_14 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_sellPaper", "rand_idle_stand", Vector(140,4631f, 73,89118f, 2288,043f), Vector(0.0f, -8,050385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1120), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand", "rand_idle_stand", Vector(110,2009f, 73,28625f, 2375,809f), Vector(0.0f, -40,7128f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_peeing_b_any2", "stand_peeing_b_any", Vector(118,4556f, 73,28625f, 2373,049f), Vector(0.0f, -56,7909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_fence_H_talking5", "lean_fence_H_talking", Vector(120,12f, 73,28625f, 2363,66f), Vector(0.0f, 178,9972f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table19", "stand_check_clipboard", Vector(120,9106f, 73,28625f, 2362,822f), Vector(0.0f, 209,0828f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table20", "repair_kneel", Vector(127,8496f, 73,28625f, 2369,331f), Vector(0.0f, -78,06297f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand1", "rand_idle_stand", Vector(125,942f, 73,28625f, 2399,511f), Vector(0.0f, 22,65241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand2", "rand_idle_stand", Vector(144,7701f, 73,28625f, 2385,279f), Vector(0.0f, 68,13605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_barrel1", "sit_barrel", Vector(145,0119f, 73,28625f, 2383,733f), Vector(0.0f, 248,3877f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand", "leaning_stand", Vector(148,7131f, 73,28625f, 2373,364f), Vector(0.0f, 298,466f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_barrel2", "sit_barrel", Vector(139,2356f, 73,28625f, 2368,188f), Vector(0.0f, -99,59726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand1", "leaning_stand", Vector(132,956f, 73,28625f, 2367,358f), Vector(0.0f, 449,2415f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall12", "stand_hammer_wall", Vector(134,4247f, 73,28625f, 2373,165f), Vector(0.0f, 124,003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_barrel3", "sit_barrel", Vector(141,2113f, 73,28625f, 2361,107f), Vector(0.0f, -28,64318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_announce8", "stand_announce", Vector(116,0116f, 73,28625f, 2359,944f), Vector(0.0f, -221,952f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall", Vector(143,7882f, 74,6247f, 2361,26f), Vector(0.0f, -68,6724f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_Shoulder_L1", "Rand_Idle_NearWall", Vector(146,4267f, 73,69464f, 2351,266f), Vector(0.0f, -171,0705f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(162,221f, 73,57859f, 2333,569f), Vector(0.0f, 76,78224f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_Shoulder_L2", "rand_idle_stand", Vector(149,3525f, 73,54379f, 2322,121f), Vector(0.0f, 273,9315f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn29", "lean_rail_forward", Vector(156,9072f, 73,67596f, 2313,177f), Vector(0.0f, -137,1587f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn63", "Rand_Idle_NearWall", Vector(140,2798f, 73,99483f, 2300,918f), Vector(0.0f, -90,64076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn64", "Rand_Idle_NearWall", Vector(139,6166f, 73,83677f, 2291,926f), Vector(0.0f, -90,64076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(152,3097f, 73,91094f, 2294,411f), Vector(0.0f, 24,09706f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_Shoulder_L4", "rand_idle_stand", Vector(172,1371f, 73,8499f, 2296,175f), Vector(0.0f, -85,11501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_fence_low1", "Rand_Idle_NearWall", Vector(105,7711f, 73,28625f, 2336,358f), Vector(0.0f, 31,03665f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn65", "Rand_Idle_NearWall", Vector(88,92159f, 74,67686f, 2313,474f), Vector(0.0f, -98,88564f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nsit_docks", "rand_idle_stand", Vector(90,91752f, 74,68742f, 2305,335f), Vector(0.0f, -51,86886f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer12", "dealer_and_customer", Vector(94,74461f, 73,65334f, 2270,041f), Vector(0.0f, 17,58426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn30", "stand_announce", Vector(130,4486f, 76,48775f, 2330,458f), Vector(0.0f, 196,3248f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn31", "stand_check_clipboard", Vector(131,3583f, 76,48775f, 2330,433f), Vector(0.0f, 160,9111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer1", "kneel_hammer", Vector(127,851f, 73,54774f, 2336,177f), Vector(0.0f, -85,28256f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer2", "kneel_hammer", Vector(116,7077f, 73,60715f, 2186,871f), Vector(0.0f, -127,188f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand3", "rand_idle_stand", Vector(116,4561f, 73,60715f, 2188,226f), Vector(0.0f, 77,37262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "dealer_and_customer13", "dealer_and_customer", Vector(163,4729f, 73,47186f, 2181,616f), Vector(0.0f, 237,3963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any9", "nlean_rail", Vector(178,7865f, 76,49626f, 2186,852f), Vector(0.0f, 232,9871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any10", "nlean_rail", Vector(182,4142f, 76,49626f, 2181,438f), Vector(0.0f, 232,9871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf2", "nuse_shelf", Vector(177,0561f, 73,54302f, 2181,224f), Vector(0.0f, -33,50537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn40", "Rand_Idle_NearWall", Vector(231,7578f, 73,46771f, 2171,93f), Vector(0.0f, 120,2662f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L14", "look_out_window_R", Vector(209,931f, 73,63802f, 2170,018f), Vector(0.0f, 86,40276f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L15", "lean_fence_L_talking", Vector(216,8807f, 73,42861f, 2166,896f), Vector(0.0f, -0,2886877f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn66", "Rand_Idle_NearWall", Vector(205,1337f, 73,53309f, 2192,076f), Vector(0.0f, 141,3788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table3", "stand_hammer_table", Vector(191,7751f, 73,28625f, 2194,948f), Vector(0.0f, 153,7607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_sellPaper1", "stand_sellPaper", Vector(153,1894f, 73,28625f, 2230,954f), Vector(0.0f, -352,7992f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail6", "nlean_rail", Vector(200,9729f, 74,6724f, 2146,973f), Vector(0.0f, -197,0324f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail8", "look_out_window_R", Vector(198,0753f, 74,6724f, 2146,109f), Vector(0.0f, -197,0324f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail9", "Rand_Idle_NearWall", Vector(199,2317f, 74,6724f, 2144,64f), Vector(0.0f, -197,0324f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail10", "rand_idle_stand", Vector(196,8126f, 74,6724f, 2145,65f), Vector(0.0f, -165,259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail11", "rand_idle_stand", Vector(207,7888f, 74,6724f, 2148,89f), Vector(0.0f, -218,5038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail12", "Rand_Idle_NearWall", Vector(205,1771f, 74,6724f, 2146,298f), Vector(0.0f, -197,0324f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail13", "lean_fence_H_talking", Vector(207,8127f, 74,71519f, 2144,7f), Vector(0.0f, 70,02953f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail14", "Rand_Idle_NearWall", Vector(209,6645f, 74,6724f, 2141,438f), Vector(0.0f, 164,561f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail15w", "nlean_rail", Vector(207,1199f, 74,6724f, 2139,79f), Vector(0.0f, -15,71482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail16", "Rand_Idle_NearWall", Vector(200,3237f, 74,6724f, 2139,081f), Vector(0.0f, -374,9484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail17", "nsit_docks", Vector(197,2169f, 74,6724f, 2137,329f), Vector(0.0f, -285,7206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail18", "look_out_window_R", Vector(204,582f, 74,6724f, 2138,77f), Vector(0.0f, 51,1644f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_back", "lean_rail_back", Vector(197,059f, 74,69948f, 2140,244f), Vector(0.0f, 77,8905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any", "stand_hammerground_w_any", Vector(209,7606f, 73,12675f, 2129,73f), Vector(0.0f, -12,9102f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any1", "dealer_and_customer", Vector(210,4049f, 73,24629f, 2135,545f), Vector(0.0f, 80,3601f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel_nospawn20", "rand_idle_stand", Vector(160,9302f, 72,6578f, 2245,286f), Vector(0.0f, -158,0489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn32", "nlean_rail", Vector(151,0464f, 76,82288f, 2250,523f), Vector(0.0f, 150,1567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn33", "nlean_rail", Vector(146,4846f, 76,82288f, 2247,962f), Vector(0.0f, 150,1567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_nospawn34", "Rand_Idle_NearWall", Vector(161,3441f, 76,81478f, 2240,339f), Vector(0.0f, -251,9594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R11", "lean_fence_L_talking", Vector(168,5853f, 76,69427f, 2228,946f), Vector(0.0f, 241,4195f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_bartender_bar_work1", "stand_bartender_bar_work", Vector(171,5025f, 73,75304f, 2232,127f), Vector(0.0f, 59,93721f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf3", "nuse_shelf", Vector(173,7383f, 73,75499f, 2230,012f), Vector(0.0f, -120,4371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf4", "nuse_shelf", Vector(172,6671f, 73,75499f, 2231,835f), Vector(0.0f, -120,4371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf5", "nuse_shelf", Vector(171,5793f, 73,75499f, 2233,687f), Vector(0.0f, -120,4371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_sellPaper2", "stand_sellPaper", Vector(117,7909f, 73,28618f, 2304,879f), Vector(0.0f, -246,8532f, 0.0f));
	*(&iLocal_14 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "fivefingerfillet_spectate1", "fivefingerfillet_spectate", Vector(163,4155f, 73,837f, 2293,8f), Vector(0.0f, 104,893f, 0.0f));
	*(&iLocal_14 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "drink_player", "drink_player", Vector(168,8123f, 73,75145f, 2233,046f), Vector(0.0f, -119,4111f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_knock_on_door", "stand_knock_on_door", Vector(186,1626f, 73,20493f, 2222,933f), Vector(0.0f, 61,0629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_knock_on_door1", "stand_knock_on_door", Vector(209,9071f, 73,4599f, 2185,199f), Vector(0.0f, -128,3986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_knock_on_door2", "stand_knock_on_door", Vector(96,47626f, 73,7234f, 2276,775f), Vector(0.0f, -10,30002f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(159,4555f, 73,28625f, 2222,351f), Vector(0.0f, -8,105886f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(160,4522f, 73,28625f, 2222,411f), Vector(0.0f, 50,76703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(158,7412f, 73,28625f, 2221,704f), Vector(0.0f, -76,29604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(160,5111f, 73,28625f, 2220,93f), Vector(0.0f, 122,0536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand4", "rand_idle_stand", Vector(159,4312f, 73,28625f, 2220,505f), Vector(0.0f, -158,2855f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_attached_link", Vector(147,8268f, 73,7913f, 2237,245f), Vector(0.0f, 239,8045f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_dancing_link", "stand_drunk_dancing_link", Vector(154,1363f, 73,83279f, 2247,271f), Vector(0.0f, 71,45429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_dancing_link1", "stand_drunk_dancing_link", Vector(154,0504f, 73,83279f, 2244,426f), Vector(0.0f, 92,3068f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanRail1", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(156,6943f, 73,87476f, 2287,272f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_14 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanRail2", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(141,9091f, 76,81902f, 2245,333f), Vector(0.0f, -210,6145f, 0.0f));
	*(&iLocal_14 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanRail3", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(160,7389f, 73,72762f, 2227,114f), Vector(0.0f, 57,84918f, 0.0f));
	*(&iLocal_14 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanWall1", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(160,2826f, 73,73942f, 2233,397f), Vector(0.0f, -29,5092f, 0.0f));
	*(&iLocal_14 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanWall2", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(177,3483f, 73,75426f, 2226,388f), Vector(0.0f, -30,1577f, 0.0f));
	*(&iLocal_14 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanWall3", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(111,4422f, 73,60525f, 2266,799f), Vector(0.0f, 169,9674f, 0.0f));
	*(&iLocal_14 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_leanWall4", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(134,3309f, 73,71031f, 2291,9f), Vector(0.0f, -90,69236f, 0.0f));
	*(&iLocal_14 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_sitGround1", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(171,6622f, 73,34741f, 2221,267f), Vector(0.0f, 145,9678f, 0.0f));
	*(&iLocal_14 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "harass_sitGround2", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(192,6155f, 73,35395f, 2205,324f), Vector(0.0f, 145,6778f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand2", "leaning_stand", Vector(171,8683f, 73,74987f, 2227,824f), Vector(0.0f, -120,8927f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Bar_lean_stand", "Bar_lean_stand", Vector(168,5915f, 73,75352f, 2234,879f), Vector(0.0f, -50,05231f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve4", "bar_drink_serve", Vector(171,4801f, 73,75544f, 2228,598f), Vector(0.0f, -119,2312f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1256), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand3", "leaning_stand", Vector(169,289f, 73,76756f, 2232,309f), Vector(0.0f, -119,0012f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(163,185f, 73,837f, 2293,025f), Vector(0.0f, 113,8694f, 0.0f));
	*(&iLocal_14 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(163,604f, 73,837f, 2294,628f), Vector(0.0f, 96,14646f, 0.0f));
	return 1;
}

bool Function_134(struct<2>[] Param0) //Position: 0x10300 / 66304
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_138();
	iVar1 = 0;
	if (!Function_10(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_137(&(Param0[iVar02]), 8);
		}
		else if (Function_136())
		{
			iVar1 = 1;
			Function_137(&(Param0[iVar02]), 8);
		}
		Function_137(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_10(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_10(&(Param0[02]), 8) || iVar1));
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
				Function_137(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_137(&(Param0[iVar02]), 2);
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
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_137(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_137(&(Param0[iVar02]), 2);
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
	Function_135();
	return 1;
}

void Function_135() //Position: 0x106C2 / 67266
{
	if (!Function_107(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_136() //Position: 0x10702 / 67330
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

void Function_137(struct<13> Param0) //Position: 0x10730 / 67376
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_138() //Position: 0x10743 / 67395
{
	if (!Function_107(128))
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

var Function_139(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x10785 / 67461
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_140(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_137(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_140(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x107C3 / 67523
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_137(&(Param0[iVar02]), 4);
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

void Function_141(int iParam0, int iParam1) //Position: 0x10892 / 67730
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

bool Function_142() //Position: 0x108DC / 67804
{
	var uVar0;
	
	Function_141(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MoveObj1", Vector(115,9999f, 73,28625f, 2344.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MoveObj2", Vector(115,9999f, 73,28625f, 2346,276f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MoveObj3", Vector(114,4476f, 73,28625f, 2344,968f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "feedchickens2", Vector(137,9044f, 73,28625f, 2226,084f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "feedchickens3", Vector(146,5031f, 73,28625f, 2201,902f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "feedchickens4", Vector(183,9999f, 73,28625f, 2204.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "feedchickens1", Vector(157,5594f, 73,28625f, 2215,079f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "thif_enDuel5", Vector(145,3168f, 73,28625f, 2229,293f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "thif_enDuel4", Vector(142,8837f, 73,28625f, 2227,011f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "thif_enDuel3", Vector(143,4786f, 73,28625f, 2227,54f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "thif_enDuel2", Vector(144,5947f, 73,28625f, 2228,695f), Vector(0.0f, -86,91833f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "thif_enDuel1", Vector(143,9999f, 73,28625f, 2228.0f), Vector(0.0f, -89,7602f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "thif_playerDuel", Vector(135,9999f, 73,28625f, 2236.0f), Vector(0.0f, 92,19331f, 0.0f));
	*(&iLocal_4 + 8) = Vector(115,8303f, 73,29681f, 2230,878f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_PlayerHorse", Vector(115,8303f, 73,29681f, 2230,878f), Vector(0.0f, 0.0f, 0.0f));
	return 1;
}

void Function_143(char* cParam0) //Position: 0x10BAC / 68524
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

