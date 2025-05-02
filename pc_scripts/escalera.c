//Decompiled with MagicRDR v1.0
//Function Count : 132
//Statics Count : 1189
//Natives Count : 170
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 2;
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
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 62;
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
	var uLocal_336 = 5;
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
	var uLocal_402 = 5;
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
	var uLocal_444 = 1;
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
	var uLocal_462 = 6;
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
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	int iLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 27;
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
	int iLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_574 = 0;
	if (Function_131(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_130(0x8000000);
	}
	bVar0 = ((Function_129(40, 0) && !Function_129(41, 0)) && !Function_123(41));
	Function_122("Initializing Escalera", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_579 = 1000;
		switch (iLocal_574)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_574 = 1;
				}
				iLocal_579 = 0;
				break;
			
			case 0x00000001:
				if (Function_120())
				{
					Global_98961 = 0;
					iLocal_574 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4, 2);
					if (bVar0)
					{
						LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/ESC/Escalera_Revolution", 0);
					}
				}
				iLocal_579 = 0;
				break;
			
			case 0x00000002:
				if (Function_111())
				{
					Function_110(&(Global_43791[iScriptParam_0]), 32);
					iLocal_574 = 3;
				}
				iLocal_579 = 0;
				break;
			
			case 0x00000003:
				uLocal_580 = LAUNCH_NEW_SCRIPT_WITH_ARGS("EscaleraVol", &iScriptParam_0, 2, 0);
				Function_109(&Global_11836, &Global_14012, iScriptParam_0);
				iLocal_574 = 5;
				iLocal_579 = 0;
				break;
			
			case 0x00000005:
				if (Function_108(&Global_11836, &Global_14012, iScriptParam_0))
				{
					iLocal_574 = 4;
					iLocal_579 = 0;
				}
				else
				{
					iLocal_579 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_107(&(Global_43791[iScriptParam_0]), 16) && Function_106(Global_44085[iScriptParam_09]))
				{
					iLocal_574 = 6;
				}
				iLocal_579 = 0;
				break;
			
			case 0x00000006:
				switch (Global_46720)
				{
					case 0x00000000:
					case 0x00000003:
					case 0x00000001:
					case 0x00000002:
						if (!bVar0)
						{
							Function_105(0, &uLocal_582, 60.0f);
							Function_104(StackVal, 0, &uLocal_582, Vector(-4289,733f, 18,089f, 4468,941f));
							Function_103(StackVal, 0, &uLocal_582, Vector(-4289,733f, 18,089f, 4468,941f));
							Function_102(StackVal, 0, &uLocal_582, Vector(-4289,733f, 18,089f, 4468,941f));
							Function_101(StackVal, 0, &uLocal_582, Vector(-4289,733f, 18,089f, 4468,941f));
							Function_100(StackVal, 0, &uLocal_582, Vector(-4296,056f, 26,742f, 4388,659f));
							Function_99(StackVal, 0, &uLocal_582, Vector(-4290,391f, 18,132f, 4452,845f));
							Function_98(0, &uLocal_582, &iLocal_4);
							Function_105(1, &uLocal_582, 60.0f);
							Function_104(StackVal, 1, &uLocal_582, Vector(-4297,252f, 18,071f, 4435,068f));
							Function_103(StackVal, 1, &uLocal_582, Vector(-4297,252f, 18,071f, 4435,068f));
							Function_102(StackVal, 1, &uLocal_582, Vector(-4297,252f, 18,071f, 4435,068f));
							Function_101(StackVal, 1, &uLocal_582, Vector(-4297,252f, 18,071f, 4435,068f));
							Function_100(StackVal, 1, &uLocal_582, Vector(-4297,252f, 18,071f, 4435,068f));
							Function_99(StackVal, 1, &uLocal_582, Vector(-4297,252f, 18,071f, 4435,068f));
							Function_98(1, &uLocal_582, &iLocal_4);
							Function_105(2, &uLocal_582, 30.0f);
							Function_104(StackVal, 2, &uLocal_582, Vector(-4293,305f, 18,071f, 4440.0f));
							Function_103(StackVal, 2, &uLocal_582, Vector(-4293,305f, 18,071f, 4440.0f));
							Function_102(StackVal, 2, &uLocal_582, Vector(-4293,305f, 18,071f, 4440.0f));
							Function_101(StackVal, 2, &uLocal_582, Vector(-4293,305f, 18,071f, 4440.0f));
							Function_100(StackVal, 2, &uLocal_582, Vector(-4288,754f, 26,752f, 4387,174f));
							Function_99(StackVal, 2, &uLocal_582, Vector(-4270,811f, 22,796f, 4396,248f));
							Function_98(2, &uLocal_582, &iLocal_4);
							Function_105(3, &uLocal_582, 30.0f);
							Function_104(StackVal, 3, &uLocal_582, Vector(-4284,716f, 18,14f, 4433,477f));
							Function_103(StackVal, 3, &uLocal_582, Vector(-4284,716f, 18,14f, 4433,477f));
							Function_102(StackVal, 3, &uLocal_582, Vector(-4284,716f, 18,14f, 4433,477f));
							Function_101(StackVal, 3, &uLocal_582, Vector(-4284,716f, 18,14f, 4433,477f));
							Function_100(StackVal, 3, &uLocal_582, Vector(-4293,3f, 26,728f, 4380,855f));
							Function_99(StackVal, 3, &uLocal_582, Vector(-4243,161f, 22,26078f, 4371,758f));
							Function_98(3, &uLocal_582, &iLocal_4);
							Function_105(4, &uLocal_582, 30.0f);
							Function_104(StackVal, 4, &uLocal_582, Vector(-4281,225f, 18,153f, 4433,073f));
							Function_103(StackVal, 4, &uLocal_582, Vector(-4281,225f, 18,153f, 4433,073f));
							Function_102(StackVal, 4, &uLocal_582, Vector(-4281,225f, 18,153f, 4433,073f));
							Function_101(StackVal, 4, &uLocal_582, Vector(-4281,225f, 18,153f, 4433,073f));
							Function_100(StackVal, 4, &uLocal_582, Vector(-4243,195f, 22,211f, 4377,188f));
							Function_99(StackVal, 4, &uLocal_582, Vector(-4243,593f, 22,261f, 4370,091f));
							Function_98(4, &uLocal_582, &iLocal_4);
							Function_105(5, &uLocal_582, 30.0f);
							Function_104(StackVal, 5, &uLocal_582, Vector(-4352,906f, 25,76f, 4434,278f));
							Function_103(StackVal, 5, &uLocal_582, Vector(-4272,192f, 18,147f, 4447,433f));
							Function_102(StackVal, 5, &uLocal_582, Vector(-4272,192f, 18,147f, 4447,433f));
							Function_101(StackVal, 5, &uLocal_582, Vector(-4272,192f, 18,147f, 4447,433f));
							Function_100(StackVal, 5, &uLocal_582, Vector(-4290,821f, 26,752f, 4383,335f));
							Function_99(StackVal, 5, &uLocal_582, Vector(-4352,906f, 25,76f, 4434,278f));
							Function_98(5, &uLocal_582, &iLocal_4);
							Function_105(24, &uLocal_582, 30.0f);
							Function_104(StackVal, 24, &uLocal_582, Vector(-4297,139f, 22,005f, 4415,436f));
							Function_103(StackVal, 24, &uLocal_582, Vector(-4297,139f, 22,005f, 4415,436f));
							Function_102(StackVal, 24, &uLocal_582, Vector(-4297,139f, 22,005f, 4415,436f));
							Function_101(StackVal, 24, &uLocal_582, Vector(-4297,139f, 22,005f, 4415,436f));
							Function_100(StackVal, 24, &uLocal_582, Vector(-4290,97f, 17,92418f, 4425,675f));
							Function_99(StackVal, 24, &uLocal_582, Vector(-4290,97f, 17,92418f, 4425,675f));
							Function_98(24, &uLocal_582, &iLocal_4);
							Function_105(6, &uLocal_582, 30.0f);
							Function_104(StackVal, 6, &uLocal_582, Vector(-4289,297f, 23,11f, 4398,05f));
							Function_103(StackVal, 6, &uLocal_582, Vector(-4294,868f, 26,744f, 4385,77f));
							Function_102(StackVal, 6, &uLocal_582, Vector(-4294,868f, 26,744f, 4385,77f));
							Function_101(StackVal, 6, &uLocal_582, Vector(-4294,868f, 26,744f, 4385,77f));
							Function_100(StackVal, 6, &uLocal_582, Vector(-4294,868f, 26,744f, 4385,77f));
							Function_99(StackVal, 6, &uLocal_582, Vector(-4294,868f, 26,744f, 4385,77f));
							Function_98(6, &uLocal_582, &iLocal_4);
							Function_105(7, &uLocal_582, 30.0f);
							Function_104(StackVal, 7, &uLocal_582, Vector(-4304,791f, 31,16f, 4377,294f));
							Function_103(StackVal, 7, &uLocal_582, Vector(-4308,675f, 31,16f, 4378,18f));
							Function_102(StackVal, 7, &uLocal_582, Vector(-4308,675f, 31,16f, 4378,18f));
							Function_101(StackVal, 7, &uLocal_582, Vector(-4308,675f, 31,16f, 4378,18f));
							Function_100(StackVal, 7, &uLocal_582, Vector(-4308,675f, 31,16f, 4378,18f));
							Function_99(StackVal, 7, &uLocal_582, Vector(-4308,675f, 31,16f, 4378,18f));
							Function_98(7, &uLocal_582, &iLocal_4);
							Function_105(8, &uLocal_582, 30.0f);
							Function_104(StackVal, 8, &uLocal_582, Vector(-4311,625f, 31,16f, 4374,334f));
							Function_103(StackVal, 8, &uLocal_582, Vector(-4311,085f, 31,16f, 4382,259f));
							Function_102(StackVal, 8, &uLocal_582, Vector(-4311,625f, 31,16f, 4374,334f));
							Function_101(StackVal, 8, &uLocal_582, Vector(-4311,625f, 31,16f, 4374,334f));
							Function_100(StackVal, 8, &uLocal_582, Vector(-4311,625f, 31,16f, 4374,334f));
							Function_99(StackVal, 8, &uLocal_582, Vector(-4311,625f, 31,16f, 4374,334f));
							Function_98(8, &uLocal_582, &iLocal_4);
							Function_105(9, &uLocal_582, 40.0f);
							Function_104(StackVal, 9, &uLocal_582, Vector(-4318,554f, 26,893f, 4401,829f));
							Function_103(StackVal, 9, &uLocal_582, Vector(-4318,554f, 26,893f, 4401,829f));
							Function_102(StackVal, 9, &uLocal_582, Vector(-4318,554f, 26,893f, 4401,829f));
							Function_101(StackVal, 9, &uLocal_582, Vector(-4318,554f, 26,893f, 4401,829f));
							Function_100(StackVal, 9, &uLocal_582, Vector(-4318,554f, 26,893f, 4401,829f));
							Function_99(StackVal, 9, &uLocal_582, Vector(-4318,554f, 26,893f, 4401,829f));
							Function_98(9, &uLocal_582, &iLocal_4);
							Function_105(10, &uLocal_582, 40.0f);
							Function_104(StackVal, 10, &uLocal_582, Vector(-4315,453f, 23,005f, 4418,326f));
							Function_103(StackVal, 10, &uLocal_582, Vector(-4315,453f, 23,005f, 4418,326f));
							Function_102(StackVal, 10, &uLocal_582, Vector(-4315,453f, 23,005f, 4418,326f));
							Function_101(StackVal, 10, &uLocal_582, Vector(-4315,453f, 23,005f, 4418,326f));
							Function_100(StackVal, 10, &uLocal_582, Vector(-4315,453f, 23,005f, 4418,326f));
							Function_99(StackVal, 10, &uLocal_582, Vector(-4315,453f, 23,005f, 4418,326f));
							Function_98(10, &uLocal_582, &iLocal_4);
							Function_105(23, &uLocal_582, 30.0f);
							Function_104(StackVal, 23, &uLocal_582, Vector(-4329,96f, 27,55215f, 4405,154f));
							Function_103(StackVal, 23, &uLocal_582, Vector(-4329,96f, 27,55215f, 4405,154f));
							Function_102(StackVal, 23, &uLocal_582, Vector(-4329,96f, 27,55215f, 4405,154f));
							Function_101(StackVal, 23, &uLocal_582, Vector(-4329,96f, 27,55215f, 4405,154f));
							Function_100(StackVal, 23, &uLocal_582, Vector(-4319,239f, 31,12692f, 4378,899f));
							Function_99(StackVal, 23, &uLocal_582, Vector(-4319,239f, 31,12692f, 4378,899f));
							Function_98(23, &uLocal_582, &iLocal_4);
							Function_105(11, &uLocal_582, 20.0f);
							Function_104(StackVal, 11, &uLocal_582, Vector(-4350,446f, 28,32f, 4433,197f));
							Function_103(StackVal, 11, &uLocal_582, Vector(-4328,527f, 27,389f, 4408,197f));
							Function_102(StackVal, 11, &uLocal_582, Vector(-4328,527f, 27,389f, 4408,197f));
							Function_101(StackVal, 11, &uLocal_582, Vector(-4328,527f, 27,389f, 4408,197f));
							Function_100(StackVal, 11, &uLocal_582, Vector(-4328,527f, 27,389f, 4408,197f));
							Function_99(StackVal, 11, &uLocal_582, Vector(-4350,446f, 28,32f, 4433,197f));
							Function_98(11, &uLocal_582, &iLocal_4);
							Function_105(12, &uLocal_582, 30.0f);
							Function_104(StackVal, 12, &uLocal_582, Vector(-4272,496f, 18,071f, 4430,191f));
							Function_103(StackVal, 12, &uLocal_582, Vector(-4272,496f, 18,071f, 4430,191f));
							Function_102(StackVal, 12, &uLocal_582, Vector(-4272,496f, 18,071f, 4430,191f));
							Function_101(StackVal, 12, &uLocal_582, Vector(-4272,496f, 18,071f, 4430,191f));
							Function_100(StackVal, 12, &uLocal_582, Vector(-4290,407f, 26,752f, 4384,996f));
							Function_99(StackVal, 12, &uLocal_582, Vector(-4312,227f, 31,16f, 4378,785f));
							Function_98(12, &uLocal_582, &iLocal_4);
							Function_105(13, &uLocal_582, 30.0f);
							Function_104(StackVal, 13, &uLocal_582, Vector(-4278,768f, 18,071f, 4441,817f));
							Function_103(StackVal, 13, &uLocal_582, Vector(-4278,768f, 18,071f, 4441,817f));
							Function_102(StackVal, 13, &uLocal_582, Vector(-4278,768f, 18,071f, 4441,817f));
							Function_101(StackVal, 13, &uLocal_582, Vector(-4278,768f, 18,071f, 4441,817f));
							Function_100(StackVal, 13, &uLocal_582, Vector(-4296.0f, 22,005f, 4408.0f));
							Function_99(StackVal, 13, &uLocal_582, Vector(-4348,815f, 29,313f, 4403,848f));
							Function_98(13, &uLocal_582, &iLocal_4);
							Function_105(14, &uLocal_582, 30.0f);
							Function_104(StackVal, 14, &uLocal_582, Vector(-4289,09f, 18,071f, 4447,256f));
							Function_103(StackVal, 14, &uLocal_582, Vector(-4289,09f, 18,071f, 4447,256f));
							Function_102(StackVal, 14, &uLocal_582, Vector(-4289,09f, 18,071f, 4447,256f));
							Function_101(StackVal, 14, &uLocal_582, Vector(-4289,09f, 18,071f, 4447,256f));
							Function_100(StackVal, 14, &uLocal_582, Vector(-4300,008f, 22,05748f, 4415,084f));
							Function_99(StackVal, 14, &uLocal_582, Vector(-4290,521f, 29,832f, 4385,39f));
							Function_98(14, &uLocal_582, &iLocal_4);
							Function_105(15, &uLocal_582, 30.0f);
							Function_104(StackVal, 15, &uLocal_582, Vector(-4297,981f, 18,07059f, 4440f));
							Function_103(StackVal, 15, &uLocal_582, Vector(-4297,981f, 18,07059f, 4440f));
							Function_102(StackVal, 15, &uLocal_582, Vector(-4297,981f, 18,07059f, 4440f));
							Function_101(StackVal, 15, &uLocal_582, Vector(-4297,981f, 18,07059f, 4440f));
							Function_100(StackVal, 15, &uLocal_582, Vector(-4312,227f, 31,16f, 4378,785f));
							Function_99(StackVal, 15, &uLocal_582, Vector(-4356,938f, 29,339f, 4411,731f));
							Function_98(15, &uLocal_582, &iLocal_4);
							Function_105(16, &uLocal_582, 30.0f);
							Function_104(StackVal, 16, &uLocal_582, Vector(-4302,539f, 22,08517f, 4412,172f));
							Function_103(StackVal, 16, &uLocal_582, Vector(-4302,539f, 22,08517f, 4412,172f));
							Function_102(StackVal, 16, &uLocal_582, Vector(-4302,539f, 22,08517f, 4412,172f));
							Function_101(StackVal, 16, &uLocal_582, Vector(-4302,539f, 22,08517f, 4412,172f));
							Function_100(StackVal, 16, &uLocal_582, Vector(-4297,249f, 26,746f, 4389,945f));
							Function_99(StackVal, 16, &uLocal_582, Vector(-4312,46f, 31,161f, 4377,38f));
							Function_98(16, &uLocal_582, &iLocal_4);
							Function_105(17, &uLocal_582, 30.0f);
							Function_104(StackVal, 17, &uLocal_582, Vector(-4379,041f, 38,631f, 4356,349f));
							Function_103(StackVal, 17, &uLocal_582, Vector(-4374,517f, 38,766f, 4364,726f));
							Function_102(StackVal, 17, &uLocal_582, Vector(-4374,517f, 38,766f, 4364,726f));
							Function_101(StackVal, 17, &uLocal_582, Vector(-4379,041f, 38,631f, 4356,349f));
							Function_100(StackVal, 17, &uLocal_582, Vector(-4379,041f, 38,631f, 4356,349f));
							Function_99(StackVal, 17, &uLocal_582, Vector(-4379,041f, 38,631f, 4356,349f));
							Function_98(17, &uLocal_582, &iLocal_4);
							Function_105(18, &uLocal_582, 30.0f);
							Function_104(StackVal, 18, &uLocal_582, Vector(-4353,508f, 34,72f, 4384,324f));
							Function_103(StackVal, 18, &uLocal_582, Vector(-4357,069f, 43,382f, 4369,286f));
							Function_102(StackVal, 18, &uLocal_582, Vector(-4353,508f, 34,72f, 4384,324f));
							Function_101(StackVal, 18, &uLocal_582, Vector(-4357,069f, 43,382f, 4369,286f));
							Function_100(StackVal, 18, &uLocal_582, Vector(-4353,508f, 34,72f, 4384,324f));
							Function_99(StackVal, 18, &uLocal_582, Vector(-4355,256f, 43,413f, 4362,932f));
							Function_98(18, &uLocal_582, &iLocal_4);
							Function_105(19, &uLocal_582, 30.0f);
							Function_104(StackVal, 19, &uLocal_582, Vector(-4322,885f, 45,924f, 4363,561f));
							Function_103(StackVal, 19, &uLocal_582, Vector(-4323,612f, 39,35f, 4355,106f));
							Function_102(StackVal, 19, &uLocal_582, Vector(-4322,885f, 45,924f, 4363,561f));
							Function_101(StackVal, 19, &uLocal_582, Vector(-4323,612f, 39,35f, 4355,106f));
							Function_100(StackVal, 19, &uLocal_582, Vector(-4322,885f, 45,924f, 4363,561f));
							Function_99(StackVal, 19, &uLocal_582, Vector(-4325,531f, 45,921f, 4363,201f));
							Function_98(19, &uLocal_582, &iLocal_4);
							Function_105(20, &uLocal_582, 30.0f);
							Function_104(StackVal, 20, &uLocal_582, Vector(-4337,546f, 42,058f, 4329,667f));
							Function_103(StackVal, 20, &uLocal_582, Vector(-4356,582f, 34,662f, 4374,887f));
							Function_102(StackVal, 20, &uLocal_582, Vector(-4354,664f, 42,027f, 4346,726f));
							Function_101(StackVal, 20, &uLocal_582, Vector(-4356,582f, 34,662f, 4374,887f));
							Function_100(StackVal, 20, &uLocal_582, Vector(-4344,248f, 42,076f, 4328,278f));
							Function_99(StackVal, 20, &uLocal_582, Vector(-4337,733f, 42,01f, 4330,477f));
							Function_98(20, &uLocal_582, &iLocal_4);
							Function_105(21, &uLocal_582, 30.0f);
							Function_104(StackVal, 21, &uLocal_582, Vector(-4348,228f, 42,076f, 4330,117f));
							Function_103(StackVal, 21, &uLocal_582, Vector(-4338,382f, 42,089f, 4326,753f));
							Function_102(StackVal, 21, &uLocal_582, Vector(-4338,382f, 42,089f, 4326,753f));
							Function_101(StackVal, 21, &uLocal_582, Vector(-4338,382f, 42,089f, 4326,753f));
							Function_100(StackVal, 21, &uLocal_582, Vector(-4338,382f, 42,089f, 4326,753f));
							Function_99(StackVal, 21, &uLocal_582, Vector(-4348,228f, 42,076f, 4330,117f));
							Function_98(21, &uLocal_582, &iLocal_4);
							Function_105(22, &uLocal_582, 30.0f);
							Function_104(StackVal, 22, &uLocal_582, Vector(-4336,509f, 42,058f, 4324,515f));
							Function_103(StackVal, 22, &uLocal_582, Vector(-4349,077f, 42,089f, 4326,753f));
							Function_102(StackVal, 22, &uLocal_582, Vector(-4349,077f, 42,089f, 4326,753f));
							Function_101(StackVal, 22, &uLocal_582, Vector(-4349,077f, 42,089f, 4326,753f));
							Function_100(StackVal, 22, &uLocal_582, Vector(-4349,077f, 42,089f, 4326,753f));
							Function_99(StackVal, 22, &uLocal_582, Vector(-4336,509f, 42,058f, 4324,515f));
							Function_98(22, &uLocal_582, &iLocal_4);
							Function_94(&Global_11836, &Global_14012, &uLocal_582, &Global_10996, iScriptParam_0);
						}
						break;
				}
				if (Function_107(&(Global_43791[iScriptParam_0]), 256) || !Function_131(2))
				{
					iLocal_1178 = 1;
				}
				uLocal_575 = Function_93(Global_46850[0], "Escalera", "doctor01", 1);
				if (IS_DOOR_VALID(&uLocal_575))
				{
					Function_92(&uLocal_575, &Global_14012[103] + 16);
				}
				uLocal_577 = Function_93(Global_46850[0], "Escalera", "gunsmith01", 1);
				if (IS_DOOR_VALID(&uLocal_577))
				{
					Function_92(&uLocal_577, &Global_14012[93] + 16);
				}
				if (!Global_46720 != 2)
				{
					Function_91(&iLocal_82 + 1864, GET_OBJECT_FROM_PERS_CHAR(&Global_14012[63] + 16));
					Function_91(&iLocal_82 + 1784, GET_OBJECT_FROM_PERS_CHAR(&Global_14012[223] + 16));
				}
				Function_90(&Global_14012[103] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_82, "escv_doctor_office_set"));
				Function_89(&Global_14012[103] + 16, 3);
				Function_88(&Global_14012[103] + 16, 398);
				Function_90(&Global_14012[93] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_82, "escv_gunsmith_set"));
				Function_89(&Global_14012[93] + 16, 2);
				Function_88(&Global_14012[93] + 16, 399);
				Function_90(&Global_14012[13] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_82, "escv_merchant"));
				Function_89(&Global_14012[13] + 16, 1);
				Function_88(&Global_14012[13] + 16, 397);
				Function_83(5, &iLocal_82 + 1816, &iLocal_82 + 1168, &iLocal_82 + 1264, Function_93(iScriptParam_0, "escalara", "generalHouse03", 2), Function_93(iScriptParam_0, "escalara", "generalHouse03", 1), &iLocal_4 + 264);
				Function_81(5, &iLocal_82 + 1432);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_82, "escv_house_player")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_82, "escv_house_player"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_82, "escv_house_player"));
				}
				else
				{
					LOG_ERROR("ESC: Cannot find escv_house_player to restrict players room");
				}
				Function_110(&(Global_43791[iScriptParam_0]), 8);
				if (Function_107(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_80(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_574 = 10;
				}
				else
				{
					iLocal_574 = 7;
				}
				iLocal_579 = 0;
				break;
			
			case 0x00000007:
				switch (Global_46720)
				{
					case 0x00000000:
						Function_78(iScriptParam_0);
						Function_77(iScriptParam_0);
						break;
					
					case 0x00000001:
						Function_78(iScriptParam_0);
						Function_77(iScriptParam_0);
						break;
					
					case 0x00000002:
						Function_78(iScriptParam_0);
						Function_77(iScriptParam_0);
						break;
					
					case 0x00000003:
						break;
				}
				Function_76(iScriptParam_0);
				Function_73(iScriptParam_0);
				Function_71(iScriptParam_0);
				Function_70(iScriptParam_0);
				Function_66(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 80.0f, 8, 70, 0);
				Function_65(&Global_27462[952] + 188, 2, 5.0f, 1, 4294967295);
				Function_66(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 80.0f, 8, 70, 0);
				Function_65(&Global_27462[852] + 188, 2, 5.0f, 1, 4294967295);
				Function_66(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 80.0f, 8, 70, 0);
				Function_65(&Global_27462[1052] + 188, 2, 5.0f, 1, 4294967295);
				Function_64(iScriptParam_0);
				if (Function_63())
				{
					Function_49(StackVal, &Global_98318, 7, Global_46850[0], "$/content/Mexico/Mini_Games/LiarsDice_ESC/LiarsDice_ESC", 4294967295, 0, "EscLiarsDiceHC", 426, Vector(-4289,096f, 26,743f, 4381,103f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "escv_liarsdice"));
					Function_48(&Global_98318, 7, 10);
				}
				else
				{
					Function_49(StackVal, &Global_98318, 7, Global_46850[0], "$/content/Mexico/Mini_Games/LiarsDice_ESC/LiarsDice_ESC", 4294967295, 0, "EscLiarsDice", 426, Vector(-4289,096f, 26,743f, 4381,103f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "escv_liarsdice"));
					Function_48(&Global_98318, 7, 20);
				}
				Function_49(StackVal, &Global_98318, 8, Global_46850[0], "$/content/Mexico/Mini_Games/FiveFingerFillet_ESC/FiveFingerFillet_ESC", 4294967295, 0, "EscFiveFinger", 353, Vector(-4274,226f, 18,106f, 4453,483f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "escv_fff"));
				Function_48(&Global_98318, 8, 1);
				Function_47(&Global_98318, 8);
				iLocal_574 = 8;
				iLocal_579 = 0;
				break;
			
			case 0x00000008:
				Function_46(64);
				if (Function_45(iScriptParam_0, &Global_11836, iLocal_1178))
				{
					Function_41(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_37(2, 4294967295, 4294967295, 0, 3);
				}
				else
				{
					Function_37(1, 10, 6, 30, 5);
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_41(2, 0,5f, 2, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_41(0, 0,5f, 2, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_41(2, 0,5f, 2, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
					}
					Function_36(&Global_14012[123] + 16, 0);
					Function_36(&Global_14012[133] + 16, 0);
					Function_36(&Global_14012[143] + 16, 0);
					Function_36(&Global_14012[153] + 16, 0);
					Function_36(&Global_14012[163] + 16, 0);
					Function_36(&Global_14012[173] + 16, 0);
					Function_36(&Global_14012[183] + 16, 0);
					Function_36(&Global_14012[193] + 16, 0);
				}
				Function_33(&iLocal_4);
				Function_110(&(Global_43791[iScriptParam_0]), 512);
				iLocal_574 = 9;
				iLocal_579 = 0;
				break;
			
			case 0x00000009:
				Function_31(&iLocal_4, iScriptParam_0);
				Function_110(&(Global_43791[iScriptParam_0]), 4);
				Function_30("Finished Initializing Escalera", 5.0f);
				iLocal_574 = 10;
				iLocal_579 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_29(Global_98961, 4))
				{
					if (Function_27(&(Global_46850[0])))
					{
						Function_26(&Global_98961, 4);
					}
				}
				if (!Function_29(Global_98961, 8))
				{
					if (Function_22(&(Global_46850[0])))
					{
						Function_26(&Global_98961, 8);
					}
				}
				if ((Function_129(27, 0) && !Function_123(28)) && !Function_129(28, 0))
				{
					if (!IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_4, "mexarmy03restrict")))
					{
						CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexarmy03restrict", 2,802597E-45f, Vector(-4373.0f, 40.0f, 4363.0f), Vector(0.0f, 116,56f, 0.0f), Vector(15.0f, 10.0f, 10.0f));
						if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&iLocal_4, "mexarmy03restrict")))
						{
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_4, "mexarmy03restrict"));
						}
						if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&iLocal_4, "mexarmy03restrict")))
						{
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_4, "mexarmy03restrict"));
						}
					}
				}
				if (Function_107(&(Global_43791[iScriptParam_0]), 131072))
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "Reb05_ResetEscPop"))
					{
						DECOR_REMOVE(&Global_54076, "Reb05_ResetEscPop");
						iVar1 = 0;
						while (iVar1 < 26)
						{
							Function_20(&Global_11836, iVar1);
							iVar1++;
						}
						bVar0 = false;
					}
					if ((Function_129(41, 0) && Global_46720 != 3) || !Function_129(41, 0))
					{
						iLocal_574 = 6;
					}
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_579);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4);
	Function_11(&Global_11836, &Global_14012, iScriptParam_0, (iLocal_1178 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_80(&(Global_43791[iScriptParam_0]), 32);
	Function_80(&(Global_43791[iScriptParam_0]), 64);
	Function_80(&(Global_43791[iScriptParam_0]), 8);
	Function_80(&(Global_43791[iScriptParam_0]), 512);
	Function_80(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_580))
	{
		TERMINATE_SCRIPT(&uLocal_580);
	}
	Function_30("Unloaded Escalera", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1D9C / 7580
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

void Function_2(int iParam0) //Position: 0x1DD2 / 7634
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x1DF4 / 7668
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x1E0A / 7690
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x1E20 / 7712
{
	Function_6(&iLocal_82 + 8);
	RELEASE_LAYOUT_REF(&iLocal_82);
	return;
}

void Function_6(int iParam0) //Position: 0x1E33 / 7731
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x1E5B / 7771
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

void Function_8(struct<13> Param0) //Position: 0x1FA6 / 8102
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x1FC3 / 8131
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1FE1 / 8161
{
	Function_6(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x1FF4 / 8180
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
	strcpy(&cVar0, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_107(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_80(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_107(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_131(2) || Function_107(&(Global_43791[bParam2]), 256))
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
			Function_110(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x2212 / 8722
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x2378 / 9080
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

int Function_14(int iParam0) //Position: 0x23A3 / 9123
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

void Function_15(var uParam0, int iParam1) //Position: 0x23D7 / 9175
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x23E8 / 9192
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x2402 / 9218
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x241F / 9247
{
	if (Function_29(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x243A / 9274
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

void Function_20(struct<2>[] Param0, var uParam1) //Position: 0x28E8 / 10472
{
	int iVar0;
	
	iVar0 = uParam1;
	if (!Function_17(&(Param0[iVar02]), 4))
	{
		return;
	}
	Function_16(&(Param0[iVar02]), 4);
	*(&Param0[iVar02] + 8) = Function_21();
	return;
}

var Function_21() //Position: 0x291A / 10522
{
	return MAKE_TIME_OF_DAY_EX(0, 0, 0, 1);
}

bool Function_22(int iParam0) //Position: 0x2927 / 10535
{
	var uVar0;
	
	Function_25(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_24(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_23(&iParam0);
	return 1;
}

void Function_23(var uParam0) //Position: 0x2A38 / 10808
{
	var uVar0;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	Function_25(uParam0);
	uVar0 = Function_25(uParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		uVar3 = GRINGO_GET_USE_COMPONENT_EXT(&uVar2, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(&uVar3))
		{
			iVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, 0);
			while (iVar4 >= 4294967295)
			{
				iVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar4, &uVar3);
				uVar6 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar5, &uVar2);
				if (IS_PHYSINST_VALID(&uVar6))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
				}
				iVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, iVar4 + 1);
			}
		}
	}
	return;
}

struct<8> Function_24(int iParam0) //Position: 0x2B26 / 11046
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

struct<8> Function_25(int iParam0) //Position: 0x2BFE / 11262
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

void Function_26(var uParam0, int iParam1) //Position: 0x2CD2 / 11474
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_27(int iParam0) //Position: 0x2CE3 / 11491
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (iParam0 == Global_46850[0])
		{
			Function_28(iParam0, iVar1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_28(iParam0, iVar1), 1.0f, "p_gen_chair06x", 1);
		}
		else
		{
			Function_28(iParam0, iVar1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_28(iParam0, iVar1), 1.0f, "p_gen_chair05x", 1);
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

struct<8> Function_28(int iParam0, int iParam1) //Position: 0x2DAC / 11692
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

bool Function_29(var uParam0, int iParam1) //Position: 0x3099 / 12441
{
	return (uParam0 && iParam1) == 0;
}

void Function_30(char* cParam0) //Position: 0x30A6 / 12454
{
	if (!Function_131(128))
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

void Function_31(int iParam0, bool bParam1) //Position: 0x30E6 / 12518
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

void Function_32(var uParam0, int iParam1) //Position: 0x31D6 / 12758
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_33(int iParam0) //Position: 0x31E3 / 12771
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_35(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_34(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_34(var uParam0) //Position: 0x32DF / 13023
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_35() //Position: 0x32FC / 13052
{
	int iVar0;
	
	return &iVar0;
}

int Function_36(int iParam0, int iParam1) //Position: 0x3305 / 13061
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

void Function_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3390 / 13200
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

void Function_38() //Position: 0x347E / 13438
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

int Function_39(int iParam0) //Position: 0x34CC / 13516
{
	if (!Function_40(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_40(bool bParam0) //Position: 0x34E4 / 13540
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_41(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x34F9 / 13561
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

void Function_42(int iParam0) //Position: 0x3607 / 13831
{
	Function_43(&Global_43580, iParam0);
	return;
}

void Function_43(var uParam0, var uParam1) //Position: 0x3615 / 13845
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_44() //Position: 0x3634 / 13876
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_42(16384);
	}
	return;
}

bool Function_45(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x3650 / 13904
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_107(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_129(49, 0))
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

void Function_46(int iParam0) //Position: 0x370E / 14094
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_47(struct<28>[] Param0, int iParam1) //Position: 0x3721 / 14113
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_48(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x373E / 14142
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_49(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x3765 / 14181
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
	Param0[iParam128].f_4 = Function_58(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_57(iParam1))
	{
		Function_50(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_50(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x38CE / 14542
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
	if (Function_56(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_55(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_54(StackVal, Param2);
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
		Function_53(uVar3);
		Var6 = Function_53(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_53(StackVal);
				Var4 = Function_53(StackVal);
				if (Function_52(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_51(iParam1), 0.0f, 2, iVar2);
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

int Function_51(int iParam0) //Position: 0x3AB7 / 15031
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

bool Function_52(struct<2> Param0, struct<2> Param2) //Position: 0x3BEE / 15342
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_53(int iParam0) //Position: 0x3C1A / 15386
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

var Function_54(vector3 vParam0) //Position: 0x3C71 / 15473
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

int Function_55(int iParam0) //Position: 0x3CBF / 15551
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

bool Function_56(vector3 vParam0) //Position: 0x3D77 / 15735
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_57(int iParam0) //Position: 0x3D8F / 15759
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_58(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3DB2 / 15794
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_62(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_59(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_59(bParam0, bParam1, bParam2, 4294967295);
}

int Function_59(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3E10 / 15888
{
	var uVar0;
	
	if (!Function_61(bParam2))
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
	uVar0 = Function_62(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_60(uVar0);
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

var Function_60(int iParam0) //Position: 0x3F74 / 16244
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

bool Function_61(int iParam0) //Position: 0x3FB2 / 16306
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_62(int iParam0, int iParam1, bool bParam2) //Position: 0x3FC7 / 16327
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_63() //Position: 0x3FE7 / 16359
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_64(int iParam0) //Position: 0x4026 / 16422
{
	Function_66(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_65(struct<85> Param0) //Position: 0x406F / 16495
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x4099 / 16537
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_67(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_67(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x40E0 / 16608
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
					bVar2 = Function_69(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_68(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_69(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_68(int iParam0, int iParam1) //Position: 0x449E / 17566
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_69(int iParam0) //Position: 0x44C1 / 17601
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_70(int iParam0) //Position: 0x44D8 / 17624
{
	Function_66(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_71(int iParam0) //Position: 0x452A / 17706
{
	Function_66(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_72(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_72(struct<149> Param0) //Position: 0x4591 / 17809
{
	Param0.f_148 = uParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_73(int iParam0) //Position: 0x45A8 / 17832
{
	if (!Function_75())
	{
		Function_66(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_65(&Global_27462[3952] + 188, 1, 4,5f, 64, 4294967295);
		Function_74(&Global_27462[3952] + 188, -4,5f, 2);
	}
	return;
}

void Function_74(int iParam0, float fParam1, int iParam2) //Position: 0x4629 / 17961
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

bool Function_75() //Position: 0x4641 / 17985
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		bVar0 = GET_ACTOR_ENUM(&Global_54076);
		if (bVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_76(int iParam0) //Position: 0x4668 / 18024
{
	Function_66(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_65(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_74(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_77(int iParam0) //Position: 0x46E3 / 18147
{
	Function_66(27, 1, 150, 4294967271, 150, 1, 0, 0, 4, iParam0, "$/content/Ambient/MexicanRevolution/mexican_rev_rally", 63, 2, 50.0f, 2, 60, 0);
	return;
}

void Function_78(int iParam0) //Position: 0x4740 / 18240
{
	Function_66(11, 1, 100, 50, 50, 7, 64, 1, 2, iParam0, "$/Content/Ambient/Town/beat_escalera_firesquad", 31, 3, 150.0f, 2, 60, 0);
	Function_79(&Global_27462[1152] + 188, 4, &Global_44085[Global_46850[0]9] + 8, 1);
	return;
}

void Function_79(struct<157> Param0) //Position: 0x47B0 / 18352
{
	Param0.f_156 = uParam1;
	(&Param0 + 156)->f_4 = uParam2;
	(&Param0 + 156)->f_8 = uParam3;
}

void Function_80(var uParam0, int iParam1) //Position: 0x47D1 / 18385
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_81(int iParam0, int iParam1) //Position: 0x47EB / 18411
{
	if (!Function_82(iParam0))
	{
		return;
	}
	GET_OBJECT_POSITION(&iParam1, &Global_26200[iParam014] + 28);
	return;
}

bool Function_82(int iParam0) //Position: 0x480B / 18443
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

void Function_83(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x4821 / 18465
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_87(&uParam1, &uParam2);
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_86(&uParam4, 0);
		}
		else
		{
			Function_85(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_86(&iParam5, 0);
		}
		else
		{
			Function_85(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_84(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_84(&(uVar2[1]), "UseCase1"));
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

var Function_84(var uParam0, int iParam1) //Position: 0x4BF1 / 19441
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_85(var uParam0, int iParam1) //Position: 0x4C00 / 19456
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

void Function_86(var uParam0, int iParam1) //Position: 0x4C5B / 19547
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

int Function_87(var uParam0, int iParam1) //Position: 0x4CB3 / 19635
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

int Function_88(bool bParam0, int iParam1) //Position: 0x4E11 / 19985
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

int Function_89(var uParam0, int iParam1) //Position: 0x4F09 / 20233
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

int Function_90(var uParam0, int iParam1) //Position: 0x4FED / 20461
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

void Function_91(var uParam0, int iParam1) //Position: 0x5129 / 20777
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

void Function_92(var uParam0, int iParam1) //Position: 0x5176 / 20854
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(&uParam0, "owner", &iParam1);
	return;
}

var Function_93(int iParam0, char* cParam1, bool bParam3) //Position: 0x5199 / 20889
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

void Function_94(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x523E / 21054
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(2))
	{
		return;
	}
	if (Function_107(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_95(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_80(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_110(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_95(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x52F6 / 21238
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_107(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_97(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_56(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_96(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_96(int iParam0, struct<2> Param1) //Position: 0x5477 / 21623
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_56(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_56(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_56(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_56(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_56(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_56(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_97(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x55BD / 21949
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_35(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_98(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x56E4 / 22244
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

void Function_99(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5743 / 22339
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_52(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_100(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x57AA / 22442
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_52(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_101(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5813 / 22547
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_52(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_102(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x587E / 22654
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_52(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_103(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x58E4 / 22756
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_52(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_104(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x594D / 22861
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_52(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

void Function_105(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x59B1 / 22961
{
	int iVar0;
	
	iVar0 = iParam0;
	Param1[iVar011].f_80 = iParam2;
	return;
}

int Function_106(int iParam0) //Position: 0x59C6 / 22982
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_107(&(Global_43791[iParam0]), 4);
}

bool Function_107(var uParam0, int iParam1) //Position: 0x59E2 / 23010
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_108(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x59FF / 23039
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_107(&(Global_43791[iParam2]), 0x40000000))
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

void Function_109(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x5AE8 / 23272
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_107(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_110(&(Global_43791[iParam2]), 0x40000000);
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

void Function_110(var uParam0, int iParam1) //Position: 0x5BD8 / 23512
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_111() //Position: 0x5BE9 / 23529
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
	
	Function_119(3, 3);
	uVar0 = &uVar0;
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_cartvendor", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_leanrail_tlkpsnt_hrassol_link", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_leanwall_tlkpsnt_hrassol_link", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_towerguard", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/esc_veh_gen", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/esc_veh_gen_prison", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/oldf_pray", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_table_service", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/browse_table", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/preaching_at_podium", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/ai_goat_grazing", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/pet_dog", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/stand_knock_on_door", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_117(&iLocal_82 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	if (!Function_112(&iLocal_82 + 8))
	{
		return 0;
	}
	iLocal_82 = FIND_NAMED_LAYOUT("Escalera_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_82))
	{
		iLocal_82 = CREATE_LAYOUT("Escalera_layout");
	}
	*(&iLocal_82 + 1008) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", &iLocal_82, 8, 0);
	*(&iLocal_82 + 1016[03]) = Vector(-4347,685f, 42,04896f, 4326,85f);
	*(&iLocal_82 + 1016[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep1_1", Vector(-4347,685f, 42,04896f, 4326,85f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_82 + 1008);
	*(&iLocal_82 + 1016[13]) = Vector(-4344,029f, 42,04896f, 4333,377f);
	*(&iLocal_82 + 1016[13] + 12) = Vector(0.0f, -116,1888f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep2_1", Vector(-4344,029f, 42,04896f, 4333,377f), Vector(0.0f, -116,1888f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_82 + 1008);
	*(&iLocal_82 + 1016[23]) = Vector(-4339,992f, 42,05464f, 4324,568f);
	*(&iLocal_82 + 1016[23] + 12) = Vector(0.0f, -36,47218f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep3_1", Vector(-4339,992f, 42,05464f, 4324,568f), Vector(0.0f, -36,47218f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_82 + 1008);
	*(&iLocal_82 + 1016[33]) = Vector(-4343,89f, 41,94551f, 4330,108f);
	*(&iLocal_82 + 1016[33] + 12) = Vector(0.0f, -172,9991f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep4_1", Vector(-4343,89f, 41,94551f, 4330,108f), Vector(0.0f, -172,9991f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_82 + 1008);
	*(&iLocal_82 + 1016[43]) = Vector(-4349,492f, 42,04896f, 4330,338f);
	*(&iLocal_82 + 1016[43] + 12) = Vector(0.0f, 179,7515f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "nputAway_1", Vector(-4349,492f, 42,04896f, 4330,338f), Vector(0.0f, 179,7515f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_82 + 1008);
	*(&iLocal_82 + 1144) = Vector(-4329,501f, 22,34859f, 4459,394f);
	*(&iLocal_82 + 1144 + 12) = Vector(0.0f, -52,70421f, 0.0f);
	*(&iLocal_82 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_save_flag_ESC", Vector(-4329,501f, 22,34859f, 4459,394f), Vector(0.0f, -52,70421f, 0.0f));
	*(&iLocal_82 + 1176) = Vector(-4310,966f, 23,04028f, 4416,845f);
	*(&iLocal_82 + 1176 + 12) = Vector(0.0f, -51,89106f, 0.0f);
	*(&iLocal_82 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_shop_flag_DOC", Vector(-4310,966f, 23,04028f, 4416,845f), Vector(0.0f, -51,89106f, 0.0f));
	*(&iLocal_82 + 1208) = Vector(-4313,685f, 26,88566f, 4400,108f);
	*(&iLocal_82 + 1208 + 12) = Vector(0.0f, -143,3426f, 0.0f);
	*(&iLocal_82 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_shop_flag_GUN", Vector(-4313,685f, 26,88566f, 4400,108f), Vector(0.0f, -143,3426f, 0.0f));
	*(&iLocal_82 + 1240) = Vector(-4325,894f, 22,087f, 4457,019f);
	*(&iLocal_82 + 1240 + 12) = Vector(0.0f, 119,502f, 0.0f);
	*(&iLocal_82 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_purchase_flag_ESC", Vector(-4325,894f, 22,087f, 4457,019f), Vector(0.0f, 119,502f, 0.0f));
	*(&iLocal_82 + 1272) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", &iLocal_82, 8, 0);
	*(&iLocal_82 + 1280[03]) = Vector(-4297,249f, 26,74636f, 4391,644f);
	*(&iLocal_82 + 1280[03] + 12) = Vector(0.0f, -115,9396f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep1_2", Vector(-4297,249f, 26,74636f, 4391,644f), Vector(0.0f, -115,9396f, 0.0f));
	DECOR_SET_STRING(&uVar6, "useAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_82 + 1272);
	*(&iLocal_82 + 1280[13]) = Vector(-4292,981f, 26,74636f, 4389,435f);
	*(&iLocal_82 + 1280[13] + 12) = Vector(0.0f, -115,9396f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep2_2", Vector(-4292,981f, 26,74636f, 4389,435f), Vector(0.0f, -115,9396f, 0.0f));
	DECOR_SET_STRING(&uVar7, "useAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_82 + 1272);
	*(&iLocal_82 + 1280[23]) = Vector(-4290,477f, 26,74636f, 4386,14f);
	*(&iLocal_82 + 1280[23] + 12) = Vector(0.0f, -76,98928f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep3_2", Vector(-4290,477f, 26,74636f, 4386,14f), Vector(0.0f, -76,98928f, 0.0f));
	DECOR_SET_STRING(&uVar8, "useAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_82 + 1272);
	*(&iLocal_82 + 1280[33]) = Vector(-4293,581f, 26,74636f, 4382,916f);
	*(&iLocal_82 + 1280[33] + 12) = Vector(0.0f, -115,9396f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep4_2", Vector(-4293,581f, 26,74636f, 4382,916f), Vector(0.0f, -115,9396f, 0.0f));
	DECOR_SET_STRING(&uVar9, "useAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_82 + 1272);
	*(&iLocal_82 + 1280[43]) = Vector(-4293,35f, 26,72842f, 4380,766f);
	*(&iLocal_82 + 1280[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "putAway2", Vector(-4293,35f, 26,72842f, 4380,766f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar10, "useAnim", "putAway");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_82 + 1272);
	*(&iLocal_82 + 1408) = Vector(-4333,644f, 22,087f, 4461,913f);
	*(&iLocal_82 + 1408 + 12) = Vector(0.0f, 119,502f, 0.0f);
	*(&iLocal_82 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_purchase_flag_alt_ESC", Vector(-4333,644f, 22,087f, 4461,913f), Vector(0.0f, 119,502f, 0.0f));
	*(&iLocal_82 + 1440) = CREATE_OBJECTSET_IN_LAYOUT("watermelongrpSet", &iLocal_82, 8, 0);
	*(&iLocal_82 + 1448[03]) = Vector(-4296,173f, 26,74273f, 4383,427f);
	*(&iLocal_82 + 1448[03] + 12) = Vector(0.0f, 71,06306f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "ndropMelon", Vector(-4296,173f, 26,74273f, 4383,427f), Vector(0.0f, 71,06306f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_82 + 1440);
	*(&iLocal_82 + 1480) = Vector(-4294,925f, 18,07058f, 4438,049f);
	*(&iLocal_82 + 1480 + 12) = Vector(0.0f, -227,9308f, 0.0f);
	*(&iLocal_82 + 1504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_shop_flag_MER", Vector(-4294,925f, 18,07058f, 4438,049f), Vector(0.0f, -227,9308f, 0.0f));
	*(&iLocal_82 + 1512) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp3Set", &iLocal_82, 8, 0);
	*(&iLocal_82 + 1520[03]) = Vector(-4337,358f, 42,01784f, 4342,402f);
	*(&iLocal_82 + 1520[03] + 12) = Vector(0.0f, -225.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep1_3", Vector(-4337,358f, 42,01784f, 4342,402f), Vector(0.0f, -225.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_82 + 1512);
	*(&iLocal_82 + 1520[13]) = Vector(-4350,605f, 42,01784f, 4342,424f);
	*(&iLocal_82 + 1520[13] + 12) = Vector(0.0f, -116,1888f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep2_3", Vector(-4350,605f, 42,01784f, 4342,424f), Vector(0.0f, -116,1888f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_82 + 1512);
	*(&iLocal_82 + 1520[23]) = Vector(-4361,806f, 42,01784f, 4340,385f);
	*(&iLocal_82 + 1520[23] + 12) = Vector(0.0f, -135.0f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep3_3", Vector(-4361,806f, 42,01784f, 4340,385f), Vector(0.0f, -135.0f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_82 + 1512);
	*(&iLocal_82 + 1520[33]) = Vector(-4364,941f, 42,01784f, 4323,831f);
	*(&iLocal_82 + 1520[33] + 12) = Vector(0.0f, -285.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep4_3", Vector(-4364,941f, 42,01784f, 4323,831f), Vector(0.0f, -285.0f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_82 + 1512);
	*(&iLocal_82 + 1520[43]) = Vector(-4353,937f, 42,01784f, 4334,415f);
	*(&iLocal_82 + 1520[43] + 12) = Vector(0.0f, 270.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "nputAway_3", Vector(-4353,937f, 42,01784f, 4334,415f), Vector(0.0f, 270.0f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_82 + 1512);
	*(&iLocal_82 + 1520[53]) = Vector(-4356,071f, 42,01784f, 4323,831f);
	*(&iLocal_82 + 1520[53] + 12) = Vector(0.0f, -285.0f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep5_3", Vector(-4356,071f, 42,01784f, 4323,831f), Vector(0.0f, -285.0f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_82 + 1512);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_cartVendor3", "mex_cartVendor", Vector(-4280,611f, 18,12983f, 4427,76f), Vector(0.0f, 39,80469f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_cartVendor1", "mex_cartVendor", Vector(-4293,14f, 18,1433f, 4431,148f), Vector(0.0f, -93,61082f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link", "mex_flirt_stand_link", Vector(-4317,219f, 31,16047f, 4375,605f), Vector(0.0f, -109,1594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link1", "mex_flirt_stand_link", Vector(-4315,713f, 31,19163f, 4378,695f), Vector(0.0f, -74,46577f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link2", "mex_flirt_stand_link", Vector(-4307,506f, 31,16827f, 4380,453f), Vector(0.0f, 30,77043f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_gateGuards", "mex_gateGuards", Vector(-4377,207f, 38,72005f, 4361,711f), Vector(0.0f, 115,1846f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_gateGuards1", "mex_gateGuards", Vector(-4375,05f, 38,70368f, 4364,743f), Vector(0.0f, 107,1056f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail_link1", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4346,42f, 29,31278f, 4404,649f), Vector(0.0f, -90.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail_link2", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4282,655f, 26,72844f, 4389,251f), Vector(0.0f, -150.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall_link5", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4286,746f, 18,07058f, 4439,893f), Vector(0.0f, 39,58304f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall_link6", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4300,589f, 18,00582f, 4435,666f), Vector(0.0f, -51,60793f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall_link9", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4291,129f, 23,11772f, 4399,166f), Vector(0.0f, 29,24006f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall_link10", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4300,351f, 26,57989f, 4390,432f), Vector(0.0f, -60.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall_link11", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4275,756f, 18,07058f, 4428,792f), Vector(0.0f, 135.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link6", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4282,243f, 22,64631f, 4390,105f), Vector(0.0f, 31,48038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link5", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4262,525f, 21,55594f, 4400,075f), Vector(0.0f, 179,119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link3", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4284,238f, 22,68574f, 4392,099f), Vector(0.0f, 59,25056f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link2", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4303,396f, 26,58571f, 4388,671f), Vector(0.0f, 28,26978f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link1", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4311,605f, 26,40331f, 4386,571f), Vector(0.0f, -142,6679f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(-4353,387f, 42,0231f, 4346,772f), Vector(0.0f, 85,00647f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(-4344,732f, 42,02882f, 4342,56f), Vector(0.0f, -87,70077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(-4356,034f, 42,02715f, 4347,559f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link3", "mex_talking_soldiers_link", Vector(-4367,005f, 42,02223f, 4324,389f), Vector(0.0f, 249,8095f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link4", "mex_talking_soldiers_link", Vector(-4338,829f, 42,01743f, 4344,815f), Vector(0.0f, -0,06850009f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link5", "mex_talking_soldiers_link", Vector(-4360.0f, 39,21506f, 4354,098f), Vector(0.0f, 74,1195f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard", "mex_towerGuard", Vector(-4354,69f, 43,3777f, 4369,084f), Vector(0.0f, 186,091f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard1", "mex_towerGuard", Vector(-4357,069f, 43,38168f, 4369,286f), Vector(0.0f, 182,8468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard2", "mex_towerGuard", Vector(-4319,47f, 45,93916f, 4361,336f), Vector(0.0f, -95,67241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard35", "mex_towerGuard", Vector(-4322,885f, 45,924f, 4363,561f), Vector(0.0f, -155,8856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_washCloths", "mex_washCloths", Vector(-4265,204f, 21,47476f, 4399,098f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_washCloths1", "mex_washCloths", Vector(-4349,019f, 25,5168f, 4437,735f), Vector(0.0f, 218,9208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "esc_veh_gen4", "esc_veh_gen", Vector(-4344,754f, 22,98625f, 4448f), Vector(0.0f, 146,1237f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_82 + 1672), 1);
	*(&iLocal_82 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "esc_veh_gen2", "esc_veh_gen", Vector(-4262,769f, 18,76798f, 4460,801f), Vector(0.0f, -192,0826f, 0.0f));
	*(&iLocal_82 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "esc_veh_gen_prison", "esc_veh_gen_prison", Vector(-4365,564f, 30,20561f, 4395,58f), Vector(0.0f, 122,353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_82 + 1688), 1);
	*(&iLocal_82 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "esc_veh_gen5", "esc_veh_gen", Vector(-4389,407f, 38,15102f, 4355,791f), Vector(0.0f, 82,39038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_82 + 1696), 1);
	*(&iLocal_82 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "blacksmith_sleep", "mex_sleepBed_l", Vector(-4290,363f, 18,09966f, 4452,851f), Vector(0.0f, -11,23517f, 0.0f));
	*(&iLocal_82 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "vendor01_sleep", "sleeping_wall_scripted", Vector(-4272,139f, 21,65157f, 4399,035f), Vector(0.0f, 268,8941f, 0.0f));
	*(&iLocal_82 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "vendor03_sleep", "sleeping_scripted", Vector(-4243,161f, 22,26078f, 4371,758f), Vector(0.0f, 106,9202f, 0.0f));
	*(&iLocal_82 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stableBoy_sleep", "sleeping_scripted", Vector(-4352,906f, 25,71934f, 4434,278f), Vector(0.0f, -20,56022f, 0.0f));
	*(&iLocal_82 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "vendor02_sleep", "sleeping_wall_scripted", Vector(-4266,179f, 21,35088f, 4396,768f), Vector(0.0f, 248,9415f, 0.0f));
	*(&iLocal_82 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mansionSlodier02_sleep", "sleeping_wall_scripted", Vector(-4347,396f, 39,2447f, 4320,424f), Vector(0.0f, -0,2956755f, 0.0f));
	*(&iLocal_82 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mansionSlodier03_sleep", "sleeping_wall_scripted", Vector(-4320,842f, 39,25257f, 4330,758f), Vector(0.0f, -418,1772f, 0.0f));
	*(&iLocal_82 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mansionSlodier04_sleep", "sleeping_wall_scripted", Vector(-4363,33f, 42,01784f, 4324,938f), Vector(0.0f, 48,20834f, 0.0f));
	*(&iLocal_82 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mansionSlodier05_sleep", "sleeping_wall_scripted", Vector(-4355,256f, 43,4132f, 4362,932f), Vector(0.0f, 545,9127f, 0.0f));
	*(&iLocal_82 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mansionSlodier06_sleep", "sleeping_wall_scripted", Vector(-4325,531f, 45,92076f, 4363,201f), Vector(0.0f, -2,105682f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_lnWall_tlk", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4284,127f, 18,06365f, 4460,511f), Vector(0.0f, -9,024713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall_link14", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4283,717f, 18,04858f, 4421,258f), Vector(0.0f, -139,0963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage3", "mex_pickGarbage", Vector(-4274,323f, 18,0706f, 4423,44f), Vector(0.0f, 527,8957f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage4", "mex_pickGarbage", Vector(-4264,557f, 18,07057f, 4425,773f), Vector(0.0f, 335,3977f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_cartVendor4", "mex_cartVendor", Vector(-4288,623f, 18,14095f, 4434,532f), Vector(0.0f, 400,0708f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link8", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4289,593f, 18,07059f, 4450,142f), Vector(0.0f, 175,1889f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link9", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4272,628f, 18,07058f, 4428,529f), Vector(0.0f, 279,4088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall1", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4291,538f, 18,07997f, 4450,265f), Vector(0.0f, -168,3712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround1", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4296,049f, 18,07057f, 4443,537f), Vector(0.0f, -47,83053f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage", "mex_pickGarbage", Vector(-4300,247f, 18,18064f, 4440,262f), Vector(0.0f, 93,27977f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall2", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4294,043f, 18,08127f, 4444,25f), Vector(0.0f, -54,15907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage6", "mex_pickGarbage", Vector(-4280,152f, 18,07058f, 4442,777f), Vector(0.0f, 36,71339f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_cartVendor5", "mex_cartVendor", Vector(-4284,736f, 18,13955f, 4433,454f), Vector(0.0f, 40,29553f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_eat_apple", "stand_eat_fruit_barrel", Vector(-4290,265f, 18,14395f, 4432,477f), Vector(0.0f, -142,0503f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_link", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4294,234f, 18,08364f, 4452,681f), Vector(0.0f, 270,4263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail2", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4309,409f, 23,04959f, 4413,828f), Vector(0.0f, -53,36489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall3", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4314,82f, 22,06266f, 4412,739f), Vector(0.0f, -141,291f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail3", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4313,848f, 26,89844f, 4409,046f), Vector(0.0f, -143,1519f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail4", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4310,594f, 26,91474f, 4403,611f), Vector(0.0f, -141,491f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall5", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4316,771f, 23,09008f, 4405,938f), Vector(0.0f, 34,92433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall4", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4310,646f, 23,11701f, 4396,309f), Vector(0.0f, 31,14286f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage8", "mex_pickGarbage", Vector(-4312,699f, 23,0871f, 4404,077f), Vector(0.0f, 21,79438f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4315,952f, 26,58497f, 4393,118f), Vector(0.0f, -173,4298f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround5", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4298,278f, 22,07628f, 4412,08f), Vector(0.0f, 441,6253f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall6", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4287,534f, 26,74273f, 4390,23f), Vector(0.0f, 29,42935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall7", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4282,257f, 26,74944f, 4387,083f), Vector(0.0f, -328,8773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail6", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4281,382f, 26,74841f, 4383,567f), Vector(0.0f, -61,04751f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround6", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4290,901f, 26,7462f, 4375,123f), Vector(0.0f, 299,6317f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall8", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4288,666f, 26,75778f, 4376,332f), Vector(0.0f, -148,261f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail5", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4290,154f, 29,79838f, 4378,664f), Vector(0.0f, 30,80898f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_bumBeating_link2", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4286,811f, 26,76034f, 4377,045f), Vector(0.0f, 117,9869f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage10", "mex_pickGarbage", Vector(-4284,419f, 22,67397f, 4390,619f), Vector(0.0f, 65,45453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall10", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4281,561f, 22,67264f, 4388,318f), Vector(0.0f, 116,9354f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround8", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4280,332f, 22,76464f, 4384,871f), Vector(0.0f, 30,5941f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround10", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4272,472f, 21,42399f, 4401,976f), Vector(0.0f, -0,7635427f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_washCloths2", "mex_washCloths", Vector(-4347,715f, 25,45235f, 4433,382f), Vector(0.0f, -162,5114f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround11", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4246,037f, 22,1386f, 4372,288f), Vector(0.0f, 206,4075f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail9", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4348,696f, 29,29069f, 4410,553f), Vector(0.0f, 268,8913f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail11", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4356,938f, 29,33937f, 4411,73f), Vector(0.0f, 180,464f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-4339,007f, 42,02067f, 4341,667f), Vector(0.0f, 104,2489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-4364,898f, 42,03709f, 4339,866f), Vector(0.0f, 161,3523f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail12", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4355,444f, 32,79713f, 4445,482f), Vector(0.0f, -145,1363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail13", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4353,087f, 31,90282f, 4435,797f), Vector(0.0f, -89,50376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail14", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4358,871f, 32,79736f, 4447,944f), Vector(0.0f, -145,5477f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall12", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4351,657f, 28,3237f, 4445,375f), Vector(0.0f, 90,41241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall13", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4356,648f, 32,76485f, 4443,123f), Vector(0.0f, 123,5345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "noldf_pray", "noldf_pray", Vector(-4328,527f, 27,38881f, 4408,197f), Vector(0.0f, -16,10482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard4", "mex_towerGuard", Vector(-4353,508f, 34,72017f, 4384,324f), Vector(0.0f, -134,092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard5", "mex_towerGuard", Vector(-4355,456f, 34,66981f, 4384,545f), Vector(0.0f, -153,4775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand_nospawn", "rand_idle_stand", Vector(-4350,025f, 42,022f, 4347,823f), Vector(0.0f, 195,8163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand_nospawn1", "rand_idle_stand", Vector(-4349,316f, 42,0229f, 4347,545f), Vector(0.0f, -175,6216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand_nospawn2", "rand_idle_stand", Vector(-4357,331f, 39,18034f, 4358,111f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall", Vector(-4360,996f, 39,17775f, 4358,726f), Vector(0.0f, 5,773681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall", Vector(-4361,582f, 39,20851f, 4350,035f), Vector(0.0f, 145,6328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall", Vector(-4333,389f, 42,04895f, 4343,355f), Vector(0.0f, 179,3917f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall", Vector(-4334,913f, 42,06576f, 4327,074f), Vector(0.0f, 115,6587f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall_nospawn4", "Rand_Idle_NearWall", Vector(-4354,51f, 39,18009f, 4358,149f), Vector(0.0f, 2,906017f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall_nospawn5", "Rand_Idle_NearWall", Vector(-4352,772f, 39,21316f, 4350,856f), Vector(0.0f, 179,05f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1784) = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), &iLocal_82, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep_01", "Multistage_sweeping", Vector(-4349,492f, 42,04896f, 4330,36f), Vector(0.0f, -1,000732f, 0.0f)), &iLocal_82 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_table_service", "mex_table_service", Vector(-4343,499f, 42,08863f, 4328,009f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_82 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_table_service1", "mex_table_service", Vector(-4344,676f, 42,08863f, 4325,781f), Vector(0.0f, -179,0087f, 0.0f)), &iLocal_82 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sweep_02", "Multistage_sweeping", Vector(-4353,937f, 42,01784f, 4334,415f), Vector(0.0f, -270.0f, 0.0f)), &iLocal_82 + 1784);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "horse_stay", "horse_stay", Vector(-4268,065f, 18,14811f, 4451,681f), Vector(0.0f, 218,418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "horse_stay1", "horse_stay", Vector(-4266,004f, 18,14811f, 4450,255f), Vector(0.0f, 218,418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "horse_stay2", "horse_stay", Vector(-4263,516f, 18,14811f, 4448,535f), Vector(0.0f, 218,418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "look_out_window_R", "look_out_window_R", Vector(-4269,518f, 18,13714f, 4454,822f), Vector(0.0f, -148,2375f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table", "lean_table", Vector(-4291,917f, 18,07058f, 4467,085f), Vector(0.0f, 91,98099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table1", "lean_table", Vector(-4294,549f, 18,07058f, 4454,843f), Vector(0.0f, -88,31979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "look_out_window_L", "look_out_window_L", Vector(-4287,736f, 18,07057f, 4449,49f), Vector(0.0f, -24,80812f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table2", "lean_table", Vector(-4281,66f, 18,07058f, 4439,132f), Vector(0.0f, 215,5652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table", "browse_table", Vector(-4281,183f, 18,13422f, 4426,05f), Vector(0.0f, -145,4233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table3", "lean_table", Vector(-4284,79f, 18,12648f, 4424,723f), Vector(0.0f, 131,9692f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "look_out_window_L1", "look_out_window_L", Vector(-4282,344f, 18,07057f, 4434,102f), Vector(0.0f, -142,291f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-4312,337f, 26,87514f, 4408,094f), Vector(0.0f, -142,0966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-4322,395f, 22,91564f, 4412,75f), Vector(0.0f, -21,0909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table1", "browse_table", Vector(-4317,123f, 26,90108f, 4396,551f), Vector(0.0f, 34,50765f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "preaching_at_podium", "preaching_at_podium", Vector(-4329,96f, 27,55215f, 4405,154f), Vector(0.0f, 157,8215f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_holy_water", "stand_holy_water", Vector(-4328,958f, 27,42124f, 4410,328f), Vector(0.0f, -16,89585f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_holy_water1", "stand_holy_water", Vector(-4329,738f, 27,3877f, 4408,832f), Vector(0.0f, -26,21008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-4294,585f, 26,75673f, 4399,298f), Vector(0.0f, 147,6496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand", "rand_idle_stand", Vector(-4292,051f, 26,75154f, 4383,654f), Vector(0.0f, -87,62672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-4290,821f, 26,75154f, 4383,335f), Vector(0.0f, 108,8048f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link6", "mex_talking_soldiers_link", Vector(-4297,249f, 26,74636f, 4389,945f), Vector(0.0f, -54,56297f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-4282,541f, 26,74434f, 4381,885f), Vector(0.0f, -58,96177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-4283,266f, 29,75192f, 4385,956f), Vector(0.0f, -105,1883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand1", "rand_idle_stand", Vector(-4283,777f, 29,75807f, 4385,276f), Vector(0.0f, -61,9313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4300,999f, 29,80285f, 4390,968f), Vector(0.0f, 120,9434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking1", "lean_fence_L_talking", Vector(-4309,379f, 29,80525f, 4392,848f), Vector(0.0f, -149,8608f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall14", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4317,119f, 31,11357f, 4379,29f), Vector(0.0f, 299,3288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "nlean_rail", "nlean_rail", Vector(-4297,898f, 31,17859f, 4376,512f), Vector(0.0f, -149,0984f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking2", "lean_fence_L_talking", Vector(-4298,865f, 31,17216f, 4375,248f), Vector(0.0f, -58,31903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-4300,134f, 31,21821f, 4376,461f), Vector(0.0f, -57,12753f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWa", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4308,957f, 26,36577f, 4384,062f), Vector(0.0f, 20,90459f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "dealer_and_customer", "dealer_and_customer", Vector(-4295,651f, 26,41283f, 4378,497f), Vector(0.0f, -5,025589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "look_out_window_L4", "look_out_window_L", Vector(-4354,505f, 30,1596f, 4384,227f), Vector(0.0f, 186,211f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "digging", "digging", Vector(-4355,523f, 28,40904f, 4449,827f), Vector(0.0f, 142,0951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand2", "rand_idle_stand", Vector(-4362,704f, 31,70863f, 4422,895f), Vector(0.0f, -41,76842f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail1", "nlean_rail", Vector(-4359,895f, 42,02413f, 4349,007f), Vector(0.0f, 162,5756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail2", "nlean_rail", Vector(-4335,073f, 42,03931f, 4345,338f), Vector(0.0f, 167,1866f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "look_distance_binocs", "look_distance_binocs", Vector(-4366,421f, 39,20453f, 4303,424f), Vector(0.0f, 79,97938f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail3", "nlean_rail", Vector(-4355,914f, 40,56039f, 4312,505f), Vector(0.0f, -12,74653f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(-4352,025f, 40,53178f, 4315,618f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand3", "rand_idle_stand", Vector(-4364,998f, 39,1862f, 4302,446f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail4", "nlean_rail", Vector(-4358,148f, 39,19941f, 4309,414f), Vector(0.0f, -4,786798f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand4", "rand_idle_stand", Vector(-4359,004f, 39,18619f, 4309,258f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking4", "lean_fence_L_talking", Vector(-4363,045f, 42,01784f, 4322,514f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking5", "lean_fence_L_talking", Vector(-4356,702f, 42,01784f, 4349,125f), Vector(0.0f, 179,1334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking6", "lean_fence_L_talking", Vector(-4358,347f, 34,67603f, 4384,43f), Vector(0.0f, 184,8266f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "doctor_sleep", "mex_sleepBed_l", Vector(-4313,515f, 23,00512f, 4414,789f), Vector(0.0f, -54,8021f, 0.0f));
	*(&iLocal_82 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "player_sleep_ESC", "player_sleep_bed_L", Vector(-4327,124f, 22,34801f, 4461,468f), Vector(0.0f, -56,00861f, 0.0f));
	*(&iLocal_82 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Locked_Footlocker", "Locked_Footlocker", Vector(-4328,122f, 22,34885f, 4462,851f), Vector(0.0f, 33,4088f, 0.0f));
	DECOR_SET_BOOL(&iLocal_82 + 1824, "PlayerHouseChest", 1);
	DECOR_SET_BOOL(&iLocal_82 + 1824, "scrap", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail15", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4350,445f, 28,31981f, 4433,197f), Vector(0.0f, -90,07005f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4358,303f, 31,42583f, 4428,032f), Vector(0.0f, -35,28912f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-4348,11f, 28,35718f, 4431,556f), Vector(0.0f, -131,812f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_bumBeating_link3", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4356,08f, 31,92492f, 4434,218f), Vector(0.0f, -234,2472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-4243,574f, 22,22754f, 4377,643f), Vector(0.0f, 33,31748f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_bumBeating_link4", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4248,055f, 22,14687f, 4372,313f), Vector(0.0f, 21,96235f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_bumBeating_link5", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4302,172f, 22,11899f, 4409,476f), Vector(0.0f, 38,69566f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Pee1", "Pee", Vector(-4296,722f, 26,4698f, 4376,199f), Vector(0.0f, 76,2402f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Pee2", "Pee", Vector(-4282,98f, 22,8552f, 4383,346f), Vector(0.0f, 120,9234f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Pee3", "Pee", Vector(-4277,904f, 26,1639f, 4374,082f), Vector(0.0f, -130,9116f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand5", "stand_dnd_rowdydrink", Vector(-4287,796f, 26,73375f, 4394,995f), Vector(0.0f, 84,28933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand6", "stand_drunk_rowdydrink", Vector(-4289,181f, 26,71127f, 4395,59f), Vector(0.0f, -17,78022f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Pee4", "Pee", Vector(-4299,33f, 26,65522f, 4394,506f), Vector(0.0f, -81,40013f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_ground_smoke1", "sit_ground_smoke", Vector(-4258,681f, 21,89735f, 4391,122f), Vector(0.0f, 212,574f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-4259,32f, 21,80453f, 4392,721f), Vector(0.0f, 265,645f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-4256,69f, 22,00449f, 4394,267f), Vector(0.0f, 380,9247f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail_drink", "lean_rail_drink", Vector(-4281,42f, 26,74831f, 4388,537f), Vector(0.0f, -149,115f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail_drink1", "lean_rail_drink", Vector(-4284,711f, 26,73888f, 4377,785f), Vector(0.0f, -58,64757f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Pee5", "Pee", Vector(-4304,609f, 26,47189f, 4381,607f), Vector(0.0f, -10,16839f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail_drink2", "lean_rail_drink", Vector(-4305,052f, 29,79729f, 4390,491f), Vector(0.0f, -162,2223f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail_whore", "lean_rail_whore", Vector(-4298,995f, 29,77845f, 4394,095f), Vector(0.0f, 12,05157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_bumBeating_link9", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4302,749f, 31,1393f, 4371,59f), Vector(0.0f, 121,6618f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table2", "nuse_shelf", Vector(-4315,438f, 26,90108f, 4401,092f), Vector(0.0f, -142,7337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "bar_drink_serve", "bar_drink_serve", Vector(-4296,056f, 26,74168f, 4388,659f), Vector(0.0f, 30,86094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "bar_drink_serve1", "bar_drink_serve", Vector(-4295,109f, 26,74277f, 4388,114f), Vector(0.0f, 30,45094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "drink_player", "drink_player", Vector(-4294,248f, 26,74277f, 4387,609f), Vector(0.0f, 29,95025f, 0.0f));
	*(&iLocal_82 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "vendor01_sleep1", "sleeping_wall_scripted", Vector(-4270,812f, 21,62605f, 4396,248f), Vector(0.0f, 179,7668f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand", "rand_idle_stand", Vector(-4292,177f, 18,0787f, 4440,355f), Vector(0.0f, 36,09394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Multistage_sweeping", "Multistage_sweeping", Vector(-4293,35f, 26,72842f, 4380,766f), Vector(0.0f, 209,307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	DECOR_SET_INT(&uVar0, "FlagSetNum", 2);
	*(&iLocal_82 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "vendor04_sleep", "sleeping_scripted", Vector(-4244,047f, 22,26078f, 4369,769f), Vector(0.0f, 54,66389f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-4245,878f, 22,14687f, 4377,419f), Vector(0.0f, 317,3579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Sit_Ground_Drink2", "Rand_Idle_Sit_Ground", Vector(-4246,776f, 22,14687f, 4376,125f), Vector(0.0f, 249,3497f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-4256,335f, 22,07623f, 4390,624f), Vector(0.0f, 138,7946f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-4244,563f, 22,14687f, 4373,978f), Vector(0.0f, 170,9518f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-4289,296f, 23,1097f, 4398,05f), Vector(0.0f, -150,8672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link4", "mex_flirt_stand_link", Vector(-4292,682f, 26,73959f, 4385,027f), Vector(0.0f, -87,65186f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link5", "mex_flirt_stand_link", Vector(-4293,491f, 26,72089f, 4381,613f), Vector(0.0f, -114,5292f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link6", "mex_flirt_stand_link", Vector(-4311,625f, 31,16047f, 4374,334f), Vector(0.0f, -190,4587f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "fivefingerfillet_spectate1", "fivefingerfillet_spectate", Vector(-4275,895f, 18,09486f, 4451,213f), Vector(0.0f, 203,6428f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", Vector(-4243,296f, 22,16653f, 4374,79f), Vector(0.0f, 117,3919f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-4290,156f, 26,75673f, 4397,031f), Vector(0.0f, -149,9697f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-4290,958f, 29,75807f, 4384,797f), Vector(0.0f, -133,3603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_dnd_rowdydrink2", "stand_drunk_rowdydrink", Vector(-4289,818f, 29,80565f, 4386,083f), Vector(0.0f, -313,1493f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", Vector(-4295,851f, 26,75673f, 4396,516f), Vector(0.0f, -94,49676f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Sit_Ground_Drink3", "stand_dnd_rowdydrink", Vector(-4295,531f, 26,7272f, 4397,402f), Vector(0.0f, -59,33731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_fence_L_talking7", "lean_fence_L_talking", Vector(-4284,333f, 26,74434f, 4390,044f), Vector(0.0f, -151,7478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_yawning_n_any", "stand_drunk_rowdydrink", Vector(-4294,512f, 26,71335f, 4397,765f), Vector(0.0f, 40,44878f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_dnd_rowdydrink4", "stand_drunk_rowdydrink", Vector(-4290,887f, 29,7845f, 4390,262f), Vector(0.0f, -363,4244f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage11", "mex_pickGarbage", Vector(-4293,107f, 29,849f, 4386,617f), Vector(0.0f, 135,2907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-4290,764f, 29,79364f, 4385,647f), Vector(0.0f, -63,40091f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(-4289,791f, 29,77702f, 4384,677f), Vector(0.0f, 135,64f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_dnd_rowdydrink5", "stand_dnd_rowdydrink", Vector(-4294,07f, 26,73898f, 4396,311f), Vector(0.0f, 121,7496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand7", "stand_dnd_rowdydrink", Vector(-4288,976f, 26,71481f, 4394,249f), Vector(0.0f, -164,3895f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand8", "stand_drunk_rowdydrink", Vector(-4293,962f, 29,79496f, 4381,022f), Vector(0.0f, -516,7675f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand9", "rand_idle_stand", Vector(-4295,903f, 26,68015f, 4395,421f), Vector(0.0f, -508,1751f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-4296,78f, 23,08538f, 4398,427f), Vector(0.0f, -249,82f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table3", "browse_table", Vector(-4285,703f, 18,11815f, 4428,346f), Vector(0.0f, -53,76792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table4", "browse_table", Vector(-4278,102f, 18,13422f, 4429,955f), Vector(0.0f, -90,38372f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table5", "browse_table", Vector(-4283,09f, 18,13422f, 4431,308f), Vector(0.0f, -134,6684f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table7", "browse_table", Vector(-4291,098f, 18,13422f, 4431,645f), Vector(0.0f, -290,0312f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand11", "rand_idle_stand", Vector(-4288,523f, 18,13422f, 4428,044f), Vector(0.0f, -199,7428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand12", "rand_idle_stand", Vector(-4289,761f, 18,13422f, 4428,964f), Vector(0.0f, -90,8336f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand13", "rand_idle_stand", Vector(-4279,445f, 18,13422f, 4432,145f), Vector(0.0f, -134,1805f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table10", "browse_table", Vector(-4283,055f, 18,07059f, 4441,857f), Vector(0.0f, -423,4388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage12", "mex_pickGarbage", Vector(-4262,095f, 18,07058f, 4426,117f), Vector(0.0f, 361,817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_pickGarbage13", "mex_pickGarbage", Vector(-4259,792f, 18,07374f, 4424,714f), Vector(0.0f, 376,3687f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table12", "browse_table", Vector(-4292,897f, 18,07059f, 4437,78f), Vector(0.0f, -479,3007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand2", "rand_idle_stand", Vector(-4293,613f, 18,07059f, 4434,714f), Vector(0.0f, 181,4165f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1864) = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), &iLocal_82, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "use_shelf2", "nuse_shelf", Vector(-4299,053f, 26,72937f, 4387,322f), Vector(0.0f, 119,5033f, 0.0f)), &iLocal_82 + 1864);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "use_shelf1", "nuse_shelf", Vector(-4298,107f, 26,72937f, 4386,173f), Vector(0.0f, 28,35866f, 0.0f)), &iLocal_82 + 1864);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "nuse_shelf", "nuse_shelf", Vector(-4297,27f, 26,72937f, 4385,721f), Vector(0.0f, 28,35866f, 0.0f)), &iLocal_82 + 1864);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "xxx", "stand_bartender_bar_work", Vector(-4294,868f, 26,74424f, 4385,771f), Vector(0.0f, -149,8522f, 0.0f)), &iLocal_82 + 1864);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "xxx1", "stand_bartender_bar_work", Vector(-4297,631f, 26,74424f, 4387,375f), Vector(0.0f, -149,8522f, 0.0f)), &iLocal_82 + 1864);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_camp_coffee_drink", "sit_camp_coffee_drink", Vector(-4344,971f, 25,45965f, 4433,246f), Vector(0.0f, -0,2278219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_ground_smoke3", "Rand_Idle_Sit_Ground", Vector(-4346,77f, 25,45203f, 4435,052f), Vector(0.0f, 222,9676f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround12", "Rand_Idle_Sit_Ground", Vector(-4350,544f, 25,64694f, 4434,458f), Vector(0.0f, 183,629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround13", "Rand_Idle_Sit_Ground", Vector(-4347,517f, 25,46725f, 4436,745f), Vector(0.0f, 99,40416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link7", "mex_flirt_stand_link", Vector(-4308,675f, 31,16047f, 4378,18f), Vector(0.0f, 82,33364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-4379,041f, 38,631f, 4356,349f), Vector(0.0f, 148,6228f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table5", "lean_table", Vector(-4379,805f, 38,68171f, 4359,482f), Vector(0.0f, -48,79275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand5", "rand_idle_stand", Vector(-4374,877f, 38,70368f, 4361,517f), Vector(0.0f, 139,8075f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand6", "rand_idle_stand", Vector(-4375,297f, 38,79425f, 4366,737f), Vector(0.0f, 77,39903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-4375,931f, 38,70368f, 4360,672f), Vector(0.0f, 105,1071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard36", "mex_towerGuard", Vector(-4357,199f, 34,72017f, 4384,72f), Vector(0.0f, -193,9502f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mansionSlodier05_sleep1", "sleeping_wall_scripted", Vector(-4359,868f, 40,28044f, 4368,793f), Vector(0.0f, 633,5969f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard37", "mex_towerGuard", Vector(-4359,823f, 43,38168f, 4369,442f), Vector(0.0f, 182,8468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand7", "rand_idle_stand", Vector(-4358,127f, 42,02715f, 4345,505f), Vector(0.0f, 152,8919f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", Vector(-4325,648f, 39,36889f, 4355,134f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand8", "rand_idle_stand", Vector(-4321,196f, 39,44777f, 4354,007f), Vector(0.0f, 70,98664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link7", "mex_talking_soldiers_link", Vector(-4322,563f, 39,32011f, 4353,065f), Vector(0.0f, 93,04746f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "ai_goat_grazing", "ai_goat_grazing", Vector(-4260,802f, 18,08593f, 4440,633f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_82 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "ai_goat_grazing1", "ai_goat_grazing", Vector(-4257,514f, 18,18821f, 4443,309f), Vector(0.0f, -114,7177f, 0.0f));
	*(&iLocal_82 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "ai_goat_grazing2", "ai_goat_grazing", Vector(-4259,819f, 18,10194f, 4442,286f), Vector(0.0f, -188,6172f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "kneel_hammer", "kneel_hammer", Vector(-4342,202f, 33,93618f, 4292,844f), Vector(0.0f, -10,25787f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "kneel_hammer1", "kneel_hammer", Vector(-4348,574f, 33,91856f, 4289,992f), Vector(0.0f, -54,39231f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand9", "rand_idle_stand", Vector(-4348,122f, 33,92651f, 4290,674f), Vector(0.0f, 147,5654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "smoking_stand10", "rand_idle_stand", Vector(-4343,956f, 33,93618f, 4293,563f), Vector(0.0f, 147,5654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_barrel", "sit_barrel", Vector(-4353,13f, 33,79714f, 4292,34f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_ground_smoke4", "rand_idle_stand", Vector(-4352,236f, 33,79714f, 4291,514f), Vector(0.0f, 232,1834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand14", "rand_idle_stand", Vector(-4348,047f, 33,93618f, 4295,824f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_bumBeating_link10", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4298,579f, 23,09491f, 4397,321f), Vector(0.0f, 394,7729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail16", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4349,321f, 29,33937f, 4411,416f), Vector(0.0f, 180,464f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_towerGuard38", "mex_towerGuard", Vector(-4319,918f, 45,93916f, 4363,717f), Vector(0.0f, -179,3648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_washCloths3", "mex_washCloths", Vector(-4301,259f, 22,10838f, 4413,505f), Vector(0.0f, 315,0608f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_washCloths4", "mex_washCloths", Vector(-4247,027f, 22,14687f, 4374,497f), Vector(0.0f, 323,3335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "pet_dog", "pet_dog", Vector(-4278,518f, 18,06076f, 4433,088f), Vector(0.0f, -195,6351f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "pet_dog1", "pet_dog", Vector(-4296,22f, 22,02853f, 4408,443f), Vector(0.0f, 147,0436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "knl_watertrough", "knl_watertrough", Vector(-4276,436f, 18,06087f, 4449,681f), Vector(0.0f, -56,87436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "knl_watertrough1", "knl_watertrough", Vector(-4349,007f, 30,08702f, 4383,967f), Vector(0.0f, -88,53934f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_knock_on_door", "stand_knock_on_door", Vector(-4351,924f, 28,31204f, 4436,004f), Vector(0.0f, 89,28989f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_knock_on_door1", "stand_knock_on_door", Vector(-4288,417f, 23,16793f, 4397,411f), Vector(0.0f, 30,09098f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table6", "lean_table", Vector(-4286,502f, 18,07059f, 4443,51f), Vector(0.0f, -141,3195f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_hrasSol", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4288,083f, 18,08534f, 4442,563f), Vector(0.0f, 40,96948f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "browse_table13", "browse_table", Vector(-4294,96f, 18,07059f, 4433,345f), Vector(0.0f, -50,14443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table7", "lean_table", Vector(-4284,451f, 18,15205f, 4435,252f), Vector(0.0f, 133,4991f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_rail5", "nlean_rail", Vector(-4280,063f, 26,71363f, 4387,637f), Vector(0.0f, -148,6989f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sss", "npreaching", Vector(-4319,239f, 31,12692f, 4378,899f), Vector(0.0f, -57,98576f, 0.0f));
	*(&iLocal_82 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "nnn", "npreaching", Vector(-4284,081f, 26,59985f, 4373,583f), Vector(0.0f, 161,5054f, 0.0f));
	*(&iLocal_82 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "uuu", "stand_holy_water", Vector(-4328,099f, 27,56815f, 4405,736f), Vector(0.0f, -20,55241f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_talking_soldiers_link8", "mex_talking_soldiers_link", Vector(-4302,539f, 22,08517f, 4412,172f), Vector(0.0f, 182,6638f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_stand_link8", "mex_flirt_stand_link", Vector(-4297,549f, 29,74164f, 4381,321f), Vector(0.0f, 299,576f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_flirt_sit_stool", "mex_flirt_sit_stool_attached_link", Vector(-4292,303f, 26,74273f, 4390,893f), Vector(0.0f, 209,1003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "stand_drunk_rowdydrink5", "stand_drunk_rowdydrink", Vector(-4291,184f, 26,74273f, 4384,046f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_camp_coffee_drink1", "sit_camp_coffee_drink", Vector(-4242,833f, 22,20024f, 4375,798f), Vector(0.0f, -83,47019f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanRail17", "mex_leanRail_tlkPsnt_hrasSol_link", Vector(-4297,802f, 18,06493f, 4462,09f), Vector(0.0f, -89,29219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall15", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4293,35f, 18,07058f, 4458,303f), Vector(0.0f, -96,88181f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_leanWall16", "mex_leanWall_tlkPsnt_hrasSol_link", Vector(-4272,139f, 18,14624f, 4443,512f), Vector(0.0f, -143,3674f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "lean_table8", "lean_table", Vector(-4296,897f, 18,07058f, 4437,917f), Vector(0.0f, 39,70619f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "rand_idle_stand15", "rand_idle_stand", Vector(-4288,553f, 18,18211f, 4429,449f), Vector(0.0f, 35,20277f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "sit_InJail", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4358,826f, 30,17062f, 4375,157f), Vector(0.0f, 96,94514f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_82 + 1936), 0);
	*(&iLocal_82 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "look_out_window_L5", "look_out_window_L", Vector(-4357,777f, 30,159f, 4374,46f), Vector(0.0f, -90,49428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_82 + 1944), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "mex_sitGround_hrasSol1", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-4291,969f, 26,73078f, 4397,66f), Vector(0.0f, 207,2382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_82 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(-4276,273f, 18,09486f, 4452,201f), Vector(0.0f, -131,4122f, 0.0f));
	*(&iLocal_82 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_82, "fivefingerfillet_spectate_C1", "fivefingerfillet_spectate_C", Vector(-4274,775f, 18,09486f, 4452,317f), Vector(0.0f, -177,5036f, 0.0f));
	return 1;
}

bool Function_112(struct<2>[] Param0) //Position: 0xD9D9 / 55769
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_116();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
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
				Function_115(&(Param0[iVar02]), 1);
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

void Function_113() //Position: 0xDD9B / 56731
{
	if (!Function_131(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_114() //Position: 0xDDDB / 56795
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

void Function_115(struct<13> Param0) //Position: 0xDE09 / 56841
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_116() //Position: 0xDE1C / 56860
{
	if (!Function_131(128))
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

var Function_117(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xDE5E / 56926
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

var Function_118(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xDE9C / 56988
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
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

void Function_119(int iParam0, int iParam1) //Position: 0xDF6B / 57195
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

bool Function_120() //Position: 0xDFB5 / 57269
{
	var uVar0;
	
	Function_119(3, 3);
	uVar0 = &uVar0;
	Function_117(&iLocal_4 + 8, "p_uti_cover2x1x", 0, 0);
	Function_117(&iLocal_4 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_112(&iLocal_4 + 8))
	{
		return 0;
	}
	iLocal_4 = FIND_NAMED_LAYOUT("Escalera_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("Escalera_layout");
	}
	*(&iLocal_4 + 48) = Vector(-4360,016f, 33,19545f, 4291,824f);
	*(&iLocal_4 + 48 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Bullriding", Vector(-4360,016f, 33,19545f, 4291,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 80) = Vector(-4370,841f, 32,73791f, 4292,209f);
	*(&iLocal_4 + 80 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker1", Vector(-4370,841f, 32,73791f, 4292,209f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 112) = Vector(-4371,01f, 33,12658f, 4280,418f);
	*(&iLocal_4 + 112 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker2", Vector(-4371,01f, 33,12658f, 4280,418f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 144) = Vector(-4363,602f, 34,03642f, 4300,533f);
	*(&iLocal_4 + 144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker3", Vector(-4363,602f, 34,03642f, 4300,533f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 176) = Vector(-4352,016f, 34,19392f, 4295,824f);
	*(&iLocal_4 + 176 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker4", Vector(-4352,016f, 34,19392f, 4295,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 208) = Vector(-4352,134f, 34,14167f, 4283,865f);
	*(&iLocal_4 + 208 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker5", Vector(-4352,134f, 34,14167f, 4283,865f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 240) = Vector(-4323,813f, 22,00555f, 4450,349f);
	*(&iLocal_4 + 240 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-4323,813f, 22,00555f, 4450,349f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 272) = Function_121(StackVal, StackVal, &iLocal_4, "cover2x1x0", "p_uti_cover2x1x", Vector(-4405,008f, 34,63846f, 4415,791f), Vector(0.0f, -15,55011f, 0.0f), 1);
	*(&iLocal_4 + 280) = Function_121(StackVal, StackVal, &iLocal_4, "cover2x1x1", "p_uti_cover2x1x", Vector(-4400,157f, 34,70703f, 4420,013f), Vector(-0,1430376f, 1,841439f, -4,44242f), 1);
	*(&iLocal_4 + 288) = Function_121(StackVal, StackVal, &iLocal_4, "cover1x1x0", "p_uti_cover1x1x", Vector(-4391,647f, 33,88429f, 4408,115f), Vector(0,1837229f, 34,20329f, -5,183418f), 1);
	*(&iLocal_4 + 296) = Function_121(StackVal, StackVal, &iLocal_4, "cover1x1x1", "p_uti_cover1x1x", Vector(-4391,17f, 34,15879f, 4411,688f), Vector(-5,669624f, 48,57238f, -5,114511f), 1);
	*(&iLocal_4 + 304) = Function_121(StackVal, StackVal, &iLocal_4, "cover2x1x2", "p_uti_cover2x1x", Vector(-4395,495f, 34,61914f, 4422,82f), Vector(-0,1431307f, -2,768408f, -4,430911f), 1);
	return 1;
}

var Function_121(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xE3D9 / 58329
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_122(char* cParam0) //Position: 0xE407 / 58375
{
	if (!Function_131(128))
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

bool Function_123(int iParam0) //Position: 0xE444 / 58436
{
	int iVar0;
	
	if (!Function_128(iParam0))
	{
		return 0;
	}
	iVar0 = Function_127(iParam0);
	if (!Function_124(Function_127(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_124(int iParam0) //Position: 0xE47A / 58490
{
	if (!Function_126(iParam0))
	{
		return 0;
	}
	if (!Function_125(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0xE49E / 58526
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0xE4B3 / 58547
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_127(int iParam0) //Position: 0xE4CA / 58570
{
	if (!Function_128(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_128(int iParam0) //Position: 0xE4E4 / 58596
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_129(int iParam0, bool bParam1) //Position: 0xE4FA / 58618
{
	int iVar0;
	
	iVar0 = Function_127(iParam0);
	if (!Function_126(iVar0))
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

void Function_130(int iParam0) //Position: 0xE538 / 58680
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

bool Function_131(int iParam0) //Position: 0xE56C / 58732
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

