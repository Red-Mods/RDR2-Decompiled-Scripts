//Decompiled with MagicRDR v1.0
//Function Count : 134
//Statics Count : 1013
//Natives Count : 174
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
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 55;
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
	var uLocal_248 = 1;
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
	var uLocal_290 = 1;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 1;
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
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 25;
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
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
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
	var uLocal_970 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_944 = 0;
	iLocal_384 = 0;
	SET_DUST_LEVEL(1);
	if (Function_133(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_132(0x8000000);
	}
	Function_131("Initializing Chuparosa", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_385 = 1000;
		switch (iLocal_384)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_384 = 1;
				}
				iLocal_385 = 0;
				break;
			
			case 0x00000001:
				if (Function_130())
				{
					Global_98961 = 0;
					iLocal_384 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
				}
				iLocal_385 = 0;
				break;
			
			case 0x00000002:
				if (Function_121())
				{
					Function_120(&(Global_43791[iScriptParam_0]), 32);
					iLocal_384 = 3;
				}
				iLocal_385 = 0;
				break;
			
			case 0x00000003:
				uLocal_386 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ChuparosaVol", &iScriptParam_0, 2, 0);
				Function_119(&Global_12048, &Global_14326, iScriptParam_0);
				iLocal_384 = 5;
				iLocal_385 = 0;
				break;
			
			case 0x00000005:
				if (Function_118(&Global_12048, &Global_14326, iScriptParam_0))
				{
					iLocal_384 = 4;
					iLocal_385 = 0;
				}
				else
				{
					iLocal_385 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_117(&(Global_43791[iScriptParam_0]), 16) && Function_116(Global_44085[iScriptParam_09]))
				{
					iLocal_384 = 6;
				}
				iLocal_385 = 0;
				break;
			
			case 0x00000006:
				Function_115(StackVal, 0, &uLocal_388, Vector(-2711,908f, 32,2328f, 4239,971f));
				Function_114(StackVal, 0, &uLocal_388, Vector(-2701,363f, 32,07698f, 4287,889f));
				Function_113(StackVal, 0, &uLocal_388, Vector(-2701,363f, 32,07698f, 4287,889f));
				Function_112(StackVal, 0, &uLocal_388, Vector(-2701,363f, 32,07698f, 4287,889f));
				Function_111(StackVal, 0, &uLocal_388, Vector(-2701,363f, 32,07698f, 4287,889f));
				Function_110(StackVal, 0, &uLocal_388, Vector(-2701,363f, 32,07698f, 4287,889f));
				Function_109(0, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 1, &uLocal_388, Vector(-2732,651f, 32,028f, 4292,989f));
				Function_114(StackVal, 1, &uLocal_388, Vector(-2732,651f, 32,028f, 4292,989f));
				Function_113(StackVal, 1, &uLocal_388, Vector(-2732,651f, 32,028f, 4292,989f));
				Function_112(StackVal, 1, &uLocal_388, Vector(-2732,651f, 32,028f, 4292,989f));
				Function_111(StackVal, 1, &uLocal_388, Vector(-2699,336f, 32,07365f, 4286,72f));
				Function_110(StackVal, 1, &uLocal_388, Vector(-2699,336f, 32,07365f, 4286,72f));
				Function_109(1, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 2, &uLocal_388, Vector(-2714,533f, 32,88588f, 4261,468f));
				Function_114(StackVal, 2, &uLocal_388, Vector(-2726,229f, 32,82832f, 4277,772f));
				Function_113(StackVal, 2, &uLocal_388, Vector(-2742,137f, 32,24309f, 4273,864f));
				Function_112(StackVal, 2, &uLocal_388, Vector(-2714,533f, 32,88588f, 4261,468f));
				Function_111(StackVal, 2, &uLocal_388, Vector(-2654,689f, 31,26777f, 4277,835f));
				Function_110(StackVal, 2, &uLocal_388, Vector(-2714,506f, 32,28f, 4241,621f));
				Function_109(2, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 3, &uLocal_388, Vector(-2725,799f, 33,008f, 4296,221f));
				Function_114(StackVal, 3, &uLocal_388, Vector(-2725,799f, 33,008f, 4296,221f));
				Function_113(StackVal, 3, &uLocal_388, Vector(-2725,799f, 33,008f, 4296,221f));
				Function_112(StackVal, 3, &uLocal_388, Vector(-2725,799f, 33,008f, 4296,221f));
				Function_111(StackVal, 3, &uLocal_388, Vector(-2725,799f, 33,008f, 4296,221f));
				Function_110(StackVal, 3, &uLocal_388, Vector(-2725,799f, 33,008f, 4296,221f));
				Function_109(3, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 4, &uLocal_388, Vector(-2734,886f, 36,35334f, 4226,86f));
				Function_114(StackVal, 4, &uLocal_388, Vector(-2739,361f, 32,52098f, 4240,463f));
				Function_113(StackVal, 4, &uLocal_388, Vector(-2739,361f, 32,52098f, 4240,463f));
				Function_112(StackVal, 4, &uLocal_388, Vector(-2739,361f, 32,52098f, 4240,463f));
				Function_111(StackVal, 4, &uLocal_388, Vector(-2699,373f, 32,07358f, 4288,571f));
				Function_110(StackVal, 4, &uLocal_388, Vector(-2699,373f, 32,07358f, 4288,571f));
				Function_109(4, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 5, &uLocal_388, Vector(-2706,638f, 32,27977f, 4235,488f));
				Function_114(StackVal, 5, &uLocal_388, Vector(-2696,668f, 32,07016f, 4289,73f));
				Function_113(StackVal, 5, &uLocal_388, Vector(-2696,668f, 32,07016f, 4289,73f));
				Function_112(StackVal, 5, &uLocal_388, Vector(-2696,668f, 32,07016f, 4289,73f));
				Function_111(StackVal, 5, &uLocal_388, Vector(-2696,668f, 32,07016f, 4289,73f));
				Function_110(StackVal, 5, &uLocal_388, Vector(-2706,638f, 32,27977f, 4235,488f));
				Function_109(5, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 6, &uLocal_388, Vector(-2726,464f, 32,82832f, 4277,536f));
				Function_114(StackVal, 6, &uLocal_388, Vector(-2726,464f, 32,82832f, 4277,536f));
				Function_113(StackVal, 6, &uLocal_388, Vector(-2726,464f, 32,82832f, 4277,536f));
				Function_112(StackVal, 6, &uLocal_388, Vector(-2726,464f, 32,82832f, 4277,536f));
				Function_111(StackVal, 6, &uLocal_388, Vector(-2698,067f, 32,07573f, 4288,678f));
				Function_110(StackVal, 6, &uLocal_388, Vector(-2698,067f, 32,07573f, 4288,678f));
				Function_109(6, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 7, &uLocal_388, Vector(-2687,845f, 32,466f, 4224,631f));
				Function_114(StackVal, 7, &uLocal_388, Vector(-2687,845f, 32,466f, 4224,631f));
				Function_113(StackVal, 7, &uLocal_388, Vector(-2687,845f, 32,466f, 4224,631f));
				Function_112(StackVal, 7, &uLocal_388, Vector(-2687,845f, 32,466f, 4224,631f));
				Function_111(StackVal, 7, &uLocal_388, Vector(-2687,845f, 32,466f, 4224,631f));
				Function_110(StackVal, 7, &uLocal_388, Vector(-2710,029f, 32,26497f, 4240,836f));
				Function_109(7, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 8, &uLocal_388, Vector(-2713,432f, 32,834f, 4289,01f));
				Function_114(StackVal, 8, &uLocal_388, Vector(-2713,432f, 32,834f, 4289,01f));
				Function_113(StackVal, 8, &uLocal_388, Vector(-2713,432f, 32,834f, 4289,01f));
				Function_112(StackVal, 8, &uLocal_388, Vector(-2713,432f, 32,834f, 4289,01f));
				Function_111(StackVal, 8, &uLocal_388, Vector(-2713,432f, 32,834f, 4289,01f));
				Function_110(StackVal, 8, &uLocal_388, Vector(-2713,432f, 32,834f, 4289,01f));
				Function_109(8, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 9, &uLocal_388, Vector(-2724,874f, 36,36723f, 4243,932f));
				Function_108(9, &uLocal_388, &iLocal_22 + 1336);
				Function_107(9, &uLocal_388, &iLocal_22 + 1336);
				Function_106(9, &uLocal_388, &iLocal_22 + 1336);
				Function_111(StackVal, 9, &uLocal_388, Vector(-2698,427f, 32,09244f, 4286,033f));
				Function_110(StackVal, 9, &uLocal_388, Vector(-2698,427f, 32,09244f, 4286,033f));
				Function_109(9, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 10, &uLocal_388, Vector(-2689,847f, 32,435f, 4215,502f));
				Function_114(StackVal, 10, &uLocal_388, Vector(-2689,847f, 32,435f, 4215,502f));
				Function_113(StackVal, 10, &uLocal_388, Vector(-2689,847f, 32,435f, 4215,502f));
				Function_112(StackVal, 10, &uLocal_388, Vector(-2689,847f, 32,435f, 4215,502f));
				Function_111(StackVal, 10, &uLocal_388, Vector(-2697,606f, 32,07793f, 4285,677f));
				Function_110(StackVal, 10, &uLocal_388, Vector(-2697,606f, 32,07793f, 4285,677f));
				Function_109(10, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 11, &uLocal_388, Vector(-2687,573f, 31,352f, 4284,712f));
				Function_114(StackVal, 11, &uLocal_388, Vector(-2687,573f, 31,352f, 4284,712f));
				Function_113(StackVal, 11, &uLocal_388, Vector(-2687,573f, 31,352f, 4284,712f));
				Function_112(StackVal, 11, &uLocal_388, Vector(-2687,573f, 31,352f, 4284,712f));
				Function_111(StackVal, 11, &uLocal_388, Vector(-2687,573f, 31,352f, 4284,712f));
				Function_110(StackVal, 11, &uLocal_388, Vector(-2687,573f, 31,352f, 4284,712f));
				Function_109(11, &uLocal_388, &iLocal_4);
				if (Global_39266[2])
				{
					Function_105(&(Global_12048[112]), 2);
				}
				else
				{
					Function_104(&(Global_12048[112]), 2);
				}
				Function_115(StackVal, 12, &uLocal_388, Vector(-2739,473f, 32,418f, 4275,326f));
				Function_114(StackVal, 12, &uLocal_388, Vector(-2739,473f, 32,418f, 4275,326f));
				Function_113(StackVal, 12, &uLocal_388, Vector(-2739,473f, 32,418f, 4275,326f));
				Function_112(StackVal, 12, &uLocal_388, Vector(-2739,473f, 32,418f, 4275,326f));
				Function_111(StackVal, 12, &uLocal_388, Vector(-2697,095f, 32,07283f, 4284,972f));
				Function_110(StackVal, 12, &uLocal_388, Vector(-2716,927f, 32,28f, 4245,252f));
				Function_109(12, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 13, &uLocal_388, Vector(-2730,625f, 32,828f, 4275,637f));
				Function_114(StackVal, 13, &uLocal_388, Vector(-2730,625f, 32,828f, 4275,637f));
				Function_113(StackVal, 13, &uLocal_388, Vector(-2730,625f, 32,828f, 4275,637f));
				Function_112(StackVal, 13, &uLocal_388, Vector(-2730,625f, 32,828f, 4275,637f));
				Function_111(StackVal, 13, &uLocal_388, Vector(-2656,456f, 31,267f, 4277,274f));
				Function_110(StackVal, 13, &uLocal_388, Vector(-2716,046f, 32,28f, 4244,72f));
				Function_109(13, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 14, &uLocal_388, Vector(-2739,145f, 32,415f, 4283,821f));
				Function_114(StackVal, 14, &uLocal_388, Vector(-2739,145f, 32,415f, 4283,821f));
				Function_113(StackVal, 14, &uLocal_388, Vector(-2739,145f, 32,415f, 4283,821f));
				Function_112(StackVal, 14, &uLocal_388, Vector(-2739,145f, 32,415f, 4283,821f));
				Function_111(StackVal, 14, &uLocal_388, Vector(-2695,425f, 32,07424f, 4285,919f));
				Function_110(StackVal, 14, &uLocal_388, Vector(-2715,355f, 32,28f, 4244,152f));
				Function_109(14, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 15, &uLocal_388, Vector(-2733,628f, 32,822f, 4277,909f));
				Function_114(StackVal, 15, &uLocal_388, Vector(-2733,628f, 32,822f, 4277,909f));
				Function_113(StackVal, 15, &uLocal_388, Vector(-2733,628f, 32,822f, 4277,909f));
				Function_112(StackVal, 15, &uLocal_388, Vector(-2733,628f, 32,822f, 4277,909f));
				Function_111(StackVal, 15, &uLocal_388, Vector(-2695,476f, 32,07358f, 4287,719f));
				Function_110(StackVal, 15, &uLocal_388, Vector(-2718,897f, 32,28f, 4239,234f));
				Function_109(15, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 16, &uLocal_388, Vector(-2718,546f, 32,85599f, 4272,604f));
				Function_114(StackVal, 16, &uLocal_388, Vector(-2718,546f, 32,85599f, 4272,604f));
				Function_113(StackVal, 16, &uLocal_388, Vector(-2718,546f, 32,85599f, 4272,604f));
				Function_112(StackVal, 16, &uLocal_388, Vector(-2718,546f, 32,85599f, 4272,604f));
				Function_111(StackVal, 16, &uLocal_388, Vector(-2690,545f, 31,34747f, 4285,168f));
				Function_110(StackVal, 16, &uLocal_388, Vector(-2720,189f, 32,28f, 4238,594f));
				Function_109(16, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 17, &uLocal_388, Vector(-2722,087f, 32,82832f, 4275,645f));
				Function_114(StackVal, 17, &uLocal_388, Vector(-2722,087f, 32,82832f, 4275,645f));
				Function_113(StackVal, 17, &uLocal_388, Vector(-2722,087f, 32,82832f, 4275,645f));
				Function_112(StackVal, 17, &uLocal_388, Vector(-2722,087f, 32,82832f, 4275,645f));
				Function_111(StackVal, 17, &uLocal_388, Vector(-2690,849f, 31,35579f, 4289,367f));
				Function_110(StackVal, 17, &uLocal_388, Vector(-2719,193f, 36,38667f, 4239,506f));
				Function_109(17, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 19, &uLocal_388, Vector(-2721,419f, 32,82862f, 4285,882f));
				Function_114(StackVal, 19, &uLocal_388, Vector(-2720,986f, 32,828f, 4272,306f));
				Function_113(StackVal, 19, &uLocal_388, Vector(-2720,986f, 32,828f, 4272,306f));
				Function_112(StackVal, 19, &uLocal_388, Vector(-2720,986f, 32,828f, 4272,306f));
				Function_111(StackVal, 19, &uLocal_388, Vector(-2692,302f, 31,34747f, 4284,263f));
				Function_110(StackVal, 19, &uLocal_388, Vector(-2721,666f, 36,36624f, 4242,072f));
				Function_109(19, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 21, &uLocal_388, Vector(-2677,922f, 32,471f, 4219,621f));
				Function_114(StackVal, 21, &uLocal_388, Vector(-2677,922f, 32,471f, 4219,621f));
				Function_113(StackVal, 21, &uLocal_388, Vector(-2677,922f, 32,471f, 4219,621f));
				Function_112(StackVal, 21, &uLocal_388, Vector(-2677,922f, 32,471f, 4219,621f));
				Function_111(StackVal, 21, &uLocal_388, Vector(-2698,589f, 31,14145f, 4277,98f));
				Function_110(StackVal, 21, &uLocal_388, Vector(-2727,277f, 36,37946f, 4222,154f));
				Function_109(21, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 22, &uLocal_388, Vector(-2714,506f, 32,28f, 4241,621f));
				Function_114(StackVal, 22, &uLocal_388, Vector(-2689,745f, 31,353f, 4286,876f));
				Function_113(StackVal, 22, &uLocal_388, Vector(-2689,745f, 31,353f, 4286,876f));
				Function_112(StackVal, 22, &uLocal_388, Vector(-2689,823f, 31,34747f, 4284,649f));
				Function_111(StackVal, 22, &uLocal_388, Vector(-2689,823f, 31,34747f, 4284,649f));
				Function_110(StackVal, 22, &uLocal_388, Vector(-2714,506f, 32,28f, 4241,621f));
				Function_109(22, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 23, &uLocal_388, Vector(-2711,908f, 32,2328f, 4239,971f));
				Function_114(StackVal, 23, &uLocal_388, Vector(-2696,598f, 32,072f, 4286,59f));
				Function_113(StackVal, 23, &uLocal_388, Vector(-2696,598f, 32,072f, 4286,59f));
				Function_112(StackVal, 23, &uLocal_388, Vector(-2691,418f, 31,35579f, 4290,157f));
				Function_111(StackVal, 23, &uLocal_388, Vector(-2691,418f, 31,35579f, 4290,157f));
				Function_110(StackVal, 23, &uLocal_388, Vector(-2711,908f, 32,2328f, 4239,971f));
				Function_109(23, &uLocal_388, &iLocal_4);
				Function_115(StackVal, 24, &uLocal_388, Vector(-2723,34f, 36,36924f, 4243,025f));
				Function_114(StackVal, 24, &uLocal_388, Vector(-2689,745f, 31,353f, 4286,876f));
				Function_113(StackVal, 24, &uLocal_388, Vector(-2689,745f, 31,353f, 4286,876f));
				Function_112(StackVal, 24, &uLocal_388, Vector(-2697,631f, 32,07573f, 4289,472f));
				Function_111(StackVal, 24, &uLocal_388, Vector(-2697,631f, 32,07573f, 4289,472f));
				Function_110(StackVal, 24, &uLocal_388, Vector(-2723,34f, 36,36924f, 4243,025f));
				Function_109(24, &uLocal_388, &iLocal_4);
				Function_100(&Global_12048, &Global_14326, &uLocal_388, &Global_10996, iScriptParam_0);
				if (Function_117(&(Global_43791[iScriptParam_0]), 256) || !Function_133(2))
				{
					iLocal_940 = 1;
				}
				Function_94(StackVal, 2, "$/content/Ambient/JobSystem/job_HorseBreaking", Vector(-2640,26f, 30,9f, 4244,634f), &Global_14326[33] + 16, 327, iScriptParam_0, 15, -1.0f, 15, 0);
				Function_94(StackVal, 1, "$/content/Ambient/JobSystem/Job_nightwatch", Vector(-2734,144f, 32,406f, 4252,29f), &Global_14326[103] + 16, 341, iScriptParam_0, 48, -1.0f, 15, 0);
				Function_87(6, &iLocal_22 + 1296, &iLocal_22 + 960, &iLocal_22 + 1056, Function_93(iScriptParam_0, "nchuparosa", "ncantina01", 1), 0, &iLocal_4 + 64);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "chuv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "chuv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "chuv_players_room"));
				}
				else
				{
					LOG_ERROR("CHU: Cannot find chuv_players_room to restrict players room");
				}
				Function_86(&iLocal_22 + 1272, GET_OBJECT_FROM_PERS_CHAR(&Global_14326[03] + 16));
				Function_86(&iLocal_22 + 1280, GET_OBJECT_FROM_PERS_CHAR(&Global_14326[53] + 16));
				Function_85(&Global_14326[33] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_22, "chuv_merchant"));
				Function_84(&Global_14326[33] + 16, 1);
				Function_83(&Global_14326[33] + 16, 397);
				Function_85(&Global_14326[83] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_22, "chuv_doctor"));
				Function_84(&Global_14326[83] + 16, 3);
				Function_83(&Global_14326[83] + 16, 398);
				Function_120(&(Global_43791[iScriptParam_0]), 8);
				if (Function_117(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_82(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_384 = 10;
				}
				else
				{
					iLocal_384 = 7;
				}
				iLocal_385 = 0;
				break;
			
			case 0x00000007:
				switch (Global_46720)
				{
					case 0x00000000:
						Function_81(iScriptParam_0);
						break;
					
					case 0x00000001:
						Function_81(iScriptParam_0);
						break;
					
					case 0x00000002:
						Function_81(iScriptParam_0);
						break;
					
					case 0x00000003:
						break;
				}
				if (Function_80())
				{
					Function_71(StackVal, &Global_98318, 2, Global_46866[0], "$/content/Mexico/Mini_Games/BlackJack_CHU/BlackJack_CHU", 4294967295, 0, "ChuBlackJackHC", 349, Vector(-2685,421f, 31,356f, 4284,133f), 2,5f, 0, 0);
					Function_70(&Global_98318, 2, 15);
				}
				else
				{
					Function_71(StackVal, &Global_98318, 2, Global_46866[0], "$/content/Mexico/Mini_Games/BlackJack_CHU/BlackJack_CHU", 4294967295, 0, "ChuBlackJack", 349, Vector(-2685,421f, 31,356f, 4284,133f), 2,5f, 0, 0);
					Function_70(&Global_98318, 2, 30);
				}
				if (Function_80())
				{
					Function_71(StackVal, &Global_98318, 0, Global_46866[0], "$/content/Mexico/Mini_Games/Poker_CHU/Poker_CHU", 4294967295, 0, "ChuPokerHC", 433, Vector(-2701,138f, 31,151f, 4278,035f), 2,5f, 0, 0);
					Function_70(&Global_98318, 0, 25);
				}
				else
				{
					Function_71(StackVal, &Global_98318, 0, Global_46866[0], "$/content/Mexico/Mini_Games/Poker_CHU/Poker_CHU", 4294967295, 0, "ChuPoker", 433, Vector(-2701,138f, 31,151f, 4278,035f), 2,5f, 0, 0);
					Function_70(&Global_98318, 0, 50);
				}
				Function_69(iScriptParam_0);
				Function_66(iScriptParam_0);
				Function_65(iScriptParam_0);
				Function_63(iScriptParam_0);
				Function_62(iScriptParam_0);
				Function_58(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 80.0f, 8, 70, 0);
				Function_57(&Global_27462[1052] + 188, 2, 5.0f, 1, 4294967295);
				Function_58(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 80.0f, 8, 70, 0);
				Function_57(&Global_27462[952] + 188, 2, 5.0f, 1, 4294967295);
				Function_58(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 80.0f, 8, 70, 0);
				Function_57(&Global_27462[852] + 188, 2, 5.0f, 1, 4294967295);
				Function_58(14, 1, 0, 50, 50, 7, 66, 0, 2, iScriptParam_0, "$/Content/Ambient/Town/first_time_chuparosa", 31, 0, 200.0f, 2, 315, Function_52(2, 0, 3));
				Function_51(&Global_27462[1452] + 188, 4, &Global_44085[Global_46866[0]9] + 8, 1);
				iLocal_384 = 8;
				iLocal_385 = 0;
				break;
			
			case 0x00000008:
				Function_50(64);
				if (Function_45(iScriptParam_0, &Global_12048, iLocal_940))
				{
					Function_41(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_37(2, 4294967295, 4294967295, 0, 3);
					Function_34(&iLocal_4);
				}
				else
				{
					Function_37(1, 10, 6, 20, 5);
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_41(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_41(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_41(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
					}
					Function_34(&iLocal_4);
					Function_33(&Global_14326[103] + 16, 0);
				}
				Function_120(&(Global_43791[iScriptParam_0]), 512);
				iLocal_384 = 9;
				iLocal_385 = 0;
				break;
			
			case 0x00000009:
				Function_31(&iLocal_4, iScriptParam_0);
				Function_120(&(Global_43791[iScriptParam_0]), 4);
				Function_30("Finished Initializing Chuparosa", 5.0f);
				iLocal_384 = 10;
				iLocal_385 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_29(Global_98961, 1))
				{
					if (Function_27(&(Global_46866[0]), 0))
					{
						Function_26(&Global_98961, 1);
					}
				}
				if (!Function_29(Global_98961, 2))
				{
					if (Function_24(&(Global_46866[0])))
					{
						Function_26(&Global_98961, 2);
					}
				}
				if (!iLocal_943)
				{
					if (IS_PERS_CHAR_VALID(&Global_14326[03] + 16))
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_14326[03] + 16)))
						{
							AI_CONVERSE_DISABLE(GET_ACTOR_FROM_PERS_CHAR(&Global_14326[03] + 16));
							iLocal_943 = 1;
						}
					}
				}
				else if (!IS_PERS_CHAR_VALID(&Global_14326[03] + 16))
				{
					iLocal_943 = 0;
				}
				else if (!IS_PERS_CHAR_ALIVE(&Global_14326[03] + 16))
				{
					iLocal_943 = 0;
				}
				else if (!IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_14326[03] + 16)))
				{
					iLocal_943 = 0;
				}
				if (Global_6664)
				{
					if (Global_6629 != 1 && iLocal_944 != 0)
					{
						LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_945, 62, 0);
						iLocal_944 = 1;
					}
					if (!iLocal_941)
					{
						if (GET_HOUR(0) < 16)
						{
							iLocal_941 = 1;
							Function_18(2, 4, 0, 0, 0);
						}
					}
					if (!iLocal_942)
					{
						if (GET_HOUR(0) > 19)
						{
							iLocal_942 = 1;
							Function_18(0, 1, 0, 0, 0);
						}
					}
				}
				if (Function_117(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_384 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_385);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	Function_11(&Global_12048, &Global_14326, iScriptParam_0, (iLocal_940 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(2);
	Function_82(&(Global_43791[iScriptParam_0]), 32);
	Function_82(&(Global_43791[iScriptParam_0]), 64);
	Function_82(&(Global_43791[iScriptParam_0]), 8);
	Function_82(&(Global_43791[iScriptParam_0]), 512);
	Function_82(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_386))
	{
		TERMINATE_SCRIPT(&uLocal_386);
	}
	Function_30("Unloaded Chuparosa", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1A81 / 6785
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

void Function_2(int iParam0) //Position: 0x1AB7 / 6839
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x1AD9 / 6873
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x1AEF / 6895
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x1B05 / 6917
{
	Function_6(&iLocal_22 + 8);
	RELEASE_LAYOUT_REF(&iLocal_22);
	return;
}

void Function_6(int iParam0) //Position: 0x1B18 / 6936
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x1B40 / 6976
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

void Function_8(struct<13> Param0) //Position: 0x1C8B / 7307
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x1CA8 / 7336
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1CC6 / 7366
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x1CD2 / 7378
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
	if (Function_117(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_82(&(Global_43791[bParam2]), 0x40000000);
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
				Function_104(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_15(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_104(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_117(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_133(2) || Function_117(&(Global_43791[bParam2]), 256))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_120(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x1EF0 / 7920
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_105(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_15(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_15(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_105(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x2056 / 8278
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

int Function_14(int iParam0) //Position: 0x2081 / 8321
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

bool Function_15(int iParam0, int iParam1) //Position: 0x20B5 / 8373
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_16() //Position: 0x20D2 / 8402
{
	if (Function_29(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_17(int iParam0) //Position: 0x20ED / 8429
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

void Function_18(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x259B / 9627
{
	int iVar0;
	int iVar1;
	
	Function_23(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_22(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&iParam1, &iParam2, &iParam3);
			Function_19(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_19(int iParam0, int iParam1, bool bParam2) //Position: 0x2615 / 9749
{
	int iVar0;
	
	Function_23(iParam0);
	Function_21(&iParam1);
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
	Function_20();
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

void Function_20() //Position: 0x2794 / 10132
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_21(int iParam0) //Position: 0x27A0 / 10144
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

void Function_22(int iParam0, int iParam1) //Position: 0x27EA / 10218
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_23(iParam0);
	Function_21(&uVar0);
	PRINTNL();
	Function_19(iParam0, &uVar0, &iParam1);
	return;
}

void Function_23(int iParam0) //Position: 0x2813 / 10259
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

bool Function_24(int iParam0) //Position: 0x2859 / 10329
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_25(iParam0, iVar1);
		uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
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

struct<8> Function_25(int iParam0, int iParam1) //Position: 0x28EF / 10479
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

void Function_26(var uParam0, int iParam1) //Position: 0x2AA4 / 10916
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_27(int iParam0, bool bParam1) //Position: 0x2AB5 / 10933
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_28(iParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_28(iParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_28(iParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_28(iParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
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

struct<8> Function_28(int iParam0, int iParam1, bool bParam2) //Position: 0x2B8A / 11146
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

bool Function_29(var uParam0, int iParam1) //Position: 0x3136 / 12598
{
	return (uParam0 && iParam1) == 0;
}

void Function_30(char* cParam0) //Position: 0x3143 / 12611
{
	if (!Function_133(128))
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

void Function_31(int iParam0, bool bParam1) //Position: 0x3183 / 12675
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
		Function_32(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_32(var uParam0, int iParam1) //Position: 0x3273 / 12915
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_33(int iParam0, int iParam1) //Position: 0x3280 / 12928
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

void Function_34(int iParam0) //Position: 0x330B / 13067
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_36(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_35(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_35(var uParam0) //Position: 0x3407 / 13319
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_36() //Position: 0x3424 / 13348
{
	int iVar0;
	
	return &iVar0;
}

void Function_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x342D / 13357
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
		Function_38();
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

void Function_38() //Position: 0x351B / 13595
{
	int iVar0;
	
	Global_41176 = Function_39(StackVal);
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

int Function_39(int iParam0) //Position: 0x3569 / 13673
{
	if (!Function_40(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_40(bool bParam0) //Position: 0x3581 / 13697
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_41(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x3596 / 13718
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
		Function_44();
	}
	if (&bParam5)
	{
		Function_42(1048576);
	}
}

void Function_42(int iParam0) //Position: 0x36A4 / 13988
{
	Function_43(&Global_43580, iParam0);
	return;
}

void Function_43(var uParam0, var uParam1) //Position: 0x36B2 / 14002
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_44() //Position: 0x36D1 / 14033
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_42(16384);
	}
	return;
}

bool Function_45(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x36ED / 14061
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_117(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_46(49, 0))
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

int Function_46(var uParam0, bool bParam1) //Position: 0x37AB / 14251
{
	int iVar0;
	
	iVar0 = Function_48(uParam0);
	if (!Function_47(iVar0))
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

bool Function_47(int iParam0) //Position: 0x37E9 / 14313
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_48(int iParam0) //Position: 0x3800 / 14336
{
	if (!Function_49(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_49(int iParam0) //Position: 0x381A / 14362
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_50(int iParam0) //Position: 0x3830 / 14384
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_51(struct<157> Param0) //Position: 0x3843 / 14403
{
	Param0.f_156 = uParam1;
	(&Param0 + 156)->f_4 = uParam2;
	(&Param0 + 156)->f_8 = uParam3;
}

int Function_52(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3864 / 14436
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_56(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_53(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_53(bParam0, bParam1, bParam2, 4294967295);
}

int Function_53(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x38C2 / 14530
{
	var uVar0;
	
	if (!Function_55(bParam2))
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
	uVar0 = Function_56(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_54(uVar0);
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

var Function_54(int iParam0) //Position: 0x3A26 / 14886
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

bool Function_55(int iParam0) //Position: 0x3A64 / 14948
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_56(int iParam0, int iParam1, int iParam2) //Position: 0x3A79 / 14969
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_57(struct<85> Param0) //Position: 0x3A99 / 15001
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x3AC3 / 15043
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_59(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_59(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x3B0A / 15114
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
					bVar2 = Function_61(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_60(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_61(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_60(int iParam0, int iParam1) //Position: 0x3EC8 / 16072
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_61(int iParam0) //Position: 0x3EEB / 16107
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_62(int iParam0) //Position: 0x3F02 / 16130
{
	Function_58(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_63(int iParam0) //Position: 0x3F54 / 16212
{
	Function_58(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_64(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_64(struct<149> Param0) //Position: 0x3FBB / 16315
{
	Param0.f_148 = uParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_65(int iParam0) //Position: 0x3FD2 / 16338
{
	Function_58(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_66(int iParam0) //Position: 0x4038 / 16440
{
	if (!Function_68())
	{
		Function_58(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_57(&Global_27462[3952] + 188, 1, 4,5f, 64, 4294967295);
		Function_67(&Global_27462[3952] + 188, -4,5f, 2);
	}
	return;
}

void Function_67(int iParam0, float fParam1, int iParam2) //Position: 0x40B9 / 16569
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

bool Function_68() //Position: 0x40D1 / 16593
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		iVar0 = GET_ACTOR_ENUM(&Global_54076);
		if (iVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_69(int iParam0) //Position: 0x40F8 / 16632
{
	Function_58(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_57(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_67(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_70(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x4173 / 16755
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_71(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x419A / 16794
{
	if (0 && !&bParam11)
	{
		return;
	}
	if (1 && bParam11)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(&(Global_98936[bParam1])))
	{
		DESTROY_OBJECTSET(&(Global_98936[bParam1]));
	}
	Param0[bParam128].f_4 = Function_52(bParam2, bParam1, 4);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[bParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[bParam128] + 8) = 4294967295;
	}
	(&Param0[bParam128] + 64) = "";
	(&Param0[bParam128] + 72) = "";
	*(&Param0[bParam128] + 80) = &iParam12;
	Param0[bParam128].f_136 = iParam7;
	Param0[bParam128].f_152 = 5;
	Param0[bParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[bParam128].f_188 = iParam4;
	Param0[bParam128].f_192 = 4294967295;
	Param0[bParam128].f_196 = 4294967295;
	Param0[bParam128].f_200 = 4294967295;
	strcpy(&Param0[bParam128] + 16, &cParam6, 16);
	*(&Param0[bParam128] + 88) = Param8;
	Param0[bParam128].f_100 = iParam10;
	Param0[bParam128].f_112 = bParam2;
	if (Global_39266[bParam1] && Function_79(bParam1))
	{
		Function_72(StackVal, bParam2, (1 + bParam1), Param8, 63);
	}
	Param0[bParam128].f_196 = 1;
	Param0[bParam128].f_184 |= 8192;
}

int Function_72(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x4303 / 17155
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
	if (Function_78(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_77(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_76(StackVal, Param2);
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
		Function_75(uVar3);
		Var6 = Function_75(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_75(StackVal);
				Var4 = Function_75(StackVal);
				if (Function_74(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_73(iParam1), 0.0f, 2, iVar2);
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

int Function_73(int iParam0) //Position: 0x44EC / 17644
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

bool Function_74(struct<2> Param0, struct<2> Param2) //Position: 0x4623 / 17955
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_75(int iParam0) //Position: 0x464F / 17999
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

var Function_76(vector3 vParam0) //Position: 0x46A6 / 18086
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

int Function_77(int iParam0) //Position: 0x46F4 / 18164
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

bool Function_78(vector3 vParam0) //Position: 0x47AC / 18348
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_79(int iParam0) //Position: 0x47C4 / 18372
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

bool Function_80() //Position: 0x47E7 / 18407
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_81(int iParam0) //Position: 0x4812 / 18450
{
	Function_58(27, 1, 150, 4294967271, 150, 1, 0, 0, 4, iParam0, "$/content/Ambient/MexicanRevolution/mexican_rev_rally", 63, 2, 50.0f, 2, 60, 0);
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x486F / 18543
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

int Function_83(bool bParam0, int iParam1) //Position: 0x4889 / 18569
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

int Function_84(var uParam0, int iParam1) //Position: 0x4981 / 18817
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

int Function_85(var uParam0, int iParam1) //Position: 0x4A65 / 19045
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

void Function_86(var uParam0, int iParam1) //Position: 0x4BA1 / 19361
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)), &iParam1);
		}
		iVar0++;
	}
	return;
}

void Function_87(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x4BEE / 19438
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_88(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_88(&(uVar2[1]), "UseCase1"));
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

var Function_88(var uParam0, int iParam1) //Position: 0x4FBE / 20414
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_89(var uParam0, int iParam1) //Position: 0x4FCD / 20429
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

void Function_90(var uParam0, int iParam1) //Position: 0x5028 / 20520
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

bool Function_91(int iParam0) //Position: 0x5080 / 20608
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_92(var uParam0, int iParam1) //Position: 0x5096 / 20630
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

var Function_93(int iParam0, char* cParam1, bool bParam3) //Position: 0x51F4 / 20980
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

int Function_94(int iParam0, float fParam1, struct<2> Param2, var uParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10) //Position: 0x5299 / 21145
{
	var uVar0;
	
	(&Global_98256[iParam010] + 16) = GET_ASSET_ID(&fParam1, 4);
	Global_98256[iParam010].f_24 = iParam0;
	*(&Global_98256[iParam010] + 40) = &uParam4;
	Global_98256[iParam010].f_36 = iParam6;
	Global_98256[iParam010].f_72 = iParam7;
	Global_98256[iParam010].f_28 = fParam8;
	Global_98256[iParam010].f_32 = iParam9;
	*(&Global_98256[iParam010] + 56) = Param2;
	Global_98256[iParam010].f_68 = iParam5;
	uVar0 = Function_52(iParam6, iParam0, 6);
	if (Function_99(uVar0) == 0)
	{
		Function_96(uVar0, MAKE_TIME_OF_DAY_EX(1, 0, 0, 0));
	}
	iParam10 = &iParam10;
	Function_95(&(Global_98256[iParam010]), 24);
	return 1;
}

void Function_95(var uParam0, int iParam1) //Position: 0x534B / 21323
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_96(int iParam0, int iParam1) //Position: 0x535C / 21340
{
	if (!Function_97(iParam0))
	{
		return;
	}
	*(&Global_21684[iParam07] + 40) = &iParam1;
	return;
}

bool Function_97(int iParam0) //Position: 0x5379 / 21369
{
	if (!Function_47(iParam0))
	{
		return 0;
	}
	if (!Function_98(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_98(int iParam0) //Position: 0x539D / 21405
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_99(int iParam0) //Position: 0x53B2 / 21426
{
	if (!Function_47(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_100(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x53CC / 21452
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(2))
	{
		return;
	}
	if (Function_117(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_15(&(Param0[iVar02]), 2))
		{
			if (Function_101(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_82(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_120(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_101(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x5484 / 21636
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_117(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_15(&iParam0, 2))
	{
		return 1;
	}
	if (Function_15(&iParam0, 4))
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
		(&iParam1 + 16) = Function_103(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_78(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_104(&iParam0, 4);
	}
	Function_102(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_102(int iParam0, struct<2> Param1) //Position: 0x5605 / 22021
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_78(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_78(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_78(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_78(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_78(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_78(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_103(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x574B / 22347
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_36(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_104(int iParam0, int iParam1) //Position: 0x5872 / 22642
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

void Function_105(var uParam0, int iParam1) //Position: 0x588C / 22668
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_106(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x589D / 22685
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_107(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x5908 / 22792
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_108(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x596E / 22894
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_109(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x59D7 / 22999
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

void Function_110(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5A36 / 23094
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_74(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_111(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5A9D / 23197
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_74(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_112(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5B06 / 23302
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_74(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_113(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5B71 / 23409
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_74(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_114(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5BD7 / 23511
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_74(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_115(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5C40 / 23616
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_74(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_116(int iParam0) //Position: 0x5CA4 / 23716
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_117(&(Global_43791[iParam0]), 4);
}

bool Function_117(var uParam0, int iParam1) //Position: 0x5CC0 / 23744
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_118(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x5CDD / 23773
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
	if (Function_117(&(Global_43791[iParam2]), 0x40000000))
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

void Function_119(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x5DC6 / 24006
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
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_16())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_117(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_120(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_105(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_105(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_120(var uParam0, int iParam1) //Position: 0x5EB6 / 24246
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_121() //Position: 0x5EC7 / 24263
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	Function_129(3, 3);
	uVar0 = &uVar0;
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/esc_veh_gen", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_cartvendor", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/oldf_pray", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_lean_window", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_table_service", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/browse_table", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_woman", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_leanwall", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/preaching_at_podium", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/browse_table_low", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/grind_corn", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/ai_goat_grazing", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/horse_drinking", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_link", 1, 0);
	Function_127(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	if (!Function_122(&iLocal_22 + 8))
	{
		return 0;
	}
	iLocal_22 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_22))
	{
		iLocal_22 = CREATE_LAYOUT("Chuparosa_layout");
	}
	*(&iLocal_22 + 896) = CREATE_OBJECTSET_IN_LAYOUT("moneygrpSet", &iLocal_22, 8, 0);
	*(&iLocal_22 + 904[03]) = Vector(-2759,24f, 32,12549f, 4276,566f);
	*(&iLocal_22 + 904[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nmoneyDrop", Vector(-2759,24f, 32,12549f, 4276,566f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "Toss");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_22 + 896);
	*(&iLocal_22 + 936) = Vector(-2689,996f, 31,55404f, 4295,06f);
	*(&iLocal_22 + 936 + 12) = Vector(0.0f, -92,29958f, 0.0f);
	*(&iLocal_22 + 960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_save_flag_CHU", Vector(-2689,996f, 31,55404f, 4295,06f), Vector(0.0f, -92,29958f, 0.0f));
	*(&iLocal_22 + 968) = Vector(-2724,54f, 32,82832f, 4292,267f);
	*(&iLocal_22 + 968 + 12) = Vector(0.0f, -20,18586f, 0.0f);
	*(&iLocal_22 + 992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_shop_flag_GEN", Vector(-2724,54f, 32,82832f, 4292,267f), Vector(0.0f, -20,18586f, 0.0f));
	*(&iLocal_22 + 1000) = Vector(-2713,886f, 32,83387f, 4289,681f);
	*(&iLocal_22 + 1000 + 12) = Vector(0.0f, 88,2687f, 0.0f);
	*(&iLocal_22 + 1024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_shop_flag_DOC", Vector(-2713,886f, 32,83387f, 4289,681f), Vector(0.0f, 88,2687f, 0.0f));
	*(&iLocal_22 + 1032) = Vector(-2683,663f, 31,49239f, 4294,73f);
	*(&iLocal_22 + 1032 + 12) = Vector(0.0f, 87,77409f, 0.0f);
	*(&iLocal_22 + 1056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_purchase_flag_CHU", Vector(-2683,663f, 31,49239f, 4294,73f), Vector(0.0f, 87,77409f, 0.0f));
	*(&iLocal_22 + 1064) = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", &iLocal_22, 8, 0);
	*(&iLocal_22 + 1072[03]) = Vector(-2729,833f, 32,82177f, 4264,17f);
	*(&iLocal_22 + 1072[03] + 12) = Vector(0.0f, 180,0685f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "setCornDown", Vector(-2729,833f, 32,82177f, 4264,17f), Vector(0.0f, 180,0685f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_22 + 1064);
	*(&iLocal_22 + 1104) = CREATE_OBJECTSET_IN_LAYOUT("watermelongrpSet", &iLocal_22, 8, 0);
	*(&iLocal_22 + 1112[03]) = Vector(-2699,569f, 31,50973f, 4293,519f);
	*(&iLocal_22 + 1112[03] + 12) = Vector(0.0f, 126,1483f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "setMelonDown", Vector(-2699,569f, 31,50973f, 4293,519f), Vector(0.0f, 126,1483f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_22 + 1104);
	*(&iLocal_22 + 1144) = Vector(-2718,053f, 32,23946f, 4234,686f);
	*(&iLocal_22 + 1144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_22 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep1", Vector(-2718,053f, 32,23946f, 4234,686f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1176) = Vector(-2723,413f, 32,23946f, 4237,482f);
	*(&iLocal_22 + 1176 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_22 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep2", Vector(-2723,413f, 32,23946f, 4237,482f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dealer_and_customer", "dealer_and_customer", Vector(-2722,068f, 32,82633f, 4294,833f), Vector(0.0f, -14,98609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dealer_and_customer1", "dealer_and_customer", Vector(-2706,592f, 31,18777f, 4282,946f), Vector(0.0f, -41,04572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dealer_and_customer2", "dealer_and_customer", Vector(-2727,116f, 32,28181f, 4237,824f), Vector(0.0f, -236,5456f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "esc_veh_gen", "esc_veh_gen", Vector(-2642,158f, 30,21604f, 4281,609f), Vector(0.0f, -189,9956f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1208), 1);
	*(&iLocal_22 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "esc_veh_gen1", "esc_veh_gen", Vector(-2759,056f, 32,12549f, 4284,19f), Vector(0.0f, 99,74242f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1216), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn1", "nlean_rail", Vector(-2700,94f, 31,2599f, 4255,972f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn3", "nlean_rail", Vector(-2670,462f, 35,65717f, 4257,349f), Vector(0.0f, 92,57377f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_cartVendor1", "mex_cartVendor", Vector(-2723,965f, 32,83249f, 4272,63f), Vector(0.0f, -91,60421f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_cartVendor2", "mex_cartVendor", Vector(-2718,475f, 32,83003f, 4275,44f), Vector(0.0f, -92,17863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanRail7", "nlean_rail", Vector(-2700,922f, 32,42649f, 4229,873f), Vector(0.0f, 79,96679f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanRail5", "nlean_rail", Vector(-2715,355f, 32,28f, 4244,152f), Vector(0.0f, -146,8703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanRail4", "nlean_rail", Vector(-2724,101f, 36,3434f, 4243,567f), Vector(0.0f, -147,1155f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_pickGarbage", "mex_pickGarbage", Vector(-2728,942f, 32,82357f, 4264,417f), Vector(0.0f, 170,4939f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_pickGarbage2", "mex_pickGarbage", Vector(-2730,501f, 32,79107f, 4283,625f), Vector(0.0f, -8,747872f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_pickGarbage3", "mex_pickGarbage", Vector(-2716,161f, 32,87223f, 4269,499f), Vector(0.0f, 88,95833f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround1", "Rand_Idle_Sit_Ground", Vector(-2732,229f, 32,82489f, 4266,584f), Vector(0.0f, -153,1718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround2", "Rand_Idle_Sit_Ground", Vector(-2733,203f, 32,82403f, 4267,043f), Vector(0.0f, -121,0428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround3", "Rand_Idle_Sit_Ground", Vector(-2721,261f, 32,82936f, 4297,862f), Vector(0.0f, 3,523345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround4", "Rand_Idle_Sit_Ground", Vector(-2736,289f, 32,59834f, 4279,507f), Vector(0.0f, 35,63669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround5", "Rand_Idle_Sit_Ground", Vector(-2722,877f, 32,82626f, 4297,546f), Vector(0.0f, -389,6537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround6", "Rand_Idle_Sit_Ground", Vector(-2710,026f, 32,83127f, 4291,558f), Vector(0.0f, -268,6413f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround7", "Rand_Idle_Sit_Ground", Vector(-2743,353f, 32,60661f, 4252,203f), Vector(0.0f, 135,3136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_washCloths", "mex_washCloths", Vector(-2713,497f, 32,88616f, 4262,684f), Vector(0.0f, -138,1016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_washCloths1", "mex_washCloths", Vector(-2714,627f, 32,08847f, 4245,144f), Vector(0.0f, -275,1101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_washCloths2", "mex_washCloths", Vector(-2751,627f, 32,12549f, 4273,753f), Vector(0.0f, 145,1261f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pee_nospawn", "Pee", Vector(-2699,524f, 31,12157f, 4295,953f), Vector(0.0f, -28,98092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pee_nospawn2", "Pee", Vector(-2699,436f, 32,27353f, 4215,277f), Vector(0.0f, -49,15475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall", Vector(-2710,05f, 32,83532f, 4294,586f), Vector(0.0f, 78,555f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground", Vector(-2735,177f, 32,54029f, 4287,906f), Vector(0.0f, 39,6382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(-2730,873f, 32,82593f, 4265,899f), Vector(0.0f, 169,64f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn1", "rand_idle_stand", Vector(-2722,141f, 32,82832f, 4278,196f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn2", "rand_idle_stand", Vector(-2737,552f, 32,51026f, 4274,347f), Vector(0.0f, -237,6557f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn", "rand_idle_stand", Vector(-2691,51f, 31,54237f, 4255,169f), Vector(0.0f, -93,53859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn1", "rand_idle_stand", Vector(-2683,577f, 31,54405f, 4261,768f), Vector(0.0f, -33,33777f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce", "stand_announce", Vector(-2716f, 32,89307f, 4264,277f), Vector(0.0f, 179,902f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce1", "stand_announce", Vector(-2726,999f, 32,82667f, 4288,021f), Vector(0.0f, 16,57644f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce2", "stand_announce", Vector(-2754,49f, 32,68199f, 4280,257f), Vector(0.0f, -255,3718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround", "Rand_Idle_Sit_Ground", Vector(-2741,405f, 32,32196f, 4270,94f), Vector(0.0f, 201,3613f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround8", "Rand_Idle_Sit_Ground", Vector(-2741,385f, 32,24132f, 4289,943f), Vector(0.0f, -32,67652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall", Vector(-2755,209f, 32,13554f, 4261,26f), Vector(0.0f, -76,76033f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_yelling_mid", "stand_yelling_mid", Vector(-2698,177f, 31,14732f, 4276,176f), Vector(0.0f, 173,4091f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-2697,212f, 32,0809f, 4287,476f), Vector(0.0f, 6,732717f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-2697,151f, 32,07793f, 4285,755f), Vector(0.0f, 170,1481f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-2697,867f, 32,09244f, 4286,403f), Vector(0.0f, -113,527f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1224), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce3", "stand_announce", Vector(-2683,431f, 31,86808f, 4287,223f), Vector(0.0f, -271,143f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn2", "rand_idle_stand", Vector(-2695,428f, 32,07424f, 4285,912f), Vector(0.0f, -96,15138f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn3", "rand_idle_stand", Vector(-2695,436f, 32,07042f, 4282,844f), Vector(0.0f, 146,0121f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn3", "rand_idle_stand", Vector(-2681,449f, 31,85911f, 4287,67f), Vector(0.0f, -84,09213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn4", "rand_idle_stand", Vector(-2699,48f, 32,07019f, 4283,121f), Vector(0.0f, 355,5928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn4", "Rand_Idle_NearWall", Vector(-2695,141f, 31,1384f, 4281,124f), Vector(0.0f, 296,848f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn5", "Rand_Idle_NearWall", Vector(-2693,607f, 31,15486f, 4281,363f), Vector(0.0f, -3,418384f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn6", "Rand_Idle_NearWall", Vector(-2687,749f, 31,14025f, 4281,558f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn7", "Rand_Idle_NearWall", Vector(-2700,762f, 31,19487f, 4280,21f), Vector(0.0f, -2,94624f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "bar_drink_serve", "bar_drink_serve", Vector(-2699,28f, 32,07365f, 4287,375f), Vector(0.0f, 88,15914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "bar_drink_serve1", "bar_drink_serve", Vector(-2699,325f, 32,07358f, 4288,519f), Vector(0.0f, 88,15914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_flirt_stand_link", "mex_flirt_stand_link", Vector(-2697,631f, 32,07573f, 4289,472f), Vector(0.0f, 28,73102f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_flirt_stand_link1", "mex_flirt_stand_link", Vector(-2689,823f, 31,34747f, 4284,649f), Vector(0.0f, 125,3811f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2679,242f, 31,51926f, 4286,334f), Vector(0.0f, -256,8764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall", "Rand_Idle_NearWall", Vector(-2689,488f, 31,35579f, 4290,813f), Vector(0.0f, -1,641587f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_prayer_oldWoman", "noldf_pray", Vector(-2654,689f, 31,26777f, 4277,835f), Vector(0.0f, -20,42616f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_prayer_oldWoman1", "noldf_pray", Vector(-2656,279f, 31,28197f, 4277,187f), Vector(0.0f, -43,8672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_holy_water", "stand_holy_water", Vector(-2657,05f, 31,27386f, 4275,322f), Vector(0.0f, -105,9093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_holy_water1", "stand_holy_water", Vector(-2661,975f, 31,27041f, 4281,784f), Vector(0.0f, -41,89678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround9", "Rand_Idle_Sit_Ground", Vector(-2676,626f, 31,22689f, 4277,809f), Vector(0.0f, 136,8702f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit", "Rand_Idle_Sit_Ground", Vector(-2675,969f, 31,24844f, 4278,489f), Vector(0.0f, 134,4704f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall4", "Rand_Idle_NearWall", Vector(-2662,258f, 31,39314f, 4248,458f), Vector(0.0f, -9,330482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_back_nospawn2", "nlean_rail", Vector(-2669,178f, 35,71977f, 4250,244f), Vector(0.0f, 68,18997f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn4", "nlean_rail", Vector(-2670,072f, 35,65451f, 4253,028f), Vector(0.0f, 79,65646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn5", "nlean_rail", Vector(-2661,612f, 40,53004f, 4249,344f), Vector(0.0f, 79,21042f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall6", "Rand_Idle_NearWall", Vector(-2665,05f, 31,38623f, 4261,358f), Vector(0.0f, 164,7648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn5", "rand_idle_stand", Vector(-2670,265f, 35,66784f, 4253,768f), Vector(0.0f, 81,04984f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn3", "repair_kneel", Vector(-2651,227f, 31,12656f, 4244,463f), Vector(0.0f, -97,86232f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low2", "sit_fence_low", Vector(-2660,789f, 40,53606f, 4248,995f), Vector(0.0f, -11,12019f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low3", "sit_fence_low", Vector(-2667,715f, 35,67765f, 4262,426f), Vector(0.0f, 172,4417f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low4", "sit_fence_low", Vector(-2716,046f, 32,28f, 4244,72f), Vector(0.0f, -147,0454f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low5", "sit_fence_low", Vector(-2724,418f, 32,28041f, 4245,969f), Vector(0.0f, 121,9602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall8", "Rand_Idle_NearWall", Vector(-2714,506f, 32,28f, 4241,621f), Vector(0.0f, -147,7087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall9", "Rand_Idle_NearWall", Vector(-2706,638f, 32,27977f, 4235,488f), Vector(0.0f, 301,2578f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall10", "Rand_Idle_NearWall", Vector(-2721,418f, 32,2793f, 4239,814f), Vector(0.0f, 211,7959f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall11", "Rand_Idle_NearWall", Vector(-2723,76f, 36,35501f, 4241,283f), Vector(0.0f, 214,6714f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround12", "Rand_Idle_Sit_Ground", Vector(-2718,897f, 32,28f, 4239,234f), Vector(0.0f, 117,2789f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround13", "Rand_Idle_Sit_Ground", Vector(-2707,46f, 32,28f, 4234,86f), Vector(0.0f, 660,1166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround14", "Rand_Idle_Sit_Ground", Vector(-2720,189f, 32,28f, 4238,594f), Vector(0.0f, -148,6528f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_lean_window3", "mex_lean_window", Vector(-2710,029f, 32,26497f, 4240,836f), Vector(0.0f, -146,6607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_lean_window5", "mex_lean_window", Vector(-2724,874f, 36,36723f, 4243,932f), Vector(0.0f, 211,5863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-2711,908f, 32,2328f, 4239,971f), Vector(0.0f, -146,6575f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1232), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-2715,815f, 32,28f, 4242,415f), Vector(0.0f, -148,7511f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn6", "rand_idle_stand", Vector(-2721,666f, 36,36624f, 4242,072f), Vector(0.0f, -145,7532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn7", "rand_idle_stand", Vector(-2716,927f, 32,28f, 4245,252f), Vector(0.0f, -146,593f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1240), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn4", "rand_idle_stand", Vector(-2734,886f, 36,35334f, 4226,86f), Vector(0.0f, 391,6349f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn5", "rand_idle_stand", Vector(-2709,256f, 32,28f, 4240,337f), Vector(0.0f, -151,5569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall12", "Rand_Idle_NearWall", Vector(-2735,427f, 32,6099f, 4247,504f), Vector(0.0f, -133,742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall13", "Rand_Idle_NearWall", Vector(-2740,268f, 32,60714f, 4252,83f), Vector(0.0f, -131,7845f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn10", "Rand_Idle_NearWall", Vector(-2739,63f, 32,52044f, 4245,397f), Vector(0.0f, -39,95169f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn8", "rand_idle_stand", Vector(-2736,266f, 32,61232f, 4251,381f), Vector(0.0f, -131,5037f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn6", "rand_idle_stand", Vector(-2737,481f, 32,6124f, 4252,42f), Vector(0.0f, -65,76472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "xxx_announce", "stand_announce", Vector(-2691,794f, 32,44015f, 4216,81f), Vector(0.0f, -89,66628f, 0.0f));
	*(&iLocal_22 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "yyy_announce", "stand_announce", Vector(-2693,515f, 32,48102f, 4227,475f), Vector(0.0f, -104,7692f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn5", "repair_kneel", Vector(-2701,437f, 32,35729f, 4216,87f), Vector(0.0f, 77,84497f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn6", "repair_kneel", Vector(-2679,476f, 32,45333f, 4232,774f), Vector(0.0f, -203,7723f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall15", "Rand_Idle_NearWall", Vector(-2681,455f, 32,47114f, 4228,956f), Vector(0.0f, 169,3333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround15", "Rand_Idle_Sit_Ground", Vector(-2680,644f, 32,47001f, 4219,519f), Vector(0.0f, 345,2155f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall16", "Rand_Idle_NearWall", Vector(-2678,49f, 32,47263f, 4221,358f), Vector(0.0f, 256,3966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_cleanpistol", "sit_cleanpistol", Vector(-2678,367f, 31,35864f, 4248,703f), Vector(0.0f, -43,78442f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1264), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low8", "sit_fence_low", Vector(-2686,176f, 31,55106f, 4257,221f), Vector(0.0f, -46,33631f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_stool_sit3", "mex_stool_sit", Vector(-2701,574f, 31,18695f, 4260,484f), Vector(0.0f, -160,0326f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table6", "stand_hammer_table", Vector(-2619,592f, 30,15142f, 4260,75f), Vector(0.0f, -91,33687f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn8", "repair_kneel", Vector(-2628,253f, 30,14766f, 4272,25f), Vector(0.0f, -134,1485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_flirt_stand_link2", "mex_flirt_stand_link", Vector(-2696,615f, 32,07283f, 4284,166f), Vector(0.0f, -43,31337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_cartVendor3", "mex_cartVendor", Vector(-2723,147f, 32,86032f, 4285,009f), Vector(0.0f, 71,97646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_cartVendor4", "mex_cartVendor", Vector(-2722,087f, 32,82832f, 4275,645f), Vector(0.0f, 90,11521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1272) = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_bartender_bar_work", "stand_bartender_bar_work", Vector(-2701,425f, 32,07548f, 4286,737f), Vector(0.0f, -89,85479f, 0.0f)), &iLocal_22 + 1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand2", "rand_idle_stand", Vector(-2701,606f, 32,07688f, 4289,271f), Vector(0.0f, -38,70362f, 0.0f)), &iLocal_22 + 1272);
	*(&iLocal_22 + 1280) = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ppp", "mex_table_service", Vector(-2697,792f, 31,13223f, 4275,048f), Vector(0.0f, 292,7946f, 0.0f)), &iLocal_22 + 1280);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "uuu", "mex_table_service", Vector(-2697,17f, 31,15475f, 4279,653f), Vector(0.0f, -23,09932f, 0.0f)), &iLocal_22 + 1280);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2602,294f, 30,34495f, 4256,892f), Vector(0.0f, -120,5578f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn10", "nlean_rail", Vector(-2612,535f, 30,28069f, 4248,888f), Vector(0.0f, 138,7607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn11", "nlean_rail", Vector(-2604,888f, 30,3518f, 4255,212f), Vector(0.0f, 139,5636f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn9", "rand_idle_stand", Vector(-2605,657f, 30,36879f, 4254,749f), Vector(0.0f, 136,4897f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn7", "rand_idle_stand", Vector(-2611,663f, 30,29744f, 4249,927f), Vector(0.0f, 131,4014f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce4", "stand_announce", Vector(-2611,097f, 30,3518f, 4250,811f), Vector(0.0f, 124,4171f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce5", "stand_announce", Vector(-2641,44f, 30,98385f, 4240f), Vector(0.0f, -137,6738f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn8", "rand_idle_stand", Vector(-2705,047f, 31,18569f, 4264,266f), Vector(0.0f, -87,6515f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn9", "rand_idle_stand", Vector(-2690,441f, 31,54942f, 4256,026f), Vector(0.0f, 51,88127f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn10", "rand_idle_stand", Vector(-2702,303f, 31,30546f, 4256,009f), Vector(0.0f, 269,7386f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn10", "rand_idle_stand", Vector(-2704,432f, 31,18695f, 4263,304f), Vector(0.0f, -130,454f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn11", "rand_idle_stand", Vector(-2698,768f, 31,35398f, 4255,475f), Vector(0.0f, 181,1726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn12", "rand_idle_stand", Vector(-2753,123f, 32,67117f, 4287,189f), Vector(0.0f, 112,6122f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-2754,104f, 32,66092f, 4278,278f), Vector(0.0f, 45,6679f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_yawning_n_any", "rand_idle_stand", Vector(-2754,379f, 32,66957f, 4283,319f), Vector(0.0f, 104,3889f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn12", "nlean_rail", Vector(-2755,559f, 32,65507f, 4278,385f), Vector(0.0f, 106,1503f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail_nospawn13", "nlean_rail", Vector(-2752,33f, 32,64083f, 4288,577f), Vector(0.0f, 123,4623f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn10", "repair_kneel", Vector(-2621,158f, 30,11765f, 4250,561f), Vector(0.0f, -45,13608f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn12", "repair_kneel", Vector(-2615,297f, 30,11765f, 4257,675f), Vector(0.0f, -116,5228f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn13", "repair_kneel", Vector(-2635,528f, 30,60296f, 4248,011f), Vector(0.0f, 179,7069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall2", "stand_hammer_wall", Vector(-2614,836f, 29,85286f, 4249,446f), Vector(0.0f, 44,92268f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn11", "rand_idle_stand", Vector(-2702,966f, 31,17231f, 4276,491f), Vector(0.0f, 119,5458f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn13", "rand_idle_stand", Vector(-2704,032f, 31,14145f, 4277,201f), Vector(0.0f, -57,97424f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-2691,164f, 31,13915f, 4280,13f), Vector(0.0f, 80,64589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn12", "rand_idle_stand", Vector(-2692,546f, 31,13915f, 4279,655f), Vector(0.0f, -84,59899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand_nospawn14", "rand_idle_stand", Vector(-2691,131f, 31,13915f, 4279,315f), Vector(0.0f, 100,455f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn13", "rand_idle_stand", Vector(-2699,02f, 31,14145f, 4274,566f), Vector(0.0f, 189,3094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_table", "lean_table", Vector(-2733,821f, 32,82417f, 4274,447f), Vector(0.0f, 170,1082f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", Vector(-2724,229f, 32,82832f, 4274,469f), Vector(0.0f, -90,48988f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-2697,085f, 32,40038f, 4231,594f), Vector(0.0f, -11,5191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsit_docks", "nsit_docks", Vector(-2676,745f, 32,47237f, 4234,501f), Vector(0.0f, -191,7146f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_R", "look_out_window_R", Vector(-2695,476f, 32,07358f, 4287,719f), Vector(0.0f, -92,57731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L", "look_out_window_L", Vector(-2681,944f, 31,86889f, 4286,098f), Vector(0.0f, -91,30393f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_table2", "lean_table", Vector(-2694,756f, 31,14651f, 4275,161f), Vector(0.0f, 79,34431f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_table3", "lean_table", Vector(-2700,052f, 31,15504f, 4276,08f), Vector(0.0f, 45,30392f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L1", "look_out_window_L", Vector(-2700,352f, 32,07358f, 4282,893f), Vector(0.0f, -2,270569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1288), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dealer_and_customer3", "dealer_and_customer", Vector(-2709,344f, 32,89307f, 4266,02f), Vector(0.0f, 94,84248f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "browse_table", "browse_table", Vector(-2716,434f, 32,82832f, 4272,794f), Vector(0.0f, 92,25356f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "browse_table1", "browse_table", Vector(-2719,656f, 32,82832f, 4287,158f), Vector(0.0f, 54,85031f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_table4", "lean_table", Vector(-2713,233f, 32,81488f, 4290,275f), Vector(0.0f, -90,30302f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L2", "look_out_window_L", Vector(-2722,108f, 32,82832f, 4277,297f), Vector(0.0f, 89,05966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-2750,297f, 32,12549f, 4269,403f), Vector(0.0f, 89,53464f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_L_talking2", "lean_fence_L_talking", Vector(-2720,358f, 36,35453f, 4241,028f), Vector(0.0f, -151,8631f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_distance_binocs", "look_distance_binocs", Vector(-2735,188f, 36,36133f, 4228,916f), Vector(0.0f, 83,76247f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_distance_binocs1", "look_distance_binocs", Vector(-2656,327f, 40,53142f, 4249,953f), Vector(0.0f, -57,70402f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pee", "Pee", Vector(-2727,387f, 32,12549f, 4223,108f), Vector(0.0f, -43,92878f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(-2727,277f, 36,37946f, 4222,154f), Vector(0.0f, 30,26789f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_docks1", "nsit_docks", Vector(-2675,957f, 35,7747f, 4222,226f), Vector(0.0f, -553,9034f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_distance_binocs2", "look_distance_binocs", Vector(-2673,86f, 35,77145f, 4221,826f), Vector(0.0f, -113,1027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_L_talking4", "lean_fence_L_talking", Vector(-2666,822f, 31,38693f, 4247,021f), Vector(0.0f, 45,35224f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L4", "look_out_window_L", Vector(-2670,448f, 31,38693f, 4255,068f), Vector(0.0f, 89,76052f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_sleep_CHU", "player_sleep_bed_R", Vector(-2693,262f, 31,52597f, 4295,973f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker", "Locked_Footlocker", Vector(-2692,005f, 31,48211f, 4297,786f), Vector(0.0f, 359,0897f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 1304, "NoLockpick", 1);
	DECOR_SET_BOOL(&iLocal_22 + 1304, "nAmmoCheck", 1);
	DECOR_SET_INT(&iLocal_22 + 1304, "GringoDollarAmt", false);
	DECOR_SET_BOOL(&iLocal_22 + 1304, "PlayerHouseChest", 1);
	DECOR_SET_BOOL(&iLocal_22 + 1304, "scrap", 1);
	*(&iLocal_22 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "aaa", "stand_sellPaper", Vector(-2678,621f, 32,51722f, 4219,815f), Vector(0.0f, 54,13822f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand", "rand_idle_stand", Vector(-2691,577f, 31,14235f, 4274,137f), Vector(0.0f, 169,7756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pee1", "Pee", Vector(-2649,169f, 30,4815f, 4282,26f), Vector(0.0f, -84,00387f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunkdancing_woman", "stand_drunkdancing_woman", Vector(-2696,592f, 32,06985f, 4286,874f), Vector(0.0f, 71,03017f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink7", "stand_drunk_rowdydrink", Vector(-2698,701f, 31,12157f, 4267,483f), Vector(0.0f, -178,4159f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_sleep_CHU1", "player_sleep_bed_L", Vector(-2693,262f, 31,52597f, 4293,715f), Vector(0.0f, -179,9934f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-2740,206f, 32,60661f, 4255,531f), Vector(0.0f, -131,6023f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-2665,775f, 31,08973f, 4297,115f), Vector(0.0f, 13,50743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-2664,846f, 31,08973f, 4296,908f), Vector(0.0f, 12,63311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nlean_rail", "nlean_rail", Vector(-2734,068f, 36,36867f, 4226,253f), Vector(0.0f, 31,02964f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail1", "nlean_rail", Vector(-2669,572f, 31,3713f, 4251,013f), Vector(0.0f, 69,54353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand1", "rand_idle_stand", Vector(-2669,831f, 31,38693f, 4251,682f), Vector(0.0f, 52,64424f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail2", "nlean_rail", Vector(-2726,173f, 36,39109f, 4243,399f), Vector(0.0f, 122,4736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail3", "nlean_rail", Vector(-2673,79f, 31,26664f, 4268,384f), Vector(0.0f, 42,83303f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail4", "nlean_rail", Vector(-2723,34f, 36,36924f, 4243,025f), Vector(0.0f, -148,1259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall17", "mex_leanWall", Vector(-2755,46f, 32,12549f, 4260,206f), Vector(0.0f, -256,8691f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_leanWall18", "mex_leanWall", Vector(-2702,263f, 31,19844f, 4281,075f), Vector(0.0f, 179,4543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-2719,193f, 36,38667f, 4239,506f), Vector(0.0f, -73,66692f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "preaching_at_podium", "preaching_at_podium", Vector(-2655,088f, 31,26224f, 4275,884f), Vector(0.0f, 135,7107f, 0.0f));
	*(&iLocal_22 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "bbb", "stand_sellPaper", Vector(-2692,527f, 32,46306f, 4226,13f), Vector(0.0f, 170,0112f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "whittle_wood", "whittle_wood", Vector(-2709,336f, 32,83332f, 4275,746f), Vector(0.0f, -125,7399f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "whittle_wood1", "whittle_wood", Vector(-2733,389f, 32,80006f, 4280,553f), Vector(0.0f, 72,34325f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "browse_table_low", "browse_table_low", Vector(-2712,357f, 32,83294f, 4285,917f), Vector(0.0f, -194,2401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_eat_fruit_barrel1", "stand_eat_fruit_barrel", Vector(-2713,465f, 32,80901f, 4286,327f), Vector(0.0f, -90,43224f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "browse_table_low1", "browse_table_low", Vector(-2729,827f, 32,81335f, 4281,943f), Vector(0.0f, 89,53314f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "grind_corn", "grind_corn", Vector(-2710,602f, 32,82798f, 4285,104f), Vector(0.0f, 87,95607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "grind_corn1", "grind_corn", Vector(-2729,604f, 32,82612f, 4275,97f), Vector(0.0f, -90,32787f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_stool_sit4", "mex_stool_sit", Vector(-2710,224f, 32,89307f, 4259,807f), Vector(0.0f, 178,55f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_cityhall", "lie_sleep_on_bed_l", Vector(-2649,437f, 35,68682f, 4259,565f), Vector(0.0f, -11,51153f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_watertrough", "knl_watertrough", Vector(-2730,633f, 32,75423f, 4289,998f), Vector(0.0f, 150,0536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_watertrough1", "knl_watertrough", Vector(-2715,935f, 32,14197f, 4246,886f), Vector(0.0f, 31,39256f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L5", "look_out_window_L", Vector(-2744,289f, 32,12549f, 4271,932f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_cartVendor", "mex_cartVendor", Vector(-2718,546f, 32,85599f, 4272,604f), Vector(0.0f, -91,86276f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1352), 0);
	*(&iLocal_22 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_cartVendor5", "mex_cartVendor", Vector(-2721,419f, 32,82862f, 4285,882f), Vector(0.0f, -124,9465f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1360), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_eat_fruit_barrel2", "stand_eat_fruit_barrel", Vector(-2717,194f, 32,89307f, 4266,62f), Vector(0.0f, 94,65188f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_eat_fruit_barrel3", "stand_eat_fruit_barrel", Vector(-2734,231f, 32,70026f, 4282,312f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1368) = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping1", "dog_sleeping", Vector(-2709,229f, 32,13842f, 4241,915f), Vector(0.0f, 87,31003f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping2", "dog_sleeping", Vector(-2662,047f, 31,26955f, 4245,833f), Vector(0.0f, -130,5047f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping3", "dog_sleeping", Vector(-2661,298f, 31,37847f, 4227,073f), Vector(0.0f, -322,7288f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping4", "dog_sleeping", Vector(-2645,48f, 30,85936f, 4267,036f), Vector(0.0f, -390,138f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping5", "dog_sleeping", Vector(-2706,37f, 31,20782f, 4278,037f), Vector(0.0f, -207,1072f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping6", "dog_sleeping", Vector(-2709,066f, 32,15312f, 4226,422f), Vector(0.0f, 173,0518f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping7", "dog_sleeping", Vector(-2741,418f, 32,23201f, 4269,429f), Vector(0.0f, -103,2713f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping8", "dog_sleeping", Vector(-2649,078f, 31,05207f, 4265,868f), Vector(0.0f, -316,4597f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping9", "dog_sleeping", Vector(-2667,509f, 31,15334f, 4270,441f), Vector(0.0f, -435,3413f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping10", "dog_sleeping", Vector(-2681,379f, 31,58239f, 4256,187f), Vector(0.0f, -220,6035f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping11", "dog_sleeping", Vector(-2662,222f, 31,09263f, 4295,902f), Vector(0.0f, -458,066f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping12", "dog_sleeping", Vector(-2708,875f, 32,88519f, 4270,887f), Vector(0.0f, -27,19551f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping13", "dog_sleeping", Vector(-2755,035f, 32,10873f, 4262,861f), Vector(0.0f, -198,0146f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping14", "dog_sleeping", Vector(-2742,538f, 32,13963f, 4234,323f), Vector(0.0f, -173,5166f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping15", "dog_sleeping", Vector(-2661,901f, 31,2511f, 4275,727f), Vector(0.0f, -435,3413f, 0.0f)), &iLocal_22 + 1368);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping16", "dog_sleeping", Vector(-2719,659f, 32,80344f, 4293,62f), Vector(0.0f, -137,1826f, 0.0f)), &iLocal_22 + 1368);
	*(&iLocal_22 + 1376) = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing", "ai_goat_grazing", Vector(-2690,854f, 31,96596f, 4234,824f), Vector(0.0f, 49,7446f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing1", "ai_goat_grazing", Vector(-2751,803f, 32,15723f, 4260,115f), Vector(0.0f, 69,84906f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing2", "ai_goat_grazing", Vector(-2754,101f, 32,14796f, 4253,272f), Vector(0.0f, -23,74084f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing4", "ai_goat_grazing", Vector(-2729,756f, 32,21817f, 4246,561f), Vector(0.0f, -360,0409f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing5", "ai_goat_grazing", Vector(-2718,87f, 32,18443f, 4246,359f), Vector(0.0f, -384,1841f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing6", "ai_goat_grazing", Vector(-2703,8f, 32,18443f, 4237,148f), Vector(0.0f, -280,3706f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing7", "ai_goat_grazing", Vector(-2702,57f, 32,18443f, 4219,721f), Vector(0.0f, -415,6729f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing8", "ai_goat_grazing", Vector(-2677,904f, 31,96741f, 4235,489f), Vector(0.0f, -326,0378f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing9", "ai_goat_grazing", Vector(-2669,959f, 32,04177f, 4229,94f), Vector(0.0f, -314,9368f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing10", "ai_goat_grazing", Vector(-2651,3f, 31,31342f, 4230,939f), Vector(0.0f, -408,8285f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing11", "ai_goat_grazing", Vector(-2664,655f, 31,31342f, 4245,007f), Vector(0.0f, -586,1939f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing12", "ai_goat_grazing", Vector(-2677,159f, 31,31342f, 4260,934f), Vector(0.0f, -644,1025f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing13", "ai_goat_grazing", Vector(-2688,928f, 31,42446f, 4263,198f), Vector(0.0f, -770,3742f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing14", "ai_goat_grazing", Vector(-2703,988f, 31,14704f, 4286,387f), Vector(0.0f, -773,7867f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing15", "ai_goat_grazing", Vector(-2713,122f, 32,84795f, 4298,404f), Vector(0.0f, -939,9165f, 0.0f)), &iLocal_22 + 1376);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ai_goat_grazing16", "ai_goat_grazing", Vector(-2712,866f, 32,85958f, 4259,311f), Vector(0.0f, -791,8191f, 0.0f)), &iLocal_22 + 1376);
	*(&iLocal_22 + 1384) = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting", "dog_sitting", Vector(-2748,806f, 32,06164f, 4256,887f), Vector(0.0f, -142,7021f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting2", "dog_sitting", Vector(-2752,903f, 32,12258f, 4264,483f), Vector(0.0f, -156,3408f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting3", "dog_sitting", Vector(-2622,295f, 30,20312f, 4241,458f), Vector(0.0f, -86,29097f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting4", "dog_sitting", Vector(-2731,618f, 32,15583f, 4241,564f), Vector(0.0f, -130,3174f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting7", "dog_sitting", Vector(-2717,02f, 32,13634f, 4223,875f), Vector(0.0f, -78,1883f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting12", "dog_sitting", Vector(-2671,878f, 32,04612f, 4228,613f), Vector(0.0f, -178,0966f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting13", "dog_sitting", Vector(-2684,301f, 31,55816f, 4252,694f), Vector(0.0f, 88,66974f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting14", "dog_sitting", Vector(-2663,277f, 31,27557f, 4268,03f), Vector(0.0f, 89,50526f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting17", "dog_sitting", Vector(-2686,682f, 31,17409f, 4275,11f), Vector(0.0f, 84,84787f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting18", "dog_sitting", Vector(-2692,913f, 31,12039f, 4272,403f), Vector(0.0f, 84,6655f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting19", "dog_sitting", Vector(-2698,528f, 31,13205f, 4270,298f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting20", "dog_sitting", Vector(-2712,587f, 32,88491f, 4274,045f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting21", "dog_sitting", Vector(-2720,473f, 32,83862f, 4288,921f), Vector(0.0f, 149,7872f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting22", "dog_sitting", Vector(-2743,843f, 32,13454f, 4275,167f), Vector(0.0f, 59,8721f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting23", "dog_sitting", Vector(-2759,548f, 32,12264f, 4265,002f), Vector(0.0f, 44,38501f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting24", "dog_sitting", Vector(-2757,853f, 32,14272f, 4282,718f), Vector(0.0f, 105,0191f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting25", "dog_sitting", Vector(-2750,587f, 32,1354f, 4294,938f), Vector(0.0f, 187,9627f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting26", "dog_sitting", Vector(-2743,732f, 32,12132f, 4297,247f), Vector(0.0f, 117,6228f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting27", "dog_sitting", Vector(-2644,775f, 31,10398f, 4237,453f), Vector(0.0f, -103,7121f, 0.0f)), &iLocal_22 + 1384);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting28", "dog_sitting", Vector(-2645,652f, 31,42549f, 4230,086f), Vector(0.0f, -7,666987f, 0.0f)), &iLocal_22 + 1384);
	*(&iLocal_22 + 1392) = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_drinking", "horse_drinking", Vector(-2672,395f, 31,13385f, 4267,133f), Vector(0.0f, 133,4156f, 0.0f)), &iLocal_22 + 1392);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_drinking1", "horse_drinking", Vector(-2668,291f, 31,2953f, 4245,95f), Vector(0.0f, 226,3092f, 0.0f)), &iLocal_22 + 1392);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_drinking2", "horse_drinking", Vector(-2757,545f, 32,12391f, 4278,386f), Vector(0.0f, 281,6989f, 0.0f)), &iLocal_22 + 1392);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_drinking4", "horse_drinking", Vector(-2749,66f, 32,12391f, 4293,551f), Vector(0.0f, 325,156f, 0.0f)), &iLocal_22 + 1392);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_stool_sit5", "mex_stool_sit", Vector(-2704,176f, 31,18695f, 4261,896f), Vector(0.0f, -134,0801f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_table5", "lean_table", Vector(-2677,635f, 31,5332f, 4285,892f), Vector(0.0f, 267,6974f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_link", Vector(-2701,406f, 31,12157f, 4271,844f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_flirt_sit_stool_link1", "mex_flirt_sit_stool_link", Vector(-2678,036f, 31,52763f, 4296,334f), Vector(0.0f, 176,8809f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_stool_sit6", "mex_stool_sit", Vector(-2700,813f, 31,11627f, 4269,699f), Vector(0.0f, 358,8258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand3", "rand_idle_stand", Vector(-2677,267f, 31,51938f, 4289,815f), Vector(0.0f, 76,46826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_cleanpistol1", "sit_cleanpistol", Vector(-2705,969f, 31,16889f, 4268,409f), Vector(0.0f, -88,83478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunkdancing_woman1", "stand_drunkdancing_woman", Vector(-2678,069f, 31,53157f, 4290,594f), Vector(0.0f, 17,27323f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1400), 1);
	*(&iLocal_22 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink8", "stand_drunk_rowdydrink", Vector(-2678,544f, 31,53034f, 4289,371f), Vector(0.0f, -154,6796f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1408), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink9", "stand_drunk_rowdydrink", Vector(-2677,588f, 31,53026f, 4288,903f), Vector(0.0f, 155,3002f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "drink_player", "drink_player", Vector(-2699,345f, 32,07688f, 4286,413f), Vector(0.0f, 87,44286f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn14", "rand_idle_stand", Vector(-2677,26f, 31,54405f, 4255,711f), Vector(0.0f, 53,38629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn15", "rand_idle_stand", Vector(-2685,453f, 31,54405f, 4248,753f), Vector(0.0f, -129,0992f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low9", "sit_fence_low", Vector(-2682,466f, 31,55106f, 4253,562f), Vector(0.0f, 137,7652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low", "sit_fence_low", Vector(-2678,462f, 31,53304f, 4259,703f), Vector(0.0f, 234,8929f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low10", "sit_fence_low", Vector(-2690,111f, 31,53304f, 4251,003f), Vector(0.0f, 51,82619f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low11", "sit_fence_low", Vector(-2685,379f, 31,53304f, 4262,559f), Vector(0.0f, 170,1358f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail5", "nlean_rail", Vector(-2677,145f, 31,46384f, 4250,785f), Vector(0.0f, -237,6449f, 0.0f));
	*(&iLocal_22 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround_tlkPsnt_link", "Rand_Idle_Sit_Ground", Vector(-2708,707f, 32,89223f, 4272,436f), Vector(0.0f, 85,82832f, 0.0f));
	*(&iLocal_22 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "mex_sitGround_tlkPsnt_link1", "Rand_Idle_Sit_Ground", Vector(-2701,035f, 32,21484f, 4222,516f), Vector(0.0f, 87,47881f, 0.0f));
	return 1;
}

bool Function_122(struct<2>[] Param0) //Position: 0xCB19 / 51993
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_126();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_125(&(Param0[iVar02]), 8);
		}
		else if (Function_124())
		{
			iVar1 = 1;
			Function_125(&(Param0[iVar02]), 8);
		}
		Function_125(&(Param0[iVar02]), 16);
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
				Function_125(&(Param0[iVar02]), 1);
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
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_125(&(Param0[iVar02]), 2);
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
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_125(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_125(&(Param0[iVar02]), 2);
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
	Function_123();
	return 1;
}

void Function_123() //Position: 0xCEDB / 52955
{
	if (!Function_133(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_124() //Position: 0xCF1B / 53019
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

void Function_125(struct<13> Param0) //Position: 0xCF49 / 53065
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_126() //Position: 0xCF5C / 53084
{
	if (!Function_133(128))
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

var Function_127(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xCF9E / 53150
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_128(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_125(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_128(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xCFDC / 53212
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_125(&(Param0[iVar02]), 4);
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

void Function_129(int iParam0, int iParam1) //Position: 0xD0AB / 53419
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

bool Function_130() //Position: 0xD0F5 / 53493
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
	
	Function_129(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("Chuparosa_layout");
	}
	*(&iLocal_4 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_ring", 4,203895E-45f, Vector(-2607,316f, 32,23925f, 4277,354f), Vector(0.0f, 20.0f, 0.0f), Vector(9,082973f, 3,009366f, 9,156511f));
	*(&iLocal_4 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "v_nightwatchVol", 2,802597E-45f, Vector(-2701,833f, 44,82173f, 4255,272f), Vector(0.0f, 0.0f, 0.0f), Vector(170,5879f, 36,96028f, 128,4257f));
	*(&iLocal_4 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "v_nightwatchTeleportVol", 2,802597E-45f, Vector(-2778,923f, 13,79006f, 4202,495f), Vector(0.0f, 31,7106f, 0.0f), Vector(292,4316f, 21,3058f, 93,2684f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_HorseBreaking", Vector(-2610,8f, 30,05599f, 4278,871f), Vector(0.0f, -20,86391f, 0.0f));
	*(&iLocal_4 + 32) = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", &iLocal_4, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwplayerpos", Vector(-2730,514f, 32,29929f, 4250,16f), Vector(0.0f, 113,6161f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 32);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwproctor", Vector(-2731,438f, 32,3142f, 4250,672f), Vector(0.0f, 283,8648f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 32);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwforeman", Vector(-2746,083f, 32,64523f, 4253,814f), Vector(0.0f, 230,522f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 32);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwdogpos", Vector(-2730,627f, 32,25657f, 4251,189f), Vector(0.0f, 46,01606f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 32);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsepos", Vector(-2753,996f, 32,12549f, 4260,307f), Vector(0.0f, 221,7562f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 32);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwintrodog", Vector(-2724f, 32,68894f, 4257,987f), Vector(0.0f, -8,486823f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 32);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcameraForemanPos", Vector(-2737,36f, 32,61f, 4251,46f), Vector(0.0f, 319,0277f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 32);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwplayerEndPos", Vector(-2744,914f, 32,60661f, 4254,271f), Vector(0.0f, 101,2515f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 32);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwgateway", Vector(-2746,629f, 32,70037f, 4254,446f), Vector(0.0f, 221,7562f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 32);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_nwfight", Vector(-2717,98f, 32,86103f, 4262,021f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 32);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight1", Vector(-2675,947f, 31,53657f, 4291,171f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 32);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight2", Vector(-2726,148f, 32,82832f, 4273,853f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_4 + 32);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight3", Vector(-2760f, 32,12549f, 4282,754f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_4 + 32);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight4", Vector(-2736,275f, 31,77021f, 4215,475f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_4 + 32);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight5", Vector(-2694,398f, 31,40305f, 4253,984f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4 + 32);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight6", Vector(-2676f, 31,35864f, 4246,057f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_4 + 32);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwholdup", Vector(-2702,149f, 31,12157f, 4308f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_4 + 32);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwholdup1", Vector(-2690,826f, 31,12157f, 4268,587f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_4 + 32);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwholdup2", Vector(-2665,617f, 31,81384f, 4228f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_4 + 32);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwholdup3", Vector(-2717,811f, 32,83012f, 4289,812f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_4 + 32);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwholdup4", Vector(-2762,626f, 30,83919f, 4253,375f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_4 + 32);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwholdup5", Vector(-2644,606f, 30,20625f, 4291,395f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_4 + 32);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcorpse", Vector(-2684.0f, 30,9463f, 4202,852f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_4 + 32);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcorpse1", Vector(-2741,847f, 31,0315f, 4202,448f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_4 + 32);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcorpse2", Vector(-2663,25f, 31,21162f, 4274,603f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_4 + 32);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcorpse3", Vector(-2654,609f, 30,66836f, 4286,61f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_4 + 32);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcorpse4", Vector(-2633,211f, 30,42161f, 4206,789f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_4 + 32);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwbreak_in", Vector(-2731,809f, 32,16233f, 4230,734f), Vector(0.0f, -58,28222f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_4 + 32);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwbreak_in1", Vector(-2715,698f, 32,28531f, 4220,48f), Vector(0.0f, 123,6798f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_4 + 32);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft", Vector(-2625,127f, 30,12083f, 4250,874f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_4 + 32);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft1", Vector(-2636f, 30,24974f, 4267,397f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_4 + 32);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft2", Vector(-2761,123f, 31,87255f, 4298,105f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_4 + 32);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft3", Vector(-2743,13f, 32,20991f, 4280f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_4 + 32);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_nwthief", Vector(-2729,7f, 32,81018f, 4286,3f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_4 + 32);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwthief1", Vector(-2714,855f, 32,82869f, 4282,065f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_4 + 32);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwthief2", Vector(-2713,719f, 32,89307f, 4270,281f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_4 + 32);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwthief3", Vector(-2740f, 32,46825f, 4265,935f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &iLocal_4 + 32);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwthief4", Vector(-2729,7f, 32,81018f, 4286,3f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &iLocal_4 + 32);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwharass", Vector(-2674,49f, 31,46854f, 4241,51f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &iLocal_4 + 32);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwharass1", Vector(-2694,028f, 31,60321f, 4244f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &iLocal_4 + 32);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwharass2", Vector(-2694,171f, 31,12157f, 4268,587f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &iLocal_4 + 32);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwharass3", Vector(-2636f, 30,74214f, 4242,4f), Vector(0.0f, -6,8403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &iLocal_4 + 32);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerpos", Vector(-2610,365f, 30,11765f, 4274,366f), Vector(0.0f, -149,3487f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag_helper", Vector(-2611,224f, 30,10968f, 4276f), Vector(0.0f, -37,61066f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker", Vector(-2612,001f, 30,11765f, 4272f), Vector(0.0f, -138,7728f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker1", Vector(-2609,443f, 30,05892f, 4280f), Vector(0.0f, -29,15555f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker2", Vector(-2614,069f, 30,11765f, 4276f), Vector(0.0f, -88,34979f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker3", Vector(-2606,296f, 29,94294f, 4276f), Vector(0.0f, 121,7345f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker4", Vector(-2608,506f, 30,11765f, 4272,506f), Vector(0.0f, 175,2038f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker5", Vector(-2612,001f, 30,11765f, 4272,996f), Vector(0.0f, -142,0662f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker6", Vector(-2606,338f, 29,981f, 4277,663f), Vector(0.0f, 79,4939f, 0.0f));
	*(&iLocal_4 + 40) = Vector(-2689,003f, 31,10484f, 4273,432f);
	*(&iLocal_4 + 40 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-2689,003f, 31,10484f, 4273,432f), Vector(0.0f, 0.0f, 0.0f));
	return 1;
}

void Function_131(char* cParam0) //Position: 0xDE08 / 56840
{
	if (!Function_133(128))
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

void Function_132(int iParam0) //Position: 0xDE45 / 56901
{
	int iVar0;
	
	if (Function_29(iParam0, 1) && Function_29(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_133(int iParam0) //Position: 0xDE79 / 56953
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

