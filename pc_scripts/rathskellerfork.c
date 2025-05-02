//Decompiled with MagicRDR v1.0
//Function Count : 106
//Statics Count : 1195
//Natives Count : 152
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
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 52;
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
	var uLocal_276 = 28;
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
	var uLocal_448 = 26;
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
	var uLocal_608 = 4;
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
	var uLocal_636 = 1;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 9;
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
	int iLocal_788 = 0;
	bool bLocal_789 = false;
	vector3 vLocal_790[11] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	var uLocal_860 = 15;
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
	int iLocal_1192 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_788 = 0;
	Function_105("Initializing Rathskeller Fork", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_789 = 1000;
		switch (iLocal_788)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_788 = 1;
				}
				bLocal_789 = false;
				break;
			
			case 0x00000001:
				if (Function_104())
				{
					Global_98961 = 0;
					iLocal_788 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
				}
				bLocal_789 = false;
				break;
			
			case 0x00000002:
				if (Function_95())
				{
					Function_94(&(Global_43791[iScriptParam_0]), 32);
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1);
					vLocal_790[03] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand4"), 1, 0, 0, 0, 0, 1);
					vLocal_790[13] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand4"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1);
					vLocal_790[23] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand1"), 1, 0, 0, 0, 0, 1);
					vLocal_790[33] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand1"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand"), 1, 0, 0, 0, 0, 1);
					vLocal_790[43] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand3"), 1, 0, 0, 0, 0, 1);
					vLocal_790[53] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand3"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand2"), 1, 0, 0, 0, 0, 1);
					vLocal_790[63] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "rand_idle_stand2"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "sit_ground_smoke"), 1, 0, 0, 0, 0, 1);
					vLocal_790[73] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "sit_ground_smoke"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards1"), 1, 0, 0, 0, 0, 1);
					vLocal_790[83] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards1"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "sit_ground_smoke1"), 1, 0, 0, 0, 0, 1);
					vLocal_790[93] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "sit_ground_smoke1"), 1, 0, 0, 0, 0, 1) };
					Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards"), 1, 0, 0, 0, 0, 1);
					vLocal_790[103] = { StackVal, StackVal, Function_93(FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(&iLocal_62, "Sit_Ground_Play_Cards"), 1, 0, 0, 0, 0, 1) };
					iLocal_788 = 3;
				}
				bLocal_789 = false;
				break;
			
			case 0x00000003:
				uLocal_858 = LAUNCH_NEW_SCRIPT_WITH_ARGS("RathskellerForkVol", &iScriptParam_0, 2, 0);
				Function_92(&Global_11222, &Global_13104, iScriptParam_0);
				iLocal_788 = 5;
				bLocal_789 = false;
				break;
			
			case 0x00000005:
				if (Function_91(&Global_11222, &Global_13104, iScriptParam_0))
				{
					iLocal_788 = 4;
					bLocal_789 = false;
				}
				else
				{
					bLocal_789 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_90(&(Global_43791[iScriptParam_0]), 16) && Function_89(Global_44085[iScriptParam_09]))
				{
					iLocal_788 = 6;
				}
				bLocal_789 = false;
				break;
			
			case 0x00000006:
				Function_88(StackVal, 0, &uLocal_860, Vector(-3670,592f, 42,766f, 2100,083f));
				Function_87(StackVal, 0, &uLocal_860, Vector(-3658,562f, 42,571f, 2147,467f));
				Function_86(StackVal, 0, &uLocal_860, Vector(-3670,592f, 42,766f, 2100,083f));
				Function_85(StackVal, 0, &uLocal_860, Vector(-3688,003f, 42,277f, 2127,998f));
				Function_84(StackVal, 0, &uLocal_860, Vector(-3670,592f, 42,766f, 2100,083f));
				Function_83(StackVal, 0, &uLocal_860, Vector(-3660,158f, 42,768f, 2090,503f));
				Function_82(0, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 1, &uLocal_860, Vector(-3685,734f, 42,769f, 2111,356f));
				Function_87(StackVal, 1, &uLocal_860, Vector(-3650,303f, 42,768f, 2103,17f));
				Function_86(StackVal, 1, &uLocal_860, Vector(-3670,726f, 42,768f, 2096,519f));
				Function_85(StackVal, 1, &uLocal_860, Vector(-3647,079f, 42,711f, 2112,356f));
				Function_84(StackVal, 1, &uLocal_860, Vector(-3670,661f, 42,766f, 2098,251f));
				Function_83(StackVal, 1, &uLocal_860, Vector(-3646,978f, 42,768f, 2100,589f));
				Function_82(1, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 2, &uLocal_860, Vector(-3670,297f, 42,768f, 2102,956f));
				Function_87(StackVal, 2, &uLocal_860, Vector(-3623,776f, 42,478f, 2120,918f));
				Function_86(StackVal, 2, &uLocal_860, Vector(-3672,274f, 42,80352f, 2100,944f));
				Function_85(StackVal, 2, &uLocal_860, Vector(-3643,017f, 42,773f, 2115,174f));
				Function_84(StackVal, 2, &uLocal_860, Vector(-3670,297f, 42,768f, 2102,956f));
				Function_83(StackVal, 2, &uLocal_860, Vector(-3682,271f, 42,768f, 2115,177f));
				Function_82(2, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 3, &uLocal_860, Vector(-3672,566f, 42,77f, 2105,963f));
				Function_87(StackVal, 3, &uLocal_860, Vector(-3657,91f, 42,571f, 2148,834f));
				Function_86(StackVal, 3, &uLocal_860, Vector(-3659,798f, 42,165f, 2158,655f));
				Function_85(StackVal, 3, &uLocal_860, Vector(-3678,203f, 42,315f, 2128,193f));
				Function_84(StackVal, 3, &uLocal_860, Vector(-3659,798f, 42,165f, 2158,655f));
				Function_83(StackVal, 3, &uLocal_860, Vector(-3636,883f, 42,768f, 2100,621f));
				Function_82(3, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 4, &uLocal_860, Vector(-3666,529f, 42,768f, 2105,641f));
				Function_87(StackVal, 4, &uLocal_860, Vector(-3630,075f, 42,286f, 2137,849f));
				Function_86(StackVal, 4, &uLocal_860, Vector(-3647,079f, 42,711f, 2112,356f));
				Function_85(StackVal, 4, &uLocal_860, Vector(-3693,331f, 41,826f, 2147,339f));
				Function_84(StackVal, 4, &uLocal_860, Vector(-3666,529f, 42,768f, 2105,641f));
				Function_83(StackVal, 4, &uLocal_860, Vector(-3679,415f, 42,768f, 2105,135f));
				Function_82(4, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 5, &uLocal_860, Vector(-3676,228f, 42,787f, 2101,954f));
				Function_87(StackVal, 5, &uLocal_860, Vector(-3653,545f, 42,257f, 2150,282f));
				Function_86(StackVal, 5, &uLocal_860, Vector(-3666,709f, 42,766f, 2100,732f));
				Function_85(StackVal, 5, &uLocal_860, Vector(-3657,945f, 42,246f, 2160,425f));
				Function_84(StackVal, 5, &uLocal_860, Vector(-3668,85f, 42,766f, 2104,488f));
				Function_83(StackVal, 5, &uLocal_860, Vector(-3636.0f, 42,764f, 2105,484f));
				Function_82(5, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 6, &uLocal_860, Vector(-3673,58f, 42,566f, 2123,779f));
				Function_87(StackVal, 6, &uLocal_860, Vector(-3625,358f, 42,487f, 2116,833f));
				Function_86(StackVal, 6, &uLocal_860, Vector(-3669,69f, 42,766f, 2103,976f));
				Function_85(StackVal, 6, &uLocal_860, Vector(-3623,776f, 42,478f, 2120,918f));
				Function_84(StackVal, 6, &uLocal_860, Vector(-3672,274f, 42,80352f, 2100,944f));
				Function_83(StackVal, 6, &uLocal_860, Vector(-3681,774f, 42,812f, 2107,741f));
				Function_82(6, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 7, &uLocal_860, Vector(-3660,158f, 42,768f, 2090,503f));
				Function_87(StackVal, 7, &uLocal_860, Vector(-3647,722f, 42,774f, 2103,401f));
				Function_86(StackVal, 7, &uLocal_860, Vector(-3668,553f, 42,167f, 2153,184f));
				Function_85(StackVal, 7, &uLocal_860, Vector(-3668,553f, 42,167f, 2153,184f));
				Function_84(StackVal, 7, &uLocal_860, Vector(-3665,814f, 42,766f, 2104,718f));
				Function_83(StackVal, 7, &uLocal_860, Vector(-3647,722f, 42,774f, 2103,401f));
				Function_82(7, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 8, &uLocal_860, Vector(-3652,983f, 42,206f, 2131,918f));
				Function_87(StackVal, 8, &uLocal_860, Vector(-3659,361f, 42,296f, 2162,807f));
				Function_86(StackVal, 8, &uLocal_860, Vector(-3647,722f, 42,774f, 2103,401f));
				Function_85(StackVal, 8, &uLocal_860, Vector(-3650,303f, 42,768f, 2103,17f));
				Function_84(StackVal, 8, &uLocal_860, Vector(-3674,748f, 42,769f, 2115,355f));
				Function_83(StackVal, 8, &uLocal_860, Vector(-3680,114f, 42,7658f, 2109,337f));
				Function_82(8, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 9, &uLocal_860, Vector(-3634,12f, 42,311f, 2143,24f));
				Function_87(StackVal, 9, &uLocal_860, Vector(-3693,331f, 41,826f, 2147,339f));
				Function_86(StackVal, 9, &uLocal_860, Vector(-3640,476f, 42,812f, 2100,515f));
				Function_85(StackVal, 9, &uLocal_860, Vector(-3660,273f, 42,235f, 2137,475f));
				Function_84(StackVal, 9, &uLocal_860, Vector(-3674,429f, 42,566f, 2120,43f));
				Function_83(StackVal, 9, &uLocal_860, Vector(-3688,371f, 42,768f, 2114,1f));
				Function_82(9, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 10, &uLocal_860, Vector(-3665,977f, 42,768f, 2102,392f));
				Function_87(StackVal, 10, &uLocal_860, Vector(-3691,681f, 42,257f, 2121,8f));
				Function_86(StackVal, 10, &uLocal_860, Vector(-3658,872f, 42,165f, 2159,994f));
				Function_85(StackVal, 10, &uLocal_860, Vector(-3690,252f, 42,25f, 2127,047f));
				Function_84(StackVal, 10, &uLocal_860, Vector(-3640,476f, 42,812f, 2100,515f));
				Function_83(StackVal, 10, &uLocal_860, Vector(-3675,654f, 42,771f, 2108,884f));
				Function_82(10, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 11, &uLocal_860, Vector(-3657,002f, 42,768f, 2086,946f));
				Function_87(StackVal, 11, &uLocal_860, Vector(-3693,271f, 42,232f, 2124,929f));
				Function_86(StackVal, 11, &uLocal_860, Vector(-3674,996f, 42,534f, 2122,054f));
				Function_85(StackVal, 11, &uLocal_860, Vector(-3693,271f, 42,232f, 2124,929f));
				Function_84(StackVal, 11, &uLocal_860, Vector(-3658,872f, 42,165f, 2159,994f));
				Function_83(StackVal, 11, &uLocal_860, Vector(-3670,965f, 42,566f, 2122,636f));
				Function_82(11, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 12, &uLocal_860, Vector(-3674,996f, 42,534f, 2122,054f));
				Function_87(StackVal, 12, &uLocal_860, Vector(-3697,168f, 42,316f, 2124,111f));
				Function_86(StackVal, 12, &uLocal_860, Vector(-3674,748f, 42,769f, 2115,355f));
				Function_85(StackVal, 12, &uLocal_860, Vector(-3697,168f, 42,316f, 2124,111f));
				Function_84(StackVal, 12, &uLocal_860, Vector(-3652,986f, 42,571f, 2096,569f));
				Function_83(StackVal, 12, &uLocal_860, Vector(-3689,62f, 42,77f, 2119,567f));
				Function_82(12, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 13, &uLocal_860, Vector(-3691,756f, 42,771f, 2117,631f));
				Function_87(StackVal, 13, &uLocal_860, Vector(-3678,143f, 42,255f, 2149,356f));
				Function_86(StackVal, 13, &uLocal_860, Vector(-3693,271f, 42,232f, 2124,929f));
				Function_85(StackVal, 13, &uLocal_860, Vector(-3665,977f, 42,768f, 2102,392f));
				Function_84(StackVal, 13, &uLocal_860, Vector(-3645,426f, 42,773f, 2096,524f));
				Function_83(StackVal, 13, &uLocal_860, Vector(-3647,079f, 42,711f, 2112,356f));
				Function_82(13, &uLocal_860, &iLocal_4);
				Function_88(StackVal, 14, &uLocal_860, Vector(-3640,871f, 42,781f, 2105,339f));
				Function_87(StackVal, 14, &uLocal_860, Vector(-3640,871f, 42,781f, 2105,339f));
				Function_86(StackVal, 14, &uLocal_860, Vector(-3640,871f, 42,781f, 2105,339f));
				Function_85(StackVal, 14, &uLocal_860, Vector(-3640,871f, 42,781f, 2105,339f));
				Function_84(StackVal, 14, &uLocal_860, Vector(-3640,871f, 42,781f, 2105,339f));
				Function_83(StackVal, 14, &uLocal_860, Vector(-3640,871f, 42,781f, 2105,339f));
				Function_82(14, &uLocal_860, &iLocal_4);
				if (Global_39266[2])
				{
					Function_81(&(Global_11222[142]), 2);
				}
				else
				{
					Function_80(&(Global_11222[142]), 2);
				}
				Function_79(&iLocal_62 + 2624, GET_OBJECT_FROM_PERS_CHAR(&Global_13104[83] + 16));
				Function_79(&iLocal_62 + 2632, GET_OBJECT_FROM_PERS_CHAR(&Global_13104[13] + 16));
				Function_79(&iLocal_62 + 2688, GET_OBJECT_FROM_PERS_CHAR(&Global_13104[03] + 16));
				Function_79(&iLocal_62 + 2752, GET_OBJECT_FROM_PERS_CHAR(&Global_13104[33] + 16));
				Function_79(&iLocal_62 + 2832, GET_OBJECT_FROM_PERS_CHAR(&Global_13104[93] + 16));
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_62, "ratv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_62, "ratv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_62, "ratv_players_room"));
				}
				else
				{
					LOG_ERROR("RAT: Cannot find ratv_players_room to restrict players room");
				}
				Function_75(&Global_11222, &Global_13104, &uLocal_860, &Global_10996, iScriptParam_0);
				if (Function_90(&(Global_43791[iScriptParam_0]), 256) || !Function_74(2))
				{
					iLocal_1192 = 1;
				}
				Function_67(3, &iLocal_62 + 2840, &iLocal_62 + 2584, &iLocal_62 + 2616, Function_73(iScriptParam_0, "rathskellerFork", "saloon01", 5), 0, &iLocal_4 + 224);
				if (Global_6623)
				{
				}
				Function_94(&(Global_43791[iScriptParam_0]), 8);
				if (Function_90(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_66(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_788 = 10;
				}
				else
				{
					iLocal_788 = 7;
				}
				bLocal_789 = false;
				break;
			
			case 0x00000007:
				uVar0 = uVar0;
				Function_52(StackVal, &Global_98318, 5, Global_46796[1], "$/content/Frontier/Mini_Games/HorseShoes_RAT/HorseShoes_RAT", 4294967295, 0, "RatHorseShoes", 350, Vector(-3662,194f, 42,235f, 2134,375f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "ratv_horseshoepit"));
				if (Function_51())
				{
					Function_52(StackVal, &Global_98318, 2, Global_46796[1], "$/content/Frontier/Mini_Games/BlackJack_RAT/BlackJack_RAT", 4294967295, 0, "RatBlackJackHC", 349, Vector(-3640,282f, 42,782f, 2104,079f), 10.0f, 0, 0);
					Function_50(&Global_98318, 2, 10);
				}
				else
				{
					Function_52(StackVal, &Global_98318, 2, Global_46796[1], "$/content/Frontier/Mini_Games/BlackJack_RAT/BlackJack_RAT", 4294967295, 0, "RatBlackJack", 349, Vector(-3640,282f, 42,782f, 2104,079f), 10.0f, 0, 0);
					Function_50(&Global_98318, 2, 20);
				}
				Function_44(iScriptParam_0);
				iLocal_788 = 8;
				bLocal_789 = false;
				break;
			
			case 0x00000008:
				if (Function_39(iScriptParam_0, &Global_11222, iLocal_1192))
				{
					Function_35(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_31(2, 4294967295, 4294967295, 0, 3);
					Function_28(&iLocal_4);
				}
				else
				{
					Function_35(1, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_31(0, 8, 4, 5, 2);
					Function_28(&iLocal_4);
				}
				Function_94(&(Global_43791[iScriptParam_0]), 512);
				iLocal_788 = 9;
				bLocal_789 = false;
				break;
			
			case 0x00000009:
				Function_26(&iLocal_4, iScriptParam_0);
				Function_94(&(Global_43791[iScriptParam_0]), 4);
				Function_25("Finished Initializing Rathskeller Fork", 5.0f);
				iLocal_788 = 10;
				bLocal_789 = false;
				break;
			
			case 0x0000000A:
				if (!Function_24(Global_98961, 2))
				{
					if (Function_22(&(Global_46796[1])))
					{
						Function_21(&Global_98961, 2);
					}
				}
				Function_18(&vLocal_790);
				if (Function_90(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_788 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_789);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	Function_11(&Global_11222, &Global_13104, iScriptParam_0, (iLocal_1192 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_66(&(Global_43791[iScriptParam_0]), 32);
	Function_66(&(Global_43791[iScriptParam_0]), 64);
	Function_66(&(Global_43791[iScriptParam_0]), 8);
	Function_66(&(Global_43791[iScriptParam_0]), 512);
	Function_66(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_858))
	{
		TERMINATE_SCRIPT(&uLocal_858);
	}
	Function_25("Unloaded Rathskeller Fork", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1344 / 4932
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

void Function_2(int iParam0) //Position: 0x137A / 4986
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x139C / 5020
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x13B2 / 5042
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x13C8 / 5064
{
	Function_6(&iLocal_62 + 8);
	RELEASE_LAYOUT_REF(&iLocal_62);
	return;
}

void Function_6(int iParam0) //Position: 0x13DB / 5083
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x1403 / 5123
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

void Function_8(struct<13> Param0) //Position: 0x154E / 5454
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x156B / 5483
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1589 / 5513
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x1595 / 5525
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
	strcpy(&cVar0, Function_17(bParam2), 64);
	if (Function_16())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_90(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_66(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_15(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_15(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_80(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_15(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_80(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_90(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_74(2) || Function_90(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_15(&(Param0[iVar162]), 2) && !Function_15(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_15(&(Param0[iVar162]), 2) && !Function_15(&(Param0[iVar162]), 4))
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
			Function_94(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x17B3 / 6067
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_81(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_15(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_15(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_81(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1919 / 6425
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

int Function_14(int iParam0) //Position: 0x1944 / 6468
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

bool Function_15(int iParam0, int iParam1) //Position: 0x1978 / 6520
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_16() //Position: 0x1995 / 6549
{
	if (Function_24(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_17(int iParam0) //Position: 0x19B0 / 6576
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

void Function_18(vector3[] vParam0) //Position: 0x1E5E / 7774
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
				Function_21(&vParam0[bVar03] + 16, 64);
				if (Function_24(vParam0[bVar03].f_16, 2))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_24(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_24(vParam0[bVar03].f_16, 16))
				{
					Function_19(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_24(vParam0[bVar03].f_16, 32))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_19(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_19(&vParam0[bVar03] + 16, 64);
				}
				if (Function_24(vParam0[bVar03].f_16, 2))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_24(vParam0[bVar03].f_16, 4))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
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
						if (Function_24(vParam0[iVar13].f_16, 64))
						{
							Function_20(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_20(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_24(vParam0[bVar03].f_16, 64) && Function_24(vParam0[bVar03].f_16, 16))
					{
						Function_20(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_19(&vParam0[bVar03] + 16, 64);
						if (Function_24(vParam0[bVar03].f_16, 1))
						{
							Function_20(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_20(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_24(vParam0[bVar03].f_16, 64) && Function_24(vParam0[bVar03].f_16, 16))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_19(&vParam0[bVar03] + 16, 64);
					if (Function_24(vParam0[bVar03].f_16, 1))
					{
						Function_20(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_20(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_24(vParam0[bVar03].f_16, 64))
					{
						if (Function_24(vParam0[bVar03].f_16, 32))
						{
							Function_20(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_20(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_24(vParam0[bVar03].f_16, 8))
					{
						Function_20(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_20(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_19(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_24(vParam0[bVar03].f_16, 64))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_24(vParam0[bVar03].f_16, 8))
				{
					Function_20(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_19(&vParam0[bVar03] + 16, 64);
					Function_20(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_24(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0x268E / 9870
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_20(struct<17> Param0) //Position: 0x26A4 / 9892
{
	if (Function_24(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_21(var uParam0, int iParam1) //Position: 0x26CD / 9933
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_22(int iParam0) //Position: 0x26DE / 9950
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_23(iParam0, iVar1);
		uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
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

struct<8> Function_23(int iParam0, int iParam1) //Position: 0x2774 / 10100
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

bool Function_24(var uParam0, int iParam1) //Position: 0x2929 / 10537
{
	return (uParam0 && iParam1) == 0;
}

void Function_25(char* cParam0) //Position: 0x2936 / 10550
{
	if (!Function_74(128))
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

void Function_26(int iParam0, bool bParam1) //Position: 0x2976 / 10614
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
		Function_27(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x2A66 / 10854
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_28(int iParam0) //Position: 0x2A73 / 10867
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_30(), 3, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_29(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_29(var uParam0) //Position: 0x2B6F / 11119
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_30() //Position: 0x2B8C / 11148
{
	int iVar0;
	
	return &iVar0;
}

void Function_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2B95 / 11157
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
		Function_32();
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

void Function_32() //Position: 0x2C83 / 11395
{
	int iVar0;
	
	Global_41176 = Function_33(StackVal);
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

int Function_33(int iParam0) //Position: 0x2CD1 / 11473
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_34(bool bParam0) //Position: 0x2CE9 / 11497
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_35(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x2CFE / 11518
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
		Function_38();
	}
	if (&bParam5)
	{
		Function_36(1048576);
	}
}

void Function_36(int iParam0) //Position: 0x2E0C / 11788
{
	Function_37(&Global_43580, iParam0);
	return;
}

void Function_37(var uParam0, var uParam1) //Position: 0x2E1A / 11802
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_38() //Position: 0x2E39 / 11833
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_36(16384);
	}
	return;
}

bool Function_39(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x2E55 / 11861
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_90(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_40(49, 0))
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

int Function_40(var uParam0, bool bParam1) //Position: 0x2F13 / 12051
{
	int iVar0;
	
	iVar0 = Function_42(uParam0);
	if (!Function_41(iVar0))
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

bool Function_41(int iParam0) //Position: 0x2F51 / 12113
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_42(int iParam0) //Position: 0x2F68 / 12136
{
	if (!Function_43(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_43(int iParam0) //Position: 0x2F82 / 12162
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x2F98 / 12184
{
	Function_46(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_45(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_45(struct<149> Param0) //Position: 0x2FFF / 12287
{
	Param0.f_148 = uParam1;
	(&Param0 + 148)->f_4 = &fParam2;
	return;
}

void Function_46(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x3016 / 12310
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_47(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, &uParam10, uParam11, uParam12, &uParam13, &uParam14, &uParam15, &uParam16);
	Global_27462[iParam052].f_156 = uParam9;
}

void Function_47(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x305D / 12381
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
	if (!Function_16())
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
					bVar2 = Function_49(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_48(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_49(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_48(int iParam0, int iParam1) //Position: 0x341B / 13339
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_49(int iParam0) //Position: 0x343E / 13374
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_50(struct<28>[] Param0, int iParam1, int iParam2) //Position: 0x3455 / 13397
{
	Param0[iParam128].f_196 = iParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

bool Function_51() //Position: 0x347C / 13436
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_52(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x34A7 / 13479
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
	Param0[iParam128].f_4 = Function_61(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_60(iParam1))
	{
		Function_53(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_53(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x3610 / 13840
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
	if (Function_59(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_58(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_57(StackVal, Param2);
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
		Function_56(uVar3);
		Var6 = Function_56(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_56(StackVal);
				Var4 = Function_56(StackVal);
				if (Function_55(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_54(iParam1), 0.0f, 2, iVar2);
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

int Function_54(int iParam0) //Position: 0x37F9 / 14329
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

bool Function_55(struct<2> Param0, struct<2> Param2) //Position: 0x3930 / 14640
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_56(int iParam0) //Position: 0x395C / 14684
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

var Function_57(vector3 vParam0) //Position: 0x39B3 / 14771
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

int Function_58(int iParam0) //Position: 0x3A01 / 14849
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

bool Function_59(vector3 vParam0) //Position: 0x3AB9 / 15033
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_60(int iParam0) //Position: 0x3AD1 / 15057
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_61(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3AF4 / 15092
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_65(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_62(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_62(bParam0, bParam1, bParam2, 4294967295);
}

int Function_62(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B52 / 15186
{
	var uVar0;
	
	if (!Function_64(bParam2))
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
	uVar0 = Function_65(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_63(uVar0);
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

var Function_63(int iParam0) //Position: 0x3CB6 / 15542
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

bool Function_64(int iParam0) //Position: 0x3CF4 / 15604
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_65(int iParam0, int iParam1, int iParam2) //Position: 0x3D09 / 15625
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_66(var uParam0, int iParam1) //Position: 0x3D29 / 15657
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_67(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x3D43 / 15683
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_72(&uParam1, &uParam2);
	if (!Function_71(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_70(&uParam4, 0);
		}
		else
		{
			Function_69(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_70(&iParam5, 0);
		}
		else
		{
			Function_69(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_68(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_68(&(uVar2[1]), "UseCase1"));
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

var Function_68(var uParam0, int iParam1) //Position: 0x4115 / 16661
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_69(var uParam0, int iParam1) //Position: 0x4124 / 16676
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

void Function_70(var uParam0, int iParam1) //Position: 0x417F / 16767
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

bool Function_71(int iParam0) //Position: 0x41D7 / 16855
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_72(var uParam0, int iParam1) //Position: 0x41ED / 16877
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

var Function_73(int iParam0, char* cParam1, bool bParam3) //Position: 0x434B / 17227
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_4(iParam0))
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

bool Function_74(int iParam0) //Position: 0x43F0 / 17392
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_75(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x440C / 17420
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_74(2))
	{
		return;
	}
	if (Function_90(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_15(&(Param0[iVar02]), 2))
		{
			if (Function_76(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_66(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_94(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_76(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x44C4 / 17604
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_90(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_15(&iParam0, 2))
	{
		return 1;
	}
	if (Function_15(&iParam0, 4))
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
		(&iParam1 + 16) = Function_78(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_59(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_80(&iParam0, 4);
	}
	Function_77(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_77(int iParam0, struct<2> Param1) //Position: 0x4645 / 17989
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_59(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_59(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_59(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_59(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_59(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_59(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_78(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x478B / 18315
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_30(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_79(var uParam0, int iParam1) //Position: 0x48B2 / 18610
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

void Function_80(int iParam0, int iParam1) //Position: 0x48FF / 18687
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x4919 / 18713
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_82(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x492A / 18730
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

void Function_83(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4989 / 18825
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_55(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_84(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x49F0 / 18928
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_55(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_85(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4A59 / 19033
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_55(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_86(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4AC4 / 19140
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_55(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_87(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4B2A / 19242
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_55(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_88(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4B93 / 19347
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_55(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_89(int iParam0) //Position: 0x4BF7 / 19447
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_90(&(Global_43791[iParam0]), 4);
}

bool Function_90(var uParam0, int iParam1) //Position: 0x4C13 / 19475
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_91(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x4C30 / 19504
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
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_16())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_90(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_15(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_15(&(Param0[iVar02]), 8))
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

void Function_92(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x4D19 / 19737
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_17(bParam2), 64);
	if (Function_16())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_90(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_94(&(Global_43791[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_81(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_81(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_93(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4E09 / 19977
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_21(&vVar0 + 16, 1);
	}
	else
	{
		Function_19(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_21(&vVar0 + 16, 2);
	}
	else
	{
		Function_19(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_21(&vVar0 + 16, 4);
	}
	else
	{
		Function_19(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_21(&vVar0 + 16, 8);
	}
	else
	{
		Function_19(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_21(&vVar0 + 16, 16);
	}
	else
	{
		Function_19(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_21(&vVar0 + 16, 32);
	}
	else
	{
		Function_19(&vVar0 + 16, 32);
	}
	Function_19(&vVar0 + 16, 64);
	Function_19(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_94(var uParam0, int iParam1) //Position: 0x4ED6 / 20182
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_95() //Position: 0x4EE7 / 20199
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
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	var uVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar58;
	var uVar59;
	var uVar60;
	var uVar61;
	var uVar62;
	var uVar63;
	var uVar64;
	var uVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	
	Function_103(3, 3);
	uVar0 = &uVar0;
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/knl_hoe_soil", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/pitch_hay", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/cow_knl", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/multistage_hoe", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/whore_and_john", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/whore_flirt", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_link", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/prostitute_bed", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_washfacebowl_n_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_campfire", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_101(&iLocal_62 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	if (!Function_96(&iLocal_62 + 8))
	{
		return 0;
	}
	iLocal_62 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_62))
	{
		iLocal_62 = CREATE_LAYOUT("RathskellerFork_layout");
	}
	*(&iLocal_62 + 848) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_62, 8, 0);
	*(&iLocal_62 + 856[03]) = Vector(-3690,421f, 42,76657f, 2117,526f);
	*(&iLocal_62 + 856[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag21", Vector(-3690,421f, 42,76657f, 2117,526f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_62 + 848);
	*(&iLocal_62 + 856[13]) = Vector(-3688,761f, 42,76756f, 2115,26f);
	*(&iLocal_62 + 856[13] + 12) = Vector(0.0f, -99,3821f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag1", Vector(-3688,761f, 42,76756f, 2115,26f), Vector(0.0f, -99,3821f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_62 + 848);
	*(&iLocal_62 + 856[23]) = Vector(-3688,601f, 42,77974f, 2117,189f);
	*(&iLocal_62 + 856[23] + 12) = Vector(0.0f, -59,99129f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag2", Vector(-3688,601f, 42,77974f, 2117,189f), Vector(0.0f, -59,99129f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_62 + 848);
	*(&iLocal_62 + 856[33]) = Vector(-3685,851f, 42,76657f, 2117,984f);
	*(&iLocal_62 + 856[33] + 12) = Vector(2,574276f, -121,3001f, -1,489254f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag3", Vector(-3685,851f, 42,76657f, 2117,984f), Vector(2,574276f, -121,3001f, -1,489254f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_62 + 848);
	*(&iLocal_62 + 856[43]) = Vector(-3687,377f, 42,76657f, 2119,794f);
	*(&iLocal_62 + 856[43] + 12) = Vector(0.0f, -53,5044f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag4", Vector(-3687,377f, 42,76657f, 2119,794f), Vector(0.0f, -53,5044f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_62 + 848);
	*(&iLocal_62 + 856[53]) = Vector(-3686,753f, 42,7828f, 2121,331f);
	*(&iLocal_62 + 856[53] + 12) = Vector(0.0f, -42,168f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag5", Vector(-3686,753f, 42,7828f, 2121,331f), Vector(0.0f, -42,168f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_62 + 848);
	*(&iLocal_62 + 856[63]) = Vector(-3685,178f, 42,76667f, 2110,612f);
	*(&iLocal_62 + 856[63] + 12) = Vector(0.0f, -7,313276f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag6", Vector(-3685,178f, 42,76667f, 2110,612f), Vector(0.0f, -7,313276f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_62 + 848);
	*(&iLocal_62 + 856[73]) = Vector(-3681,503f, 42,76526f, 2108,236f);
	*(&iLocal_62 + 856[73] + 12) = Vector(0.0f, -136,4688f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag7", Vector(-3681,503f, 42,76526f, 2108,236f), Vector(0.0f, -136,4688f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_62 + 848);
	*(&iLocal_62 + 856[83]) = Vector(-3683,452f, 42,76667f, 2110,805f);
	*(&iLocal_62 + 856[83] + 12) = Vector(0.0f, -31,74464f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag8", Vector(-3683,452f, 42,76667f, 2110,805f), Vector(0.0f, -31,74464f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_62 + 848);
	*(&iLocal_62 + 856[93]) = Vector(-3681,585f, 42,76667f, 2110,805f);
	*(&iLocal_62 + 856[93] + 12) = Vector(0.0f, -47,57779f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag9", Vector(-3681,585f, 42,76667f, 2110,805f), Vector(0.0f, -47,57779f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_62 + 848);
	*(&iLocal_62 + 856[103]) = Vector(-3680,94f, 42,76666f, 2112,286f);
	*(&iLocal_62 + 856[103] + 12) = Vector(0.0f, -50,56416f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag10", Vector(-3680,94f, 42,76666f, 2112,286f), Vector(0.0f, -50,56416f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_62 + 848);
	*(&iLocal_62 + 856[113]) = Vector(-3681,104f, 42,76667f, 2113,848f);
	*(&iLocal_62 + 856[113] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag11", Vector(-3681,104f, 42,76667f, 2113,848f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_62 + 848);
	*(&iLocal_62 + 856[123]) = Vector(-3678,296f, 42,76667f, 2112,776f);
	*(&iLocal_62 + 856[123] + 12) = Vector(0.0f, -50,14564f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag12", Vector(-3678,296f, 42,76667f, 2112,776f), Vector(0.0f, -50,14564f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_62 + 848);
	*(&iLocal_62 + 856[133]) = Vector(-3676,016f, 42,76659f, 2102,59f);
	*(&iLocal_62 + 856[133] + 12) = Vector(0.0f, -96,77204f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag13", Vector(-3676,016f, 42,76659f, 2102,59f), Vector(0.0f, -96,77204f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_62 + 848);
	*(&iLocal_62 + 856[143]) = Vector(-3678,728f, 42,79834f, 2104,601f);
	*(&iLocal_62 + 856[143] + 12) = Vector(0.0f, -11,86133f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag14", Vector(-3678,728f, 42,79834f, 2104,601f), Vector(0.0f, -11,86133f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_62 + 848);
	*(&iLocal_62 + 856[153]) = Vector(-3677,173f, 42,76661f, 2104,406f);
	*(&iLocal_62 + 856[153] + 12) = Vector(-1,71737f, -62,85891f, 3,577658f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag15", Vector(-3677,173f, 42,76661f, 2104,406f), Vector(-1,71737f, -62,85891f, 3,577658f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_62 + 848);
	*(&iLocal_62 + 856[163]) = Vector(-3677,039f, 42,76942f, 2107,316f);
	*(&iLocal_62 + 856[163] + 12) = Vector(0.0f, 39,49364f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag16", Vector(-3677,039f, 42,76942f, 2107,316f), Vector(0.0f, 39,49364f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_62 + 848);
	*(&iLocal_62 + 856[173]) = Vector(-3675,624f, 42,77847f, 2104,71f);
	*(&iLocal_62 + 856[173] + 12) = Vector(0.0f, -79,55956f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag17", Vector(-3675,624f, 42,77847f, 2104,71f), Vector(0.0f, -79,55956f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_62 + 848);
	*(&iLocal_62 + 856[183]) = Vector(-3675,201f, 42,76962f, 2106,584f);
	*(&iLocal_62 + 856[183] + 12) = Vector(0.0f, -46,32114f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag18", Vector(-3675,201f, 42,76962f, 2106,584f), Vector(0.0f, -46,32114f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_62 + 848);
	*(&iLocal_62 + 856[193]) = Vector(-3673,926f, 42,65609f, 2107,91f);
	*(&iLocal_62 + 856[193] + 12) = Vector(0.0f, -34,26025f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag20", Vector(-3673,926f, 42,65609f, 2107,91f), Vector(0.0f, -34,26025f, 0.0f));
	DECOR_SET_STRING(&uVar20, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_62 + 848);
	*(&iLocal_62 + 856[203]) = Vector(-3673,49f, 42,77097f, 2099,876f);
	*(&iLocal_62 + 856[203] + 12) = Vector(0.0f, -8,626788f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag26", Vector(-3673,49f, 42,77097f, 2099,876f), Vector(0.0f, -8,626788f, 0.0f));
	DECOR_SET_STRING(&uVar21, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_62 + 848);
	*(&iLocal_62 + 856[213]) = Vector(-3671,24f, 42,77168f, 2097,54f);
	*(&iLocal_62 + 856[213] + 12) = Vector(0.0f, -88,5133f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag22", Vector(-3671,24f, 42,77168f, 2097,54f), Vector(0.0f, -88,5133f, 0.0f));
	DECOR_SET_STRING(&uVar22, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_62 + 848);
	*(&iLocal_62 + 856[223]) = Vector(-3670,883f, 42,77168f, 2099,783f);
	*(&iLocal_62 + 856[223] + 12) = Vector(0.0f, -48,68703f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag23", Vector(-3670,883f, 42,77168f, 2099,783f), Vector(0.0f, -48,68703f, 0.0f));
	DECOR_SET_STRING(&uVar23, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_62 + 848);
	*(&iLocal_62 + 856[233]) = Vector(-3667,238f, 42,77149f, 2100,325f);
	*(&iLocal_62 + 856[233] + 12) = Vector(0.0f, -42,16856f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag24", Vector(-3667,238f, 42,77149f, 2100,325f), Vector(0.0f, -42,16856f, 0.0f));
	DECOR_SET_STRING(&uVar24, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_62 + 848);
	*(&iLocal_62 + 856[243]) = Vector(-3665,39f, 42,77127f, 2102,768f);
	*(&iLocal_62 + 856[243] + 12) = Vector(6,483119f, -77,13678f, -7,462729f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag25", Vector(-3665,39f, 42,77127f, 2102,768f), Vector(6,483119f, -77,13678f, -7,462729f));
	DECOR_SET_STRING(&uVar25, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_62 + 848);
	*(&iLocal_62 + 856[253]) = Vector(-3669,585f, 42,768f, 2103,871f);
	*(&iLocal_62 + 856[253] + 12) = Vector(0.0f, -43,54906f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag105", Vector(-3669,585f, 42,768f, 2103,871f), Vector(0.0f, -43,54906f, 0.0f));
	DECOR_SET_STRING(&uVar26, "Useanim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_62 + 848);
	*(&iLocal_62 + 856[263]) = Vector(-3667,494f, 42,768f, 2105,735f);
	*(&iLocal_62 + 856[263] + 12) = Vector(0.0f, -100,0641f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag103", Vector(-3667,494f, 42,768f, 2105,735f), Vector(0.0f, -100,0641f, 0.0f));
	DECOR_SET_STRING(&uVar27, "Useanim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_62 + 848);
	*(&iLocal_62 + 856[273]) = Vector(-3674,031f, 42,768f, 2100,339f);
	*(&iLocal_62 + 856[273] + 12) = Vector(0.0f, 131,7315f, 0.0f);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag104", Vector(-3674,031f, 42,768f, 2100,339f), Vector(0.0f, 131,7315f, 0.0f));
	DECOR_SET_STRING(&uVar28, "Useanim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_62 + 848);
	*(&iLocal_62 + 1536) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", &iLocal_62, 8, 0);
	*(&iLocal_62 + 1544[03]) = Vector(-3633,964f, 42,75944f, 2103,98f);
	*(&iLocal_62 + 1544[03] + 12) = Vector(0.0f, -186,5125f, 0.0f);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag47", Vector(-3633,964f, 42,75944f, 2103,98f), Vector(0.0f, -186,5125f, 0.0f));
	DECOR_SET_STRING(&uVar29, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[13]) = Vector(-3635,916f, 42,75944f, 2101,338f);
	*(&iLocal_62 + 1544[13] + 12) = Vector(0.0f, 177,4509f, 0.0f);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag28", Vector(-3635,916f, 42,75944f, 2101,338f), Vector(0.0f, 177,4509f, 0.0f));
	DECOR_SET_STRING(&uVar30, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[23]) = Vector(-3638,646f, 42,75944f, 2101,697f);
	*(&iLocal_62 + 1544[23] + 12) = Vector(0.0f, 253,8592f, 0.0f);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag29", Vector(-3638,646f, 42,75944f, 2101,697f), Vector(0.0f, 253,8592f, 0.0f));
	DECOR_SET_STRING(&uVar31, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[33]) = Vector(-3641,857f, 42,75944f, 2095,534f);
	*(&iLocal_62 + 1544[33] + 12) = Vector(0.0f, -76,46706f, 0.0f);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag30", Vector(-3641,857f, 42,75944f, 2095,534f), Vector(0.0f, -76,46706f, 0.0f));
	DECOR_SET_STRING(&uVar32, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[43]) = Vector(-3639,907f, 42,75944f, 2097,151f);
	*(&iLocal_62 + 1544[43] + 12) = Vector(0.0f, -53,90505f, 0.0f);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag31", Vector(-3639,907f, 42,75944f, 2097,151f), Vector(0.0f, -53,90505f, 0.0f));
	DECOR_SET_STRING(&uVar33, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[53]) = Vector(-3638,593f, 42,75944f, 2098,571f);
	*(&iLocal_62 + 1544[53] + 12) = Vector(0.0f, -53,43711f, 0.0f);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag32", Vector(-3638,593f, 42,75944f, 2098,571f), Vector(0.0f, -53,43711f, 0.0f));
	DECOR_SET_STRING(&uVar34, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[63]) = Vector(-3644,539f, 42,75944f, 2097,561f);
	*(&iLocal_62 + 1544[63] + 12) = Vector(0.0f, -113,4357f, 0.0f);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag33", Vector(-3644,539f, 42,75944f, 2097,561f), Vector(0.0f, -113,4357f, 0.0f));
	DECOR_SET_STRING(&uVar35, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[73]) = Vector(-3640,97f, 42,75944f, 2101,338f);
	*(&iLocal_62 + 1544[73] + 12) = Vector(0.0f, -133,2514f, 0.0f);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag34", Vector(-3640,97f, 42,75944f, 2101,338f), Vector(0.0f, -133,2514f, 0.0f));
	DECOR_SET_STRING(&uVar36, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[83]) = Vector(-3636,482f, 42,75944f, 2106,477f);
	*(&iLocal_62 + 1544[83] + 12) = Vector(0.0f, -171,396f, 0.0f);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag35", Vector(-3636,482f, 42,75944f, 2106,477f), Vector(0.0f, -171,396f, 0.0f));
	DECOR_SET_STRING(&uVar37, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[93]) = Vector(-3638,555f, 42,75944f, 2107,986f);
	*(&iLocal_62 + 1544[93] + 12) = Vector(0.0f, 164,1823f, 0.0f);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag36", Vector(-3638,555f, 42,75944f, 2107,986f), Vector(0.0f, 164,1823f, 0.0f));
	DECOR_SET_STRING(&uVar38, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[103]) = Vector(-3638,548f, 42,75944f, 2104,128f);
	*(&iLocal_62 + 1544[103] + 12) = Vector(0.0f, 148,0136f, 0.0f);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag37", Vector(-3638,548f, 42,75944f, 2104,128f), Vector(0.0f, 148,0136f, 0.0f));
	DECOR_SET_STRING(&uVar39, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[113]) = Vector(-3642,714f, 42,75944f, 2104,737f);
	*(&iLocal_62 + 1544[113] + 12) = Vector(0.0f, 267,3085f, 0.0f);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag38", Vector(-3642,714f, 42,75944f, 2104,737f), Vector(0.0f, 267,3085f, 0.0f));
	DECOR_SET_STRING(&uVar40, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[123]) = Vector(-3647,173f, 42,75944f, 2099,934f);
	*(&iLocal_62 + 1544[123] + 12) = Vector(0.0f, -112,4485f, 0.0f);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag39", Vector(-3647,173f, 42,75944f, 2099,934f), Vector(0.0f, -112,4485f, 0.0f));
	DECOR_SET_STRING(&uVar41, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[133]) = Vector(-3649,158f, 42,75944f, 2100,696f);
	*(&iLocal_62 + 1544[133] + 12) = Vector(0.0f, -222,4845f, 0.0f);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag40", Vector(-3649,158f, 42,75944f, 2100,696f), Vector(0.0f, -222,4845f, 0.0f));
	DECOR_SET_STRING(&uVar42, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[143]) = Vector(-3647,137f, 42,75944f, 2102,642f);
	*(&iLocal_62 + 1544[143] + 12) = Vector(0.0f, -14,34616f, 0.0f);
	uVar43 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag41", Vector(-3647,137f, 42,75944f, 2102,642f), Vector(0.0f, -14,34616f, 0.0f));
	DECOR_SET_STRING(&uVar43, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar43, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[153]) = Vector(-3645,21f, 42,75944f, 2103,936f);
	*(&iLocal_62 + 1544[153] + 12) = Vector(0.0f, -64,68635f, 0.0f);
	uVar44 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag42", Vector(-3645,21f, 42,75944f, 2103,936f), Vector(0.0f, -64,68635f, 0.0f));
	DECOR_SET_STRING(&uVar44, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar44, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[163]) = Vector(-3639,448f, 42,75944f, 2109,435f);
	*(&iLocal_62 + 1544[163] + 12) = Vector(0.0f, -202,6411f, 0.0f);
	uVar45 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag43", Vector(-3639,448f, 42,75944f, 2109,435f), Vector(0.0f, -202,6411f, 0.0f));
	DECOR_SET_STRING(&uVar45, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar45, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[173]) = Vector(-3642,616f, 42,75944f, 2109,995f);
	*(&iLocal_62 + 1544[173] + 12) = Vector(0.0f, -137,0038f, 0.0f);
	uVar46 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag44", Vector(-3642,616f, 42,75944f, 2109,995f), Vector(0.0f, -137,0038f, 0.0f));
	DECOR_SET_STRING(&uVar46, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar46, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[183]) = Vector(-3650,916f, 42,75944f, 2098,718f);
	*(&iLocal_62 + 1544[183] + 12) = Vector(0.0f, 169,8372f, 0.0f);
	uVar47 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag45", Vector(-3650,916f, 42,75944f, 2098,718f), Vector(0.0f, 169,8372f, 0.0f));
	DECOR_SET_STRING(&uVar47, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar47, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[193]) = Vector(-3653,219f, 42,75944f, 2097,228f);
	*(&iLocal_62 + 1544[193] + 12) = Vector(0.0f, -208,6359f, 0.0f);
	uVar48 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag46", Vector(-3653,219f, 42,75944f, 2097,228f), Vector(0.0f, -208,6359f, 0.0f));
	DECOR_SET_STRING(&uVar48, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar48, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[203]) = Vector(-3650,011f, 42,77294f, 2088,753f);
	*(&iLocal_62 + 1544[203] + 12) = Vector(0.0f, -138,8999f, 0.0f);
	uVar49 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag69", Vector(-3650,011f, 42,77294f, 2088,753f), Vector(0.0f, -138,8999f, 0.0f));
	DECOR_SET_STRING(&uVar49, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar49, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[213]) = Vector(-3652,235f, 42,77294f, 2090,793f);
	*(&iLocal_62 + 1544[213] + 12) = Vector(0.0f, -131,6734f, 0.0f);
	uVar50 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag48", Vector(-3652,235f, 42,77294f, 2090,793f), Vector(0.0f, -131,6734f, 0.0f));
	DECOR_SET_STRING(&uVar50, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar50, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[223]) = Vector(-3654,371f, 42,77294f, 2093,413f);
	*(&iLocal_62 + 1544[223] + 12) = Vector(0.0f, -84,18175f, 0.0f);
	uVar51 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag49", Vector(-3654,371f, 42,77294f, 2093,413f), Vector(0.0f, -84,18175f, 0.0f));
	DECOR_SET_STRING(&uVar51, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar51, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[233]) = Vector(-3656,444f, 42,77294f, 2094,846f);
	*(&iLocal_62 + 1544[233] + 12) = Vector(0.0f, -97,07621f, 0.0f);
	uVar52 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag59", Vector(-3656,444f, 42,77294f, 2094,846f), Vector(0.0f, -97,07621f, 0.0f));
	DECOR_SET_STRING(&uVar52, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar52, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[243]) = Vector(-3656,406f, 42,77294f, 2096,931f);
	*(&iLocal_62 + 1544[243] + 12) = Vector(0.0f, -121,33f, 0.0f);
	uVar53 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag60", Vector(-3656,406f, 42,77294f, 2096,931f), Vector(0.0f, -121,33f, 0.0f));
	DECOR_SET_STRING(&uVar53, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar53, &iLocal_62 + 1536);
	*(&iLocal_62 + 1544[253]) = Vector(-3650,087f, 42,768f, 2102,919f);
	*(&iLocal_62 + 1544[253] + 12) = Vector(0.0f, -220,8158f, 0.0f);
	uVar54 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "FLAG0", Vector(-3650,087f, 42,768f, 2102,919f), Vector(0.0f, -220,8158f, 0.0f));
	DECOR_SET_STRING(&uVar54, "Useanim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar54, &iLocal_62 + 1536);
	*(&iLocal_62 + 2176) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", &iLocal_62, 8, 0);
	*(&iLocal_62 + 2184[03]) = Vector(-3696,788f, 42,351f, 2128,458f);
	*(&iLocal_62 + 2184[03] + 12) = Vector(0.0f, 158,399f, 0.0f);
	uVar55 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag72", Vector(-3696,788f, 42,351f, 2128,458f), Vector(0.0f, 158,399f, 0.0f));
	DECOR_SET_STRING(&uVar55, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar55, &iLocal_62 + 2176);
	*(&iLocal_62 + 2184[13]) = Vector(-3697,068f, 42,315f, 2123,621f);
	*(&iLocal_62 + 2184[13] + 12) = Vector(0.0f, 368,8086f, 0.0f);
	uVar56 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag70", Vector(-3697,068f, 42,315f, 2123,621f), Vector(0.0f, 368,8086f, 0.0f));
	DECOR_SET_STRING(&uVar56, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar56, &iLocal_62 + 2176);
	*(&iLocal_62 + 2184[23]) = Vector(-3695,489f, 42,313f, 2125,914f);
	*(&iLocal_62 + 2184[23] + 12) = Vector(0.0f, 144,37f, 0.0f);
	uVar57 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag102", Vector(-3695,489f, 42,313f, 2125,914f), Vector(0.0f, 144,37f, 0.0f));
	DECOR_SET_STRING(&uVar57, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar57, &iLocal_62 + 2176);
	*(&iLocal_62 + 2184[33]) = Vector(-3691,544f, 42,27983f, 2121,915f);
	*(&iLocal_62 + 2184[33] + 12) = Vector(0.0f, -48,48328f, 0.0f);
	uVar58 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag101", Vector(-3691,544f, 42,27983f, 2121,915f), Vector(0.0f, -48,48328f, 0.0f));
	DECOR_SET_STRING(&uVar58, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar58, &iLocal_62 + 2176);
	*(&iLocal_62 + 2288) = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", &iLocal_62, 8, 0);
	*(&iLocal_62 + 2296[03]) = Vector(-3626,25f, 42,33508f, 2126,921f);
	*(&iLocal_62 + 2296[03] + 12) = Vector(-0,8580113f, -3,415175f, 0,2293949f);
	uVar59 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag100", Vector(-3626,25f, 42,33508f, 2126,921f), Vector(-0,8580113f, -3,415175f, 0,2293949f));
	DECOR_SET_STRING(&uVar59, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar59, &iLocal_62 + 2288);
	*(&iLocal_62 + 2328) = CREATE_OBJECTSET_IN_LAYOUT("nhoegrpSet", &iLocal_62, 8, 0);
	*(&iLocal_62 + 2336[03]) = Vector(-3698,595f, 42,353f, 2127,94f);
	*(&iLocal_62 + 2336[03] + 12) = Vector(0.0f, 25,743f, 0.0f);
	uVar60 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag106", Vector(-3698,595f, 42,353f, 2127,94f), Vector(0.0f, 25,743f, 0.0f));
	DECOR_SET_STRING(&uVar60, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar60, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[13]) = Vector(-3697,83f, 42,319f, 2124,484f);
	*(&iLocal_62 + 2336[13] + 12) = Vector(0.0f, 44,604f, 0.0f);
	uVar61 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag107", Vector(-3697,83f, 42,319f, 2124,484f), Vector(0.0f, 44,604f, 0.0f));
	DECOR_SET_STRING(&uVar61, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar61, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[23]) = Vector(-3696,609f, 42,315f, 2122,793f);
	*(&iLocal_62 + 2336[23] + 12) = Vector(0.0f, 28,512f, 0.0f);
	uVar62 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag108", Vector(-3696,609f, 42,315f, 2122,793f), Vector(0.0f, 28,512f, 0.0f));
	DECOR_SET_STRING(&uVar62, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar62, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[33]) = Vector(-3694,974f, 42,278f, 2120,977f);
	*(&iLocal_62 + 2336[33] + 12) = Vector(0.0f, 58,089f, 0.0f);
	uVar63 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag109", Vector(-3694,974f, 42,278f, 2120,977f), Vector(0.0f, 58,089f, 0.0f));
	DECOR_SET_STRING(&uVar63, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar63, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[43]) = Vector(-3692,893f, 42,22f, 2122,521f);
	*(&iLocal_62 + 2336[43] + 12) = Vector(0.0f, 307,94f, 0.0f);
	uVar64 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag110", Vector(-3692,893f, 42,22f, 2122,521f), Vector(0.0f, 307,94f, 0.0f));
	DECOR_SET_STRING(&uVar64, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar64, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[53]) = Vector(-3694,005f, 42,287f, 2127,495f);
	*(&iLocal_62 + 2336[53] + 12) = Vector(0.0f, 122,822f, 0.0f);
	uVar65 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag111", Vector(-3694,005f, 42,287f, 2127,495f), Vector(0.0f, 122,822f, 0.0f));
	DECOR_SET_STRING(&uVar65, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar65, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[63]) = Vector(-3696,49f, 42,345f, 2127,585f);
	*(&iLocal_62 + 2336[63] + 12) = Vector(0.0f, 358,753f, 0.0f);
	uVar66 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag112", Vector(-3696,49f, 42,345f, 2127,585f), Vector(0.0f, 358,753f, 0.0f));
	DECOR_SET_STRING(&uVar66, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar66, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[73]) = Vector(-3697,156f, 42,34469f, 2122,77f);
	*(&iLocal_62 + 2336[73] + 12) = Vector(0.0f, 93,692f, 0.0f);
	uVar67 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag113", Vector(-3697,156f, 42,34469f, 2122,77f), Vector(0.0f, 93,692f, 0.0f));
	DECOR_SET_STRING(&uVar67, "UseAnim", "exit");
	ADD_OBJECT_TO_OBJECTSET(&uVar67, &iLocal_62 + 2328);
	*(&iLocal_62 + 2336[83]) = Vector(-3697,338f, 42,354f, 2128,995f);
	*(&iLocal_62 + 2336[83] + 12) = Vector(0.0f, 300,583f, 0.0f);
	uVar68 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Flag114", Vector(-3697,338f, 42,354f, 2128,995f), Vector(0.0f, 300,583f, 0.0f));
	DECOR_SET_STRING(&uVar68, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar68, &iLocal_62 + 2328);
	*(&iLocal_62 + 2560) = Vector(-3652,31f, 42,81397f, 2086,111f);
	*(&iLocal_62 + 2560 + 12) = Vector(0.0f, -137,2072f, 0.0f);
	*(&iLocal_62 + 2584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "player_save_flag_RAT", Vector(-3652,31f, 42,81397f, 2086,111f), Vector(0.0f, -137,2072f, 0.0f));
	*(&iLocal_62 + 2592) = Vector(-3650,2f, 42,81396f, 2088,115f);
	*(&iLocal_62 + 2592 + 12) = Vector(0.0f, 44,37267f, 0.0f);
	*(&iLocal_62 + 2616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "player_purchase_flag_RAT", Vector(-3650,2f, 42,81396f, 2088,115f), Vector(0.0f, 44,37267f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-3690,972f, 42,29477f, 2136,922f), Vector(0.0f, -46,26979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel", "repair_kneel", Vector(-3663,223f, 42,33854f, 2140,282f), Vector(0.0f, -132,9075f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "dealer_and_customer", "dealer_and_customer", Vector(-3678,143f, 42,25486f, 2149,356f), Vector(0.0f, -44,55724f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "horse_tend", "horse_tend", Vector(-3667,517f, 42,16472f, 2159,047f), Vector(0.0f, -44,43609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "horse_tend1", "horse_tend", Vector(-3669,857f, 42,16472f, 2156,374f), Vector(0.0f, -44,96939f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "horse_tend2", "horse_tend", Vector(-3664,325f, 42,16472f, 2161,49f), Vector(0.0f, -45,79664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "horse_tend3", "horse_tend", Vector(-3658,466f, 42,16472f, 2142,841f), Vector(0.0f, -409,3874f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_hoe_soil", "knl_hoe_soil", Vector(-3696,611f, 42,37539f, 2129,348f), Vector(0.0f, -4,837045f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_hoe_soil2", "knl_hoe_soil", Vector(-3693,992f, 42,3201f, 2121,669f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "pitch_hay1", "npitch_hay", Vector(-3623,776f, 42,47753f, 2120,917f), Vector(0.0f, -39,90781f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_horseshoe", "stand_horseshoe", Vector(-3668,916f, 42,26382f, 2157,463f), Vector(0.0f, -223,8171f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3693,331f, 41,82631f, 2147,339f), Vector(0.0f, 152,0693f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-3673,459f, 42,80467f, 2110,356f), Vector(0.0f, 225,5732f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3682,397f, 42,77182f, 2121,455f), Vector(0.0f, -23,29353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_hammerground_w_any", "stand_hammerground_w_any", Vector(-3643,018f, 42,77326f, 2115,174f), Vector(0.0f, 79,13505f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel1", "repair_kneel", Vector(-3634,21f, 42,36747f, 2111,366f), Vector(0.0f, -318,2672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "horse_tend4", "horse_tend", Vector(-3658,072f, 42,20523f, 2138,98f), Vector(0.0f, -490,6287f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-3652,983f, 42,20594f, 2131,918f), Vector(0.0f, 133,7825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "cow_knl", "cow_knl", Vector(-3617,306f, 42,4679f, 2117,167f), Vector(0.0f, 11,85904f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Pee", "Pee", Vector(-3689,654f, 42,24635f, 2141,875f), Vector(0.0f, -249,466f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "look_distance_binocs", "look_distance_binocs", Vector(-3630,075f, 42,2864f, 2137,849f), Vector(0.0f, -135,5146f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lean_fence_H_talking1", "lean_fence_H_talking", Vector(-3651,179f, 42,4371f, 2157,729f), Vector(0.0f, -135,0432f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_chopveggies_w_any", "stand_chopveggies_w_any", Vector(-3676,219f, 42,76995f, 2100,772f), Vector(0.0f, -224,7426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_stirringpot_w_any", "stand_stirringpot_w_any", Vector(-3672,016f, 42,76637f, 2101,302f), Vector(0.0f, 127,0199f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "look_out_window_R", "look_out_window_R", Vector(-3634,856f, 42,768f, 2100,554f), Vector(0.0f, -44,7819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand1", "smoking_stand", Vector(-3671,104f, 42,7681f, 2108,43f), Vector(0.0f, -103,1583f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-3649,59f, 42,86943f, 2106,141f), Vector(0.0f, -225,4669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-3676,486f, 42,76659f, 2114,697f), Vector(0.0f, -97,41667f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand2", "smoking_stand", Vector(-3641,632f, 42,76752f, 2107,387f), Vector(0.0f, -27,25682f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3667,49f, 42,5698f, 2096,09f), Vector(0.0f, -47,31372f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-3644,648f, 42,77397f, 2098,745f), Vector(0.0f, -62,41047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand3", "smoking_stand", Vector(-3648,117f, 42,77431f, 2099,389f), Vector(0.0f, 188,7344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "nlean_rail", "nlean_rail", Vector(-3655,866f, 42,22029f, 2132,881f), Vector(0.0f, 226,4491f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "sit_fence_low", "sit_fence_low", Vector(-3642,916f, 42,35201f, 2142,815f), Vector(0.0f, -225,5986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand4", "smoking_stand", Vector(-3644,14f, 42,76117f, 2100.0f), Vector(0.0f, 199,6582f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel2", "repair_kneel", Vector(-3658,676f, 42,15199f, 2163,222f), Vector(0.0f, -223,7318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-3637,961f, 42,76351f, 2102,534f), Vector(0.0f, -117,2092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3639,935f, 42,76358f, 2101,6f), Vector(0.0f, -180,2906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-3640,04f, 42,76315f, 2103,36f), Vector(0.0f, -1,545796f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-3620,629f, 42,31486f, 2124,605f), Vector(0.0f, 44,51436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel3", "repair_kneel", Vector(-3625,358f, 42,48705f, 2116,833f), Vector(0.0f, -135,5011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "look_out_window_R1", "look_out_window_R", Vector(-3674,748f, 42,76939f, 2115,354f), Vector(0.0f, -133,1731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand5", "smoking_stand", Vector(-3619,019f, 42,42979f, 2120,017f), Vector(0.0f, 113,1382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel4", "repair_kneel", Vector(-3668,553f, 42,16705f, 2153,184f), Vector(0.0f, 136,3032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_hoe_soil3", "knl_hoe_soil", Vector(-3695,152f, 42,30843f, 2127,682f), Vector(0.0f, -31,76305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_hoe_soil4", "knl_hoe_soil", Vector(-3696,121f, 42,33998f, 2125,727f), Vector(0.0f, 196,1988f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_hoe_soil5", "knl_hoe_soil", Vector(-3699,151f, 42,36283f, 2125,514f), Vector(0.0f, 105,9174f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_hoe_soil6", "knl_hoe_soil", Vector(-3690,835f, 42,30843f, 2124,568f), Vector(0.0f, 300,9577f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel5", "repair_kneel", Vector(-3692,732f, 42,30072f, 2129,306f), Vector(0.0f, 50,84814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Multistage_bucket", "Multistage_bucket", Vector(-3691,542f, 42,27983f, 2121,917f), Vector(0.0f, 312,5376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_hammer_wall", "stand_hammer_wall", Vector(-3672,585f, 42,167f, 2150,423f), Vector(0.0f, -136,6001f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand6", "smoking_stand", Vector(-3649,072f, 42,78126f, 2106,972f), Vector(0.0f, -244,2243f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "dealer_and_customer1", "dealer_and_customer", Vector(-3645,426f, 42,77294f, 2096,523f), Vector(0.0f, 207,1207f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "repair_kneel6", "repair_kneel", Vector(-3620,925f, 42,46792f, 2117,331f), Vector(0.0f, -41,25616f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2624) = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), &iLocal_62, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Multistage_sweeping1", "Multistage_sweeping", Vector(-3650,068f, 42,768f, 2102,936f), Vector(0.0f, -45,14526f, 0.0f)), &iLocal_62 + 2624);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_62 + 2624)), 0);
	*(&iLocal_62 + 2632) = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), &iLocal_62, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Multistage_sweeping", "Multistage_sweeping", Vector(-3674,031f, 42,768f, 2100,339f), Vector(0.0f, 314,3657f, 0.0f)), &iLocal_62 + 2632);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_62 + 2632)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-3685,798f, 42,769f, 2111,31f), Vector(0.0f, 132,7999f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", Vector(-3682,298f, 42,768f, 2115,287f), Vector(0.0f, -140,5107f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", Vector(-3681,634f, 42,75061f, 2107,677f), Vector(0.0f, -317,4218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-3683,319f, 42,77f, 2114,444f), Vector(0.0f, 43,43344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", Vector(-3680,014f, 42,7658f, 2109,219f), Vector(0.0f, -133,1889f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l3", "lie_sleep_on_bed_l", Vector(-3672,43f, 42,77f, 2105,851f), Vector(0.0f, -50,42917f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l4", "lie_sleep_on_bed_l", Vector(-3676,126f, 42,787f, 2101,858f), Vector(0.0f, 43,37592f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l5", "lie_sleep_on_bed_l", Vector(-3679,415f, 42,768f, 2105,135f), Vector(0.0f, 134,6079f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r2", "lie_sleep_on_bed_r", Vector(-3675,632f, 42,771f, 2108,978f), Vector(0.0f, -225,1235f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r3", "lie_sleep_on_bed_r", Vector(-3656,941f, 42,768f, 2087,012f), Vector(0.0f, -47,25218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r4", "lie_sleep_on_bed_r", Vector(-3689,51f, 42,77f, 2119,477f), Vector(0.0f, 136,5863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r5", "lie_sleep_on_bed_r", Vector(-3691,626f, 42,771f, 2117,741f), Vector(0.0f, 49,93003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r6", "lie_sleep_on_bed_r", Vector(-3688,435f, 42,768f, 2114,091f), Vector(0.0f, -44,581f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r7", "lie_sleep_on_bed_r", Vector(-3686,445f, 42,772f, 2115,536f), Vector(0.0f, -132,988f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_r8", "lie_sleep_on_bed_r", Vector(-3684,57f, 42,768f, 2117,463f), Vector(0.0f, -131,0115f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "lie_sleep_on_bed_l7", "lie_sleep_on_bed_l", Vector(-3660,02f, 42,81221f, 2090,36f), Vector(0.0f, 45,92337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Multistage_hoe", "Multistage_hoe", Vector(-3697,928f, 42,34469f, 2123,577f), Vector(0.0f, 46,3017f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "cow_knl1", "cow_knl", Vector(-3619,761f, 42,45244f, 2114,313f), Vector(0.0f, -40,09426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "whore_and_john", "whore_and_john", Vector(-3636,883f, 42,76779f, 2100,621f), Vector(0.0f, 131,1144f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "whore_and_john1", "whore_and_john", Vector(-3643,306f, 42,76891f, 2104,857f), Vector(0.0f, -109,7883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "whore_flirt", "whore_flirt", Vector(-3639,543f, 42,78828f, 2107,495f), Vector(0.0f, 18,30103f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_link", Vector(-3656,9f, 42,797f, 2087,39f), Vector(0.0f, -43,34005f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Prostitute_bed", "Prostitute_bed", Vector(-3680,713f, 42,768f, 2111,125f), Vector(0.0f, -45,1647f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-3681,795f, 42,76839f, 2112.0f), Vector(0.0f, -42,04699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "whore_and_john2", "whore_and_john", Vector(-3684,124f, 42,80353f, 2122,052f), Vector(0.0f, -127,6782f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_washfacebowl_n_any", "stand_washfacebowl_n_any", Vector(-3662,781f, 42,768f, 2087,984f), Vector(0.0f, 90,93678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-3636f, 42,76351f, 2105,484f), Vector(0.0f, -193,829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "mex_flirt_sit_link1", "mex_flirt_sit_stool_link", Vector(-3644,465f, 42,76454f, 2107,746f), Vector(0.0f, -225,4346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "mex_flirt_sit_link", "mex_flirt_sit_stool_link", Vector(-3637,848f, 42,76454f, 2108,629f), Vector(0.0f, -135,7247f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-3668,978f, 42,23467f, 2138,684f), Vector(0.0f, -20,40278f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2640), 0);
	*(&iLocal_62 + 2648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", Vector(-3653,021f, 42,23467f, 2130,14f), Vector(0.0f, 35,84902f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2648), 0);
	*(&iLocal_62 + 2656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_spit", "stand_spit", Vector(-3658,095f, 42,23141f, 2135,001f), Vector(0.0f, 38,56444f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2656), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_spit1", "stand_spit", Vector(-3665,333f, 42,23467f, 2140,746f), Vector(0.0f, 17,45105f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "knl_watertrough", "knl_watertrough", Vector(-3693,38f, 42,27715f, 2120,221f), Vector(0.0f, -46,09961f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "fake_horseshoe", "fake_horseshoe", Vector(-3657,917f, 42,30736f, 2131,19f), Vector(0.0f, 50,54691f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2664), 1);
	*(&iLocal_62 + 2672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Locked_Footlocker", "Locked_Footlocker", Vector(-3652,851f, 42,82499f, 2087,113f), Vector(0.0f, -44,40221f, 0.0f));
	DECOR_SET_BOOL(&iLocal_62 + 2672, "PlayerHouseChest", true);
	*(&iLocal_62 + 2680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "fake_horseshoe1", "fake_horseshoe", Vector(-3666,226f, 42,223f, 2139,29f), Vector(0.0f, -48,195f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2680), 1);
	*(&iLocal_62 + 2688) = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), &iLocal_62, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_yelling_mid", "stand_yelling_mid", Vector(-3658,562f, 42,57069f, 2147,467f), Vector(0.0f, 207,7159f, 0.0f)), &iLocal_62 + 2688);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_yelling_mid1", "stand_yelling_mid", Vector(-3688,003f, 42,2773f, 2127,998f), Vector(0.0f, 74,41666f, 0.0f)), &iLocal_62 + 2688);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-3669,503f, 42,76637f, 2099,742f), Vector(0.0f, 188,9062f, 0.0f)), &iLocal_62 + 2688);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_pocketwatch_e_any3", "stand_pocketwatch_e_any", Vector(-3670,811f, 42,76637f, 2100,495f), Vector(0.0f, -105,7943f, 0.0f)), &iLocal_62 + 2688);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand", "rand_idle_stand", Vector(-3691,152f, 42,24957f, 2127,741f), Vector(0.0f, -90,84197f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand1", "rand_idle_stand", Vector(-3690,252f, 42,24957f, 2127,047f), Vector(0.0f, -120,6156f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2696), 0);
	*(&iLocal_62 + 2704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand2", "rand_idle_stand", Vector(-3690,869f, 42,24957f, 2126,173f), Vector(0.0f, -144,2641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2704), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand3", "rand_idle_stand", Vector(-3691,64f, 42,24957f, 2126,79f), Vector(0.0f, -110,4093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand4", "rand_idle_stand", Vector(-3657,91f, 42,57069f, 2148,833f), Vector(0.0f, 23,77878f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand5", "rand_idle_stand", Vector(-3658,55f, 42,57069f, 2149,316f), Vector(0.0f, -0,01377678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand6", "rand_idle_stand", Vector(-3657,065f, 42,57069f, 2148,859f), Vector(0.0f, 46,80066f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Sit_Ground_Play_Cards", "Rand_Idle_Sit_Ground", Vector(-3658,872f, 42,16473f, 2159,994f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2712), 0);
	*(&iLocal_62 + 2720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Sit_Ground_Play_Cards1", "Rand_Idle_Sit_Ground", Vector(-3658,213f, 42,16473f, 2158,717f), Vector(0.0f, 118,2466f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2720), 0);
	*(&iLocal_62 + 2728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-3659,139f, 42,16473f, 2158,054f), Vector(0.0f, -170,3818f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2728), 0);
	*(&iLocal_62 + 2736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "sit_ground_smoke1", "Rand_Idle_Sit_Ground", Vector(-3657,855f, 42,16473f, 2159,935f), Vector(0.0f, -319,4555f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2736), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "look_out_window_L", "look_out_window_L", Vector(-3647,079f, 42,71093f, 2112,356f), Vector(0.0f, 140,2832f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "look_out_window_R2", "look_out_window_R", Vector(-3650,679f, 42,71093f, 2108,386f), Vector(0.0f, 158,2746f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", Vector(-3642,713f, 42,77612f, 2112,965f), Vector(0.0f, -225,4669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand7", "smoking_stand", Vector(-3649,401f, 42,5548f, 2112,234f), Vector(0.0f, -184,0231f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "rand_idle_stand7", "rand_idle_stand", Vector(-3642,208f, 42,78126f, 2114,526f), Vector(0.0f, -155,6731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "sit_barrel", "sit_barrel", Vector(-3645,295f, 42,71093f, 2111,056f), Vector(0.0f, 353,9027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2744), 0);
	*(&iLocal_62 + 2752) = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), &iLocal_62, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Sit_Ground_Play_Cards2", "Rand_Idle_Sit_Ground", Vector(-3659,798f, 42,16473f, 2158,655f), Vector(0.0f, 233,0516f, 0.0f)), &iLocal_62 + 2752);
	*(&iLocal_62 + 2760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-3673,58f, 42,53664f, 2123,779f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_62 + 2768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-3672,531f, 42,56611f, 2120,62f), Vector(0.0f, 154,8617f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2768), 0);
	*(&iLocal_62 + 2776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", Vector(-3671,173f, 42,50059f, 2123,19f), Vector(0.0f, 80,60349f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2776), 0);
	*(&iLocal_62 + 2784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3674,429f, 42,55119f, 2120,43f), Vector(0.0f, -156,2721f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2784), 0);
	*(&iLocal_62 + 2792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand_campfire", "smoking_stand_campfire", Vector(-3672,125f, 42,50681f, 2124,27f), Vector(0.0f, 36,03042f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2792), 0);
	*(&iLocal_62 + 2800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand_campfire1", "smoking_stand_campfire", Vector(-3673,105f, 42,47565f, 2124,826f), Vector(0.0f, 1,958713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2800), 0);
	*(&iLocal_62 + 2808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand", "smoking_stand", Vector(-3631,076f, 42,16984f, 2138,03f), Vector(0.0f, -184,2408f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2808), 0);
	*(&iLocal_62 + 2816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3634,12f, 42,3114f, 2143,24f), Vector(0.0f, -131,3094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2816), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Pee1", "Pee", Vector(-3635,495f, 42,32895f, 2143,513f), Vector(0.0f, 76,97f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "look_distance_binocs1", "look_distance_binocs", Vector(-3684,896f, 42,07087f, 2152,015f), Vector(0.0f, -210,7167f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_62 + 2824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "smoking_stand9", "smoking_stand", Vector(-3679,415f, 41,98303f, 2148,848f), Vector(0.0f, -231,9652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2824), 0);
	*(&iLocal_62 + 2832) = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), &iLocal_62, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "nuse_shelf", "nuse_shelf", Vector(-3640,034f, 42,75944f, 2096,736f), Vector(0.0f, -41,21271f, 0.0f)), &iLocal_62 + 2832);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "use_shelf1", "nuse_shelf", Vector(-3638,566f, 42,75944f, 2098,021f), Vector(0.0f, -41,21271f, 0.0f)), &iLocal_62 + 2832);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "use_shelf2", "nuse_shelf", Vector(-3641,632f, 42,75944f, 2095,337f), Vector(0.0f, -41,21271f, 0.0f)), &iLocal_62 + 2832);
	*(&iLocal_62 + 2840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "player_sleep_RAT", "player_sleep_bed_L", Vector(-3654,174f, 42,82661f, 2084,243f), Vector(0.0f, -584,6696f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_62 + 2840), 0);
	*(&iLocal_62 + 2848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Bar_lean_stand", "Bar_lean_stand", Vector(-3643,095f, 42,75898f, 2098,185f), Vector(0.0f, -46,0139f, 0.0f));
	*(&iLocal_62 + 2856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Bar_lean_stand1", "Bar_lean_stand", Vector(-3641,202f, 42,78251f, 2100,146f), Vector(0.0f, -46,0139f, 0.0f));
	*(&iLocal_62 + 2864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "leaning_stand", "leaning_stand", Vector(-3644,218f, 42,78251f, 2097,021f), Vector(0.0f, -45,65455f, 0.0f));
	*(&iLocal_62 + 2872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "leaning_stand1", "leaning_stand", Vector(-3639,145f, 42,78251f, 2101,42f), Vector(0.0f, -7,077547f, 0.0f));
	*(&iLocal_62 + 2880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "leaning_stand2", "leaning_stand", Vector(-3642,16f, 42,78251f, 2099,104f), Vector(0.0f, -44,50163f, 0.0f));
	*(&iLocal_62 + 2888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Bar_lean_stand2", "Bar_lean_stand", Vector(-3640,199f, 42,75898f, 2098,163f), Vector(0.0f, -223,2867f, 0.0f));
	*(&iLocal_62 + 2896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_62, "Bar_lean_stand3", "Bar_lean_stand", Vector(-3639,067f, 42,75898f, 2099,017f), Vector(0.0f, -156,6802f, 0.0f));
	return 1;
}

bool Function_96(struct<2>[] Param0) //Position: 0xADDD / 44509
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_100();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_99(&(Param0[iVar02]), 8);
		}
		else if (Function_98())
		{
			iVar1 = 1;
			Function_99(&(Param0[iVar02]), 8);
		}
		Function_99(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_99(&(Param0[iVar02]), 1);
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
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_99(&(Param0[iVar02]), 2);
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
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_99(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_99(&(Param0[iVar02]), 2);
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
	Function_97();
	return 1;
}

void Function_97() //Position: 0xB19F / 45471
{
	if (!Function_74(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_98() //Position: 0xB1DF / 45535
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

void Function_99(struct<13> Param0) //Position: 0xB20D / 45581
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_100() //Position: 0xB220 / 45600
{
	if (!Function_74(128))
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

var Function_101(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB262 / 45666
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_102(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_99(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_102(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB2A0 / 45728
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_99(&(Param0[iVar02]), 4);
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

void Function_103(int iParam0, int iParam1) //Position: 0xB36F / 45935
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

bool Function_104() //Position: 0xB3B9 / 46009
{
	var uVar0;
	
	Function_103(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("RathskellerFork_layout");
	}
	*(&iLocal_4 + 8) = Vector(-3682,141f, 42,5698f, 2113,858f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rat_flag_bunk", Vector(-3682,141f, 42,5698f, 2113,858f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 40) = Vector(-3641,758f, 42,56982f, 2102,225f);
	*(&iLocal_4 + 40 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rat_flag_main", Vector(-3641,758f, 42,56982f, 2102,225f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 72) = Vector(-3656f, 42,56982f, 2088.0f);
	*(&iLocal_4 + 72 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 96) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rat_flag_judge", Vector(-3656f, 42,56982f, 2088.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 104) = Vector(-3658,599f, 42,16472f, 2149,401f);
	*(&iLocal_4 + 104 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rat_flag_stable", Vector(-3658,599f, 42,16472f, 2149,401f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 136) = Vector(-3670,337f, 42,5698f, 2101,66f);
	*(&iLocal_4 + 136 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rat_flag_bunk1", Vector(-3670,337f, 42,5698f, 2101,66f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 168) = Vector(-3659,985f, 42,56141f, 2095,988f);
	*(&iLocal_4 + 168 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rat_flag_yard", Vector(-3659,985f, 42,56141f, 2095,988f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 200) = Vector(-3653,14f, 42,5694f, 2108,013f);
	*(&iLocal_4 + 200 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-3653,14f, 42,5694f, 2108,013f), Vector(0.0f, 0.0f, 0.0f));
	return 1;
}

void Function_105(char* cParam0) //Position: 0xB640 / 46656
{
	if (!Function_74(128))
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

