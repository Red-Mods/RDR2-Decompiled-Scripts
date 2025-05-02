//Decompiled with MagicRDR v1.0
//Function Count : 123
//Statics Count : 712
//Natives Count : 168
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
	var uLocal_9 = 2;
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
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 28;
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
	int iLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 9;
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
	var uLocal_467 = 5;
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
	var uLocal_481 = 5;
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
	var uLocal_495 = 10;
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
	var uLocal_527 = 9;
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
	var uLocal_553 = 2;
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
	int iLocal_683 = 0;
	var uLocal_684 = 4;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_122(&cVar0, 3);
	Function_121();
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
				if (Function_118())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_109())
				{
					Function_108();
					Function_107(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_104())
				{
					Function_107(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_103(&uLocal_3);
				Function_100(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_99())
				{
					Function_87();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_86(iScriptParam_0);
				Function_85();
				Function_107(&(Global_43791[iScriptParam_0]), 8);
				if (Function_84(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_83(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_82(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_81(iScriptParam_0))
				{
					Function_75(iScriptParam_0);
					Function_74(64);
				}
				Function_107(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_81(iScriptParam_0))
				{
					Function_72(Function_73(), iScriptParam_0);
				}
				Function_71(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_70(&cVar0, 5.0f);
				Function_107(&(Global_43791[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_81(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_24(&uLocal_3, &uLocal_684, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_84(&(Global_43791[iScriptParam_0]), 131072))
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
	Function_8(&uLocal_3, &uLocal_684);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_74(64);
	Function_83(&(Global_43791[iScriptParam_0]), 32);
	Function_83(&(Global_43791[iScriptParam_0]), 64);
	Function_83(&(Global_43791[iScriptParam_0]), 512);
	Function_83(&(Global_43791[iScriptParam_0]), 16);
	Function_83(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_70(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	return;
}

void Function_2(int iParam0) //Position: 0x2F1 / 753
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

void Function_3(int iParam0) //Position: 0x327 / 807
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x349 / 841
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35F / 863
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x375 / 885
{
	Function_7();
	return;
}

void Function_7() //Position: 0x37E / 894
{
	RELEASE_LAYOUT_REF(&iLocal_435);
	return;
}

void Function_8(var uParam0, vector3[] vParam1) //Position: 0x38B / 907
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

void Function_9(bool bParam0, int iParam1, int iParam2) //Position: 0x3E8 / 1000
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

void Function_10(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4D2 / 1234
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

void Function_11() //Position: 0x651 / 1617
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_12(int iParam0) //Position: 0x65D / 1629
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

void Function_13(int iParam0) //Position: 0x6A7 / 1703
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

void Function_14(struct<17> Param0) //Position: 0x6ED / 1773
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_15(struct<17> Param0) //Position: 0x70A / 1802
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x728 / 1832
{
	Function_17();
	return;
}

void Function_17() //Position: 0x731 / 1841
{
	Function_18(&iLocal_29 + 8);
	RELEASE_LAYOUT_REF(&iLocal_29);
	return;
}

void Function_18(int iParam0) //Position: 0x744 / 1860
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

void Function_19(struct<2>[] Param0, int iParam1) //Position: 0x76C / 1900
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

void Function_20(struct<13> Param0) //Position: 0x8B7 / 2231
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_21(struct<13> Param0) //Position: 0x8D4 / 2260
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8F2 / 2290
{
	Function_23();
	return;
}

void Function_23() //Position: 0x8FB / 2299
{
	Function_18(&iLocal_7 + 8);
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_24(vector3 vParam0) //Position: 0x90E / 2318
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

bool Function_25(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x998 / 2456
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(&vParam0))
	{
		return 0;
	}
	Function_83(&(Global_43791[iParam2]), 4194304);
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
				if (!Function_84(&(Global_43791[iParam2]), 262144))
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

void Function_26(int iParam0) //Position: 0xDF0 / 3568
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_84(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_107(&(Global_43791[iParam0]), 4096);
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

float Function_27(int iParam0) //Position: 0xEE1 / 3809
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_28(int iParam0) //Position: 0xF1E / 3870
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, int iParam1) //Position: 0xF57 / 3927
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

var Function_30(int iParam0) //Position: 0xFC1 / 4033
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1019 / 4121
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

void Function_32(bool bParam0) //Position: 0x1241 / 4673
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x12DF / 4831
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

var Function_34() //Position: 0x191D / 6429
{
	int iVar0;
	
	return &iVar0;
}

var Function_35(int iParam0) //Position: 0x1926 / 6438
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1937 / 6455
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

struct<32> Function_37(char* cParam0) //Position: 0x1A2E / 6702
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A49 / 6729
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1AB0 / 6832
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1AC2 / 6850
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AD4 / 6868
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

int Function_42(int iParam0) //Position: 0x1C08 / 7176
{
	return Global_55480[iParam016].f_96;
}

void Function_43(int iParam0) //Position: 0x1C17 / 7191
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x1DB1 / 7601
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

void Function_45(var uParam0, int iParam1) //Position: 0x1FF5 / 8181
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(int iParam0, var uParam1, int iParam2) //Position: 0x2002 / 8194
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_47(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x202C / 8236
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

void Function_48() //Position: 0x22DF / 8927
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

void Function_49(var uParam0, int iParam1) //Position: 0x2352 / 9042
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

bool Function_50(bool bParam0) //Position: 0x2388 / 9096
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

int Function_51(int iParam0) //Position: 0x23FE / 9214
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_52() //Position: 0x240F / 9231
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

bool Function_53(int iParam0) //Position: 0x2428 / 9256
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x243E / 9278
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2453 / 9299
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2471 / 9329
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

void Function_57(struct<17> Param0) //Position: 0x2520 / 9504
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2533 / 9523
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

void Function_59(int iParam0, int iParam1) //Position: 0x25AD / 9645
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_13(iParam0);
	Function_12(&uVar0);
	PRINTNL();
	Function_10(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x25D6 / 9686
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

bool Function_61(int iParam0) //Position: 0x25F6 / 9718
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2612 / 9746
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(int iParam0) //Position: 0x2627 / 9767
{
	var uVar0;
	struct<2> Var1;
	
	iParam0 = iParam0;
	if (!iLocal_683)
	{
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			uVar0 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_playerHorse");
			if (IS_OBJECT_VALID(&uVar0))
			{
				Var1 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&uVar0, &Var1);
				iLocal_683 = Function_65(StackVal, Var1, 0, 0);
				Function_64(StackVal, Var1, 1, &uLocal_681);
			}
		}
	}
	else if (!IS_GRINGO_VALID(&uLocal_681))
	{
		iLocal_683 = 0;
	}
	return;
}

void Function_64(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x269E / 9886
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
	if (bParam2)
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
	}
	else
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
	}
}

bool Function_65(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x2754 / 10068
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_67(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_66(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_66(&(uVar0[1]), "UseCase1"));
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

var Function_66(var uParam0, int iParam1) //Position: 0x28D1 / 10449
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_67(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x28E0 / 10464
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_68())
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

bool Function_68() //Position: 0x2A2A / 10794
{
	if (Function_69(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_69(var uParam0, int iParam1) //Position: 0x2A45 / 10821
{
	return (uParam0 && iParam1) == 0;
}

void Function_70(char* cParam0) //Position: 0x2A52 / 10834
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

void Function_71(int iParam0) //Position: 0x2A92 / 10898
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

void Function_72(int iParam0, bool bParam1) //Position: 0x2B24 / 11044
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

var Function_73() //Position: 0x2C14 / 11284
{
	return &iLocal_7;
}

void Function_74(int iParam0) //Position: 0x2C1D / 11293
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_75(bool bParam0) //Position: 0x2C30 / 11312
{
	Function_76(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_80(&Global_46850));
	return;
}

void Function_76(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x2C54 / 11348
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
		Function_79();
	}
	if (&bParam5)
	{
		Function_77(1048576);
	}
}

void Function_77(int iParam0) //Position: 0x2D62 / 11618
{
	Function_78(&Global_43580, iParam0);
	return;
}

void Function_78(var uParam0, var uParam1) //Position: 0x2D70 / 11632
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_79() //Position: 0x2D8F / 11663
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_77(16384);
	}
	return;
}

bool Function_80(int[] iParam0) //Position: 0x2DAB / 11691
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

bool Function_81(int iParam0) //Position: 0x2DFC / 11772
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
		return Function_80(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_80(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_80(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_80(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_80(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_80(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_80(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_80(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_80(&Global_46914);
	}
	return 0;
}

void Function_82(int iParam0) //Position: 0x2ED9 / 11993
{
	iParam0 = iParam0;
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x2EE3 / 12003
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_84(int iParam0, int iParam1) //Position: 0x2EFD / 12029
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_85() //Position: 0x2F1A / 12058
{
	return;
}

void Function_86(var uParam0) //Position: 0x2F20 / 12064
{
	uParam0 = uParam0;
	return;
}

void Function_87() //Position: 0x2F2A / 12074
{
	Function_93(Global_46746[0]);
	Global_43787 = 1;
	Function_88(4, &iLocal_29 + 1616, &iLocal_29 + 616, 0, 0, 0, &iLocal_7 + 48);
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_29, "punv_player_house")))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_29, "punv_player_house"));
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_29, "punv_player_house"));
	}
	else
	{
		LOG_ERROR("PUN: Cannot find punv_player_house to restrict players room");
	}
	return;
}

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x2FF3 / 12275
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_92(&uParam1, &uParam2);
	if (!Function_91(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_90(&uParam4, 0);
		}
		else
		{
			Function_89(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_90(&iParam5, 0);
		}
		else
		{
			Function_89(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_66(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_66(&(uVar2[1]), "UseCase1"));
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

void Function_89(var uParam0, int iParam1) //Position: 0x33C3 / 13251
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

void Function_90(var uParam0, int iParam1) //Position: 0x341E / 13342
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

bool Function_91(int iParam0) //Position: 0x3476 / 13430
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_92(var uParam0, int iParam1) //Position: 0x348C / 13452
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

void Function_93(int iParam0) //Position: 0x35EA / 13802
{
	int iVar0;
	
	iVar0 = Function_94(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_69(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_69(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_69(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_69(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_69(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_69(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_69(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_69(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_69(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

int Function_94(bool bParam0, bool bParam1, bool bParam2) //Position: 0x382B / 14379
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_98(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_95(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_95(bParam0, bParam1, bParam2, 4294967295);
}

int Function_95(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3889 / 14473
{
	var uVar0;
	
	if (!Function_97(bParam2))
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
	uVar0 = Function_98(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_96(uVar0);
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

var Function_96(int iParam0) //Position: 0x39ED / 14829
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

bool Function_97(int iParam0) //Position: 0x3A2B / 14891
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x3A40 / 14912
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_99() //Position: 0x3A60 / 14944
{
	return 1;
}

void Function_100(int iParam0) //Position: 0x3A67 / 14951
{
	Function_102(&uLocal_3, &uLocal_684, 2, &Global_44085[iParam09] + 8, 4294967295, 0);
	Function_102(&uLocal_3, &uLocal_684, 5, &iLocal_435 + 344, 4294967295, 0);
	Function_102(&uLocal_3, &uLocal_684, 5, &iLocal_435 + 352, 4294967295, 0);
	Function_102(&uLocal_3, &uLocal_684, 5, &iLocal_435 + 496, 4294967295, 0);
	Function_101(&iLocal_435 + 496, 12);
	return;
}

void Function_101(var uParam0, bool bParam1) //Position: 0x3AC4 / 15044
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

void Function_102(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x3B30 / 15152
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

void Function_103(struct<5> Param0) //Position: 0x3C1D / 15389
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_104() //Position: 0x3C2E / 15406
{
	return Function_105();
}

int Function_105() //Position: 0x3C37 / 15415
{
	var uVar0;
	
	Function_106(3, 3);
	uVar0 = &uVar0;
	iLocal_435 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_435))
	{
		iLocal_435 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&iLocal_435 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "npunv_tran", 2,802597E-45f, Vector(-4842,567f, 33,78479f, 4970,404f), Vector(0.0f, 87,97502f, 0.0f), Vector(68,0244f, 21,45282f, 44,2508f));
	*(&iLocal_435 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_esc_nos_battle", 4,203895E-45f, Vector(-4609,521f, 13,98175f, 4137,299f), Vector(0.0f, 60.0f, 0.0f), Vector(200.0f, 50.0f, 300.0f));
	*(&iLocal_435 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_tran1", 4,203895E-45f, Vector(-4327,271f, 13,98175f, 4397,527f), Vector(0.0f, -3,631602f, 0.0f), Vector(92,06374f, 58,7631f, 90,68874f));
	*(&iLocal_435 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_tran2", 2,802597E-45f, Vector(-3266,412f, 33,78479f, 4546,414f), Vector(0.0f, 87,97502f, 0.0f), Vector(75,51233f, 37,61528f, 88,3866f));
	*(&iLocal_435 + 120) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_435, "punv_flk_WEST_set");
	*(&iLocal_435 + 40[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "coyotes6", 4,203895E-45f, Vector(-4053,511f, 31,61791f, 4256,35f), Vector(0.0f, 20.0f, 0.0f), Vector(192,6178f, 44,6306f, 126,3124f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[0]);
	*(&iLocal_435 + 40[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "coyotes1", 4,203895E-45f, Vector(-4283,042f, 19,36054f, 4115,044f), Vector(0.0f, 20.0f, 0.0f), Vector(119,3484f, 82,62196f, 120,0395f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[1]);
	*(&iLocal_435 + 40[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "coyotes3", 4,203895E-45f, Vector(-4567,866f, 19,961f, 4109,342f), Vector(0.0f, 20.0f, 0.0f), Vector(154,9664f, 82,62196f, 178,2139f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[2]);
	*(&iLocal_435 + 40[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "coyotes4", 4,203895E-45f, Vector(-4325,205f, 20,17509f, 4623,838f), Vector(0.0f, 20.0f, 0.0f), Vector(98,60401f, 82,62196f, 129,3296f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[3]);
	*(&iLocal_435 + 40[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "coyotes5", 4,203895E-45f, Vector(-4754,885f, 71,98521f, 4885,782f), Vector(0.0f, 20.0f, 0.0f), Vector(92,62215f, 82,62196f, 129,3296f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[4]);
	*(&iLocal_435 + 40[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "ncoyotes10", 4,203895E-45f, Vector(-4875,985f, 46,44733f, 4963,133f), Vector(0.0f, 20.0f, 0.0f), Vector(58,77868f, 74,20964f, 70,03761f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[5]);
	*(&iLocal_435 + 40[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "coyotes9", 4,203895E-45f, Vector(-4512,592f, 38,78421f, 4442,362f), Vector(0.0f, 20.0f, 0.0f), Vector(86,0778f, 74,20964f, 165,4384f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[6]);
	*(&iLocal_435 + 40[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "goats14", 4,203895E-45f, Vector(-4372,829f, 27,13992f, 4815,416f), Vector(0.0f, 20.0f, 0.0f), Vector(79,04242f, 55,95125f, 75,64068f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[7]);
	*(&iLocal_435 + 40[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "goats24", 4,203895E-45f, Vector(-4580,596f, 46,69889f, 4750,83f), Vector(0.0f, 20.0f, 0.0f), Vector(125,3083f, 43,02709f, 157,6022f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 120, &iLocal_435 + 40[8]);
	*(&iLocal_435 + 176) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_435, "punv_flk_EAST_set");
	*(&iLocal_435 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wolfs", 4,203895E-45f, Vector(-3398,574f, 97,65329f, 4419,211f), Vector(0.0f, 20.0f, 0.0f), Vector(58,66848f, 19,16315f, 137,4961f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 176, &iLocal_435 + 128[0]);
	*(&iLocal_435 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wolfs1", 4,203895E-45f, Vector(-3184,232f, 54,10172f, 4300,294f), Vector(0.0f, 2,679045f, 0.0f), Vector(151,1155f, 17,93411f, 194,6789f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 176, &iLocal_435 + 128[1]);
	*(&iLocal_435 + 128[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wolfs2", 4,203895E-45f, Vector(-3206,257f, 66,46912f, 4636,435f), Vector(0.0f, -11,54876f, 0.0f), Vector(265,7644f, 19,28539f, 93,74146f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 176, &iLocal_435 + 128[2]);
	*(&iLocal_435 + 128[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wolfs3", 4,203895E-45f, Vector(-3613,859f, 128,8785f, 4535,32f), Vector(0.0f, 20.0f, 0.0f), Vector(132,8462f, 18,94953f, 155,3031f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 176, &iLocal_435 + 128[3]);
	*(&iLocal_435 + 128[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "goats", 4,203895E-45f, Vector(-3549,181f, 76,45248f, 4796,4f), Vector(0.0f, 20.0f, 0.0f), Vector(183,6342f, 33,18642f, 79,31761f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 176, &iLocal_435 + 128[4]);
	*(&iLocal_435 + 232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_435, "punv_flk_CENTER_set");
	*(&iLocal_435 + 184[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wildHorses", 4,203895E-45f, Vector(-4140,523f, 64,02142f, 4521,697f), Vector(0.0f, 20.0f, 0.0f), Vector(112,8827f, 56,05088f, 137,2034f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 232, &iLocal_435 + 184[0]);
	*(&iLocal_435 + 184[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wildHorses1", 4,203895E-45f, Vector(-3866,674f, 36,41291f, 4403,495f), Vector(0.0f, 20.0f, 0.0f), Vector(137,2034f, 42,62727f, 97,33247f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 232, &iLocal_435 + 184[1]);
	*(&iLocal_435 + 184[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wildHorses2", 4,203895E-45f, Vector(-3939,405f, 39,44256f, 4631,492f), Vector(0.0f, 20.0f, 0.0f), Vector(78,74556f, 42,62727f, 124,5381f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 232, &iLocal_435 + 184[2]);
	*(&iLocal_435 + 184[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wildHorses3", 4,203895E-45f, Vector(-4129,055f, 40,76117f, 4787,472f), Vector(0.0f, 41,75226f, 0.0f), Vector(158,0032f, 54,5681f, 137,2034f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 232, &iLocal_435 + 184[3]);
	*(&iLocal_435 + 184[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "wildHorses4", 4,203895E-45f, Vector(-3923,579f, 31,12158f, 4847,364f), Vector(0.0f, 50,48258f, 0.0f), Vector(108,1141f, 40,94079f, 76,08596f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 232, &iLocal_435 + 184[4]);
	*(&iLocal_435 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_435, "punv_flk_BIRD_set");
	*(&iLocal_435 + 240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds1", 4,203895E-45f, Vector(-4752.0f, 33,53765f, 4056.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[0]);
	*(&iLocal_435 + 240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds2", 4,203895E-45f, Vector(-4576.0f, 26,98331f, 4372f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[1]);
	*(&iLocal_435 + 240[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds3", 4,203895E-45f, Vector(-4510,71f, 31,26405f, 3952f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[2]);
	*(&iLocal_435 + 240[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds4", 4,203895E-45f, Vector(-4064f, 30,32837f, 4304.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[3]);
	*(&iLocal_435 + 240[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds5", 4,203895E-45f, Vector(-3871,368f, 42,61471f, 4306,821f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[4]);
	*(&iLocal_435 + 240[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds6", 4,203895E-45f, Vector(-3472f, 39,96742f, 4260.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[5]);
	*(&iLocal_435 + 240[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds7", 4,203895E-45f, Vector(-4208.0f, 59,79043f, 4704f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[6]);
	*(&iLocal_435 + 240[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds8", 4,203895E-45f, Vector(-4756.0f, 66,91064f, 4908f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[7]);
	*(&iLocal_435 + 240[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds9", 4,203895E-45f, Vector(-3736f, 45,54935f, 4714.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[8]);
	*(&iLocal_435 + 240[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "birds10", 4,203895E-45f, Vector(-3308.0f, 72,19768f, 4540f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 328, &iLocal_435 + 240[9]);
	*(&iLocal_435 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_corr_g", 4,203895E-45f, Vector(-4394,522f, 42,22266f, 4329,721f), Vector(0.0f, 20.0f, 0.0f), Vector(19,06864f, 21,58452f, 13,16881f));
	*(&iLocal_435 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_vista_1", 4,203895E-45f, Vector(-4723,343f, 61,142f, 4708,676f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 20.0f, 5.0f));
	*(&iLocal_435 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_vista_2", 4,203895E-45f, Vector(-4502,206f, 48,573f, 4278,378f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 20.0f, 10.0f));
	*(&iLocal_435 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "PLT_bats", 4,203895E-45f, Vector(-3370,941f, 60,25747f, 4768,961f), Vector(0.0f, 282,2999f, 0.0f), Vector(16,35729f, 5,60464f, 25,5488f));
	*(&iLocal_435 + 448) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_435, "punv_aquaticWildlife_set");
	*(&iLocal_435 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness9", 2,802597E-45f, Vector(-3256,872f, 1,768422f, 3988,495f), Vector(0.0f, 12,37247f, 0.0f), Vector(368,4553f, 28,50097f, 129,9468f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[0]);
	*(&iLocal_435 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness8", 2,802597E-45f, Vector(-3553,333f, 1,170906f, 4135,474f), Vector(0.0f, 9,2336f, 0.0f), Vector(408,202f, 28,50097f, 101,0467f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[1]);
	*(&iLocal_435 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness7", 2,802597E-45f, Vector(-3890,82f, -9,707797f, 4075,958f), Vector(0.0f, 52,61807f, 0.0f), Vector(132,6222f, 28,50097f, 418,6697f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[2]);
	*(&iLocal_435 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness6", 2,802597E-45f, Vector(-4164.0f, -10,36915f, 3928.0f), Vector(0.0f, -28,16471f, 0.0f), Vector(219,4432f, 28,50097f, 202,146f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[3]);
	*(&iLocal_435 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness5", 2,802597E-45f, Vector(-4444.0f, -8,29268f, 3888,521f), Vector(0.0f, 0.0f, 0.0f), Vector(440,7853f, 28,50097f, 151,8147f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[4]);
	*(&iLocal_435 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness4", 2,802597E-45f, Vector(-4718,319f, -8,481395f, 4088,914f), Vector(0.0f, 36,44233f, 0.0f), Vector(438,6112f, 38,5436f, 166,0771f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[5]);
	*(&iLocal_435 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness3", 2,802597E-45f, Vector(-4727,755f, 0,09645043f, 4250,598f), Vector(0.0f, 61,69999f, 0.0f), Vector(172,8494f, 28,50097f, 381,0598f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[6]);
	*(&iLocal_435 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness2", 2,802597E-45f, Vector(-4743,079f, -3,361446f, 4528f), Vector(0.0f, -28,1262f, 0.0f), Vector(144,2621f, 32,11439f, 340,5732f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[7]);
	*(&iLocal_435 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_aquaticWilderness1", 2,802597E-45f, Vector(-4999,959f, -3,257817f, 4588,019f), Vector(0.0f, -39,11819f, 0.0f), Vector(193,3242f, 0,2104689f, 123,0471f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 448, &iLocal_435 + 368[8]);
	*(&iLocal_435 + 456) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_bhstop", 2,802597E-45f, Vector(-4343,281f, 31,61466f, 4385,777f), Vector(0.0f, 4,245905f, 0.0f), Vector(21,1225f, 7,161017f, 10,41845f));
	*(&iLocal_435 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_player_house", 2,802597E-45f, Vector(-3837,362f, 4,180588f, 4225,974f), Vector(0.0f, 4,245905f, 0.0f), Vector(6,321364f, 5,02245f, 4,020336f));
	*(&iLocal_435 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_435, "punv_plata_caves_set");
	*(&iLocal_435 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_plata_02", 2,802597E-45f, Vector(-3371,545f, 59,80634f, 4773,75f), Vector(0,3701224f, 21,03401f, -0,2902972f), Vector(19,94097f, 7,980592f, 21,51182f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 496, &iLocal_435 + 472[0]);
	*(&iLocal_435 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_435, "punv_plata_01", 2,802597E-45f, Vector(-3349,833f, 60,82028f, 4766,098f), Vector(-8,770242f, 28,54804f, 2,587362f), Vector(28,46577f, 6,975687f, 18,88288f));
	ADD_TO_VOLUME_SET(&iLocal_435 + 496, &iLocal_435 + 472[1]);
	*(&iLocal_435 + 504) = Vector(-4115,892f, 22,086f, 4708,979f);
	*(&iLocal_435 + 504 + 12) = Vector(0.0f, 290.0f, 0.0f);
	*(&iLocal_435 + 528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "npunf_tran", Vector(-4115,892f, 22,086f, 4708,979f), Vector(0.0f, 290.0f, 0.0f));
	*(&iLocal_435 + 536) = Vector(-3994,026f, 16,895f, 4693,762f);
	*(&iLocal_435 + 536 + 12) = Vector(0.0f, 146,779f, 0.0f);
	*(&iLocal_435 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran1", Vector(-3994,026f, 16,895f, 4693,762f), Vector(0.0f, 146,779f, 0.0f));
	*(&iLocal_435 + 568) = Vector(-4145,799f, 21,082f, 4710,389f);
	*(&iLocal_435 + 568 + 12) = Vector(0.0f, 69,084f, 0.0f);
	*(&iLocal_435 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran2", Vector(-4145,799f, 21,082f, 4710,389f), Vector(0.0f, 69,084f, 0.0f));
	*(&iLocal_435 + 600) = Vector(-3561,648f, 6,032f, 4513,19f);
	*(&iLocal_435 + 600 + 12) = Vector(0.0f, 221,152f, 0.0f);
	*(&iLocal_435 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran3", Vector(-3561,648f, 6,032f, 4513,19f), Vector(0.0f, 221,152f, 0.0f));
	*(&iLocal_435 + 632) = Vector(-3296,803f, 38,178f, 4501,235f);
	*(&iLocal_435 + 632 + 12) = Vector(0.0f, 149,359f, 0.0f);
	*(&iLocal_435 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran4", Vector(-3296,803f, 38,178f, 4501,235f), Vector(0.0f, 149,359f, 0.0f));
	*(&iLocal_435 + 664) = Vector(-3106,449f, 34,244f, 4601,692f);
	*(&iLocal_435 + 664 + 12) = Vector(0.0f, 14,633f, 0.0f);
	*(&iLocal_435 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran5", Vector(-3106,449f, 34,244f, 4601,692f), Vector(0.0f, 14,633f, 0.0f));
	*(&iLocal_435 + 696) = Vector(-3514,543f, 8,554f, 4243,936f);
	*(&iLocal_435 + 696 + 12) = Vector(0.0f, 100,655f, 0.0f);
	*(&iLocal_435 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran6", Vector(-3514,543f, 8,554f, 4243,936f), Vector(0.0f, 100,655f, 0.0f));
	*(&iLocal_435 + 728) = Vector(-3884,977f, 8,031f, 4412,518f);
	*(&iLocal_435 + 728 + 12) = Vector(0.0f, 358,598f, 0.0f);
	*(&iLocal_435 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran7", Vector(-3884,977f, 8,031f, 4412,518f), Vector(0.0f, 358,598f, 0.0f));
	*(&iLocal_435 + 760) = Vector(-4384,167f, 3,163f, 3897,498f);
	*(&iLocal_435 + 760 + 12) = Vector(0.0f, 100,135f, 0.0f);
	*(&iLocal_435 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran8", Vector(-4384,167f, 3,163f, 3897,498f), Vector(0.0f, 100,135f, 0.0f));
	*(&iLocal_435 + 792) = Vector(-4465,502f, 3,012f, 3996,664f);
	*(&iLocal_435 + 792 + 12) = Vector(0.0f, 213,845f, 0.0f);
	*(&iLocal_435 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran9", Vector(-4465,502f, 3,012f, 3996,664f), Vector(0.0f, 213,845f, 0.0f));
	*(&iLocal_435 + 824) = Vector(-4691,783f, 25,123f, 4898,886f);
	*(&iLocal_435 + 824 + 12) = Vector(0.0f, 358,836f, 0.0f);
	*(&iLocal_435 + 848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran10", Vector(-4691,783f, 25,123f, 4898,886f), Vector(0.0f, 358,836f, 0.0f));
	*(&iLocal_435 + 856) = Vector(-4279,235f, 21,352f, 4823,072f);
	*(&iLocal_435 + 856 + 12) = Vector(0.0f, 331,647f, 0.0f);
	*(&iLocal_435 + 880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran11", Vector(-4279,235f, 21,352f, 4823,072f), Vector(0.0f, 331,647f, 0.0f));
	*(&iLocal_435 + 888) = Vector(-3802,477f, 6,023f, 4552,769f);
	*(&iLocal_435 + 888 + 12) = Vector(0.0f, 284,321f, 0.0f);
	*(&iLocal_435 + 912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran12", Vector(-3802,477f, 6,023f, 4552,769f), Vector(0.0f, 284,321f, 0.0f));
	*(&iLocal_435 + 920) = Vector(-3169,164f, 38,25f, 4477,19f);
	*(&iLocal_435 + 920 + 12) = Vector(0.0f, 70,547f, 0.0f);
	*(&iLocal_435 + 944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_tran13", Vector(-3169,164f, 38,25f, 4477,19f), Vector(0.0f, 70,547f, 0.0f));
	*(&iLocal_435 + 952) = Vector(-3832,19f, 2,16f, 4212,83f);
	*(&iLocal_435 + 952 + 12) = Vector(0.0f, -23,08565f, 0.0f);
	*(&iLocal_435 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_435, "punf_respawn_water_01", Vector(-3832,19f, 2,16f, 4212,83f), Vector(0.0f, -23,08565f, 0.0f));
	return 1;
}

void Function_106(int iParam0, int iParam1) //Position: 0x539D / 21405
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

void Function_107(var uParam0, int iParam1) //Position: 0x53E7 / 21479
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_108() //Position: 0x53F8 / 21496
{
	return;
}

bool Function_109() //Position: 0x53FE / 21502
{
	return Function_110();
}

int Function_110() //Position: 0x5407 / 21511
{
	var uVar0;
	
	Function_106(3, 3);
	uVar0 = &uVar0;
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_116(&iLocal_29 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_111(&iLocal_29 + 8))
	{
		return 0;
	}
	iLocal_29 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_29))
	{
		iLocal_29 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&iLocal_29 + 464) = Vector(-3568f, 10,03922f, 4690,101f);
	*(&iLocal_29 + 464 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_29 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "punf_bhint", Vector(-3568f, 10,03922f, 4690,101f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 496) = Vector(-3385,052f, 55,49248f, 4743,046f);
	*(&iLocal_29 + 496 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_29 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "punf_bhint1", Vector(-3385,052f, 55,49248f, 4743,046f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 528) = Vector(-3858,618f, 7,561752f, 4324,156f);
	*(&iLocal_29 + 528 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_29 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "punf_bhint2", Vector(-3858,618f, 7,561752f, 4324,156f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 560) = Vector(-2719,469f, 56,13536f, 4626,306f);
	*(&iLocal_29 + 560 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_29 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "punf_bhint4", Vector(-2719,469f, 56,13536f, 4626,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 592) = Vector(-3838,222f, 2,936056f, 4224,813f);
	*(&iLocal_29 + 592 + 12) = Vector(0.0f, 9,896287f, 0.0f);
	*(&iLocal_29 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "player_save_flag_PUC", Vector(-3838,222f, 2,936056f, 4224,813f), Vector(0.0f, 9,896287f, 0.0f));
	*(&iLocal_29 + 624) = Vector(-3361,005f, 57,105f, 4753,646f);
	*(&iLocal_29 + 624 + 12) = Vector(0.0f, 71,122f, 0.0f);
	*(&iLocal_29 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "punf_bhint5", Vector(-3361,005f, 57,105f, 4753,646f), Vector(0.0f, 71,122f, 0.0f));
	*(&iLocal_29 + 656) = Vector(-3387,089f, 56,047f, 4760,838f);
	*(&iLocal_29 + 656 + 12) = Vector(0.0f, 66,78f, 0.0f);
	*(&iLocal_29 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "punf_bhint6", Vector(-3387,089f, 56,047f, 4760,838f), Vector(0.0f, 66,78f, 0.0f));
	*(&iLocal_29 + 688) = Vector(-3342,636f, 60,009f, 4761,252f);
	*(&iLocal_29 + 688 + 12) = Vector(0.0f, 80,667f, 0.0f);
	*(&iLocal_29 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "pltf_bhtreas", Vector(-3342,636f, 60,009f, 4761,252f), Vector(0.0f, 80,667f, 0.0f));
	*(&iLocal_29 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", Vector(-4632,535f, 11,04314f, 4158,549f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", Vector(-4426,68f, 9,035282f, 4084.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", Vector(-4493,135f, 31,7201f, 4356,126f), Vector(0.0f, 92,51361f, 0.0f));
	*(&iLocal_29 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", Vector(-4558,406f, 28,35676f, 4676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", Vector(-4805,758f, 56,31878f, 4690,146f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", Vector(-4668f, 37,131f, 4772f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", Vector(-4364,523f, 38,22166f, 4939,899f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", Vector(-4409,146f, 21,25448f, 4785,146f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", Vector(-4189,719f, 33,21698f, 4571,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", Vector(-4472,893f, 19,16406f, 4472.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", Vector(-4084f, 28,10982f, 4472.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", Vector(-4149,149f, 26,06166f, 4640,418f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", Vector(-4356,042f, 19,05772f, 4866,668f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", Vector(-3978,189f, 22,98985f, 4722,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", Vector(-3843,246f, 19,07475f, 4624,743f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", Vector(-3794,123f, 16,16675f, 4523,952f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", Vector(-3684f, 42,5381f, 4797,563f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", Vector(-4380,303f, 20,46654f, 4539,749f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", Vector(-3656,912f, 16,05293f, 4323,089f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", Vector(-4185,621f, 26,89562f, 4823,349f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", Vector(-4076,728f, 8,020976f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", Vector(-3381,186f, 41,79821f, 4516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", Vector(-3293,425f, 24,08786f, 4250,755f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", Vector(-3163,528f, 12,40064f, 4184,124f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", Vector(-3914,963f, 6,85247f, 4232,754f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", Vector(-4341,831f, 10,03922f, 3941,085f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear26", "Player_Herb_PricklyPear", Vector(-3491,775f, 39,79387f, 4621,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", Vector(-3763,327f, 11,09543f, 4268,9f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", Vector(-4177,569f, 19,92033f, 4230,45f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", Vector(-3877,123f, 7,098152f, 4314,877f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear30", "Player_Herb_PricklyPear", Vector(-4604,543f, 13,05097f, 4078,206f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear31", "Player_Herb_PricklyPear", Vector(-4189,641f, 6,694569f, 4036,434f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear33", "Player_Herb_PricklyPear", Vector(-4286,105f, 19,51563f, 4523,792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear34", "Player_Herb_PricklyPear", Vector(-3964f, 26,36402f, 4591,619f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear73", "Player_Herb_PricklyPear", Vector(-3921,737f, 10,23184f, 4457,994f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear74", "Player_Herb_PricklyPear", Vector(-3462,793f, 48,18824f, 4724.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear75", "Player_Herb_PricklyPear", Vector(-3242,406f, 52,46712f, 4662,22f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear76", "Player_Herb_PricklyPear", Vector(-3834,247f, 52,18822f, 4872,777f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear77", "Player_Herb_PricklyPear", Vector(-3600f, 21,08236f, 4282,167f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Sit_Ground_Drink10", "Sit_Ground_Drink", Vector(-3566,151f, 10,03922f, 4684,807f), Vector(0.0f, 125,7517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1032), 0);
	*(&iLocal_29 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "rand_idle_stand", "rand_idle_stand", Vector(-3543,14f, 14,39135f, 4677,602f), Vector(0.0f, 104,3152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1040), 0);
	*(&iLocal_29 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Sit_Ground_Drink2", "Sit_Ground_Drink", Vector(-3542,386f, 14,49005f, 4675,354f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1048), 0);
	*(&iLocal_29 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(-3542,094f, 14,49005f, 4673,319f), Vector(0.0f, 136,8575f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1056), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_rand_idle_stand2", "rand_idle_stand", Vector(-2748,117f, 46,183f, 4608,924f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_rand_idle_stand1", "rand_idle_stand", Vector(-2738,463f, 52,114f, 4605,324f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "ndiab_Pee1", "Pee", Vector(-2732,317f, 55,88308f, 4602,23f), Vector(0.0f, -78,35882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2721,312f, 56,135f, 4626,071f), Vector(0.0f, -71,04374f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-2717,047f, 56,13536f, 4626,959f), Vector(0.0f, 28,81129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2719,872f, 56,14576f, 4632,723f), Vector(0.0f, -160,4651f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_Pee", "Pee", Vector(-2719,947f, 56,14061f, 4619,677f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_rand_idle_stand", "rand_idle_stand", Vector(-2732,475f, 54,799f, 4620,533f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-2719,381f, 56,136f, 4624,018f), Vector(0.0f, -86,41405f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2717,162f, 56,13536f, 4622,923f), Vector(0.0f, -199,554f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-2718,725f, 56,19336f, 4625,808f), Vector(0.0f, -49,80202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_stand", "rand_idle_stand", Vector(-2755,338f, 44,574f, 4608,967f), Vector(0.0f, 47,45972f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2747,982f, 46,58796f, 4617,084f), Vector(0.0f, -261,3201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_sit_smokediab", "sit_ground_smoke", Vector(-2750,69f, 46,5379f, 4619,904f), Vector(0.0f, -279,5391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_smoking_stand", "smoking_stand", Vector(-2713,061f, 57,17479f, 4633,203f), Vector(0.0f, -192,8825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2730,924f, 55,25158f, 4607,433f), Vector(0.0f, 70,70719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_horse_stay7", "horse_stay", Vector(-2717,415f, 46,003f, 4670,128f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_horse_stay6", "horse_stay", Vector(-2728,029f, 48,83f, 4663,372f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_horse_stay5", "horse_stay", Vector(-2744,786f, 47,842f, 4622,784f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_horse_stay", "horse_stay", Vector(-2752,478f, 45,581f, 4613,565f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_lookdistance_binocs", "look_distance_binocs", Vector(-2739,578f, 52,528f, 4609,783f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "diab_lookdistance_binocs1", "look_distance_binocs", Vector(-2723,603f, 48,057f, 4670,079f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "stand_lookdistance_diab", "stand_lookdistance_w_any", Vector(-2711,862f, 45,174f, 4549,208f), Vector(0.0f, 183,9572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Dia_lookdistance_binocs", "look_distance_binocs", Vector(-2751,219f, 41,231f, 4569,213f), Vector(0.0f, 105,7632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Sit_Ground_Only", "Sit_Ground_Only", Vector(-3544,161f, 14,49005f, 4675,211f), Vector(0.0f, -35,80775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1064), 0);
	*(&iLocal_29 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sit_ground_smoke10", "sit_ground_smoke", Vector(-3552,318f, 20,33336f, 4707,359f), Vector(0.0f, -96,85366f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1072), 0);
	*(&iLocal_29 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-3550,872f, 20,26141f, 4706,266f), Vector(0.0f, -184,3158f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1080), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_look_distance_binocs2", "look_distance_binocs", Vector(-3563,442f, 17,07998f, 4662,798f), Vector(0.0f, 14,69602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_horse_tend2", "horse_tend", Vector(-3569,781f, 10,02471f, 4677,918f), Vector(0.0f, -183,2637f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_horse_stay1", "horse_stay", Vector(-3567,08f, 10,039f, 4678,634f), Vector(0.0f, -38,47382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_horse_tend1", "horse_tend", Vector(-3585,365f, 10,03922f, 4692,382f), Vector(0.0f, -58,05069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_horse_stay", "horse_stay", Vector(-3582,068f, 10,16748f, 4693,933f), Vector(0.0f, -76,20228f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_horse_tend", "horse_tend", Vector(-3583,761f, 10,06808f, 4690,108f), Vector(0.0f, -61,44313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1088), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_rand_idle_stand1", "rand_idle_stand", Vector(-3546,922f, 14,49005f, 4672,127f), Vector(0.0f, 133,9157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_sleeping_scripted2", "sleeping_scripted", Vector(-3563,274f, 10,108f, 4684,026f), Vector(0.0f, -218,0335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sit_ground_smoke", "sit_ground_smoke", Vector(-3831,97f, 2,137364f, 4213,593f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1096), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_horse_stay1", "horse_stay", Vector(-3846,59f, 2,616897f, 4220.0f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_horse_stay", "horse_stay", Vector(-3842,54f, 2,837366f, 4226,175f), Vector(0.0f, -193,8496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_horse_tend", "horse_tend", Vector(-3844,865f, 2,973f, 4226,62f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_Pee", "Pee", Vector(-3850,322f, 4,144f, 4229,261f), Vector(0.0f, 102,0665f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_stand_guntrick", "stand_guntricks_e_any", Vector(-3834,501f, 2,258546f, 4216,329f), Vector(0.0f, -6,798063f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_riverwash", "nriverwash", Vector(-3831,051f, 1,483f, 4220,467f), Vector(0.0f, -57,8837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_stand_lookdistance", "stand_lookdistance_w_any", Vector(-3849,787f, 7,337f, 4240,15f), Vector(0.0f, 270,0022f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_window_R", "look_out_window_R", Vector(-3839,42f, 2,941082f, 4224,783f), Vector(0.0f, 93,35406f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3838,539f, 2,941082f, 4225,021f), Vector(0.0f, 54,31423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Pue_sit_docks", "nsit_docks", Vector(-3830,538f, 2,177495f, 4213,612f), Vector(0.0f, -135,9579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_sleeping_scripted1", "sleeping_scripted", Vector(-3551,362f, 20,431f, 4709,676f), Vector(0.0f, 13,06262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-3549,921f, 20,32929f, 4708,246f), Vector(0.0f, 69,86318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3563,03f, 18,60939f, 4708,513f), Vector(0.0f, 136,4816f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_look_distance_binocs1", "look_distance_binocs", Vector(-3549,38f, 20,22122f, 4704,918f), Vector(0.0f, 23,99923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3569,209f, 10,03922f, 4686,378f), Vector(0.0f, -62,98453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3577,605f, 9,625031f, 4667,982f), Vector(0.0f, -9,328076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_Pee", "Pee", Vector(-3551,588f, 10,68554f, 4688,082f), Vector(0.0f, -87,17547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3567,046f, 10,03922f, 4687,078f), Vector(0.0f, 13,78003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_smoking_stand", "smoking_stand", Vector(-3579,044f, 9,793329f, 4671,625f), Vector(0.0f, -319,5549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-3568,74f, 10,02699f, 4684,736f), Vector(0.0f, 230,0923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_sleeping_scripted", "sleeping_scripted", Vector(-3542,32f, 14,49005f, 4672,359f), Vector(0.0f, -126,5194f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_stand_announce", "stand_announce", Vector(-3558,897f, 17,39976f, 4661,43f), Vector(0.0f, -179,4728f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3565,633f, 16,92693f, 4663,674f), Vector(0.0f, -11,63906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "sid_look_distance_binocs", "look_distance_binocs", Vector(-3555,776f, 18,28032f, 4658,035f), Vector(0.0f, 51,24591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear78", "Player_Herb_PricklyPear", Vector(-3590,427f, 24,09413f, 4297,574f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear79", "Player_Herb_PricklyPear", Vector(-4140,784f, 30,07766f, 4359,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear80", "Player_Herb_PricklyPear", Vector(-4727,197f, 59,61876f, 4714,125f), Vector(0.0f, -108,8801f, 0.0f));
	*(&iLocal_29 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear81", "Player_Herb_PricklyPear", Vector(-4274,932f, 20,08273f, 4767,003f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_horse_stay3", "horse_stay", Vector(-3374,934f, 47,48188f, 4702,021f), Vector(0.0f, -18,36461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_horse_stay2", "horse_stay", Vector(-3405,209f, 49,85294f, 4723,533f), Vector(0.0f, 97,535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_smoking_stand2", "smoking_stand", Vector(-3368,674f, 56,19841f, 4749,482f), Vector(0.0f, -337,4679f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-3359,302f, 57,98686f, 4759,069f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-3385,947f, 56,12448f, 4761,743f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_lookdistance_binocs5", "look_distance_binocs", Vector(-3364,368f, 50,58201f, 4712,998f), Vector(0.0f, 56,20469f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_lookdistance_binocs4", "look_distance_binocs", Vector(-3358,165f, 48,05708f, 4680,735f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-3386,745f, 48,04662f, 4706,654f), Vector(0.0f, 29,63346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_lookdistance_binocs3", "look_distance_binocs", Vector(-3402,552f, 51,57449f, 4734,544f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plta_stand_lookdistance", "stand_lookdistance_w_any", Vector(-3397,058f, 48,07362f, 4708,585f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "pun_smoking_stand1", "smoking_stand", Vector(-3362,111f, 56,98337f, 4750,522f), Vector(0.0f, -267,2515f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_stand1", "rand_idle_stand", Vector(-3367,398f, 55,96766f, 4740,842f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_stand_spit", "stand_spit", Vector(-3400,005f, 53,02031f, 4739,182f), Vector(0.0f, 18,25717f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_sit_ground_smoke", "sit_ground_smoke", Vector(-3376,3f, 56,40027f, 4746,254f), Vector(0.0f, 61,63646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_rand_idle_stand", "rand_idle_stand", Vector(-3408,065f, 52,341f, 4739,222f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_horse_stay1", "horse_stay", Vector(-3398,433f, 55,29071f, 4753,295f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_horse_stay", "horse_stay", Vector(-3405,549f, 53,05554f, 4742,302f), Vector(0.0f, 98,06629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-3380,9f, 55,83662f, 4741,939f), Vector(0.0f, -17,49117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3369,956f, 56,21962f, 4747,671f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_Pee", "Pee", Vector(-3390,581f, 55,248f, 4749,821f), Vector(0.0f, -166,7814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3367,293f, 56,27127f, 4747,336f), Vector(0.0f, 87,42749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_smoking_stand", "smoking_stand", Vector(-3369,253f, 56,20813f, 4743,391f), Vector(0.0f, 87,17111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3371,387f, 56,2196f, 4746,512f), Vector(0.0f, 24,36719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "plt_look_distance_binocs2", "look_distance_binocs", Vector(-3389,051f, 47,53177f, 4700,163f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear82", "Player_Herb_PricklyPear", Vector(-4501,43f, 19,14546f, 4487,654f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear72", "Player_Herb_PricklyPear", Vector(-3306,959f, 39,31733f, 4485,227f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear71", "Player_Herb_PricklyPear", Vector(-3294,075f, 6,459073f, 4080f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3875,95f, 9,035301f, 4332,05f), Vector(0.0f, -223,8547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_sleeping1", "sleeping", Vector(-3859,652f, 7,0667f, 4320,313f), Vector(0.0f, 116,6932f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_Pee_nospawn", "Pee_nospawn", Vector(-3867,383f, 7,484222f, 4281,296f), Vector(0.0f, 425,9995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_sleeping", "sleeping", Vector(-3859,669f, 6,903308f, 4317,758f), Vector(0.0f, -131,6545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_sit_ground_smoke1", "sit_ground_smoke", Vector(-3862,264f, 6,999852f, 4319,712f), Vector(0.0f, -142,6826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3888,642f, 7,098955f, 4311,407f), Vector(0.0f, 132,3517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3872f, 8,045292f, 4285,055f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_rand_idle_stand", "rand_idle_stand", Vector(-3859,487f, 8,505493f, 4293,897f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3860f, 7,522324f, 4325,883f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_stay2", "horse_stay", Vector(-3856,691f, 8,325266f, 4293,951f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_stay1", "horse_stay", Vector(-3854,29f, 8,783296f, 4335,07f), Vector(0.0f, 1,794803f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_stay", "horse_stay", Vector(-3856,527f, 8,618322f, 4334,046f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "nCrT_Yawn2", "stand_yawning_n_any", Vector(-3839,57f, 9,503844f, 4315,619f), Vector(0.0f, 300,2774f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_tend1", "horse_tend", Vector(-3851,085f, 9,136021f, 4338,731f), Vector(0.0f, -175,3594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_rand_idle_stand1", "rand_idle_stand", Vector(-3907,57f, 8,015f, 4308,359f), Vector(0.0f, -120,7614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_look_distance_binocs1", "look_distance_binocs", Vector(-3919,962f, 8,015f, 4306,852f), Vector(0.0f, 103,8305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_tend", "horse_tend", Vector(-3852,886f, 8,974073f, 4336,7f), Vector(0.0f, -176,1855f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1160), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT__look_distance_binocs", "look_distance_binocs", Vector(-3871,676f, 9,375f, 4305,959f), Vector(0.0f, -224,6903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3857,507f, 7,871f, 4307,467f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_stay5", "horse_stay", Vector(-3847,016f, 9,325869f, 4338,026f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "CrT_horse_stay4", "horse_stay", Vector(-3848,894f, 9,203953f, 4339,044f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_29 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear35", "Player_Herb_PricklyPear", Vector(-3133,017f, 36,10571f, 4557,55f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear36", "Player_Herb_PricklyPear", Vector(-3163,875f, 37,14511f, 4557,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear37", "Player_Herb_PricklyPear", Vector(-3108f, 35,13727f, 4484,593f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear38", "Player_Herb_PricklyPear", Vector(-3116f, 34,13333f, 4440.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear39", "Player_Herb_PricklyPear", Vector(-3313,94f, 40,27979f, 4434,933f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear40", "Player_Herb_PricklyPear", Vector(-3196f, 38,14905f, 4668,886f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear41", "Player_Herb_PricklyPear", Vector(-3116f, 40,15668f, 4684.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear42", "Player_Herb_PricklyPear", Vector(-3110,445f, 35,13728f, 4660.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear43", "Player_Herb_PricklyPear", Vector(-3282,099f, 40,15684f, 4583,203f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear44", "Player_Herb_PricklyPear", Vector(-3312,71f, 38,14905f, 4667,29f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear45", "Player_Herb_PricklyPear", Vector(-3387,117f, 44,17185f, 4646,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear46", "Player_Herb_PricklyPear", Vector(-3436,896f, 22,08629f, 4417,115f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear47", "Player_Herb_PricklyPear", Vector(-3395,47f, 41,1608f, 4602,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear48", "Player_Herb_PricklyPear", Vector(-3550,464f, 6,620461f, 4570,535f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear49", "Player_Herb_PricklyPear", Vector(-3873,01f, 18,0706f, 4561,492f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear50", "Player_Herb_PricklyPear", Vector(-3860,274f, 15,07009f, 4639,726f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear51", "Player_Herb_PricklyPear", Vector(-3720,529f, 12,21378f, 4781,691f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear52", "Player_Herb_PricklyPear", Vector(-3906,22f, 27,1059f, 4755,946f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear53", "Player_Herb_PricklyPear", Vector(-4028,633f, 34,2771f, 4916.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear54", "Player_Herb_PricklyPear", Vector(-4113,239f, 33,12943f, 4933,24f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear55", "Player_Herb_PricklyPear", Vector(-4142,28f, 28,91674f, 4837,522f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear56", "Player_Herb_PricklyPear", Vector(-4157,844f, 23,29663f, 4739,758f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear57", "Player_Herb_PricklyPear", Vector(-4187,375f, 24,64962f, 4735,156f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear58", "Player_Herb_PricklyPear", Vector(-4246,079f, 23,09832f, 4833,922f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear59", "Player_Herb_PricklyPear", Vector(-4089,535f, 23,56466f, 4705,024f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear60", "Player_Herb_PricklyPear", Vector(-4042,739f, 26,21959f, 4665,643f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear61", "Player_Herb_PricklyPear", Vector(-3985,936f, 25,14525f, 4650,064f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear62", "Player_Herb_PricklyPear", Vector(-3964f, 24,09413f, 4620,622f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear63", "Player_Herb_PricklyPear", Vector(-3925,73f, 14,05492f, 4520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear64", "Player_Herb_PricklyPear", Vector(-3896f, 16,05245f, 4513,779f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear65", "Player_Herb_PricklyPear", Vector(-3902,233f, 8,031385f, 4477,767f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear66", "Player_Herb_PricklyPear", Vector(-3949,548f, 11,5296f, 4456,587f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear67", "Player_Herb_PricklyPear", Vector(-4072f, 7,012664f, 4276.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear68", "Player_Herb_PricklyPear", Vector(-4032f, 7,883675f, 4240.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear69", "Player_Herb_PricklyPear", Vector(-3908,567f, 7,907296f, 4267,709f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_PricklyPear70", "Player_Herb_PricklyPear", Vector(-3869,266f, 7,051301f, 4274,734f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", Vector(-3116,625f, 7,027439f, 4040f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", Vector(-3195,682f, 11,05647f, 4070,123f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", Vector(-3236,957f, 7,02744f, 4039,739f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", Vector(-3318,133f, 6,285552f, 4099,07f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", Vector(-3418,286f, 6,273073f, 4178,574f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", Vector(-3116,365f, 13,19427f, 4303,721f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", Vector(-3181,101f, 13,2906f, 4349,328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", Vector(-3168f, 11,53559f, 4393,568f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", Vector(-3328,261f, 39,34695f, 4431,806f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", Vector(-3372,252f, 39,11925f, 4463,432f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", Vector(-3357,001f, 24,09412f, 4357,001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", Vector(-3244.0f, 37,14493f, 4520f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", Vector(-3287,507f, 70,34961f, 4733,125f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", Vector(-3336f, 39,37475f, 4630,026f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", Vector(-3378,919f, 46,0826f, 4685,082f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", Vector(-3458,412f, 40,1588f, 4595,002f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", Vector(-3482,208f, 40,39444f, 4524,735f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", Vector(-3433,55f, 22,08629f, 4419,86f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", Vector(-3510,125f, 25,09805f, 4357,875f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", Vector(-3473,502f, 7,027458f, 4284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_29 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_29, "player_sleep_PUC", "player_sleep_bed_R", Vector(-3837,743f, 2,943747f, 4225,485f), Vector(0.0f, -174,3147f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_29 + 1616), 1);
	return 1;
}

bool Function_111(struct<2>[] Param0) //Position: 0xA5DE / 42462
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_115();
	iVar1 = 0;
	if (!Function_21(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_114(&(Param0[iVar02]), 8);
		}
		else if (Function_113())
		{
			iVar1 = 1;
			Function_114(&(Param0[iVar02]), 8);
		}
		Function_114(&(Param0[iVar02]), 16);
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
				Function_114(&(Param0[iVar02]), 1);
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
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_114(&(Param0[iVar02]), 2);
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
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_114(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_114(&(Param0[iVar02]), 2);
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
	Function_112();
	return 1;
}

void Function_112() //Position: 0xA9A0 / 43424
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

bool Function_113() //Position: 0xA9E0 / 43488
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

void Function_114(struct<13> Param0) //Position: 0xAA0E / 43534
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_115() //Position: 0xAA21 / 43553
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

var Function_116(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xAA63 / 43619
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_117(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_114(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_117(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xAAA1 / 43681
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_21(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_114(&(Param0[iVar02]), 4);
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

bool Function_118() //Position: 0xAB70 / 43888
{
	return Function_119();
}

int Function_119() //Position: 0xAB79 / 43897
{
	var uVar0;
	
	Function_106(3, 3);
	uVar0 = &uVar0;
	Function_116(&iLocal_7 + 8, "p_uti_cover2x1x", 0, 0);
	Function_116(&iLocal_7 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_111(&iLocal_7 + 8))
	{
		return 0;
	}
	iLocal_7 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&iLocal_7 + 48) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "f_playerHorse", Vector(-3829,98f, 2,74f, 4227,475f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_7 + 56) = Function_120(StackVal, StackVal, &iLocal_7, "cover2x1x0", "p_uti_cover2x1x", Vector(-3825,586f, 2,900937f, 4226,143f), Vector(0.0f, 82,24956f, 0.0f), 1);
	*(&iLocal_7 + 64) = Function_120(StackVal, StackVal, &iLocal_7, "cover2x1x1", "p_uti_cover2x1x", Vector(-3849,503f, 3,143f, 4213,479f), Vector(0.0f, 77,38024f, 0.0f), 1);
	*(&iLocal_7 + 72) = Function_120(StackVal, StackVal, &iLocal_7, "cover1x1x0", "p_uti_cover1x1x", Vector(-3850,03f, 3,715f, 4225,948f), Vector(0.0f, 16,0873f, 0.0f), 1);
	*(&iLocal_7 + 80) = Function_120(StackVal, StackVal, &iLocal_7, "cover1x1x1", "p_uti_cover1x1x", Vector(-3850,701f, 3,365f, 4220,66f), Vector(0.0f, 29,73987f, 0.0f), 1);
	return 1;
}

var Function_120(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xAD4D / 44365
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_121() //Position: 0xAD7B / 44411
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	return;
}

void Function_122(char* cParam0) //Position: 0xAD8A / 44426
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

