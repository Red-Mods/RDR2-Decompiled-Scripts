//Decompiled with MagicRDR v1.0
//Function Count : 137
//Statics Count : 711
//Natives Count : 163
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
	var uLocal_9 = 3;
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
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 21;
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
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 10;
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
	var uLocal_369 = 4;
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
	var uLocal_381 = 5;
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
	var uLocal_395 = 10;
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
	var uLocal_419 = 7;
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
	var uLocal_697 = 1;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_136(&cVar0, 3);
	Function_134();
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
				if (Function_131())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_122())
				{
					Function_121();
					Function_120(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_117())
				{
					Function_120(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_116(&uLocal_3);
				Function_114(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_113())
				{
					Function_106();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_105(iScriptParam_0);
				Function_104();
				Function_120(&(Global_43791[iScriptParam_0]), 8);
				if (Function_103(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_102(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_101(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_100(iScriptParam_0))
				{
					Function_94(iScriptParam_0);
					Function_93(64);
				}
				Function_120(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_100(iScriptParam_0))
				{
					Function_91(Function_92(), iScriptParam_0);
				}
				Function_90(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_89(&cVar0, 5.0f);
				Function_120(&(Global_43791[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_65(iScriptParam_0);
				if (!Function_100(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_26(&uLocal_3, &uLocal_697, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_103(&(Global_43791[iScriptParam_0]), 131072))
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
	Function_10(&uLocal_3, &uLocal_697);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_93(64);
	Function_102(&(Global_43791[iScriptParam_0]), 32);
	Function_102(&(Global_43791[iScriptParam_0]), 64);
	Function_102(&(Global_43791[iScriptParam_0]), 512);
	Function_102(&(Global_43791[iScriptParam_0]), 16);
	Function_102(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_89(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_39874[23]));
	return;
}

void Function_2(vector3 vParam0) //Position: 0x305 / 773
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

void Function_3(var uParam0) //Position: 0x33A / 826
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

void Function_4(int iParam0) //Position: 0x389 / 905
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

void Function_5(int iParam0) //Position: 0x3BF / 959
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3E1 / 993
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3F7 / 1015
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x40D / 1037
{
	Function_9();
	return;
}

void Function_9() //Position: 0x416 / 1046
{
	RELEASE_LAYOUT_REF(&iLocal_341);
	return;
}

void Function_10(var uParam0, vector3[] vParam1) //Position: 0x423 / 1059
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

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0x480 / 1152
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

void Function_12(int iParam0, int iParam1, bool bParam2) //Position: 0x56A / 1386
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

void Function_13() //Position: 0x6E9 / 1769
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_14(int iParam0) //Position: 0x6F5 / 1781
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

void Function_15(int iParam0) //Position: 0x73F / 1855
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

void Function_16(struct<17> Param0) //Position: 0x785 / 1925
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_17(struct<17> Param0) //Position: 0x7A2 / 1954
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x7C0 / 1984
{
	Function_19();
	return;
}

void Function_19() //Position: 0x7C9 / 1993
{
	Function_20(&iLocal_33 + 8);
	RELEASE_LAYOUT_REF(&iLocal_33);
	return;
}

void Function_20(int iParam0) //Position: 0x7DC / 2012
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

void Function_21(struct<2>[] Param0, int iParam1) //Position: 0x804 / 2052
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

void Function_22(struct<13> Param0) //Position: 0x94F / 2383
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_23(struct<13> Param0) //Position: 0x96C / 2412
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x98A / 2442
{
	Function_25();
	return;
}

void Function_25() //Position: 0x993 / 2451
{
	Function_20(&iLocal_7 + 8);
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_26(vector3 vParam0) //Position: 0x9A6 / 2470
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

bool Function_27(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xA30 / 2608
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(&vParam0))
	{
		return 0;
	}
	Function_102(&(Global_43791[iParam2]), 4194304);
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
				if (!Function_103(&(Global_43791[iParam2]), 262144))
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

void Function_28(int iParam0) //Position: 0xE88 / 3720
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_103(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_120(&(Global_43791[iParam0]), 4096);
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

float Function_29(int iParam0) //Position: 0xF79 / 3961
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_30(int iParam0) //Position: 0xFB6 / 4022
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, int iParam1) //Position: 0xFEF / 4079
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

var Function_32(int iParam0) //Position: 0x1059 / 4185
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x10B1 / 4273
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

void Function_34(bool bParam0) //Position: 0x12D9 / 4825
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

void Function_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1377 / 4983
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

var Function_36() //Position: 0x19B5 / 6581
{
	int iVar0;
	
	return &iVar0;
}

var Function_37(int iParam0) //Position: 0x19BE / 6590
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x19CF / 6607
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

struct<32> Function_39(char* cParam0) //Position: 0x1AC6 / 6854
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1AE1 / 6881
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_42(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_41(Function_42(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x1B48 / 6984
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_42(int iParam0, bool bParam1) //Position: 0x1B5A / 7002
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1B6C / 7020
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

int Function_44(int iParam0) //Position: 0x1CA0 / 7328
{
	return Global_55480[iParam016].f_96;
}

void Function_45(int iParam0) //Position: 0x1CAF / 7343
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

int Function_46(int iParam0, float fParam1, bool bParam2) //Position: 0x1E49 / 7753
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

void Function_47(var uParam0, int iParam1) //Position: 0x208D / 8333
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_48(int iParam0, var uParam1, int iParam2) //Position: 0x209A / 8346
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_49(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x20C4 / 8388
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

void Function_50() //Position: 0x2377 / 9079
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

void Function_51(var uParam0, int iParam1) //Position: 0x23EA / 9194
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

bool Function_52(bool bParam0) //Position: 0x2420 / 9248
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

int Function_53(int iParam0) //Position: 0x2496 / 9366
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_54() //Position: 0x24A7 / 9383
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

bool Function_55(int iParam0) //Position: 0x24C0 / 9408
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_56(int iParam0) //Position: 0x24D6 / 9430
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_57(int iParam0) //Position: 0x24EB / 9451
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2509 / 9481
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

void Function_59(struct<17> Param0) //Position: 0x25B8 / 9656
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_60(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x25CB / 9675
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

void Function_61(int iParam0, int iParam1) //Position: 0x2645 / 9797
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_15(iParam0);
	Function_14(&uVar0);
	PRINTNL();
	Function_12(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x266E / 9838
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

bool Function_63(int iParam0) //Position: 0x268E / 9870
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x26AA / 9898
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x26BF / 9919
{
	float fVar0;
	
	iParam0 = iParam0;
	Function_80(&(Global_39874[23]), "BWG", 34, &iLocal_7, 2);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (!Function_79(2))
		{
			if (!Function_63(0x8000000))
			{
				Function_77(0x8000000);
			}
			if (Function_73(1, 0))
			{
				if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Blackwater_layout")))
				{
					if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_dismount")))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_dismount")))
						{
							if (!Function_72(Global_119934, 32768))
							{
								if (!IS_SCRIPT_VALID(&uLocal_705) && DECOR_GET_INT(&Global_54076, "GP_Dismount") != 0)
								{
									uLocal_705 = LAUNCH_NEW_SCRIPT("content/DLC/ZombiePack/North/Great_Plains/GreatPlains_Dismount_z", 0);
									DECOR_SET_INT(&Global_54076, "GP_Dismount", &uLocal_705);
								}
								Function_66(&Global_54076, 32768, 1, 0);
							}
						}
					}
				}
				if (Global_6606)
				{
					if (!iLocal_707 && !Function_72(Global_119934, 32768))
					{
						if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
						{
							AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
							iLocal_707 = 1;
						}
						else if (!HUD_IS_FADED())
						{
							fVar0 = GET_CURRENT_GAME_TIME();
							if (DECOR_CHECK_EXIST(&Global_54076, "fZombie01Completion"))
							{
								fVar0 = (DECOR_GET_FLOAT(&Global_54076, "fZombie01Completion") + 10.0f);
							}
							if ((fVar0 - GET_CURRENT_GAME_TIME()) >= 0.0f)
							{
								AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
								iLocal_707 = 1;
							}
						}
					}
					else if (DECOR_CHECK_EXIST(&Global_54076, "nbStopSong"))
					{
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						DECOR_REMOVE(&Global_54076, "nbStopSong");
					}
				}
			}
		}
		if (!Function_72(Global_119934, 65536) && !Global_6623)
		{
			if (!iLocal_708)
			{
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				iLocal_708 = 1;
			}
		}
	}
	return;
}

void Function_66(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x2966 / 10598
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_68(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_67(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_67(char* cParam0) //Position: 0x29DB / 10715
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

bool Function_68(int iParam0, var uParam1, int iParam2) //Position: 0x2A15 / 10773
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
		if (Function_70(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_69(uVar0))
		{
			case 0x00000002:
				if (!Function_72(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_69(char* cParam0) //Position: 0x2A91 / 10897
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

int Function_70(int iParam0) //Position: 0x2B32 / 11058
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_71(&iVar1, 2147483648);
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

void Function_71(var uParam0, int iParam1) //Position: 0x2B6F / 11119
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_72(var uParam0, int iParam1) //Position: 0x2B85 / 11141
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_73(var uParam0, bool bParam1) //Position: 0x2B98 / 11160
{
	int iVar0;
	
	iVar0 = Function_75(uParam0);
	if (!Function_74(iVar0))
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

bool Function_74(int iParam0) //Position: 0x2BD6 / 11222
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_75(int iParam0) //Position: 0x2BED / 11245
{
	if (!Function_76(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_76(int iParam0) //Position: 0x2C07 / 11271
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_77(bool bParam0) //Position: 0x2C1D / 11293
{
	if (Function_78(bParam0, 1) && !Function_78(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_78(bool bParam0, int iParam1) //Position: 0x2C4A / 11338
{
	return (bParam0 && iParam1) == 0;
}

bool Function_79(int iParam0) //Position: 0x2C57 / 11351
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_80(vector3 vParam0) //Position: 0x2C6C / 11372
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
			if (!Function_88(&vParam0, 63))
			{
				if (Function_87(76) || Function_79(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_86(&cParam1, &vParam0, 3, &uParam3);
						Function_83(&vParam0, 63);
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
			Function_82();
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
			Function_81();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_88(&vParam0, 63))
		{
			if (Function_87(76) || Function_79(76))
			{
				Function_86(&cParam1, &vParam0, 3, &uParam3);
				Function_83(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_86(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_81() //Position: 0x2E7D / 11901
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_83(&(Global_39874[33]), iVar0);
		iVar0++;
	}
	return;
}

void Function_82() //Position: 0x2EC4 / 11972
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_83(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_83(int iParam0, int iParam1) //Position: 0x2F16 / 12054
{
	if (iParam1 <= 32)
	{
		Function_84(&iParam0, Function_85(iParam1));
	}
	else
	{
		Function_84(&iParam0 + 4, Function_85((iParam1 - 32)));
	}
	return;
}

void Function_84(var uParam0, int iParam1) //Position: 0x2F41 / 12097
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_85(bool bParam0) //Position: 0x2F52 / 12114
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_86(char* cParam0) //Position: 0x2F5E / 12126
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
		if (bVar5 != 0 || Function_88(&iParam1, bParam2))
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

int Function_87(int iParam0) //Position: 0x300B / 12299
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_88(struct<5> Param0) //Position: 0x3020 / 12320
{
	if (bParam1 <= 32)
	{
		return Function_78(Param0, Function_85(bParam1));
	}
	return Function_78(StackVal, Function_85((bParam1 - 32)));
}

void Function_89(char* cParam0) //Position: 0x304D / 12365
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

void Function_90(int iParam0) //Position: 0x308D / 12429
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

void Function_91(int iParam0, bool bParam1) //Position: 0x311F / 12575
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

var Function_92() //Position: 0x320F / 12815
{
	return &iLocal_7;
}

void Function_93(int iParam0) //Position: 0x3218 / 12824
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_94(bool bParam0) //Position: 0x322B / 12843
{
	if (!Function_79(5) && Global_6606)
	{
		Function_95(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_99(&Global_46914));
	}
	else
	{
		Function_95(1, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_99(&Global_46914));
	}
	return;
}

void Function_95(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x327C / 12924
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
		Function_98();
	}
	if (&bParam5)
	{
		Function_96(1048576);
	}
}

void Function_96(int iParam0) //Position: 0x338A / 13194
{
	Function_97(&Global_43580, iParam0);
	return;
}

void Function_97(var uParam0, var uParam1) //Position: 0x3398 / 13208
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_98() //Position: 0x33B7 / 13239
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_96(16384);
	}
	return;
}

bool Function_99(int[] iParam0) //Position: 0x33D3 / 13267
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

bool Function_100(int iParam0) //Position: 0x3424 / 13348
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
		return Function_99(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_99(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_99(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_99(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_99(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_99(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_99(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_99(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_99(&Global_46914);
	}
	return 0;
}

void Function_101(int iParam0) //Position: 0x3501 / 13569
{
	iParam0 = iParam0;
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x350B / 13579
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_103(int iParam0, int iParam1) //Position: 0x3525 / 13605
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_104() //Position: 0x3542 / 13634
{
	return;
}

void Function_105(var uParam0) //Position: 0x3548 / 13640
{
	uParam0 = uParam0;
	return;
}

void Function_106() //Position: 0x3552 / 13650
{
	Function_107(Global_46754[0]);
	Global_43787 = 2;
	return;
}

void Function_107(int iParam0) //Position: 0x3565 / 13669
{
	int iVar0;
	
	iVar0 = Function_108(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_78(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_78(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_78(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_78(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_78(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_78(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_78(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_78(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_78(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

int Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x37A6 / 14246
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_112(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_109(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_109(bParam0, bParam1, bParam2, 4294967295);
}

int Function_109(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3804 / 14340
{
	var uVar0;
	
	if (!Function_111(bParam2))
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
	uVar0 = Function_112(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_110(uVar0);
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

var Function_110(int iParam0) //Position: 0x3968 / 14696
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

bool Function_111(int iParam0) //Position: 0x39A6 / 14758
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_112(int iParam0, int iParam1, bool bParam2) //Position: 0x39BB / 14779
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_113() //Position: 0x39DB / 14811
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_114(bool bParam0) //Position: 0x39F1 / 14833
{
	Function_115(&uLocal_3, &uLocal_697, 2, &Global_44085[bParam09] + 8, 4294967295, 0);
	return;
}

void Function_115(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3A0C / 14860
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

void Function_116(struct<5> Param0) //Position: 0x3AF9 / 15097
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_117() //Position: 0x3B0A / 15114
{
	return Function_118();
}

int Function_118() //Position: 0x3B13 / 15123
{
	var uVar0;
	
	Function_119(3, 3);
	uVar0 = &uVar0;
	iLocal_341 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_341))
	{
		iLocal_341 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&iLocal_341 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "blk_v_robbery_bank", 2,802597E-45f, Vector(1346,366f, 81,34664f, 751,1907f), Vector(0.0f, 0.0f, 0.0f), Vector(17,39107f, 17,50947f, 14,99229f));
	*(&iLocal_341 + 104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_341, "grtv_flk_NW_set");
	*(&iLocal_341 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs12", 4,203895E-45f, Vector(-54,2902f, 114,6276f, 1292,46f), Vector(0.0f, -6,764513f, 0.0f), Vector(57,62737f, 29,91328f, 74,97815f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[0]);
	*(&iLocal_341 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs11", 4,203895E-45f, Vector(-116,1067f, 139,3254f, 1461,238f), Vector(0.0f, 36,96094f, 0.0f), Vector(40,70086f, 26,70453f, 81,41494f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[1]);
	*(&iLocal_341 + 16[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs10", 4,203895E-45f, Vector(-194,7322f, 121,6231f, 1308,54f), Vector(0.0f, 42,25089f, 0.0f), Vector(59,11852f, 32,7988f, 83,63084f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[2]);
	*(&iLocal_341 + 16[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs9", 4,203895E-45f, Vector(285,138f, 94,36859f, 993,8371f), Vector(0.0f, 20.0f, 0.0f), Vector(51,4483f, 32,08016f, 49,86724f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[3]);
	*(&iLocal_341 + 16[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs8", 4,203895E-45f, Vector(143,9431f, 94,36859f, 1051,083f), Vector(0.0f, 20.0f, 0.0f), Vector(99,15746f, 39,93661f, 33,04917f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[4]);
	*(&iLocal_341 + 16[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs7", 4,203895E-45f, Vector(-8,506625f, 111,1147f, 1141,139f), Vector(0.0f, 20.0f, 0.0f), Vector(82,18313f, 33,48681f, 18,8488f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[5]);
	*(&iLocal_341 + 16[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs6", 4,203895E-45f, Vector(-145,0075f, 117,3168f, 1194,091f), Vector(0.0f, 20.0f, 0.0f), Vector(63,47575f, 40,97692f, 72,47535f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[6]);
	*(&iLocal_341 + 16[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs5", 4,203895E-45f, Vector(-24,17779f, 127,498f, 1591,916f), Vector(0.0f, 1,280679f, 0.0f), Vector(40,62563f, 33,48681f, 139,8717f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[7]);
	*(&iLocal_341 + 16[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs4", 4,203895E-45f, Vector(-35,64503f, 136,5509f, 1762,332f), Vector(0.0f, 20.0f, 0.0f), Vector(33,48681f, 33,48681f, 33,48681f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[8]);
	*(&iLocal_341 + 16[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "wolfs3", 4,203895E-45f, Vector(-100,1049f, 140,3734f, 1625,072f), Vector(0.0f, 20.0f, 0.0f), Vector(30,39426f, 33,48681f, 122,0314f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 104, &iLocal_341 + 16[9]);
	*(&iLocal_341 + 152) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_341, "grtv_flk_CENTER_set");
	*(&iLocal_341 + 112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "nbuffalos3", 4,203895E-45f, Vector(49,5673f, 118,6022f, 1792,977f), Vector(0.0f, 20.0f, 0.0f), Vector(60,3822f, 28,85181f, 82,89291f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 152, &iLocal_341 + 112[0]);
	*(&iLocal_341 + 112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "buffalos", 4,203895E-45f, Vector(210,5763f, 145,9005f, 1488,596f), Vector(0.0f, 5,336369f, 0.0f), Vector(201,5079f, 50,13197f, 370,2873f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 152, &iLocal_341 + 112[1]);
	*(&iLocal_341 + 112[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "nbuffalos1", 4,203895E-45f, Vector(428,3508f, 145,9005f, 1091,086f), Vector(0.0f, -40,39722f, 0.0f), Vector(148,988f, 50,13197f, 155,6049f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 152, &iLocal_341 + 112[2]);
	*(&iLocal_341 + 112[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "nbuffalos2", 4,203895E-45f, Vector(465,1242f, 119,7648f, 1373,33f), Vector(0.0f, 96,65638f, 0.0f), Vector(127,3155f, 25,66472f, 70,63678f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 152, &iLocal_341 + 112[3]);
	*(&iLocal_341 + 208) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_341, "grtv_flk_SOUTH_set");
	*(&iLocal_341 + 160[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "ncougars11", 4,203895E-45f, Vector(648,2339f, 134,1398f, 1845,425f), Vector(0.0f, 32,75464f, 0.0f), Vector(121,6643f, 68,45309f, 132,5476f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 208, &iLocal_341 + 160[0]);
	*(&iLocal_341 + 160[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "ncougars10", 4,203895E-45f, Vector(443,3477f, 94,73312f, 1771,535f), Vector(0.0f, 20.0f, 0.0f), Vector(89,86477f, 89,86477f, 89,86477f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 208, &iLocal_341 + 160[1]);
	*(&iLocal_341 + 160[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "cougars9", 4,203895E-45f, Vector(209,7166f, 91,35681f, 1934,343f), Vector(0.0f, 20.0f, 0.0f), Vector(189,1637f, 89,86477f, 75,75009f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 208, &iLocal_341 + 160[2]);
	*(&iLocal_341 + 160[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "cougars8", 4,203895E-45f, Vector(545,233f, 104,4078f, 1635,16f), Vector(0.0f, -11,80128f, 0.0f), Vector(139,2927f, 89,86477f, 73,26148f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 208, &iLocal_341 + 160[3]);
	*(&iLocal_341 + 160[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "cougars7", 4,203895E-45f, Vector(763,0635f, 95,29845f, 1653,671f), Vector(0.0f, -16,63512f, 0.0f), Vector(68,9f, 89,86477f, 108,8123f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 208, &iLocal_341 + 160[4]);
	*(&iLocal_341 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_341, "grtv_gullcoast_set");
	*(&iLocal_341 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife27", 4,203895E-45f, Vector(542,2242f, 68,26665f, 2042,296f), Vector(0.0f, -29,3247f, 0.0f), Vector(130,4115f, 19,64153f, 74,55981f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[0]);
	*(&iLocal_341 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife11", 4,203895E-45f, Vector(719,006f, 68,2666f, 2043,745f), Vector(0.0f, 1,951811f, 0.0f), Vector(130,4115f, 23,56285f, 74,55981f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[1]);
	*(&iLocal_341 + 216[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife25", 4,203895E-45f, Vector(862,4601f, 68,26663f, 1790,165f), Vector(0.0f, 73,88887f, 0.0f), Vector(92,73218f, 25,94783f, 75,14059f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[2]);
	*(&iLocal_341 + 216[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife26", 4,203895E-45f, Vector(871,1542f, 68,26662f, 1956,079f), Vector(0.0f, 73,88887f, 0.0f), Vector(92,73218f, 18,71796f, 75,14059f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[3]);
	*(&iLocal_341 + 216[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife12", 4,203895E-45f, Vector(924,7684f, 68,26663f, 1706,121f), Vector(0.0f, 73,88887f, 0.0f), Vector(92,73218f, 27,40582f, 75,14059f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[4]);
	*(&iLocal_341 + 216[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife13", 4,203895E-45f, Vector(864,7108f, 68,26666f, 1212,507f), Vector(0.0f, 91,04541f, 0.0f), Vector(76,14072f, 26,22717f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[5]);
	*(&iLocal_341 + 216[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife14", 4,203895E-45f, Vector(829,8139f, 68,26666f, 1087,609f), Vector(0.0f, -30,65034f, 0.0f), Vector(94,80785f, 20,92016f, 82,87566f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[6]);
	*(&iLocal_341 + 216[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife22", 4,203895E-45f, Vector(867,8832f, 68,26666f, 1300,542f), Vector(0.0f, 130,2414f, 0.0f), Vector(76,14072f, 28,67517f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[7]);
	*(&iLocal_341 + 216[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife23", 4,203895E-45f, Vector(873,435f, 68,26666f, 1412,371f), Vector(0.0f, 130,2414f, 0.0f), Vector(76,14072f, 20,79433f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[8]);
	*(&iLocal_341 + 216[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife24", 4,203895E-45f, Vector(958,8206f, 68,26663f, 1568,463f), Vector(0.0f, 86,45786f, 0.0f), Vector(133,3231f, 21,32483f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 304, &iLocal_341 + 216[9]);
	*(&iLocal_341 + 376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_341, "grtv_aquaticWildlife_set");
	*(&iLocal_341 + 312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife10", 4,203895E-45f, Vector(463,473f, 68,26824f, 1882,711f), Vector(0.0f, -14,30964f, 0.0f), Vector(173,5558f, 32,81913f, 61,38209f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[0]);
	*(&iLocal_341 + 312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife15", 4,203895E-45f, Vector(668,8126f, 71,2487f, 1001,604f), Vector(0.0f, -36,56364f, 0.0f), Vector(204,8105f, 21,72543f, 59,11795f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[1]);
	*(&iLocal_341 + 312[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife16", 4,203895E-45f, Vector(410,3493f, 74,29018f, 943,0745f), Vector(0.0f, 7,388419f, 0.0f), Vector(138,6952f, 26,14467f, 51,82736f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[2]);
	*(&iLocal_341 + 312[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife17", 4,203895E-45f, Vector(175,2287f, 89,25648f, 983,217f), Vector(0.0f, 25,225f, 0.0f), Vector(139,4472f, 25,57897f, 51,54788f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[3]);
	*(&iLocal_341 + 312[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife18", 4,203895E-45f, Vector(-22,47146f, 88,03369f, 1109,185f), Vector(0.0f, 25,225f, 0.0f), Vector(139,4472f, 37,6038f, 51,54788f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[4]);
	*(&iLocal_341 + 312[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife19", 4,203895E-45f, Vector(-221,0464f, 116,4549f, 1186,166f), Vector(0.0f, 42,80977f, 0.0f), Vector(140,1022f, 17,40649f, 34,5661f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[5]);
	*(&iLocal_341 + 312[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_aquaticWildlife20", 4,203895E-45f, Vector(-404,7502f, 105,5874f, 1166,046f), Vector(0.0f, -49,27761f, 0.0f), Vector(138,3392f, 17,54135f, 35,00663f));
	ADD_TO_VOLUME_SET(&iLocal_341 + 376, &iLocal_341 + 312[6]);
	*(&iLocal_341 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_birds", 2,802597E-45f, Vector(184.0f, 118,4628f, 1524.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1548,724f, 136,7648f, 1274,193f));
	*(&iLocal_341 + 392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_dixons", 4,203895E-45f, Vector(172,723f, 81,27254f, 2063,629f), Vector(0.0f, -8,247506f, 0.0f), Vector(27,80257f, 13,1623f, 10,755f));
	*(&iLocal_341 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "grtv_bhstop", 2,802597E-45f, Vector(757,0193f, 78,525f, 1234,986f), Vector(0.0f, 0.0f, 0.0f), Vector(7,127447f, 8,294168f, 15,94082f));
	*(&iLocal_341 + 408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "nEllipsoid", 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_341 + 416) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "Ellipsoid1", 0f, Vector(756,2045f, 0.0f, 1035,028f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_341 + 424) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_341, "Cylinder", 4,203895E-45f, Vector(2203,662f, 0.0f, 1595,216f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_341 + 432) = Vector(1378,725f, 78,7847f, 826,4789f);
	*(&iLocal_341 + 432 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bad", Vector(1378,725f, 78,7847f, 826,4789f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 464) = Vector(1321,037f, 78,63029f, 801,6255f);
	*(&iLocal_341 + 464 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bad1", Vector(1321,037f, 78,63029f, 801,6255f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 496) = Vector(1276,778f, 79,33315f, 813,4847f);
	*(&iLocal_341 + 496 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bad2", Vector(1276,778f, 79,33315f, 813,4847f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 528) = Vector(1338,44f, 78,9436f, 763,5467f);
	*(&iLocal_341 + 528 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_good", Vector(1338,44f, 78,9436f, 763,5467f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 560) = Vector(1356,502f, 78,56875f, 762,9736f);
	*(&iLocal_341 + 560 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_good1", Vector(1356,502f, 78,56875f, 762,9736f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 592) = Vector(1346,351f, 79,93112f, 754,5385f);
	*(&iLocal_341 + 592 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_good2", Vector(1346,351f, 79,93112f, 754,5385f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 624) = Vector(1350,543f, 79,83478f, 745,4222f);
	*(&iLocal_341 + 624 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_loot", Vector(1350,543f, 79,83478f, 745,4222f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 656) = Vector(1352,766f, 79,83478f, 758,0829f);
	*(&iLocal_341 + 656 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bank", Vector(1352,766f, 79,83478f, 758,0829f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 688) = Vector(1340,136f, 79,62601f, 758,6826f);
	*(&iLocal_341 + 688 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bank1", Vector(1340,136f, 79,62601f, 758,6826f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 720) = Vector(1341,458f, 79,52139f, 755,6003f);
	*(&iLocal_341 + 720 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bank2", Vector(1341,458f, 79,52139f, 755,6003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 752) = Vector(1345,523f, 79,42148f, 751,3326f);
	*(&iLocal_341 + 752 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bank3", Vector(1345,523f, 79,42148f, 751,3326f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 784) = Vector(1352,454f, 79,69425f, 752,5648f);
	*(&iLocal_341 + 784 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bank4", Vector(1352,454f, 79,69425f, 752,5648f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 816) = Vector(1338,687f, 80,87756f, 747,8107f);
	*(&iLocal_341 + 816 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_341 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "blk_f_robbery_bank5", Vector(1338,687f, 80,87756f, 747,8107f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_341 + 848) = Vector(278,2518f, 91,27737f, 923,1232f);
	*(&iLocal_341 + 848 + 12) = Vector(0.0f, -180,298f, 0.0f);
	*(&iLocal_341 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingTree_grt1", Vector(278,2518f, 91,27737f, 923,1232f), Vector(0.0f, -180,298f, 0.0f));
	*(&iLocal_341 + 880) = Vector(292,7893f, 90,91013f, 925,5304f);
	*(&iLocal_341 + 880 + 12) = Vector(0.0f, 84,85152f, 0.0f);
	*(&iLocal_341 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingHorses_grt1", Vector(292,7893f, 90,91013f, 925,5304f), Vector(0.0f, 84,85152f, 0.0f));
	*(&iLocal_341 + 912) = Vector(274,748f, 91,40363f, 926,775f);
	*(&iLocal_341 + 912 + 12) = Vector(0.0f, -90,22207f, 0.0f);
	*(&iLocal_341 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard1_grt1", Vector(274,748f, 91,40363f, 926,775f), Vector(0.0f, -90,22207f, 0.0f));
	*(&iLocal_341 + 944) = Vector(287,4493f, 90,91797f, 925,2139f);
	*(&iLocal_341 + 944 + 12) = Vector(0.0f, 88,48517f, 0.0f);
	*(&iLocal_341 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard2_grt1", Vector(287,4493f, 90,91797f, 925,2139f), Vector(0.0f, 88,48517f, 0.0f));
	*(&iLocal_341 + 976) = Vector(285,3504f, 90,55353f, 921,7806f);
	*(&iLocal_341 + 976 + 12) = Vector(0.0f, 101,5619f, 0.0f);
	*(&iLocal_341 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard3_grt1", Vector(285,3504f, 90,55353f, 921,7806f), Vector(0.0f, 101,5619f, 0.0f));
	*(&iLocal_341 + 1008) = Vector(278,021f, 91,31001f, 926,775f);
	*(&iLocal_341 + 1008 + 12) = Vector(0.0f, 88,67081f, 0.0f);
	*(&iLocal_341 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingguy_grt1", Vector(278,021f, 91,31001f, 926,775f), Vector(0.0f, 88,67081f, 0.0f));
	*(&iLocal_341 + 1040) = Vector(480,021f, 98,41798f, 1787,462f);
	*(&iLocal_341 + 1040 + 12) = Vector(0.0f, 187,0551f, 0.0f);
	*(&iLocal_341 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingTree_grt2", Vector(480,021f, 98,41798f, 1787,462f), Vector(0.0f, 187,0551f, 0.0f));
	*(&iLocal_341 + 1072) = Vector(480,0001f, 98,51614f, 1800.0f);
	*(&iLocal_341 + 1072 + 12) = Vector(0.0f, 62,35506f, 0.0f);
	*(&iLocal_341 + 1096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingHorses_grt2", Vector(480,0001f, 98,51614f, 1800.0f), Vector(0.0f, 62,35506f, 0.0f));
	*(&iLocal_341 + 1104) = Vector(478,0531f, 98,54673f, 1793,31f);
	*(&iLocal_341 + 1104 + 12) = Vector(0.0f, -52,34931f, 0.0f);
	*(&iLocal_341 + 1128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard1_grt2", Vector(478,0531f, 98,54673f, 1793,31f), Vector(0.0f, -52,34931f, 0.0f));
	*(&iLocal_341 + 1136) = Vector(481,8415f, 98,38428f, 1796.0f);
	*(&iLocal_341 + 1136 + 12) = Vector(0.0f, 45,57205f, 0.0f);
	*(&iLocal_341 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard2_grt2", Vector(481,8415f, 98,38428f, 1796.0f), Vector(0.0f, 45,57205f, 0.0f));
	*(&iLocal_341 + 1168) = Vector(475,5848f, 98,48624f, 1790,141f);
	*(&iLocal_341 + 1168 + 12) = Vector(0.0f, -122,6327f, 0.0f);
	*(&iLocal_341 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard3_grt2", Vector(475,5848f, 98,48624f, 1790,141f), Vector(0.0f, -122,6327f, 0.0f));
	*(&iLocal_341 + 1200) = Vector(480,021f, 98,54673f, 1791,775f);
	*(&iLocal_341 + 1200 + 12) = Vector(0.0f, 130,0659f, 0.0f);
	*(&iLocal_341 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingguy_grt2", Vector(480,021f, 98,54673f, 1791,775f), Vector(0.0f, 130,0659f, 0.0f));
	*(&iLocal_341 + 1232) = Vector(798,021f, 77,34565f, 1709,07f);
	*(&iLocal_341 + 1232 + 12) = Vector(0.0f, 167,0936f, 0.0f);
	*(&iLocal_341 + 1256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingTree_grt3", Vector(798,021f, 77,34565f, 1709,07f), Vector(0.0f, 167,0936f, 0.0f));
	*(&iLocal_341 + 1264) = Vector(800,8351f, 77,49451f, 1708,022f);
	*(&iLocal_341 + 1264 + 12) = Vector(0.0f, -83,21953f, 0.0f);
	*(&iLocal_341 + 1288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingHorses_grt3", Vector(800,8351f, 77,49451f, 1708,022f), Vector(0.0f, -83,21953f, 0.0f));
	*(&iLocal_341 + 1296) = Vector(798,5142f, 77,3733f, 1715,225f);
	*(&iLocal_341 + 1296 + 12) = Vector(0.0f, 10,99088f, 0.0f);
	*(&iLocal_341 + 1320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard1_grt3", Vector(798,5142f, 77,3733f, 1715,225f), Vector(0.0f, 10,99088f, 0.0f));
	*(&iLocal_341 + 1328) = Vector(796,9107f, 77,41772f, 1717,648f);
	*(&iLocal_341 + 1328 + 12) = Vector(0.0f, -13,54039f, 0.0f);
	*(&iLocal_341 + 1352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard2_grt3", Vector(796,9107f, 77,41772f, 1717,648f), Vector(0.0f, -13,54039f, 0.0f));
	*(&iLocal_341 + 1360) = Vector(794,2851f, 77,34481f, 1717,344f);
	*(&iLocal_341 + 1360 + 12) = Vector(0.0f, -40,22768f, 0.0f);
	*(&iLocal_341 + 1384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingGuard3_grt3", Vector(794,2851f, 77,34481f, 1717,344f), Vector(0.0f, -40,22768f, 0.0f));
	*(&iLocal_341 + 1392) = Vector(798,021f, 77,31161f, 1712,775f);
	*(&iLocal_341 + 1392 + 12) = Vector(0.0f, 191,6665f, 0.0f);
	*(&iLocal_341 + 1416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_341, "hangingguy_grt3", Vector(798,021f, 77,31161f, 1712,775f), Vector(0.0f, 191,6665f, 0.0f));
	return 1;
}

void Function_119(int iParam0, int iParam1) //Position: 0x565F / 22111
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

void Function_120(var uParam0, int iParam1) //Position: 0x56A9 / 22185
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_121() //Position: 0x56BA / 22202
{
	return;
}

bool Function_122() //Position: 0x56C0 / 22208
{
	return Function_123();
}

int Function_123() //Position: 0x56C9 / 22217
{
	int iVar0;
	
	Function_119(3, 3);
	iVar0 = &iVar0;
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/player_herb_goldencurrant", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/player_herb_prairiepoppy", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_129(&iLocal_33 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (!Function_124(&iLocal_33 + 8))
	{
		return 0;
	}
	iLocal_33 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_33))
	{
		iLocal_33 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&iLocal_33 + 352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "f_bhint", Vector(150,9443f, 128,8552f, 1388.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "f_bhint1", Vector(357,1578f, 79,43221f, 1985,98f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(157,088f, 128,6531f, 1412,838f), Vector(0.0f, -119,0785f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(145,9573f, 129,7917f, 1403,865f), Vector(0.0f, 114,7033f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(149,7698f, 129,4657f, 1400,383f), Vector(0.0f, -57,51074f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_Pee", "Pee", Vector(149,4602f, 128,2654f, 1383,105f), Vector(0.0f, -301,9947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_rand_idle_stand2", "rand_idle_stand", Vector(152,4598f, 129,316f, 1399,699f), Vector(0.0f, 105,5583f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(149,0702f, 129,0827f, 1396,536f), Vector(0.0f, -138,0183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_horse_tend6", "horse_tend", Vector(151,546f, 129,495f, 1404,585f), Vector(0.0f, -139,3574f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_horse_tend7", "horse_tend", Vector(149,989f, 128,875f, 1392,185f), Vector(0.0f, -117,0606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_horse_tend8w", "horse_tend", Vector(151,0038f, 128,875f, 1390,909f), Vector(0.0f, -118,8501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_smoking_stand2", "smoking_stand", Vector(158,876f, 129,474f, 1395,151f), Vector(0.0f, 77,17844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(148,7914f, 127,7514f, 1379,212f), Vector(0.0f, -299,6739f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_horse_stay", "horse_stay", Vector(155,281f, 129,15f, 1403,048f), Vector(0.0f, 60,28025f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "BkTR_look_distance_binocs", "look_distance_binocs", Vector(138,424f, 127,959f, 1391,745f), Vector(0.0f, 5,710794f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_33 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(146,8251f, 128,8514f, 1392,798f), Vector(0.0f, 88,73585f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 368), 0);
	*(&iLocal_33 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant", "Player_Herb_goldenCurrant", Vector(695,1923f, 90,55561f, 1076f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant1", "Player_Herb_goldenCurrant", Vector(560.0f, 94,36865f, 1012f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant10", "Player_Herb_goldenCurrant", Vector(-204.0f, 129,5059f, 1304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant11", "Player_Herb_goldenCurrant", Vector(-36.0f, 112,0246f, 1284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant12", "Player_Herb_goldenCurrant", Vector(31,99994f, 118,4627f, 1324.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant14", "Player_Herb_goldenCurrant", Vector(-10,17844f, 126,9068f, 1437,727f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant15", "Player_Herb_goldenCurrant", Vector(-92.0f, 119,2099f, 1474,262f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant16", "Player_Herb_goldenCurrant", Vector(20,94169f, 130,5098f, 1452,534f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant17", "Player_Herb_goldenCurrant", Vector(95,99994f, 127,498f, 1416f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant18", "Player_Herb_goldenCurrant", Vector(136.0f, 129,5059f, 1440f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant19", "Player_Herb_goldenCurrant", Vector(-20,00006f, 123,4811f, 1520,009f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant2", "Player_Herb_goldenCurrant", Vector(467,9999f, 98,56538f, 1058,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant20", "Player_Herb_goldenCurrant", Vector(99,99988f, 122,6617f, 1501,576f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant21", "Player_Herb_goldenCurrant", Vector(28.0f, 124,3337f, 1572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant22", "Player_Herb_goldenCurrant", Vector(80,00003f, 124,834f, 1596.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant23", "Player_Herb_goldenCurrant", Vector(8.0f, 116,4548f, 1636f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant24", "Player_Herb_goldenCurrant", Vector(120f, 123,8186f, 1664.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant25", "Player_Herb_goldenCurrant", Vector(8.0f, 115,2069f, 1704f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant26", "Player_Herb_goldenCurrant", Vector(80.0f, 117,9192f, 1748.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant27", "Player_Herb_goldenCurrant", Vector(49,58045f, 99,23539f, 1856.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant28", "Player_Herb_goldenCurrant", Vector(112f, 84,60585f, 1929,137f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant29", "Player_Herb_goldenCurrant", Vector(178,3197f, 88,87658f, 1971,804f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant3", "Player_Herb_goldenCurrant", Vector(256f, 101,3961f, 1012f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant30", "Player_Herb_goldenCurrant", Vector(204f, 91,35681f, 1936.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant31", "Player_Herb_goldenCurrant", Vector(228f, 105,4117f, 1852.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant32", "Player_Herb_goldenCurrant", Vector(380f, 97,38037f, 1820.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant33", "Player_Herb_goldenCurrant", Vector(411,801f, 94,91784f, 1867,155f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant34", "Player_Herb_goldenCurrant", Vector(528,3188f, 97,83836f, 1845,436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant35", "Player_Herb_goldenCurrant", Vector(616.0f, 86,33722f, 1956f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant36", "Player_Herb_goldenCurrant", Vector(733,7625f, 85,77563f, 1913,762f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant37", "Player_Herb_goldenCurrant", Vector(656,0001f, 99,38818f, 1832.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant38", "Player_Herb_goldenCurrant", Vector(624.0f, 107,4196f, 1744.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant4", "Player_Herb_goldenCurrant", Vector(123,8889f, 110,9025f, 1011,628f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant40", "Player_Herb_goldenCurrant", Vector(574,8133f, 101,0377f, 1796,16f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant41", "Player_Herb_goldenCurrant", Vector(747,9999f, 89,349f, 1884.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant42", "Player_Herb_goldenCurrant", Vector(535,9999f, 108,4235f, 1725,181f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant43", "Player_Herb_goldenCurrant", Vector(736,0001f, 95,3725f, 1636.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant44", "Player_Herb_goldenCurrant", Vector(660.0f, 102,949f, 1776.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant45", "Player_Herb_goldenCurrant", Vector(432f, 110,4313f, 1652,316f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant46", "Player_Herb_goldenCurrant", Vector(616.0f, 102,883f, 1632.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant47", "Player_Herb_goldenCurrant", Vector(839,9999f, 86,18433f, 1608.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant48", "Player_Herb_goldenCurrant", Vector(799,9999f, 77,30188f, 1720.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant49", "Player_Herb_goldenCurrant", Vector(599,9999f, 107,4196f, 1736.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant5", "Player_Herb_goldenCurrant", Vector(128.0f, 111,4353f, 1088.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant50", "Player_Herb_goldenCurrant", Vector(588.0f, 102,4792f, 1651,33f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant6", "Player_Herb_goldenCurrant", Vector(240,0001f, 108,4235f, 1080.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant7", "Player_Herb_goldenCurrant", Vector(-41,29242f, 111,261f, 1197,522f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant8", "Player_Herb_goldenCurrant", Vector(50,69914f, 111,0679f, 1212,378f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_goldenCurrant9", "Player_Herb_goldenCurrant", Vector(-104f, 113,2009f, 1240.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy", "Player_Herb_prairiePoppy", Vector(152,8835f, 108,4235f, 1171,232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy1", "Player_Herb_prairiePoppy", Vector(288.0f, 107,363f, 1176f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy10", "Player_Herb_prairiePoppy", Vector(100,0052f, 121,8024f, 1347,977f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy11", "Player_Herb_prairiePoppy", Vector(99,65958f, 124,3904f, 1376,273f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy12", "Player_Herb_prairiePoppy", Vector(166,9878f, 129,4901f, 1388,083f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy13", "Player_Herb_prairiePoppy", Vector(235,9999f, 124,7943f, 1332f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy14", "Player_Herb_prairiePoppy", Vector(281,4927f, 119,3126f, 1350,6f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy15", "Player_Herb_prairiePoppy", Vector(227,9546f, 125,0979f, 1361,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy16", "Player_Herb_prairiePoppy", Vector(153,7697f, 128,0826f, 1438,607f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy17", "Player_Herb_prairiePoppy", Vector(217,1763f, 124,4003f, 1413,258f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy18", "Player_Herb_prairiePoppy", Vector(117,3568f, 125,5178f, 1474,203f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy19", "Player_Herb_prairiePoppy", Vector(240,9872f, 118,4365f, 1471,016f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy2", "Player_Herb_prairiePoppy", Vector(360.0f, 103,381f, 1160f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy20", "Player_Herb_prairiePoppy", Vector(337,9934f, 116,4312f, 1469,902f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy21", "Player_Herb_prairiePoppy", Vector(309,7348f, 115,2243f, 1474,274f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy22", "Player_Herb_prairiePoppy", Vector(415,5941f, 106,8482f, 1523,904f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy23", "Player_Herb_prairiePoppy", Vector(376,0001f, 110,4313f, 1528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy24", "Player_Herb_prairiePoppy", Vector(343,8192f, 111,4151f, 1524.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy25", "Player_Herb_prairiePoppy", Vector(287,9999f, 113,4431f, 1520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy26", "Player_Herb_prairiePoppy", Vector(247,9999f, 114,447f, 1524.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy27", "Player_Herb_prairiePoppy", Vector(248f, 114,42f, 1544.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy28", "Player_Herb_prairiePoppy", Vector(132.0f, 121,4745f, 1536f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy29", "Player_Herb_prairiePoppy", Vector(144.0f, 123,4824f, 1592,555f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy3", "Player_Herb_prairiePoppy", Vector(427,9999f, 107,4196f, 1288f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy30", "Player_Herb_prairiePoppy", Vector(128,8151f, 124,4632f, 1636f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy31", "Player_Herb_prairiePoppy", Vector(240f, 115,4509f, 1585,015f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy32", "Player_Herb_prairiePoppy", Vector(271,9999f, 115,4509f, 1616,957f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy33", "Player_Herb_prairiePoppy", Vector(348,0647f, 110,468f, 1682,394f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy34", "Player_Herb_prairiePoppy", Vector(416f, 108,4235f, 1624,415f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy35", "Player_Herb_prairiePoppy", Vector(419,9999f, 108,3964f, 1593,715f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy36", "Player_Herb_prairiePoppy", Vector(256,9475f, 117,0458f, 1464,641f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy37", "Player_Herb_prairiePoppy", Vector(227,9999f, 124,4671f, 1412f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy38", "Player_Herb_prairiePoppy", Vector(343,9999f, 118,4272f, 1304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy39", "Player_Herb_prairiePoppy", Vector(423,9999f, 108,4087f, 1276.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy4", "Player_Herb_prairiePoppy", Vector(359,3031f, 116,448f, 1304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy40", "Player_Herb_prairiePoppy", Vector(344,8217f, 113,2369f, 1395,043f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy41", "Player_Herb_prairiePoppy", Vector(223,2836f, 120,2737f, 1452,303f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy42", "Player_Herb_prairiePoppy", Vector(315,9999f, 113,4431f, 1504.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy43", "Player_Herb_prairiePoppy", Vector(443,0988f, 107,2659f, 1570,524f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy44", "Player_Herb_prairiePoppy", Vector(426,5165f, 109,3572f, 1618,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy45", "Player_Herb_prairiePoppy", Vector(300f, 118,4304f, 1620.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy46", "Player_Herb_prairiePoppy", Vector(279,6821f, 116,2279f, 1695,576f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy47", "Player_Herb_prairiePoppy", Vector(175,9876f, 118,7702f, 1556,077f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy48", "Player_Herb_prairiePoppy", Vector(370,0059f, 108,4235f, 1710,173f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy49", "Player_Herb_prairiePoppy", Vector(333,5171f, 98,36597f, 1796.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy5", "Player_Herb_prairiePoppy", Vector(454,1075f, 104,3669f, 1374,861f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy50", "Player_Herb_prairiePoppy", Vector(225,4733f, 109,4706f, 1801,168f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy6", "Player_Herb_prairiePoppy", Vector(431,9182f, 111,4168f, 1424,007f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy7", "Player_Herb_prairiePoppy", Vector(204,0399f, 125,4902f, 1309,547f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy8", "Player_Herb_prairiePoppy", Vector(203,9303f, 117,4588f, 1235,954f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_33 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "Player_Herb_prairiePoppy9", "Player_Herb_prairiePoppy", Vector(141,0508f, 121,4022f, 1317,086f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Pee3", "Pee", Vector(362,1963f, 78,70888f, 1984,005f), Vector(0.0f, -43,27293f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(356,695f, 73,3355f, 1980,807f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_rand_idle_stand", "rand_idle_stand", Vector(338,2788f, 74,5917f, 1942,472f), Vector(0.0f, -164,8241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_rand_idle_stand2", "rand_idle_stand", Vector(359,0939f, 78,39108f, 1991,795f), Vector(0.0f, -161,0478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_rand_idle_stand3", "rand_idle_stand", Vector(351,7272f, 76,34866f, 1986,588f), Vector(0.0f, 68,45935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_sit_docks3", "nsit_docks", Vector(361,7251f, 73,50711f, 1973,968f), Vector(0.0f, -118,1669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(353,6501f, 73,88201f, 1976,827f), Vector(0.0f, -126,9591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(352,9845f, 76,39187f, 1984,406f), Vector(0.0f, 52,31681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_sit_ground_smoke", "sit_ground_smoke", Vector(357,5717f, 76,19849f, 1981,747f), Vector(0.0f, -29,00372f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_sit_ground_smoke2", "sit_ground_smoke", Vector(335,3785f, 74,60016f, 1940,426f), Vector(0.0f, -21,86767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_sit_ground_smoke3", "sit_ground_smoke", Vector(369,985f, 73,58916f, 1944,503f), Vector(0.0f, -25,18101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(354,8198f, 79,43221f, 1982,737f), Vector(0.0f, 62,95712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(346,8859f, 74,00498f, 1984,04f), Vector(0.0f, 129,3219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_stand_yelling_down", "stand_yelling_down", Vector(355,6973f, 79,401f, 1982,143f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_dealer_and_customer2", "dealer_and_customer", Vector(355,8004f, 76,38882f, 1980,956f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_33 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_look_out_window_L", "look_out_window_L", Vector(330,4944f, 74,60293f, 1937,513f), Vector(0.0f, 107,1152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1176), 0);
	*(&iLocal_33 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(331,1541f, 74,39916f, 1933,66f), Vector(0.0f, 66,63307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1184), 0);
	*(&iLocal_33 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_lean_fence_L_talking", "lean_fence_L_talking", Vector(334,3096f, 74,59482f, 1942,392f), Vector(0.0f, 153,1973f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1192), 0);
	*(&iLocal_33 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(371,9703f, 73,48869f, 1937,603f), Vector(0.0f, -27,3343f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1200), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_sit_docks4", "nsit_docks", Vector(375,2437f, 73,48671f, 1938,945f), Vector(0.0f, -116,2048f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_Sit_Ground_Drink2", "Sit_Ground_Drink", Vector(367,3382f, 73,4931f, 1936,028f), Vector(0.0f, -113,1597f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_33 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_horse_stay", "horse_stay", Vector(383,6137f, 73,36394f, 1917,677f), Vector(0.0f, -128,7536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1208), 0);
	*(&iLocal_33 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_horse_stay1", "horse_stay", Vector(382,3799f, 73,32485f, 1919,193f), Vector(0.0f, -113,8612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1216), 0);
	*(&iLocal_33 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_lean_fence_back", "lean_fence_back", Vector(377,7558f, 73,47366f, 1924,431f), Vector(0.0f, -117,9854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_33 + 1224), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_33, "wrk_rand_idle_stand4", "rand_idle_stand", Vector(371,8394f, 73,46868f, 1936,036f), Vector(0.0f, -23,76552f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_124(struct<2>[] Param0) //Position: 0x8D2C / 36140
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_128();
	iVar1 = 0;
	if (!Function_23(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_127(&(Param0[iVar02]), 8);
		}
		else if (Function_126())
		{
			iVar1 = 1;
			Function_127(&(Param0[iVar02]), 8);
		}
		Function_127(&(Param0[iVar02]), 16);
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
				Function_127(&(Param0[iVar02]), 1);
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
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
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
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
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
	Function_125();
	return 1;
}

void Function_125() //Position: 0x90EE / 37102
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

bool Function_126() //Position: 0x912E / 37166
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

void Function_127(struct<13> Param0) //Position: 0x915C / 37212
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_128() //Position: 0x916F / 37231
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

var Function_129(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x91B1 / 37297
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_130(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_127(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_130(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x91EF / 37359
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_23(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_127(&(Param0[iVar02]), 4);
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

bool Function_131() //Position: 0x92BE / 37566
{
	return Function_132();
}

int Function_132() //Position: 0x92C7 / 37575
{
	var uVar0;
	
	Function_119(3, 3);
	uVar0 = &uVar0;
	Function_129(&iLocal_7 + 8, "p_uti_cover2x1x", 0, 0);
	Function_129(&iLocal_7 + 8, "p_uti_cover1x2x", 0, 0);
	Function_129(&iLocal_7 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_124(&iLocal_7 + 8))
	{
		return 0;
	}
	iLocal_7 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&iLocal_7 + 64) = Vector(630,629f, 98,168f, 1815,987f);
	*(&iLocal_7 + 64 + 12) = Vector(0.0f, -107,0722f, 0.0f);
	*(&iLocal_7 + 88) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "Temp_CarPos", Vector(630,629f, 98,168f, 1815,987f), Vector(0.0f, -107,0722f, 0.0f));
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x0", "p_uti_cover2x1x", Vector(204,0001f, 123,4465f, 1639,79f), Vector(-177,334f, -108,671f, 177,5641f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x1", "p_uti_cover2x1x", Vector(238,4106f, 117,4588f, 1638,411f), Vector(-179,1112f, -163,7204f, 179,8408f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x2", "p_uti_cover2x1x", Vector(183,1441f, 124,4862f, 1647,144f), Vector(-175,7983f, -101,7259f, 175,9756f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x3", "p_uti_cover2x1x", Vector(140,4274f, 121,4745f, 1671,573f), Vector(-181,8654f, -62,77824f, 181,7489f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x4", "p_uti_cover2x1x", Vector(214,0656f, 123,2074f, 1651,26f), Vector(-178,8936f, -140,4584f, 179,3855f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x5", "p_uti_cover2x1x", Vector(127,9999f, 121,1553f, 1681,523f), Vector(-183,723f, -76,74288f, 183,714f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x6", "p_uti_cover2x1x", Vector(122,7811f, 123,4847f, 1671,714f), Vector(-183,723f, -76,74288f, 183,714f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x7", "p_uti_cover2x1x", Vector(110,9311f, 117,4152f, 1710,931f), Vector(-358,6223f, -51,73307f, 359,0082f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x8", "p_uti_cover2x1x", Vector(102,1142f, 117,0503f, 1708,001f), Vector(-357,9777f, -65,04119f, 358,2564f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x9", "p_uti_cover2x1x", Vector(27,02832f, 115,3725f, 1706,619f), Vector(-357,9777f, -65,04119f, 358,2564f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x10", "p_uti_cover2x1x", Vector(17,18051f, 115,5175f, 1716,66f), Vector(-357,9777f, -65,04119f, 358,2564f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x11", "p_uti_cover2x1x", Vector(-5,595703f, 113,9409f, 1690,402f), Vector(-184,2235f, -78,33517f, 184,2265f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x12", "p_uti_cover2x1x", Vector(-0,61668f, 116,3239f, 1720,784f), Vector(-355,7089f, -78,52127f, 355,8843f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x13", "p_uti_cover2x1x", Vector(4,000046f, 114,5231f, 1682,438f), Vector(-182,2104f, -67,28971f, 182,1291f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x14", "p_uti_cover2x1x", Vector(174,6896f, 125,4902f, 1638,69f), Vector(-159,3823f, -92,42357f, 159,4892f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x15", "p_uti_cover2x1x", Vector(196,7614f, 124,4862f, 1664.0f), Vector(-178,8384f, -137,2664f, 179,3017f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x16", "p_uti_cover2x1x", Vector(219,1994f, 120,7291f, 1630,848f), Vector(-178,8945f, -140,5174f, 179,387f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x17", "p_uti_cover2x1x", Vector(210,1214f, 121,4745f, 1624.0f), Vector(-178,159f, -117,6124f, 178,4585f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x18", "p_uti_cover2x1x", Vector(611,8726f, 99,22272f, 1804,307f), Vector(66,32018f, 76,14228f, 66,93644f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x19", "p_uti_cover2x1x", Vector(611,6384f, 97,28822f, 1821,858f), Vector(-44,67248f, -110,6125f, 44,03279f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x20", "p_uti_cover2x1x", Vector(623,4265f, 99,05706f, 1808,646f), Vector(-24,61025f, -116,6806f, 23,7426f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x21", "p_uti_cover2x1x", Vector(634,2639f, 99,41155f, 1806,225f), Vector(-60,33696f, 98,28915f, -62,91229f), 1);
	*(&iLocal_7 + 96) = Function_133(StackVal, StackVal, &iLocal_7, "cover1x2x0", "p_uti_cover1x2x", Vector(621,9322f, 97,37455f, 1823,587f), Vector(8,674876f, -9,379588f, -0,5916787f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover2x1x22", "p_uti_cover2x1x", Vector(634,5735f, 97,88709f, 1824,994f), Vector(-23,33749f, -108,0665f, 26,44703f), 1);
	Function_133(StackVal, StackVal, &iLocal_7, "cover1x1x0", "p_uti_cover1x1x", Vector(617,8123f, 99,60641f, 1803,961f), Vector(18,33718f, 51,66286f, 16,92836f), 1);
	return 1;
}

var Function_133(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x9ACF / 39631
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_134() //Position: 0x9AFD / 39677
{
	Function_135();
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_135() //Position: 0x9B16 / 39702
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("blk_cemetary01Props01x");
	Global_39874[23] = 0;
	Global_39874[23].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		Function_83(&(Global_39874[23]), iVar0);
		iVar0++;
	}
	return;
}

void Function_136(char* cParam0) //Position: 0x9B66 / 39782
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

