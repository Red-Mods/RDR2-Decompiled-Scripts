//Decompiled with MagicRDR v1.0
//Function Count : 95
//Statics Count : 818
//Natives Count : 128
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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 45;
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
	var uLocal_202 = 19;
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
	var uLocal_320 = 1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 1;
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
	int iLocal_366 = 0;
	bool bLocal_367 = false;
	bool bLocal_368 = false;
	int iLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 20;
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
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar1;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_368 = 4294967295;
	iLocal_369 = 0;
	iLocal_815 = 0;
	iLocal_366 = 0;
	Function_94("Initializing LasHermanas", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_367 = 1000;
		switch (iLocal_366)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_366 = 1;
				}
				bLocal_367 = false;
				break;
			
			case 0x00000001:
				Function_93();
				if (Function_93())
				{
					iLocal_366 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					if (Function_89(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
				}
				bLocal_367 = false;
				break;
			
			case 0x00000002:
				if (Function_80())
				{
					Function_79(&(Global_43791[iScriptParam_0]), 32);
					iLocal_366 = 3;
				}
				bLocal_367 = false;
				break;
			
			case 0x00000003:
				uLocal_370 = LAUNCH_NEW_SCRIPT_WITH_ARGS("LasHermanasVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_12150, &Global_14478, iScriptParam_0);
				iLocal_366 = 5;
				bLocal_367 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_12150, &Global_14478, iScriptParam_0))
				{
					iLocal_366 = 4;
					bLocal_367 = false;
				}
				else
				{
					bLocal_367 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_43791[iScriptParam_0]), 16) && Function_75(Global_44085[iScriptParam_09]))
				{
					iLocal_366 = 6;
				}
				bLocal_367 = false;
				break;
			
			case 0x00000006:
				Function_74(StackVal, 0, &uLocal_372, Vector(-1731,975f, 8,031f, 4220,302f));
				Function_73(StackVal, 0, &uLocal_372, Vector(-1714,372f, 11,253f, 4218,281f));
				Function_72(StackVal, 0, &uLocal_372, Vector(-1718,894f, 11,267f, 4211,255f));
				Function_71(StackVal, 0, &uLocal_372, Vector(-1699,738f, 8,706f, 4183,786f));
				Function_70(StackVal, 0, &uLocal_372, Vector(-1718,894f, 11,267f, 4211,255f));
				Function_69(StackVal, 0, &uLocal_372, Vector(-1713,996f, 11,28086f, 4214,523f));
				Function_68(0, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 15, &uLocal_372, Vector(-1691,62f, 8,406471f, 4194,362f));
				Function_73(StackVal, 15, &uLocal_372, Vector(-1683,862f, 11,421f, 4214,699f));
				Function_72(StackVal, 15, &uLocal_372, Vector(-1731,975f, 8,031f, 4220,302f));
				Function_71(StackVal, 15, &uLocal_372, Vector(-1721,173f, 8,083f, 4199,181f));
				Function_70(StackVal, 15, &uLocal_372, Vector(-1723,192f, 11,256f, 4212,918f));
				Function_69(StackVal, 15, &uLocal_372, Vector(-1684,307f, 11,421f, 4223,894f));
				Function_68(15, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 16, &uLocal_372, Vector(-1700,139f, 8,406f, 4186,993f));
				Function_73(StackVal, 16, &uLocal_372, Vector(-1728,461f, 8,079f, 4201,314f));
				Function_72(StackVal, 16, &uLocal_372, Vector(-1722,195f, 8,183f, 4212,391f));
				Function_71(StackVal, 16, &uLocal_372, Vector(-1691,62f, 8,406f, 4194,362f));
				Function_70(StackVal, 16, &uLocal_372, Vector(-1734,719f, 8,279f, 4210,561f));
				Function_69(StackVal, 16, &uLocal_372, Vector(-1684,176f, 11,421f, 4217,864f));
				Function_68(16, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 17, &uLocal_372, Vector(-1717,266f, 8,083f, 4201,051f));
				Function_73(StackVal, 17, &uLocal_372, Vector(-1704,753f, 8,406f, 4192,281f));
				Function_72(StackVal, 17, &uLocal_372, Vector(-1723,282f, 11,332f, 4209,531f));
				Function_71(StackVal, 17, &uLocal_372, Vector(-1683,862f, 11,421f, 4214,699f));
				Function_70(StackVal, 17, &uLocal_372, Vector(-1723,282f, 11,332f, 4209,531f));
				Function_69(StackVal, 17, &uLocal_372, Vector(-1684,335f, 11,421f, 4215,385f));
				Function_68(17, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 18, &uLocal_372, Vector(-1684,335f, 11,421f, 4205,474f));
				Function_73(StackVal, 18, &uLocal_372, Vector(-1734,719f, 8,279f, 4210,561f));
				Function_72(StackVal, 18, &uLocal_372, Vector(-1722,169f, 11,291f, 4213,031f));
				Function_71(StackVal, 18, &uLocal_372, Vector(-1717,201f, 11,332f, 4216,945f));
				Function_70(StackVal, 18, &uLocal_372, Vector(-1717,201f, 11,332f, 4216,945f));
				Function_69(StackVal, 18, &uLocal_372, Vector(-1699,401f, 8,728f, 4183,876f));
				Function_68(18, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 19, &uLocal_372, Vector(-1686,583f, 8,141f, 4245,348f));
				Function_73(StackVal, 19, &uLocal_372, Vector(-1703,762f, 8,071f, 4235,874f));
				Function_72(StackVal, 19, &uLocal_372, Vector(-1683,862f, 11,421f, 4214,699f));
				Function_71(StackVal, 19, &uLocal_372, Vector(-1722,195f, 8,183f, 4212,391f));
				Function_70(StackVal, 19, &uLocal_372, Vector(-1691,62f, 8,406f, 4194,362f));
				Function_69(StackVal, 19, &uLocal_372, Vector(-1683,932f, 11,454f, 4202,743f));
				Function_68(19, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 9, &uLocal_372, Vector(-1726,591f, 8,206f, 4217,448f));
				Function_73(StackVal, 9, &uLocal_372, Vector(-1736,075f, 7,254f, 4200,024f));
				Function_72(StackVal, 9, &uLocal_372, Vector(-1699,866f, 8,388f, 4194,315f));
				Function_71(StackVal, 9, &uLocal_372, Vector(-1736,075f, 7,254f, 4200,024f));
				Function_70(StackVal, 9, &uLocal_372, Vector(-1726,591f, 8,206f, 4217,448f));
				Function_69(StackVal, 9, &uLocal_372, Vector(-1685,366f, 11,454f, 4222,697f));
				Function_68(9, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 10, &uLocal_372, Vector(-1699,866f, 8,388f, 4194,315f));
				Function_73(StackVal, 10, &uLocal_372, Vector(-1686,583f, 8,141f, 4245,348f));
				Function_72(StackVal, 10, &uLocal_372, Vector(-1734,719f, 8,279f, 4210,561f));
				Function_71(StackVal, 10, &uLocal_372, Vector(-1686,583f, 8,141f, 4245,348f));
				Function_70(StackVal, 10, &uLocal_372, Vector(-1722,195f, 8,183f, 4212,391f));
				Function_69(StackVal, 10, &uLocal_372, Vector(-1685,366f, 11,454f, 4216,608f));
				Function_68(10, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 11, &uLocal_372, Vector(-1736,075f, 7,275f, 4200,024f));
				Function_73(StackVal, 11, &uLocal_372, Vector(-1699,866f, 8,388f, 4194,315f));
				Function_72(StackVal, 11, &uLocal_372, Vector(-1736,075f, 7,275f, 4200,024f));
				Function_71(StackVal, 11, &uLocal_372, Vector(-1699,436f, 8,071f, 4232,832f));
				Function_70(StackVal, 11, &uLocal_372, Vector(-1699,866f, 8,388f, 4194,315f));
				Function_69(StackVal, 11, &uLocal_372, Vector(-1685,061f, 11,454f, 4204,198f));
				Function_68(11, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 12, &uLocal_372, Vector(-1685,366f, 11,454f, 4222,697f));
				Function_73(StackVal, 12, &uLocal_372, Vector(-1722,195f, 8,183f, 4212,391f));
				Function_72(StackVal, 12, &uLocal_372, Vector(-1698,7f, 8,406f, 4209,805f));
				Function_71(StackVal, 12, &uLocal_372, Vector(-1686,182f, 8,329f, 4215,932f));
				Function_70(StackVal, 12, &uLocal_372, Vector(-1675,668f, 8,339f, 4215,184f));
				Function_69(StackVal, 12, &uLocal_372, Vector(-1712,958f, 8,106f, 4215,458f));
				Function_68(12, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 13, &uLocal_372, Vector(-1685,366f, 11,454f, 4216,608f));
				Function_73(StackVal, 13, &uLocal_372, Vector(-1698,7f, 8,406f, 4209,805f));
				Function_72(StackVal, 13, &uLocal_372, Vector(-1686,182f, 8,329f, 4215,932f));
				Function_71(StackVal, 13, &uLocal_372, Vector(-1675,668f, 8,339f, 4215,184f));
				Function_70(StackVal, 13, &uLocal_372, Vector(-1712,958f, 8,106f, 4215,458f));
				Function_69(StackVal, 13, &uLocal_372, Vector(-1722,195f, 8,183f, 4212,391f));
				Function_68(13, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 14, &uLocal_372, Vector(-1685,061f, 11,454f, 4204,198f));
				Function_73(StackVal, 14, &uLocal_372, Vector(-1686,182f, 8,329f, 4215,932f));
				Function_72(StackVal, 14, &uLocal_372, Vector(-1675,668f, 8,339f, 4215,184f));
				Function_71(StackVal, 14, &uLocal_372, Vector(-1712,958f, 8,106f, 4215,458f));
				Function_70(StackVal, 14, &uLocal_372, Vector(-1698,7f, 8,406f, 4209,805f));
				Function_69(StackVal, 14, &uLocal_372, Vector(-1686,182f, 8,329f, 4215,932f));
				Function_68(14, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 1, &uLocal_372, Vector(-1703,141f, 8,406472f, 4209,348f));
				Function_73(StackVal, 1, &uLocal_372, Vector(-1708,707f, 8,021f, 4237,89f));
				Function_72(StackVal, 1, &uLocal_372, Vector(-1699,225f, 8,071f, 4243,456f));
				Function_71(StackVal, 1, &uLocal_372, Vector(-1711,017f, 8,085f, 4232.0f));
				Function_70(StackVal, 1, &uLocal_372, Vector(-1683,926f, 11,242f, 4246,735f));
				Function_69(StackVal, 1, &uLocal_372, Vector(-1690,432f, 8,406473f, 4190,056f));
				Function_68(1, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 4, &uLocal_372, Vector(-1683,243f, 11,231f, 4252,623f));
				Function_73(StackVal, 4, &uLocal_372, Vector(-1720,753f, 8,022f, 4245,132f));
				Function_72(StackVal, 4, &uLocal_372, Vector(-1728,772f, 11,26f, 4186,611f));
				Function_71(StackVal, 4, &uLocal_372, Vector(-1707,737f, 8,042f, 4249,17f));
				Function_70(StackVal, 4, &uLocal_372, Vector(-1728,772f, 11,26f, 4186,611f));
				Function_69(StackVal, 4, &uLocal_372, Vector(-1684,594f, 8,329f, 4207,049f));
				Function_68(4, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 5, &uLocal_372, Vector(-1684,594f, 8,329f, 4207,049f));
				Function_73(StackVal, 5, &uLocal_372, Vector(-1713,185f, 8,031f, 4247,38f));
				Function_72(StackVal, 5, &uLocal_372, Vector(-1740,639f, 7,3f, 4205,736f));
				Function_71(StackVal, 5, &uLocal_372, Vector(-1713,185f, 8,031f, 4247,38f));
				Function_70(StackVal, 5, &uLocal_372, Vector(-1701,945f, 8,4f, 4198,533f));
				Function_69(StackVal, 5, &uLocal_372, Vector(-1683,243f, 11,231f, 4252,623f));
				Function_68(5, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 6, &uLocal_372, Vector(-1721,846f, 11,286f, 4250,997f));
				Function_73(StackVal, 6, &uLocal_372, Vector(-1711,494f, 8,032f, 4234,503f));
				Function_72(StackVal, 6, &uLocal_372, Vector(-1702,475f, 8,093f, 4234,368f));
				Function_71(StackVal, 6, &uLocal_372, Vector(-1711,494f, 8,032f, 4234,503f));
				Function_70(StackVal, 6, &uLocal_372, Vector(-1697,923f, 8,402f, 4196,733f));
				Function_69(StackVal, 6, &uLocal_372, Vector(-1676,408f, 8,339f, 4206,9f));
				Function_68(6, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 7, &uLocal_372, Vector(-1676,408f, 8,339f, 4206,9f));
				Function_73(StackVal, 7, &uLocal_372, Vector(-1717,216f, 11,575f, 4239,32f));
				Function_72(StackVal, 7, &uLocal_372, Vector(-1720,624f, 11,304f, 4217,61f));
				Function_71(StackVal, 7, &uLocal_372, Vector(-1717,216f, 11,575f, 4239,32f));
				Function_70(StackVal, 7, &uLocal_372, Vector(-1720,624f, 11,304f, 4217,61f));
				Function_69(StackVal, 7, &uLocal_372, Vector(-1721,846f, 11,286f, 4250,997f));
				Function_68(7, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 2, &uLocal_372, Vector(-1719,925f, 8,096f, 4230,973f));
				Function_73(StackVal, 2, &uLocal_372, Vector(-1719,925f, 8,096f, 4230,973f));
				Function_72(StackVal, 2, &uLocal_372, Vector(-1731,209f, 11,242f, 4186,966f));
				Function_71(StackVal, 2, &uLocal_372, Vector(-1719,925f, 8,096f, 4230,973f));
				Function_70(StackVal, 2, &uLocal_372, Vector(-1731,209f, 11,242f, 4186,966f));
				Function_69(StackVal, 2, &uLocal_372, Vector(-1676,393f, 8,336f, 4216,602f));
				Function_68(2, &uLocal_372, &iLocal_16);
				Function_74(StackVal, 8, &uLocal_372, Vector(-1666,297f, 8,389f, 4289,555f));
				Function_73(StackVal, 8, &uLocal_372, Vector(-1666,297f, 8,389f, 4289,555f));
				Function_72(StackVal, 8, &uLocal_372, Vector(-1666,297f, 8,389f, 4289,555f));
				Function_71(StackVal, 8, &uLocal_372, Vector(-1666,297f, 8,389f, 4289,555f));
				Function_70(StackVal, 8, &uLocal_372, Vector(-1701,277f, 8,071f, 4240,814f));
				Function_69(StackVal, 8, &uLocal_372, Vector(-1676,393f, 8,336f, 4222,548f));
				Function_68(8, &uLocal_372, &iLocal_16);
				Function_64(&Global_12150, &Global_14478, &uLocal_372, &Global_10996, iScriptParam_0);
				if (Function_76(&(Global_43791[iScriptParam_0]), 256) || !Function_63(2))
				{
					iLocal_814 = 1;
				}
				Function_62(&iLocal_16 + 1352, GET_OBJECT_FROM_PERS_CHAR(&Global_14478[13] + 16));
				Function_62(&iLocal_16 + 1368, GET_OBJECT_FROM_PERS_CHAR(&Global_14478[33] + 16));
				Function_62(&iLocal_16 + 1360, GET_OBJECT_FROM_PERS_CHAR(&Global_14478[73] + 16));
				Function_79(&(Global_43791[iScriptParam_0]), 8);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_61(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_366 = 10;
				}
				else
				{
					iLocal_366 = 7;
				}
				bLocal_367 = false;
				break;
			
			case 0x00000007:
				Function_60(&Global_98318, 5);
				Function_53(iScriptParam_0);
				Function_39(StackVal, &Global_98318, 5, Global_46866[1], "$/content/Mexico/Mini_Games/HorseShoes_LSH/HorseShoes_LSH", 4294967295, 0, "LshHorseshoes", 350, Vector(-1716,808f, 8,031f, 4258,536f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "lshv_horseshoepit"));
				iLocal_366 = 8;
				bLocal_367 = false;
				break;
			
			case 0x00000008:
				Function_38(64);
				if (Function_37(iScriptParam_0, &Global_12150, iLocal_814))
				{
					Function_33(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_29(2, 4294967295, 4294967295, 0, 3);
					Function_26(&iLocal_4);
				}
				else
				{
					Function_29(1, 10, 6, 8, 5);
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_33(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_33(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_33(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
					}
					Function_26(&iLocal_4);
				}
				Function_79(&(Global_43791[iScriptParam_0]), 512);
				iLocal_366 = 9;
				bLocal_367 = false;
				break;
			
			case 0x00000009:
				Function_24(&iLocal_4, iScriptParam_0);
				Function_79(&(Global_43791[iScriptParam_0]), 4);
				Function_23("Finished Initializing LasHermanas", 5.0f);
				iLocal_366 = 10;
				bLocal_367 = false;
				break;
			
			case 0x0000000A:
				if (!Function_21())
				{
					if (bLocal_368 < 0 && iLocal_369 >= 0)
					{
						PLAY_SOUND_FROM_POSITION(StackVal, "BELL_LRG_IMP_HVY_MASTER", Vector(-1699,55f, 19,625f, 4207,602f));
						PLAY_SOUND_FROM_POSITION(StackVal, "BELL_LRG_IMP_HVY_MASTER", Vector(-1744,712f, 13,63f, 4199,02f));
						PLAY_SOUND_FROM_POSITION(StackVal, "BELL_LRG_IMP_HVY_MASTER", Vector(-1700,279f, 15,833f, 4260,511f));
						iLocal_369 = RAND_INT_RANGE(50, 65);
						bLocal_368 = (bLocal_368 - 1);
						bLocal_367 = false;
					}
					else if (bLocal_368 < 0)
					{
						bLocal_368 = 4294967295;
						uVar0 = GET_TIME_OF_DAY();
						if (GET_MINUTE(&uVar0) != 0 && !iLocal_815)
						{
							iVar1 = GET_HOUR(&uVar0);
							if (iVar1 <= 7 && iVar1 >= 18)
							{
								if (iVar1 >= 12)
								{
									iVar1 = (iVar1 - 12);
								}
								bLocal_368 = iVar1;
								PRINTSTRING("Here's how many times we're supposed to ring: ");
								PRINTINT(bLocal_368);
								PRINTNL();
								iLocal_369 = 0;
								bLocal_367 = false;
								iLocal_815 = 1;
							}
						}
						else
						{
							bLocal_367 = 1000;
							if (GET_MINUTE(&uVar0) != 0)
							{
								iLocal_815 = 0;
							}
						}
					}
					else
					{
						bLocal_367 = false;
					}
					iLocal_369 = (iLocal_369 - 1);
				}
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_366 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_367);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	Function_11(&Global_12150, &Global_14478, iScriptParam_0, (iLocal_814 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_61(&(Global_43791[iScriptParam_0]), 32);
	Function_61(&(Global_43791[iScriptParam_0]), 64);
	Function_61(&(Global_43791[iScriptParam_0]), 8);
	Function_61(&(Global_43791[iScriptParam_0]), 512);
	Function_61(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_370))
	{
		TERMINATE_SCRIPT(&uLocal_370);
	}
	Function_23("Unloaded LasHermanas", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1167 / 4455
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x119D / 4509
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x11BF / 4543
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x11D5 / 4565
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x11EB / 4587
{
	Function_6(&iLocal_16 + 8);
	RELEASE_LAYOUT_REF(&iLocal_16);
	return;
}

void Function_6(int iParam0) //Position: 0x11FE / 4606
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x1226 / 4646
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0x1371 / 4977
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x138E / 5006
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x13AC / 5036
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x13B8 / 5048
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
	strcpy(&cVar0, Function_20(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_76(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_61(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_17(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_17(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_16(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_17(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_16(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_76(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_63(2) || Function_76(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
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
			Function_79(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x15D6 / 5590
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x173C / 5948
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

int Function_14(int iParam0) //Position: 0x1767 / 5991
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

void Function_15(var uParam0, int iParam1) //Position: 0x179B / 6043
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x17AC / 6060
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x17C6 / 6086
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x17E3 / 6115
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(var uParam0, int iParam1) //Position: 0x17FE / 6142
{
	return (uParam0 && iParam1) == 0;
}

var Function_20(int iParam0) //Position: 0x180B / 6155
{
	if (!Function_4(iParam0))
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

bool Function_21() //Position: 0x1CB9 / 7353
{
	return !Function_22();
}

bool Function_22() //Position: 0x1CC3 / 7363
{
	return 0;
}

void Function_23(char* cParam0) //Position: 0x1CCA / 7370
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

void Function_24(int iParam0, bool bParam1) //Position: 0x1D0A / 7434
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
		Function_25(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x1DFA / 7674
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_26(int iParam0) //Position: 0x1E07 / 7687
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_28(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_27(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_27(var uParam0) //Position: 0x1F03 / 7939
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_28() //Position: 0x1F20 / 7968
{
	int iVar0;
	
	return &iVar0;
}

void Function_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1F29 / 7977
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
		Function_30();
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

void Function_30() //Position: 0x2017 / 8215
{
	int iVar0;
	
	Global_41176 = Function_31(StackVal);
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

int Function_31(int iParam0) //Position: 0x2065 / 8293
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_32(bool bParam0) //Position: 0x207D / 8317
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_33(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x2092 / 8338
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
		Function_36();
	}
	if (&bParam5)
	{
		Function_34(1048576);
	}
}

void Function_34(int iParam0) //Position: 0x21A0 / 8608
{
	Function_35(&Global_43580, iParam0);
	return;
}

void Function_35(var uParam0, var uParam1) //Position: 0x21AE / 8622
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_36() //Position: 0x21CD / 8653
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_34(16384);
	}
	return;
}

bool Function_37(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x21E9 / 8681
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_76(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_89(49, 0))
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

void Function_38(bool bParam0) //Position: 0x22A7 / 8871
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_39(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x22BA / 8890
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

int Function_40(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x2423 / 9251
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_4(iParam0))
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
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_41(int iParam0) //Position: 0x260C / 9740
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

bool Function_42(struct<2> Param0, struct<2> Param2) //Position: 0x2743 / 10051
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_43(int iParam0) //Position: 0x276F / 10095
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

var Function_44(vector3 vParam0) //Position: 0x27C6 / 10182
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

int Function_45(int iParam0) //Position: 0x2814 / 10260
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

bool Function_46(vector3 vParam0) //Position: 0x28CC / 10444
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_47(int iParam0) //Position: 0x28E4 / 10468
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_48(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2907 / 10503
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

int Function_49(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2965 / 10597
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

var Function_50(int iParam0) //Position: 0x2AC9 / 10953
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

bool Function_51(int iParam0) //Position: 0x2B07 / 11015
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_52(int iParam0, int iParam1, int iParam2) //Position: 0x2B1C / 11036
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_53(int iParam0) //Position: 0x2B3C / 11068
{
	Function_56(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_55(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_54(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_54(int iParam0, var uParam1, int iParam2) //Position: 0x2BB7 / 11191
{
	(&iParam0 + 84)->f_24 = uParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_55(struct<85> Param0) //Position: 0x2BCF / 11215
{
	Param0.f_84 = uParam1;
	(&Param0 + 84)->f_4 = uParam2;
	(&Param0 + 84)->f_8 = uParam3;
	(&Param0 + 84)->f_16 = uParam4;
}

void Function_56(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x2BF9 / 11257
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_57(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, &uParam10, uParam11, uParam12, &uParam13, &uParam14, &uParam15, &uParam16);
	Global_27462[iParam052].f_156 = uParam9;
}

void Function_57(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x2C40 / 11328
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
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
	if (!Function_18())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
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
					bVar2 = Function_59(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_58(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_59(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_58(int iParam0, int iParam1) //Position: 0x2FFE / 12286
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_59(int iParam0) //Position: 0x3021 / 12321
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_60(struct<28>[] Param0, int iParam1) //Position: 0x3038 / 12344
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_61(var uParam0, int iParam1) //Position: 0x3055 / 12373
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_62(var uParam0, int iParam1) //Position: 0x306F / 12399
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

bool Function_63(int iParam0) //Position: 0x30BC / 12476
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_64(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x30D8 / 12504
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_63(2))
	{
		return;
	}
	if (Function_76(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_65(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_61(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_79(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_65(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x3190 / 12688
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
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
		(&iParam1 + 16) = Function_67(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_46(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_66(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_66(int iParam0, struct<2> Param1) //Position: 0x3311 / 13073
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

var Function_67(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x3457 / 13399
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_28(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_68(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x357E / 13694
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

void Function_69(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x35DD / 13789
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

void Function_70(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3644 / 13892
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

void Function_71(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x36AD / 13997
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

void Function_72(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3718 / 14104
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

void Function_73(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x377E / 14206
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

void Function_74(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x37E7 / 14311
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

int Function_75(int iParam0) //Position: 0x384B / 14411
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_76(&(Global_43791[iParam0]), 4);
}

bool Function_76(var uParam0, int iParam1) //Position: 0x3867 / 14439
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3884 / 14468
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_17(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_17(&(Param0[iVar02]), 8))
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

void Function_78(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x396D / 14701
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_79(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_15(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_15(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x3A5D / 14941
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_80() //Position: 0x3A6E / 14958
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
	
	Function_88(3, 3);
	uVar0 = &uVar0;
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/oldf_pray", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nosmoke", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_lumber", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_embroidery_e_any", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/light_candle", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/light_candle_multi", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_sleeponbench_n_any", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/mex_bench_chair_sit", 1, 0);
	Function_86(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	if (!Function_81(&iLocal_16 + 8))
	{
		return 0;
	}
	iLocal_16 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_16))
	{
		iLocal_16 = CREATE_LAYOUT("LasHermanas_layout");
	}
	*(&iLocal_16 + 736) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_16, 8, 0);
	*(&iLocal_16 + 744[03]) = Vector(-1676,778f, 11,416f, 4225,216f);
	*(&iLocal_16 + 744[03] + 12) = Vector(0.0f, 191,342f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag23", Vector(-1676,778f, 11,416f, 4225,216f), Vector(0.0f, 191,342f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_16 + 736);
	*(&iLocal_16 + 744[13]) = Vector(-1679,978f, 11,412f, 4225,848f);
	*(&iLocal_16 + 744[13] + 12) = Vector(0.0f, 221,6891f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag5", Vector(-1679,978f, 11,412f, 4225,848f), Vector(0.0f, 221,6891f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_16 + 736);
	*(&iLocal_16 + 744[23]) = Vector(-1685,193f, 11,421f, 4225,493f);
	*(&iLocal_16 + 744[23] + 12) = Vector(0.0f, 70,161f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag6", Vector(-1685,193f, 11,421f, 4225,493f), Vector(0.0f, 70,161f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_16 + 736);
	*(&iLocal_16 + 744[33]) = Vector(-1685,027f, 11,421f, 4220,312f);
	*(&iLocal_16 + 744[33] + 12) = Vector(0.0f, 82,239f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag7", Vector(-1685,027f, 11,421f, 4220,312f), Vector(0.0f, 82,239f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_16 + 736);
	*(&iLocal_16 + 744[43]) = Vector(-1684,437f, 11,421f, 4214,542f);
	*(&iLocal_16 + 744[43] + 12) = Vector(0.0f, 125,4319f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag8", Vector(-1684,437f, 11,421f, 4214,542f), Vector(0.0f, 125,4319f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_16 + 736);
	*(&iLocal_16 + 744[53]) = Vector(-1685,284f, 11,421f, 4210,466f);
	*(&iLocal_16 + 744[53] + 12) = Vector(0.0f, 54,65687f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag9", Vector(-1685,284f, 11,421f, 4210,466f), Vector(0.0f, 54,65687f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_16 + 736);
	*(&iLocal_16 + 744[63]) = Vector(-1684,966f, 11,421f, 4204,857f);
	*(&iLocal_16 + 744[63] + 12) = Vector(0.0f, 415,3283f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag10", Vector(-1684,966f, 11,421f, 4204,857f), Vector(0.0f, 415,3283f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_16 + 736);
	*(&iLocal_16 + 744[73]) = Vector(-1684.0f, 11,421f, 4197,469f);
	*(&iLocal_16 + 744[73] + 12) = Vector(0.0f, 348,6252f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag11", Vector(-1684.0f, 11,421f, 4197,469f), Vector(0.0f, 348,6252f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_16 + 736);
	*(&iLocal_16 + 744[83]) = Vector(-1694,449f, 8,459f, 4197,87f);
	*(&iLocal_16 + 744[83] + 12) = Vector(0.0f, 331,2801f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag12", Vector(-1694,449f, 8,459f, 4197,87f), Vector(0.0f, 331,2801f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_16 + 736);
	*(&iLocal_16 + 744[93]) = Vector(-1695,101f, 8,407f, 4208,164f);
	*(&iLocal_16 + 744[93] + 12) = Vector(0.0f, 403,5736f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag13", Vector(-1695,101f, 8,407f, 4208,164f), Vector(0.0f, 403,5736f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_16 + 736);
	*(&iLocal_16 + 744[103]) = Vector(-1696,386f, 8,407f, 4209,293f);
	*(&iLocal_16 + 744[103] + 12) = Vector(0.0f, 252,4854f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag14", Vector(-1696,386f, 8,407f, 4209,293f), Vector(0.0f, 252,4854f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_16 + 736);
	*(&iLocal_16 + 744[113]) = Vector(-1698,186f, 8,407f, 4207,328f);
	*(&iLocal_16 + 744[113] + 12) = Vector(0.0f, -126,6505f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag15", Vector(-1698,186f, 8,407f, 4207,328f), Vector(0.0f, -126,6505f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_16 + 736);
	*(&iLocal_16 + 744[123]) = Vector(-1699,359f, 8,407f, 4209,715f);
	*(&iLocal_16 + 744[123] + 12) = Vector(0.0f, 237,2079f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag16", Vector(-1699,359f, 8,407f, 4209,715f), Vector(0.0f, 237,2079f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_16 + 736);
	*(&iLocal_16 + 744[133]) = Vector(-1704,049f, 8,393f, 4207,796f);
	*(&iLocal_16 + 744[133] + 12) = Vector(0.0f, 171,9238f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag17", Vector(-1704,049f, 8,393f, 4207,796f), Vector(0.0f, 171,9238f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_16 + 736);
	*(&iLocal_16 + 744[143]) = Vector(-1714,844f, 8,107f, 4211,341f);
	*(&iLocal_16 + 744[143] + 12) = Vector(0.0f, 278,901f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag18", Vector(-1714,844f, 8,107f, 4211,341f), Vector(0.0f, 278,901f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_16 + 736);
	*(&iLocal_16 + 744[153]) = Vector(-1714,089f, 8,107f, 4215,721f);
	*(&iLocal_16 + 744[153] + 12) = Vector(0.0f, 318,5831f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag19", Vector(-1714,089f, 8,107f, 4215,721f), Vector(0.0f, 318,5831f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_16 + 736);
	*(&iLocal_16 + 744[163]) = Vector(-1714,381f, 8,107f, 4218,91f);
	*(&iLocal_16 + 744[163] + 12) = Vector(0.0f, 288,0729f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag20", Vector(-1714,381f, 8,107f, 4218,91f), Vector(0.0f, 288,0729f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_16 + 736);
	*(&iLocal_16 + 744[173]) = Vector(-1714,086f, 8,107f, 4222,057f);
	*(&iLocal_16 + 744[173] + 12) = Vector(0.0f, 268,5576f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag21", Vector(-1714,086f, 8,107f, 4222,057f), Vector(0.0f, 268,5576f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_16 + 736);
	*(&iLocal_16 + 744[183]) = Vector(-1684,177f, 11,421f, 4214,698f);
	*(&iLocal_16 + 744[183] + 12) = Vector(0.0f, 271,675f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag22", Vector(-1684,177f, 11,421f, 4214,698f), Vector(0.0f, 271,675f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_16 + 736);
	*(&iLocal_16 + 1208) = CREATE_OBJECTSET_IN_LAYOUT("lumbergrpSet", &iLocal_16, 8, 0);
	*(&iLocal_16 + 1216[03]) = Vector(-1714,348f, 8,032f, 4243,2f);
	*(&iLocal_16 + 1216[03] + 12) = Vector(0.0f, 357,877f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag24", Vector(-1714,348f, 8,032f, 4243,2f), Vector(0.0f, 357,877f, 0.0f));
	DECOR_SET_STRING(&uVar20, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_16 + 1208);
	*(&iLocal_16 + 1248) = CREATE_OBJECTSET_IN_LAYOUT("watermelongrpSet", &iLocal_16, 8, 0);
	*(&iLocal_16 + 1256[03]) = Vector(-1684,76f, 8,045694f, 4245,493f);
	*(&iLocal_16 + 1256[03] + 12) = Vector(0.0f, 86,28854f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag25", Vector(-1684,76f, 8,045694f, 4245,493f), Vector(0.0f, 86,28854f, 0.0f));
	DECOR_SET_STRING(&uVar21, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_16 + 1248);
	*(&iLocal_16 + 1288) = Vector(-1714,395f, 11,26139f, 4213,877f);
	*(&iLocal_16 + 1288 + 12) = Vector(0.0f, 178,0935f, 0.0f);
	*(&iLocal_16 + 1312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_save_flag_LAS", Vector(-1714,395f, 11,26139f, 4213,877f), Vector(0.0f, 178,0935f, 0.0f));
	*(&iLocal_16 + 1320) = Vector(-1719,506f, 11,2808f, 4217,135f);
	*(&iLocal_16 + 1320 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_16 + 1344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_purchase_flag_LAS", Vector(-1719,506f, 11,2808f, 4217,135f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "noldf_pray", "noldf_pray", Vector(-1722,195f, 8,183189f, 4212,391f), Vector(0.0f, -175,4412f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1739,606f, 7,300356f, 4207,416f), Vector(0.0f, -42,51902f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "oldf_pray1", "noldf_pray", Vector(-1701,08f, 8,72789f, 4183,54f), Vector(0.0f, -17,53588f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "oldf_pray3", "noldf_pray", Vector(-1699,401f, 8,72789f, 4183,875f), Vector(0.0f, 2,109802f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "oldf_pray4", "noldf_pray", Vector(-1697,878f, 8,756759f, 4183,391f), Vector(0.0f, 28,43623f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_yawning_n_any1", "stand_yawning_n_any", Vector(-1735,214f, 7,300356f, 4195,721f), Vector(0.0f, 100,4818f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_16 + 1352) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-1711,017f, 8,084888f, 4232.0f), Vector(0.0f, 112,7936f, 0.0f)), &iLocal_16 + 1352);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", Vector(-1703,141f, 8,406472f, 4209,348f), Vector(0.0f, -168,7639f, 0.0f)), &iLocal_16 + 1352);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any4", "stand_pocketwatch_e_any", Vector(-1722,399f, 8,082561f, 4191,393f), Vector(0.0f, -130,8964f, 0.0f)), &iLocal_16 + 1352);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard", "stand_check_clipboard", Vector(-1699,225f, 8,071346f, 4243,456f), Vector(0.0f, 15,47881f, 0.0f)), &iLocal_16 + 1352);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any10", "stand_pocketwatch_e_any", Vector(-1708,707f, 8,020612f, 4237,89f), Vector(0.0f, 82,2148f, 0.0f)), &iLocal_16 + 1352);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard1", "stand_check_clipboard", Vector(-1730,214f, 8,210081f, 4188,308f), Vector(0.0f, 4,313756f, 0.0f)), &iLocal_16 + 1352);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand11", "smoking_stand", Vector(-1704,068f, 8,031364f, 4246,768f), Vector(0.0f, 26,83949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand1", "smoking_stand", Vector(-1685,383f, 8,071345f, 4236,926f), Vector(0.0f, -311,0861f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-1711,072f, 8,071357f, 4253,021f), Vector(0.0f, -0,9125836f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-1687,545f, 8,075707f, 4250,399f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-1682,803f, 8,031363f, 4233,502f), Vector(0.0f, 90,84982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-1696,498f, 8,122991f, 4249,032f), Vector(0.0f, 0,5993124f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_fence_low2", "sit_fence_low", Vector(-1699,768f, 11,1373f, 4252,409f), Vector(0.0f, -179,305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand13", "smoking_stand", Vector(-1701,277f, 8,071356f, 4240,813f), Vector(0.0f, -6,861321f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel19", "repair_kneel", Vector(-1714,384f, 8,031361f, 4224,462f), Vector(0.0f, 92,71163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand14", "smoking_stand", Vector(-1740,639f, 7,300356f, 4205,736f), Vector(0.0f, -100,5448f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_yawning_n_any3", "stand_yawning_n_any", Vector(-1688,838f, 11,21289f, 4251,956f), Vector(0.0f, 95,01781f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_yawning_n_any4", "stand_yawning_n_any", Vector(-1721,389f, 11,51309f, 4240,81f), Vector(0.0f, 24,16522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_fence_low4", "sit_fence_low", Vector(-1682,794f, 11,26792f, 4250,548f), Vector(0.0f, 270,7113f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_fence_low5", "sit_fence_low", Vector(-1679,146f, 11,25226f, 4234,642f), Vector(0.0f, 86,36115f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_fence_low6", "sit_fence_low", Vector(-1707,763f, 11,09727f, 4251,409f), Vector(0.0f, -361,6765f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1678,33f, 11,23122f, 4233,496f), Vector(0.0f, -114,1962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-1683,243f, 11,23122f, 4252,623f), Vector(0.0f, 191,4235f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-1721,846f, 11,28585f, 4250,998f), Vector(0.0f, 89,55013f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-1711,734f, 11,68961f, 4186,07f), Vector(0.0f, -10,87054f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground3f", "Rand_Idle_Sit_Ground", Vector(-1688,965f, 8,031361f, 4251,035f), Vector(0.0f, 149,0219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel2", "repair_kneel", Vector(-1711,889f, 11,08464f, 4251,438f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand15", "smoking_stand", Vector(-1684,961f, 8,338675f, 4219,323f), Vector(0.0f, 97,15651f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-1692,3f, 8,071357f, 4252,745f), Vector(0.0f, -35,45182f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nlean_rail", "nlean_rail", Vector(-1686,277f, 11,23122f, 4251,764f), Vector(0.0f, 374,862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_smoke2", "sit_ground_smoke", Vector(-1719,791f, 8,031357f, 4251,327f), Vector(0.0f, -108,2698f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand17", "smoking_stand", Vector(-1713,952f, 11,26073f, 4185,418f), Vector(0.0f, -81,52162f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand18", "smoking_stand", Vector(-1719,925f, 8,096425f, 4230,973f), Vector(0.0f, -94,94963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_16 + 1360) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel7", "repair_kneel", Vector(-1714,048f, 8,031361f, 4234,782f), Vector(0.0f, -91,26965f, 0.0f)), &iLocal_16 + 1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel4", "repair_kneel", Vector(-1702,399f, 11,19571f, 4258,6f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_16 + 1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel5", "repair_kneel", Vector(-1703,107f, 11,0803f, 4254,066f), Vector(0.0f, -88,05102f, 0.0f)), &iLocal_16 + 1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel6", "repair_kneel", Vector(-1701,535f, 11,12688f, 4252,202f), Vector(0.0f, 177,3045f, 0.0f)), &iLocal_16 + 1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel8", "repair_kneel", Vector(-1691,538f, 8,110466f, 4235,881f), Vector(0.0f, -112,3965f, 0.0f)), &iLocal_16 + 1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel9", "repair_kneel", Vector(-1688,987f, 8,070285f, 4237,209f), Vector(0.0f, 68,02136f, 0.0f)), &iLocal_16 + 1360);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand19", "smoking_stand", Vector(-1695,62f, 8,080924f, 4235,768f), Vector(0.0f, 87,6114f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_rail4", "nlean_rail", Vector(-1718,767f, 11,29243f, 4227,722f), Vector(0.0f, 269,706f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(-1717,785f, 8,031364f, 4186,591f), Vector(0.0f, -151,7176f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", Vector(-1717,667f, 8,031362f, 4184,476f), Vector(0.0f, -177,5021f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand", "smoking_stand", Vector(-1719,976f, 8,071302f, 4196,748f), Vector(0.0f, -157,2704f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", Vector(-1689,681f, 8,031361f, 4199,52f), Vector(0.0f, -5,333084f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand", "rand_idle_stand_nosmoke", Vector(-1717,189f, 8,082555f, 4196,772f), Vector(0.0f, 135,1499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_holy_water", "stand_holy_water", Vector(-1700,763f, 8,406472f, 4203,448f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_holy_water2", "stand_holy_water", Vector(-1691,62f, 8,399546f, 4194,362f), Vector(0.0f, -4,30763f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_holy_water3", "stand_holy_water", Vector(-1700,139f, 8,388999f, 4186,993f), Vector(0.0f, 3,344887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_holy_water5", "stand_holy_water", Vector(-1721,864f, 8,220417f, 4211,499f), Vector(0.0f, -178,6426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_holy_water6", "stand_holy_water", Vector(-1723,445f, 8,183189f, 4211,417f), Vector(0.0f, -181,3018f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_distance_binocs", "look_distance_binocs", Vector(-1707,251f, 11,09721f, 4252,921f), Vector(0.0f, -188,9174f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_distance_binocs1", "look_distance_binocs", Vector(-1692,415f, 11,24212f, 4252,74f), Vector(0.0f, -157,5644f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", Vector(-1713,996f, 11,28086f, 4214,523f), Vector(0.0f, -90,62759f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_yawning_n_any2", "stand_yawning_n_any", Vector(-1721,798f, 11,20961f, 4226,549f), Vector(0.0f, 125,8318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", Vector(-1741,047f, 7,395913f, 4200,905f), Vector(0.0f, -89,72421f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_chopveggies_w_any", "stand_chopveggies_w_any", Vector(-1686,286f, 8,077932f, 4245,085f), Vector(0.0f, -175,3813f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "horse_tend", "horse_tend", Vector(-1701,456f, 8,03136f, 4272,64f), Vector(0.0f, -150,9963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "horse_stay", "horse_stay", Vector(-1699,431f, 8,031361f, 4272,283f), Vector(0.0f, 27,00345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "horse_tend1", "horse_tend", Vector(-1697,683f, 8,031361f, 4271,647f), Vector(0.0f, -167,2825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", Vector(-1704,082f, 8,053353f, 4228,842f), Vector(0.0f, -271,2493f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_H_talking", "lean_fence_H_talking", Vector(-1683,761f, 8,341617f, 4215,667f), Vector(0.0f, -90,51841f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_L", "look_out_window_L", Vector(-1685,833f, 11,42468f, 4210,431f), Vector(0.0f, 88,02628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_table", "stand_hammer_table", Vector(-1720,753f, 8,022425f, 4245,132f), Vector(0.0f, -273,2521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L", "lean_fence_L", Vector(-1711,494f, 8,032317f, 4234,503f), Vector(0.0f, 89,31889f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_table1", "stand_hammer_table", Vector(-1707,737f, 8,042475f, 4249,17f), Vector(0.0f, 86,44759f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_R", "look_out_window_R", Vector(-1713,156f, 11,28086f, 4221,348f), Vector(0.0f, -87,19025f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L_talking1", "lean_fence_L_talking", Vector(-1720,624f, 11,30416f, 4217,61f), Vector(0.0f, 90,52699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", Vector(-1729,963f, 8,205861f, 4222,326f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_L1", "look_out_window_L", Vector(-1734,132f, 8,206572f, 4209,476f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_rail15", "nlean_rail", Vector(-1728,161f, 10,24838f, 4215,196f), Vector(0.0f, 91,11217f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall_Shoulder_R1", "Rand_Idle_NearWall_Shoulder_R", Vector(-1737,229f, 7,391932f, 4208,269f), Vector(0.0f, 4,032918f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall10", "Rand_Idle_NearWall", Vector(-1731,185f, 8,078622f, 4199,998f), Vector(0.0f, -179,4121f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_rail16", "nlean_rail", Vector(-1716,894f, 11,2844f, 4183,629f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_wall", "stand_hammer_wall", Vector(-1715,843f, 8,031f, 4250,29f), Vector(0.0f, 87,97842f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_R1", "look_out_window_R", Vector(-1717,943f, 8,21082f, 4220,822f), Vector(0.0f, -88,6336f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_table2", "stand_hammer_table", Vector(-1697,002f, 11,07467f, 4248,004f), Vector(0.0f, -176,826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(-1683,926f, 11,24176f, 4246,735f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel1", "repair_kneel", Vector(-1717,216f, 11,57537f, 4239,32f), Vector(0.0f, -90,90639f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_rail12", "nlean_rail", Vector(-1721,923f, 11,47f, 4237,812f), Vector(0.0f, 88,75313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-1664,837f, 8,122361f, 4295,506f), Vector(0.0f, 147,1349f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall11", "Rand_Idle_NearWall", Vector(-1660,563f, 8,381023f, 4286,659f), Vector(0.0f, -45,90385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any200", "stand_pocketwatch_e_any", Vector(-1662,873f, 8,399433f, 4290,174f), Vector(0.0f, -75,50686f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_L2", "look_out_window_L", Vector(-1699,773f, 11,08f, 4259,688f), Vector(0.0f, -178,9678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall12", "Rand_Idle_NearWall", Vector(-1708,933f, 8,032f, 4254,594f), Vector(0.0f, -179,2756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand1", "rand_idle_stand_nosmoke", Vector(-1713,053f, 8,031361f, 4254,796f), Vector(0.0f, -203,8362f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_sweeping", "Multistage_sweeping", Vector(-1684,098f, 11,421f, 4214,699f), Vector(0.0f, 90,3879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_lumber", "Multistage_lumber", Vector(-1718,592f, 8,006807f, 4249,085f), Vector(0.0f, 89,66975f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_16 + 1368) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_embroidery_e_any", "sit_embroidery_e_any", Vector(-1697,108f, 8,069492f, 4239,155f), Vector(0.0f, 52,20126f, 0.0f)), &iLocal_16 + 1368);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_16 + 1368)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "mex_washCloths1", "mex_washCloths", Vector(-1684,896f, 8,07091f, 4250,169f), Vector(0.0f, 41,16016f, 0.0f)), &iLocal_16 + 1368);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_16 + 1368)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", Vector(-1692,903f, 8,064622f, 4248,172f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand2", "rand_idle_stand_nosmoke", Vector(-1703,761f, 8,071356f, 4235,874f), Vector(0.0f, -113,832f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_table", "lean_table", Vector(-1708,688f, 8,032f, 4247,973f), Vector(0.0f, -179,1494f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_eat_fruit_barrel1", "stand_eat_fruit_barrel", Vector(-1697,744f, 8,071f, 4248,272f), Vector(0.0f, -179,4436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_barrel", "sit_barrel", Vector(-1689,073f, 8,12009f, 4245,9f), Vector(0.0f, -121,0385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "light_candle", "light_candle", Vector(-1727,455f, 8,206f, 4217,448f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "light_candle_multi", "light_candle_multi", Vector(-1720,816f, 11,267f, 4211,255f), Vector(0.0f, 89,90731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_sleeponbench_n_any", "sit_sleeponbench_n_any", Vector(-1702,475f, 8,092653f, 4234,368f), Vector(0.0f, -147,2703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall_Shoulder_L", Vector(-1715,575f, 8,032f, 4189,248f), Vector(0.0f, -89,04753f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "light_candle_multi1", "light_candle", Vector(-1675,668f, 8,339f, 4211,115f), Vector(0.0f, -88,62391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "light_candle_multi2", "light_candle", Vector(-1675,742f, 8,339f, 4219,18f), Vector(0.0f, -90,20255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_16 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Locked_Footlocker", "Locked_Footlocker", Vector(-1713,7f, 11,2917f, 4212,825f), Vector(0.0f, -266,2146f, 0.0f));
	DECOR_SET_BOOL(&iLocal_16 + 1376, "PlayerHouseChest", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any201", "stand_pocketwatch_e_any", Vector(-1707,411f, 8,031357f, 4260,482f), Vector(0.0f, -219,3375f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any202", "stand_pocketwatch_e_any", Vector(-1708,747f, 8,031359f, 4261,722f), Vector(0.0f, -316,2559f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_spit", "stand_spit", Vector(-1710,588f, 8,031361f, 4261,815f), Vector(0.0f, 34,91966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_spit1", "stand_spit", Vector(-1711,394f, 8,042853f, 4257,294f), Vector(0.0f, -180,4076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_16 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fake_horseshoe", "fake_horseshoe", Vector(-1721,364f, 8,091f, 4259,787f), Vector(0.0f, -88,26054f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1384), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "oldf_pray5", "noldf_pray", Vector(-1731,975f, 8,205861f, 4220,302f), Vector(0.0f, 160,2688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_holy_water7", "stand_holy_water", Vector(-1733,123f, 8,177019f, 4219,672f), Vector(0.0f, -177,6864f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand3", "rand_idle_stand_nosmoke", Vector(-1717,266f, 8,082555f, 4201,051f), Vector(0.0f, 29,23837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "mex_chair_sit", "mex_chair_sit", Vector(-1721,857f, 8,082553f, 4200,122f), Vector(0.0f, 88,6946f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "mex_chair_sit1", "mex_chair_sit", Vector(-1721,803f, 8,082553f, 4198,587f), Vector(0.0f, 88,6946f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l4", "lie_sleep_on_bed_l", Vector(-1716,621f, 11,25663f, 4214,544f), Vector(0.0f, -90,39659f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "oldf_pray6", "noldf_pray", Vector(-1704,753f, 8,406471f, 4192,281f), Vector(0.0f, 90,3811f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand4", "rand_idle_stand_nosmoke", Vector(-1699,436f, 8,071356f, 4232,833f), Vector(0.0f, -182,9552f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand5", "rand_idle_stand_nosmoke", Vector(-1695,922f, 8,071356f, 4238,419f), Vector(0.0f, -296,6133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand6", "rand_idle_stand_nosmoke", Vector(-1698,355f, 8,071356f, 4241,551f), Vector(0.0f, -313,5586f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "mex_bench_chair_sit", "mex_bench_chair_sit", Vector(-1698,098f, 8,12276f, 4233,905f), Vector(0.0f, 317,4727f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "mex_bench_chair_sit1", "mex_bench_chair_sit", Vector(-1702,106f, 8,12276f, 4240,244f), Vector(0.0f, 142,6339f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand7", "rand_idle_stand_nosmoke", Vector(-1740.0f, 7,254313f, 4200.0f), Vector(0.0f, -51,29264f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand8", "rand_idle_stand_nosmoke", Vector(-1736,075f, 7,274668f, 4200,023f), Vector(0.0f, 54,76555f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_L3", "look_out_window_L", Vector(-1685,812f, 11,41961f, 4204,198f), Vector(0.0f, 88,02628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_L4", "look_out_window_L", Vector(-1685,807f, 11,42421f, 4219,944f), Vector(0.0f, 88,02628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand9", "rand_idle_stand_nosmoke", Vector(-1698,7f, 8,406472f, 4209,805f), Vector(0.0f, 135,1499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand10", "rand_idle_stand_nosmoke", Vector(-1695,079f, 8,406472f, 4208,657f), Vector(0.0f, 279,7311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand11", "rand_idle_stand_nosmoke", Vector(-1700,88f, 8,406472f, 4207,664f), Vector(0.0f, 216,8064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand12", "rand_idle_stand_nosmoke", Vector(-1707,052f, 8,107873f, 4208,583f), Vector(0.0f, 71,08535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand13", "rand_idle_stand_nosmoke", Vector(-1683,745f, 8,329041f, 4227,836f), Vector(0.0f, 135,1499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand14", "rand_idle_stand_nosmoke", Vector(-1686,182f, 8,329041f, 4215,932f), Vector(0.0f, 63,67053f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand15", "rand_idle_stand_nosmoke", Vector(-1684,594f, 8,329041f, 4207,049f), Vector(0.0f, 117,091f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand16", "rand_idle_stand_nosmoke", Vector(-1713,485f, 8,106472f, 4210,946f), Vector(0.0f, 231,9069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand17", "rand_idle_stand_nosmoke", Vector(-1713,751f, 8,106472f, 4221,013f), Vector(0.0f, 292,4454f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand18", "rand_idle_stand_nosmoke", Vector(-1712,958f, 8,106472f, 4215,458f), Vector(0.0f, 229,5487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_smoke", "sit_ground_smoke", Vector(-1728,179f, 11,25985f, 4188,168f), Vector(0.0f, -3,000558f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-1729,543f, 11,25985f, 4188,01f), Vector(0.0f, 65,30602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_barrel1", "sit_barrel", Vector(-1730,387f, 11,25985f, 4188,036f), Vector(0.0f, 149,5227f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_16 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fake_horseshoe1", "fake_horseshoe", Vector(-1709,76f, 8,091f, 4259,935f), Vector(0.0f, 86,804f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1392), 1);
	return 1;
}

bool Function_81(struct<2>[] Param0) //Position: 0x8215 / 33301
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_85();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_84(&(Param0[iVar02]), 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_84(&(Param0[iVar02]), 8);
		}
		Function_84(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_84(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
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
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x85D7 / 34263
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

bool Function_83() //Position: 0x8617 / 34327
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

void Function_84(struct<13> Param0) //Position: 0x8645 / 34373
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_85() //Position: 0x8658 / 34392
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

var Function_86(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x869A / 34458
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_87(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_84(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_87(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x86D8 / 34520
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_84(&(Param0[iVar02]), 4);
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

void Function_88(int iParam0, int iParam1) //Position: 0x87A7 / 34727
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

bool Function_89(int iParam0, bool bParam1) //Position: 0x87F1 / 34801
{
	int iVar0;
	
	iVar0 = Function_91(iParam0);
	if (!Function_90(iVar0))
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

bool Function_90(int iParam0) //Position: 0x882F / 34863
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0x8846 / 34886
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0x8860 / 34912
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_93() //Position: 0x8876 / 34934
{
	var uVar0;
	
	Function_88(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("LasHermanas_layout");
	}
	*(&iLocal_4 + 8) = Vector(-1693,753f, 8,006304f, 4258,227f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-1693,753f, 8,006304f, 4258,227f), Vector(0.0f, 0.0f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 40) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "lshp_patrolpath");
	return 1;
}

void Function_94(char* cParam0) //Position: 0x8AAE / 35502
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

