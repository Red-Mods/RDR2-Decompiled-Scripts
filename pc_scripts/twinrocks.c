//Decompiled with MagicRDR v1.0
//Function Count : 318
//Statics Count : 1047
//Natives Count : 516
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
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
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 21;
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
	int iLocal_640 = 0;
	bool bLocal_641 = false;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	int iLocal_644 = 0;
	bool bLocal_645 = false;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 6;
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
	int iLocal_784 = 1;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	bool bLocal_790 = false;
	var uLocal_791 = 0;
	bool bLocal_792 = false;
	var uLocal_793 = 0;
	bool bLocal_794 = false;
	bool bLocal_795 = false;
	int iLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 2;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	int iLocal_824 = 0;
	struct<2> Local_825 = { 0, 0 } ;
	var uLocal_827 = 0;
	struct<2> Local_828 = { 0, 0 } ;
	var uLocal_830 = 0;
	int iLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	bool bLocal_846 = false;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	bool bLocal_849 = false;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	int iLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	int iLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	int iLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	bool bLocal_864 = false;
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
	var uLocal_879 = 2;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	int iLocal_885 = 0;
	var uLocal_886 = 0;
	int iLocal_887 = 0;
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
	bool bLocal_907 = false;
	int iLocal_908 = 20;
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
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	int iLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	int iLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	int iLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	int iLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	bool bLocal_1011 = false;
	int iLocal_1012 = 0;
	bool bLocal_1013 = false;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	bool bLocal_1019 = false;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	bool bLocal_1026 = false;
	bool bLocal_1027 = false;
	int iLocal_1028 = 0;
	bool bLocal_1029 = false;
	bool bLocal_1030 = false;
	bool bLocal_1031 = false;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	bool bLocal_1035 = false;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	int iLocal_1038 = 0;
	int iLocal_1039 = 0;
	int iLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	bool bLocal_1044 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_640 = 0;
	bLocal_641 = false;
	iLocal_815 = 0;
	iLocal_816 = 0;
	iLocal_824 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
	iLocal_840 = 0;
	iLocal_841 = 0;
	iLocal_842 = 0;
	iLocal_843 = 0;
	iLocal_844 = 0;
	iLocal_845 = 0;
	bLocal_846 = false;
	iLocal_847 = 0;
	iLocal_848 = 0;
	bLocal_849 = false;
	iLocal_990 = 0;
	iLocal_1012 = 0;
	bLocal_1013 = false;
	iLocal_1014 = 0;
	iLocal_1015 = 0;
	iLocal_1016 = 0;
	iLocal_1017 = 0;
	iLocal_1018 = 0;
	bLocal_1019 = false;
	iLocal_1020 = 0;
	iLocal_1021 = 0;
	iLocal_1022 = 0;
	iLocal_1023 = 0;
	iLocal_1024 = 0;
	iLocal_1025 = 0;
	bLocal_1026 = false;
	bLocal_1027 = false;
	iLocal_1028 = 0;
	bLocal_1029 = false;
	bLocal_1030 = false;
	bLocal_1031 = false;
	iLocal_1032 = 0;
	iLocal_1033 = 0;
	iLocal_1034 = 0;
	bLocal_1035 = false;
	iLocal_1036 = 0;
	iLocal_1037 = 0;
	iLocal_1038 = 0;
	iLocal_1039 = 0;
	iLocal_1040 = 0;
	iLocal_644 = 0;
	bLocal_795 = Function_317(&(Global_43791[iScriptParam_0]));
	Function_316("Initializing Twin Rocks", 3);
	Function_314(&iLocal_784, "$/content/scripting/gringo/SimpleGringo/locked_footlocker", 1, 0);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_645 = 1000;
		switch (iLocal_644)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_644 = 1;
				}
				bLocal_645 = false;
				break;
			
			case 0x00000001:
				if (Function_313())
				{
					iLocal_644 = 2;
				}
				bLocal_645 = false;
				break;
			
			case 0x00000002:
				if (Function_311())
				{
					Function_310(&(Global_43791[iScriptParam_0]), 32);
					iLocal_644 = 3;
				}
				bLocal_645 = false;
				break;
			
			case 0x00000003:
				uLocal_646 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TwinRocksVol", &iScriptParam_0, 2, 0);
				Function_309(&Global_11120, &Global_12954, iScriptParam_0);
				iLocal_644 = 5;
				if (0 & Function_308())
				{
					uLocal_648 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Twin_Rocks/TwinRocksMP", 0);
				}
				bLocal_645 = false;
				break;
			
			case 0x00000005:
				if (Function_307(&Global_11120, &Global_12954, iScriptParam_0))
				{
					iLocal_644 = 4;
					bLocal_645 = false;
				}
				else
				{
					bLocal_645 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_306(&(Global_43791[iScriptParam_0]), 16) && Function_305(Global_44085[iScriptParam_09]))
				{
					bLocal_794 = Function_300(0, iScriptParam_0, 5);
					iLocal_644 = 6;
				}
				bLocal_645 = false;
				break;
			
			case 0x00000006:
				if (!Function_306(&(Global_43791[iScriptParam_0]), 256) && Function_299(2))
				{
					Function_291(StackVal, 0, &uLocal_650, Vector(-2415,34f, 29,262f, 2138,176f));
					Function_290(0, &uLocal_650, &iLocal_0);
					Function_291(StackVal, 1, &uLocal_650, Vector(-2432.0f, 24,894f, 2132.0f));
					Function_290(1, &uLocal_650, &iLocal_0);
					Function_291(StackVal, 2, &uLocal_650, Vector(-2432.0f, 24,854f, 2132.0f));
					Function_290(2, &uLocal_650, &iLocal_0);
					Function_291(StackVal, 3, &uLocal_650, Vector(-2419,854f, 24,617f, 2156,061f));
					Function_290(3, &uLocal_650, &iLocal_0);
					Function_283(4, &uLocal_650, &iLocal_0 + 1488);
					Function_290(4, &uLocal_650, &iLocal_0);
					Function_291(StackVal, 5, &uLocal_650, Vector(-2449,638f, 33,525f, 2127,497f));
					Function_290(5, &uLocal_650, &iLocal_0);
					Function_280(&Global_11120, &Global_12954, &uLocal_650, &Global_10996, iScriptParam_0);
					SET_FACTIONS_STATUS_TWO_WAY(2, 25, 3);
				}
				else
				{
					bLocal_795 = false;
					iLocal_796 = 1;
				}
				if (Function_306(&(Global_43791[iScriptParam_0]), 256) || !Function_299(2))
				{
					iLocal_796 = 1;
				}
				Function_310(&(Global_43791[iScriptParam_0]), 8);
				iLocal_644 = 7;
				bLocal_645 = false;
				break;
			
			case 0x00000007:
				if (!Function_279(bLocal_794) != 3)
				{
				}
				iLocal_644 = 8;
				bLocal_645 = false;
				break;
			
			case 0x00000008:
				if (Function_278(iScriptParam_0, &Global_11120, iLocal_796))
				{
					Function_276(0, 0,1f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					Function_276(0, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				Function_275(64);
				Function_271(2, 4294967295, 4294967295, 0, 3);
				Function_310(&(Global_43791[iScriptParam_0]), 512);
				iLocal_644 = 9;
				bLocal_645 = false;
				break;
			
			case 0x00000009:
				Function_269(&iLocal_0, iScriptParam_0);
				Function_310(&(Global_43791[iScriptParam_0]), 4);
				Function_268("Finished Initializing Twin Rocks", 5.0f);
				iLocal_644 = 10;
				bLocal_645 = false;
				if (!Function_267(Global_46760[2]))
				{
					if (bLocal_795)
					{
						if (((!Global_6623 && !Global_6625) && !Global_6627) && Function_266(2, 0))
						{
							Function_252();
						}
					}
					else
					{
						bLocal_795 = false;
					}
				}
				else
				{
					if (!Global_99146)
					{
						Function_251();
						Function_250("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_795 = false;
				}
				Function_249(&(Global_43791[iScriptParam_0]));
				break;
			
			case 0x0000000A:
				Function_246();
				if (bLocal_795)
				{
					Function_44();
					bLocal_645 = false;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_645);
	}
	if (bLocal_795)
	{
		Function_34();
	}
	Function_32();
	if (Function_279(Global_46948) == 2)
	{
		Function_22(Global_46948);
	}
	if (Function_279(bLocal_794) == 2)
	{
		Function_22(bLocal_794);
	}
	Function_12(&Global_11120, &Global_12954, iScriptParam_0, iLocal_796);
	Function_11();
	Function_10();
	Function_6(&iLocal_784);
	Function_2(iScriptParam_0);
	Function_275(64);
	Function_1(&(Global_43791[iScriptParam_0]), 32);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	Function_1(&(Global_43791[iScriptParam_0]), 8);
	Function_1(&(Global_43791[iScriptParam_0]), 512);
	Function_1(&(Global_43791[iScriptParam_0]), 4);
	RESET_FACTIONS_STATUS_TWO_WAY(2, 25);
	if (IS_SCRIPT_VALID(&uLocal_648))
	{
		TERMINATE_SCRIPT(&uLocal_648);
	}
	if (IS_SCRIPT_VALID(&uLocal_646))
	{
		TERMINATE_SCRIPT(&uLocal_646);
	}
	Function_268("Unloaded Twin Rocks", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x605 / 1541
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x61F / 1567
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

void Function_3(int iParam0) //Position: 0x655 / 1621
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x677 / 1655
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x68D / 1677
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6(int iParam0) //Position: 0x6A3 / 1699
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x6CB / 1739
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

void Function_8(struct<13> Param0) //Position: 0x816 / 2070
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x833 / 2099
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x851 / 2129
{
	Function_6(&iLocal_442 + 8);
	RELEASE_LAYOUT_REF(&iLocal_442);
	return;
}

void Function_11() //Position: 0x866 / 2150
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x872 / 2162
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_21(bParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_306(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_43791[bParam2]), 0x40000000);
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (!Function_18(&(Param0[bVar162]), 1))
		{
			if ((!vParam1[bVar163] != 4294967295 && !vParam1[bVar163] != 0) && Function_18(&(Param0[bVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[bVar163], 4294967295);
				Function_17(&(Param0[bVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[bVar163] + 8) && Function_18(&(Param0[bVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[bVar163] + 8);
			Function_17(&(Param0[bVar162]), 16);
		}
		bVar16++;
	}
	if (!Function_306(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_299(2) || Function_306(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (Function_18(&(Param0[bVar162]), 2) && !Function_18(&(Param0[bVar162]), 4))
		{
			Function_13(&Param0, &vParam1, bVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_18(&(Param0[bVar162]), 2) && !Function_18(&(Param0[bVar162]), 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		bVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			bVar16 = false;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_310(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xA90 / 2704
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_16(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_16(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0xBF6 / 3062
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

int Function_15(int iParam0) //Position: 0xC21 / 3105
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

void Function_16(var uParam0, int iParam1) //Position: 0xC55 / 3157
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC66 / 3174
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xC80 / 3200
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC9D / 3229
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, bool bParam1) //Position: 0xCB8 / 3256
{
	return (bParam0 && bParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xCC5 / 3269
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

void Function_22(bool bParam0) //Position: 0x1173 / 4467
{
	int iVar0;
	
	if (!Function_30(bParam0))
	{
		Function_28();
		return;
	}
	iVar0 = Function_27(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_23("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_23(bool bParam0, bool bParam1) //Position: 0x11C6 / 4550
{
	struct<4> Var0;
	
	if (!Function_30(bParam1))
	{
		return;
	}
	switch (Function_27(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_24(Function_25(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_27(bParam1), Function_25(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x12F0 / 4848
{
	char* cVar0[16];
	
	if (!Function_19())
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

int Function_25(bool bParam0) //Position: 0x132A / 4906
{
	if (!Function_26(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_26(int iParam0) //Position: 0x134A / 4938
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_27(bool bParam0) //Position: 0x1361 / 4961
{
	if (!Function_26(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_28() //Position: 0x137C / 4988
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
			Function_29(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_29(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x15C3 / 5571
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_30(int iParam0) //Position: 0x15EF / 5615
{
	if (!Function_26(iParam0))
	{
		return 0;
	}
	if (!Function_31(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_31(int iParam0) //Position: 0x1613 / 5651
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_32() //Position: 0x1628 / 5672
{
	if (IS_OBJECTSET_VALID(&uLocal_642))
	{
		Function_33(&uLocal_642);
		DESTROY_OBJECTSET(&uLocal_642);
	}
	return;
}

void Function_33(var uParam0) //Position: 0x1646 / 5702
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_OBJECT_REF(&uVar0);
		}
	}
	return;
}

void Function_34() //Position: 0x1695 / 5781
{
	int iVar0;
	var uVar1;
	
	if (Function_279(Global_46948) == 2)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_FLEEING", true, false, 2, 0, true, false);
		}
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_43();
	Function_6(&iLocal_908);
	Function_42();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	if (Function_279(Global_46948) == 2)
	{
		Function_22(Global_46948);
	}
	if (iLocal_847 && !bLocal_846)
	{
		if (IS_ACTOR_VALID(Function_41()))
		{
			RESET_ANIM_SET_FOR_ACTOR(Function_41(), 1);
		}
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), false);
	Function_40(&iLocal_885, &Global_54076, 2);
	Function_40(&iLocal_887, &Global_54076, 2);
	RESET_FACTIONS();
	if (DECOR_CHECK_EXIST(&Global_54076, "HelperIsAlive"))
	{
		DECOR_REMOVE(&Global_54076, "HelperIsAlive");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForBoss"))
	{
		DECOR_REMOVE(&Global_54076, "ReadyForBoss");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIHitAgain"))
	{
		DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIHitAgain");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIMiss"))
	{
		DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIMiss");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TW_RemoveHelperBlip"))
	{
		DECOR_REMOVE(&Global_54076, "TW_RemoveHelperBlip");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "RunningFTE"))
	{
		DECOR_REMOVE(&Global_54076, "RunningFTE");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "AllGuysDead"))
	{
		DECOR_REMOVE(&Global_54076, "AllGuysDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TW_BlipCaptive"))
	{
		DECOR_REMOVE(&Global_54076, "TW_BlipCaptive");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "IntroCutsceneOver"))
	{
		DECOR_REMOVE(&Global_54076, "IntroCutsceneOver");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TimeToPlayAnims"))
	{
		DECOR_REMOVE(&Global_54076, "TimeToPlayAnims");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SnipersDead"))
	{
		DECOR_REMOVE(&Global_54076, "SnipersDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TWR_AA_Key"))
	{
		DECOR_REMOVE(&Global_54076, "TWR_AA_Key");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TWR_HelperActive"))
	{
		DECOR_REMOVE(&Global_54076, "TWR_HelperActive");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "FirstGroupDead"))
	{
		DECOR_REMOVE(&Global_54076, "FirstGroupDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TWR_SheriffStarted"))
	{
		DECOR_REMOVE(&Global_54076, "TWR_SheriffStarted");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TaskGirlNow"))
	{
		DECOR_REMOVE(&Global_54076, "TaskGirlNow");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PlayerStartedEarly"))
	{
		DECOR_REMOVE(&Global_54076, "PlayerStartedEarly");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "IntroSpecialCase"))
	{
		DECOR_REMOVE(&Global_54076, "IntroSpecialCase");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PrintObjThruCut"))
	{
		DECOR_REMOVE(&Global_54076, "PrintObjThruCut");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PrintObjThruAggro"))
	{
		DECOR_REMOVE(&Global_54076, "PrintObjThruAggro");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "DadNotNaturalDeath"))
	{
		DECOR_REMOVE(&Global_54076, "DadNotNaturalDeath");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TimeToMoveDad"))
	{
		DECOR_REMOVE(&Global_54076, "TimeToMoveDad");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "BossScriptRunning"))
	{
		DECOR_REMOVE(&Global_54076, "BossScriptRunning");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uVar1 = GET_ACTOR_FROM_PERS_CHAR(&Global_12954[iVar03] + 16);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		Function_38(&Global_11120, &Global_12954, iVar0, 0);
		iVar0++;
	}
	DECOR_REMOVE(&Global_54076, "HelperIsAlive");
	DECOR_REMOVE(&Global_54076, "HelperIsDead");
	if (SQUAD_IS_VALID(&uLocal_889))
	{
		Function_37(&uLocal_889);
		SQUAD_MAKE_EMPTY(&uLocal_889);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&uLocal_889));
	}
	if (IS_BLIP_VALID(&uLocal_893))
	{
		REMOVE_BLIP(&uLocal_893);
	}
	if (IS_BLIP_VALID(&uLocal_895))
	{
		REMOVE_BLIP(&uLocal_895);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	if (!HAS_SOUND_FINISHED(&uLocal_901))
	{
		STOP_SOUND(&uLocal_901);
	}
	if (!HAS_SOUND_FINISHED(&uLocal_903))
	{
		STOP_SOUND(&uLocal_903);
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	if (IS_LAYOUTREF_VALID(&uLocal_865))
	{
		RELEASE_LAYOUT_REF(&uLocal_865);
	}
	Function_35(32768);
	return;
}

void Function_35(int iParam0) //Position: 0x1D19 / 7449
{
	Function_36(&Global_43580, iParam0);
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x1D27 / 7463
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_37(int iParam0) //Position: 0x1D46 / 7494
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_38(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x1D9A / 7578
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_18(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_18(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_18(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_17(&(Param0[iVar02]), 8);
	}
	Function_17(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_39(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_13(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_39(int iParam0) //Position: 0x1E42 / 7746
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

void Function_40(int iParam0, var uParam1, bool bParam2) //Position: 0x1EEB / 7915
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

var Function_41() //Position: 0x1F37 / 7991
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42() //Position: 0x1F4C / 8012
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_43() //Position: 0x1F61 / 8033
{
	if (IS_ACTOR_VALID(&bLocal_792))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_792, 0);
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_792)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_792));
		}
		RELEASE_ACTOR_AS_AMBIENT(&bLocal_792);
	}
	return;
}

int Function_44() //Position: 0x1F97 / 8087
{
	switch (iLocal_990)
	{
		case 0x00000000:
			if (Function_241(&iLocal_908))
			{
				if (REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\AA_TWIN_ROCKS"))
				{
					iLocal_990 = 1;
				}
			}
			break;
		
		case 0x00000001:
			Function_239(&uLocal_865, &uLocal_873, &bLocal_907, &uLocal_867, &bLocal_1011);
			Function_238(&uLocal_865, &uLocal_879, &uLocal_891);
			DECOR_SET_BOOL(&Global_54076, "SP_TW_MakeAIMiss", true);
			LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TWR/TwinRocks_Escort", 0);
			iLocal_990 = 2;
			break;
		
		case 0x00000002:
			if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_Escort_Layout")))
			{
				if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive")))
				{
					uLocal_875 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive");
					GET_POSITION(&uLocal_875, &uLocal_1041);
					Function_237(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_dadGringo"));
					Function_236(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_dadGringo"));
					uLocal_871 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_865, "ndadGringo", "twin_rocks_dad", Function_237(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_dadGringo")), Function_236(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_dadGringo"))));
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(&uLocal_871, "UseCase1", "UseAnim", 202);
					uLocal_905 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_PrintObjective");
					iLocal_990 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_234("sc_challenge_aa_01", &iLocal_991);
			Function_233(&iLocal_887, &iLocal_885);
			if (Function_20(bLocal_1011, 0x10000000))
			{
				if (!iLocal_1024)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 344) && !Global_42825 != 4)
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_232("TWR_Obj_SecondMainObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_907, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_907, "TWR_Obj_SecondMainObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_907, 0);
						if (!Function_231(&iLocal_885, 1))
						{
							Function_230(&iLocal_885, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (!Function_231(&iLocal_887, 1))
						{
							Function_230(&iLocal_887, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						SQUAD_SET_FACTION(&iLocal_885, 19);
						SQUAD_SET_FACTION(&iLocal_887, 19);
						Function_40(&iLocal_885, &Global_54076, 4);
						Function_40(&iLocal_887, &Global_54076, 4);
						Function_229(&iLocal_885, -1.0f);
						Function_228(&iLocal_887, 1, -1.0f);
						iLocal_1024 = 1;
					}
				}
			}
			if (!iLocal_1023)
			{
				if (Global_42825 == 4)
				{
					SQUAD_SET_FACTION(&iLocal_885, 20);
					SQUAD_SET_FACTION(&iLocal_887, 20);
					Function_40(&iLocal_885, &Global_54076, 0);
					Function_40(&iLocal_887, &Global_54076, 0);
					iLocal_1023 = 1;
				}
			}
			if (!iLocal_1022)
			{
				if (!IS_ACTOR_ALIVE(&uLocal_875))
				{
					if (!HAS_SOUND_FINISHED(&uLocal_903))
					{
						STOP_SOUND(&uLocal_903);
					}
					iLocal_1022 = 1;
				}
			}
			if (!iLocal_1018)
			{
				if (IS_ACTOR_VALID(&uLocal_873))
				{
					if (IS_ACTOR_IN_VOLUME(&uLocal_873, &iLocal_0 + 256))
					{
						if (IS_ACTOR_ALIVE(&uLocal_877) && IS_ACTOR_ALIVE(&uLocal_875))
						{
							Function_227();
							AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
							iLocal_1018 = 1;
						}
					}
				}
			}
			if (!iLocal_1025)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 256))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_1025 = 1;
				}
			}
			if (!iLocal_1021)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 336))
				{
					if (IS_ACTOR_ALIVE(&uLocal_875))
					{
						uLocal_903 = GET_SOUND_ID();
						PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_903, "AA_TWIN_ROCKS_FEMALE_CRYING_MASTER", (&iLocal_0 + 1240));
						iLocal_1021 = 1;
					}
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "PlayerStartedEarly"))
			{
				if (Function_226(&Global_54076, &uLocal_873) > 20.0f)
				{
					Function_227();
					DECOR_REMOVE(&Global_54076, "PlayerStartedEarly");
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "PlayGirlAudio"))
			{
				DECOR_REMOVE(&Global_54076, "PlayGirlAudio");
				Function_225();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "GuysRunOut"))
			{
				DECOR_REMOVE(&Global_54076, "GuysRunOut");
				Function_224();
			}
			if (!iLocal_1020)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "PlayHostageLine"))
				{
					DECOR_REMOVE(&Global_54076, "PlayHostageLine");
					Function_223();
					iLocal_1020 = 1;
				}
			}
			if (iLocal_1015)
			{
				if (IS_ACTOR_VALID(&uLocal_877))
				{
					if (IS_ACTOR_ALIVE(&uLocal_877))
					{
						if (DECOR_CHECK_EXIST(&uLocal_877, "PlayerInHouse") && !iLocal_1017)
						{
							Function_222(&iLocal_995);
							Function_220(&iLocal_995);
							iLocal_1017 = 1;
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&uLocal_877))
			{
				if (IS_ACTOR_ALIVE(&uLocal_877))
				{
					if (Function_219(&iLocal_995))
					{
						DECOR_SET_FLOAT(&uLocal_877, "PlayerInHouse", Function_217(&iLocal_995));
					}
				}
			}
			if (!Function_20(bLocal_1011, 0x8000000))
			{
				if (Function_214(&iLocal_887, &iLocal_885))
				{
					Function_213(&bLocal_1011, 0x8000000);
					if (!Function_279(Global_46948) != 2)
					{
						Function_212(Global_46948, 1);
						Global_6628 = 1;
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					if (!DECOR_CHECK_EXIST(&Global_54076, "PrintObjThruCut"))
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_232("TWR_ObjKillGang", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_907, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_907, "TWR_ObjKillGang", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_907, 0);
						DECOR_SET_BOOL(&Global_54076, "PrintObjThruAggro", true);
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "RancherIsDead"))
					{
						DECOR_REMOVE(&Global_54076, "RancherIsDead");
						Function_250("TWR_ObjKillGang", 0, -1.0f, 2, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_907, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_907, "TWR_ObjKillGang", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_907, 0);
					}
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIMiss"))
			{
				Function_211(&iLocal_887, &iLocal_885, &uLocal_873);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIHitAgain"))
			{
				Function_210(&iLocal_887, &iLocal_885);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "TimeToCheckForBlips"))
			{
				if (!Function_231(&iLocal_885, 1))
				{
					Function_230(&iLocal_885, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!Function_231(&iLocal_887, 1))
				{
					Function_230(&iLocal_887, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				DECOR_REMOVE(&Global_54076, "TimeToCheckForBlips");
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_887) == 0)
			{
				DECOR_SET_BOOL(&Global_54076, "SnipersDead", true);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_887) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_885) >= 3)
			{
				DECOR_SET_BOOL(&Global_54076, "TimeToMoveDad", true);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_885) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_887) != 0)
			{
				DECOR_SET_BOOL(&Global_54076, "FirstGroupDead", true);
			}
			if (!Function_20(bLocal_1011, 16))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_885) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_887) != 0)
				{
					Function_213(&bLocal_1011, 16);
					DECOR_SET_BOOL(&Global_54076, "ReadyForBoss", true);
					LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TWR/event_TWR_bossDrop", 0);
					Function_209(&uLocal_897, 0);
					OPEN_DOOR_DIRECTION(&uLocal_897, 0);
				}
			}
			if (Function_20(bLocal_1011, 16) && !iLocal_1015)
			{
				if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_BossLayout")))
				{
					if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "HostageGuy")))
					{
						uLocal_877 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "HostageGuy");
						iLocal_1015 = 1;
					}
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "TWR_AA_Key") && !iLocal_1016)
			{
				Function_209(&uLocal_899, 0);
				OPEN_DOOR_DIRECTION(&uLocal_899, 0);
				iLocal_1016 = 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 160) && !Function_20(bLocal_1011, 0x2000000))
			{
				Function_213(&bLocal_1011, 0x2000000);
				if (!IS_ACTOR_DEAD(&bLocal_792))
				{
					DECOR_SET_BOOL(&Global_54076, "HelperIsAlive", true);
				}
				else
				{
					DECOR_SET_BOOL(&Global_54076, "HelperIsDead", true);
				}
				Function_205(&uLocal_865);
			}
			if (!iLocal_1014)
			{
				if (!IS_ACTOR_ALIVE(&uLocal_875) && IS_ACTOR_ALIVE(&uLocal_877))
				{
					TASK_CLEAR(&bLocal_792);
					TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_792, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "fatherCover")), -1.0f, 1.0f);
					MEMORY_REPORT_POSITION_AUTO(&bLocal_792, &uLocal_877, true);
					MEMORY_CONSIDER_AS_ENEMY(&bLocal_792, &uLocal_877);
					iLocal_1014 = 1;
				}
			}
			if (!iLocal_1040)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "AllGuysDead"))
				{
					if (!Function_219(&iLocal_1007))
					{
						Function_222(&iLocal_1007);
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						iLocal_1040 = 1;
					}
				}
			}
			if (Function_219(&iLocal_1007))
			{
				if (Function_217(&iLocal_1007) <= 1.0f)
				{
					if (IS_ACTOR_VALID(&uLocal_873))
					{
						if (IS_ACTOR_ALIVE(&uLocal_873))
						{
							if (!iLocal_1012)
							{
								CANCEL_DEADEYE();
								Function_201(1, 1, 0, 1, 1, 1, 0, &iLocal_0 + 320, 1, 0, 1, 1, 0x3f800000, 0);
								UI_PUSH("CutsceneWithMessages");
								bLocal_1019 = true;
								SET_SCRIPT_CUTSCENE_ACTIVE(1);
								if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 320))
								{
									TELEPORT_ACTOR(&Global_54076, &iLocal_0 + 1432, 1, 1, 1);
								}
								if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 328))
								{
									TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&iLocal_0 + 1528), 42,1f, 1, 1, true);
								}
								AI_GOAL_LOOK_AT_ACTOR(&uLocal_873, &uLocal_875, 1, 1065353216, 3212836864, 3212836864, 0);
								Function_222(&iLocal_999);
								Function_220(&iLocal_999);
								Function_195(&uLocal_865, 0, 1, 0, 0);
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_873)))
								{
									REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_873));
								}
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_875)))
								{
									REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_875));
								}
								TASK_CLEAR(&uLocal_873);
								ACTOR_START_FORCE_HOLSTER(&uLocal_873, 0, 0);
								if (IS_ACTOR_ALIVE(&uLocal_875))
								{
									Function_194();
									bLocal_1029 = true;
								}
								else
								{
									bLocal_1035 = true;
								}
								if (IS_GRINGO_VALID(&uLocal_871))
								{
									SET_ACTOR_UPDATE_PRIORITY(&uLocal_873, false);
									TASK_PRIORITY_SET(&uLocal_873, true);
									SNAP_ACTOR_TO_GRINGO(&uLocal_873, GET_OBJECT_FROM_GRINGO(&uLocal_871), "UseCase1", false, 0, 0);
									TASK_USE_GRINGO(&uLocal_873, &uLocal_871, "UseCase1", true, 1);
								}
								else
								{
									LOG_ERROR("DAD GRINGO IS INVALID");
								}
								iLocal_1012 = 1;
							}
						}
					}
					else if (!iLocal_1034)
					{
						if (!bLocal_1030)
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_875)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_875));
							}
							if (!Function_219(&iLocal_1003))
							{
								Function_222(&iLocal_1003);
							}
							uLocal_869 = Function_190(&uLocal_865, 0, 1, 1, 0);
							if (IS_ACTOR_ALIVE(&uLocal_875))
							{
								bLocal_1029 = true;
							}
							bLocal_1030 = true;
						}
					}
				}
			}
			if (!iLocal_1036)
			{
				if (bLocal_1035)
				{
					if (IS_ACTOR_VALID(&uLocal_873))
					{
						if (IS_ACTOR_IN_VOLUME(&uLocal_873, &iLocal_0 + 320))
						{
							uLocal_901 = GET_SOUND_ID();
							PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_901, "AA_TWIN_ROCKS_MALE_CRYING_MASTER", *(&iLocal_0 + 1240));
							iLocal_1036 = 1;
						}
					}
				}
			}
			if (!bLocal_1031)
			{
				if (Function_219(&iLocal_1003))
				{
					if (Function_217(&iLocal_1003) < 2.0f)
					{
						Function_201(0, 1, 0, 1, 1, 1, 0, &iLocal_0 + 320, 1, 0, 1, 1, 0x3f800000, 0);
						UI_PUSH("CutsceneWithMessages");
						Function_189(&uLocal_869, 0);
						Function_220(&iLocal_1003);
						bLocal_1031 = true;
					}
				}
			}
			if (!iLocal_1032)
			{
				if (bLocal_1031)
				{
					if (Function_219(&iLocal_1003))
					{
						if (Function_217(&iLocal_1003) < 3.0f)
						{
							if (IS_ACTOR_VALID(&uLocal_875))
							{
								DESTROY_ACTOR(&uLocal_875);
							}
							if (IS_ACTOR_VALID(&uLocal_873))
							{
								DESTROY_ACTOR(&uLocal_873);
								DECOR_SET_BOOL(&Global_54076, "DadNotNaturalDeath", true);
								iLocal_1034 = 1;
							}
							PRINT_BIG("TWR_PrintBig", 5f, 0, 2, 0);
							iLocal_1032 = 1;
						}
					}
				}
			}
			if (!iLocal_1038)
			{
				if (Function_219(&iLocal_1003))
				{
					if (Function_217(&iLocal_1003) < 10.0f)
					{
						TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&iLocal_0 + 1624), 53,804f, 0, 1, true);
						iLocal_1038 = 1;
					}
				}
			}
			if (!iLocal_1033)
			{
				if (bLocal_1030)
				{
					if (Function_219(&iLocal_1003))
					{
						if (Function_217(&iLocal_1003) < 12.0f)
						{
							Function_186(2, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							if (!IS_PLAYER_CONTROLLABLE(0))
							{
								SET_PLAYER_CONTROL(0, 1, 0, 0);
							}
							if (bLocal_1029)
							{
								Function_182(200, 1, 0);
								Function_169(50, 1, 0);
							}
							else
							{
								Function_182(4294967096, 1, 0);
							}
							Function_167(Function_168(1, 1, 1, 0, 0), 1, 1);
							if (!Function_166())
							{
								Function_164(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_164(9, 0, 1);
							}
							Function_163(Global_46948, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 1);
							if (Function_219(&iLocal_991))
							{
								bLocal_1044 = Function_217(&iLocal_991);
								if (Function_162(459) < 0.0f)
								{
									if (bLocal_1044 > Function_162(459))
									{
										Function_161(459, bLocal_1044, 0);
									}
								}
								else
								{
									Function_161(459, bLocal_1044, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_132(Global_46948);
							Function_78(Global_46948, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_77(Global_46952) <= 1 && Function_77(Global_46948) <= 1) && Function_77(Global_46950) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							iLocal_1033 = 1;
							iLocal_990 = 4;
						}
					}
				}
			}
			if (!iLocal_1028)
			{
				if (Function_219(&iLocal_999))
				{
					if (Function_217(&iLocal_999) < 10.0f)
					{
						if (IS_ACTOR_VALID(&uLocal_875))
						{
							DESTROY_ACTOR(&uLocal_875);
						}
						if (IS_ACTOR_VALID(&uLocal_873))
						{
							DESTROY_ACTOR(&uLocal_873);
							DECOR_SET_BOOL(&Global_54076, "DadNotNaturalDeath", true);
							iLocal_1034 = 1;
						}
						PRINT_BIG("TWR_PrintBig", 5f, 0, 2, 0);
						iLocal_1028 = 1;
					}
				}
			}
			if (!iLocal_1037)
			{
				if (Function_219(&iLocal_999))
				{
					if (Function_217(&iLocal_999) < 16.0f)
					{
						TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&iLocal_0 + 1624), 53,804f, 0, 0, true);
						iLocal_1037 = 1;
					}
				}
			}
			if (!bLocal_1026)
			{
				if (Function_219(&iLocal_999))
				{
					if (Function_217(&iLocal_999) < 18.0f)
					{
						if (bLocal_1019)
						{
							Function_186(2, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							SET_SCRIPT_CUTSCENE_ACTIVE(0);
							if (DECOR_CHECK_EXIST(&Global_54076, "AllGuysDead"))
							{
								if (bLocal_1029)
								{
									Function_182(200, 1, 0);
									Function_169(50, 1, 0);
								}
								else
								{
									Function_182(4294967096, 1, 0);
								}
								Function_167(Function_168(1, 1, 1, 0, 0), 1, 1);
								if (!Function_166())
								{
									Function_164(9, 0, 1);
								}
								else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
								{
									Function_164(9, 0, 1);
								}
								Function_163(Global_46948, 0);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 1);
								if (Function_219(&iLocal_991))
								{
									bLocal_1044 = Function_217(&iLocal_991);
								}
								if (Function_219(&iLocal_991))
								{
									if (Function_162(459) < 0.0f)
									{
										if (bLocal_1044 > Function_162(459))
										{
											Function_161(459, bLocal_1044, 0);
										}
									}
									else
									{
										Function_161(459, bLocal_1044, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_132(Global_46948);
								Function_78(Global_46948, 1, 1, 0);
								SET_PLAYER_ENDLESS_READYMODE(0, 0);
								if ((Function_77(Global_46952) <= 1 && Function_77(Global_46948) <= 1) && Function_77(Global_46950) <= 1)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
									{
										AWARD_ACHIEVEMENT(12);
									}
								}
								bLocal_1026 = true;
								iLocal_990 = 4;
							}
						}
					}
				}
			}
			if (Function_20(bLocal_1011, 32))
			{
				if (!Function_20(bLocal_1011, 131072))
				{
					if (!Function_45(&bLocal_1011, &iLocal_885, &bLocal_907, &uLocal_867, &uLocal_865, &iLocal_887, &uLocal_905))
					{
						Function_213(&bLocal_1011, 131072);
					}
				}
			}
			if (bLocal_1026)
			{
				if (!HAS_SOUND_FINISHED(&uLocal_901))
				{
					STOP_SOUND(&uLocal_901);
				}
			}
			if (!bLocal_1026)
			{
				if (IS_ACTOR_VALID(&uLocal_873))
				{
					if (!IS_ACTOR_ALIVE(&uLocal_873) || FIRE_IS_ACTOR_ON_FIRE(&uLocal_873))
					{
						if (!HAS_SOUND_FINISHED(&uLocal_901))
						{
							STOP_SOUND(&uLocal_901);
						}
					}
				}
			}
			if (!bLocal_1026)
			{
				if (bLocal_1013)
				{
					if (IS_ACTOR_ALIVE(&uLocal_875))
					{
						if (!IS_ACTOR_IN_VOLUME(&uLocal_875, &iLocal_0 + 320))
						{
							if (!HAS_SOUND_FINISHED(&uLocal_903))
							{
								STOP_SOUND(&uLocal_903);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!iLocal_1039)
			{
				Function_34();
				iLocal_1039 = 1;
			}
			break;
	}
	return 1;
}

bool Function_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6) //Position: 0x32D0 / 13008
{
	var uVar0;
	var uVar1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	struct<2> Var13;
	bool bVar15;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "RunningFTE"))
	{
		if (!IS_ACTOR_ALIVE(&bLocal_792))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "DadNotNaturalDeath"))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_232("TWR_ObjRancherDead", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (IS_OBJECT_VALID(&uParam3))
			{
				DESTROY_OBJECT(&uParam3);
			}
			DECOR_SET_BOOL(&Global_54076, "RancherIsDead", true);
			DECOR_REMOVE(&Global_54076, "TWR_HelperActive");
			return 0;
		}
	}
	if (!iLocal_845)
	{
		if (IS_ACTOR_ALIVE(&bLocal_792))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uParam6))
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				ADD_BLIP_FOR_OBJECT(&uParam3, 330, 0f, 2, 0);
				Function_232("TWR_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_845 = 1;
			}
		}
	}
	if (!SQUAD_IS_VALID(&uLocal_833))
	{
		uLocal_833 = Function_75("TWR_PopSquad", FIND_NAMED_LAYOUT("TwinRocks_AALayout"));
	}
	if (!bLocal_849)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "TimeToMoveDad") && !iLocal_848)
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam3));
			DESTROY_OBJECT(&uParam3);
			TASK_CLEAR(&bLocal_792);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_792);
			Function_74(&iLocal_831);
			SQUAD_GOALS_CLEAR(&iLocal_831);
			SET_ACTOR_MIN_SPEED(&bLocal_792, 3);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_792, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "seconndCoverPos")), -1.0f, 0.0f);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_792)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_792, 325, 0, 2, 0);
			}
			bLocal_849 = true;
			iLocal_824 = 7;
		}
	}
	switch (iLocal_824)
	{
		case 0x00000000:
			if (!iLocal_843)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 248) && IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_72("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_843 = 1;
				}
			}
			if (iLocal_843)
			{
				if (Function_69(&Global_54076, &iLocal_0 + 248) <= 15.0f)
				{
					iLocal_843 = 0;
				}
			}
			if (!iLocal_844)
			{
				if (Function_226(&Global_54076, &bLocal_792) > 10.0f)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_JOINING_THE_FRAY", true, false, 2, 0, true, false);
						iLocal_844 = 1;
					}
				}
			}
			if (Function_66(&uParam3, 0, 1, 1, 1, 0) || (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 8) && !Global_42825 != 4))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam3));
				DESTROY_OBJECT(&uParam3);
				iLocal_848 = 1;
				if (!Function_279(Global_46948) != 2)
				{
					Function_212(Global_46948, 1);
					Global_6628 = 1;
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
				}
				uVar0 = GET_ACTORS_HORSE(&Global_54076);
				Function_237(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
				uVar1 = Function_237(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
				Function_42();
				Function_251();
				DECOR_SET_BOOL(&Global_54076, "TWR_HelperActive", true);
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 8))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_792, FIND_VOLUME_IN_LAYOUT(&Global_46715, "twrv_insideSE")))
					{
						if (IS_ACTOR_VALID(&uVar0))
						{
							if (IS_ACTOR_IN_VOLUME(&uVar0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_CheckPlayerHorse")))
							{
								TELEPORT_ACTOR(&uVar0, &uVar1, 1, 1, 1);
							}
						}
						Function_42();
						Function_201(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
						Function_222(&iLocal_852);
						Function_220(&iLocal_852);
						SET_SCRIPT_CUTSCENE_ACTIVE(1);
						uLocal_850 = Function_59(&uParam4, 0, 1, 0, 0);
						DECOR_SET_BOOL(&Global_54076, "TimeToPlayAnims", true);
						if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIHitAgain"))
						{
							DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIHitAgain");
						}
						DECOR_SET_BOOL(&Global_54076, "SP_TW_MakeAIMiss", true);
						SET_PLAYER_POSTURE(0, 1, 0);
						bLocal_864 = GET_WEAPON_IN_HAND(&Global_54076);
						AI_GOAL_LOOK_AT_ACTOR(&bLocal_792, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
						FORCE_LOOK_AT_ACTOR(&bLocal_792, &Global_54076, -1.0f);
						SET_FORCED_LOOK_ENABLE(&Global_54076, 0);
						SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
						ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
						ACTOR_START_FORCE_HOLSTER(&bLocal_792, 1, 0);
						Function_57(&Global_54076, 0);
						SET_ACTOR_UPDATE_PRIORITY(&Global_54076, false);
						Function_237(&iLocal_0 + 1168);
						Var3 = Function_237(&iLocal_0 + 1168);
						Function_236(&iLocal_0 + 1168);
						Var5 = Function_236(&iLocal_0 + 1168);
						Function_237(&iLocal_0 + 848);
						Var7 = Function_237(&iLocal_0 + 848);
						Function_236(&iLocal_0 + 848);
						Var9 = Function_236(&iLocal_0 + 848);
						SET_OBJECT_POSITION(&Global_54076, Var3);
						SET_OBJECT_ORIENTATION(&Global_54076, Var5);
						SET_OBJECT_POSITION(&bLocal_792, Var7);
						SET_OBJECT_ORIENTATION(&bLocal_792, Var9);
						Function_57(&bLocal_792, 0);
						SET_ANIM_SET_FOR_ACTOR(&Global_54076, "AA_tesoro_intro_cover", 0);
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "AA_tesoro_intro_cover/Player/Ply_Pre");
						iLocal_847 = 1;
						iLocal_824 = 1;
					}
					else
					{
						Function_213(&iParam0, 16384);
						DECOR_SET_BOOL(&Global_54076, "TWR_SheriffStarted", true);
						DECOR_SET_BOOL(&Global_54076, "IntroSpecialCase", true);
						SET_FACTIONS_STATUS_TWO_WAY(25, 2, 4);
						Function_56(&iLocal_831, &iParam1, 1);
						Function_56(&iLocal_831, &iParam5, 1);
						Function_55(&iParam1, &Global_54076, 1);
						Function_54(&iParam1, &Global_54076);
						Function_40(&iParam1, &Global_54076, 4);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_792, 0);
						TASK_CLEAR(&bLocal_792);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_792, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "introCover")), -1.0f, 0.0f);
						Function_53();
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_792)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_792, 325, 0, 2, 0);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_232("TWR_ObjKillGang", 0x40f00000, 1, 2, 0, 0, 0, 0);
						if (!IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(0, 1, 0, 0);
						}
						iLocal_824 = 7;
					}
				}
				else
				{
					Function_213(&iParam0, 16384);
					DECOR_SET_BOOL(&Global_54076, "TWR_SheriffStarted", true);
					DECOR_SET_BOOL(&Global_54076, "PlayerStartedEarly", true);
					SET_FACTIONS_STATUS_TWO_WAY(25, 2, 4);
					Function_56(&iLocal_831, &iParam1, 1);
					Function_56(&iLocal_831, &iParam5, 1);
					Function_55(&iParam1, &Global_54076, 1);
					Function_54(&iParam1, &Global_54076);
					Function_40(&iParam1, &Global_54076, 4);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_792, 0);
					Function_53();
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_792)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_792, 325, 0, 2, 0);
					}
					iLocal_824 = 7;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_217(&iLocal_852) < 0,25f)
			{
				Function_52();
				Function_213(&iParam0, 16384);
				DECOR_SET_BOOL(&Global_54076, "TWR_SheriffStarted", true);
				SET_FACTIONS_STATUS_TWO_WAY(25, 2, 4);
				Function_56(&iLocal_831, &iParam1, 1);
				Function_56(&iLocal_831, &iParam5, 1);
				Function_55(&iParam1, &Global_54076, 1);
				Function_54(&iParam1, &Global_54076);
				Function_40(&iParam1, &Global_54076, 4);
				iLocal_824 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_217(&iLocal_852) < 4.0f)
			{
				Function_48();
				iLocal_824 = 3;
			}
			break;
		
		case 0x00000003:
			if (SQUAD_GET_SIZE(&iParam5) == 2)
			{
				if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, false)) && IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, true)))
				{
					if (Function_217(&iLocal_852) <= 12.0f)
					{
						if (!iLocal_837)
						{
							if (SQUAD_GET_SIZE(&iParam5) == 2)
							{
								SET_OBJECT_POSITION(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iParam5, false), Vector(-2414,021f, 34,533f, 2170,052f));
								SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, false), "alerted", 1);
								SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, false), "alerted/rifle/right");
								Function_53();
								Function_222(&iLocal_856);
								Function_220(&iLocal_856);
								iLocal_837 = 1;
							}
						}
					}
					if (!iLocal_838)
					{
						if (Function_219(&iLocal_856))
						{
							if (Function_217(&iLocal_856) < 2.0f && iLocal_837)
							{
								if (SQUAD_GET_SIZE(&iParam5) == 2)
								{
									SET_ACTOR_UPDATE_PRIORITY(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, true), false);
									SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, true), "alerted", 1);
									SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, true), "alerted/rifle/left");
									iLocal_838 = 1;
									iLocal_824 = 4;
								}
							}
						}
					}
				}
			}
			else if (Function_219(&iLocal_852))
			{
				if (Function_217(&iLocal_852) < 10,9f)
				{
					TELEPORT_ACTOR_WITH_HEADING(&bLocal_792, *(&iLocal_0 + 1400), -30,807f, 0, 0, true);
					Function_237(&iLocal_0 + 1168);
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Function_237(&iLocal_0 + 1168), GET_OBJECT_HEADING(&iLocal_0 + 1168), 0, 0, false);
					TASK_CROUCH(&bLocal_792, -1.0f);
					ACTOR_POP_NEXT_GAIT(&bLocal_792, 0, false);
					SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(-5,485f, -35,464f, 0.0f), 0);
					SET_PLAYER_POSTURE(0, 1, 0);
					ACTOR_END_FORCE_HOLSTER(&bLocal_792);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_792, 0);
					DESTROY_OBJECT(&uLocal_850);
					Function_186(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					SET_SCRIPT_CUTSCENE_ACTIVE(0);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					iLocal_840 = 1;
					iLocal_824 = 5;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_217(&iLocal_852) <= 17,8f)
			{
				Function_47(StackVal, &bLocal_792, *(&iLocal_0 + 1400), -30,807f, 1, 1, 1);
				ACTOR_END_FORCE_HOLSTER(&bLocal_792);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_792, 0);
				SET_PLAYER_POSTURE(0, 1, 0);
				Function_237(&iLocal_0 + 1168);
				Var11 = Function_237(&iLocal_0 + 1168);
				Function_236(&iLocal_0 + 1168);
				Var13 = Function_236(&iLocal_0 + 1168);
				SET_OBJECT_POSITION(&Global_54076, Var11);
				SET_OBJECT_ORIENTATION(&Global_54076, Var13);
				iLocal_824 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_217(&iLocal_852) <= 17,9f || iLocal_840)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_792)))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_792, 325, 0, 2, 0);
				}
				STOP_FORCE_LOOK_AT_COORD(&bLocal_792);
				AI_GOAL_LOOK_CLEAR(&bLocal_792);
				ACTOR_END_FORCE_HOLSTER(&Global_54076);
				if (bLocal_864 != 4294967295)
				{
					ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, bLocal_864, 1);
				}
				ATTACH_PLAYER_TO_COVER(0, 1, 1);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
				SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-2460,537f, 26,337f, 2182,083f));
				SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(-5,485f, -35,464f, 0.0f), 0);
				if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIMiss"))
				{
					DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIMiss");
				}
				DECOR_SET_BOOL(&Global_54076, "SP_TW_MakeAIHitAgain", true);
				DECOR_SET_BOOL(&Global_54076, "TimeToCheckForBlips", true);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,2f);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				bLocal_846 = true;
				iLocal_824 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_217(&iLocal_852) <= 19.0f || iLocal_840)
			{
				if (!iLocal_839)
				{
					if (iLocal_837 && iLocal_838)
					{
						Function_186(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						SET_SCRIPT_CUTSCENE_ACTIVE(0);
						MEMORY_CONSIDER_AS_ENEMY(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, false), &Global_54076);
						MEMORY_CONSIDER_AS_ENEMY(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, true), &Global_54076);
						MEMORY_CONSIDER_AS_ENEMY(SQUAD_GET_ACTOR_BY_INDEX(&iParam5, true), &bLocal_792);
						SQUAD_SET_FACTION(&iParam5, 19);
						Function_228(&iParam5, 1, -1.0f);
						iLocal_839 = 1;
						TASK_CROUCH(&bLocal_792, -1.0f);
						ACTOR_POP_NEXT_GAIT(&bLocal_792, 0, false);
						Function_222(&iLocal_860);
						Function_220(&iLocal_860);
						iLocal_824 = 7;
					}
					else
					{
						Function_186(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						SET_SCRIPT_CUTSCENE_ACTIVE(0);
						TASK_CROUCH(&bLocal_792, -1.0f);
						ACTOR_POP_NEXT_GAIT(&bLocal_792, 0, false);
						Function_222(&iLocal_860);
						Function_220(&iLocal_860);
						iLocal_824 = 7;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!iLocal_841)
			{
				AI_CLEAR_DONT_HARM_ACTOR(&bLocal_792);
				iLocal_841 = 1;
			}
			if (!iLocal_842)
			{
				if (Function_219(&iLocal_860))
				{
					if (Function_217(&iLocal_860) < 1,5f)
					{
						if (!DECOR_CHECK_EXIST(&Global_54076, "PrintObjThruAggro"))
						{
							HUD_CLEAR_OBJECTIVE();
							Function_232("TWR_ObjKillGang", 0x40f00000, 1, 2, 0, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(uParam2, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(uParam2, "TWR_ObjKillGang", 0, 0, false);
							APPEND_JOURNAL_ENTRY(uParam2, 0);
							DECOR_SET_BOOL(&Global_54076, "PrintObjThruCut", true);
							iLocal_842 = 1;
						}
					}
				}
			}
			if (!bLocal_849)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "TimeToMoveDad") && !iLocal_835)
				{
					iLocal_835 = 1;
					TASK_CLEAR(&bLocal_792);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_792);
					Function_74(&iLocal_831);
					SQUAD_GOALS_CLEAR(&iLocal_831);
					SET_ACTOR_MIN_SPEED(&bLocal_792, 3);
					TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_792, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "seconndCoverPos")), -1.0f, 0.0f);
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "FirstGroupDead") && !iLocal_836)
			{
				iLocal_836 = 1;
				TASK_CLEAR(&bLocal_792);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_792);
				Function_74(&iLocal_831);
				SQUAD_GOALS_CLEAR(&iLocal_831);
				TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_792, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "thirdCoverPos")), -1.0f, 0.0f);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "TW_FatherCover"))
			{
				iLocal_824 = 9;
			}
			break;
		
		case 0x00000008:
			if (DECOR_CHECK_EXIST(&Global_54076, "helperReadyToDefend"))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_792);
				Function_74(&iLocal_831);
				SQUAD_GOALS_CLEAR(&iLocal_831);
				Function_46(&iLocal_831, &iLocal_0 + 192, 0, 4294967295);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,4f);
				iLocal_824 = 9;
			}
			break;
		
		case 0x00000009:
			if (DECOR_CHECK_EXIST(&Global_54076, "TW_FatherCover"))
			{
				DECOR_REMOVE(&Global_54076, "TW_FatherCover");
				CLEAR_ACTOR_MIN_SPEED(&bLocal_792);
				SET_ACTOR_MIN_SPEED(&bLocal_792, 4);
				SET_ACTOR_MAX_SPEED(&bLocal_792, 3);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_792);
				Function_74(&iLocal_831);
				SQUAD_GOALS_CLEAR(&iLocal_831);
				TASK_CLEAR(&bLocal_792);
				bVar15 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &iLocal_0 + 1048, 4);
				TASK_HIDE_AT_COVER(0, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_0 + 1720), -1.0f, 1.0f, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_792, bVar15);
				TASK_SEQUENCE_RELEASE(bVar15, 1);
				iLocal_824 = 10;
			}
			break;
		
		case 0x0000000A:
			iLocal_824 = 11;
			break;
	}
	return 1;
}

var Function_46(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x4225 / 16933
{
	var uVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return &uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iParam0, iParam2, &uParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iParam0, 0, &uParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(&iParam0, &iVar1, &uVar0);
	return &uVar0;
}

void Function_47(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x426C / 17004
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_48() //Position: 0x433B / 17211
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_HelpShesCaptur_v1_AA", "TwinRok_HelpShesCaptur_v1_AA", false, 4, 1, 0, 1);
		Function_49(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_49(int iParam0) //Position: 0x439C / 17308
{
	Function_50(0, &Global_54076, iParam0, 0);
	Function_50(1, &bLocal_792, iParam0, 0);
	Function_50(3, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive"), iParam0, 0);
	Function_50(4, &bLocal_790, iParam0, 0);
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_BossLayout")))
	{
		Function_50(2, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "BigBossMan"), iParam0, 0);
	}
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_BossLayout")))
	{
		Function_50(5, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "HostageGuy"), iParam0, 0);
	}
	return;
}

void Function_50(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x447C / 17532
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_20(uParam2, Function_51(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

bool Function_51(bool bParam0) //Position: 0x44A4 / 17572
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_52() //Position: 0x44B0 / 17584
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_JonWalksOver", "TwinRok_JonWalksOver", false, 4, 1, 0, 1);
		Function_49(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_53() //Position: 0x4501 / 17665
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "TwinRok_SniperYells", "TwinRok_SniperYells", false, 3, 1, 0, 1);
		Function_49(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_54(int iParam0, int iParam1) //Position: 0x4551 / 17745
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_55(int iParam0, var uParam1, bool bParam2) //Position: 0x45AC / 17836
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, true);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_56(int iParam0, int iParam1, int iParam2) //Position: 0x4624 / 17956
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&iParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, &iParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x46A2 / 18082
{
	var uVar0;
	var uVar1;
	
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
		uVar1 = GET_VEHICLE(&bParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_58(&bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&bParam0, 1);
	}
	return;
}

float Function_58(var uParam0, bool bParam1) //Position: 0x470C / 18188
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_59(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x472D / 18221
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_65(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TW_Intro", 4, 1);
	}
	Function_60(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_60(int iParam0) //Position: 0x47AF / 18351
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_64(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_63(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_62(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_61(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 3.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 2, 3, 7.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1.0f, 3);
	return;
}

void Function_61(int iParam0) //Position: 0x4831 / 18481
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 33,87688f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2411,885f, 36,17645f, 2171,236f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,099529f, 0,841534f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_62(int iParam0) //Position: 0x48A6 / 18598
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,80617f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2409,573f, 36,66504f, 2170,248f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,203838f, 1,509789f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_63(int iParam0) //Position: 0x491B / 18715
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,54846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2460,256f, 25,66714f, 2180,969f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,023645f, -0,928385f, -0,000226f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_64(var uParam0) //Position: 0x4994 / 18836
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 51,54846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2460,177f, 26,54037f, 2181,031f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,014132f, -0,915116f, -0,000226f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_65() //Position: 0x4A0D / 18957
{
	bool bVar0;
	
	return &bVar0;
}

int Function_66(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x4A16 / 18966
{
	var uVar0;
	var uVar1;
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
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
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
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
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
				Function_57(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_58(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_58(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_67(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_67(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &iVar3, 1);
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

int Function_67(vector3 vParam0) //Position: 0x4C4B / 19531
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_68(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_68(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_68(char* cParam0) //Position: 0x4CC1 / 19649
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

float Function_69(var uParam0, var uParam1) //Position: 0x4CD9 / 19673
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_71(&uParam0);
		Var0 = Function_71(&uParam0);
		Function_70(&uParam1);
		Var2 = Function_70(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_70(int iParam0) //Position: 0x4D57 / 19799
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_71(int iParam0) //Position: 0x4D69 / 19817
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

void Function_72(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4DD5 / 19925
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_73(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_73(int iParam0) //Position: 0x4E60 / 20064
{
	char* cVar0[16];
	
	if (!Function_19())
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

void Function_74(int iParam0) //Position: 0x4E9F / 20127
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

var Function_75(bool bParam0, int iParam1) //Position: 0x4ED4 / 20180
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return &iVar0;
	}
	uVar2 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 25);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3) && !bVar1)
	{
		uVar4 = GET_OBJECT_NAME(&iVar3);
		if (STRING_CONTAINS_STRING(&uVar4, &bParam0) || Function_76(&bParam0, &uVar4))
		{
			bVar1 = true;
			iVar0 = GET_SQUAD_FROM_OBJECT(&iVar3);
		}
		else
		{
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
	}
	DESTROY_ITERATOR(&uVar2);
	return &iVar0;
}

int Function_76(char* cParam0) //Position: 0x4F90 / 20368
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

int Function_77(bool bParam0) //Position: 0x4FBD / 20413
{
	if (!Function_26(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4FD7 / 20439
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_30(bParam0))
	{
		Function_28();
		return;
	}
	bVar0 = Function_27(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_166())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_25(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_73(Global_10966) };
		}
		if (Function_166())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_125();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_166())
	{
		Function_124();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_23("DEED_COMPLETE", bParam0);
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
			Function_119(bParam0);
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
						switch (Function_25(bParam0))
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
			Function_81(1);
			Function_80(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_79(bParam0, &Var14);
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

void Function_79(int iParam0, struct<41> Param1) //Position: 0x5235 / 21045
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_80(bool bParam0, int iParam1) //Position: 0x5273 / 21107
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_81(bool bParam0) //Position: 0x52B2 / 21170
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_110();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_83();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_82(&Global_99144, 1);
		Function_82(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x5307 / 21255
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_83() //Position: 0x531D / 21277
{
	Function_108();
	Function_107();
	Function_107();
	Function_106();
	Function_106();
	Function_105();
	Function_105();
	Function_90(0);
	Function_90(0);
	Function_88();
	Function_87();
	Function_86();
	Function_85();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_84();
	return;
}

void Function_84() //Position: 0x5368 / 21352
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

void Function_85() //Position: 0x546E / 21614
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

void Function_86() //Position: 0x54A1 / 21665
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_87() //Position: 0x5634 / 22068
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_88() //Position: 0x57ED / 22509
{
	Function_89(&Global_42918, 1, 0);
	return;
}

void Function_89(struct<2317> Param0) //Position: 0x57FB / 22523
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
	
	uVar0 = Function_41();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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

struct<8> Function_90(int iParam0) //Position: 0x5A18 / 23064
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
					iVar2 = ((Function_104((50 + iVar4)) + Function_104((183 + iVar4))) + Function_104((90 + iVar4)));
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
	Function_91(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_91(int iParam0, bool bParam1, bool bParam2) //Position: 0x5ABF / 23231
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
		Function_103(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_102(iParam0);
	if (&bParam2)
	{
		Function_92(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_92(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5D5B / 23899
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_101(390))), 32);
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
					bVar19 = (Function_162(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_162(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_99(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_96(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_93(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_65(), &Var9);
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

var Function_93(int iParam0) //Position: 0x6399 / 25497
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_94(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x63AA / 25514
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_95("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_95("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_95("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_95(char* cParam0) //Position: 0x64A1 / 25761
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_96(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x64BC / 25788
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_98(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_97(Function_98(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_97(int iParam0, int iParam1) //Position: 0x6523 / 25891
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_98(int iParam0, bool bParam1) //Position: 0x6535 / 25909
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_99(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x6547 / 25927
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
	if (((Function_100(iParam0) != 19 || Function_100(iParam0) != 17) || Function_100(iParam0) != 10) || Function_100(iParam0) != 9)
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

int Function_100(int iParam0) //Position: 0x667B / 26235
{
	return Global_55480[iParam016].f_96;
}

var Function_101(int iParam0) //Position: 0x668A / 26250
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_102(int iParam0) //Position: 0x66C7 / 26311
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

int Function_103(int iParam0, bool bParam1, bool bParam2) //Position: 0x6861 / 26721
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

int Function_104(bool bParam0) //Position: 0x6AA5 / 27301
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_105() //Position: 0x6AE6 / 27366
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
		iVar2 = ((Function_104((50 + iVar3) + 15) + Function_104((183 + iVar3) + 15)) + Function_104((90 + iVar3) + 15));
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
	Function_91(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_106() //Position: 0x6B6F / 27503
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
			iVar2 = ((Function_104((50 + iVar3) + 8) + Function_104((183 + iVar3) + 8)) + Function_104((90 + iVar3) + 8));
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
	Function_91(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_107() //Position: 0x6C06 / 27654
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
		iVar2 = ((Function_104((50 + iVar3)) + Function_104((183 + iVar3))) + Function_104((90 + iVar3)));
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
	Function_91(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_108() //Position: 0x6C85 / 27781
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_109(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_91(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_109(int iParam0, bool bParam1, int iParam2) //Position: 0x6CC2 / 27842
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
	Function_103(iParam0, bParam1, 1);
	Function_102(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_92(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_110() //Position: 0x6ECE / 28366
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_19())
	{
		Function_116(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_116(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_111(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_111(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_68(StackVal, Var0))
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
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_111(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x6F85 / 28549
{
	int iVar0;
	
	iVar0 = Function_114(&uParam2, &fParam3);
	if (Function_113(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_213(&Global_99144, 1);
			Function_82(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_213(&Global_99144, 2);
			Function_82(&Global_99144, 1);
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
		Function_213(&Global_99144, 2);
		Function_82(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_112();
	return StackVal, Function_112();
}

struct<8> Function_112() //Position: 0x707D / 28797
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_113(int iParam0) //Position: 0x7087 / 28807
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_114(bool bParam0, bool bParam1) //Position: 0x709D / 28829
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
				fVar2 = Function_115(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_115(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_113(iVar0) && !&bParam1)
	{
		iVar0 = Function_114(&bParam0, 1);
	}
	return iVar0;
}

float Function_115(struct<2> Param0, struct<2> Param2) //Position: 0x7169 / 29033
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_116(float fParam0, int iParam1) //Position: 0x7186 / 29062
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_118(&Global_54076, &Var3);
	if (!Function_117(Global_46760[0]))
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
	if (!Function_117(Global_46760[2]))
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
	if (!Function_117(Global_46760[1]))
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
	if (!Function_117(Global_46796[1]))
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
	if (!Function_117(Global_46796[3]))
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
	if (!Function_117(Global_46796[2]))
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
	if (!Function_117(Global_46796[4]))
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
	if (!Function_117(Global_46816[0]))
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
	if (!Function_117(Global_46816[1]))
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
	if (!Function_117(Global_46816[2]))
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
	if (!Function_117(Global_46838[0]))
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
	if (!Function_117(Global_46850[0]))
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
	if (!Function_117(Global_46850[1]))
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
	if (!Function_117(Global_46850[2]))
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
	if (!Function_117(Global_46866[0]))
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
	if (!Function_117(Global_46866[1]))
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
	if (!Function_117(Global_46866[2]))
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
	if (!Function_117(Global_46894[2]))
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
	if (!Function_117(Global_46894[3]))
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
	if (!Function_117(Global_46894[0]))
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
	if (!Function_117(Global_46914[0]))
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
	if (!Function_117(Global_46926[2]))
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
	if (!Function_117(Global_46926[1]))
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
	if (!Function_117(Global_46926[0]))
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
	if (!Function_117(Global_46838[1]))
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
	if (!Function_117(Global_46894[1]))
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
	Function_213(&Global_99144, 2);
	Function_82(&Global_99144, 1);
	iParam1 = 0;
	if (Function_68(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_117(int iParam0) //Position: 0x79B2 / 31154
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_20(iVar0, 0x1000000) || Function_20(iVar0, 0x2000000)) || Function_20(iVar0, 0x4000000)) || !Function_20(iVar0, 0x10000000));
}

void Function_118(var uParam0, int iParam1) //Position: 0x79ED / 31213
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_119(bool bParam0) //Position: 0x79FC / 31228
{
	int iVar0;
	int iVar1;
	
	if (!Function_26(bParam0))
	{
		return;
	}
	switch (Function_27(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_25(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_122(12, 1, 0, 0);
				Function_121(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_122(13, 1, 0, 0);
				Function_121(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_122(14, 1, 0, 0);
				Function_121(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_122(15, 1, 0, 0);
				Function_121(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_122(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_25(bParam0))
			{
				case 0x00000000:
					if (Function_77(bParam0) == 1)
					{
						iVar0 = Function_120(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_121(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_121(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_121(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_121(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_121(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_121(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_121(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_121(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_121(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_121(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_121(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_121(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_121(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_121(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_121(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_121(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_121(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_121(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_121(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_121(4, 19);
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
								Function_122(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_122(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_122(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_120(bParam0) == 0)
			{
				if (Function_77(bParam0) == 1)
				{
					Function_122(458, 1, 0, 0);
					iVar0 = Function_25(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_121(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_121(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_121(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_121(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_121(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_121(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_121(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_121(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_77(bParam0) == 1)
			{
				Function_122(400, 1, 0, 0);
			}
			switch (Function_25(bParam0))
			{
				case 0x00000001:
					Function_122(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_121(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_121(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_121(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_122(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_121(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_121(6, 9);
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

int Function_120(bool bParam0) //Position: 0x7ED8 / 32472
{
	if (!Function_26(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_121(int iParam0, int iParam1) //Position: 0x7EF7 / 32503
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

int Function_122(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x7F61 / 32609
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
	Function_103(iParam0, TO_FLOAT(bParam1), 1);
	Function_102(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_92(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_123(iParam0);
	return 1;
}

void Function_123(int iParam0) //Position: 0x81C2 / 33218
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

void Function_124() //Position: 0x8260 / 33376
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
	PLAYSTAT_INT("HC_MONEY", Function_104(0));
	PLAYSTAT_INT("HC_FAME", Function_104(3));
	PLAYSTAT_INT("HC_HONOR", Function_104(1));
	return;
}

void Function_125() //Position: 0x83C2 / 33730
{
	int iVar0;
	int iVar1;
	
	if (!Function_130(Global_10966))
	{
		return;
	}
	iVar0 = Function_104(24);
	iVar1 = Function_129(Global_10966);
	if (!Function_130(iVar0) && Function_128(iVar1) < 0)
	{
		Function_91(24, Global_10966, 0);
		Function_126(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_128(Function_129(iVar0)))
	{
		Function_91(24, Global_10966, 0);
		Function_126(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_126(int iParam0, char* cParam1) //Position: 0x8442 / 33858
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
		Function_127(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_127(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x8799 / 34713
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

int Function_128(int iParam0) //Position: 0x8821 / 34849
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_129(int iParam0) //Position: 0x883B / 34875
{
	if (!Function_130(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_130(int iParam0) //Position: 0x8855 / 34901
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<24> Function_131(char* cParam0) //Position: 0x886B / 34923
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

void Function_132(int iParam0) //Position: 0x8AC1 / 35521
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_25(iParam0) == Global_46760[2])
	{
		if (Function_160(2) && !Function_159(2))
		{
			Function_152(2, 2, 0, 0, 1);
		}
	}
	if (Function_25(iParam0) == Global_46796[3])
	{
		if (Function_160(6) && !Function_159(6))
		{
			Function_152(6, 16, 0, 0, 1);
		}
	}
	if (!Function_160(10) || Function_159(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_77(Global_46948);
	if (Global_46948 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_77(Global_46950);
	if (Global_46950 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_77(Global_46952);
	if (Global_46952 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_77(Global_46951);
	if (Global_46951 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_77(Global_46953);
	if (Global_46953 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != iParam0)
	{
		return;
	}
	Function_121(2, 24);
	Function_133(10, 0, 1);
	return;
}

void Function_133(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8C7F / 35967
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_151(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_159(bParam0))
	{
		if (!Function_160(bParam0))
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
		Function_122(457, 1, 0, 0);
		Function_136(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_135(0, 0, 1, 1))
			{
				Function_81(1);
				Function_80(1, 0);
			}
			else
			{
				Function_134();
			}
		}
	}
	return;
}

void Function_134() //Position: 0x8E20 / 36384
{
	return;
}

bool Function_135(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8E26 / 36390
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

void Function_136(bool bParam0, int iParam1) //Position: 0x8ED5 / 36565
{
	if (!Function_151(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8F2A / 36650
{
	char* cVar0[32];
	
	if (!Function_151(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_150(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_160(bParam0))
	{
		Function_122(456, 1, 0, 0);
		Function_136(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_135(0, 0, 1, 1))
			{
				Function_81(1);
				Function_80(1, 5);
			}
			else
			{
				Function_134();
			}
		}
		Function_145(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_144() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_144() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_72(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_19())
		{
			if (!Function_143(Global_119934, 2))
			{
				Function_138(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_138(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9086 / 36998
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_140(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_139(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_139(char* cParam0) //Position: 0x90FB / 37115
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

bool Function_140(int iParam0, var uParam1, int iParam2) //Position: 0x9135 / 37173
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
		if (Function_142(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_141(uVar0))
		{
			case 0x00000002:
				if (!Function_143(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_141(char* cParam0) //Position: 0x91B1 / 37297
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

int Function_142(int iParam0) //Position: 0x9252 / 37458
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_82(&iVar1, 2147483648);
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

bool Function_143(int iParam0, int iParam1) //Position: 0x928F / 37519
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_144() //Position: 0x92A2 / 37538
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_145(bool bParam0) //Position: 0x92CF / 37583
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
			if (Function_149(bParam0, Function_51(bVar24)))
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
			if (Function_149(bParam0, Function_51(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_148(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_147(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_146(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_146(int iParam0) //Position: 0x947F / 38015
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_151(iParam0))
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

void Function_147(bool bParam0, bool bParam1) //Position: 0x94D6 / 38102
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_148(int iParam0) //Position: 0x94FB / 38139
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_151(iParam0))
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

bool Function_149(bool bParam0, bool bParam1) //Position: 0x9551 / 38225
{
	int iVar0;
	
	if (!Function_151(bParam0))
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

bool Function_150(int iParam0) //Position: 0x95B0 / 38320
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_151(int iParam0) //Position: 0x95CC / 38348
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_152(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x95E2 / 38370
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_151(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_150(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_158(bParam0, 2))
	{
		Function_122(456, 1, 0, 0);
		Function_136(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_72(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_149(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_136(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_135(0, 0, 1, 1))
			{
				Function_81(1);
				Function_80(1, 0);
			}
			else
			{
				Function_134();
			}
		}
		Function_145(bParam0);
		if (StackVal && !Function_20(((((!Function_144() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_20((((Function_144() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_19())
		{
			if (!Function_143(Global_119934, 2))
			{
				Function_138(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_154();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_153(3, bParam1);
				break;
			
			case 0x00000005:
				Function_153(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_153(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_153(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_153(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_153(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_121(2, 24);
				break;
			
			case 0x00000003:
				Function_121(2, 25);
				break;
			
			case 0x0000000F:
				Function_121(2, 26);
				break;
			
			case 0x0000000D:
				Function_121(2, 27);
				break;
			
			case 0x0000000E:
				Function_121(2, 28);
				break;
			}
	}
}

void Function_153(int iParam0, bool bParam1) //Position: 0x9881 / 39041
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

void Function_154() //Position: 0x98F0 / 39152
{
	if (Function_151(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_157(Global_42827);
			*(&Global_42827 + 8) = Function_155(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_157(Global_42827);
			*(&Global_42827 + 8) = Function_155(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_155(int iParam0, int iParam1) //Position: 0x9970 / 39280
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
					if (Function_266(6, 0) || Function_266(12, 0))
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
					if (Function_156(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_266(5, 0))
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
					if (Function_156(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_156(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_156(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_156(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_266(26, 0))
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
					if (Function_156(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_156(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_156(27) && iVar16)
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
					if (Function_156(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_156(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_156(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_156(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_266(17, 0) && iVar13)
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
					if (Function_156(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_266(6, 0) && Function_156(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_156(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_266(9, 0) && Function_156(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_156(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_266(8, 0) && iVar17)
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
	if (Function_68(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_68(StackVal, vVar2))
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
	if (!Function_68(StackVal, vVar2))
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

int Function_156(int iParam0) //Position: 0xA5D3 / 42451
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_157(int iParam0) //Position: 0xA5E8 / 42472
{
	int iVar0;
	int iVar1;
	
	if (!Function_151(iParam0))
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

bool Function_158(int iParam0, int iParam1) //Position: 0xA637 / 42551
{
	int iVar0;
	
	if (!Function_151(iParam0))
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

bool Function_159(int iParam0) //Position: 0xA664 / 42596
{
	if (!Function_151(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_158(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_160(int iParam0) //Position: 0xA6B5 / 42677
{
	if (!Function_151(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_158(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0, bool bParam1, bool bParam2) //Position: 0xA707 / 42759
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_103(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_102(iParam0);
	if (&bParam2)
	{
		Function_92(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_162(int iParam0) //Position: 0xA974 / 43380
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_163(int iParam0, int iParam1) //Position: 0xA9AD / 43437
{
	if (!Function_30(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

int Function_164(bool bParam0, bool bParam1, int iParam2) //Position: 0xA9C8 / 43464
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_165(bParam0), Function_41()) == 0)
		{
			ADD_ITEM(Function_165(bParam0), Function_41(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_165(bParam0), Function_41(), &iParam2);
	return 1;
}

var Function_165(bool bParam0) //Position: 0xAA16 / 43542
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_166() //Position: 0xAB0A / 43786
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAB35 / 43829
{
	bool bVar0;
	
	bVar0 = Function_104(0);
	if ((Function_104(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_122(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_104(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_122(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_104(597) + Function_104(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_168(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAC07 / 44039
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_104(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_165(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_169(int iParam0, bool bParam1, bool bParam2) //Position: 0xAD0E / 44302
{
	int iVar0;
	bool bVar1;
	
	if (Function_181(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_166())
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
	iVar0 = Function_104(3);
	Function_178();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_176(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_143(Global_119936, 4))
			{
				Function_138(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_122(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_162(3));
	iVar0 = Function_104(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_171(4, Function_175(Global_21369.f_248), 1);
				Function_170(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_171(4, Function_175(Global_21369.f_248), 1);
				Function_170(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_171(4, Function_175(Global_21369.f_248), 1);
				Function_170(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_171(4, Function_175(Global_21369.f_248), 1);
				Function_170(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_171(4, Function_175(Global_21369.f_248), 1);
				Function_170(Global_21369.f_244, Global_21369.f_248);
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

void Function_170(int iParam0, int iParam1) //Position: 0xAEE2 / 44770
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

int Function_171(int iParam0, char* cParam1) //Position: 0xB14C / 45388
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
	Function_126(iParam0, &cParam1, 0, 1);
	iVar1 = Function_172();
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

int Function_172() //Position: 0xB2DC / 45788
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
	Function_173();
	return 0;
}

void Function_173() //Position: 0xB37D / 45949
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_174(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_174(int iParam0) //Position: 0xB43B / 46139
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

var Function_175(int iParam0) //Position: 0xB4A1 / 46241
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

int Function_176(int iParam0, bool bParam1) //Position: 0xB530 / 46384
{
	bool bVar0;
	int iVar1;
	
	Function_122(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_177(iParam0, 4294967295);
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
	iVar1 = Function_172();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_177(int iParam0, int iParam1) //Position: 0xB6DC / 46812
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

void Function_178() //Position: 0xB721 / 46881
{
	Function_180(3, 0.0f);
	Function_179(3, 10000.0f);
	return;
}

int Function_179(int iParam0, int iParam1) //Position: 0xB737 / 46903
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_180(int iParam0, int iParam1) //Position: 0xB777 / 46967
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_181(int iParam0) //Position: 0xB7B7 / 47031
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_182(int iParam0, bool bParam1, bool bParam2) //Position: 0xB7C6 / 47046
{
	int iVar0;
	bool bVar1;
	
	if (Function_181(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_166())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_104(1);
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
			Function_176(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_143(Global_119936, 1))
				{
					Function_138(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_185(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_143(Global_119936, 2))
				{
					Function_138(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_122(1, bVar1, 0, 0);
	}
	else
	{
		Function_184(1, (4294967295 * bVar1), 0);
	}
	if (Function_104(1) <= 4294962296)
	{
		Function_91(1, 4294962296, 0);
	}
	else if (Function_104(1) >= 5000)
	{
		Function_91(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_162(1));
	iVar0 = Function_104(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_171(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_171(2, Function_183(Global_21369.f_244), 0);
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
				Function_171(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_171(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_171(2, Function_183(Global_21369.f_244), 1);
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
				Function_171(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_171(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_171(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_171(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_171(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_171(2, Function_183(Global_21369.f_244), 1);
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
				Function_171(2, Function_183(Global_21369.f_244), 0);
			}
			break;
	}
	Function_170(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_183(int iParam0) //Position: 0xBAED / 47853
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

int Function_184(int iParam0, bool bParam1, int iParam2) //Position: 0xBB90 / 48016
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
	Function_102(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_92(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_185(int iParam0, bool bParam1) //Position: 0xBD8D / 48525
{
	bool bVar0;
	int iVar1;
	
	Function_184(iParam0, bParam1, 0);
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
	iVar1 = Function_177(iParam0, 4294967295);
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
	iVar1 = Function_172();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_186(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xBF38 / 48952
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
		uVar0 = Function_41();
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
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_122(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_42();
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
	Function_187(&iParam9, &iParam10);
}

void Function_187(var uParam0, bool bParam1) //Position: 0xC009 / 49161
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
		Function_188();
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

void Function_188() //Position: 0xC0D8 / 49368
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

void Function_189(var uParam0, bool bParam1) //Position: 0xC150 / 49488
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_190(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC166 / 49510
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_65(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TWR_NoDadVista", 2, 1);
	}
	Function_191(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_191(int iParam0) //Position: 0xC1EE / 49646
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_193(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_192(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_192(int iParam0) //Position: 0xC238 / 49720
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,32628f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2423,967f, 31,62225f, 2180,559f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,095627f, 0,116306f, 0,000941f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_193(var uParam0) //Position: 0xC2B1 / 49841
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 49,32628f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2417,738f, 31,62809f, 2180,22f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,060492f, 0,301016f, 0,000939f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_194() //Position: 0xC32A / 49962
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_FatherAlive2", "TwinRok_FatherAlive2", 3, 4, 1, 0, 1);
		Function_49(10);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_195(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC37C / 50044
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_65(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nTW_ending", 4, 1);
	}
	Function_196(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_196(var uParam0) //Position: 0xC3FF / 50175
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_200(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_199(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_198(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_197(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 2, 3, 10.0f, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 3, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1.0f, 1, 0.0f);
	return;
}

void Function_197(int iParam0) //Position: 0xC481 / 50305
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2453,42f, 34,68085f, 2134,249f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,020443f, -1,261533f, 0,008521f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_198(int iParam0) //Position: 0xC4FA / 50426
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2454,759f, 34,64624f, 2130,416f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,002583f, -1,310284f, 0,00852f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_199(int iParam0) //Position: 0xC573 / 50547
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,67644f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2422,554f, 27,6667f, 2124,134f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,059982f, 0,887188f, -1E-06f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_200(float fParam0) //Position: 0xC5EC / 50668
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 47,67644f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-2421,601f, 27,6667f, 2122,847f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(-0,059982f, 0,95136f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_201(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xC661 / 50785
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_42();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_41();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, false);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, true);
			AI_IGNORE_ACTOR(&uVar1);
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
				Function_204(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_65(), 2, Function_204(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_122(19, 1, 0, 0);
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
	if (iParam10 && !Function_19())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_203()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_203()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
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
	if (Function_299(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_202(0x4000000);
	}
	if (Function_299(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_202(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_202(int iParam0) //Position: 0xC913 / 51475
{
	int iVar0;
	
	if (Function_20(iParam0, 1) && Function_20(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_203() //Position: 0xC947 / 51527
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

struct<8> Function_204(int iParam0) //Position: 0xC9D5 / 51669
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_205(int iParam0) //Position: 0xC9E7 / 51687
{
	var uVar0;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("TW_AreaVultures", &iParam0, 4294967295, 0);
	Function_206(&iParam0, &uVar0, &iLocal_0 + 304);
	return;
}

void Function_206(bool bParam0, float fParam1, var uParam2) //Position: 0xCA18 / 51736
{
	struct<9> Var0;
	struct<2> Var15;
	struct<2> Var17;
	var uVar19;
	
	if (!IS_LAYOUTREF_VALID(&bParam0))
	{
		return;
	}
	if (!IS_VOLUME_VALID(&uParam2))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&fParam1))
	{
		fParam1 = CREATE_OBJECTSET_IN_LAYOUT("Ambiance_VultureSet", &bParam0, 15, 0);
	}
	vVar0 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_SCALE(&uParam2, &vVar0);
	fVar2 = ((vVar0.x + vVar0.z) / 2.0f);
	bVar3 = ROUND((vVar0.x + IntToFloat(RAND_INT_RANGE(true, 3))));
	PRINTSTRING("Trying to create this many vultures: ");
	PRINTINT(bVar3);
	PRINTNL();
	vVar4 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_CENTER(&uParam2, &vVar4);
	iVar6 = 0;
	while (iVar6 < (bVar3 - 1))
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("Ambiance_Vlt") };
		Var15 = Vector(RAND_FLOAT_RANGE((vVar4.x - fVar2), (vVar4.x + fVar2)), RAND_FLOAT_RANGE((vVar4.y - 5.0f), (vVar4.y + 5.0f)), RAND_FLOAT_RANGE((vVar4.z - fVar2), (vVar4.z + fVar2)));
		Var17 = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 359,9f), 0.0f);
		uVar19 = CREATE_ACTOR_IN_LAYOUT(&bParam0, &Var7, 1128, Var15, Var17);
		MAKE_BIRD_FLY_FROM_POINT(&uVar19, Var15, Var17);
		ADD_OBJECT_TO_OBJECTSET(&uVar19, &fParam1);
		TASK_PRIORITY_SET(&uVar19, true);
		TASK_BIRD_SOAR_AT_COORD(&uVar19, &vVar4, -1.0f, 1106247680);
		iVar6++;
	}
	return;
}

struct<32> Function_207(char* cParam0) //Position: 0xCB82 / 52098
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_208("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_208(char* cParam0) //Position: 0xCBEE / 52206
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_209(var uParam0, int iParam1) //Position: 0xCC10 / 52240
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

void Function_210(var uParam0, int iParam1) //Position: 0xCC68 / 52328
{
	bool bVar0;
	
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), 13, false);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), 13, false);
		}
		bVar0++;
	}
	return;
}

void Function_211(var uParam0, var uParam1, int iParam2) //Position: 0xCCE5 / 52453
{
	bool bVar0;
	
	AI_DONT_HARM_ACTOR(&Global_54076);
	if (IS_ACTOR_VALID(&iParam2))
	{
		AI_DONT_HARM_ACTOR(&iParam2);
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), 13, true);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0), 13, true);
		}
		bVar0++;
	}
	return;
}

void Function_212(int iParam0, int iParam1) //Position: 0xCD73 / 52595
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_30(iParam0))
	{
		Function_28();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_27(iParam0);
	if (StackVal != 2)
	{
		Function_23("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_81(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_25(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_73(Global_10966) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

void Function_213(bool bParam0, bool bParam1) //Position: 0xCE84 / 52868
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_214(int iParam0, bool bParam1) //Position: 0xCE95 / 52885
{
	bool bVar0;
	int iVar1;
	
	if ((((DECOR_CHECK_EXIST(&Global_54076, "IntroCutsceneOver") || DECOR_CHECK_EXIST(&Global_54076, "IntroSpecialCase")) || (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 8) && !Global_42825 != 4)) || (Function_215(&Global_54076, &bParam1, 1, 1, 1, 5.0f) && !Global_42825 != 4)) || (Function_215(&Global_54076, &iParam0, 1, 1, 1, 5.0f) && !Global_42825 != 4))
	{
		if (!Function_231(&iParam0, 1))
		{
			Function_230(&iParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		if (!Function_231(&bParam1, 1))
		{
			Function_230(&bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIMiss"))
		{
			DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIMiss");
		}
		DECOR_SET_BOOL(&Global_54076, "SP_TW_MakeAIHitAgain", true);
		Function_228(&iParam0, 1, -1.0f);
		Function_74(&bParam1);
		SQUAD_GOALS_CLEAR(&bParam1);
		SQUAD_SET_FACTION(&iParam0, 19);
		SQUAD_SET_FACTION(&bParam1, 19);
		Function_229(&bParam1, -1.0f);
		Function_55(&bParam1, &Global_54076, 1);
		Function_54(&bParam1, &Global_54076);
		Function_40(&bParam1, &Global_54076, 4);
		return 1;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), 3.0f))
			{
				if (!Function_231(&iParam0, 1))
				{
					Function_230(&iParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!Function_231(&bParam1, 1))
				{
					Function_230(&bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIMiss"))
				{
					DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIMiss");
				}
				DECOR_SET_BOOL(&Global_54076, "SP_TW_MakeAIHitAgain", true);
				Function_228(&iParam0, 1, -1.0f);
				Function_74(&bParam1);
				SQUAD_GOALS_CLEAR(&bParam1);
				SQUAD_SET_FACTION(&iParam0, 19);
				SQUAD_SET_FACTION(&bParam1, 19);
				Function_229(&bParam1, -1.0f);
				Function_55(&bParam1, &Global_54076, 1);
				Function_54(&bParam1, &Global_54076);
				Function_40(&bParam1, &Global_54076, 4);
				return 1;
			}
		}
		bVar0++;
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(&bParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0)))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0), 3.0f))
			{
				if (!Function_231(&bParam1, 1))
				{
					Function_230(&bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!Function_231(&iParam0, 1))
				{
					Function_230(&iParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "SP_TW_MakeAIMiss"))
				{
					DECOR_REMOVE(&Global_54076, "SP_TW_MakeAIMiss");
				}
				DECOR_SET_BOOL(&Global_54076, "SP_TW_MakeAIHitAgain", true);
				Function_228(&iParam0, 1, -1.0f);
				Function_74(&bParam1);
				SQUAD_GOALS_CLEAR(&bParam1);
				SQUAD_SET_FACTION(&iParam0, 19);
				SQUAD_SET_FACTION(&bParam1, 19);
				Function_229(&bParam1, -1.0f);
				Function_55(&bParam1, &Global_54076, 1);
				Function_54(&bParam1, &Global_54076);
				Function_40(&bParam1, &Global_54076, 4);
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int Function_215(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xD277 / 53879
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_216(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_216(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xD2E2 / 53986
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float Function_217(vector3 vParam0) //Position: 0xD3E8 / 54248
{
	if (Function_219(&vParam0))
	{
		if (Function_218(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_218(int iParam0) //Position: 0xD4B5 / 54453
{
	return Function_20(iParam0, 2);
}

bool Function_219(int iParam0) //Position: 0xD4C3 / 54467
{
	return Function_20(iParam0, 1);
}

void Function_220(int iParam0) //Position: 0xD4D1 / 54481
{
	Function_221(&iParam0, 0.0f);
	return;
}

void Function_221(vector3 vParam0) //Position: 0xD4DE / 54494
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_213(&vParam0, 1);
	Function_82(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_222(int iParam0) //Position: 0xD503 / 54531
{
	if (!Function_219(&iParam0))
	{
		Function_221(&iParam0, 0.0f);
	}
	return;
}

void Function_223() //Position: 0xD51A / 54554
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "TwinRok_GunOnDaughter", "TwinRok_GunOnDaughter", false, 3, 1, 0, 1);
		Function_49(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_224() //Position: 0xD56E / 54638
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "TwinRok_SpotsPlayer", "TwinRok_SpotsPlayer", false, 3, 1, 0, 1);
		Function_49(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_225() //Position: 0xD5BD / 54717
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "TwinRok_GunPoint", "TwinRok_GunPoint", false, 1, 1, 0, 1);
		Function_49(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_226(float fParam0, bool bParam1) //Position: 0xD607 / 54791
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_227() //Position: 0xD6FC / 55036
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_SaveHer", "TwinRok_SaveHer", 3, 2, 1, 0, 1);
		Function_49(10);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_228(int iParam0, bool bParam1, int iParam2) //Position: 0xD744 / 55108
{
	bool bVar0;
	var uVar1;
	var uVar2;
	bool bVar4;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			GET_POSITION(&uVar1, &uVar2);
			bVar4 = GET_HEADING(&uVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(&uVar1, &uVar2, bVar4, &iParam2);
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_229(int iParam0, bool bParam1) //Position: 0xD7A7 / 55207
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_230(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0xD7F8 / 55288
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

bool Function_231(int iParam0, bool bParam1) //Position: 0xD908 / 55560
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_232(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xD964 / 55652
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_73(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_233(float fParam0, int iParam1) //Position: 0xD9F9 / 55801
{
	bool bVar0;
	var uVar1;
	bool bVar3;
	var uVar4;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&fParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&fParam0, bVar0)))
		{
			if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&fParam0, bVar0), &iLocal_0 + 368))
			{
				uVar1 = Vector(-2424f, 25,09814f, 2136f);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&fParam0, bVar0), &uVar1, 1, 1, 1);
			}
		}
		bVar0++;
	}
	bVar3 = false;
	while (bVar3 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar3)))
		{
			if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar3), &iLocal_0 + 368))
			{
				uVar4 = Vector(-2424f, 25,09814f, 2136f);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar3), &uVar4, 1, 1, 1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_234(var uParam0, int iParam1) //Position: 0xDAC3 / 56003
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_235(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_219(&iParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_217(&iParam1);
		}
	}
	return;
}

var Function_235(int iParam0) //Position: 0xDB06 / 56070
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

struct<8> Function_236(bool bParam0) //Position: 0xDB39 / 56121
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_237(bool bParam0) //Position: 0xDB62 / 56162
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

void Function_238(bool bParam0, bool[] bParam1) //Position: 0xDB8B / 56203
{
	iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "BackUpHorseSquad"));
	bParam1[0] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Horse01", 976, (&iLocal_0 + 1560), *(&iLocal_0 + 1560 + 12));
	SQUAD_JOIN(&(bParam1[0]), &iParam2);
	TASK_STAND_STILL(&(bParam1[0]), -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&(bParam1[0]), 3);
	bParam1[1] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Horse02", 977, *(&iLocal_0 + 1592), *(&iLocal_0 + 1592 + 12));
	SQUAD_JOIN(&(bParam1[1]), &iParam2);
	TASK_STAND_STILL(&(bParam1[1]), -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&(bParam1[1]), 3);
	return;
}

void Function_239(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xDC56 / 56406
{
	char* cVar0[32];
	
	if (Function_20(bParam4, 32))
	{
		uParam1 = Function_240(&uParam0, &uParam2, &uParam3);
	}
	cVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_65(), "$/content/scripting/gringo/simpleGringo/Locked_Footlocker", Vector(-2421,714f, 26,369f, 2122,497f), Vector(0.0f, 137,89f, 0.0f));
	SET_WEAPONENUM_LOCKED(false, 0);
	strcpy(&cVar1, "Weapon_", 32);
	straddi(&cVar1, 0, 32);
	DECOR_SET_INT(&cVar0, &cVar1, false);
}

var Function_240(bool bParam0, bool bParam1, int iParam2) //Position: 0xDCFD / 56573
{
	var uVar0;
	
	uVar0 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "twrv_insideSE");
	Function_237(FIND_OBJECT_IN_LAYOUT(&Global_46715, "twrf_SE"));
	Local_825 = Function_237(FIND_OBJECT_IN_LAYOUT(&Global_46715, "twrf_SE"));
	Function_236(FIND_OBJECT_IN_LAYOUT(&Global_46715, "twrf_SE"));
	Local_828 = Function_236(FIND_OBJECT_IN_LAYOUT(&Global_46715, "twrf_SE"));
	bLocal_792 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "PaulTheHelper", 202, Local_825, Local_828);
	MEMORY_CONSIDER_AS(&bLocal_792, &Global_54076, false);
	SET_ACTOR_FACTION(&bLocal_792, 20);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_792, false);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_792, 0.0f);
	ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_792, &uVar0);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_792, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_792, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_792, 13, 0);
	DECOR_SET_BOOL(&bLocal_792, "CanBeLasso", false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bLocal_792, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_792, false);
	SET_FACTIONS_STATUS_TWO_WAY(25, 20, 4);
	SET_ACTOR_ALLOW_DISARM(&bLocal_792, false);
	SET_CRIPPLE_ENABLE(&bLocal_792, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_792, 1);
	iLocal_831 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "HelperSquad"));
	SQUAD_JOIN(&bLocal_792, &iLocal_831);
	SQUAD_SET_FACTION(&iLocal_831, 20);
	TASK_CROUCH(&bLocal_792, -1.0f);
	FORCE_LOOK_AT_ACTOR(&bLocal_792, &Global_54076, -1.0f);
	AI_GOAL_LOOK_AT_ACTOR(&bLocal_792, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	APPEND_JOURNAL_ENTRY_DETAIL(bParam1, "TWR_Obj_ApproachHelper", 0, 0, false);
	APPEND_JOURNAL_ENTRY(bParam1, 0);
	iParam2 = CREATE_GATEWAY_IN_LAYOUT(&bParam0, Function_65(), &iLocal_0 + 248, &Global_54076, 2, 3, 0, 0, 1, 1);
	return &bLocal_792;
}

bool Function_241(struct<2>[] Param0) //Position: 0xDEB0 / 57008
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_245();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_244(&(Param0[iVar02]), 8);
		}
		else if (Function_243())
		{
			iVar1 = 1;
			Function_244(&(Param0[iVar02]), 8);
		}
		Function_244(&(Param0[iVar02]), 16);
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
				Function_244(&(Param0[iVar02]), 1);
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
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_244(&(Param0[iVar02]), 2);
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
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_244(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_244(&(Param0[iVar02]), 2);
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
	Function_242();
	return 1;
}

void Function_242() //Position: 0xE272 / 57970
{
	if (!Function_299(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_243() //Position: 0xE2B2 / 58034
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

void Function_244(struct<13> Param0) //Position: 0xE2E0 / 58080
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_245() //Position: 0xE2F3 / 58099
{
	if (!Function_299(128))
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

void Function_246() //Position: 0xE335 / 58165
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_641)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_642) - 1))
		{
			iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_642);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_247(&Global_54076, &iVar1) > 100.0f)
			{
				Function_237(&iVar1);
				Var3 = Function_237(&iVar1);
				if (!Function_20(iLocal_640, bVar2))
				{
					Function_213(&iLocal_640, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_82(&iLocal_640, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_247(var uParam0, int iParam1) //Position: 0xE3C3 / 58307
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_248(&uParam0);
			Var0 = Function_248(&uParam0);
			Function_248(&iParam1);
			Var2 = Function_248(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_248(int iParam0) //Position: 0xE460 / 58464
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_249(bool bParam0) //Position: 0xE4CE / 58574
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_306(&bParam0, 2048))
	{
		return 0;
	}
	uLocal_642 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_641 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		Function_237(&uVar1);
		Var2 = Function_237(&uVar1);
		Function_236(&uVar1);
		Var4 = Function_236(&uVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_642);
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

int Function_250(char* cParam0) //Position: 0xE5F8 / 58872
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			*(&Global_99485[iVar019] + 64) = &iParam1;
			Global_99485[iVar019].f_72 = fParam2;
			Global_99485[iVar019].f_76 = iParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_251() //Position: 0xE685 / 59013
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		Global_99485[iVar019].f_76 = 0;
		strcpy(&Global_99485[iVar019] + 84, "", 32);
		Global_99485[iVar019].f_72 = 1.0f;
		(&Global_99485[iVar019] + 64) = "";
		strcpy(&(Global_99485[iVar019]), "", 32);
		Global_99485[iVar019].f_80 = 0;
		Global_99485[iVar019].f_148 = 0;
		iVar0++;
	}
	return;
}

int Function_252() //Position: 0xE6F7 / 59127
{
	int iVar0;
	var uVar1;
	
	if ((!Function_143(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_138(&Global_54076, 16, 1, 0);
	}
	AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	uLocal_865 = CREATE_LAYOUT("TwinRocks_AALayout");
	Function_260(&uLocal_865, &iLocal_885, &iLocal_887);
	Function_258(&iLocal_908);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 184);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 184);
	bLocal_907 = CREATE_JOURNAL_ENTRY("TwinRocksJournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_907, 0);
	uLocal_897 = Function_256("ntwinRocks", "waterWheel", 1);
	Function_255(&uLocal_897, 1);
	uLocal_899 = Function_256("ntwinRocks", "waterWheel", 2);
	Function_255(&uLocal_899, 1);
	iLocal_990 = 0;
	bLocal_1011 = false;
	if (Function_77(Global_46948) == 0)
	{
		Function_213(&bLocal_1011, 32);
		DECOR_SET_BOOL(&Global_54076, "RunningFTE", true);
	}
	if (Function_77(Global_46948) >= 0)
	{
		Function_213(&bLocal_1011, 0x10000000);
	}
	Function_163(Global_46948, 1);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!Function_18(&(Global_11120[iVar02]), 2) || Function_18(&(Global_11120[iVar02]), 4))
		{
			bLocal_1027 = true;
		}
		iVar0++;
	}
	if (!bLocal_1027)
	{
		uVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_01");
		SC_CHALLENGE_LAUNCH(&uVar1);
		if (!Function_219(&iLocal_991))
		{
			Function_222(&iLocal_991);
		}
		else
		{
			Function_220(&iLocal_991);
		}
	}
	Function_253(32768);
	return 1;
}

void Function_253(int iParam0) //Position: 0xE8C7 / 59591
{
	Function_254(&Global_43580, iParam0);
	return;
}

void Function_254(var uParam0, int iParam1) //Position: 0xE8D5 / 59605
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_255(var uParam0, int iParam1) //Position: 0xE8FD / 59645
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

int Function_256(var uParam0, var uParam1, int iParam2) //Position: 0xE958 / 59736
{
	return Function_257(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_257(int iParam0, char* cParam1, bool bParam3) //Position: 0xE96C / 59756
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

void Function_258(int iParam0) //Position: 0xEA11 / 59921
{
	Function_259(&iParam0, 486, 3, 1);
	Function_259(&iParam0, 487, 3, 1);
	Function_259(&iParam0, 488, 3, 1);
	Function_259(&iParam0, 489, 3, 1);
	Function_259(&iParam0, 490, 3, 1);
	Function_259(&iParam0, 491, 3, 1);
	Function_259(&iParam0, 492, 3, 1);
	Function_259(&iParam0, 493, 3, 1);
	Function_259(&iParam0, 976, 3, 1);
	Function_259(&iParam0, 977, 3, 1);
	Function_259(&iParam0, 202, 3, 1);
	Function_314(&iParam0, "alerted", 5, 0);
	Function_314(&iParam0, "custom/alerted", 8, 0);
	Function_314(&iParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_314(&iParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_314(&iParam0, "action_areas", 10, 0);
	Function_314(&iParam0, "custom/AA_twin_rocks_hostage", 8, 0);
	Function_314(&iParam0, "AA_twin_rocks_hostage", 5, 0);
	Function_314(&iParam0, "twin_rocks_dad", 1, 0);
	Function_259(&iParam0, 1128, 3, 1);
	return;
}

var Function_259(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEB9B / 60315
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_244(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_244(&(Param0[iVar02]), 8);
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

void Function_260(var uParam0, var uParam1, int iParam2) //Position: 0xEC77 / 60535
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	
	uParam1 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TWR_PopSquad"));
	iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TWR_sniSquad"));
	iVar1 = 0;
	while (iVar1 < 5)
	{
		uVar0 = Function_263(&Global_11120, &Global_12954, iVar1, 0, 0, 1);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (GET_ACTOR_ENUM(&uVar0) == 491)
			{
				bLocal_790 = &uVar0;
			}
			MEMORY_REPORT_POSITION_AUTO(&uVar0, &Global_54076, true);
			if (iVar1 == 4)
			{
				SET_ACTOR_VISION_MAX_RANGE(&uVar0, 80.0f, 1);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar0, 275.0f);
				AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar0, 120.0f);
				AI_SET_WEAPON_MAX_RANGE(&uVar0, 65.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
				GIVE_WEAPON_TO_ACTOR(&uVar0, 8, 1.0f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&uVar0, 8, 1);
				SET_ACTOR_ALLOW_DISARM(&uVar0, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar0, 20.0f);
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar0, &iLocal_0 + 136, 4, true);
				SET_CRIPPLE_ENABLE(&uVar0, 0);
				MEMORY_CONSIDER_AS(&uVar0, &Global_54076, 2);
				MEMORY_REPORT_POSITION_AUTO(&uVar0, &Global_54076, true);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
				SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uVar0, 96, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uVar0, 98, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&uVar0, 0);
				uVar2 = Vector(-2413,103f, 33,916f, 2172,722f);
				TASK_FACE_ACTOR(&uVar0, &Global_54076, 1, 3212836864);
				SQUAD_JOIN(&uVar0, &iParam2);
			}
			else if (iVar1 == 5)
			{
				SET_ACTOR_VISION_MAX_RANGE(&uVar0, 80.0f, 1);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar0, 275.0f);
				AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar0, 120.0f);
				AI_SET_WEAPON_MAX_RANGE(&uVar0, 65.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
				GIVE_WEAPON_TO_ACTOR(&uVar0, 8, 1.0f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&uVar0, 8, 1);
				SET_ACTOR_ALLOW_DISARM(&uVar0, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar0, 20.0f);
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar0, &iLocal_0 + 144, 4, true);
				SET_CRIPPLE_ENABLE(&uVar0, 0);
				MEMORY_CONSIDER_AS(&uVar0, &Global_54076, 2);
				MEMORY_REPORT_POSITION_AUTO(&uVar0, &Global_54076, true);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uVar0, 96, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uVar0, 98, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&uVar0, 0);
				uVar4 = Vector(-2449,763f, 33,515f, 2126,952f);
				TASK_FACE_ACTOR(&uVar0, &Global_54076, 1, 3212836864);
				SQUAD_JOIN(&uVar0, &iParam2);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iParam2, 0);
				SQUAD_SET_FACTION(&iParam2, 19);
				Function_55(&iParam2, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TwinRocks_AALayout"), "PaulTheHelper"), 0);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam2, 690856);
			}
			else
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 2, false);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 3, false);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 36, 0.0f);
				Function_262(&uVar0, 50.0f, 2.0f, 2.0f);
				SQUAD_JOIN(&uVar0, &uParam1);
				SET_CRIPPLE_ENABLE(&uVar0, 0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar0, &iLocal_0 + 72, 4, true);
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&uParam1, 0, &iLocal_0 + 312, 4, 1);
				SQUAD_SET_FACTION(&uParam1, 19);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam1, 690856);
			}
		}
		iVar1++;
	}
	Function_261(&uParam1, &iLocal_0 + 152, 1, 1);
	return;
}

void Function_261(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xEF9C / 61340
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_262(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xEFF4 / 61428
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

var Function_263(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xF045 / 61509
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_18(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_18(&(Param0[iVar02]), 2))
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
			if (!Function_18(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_16(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_265(StackVal, &Global_10996, Function_65(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_18(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_16(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_16(&(Param0[iVar02]), 1);
	Function_264(&vParam1[iVar03] + 16, 1);
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

int Function_264(int iParam0, bool bParam1) //Position: 0xF20C / 61964
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

var Function_265(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xF2BE / 62142
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_65(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

int Function_266(int iParam0, bool bParam1) //Position: 0xF3E5 / 62437
{
	int iVar0;
	
	iVar0 = Function_129(iParam0);
	if (!Function_26(iVar0))
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

bool Function_267(int iParam0) //Position: 0xF423 / 62499
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_306(&(Global_43791[iParam0]), 2048);
}

void Function_268(char* cParam0) //Position: 0xF441 / 62529
{
	if (!Function_299(128))
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

void Function_269(int iParam0, bool bParam1) //Position: 0xF481 / 62593
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
		Function_270(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_270(var uParam0, int iParam1) //Position: 0xF571 / 62833
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_271(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xF57E / 62846
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
	Global_40000.f_8 = uParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &uParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_272();
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

void Function_272() //Position: 0xF66C / 63084
{
	int iVar0;
	
	Global_41176 = Function_273(StackVal);
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

int Function_273(int iParam0) //Position: 0xF6BA / 63162
{
	if (!Function_274(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_274(int iParam0) //Position: 0xF6D2 / 63186
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_275(bool bParam0) //Position: 0xF6E7 / 63207
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_276(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0xF6FA / 63226
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
		Function_277();
	}
	if (&bParam5)
	{
		Function_35(1048576);
	}
}

void Function_277() //Position: 0xF808 / 63496
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_35(16384);
	}
	return;
}

bool Function_278(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0xF824 / 63524
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_306(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_266(49, 0))
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

int Function_279(int iParam0) //Position: 0xF8E2 / 63714
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_280(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0xF8FC / 63740
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_299(2))
	{
		return;
	}
	if (Function_306(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_281(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_1(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_310(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_281(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0xF9B4 / 63924
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_306(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
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
		(&iParam1 + 16) = Function_265(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_68(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_282(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_282(int iParam0, struct<2> Param1) //Position: 0xFB35 / 64309
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_68(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_68(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_68(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_68(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_68(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_68(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_283(var uParam0, var uParam1, int iParam2) //Position: 0xFC7B / 64635
{
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_289(uParam0, &uParam1, &iParam2);
		Function_288(uParam0, &uParam1, &iParam2);
		Function_287(uParam0, &uParam1, &iParam2);
		Function_286(uParam0, &uParam1, &iParam2);
		Function_285(uParam0, &uParam1, &iParam2);
		Function_284(uParam0, &uParam1, &iParam2);
	}
	return;
}

void Function_284(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xFD23 / 64803
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_285(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xFD8A / 64906
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_286(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xFDF3 / 65011
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

void Function_287(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xFE5E / 65118
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

void Function_288(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xFEC4 / 65220
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

void Function_289(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xFF2D / 65325
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_290(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xFFA0 / 65440
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

void Function_291(var uParam0, float fParam1, struct<2> Param2) //Position: 0x10000 / 65536
{
	if (Function_68(StackVal, Param2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_298(StackVal, uParam0, &fParam1, Param2);
		Function_297(StackVal, uParam0, &fParam1, Param2);
		Function_296(StackVal, uParam0, &fParam1, Param2);
		Function_295(StackVal, uParam0, &fParam1, Param2);
		Function_294(StackVal, uParam0, &fParam1, Param2);
		Function_292(StackVal, uParam0, &fParam1, Param2);
	}
}

void Function_292(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x100B0 / 65712
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_293(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_293(struct<2> Param0, struct<2> Param2) //Position: 0x10117 / 65815
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_294(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x10143 / 65859
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_293(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_295(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x101AC / 65964
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_293(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_296(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x10217 / 66071
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_293(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_297(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x1027D / 66173
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_293(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_298(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x102E6 / 66278
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_293(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_299(int iParam0) //Position: 0x1034A / 66378
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_300(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10366 / 66406
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_304(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_301(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_301(bParam0, bParam1, bParam2, 4294967295);
}

int Function_301(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x103C4 / 66500
{
	var uVar0;
	
	if (!Function_303(bParam2))
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
	uVar0 = Function_304(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_302(uVar0);
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

var Function_302(int iParam0) //Position: 0x10528 / 66856
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

bool Function_303(int iParam0) //Position: 0x10566 / 66918
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_304(int iParam0, int iParam1, int iParam2) //Position: 0x1057B / 66939
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_305(int iParam0) //Position: 0x1059B / 66971
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_306(&(Global_43791[iParam0]), 4);
}

bool Function_306(var uParam0, int iParam1) //Position: 0x105B7 / 66999
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_307(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x105D4 / 67028
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
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_306(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_18(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_18(&(Param0[iVar02]), 8))
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

int Function_308() //Position: 0x106BD / 67261
{
	return 0;
}

void Function_309(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x106C4 / 67268
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
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_306(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_310(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_16(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_16(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_310(var uParam0, int iParam1) //Position: 0x107B4 / 67508
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_311() //Position: 0x107C5 / 67525
{
	var uVar0;
	
	Function_312(3, 3);
	uVar0 = &uVar0;
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_player", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_e_any", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_314(&iLocal_442 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	if (!Function_241(&iLocal_442 + 8))
	{
		return 0;
	}
	iLocal_442 = FIND_NAMED_LAYOUT("TwinRocks_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_442))
	{
		iLocal_442 = CREATE_LAYOUT("TwinRocks_layout");
	}
	*(&iLocal_442 + 352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_lean_rail", "lean_rail_nospawn", Vector(-2417,08f, 29,25764f, 2139,718f), Vector(0.0f, 95,92577f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 352), 0);
	*(&iLocal_442 + 360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_idle_stand", "rand_idle_stand_nospawn", Vector(-2416,589f, 29,27306f, 2138,261f), Vector(0.0f, 93,32034f, 0.0f));
	*(&iLocal_442 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_idle_wall", "Rand_Idle_NearWall_nospawn", Vector(-2425,122f, 25,51441f, 2127,85f), Vector(0.0f, 92,24918f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 368), 0);
	*(&iLocal_442 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_smoke_stand", "smoking_stand_nospawn", Vector(-2422,03f, 25,09814f, 2137,97f), Vector(0.0f, 102,7607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 376), 0);
	*(&iLocal_442 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_pee", "Pee_nospawn", Vector(-2432f, 25,09812f, 2119,138f), Vector(0.0f, -0,6721768f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 384), 0);
	*(&iLocal_442 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_idle_stand1", "rand_idle_stand_nospawn", Vector(-2432f, 23,70054f, 2152f), Vector(0.0f, 131,5245f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 392), 0);
	*(&iLocal_442 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_idle_wall1", "Rand_Idle_NearWall_nospawn", Vector(-2417,589f, 25,09811f, 2142,767f), Vector(0.0f, 96,66019f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 400), 0);
	*(&iLocal_442 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_smoke_stand1", "smoking_stand_nospawn", Vector(-2436f, 24,08591f, 2148,066f), Vector(0.0f, 137,6552f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 408), 0);
	*(&iLocal_442 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_pee1", "Pee_nospawn", Vector(-2404,851f, 25,54744f, 2163,396f), Vector(0.0f, -172,968f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 416), 0);
	*(&iLocal_442 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sit_ground2", "Rand_Idle_Sit_Ground_nospawn", Vector(-2426,876f, 24,24585f, 2152,327f), Vector(0.0f, 22,87328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 424), 0);
	*(&iLocal_442 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sit_ground3", "Rand_Idle_Sit_Ground_nospawn", Vector(-2426,943f, 24,22677f, 2150,896f), Vector(0.0f, -223,5427f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 432), 0);
	*(&iLocal_442 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_lean_rail2", "lean_rail_nospawn", Vector(-2433,635f, 24,64219f, 2143,568f), Vector(0.0f, 270,4292f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 440), 0);
	*(&iLocal_442 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_idle_wall3", "Rand_Idle_NearWall_nospawn", Vector(-2437,553f, 24,59615f, 2120,173f), Vector(0.0f, -132,4293f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 448), 0);
	*(&iLocal_442 + 456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sleeping1", "sleeping_scripted", Vector(-2411,451f, 26,28179f, 2131,162f), Vector(0.0f, -84,87863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 456), 0);
	*(&iLocal_442 + 464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sleeping4", "sleeping_scripted", Vector(-2421,473f, 24,91328f, 2152,267f), Vector(0.0f, 28,90888f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 464), 0);
	*(&iLocal_442 + 472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sleeping5", "sleeping_scripted", Vector(-2423,019f, 24,71925f, 2152,865f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 472), 0);
	*(&iLocal_442 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sleeping6", "sleeping_scripted", Vector(-2421,477f, 24,91271f, 2149,501f), Vector(0.0f, -197,9254f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 480), 0);
	*(&iLocal_442 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sleeping7", "sleeping_scripted", Vector(-2425,189f, 24,44694f, 2150,294f), Vector(0.0f, -89,37318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 488), 0);
	*(&iLocal_442 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "rand_stand01", "rand_idle_stand_nospawn", Vector(-2421,92f, 25,09813f, 2138,628f), Vector(0.0f, 97,50497f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 496), 0);
	*(&iLocal_442 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "rand_stand02", "rand_idle_stand_nospawn", Vector(-2435,277f, 24,02687f, 2148,684f), Vector(0.0f, 126,4945f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 504), 0);
	*(&iLocal_442 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "rand_stand03", "rand_idle_stand_nospawn", Vector(-2439,742f, 24,09418f, 2142,048f), Vector(0.0f, -284,7104f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 512), 0);
	*(&iLocal_442 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "rand_stand04", "rand_idle_stand_nospawn", Vector(-2432,033f, 24,98849f, 2129,763f), Vector(0.0f, -209,3616f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 520), 0);
	*(&iLocal_442 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "stand_smoke01", "smoking_stand_nospawn", Vector(-2427,634f, 24,65965f, 2142,002f), Vector(0.0f, -284,674f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 528), 0);
	*(&iLocal_442 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "stand_smoke02", "smoking_stand_nospawn", Vector(-2430,901f, 24,49936f, 2147,353f), Vector(0.0f, 95,87056f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 536), 0);
	*(&iLocal_442 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "sit_ground02", "Rand_Idle_Sit_Ground_nospawn", Vector(-2424,629f, 25,09812f, 2136,372f), Vector(0.0f, 65,6116f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 544), 0);
	*(&iLocal_442 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "sit_headinhands01", "sit_headinhands_n_any", Vector(-2413,979f, 25,50912f, 2142,244f), Vector(0.0f, 184,7458f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 552), 0);
	*(&iLocal_442 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_pee2", "stand_peeing_b_any", Vector(-2410,571f, 25,81554f, 2140,179f), Vector(0.0f, 89,34084f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 560), 0);
	*(&iLocal_442 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_pee3", "stand_peeing_b_any", Vector(-2420,88f, 25,65847f, 2120,983f), Vector(0.0f, 194,0388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 568), 0);
	*(&iLocal_442 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_drunkdance01", "Rand_Idle_Sit_Ground_Player", Vector(-2431,176f, 24,63136f, 2138,635f), Vector(0.0f, 83,15812f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 576), 0);
	*(&iLocal_442 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_guntricks01", "stand_guntricks_e_any", Vector(-2436,83f, 24,47668f, 2136,253f), Vector(0.0f, -123,1825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 584), 0);
	*(&iLocal_442 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_guntricks02", "stand_guntricks_e_any", Vector(-2422,137f, 24,88736f, 2145,615f), Vector(0.0f, -282,3506f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 592), 0);
	*(&iLocal_442 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_vomit01", "stand_kneelvomit_n_any", Vector(-2413,439f, 25,90355f, 2133,169f), Vector(0.0f, -441,4828f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 600), 0);
	*(&iLocal_442 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_vomit02", "stand_kneelvomit_n_any", Vector(-2439,348f, 24,38526f, 2124,119f), Vector(0.0f, -316,5172f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 608), 0);
	*(&iLocal_442 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_vomit03", "stand_kneelvomit_n_any", Vector(-2445,276f, 23,87263f, 2141,015f), Vector(0.0f, -250,1961f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 616), 0);
	*(&iLocal_442 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_fiddle01", "stand_fiddle_w_fiddle", Vector(-2433,15f, 24,59706f, 2141,245f), Vector(0.0f, -334,2941f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 624), 0);
	*(&iLocal_442 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_drunkdance02", "stand_drunkdancing_e_any", Vector(-2437,106f, 24,48163f, 2137,79f), Vector(0.0f, -101,4756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 632), 0);
	*(&iLocal_442 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_cleanknife01", "Rand_Idle_NearWall", Vector(-2423,963f, 25,58489f, 2129,365f), Vector(0.0f, 144,4136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 640), 0);
	*(&iLocal_442 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_spitting01", "stand_spit", Vector(-2428,584f, 25,10488f, 2131,163f), Vector(0.0f, 145,7444f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 648), 0);
	*(&iLocal_442 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_spitting02", "stand_spit", Vector(-2423,614f, 24,76004f, 2143,606f), Vector(0.0f, 102,6893f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 656), 0);
	*(&iLocal_442 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_cleanrifle02", "sit_cleanrifle", Vector(-2415,203f, 29,27107f, 2135,098f), Vector(0.0f, 98,8722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 664), 0);
	*(&iLocal_442 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_idle_wall4", "Rand_Idle_NearWall_nospawn", Vector(-2419,507f, 25,57293f, 2136,636f), Vector(0.0f, 96,24638f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 672), 0);
	*(&iLocal_442 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_throwbottle01", "stand_drunk_throwbottle", Vector(-2433,172f, 24,59612f, 2135,253f), Vector(0.0f, 166,7328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 680), 0);
	*(&iLocal_442 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_throwbottle02", "stand_drunk_throwbottle", Vector(-2431,825f, 24,59614f, 2140,367f), Vector(0.0f, 47,20457f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 688), 0);
	*(&iLocal_442 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_rowdydrink01", "stand_drunk_rowdydrink", Vector(-2431,238f, 24,61661f, 2137,398f), Vector(0.0f, 109,2459f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 696), 0);
	*(&iLocal_442 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_rowdydrink02", "stand_drunk_rowdydrink", Vector(-2434,293f, 24,59612f, 2135,234f), Vector(0.0f, 180,7316f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 704), 0);
	*(&iLocal_442 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_throwbottle03", "stand_drunk_throwbottle", Vector(-2436,357f, 24,2992f, 2140,472f), Vector(0.0f, -55,07765f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 712), 0);
	*(&iLocal_442 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_horsestay01", "horse_stay", Vector(-2414,191f, 25,32519f, 2145,656f), Vector(0.0f, 9,537602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 720), 0);
	*(&iLocal_442 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_horsestay02", "horse_stay", Vector(-2412,374f, 25,55319f, 2145,418f), Vector(0.0f, 9,537602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 728), 0);
	*(&iLocal_442 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_horsestay03", "horse_stay", Vector(-2410,277f, 25,7097f, 2143,853f), Vector(0.0f, 74,81305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 736), 0);
	*(&iLocal_442 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sniperpoint01", "rand_idle_stand_nospawn", Vector(-2414,811f, 34,77847f, 2168,892f), Vector(0.0f, 48,31993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 744), 0);
	*(&iLocal_442 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sniperpoint02", "stand_lookdistance_w_any", Vector(-2415,796f, 34,23021f, 2170,121f), Vector(0.0f, 101,3429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 752), 0);
	*(&iLocal_442 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sniperpoint03", "stand_peeing_b_any", Vector(-2414,117f, 34,48881f, 2167,697f), Vector(0.0f, -1,905433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 760), 0);
	*(&iLocal_442 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sniperpoint04", "stand_lookdistance_w_any", Vector(-2448,781f, 34,00343f, 2128,915f), Vector(0.0f, -124,5028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 768), 0);
	*(&iLocal_442 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sniperpoint05", "rand_idle_stand_nospawn", Vector(-2450,439f, 33,28379f, 2129,468f), Vector(0.0f, -234,5678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 776), 0);
	*(&iLocal_442 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_442, "twr_sniperpoint06", "rand_idle_stand_nospawn", Vector(-2447,737f, 34,23936f, 2126,956f), Vector(0.0f, -24,91837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_442 + 784), 0);
	return 1;
}

void Function_312(int iParam0, int iParam1) //Position: 0x1222C / 74284
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

bool Function_313() //Position: 0x12276 / 74358
{
	var uVar0;
	
	Function_312(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("TwinRocks_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("TwinRocks_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_startIfInside", 4,203895E-45f, Vector(-2424,77f, 24,70359f, 2138,906f), Vector(0.0f, -1,405939f, 0.0f), Vector(21,16832f, 21,16832f, 29,48437f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_playerHostage", 2,802597E-45f, Vector(-2425,156f, 27,32852f, 2121,311f), Vector(0.0f, -41,46164f, 0.0f), Vector(3,663551f, 1,32575f, 4,390277f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_playerGone", 2,802597E-45f, Vector(-2424,997f, 27,14761f, 2121,461f), Vector(0.0f, -41,59802f, 0.0f), Vector(4,766919f, 1.0f, 4,480235f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_insideNE", 4,203895E-45f, Vector(-2391,11f, 27,9995f, 2138,188f), Vector(0.0f, 20.0f, 0.0f), Vector(1,843063f, 1,843063f, 1,843063f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_insideNW", 4,203895E-45f, Vector(-2425,085f, 26,01419f, 2094,323f), Vector(0.0f, 20.0f, 0.0f), Vector(2,300132f, 2,300132f, 2,300132f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_insideSW", 4,203895E-45f, Vector(-2468,507f, 23,49398f, 2156,39f), Vector(0.0f, 20.0f, 0.0f), Vector(1,607766f, 1,607766f, 1,607766f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_insideSE", 4,203895E-45f, Vector(-2458,034f, 24,98236f, 2179,923f), Vector(0.0f, 20.0f, 0.0f), Vector(1,64051f, 2,212744f, 1,64051f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_defend0", 4,203895E-45f, Vector(-2425,721f, 26,73627f, 2129,188f), Vector(0.0f, 20.0f, 0.0f), Vector(4,757625f, 3,1545f, 4,757625f));
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_AAPop_StayIn", 4,203895E-45f, Vector(-2425,664f, 25,09808f, 2136,552f), Vector(0.0f, 20.0f, 0.0f), Vector(20,90794f, 10,83597f, 20,5029f));
	*(&iLocal_0 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_noContext", 2,802597E-45f, Vector(-2428f, 41,08049f, 2136f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_NECover", 2,802597E-45f, Vector(-2408,585f, 25,63184f, 2151,019f), Vector(0.0f, 0.0f, 0.0f), Vector(7,245131f, 7,245131f, 7,245131f));
	*(&iLocal_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_SECover", 2,802597E-45f, Vector(-2436f, 23,30142f, 2156f), Vector(0.0f, 0.0f, 0.0f), Vector(7,260628f, 7,260628f, 7,260628f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_SWCover", 2,802597E-45f, Vector(-2448f, 23,59218f, 2136f), Vector(0.0f, 0.0f, 0.0f), Vector(5,256177f, 5,256177f, 5,256177f));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_NWCover", 2,802597E-45f, Vector(-2439,097f, 25,23815f, 2120,293f), Vector(0.0f, 0.0f, 0.0f), Vector(4,840513f, 4,840513f, 4,840513f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_insideAtHouse", 2,802597E-45f, Vector(-2422,478f, 26,01454f, 2130,493f), Vector(0.0f, 46,30294f, 0.0f), Vector(6,610272f, 6,610272f, 6,610272f));
	*(&iLocal_0 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_outside", 2,802597E-45f, Vector(-2428f, 25,09806f, 2134,43f), Vector(0.0f, 47,17339f, 0.0f), Vector(13,13842f, 13,13842f, 13,13842f));
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_sniperIn1", 2,802597E-45f, Vector(-2413,921f, 34,68375f, 2170,171f), Vector(0.0f, -52,48075f, 0.0f), Vector(3,682513f, 4,87992f, 2,857668f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_sniperIn2", 2,802597E-45f, Vector(-2450,04f, 33,43279f, 2127,038f), Vector(0.0f, 0.0f, 0.0f), Vector(3,836874f, 6,214174f, 3,836874f));
	*(&iLocal_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "twrv_AllStayIn", 4,203895E-45f, Vector(-2424,932f, 25,09806f, 2136f), Vector(0.0f, 20.0f, 0.0f), Vector(21,05392f, 8,696665f, 21,05392f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_inHouse", 2,802597E-45f, Vector(-2420,461f, 26,31637f, 2128,305f), Vector(0.0f, -39,93395f, 0.0f), Vector(6,295712f, 3,945423f, 3,945423f));
	*(&iLocal_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_increaseAccuracy01", 4,203895E-45f, Vector(-2412,738f, 24,70359f, 2169,182f), Vector(0.0f, -1,405939f, 0.0f), Vector(40.0f, 40.0f, 40.0f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_increaseAccuracy02", 4,203895E-45f, Vector(-2449,806f, 24,70359f, 2126,486f), Vector(0.0f, -1,405939f, 0.0f), Vector(40.0f, 40.0f, 40.0f));
	*(&iLocal_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_ambientExclusion", 4,203895E-45f, Vector(-2442,339f, 24,70359f, 2146,239f), Vector(0.0f, 21,42772f, 0.0f), Vector(46,13355f, 24,36923f, 39,73418f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_helperDefend", 2,802597E-45f, Vector(-2426,721f, 26,64913f, 2147,579f), Vector(0.0f, -49,28769f, 0.0f), Vector(20,30862f, 11,43634f, 12,54138f));
	*(&iLocal_0 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_goToVolume", 2,802597E-45f, Vector(-2375,531f, 18,82449f, 2387,793f), Vector(0.0f, 13,55116f, 0.0f), Vector(16,53381f, 16,53381f, 16,53381f));
	*(&iLocal_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_bossDefend", 2,802597E-45f, Vector(-2428,562f, 25,60002f, 2134,382f), Vector(0.0f, -40,35624f, 0.0f), Vector(14,84048f, 9,778772f, 10,84047f));
	*(&iLocal_0 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_bossLeave", 2,802597E-45f, Vector(-2419,536f, 26,43932f, 2127,593f), Vector(0.0f, -42,5021f, 0.0f), Vector(8,084139f, 11,21915f, 7,601983f));
	*(&iLocal_0 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_CaptiveVolume", 2,802597E-45f, Vector(-2423,063f, 25,35552f, 2125,73f), Vector(0.0f, -45,44161f, 0.0f), Vector(20,37519f, 20,37519f, 20,37519f));
	*(&iLocal_0 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_introCutscene", 4,203895E-45f, Vector(-2428,428f, 24,09415f, 2143,441f), Vector(0.0f, 20.0f, 0.0f), Vector(80,69596f, 47,86263f, 80,69596f));
	*(&iLocal_0 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_hostageCheck", 2,802597E-45f, Vector(-2422,615f, 27,84133f, 2123,548f), Vector(0.0f, -41,46164f, 0.0f), Vector(11,74823f, 4,04835f, 4,390277f));
	*(&iLocal_0 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_introGateway", 2,802597E-45f, Vector(-2459,499f, 25,21739f, 2179,441f), Vector(0.0f, -29,22804f, 0.0f), Vector(4.0f, 1,589975f, 5.0f));
	*(&iLocal_0 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_hostageCheck1", 2,802597E-45f, Vector(-2419,492f, 28,0698f, 2127,759f), Vector(0.0f, -42,18689f, 0.0f), Vector(6,285384f, 4,04835f, 6,354834f));
	*(&iLocal_0 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_SouthIntro01", 2,802597E-45f, Vector(-2464,68f, 24,59606f, 2169,153f), Vector(0.0f, 36,39305f, 0.0f), Vector(28,81783f, 36,02772f, 128,2845f));
	*(&iLocal_0 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_SouthIntro02", 2,802597E-45f, Vector(-2405,233f, 24,59606f, 2212,056f), Vector(0.0f, 97,56844f, 0.0f), Vector(33,00533f, 36,02772f, 99,89085f));
	*(&iLocal_0 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_EastIntro01", 2,802597E-45f, Vector(-2379,134f, 24,59606f, 2135,963f), Vector(0.0f, 2,731998f, 0.0f), Vector(37,22339f, 36,02772f, 107,3003f));
	*(&iLocal_0 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_EastIntro02", 2,802597E-45f, Vector(-2436,699f, 24,59606f, 2092,788f), Vector(0.0f, 99,46292f, 0.0f), Vector(24,0576f, 36,02772f, 107,3003f));
	*(&iLocal_0 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_badGuyStayIn", 2,802597E-45f, Vector(-2425,156f, 28,12282f, 2121,311f), Vector(0.0f, -41,46164f, 0.0f), Vector(3,663551f, 3,818717f, 4,390277f));
	*(&iLocal_0 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_AreaVoltures", 2,802597E-45f, Vector(-2428f, 39,70816f, 2136f), Vector(0.0f, 0.0f, 0.0f), Vector(5,237462f, 3,794167f, 5,153186f));
	*(&iLocal_0 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_stayOut", 2,802597E-45f, Vector(-2435,712f, 23,06507f, 2157,581f), Vector(0.0f, -50,04866f, 0.0f), Vector(4,56872f, 6,379158f, 3,617371f));
	*(&iLocal_0 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TeleportJohn", 2,802597E-45f, Vector(-2424,206f, 27,43518f, 2122,424f), Vector(0.0f, -41,66864f, 0.0f), Vector(6,026509f, 4,596425f, 3,731507f));
	*(&iLocal_0 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_JohnInCover", 2,802597E-45f, Vector(-2422,419f, 26,15865f, 2126,488f), Vector(0.0f, -37,69411f, 0.0f), Vector(2,4035f, 6,173452f, 2,29321f));
	*(&iLocal_0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_dadCheckVolume", 2,802597E-45f, Vector(-2419,492f, 28,0698f, 2127,759f), Vector(0.0f, -42,18689f, 0.0f), Vector(7,590724f, 4,04835f, 6,376594f));
	*(&iLocal_0 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_StartSecondTime", 4,203895E-45f, Vector(-2425,664f, 25,09808f, 2136,552f), Vector(0.0f, 20.0f, 0.0f), Vector(80,15094f, 40,23622f, 76,13154f));
	*(&iLocal_0 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_CheckPlayerHorse", 2,802597E-45f, Vector(-2458,499f, 24,37643f, 2180,779f), Vector(0.0f, 0.0f, 0.0f), Vector(11,97241f, 9,523415f, 10,66033f));
	*(&iLocal_0 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_PrintObjective", 4,203895E-45f, Vector(-2425,664f, 25,09808f, 2136,552f), Vector(0.0f, 20.0f, 0.0f), Vector(109,6142f, 55,02696f, 104,1173f));
	*(&iLocal_0 + 368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_EmergencyTeleport", 2,802597E-45f, Vector(-2415,45f, 24,75954f, 2137,849f), Vector(0.0f, 8,799473f, 0.0f), Vector(5,864594f, 8,704858f, 6,197705f));
	*(&iLocal_0 + 376) = Vector(-2416.0f, 25,95819f, 2132f);
	*(&iLocal_0 + 376 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag1", Vector(-2416.0f, 25,95819f, 2132f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 408) = Vector(-2440f, 24,09419f, 2144f);
	*(&iLocal_0 + 408 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag2", Vector(-2440f, 24,09419f, 2144f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 440) = Vector(-2424f, 24,59612f, 2152f);
	*(&iLocal_0 + 440 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag3", Vector(-2424f, 24,59612f, 2152f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 472) = Vector(-2428f, 25,35552f, 2124f);
	*(&iLocal_0 + 472 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag4", Vector(-2428f, 25,35552f, 2124f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 504) = Vector(-2419,69f, 26,16577f, 2127,82f);
	*(&iLocal_0 + 504 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag5", Vector(-2419,69f, 26,16577f, 2127,82f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 536) = Vector(-2420,193f, 31,69309f, 2126,187f);
	*(&iLocal_0 + 536 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag6", Vector(-2420,193f, 31,69309f, 2126,187f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 568) = Vector(-2412f, 25,60009f, 2148f);
	*(&iLocal_0 + 568 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag7", Vector(-2412f, 25,60009f, 2148f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 600) = Vector(-2436f, 24,59611f, 2124f);
	*(&iLocal_0 + 600 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntwr_flag8", Vector(-2436f, 24,59611f, 2124f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 632) = Vector(-2414,56f, 25,67141f, 2140,677f);
	*(&iLocal_0 + 632 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twr_flag_bunk", Vector(-2414,56f, 25,67141f, 2140,677f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 664) = Vector(-2419,363f, 26,16577f, 2127,667f);
	*(&iLocal_0 + 664 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twr_flag_main", Vector(-2419,363f, 26,16577f, 2127,667f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 696) = Vector(-2434,085f, 24,48753f, 2138,383f);
	*(&iLocal_0 + 696 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twr_flag_campfire01", Vector(-2434,085f, 24,48753f, 2138,383f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 728) = Vector(-2425,085f, 26,01419f, 2094,323f);
	*(&iLocal_0 + 728 + 12) = Vector(0.0f, 151,3309f, 0.0f);
	*(&iLocal_0 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twrf_NW", Vector(-2425,085f, 26,01419f, 2094,323f), Vector(0.0f, 151,3309f, 0.0f));
	*(&iLocal_0 + 760) = Vector(-2390,927f, 27,9995f, 2138,165f);
	*(&iLocal_0 + 760 + 12) = Vector(0.0f, 100,5624f, 0.0f);
	*(&iLocal_0 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twrf_NE", Vector(-2390,927f, 27,9995f, 2138,165f), Vector(0.0f, 100,5624f, 0.0f));
	*(&iLocal_0 + 792) = Vector(-2468,637f, 23,24159f, 2156,346f);
	*(&iLocal_0 + 792 + 12) = Vector(0.0f, -88,12041f, 0.0f);
	*(&iLocal_0 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twrf_SW", Vector(-2468,637f, 23,24159f, 2156,346f), Vector(0.0f, -88,12041f, 0.0f));
	*(&iLocal_0 + 824) = Vector(-2458,054f, 24,59613f, 2179,722f);
	*(&iLocal_0 + 824 + 12) = Vector(0.0f, 107,4797f, 0.0f);
	*(&iLocal_0 + 848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twrf_SE", Vector(-2458,054f, 24,59613f, 2179,722f), Vector(0.0f, 107,4797f, 0.0f));
	*(&iLocal_0 + 856) = Vector(-2512.0f, 25,6f, 2216f);
	*(&iLocal_0 + 856 + 12) = Vector(0.0f, -56,52287f, 0.0f);
	*(&iLocal_0 + 880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "twrf_teleport", Vector(-2512.0f, 25,6f, 2216f), Vector(0.0f, -56,52287f, 0.0f));
	*(&iLocal_0 + 888) = Vector(-2432f, 24,62714f, 2140f);
	*(&iLocal_0 + 888 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_reunionSpot", Vector(-2432f, 24,62714f, 2140f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 920) = Vector(-2495,556f, 24,52327f, 2200,302f);
	*(&iLocal_0 + 920 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_captiveGoToSpot", Vector(-2495,556f, 24,52327f, 2200,302f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 952) = Vector(-2432,775f, 24,62113f, 2139,225f);
	*(&iLocal_0 + 952 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_reunionSpot1", Vector(-2432,775f, 24,62113f, 2139,225f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 984) = Vector(-2420,474f, 26,16475f, 2128,898f);
	*(&iLocal_0 + 984 + 12) = Vector(0.0f, 122,3556f, 0.0f);
	*(&iLocal_0 + 1008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_bossFlag", Vector(-2420,474f, 26,16475f, 2128,898f), Vector(0.0f, 122,3556f, 0.0f));
	*(&iLocal_0 + 1016) = Vector(-2420,628f, 26,16475f, 2128,077f);
	*(&iLocal_0 + 1016 + 12) = Vector(0.0f, 122,3556f, 0.0f);
	*(&iLocal_0 + 1040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_henchmanFlag", Vector(-2420,628f, 26,16475f, 2128,077f), Vector(0.0f, 122,3556f, 0.0f));
	*(&iLocal_0 + 1048) = Vector(-2421,564f, 26,15974f, 2129,346f);
	*(&iLocal_0 + 1048 + 12) = Vector(0.0f, 53,87182f, 0.0f);
	*(&iLocal_0 + 1072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_fatherGoToSpot", Vector(-2421,564f, 26,15974f, 2129,346f), Vector(0.0f, 53,87182f, 0.0f));
	*(&iLocal_0 + 1080) = Vector(-2426,252f, 26,69297f, 2120,242f);
	*(&iLocal_0 + 1080 + 12) = Vector(0.0f, -141,3787f, 0.0f);
	*(&iLocal_0 + 1104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_hostageSpot", Vector(-2426,252f, 26,69297f, 2120,242f), Vector(0.0f, -141,3787f, 0.0f));
	*(&iLocal_0 + 1112) = Vector(-2421,237f, 26,13897f, 2126,056f);
	*(&iLocal_0 + 1112 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_FirstPathCoor", Vector(-2421,237f, 26,13897f, 2126,056f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1144) = Vector(-2459,162f, 24,59613f, 2179,09f);
	*(&iLocal_0 + 1144 + 12) = Vector(0.0f, -118,7646f, 0.0f);
	*(&iLocal_0 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportJohnCrouch", Vector(-2459,162f, 24,59613f, 2179,09f), Vector(0.0f, -118,7646f, 0.0f));
	*(&iLocal_0 + 1176) = Vector(-2459,428f, 24,59613f, 2179,446f);
	*(&iLocal_0 + 1176 + 12) = Vector(0.0f, -118,725f, 0.0f);
	*(&iLocal_0 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportJohnCrouch1", Vector(-2459,428f, 24,59613f, 2179,446f), Vector(0.0f, -118,725f, 0.0f));
	*(&iLocal_0 + 1208) = Vector(-2460.0f, 25.0f, 2181.0f);
	*(&iLocal_0 + 1208 + 12) = Vector(0.0f, 328,5769f, 0.0f);
	*(&iLocal_0 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "Flag1", Vector(-2460.0f, 25.0f, 2181.0f), Vector(0.0f, 328,5769f, 0.0f));
	*(&iLocal_0 + 1240) = Vector(-2424,683f, 26,36347f, 2121,608f);
	*(&iLocal_0 + 1240 + 12) = Vector(0.0f, 303,2308f, 0.0f);
	*(&iLocal_0 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_aDaughterSpawn", Vector(-2424,683f, 26,36347f, 2121,608f), Vector(0.0f, 303,2308f, 0.0f));
	*(&iLocal_0 + 1272) = Vector(-2423,207f, 26,36346f, 2123,465f);
	*(&iLocal_0 + 1272 + 12) = Vector(0.0f, -318,2152f, 0.0f);
	*(&iLocal_0 + 1296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_dadCutscene", Vector(-2423,207f, 26,36346f, 2123,465f), Vector(0.0f, -318,2152f, 0.0f));
	*(&iLocal_0 + 1304) = Vector(-2425,5f, 26,36347f, 2120,744f);
	*(&iLocal_0 + 1304 + 12) = Vector(0.0f, 224,3542f, 0.0f);
	*(&iLocal_0 + 1328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_badGuy", Vector(-2425,5f, 26,36347f, 2120,744f), Vector(0.0f, 224,3542f, 0.0f));
	*(&iLocal_0 + 1336) = Vector(-2426,478f, 26,36347f, 2121,321f);
	*(&iLocal_0 + 1336 + 12) = Vector(0.0f, 250.0f, 0.0f);
	*(&iLocal_0 + 1360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_hostageGringo", Vector(-2426,478f, 26,36347f, 2121,321f), Vector(0.0f, 250.0f, 0.0f));
	*(&iLocal_0 + 1368) = Vector(-2422,601f, 26,162f, 2126,31f);
	*(&iLocal_0 + 1368 + 12) = Vector(0.0f, -128.0f, 0.0f);
	*(&iLocal_0 + 1392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_dadGringo", Vector(-2422,601f, 26,162f, 2126,31f), Vector(0.0f, -128.0f, 0.0f));
	*(&iLocal_0 + 1400) = Vector(-2458,174f, 24,59613f, 2179,924f);
	*(&iLocal_0 + 1400 + 12) = Vector(0.0f, -30,80718f, 0.0f);
	*(&iLocal_0 + 1424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_positionCover", Vector(-2458,174f, 24,59613f, 2179,924f), Vector(0.0f, -30,80718f, 0.0f));
	*(&iLocal_0 + 1432) = Vector(-2423,528f, 26,36346f, 2124,996f);
	*(&iLocal_0 + 1432 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TeleportJohn", Vector(-2423,528f, 26,36346f, 2124,996f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1464) = Vector(-2414,021f, 34,533f, 2170,052f);
	*(&iLocal_0 + 1464 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nf_OUTSNI1", Vector(-2414,021f, 34,533f, 2170,052f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1496) = Vector(-2414,021f, 34,533f, 2170,052f);
	*(&iLocal_0 + 1496 + 12) = Vector(0.0f, 102,9695f, 0.0f);
	*(&iLocal_0 + 1520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_alertGringo", Vector(-2414,021f, 34,533f, 2170,052f), Vector(0.0f, 102,9695f, 0.0f));
	*(&iLocal_0 + 1528) = Vector(-2419,715f, 26,16986f, 2128,072f);
	*(&iLocal_0 + 1528 + 12) = Vector(0.0f, 42,1808f, 0.0f);
	*(&iLocal_0 + 1552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_JohnInCover", Vector(-2419,715f, 26,16986f, 2128,072f), Vector(0.0f, 42,1808f, 0.0f));
	*(&iLocal_0 + 1560) = Vector(-2401,375f, 26,01504f, 2164,727f);
	*(&iLocal_0 + 1560 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_01", Vector(-2401,375f, 26,01504f, 2164,727f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1592) = Vector(-2459,276f, 24,09164f, 2120,78f);
	*(&iLocal_0 + 1592 + 12) = Vector(0.0f, -64,37025f, 0.0f);
	*(&iLocal_0 + 1616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_02", Vector(-2459,276f, 24,09164f, 2120,78f), Vector(0.0f, -64,37025f, 0.0f));
	*(&iLocal_0 + 1624) = Vector(-2419,914f, 26,163f, 2127,962f);
	*(&iLocal_0 + 1624 + 12) = Vector(0.0f, 45.0f, 0.0f);
	*(&iLocal_0 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportVista", Vector(-2419,914f, 26,163f, 2127,962f), Vector(0.0f, 45.0f, 0.0f));
	*(&iLocal_0 + 1656) = Vector(-2425,609f, 26,36346f, 2120,803f);
	*(&iLocal_0 + 1656 + 12) = Vector(0.0f, -141,3278f, 0.0f);
	*(&iLocal_0 + 1680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_hostageGuyShoot", Vector(-2425,609f, 26,36346f, 2120,803f), Vector(0.0f, -141,3278f, 0.0f));
	*(&iLocal_0 + 1688) = Vector(-2464f, 24,09412f, 2188,151f);
	*(&iLocal_0 + 1688 + 12) = Vector(0.0f, -72,05788f, 0.0f);
	*(&iLocal_0 + 1712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TeleportHorse", Vector(-2464f, 24,09412f, 2188,151f), Vector(0.0f, -72,05788f, 0.0f));
	*(&iLocal_0 + 1720) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fatherCover", Vector(-2422,624f, 26,14231f, 2125,584f), Vector(0.0f, -490,8809f, 0.0f), 1);
	*(&iLocal_0 + 1728) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ncover_low", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4);
	*(&iLocal_0 + 1736) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "introCover", Vector(-2458,819f, 24,5851f, 2180,168f), Vector(0.0f, -29,6452f, 0.0f), 4);
	*(&iLocal_0 + 1744) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cover_low1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4);
	*(&iLocal_0 + 1752) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "seconndCoverPos", Vector(-2444,987f, 22,42624f, 2163,726f), Vector(0.0f, -56,37517f, 0.0f), 4);
	*(&iLocal_0 + 1760) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thirdCoverPos", Vector(-2432,268f, 24,60106f, 2146,218f), Vector(0.0f, -33,12967f, 0.0f), 4);
	return 1;
}

var Function_314(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x13E31 / 81457
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_315(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_244(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_315(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x13E6F / 81519
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_244(&(Param0[iVar02]), 4);
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

void Function_316(char* cParam0) //Position: 0x13F3E / 81726
{
	if (!Function_299(128))
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

int Function_317(int iParam0) //Position: 0x13F7B / 81787
{
	if (Global_6666)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (Global_6623 || Global_6622)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6622)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 1;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (Function_306(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

