//Decompiled with MagicRDR v1.0
//Function Count : 96
//Statics Count : 801
//Natives Count : 146
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
	var uLocal_16 = 43;
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
	var uLocal_192 = 5;
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
	var uLocal_226 = 1;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 39;
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
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 12;
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
	int iLocal_798 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_528 = 0;
	Function_95("Initializing ElMataderoTown", 3);
	ALLOW_TUMBLEWEEDS(0);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_529 = 1000;
		switch (iLocal_528)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_528 = 1;
				}
				iLocal_529 = 0;
				break;
			
			case 0x00000001:
				if (Function_94())
				{
					Global_98961 = 0;
					if (Function_90(35, 0) || Function_90(32, 0))
					{
						Function_89(&(Global_12422[112]), 2);
						Function_89(&(Global_12422[12]), 2);
						Function_89(&(Global_12422[22]), 2);
					}
					else
					{
						Function_88(&(Global_12422[112]), 2);
						Function_88(&(Global_12422[12]), 2);
						Function_88(&(Global_12422[22]), 2);
					}
					iLocal_528 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 13, 2);
				}
				iLocal_529 = 0;
				break;
			
			case 0x00000002:
				if (Function_79())
				{
					Function_78(&(Global_43791[iScriptParam_0]), 32);
					iLocal_528 = 3;
				}
				iLocal_529 = 0;
				break;
			
			case 0x00000003:
				uLocal_530 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ElMataderoTownVol", &iScriptParam_0, 2, 0);
				Function_77(&Global_12422, &Global_14880, iScriptParam_0);
				iLocal_528 = 5;
				iLocal_529 = 0;
				break;
			
			case 0x00000005:
				if (Function_76(&Global_12422, &Global_14880, iScriptParam_0))
				{
					iLocal_528 = 4;
					iLocal_529 = 0;
				}
				else
				{
					iLocal_529 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_75(&(Global_43791[iScriptParam_0]), 16) && Function_74(Global_44085[iScriptParam_09]))
				{
					iLocal_528 = 6;
				}
				iLocal_529 = 0;
				break;
			
			case 0x00000006:
				Function_73(StackVal, 1, &uLocal_532, Vector(-362,487f, 17,351f, 3945,686f));
				Function_72(StackVal, 1, &uLocal_532, Vector(-362,487f, 17,351f, 3945,686f));
				Function_71(StackVal, 1, &uLocal_532, Vector(-362,487f, 17,351f, 3945,686f));
				Function_70(StackVal, 1, &uLocal_532, Vector(-362,487f, 17,351f, 3945,686f));
				Function_69(StackVal, 1, &uLocal_532, Vector(-362,487f, 17,351f, 3945,686f));
				Function_68(StackVal, 1, &uLocal_532, Vector(-362,487f, 17,351f, 3945,686f));
				Function_67(1, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 2, &uLocal_532, Vector(-287,557f, 24,147f, 3981,423f));
				Function_72(StackVal, 2, &uLocal_532, Vector(-287,557f, 24,147f, 3981,423f));
				Function_71(StackVal, 2, &uLocal_532, Vector(-287,557f, 24,147f, 3981,423f));
				Function_70(StackVal, 2, &uLocal_532, Vector(-287,557f, 24,147f, 3981,423f));
				Function_69(StackVal, 2, &uLocal_532, Vector(-287,557f, 24,147f, 3981,423f));
				Function_68(StackVal, 2, &uLocal_532, Vector(-287,557f, 24,147f, 3981,423f));
				Function_67(2, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 3, &uLocal_532, Vector(-461,111f, 20,61f, 3915,448f));
				Function_72(StackVal, 3, &uLocal_532, Vector(-498,128f, 17,815f, 3874,257f));
				Function_71(StackVal, 3, &uLocal_532, Vector(-441,189f, 25,867f, 3922,419f));
				Function_70(StackVal, 3, &uLocal_532, Vector(-473,888f, 20,591f, 3910,805f));
				Function_69(StackVal, 3, &uLocal_532, Vector(-477,125f, 20,59f, 3916,037f));
				Function_68(StackVal, 3, &uLocal_532, Vector(-441,189f, 25,867f, 3922,419f));
				Function_67(3, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 4, &uLocal_532, Vector(-473,9f, 20,605f, 3912,723f));
				Function_72(StackVal, 4, &uLocal_532, Vector(-411,211f, 23,888f, 3914,334f));
				Function_71(StackVal, 4, &uLocal_532, Vector(-431,954f, 22,839f, 4002,249f));
				Function_70(StackVal, 4, &uLocal_532, Vector(-441,189f, 25,867f, 3922,419f));
				Function_69(StackVal, 4, &uLocal_532, Vector(-466,945f, 20,586f, 3916,015f));
				Function_68(StackVal, 4, &uLocal_532, Vector(-431,954f, 22,839f, 4002,249f));
				Function_67(4, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 0, &uLocal_532, Vector(-441,189f, 25,867f, 3922,419f));
				Function_72(StackVal, 0, &uLocal_532, Vector(-443,101f, 22,456f, 3919,692f));
				Function_71(StackVal, 0, &uLocal_532, Vector(-439,336f, 22,537f, 3925,833f));
				Function_70(StackVal, 0, &uLocal_532, Vector(-443,101f, 22,456f, 3919,692f));
				Function_69(StackVal, 0, &uLocal_532, Vector(-439,336f, 22,537f, 3925,833f));
				Function_68(StackVal, 0, &uLocal_532, Vector(-439,336f, 22,537f, 3925,833f));
				Function_67(0, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 5, &uLocal_532, Vector(-466,5159f, 21,13641f, 3872,297f));
				Function_72(StackVal, 5, &uLocal_532, Vector(-469,0941f, 21,08241f, 3935,253f));
				Function_71(StackVal, 5, &uLocal_532, Vector(-460,99f, 20,579f, 3918,446f));
				Function_70(StackVal, 5, &uLocal_532, Vector(-469,0941f, 21,08241f, 3935,253f));
				Function_69(StackVal, 5, &uLocal_532, Vector(-459,691f, 21,064f, 3874,933f));
				Function_68(StackVal, 5, &uLocal_532, Vector(-463,847f, 21,16f, 3866,903f));
				Function_67(5, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 6, &uLocal_532, Vector(-478,024f, 20,16f, 3875,573f));
				Function_72(StackVal, 6, &uLocal_532, Vector(-403,488f, 24,17f, 3892,889f));
				Function_71(StackVal, 6, &uLocal_532, Vector(-404,066f, 23,891f, 3885,175f));
				Function_70(StackVal, 6, &uLocal_532, Vector(-403,488f, 24,17f, 3892,889f));
				Function_69(StackVal, 6, &uLocal_532, Vector(-403,488f, 24,17f, 3892,889f));
				Function_68(StackVal, 6, &uLocal_532, Vector(-467,765f, 21,083f, 3875,348f));
				Function_67(6, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 7, &uLocal_532, Vector(-464,043f, 21,082f, 3870,21f));
				Function_72(StackVal, 7, &uLocal_532, Vector(-429,991f, 22,537f, 3933,109f));
				Function_71(StackVal, 7, &uLocal_532, Vector(-401,24f, 24,094f, 3882,343f));
				Function_70(StackVal, 7, &uLocal_532, Vector(-469,479f, 20,586f, 3916,448f));
				Function_69(StackVal, 7, &uLocal_532, Vector(-464,616f, 21,083f, 3871,633f));
				Function_68(StackVal, 7, &uLocal_532, Vector(-460,739f, 21,116f, 3878,095f));
				Function_67(7, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 8, &uLocal_532, Vector(-473,92f, 21,082f, 3945,912f));
				Function_72(StackVal, 8, &uLocal_532, Vector(-473,92f, 21,082f, 3945,912f));
				Function_71(StackVal, 8, &uLocal_532, Vector(-460,99f, 20,579f, 3916,999f));
				Function_70(StackVal, 8, &uLocal_532, Vector(-473,92f, 21,082f, 3945,912f));
				Function_69(StackVal, 8, &uLocal_532, Vector(-466,516f, 21,121f, 3872,297f));
				Function_68(StackVal, 8, &uLocal_532, Vector(-462,927f, 21,106f, 3879,357f));
				Function_67(8, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 9, &uLocal_532, Vector(-417,204f, 24,094f, 3953,031f));
				Function_72(StackVal, 9, &uLocal_532, Vector(-401,222f, 24,1f, 3905,002f));
				Function_71(StackVal, 9, &uLocal_532, Vector(-400,343f, 24,094f, 3886,531f));
				Function_70(StackVal, 9, &uLocal_532, Vector(-401,222f, 24,1f, 3905,002f));
				Function_69(StackVal, 9, &uLocal_532, Vector(-467,765f, 21,083f, 3875,348f));
				Function_68(StackVal, 9, &uLocal_532, Vector(-478,024f, 20,16f, 3875,573f));
				Function_67(9, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 10, &uLocal_532, Vector(-465,4743f, 21,08235f, 3870,993f));
				Function_72(StackVal, 10, &uLocal_532, Vector(-417,204f, 24,094f, 3953,031f));
				Function_71(StackVal, 10, &uLocal_532, Vector(-460,99f, 20,655f, 3915,621f));
				Function_70(StackVal, 10, &uLocal_532, Vector(-417,204f, 24,094f, 3953,031f));
				Function_69(StackVal, 10, &uLocal_532, Vector(-465,474f, 21,082f, 3870,993f));
				Function_68(StackVal, 10, &uLocal_532, Vector(-461,381f, 21,118f, 3864,773f));
				Function_67(10, &uLocal_532, &iLocal_14);
				Function_73(StackVal, 11, &uLocal_532, Vector(-277,782f, 24,835f, 3979,783f));
				Function_72(StackVal, 11, &uLocal_532, Vector(-277,782f, 24,835f, 3979,783f));
				Function_71(StackVal, 11, &uLocal_532, Vector(-277,782f, 24,835f, 3979,783f));
				Function_70(StackVal, 11, &uLocal_532, Vector(-277,782f, 24,835f, 3979,783f));
				Function_69(StackVal, 11, &uLocal_532, Vector(-277,782f, 24,835f, 3979,783f));
				Function_68(StackVal, 11, &uLocal_532, Vector(-277,782f, 24,835f, 3979,783f));
				Function_67(11, &uLocal_532, &iLocal_14);
				Function_63(&Global_12422, &Global_14880, &uLocal_532, &Global_10996, iScriptParam_0);
				if (Function_75(&(Global_43791[iScriptParam_0]), 256) || !Function_62(2))
				{
					iLocal_798 = 1;
				}
				Function_61(&iLocal_14 + 1936, GET_OBJECT_FROM_PERS_CHAR(&Global_14880[73] + 16));
				Function_54(8, &iLocal_14 + 1928, &iLocal_14 + 1856, &iLocal_14 + 1888, Function_60(iScriptParam_0, "elMatadero", "guardHouse01", 2), 0, &iLocal_4 + 32);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "emtv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "emtv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "emtv_players_room"));
				}
				else
				{
					LOG_ERROR("EMT: Cannot find emtv_players_room to restrict players room");
				}
				Function_78(&(Global_43791[iScriptParam_0]), 8);
				if (Function_75(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_53(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_528 = 10;
				}
				else
				{
					iLocal_528 = 7;
				}
				iLocal_529 = 0;
				break;
			
			case 0x00000007:
				switch (Global_46720)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000003:
						break;
				}
				Function_39(StackVal, &Global_98318, 4, Global_46894[0], "$/content/Mexico/Mini_Games/ArmWrestling_ELM/ArmWrestling_ELM", 4294967295, 0, "ElmArmWrestling", 351, Vector(-466,434f, 21,015f, 3882,245f), 2,5f, 0, 0);
				Function_38(&Global_98318, 4, 1);
				Function_37(&Global_98318, 4);
				iLocal_528 = 8;
				iLocal_529 = 0;
				break;
			
			case 0x00000008:
				Function_36(64);
				if (Function_35(iScriptParam_0, &Global_12422, iLocal_798))
				{
					Function_31(0, 0,2f, 3, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_27(2, 4294967295, 4294967295, 0, 3);
					Function_24(&iLocal_4);
				}
				else
				{
					Function_27(1, 10, 6, 9, 3);
					Function_24(&iLocal_4);
					Function_23(&Global_14880[13] + 16, 0);
					Function_23(&Global_14880[23] + 16, 0);
					Function_23(&Global_14880[33] + 16, 0);
					Function_23(&Global_14880[43] + 16, 0);
					Function_23(&Global_14880[03] + 16, 0);
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_31(2, 0,5f, 3, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_31(0, 0,5f, 3, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_31(2, 0,5f, 3, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						}
				}
				Function_78(&(Global_43791[iScriptParam_0]), 512);
				iLocal_528 = 9;
				iLocal_529 = 0;
				break;
			
			case 0x00000009:
				Function_21(&iLocal_4, iScriptParam_0);
				Function_78(&(Global_43791[iScriptParam_0]), 4);
				Function_20("Finished Initializing ElMataderoTown", 5.0f);
				iLocal_528 = 10;
				iLocal_529 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_19(Global_98961, 16))
				{
					if (Function_16(&(Global_46894[0])))
					{
						Function_15(&Global_98961, 16);
					}
				}
				if (Function_75(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_528 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_529);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 12);
	Function_7(&Global_12422, &Global_14880, iScriptParam_0, (iLocal_798 || Global_6623));
	Function_6();
	Function_1();
	Function_53(&(Global_43791[iScriptParam_0]), 32);
	Function_53(&(Global_43791[iScriptParam_0]), 64);
	Function_53(&(Global_43791[iScriptParam_0]), 8);
	Function_53(&(Global_43791[iScriptParam_0]), 512);
	Function_53(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_530))
	{
		TERMINATE_SCRIPT(&uLocal_530);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_20("Unloaded ElMataderoTown", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xE08 / 3592
{
	Function_2(&iLocal_14 + 8);
	RELEASE_LAYOUT_REF(&iLocal_14);
	return;
}

void Function_2(int iParam0) //Position: 0xE1B / 3611
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0xE43 / 3651
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0xF8E / 3982
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0xFAB / 4011
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0xFC9 / 4041
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_7(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xFD5 / 4053
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
	strcpy(&cVar0, Function_13(bParam2), 64);
	if (Function_12())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_75(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_53(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_11(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_11(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_89(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_11(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_89(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_75(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_62(2) || Function_75(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_11(&(Param0[iVar162]), 2) && !Function_11(&(Param0[iVar162]), 4))
		{
			Function_8(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_11(&(Param0[iVar162]), 2) && !Function_11(&(Param0[iVar162]), 4))
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
			Function_78(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_8(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x11F3 / 4595
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_88(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_10(Global_43790), Function_9(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_11(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_11(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_88(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_10(Global_43790), Function_9(Global_43790), false, 0);
	}
}

int Function_9(int iParam0) //Position: 0x1359 / 4953
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

int Function_10(int iParam0) //Position: 0x1384 / 4996
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

bool Function_11(int iParam0, int iParam1) //Position: 0x13B8 / 5048
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_12() //Position: 0x13D5 / 5077
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_13(int iParam0) //Position: 0x13F0 / 5104
{
	if (!Function_14(iParam0))
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

bool Function_14(int iParam0) //Position: 0x189E / 6302
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_15(var uParam0, int iParam1) //Position: 0x18B4 / 6324
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(var uParam0) //Position: 0x18C5 / 6341
{
	int iVar0;
	
	Function_18(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_18(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_17(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_17(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

struct<8> Function_17(int iParam0) //Position: 0x19C8 / 6600
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,656f, 16,56962f, 3948,088f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,743f, 43,17878f, 3720,288f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,16f, 20,97986f, 3881,796f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,9332f, 85,11941f, 2118,893f);
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_18(int iParam0) //Position: 0x1A7C / 6780
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,104f, 16,52992f, 3948,271f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,721f, 43,17878f, 3720,842f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,5623f, 20,97986f, 3882,657f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,932f, 85,11941f, 2119,438f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_19(var uParam0, int iParam1) //Position: 0x1B2C / 6956
{
	return (uParam0 && iParam1) == 0;
}

void Function_20(char* cParam0) //Position: 0x1B39 / 6969
{
	if (!Function_62(128))
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

void Function_21(int iParam0, bool bParam1) //Position: 0x1B79 / 7033
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
		Function_22(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1C69 / 7273
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_23(int iParam0, int iParam1) //Position: 0x1C76 / 7286
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

void Function_24(int iParam0) //Position: 0x1D01 / 7425
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_26(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_25(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_25(var uParam0) //Position: 0x1DFD / 7677
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_26() //Position: 0x1E1A / 7706
{
	int iVar0;
	
	return &iVar0;
}

void Function_27(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1E23 / 7715
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
		Function_28();
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

void Function_28() //Position: 0x1F11 / 7953
{
	int iVar0;
	
	Global_41176 = Function_29(StackVal);
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

int Function_29(int iParam0) //Position: 0x1F5F / 8031
{
	if (!Function_30(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_30(bool bParam0) //Position: 0x1F77 / 8055
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x1F8C / 8076
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
		Function_34();
	}
	if (&bParam5)
	{
		Function_32(1048576);
	}
}

void Function_32(int iParam0) //Position: 0x209A / 8346
{
	Function_33(&Global_43580, iParam0);
	return;
}

void Function_33(var uParam0, var uParam1) //Position: 0x20A8 / 8360
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_34() //Position: 0x20C7 / 8391
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_32(16384);
	}
	return;
}

bool Function_35(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x20E3 / 8419
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_75(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_90(49, 0))
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

void Function_36(int iParam0) //Position: 0x21A1 / 8609
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_37(struct<28>[] Param0, int iParam1) //Position: 0x21B4 / 8628
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_38(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x21D1 / 8657
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_39(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x21F8 / 8696
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
	Param0[iParam128].f_4 = Function_48(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_47(iParam1))
	{
		Function_40(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_40(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x2361 / 9057
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_46(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_45(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_44(StackVal, Param2);
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
		Function_43(uVar3);
		Var6 = Function_43(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_43(StackVal);
				Var4 = Function_43(StackVal);
				if (Function_42(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_41(iParam1), 0.0f, 2, iVar2);
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
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), 1);
		return iVar1;
	}
	return 0;
}

int Function_41(int iParam0) //Position: 0x254A / 9546
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

bool Function_42(struct<2> Param0, struct<2> Param2) //Position: 0x2681 / 9857
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_43(int iParam0) //Position: 0x26AD / 9901
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

var Function_44(vector3 vParam0) //Position: 0x2704 / 9988
{
	bool bVar0;
	
	bVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
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

int Function_45(int iParam0) //Position: 0x2752 / 10066
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

bool Function_46(vector3 vParam0) //Position: 0x280A / 10250
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_47(int iParam0) //Position: 0x2822 / 10274
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_48(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2845 / 10309
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_52(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_49(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_49(bParam0, bParam1, bParam2, 4294967295);
}

int Function_49(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x28A3 / 10403
{
	var uVar0;
	
	if (!Function_51(bParam2))
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
	uVar0 = Function_52(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_50(uVar0);
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

var Function_50(int iParam0) //Position: 0x2A07 / 10759
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

bool Function_51(int iParam0) //Position: 0x2A45 / 10821
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_52(int iParam0, int iParam1, int iParam2) //Position: 0x2A5A / 10842
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_53(var uParam0, int iParam1) //Position: 0x2A7A / 10874
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x2A94 / 10900
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_59(&uParam1, &uParam2);
	if (!Function_58(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_57(&uParam4, 0);
		}
		else
		{
			Function_56(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_57(&iParam5, 0);
		}
		else
		{
			Function_56(&iParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		*(&Global_26200[iParam014] + 104) = &uParam1;
		if (Global_26200[iParam014].f_40 != 3 || !Global_6606)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), true);
			DECOR_SET_BOOL(&uParam1, "SavingAtBedAllowed", 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_55(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_55(&(uVar2[1]), "UseCase1"));
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
			DECOR_SET_BOOL(&iParam6, "PlayerHouse_NoHorse", 1);
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

var Function_55(var uParam0, int iParam1) //Position: 0x2E64 / 11876
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_56(var uParam0, int iParam1) //Position: 0x2E73 / 11891
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

void Function_57(var uParam0, int iParam1) //Position: 0x2ECE / 11982
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

bool Function_58(int iParam0) //Position: 0x2F26 / 12070
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_59(var uParam0, int iParam1) //Position: 0x2F3C / 12092
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

var Function_60(int iParam0, char* cParam1, bool bParam3) //Position: 0x309A / 12442
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_14(iParam0))
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

void Function_61(var uParam0, int iParam1) //Position: 0x313F / 12607
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)), &iParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_62(int iParam0) //Position: 0x318C / 12684
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_63(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x31A8 / 12712
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_62(2))
	{
		return;
	}
	if (Function_75(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_11(&(Param0[iVar02]), 2))
		{
			if (Function_64(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_53(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_78(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_64(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x3260 / 12896
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_75(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_11(&iParam0, 2))
	{
		return 1;
	}
	if (Function_11(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, 0))
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
		(&iParam1 + 16) = Function_66(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_46(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_89(&iParam0, 4);
	}
	Function_65(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_65(int iParam0, struct<2> Param1) //Position: 0x33E1 / 13281
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_46(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_46(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_46(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_46(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_46(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_46(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_66(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x3527 / 13607
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_26(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_67(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x364E / 13902
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

void Function_68(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x36AD / 13997
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_42(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_69(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3714 / 14100
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_42(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_70(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x377D / 14205
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_42(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_71(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x37E8 / 14312
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_42(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_72(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x384E / 14414
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_42(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_73(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x38B7 / 14519
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_42(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_74(int iParam0) //Position: 0x391B / 14619
{
	if (!Function_14(iParam0))
	{
		return 1;
	}
	return Function_75(&(Global_43791[iParam0]), 4);
}

bool Function_75(var uParam0, int iParam1) //Position: 0x3937 / 14647
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_76(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3954 / 14676
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_14(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_13(iParam2), 64);
	if (Function_12())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_75(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_11(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_11(&(Param0[iVar02]), 8))
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

void Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3A3D / 14909
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_14(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_13(iParam2), 64);
	if (Function_12())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_75(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_78(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_88(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_88(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x3B2D / 15149
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_79() //Position: 0x3B3E / 15166
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
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	
	Function_87(3, 3);
	uVar0 = &uVar0;
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_sweeping_w_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/arm_wrestling_spectate", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_embroidery_e_any", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/opium_pipe", 1, 0);
	Function_85(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	if (!Function_80(&iLocal_14 + 8))
	{
		return 0;
	}
	iLocal_14 = FIND_NAMED_LAYOUT("ElMataderoTown_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_14))
	{
		iLocal_14 = CREATE_LAYOUT("ElMataderoTown_layout");
	}
	*(&iLocal_14 + 704) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", &iLocal_14, 8, 0);
	*(&iLocal_14 + 712[03]) = Vector(-408,4076f, 24,09405f, 3902,813f);
	*(&iLocal_14 + 712[03] + 12) = Vector(0.0f, 62,73736f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag4", Vector(-408,4076f, 24,09405f, 3902,813f), Vector(0.0f, 62,73736f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_14 + 704);
	*(&iLocal_14 + 712[13]) = Vector(-405,706f, 24,20465f, 3894,258f);
	*(&iLocal_14 + 712[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag1", Vector(-405,706f, 24,20465f, 3894,258f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_14 + 704);
	*(&iLocal_14 + 712[23]) = Vector(-398,8264f, 24,16975f, 3897,753f);
	*(&iLocal_14 + 712[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag2", Vector(-398,8264f, 24,16975f, 3897,753f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_14 + 704);
	*(&iLocal_14 + 712[33]) = Vector(-403,735f, 24,11477f, 3909,121f);
	*(&iLocal_14 + 712[33] + 12) = Vector(0.0f, -145,8065f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag3", Vector(-403,735f, 24,11477f, 3909,121f), Vector(0.0f, -145,8065f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "PourBucket");
	DECOR_SET_STRING(&uVar4, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_14 + 704);
	*(&iLocal_14 + 712[43]) = Vector(-411,6289f, 24,19822f, 3906,596f);
	*(&iLocal_14 + 712[43] + 12) = Vector(0.0f, 2,68055f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag49", Vector(-411,6289f, 24,19822f, 3906,596f), Vector(0.0f, 2,68055f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_14 + 704);
	*(&iLocal_14 + 840) = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", &iLocal_14, 8, 0);
	*(&iLocal_14 + 848[03]) = Vector(-474,6493f, 21,02119f, 3957,953f);
	*(&iLocal_14 + 848[03] + 12) = Vector(0.0f, 86,42764f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag5", Vector(-474,6493f, 21,02119f, 3957,953f), Vector(0.0f, 86,42764f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_14 + 840);
	*(&iLocal_14 + 880) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_14, 8, 0);
	*(&iLocal_14 + 888[03]) = Vector(-436,4912f, 22,52994f, 3934,01f);
	*(&iLocal_14 + 888[03] + 12) = Vector(0.0f, 59,98388f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag11", Vector(-436,4912f, 22,52994f, 3934,01f), Vector(0.0f, 59,98388f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_14 + 880);
	*(&iLocal_14 + 888[13]) = Vector(-434,7257f, 22,52994f, 3932,884f);
	*(&iLocal_14 + 888[13] + 12) = Vector(0.0f, 42,98274f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag6", Vector(-434,7257f, 22,52994f, 3932,884f), Vector(0.0f, 42,98274f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_14 + 880);
	*(&iLocal_14 + 888[23]) = Vector(-434,3143f, 22,52994f, 3935,279f);
	*(&iLocal_14 + 888[23] + 12) = Vector(0.0f, 76,38705f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag7", Vector(-434,3143f, 22,52994f, 3935,279f), Vector(0.0f, 76,38705f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_14 + 880);
	*(&iLocal_14 + 888[33]) = Vector(-431,5023f, 22,52994f, 3935,137f);
	*(&iLocal_14 + 888[33] + 12) = Vector(0.0f, 109,1505f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag8", Vector(-431,5023f, 22,52994f, 3935,137f), Vector(0.0f, 109,1505f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_14 + 880);
	*(&iLocal_14 + 888[43]) = Vector(-432,6459f, 22,52994f, 3932,889f);
	*(&iLocal_14 + 888[43] + 12) = Vector(0.0f, -262,4891f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag9", Vector(-432,6459f, 22,52994f, 3932,889f), Vector(0.0f, -262,4891f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_14 + 880);
	*(&iLocal_14 + 888[53]) = Vector(-433,4839f, 22,52994f, 3932,072f);
	*(&iLocal_14 + 888[53] + 12) = Vector(0.0f, 98,61428f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag10", Vector(-433,4839f, 22,52994f, 3932,072f), Vector(0.0f, 98,61428f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_14 + 880);
	*(&iLocal_14 + 888[63]) = Vector(-431,3317f, 22,53819f, 3929,571f);
	*(&iLocal_14 + 888[63] + 12) = Vector(0.0f, -159,4279f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag15", Vector(-431,3317f, 22,53819f, 3929,571f), Vector(0.0f, -159,4279f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_14 + 880);
	*(&iLocal_14 + 888[73]) = Vector(-433,157f, 22,53819f, 3930,467f);
	*(&iLocal_14 + 888[73] + 12) = Vector(0.0f, -216,3448f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag12", Vector(-433,157f, 22,53819f, 3930,467f), Vector(0.0f, -216,3448f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_14 + 880);
	*(&iLocal_14 + 888[83]) = Vector(-435,6472f, 22,53819f, 3930,552f);
	*(&iLocal_14 + 888[83] + 12) = Vector(0.0f, 24,22374f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag13", Vector(-435,6472f, 22,53819f, 3930,552f), Vector(0.0f, 24,22374f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_14 + 880);
	*(&iLocal_14 + 888[93]) = Vector(-434,3728f, 22,53819f, 3929,035f);
	*(&iLocal_14 + 888[93] + 12) = Vector(0.0f, -239,1948f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag14", Vector(-434,3728f, 22,53819f, 3929,035f), Vector(0.0f, -239,1948f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_14 + 880);
	*(&iLocal_14 + 888[103]) = Vector(-438,438f, 22,08627f, 3922,438f);
	*(&iLocal_14 + 888[103] + 12) = Vector(0.0f, 145,4143f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag16", Vector(-438,438f, 22,08627f, 3922,438f), Vector(0.0f, 145,4143f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_14 + 880);
	*(&iLocal_14 + 888[113]) = Vector(-437,2068f, 22,08627f, 3923,69f);
	*(&iLocal_14 + 888[113] + 12) = Vector(0.0f, 145,4143f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag17", Vector(-437,2068f, 22,08627f, 3923,69f), Vector(0.0f, 145,4143f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_14 + 880);
	*(&iLocal_14 + 888[123]) = Vector(-435,8471f, 22,08627f, 3923,209f);
	*(&iLocal_14 + 888[123] + 12) = Vector(0.0f, 145,4143f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag18", Vector(-435,8471f, 22,08627f, 3923,209f), Vector(0.0f, 145,4143f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_14 + 880);
	*(&iLocal_14 + 888[133]) = Vector(-434,7333f, 22,08627f, 3924,163f);
	*(&iLocal_14 + 888[133] + 12) = Vector(0.0f, 159,9366f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag19", Vector(-434,7333f, 22,08627f, 3924,163f), Vector(0.0f, 159,9366f, 0.0f));
	DECOR_SET_STRING(&uVar20, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_14 + 880);
	*(&iLocal_14 + 888[143]) = Vector(-434,7455f, 22,08627f, 3925,752f);
	*(&iLocal_14 + 888[143] + 12) = Vector(0.0f, 225,762f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag20", Vector(-434,7455f, 22,08627f, 3925,752f), Vector(0.0f, 225,762f, 0.0f));
	DECOR_SET_STRING(&uVar21, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_14 + 880);
	*(&iLocal_14 + 888[153]) = Vector(-432,8912f, 22,08627f, 3924,749f);
	*(&iLocal_14 + 888[153] + 12) = Vector(0.0f, 328,6054f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag21", Vector(-432,8912f, 22,08627f, 3924,749f), Vector(0.0f, 328,6054f, 0.0f));
	DECOR_SET_STRING(&uVar22, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_14 + 880);
	*(&iLocal_14 + 888[163]) = Vector(-438,438f, 22,08627f, 3926,487f);
	*(&iLocal_14 + 888[163] + 12) = Vector(0.0f, 227,2345f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag22", Vector(-438,438f, 22,08627f, 3926,487f), Vector(0.0f, 227,2345f, 0.0f));
	DECOR_SET_STRING(&uVar23, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_14 + 880);
	*(&iLocal_14 + 888[173]) = Vector(-441,4936f, 22,08627f, 3927,554f);
	*(&iLocal_14 + 888[173] + 12) = Vector(0.0f, 276,0832f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag23", Vector(-441,4936f, 22,08627f, 3927,554f), Vector(0.0f, 276,0832f, 0.0f));
	DECOR_SET_STRING(&uVar24, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_14 + 880);
	*(&iLocal_14 + 888[183]) = Vector(-439,0841f, 22,08627f, 3927,993f);
	*(&iLocal_14 + 888[183] + 12) = Vector(0.0f, 227,2345f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag24", Vector(-439,0841f, 22,08627f, 3927,993f), Vector(0.0f, 227,2345f, 0.0f));
	DECOR_SET_STRING(&uVar25, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_14 + 880);
	*(&iLocal_14 + 888[193]) = Vector(-438,7991f, 22,08627f, 3929,552f);
	*(&iLocal_14 + 888[193] + 12) = Vector(0.0f, 189,9922f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag25", Vector(-438,7991f, 22,08627f, 3929,552f), Vector(0.0f, 189,9922f, 0.0f));
	DECOR_SET_STRING(&uVar26, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_14 + 880);
	*(&iLocal_14 + 888[203]) = Vector(-439,5444f, 22,08627f, 3930,911f);
	*(&iLocal_14 + 888[203] + 12) = Vector(0.0f, 149,0608f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag26", Vector(-439,5444f, 22,08627f, 3930,911f), Vector(0.0f, 149,0608f, 0.0f));
	DECOR_SET_STRING(&uVar27, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_14 + 880);
	*(&iLocal_14 + 888[213]) = Vector(-441,7916f, 22,08627f, 3929,715f);
	*(&iLocal_14 + 888[213] + 12) = Vector(0.0f, 219,0145f, 0.0f);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag27", Vector(-441,7916f, 22,08627f, 3929,715f), Vector(0.0f, 219,0145f, 0.0f));
	DECOR_SET_STRING(&uVar28, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_14 + 880);
	*(&iLocal_14 + 888[223]) = Vector(-474,1854f, 20,58473f, 3911,659f);
	*(&iLocal_14 + 888[223] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag45", Vector(-474,1854f, 20,58473f, 3911,659f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar29, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_14 + 880);
	*(&iLocal_14 + 888[233]) = Vector(-472,936f, 20,58473f, 3911,659f);
	*(&iLocal_14 + 888[233] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag29", Vector(-472,936f, 20,58473f, 3911,659f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar30, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_14 + 880);
	*(&iLocal_14 + 888[243]) = Vector(-472,0462f, 20,58473f, 3910,823f);
	*(&iLocal_14 + 888[243] + 12) = Vector(0.0f, -68,97984f, 0.0f);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag30", Vector(-472,0462f, 20,58473f, 3910,823f), Vector(0.0f, -68,97984f, 0.0f));
	DECOR_SET_STRING(&uVar31, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_14 + 880);
	*(&iLocal_14 + 888[253]) = Vector(-471,1407f, 20,58473f, 3911,659f);
	*(&iLocal_14 + 888[253] + 12) = Vector(0.0f, -32,56598f, 0.0f);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag31", Vector(-471,1407f, 20,58473f, 3911,659f), Vector(0.0f, -32,56598f, 0.0f));
	DECOR_SET_STRING(&uVar32, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_14 + 880);
	*(&iLocal_14 + 888[263]) = Vector(-469,5037f, 20,58473f, 3911,327f);
	*(&iLocal_14 + 888[263] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag32", Vector(-469,5037f, 20,58473f, 3911,327f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar33, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_14 + 880);
	*(&iLocal_14 + 888[273]) = Vector(-470,9852f, 20,58473f, 3913,397f);
	*(&iLocal_14 + 888[273] + 12) = Vector(0.0f, -64,76234f, 0.0f);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag33", Vector(-470,9852f, 20,58473f, 3913,397f), Vector(0.0f, -64,76234f, 0.0f));
	DECOR_SET_STRING(&uVar34, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_14 + 880);
	*(&iLocal_14 + 888[283]) = Vector(-464,5076f, 20,425f, 3918,978f);
	*(&iLocal_14 + 888[283] + 12) = Vector(0.0f, -216,7657f, 0.0f);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag34", Vector(-464,5076f, 20,425f, 3918,978f), Vector(0.0f, -216,7657f, 0.0f));
	DECOR_SET_STRING(&uVar35, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_14 + 880);
	*(&iLocal_14 + 888[293]) = Vector(-466,8747f, 20,425f, 3918,306f);
	*(&iLocal_14 + 888[293] + 12) = Vector(0.0f, -227,7739f, 0.0f);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag35", Vector(-466,8747f, 20,425f, 3918,306f), Vector(0.0f, -227,7739f, 0.0f));
	DECOR_SET_STRING(&uVar36, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_14 + 880);
	*(&iLocal_14 + 888[303]) = Vector(-468,9477f, 20,425f, 3916,851f);
	*(&iLocal_14 + 888[303] + 12) = Vector(0.0f, -179,1256f, 0.0f);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag36", Vector(-468,9477f, 20,425f, 3916,851f), Vector(0.0f, -179,1256f, 0.0f));
	DECOR_SET_STRING(&uVar37, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &iLocal_14 + 880);
	*(&iLocal_14 + 888[313]) = Vector(-471,7246f, 20,425f, 3916,817f);
	*(&iLocal_14 + 888[313] + 12) = Vector(0.0f, -177,5444f, 0.0f);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag37", Vector(-471,7246f, 20,425f, 3916,817f), Vector(0.0f, -177,5444f, 0.0f));
	DECOR_SET_STRING(&uVar38, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &iLocal_14 + 880);
	*(&iLocal_14 + 888[323]) = Vector(-474,2186f, 20,425f, 3916,946f);
	*(&iLocal_14 + 888[323] + 12) = Vector(0.0f, -192,6765f, 0.0f);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag38", Vector(-474,2186f, 20,425f, 3916,946f), Vector(0.0f, -192,6765f, 0.0f));
	DECOR_SET_STRING(&uVar39, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &iLocal_14 + 880);
	*(&iLocal_14 + 888[333]) = Vector(-464,3194f, 20,57385f, 3916,428f);
	*(&iLocal_14 + 888[333] + 12) = Vector(0.0f, 108,2416f, 0.0f);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag39", Vector(-464,3194f, 20,57385f, 3916,428f), Vector(0.0f, 108,2416f, 0.0f));
	DECOR_SET_STRING(&uVar40, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &iLocal_14 + 880);
	*(&iLocal_14 + 888[343]) = Vector(-465,3709f, 20,57385f, 3914,805f);
	*(&iLocal_14 + 888[343] + 12) = Vector(0.0f, 93,70631f, 0.0f);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag40", Vector(-465,3709f, 20,57385f, 3914,805f), Vector(0.0f, 93,70631f, 0.0f));
	DECOR_SET_STRING(&uVar41, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &iLocal_14 + 880);
	*(&iLocal_14 + 888[353]) = Vector(-466,8551f, 20,57385f, 3913,507f);
	*(&iLocal_14 + 888[353] + 12) = Vector(0.0f, 31,02789f, 0.0f);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag41", Vector(-466,8551f, 20,57385f, 3913,507f), Vector(0.0f, 31,02789f, 0.0f));
	DECOR_SET_STRING(&uVar42, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &iLocal_14 + 880);
	*(&iLocal_14 + 888[363]) = Vector(-465,9915f, 20,57385f, 3911,845f);
	*(&iLocal_14 + 888[363] + 12) = Vector(0.0f, -28,50266f, 0.0f);
	uVar43 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag42", Vector(-465,9915f, 20,57385f, 3911,845f), Vector(0.0f, -28,50266f, 0.0f));
	DECOR_SET_STRING(&uVar43, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar43, &iLocal_14 + 880);
	*(&iLocal_14 + 888[373]) = Vector(-464,3194f, 20,57385f, 3913,929f);
	*(&iLocal_14 + 888[373] + 12) = Vector(0.0f, -57,50648f, 0.0f);
	uVar44 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag43", Vector(-464,3194f, 20,57385f, 3913,929f), Vector(0.0f, -57,50648f, 0.0f));
	DECOR_SET_STRING(&uVar44, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar44, &iLocal_14 + 880);
	*(&iLocal_14 + 888[383]) = Vector(-429,991f, 22,53679f, 3933,109f);
	*(&iLocal_14 + 888[383] + 12) = Vector(0.0f, -92,99655f, 0.0f);
	uVar45 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag44", Vector(-429,991f, 22,53679f, 3933,109f), Vector(0.0f, -92,99655f, 0.0f));
	DECOR_SET_STRING(&uVar45, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar45, &iLocal_14 + 880);
	*(&iLocal_14 + 1832) = Vector(-434,7641f, 22,53568f, 3929,63f);
	*(&iLocal_14 + 1832 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_14 + 1856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_save_flag_ELM", Vector(-434,7641f, 22,53568f, 3929,63f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_14 + 1864) = Vector(-434,6205f, 22,53568f, 3926,551f);
	*(&iLocal_14 + 1864 + 12) = Vector(0.0f, 176,1026f, 0.0f);
	*(&iLocal_14 + 1888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_purchase_flag_ELM", Vector(-434,6205f, 22,53568f, 3926,551f), Vector(0.0f, 176,1026f, 0.0f));
	*(&iLocal_14 + 1896) = Vector(-457,1181f, 20,07843f, 3914,354f);
	*(&iLocal_14 + 1896 + 12) = Vector(0.0f, 86,96138f, 0.0f);
	*(&iLocal_14 + 1920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "elmf_report_crime", Vector(-457,1181f, 20,07843f, 3914,354f), Vector(0.0f, 86,96138f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_gateGuards", "mex_gateGuards", Vector(-435,1938f, 22,8392f, 4004,139f), Vector(0.0f, 223,5985f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-431,9537f, 22,83945f, 4002,249f), Vector(0.0f, -147,6463f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn", "smoking_stand_nospawn", Vector(-437,0509f, 22,87443f, 4002,75f), Vector(0.0f, -61,50329f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-413,6794f, 24,16101f, 3908,525f), Vector(0.0f, 151,1745f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand", "smoking_stand", Vector(-407,5995f, 23,92949f, 3914,533f), Vector(0.0f, 113,0202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nlean_rail", "nlean_rail", Vector(-407,937f, 27,63952f, 3908,358f), Vector(0.0f, -26,54954f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand", "rand_idle_stand", Vector(-402,9427f, 27,62066f, 3894,02f), Vector(0.0f, -194,6572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-415,6729f, 24,05288f, 3953,248f), Vector(0.0f, 89,4566f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted1", "sleeping_wall_scripted", Vector(-415,8235f, 24,05288f, 3955,145f), Vector(0.0f, 388,3418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any", "stand_hammerground_w_any", Vector(-412,3169f, 24,1801f, 3910,919f), Vector(0.0f, -118,7025f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-418,1162f, 24,06925f, 3956,482f), Vector(0.0f, -221,5459f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground7", "Rand_Idle_Sit_Ground", Vector(-416,8118f, 24,03449f, 3957,875f), Vector(0.0f, -241,5472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand3", "rand_idle_stand", Vector(-408,7993f, 24,19855f, 3901,185f), Vector(0.0f, -152,4236f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand4", "rand_idle_stand", Vector(-411,149f, 24,21894f, 3904,919f), Vector(0.0f, -105,1341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel11", "repair_kneel", Vector(-403,5339f, 24,12935f, 3899,721f), Vector(0.0f, -28,54338f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-397,0038f, 27,59928f, 3894,388f), Vector(0.0f, 150,5325f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail3", "nlean_rail", Vector(-402,9675f, 27,61284f, 3908,659f), Vector(0.0f, 60,84692f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_sweeping_w_any", "stand_sweeping_w_any", Vector(-403,4877f, 24,16974f, 3892,889f), Vector(0.0f, 126,2229f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_sweeping_w_any1", "stand_sweeping_w_any", Vector(-399,078f, 24,20164f, 3897,604f), Vector(0.0f, 108,3968f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", Vector(-398,632f, 24,08017f, 3905,263f), Vector(0.0f, 242,0227f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted2", "sleeping_scripted", Vector(-463,8466f, 21,16027f, 3866,903f), Vector(0.0f, 90,90612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted3", "sleeping_scripted", Vector(-461,3805f, 21,1178f, 3864,773f), Vector(0.0f, -91,45325f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted4", "sleeping_scripted", Vector(-460,7392f, 21,15327f, 3878,095f), Vector(0.0f, 27,7294f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted5", "sleeping_scripted", Vector(-462,8099f, 21,16234f, 3879,636f), Vector(0.0f, 17,39233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted6", "sleeping_scripted", Vector(-478,0237f, 20,16032f, 3875,573f), Vector(0.0f, 109,5719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted7", "sleeping_scripted", Vector(-478,8122f, 20,2144f, 3873,238f), Vector(0.0f, 117,727f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", Vector(-468,6928f, 21,08234f, 3874,838f), Vector(0.0f, -72,86279f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-461,9886f, 21,08235f, 3871,495f), Vector(0.0f, 128,9996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand11", "smoking_stand", Vector(-459,7873f, 21,08235f, 3868,765f), Vector(0.0f, 158,3456f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke6", "Rand_Idle_Sit_Ground", Vector(-475,7904f, 20,02446f, 3870,787f), Vector(0.0f, -103,2235f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground9", "Rand_Idle_Sit_Ground", Vector(-473,7287f, 20,04757f, 3871,886f), Vector(0.0f, 22,83615f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand12", "smoking_stand", Vector(-474,4712f, 20,07593f, 3870,191f), Vector(0.0f, 173,5909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-461,9249f, 21,08234f, 3874,796f), Vector(0.0f, 57,99604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_no_table1", "sit_no_table", Vector(-464,5575f, 21,11875f, 3874,96f), Vector(0.0f, -21,47618f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand13", "smoking_stand", Vector(-478,0471f, 19,04948f, 3864,682f), Vector(0.0f, 193,1461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke7", "Rand_Idle_Sit_Ground", Vector(-465,4743f, 21,08235f, 3870,993f), Vector(0.0f, -144,8529f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground10", "Rand_Idle_Sit_Ground", Vector(-461,6447f, 21,08479f, 3872,665f), Vector(0.0f, 103,2312f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel12", "repair_kneel", Vector(-408,5577f, 24,21817f, 3900,003f), Vector(0.0f, 62,49356f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee4", "Pee", Vector(-479,3713f, 19,07451f, 3844.0f), Vector(0.0f, 82,74141f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand14", "smoking_stand", Vector(-475,1298f, 20,04757f, 3873,789f), Vector(0.0f, -35,48491f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(-443,723f, 22,50995f, 3925,722f), Vector(0.0f, 138,263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(-411,2111f, 23,88766f, 3914,334f), Vector(0.0f, 110,4233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground11", "Rand_Idle_Sit_Ground", Vector(-399,019f, 24,09411f, 3889,264f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground12", "Rand_Idle_Sit_Ground", Vector(-402,4818f, 24,1368f, 3888,362f), Vector(0.0f, -19,36408f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall6", "Rand_Idle_NearWall", Vector(-406,6981f, 24,13713f, 3887,549f), Vector(0.0f, -28,00024f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted6", "sleeping_wall_scripted", Vector(-404,9822f, 24,13713f, 3887,956f), Vector(0.0f, -28,34296f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand15", "smoking_stand", Vector(-400,4355f, 24,09411f, 3889,668f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-394,4096f, 24,07297f, 3893,431f), Vector(0.0f, 19,70973f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand5", "rand_idle_stand", Vector(-402,0529f, 24,0941f, 3883,043f), Vector(0.0f, -162,1589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground13", "Rand_Idle_Sit_Ground", Vector(-400,3425f, 24,09411f, 3886,531f), Vector(0.0f, 28,64784f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_worried_n_any", "stand_worried_n_any", Vector(-402,9959f, 24,0941f, 3885,893f), Vector(0.0f, -57,87351f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table", "lean_table", Vector(-465,3461f, 20,58005f, 3918,488f), Vector(0.0f, 47,47797f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-467,9691f, 20,5862f, 3916,448f), Vector(0.0f, -108,2921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-474,5353f, 20,58473f, 3918,042f), Vector(0.0f, -87,933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r", "mex_sleepBed_r", Vector(-473,8995f, 20,60549f, 3912,723f), Vector(0.0f, -183,3541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l", "mex_sleepBed_l", Vector(-473,888f, 20,59122f, 3910,805f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l1", "mex_sleepBed_r", Vector(-464,5076f, 20,54162f, 3910,69f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand17", "smoking_stand", Vector(-466,9454f, 20,5862f, 3916,015f), Vector(0.0f, -129,6702f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L", "look_out_window_L", Vector(-463,8401f, 20,587f, 3917,45f), Vector(0.0f, -90,2175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-461,1455f, 20,56938f, 3912,806f), Vector(0.0f, -57,6147f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_cleanpistol1", "sit_cleanpistol", Vector(-461,8852f, 20,65673f, 3916,626f), Vector(0.0f, -93,8183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_cleanrifle", "sit_cleanrifle", Vector(-461,8356f, 20,60959f, 3915,447f), Vector(0.0f, -90,86664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand6", "rand_idle_stand", Vector(-461,2008f, 20,58642f, 3910,469f), Vector(0.0f, 4,161201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", Vector(-462,3168f, 20,60042f, 3909,817f), Vector(0.0f, -90,41282f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L1", "look_out_window_L", Vector(-460,3816f, 20,55018f, 3916,262f), Vector(0.0f, -91,31308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-477,125f, 20,58991f, 3916,037f), Vector(0.0f, 28,43399f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-476,99f, 20,58f, 3918,138f), Vector(0.0f, 84,80421f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs", "look_distance_binocs", Vector(-437,949f, 25,87649f, 3923,236f), Vector(0.0f, 60,73296f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs1", "look_distance_binocs", Vector(-434,2016f, 25,86758f, 3935,712f), Vector(0.0f, -180,4358f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-433,8842f, 25,91981f, 3923,522f), Vector(0.0f, -189,3775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand7", "rand_idle_stand", Vector(-440,5646f, 25,869f, 3927,256f), Vector(0.0f, 78,09951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-429,8883f, 25,86723f, 3930,311f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-434,6213f, 25,86893f, 3927,8f), Vector(0.0f, 44,56473f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L2", "look_out_window_L", Vector(-441,55f, 22,53819f, 3924,719f), Vector(0.0f, 88,05113f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table1", "lean_table", Vector(-439,3358f, 22,53678f, 3925,833f), Vector(0.0f, 56,09112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", Vector(-437,8411f, 22,52402f, 3926,717f), Vector(0.0f, 36,10178f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-436,4721f, 22,53678f, 3925,07f), Vector(0.0f, 69,81035f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_sleep_ELM", "player_sleep_bed_L", Vector(-436,602f, 22,52985f, 3934,668f), Vector(0.0f, -185,6343f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand18", "smoking_stand", Vector(-431,3405f, 22,5426f, 3926,102f), Vector(0.0f, -61,2644f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", Vector(-440,8822f, 22,45596f, 3920,781f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-438,1347f, 22,54466f, 3920,335f), Vector(0.0f, -71,41123f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_cleanrifle1", "sit_cleanrifle", Vector(-437,0813f, 22,50589f, 3920,794f), Vector(0.0f, -2,080508f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_no_table", "sit_no_table", Vector(-435,7766f, 22,57576f, 3920,83f), Vector(0.0f, -2,015504f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R", "look_out_window_R", Vector(-445,3932f, 22,54713f, 3928,49f), Vector(0.0f, 82,9482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_stay", "horse_stay", Vector(-467,244f, 21,04833f, 3938,558f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_stay4", "horse_stay", Vector(-469,9704f, 21,05106f, 3948,496f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_stay5", "horse_stay", Vector(-466,8071f, 21,06896f, 3954,637f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee", "Pee", Vector(-401,2577f, 25,26645f, 3928,959f), Vector(0.0f, -86,67371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel", "repair_kneel", Vector(-401,2176f, 25,09645f, 3923,792f), Vector(0.0f, -46,02734f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall", "stand_hammer_wall", Vector(-413,3299f, 24,092f, 3951,034f), Vector(0.0f, 133,7728f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs2", "look_distance_binocs", Vector(-498,1281f, 17,81501f, 3874,257f), Vector(0.0f, 58,51119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sitGround_beat", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-413,4211f, 24,17999f, 3910,266f), Vector(0.0f, 129,7563f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_no_table2", "sit_no_table", Vector(-466,5159f, 21,12063f, 3872,297f), Vector(0.0f, -103,7906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel13", "repair_kneel", Vector(-475,3041f, 21,08235f, 3937,168f), Vector(0.0f, 91,56857f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel14", "repair_kneel", Vector(-479,8951f, 21,08235f, 3937,116f), Vector(0.0f, -92,6727f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Multistage_bucket", "Multistage_bucket", Vector(-411,6289f, 24,19822f, 3906,596f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_gateGuards1", "mex_gateGuards", Vector(-502,3318f, 17,84166f, 3878,04f), Vector(0.0f, 50,57427f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand8", "rand_idle_stand", Vector(-501,3259f, 18,01188f, 3879,198f), Vector(0.0f, -12,43883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1936) = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Multistage_sweeping", "Multistage_sweeping", Vector(-429,991f, 22,53679f, 3933,109f), Vector(0.0f, -274,4034f, 0.0f)), &iLocal_14 + 1936);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted", "sleeping_scripted", Vector(-479,6891f, 19,17204f, 3862,08f), Vector(0.0f, -158,4256f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs3", "look_distance_binocs", Vector(-376,286f, 22,467f, 3972,388f), Vector(0.0f, -9,655441f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_worried_n_any1", "stand_worried_n_any", Vector(-275,5216f, 25,0269f, 3976,982f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee5", "Pee", Vector(-276,483f, 24,928f, 3981,46f), Vector(0.0f, 120,4665f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(-287,5569f, 24,1473f, 3981,423f), Vector(0.0f, 118,9179f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand9", "rand_idle_stand", Vector(-362,487f, 17,351f, 3945,686f), Vector(0.0f, 47,74981f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Locked_Footlocker", "Locked_Footlocker", Vector(-437,3585f, 22,53668f, 3933,594f), Vector(0.0f, -91,26926f, 0.0f));
	DECOR_SET_BOOL(&iLocal_14 + 1944, "PlayerHouseChest", 1);
	DECOR_SET_BOOL(&iLocal_14 + 1944, "scrap", 1);
	*(&iLocal_14 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "arm_wrestling_spectate", "arm_wrestling_spectate", Vector(-467,4124f, 21,06433f, 3884,092f), Vector(0.0f, -63,10342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1952), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nsit_docks", "nsit_docks", Vector(-445,6615f, 22,54713f, 3927,243f), Vector(0.0f, 88,29755f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nuse_shelf", "nuse_shelf", Vector(-409,9503f, 24,21843f, 3902,549f), Vector(0.0f, 62,11762f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_no_table3", "sit_no_table", Vector(-465,6446f, 21,10207f, 3874,5f), Vector(0.0f, -21,47618f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", Vector(-441,1893f, 25,86723f, 3922,419f), Vector(0.0f, 42,08221f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand19", "smoking_stand", Vector(-288,0259f, 24,15235f, 3983,273f), Vector(0.0f, 72,9556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand20", "smoking_stand", Vector(-288,5877f, 24,16162f, 3979,875f), Vector(0.0f, 137,5141f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_worried_n_any2", "stand_worried_n_any", Vector(-277,7816f, 24,8352f, 3979,783f), Vector(0.0f, 70,03278f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted7", "sleeping_wall_scripted", Vector(-274,0245f, 25,07162f, 3977,017f), Vector(0.0f, 89,39806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer", "kneel_hammer", Vector(-465,3449f, 21,08235f, 3953,501f), Vector(0.0f, 92,04393f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer1", "kneel_hammer", Vector(-465,2764f, 21,08235f, 3947,139f), Vector(0.0f, 92,04393f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_chair_sit", "mex_chair_sit", Vector(-472,8877f, 21,08235f, 3931,455f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_chair_sit1", "mex_chair_sit", Vector(-471,4069f, 21,08235f, 3931,455f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_embroidery_e_any", "sit_embroidery_e_any", Vector(-466,8522f, 21,08235f, 3873,47f), Vector(0.0f, -105,8852f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L3", "look_out_window_L", Vector(-443,1011f, 22,45596f, 3919,692f), Vector(0.0f, 40,18476f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", Vector(-442,2021f, 22,45596f, 3919,447f), Vector(0.0f, 16,45711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any8", "stand_lookdistance_w_any", Vector(-443,8158f, 22,45596f, 3923,268f), Vector(0.0f, 150,4022f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any9", "stand_lookdistance_w_any", Vector(-444,7141f, 22,45596f, 3930,671f), Vector(0.0f, 175,4107f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L4", "look_out_window_L", Vector(-444,8503f, 22,45596f, 3922,369f), Vector(0.0f, 21,9817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand10", "rand_idle_stand", Vector(-443,8512f, 22,45596f, 3920,898f), Vector(0.0f, 59,06887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted8", "sleeping_wall_scripted", Vector(-463,6985f, 21,08303f, 3938,713f), Vector(0.0f, -51,18568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_no_table4", "sit_no_table", Vector(-464,0165f, 21,08235f, 3941,216f), Vector(0.0f, -134,9472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand21", "smoking_stand", Vector(-460,3122f, 20,55018f, 3915,274f), Vector(0.0f, 145,899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand22", "smoking_stand", Vector(-461,9966f, 20,11231f, 3920,32f), Vector(0.0f, -131,3944f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe", "opium_pipe", Vector(-416,3965f, 23,92296f, 3909,515f), Vector(0.0f, 107,7402f, 0.0f));
	*(&iLocal_14 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe1", "opium_pipe", Vector(-409,5733f, 23,93582f, 3917,288f), Vector(0.0f, 54,89847f, 0.0f));
	*(&iLocal_14 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe2", "opium_pipe", Vector(-411,9217f, 24,00797f, 3920,068f), Vector(0.0f, 25,14095f, 0.0f));
	*(&iLocal_14 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe3", "opium_pipe", Vector(-408,3542f, 24,20233f, 3913,024f), Vector(0.0f, 100,9975f, 0.0f));
	*(&iLocal_14 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe4", "opium_pipe", Vector(-405,9211f, 24,09399f, 3907,596f), Vector(0.0f, 100,9975f, 0.0f));
	*(&iLocal_14 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe5", "opium_pipe", Vector(-405,2331f, 24,11477f, 3901,914f), Vector(0.0f, 161,8686f, 0.0f));
	*(&iLocal_14 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe6", "opium_pipe", Vector(-408,5447f, 24,11477f, 3904,249f), Vector(0.0f, 204,8311f, 0.0f));
	*(&iLocal_14 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-459,9282f, 21,08234f, 3875,707f), Vector(0.0f, 79,58956f, 0.0f));
	*(&iLocal_14 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted9", "sleeping_wall_scripted", Vector(-441,0229f, 22,55048f, 3922,865f), Vector(0.0f, -152,785f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand11", "rand_idle_stand", Vector(-362,815f, 17,31245f, 3943,827f), Vector(0.0f, 112,7882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand12", "rand_idle_stand", Vector(-363,3979f, 17,26134f, 3947,141f), Vector(0.0f, 70,61053f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(-465,9765f, 21,06314f, 3884,092f), Vector(0.0f, -9,414042f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand23", "smoking_stand", Vector(-461,2898f, 20,55018f, 3914,359f), Vector(0.0f, 187,4124f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Locked_Footlocker1", "Locked_Footlocker", Vector(-473,8472f, 24,28803f, 3957,105f), Vector(0.0f, -25,96929f, 0.0f));
	DECOR_SET_BOOL(&iLocal_14 + 2040, "PlayerHouseChest", 1);
	DECOR_SET_BOOL(&iLocal_14 + 2040, "scrap", 1);
	*(&iLocal_14 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "opium_pipe7", "opium_pipe", Vector(-404,0657f, 24,09311f, 3885,175f), Vector(0.0f, -84,74769f, 0.0f));
	return 1;
}

bool Function_80(struct<2>[] Param0) //Position: 0x8EA4 / 36516
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_84();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_83(&(Param0[iVar02]), 8);
		}
		else if (Function_82())
		{
			iVar1 = 1;
			Function_83(&(Param0[iVar02]), 8);
		}
		Function_83(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_83(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_83(&(Param0[iVar02]), 2);
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
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_83(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_83(&(Param0[iVar02]), 2);
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
	Function_81();
	return 1;
}

void Function_81() //Position: 0x9266 / 37478
{
	if (!Function_62(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_82() //Position: 0x92A6 / 37542
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

void Function_83(struct<13> Param0) //Position: 0x92D4 / 37588
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_84() //Position: 0x92E7 / 37607
{
	if (!Function_62(128))
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

var Function_85(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x9329 / 37673
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_86(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_83(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_86(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x9367 / 37735
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_83(&(Param0[iVar02]), 4);
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

void Function_87(int iParam0, int iParam1) //Position: 0x9436 / 37942
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

void Function_88(var uParam0, int iParam1) //Position: 0x9480 / 38016
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_89(int iParam0, int iParam1) //Position: 0x9491 / 38033
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

int Function_90(int iParam0, bool bParam1) //Position: 0x94AB / 38059
{
	int iVar0;
	
	iVar0 = Function_92(iParam0);
	if (!Function_91(iVar0))
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

bool Function_91(int iParam0) //Position: 0x94E9 / 38121
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_92(int iParam0) //Position: 0x9500 / 38144
{
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_93(int iParam0) //Position: 0x951A / 38170
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_94() //Position: 0x9530 / 38192
{
	var uVar0;
	
	Function_87(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("ElMataderoTown_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("ElMataderoTown_layout");
	}
	*(&iLocal_4 + 8) = Vector(-445,8579f, 21,47666f, 3923,305f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-445,8579f, 21,47666f, 3923,305f), Vector(0.0f, 0.0f, 0.0f));
	return 1;
}

void Function_95(char* cParam0) //Position: 0x95D7 / 38359
{
	if (!Function_62(128))
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

