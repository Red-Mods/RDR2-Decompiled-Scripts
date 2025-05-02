//Decompiled with MagicRDR v1.0
//Function Count : 124
//Statics Count : 789
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
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 25;
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
	int iLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 7;
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
	var uLocal_427 = 16;
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
	var uLocal_463 = 12;
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
	var uLocal_491 = 6;
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
	var uLocal_509 = 16;
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
	var uLocal_779 = 1;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_123(&cVar0, 3);
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
				if (Function_119())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_110())
				{
					Function_109();
					Function_108(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_105())
				{
					Function_108(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_104(&uLocal_3);
				Function_102(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_101())
				{
					Function_94();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_93(iScriptParam_0);
				Function_92();
				Function_108(&(Global_43791[iScriptParam_0]), 8);
				if (Function_91(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_90(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_89(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_88(iScriptParam_0))
				{
					Function_82(iScriptParam_0);
					Function_81(64);
				}
				Function_108(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_88(iScriptParam_0))
				{
					Function_79(Function_80(), iScriptParam_0);
				}
				Function_78(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_77(&cVar0, 5.0f);
				Function_108(&(Global_43791[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_65(iScriptParam_0);
				if (!Function_88(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_26(&uLocal_3, &uLocal_779, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_91(&(Global_43791[iScriptParam_0]), 131072))
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
	Function_24();
	Function_18();
	Function_10(&uLocal_3, &uLocal_779);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_81(64);
	Function_90(&(Global_43791[iScriptParam_0]), 32);
	Function_90(&(Global_43791[iScriptParam_0]), 64);
	Function_90(&(Global_43791[iScriptParam_0]), 512);
	Function_90(&(Global_43791[iScriptParam_0]), 16);
	Function_90(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_77(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_39874[43]));
	return;
}

void Function_2(vector3 vParam0) //Position: 0x30A / 778
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_3(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_3(var uParam0) //Position: 0x33F / 831
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_4(int iParam0) //Position: 0x38E / 910
{
	int iVar0;
	
	if (!Function_7(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_5(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3C4 / 964
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3E6 / 998
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3FC / 1020
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x412 / 1042
{
	HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(&iLocal_407 + 552);
	Function_9();
	return;
}

void Function_9() //Position: 0x426 / 1062
{
	RELEASE_LAYOUT_REF(&iLocal_407);
	return;
}

void Function_10(var uParam0, vector3[] vParam1) //Position: 0x433 / 1075
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_16(&(vParam1[iVar03]), 4);
		}
		if (Function_17(&(vParam1[iVar03]), 8))
		{
			Function_11(0, 0, 30);
			Function_16(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0x490 / 1168
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
		Function_12(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_12(int iParam0, int iParam1, bool bParam2) //Position: 0x57A / 1402
{
	int iVar0;
	
	Function_15(iParam0);
	Function_14(&iParam1);
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
	Function_13();
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

void Function_13() //Position: 0x6F9 / 1785
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_14(int iParam0) //Position: 0x705 / 1797
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

void Function_15(int iParam0) //Position: 0x74F / 1871
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

void Function_16(struct<17> Param0) //Position: 0x795 / 1941
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_17(struct<17> Param0) //Position: 0x7B2 / 1970
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x7D0 / 2000
{
	Function_19();
	return;
}

void Function_19() //Position: 0x7D9 / 2009
{
	Function_20(&iLocal_17 + 8);
	RELEASE_LAYOUT_REF(&iLocal_17);
	return;
}

void Function_20(int iParam0) //Position: 0x7EC / 2028
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_21(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(struct<2>[] Param0, int iParam1) //Position: 0x814 / 2068
{
	if (Function_23(&(Param0[iParam12]), 4))
	{
		if (Function_23(&(Param0[iParam12]), 1))
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
			Function_22(&(Param0[iParam12]), 1);
			Function_22(&(Param0[iParam12]), 2);
			Function_22(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_22(struct<13> Param0) //Position: 0x95F / 2399
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_23(struct<13> Param0) //Position: 0x97C / 2428
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x99A / 2458
{
	Function_25();
	return;
}

void Function_25() //Position: 0x9A3 / 2467
{
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_26(vector3 vParam0) //Position: 0x9AF / 2479
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_63(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_27(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_27(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xA39 / 2617
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(&vParam0))
	{
		return 0;
	}
	Function_90(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_17(&vParam0, 2))
					{
						if (!Function_17(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_60(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_59(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (Function_17(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_11(0, 0, 0);
						}
						else
						{
							Function_11(0, 0, 30);
						}
						Function_16(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(&vParam0, 2))
					{
						if (!Function_17(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_59(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (Function_17(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_16(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_58(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_57(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_17(&vParam0, 2))
					{
						if (!Function_17(&vParam0, 16))
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
								Function_59(&vParam0, 16);
								Function_49(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (Function_17(&vParam0, 16))
					{
						Function_16(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_17(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_59(&vParam0, 2);
			}
			else
			{
				Function_16(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_7(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_91(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_17(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_48(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_59(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_47(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_28(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_28(int iParam0) //Position: 0xE91 / 3729
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_91(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_108(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_33(473, 1, 0, 0);
		iVar0 = Function_32(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_33(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_33(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_33(476, 1, 0, 0);
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
		Function_31(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_31(7, 30);
	}
	if (Function_30(473) <= Function_29(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_29(int iParam0) //Position: 0xF82 / 3970
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_30(int iParam0) //Position: 0xFBF / 4031
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, int iParam1) //Position: 0xFF8 / 4088
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

var Function_32(int iParam0) //Position: 0x1062 / 4194
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_7(iParam0))
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x10BA / 4282
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
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_34(iParam0);
	return 1;
}

void Function_34(bool bParam0) //Position: 0x12E2 / 4834
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

void Function_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1380 / 4992
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_43(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_40(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_37(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_36(), &Var9);
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

var Function_36() //Position: 0x19BE / 6590
{
	int iVar0;
	
	return &iVar0;
}

var Function_37(int iParam0) //Position: 0x19C7 / 6599
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x19D8 / 6616
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_39(char* cParam0) //Position: 0x1ACF / 6863
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1AEA / 6890
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_42(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_41(Function_42(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x1B51 / 6993
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_42(int iParam0, bool bParam1) //Position: 0x1B63 / 7011
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1B75 / 7029
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
	if (((Function_44(iParam0) != 19 || Function_44(iParam0) != 17) || Function_44(iParam0) != 10) || Function_44(iParam0) != 9)
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

int Function_44(int iParam0) //Position: 0x1CA9 / 7337
{
	return Global_55480[iParam016].f_96;
}

void Function_45(int iParam0) //Position: 0x1CB8 / 7352
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

int Function_46(int iParam0, float fParam1, bool bParam2) //Position: 0x1E52 / 7762
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

void Function_47(var uParam0, int iParam1) //Position: 0x2096 / 8342
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_48(int iParam0, var uParam1, int iParam2) //Position: 0x20A3 / 8355
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_49(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x20CD / 8397
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_56(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_55(iParam1))
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
	if (!Function_52(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_50();
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

void Function_50() //Position: 0x2380 / 9088
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_51(&uVar0, &uVar1);
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

void Function_51(var uParam0, int iParam1) //Position: 0x23F3 / 9203
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

bool Function_52(bool bParam0) //Position: 0x2429 / 9257
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_54())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_53(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_57(2048))
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

int Function_53(int iParam0) //Position: 0x249F / 9375
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_54() //Position: 0x24B0 / 9392
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

bool Function_55(int iParam0) //Position: 0x24C9 / 9417
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_56(int iParam0) //Position: 0x24DF / 9439
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_57(int iParam0) //Position: 0x24F4 / 9460
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2512 / 9490
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

void Function_59(struct<17> Param0) //Position: 0x25C1 / 9665
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_60(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x25D4 / 9684
{
	int iVar0;
	int iVar1;
	
	Function_15(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_61(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_12(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_61(int iParam0, int iParam1) //Position: 0x264E / 9806
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_15(iParam0);
	Function_14(&uVar0);
	PRINTNL();
	Function_12(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x2677 / 9847
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

bool Function_63(int iParam0) //Position: 0x2697 / 9879
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x26B3 / 9907
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x26C8 / 9928
{
	iParam0 = iParam0;
	Function_66(&(Global_39874[43]), "TWG", 18, &iLocal_7, 4);
	return;
}

void Function_66(vector3 vParam0) //Position: 0x26E7 / 9959
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (vParam0.z)
	{
		if (iParam4 == 1)
		{
			if (VDIST(StackVal, Global_54078, Vector(-1804,95f, 23,088f, 2810,314f)) < 250.0f)
			{
				Function_2(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_2(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_75(&vParam0, 63))
			{
				if (Function_74(76) || Function_73(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_72(&cParam1, &vParam0, 3, &uParam3);
						Function_69(&vParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(StackVal, Global_54078, Vector(-1804,95f, 23,088f, 2810,314f)) < 200.0f)
		{
			return;
		}
		if (Global_39874[13] == 0)
		{
			Function_68();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 200.0f)
		{
			return;
		}
		if (Global_39874[33] == 0)
		{
			Function_67();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_75(&vParam0, 63))
		{
			if (Function_74(76) || Function_73(76))
			{
				Function_72(&cParam1, &vParam0, 3, &uParam3);
				Function_69(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_72(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_67() //Position: 0x28F8 / 10488
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_69(&(Global_39874[33]), iVar0);
		iVar0++;
	}
	return;
}

void Function_68() //Position: 0x293F / 10559
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_69(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x2991 / 10641
{
	if (iParam1 <= 32)
	{
		Function_70(&iParam0, Function_71(iParam1));
	}
	else
	{
		Function_70(&iParam0 + 4, Function_71((iParam1 - 32)));
	}
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x29BC / 10684
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_71(bool bParam0) //Position: 0x29CD / 10701
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_72(char* cParam0) //Position: 0x29D9 / 10713
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", &uParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, &cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_75(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_36(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(&uVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(&uVar0, &iParam1 + 16);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

int Function_73(int iParam0) //Position: 0x2A86 / 10886
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0) //Position: 0x2A9B / 10907
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_75(struct<5> Param0) //Position: 0x2AB0 / 10928
{
	if (bParam1 <= 32)
	{
		return Function_76(Param0, Function_71(bParam1));
	}
	return Function_76(StackVal, Function_71((bParam1 - 32)));
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2ADD / 10973
{
	return (bParam0 && iParam1) == 0;
}

void Function_77(char* cParam0) //Position: 0x2AEA / 10986
{
	if (!Function_63(128))
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

void Function_78(int iParam0) //Position: 0x2B2A / 11050
{
	if (!Function_7(iParam0))
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

void Function_79(int iParam0, bool bParam1) //Position: 0x2BBC / 11196
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
		Function_47(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

var Function_80() //Position: 0x2CAC / 11436
{
	return &iLocal_7;
}

void Function_81(int iParam0) //Position: 0x2CB5 / 11445
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_82(bool bParam0) //Position: 0x2CC8 / 11464
{
	Function_83(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_87(&Global_46796));
	return;
}

void Function_83(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x2CEC / 11500
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
		Function_86();
	}
	if (&bParam5)
	{
		Function_84(1048576);
	}
}

void Function_84(int iParam0) //Position: 0x2DFA / 11770
{
	Function_85(&Global_43580, iParam0);
	return;
}

void Function_85(var uParam0, var uParam1) //Position: 0x2E08 / 11784
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_86() //Position: 0x2E27 / 11815
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_84(16384);
	}
	return;
}

bool Function_87(int[] iParam0) //Position: 0x2E43 / 11843
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_7(iParam0[iVar0]))
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

bool Function_88(int iParam0) //Position: 0x2E94 / 11924
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_46736[0])
	{
		return Function_87(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_87(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_87(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_87(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_87(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_87(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_87(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_87(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_87(&Global_46914);
	}
	return 0;
}

void Function_89(int iParam0) //Position: 0x2F71 / 12145
{
	iParam0 = iParam0;
	return;
}

void Function_90(var uParam0, int iParam1) //Position: 0x2F7B / 12155
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_91(int iParam0, int iParam1) //Position: 0x2F95 / 12181
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x2FB2 / 12210
{
	return;
}

void Function_93(var uParam0) //Position: 0x2FB8 / 12216
{
	uParam0 = uParam0;
	return;
}

void Function_94() //Position: 0x2FC2 / 12226
{
	Function_95(Global_46736[1]);
	Global_43787 = 0;
	return;
}

void Function_95(int iParam0) //Position: 0x2FD5 / 12245
{
	int iVar0;
	
	iVar0 = Function_96(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_76(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_76(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_76(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_76(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_76(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_76(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_76(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_76(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_76(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

int Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3216 / 12822
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_100(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_97(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_97(bParam0, bParam1, bParam2, 4294967295);
}

int Function_97(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3274 / 12916
{
	var uVar0;
	
	if (!Function_99(bParam2))
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
	uVar0 = Function_100(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_98(uVar0);
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

var Function_98(int iParam0) //Position: 0x33D8 / 13272
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

bool Function_99(int iParam0) //Position: 0x3416 / 13334
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x342B / 13355
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_101() //Position: 0x344B / 13387
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_102(bool bParam0) //Position: 0x3461 / 13409
{
	Function_103(&uLocal_3, &uLocal_779, 2, &Global_44085[bParam09] + 8, 4294967295, 0);
	return;
}

void Function_103(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x347C / 13436
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

void Function_104(struct<5> Param0) //Position: 0x3569 / 13673
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_105() //Position: 0x357A / 13690
{
	if (Function_106())
	{
		HORSE_ADD_REPULSION_EXCLUSION_VOLUME(&iLocal_407 + 552);
		return 1;
	}
	return 0;
}

bool Function_106() //Position: 0x3594 / 13716
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = &uVar0;
	iLocal_407 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_407))
	{
		iLocal_407 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&iLocal_407 + 72) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_407, "gapv_flk_SW_set");
	*(&iLocal_407 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar1", 4,203895E-45f, Vector(-3730,356f, 36,8742f, 3889,749f), Vector(0.0f, -24,86723f, 0.0f), Vector(304,9792f, 62,04052f, 150,1546f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[0]);
	*(&iLocal_407 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar2", 4,203895E-45f, Vector(-4134,223f, 12,24644f, 3666,115f), Vector(0.0f, -15,36179f, 0.0f), Vector(171,6768f, 71,60851f, 101,9429f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[1]);
	*(&iLocal_407 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar3", 4,203895E-45f, Vector(-4491,881f, 57,92462f, 3660,276f), Vector(0.0f, 2,802504f, 0.0f), Vector(236,791f, 71,60851f, 82,65063f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[2]);
	*(&iLocal_407 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar4", 4,203895E-45f, Vector(-4578,422f, 59,23138f, 3413,898f), Vector(0.0f, 20.0f, 0.0f), Vector(131,124f, 87,22605f, 181,0108f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[3]);
	*(&iLocal_407 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar5", 4,203895E-45f, Vector(-4668,099f, 73,28625f, 3155,711f), Vector(0.0f, 20.0f, 0.0f), Vector(140,4411f, 110,4049f, 90,32107f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[4]);
	*(&iLocal_407 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar6", 4,203895E-45f, Vector(-4723,405f, 45,17632f, 2960,281f), Vector(0.0f, 20.0f, 0.0f), Vector(150,1546f, 105,9404f, 112,3504f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[5]);
	*(&iLocal_407 + 8[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_cougar9", 4,203895E-45f, Vector(-4515,046f, 40,54584f, 2733,641f), Vector(0.0f, 20.0f, 0.0f), Vector(150,1546f, 105,9404f, 102,4075f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 72, &iLocal_407 + 8[6]);
	*(&iLocal_407 + 216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_407, "gapv_flk_CENTER_set");
	*(&iLocal_407 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote13", 4,203895E-45f, Vector(-3852,005f, 43,54098f, 3084,998f), Vector(0.0f, 20.0f, 0.0f), Vector(93,92755f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[0]);
	*(&iLocal_407 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote12", 4,203895E-45f, Vector(-3863,799f, 40,15688f, 2789,859f), Vector(0.0f, -12,97189f, 0.0f), Vector(177,9536f, 46,625f, 96,68821f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[1]);
	*(&iLocal_407 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote11", 4,203895E-45f, Vector(-4013,259f, 43,35964f, 2709,135f), Vector(0.0f, 20.0f, 0.0f), Vector(118,6683f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[2]);
	*(&iLocal_407 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote10", 4,203895E-45f, Vector(-4440,555f, 21,08234f, 2939,447f), Vector(0.0f, 20.0f, 0.0f), Vector(128,5317f, 46,625f, 105,729f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[3]);
	*(&iLocal_407 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote9", 4,203895E-45f, Vector(-3980,355f, 17,56864f, 3519,065f), Vector(0.0f, 20.0f, 0.0f), Vector(83,27316f, 46,625f, 111,4658f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[4]);
	*(&iLocal_407 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote8", 4,203895E-45f, Vector(-3664,592f, 22,15984f, 3224,203f), Vector(0.0f, 20.0f, 0.0f), Vector(116,8603f, 46,625f, 100,8802f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[5]);
	*(&iLocal_407 + 80[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote7", 4,203895E-45f, Vector(-3890,831f, 48,57193f, 3324,378f), Vector(0.0f, 20.0f, 0.0f), Vector(113,1811f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[6]);
	*(&iLocal_407 + 80[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote6", 4,203895E-45f, Vector(-4175,384f, 20,45136f, 2847,836f), Vector(0.0f, 20.0f, 0.0f), Vector(148,9403f, 46,625f, 82,46219f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[7]);
	*(&iLocal_407 + 80[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote5", 4,203895E-45f, Vector(-4258,71f, 20,07837f, 3098,507f), Vector(0.0f, 20.0f, 0.0f), Vector(111,7724f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[8]);
	*(&iLocal_407 + 80[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote4", 4,203895E-45f, Vector(-4145,278f, 8,031376f, 3324,61f), Vector(0.0f, 20.0f, 0.0f), Vector(94,02903f, 46,625f, 117,4999f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[9]);
	*(&iLocal_407 + 80[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote3", 4,203895E-45f, Vector(-3624f, 38,65096f, 3012f), Vector(0.0f, 20.0f, 0.0f), Vector(128,5317f, 46,625f, 105,9383f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[10]);
	*(&iLocal_407 + 80[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote2", 4,203895E-45f, Vector(-4047,658f, 31,78262f, 3123,171f), Vector(0.0f, 20.0f, 0.0f), Vector(74,5942f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[11]);
	*(&iLocal_407 + 80[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote1", 4,203895E-45f, Vector(-3726,287f, 26,10191f, 3495,43f), Vector(0.0f, 45,93203f, 0.0f), Vector(215,7331f, 46,625f, 83,69476f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[12]);
	*(&iLocal_407 + 80[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_coyote23", 4,203895E-45f, Vector(-4372,67f, 7,027458f, 3300,181f), Vector(0.0f, 28,99118f, 0.0f), Vector(87,18033f, 65,00832f, 284,0809f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[13]);
	*(&iLocal_407 + 80[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "wild_horses1", 4,203895E-45f, Vector(-3774,399f, 33,12946f, 2507,993f), Vector(0.0f, 20.0f, 0.0f), Vector(164,3489f, 80,34592f, 193,7874f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[14]);
	*(&iLocal_407 + 80[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "wild_horses2", 4,203895E-45f, Vector(-3549,128f, 38,02006f, 2774,042f), Vector(0.0f, 20.0f, 0.0f), Vector(128,2424f, 51,37399f, 128,2424f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 216, &iLocal_407 + 80[15]);
	*(&iLocal_407 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_407, "gapv_flk_BIRD_set");
	*(&iLocal_407 + 224[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird1", 4,203895E-45f, Vector(-4673,488f, 49,81181f, 3619,366f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[0]);
	*(&iLocal_407 + 224[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird2", 4,203895E-45f, Vector(-4158,848f, 49,81181f, 3610,948f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[1]);
	*(&iLocal_407 + 224[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird3", 4,203895E-45f, Vector(-3743,4f, 49,81181f, 3900,585f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[2]);
	*(&iLocal_407 + 224[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird4", 4,203895E-45f, Vector(-4224.0f, 49,81181f, 2514,306f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[3]);
	*(&iLocal_407 + 224[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird5", 4,203895E-45f, Vector(-4223,394f, 49,81181f, 3067,605f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[4]);
	*(&iLocal_407 + 224[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird6", 4,203895E-45f, Vector(-3850,352f, 49,81181f, 3213,313f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[5]);
	*(&iLocal_407 + 224[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird7", 4,203895E-45f, Vector(-3737,023f, 49,81181f, 2288,829f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[6]);
	*(&iLocal_407 + 224[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird8", 4,203895E-45f, Vector(-3727,507f, 49,81181f, 3392,048f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[7]);
	*(&iLocal_407 + 224[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird9", 4,203895E-45f, Vector(-4544,312f, 72,68917f, 2828,797f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[8]);
	*(&iLocal_407 + 224[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird10", 4,203895E-45f, Vector(-4387,063f, 72,68917f, 3291,948f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[9]);
	*(&iLocal_407 + 224[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird11", 4,203895E-45f, Vector(-4749,257f, 72,68917f, 3153,838f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[10]);
	*(&iLocal_407 + 224[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_bird12", 4,203895E-45f, Vector(-3801,342f, 72,68917f, 2786,786f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 328, &iLocal_407 + 224[11]);
	*(&iLocal_407 + 392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_407, "gapv_flk_NORTH_set");
	*(&iLocal_407 + 336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_wolf1", 4,203895E-45f, Vector(-4228,547f, 29,1136f, 2643,438f), Vector(0.0f, 20.0f, 0.0f), Vector(111,5883f, 136,3014f, 95,68554f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 392, &iLocal_407 + 336[0]);
	*(&iLocal_407 + 336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_wolf2", 4,203895E-45f, Vector(-4090,676f, 3,011772f, 2466,493f), Vector(0.0f, 20.0f, 0.0f), Vector(110,3815f, 91,51485f, 107,7598f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 392, &iLocal_407 + 336[1]);
	*(&iLocal_407 + 336[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_wolf3", 4,203895E-45f, Vector(-3864,493f, 89,40626f, 2090,393f), Vector(0.0f, 20.0f, 0.0f), Vector(123,8143f, 129,7085f, 227,4212f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 392, &iLocal_407 + 336[2]);
	*(&iLocal_407 + 336[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_wolf4", 4,203895E-45f, Vector(-4083,459f, 94,8625f, 2190,223f), Vector(0.0f, 20.0f, 0.0f), Vector(117,2605f, 129,7085f, 176,7809f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 392, &iLocal_407 + 336[3]);
	*(&iLocal_407 + 336[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_wolf5", 4,203895E-45f, Vector(-4182,706f, 61,91979f, 2404,235f), Vector(0.0f, 40,66191f, 0.0f), Vector(86,04659f, 91,51485f, 320,4328f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 392, &iLocal_407 + 336[4]);
	*(&iLocal_407 + 336[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gtrv_wolf6", 4,203895E-45f, Vector(-4379,103f, 30,77201f, 2512,407f), Vector(0.0f, 58,91275f, 0.0f), Vector(132,8442f, 91,51485f, 97,09076f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 392, &iLocal_407 + 336[5]);
	*(&iLocal_407 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "ngtrv_bats", 4,203895E-45f, Vector(-4346,91f, 30,45788f, 2756,438f), Vector(0.0f, 148,838f, 0.0f), Vector(14,41106f, 11,15615f, 16,66331f));
	*(&iLocal_407 + 544) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_407, "gapv_aquaticWildlife_set");
	*(&iLocal_407 + 408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_01", 4,203895E-45f, Vector(-5209,555f, 22,96273f, 3348,832f), Vector(0.0f, 20.0f, 0.0f), Vector(137,0641f, 137,0641f, 137,0641f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[0]);
	*(&iLocal_407 + 408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_02", 4,203895E-45f, Vector(-4843,528f, 22,96273f, 3439,209f), Vector(0.0f, 20.0f, 0.0f), Vector(89,7691f, 89,7691f, 89,7691f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[1]);
	*(&iLocal_407 + 408[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_03", 4,203895E-45f, Vector(-4983,613f, 22,96273f, 3592,85f), Vector(0.0f, 29,19471f, 0.0f), Vector(112,0248f, 89,7691f, 250,294f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[2]);
	*(&iLocal_407 + 408[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_04", 4,203895E-45f, Vector(-4899,261f, 22,96273f, 3839,88f), Vector(0.0f, 29,19471f, 0.0f), Vector(145,6729f, 89,7691f, 111,7454f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[3]);
	*(&iLocal_407 + 408[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_05", 4,203895E-45f, Vector(-4518,043f, 22,96273f, 3733,987f), Vector(0.0f, 0,06501988f, 0.0f), Vector(162,1872f, 79,42868f, 98,87355f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[4]);
	*(&iLocal_407 + 408[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_06", 4,203895E-45f, Vector(-4731,243f, 22,96273f, 3767,873f), Vector(0.0f, 16,62488f, 0.0f), Vector(97,6675f, 47,83115f, 31,87144f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[5]);
	*(&iLocal_407 + 408[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_07", 4,203895E-45f, Vector(-4128,314f, 22,96273f, 3861,144f), Vector(0.0f, -18,41745f, 0.0f), Vector(162,1872f, 79,42868f, 98,87355f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[6]);
	*(&iLocal_407 + 408[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_08", 4,203895E-45f, Vector(-3890,513f, 22,96273f, 4014,724f), Vector(0.0f, -32,20895f, 0.0f), Vector(162,1872f, 79,42868f, 80,98814f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[7]);
	*(&iLocal_407 + 408[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_09", 4,203895E-45f, Vector(-3513,995f, 22,96273f, 4009,769f), Vector(0.0f, 19,85783f, 0.0f), Vector(116,8982f, 57,2491f, 58,3731f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[8]);
	*(&iLocal_407 + 408[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_010", 4,203895E-45f, Vector(-3730,328f, 22,96273f, 4046,1f), Vector(0.0f, -19,16317f, 0.0f), Vector(116,8982f, 57,2491f, 58,3731f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[9]);
	*(&iLocal_407 + 408[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_011", 4,203895E-45f, Vector(-3302,616f, 22,96273f, 3849,584f), Vector(0.0f, 19,62695f, 0.0f), Vector(178,1278f, 87,23534f, 88,94808f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[10]);
	*(&iLocal_407 + 408[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_012", 4,203895E-45f, Vector(-3021,879f, 22,96273f, 3826,465f), Vector(0.0f, 19,62695f, 0.0f), Vector(178,1278f, 87,23534f, 88,94808f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[11]);
	*(&iLocal_407 + 408[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_013", 4,203895E-45f, Vector(-2795,638f, 22,96273f, 3750,5f), Vector(0.0f, -9,077846f, 0.0f), Vector(123,1342f, 87,23534f, 104,1018f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[12]);
	*(&iLocal_407 + 408[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_014", 4,203895E-45f, Vector(-2610,682f, 22,96273f, 3814,905f), Vector(0.0f, -9,077846f, 0.0f), Vector(123,1342f, 87,23534f, 74,04646f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[13]);
	*(&iLocal_407 + 408[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_015", 4,203895E-45f, Vector(-4314,921f, 22,96273f, 3752,152f), Vector(0.0f, -31,03139f, 0.0f), Vector(116,8665f, 57,23357f, 71,24488f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[14]);
	*(&iLocal_407 + 408[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_aquaticWildlife_016", 4,203895E-45f, Vector(-4974,818f, 22,96273f, 3987,288f), Vector(0.0f, -86,81307f, 0.0f), Vector(116,8665f, 57,23357f, 71,24488f));
	ADD_TO_VOLUME_SET(&iLocal_407 + 544, &iLocal_407 + 408[15]);
	*(&iLocal_407 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_407, "gapv_RepulsionExclusion", 4,203895E-45f, Vector(-3775,939f, 27,31711f, 2676,473f), Vector(0.0f, 13,22444f, 0.0f), Vector(12,58057f, 17,39492f, 56,1422f));
	*(&iLocal_407 + 560) = Vector(-3934,543f, 29,14526f, 2942,613f);
	*(&iLocal_407 + 560 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_bad", Vector(-3934,543f, 29,14526f, 2942,613f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 592) = Vector(-3975,657f, 27,81833f, 2920,438f);
	*(&iLocal_407 + 592 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_good", Vector(-3975,657f, 27,81833f, 2920,438f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 624) = Vector(-3977,408f, 28,62815f, 2909,98f);
	*(&iLocal_407 + 624 + 12) = Vector(0.0f, 168,126f, 0.0f);
	*(&iLocal_407 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_loot", Vector(-3977,408f, 28,62815f, 2909,98f), Vector(0.0f, 168,126f, 0.0f));
	*(&iLocal_407 + 656) = Vector(-3951,192f, 28,53456f, 2969,987f);
	*(&iLocal_407 + 656 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_bad1", Vector(-3951,192f, 28,53456f, 2969,987f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 688) = Vector(-3936,816f, 29,46948f, 2922,49f);
	*(&iLocal_407 + 688 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_bad2", Vector(-3936,816f, 29,46948f, 2922,49f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 720) = Vector(-3988,763f, 29,1018f, 2972,469f);
	*(&iLocal_407 + 720 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_bad3", Vector(-3988,763f, 29,1018f, 2972,469f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 752) = Vector(-3990,54f, 27,53285f, 2911,297f);
	*(&iLocal_407 + 752 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_good1", Vector(-3990,54f, 27,53285f, 2911,297f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 784) = Vector(-3973,481f, 27,91159f, 2902,941f);
	*(&iLocal_407 + 784 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_good2", Vector(-3973,481f, 27,91159f, 2902,941f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 816) = Vector(-3998,449f, 27,70465f, 2914,286f);
	*(&iLocal_407 + 816 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_407 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "tumf_robbery_good3", Vector(-3998,449f, 27,70465f, 2914,286f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_407 + 848) = Vector(-3935,961f, 28,107f, 2635,271f);
	*(&iLocal_407 + 848 + 12) = Vector(0.0f, 213,155f, 0.0f);
	*(&iLocal_407 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingTree_gtr1", Vector(-3935,961f, 28,107f, 2635,271f), Vector(0.0f, 213,155f, 0.0f));
	*(&iLocal_407 + 880) = Vector(-3941,559f, 27,512f, 2623,708f);
	*(&iLocal_407 + 880 + 12) = Vector(0.0f, 81,667f, 0.0f);
	*(&iLocal_407 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingHorses_gtr1", Vector(-3941,559f, 27,512f, 2623,708f), Vector(0.0f, 81,667f, 0.0f));
	*(&iLocal_407 + 912) = Vector(-3945,927f, 27,519f, 2636,138f);
	*(&iLocal_407 + 912 + 12) = Vector(0.0f, 265,59f, 0.0f);
	*(&iLocal_407 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard1_gtr1", Vector(-3945,927f, 27,519f, 2636,138f), Vector(0.0f, 265,59f, 0.0f));
	*(&iLocal_407 + 944) = Vector(-3942,989f, 27,608f, 2635,25f);
	*(&iLocal_407 + 944 + 12) = Vector(0.0f, 277,076f, 0.0f);
	*(&iLocal_407 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard2_gtr1", Vector(-3942,989f, 27,608f, 2635,25f), Vector(0.0f, 277,076f, 0.0f));
	*(&iLocal_407 + 976) = Vector(-3942,084f, 27,596f, 2631,013f);
	*(&iLocal_407 + 976 + 12) = Vector(0.0f, 243,758f, 0.0f);
	*(&iLocal_407 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard3_gtr1", Vector(-3942,084f, 27,596f, 2631,013f), Vector(0.0f, 243,758f, 0.0f));
	*(&iLocal_407 + 1008) = Vector(-3788,462f, 21,377f, 2650,921f);
	*(&iLocal_407 + 1008 + 12) = Vector(0.0f, 15,563f, 0.0f);
	*(&iLocal_407 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingOffScreen_gtr1", Vector(-3788,462f, 21,377f, 2650,921f), Vector(0.0f, 15,563f, 0.0f));
	*(&iLocal_407 + 1040) = Vector(-3936,042f, 31,487f, 2638,841f);
	*(&iLocal_407 + 1040 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_407 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingNoose___1", Vector(-3936,042f, 31,487f, 2638,841f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_407 + 1072) = Vector(-3936,05f, 27,751f, 2638,806f);
	*(&iLocal_407 + 1072 + 12) = Vector(0.0f, 343,3f, 0.0f);
	*(&iLocal_407 + 1096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingguy_gtr1", Vector(-3936,05f, 27,751f, 2638,806f), Vector(0.0f, 343,3f, 0.0f));
	*(&iLocal_407 + 1104) = Vector(-4424.0f, 25,73199f, 2967,308f);
	*(&iLocal_407 + 1104 + 12) = Vector(0.0f, -183,4835f, 0.0f);
	*(&iLocal_407 + 1128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingTree_gtr2", Vector(-4424.0f, 25,73199f, 2967,308f), Vector(0.0f, -183,4835f, 0.0f));
	*(&iLocal_407 + 1136) = Vector(-4420.0f, 25,59995f, 2968f);
	*(&iLocal_407 + 1136 + 12) = Vector(0.0f, -20,80237f, 0.0f);
	*(&iLocal_407 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingHorses_gtr2", Vector(-4420.0f, 25,59995f, 2968f), Vector(0.0f, -20,80237f, 0.0f));
	*(&iLocal_407 + 1168) = Vector(-4427,648f, 25,59995f, 2973,27f);
	*(&iLocal_407 + 1168 + 12) = Vector(0.0f, -54,54519f, 0.0f);
	*(&iLocal_407 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard1_gtr2", Vector(-4427,648f, 25,59995f, 2973,27f), Vector(0.0f, -54,54519f, 0.0f));
	*(&iLocal_407 + 1200) = Vector(-4416,209f, 25,59994f, 2971,18f);
	*(&iLocal_407 + 1200 + 12) = Vector(0.0f, 92,50725f, 0.0f);
	*(&iLocal_407 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard2_gtr2", Vector(-4416,209f, 25,59994f, 2971,18f), Vector(0.0f, 92,50725f, 0.0f));
	*(&iLocal_407 + 1232) = Vector(-4416.0f, 25,59996f, 2968f);
	*(&iLocal_407 + 1232 + 12) = Vector(0.0f, 111,9049f, 0.0f);
	*(&iLocal_407 + 1256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard3_gtr2", Vector(-4416.0f, 25,59996f, 2968f), Vector(0.0f, 111,9049f, 0.0f));
	*(&iLocal_407 + 1264) = Vector(-4424.0f, 25,69681f, 2970,613f);
	*(&iLocal_407 + 1264 + 12) = Vector(0.0f, 132,7829f, 0.0f);
	*(&iLocal_407 + 1288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingguy_gtr2", Vector(-4424.0f, 25,69681f, 2970,613f), Vector(0.0f, 132,7829f, 0.0f));
	*(&iLocal_407 + 1296) = Vector(-4064f, 9,035286f, 3491,478f);
	*(&iLocal_407 + 1296 + 12) = Vector(0.0f, 178,4079f, 0.0f);
	*(&iLocal_407 + 1320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingTree_gtr3", Vector(-4064f, 9,035286f, 3491,478f), Vector(0.0f, 178,4079f, 0.0f));
	*(&iLocal_407 + 1328) = Vector(-4067,176f, 9,03529f, 3501,938f);
	*(&iLocal_407 + 1328 + 12) = Vector(0.0f, -30,33124f, 0.0f);
	*(&iLocal_407 + 1352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingHorses_gtr3", Vector(-4067,176f, 9,03529f, 3501,938f), Vector(0.0f, -30,33124f, 0.0f));
	*(&iLocal_407 + 1360) = Vector(-4064.0f, 9,03529f, 3498,493f);
	*(&iLocal_407 + 1360 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_407 + 1384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard1_gtr3", Vector(-4064.0f, 9,03529f, 3498,493f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_407 + 1392) = Vector(-4069,828f, 9,03529f, 3496f);
	*(&iLocal_407 + 1392 + 12) = Vector(0.0f, -80,80447f, 0.0f);
	*(&iLocal_407 + 1416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard2_gtr3", Vector(-4069,828f, 9,03529f, 3496f), Vector(0.0f, -80,80447f, 0.0f));
	*(&iLocal_407 + 1424) = Vector(-4058,72f, 9,035286f, 3494,306f);
	*(&iLocal_407 + 1424 + 12) = Vector(0.0f, 110,2133f, 0.0f);
	*(&iLocal_407 + 1448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingGuard3_gtr3", Vector(-4058,72f, 9,035286f, 3494,306f), Vector(0.0f, 110,2133f, 0.0f));
	*(&iLocal_407 + 1456) = Vector(-4064,083f, 9,03529f, 3494,821f);
	*(&iLocal_407 + 1456 + 12) = Vector(0.0f, 179,5099f, 0.0f);
	*(&iLocal_407 + 1480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_407, "hangingguy_gtr3", Vector(-4064,083f, 9,03529f, 3494,821f), Vector(0.0f, 179,5099f, 0.0f));
	return 1;
}

void Function_107(int iParam0, int iParam1) //Position: 0x575F / 22367
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

void Function_108(var uParam0, int iParam1) //Position: 0x57A9 / 22441
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_109() //Position: 0x57BA / 22458
{
	return;
}

bool Function_110() //Position: 0x57C0 / 22464
{
	return Function_111();
}

int Function_111() //Position: 0x57C9 / 22473
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = &uVar0;
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_117(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_3", 1, 0);
	if (!Function_112(&iLocal_17 + 8))
	{
		return 0;
	}
	iLocal_17 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_17))
	{
		iLocal_17 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&iLocal_17 + 416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint", Vector(-4349,063f, 25,66054f, 2755,295f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint1", Vector(-4314,583f, 5,097f, 3743,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint2", Vector(-3512.0f, 13,42503f, 3144.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint3", Vector(-4013,675f, 21,468f, 2399,785f), Vector(0.0f, 73,49f, 0.0f));
	*(&iLocal_17 + 448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint4", Vector(-3434,18f, 23,592f, 2499,154f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint5", Vector(-4018,102f, 21,094f, 2395,404f), Vector(0.0f, 5,037f, 0.0f));
	*(&iLocal_17 + 464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint6", Vector(-4019,233f, 21,468f, 2398,425f), Vector(0.0f, 215,465f, 0.0f));
	*(&iLocal_17 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gtrf_bhint8", Vector(-4016,299f, 21,468f, 2398,219f), Vector(0.0f, 219,242f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "sil_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-4012,576f, 21,031f, 2390,771f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_17 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3554,44f, 15,6855f, 3158,265f), Vector(0.0f, 209,569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 480), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand3", "stand_lookdistance_w_any", Vector(-3552,909f, 15,63719f, 3157,377f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand2", "rand_idle_stand", Vector(-3555,438f, 15,60915f, 3159,332f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3543,762f, 15,3694f, 3162,819f), Vector(0.0f, -210,2364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_17 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3545,373f, 15,49567f, 3162,648f), Vector(0.0f, 34,25905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 488), 0);
	*(&iLocal_17 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3544,541f, 15,49885f, 3161,289f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 496), 0);
	*(&iLocal_17 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_look_distance_binocs2", "look_distance_binocs", Vector(-3545,451f, 15,64982f, 3159,776f), Vector(0.0f, 138,5309f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_tend1", "horse_tend", Vector(-3495,967f, 19,65504f, 3136,116f), Vector(0.0f, -91,20521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3437,098f, 23,592f, 2502,806f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_smoking_stand", "smoking_stand", Vector(-3436,582f, 23,592f, 2501,046f), Vector(0.0f, 128,5334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_sleeping_wall", "sleeping_wall_scripted", Vector(-3447,271f, 23,09f, 2499,005f), Vector(0.0f, -71,2832f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_stand_guntricks1", "stand_guntricks_e_any", Vector(-3437,837f, 23,592f, 2492,929f), Vector(0.0f, -182,7671f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_stand_guntricks2", "stand_guntricks_e_any", Vector(-3437,837f, 23,592f, 2494,971f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-3434,18f, 23,592f, 2495,733f), Vector(0.0f, 102,2661f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_look_distance_b", "look_distance_binocs", Vector(-3404,325f, 23,462f, 2509,804f), Vector(0.0f, -132,933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_look_distance_b1", "look_distance_binocs", Vector(-3428,11f, 24,024f, 2508,341f), Vector(0.0f, -218,5979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_Pee", "Pee", Vector(-3433,225f, 23,594f, 2505,034f), Vector(0.0f, 35,20251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_horse_stay", "horse_stay", Vector(-3429,818f, 23,89949f, 2495,733f), Vector(0.0f, -80,89567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_horse_stay1", "horse_stay", Vector(-3430,55f, 24,05026f, 2493,8f), Vector(0.0f, -80,89567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_horse_stay2", "horse_stay", Vector(-3427,528f, 24,09412f, 2497,654f), Vector(0.0f, -80,89567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ham_horse_tend", "horse_tend", Vector(-3431,699f, 24,01186f, 2488,961f), Vector(0.0f, -240,6283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_tend", "horse_tend", Vector(-3499,674f, 16,25382f, 3147,382f), Vector(0.0f, 21,67242f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_stay2", "horse_stay", Vector(-3497,875f, 16,7437f, 3146,125f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_stay1", "horse_stay", Vector(-3496f, 17,07369f, 3146,051f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_stay", "horse_stay", Vector(-3494,914f, 17,262f, 3150,906f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_look_distance_binocs1", "look_distance_binocs", Vector(-3516,268f, 15,515f, 3124,192f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Pee", "Pee", Vector(-3492,114f, 19,66672f, 3136,246f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand1", "rand_idle_stand", Vector(-3520,276f, 11,12099f, 3146,674f), Vector(0.0f, 78,99949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand", "rand_idle_stand", Vector(-3509,928f, 13,78963f, 3146,481f), Vector(0.0f, -82,29346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3511,514f, 13,83953f, 3143,129f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", Vector(-3497,143f, 17,32072f, 3150,853f), Vector(0.0f, -105,2133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_lean_rail", "look_distance_binocs", Vector(-3520,693f, 15,672f, 3127,985f), Vector(0.0f, 37,36112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", Vector(-3516,66f, 15,74677f, 3134,089f), Vector(0.0f, 41,5251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_17 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_look_distance_binocs", "look_distance_binocs", Vector(-3503,269f, 15,4507f, 3126,436f), Vector(0.0f, -47,4214f, 0.0f));
	*(&iLocal_17 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3507,42f, 14,41f, 3147,197f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 520), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "sil_rand_idle_stand3", "rand_idle_stand", Vector(-4023,081f, 21,083f, 2397,041f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "sil_rand_idle_stand2", "rand_idle_stand", Vector(-4020,073f, 21,237f, 2393,398f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "sil_rand_idle_stand1", "rand_idle_stand", Vector(-4016,466f, 21,146f, 2392,174f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "sil_rand_idle_stand", "rand_idle_stand", Vector(-4018,865f, 21,126f, 2394,072f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_smoking_stand2", "smoking_stand", Vector(-4012,661f, 21,083f, 2394,79f), Vector(0.0f, -145,0029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "sil_Pee", "Pee", Vector(-4023,667f, 21,581f, 2384,949f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-4030,676f, 20,114f, 2430,51f), Vector(0.0f, -163,9767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-3989,216f, 21,083f, 2403,324f), Vector(0.0f, 196,0233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_stand_lookdistance", "stand_lookdistance_w_any", Vector(-4006,974f, 20,809f, 2415,464f), Vector(0.0f, -163,9767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Srtch_tand1", "rand_idle_stand", Vector(-4021,151f, 20,963f, 2406,973f), Vector(0.0f, 19,92132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_smoking_stand1", "smoking_stand", Vector(-4023,764f, 21,029f, 2404,943f), Vector(0.0f, -145,0029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_horse_tend1", "horse_tend", Vector(-4008,54f, 21,08242f, 2403,371f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_horse_stay1", "horse_stay", Vector(-4011,225f, 21,08242f, 2403,748f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_horse_stay", "horse_stay", Vector(-4018,831f, 20,98951f, 2406,15f), Vector(0.0f, -343,0331f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_horse_tend", "horse_tend", Vector(-4017,555f, 21,00073f, 2405,466f), Vector(0.0f, -162,3719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_smoking_stand", "smoking_stand", Vector(-4016,168f, 21,46727f, 2403,016f), Vector(0.0f, -145,0029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_NearWall", "Rand_Idle_NearWall", Vector(-4018,77f, 21,08617f, 2403,276f), Vector(0.0f, -154,2826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_lean_rail", "nlean_rail", Vector(-4022,136f, 21,09104f, 2395,346f), Vector(0.0f, 111,8315f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_look_out_window_L", "look_out_window_L", Vector(-4017,984f, 21,53371f, 2401,449f), Vector(0.0f, -162,0249f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-4018,937f, 21,468f, 2399,804f), Vector(0.0f, 109,2064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Sil_lie_sleep", "lie_sleep_on_bed_l", Vector(-4014,51f, 21,46768f, 2397,119f), Vector(0.0f, 17,92818f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-4344,907f, 25,66f, 2754,942f), Vector(0.0f, 92,61431f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_sleeping_scripted1", "sleeping_scripted", Vector(-4352,348f, 25,73698f, 2756,987f), Vector(0.0f, 152,4998f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_sleeping_scripted", "sleeping_scripted", Vector(-4346,533f, 25,72214f, 2760,332f), Vector(0.0f, 266,5974f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_horse_stay4", "horse_stay", Vector(-4327,33f, 22,86164f, 2739,777f), Vector(0.0f, 359,664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-4323,297f, 25,25694f, 2767,16f), Vector(0.0f, 164,4313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_horse_stay3", "horse_stay", Vector(-4332,893f, 23,56775f, 2744,058f), Vector(0.0f, 220,287f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_horse_stay1", "horse_stay", Vector(-4334,617f, 23,76846f, 2744,07f), Vector(0.0f, 214,233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "scrg_smoking_stand", "smoking_stand", Vector(-4315,55f, 5,001161f, 3736,073f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "scrg_horse_stay", "horse_stay", Vector(-4304,485f, 5,33743f, 3740,595f), Vector(0.0f, 91,16744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "scrg_horse_stay1", "horse_stay", Vector(-4304,792f, 5,033688f, 3742,499f), Vector(0.0f, 93,17829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "scrg_horse_stay2", "horse_stay", Vector(-4304,333f, 4,743784f, 3753,198f), Vector(0.0f, 58,93742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "scrg_horse_stay3", "horse_stay", Vector(-4305,479f, 4,682098f, 3754,989f), Vector(0.0f, 44,86414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_17 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "scrg_horse_stay4", "horse_stay", Vector(-4307,521f, 4,700052f, 3756,242f), Vector(0.0f, 28,09162f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 528), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Srtch_tand", "rand_idle_stand", Vector(-4313,591f, 5,043624f, 3731,379f), Vector(0.0f, 19,92132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Srtch_stand_lookdistance", "stand_lookdistance_w_any", Vector(-4313,458f, 4,998623f, 3757,347f), Vector(0.0f, -159,4057f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSrtch_Pee", "Pee", Vector(-4302,91f, 4,6f, 3746,519f), Vector(0.0f, -60,70978f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Srtch_horse_tend", "horse_tend", Vector(-4291,733f, 4,015f, 3725,523f), Vector(0.0f, -30,20316f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Srtch_leantalking", "lean_fence_H_talking", Vector(-4319,066f, 4,969989f, 3738,232f), Vector(0.0f, -87,61311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Srtch_stand_guntrick", "stand_guntricks_e_any", Vector(-4312,03f, 5,001168f, 3748,336f), Vector(0.0f, -164,7508f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_stand_guntricks", "stand_guntricks_e_any", Vector(-4346,817f, 25,65767f, 2757,716f), Vector(0.0f, -197,8129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_look_distance_2", "look_distance_binocs", Vector(-4292.0f, 26,16155f, 2740f), Vector(0.0f, -55,24271f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_look_distance_1", "look_distance_binocs", Vector(-4312,805f, 26,48f, 2781,945f), Vector(0.0f, -163,8071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_horse_stay", "horse_stay", Vector(-4348,085f, 25,66132f, 2751,858f), Vector(0.0f, -58,94202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_horse_tend", "horse_tend", Vector(-4348,798f, 25,73481f, 2750,844f), Vector(0.0f, 126,0001f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_Pee", "Pee", Vector(-4324,907f, 23,21055f, 2741,697f), Vector(0.0f, -67,74636f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_stand_rowdydrink", "stand_dnd_rowdydrink", Vector(-4345,435f, 25,648f, 2762,341f), Vector(0.0f, 52,18678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_smoking_stand1", "smoking_stand", Vector(-4345,533f, 25,66132f, 2752,487f), Vector(0.0f, -30,65489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-4351,443f, 25,66132f, 2760,146f), Vector(0.0f, -48,31028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_look_distance_binocs", "look_distance_binocs", Vector(-4340,744f, 27,61138f, 2753,304f), Vector(0.0f, -57,35819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_campfire_talk", "campfire_talk", Vector(-4348,996f, 25,66f, 2757,668f), Vector(0.0f, -21,34858f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Cuev_smoking_stand", "smoking_stand", Vector(-4345,924f, 25,656f, 2759,327f), Vector(0.0f, 81,03186f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_17 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage", "Player_Herb_DesertSage", Vector(-3952.0f, 9,047268f, 3836f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", Vector(-4072.0f, 7,008393f, 3804,831f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-4036.0f, 8,031368f, 3740f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-3884.0f, 9,035286f, 3588f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-3708.0f, 20,00255f, 3722,527f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-3774,253f, 17,56825f, 3780.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-3709,885f, 23,09019f, 3576.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-3604f, 33,12941f, 3410,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-3534,479f, 34,13447f, 3535,625f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", Vector(-3564f, 35,14058f, 3470,161f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", Vector(-3658,068f, 16,06274f, 3401,932f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", Vector(-3489,141f, 36,14825f, 3432,11f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", Vector(-3481,672f, 36,44746f, 3318,328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", Vector(-3397,868f, 38,14902f, 3376f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", Vector(-3532f, 38,14902f, 3486,979f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", Vector(-3314,075f, 44,86954f, 3468f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", Vector(-3246,021f, 49,19217f, 3461,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", Vector(-3172,93f, 40,41358f, 3368,436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", Vector(-4268.0f, 3,129975f, 3764.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", Vector(-4255,395f, 4,015678f, 3666,991f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", Vector(-4400.0f, 7,02992f, 3546,233f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", Vector(-4235,268f, 6,018927f, 3604,036f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", Vector(-4100.0f, 8,031364f, 3652.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", Vector(-4007,208f, 9,035286f, 3678,818f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", Vector(-3975,274f, 9,035286f, 3607,208f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", Vector(-4076.0f, 8,031368f, 3505,56f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", Vector(-4256.0f, 12,04707f, 3472.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", Vector(-4404.0f, 7,027458f, 3476.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", Vector(-4471,791f, 6,023648f, 3568,106f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage30", "Player_Herb_DesertSage", Vector(-4764.0f, 3,011771f, 3825,594f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage31", "Player_Herb_DesertSage", Vector(-4809,424f, 3,011765f, 3524,559f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage32", "Player_Herb_DesertSage", Vector(-4908.0f, 3,994267f, 3520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage33", "Player_Herb_DesertSage", Vector(-4516.0f, 11,04314f, 3336.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage34", "Player_Herb_DesertSage", Vector(-4269,605f, 7,027458f, 3334,644f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage35", "Player_Herb_DesertSage", Vector(-4164.0f, 9,035301f, 3396.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage36", "Player_Herb_DesertSage", Vector(-4292,033f, 7,027458f, 3386,503f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage37", "Player_Herb_DesertSage", Vector(-4226,439f, 7,027458f, 3298,602f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage38", "Player_Herb_DesertSage", Vector(-4437,59f, 8,505199f, 3274,462f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage39", "Player_Herb_DesertSage", Vector(-4491,802f, 9,035066f, 3220,199f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage40", "Player_Herb_DesertSage", Vector(-4556,113f, 16,06275f, 3168.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage41", "Player_Herb_DesertSage", Vector(-4565,822f, 29,76156f, 3043,362f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage42", "Player_Herb_DesertSage", Vector(-4420,134f, 34,06581f, 3067,813f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage43", "Player_Herb_DesertSage", Vector(-4294,341f, 36,14112f, 3008f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage44", "Player_Herb_DesertSage", Vector(-4414,286f, 25,59914f, 2990,792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage45", "Player_Herb_DesertSage", Vector(-4403,191f, 22,08621f, 2910,951f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage46", "Player_Herb_DesertSage", Vector(-4382,816f, 22,0862f, 2910,604f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage47", "Player_Herb_DesertSage", Vector(-4060.0f, 8,031368f, 3264f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage48", "Player_Herb_DesertSage", Vector(-4100.0f, 11,04314f, 3196.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage49", "Player_Herb_DesertSage", Vector(-3948.0f, 14,38007f, 3142,053f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage50", "Player_Herb_DesertSage", Vector(-4090,483f, 32,12549f, 3059,999f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage51", "Player_Herb_DesertSage", Vector(-3848f, 43,16864f, 3012f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage52", "Player_Herb_DesertSage", Vector(-3713,901f, 39,15966f, 3045,659f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage53", "Player_Herb_DesertSage", Vector(-3778,651f, 38,40936f, 3011,134f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage54", "Player_Herb_DesertSage", Vector(-3771,132f, 24,91142f, 2916,551f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage55", "Player_Herb_DesertSage", Vector(-3741,274f, 39,65488f, 2852f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage56", "Player_Herb_DesertSage", Vector(-3850,146f, 41,66276f, 2818,583f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage57", "Player_Herb_DesertSage", Vector(-3787,081f, 39,6091f, 2748f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage58", "Player_Herb_DesertSage", Vector(-3745,765f, 44,04614f, 2675,957f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage59", "Player_Herb_DesertSage", Vector(-3684,408f, 45,17479f, 2734,258f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage60", "Player_Herb_DesertSage", Vector(-3724f, 41,16078f, 2767,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage61", "Player_Herb_DesertSage", Vector(-3596,568f, 35,13754f, 2868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage62", "Player_Herb_DesertSage", Vector(-3621,026f, 38,65096f, 2758,974f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage63", "Player_Herb_DesertSage", Vector(-3596,868f, 19,57643f, 2628,868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage64", "Player_Herb_DesertSage", Vector(-3676f, 27,81974f, 2608.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage65", "Player_Herb_DesertSage", Vector(-3849,412f, 27,1059f, 2548.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage66", "Player_Herb_DesertSage", Vector(-3937,188f, 29,12008f, 2589,45f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage67", "Player_Herb_DesertSage", Vector(-4042,042f, 19,07454f, 2513,958f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage68", "Player_Herb_DesertSage", Vector(-3810,401f, 21,08241f, 2482,219f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage69", "Player_Herb_DesertSage", Vector(-3780f, 21,58438f, 2388.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage70", "Player_Herb_DesertSage", Vector(-3773,926f, 26,10201f, 2308.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage71", "Player_Herb_DesertSage", Vector(-3637,146f, 32,62749f, 2284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage72", "Player_Herb_DesertSage", Vector(-3688f, 28,61178f, 2309,697f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage73", "Player_Herb_DesertSage", Vector(-4080f, 27,60781f, 2572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage74", "Player_Herb_DesertSage", Vector(-4138,697f, 24,59602f, 2632f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage75", "Player_Herb_DesertSage", Vector(-4172,763f, 25,54855f, 2642,833f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage76", "Player_Herb_DesertSage", Vector(-4162,929f, 29,45779f, 2711,155f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage77", "Player_Herb_DesertSage", Vector(-3988,466f, 22,60344f, 2719,299f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage78", "Player_Herb_DesertSage", Vector(-4069,154f, 29,094f, 2756.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage79", "Player_Herb_DesertSage", Vector(-4200.0f, 15,52993f, 2867,578f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage80", "Player_Herb_DesertSage", Vector(-4187,933f, 18,57248f, 3024f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage81", "Player_Herb_DesertSage", Vector(-4176.0f, 7,027458f, 3252,478f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage82", "Player_Herb_DesertSage", Vector(-4512.0f, 10,9085f, 3268f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage83", "Player_Herb_DesertSage", Vector(-4308.0f, 30,76601f, 3056f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage84", "Player_Herb_DesertSage", Vector(-4650,549f, 41,28893f, 3426,549f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage85", "Player_Herb_DesertSage", Vector(-4288.0f, 6,023537f, 3584.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage86", "Player_Herb_DesertSage", Vector(-4064.0f, 8,031368f, 3436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage87", "Player_Herb_DesertSage", Vector(-4128.0f, 7,027458f, 3297,254f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage88", "Player_Herb_DesertSage", Vector(-3880.0f, 11,77989f, 3804f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage90", "Player_Herb_DesertSage", Vector(-4522,118f, 3,104359f, 3733,303f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage91", "Player_Herb_DesertSage", Vector(-4269,966f, 5,025835f, 3629,378f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage92", "Player_Herb_DesertSage", Vector(-3568,036f, 35,13725f, 3505,278f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage93", "Player_Herb_DesertSage", Vector(-4092f, 34,69775f, 2891,08f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage94", "Player_Herb_DesertSage", Vector(-3856f, 40,15688f, 2912,489f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage95", "Player_Herb_DesertSage", Vector(-3432f, 10,54121f, 3020f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage96", "Player_Herb_DesertSage", Vector(-4351,688f, 31,55952f, 2960f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage98", "Player_Herb_DesertSage", Vector(-3636,967f, 24,09412f, 3748f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage99", "Player_Herb_DesertSage", Vector(-3712,517f, 27,10588f, 3876f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage100", "Player_Herb_DesertSage", Vector(-3745,852f, 23,04988f, 4014,149f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage", "Player_Herb_RedSage", Vector(-3932.0f, 11,12991f, 3866,598f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage1", "Player_Herb_RedSage", Vector(-4108.0f, 7,027443f, 3752.0f), Vector(0.0f, -47,3344f, 0.0f));
	*(&iLocal_17 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage2", "Player_Herb_RedSage", Vector(-3823,903f, 8,950692f, 3773,063f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage4", "Player_Herb_RedSage", Vector(-3873,778f, 10,04307f, 3564,585f), Vector(0.0f, 231,0161f, 0.0f));
	*(&iLocal_17 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage5", "Player_Herb_RedSage", Vector(-3708.0f, 8,031372f, 3533,32f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage6", "Player_Herb_RedSage", Vector(-3753,52f, 8,031372f, 3378,48f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage7", "Player_Herb_RedSage", Vector(-3808.0f, 8,031368f, 3488,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage8", "Player_Herb_RedSage", Vector(-3836.0f, 8,031364f, 3339,555f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage9", "Player_Herb_RedSage", Vector(-3682,142f, 16,06274f, 3372,312f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage10", "Player_Herb_RedSage", Vector(-3716.0f, 8,031372f, 3392f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage11", "Player_Herb_RedSage", Vector(-3836.0f, 8,031372f, 3328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage12", "Player_Herb_RedSage", Vector(-3920.0f, 9,242051f, 3296,819f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage13", "Player_Herb_RedSage", Vector(-4012f, 8,031368f, 3328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage14", "Player_Herb_RedSage", Vector(-4088.0f, 9,030048f, 3476f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-3628f, 38,65094f, 2724.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-3632,644f, 22,96937f, 2600f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-3728f, 20,58045f, 2544.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-3869,212f, 42,72093f, 2827,31f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", Vector(-3585,45f, 35,19801f, 2884f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-3601,879f, 44,77793f, 2964f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", Vector(-3680f, 11,04314f, 3128f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", Vector(-3628,368f, 13,02255f, 3189,57f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", Vector(-3816,532f, 15,06214f, 3152.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", Vector(-4069,874f, 33,22112f, 3111,949f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", Vector(-4076,621f, 33,12941f, 3030,53f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", Vector(-4136,493f, 18,17956f, 3042,862f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", Vector(-4019,553f, 25,34963f, 2737,871f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", Vector(-3732.0f, 39,15295f, 2884.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", Vector(-4058,721f, 8,031364f, 3232.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "treasure_hunting_z_3", "zombie_treasure_hunting_3", Vector(-4339.0f, 24,66854f, 3691,287f), Vector(0.0f, -137,9031f, 0.0f));
	return 1;
}

bool Function_112(struct<2>[] Param0) //Position: 0xA700 / 42752
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_116();
	iVar1 = 0;
	if (!Function_23(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_115(&(Param0[iVar02]), 8);
		}
		else if (Function_114())
		{
			iVar1 = 1;
			Function_115(&(Param0[iVar02]), 8);
		}
		Function_115(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_23(&(Param0[iVar02]), 4))
		{
			if (!Function_23(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_23(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_23(&(Param0[02]), 8) || iVar1));
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
				Function_115(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_23(&(Param0[iVar02]), 4))
		{
			if (!Function_23(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
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
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
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
	Function_113();
	return 1;
}

void Function_113() //Position: 0xAAC2 / 43714
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_114() //Position: 0xAB02 / 43778
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

void Function_115(struct<13> Param0) //Position: 0xAB30 / 43824
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_116() //Position: 0xAB43 / 43843
{
	if (!Function_63(128))
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

var Function_117(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xAB85 / 43909
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_118(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_115(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_118(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xABC3 / 43971
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_23(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_115(&(Param0[iVar02]), 4);
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

bool Function_119() //Position: 0xAC92 / 44178
{
	return Function_120();
}

int Function_120() //Position: 0xAC9B / 44187
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = &uVar0;
	iLocal_7 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&iLocal_7 + 8) = Vector(-3899,251f, 30,91323f, 2935,108f);
	*(&iLocal_7 + 8 + 12) = Vector(0.0f, 129,2136f, 0.0f);
	*(&iLocal_7 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "gtrf_two_crows", Vector(-3899,251f, 30,91323f, 2935,108f), Vector(0.0f, 129,2136f, 0.0f));
	return 1;
}

void Function_121() //Position: 0xAD49 / 44361
{
	SET_DUST_LEVEL(2);
	Function_122();
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_122() //Position: 0xAD67 / 44391
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("tum_churchCemetary01x");
	Global_39874[43] = 0;
	Global_39874[43].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Function_69(&(Global_39874[43]), iVar0 + 3);
		iVar0++;
	}
	Function_69(&(Global_39874[43]), 15);
	Function_69(&(Global_39874[43]), 16);
	return;
}

void Function_123(char* cParam0) //Position: 0xADCE / 44494
{
	if (!Function_63(128))
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

