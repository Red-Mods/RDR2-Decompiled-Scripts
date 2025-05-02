//Decompiled with MagicRDR v1.0
//Function Count : 292
//Statics Count : 1240
//Natives Count : 460
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 2;
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
	var uLocal_130 = 7;
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
	int iLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 26;
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
	var uLocal_422 = 24;
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
	bool bLocal_657 = false;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	var uLocal_662 = 0;
	bool bLocal_663 = false;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 15;
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
	int iLocal_1002 = 1;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	bool bLocal_1008 = false;
	int iLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	bool bLocal_1014 = false;
	int iLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 2;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	bool bLocal_1043 = false;
	var uLocal_1044 = 0;
	var uLocal_1045[3] = { 0, 0, 0 };
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	int iLocal_1053 = 0;
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
	var uLocal_1069[2] = { 0, 0 };
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081[4] = { 0, 0, 0, 0 };
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 15;
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
	struct<8> Local_1156[3];
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
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	bool bLocal_1206 = false;
	bool bLocal_1207 = false;
	int iLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	int iLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	bool bLocal_1216 = false;
	int iLocal_1217 = 0;
	int iLocal_1218[3] = { 0, 0, 0 };
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	bool bLocal_1231 = false;
	int iLocal_1232 = 0;
	bool bLocal_1233 = false;
	int iLocal_1234 = 0;
	bool bLocal_1235 = false;
	int iLocal_1236 = 0;
	bool bLocal_1237 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_656 = 0;
	bLocal_657 = false;
	bLocal_1014 = false;
	iLocal_1015 = 0;
	iLocal_1034 = 0;
	iLocal_1035 = 0;
	iLocal_1217 = 0;
	iLocal_1226 = 0;
	iLocal_1227 = 0;
	iLocal_1228 = 0;
	iLocal_1229 = 1;
	iLocal_1230 = 0;
	bLocal_1231 = false;
	iLocal_1232 = 0;
	bLocal_1233 = false;
	iLocal_1234 = 0;
	bLocal_1235 = false;
	iLocal_1236 = 0;
	iLocal_660 = 0;
	iLocal_661 = &iScriptParam_0;
	SET_DUST_LEVEL(3);
	bLocal_1008 = Function_291(&(Global_43791[iLocal_661]));
	if (Function_290(14, 0))
	{
		Function_288(&iLocal_1002, "$/fragments/p_gen_footlocker03x", 0, 1);
	}
	if (Function_290(13, 0) && !Function_290(14, 0))
	{
		bLocal_1008 = false;
	}
	if (bLocal_1008 && Function_287(&Global_11420, iScriptParam_0))
	{
		if (Function_286(8))
		{
			bLocal_1014 = true;
			Function_285(8);
		}
	}
	Function_284("Initializing Tumbleweed", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_663 = 1000;
		switch (iLocal_660)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_660 = 1;
				}
				bLocal_663 = false;
				break;
			
			case 0x00000001:
				if (Function_283())
				{
					iLocal_660 = 2;
				}
				bLocal_663 = false;
				break;
			
			case 0x00000002:
				if (Function_281())
				{
					Function_280(&(Global_43791[iLocal_661]), 32);
					iLocal_660 = 3;
				}
				bLocal_663 = false;
				break;
			
			case 0x00000003:
				uLocal_664 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TumbleweedVol", &iLocal_661, 2, 0);
				Function_279(&Global_11420, &Global_13398, iScriptParam_0);
				iLocal_660 = 5;
				if (0 & Function_278())
				{
					uLocal_666 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Tumbleweed/TumbleweedMP", 0);
				}
				bLocal_663 = false;
				break;
			
			case 0x00000005:
				if (Function_277(&Global_11420, &Global_13398, iScriptParam_0))
				{
					iLocal_660 = 4;
					bLocal_663 = false;
				}
				else
				{
					bLocal_663 = 100;
				}
				break;
			
			case 0x00000004:
				bVar0 = true;
				if (Function_290(14, 0))
				{
					if (!Function_273(&iLocal_1002))
					{
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					if (Function_272(&(Global_43791[iLocal_661]), 16) && Function_271(Global_44085[iScriptParam_09]))
					{
						iLocal_660 = 6;
					}
				}
				bLocal_663 = false;
				break;
			
			case 0x00000006:
				if (((bLocal_1008 && Function_286(2)) && Function_290(2, 0)) || (!Global_6606 && Function_286(2)))
				{
					Function_264(0, &uLocal_668, &iLocal_0 + 752);
					Function_263(0, &uLocal_668, &iLocal_0);
					Function_264(1, &uLocal_668, &iLocal_0 + 760);
					Function_263(1, &uLocal_668, &iLocal_0);
					Function_264(2, &uLocal_668, &iLocal_0 + 776);
					Function_263(2, &uLocal_668, &iLocal_0);
					Function_264(3, &uLocal_668, &iLocal_0 + 784);
					Function_263(3, &uLocal_668, &iLocal_0);
					Function_264(4, &uLocal_668, &iLocal_0 + 792);
					Function_263(4, &uLocal_668, &iLocal_0);
					Function_264(5, &uLocal_668, &iLocal_0 + 800);
					Function_263(5, &uLocal_668, &iLocal_0);
					Function_264(6, &uLocal_668, &iLocal_0 + 768);
					Function_263(6, &uLocal_668, &iLocal_0);
					Function_264(7, &uLocal_668, &iLocal_0 + 808);
					Function_263(7, &uLocal_668, &iLocal_0);
					Function_264(8, &uLocal_668, &iLocal_0 + 696);
					Function_263(8, &uLocal_668, &iLocal_0);
					Function_264(9, &uLocal_668, &iLocal_0 + 704);
					Function_263(9, &uLocal_668, &iLocal_0);
					Function_264(10, &uLocal_668, &iLocal_0 + 712);
					Function_263(10, &uLocal_668, &iLocal_0);
					Function_264(11, &uLocal_668, &iLocal_0 + 720);
					Function_263(11, &uLocal_668, &iLocal_0);
					Function_264(13, &uLocal_668, &iLocal_0 + 736);
					Function_263(13, &uLocal_668, &iLocal_0);
					Function_264(12, &uLocal_668, &iLocal_0 + 728);
					Function_263(12, &uLocal_668, &iLocal_0);
					Function_264(14, &uLocal_668, &iLocal_0 + 744);
					Function_263(14, &uLocal_668, &iLocal_0);
					Function_260(&Global_11420, &Global_13398, &uLocal_668, &Global_10996, iScriptParam_0);
				}
				else
				{
					if (!bLocal_1008)
					{
					}
					if (!Function_286(2))
					{
					}
					if (!Function_290(2, 0))
					{
					}
					Function_258(Global_46796[0], &Global_11420, &Global_13398, 1);
					bLocal_1008 = false;
					iLocal_1009 = 1;
				}
				if (Function_272(&(Global_43791[iScriptParam_0]), 256) || !Function_286(2))
				{
					iLocal_1009 = 1;
				}
				Function_280(&(Global_43791[iLocal_661]), 8);
				iLocal_660 = 7;
				bLocal_663 = false;
				break;
			
			case 0x00000007:
				iLocal_660 = 8;
				bLocal_663 = false;
				break;
			
			case 0x00000008:
				Function_256(1, 0,5f, 3, &iLocal_0, &Global_44085[iLocal_6619] + 8, 1);
				Function_255(64);
				Function_251(2, 4294967295, 4294967295, 0, 3);
				Function_280(&(Global_43791[iLocal_661]), 512);
				iLocal_660 = 9;
				bLocal_663 = false;
				break;
			
			case 0x00000009:
				Function_249(&iLocal_0, iScriptParam_0);
				Function_280(&(Global_43791[iLocal_661]), 4);
				Function_248("Finished Initializing Tumbleweed", 5.0f);
				iLocal_660 = 10;
				bLocal_663 = false;
				if (Function_290(14, 0))
				{
					uLocal_1000 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_247(), "p_gen_footLocker03x", Vector(-4098,537f, 40,58661f, 2948,58f), Vector(0.0f, 59.0f, 0.0f), true);
					PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1000, "p_gen_footLocker03x_open", 0, 0, 1f, 0);
				}
				if (Function_272(&(Global_43791[iLocal_661]), 2048))
				{
					bLocal_1008 = false;
				}
				if (bLocal_1008 && !Function_246(Global_46796[0]))
				{
					if (Function_290(2, 0) || !Global_6606)
					{
						if ((((!Global_6623 && !Global_6625) && !Global_6627) && 1) && !Function_278())
						{
							Function_235(&iScriptParam_0);
						}
						else
						{
							bLocal_1008 = false;
						}
					}
					else
					{
						bLocal_1008 = false;
					}
				}
				else
				{
					if ((Function_246(Global_46796[0]) && !Global_6623) && !Global_99146)
					{
						Function_234();
						Function_233("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_1008 = false;
				}
				Function_231(&(Global_43791[iLocal_661]));
				break;
			
			case 0x0000000A:
				Function_228();
				if (bLocal_1008)
				{
					bLocal_1008 = Function_43();
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_663);
	}
	if (Function_290(14, 0))
	{
		Function_39(&iLocal_1002);
	}
	if (IS_OBJECT_VALID(&uLocal_1000))
	{
		DESTROY_OBJECT(&uLocal_1000);
	}
	if (Function_38(Global_46951) == 2)
	{
		Function_28(Global_46951);
	}
	if (bLocal_1008)
	{
		Function_21();
	}
	if (bLocal_1014)
	{
		Function_20(8);
	}
	Function_18();
	Function_8(&Global_11420, &Global_13398, iScriptParam_0, iLocal_1009);
	Function_7();
	Function_6();
	SET_DUST_LEVEL(2);
	Function_2(iScriptParam_0);
	Function_255(64);
	Function_1(&(Global_43791[iLocal_661]), 32);
	Function_1(&(Global_43791[iLocal_661]), 64);
	Function_1(&(Global_43791[iLocal_661]), 8);
	Function_1(&(Global_43791[iLocal_661]), 512);
	Function_1(&(Global_43791[iLocal_661]), 4);
	if (IS_SCRIPT_VALID(&uLocal_666))
	{
		TERMINATE_SCRIPT(&uLocal_666);
	}
	if (IS_SCRIPT_VALID(&uLocal_664))
	{
		TERMINATE_SCRIPT(&uLocal_664);
	}
	Function_248("Unloaded Tumbleweed", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x72E / 1838
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x748 / 1864
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

void Function_3(int iParam0) //Position: 0x77E / 1918
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x7A0 / 1952
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x7B6 / 1974
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x7CC / 1996
{
	Function_39(&iLocal_312 + 8);
	RELEASE_LAYOUT_REF(&iLocal_312);
	return;
}

void Function_7() //Position: 0x7E1 / 2017
{
	Function_39(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_8(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x7F4 / 2036
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
	strcpy(&cVar0, Function_17(bParam2), 64);
	if (Function_15())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_272(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_43791[bParam2]), 0x40000000);
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (!Function_14(&(Param0[bVar162]), 1))
		{
			if ((!vParam1[bVar163] != 4294967295 && !vParam1[bVar163] != 0) && Function_14(&(Param0[bVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[bVar163], 4294967295);
				Function_13(&(Param0[bVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[bVar163] + 8) && Function_14(&(Param0[bVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[bVar163] + 8);
			Function_13(&(Param0[bVar162]), 16);
		}
		bVar16++;
	}
	if (!Function_272(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_286(2) || Function_272(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (Function_14(&(Param0[bVar162]), 2) && !Function_14(&(Param0[bVar162]), 4))
		{
			Function_9(&Param0, &vParam1, bVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_14(&(Param0[bVar162]), 2) && !Function_14(&(Param0[bVar162]), 4))
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
			Function_280(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_9(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xA12 / 2578
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_12(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_11(Global_43790), Function_10(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_14(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_14(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_12(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_11(Global_43790), Function_10(Global_43790), false, 0);
	}
}

int Function_10(int iParam0) //Position: 0xB78 / 2936
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

int Function_11(int iParam0) //Position: 0xBA3 / 2979
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

void Function_12(int iParam0, int iParam1) //Position: 0xBD7 / 3031
{
	iParam0 = (iParam0 || iParam1);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xBE8 / 3048
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_14(int iParam0, int iParam1) //Position: 0xC02 / 3074
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_15() //Position: 0xC1F / 3103
{
	if (Function_16(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_16(bool bParam0, bool bParam1) //Position: 0xC3A / 3130
{
	return (bParam0 && bParam1) == 0;
}

var Function_17(int iParam0) //Position: 0xC47 / 3143
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

void Function_18() //Position: 0x10F5 / 4341
{
	if (IS_OBJECTSET_VALID(&uLocal_658))
	{
		Function_19(&uLocal_658);
		DESTROY_OBJECTSET(&uLocal_658);
	}
	return;
}

void Function_19(var uParam0) //Position: 0x1113 / 4371
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

void Function_20(bool bParam0) //Position: 0x1162 / 4450
{
	if (Function_16(bParam0, 1) && !Function_16(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_21() //Position: 0x118F / 4495
{
	int iVar0;
	
	if (!iLocal_1229)
	{
		iLocal_1229 = 1;
		if (Function_38(Global_46951) == 2)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_FLEEING", true, false, 2, 0, true, false);
			}
		}
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_MB_Running"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_MB_Running");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_squadsDead"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_squadsDead");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForMansionGuys"))
		{
			DECOR_REMOVE(&Global_54076, "ReadyForMansionGuys");
		}
		if (Function_38(Global_46951) == 2)
		{
			Function_28(Global_46951);
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_SMALL_TEXT();
		REMOVE_JOURNAL_ENTRY(bLocal_1207, false);
		if (IS_OBJECTSET_VALID(&uLocal_1075))
		{
			Function_19(&uLocal_1075);
			DESTROY_OBJECTSET(&uLocal_1075);
		}
		if (IS_OBJECT_VALID(&uLocal_1063))
		{
			DESTROY_OBJECT(&uLocal_1063);
		}
		if (IS_OBJECT_VALID(&uLocal_1065))
		{
			DESTROY_OBJECT(&uLocal_1065);
		}
		if (IS_OBJECT_VALID(&uLocal_1067))
		{
			RELEASE_OBJECT_REF(&uLocal_1067);
			DESTROY_OBJECT(&uLocal_1067);
		}
		if (IS_OBJECTSET_VALID(&uLocal_1077))
		{
			Function_19(&uLocal_1077);
			DESTROY_OBJECTSET(&uLocal_1077);
		}
		if (IS_OBJECTSET_VALID(&uLocal_1079))
		{
			Function_19(&uLocal_1079);
			DESTROY_OBJECTSET(&uLocal_1079);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (SQUAD_IS_VALID(&(uLocal_1045[iVar0])))
			{
				SQUAD_GOALS_CLEAR(&(uLocal_1045[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 14)
		{
			Function_26(&Global_11420, &Global_13398, iVar0, 0);
			iVar0++;
		}
		if (SQUAD_IS_VALID(&(uLocal_1045[2])))
		{
			DESTROY_OBJECT(&(uLocal_1045[2]));
		}
		if (SQUAD_IS_VALID(&(uLocal_1045[1])))
		{
			DESTROY_OBJECT(&(uLocal_1045[1]));
		}
		if (SQUAD_IS_VALID(&(uLocal_1045[0])))
		{
			DESTROY_OBJECT(&(uLocal_1045[0]));
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_FTE_Running"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_FTE_Running");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "shakehands_noCam"))
		{
			DECOR_REMOVE(&Global_54076, "shakehands_noCam");
		}
		if (IS_BLIP_VALID(&Local_1156[08] + 16))
		{
			REMOVE_BLIP(&Local_1156[08] + 16);
		}
		if (IS_BLIP_VALID(&Local_1156[18] + 16))
		{
			REMOVE_BLIP(&Local_1156[18] + 16);
		}
		if (IS_BLIP_VALID(&Local_1156[28] + 16))
		{
			REMOVE_BLIP(&Local_1156[28] + 16);
		}
		if (SQUAD_IS_VALID(&Local_1156[08] + 24))
		{
			Function_24(&Local_1156[08] + 24, 0, 0);
		}
		if (SQUAD_IS_VALID(&Local_1156[18] + 24))
		{
			Function_24(&Local_1156[18] + 24, 0, 0);
		}
		if (SQUAD_IS_VALID(&Local_1156[28] + 24))
		{
			Function_24(&Local_1156[28] + 24, 0, 0);
		}
		if (IS_OBJECT_VALID(&uLocal_1057))
		{
			DESTROY_OBJECT(&uLocal_1057);
		}
		SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_FTE_Running"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_FTE_Running");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_SheriffFreed"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_SheriffFreed");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_MBScript_Running"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_MBScript_Running");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TUM_SheriffTalking"))
		{
			DECOR_REMOVE(&Global_54076, "TUM_SheriffTalking");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "SheriffLeft"))
		{
			DECOR_REMOVE(&Global_54076, "SheriffLeft");
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "SheriffDied"))
		{
			DECOR_REMOVE(&Global_54076, "SheriffDied");
		}
		Function_39(&iLocal_1094);
		Function_22(32768);
		if (IS_LAYOUTREF_VALID(&uLocal_1055))
		{
			RELEASE_LAYOUT_REF(&uLocal_1055);
		}
	}
	return;
}

void Function_22(int iParam0) //Position: 0x1634 / 5684
{
	Function_23(&Global_43580, iParam0);
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x1642 / 5698
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_24(var uParam0, bool bParam1, bool bParam2) //Position: 0x1661 / 5729
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_25(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x16EA / 5866
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_26(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x170A / 5898
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_14(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_14(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_14(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_13(&(Param0[iVar02]), 8);
	}
	Function_13(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_27(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_9(&Param0, &vParam1, iParam2, 0);
	}
}

int Function_27(int iParam0) //Position: 0x17B2 / 6066
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

void Function_28(int iParam0) //Position: 0x185B / 6235
{
	var uVar0;
	
	if (!Function_36(iParam0))
	{
		Function_34();
		return;
	}
	uVar0 = Function_33(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_29("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_29(bool bParam0, bool bParam1) //Position: 0x18AE / 6318
{
	struct<4> Var0;
	
	if (!Function_36(bParam1))
	{
		return;
	}
	switch (Function_33(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_30(Function_31(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_33(bParam1), Function_31(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_33(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_33(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_33(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_33(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_33(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_30(int iParam0) //Position: 0x19D8 / 6616
{
	char* cVar0[16];
	
	if (!Function_15())
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

int Function_31(bool bParam0) //Position: 0x1A12 / 6674
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_32(int iParam0) //Position: 0x1A32 / 6706
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_33(bool bParam0) //Position: 0x1A49 / 6729
{
	if (!Function_32(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_34() //Position: 0x1A64 / 6756
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
			Function_35(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_35(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1CAB / 7339
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_36(int iParam0) //Position: 0x1CD7 / 7383
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	if (!Function_37(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_37(int iParam0) //Position: 0x1CFB / 7419
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_38(int iParam0) //Position: 0x1D10 / 7440
{
	if (!Function_36(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_39(int iParam0) //Position: 0x1D2A / 7466
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_40(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_40(struct<2>[] Param0, int iParam1) //Position: 0x1D52 / 7506
{
	if (Function_42(&(Param0[iParam12]), 4))
	{
		if (Function_42(&(Param0[iParam12]), 1))
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
			Function_41(&(Param0[iParam12]), 1);
			Function_41(&(Param0[iParam12]), 2);
			Function_41(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_41(struct<13> Param0) //Position: 0x1E9D / 7837
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_42(struct<13> Param0) //Position: 0x1EBA / 7866
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_43() //Position: 0x1ED8 / 7896
{
	var uVar0;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	var uVar6;
	
	if (!Function_227(&uLocal_1069))
	{
		Function_21();
		return 0;
	}
	switch (iLocal_1093)
	{
		case 0x00000000:
			if (Function_273(&iLocal_1094))
			{
				iLocal_1093 = 1;
			}
			break;
		
		case 0x00000001:
			Function_226(&iLocal_0 + 1008);
			uVar0 = Function_226(&iLocal_0 + 1008);
			Function_219(&uLocal_1055, &uLocal_1045, &bLocal_1237, &uLocal_1057, &iLocal_1218, &iLocal_1053);
			Function_216(&Local_1156);
			Function_211(&uLocal_1055, &uLocal_1063, &uLocal_1065, &uLocal_1067, bLocal_1206, &uLocal_1077, &uLocal_1079, &uLocal_1059, &uLocal_1061);
			Function_210(&(uLocal_1081[0]), 0);
			Function_210(&(uLocal_1081[1]), 0);
			Function_210(&(uLocal_1081[2]), 0);
			Function_210(&(uLocal_1081[3]), 0);
			DECOR_SET_BOOL(&Global_54076, "shakehands_noCam", true);
			iLocal_1093 = 2;
			break;
		
		case 0x00000002:
			if (Function_209(&uLocal_1055, &uLocal_1075))
			{
				uLocal_1091 = CREATE_VOLUME_SET_IN_LAYOUT(&uLocal_1055, "vMansionGuysStayIn");
				ADD_TO_VOLUME_SET(&uLocal_1091, &iLocal_0 + 216);
				ADD_TO_VOLUME_SET(&uLocal_1091, &iLocal_0 + 272);
				bLocal_1043 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TUM_FTE_Layout"), "TUM_FTE_Helper");
				iLocal_1093 = 3;
			}
			break;
		
		case 0x00000003:
			Function_207("sc_challenge_aa_07", &iLocal_1208);
			Function_206(&uLocal_1045);
			if (!iLocal_1227)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 264))
				{
					if (SQUAD_GET_SIZE(&iLocal_1053) == 1)
					{
						Function_205();
						iLocal_1227 = 1;
					}
				}
			}
			if (!iLocal_1226)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_1045[0])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_1053) != 0)
				{
					DECOR_SET_BOOL(&Global_54076, "SheriffReady", true);
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_204("TUM_ClearHouse", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_1207, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(bLocal_1207, "TUM_ClearHouse", 0, 0, false);
					APPEND_JOURNAL_ENTRY(bLocal_1207, 0);
					if (!Function_203(&(uLocal_1045[1]), 1))
					{
						Function_202(&(uLocal_1045[1]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (!Function_203(&(uLocal_1045[2]), 1))
					{
						Function_202(&(uLocal_1045[2]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_1226 = 1;
				}
			}
			Function_199(StackVal, Vector(-3896,095f, 30,923f, 2936,247f), 0, 0);
			Function_199(StackVal, Vector(-3968,798f, 28,355f, 2955,643f), 0, 0);
			Function_199(StackVal, Vector(-3992,052f, 28,623f, 2959,601f), 0, 0);
			Function_199(StackVal, Vector(-3964,968f, 27,743f, 2912,366f), 0, 0);
			Function_199(StackVal, Vector(-3986,764f, 27,701f, 2913,683f), 0, 0);
			Function_198(&uLocal_1045, &iLocal_1218, &iLocal_1053);
			Function_196(&uLocal_1045, &bLocal_1237, &iLocal_1217, &bLocal_1207);
			if (iLocal_1217 && !Function_16(bLocal_1237, 0x4000000))
			{
				Function_195(&bLocal_1237, 0x4000000);
				Function_194(&(uLocal_1045[0]), &Global_54076, 4);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(uLocal_1045[0]), 0);
				Function_193(&(uLocal_1045[0]));
				SQUAD_GOALS_CLEAR(&(uLocal_1045[0]));
				Function_192(&(uLocal_1045[0]), -1.0f);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForMansionGuys"))
			{
				if (Function_16(bLocal_1237, 65536))
				{
					if (!iLocal_1228)
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 288))
						{
							if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TUM_FTE_Layout"), "TUM_FTE_Helper")))
							{
								if (IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TUM_FTE_Layout"), "TUM_FTE_Helper")))
								{
									Function_189();
									iLocal_1228 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_1230)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 304))
					{
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						iLocal_1230 = 1;
					}
				}
				if (!Function_16(bLocal_1237, 16))
				{
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(&(uLocal_1045[1])) - 1))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_1045[1]), bVar2)))
						{
							if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_1045[1]), bVar2), 1.0f) || Function_187(&Global_54076, &(uLocal_1045[1]), 1, 1, 1, 25.0f))
							{
								Function_194(&(uLocal_1045[1]), &Global_54076, 4);
								Function_194(&(uLocal_1045[1]), &bLocal_1043, 4);
								Function_186(&(uLocal_1045[1]), &Global_54076);
								Function_186(&(uLocal_1045[1]), &bLocal_1043);
								Function_195(&bLocal_1237, 16);
							}
						}
						bVar2++;
					}
				}
				if (!iLocal_1218[1])
				{
					if (Function_187(&Global_54076, &(uLocal_1045[1]), 1, 1, 1, 50.0f))
					{
						Function_194(&(uLocal_1045[1]), &Global_54076, 4);
						Function_202(&(uLocal_1045[1]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_185(&(uLocal_1045[1]), 0);
						iLocal_1218[1] = 1;
					}
				}
				if (!iLocal_1218[2])
				{
					if (Function_187(&Global_54076, &(uLocal_1045[2]), 1, 1, 1, 50.0f))
					{
						Function_194(&(uLocal_1045[2]), &Global_54076, 4);
						Function_202(&(uLocal_1045[2]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_185(&(uLocal_1045[2]), 0);
						iLocal_1218[2] = 1;
					}
				}
				bVar3 = false;
				while (bVar3 < (SQUAD_GET_SIZE(&(uLocal_1045[1])) - 1))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_1045[1]), bVar3)))
					{
						if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_1045[1]), bVar3)))
						{
							if (!iLocal_1218[1])
							{
								Function_202(&(uLocal_1045[1]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
								Function_185(&(uLocal_1045[1]), 0);
								iLocal_1218[1] = 1;
							}
						}
					}
					bVar3++;
				}
			}
			if (Function_181(&uLocal_1045, &uLocal_1081, &bLocal_1237, &iLocal_1053, &uLocal_1091) && !Function_16(bLocal_1237, 0x2000000))
			{
				Function_194(&(uLocal_1045[1]), &Global_54076, 4);
				Function_194(&(uLocal_1045[1]), &bLocal_1043, 4);
				Function_186(&(uLocal_1045[1]), &Global_54076);
				Function_186(&(uLocal_1045[1]), &bLocal_1043);
				Function_195(&bLocal_1237, 0x2000000);
			}
			if (Function_16(bLocal_1237, 65536))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "TUM_FTE_TriggerBlips"))
				{
					DECOR_REMOVE(&Global_54076, "TUM_FTE_TriggerBlips");
					Function_195(&bLocal_1237, 2097152);
				}
				if (Function_16(bLocal_1237, 2097152))
				{
					Function_177(&Local_1156, &bLocal_1237, &iLocal_1218, &iLocal_1053);
				}
			}
			if (!UNK_0x4417C9F2("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/ActionArea/Tumbleweed_FTE"))
			{
				Function_176(&bLocal_1237, 65536);
			}
			if (Function_175(&uLocal_1045, &iLocal_1053))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "PlayerReturn") && !Function_16(bLocal_1237, 0x8000000))
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "SheriffNoTie"))
					{
						DECOR_REMOVE(&Global_54076, "SheriffNoTie");
					}
					Function_173(Function_174(1, 1, 1, 0, 0), 1, 1);
					Function_169(200, 1, 0);
					Function_156(50, 1, 0);
					SET_WEAPONENUM_LOCKED(9, 0);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 9, false, 1, 1);
					if (!Function_155())
					{
						Function_153(9, 0, 1);
					}
					else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
					{
						Function_153(9, 0, 1);
					}
					TASK_CLEAR(&Global_54076);
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_152(Global_46951, 0);
					if (Function_151(&iLocal_1208))
					{
						bLocal_1216 = Function_149(&iLocal_1208);
					}
					if (Function_151(&iLocal_1208))
					{
						if (Function_148(461) < 0.0f)
						{
							if (bLocal_1216 > Function_148(461))
							{
								Function_147(461, bLocal_1216, 0);
							}
						}
						else
						{
							Function_147(461, bLocal_1216, 0);
						}
					}
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
					Function_116(Global_46951);
					Function_75(Global_46951, 1, 1, 0);
					if (Function_74(Global_46955) > 1)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(13))
						{
							AWARD_ACHIEVEMENT(13);
						}
					}
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TumbleweedJournalID"), 0);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TumbleweedJournalID"), 1);
					Function_195(&bLocal_1237, 0x8000000);
					iLocal_1093 = 4;
				}
			}
			if ((!Function_16(bLocal_1237, 65536) || DECOR_CHECK_EXIST(&Global_54076, "SheriffLeft")) || DECOR_CHECK_EXIST(&Global_54076, "SheriffDied"))
			{
				if (Function_175(&uLocal_1045, &iLocal_1053))
				{
					if (!Function_151(&iLocal_1212))
					{
						Function_73(&iLocal_1212);
						if (DECOR_CHECK_EXIST(&Global_54076, "SheriffNoTie"))
						{
							DECOR_REMOVE(&Global_54076, "SheriffNoTie");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "SheriffLeft"))
						{
							DECOR_REMOVE(&Global_54076, "SheriffLeft");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "SheriffDied"))
						{
							DECOR_REMOVE(&Global_54076, "SheriffDied");
						}
						if (HUD_IS_SHOWING_HELP_TEXT())
						{
							HUD_CLEAR_HELP();
							HUD_CLEAR_HELP_QUEUE();
						}
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						bLocal_1235 = true;
					}
				}
			}
			if (bLocal_1235)
			{
				if (!bLocal_1233)
				{
					if (Function_151(&iLocal_1212))
					{
						if (Function_149(&iLocal_1212) < 2.0f)
						{
							Function_70(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
							UI_PUSH("CutsceneWithMessages");
							Function_66(&uLocal_1055, 0, 1, 0, 0);
							Function_64(&iLocal_1212);
							bLocal_1233 = true;
						}
					}
				}
			}
			if (bLocal_1235)
			{
				if (!iLocal_1234)
				{
					if (Function_151(&iLocal_1212))
					{
						if (Function_149(&iLocal_1212) < 3.0f)
						{
							PRINT_BIG("TUM_PrintBig", 5f, 0, 2, 0);
							SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, -119,4231f, 0.0f), 0);
							iLocal_1234 = 1;
						}
					}
				}
			}
			if (!iLocal_1236)
			{
				if (Function_151(&iLocal_1212))
				{
					if (Function_149(&iLocal_1212) < 9.0f)
					{
						Function_226(&iLocal_0 + 1088);
						Var4 = Function_226(&iLocal_0 + 1088);
						TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Var4, -119,423f, 0, 0, false);
						iLocal_1236 = 1;
					}
				}
			}
			if (bLocal_1235)
			{
				if (!iLocal_1232)
				{
					if (bLocal_1233)
					{
						if (Function_151(&iLocal_1212))
						{
							if (Function_149(&iLocal_1212) < 11.0f)
							{
								Function_45(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
								UI_POP("CutsceneWithMessages");
								Function_173(Function_174(1, 1, 1, 0, 0), 1, 1);
								Function_169(200, 1, 0);
								Function_156(50, 1, 0);
								if (!Function_155())
								{
									Function_153(9, 0, 1);
								}
								else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
								{
									Function_153(9, 0, 1);
								}
								Function_152(Global_46951, 0);
								if (Function_151(&iLocal_1208))
								{
									bLocal_1216 = Function_149(&iLocal_1208);
								}
								if (Function_151(&iLocal_1208))
								{
									if (Function_148(461) < 0.0f)
									{
										if (bLocal_1216 > Function_148(461))
										{
											Function_147(461, bLocal_1216, 0);
										}
									}
									else
									{
										Function_147(461, bLocal_1216, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_116(Global_46951);
								Function_75(Global_46951, 1, 1, 0);
								if (Function_74(Global_46955) > 1)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(13))
									{
										AWARD_ACHIEVEMENT(13);
									}
								}
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_1207, 0);
								APPEND_JOURNAL_ENTRY(bLocal_1207, 1);
								iLocal_1093 = 4;
								iLocal_1232 = 1;
							}
						}
					}
				}
			}
			if (Function_16(bLocal_1237, 65536))
			{
				uVar6 = "";
				if ((!Function_16(bLocal_1237, 0x40000000) && IS_ACTOR_MOUNTED(&Global_54076)) && Function_44(&uVar6))
				{
					Function_195(&bLocal_1237, 0x40000000);
					Function_233("TUM_HelperNoHorse_Help", 0, -1.0f, 1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			Function_21();
			return 0;
			break;
	}
	return 1;
}

int Function_44(bool bParam0) //Position: 0x2B67 / 11111
{
	var uVar0;
	char[] cVar1[4];
	
	uVar0 = FIND_NAMED_LAYOUT("TUM_FTE_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		return 0;
	}
	cVar1 = FIND_ACTOR_IN_LAYOUT(&uVar0, "TUM_FTE_Helper");
	if (IS_ACTOR_VALID(&cVar1))
	{
		if (IS_ACTOR_HOGTIED(&cVar1))
		{
			return 0;
		}
		if (!IS_ACTOR_ALIVE(&cVar1))
		{
			return 0;
		}
		bParam0 = &cVar1;
		return 1;
	}
	return 0;
}

void Function_45(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x2BD4 / 11220
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
		uVar0 = Function_63();
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
		Function_49(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_48();
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
	Function_46(&uParam9, &uParam10);
}

void Function_46(var uParam0, bool bParam1) //Position: 0x2CA3 / 11427
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
		Function_47();
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

void Function_47() //Position: 0x2D72 / 11634
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

void Function_48() //Position: 0x2DEA / 11754
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_49(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2DFF / 11775
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
	Function_62(iParam0, TO_FLOAT(bParam1), 1);
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_51(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_50(iParam0);
	return 1;
}

void Function_50(bool bParam0) //Position: 0x3027 / 12327
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

void Function_51(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x30C5 / 12485
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_60(390))), 32);
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
					bVar19 = (Function_148(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_148(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_58(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_55(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_52(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_247(), &Var9);
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

var Function_52(int iParam0) //Position: 0x3703 / 14083
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_53(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3714 / 14100
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_54(char* cParam0) //Position: 0x380B / 14347
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_55(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3826 / 14374
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_57(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_56(Function_57(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_56(int iParam0, int iParam1) //Position: 0x388D / 14477
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_57(int iParam0, bool bParam1) //Position: 0x389F / 14495
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_58(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x38B1 / 14513
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
	if (((Function_59(iParam0) != 19 || Function_59(iParam0) != 17) || Function_59(iParam0) != 10) || Function_59(iParam0) != 9)
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

int Function_59(int iParam0) //Position: 0x39E5 / 14821
{
	return Global_55480[iParam016].f_96;
}

var Function_60(int iParam0) //Position: 0x39F4 / 14836
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_61(int iParam0) //Position: 0x3A31 / 14897
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

int Function_62(int iParam0, bool bParam1, bool bParam2) //Position: 0x3BCB / 15307
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

var Function_63() //Position: 0x3E0F / 15887
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_64(int iParam0) //Position: 0x3E24 / 15908
{
	Function_65(&iParam0, 0.0f);
	return;
}

void Function_65(vector3 vParam0) //Position: 0x3E31 / 15921
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_195(&vParam0, 1);
	Function_176(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_66(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3E56 / 15958
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_247(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nTUM_Vista", 2, 1);
	}
	Function_67(&uVar0);
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

void Function_67(int iParam0) //Position: 0x3ED9 / 16089
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_69(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_68(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 10.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_68(int iParam0) //Position: 0x3F23 / 16163
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,2553f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4093,846f, 38,63215f, 2958,991f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,046475f, -1,482859f, 0,000139f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_69(float fParam0) //Position: 0x3F9C / 16284
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 54,2553f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-4098,284f, 38,84961f, 2959,969f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,094726f, -1,477717f, 0,000139f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_70(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x401A / 16410
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_48();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_63();
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
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_72(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_247(), 2, Function_72(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_49(19, 1, 0, 0);
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
	if (uParam10 && !Function_15())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_71()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_71()));
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
	if (Function_286(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_285(0x4000000);
	}
	if (Function_286(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_285(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

var Function_71() //Position: 0x42CC / 17100
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

struct<8> Function_72(int iParam0) //Position: 0x435A / 17242
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_73(int iParam0) //Position: 0x436C / 17260
{
	if (!Function_151(&iParam0))
	{
		Function_65(&iParam0, 0.0f);
	}
	return;
}

int Function_74(bool bParam0) //Position: 0x4383 / 17283
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_75(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x439D / 17309
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_36(bParam0))
	{
		Function_34();
		return;
	}
	bVar0 = Function_33(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_155())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_31(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_115(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
		}
		if (Function_155())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_108();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_155())
	{
		Function_107();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_29("DEED_COMPLETE", bParam0);
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
			Function_104(bParam0);
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
						switch (Function_31(bParam0))
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
			Function_78(1);
			Function_77(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_76(bParam0, &Var14);
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

void Function_76(int iParam0, struct<41> Param1) //Position: 0x45FB / 17915
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_77(bool bParam0, int iParam1) //Position: 0x4639 / 17977
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

void Function_78(bool bParam0) //Position: 0x4678 / 18040
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_94();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_79();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_176(&Global_99144, 1);
		Function_176(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_79() //Position: 0x46CD / 18125
{
	Function_92();
	Function_91();
	Function_91();
	Function_90();
	Function_90();
	Function_89();
	Function_89();
	Function_86(0);
	Function_86(0);
	Function_84();
	Function_83();
	Function_82();
	Function_81();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_80();
	return;
}

void Function_80() //Position: 0x4718 / 18200
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

void Function_81() //Position: 0x481E / 18462
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

void Function_82() //Position: 0x4851 / 18513
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

void Function_83() //Position: 0x49E4 / 18916
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

void Function_84() //Position: 0x4B9D / 19357
{
	Function_85(&Global_42918, 1, 0);
	return;
}

void Function_85(struct<2317> Param0) //Position: 0x4BAB / 19371
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
	
	uVar0 = Function_63();
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

struct<8> Function_86(int iParam0) //Position: 0x4DC8 / 19912
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
					iVar2 = ((Function_88((50 + iVar4)) + Function_88((183 + iVar4))) + Function_88((90 + iVar4)));
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
	Function_87(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_87(int iParam0, bool bParam1, bool bParam2) //Position: 0x4E6F / 20079
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
		Function_62(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_61(iParam0);
	if (&bParam2)
	{
		Function_51(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_88(bool bParam0) //Position: 0x510B / 20747
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_89() //Position: 0x514C / 20812
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
		iVar2 = ((Function_88((50 + iVar3) + 15) + Function_88((183 + iVar3) + 15)) + Function_88((90 + iVar3) + 15));
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
	Function_87(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_90() //Position: 0x51D5 / 20949
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
			iVar2 = ((Function_88((50 + iVar3) + 8) + Function_88((183 + iVar3) + 8)) + Function_88((90 + iVar3) + 8));
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
	Function_87(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_91() //Position: 0x526C / 21100
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
		iVar2 = ((Function_88((50 + iVar3)) + Function_88((183 + iVar3))) + Function_88((90 + iVar3)));
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
	Function_87(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_92() //Position: 0x52EB / 21227
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_93(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_87(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_93(int iParam0, bool bParam1, int iParam2) //Position: 0x5328 / 21288
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
	Function_62(iParam0, bParam1, 1);
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_51(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_94() //Position: 0x5534 / 21812
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_15())
	{
		Function_101(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_101(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_96(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_96(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_95(StackVal, Var0))
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

bool Function_95(char* cParam0) //Position: 0x55EB / 21995
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_96(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x5603 / 22019
{
	int iVar0;
	
	iVar0 = Function_99(&uParam2, &fParam3);
	if (Function_98(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_195(&Global_99144, 1);
			Function_176(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_195(&Global_99144, 2);
			Function_176(&Global_99144, 1);
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
		Function_195(&Global_99144, 2);
		Function_176(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_97();
	return StackVal, Function_97();
}

struct<8> Function_97() //Position: 0x56FB / 22267
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_98(int iParam0) //Position: 0x5705 / 22277
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_99(bool bParam0, bool bParam1) //Position: 0x571B / 22299
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
				fVar2 = Function_100(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_100(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_98(iVar0) && !&bParam1)
	{
		iVar0 = Function_99(&bParam0, 1);
	}
	return iVar0;
}

float Function_100(struct<2> Param0, struct<2> Param2) //Position: 0x57E7 / 22503
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_101(float fParam0, int iParam1) //Position: 0x5804 / 22532
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_103(&Global_54076, &Var3);
	if (!Function_102(Global_46760[0]))
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
	if (!Function_102(Global_46760[2]))
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
	if (!Function_102(Global_46760[1]))
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
	if (!Function_102(Global_46796[1]))
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
	if (!Function_102(Global_46796[3]))
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
	if (!Function_102(Global_46796[2]))
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
	if (!Function_102(Global_46796[4]))
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
	if (!Function_102(Global_46816[0]))
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
	if (!Function_102(Global_46816[1]))
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
	if (!Function_102(Global_46816[2]))
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
	if (!Function_102(Global_46838[0]))
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
	if (!Function_102(Global_46850[0]))
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
	if (!Function_102(Global_46850[1]))
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
	if (!Function_102(Global_46850[2]))
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
	if (!Function_102(Global_46866[0]))
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
	if (!Function_102(Global_46866[1]))
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
	if (!Function_102(Global_46866[2]))
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
	if (!Function_102(Global_46894[2]))
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
	if (!Function_102(Global_46894[3]))
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
	if (!Function_102(Global_46894[0]))
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
	if (!Function_102(Global_46914[0]))
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
	if (!Function_102(Global_46926[2]))
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
	if (!Function_102(Global_46926[1]))
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
	if (!Function_102(Global_46926[0]))
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
	if (!Function_102(Global_46838[1]))
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
	if (!Function_102(Global_46894[1]))
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
	Function_195(&Global_99144, 2);
	Function_176(&Global_99144, 1);
	iParam1 = 0;
	if (Function_95(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_102(int iParam0) //Position: 0x6030 / 24624
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_16(iVar0, 0x1000000) || Function_16(iVar0, 0x2000000)) || Function_16(iVar0, 0x4000000)) || !Function_16(iVar0, 0x10000000));
}

void Function_103(bool bParam0, int iParam1) //Position: 0x606B / 24683
{
	GET_POSITION(&bParam0, &iParam1);
	return;
}

void Function_104(bool bParam0) //Position: 0x607A / 24698
{
	int iVar0;
	int iVar1;
	
	if (!Function_32(bParam0))
	{
		return;
	}
	switch (Function_33(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_31(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_49(12, 1, 0, 0);
				Function_106(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_49(13, 1, 0, 0);
				Function_106(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_49(14, 1, 0, 0);
				Function_106(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_49(15, 1, 0, 0);
				Function_106(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_49(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_31(bParam0))
			{
				case 0x00000000:
					if (Function_74(bParam0) == 1)
					{
						iVar0 = Function_105(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_106(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_106(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_106(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_106(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_106(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_106(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_106(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_106(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_106(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_106(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_106(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_106(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_106(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_106(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_106(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_106(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_106(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_106(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_106(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_106(4, 19);
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
								Function_49(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_49(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_49(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_105(bParam0) == 0)
			{
				if (Function_74(bParam0) == 1)
				{
					Function_49(458, 1, 0, 0);
					iVar0 = Function_31(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_106(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_106(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_106(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_106(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_106(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_106(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_106(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_106(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_74(bParam0) == 1)
			{
				Function_49(400, 1, 0, 0);
			}
			switch (Function_31(bParam0))
			{
				case 0x00000001:
					Function_49(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_106(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_106(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_106(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_49(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_106(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_106(6, 9);
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

int Function_105(bool bParam0) //Position: 0x6556 / 25942
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_106(int iParam0, int iParam1) //Position: 0x6575 / 25973
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

void Function_107() //Position: 0x65DF / 26079
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
	PLAYSTAT_INT("HC_MONEY", Function_88(0));
	PLAYSTAT_INT("HC_FAME", Function_88(3));
	PLAYSTAT_INT("HC_HONOR", Function_88(1));
	return;
}

void Function_108() //Position: 0x6741 / 26433
{
	int iVar0;
	int iVar1;
	
	if (!Function_113(Global_10966))
	{
		return;
	}
	iVar0 = Function_88(24);
	iVar1 = Function_112(Global_10966);
	if (!Function_113(iVar0) && Function_111(iVar1) < 0)
	{
		Function_87(24, Global_10966, 0);
		Function_109(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_111(Function_112(iVar0)))
	{
		Function_87(24, Global_10966, 0);
		Function_109(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_109(int iParam0, char* cParam1) //Position: 0x67C1 / 26561
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
		Function_110(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_110(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x6B18 / 27416
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

int Function_111(int iParam0) //Position: 0x6BA0 / 27552
{
	if (!Function_36(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_112(int iParam0) //Position: 0x6BBA / 27578
{
	if (!Function_113(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_113(int iParam0) //Position: 0x6BD4 / 27604
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_114(int iParam0) //Position: 0x6BEA / 27626
{
	char* cVar0[16];
	
	if (!Function_15())
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

struct<24> Function_115(char* cParam0) //Position: 0x6C29 / 27689
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

void Function_116(bool bParam0) //Position: 0x6E7F / 28287
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_31(bParam0) == Global_46760[2])
	{
		if (Function_146(2) && !Function_145(2))
		{
			Function_138(2, 2, 0, 0, 1);
		}
	}
	if (Function_31(bParam0) == Global_46796[3])
	{
		if (Function_146(6) && !Function_145(6))
		{
			Function_138(6, 16, 0, 0, 1);
		}
	}
	if (!Function_146(10) || Function_145(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_74(Global_46948);
	if (Global_46948 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_46950);
	if (Global_46950 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_46952);
	if (Global_46952 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_46951);
	if (Global_46951 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_46953);
	if (Global_46953 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != bParam0)
	{
		return;
	}
	Function_106(2, 24);
	Function_117(10, 0, 1);
	return;
}

void Function_117(bool bParam0, bool bParam1, bool bParam2) //Position: 0x703D / 28733
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_145(bParam0))
	{
		if (!Function_146(bParam0))
		{
			Function_121(bParam0, 1, 0, 0, 1);
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
		Function_49(457, 1, 0, 0);
		Function_120(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_119(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 0);
			}
			else
			{
				Function_118();
			}
		}
	}
	return;
}

void Function_118() //Position: 0x71DE / 29150
{
	return;
}

bool Function_119(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x71E4 / 29156
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

void Function_120(bool bParam0, int iParam1) //Position: 0x7293 / 29331
{
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_121(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x72E8 / 29416
{
	char* cVar0[32];
	
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_136(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_146(bParam0))
	{
		Function_49(456, 1, 0, 0);
		Function_120(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_119(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 5);
			}
			else
			{
				Function_118();
			}
		}
		Function_130(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_129() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_129() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_128(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_15())
		{
			if (!Function_127(Global_119934, 2))
			{
				Function_122(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_122(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7444 / 29764
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_124(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_123(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_123(char* cParam0) //Position: 0x74B9 / 29881
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

bool Function_124(int iParam0, var uParam1, int iParam2) //Position: 0x74F3 / 29939
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
		if (Function_126(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_125(uVar0))
		{
			case 0x00000002:
				if (!Function_127(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_125(char* cParam0) //Position: 0x756F / 30063
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

int Function_126(int iParam0) //Position: 0x7610 / 30224
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_176(&iVar1, 2147483648);
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

bool Function_127(int iParam0, int iParam1) //Position: 0x764D / 30285
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_128(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7660 / 30304
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_129() //Position: 0x76EB / 30443
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_130(bool bParam0) //Position: 0x7718 / 30488
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
			if (Function_134(bParam0, Function_135(bVar24)))
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
			if (Function_134(bParam0, Function_135(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_133(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_132(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_131(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_131(int iParam0) //Position: 0x78C8 / 30920
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_137(iParam0))
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

void Function_132(bool bParam0, bool bParam1) //Position: 0x791F / 31007
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

var Function_133(int iParam0) //Position: 0x7944 / 31044
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_137(iParam0))
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

bool Function_134(bool bParam0, bool bParam1) //Position: 0x799A / 31130
{
	int iVar0;
	
	if (!Function_137(bParam0))
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

bool Function_135(bool bParam0) //Position: 0x79F9 / 31225
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_136(int iParam0) //Position: 0x7A05 / 31237
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_137(int iParam0) //Position: 0x7A21 / 31265
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7A37 / 31287
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_136(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_144(bParam0, 2))
	{
		Function_49(456, 1, 0, 0);
		Function_120(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_128(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_134(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_120(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_119(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 0);
			}
			else
			{
				Function_118();
			}
		}
		Function_130(bParam0);
		if (StackVal && !Function_16(((((!Function_129() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_16((((Function_129() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_15())
		{
			if (!Function_127(Global_119934, 2))
			{
				Function_122(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_140();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_139(3, bParam1);
				break;
			
			case 0x00000005:
				Function_139(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_139(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_139(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_139(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_139(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_106(2, 24);
				break;
			
			case 0x00000003:
				Function_106(2, 25);
				break;
			
			case 0x0000000F:
				Function_106(2, 26);
				break;
			
			case 0x0000000D:
				Function_106(2, 27);
				break;
			
			case 0x0000000E:
				Function_106(2, 28);
				break;
			}
	}
}

void Function_139(int iParam0, bool bParam1) //Position: 0x7CD6 / 31958
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

void Function_140() //Position: 0x7D45 / 32069
{
	if (Function_137(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_143(Global_42827);
			(&Global_42827 + 8) = Function_141(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_143(Global_42827);
			*(&Global_42827 + 8) = Function_141(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_141(int iParam0, int iParam1) //Position: 0x7DC5 / 32197
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
					if (Function_290(6, 0) || Function_290(12, 0))
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
					if (Function_142(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_290(5, 0))
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
					if (Function_142(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_142(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_142(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_142(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_290(26, 0))
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
					if (Function_142(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_142(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_142(27) && iVar16)
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
					if (Function_142(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_142(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_142(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_142(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_290(17, 0) && iVar13)
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
					if (Function_142(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_290(6, 0) && Function_142(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_142(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_290(9, 0) && Function_142(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_142(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_290(8, 0) && iVar17)
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
	if (Function_95(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_95(StackVal, vVar2))
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
	if (!Function_95(StackVal, vVar2))
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

int Function_142(int iParam0) //Position: 0x8A39 / 35385
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_143(int iParam0) //Position: 0x8A4E / 35406
{
	int iVar0;
	int iVar1;
	
	if (!Function_137(iParam0))
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

bool Function_144(int iParam0, int iParam1) //Position: 0x8A9D / 35485
{
	int iVar0;
	
	if (!Function_137(iParam0))
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

bool Function_145(int iParam0) //Position: 0x8ACA / 35530
{
	if (!Function_137(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_144(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_146(int iParam0) //Position: 0x8B1B / 35611
{
	if (!Function_137(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_144(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_147(int iParam0, bool bParam1, bool bParam2) //Position: 0x8B6D / 35693
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
		Function_62(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_61(iParam0);
	if (&bParam2)
	{
		Function_51(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_148(int iParam0) //Position: 0x8DDA / 36314
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_149(vector3 vParam0) //Position: 0x8E13 / 36371
{
	if (Function_151(&vParam0))
	{
		if (Function_150(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_150(int iParam0) //Position: 0x8EE0 / 36576
{
	return Function_16(iParam0, 2);
}

bool Function_151(int iParam0) //Position: 0x8EEE / 36590
{
	return Function_16(iParam0, 1);
}

void Function_152(int iParam0, int iParam1) //Position: 0x8EFC / 36604
{
	if (!Function_36(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

int Function_153(bool bParam0, bool bParam1, int iParam2) //Position: 0x8F17 / 36631
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_154(bParam0), Function_63()) == 0)
		{
			ADD_ITEM(Function_154(bParam0), Function_63(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_154(bParam0), Function_63(), &iParam2);
	return 1;
}

var Function_154(bool bParam0) //Position: 0x8F65 / 36709
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

bool Function_155() //Position: 0x9059 / 36953
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x9084 / 36996
{
	int iVar0;
	bool bVar1;
	
	if (Function_168(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_155())
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
	iVar0 = Function_88(3);
	Function_165();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_163(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_127(Global_119936, 4))
			{
				Function_122(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_49(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_148(3));
	iVar0 = Function_88(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_158(4, Function_162(Global_21369.f_248), 1);
				Function_157(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_158(4, Function_162(Global_21369.f_248), 1);
				Function_157(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_158(4, Function_162(Global_21369.f_248), 1);
				Function_157(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_158(4, Function_162(Global_21369.f_248), 1);
				Function_157(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_158(4, Function_162(Global_21369.f_248), 1);
				Function_157(Global_21369.f_244, Global_21369.f_248);
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

void Function_157(int iParam0, int iParam1) //Position: 0x9258 / 37464
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

int Function_158(int iParam0, char* cParam1) //Position: 0x94C2 / 38082
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
	Function_109(iParam0, &cParam1, 0, 1);
	iVar1 = Function_159();
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

int Function_159() //Position: 0x9652 / 38482
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
	Function_160();
	return 0;
}

void Function_160() //Position: 0x96F3 / 38643
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
		Function_161(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_161(int iParam0) //Position: 0x97B1 / 38833
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

var Function_162(int iParam0) //Position: 0x9817 / 38935
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

int Function_163(int iParam0, bool bParam1) //Position: 0x98A6 / 39078
{
	bool bVar0;
	int iVar1;
	
	Function_49(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_164(iParam0, 4294967295);
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
	iVar1 = Function_159();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_164(int iParam0, int iParam1) //Position: 0x9A52 / 39506
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

void Function_165() //Position: 0x9A97 / 39575
{
	Function_167(3, 0.0f);
	Function_166(3, 10000.0f);
	return;
}

int Function_166(int iParam0, int iParam1) //Position: 0x9AAD / 39597
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_167(int iParam0, int iParam1) //Position: 0x9AED / 39661
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_168(int iParam0) //Position: 0x9B2D / 39725
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_169(int iParam0, bool bParam1, bool bParam2) //Position: 0x9B3C / 39740
{
	int iVar0;
	bool bVar1;
	
	if (Function_168(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_155())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_88(1);
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
			Function_163(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_127(Global_119936, 1))
				{
					Function_122(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_172(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_127(Global_119936, 2))
				{
					Function_122(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_49(1, bVar1, 0, 0);
	}
	else
	{
		Function_171(1, (4294967295 * bVar1), 0);
	}
	if (Function_88(1) <= 4294962296)
	{
		Function_87(1, 4294962296, 0);
	}
	else if (Function_88(1) >= 5000)
	{
		Function_87(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_148(1));
	iVar0 = Function_88(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_158(2, Function_170(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_158(2, Function_170(Global_21369.f_244), 0);
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
				Function_158(2, Function_170(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_158(2, Function_170(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_158(2, Function_170(Global_21369.f_244), 1);
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
				Function_158(2, Function_170(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_158(2, Function_170(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_158(2, Function_170(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_158(2, Function_170(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_158(2, Function_170(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_158(2, Function_170(Global_21369.f_244), 1);
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
				Function_158(2, Function_170(Global_21369.f_244), 0);
			}
			break;
	}
	Function_157(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_170(int iParam0) //Position: 0x9E63 / 40547
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

int Function_171(int iParam0, bool bParam1, int iParam2) //Position: 0x9F06 / 40710
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
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_51(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_172(int iParam0, bool bParam1) //Position: 0xA103 / 41219
{
	bool bVar0;
	int iVar1;
	
	Function_171(iParam0, bParam1, 0);
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
	iVar1 = Function_164(iParam0, 4294967295);
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
	iVar1 = Function_159();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_173(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA2AE / 41646
{
	bool bVar0;
	
	bVar0 = Function_88(0);
	if ((Function_88(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_49(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_88(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_49(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_88(597) + Function_88(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_174(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA380 / 41856
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_88(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_154(17), &Global_54076))
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

bool Function_175(var[] uParam0) //Position: 0xA487 / 42119
{
	if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uParam0[0])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uParam0[1])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uParam0[2])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam1) != 0)
	{
		DECOR_SET_BOOL(&Global_54076, "TUM_squadsDead", true);
		if (!iLocal_1015)
		{
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_1015 = 1;
		}
		return 1;
	}
	return 0;
}

void Function_176(int iParam0, bool bParam1) //Position: 0xA4F9 / 42233
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_177(struct<8>[] Param0) //Position: 0xA50F / 42255
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!Param0[iVar18].f_44)
		{
			if (IS_VOLUME_VALID(&Param0[iVar18] + 32))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Param0[iVar18] + 32))
				{
					if (Param0[iVar18].f_48)
					{
						Param0[iVar18].f_48 = 0;
					}
					bVar0 = true;
					if (!Param0[iVar18].f_52 && !iParam2[iVar1])
					{
						Param0[iVar18].f_52 = 1;
						Function_202(&Param0[iVar18] + 24, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_185(&Param0[iVar18] + 24, 0);
						Function_202(&uParam3, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_185(&uParam3, 0);
						iParam2[iVar1] = 1;
					}
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0[iVar18] + 24) == 0)
			{
				Param0[iVar18].f_44 = 1;
				Param0[iVar18].f_48 = 0;
				if (IS_BLIP_VALID(&Param0[iVar18] + 16))
				{
					REMOVE_BLIP(&Param0[iVar18] + 16);
				}
			}
		}
		iVar1++;
	}
	if (!Function_16(iParam1, 1048576))
	{
		if (Param0[08].f_44 && !Param0[18].f_44)
		{
			if (!Param0[18].f_48)
			{
				uVar2 = "";
				Function_195(&iParam1, 1048576);
			}
		}
	}
	if ((Function_16(iParam1, 1048576) && !Function_129()) && !Function_16(iParam1, 8388608))
	{
		Param0[18].f_48 = 1;
		Param0[18].f_56 = 1;
		Function_195(&iParam1, 8388608);
	}
	if (bVar0)
	{
		Function_180(&Param0);
	}
	else
	{
		Function_178(&Param0, &iParam2);
	}
}

void Function_178(struct<8>[] Param0) //Position: 0xA6C2 / 42690
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!Param0[18].f_56)
		{
			if (!iVar0 != 1 && !Param0[iVar08].f_44)
			{
				if (!IS_BLIP_VALID(&Param0[iVar08] + 16))
				{
					(&Param0[iVar08] + 16) = ADD_BLIP_FOR_COORD(&(Param0[iVar08]), 322, 0, 2, 0);
					Param0[iVar08].f_48 = 1;
					Param0[iVar08].f_52 = 0;
					Function_179(&Param0[iVar08] + 24);
					iParam1[iVar0] = 0;
				}
			}
		}
		else if (!Param0[iVar08].f_44)
		{
			if (!IS_BLIP_VALID(&Param0[iVar08] + 16))
			{
				*(&Param0[iVar08] + 16) = ADD_BLIP_FOR_COORD(&(Param0[iVar08]), 322, 0, 2, 0);
				Param0[iVar08].f_48 = 1;
				Param0[iVar08].f_52 = 0;
				Function_179(&Param0[iVar08] + 24);
				iParam1[iVar0] = 0;
			}
		}
		iVar0++;
	}
	return;
}

void Function_179(int iParam0) //Position: 0xA7B1 / 42929
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

void Function_180(struct<8>[] Param0) //Position: 0xA805 / 43013
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!Param0[18].f_56)
		{
			if (!iVar0 != 1)
			{
				if (IS_BLIP_VALID(&Param0[iVar08] + 16))
				{
					REMOVE_BLIP(&Param0[iVar08] + 16);
					Param0[iVar08].f_48 = 0;
				}
			}
		}
		else if (IS_BLIP_VALID(&Param0[iVar08] + 16))
		{
			REMOVE_BLIP(&Param0[iVar08] + 16);
			Param0[iVar08].f_48 = 0;
		}
		iVar0++;
	}
	return;
}

int Function_181(var[] uParam0, var uParam3, var uParam4) //Position: 0xA882 / 43138
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uParam0[0])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uParam3) != 0)
	{
		if (!Function_16(iParam2, 0x10000000))
		{
			Function_184(&(uParam1[0]), 0);
			Function_184(&(uParam1[1]), 0);
			Function_184(&(uParam1[2]), 0);
			Function_184(&(uParam1[3]), 0);
			SQUAD_GOALS_CLEAR(&(uParam0[1]));
			Function_193(&(uParam0[1]));
			Function_183(&(uParam0[1]));
			SQUAD_SET_FACTION(&(uParam0[1]), 19);
			SQUAD_SET_FACTION(&(uParam0[2]), 19);
			Function_182(&(uParam0[1]), 1);
			Function_194(&(uParam0[1]), &Global_54076, 4);
			Function_186(&(uParam0[1]), &Global_54076);
			DECOR_SET_BOOL(&Global_54076, "ReadyForMansionGuys", true);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&(uParam0[1])) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[1]), bVar0)))
				{
					MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[1]), bVar0), &Global_54076, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[1]), bVar0), 0);
				}
				bVar0++;
			}
			bVar1 = false;
			while (bVar1 < (SQUAD_GET_SIZE(&(uParam0[2])) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[2]), bVar1)))
				{
					MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[2]), bVar1), &Global_54076, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[2]), bVar1), 0);
				}
				bVar1++;
			}
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&(uParam0[1]), 0, &uParam4, 4, 1);
			SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&(uParam0[1]), 1, &iLocal_0 + 120, 4, 1);
			Function_192(&(uParam0[1]), -1.0f);
			SQUAD_GOALS_CLEAR(&(uParam0[2]));
			Function_193(&(uParam0[2]));
			Function_182(&(uParam0[2]), 1);
			Function_194(&(uParam0[2]), &Global_54076, 4);
			Function_186(&(uParam0[2]), &Global_54076);
			Function_192(&(uParam0[2]), -1.0f);
			Function_195(&iParam2, 0x10000000);
			return 1;
		}
	}
	return 0;
}

void Function_182(var uParam0, int iParam1) //Position: 0xAA89 / 43657
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_183(int iParam0) //Position: 0xAACE / 43726
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
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_184(var uParam0, int iParam1) //Position: 0xAB1D / 43805
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

void Function_185(var uParam0, bool bParam1) //Position: 0xAB75 / 43893
{
	var uVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_VALID(&uVar0))
			{
				HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&uVar0, bParam1);
			}
			bVar1++;
		}
	}
	else
	{
		LOG_ERROR("HUD_SET_SHOOT_BLIP_ENABLED_FOR_SQUAD got invalid squad");
	}
	return;
}

void Function_186(var uParam0, bool bParam1) //Position: 0xABF8 / 44024
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_187(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xAC53 / 44115
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
			if (Function_188(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_188(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xACBE / 44222
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

void Function_189() //Position: 0xADC4 / 44484
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Tumblew_CorralYellsPlayer", "Tumblew_CorralYellsPlayer", false, 3, 1, 0, 1);
		Function_190(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_190(int iParam0) //Position: 0xAE1F / 44575
{
	Function_191(0, &Global_54076, iParam0, 0);
	Function_191(1, &uLocal_1010, iParam0, 0);
	Function_191(2, &uLocal_1012, iParam0, 0);
	return;
}

void Function_191(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xAE46 / 44614
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_16(uParam2, Function_135(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_192(var uParam0, bool bParam1) //Position: 0xAE6E / 44654
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
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_193(int iParam0) //Position: 0xAEBF / 44735
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

void Function_194(var uParam0, bool bParam1, bool bParam2) //Position: 0xAEF4 / 44788
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_195(bool bParam0, bool bParam1) //Position: 0xAF40 / 44864
{
	bParam0 = (bParam0 || bParam1);
	return;
}

void Function_196(var[] uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xAF51 / 44881
{
	bool bVar0;
	
	if (!Function_16(iParam1, 4))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&(uParam0[0])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[0]), bVar0)))
			{
				if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[0]), bVar0), 1.0f) || Function_187(&Global_54076, &(uParam0[0]), 1, 1, 1, 40.0f))
				{
					Function_194(&(uParam0[0]), &Global_54076, 4);
					Function_186(&(uParam0[0]), &Global_54076);
					SQUAD_SET_FACTION(&(uParam0[0]), 19);
					uParam2 = 1;
					Function_195(&iParam1, 4);
					if (!Function_16(iParam1, 512))
					{
						Function_204("TUM_Obj_KillTheCriminals", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_195(&iParam1, 512);
					}
					APPEND_JOURNAL_ENTRY_DETAIL(uParam3, "TUM_Obj_KillTheCriminals", 0, 0, false);
					APPEND_JOURNAL_ENTRY(uParam3, 0);
					if (!Function_16(iParam1, 0x20000000))
					{
						Function_195(&iParam1, 0x20000000);
						if (!Function_38(Global_46951) != 2)
						{
							Function_197(Global_46951, 1);
							Global_6628 = 1;
							SET_PLAYER_ENDLESS_READYMODE(0, 1);
						}
					}
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				}
			}
			bVar0++;
		}
	}
}

void Function_197(bool bParam0, int iParam1) //Position: 0xB0A8 / 45224
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_36(bParam0))
	{
		Function_34();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_33(bParam0);
	if (StackVal != 2)
	{
		Function_29("DEED_START", bParam0);
	}
	Global_21684[bParam07].f_8 = StackVal + 1;
	Global_21684[bParam07].f_4 = 2;
	Global_10968 = bParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_78(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_31(bParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_115(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
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

void Function_198(var[] uParam0, int[] iParam1, int iParam2) //Position: 0xB1B9 / 45497
{
	bool bVar0;
	
	if (!iParam1[0])
	{
		if (Function_187(&Global_54076, &(uParam0[0]), 1, 1, 1, 40.0f))
		{
			Function_194(&(uParam0[0]), &Global_54076, 4);
			Function_202(&(uParam0[0]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_185(&(uParam0[0]), 0);
			Function_202(&iParam2, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iParam1[0] = 1;
		}
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&(uParam0[0])) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[0]), bVar0)))
		{
			if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(&(uParam0[0]), bVar0)))
			{
				if (!iParam1[0])
				{
					Function_202(&(uParam0[0]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_185(&(uParam0[0]), 0);
					iParam1[0] = 1;
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_199(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0xB2B4 / 45748
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_201(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_200(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_200(&(uVar0[1]), "UseCase1"));
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

var Function_200(var uParam0, int iParam1) //Position: 0xB431 / 46129
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_201(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xB440 / 46144
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_15())
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

void Function_202(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0xB58A / 46474
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
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

bool Function_203(var uParam0, bool bParam1) //Position: 0xB69A / 46746
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
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

void Function_204(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xB6F6 / 46838
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
			Var0 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_205() //Position: 0xB78B / 46987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Tumblew_GBYellsPlayer", "Tumblew_GBYellsPlayer", false, 2, 1, 0, 1);
		Function_190(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_206(int[] iParam0) //Position: 0xB7DE / 47070
{
	bool bVar0;
	struct<2> Var1;
	
	if (!DECOR_CHECK_EXIST(&Global_54076, "TUM_squadsDead"))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForMansionGuys"))
		{
			if (SQUAD_IS_VALID(&(iParam0[1])))
			{
				if (SQUAD_GET_SIZE(&(iParam0[1])) == 5)
				{
					bVar0 = false;
					while (bVar0 < 4)
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0)))
						{
							if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0)))
							{
								Function_103(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0), &Var1);
								if (Function_95(StackVal, Var1))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0));
								}
								else if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0), &iLocal_0 + 304))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0));
								}
								else if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0), &iLocal_0 + 312))
								{
									TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[1]), bVar0), &iLocal_0 + 1160, 0, 0, 0);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForMansionGuys"))
		{
			if (SQUAD_IS_VALID(&(iParam0[2])))
			{
				if (SQUAD_GET_SIZE(&(iParam0[2])) == 2)
				{
					bVar0 = false;
					while (bVar0 < 1)
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0)))
						{
							if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0)))
							{
								Function_103(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0), &Var1);
								if (Function_95(StackVal, Var1))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0));
								}
								else if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0), &iLocal_0 + 304))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0));
								}
								else if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0), &iLocal_0 + 312))
								{
									TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[2]), bVar0), &iLocal_0 + 1160, 0, 0, 0);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
		if (SQUAD_IS_VALID(&(iParam0[0])))
		{
			if (SQUAD_GET_SIZE(&(iParam0[0])) == 7)
			{
				bVar0 = false;
				while (bVar0 < 6)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[0]), bVar0)))
					{
						if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[0]), bVar0)))
						{
							if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[0]), bVar0), &iLocal_0 + 72))
							{
								KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[0]), bVar0));
							}
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_207(var uParam0, int iParam1) //Position: 0xBA68 / 47720
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_208(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_151(&iParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_149(&iParam1);
		}
	}
	return;
}

var Function_208(int iParam0) //Position: 0xBAAB / 47787
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

bool Function_209(bool bParam0, var uParam1) //Position: 0xBADE / 47838
{
	int iVar0;
	
	uParam1 = CREATE_OBJECTSET_IN_LAYOUT("mangyHorseSet", &bParam0, 15, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bParam0, Function_247(), 996, Vector(-4008.0f, 29,373f, 3053,609f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &iLocal_0 + 104, 1, true);
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &uParam1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bParam0, Function_247(), 997, Vector(-3997,825f, 28,66385f, 3052.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &iLocal_0 + 96, 1, true);
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &uParam1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bParam0, Function_247(), 998, Vector(-3999,753f, 28,89555f, 3050,366f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &iLocal_0 + 96, 1, true);
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &uParam1);
	return 1;
}

void Function_210(var uParam0, bool bParam1) //Position: 0xBBB7 / 48055
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &bParam1);
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

void Function_211(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* cParam7) //Position: 0xBC12 / 48146
{
	char* cVar0[16];
	char* cVar4[16];
	
	Function_215(StackVal, StackVal, StackVal, &uParam0, &uParam1, &uParam2, &uParam3, Vector(-3997,158f, 28,998f, 2937,158f), uParam4, (&iLocal_0 + 448));
	uParam5 = CREATE_OBJECTSET_IN_LAYOUT("TUM_AreaCorpses", &uParam0, 4294967295, 0);
	uParam6 = CREATE_OBJECTSET_IN_LAYOUT("TUM_AreaChests", &uParam0, 4294967295, 0);
	Function_212(&uParam0, &iLocal_0 + 512, &uParam6);
	cParam7 = CREATE_GRINGO_IN_LAYOUT(&uParam0, Function_247(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&iLocal_0 + 880), *(&iLocal_0 + 880 + 12));
	strcpy(&cVar0, "Ammo_", 16);
	straddi(&cVar0, 8, 16);
	DECOR_SET_INT(&cParam7, &cVar0, 30);
	Param8 = CREATE_GRINGO_IN_LAYOUT(&uParam0, Function_247(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&iLocal_0 + 912), *(&iLocal_0 + 912 + 12));
	strcpy(&cVar4, "Ammo_", 16);
	straddi(&cVar4, 10, 16);
	DECOR_SET_INT(&Param8, &cVar4, 30);
}

void Function_212(var uParam0, var uParam1, int iParam2) //Position: 0xBD7E / 48510
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	bool bVar4;
	struct<8> Var5;
	var uVar13;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uParam1) - 1))
	{
		iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		Function_226(&iVar1);
		Var2 = Function_226(&iVar1);
		bVar4 = GET_OBJECT_HEADING(&iVar1);
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213("amb_areaChest") };
		uVar13 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam0, &Var5, "$/content/scripting/gringo/simpleGringo/locked_footlocker", Var2, Vector(0.0f, bVar4, 0.0f));
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar13), 0);
		ADD_OBJECT_TO_OBJECTSET(&uVar13, &iParam2);
		if (DECOR_CHECK_EXIST(&iVar1, "GringoDollarAmt"))
		{
			DECOR_SET_INT(&uVar13, "GringoDollarAmt", DECOR_GET_INT(&iVar1, "GringoDollarAmt"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "GiveItem"))
		{
			DECOR_SET_INT(&uVar13, "GiveItem", DECOR_GET_INT(&iVar1, "GiveItem"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_5"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_5", DECOR_GET_INT(&iVar1, "Ammo_5"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_6"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_6", DECOR_GET_INT(&iVar1, "Ammo_6"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_7"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_7", DECOR_GET_INT(&iVar1, "Ammo_7"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_8"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_8", DECOR_GET_INT(&iVar1, "Ammo_8"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_9"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_9", DECOR_GET_INT(&iVar1, "Ammo_9"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_10"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_10", DECOR_GET_INT(&iVar1, "Ammo_10"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_11"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_11", DECOR_GET_INT(&iVar1, "Ammo_11"));
		}
		if (DECOR_CHECK_EXIST(&iVar1, "Ammo_12"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_12", DECOR_GET_INT(&iVar1, "Ammo_12"));
		}
		bVar0++;
	}
	return;
}

struct<32> Function_213(char* cParam0) //Position: 0xC065 / 49253
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_214("0", &cVar8, ""), 4);
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

struct<32> Function_214(char* cParam0) //Position: 0xC0D1 / 49361
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_215(var uParam0, bool bParam1, var uParam2, float fParam3, struct<2> Param4, bool bParam6, struct<2> Param7, var uParam9) //Position: 0xC0F3 / 49395
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	
	fVar0 = 3.0f;
	fVar1 = 0,3f;
	fVar2 = 1,5f;
	fVar3 = ((fVar0 - fVar2) - fVar1);
	bVar4 = (fVar3 * 0,8f);
	fParam3 = CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, &uParam0, Function_247(), bParam6, Param4, Vector(0.0f, 0.0f, 0.0f), "dead_ground_male");
	SET_SLEEP_TOLERANCE(GET_PHYSINST_FROM_OBJECT(&fParam3), 0.0f);
	if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam6), "female"))
	{
		bParam1 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_247(), "p_gen_noose01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), false);
		Var5 = Vector(0,01f, 0,034f, 0,003f);
		Var7 = Vector(-1,221f, 63,601f, -14,377f);
	}
	else
	{
		bParam1 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_247(), "p_gen_noose02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), false);
		Var5 = Vector(-0,008f, 0,036f, -0,008f);
		Var7 = Vector(-3,046f, 4,262f, 13,672f);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(&bParam1, &fParam3, false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&fParam3, &bParam1, false);
	ATTACH_OBJECTS(&bParam1, &fParam3, "neck", Var5, Var7, 4294967295);
	REFERENCE_OBJECT(&fParam3);
	uParam2 = CREATE_LEASH_OBJECT(&fParam3, Function_247(), 10.0f, 10, 1, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uParam2, &fParam3, "neck", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&bParam1), "attachRope", &Var9, &Var11);
	UNK_0xF76F2BB3(&Var9, &Var7, 0, 0);
	UNK_0x65DAA654(&Var11, &Var7, 0, 0, 0, 0);
	Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Var5, Var9, StackVal);
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(&uParam2, &fParam3, "neck", Var9, Var11, 0, 1, 1);
	LEASH_ATTACH_TO_WORLD(StackVal, &uParam2, Param7, Vector(0.0f, 0.0f, 0.0f), 1);
	LEASH_SET_LEASH_LENGTH(&uParam2, bVar4);
	LEASH_CONSTRAIN(&uParam2);
	LEASH_SET_CONSTRAINT_LENGTH(&uParam2, fVar3);
}

void Function_216(struct<8>[] Param0) //Position: 0xC325 / 49957
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("Tumbleweed_AALayout");
	Param0[18] = Vector(-4092,311f, 37,258f, 2941,198f);
	*(&Param0[18] + 24) = Function_217("TUM_House_Squad", &iVar0);
	*(&Param0[18] + 32) = &iLocal_0 + 80;
	Param0[18].f_44 = 0;
	Param0[18].f_48 = 0;
	Param0[18].f_40 = 0;
	Param0[18].f_56 = 0;
	*(&Param0[28] + 32) = &iLocal_0 + 80;
	Param0[28].f_44 = 0;
	Param0[28].f_48 = 0;
	Param0[28].f_40 = 0;
	Param0[28].f_56 = 0;
	Param0[08] = Vector(-3975,434f, 30,349f, 2946,225f);
	*(&Param0[08] + 24) = Function_217("TUM_CenterTown_Squad", &iVar0);
	*(&Param0[08] + 32) = &iLocal_0 + 72;
	Param0[08].f_44 = 0;
	Param0[08].f_48 = 1;
	Param0[08].f_40 = 0;
	return;
}

var Function_217(bool bParam0, int iParam1) //Position: 0xC449 / 50249
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
		if (STRING_CONTAINS_STRING(&uVar4, &bParam0) || Function_218(&bParam0, &uVar4))
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

int Function_218(char* cParam0) //Position: 0xC505 / 50437
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &Param1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_219(var uParam0, var[] uParam1, int[] iParam4) //Position: 0xC532 / 50482
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[16];
	
	uParam3 = &uParam3;
	iParam4[0] = 0;
	uParam1[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TUM_CenterTown_Squad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(uParam1[0]), 690856);
	iParam4[1] = 0;
	uParam1[1] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TUM_House_Squad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(uParam1[1]), 690856);
	iParam4[2] = 0;
	uParam1[2] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TUM_Basement_Squad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(uParam1[2]), 690856);
	uParam5 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TUM_AnimationSquad"));
	iVar0 = 0;
	while (iVar0 < 14)
	{
		uVar1 = Function_223(&Global_11420, &Global_13398, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_ACTOR_ENUM(&uVar1) == 400)
			{
				uLocal_1010 = &uVar1;
			}
			if (GET_ACTOR_ENUM(&uVar1) == 419)
			{
				uLocal_1012 = &uVar1;
			}
			if (iVar0 == 0)
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 152, 2, true);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				SQUAD_JOIN(&uVar1, &uParam5);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
				MEMORY_CONSIDER_AS(SQUAD_GET_ACTOR_BY_INDEX(&uParam5, false), &Global_54076, 4);
				MEMORY_IDENTIFY(SQUAD_GET_ACTOR_BY_INDEX(&uParam5, false), &Global_54076);
				SQUAD_SET_FACTION(&uParam5, 19);
				AI_BEHAVIOR_SET_ALLOW(&uVar1, 0, 0);
				GIVE_WEAPON_TO_ACTOR(&uVar1, 41, false, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&uVar1, 41, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar1, 0);
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&uParam5, false));
				TASK_SHOOT_ENEMIES_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&uParam5, false), &iLocal_0 + 984, -103,846f, -1.0f);
			}
			if (iVar0 <= 1 && iVar0 >= 7)
			{
				SQUAD_JOIN(&uVar1, &(uParam1[0]));
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
				AI_BEHAVIOR_SET_ALLOW(&uVar1, 0, 0);
				if (iVar0 == 1)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 160, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 6)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 168, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 2)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 176, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 3)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 184, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 4)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 192, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 5)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 200, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 7)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 208, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
			}
			else if (iVar0 <= 8 && iVar0 >= 12)
			{
				SQUAD_JOIN(&uVar1, &(uParam1[1]));
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
				AI_BEHAVIOR_SET_ALLOW(&uVar1, 0, 0);
				if (iVar0 <= 8 && iVar0 >= 11)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 120, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
				else if (iVar0 == 12)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 128, 1, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
				}
			}
			else if (iVar0 <= 13 && iVar0 >= 14)
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
				AI_BEHAVIOR_SET_ALLOW(&uVar1, 0, 0);
				SQUAD_JOIN(&uVar1, &(uParam1[2]));
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 136, 2, true);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
			}
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, 37, 5.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, 12, 5.0f);
		}
		iVar0++;
	}
	if (SQUAD_GET_SIZE(&(uParam1[0])) >= 0)
	{
		Function_195(&iParam2, 1024);
	}
	if (SQUAD_GET_SIZE(&(uParam1[1])) >= 0)
	{
		Function_195(&iParam2, 4096);
	}
	Function_221(&(uParam1[0]), 1);
	Function_194(&(uParam1[0]), &Global_54076, 2);
	Function_194(&(uParam1[1]), &Global_54076, 2);
	SQUAD_SET_FACTION(&(uParam1[1]), 19);
	SQUAD_SET_FACTION(&(uParam1[0]), 19);
	uVar2 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uParam0, "nammoCache", "$/content/scripting/gringo/simpleGringo/locked_footlocker", Vector(-3986,147f, 27,828f, 3038,892f), Vector(0.0f, -183,2096f, 0.0f));
	bVar3 = Function_220(&Global_54076, 39);
	if (bVar3 == 4294967295)
	{
		bVar3 = Function_220(&Global_54076, 40);
	}
	bVar4 = Function_220(&Global_54076, 42);
	if (bVar4 == 4294967295)
	{
		bVar4 = Function_220(&Global_54076, 41);
		if (bVar4 == 4294967295)
		{
			bVar4 = Function_220(&Global_54076, 40);
		}
	}
	strcpy(&cVar5, "Ammo_", 16);
	straddi(&cVar5, GET_AMMO_ENUM(bVar3), 16);
	DECOR_SET_INT(&uVar2, &cVar5, FLOOR(GET_WEAPON_MAX_AMMO(bVar3)) * 2);
	strcpy(&cVar5, "Ammo_", 16);
	straddi(&cVar5, GET_AMMO_ENUM(bVar4), 16);
	DECOR_SET_INT(&uVar2, &cVar5, FLOOR(GET_WEAPON_MAX_AMMO(bVar4)) * 2);
}

int Function_220(var uParam0, int iParam1) //Position: 0xCA5F / 51807
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_221(var uParam0, int iParam1) //Position: 0xCA71 / 51825
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_222(&uVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_222(var uParam0, bool bParam1) //Position: 0xCABE / 51902
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

var Function_223(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xCAE3 / 51939
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_14(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_14(&(Param0[iVar02]), 2))
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
			if (!Function_14(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_12(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_225(StackVal, &Global_10996, Function_247(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_14(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_12(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_12(&(Param0[iVar02]), 1);
	Function_224(&vParam1[iVar03] + 16, 1);
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

int Function_224(int iParam0, bool bParam1) //Position: 0xCCAA / 52394
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

var Function_225(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xCD5C / 52572
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_247(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

struct<8> Function_226(int iParam0) //Position: 0xCE83 / 52867
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_227(int[] iParam0) //Position: 0xCEAC / 52908
{
	int iVar0;
	
	if (Global_6623 || Global_6622)
	{
		iVar0 = 0;
		while (iVar0 <= iParam0)
		{
			if (IS_SCRIPT_VALID(&(iParam0[iVar0])))
			{
				TERMINATE_SCRIPT(&(iParam0[iVar0]));
			}
			iVar0++;
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		CLEAR_PRINTED_OBJECTIVE();
		Function_234();
		return 0;
	}
	return 1;
}

void Function_228() //Position: 0xCEF9 / 52985
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_657)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_658) - 1))
		{
			iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_658);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_229(&Global_54076, &iVar1) > 100.0f)
			{
				Function_226(&iVar1);
				Var3 = Function_226(&iVar1);
				if (!Function_16(iLocal_656, bVar2))
				{
					Function_195(&iLocal_656, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_176(&iLocal_656, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_229(var uParam0, int iParam1) //Position: 0xCF87 / 53127
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_230(&uParam0);
			Var0 = Function_230(&uParam0);
			Function_230(&iParam1);
			Var2 = Function_230(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_230(int iParam0) //Position: 0xD024 / 53284
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

int Function_231(var uParam0) //Position: 0xD092 / 53394
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_272(&uParam0, 2048))
	{
		return 0;
	}
	uLocal_658 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_657 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_226(&iVar1);
		Var2 = Function_226(&iVar1);
		Function_232(&iVar1);
		Var4 = Function_232(&iVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_658);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

struct<8> Function_232(bool bParam0) //Position: 0xD1BC / 53692
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

int Function_233(char* cParam0) //Position: 0xD1E5 / 53733
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

void Function_234() //Position: 0xD272 / 53874
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

int Function_235(int iParam0) //Position: 0xD2E4 / 53988
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	iParam0 = &iParam0;
	if ((!Function_127(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_122(&Global_54076, 16, 1, 0);
	}
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bVar0 > 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	uLocal_1055 = CREATE_LAYOUT("Tumbleweed_AALayout");
	bLocal_1207 = CREATE_JOURNAL_ENTRY("TumbleweedJournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_1207, 0);
	uLocal_1081[0] = Function_244("tumbleweed", "mansion", 1);
	uLocal_1081[1] = Function_244("tumbleweed", "mansion", 2);
	uLocal_1081[2] = Function_244("tumbleweed", "mansion", 5);
	uLocal_1081[3] = Function_244("tumbleweed", "mansion", 7);
	Function_242(&iLocal_1094, 996, 3, 1);
	Function_242(&iLocal_1094, 997, 3, 1);
	Function_242(&iLocal_1094, 998, 3, 1);
	Function_242(&iLocal_1094, 988, 3, 1);
	Function_242(&iLocal_1094, 984, 3, 1);
	Function_242(&iLocal_1094, 991, 3, 1);
	bLocal_1206 = Function_241();
	Function_242(&iLocal_1094, bLocal_1206, 3, 1);
	Function_242(&iLocal_1094, 133, 3, 1);
	Function_288(&iLocal_1094, "Locked_Footlocker", 1, 0);
	Function_288(&iLocal_1094, "$/fragments/p_gen_shovel02x", 0, 1);
	Function_288(&iLocal_1094, "$/fragments/p_gen_noose01x", 0, 1);
	Function_288(&iLocal_1094, "$/fragments/p_gen_noose02x", 0, 1);
	Function_288(&iLocal_1094, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_288(&iLocal_1094, "action_areas", 10, 0);
	Function_288(&iLocal_1094, "dead_ground_male", 5, 0);
	iLocal_1093 = 0;
	if (DECOR_CHECK_EXIST(&Global_54076, "TUM_MB_Running"))
	{
		DECOR_REMOVE(&Global_54076, "TUM_MB_Running");
	}
	Function_239(1);
	Function_237(32768);
	if (Function_74(Global_46951) != 0 && Function_236(Global_46951) != 2)
	{
		DECOR_SET_BOOL(&Global_54076, "SheriffNoTie", true);
	}
	if (Function_74(Global_46951) == 0)
	{
		uLocal_1069[0] = LAUNCH_NEW_SCRIPT("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/ActionArea/Tumbleweed_FTE", 0);
		Function_195(&bLocal_1237, 65536);
	}
	Function_152(Global_46951, 1);
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (!Function_14(&(Global_11420[iVar12]), 2) || Function_14(&(Global_11420[iVar12]), 4))
		{
			bLocal_1231 = true;
		}
		iVar1++;
	}
	if (!bLocal_1231)
	{
		uVar2 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_07");
		SC_CHALLENGE_LAUNCH(&uVar2);
		if (!Function_151(&iLocal_1208))
		{
			Function_73(&iLocal_1208);
		}
		else
		{
			Function_64(&iLocal_1208);
		}
	}
	iLocal_1229 = 0;
	return 1;
}

int Function_236(int iParam0) //Position: 0xD70F / 55055
{
	if (!Function_36(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_237(int iParam0) //Position: 0xD729 / 55081
{
	Function_238(&Global_43580, iParam0);
	return;
}

void Function_238(var uParam0, int iParam1) //Position: 0xD737 / 55095
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_239(int iParam0) //Position: 0xD75F / 55135
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_240())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_240() //Position: 0xD798 / 55192
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_241() //Position: 0xD7BD / 55229
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 48);
	if (bVar0 == 0)
	{
		return 9;
	}
	if (bVar0 == 1)
	{
		return 10;
	}
	if (bVar0 == 2)
	{
		return 16;
	}
	if (bVar0 == 3)
	{
		return 33;
	}
	if (bVar0 == 4)
	{
		return 34;
	}
	if (bVar0 == 5)
	{
		return 35;
	}
	if (bVar0 == 6)
	{
		return 37;
	}
	if (bVar0 == 7)
	{
		return 47;
	}
	if (bVar0 == 8)
	{
		return 71;
	}
	if (bVar0 == 9)
	{
		return 72;
	}
	if (bVar0 == 10)
	{
		return 70;
	}
	if (bVar0 == 11)
	{
		return 76;
	}
	if (bVar0 == 12)
	{
		return 79;
	}
	if (bVar0 == 13)
	{
		return 141;
	}
	if (bVar0 == 14)
	{
		return 138;
	}
	if (bVar0 == 15)
	{
		return 200;
	}
	if (bVar0 == 16)
	{
		return 203;
	}
	if (bVar0 == 17)
	{
		return 204;
	}
	if (bVar0 == 18)
	{
		return 207;
	}
	if (bVar0 == 19)
	{
		return 208;
	}
	if (bVar0 == 20)
	{
		return 217;
	}
	if (bVar0 == 21)
	{
		return 230;
	}
	if (bVar0 == 22)
	{
		return 235;
	}
	if (bVar0 == 23)
	{
		return 250;
	}
	if (bVar0 == 24)
	{
		return 312;
	}
	if (bVar0 == 25)
	{
		return 99;
	}
	if (bVar0 == 26)
	{
		return 100;
	}
	if (bVar0 == 27)
	{
		return 101;
	}
	if (bVar0 == 28)
	{
		return 102;
	}
	if (bVar0 == 29)
	{
		return 155;
	}
	if (bVar0 == 30)
	{
		return 156;
	}
	if (bVar0 == 31)
	{
		return 159;
	}
	if (bVar0 == 32)
	{
		return 160;
	}
	if (bVar0 == 33)
	{
		return 162;
	}
	if (bVar0 == 34)
	{
		return 164;
	}
	if (bVar0 == 35)
	{
		return 135;
	}
	if (bVar0 == 36)
	{
		return 136;
	}
	if (bVar0 == 37)
	{
		return 137;
	}
	if (bVar0 == 38)
	{
		return 140;
	}
	if (bVar0 == 39)
	{
		return 142;
	}
	if (bVar0 == 40)
	{
		return 143;
	}
	if (bVar0 == 41)
	{
		return 285;
	}
	if (bVar0 == 42)
	{
		return 286;
	}
	if (bVar0 == 43)
	{
		return 288;
	}
	if (bVar0 == 44)
	{
		return 291;
	}
	if (bVar0 == 45)
	{
		return 298;
	}
	if (bVar0 == 46)
	{
		return 170;
	}
	if (bVar0 == 47)
	{
		return 38;
	}
	return 39;
	return 4294967295;
}

var Function_242(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xDA3D / 55869
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_42(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_243(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_243(&(Param0[iVar02]), 8);
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

void Function_243(struct<13> Param0) //Position: 0xDB19 / 56089
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

int Function_244(var uParam0, var uParam1, int iParam2) //Position: 0xDB2C / 56108
{
	return Function_245(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_245(int iParam0, char* cParam1, bool bParam3) //Position: 0xDB40 / 56128
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

bool Function_246(bool bParam0) //Position: 0xDBE5 / 56293
{
	if (!Function_5(bParam0))
	{
		return 0;
	}
	return Function_272(&(Global_43791[bParam0]), 2048);
}

var Function_247() //Position: 0xDC03 / 56323
{
	int iVar0;
	
	return &iVar0;
}

void Function_248(char* cParam0) //Position: 0xDC0C / 56332
{
	if (!Function_286(128))
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

void Function_249(int iParam0, bool bParam1) //Position: 0xDC4C / 56396
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
		Function_250(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_250(var uParam0, int iParam1) //Position: 0xDD3C / 56636
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_251(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xDD49 / 56649
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
	(&Global_40022 + 16) = &Global_40000 + 16;
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
		Function_252();
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

void Function_252() //Position: 0xDE37 / 56887
{
	int iVar0;
	
	Global_41176 = Function_253(StackVal);
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

int Function_253(int iParam0) //Position: 0xDE85 / 56965
{
	if (!Function_254(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_254(int iParam0) //Position: 0xDE9D / 56989
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_255(bool bParam0) //Position: 0xDEB2 / 57010
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_256(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0xDEC5 / 57029
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
		Function_257();
	}
	if (&bParam5)
	{
		Function_22(1048576);
	}
}

void Function_257() //Position: 0xDFD3 / 57299
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_22(16384);
	}
	return;
}

void Function_258(int iParam0, struct<2>[] Param1, vector3[] vParam2, var uParam3) //Position: 0xDFEF / 57327
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	Function_280(&(Global_43791[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= Param1)
	{
		bVar1 = iVar0;
		if (Function_14(&(Param1[iVar02]), 1))
		{
			Function_26(&Param1, &vParam2, bVar1, 0);
		}
		Function_9(&Param1, &vParam2, bVar1, 0);
		Function_259(&(Param1[iVar02]), &(vParam2[iVar03]), 0);
		uVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&uVar2, &uParam3, 0, false, 0);
		*(&Param1[iVar02] + 8) = &uVar2;
		iVar0++;
	}
}

void Function_259(bool bParam0, int iParam1, int iParam2) //Position: 0xE073 / 57459
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&iVar0, Function_11(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&iVar0, &iParam2, 0, false, 0);
	}
	*(&bParam0 + 8) = &iVar0;
	Function_12(&bParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

void Function_260(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0xE0D3 / 57555
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_286(2))
	{
		return;
	}
	if (Function_272(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_14(&(Param0[iVar02]), 2))
		{
			if (Function_261(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_280(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_261(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0xE18B / 57739
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_272(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_14(&iParam0, 2))
	{
		return 1;
	}
	if (Function_14(&iParam0, 4))
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
		(&iParam1 + 16) = Function_225(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_95(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_13(&iParam0, 4);
	}
	Function_262(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_262(int iParam0, struct<2> Param1) //Position: 0xE30C / 58124
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_95(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_95(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_95(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_95(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_95(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_95(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_263(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xE452 / 58450
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

void Function_264(int iParam0, var uParam1, int iParam2) //Position: 0xE4B1 / 58545
{
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_270(iParam0, &uParam1, &iParam2);
		Function_269(iParam0, &uParam1, &iParam2);
		Function_268(iParam0, &uParam1, &iParam2);
		Function_267(iParam0, &uParam1, &iParam2);
		Function_266(iParam0, &uParam1, &iParam2);
		Function_265(iParam0, &uParam1, &iParam2);
	}
	return;
}

void Function_265(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xE559 / 58713
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

void Function_266(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xE5C0 / 58816
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

void Function_267(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xE629 / 58921
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

void Function_268(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xE694 / 59028
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

void Function_269(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xE6FA / 59130
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

void Function_270(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xE763 / 59235
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

int Function_271(int iParam0) //Position: 0xE7D6 / 59350
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_272(&(Global_43791[iParam0]), 4);
}

bool Function_272(var uParam0, int iParam1) //Position: 0xE7F2 / 59378
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_273(struct<2>[] Param0) //Position: 0xE80F / 59407
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_276();
	iVar1 = 0;
	if (!Function_42(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_243(&(Param0[iVar02]), 8);
		}
		else if (Function_275())
		{
			iVar1 = 1;
			Function_243(&(Param0[iVar02]), 8);
		}
		Function_243(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_42(&(Param0[iVar02]), 4))
		{
			if (!Function_42(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_42(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_42(&(Param0[02]), 8) || iVar1));
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
				Function_243(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_42(&(Param0[iVar02]), 4))
		{
			if (!Function_42(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_243(&(Param0[iVar02]), 2);
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
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_243(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_243(&(Param0[iVar02]), 2);
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
	Function_274();
	return 1;
}

void Function_274() //Position: 0xEBD1 / 60369
{
	if (!Function_286(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_275() //Position: 0xEC11 / 60433
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

void Function_276() //Position: 0xEC3F / 60479
{
	if (!Function_286(128))
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

bool Function_277(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xEC81 / 60545
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
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_15())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_272(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_14(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_14(&(Param0[iVar02]), 8))
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

bool Function_278() //Position: 0xED6A / 60778
{
	return 0;
}

void Function_279(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xED71 / 60785
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
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_15())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_272(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_280(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_12(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_12(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_280(var uParam0, int iParam1) //Position: 0xEE61 / 61025
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_281() //Position: 0xEE72 / 61042
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
	
	Function_282(3, 3);
	uVar0 = &uVar0;
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/vulture_carcass", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_288(&iLocal_312 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	if (!Function_273(&iLocal_312 + 8))
	{
		return 0;
	}
	iLocal_312 = FIND_NAMED_LAYOUT("Tumbleweed_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_312))
	{
		iLocal_312 = CREATE_LAYOUT("Tumbleweed_layout");
	}
	*(&iLocal_312 + 432) = CREATE_OBJECTSET_IN_LAYOUT("DigGraveGRPSet", &iLocal_312, 8, 0);
	*(&iLocal_312 + 440[03]) = Vector(-3906,102f, 31,12174f, 2906,848f);
	*(&iLocal_312 + 440[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag24", Vector(-3906,102f, 31,12174f, 2906,848f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_312 + 432);
	*(&iLocal_312 + 440[13]) = Vector(-3908,247f, 31,12174f, 2904,38f);
	*(&iLocal_312 + 440[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag1", Vector(-3908,247f, 31,12174f, 2904,38f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_312 + 432);
	*(&iLocal_312 + 440[23]) = Vector(-3912.0f, 30,72745f, 2900,079f);
	*(&iLocal_312 + 440[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag2", Vector(-3912.0f, 30,72745f, 2900,079f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_312 + 432);
	*(&iLocal_312 + 440[33]) = Vector(-3910,503f, 31,12174f, 2901,969f);
	*(&iLocal_312 + 440[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag3", Vector(-3910,503f, 31,12174f, 2901,969f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_312 + 432);
	*(&iLocal_312 + 440[43]) = Vector(-3918,179f, 31,12174f, 2896,037f);
	*(&iLocal_312 + 440[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag4", Vector(-3918,179f, 31,12174f, 2896,037f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_312 + 432);
	*(&iLocal_312 + 440[53]) = Vector(-3925,637f, 31,12174f, 2905,692f);
	*(&iLocal_312 + 440[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag5", Vector(-3925,637f, 31,12174f, 2905,692f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_312 + 432);
	*(&iLocal_312 + 440[63]) = Vector(-3922,483f, 31,12174f, 2905,238f);
	*(&iLocal_312 + 440[63] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag6", Vector(-3922,483f, 31,12174f, 2905,238f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_312 + 432);
	*(&iLocal_312 + 440[73]) = Vector(-3919,279f, 31,12174f, 2908,607f);
	*(&iLocal_312 + 440[73] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag7", Vector(-3919,279f, 31,12174f, 2908,607f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_312 + 432);
	*(&iLocal_312 + 440[83]) = Vector(-3926,402f, 31,12174f, 2909,343f);
	*(&iLocal_312 + 440[83] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag8", Vector(-3926,402f, 31,12174f, 2909,343f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_312 + 432);
	*(&iLocal_312 + 440[93]) = Vector(-3921,58f, 31,12174f, 2911,037f);
	*(&iLocal_312 + 440[93] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag9", Vector(-3921,58f, 31,12174f, 2911,037f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_312 + 432);
	*(&iLocal_312 + 440[103]) = Vector(-3925,404f, 31,12174f, 2912,359f);
	*(&iLocal_312 + 440[103] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag10", Vector(-3925,404f, 31,12174f, 2912,359f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_312 + 432);
	*(&iLocal_312 + 440[113]) = Vector(-3924,111f, 31,12174f, 2914,913f);
	*(&iLocal_312 + 440[113] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag11", Vector(-3924,111f, 31,12174f, 2914,913f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_312 + 432);
	*(&iLocal_312 + 440[123]) = Vector(-3917,777f, 31,12174f, 2911,917f);
	*(&iLocal_312 + 440[123] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag12", Vector(-3917,777f, 31,12174f, 2911,917f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_312 + 432);
	*(&iLocal_312 + 440[133]) = Vector(-3919,149f, 31,12174f, 2915,562f);
	*(&iLocal_312 + 440[133] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag13", Vector(-3919,149f, 31,12174f, 2915,562f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_312 + 432);
	*(&iLocal_312 + 440[143]) = Vector(-3922,116f, 31,12174f, 2917,964f);
	*(&iLocal_312 + 440[143] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag14", Vector(-3922,116f, 31,12174f, 2917,964f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_312 + 432);
	*(&iLocal_312 + 440[153]) = Vector(-3920,486f, 31,12174f, 2920,596f);
	*(&iLocal_312 + 440[153] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag15", Vector(-3920,486f, 31,12174f, 2920,596f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_312 + 432);
	*(&iLocal_312 + 440[163]) = Vector(-3917,523f, 31,12174f, 2922,875f);
	*(&iLocal_312 + 440[163] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag16", Vector(-3917,523f, 31,12174f, 2922,875f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_312 + 432);
	*(&iLocal_312 + 440[173]) = Vector(-3912,312f, 31,12174f, 2925,515f);
	*(&iLocal_312 + 440[173] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag17", Vector(-3912,312f, 31,12174f, 2925,515f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_312 + 432);
	*(&iLocal_312 + 440[183]) = Vector(-3914,817f, 31,12174f, 2923,994f);
	*(&iLocal_312 + 440[183] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag18", Vector(-3914,817f, 31,12174f, 2923,994f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_312 + 432);
	*(&iLocal_312 + 440[193]) = Vector(-3911,528f, 31,12174f, 2921,32f);
	*(&iLocal_312 + 440[193] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag19", Vector(-3911,528f, 31,12174f, 2921,32f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar20, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_312 + 432);
	*(&iLocal_312 + 440[203]) = Vector(-3914,519f, 31,12174f, 2919,528f);
	*(&iLocal_312 + 440[203] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag20", Vector(-3914,519f, 31,12174f, 2919,528f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar21, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_312 + 432);
	*(&iLocal_312 + 440[213]) = Vector(-3916,419f, 31,12174f, 2917,745f);
	*(&iLocal_312 + 440[213] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag21", Vector(-3916,419f, 31,12174f, 2917,745f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar22, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_312 + 432);
	*(&iLocal_312 + 440[223]) = Vector(-3913,778f, 31,12174f, 2915,724f);
	*(&iLocal_312 + 440[223] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag22", Vector(-3913,778f, 31,12174f, 2915,724f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar23, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_312 + 432);
	*(&iLocal_312 + 440[233]) = Vector(-3906,247f, 31,12174f, 2918,422f);
	*(&iLocal_312 + 440[233] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Flag23", Vector(-3906,247f, 31,12174f, 2918,422f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar24, "UseAnim", "pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_312 + 432);
	*(&iLocal_312 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_nearwall01", "Rand_Idle_NearWall_nospawn", Vector(-3956,483f, 29,89923f, 2941,503f), Vector(0.0f, 127,0799f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1024), 0);
	*(&iLocal_312 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_nearwall02", "Rand_Idle_NearWall_nospawn", Vector(-3964,083f, 29,3562f, 2958,197f), Vector(0.0f, 12,55389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1032), 0);
	*(&iLocal_312 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_nearwall03", "Rand_Idle_NearWall_nospawn", Vector(-3974,104f, 29,3562f, 2959,421f), Vector(0.0f, 12,55389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1040), 0);
	*(&iLocal_312 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_leanrail01", "lean_rail_nospawn", Vector(-3980,157f, 31,94822f, 2918,335f), Vector(0.0f, 165,4633f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1048), 0);
	*(&iLocal_312 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "sit_headinhands02", "nsit_docks", Vector(-3991,309f, 29,38124f, 2950,047f), Vector(0.0f, 284,5418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1056), 0);
	*(&iLocal_312 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_randidle01", "look_out_window_L", Vector(-3993,462f, 29,34721f, 2953,094f), Vector(0.0f, -77,11397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1064), 0);
	*(&iLocal_312 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_kneelvomit01", "stand_kneelvomit_n_any", Vector(-3992,244f, 28,2368f, 2932,186f), Vector(0.0f, 591,0729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1072), 0);
	*(&iLocal_312 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_yelling01", "stand_yelling", Vector(-3998,34f, 28,24254f, 2937,194f), Vector(0.0f, 636,315f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1080), 0);
	*(&iLocal_312 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_peeing02", "stand_peeing_b_any", Vector(-4000,305f, 28,62311f, 2945,216f), Vector(0.0f, 583,6069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1088), 0);
	*(&iLocal_312 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "vulture_carcass", "vulture_carcass", Vector(-3937,402f, 29,607f, 2940,842f), Vector(0.0f, 66,97f, 0.0f));
	*(&iLocal_312 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "vulture_carcass1", "vulture_carcass", Vector(-3938,391f, 29,543f, 2940,184f), Vector(0.0f, 251,4546f, 0.0f));
	*(&iLocal_312 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-3972,201f, 29,3537f, 2969,121f), Vector(0.0f, 96,67087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1112), 0);
	*(&iLocal_312 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "sleeping_scripted", "sleeping_scripted", Vector(-3964,11f, 29,49107f, 2970,492f), Vector(0.0f, -21,66837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1120), 0);
	*(&iLocal_312 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Pee_nospawn", "Pee_nospawn", Vector(-3945,962f, 28,0964f, 2964,621f), Vector(0.0f, -112,395f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1128), 0);
	*(&iLocal_312 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Pee_nospawn1", "Pee_nospawn", Vector(-3969,06f, 28,60759f, 2962,347f), Vector(0.0f, 106,7274f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1136), 0);
	*(&iLocal_312 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", Vector(-3977,78f, 29,2486f, 2961,896f), Vector(0.0f, 12,06175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1144), 0);
	*(&iLocal_312 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", Vector(-3980,62f, 32,30972f, 2962,506f), Vector(0.0f, 15,50468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1152), 0);
	*(&iLocal_312 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(-3981,085f, 29,26598f, 2964,424f), Vector(0.0f, -120,5071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1160), 0);
	*(&iLocal_312 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", Vector(-3977,215f, 29,34775f, 2965,374f), Vector(0.0f, 102,4699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1168), 0);
	*(&iLocal_312 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Rand_Idle_Sit_Ground_nospawn2f", "Rand_Idle_Sit_Ground_nospawn", Vector(-3964,109f, 29,37589f, 2964,187f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1176), 0);
	*(&iLocal_312 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(-3966,724f, 29,44706f, 2960,713f), Vector(0.0f, 11,06243f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1184), 0);
	*(&iLocal_312 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(-3979,396f, 32,28926f, 2961,967f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1192), 0);
	*(&iLocal_312 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "sit_headinhands_n_any1", "Rand_Idle_NearWall_Shoulder_L", Vector(-3977,961f, 29,25462f, 2971,488f), Vector(0.0f, -71,28572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1200), 0);
	*(&iLocal_312 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "smoking_stand", "smoking_stand", Vector(-4084,939f, 36,02277f, 2957,816f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1208), 0);
	*(&iLocal_312 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "smoking_stand1", "smoking_stand", Vector(-4080.0f, 35,68636f, 2952f), Vector(0.0f, 214,9247f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1216), 0);
	*(&iLocal_312 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_yelling", "stand_yelling", Vector(-4079,369f, 35,51023f, 2956f), Vector(0.0f, -77,36435f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1224), 0);
	*(&iLocal_312 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_yelling1", "stand_yelling", Vector(-4077,646f, 35,47124f, 2947,833f), Vector(0.0f, 169,9451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1232), 0);
	*(&iLocal_312 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_spit", "stand_spit", Vector(-4082,778f, 35,74409f, 2951,333f), Vector(0.0f, -54,97047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1240), 0);
	*(&iLocal_312 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "Pee", "Pee", Vector(-4081,666f, 35,68197f, 2945,712f), Vector(0.0f, 100,1252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1248), 0);
	*(&iLocal_312 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_spit1", "sit_headinhands_n_any", Vector(-4085,382f, 35,7482f, 2952,974f), Vector(0.0f, -122,7377f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1256), 0);
	*(&iLocal_312 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "tumbleweed_01", "lean_fence_L_talking", Vector(-4083,174f, 37,21607f, 2945,039f), Vector(0.0f, 239,0258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1264), 0);
	*(&iLocal_312 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "tumbleweed_02", "look_out_window_R", Vector(-4084,462f, 37,21607f, 2947,434f), Vector(0.0f, 239,0258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1272), 0);
	*(&iLocal_312 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "tumbleweed_03", "nlean_rail", Vector(-4086,047f, 37,21607f, 2950,391f), Vector(0.0f, 239,0258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1280), 0);
	*(&iLocal_312 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "tumbleweed_04", "Rand_Idle_NearWall", Vector(-4082,791f, 37,21607f, 2942,805f), Vector(0.0f, 239,0258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1288), 0);
	*(&iLocal_312 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "horse_tend", "horse_tend", Vector(-4067,614f, 32,24473f, 2985,871f), Vector(0.0f, 210,4558f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1296), 0);
	*(&iLocal_312 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "horse_tend1", "horse_tend", Vector(-4063,796f, 32,19603f, 2981,507f), Vector(0.0f, 256,6527f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1304), 0);
	*(&iLocal_312 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "tumbleweed_05", "stand_lookdistance_w_any", Vector(-4083,733f, 37,21607f, 2946,219f), Vector(0.0f, 239,0258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1312), 0);
	*(&iLocal_312 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "tumbleweed_06", "stand_lookdistance_w_any", Vector(-3899,871f, 31,84533f, 2927,522f), Vector(0.0f, 172,6347f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1320), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "rand_idle_stand", "rand_idle_stand", Vector(-3901,799f, 31,12171f, 2927,992f), Vector(0.0f, -165,9532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "rand_idle_stand1", "Rand_Idle_NearWall", Vector(-3901,081f, 30,87409f, 2934,851f), Vector(0.0f, -99,86557f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "rand_idle_stand2", "Sit_Ground_Only", Vector(-3901,578f, 31,00146f, 2929,798f), Vector(0.0f, -142,2484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "rand_idle_stand3", "Sit_Ground_Only", Vector(-3899,72f, 31,01221f, 2930,18f), Vector(0.0f, -230,5389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_312 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "grave_sit_headinhands", "sit_headinhands_n_any", Vector(-4094,39f, 40,61429f, 2948,046f), Vector(0.0f, -145,0607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_312 + 1328), 0);
	*(&iLocal_312 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_spit2", "stand_spit", Vector(-3887,211f, 31,12166f, 2924,789f), Vector(0.0f, -210,0311f, 0.0f));
	*(&iLocal_312 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "stand_spit3", "stand_spit", Vector(-3891,744f, 31,12174f, 2912,286f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_312 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "smoking_stand2", "smoking_stand", Vector(-3878,785f, 31,24907f, 2923,221f), Vector(0.0f, -180,593f, 0.0f));
	*(&iLocal_312 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "smoking_stand3", "smoking_stand", Vector(-3880,131f, 31,38739f, 2922,635f), Vector(0.0f, -258,556f, 0.0f));
	*(&iLocal_312 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_312, "smoking_stand4", "smoking_stand", Vector(-3904,54f, 31,12168f, 2924f), Vector(0.0f, 90,05317f, 0.0f));
	return 1;
}

void Function_282(int iParam0, int iParam1) //Position: 0x11234 / 70196
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

bool Function_283() //Position: 0x1127E / 70270
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	Function_282(3, 3);
	uVar0 = &uVar0;
	Function_288(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_288(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	if (!Function_273(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("Tumbleweed_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Tumbleweed_layout");
	}
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_upstairs", 2,802597E-45f, Vector(-4084,735f, 41,55975f, 2942,39f), Vector(0.0f, -29,51146f, 0.0f), Vector(2,568923f, 2,410614f, 14,77269f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "tumv_mansionInside", 2,802597E-45f, Vector(-4090,239f, 37,76493f, 2944,348f), Vector(0.0f, -33,98817f, 0.0f), Vector(27,23937f, 55,07125f, 21,66409f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "tumv_townInside", 2,802597E-45f, Vector(-3977,544f, 32,25373f, 2938,717f), Vector(0.0f, 0.0f, 0.0f), Vector(28,56358f, 29,44215f, 51,28766f));
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_genBig", 4,203895E-45f, Vector(-3977,329f, 32,21666f, 2941,784f), Vector(0.0f, 20.0f, 0.0f), Vector(65,16049f, 18,06927f, 58,24506f));
	*(&iLocal_0 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_houseBig", 4,203895E-45f, Vector(-4086,112f, 42,08514f, 2950,396f), Vector(0.0f, 20.0f, 0.0f), Vector(38,19824f, 16,27185f, 38,19824f));
	*(&iLocal_0 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_houseAggroAdd", 2,802597E-45f, Vector(-3920,058f, 0.0f, 3042,033f), Vector(0.0f, -28,60571f, 0.0f), Vector(39,68588f, 39,68588f, 39,68588f));
	*(&iLocal_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_pen1", 2,802597E-45f, Vector(-3997,895f, 28,36437f, 3051,635f), Vector(0.0f, 15,76106f, 0.0f), Vector(5,843853f, 5,843853f, 6,516117f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_pen2", 2,802597E-45f, Vector(-4008,417f, 29,41184f, 3053,813f), Vector(0.0f, 9,964094f, 0.0f), Vector(5,861253f, 4,511758f, 5,922601f));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_inHouse", 2,802597E-45f, Vector(-4092,385f, 37,21731f, 2941,887f), Vector(0.0f, -29,92689f, 0.0f), Vector(21,60211f, 17,76842f, 22,44565f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_HOUSE_STAYIN", 2,802597E-45f, Vector(-4095,388f, 38,51274f, 2934,629f), Vector(0.0f, -30,52006f, 0.0f), Vector(3,69933f, 2,942006f, 5,281651f));
	*(&iLocal_0 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "INHOUSE2_VOLUME", 2,802597E-45f, Vector(-4086,277f, 42,27808f, 2945,561f), Vector(0.0f, -28,59323f, 0.0f), Vector(2,657445f, 3,782204f, 4,905824f));
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_BASEMENT", 2,802597E-45f, Vector(-4091,639f, 35,23508f, 2939,765f), Vector(0.0f, -31,33302f, 0.0f), Vector(15,9445f, 3,106111f, 15,84418f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "tumv_amb_vultures", 4,203895E-45f, Vector(-4016.0f, 61,48221f, 2968.0f), Vector(0.0f, 20.0f, 0.0f), Vector(21,41178f, 4,672281f, 21,41178f));
	*(&iLocal_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_StandOver", 2,802597E-45f, Vector(-3997,819f, 28,23206f, 2934,455f), Vector(1,163194f, 60,48953f, 0,8368272f), Vector(3,568475f, 4,200047f, 3,436358f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TOWN2", 2,802597E-45f, Vector(-3978,99f, 27,16224f, 2908,762f), Vector(0.0f, -60,5605f, 0.0f), Vector(12,23938f, 15,48741f, 9,772036f));
	*(&iLocal_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TOWN_center", 4,203895E-45f, Vector(-3975,6f, 28,16267f, 2943,68f), Vector(0.0f, 20.0f, 0.0f), Vector(13,98738f, 13,98738f, 13,98738f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TOWN3", 2,802597E-45f, Vector(-3978,31f, 33,03001f, 2918,576f), Vector(0.0f, -15,67325f, 0.0f), Vector(3,851652f, 2,559313f, 2,321757f));
	*(&iLocal_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TOWN4", 2,802597E-45f, Vector(-3953,089f, 30,02684f, 2938,424f), Vector(0.0f, -52,81564f, 0.0f), Vector(6,968003f, 6,968003f, 11,60637f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TOWN5", 2,802597E-45f, Vector(-3960,414f, 29,94275f, 2958,398f), Vector(0.0f, -74,63547f, 0.0f), Vector(6,638144f, 5,124949f, 6,835195f));
	*(&iLocal_0 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_sheriffIn", 2,802597E-45f, Vector(-3997,702f, 29,15334f, 2952,097f), Vector(0.0f, 16,4133f, 0.0f), Vector(10,43502f, 10,43502f, 15,4332f));
	*(&iLocal_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_INSHERIFF3", 2,802597E-45f, Vector(-3979,778f, 31,04726f, 2962,124f), Vector(0.0f, 14,52715f, 0.0f), Vector(5,843855f, 8,197127f, 1,731026f));
	*(&iLocal_0 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MansionComeOut", 2,802597E-45f, Vector(-4081,082f, 41,43871f, 2949,912f), Vector(0.0f, -28,82555f, 0.0f), Vector(10,13353f, 13,25633f, 20,27029f));
	*(&iLocal_0 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_PlayerNearMansion", 2,802597E-45f, Vector(-4056.0f, 30,71028f, 2968f), Vector(0.0f, -29,59414f, 0.0f), Vector(30,29621f, 20,19148f, 52,80212f));
	*(&iLocal_0 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_SheriffRoam", 2,802597E-45f, Vector(-3916,566f, 21,83624f, 2679,847f), Vector(0.0f, -39,68338f, 0.0f), Vector(8,561084f, 8,561084f, 8,561084f));
	*(&iLocal_0 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_VolumeSet01", 2,802597E-45f, Vector(-3898,692f, 35,73768f, 2918,275f), Vector(0.0f, -16,22889f, 0.0f), Vector(136,2227f, 69,52171f, 108,9899f));
	*(&iLocal_0 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_VolumeSet02", 2,802597E-45f, Vector(-3979,986f, 35,73768f, 2952,588f), Vector(0.0f, -20,96874f, 0.0f), Vector(175,9891f, 69,52171f, 108,9899f));
	*(&iLocal_0 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_VolumeSet03", 2,802597E-45f, Vector(-3994,993f, 35,73768f, 3051,826f), Vector(0.0f, -20,96874f, 0.0f), Vector(124,9585f, 46,70904f, 90,78781f));
	*(&iLocal_0 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_CloseToHostageTaker", 2,802597E-45f, Vector(-3996,71f, 29,29077f, 2925,798f), Vector(0.0f, 25,80386f, 0.0f), Vector(10,34651f, 4,200047f, 13,88339f));
	*(&iLocal_0 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MansionComeOut1", 2,802597E-45f, Vector(-4081,044f, 38,24461f, 2961,503f), Vector(0.0f, -1,021253f, 0.0f), Vector(11,43818f, 13,25633f, 10,8929f));
	*(&iLocal_0 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MansionComeOut2", 2,802597E-45f, Vector(-4088,909f, 37,969f, 2940,649f), Vector(0.0f, -28,91998f, 0.0f), Vector(11,43818f, 16,06557f, 10,8929f));
	*(&iLocal_0 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_PlayerNearMansion1", 2,802597E-45f, Vector(-4077,689f, 35,77419f, 2955,681f), Vector(0.0f, -29,59414f, 0.0f), Vector(30,29621f, 20,19148f, 52,80212f));
	*(&iLocal_0 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_PlayCoverAudio", 2,802597E-45f, Vector(-4027,5f, 31,05175f, 2947,971f), Vector(0.0f, 16,60229f, 0.0f), Vector(32,35521f, 24,64494f, 60,71115f));
	*(&iLocal_0 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_ChangeMood", 4,203895E-45f, Vector(-4070,817f, 25,09504f, 2953,534f), Vector(0.0f, 20.0f, 0.0f), Vector(40,13965f, 40,13965f, 40,13965f));
	*(&iLocal_0 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_roofVolume", 2,802597E-45f, Vector(-4092,427f, 48,13748f, 2942,142f), Vector(0.0f, -30,10057f, 0.0f), Vector(20,38203f, 8,670809f, 23,12734f));
	*(&iLocal_0 + 320) = Vector(-3874,665f, 37,14856f, 2950,946f);
	*(&iLocal_0 + 320 + 12) = Vector(0.0f, 68,76662f, 0.0f);
	*(&iLocal_0 + 344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_teleport", Vector(-3874,665f, 37,14856f, 2950,946f), Vector(0.0f, 68,76662f, 0.0f));
	*(&iLocal_0 + 352) = Vector(-4001,897f, 28,77273f, 2922,704f);
	*(&iLocal_0 + 352 + 12) = Vector(0.0f, -20,98411f, 0.0f);
	*(&iLocal_0 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_lawSpawn_Gallows", Vector(-4001,897f, 28,77273f, 2922,704f), Vector(0.0f, -20,98411f, 0.0f));
	*(&iLocal_0 + 384) = Vector(-4081,759f, 36,0447f, 2934,203f);
	*(&iLocal_0 + 384 + 12) = Vector(0.0f, -24,20032f, 0.0f);
	*(&iLocal_0 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_horseOne", Vector(-4081,759f, 36,0447f, 2934,203f), Vector(0.0f, -24,20032f, 0.0f));
	*(&iLocal_0 + 416) = Vector(-4083,287f, 36,2049f, 2933,231f);
	*(&iLocal_0 + 416 + 12) = Vector(0,2059246f, -28,11596f, 0,01875682f);
	*(&iLocal_0 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_horseTwo", Vector(-4083,287f, 36,2049f, 2933,231f), Vector(0,2059246f, -28,11596f, 0,01875682f));
	*(&iLocal_0 + 448) = Vector(-3997,158f, 32,04127f, 2937,159f);
	*(&iLocal_0 + 448 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_HangingTop", Vector(-3997,158f, 32,04127f, 2937,159f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 480) = Vector(-3997,158f, 28,24082f, 2937,159f);
	*(&iLocal_0 + 480 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_HangingGround", Vector(-3997,158f, 28,24082f, 2937,159f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 512) = CREATE_OBJECTSET_IN_LAYOUT("rewardChestsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 520[03]) = Vector(-3980,779f, 28,44726f, 2906,583f);
	*(&iLocal_0 + 520[03] + 12) = Vector(0.0f, 120,9871f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest1", Vector(-3980,779f, 28,44726f, 2906,583f), Vector(0.0f, 120,9871f, 0.0f));
	DECOR_SET_INT(&uVar1, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_0 + 512);
	*(&iLocal_0 + 520[13]) = Vector(-4010,945f, 29,13137f, 2916,423f);
	*(&iLocal_0 + 520[13] + 12) = Vector(0.0f, -184,305f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest2", Vector(-4010,945f, 29,13137f, 2916,423f), Vector(0.0f, -184,305f, 0.0f));
	DECOR_SET_INT(&uVar2, "Ammo_9", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_0 + 512);
	*(&iLocal_0 + 520[23]) = Vector(-3975,424f, 25,26292f, 2875,275f);
	*(&iLocal_0 + 520[23] + 12) = Vector(0.0f, -89,38404f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest3", Vector(-3975,424f, 25,26292f, 2875,275f), Vector(0.0f, -89,38404f, 0.0f));
	DECOR_SET_INT(&uVar3, "GiveItem", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_0 + 512);
	*(&iLocal_0 + 520[33]) = Vector(-3948,066f, 28,10863f, 2964,988f);
	*(&iLocal_0 + 520[33] + 12) = Vector(0.0f, 180,0867f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest4", Vector(-3948,066f, 28,10863f, 2964,988f), Vector(0.0f, 180,0867f, 0.0f));
	DECOR_SET_INT(&uVar4, "GiveItem", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_0 + 512);
	*(&iLocal_0 + 520[43]) = Vector(-4091,129f, 37,21381f, 2954,017f);
	*(&iLocal_0 + 520[43] + 12) = Vector(0.0f, -22,62761f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest5", Vector(-4091,129f, 37,21381f, 2954,017f), Vector(0.0f, -22,62761f, 0.0f));
	DECOR_SET_INT(&uVar5, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_0 + 512);
	*(&iLocal_0 + 520[53]) = Vector(-3981,026f, 27,83225f, 3037,358f);
	*(&iLocal_0 + 520[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest6", Vector(-3981,026f, 27,83225f, 3037,358f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_INT(&uVar6, "Ammo_9", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_0 + 512);
	*(&iLocal_0 + 520[63]) = Vector(-4081,135f, 34,57015f, 2977,369f);
	*(&iLocal_0 + 520[63] + 12) = Vector(0.0f, 10,64839f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_chest7", Vector(-4081,135f, 34,57015f, 2977,369f), Vector(0.0f, 10,64839f, 0.0f));
	DECOR_SET_INT(&uVar7, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_0 + 512);
	*(&iLocal_0 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "HOUSE1", Vector(-4094,922f, 37,21381f, 2936,705f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "HOUSE2", Vector(-4097,092f, 37,26976f, 2935,162f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "HOUSE3", Vector(-4093,558f, 37,26976f, 2933,848f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "HOUSE4", Vector(-4095,265f, 37,22854f, 2934,547f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "INHOUSE2", Vector(-4095,653f, 37,21381f, 2932,349f), Vector(0.0f, -121,0326f, 0.0f));
	*(&iLocal_0 + 736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nBASEMENT1", Vector(-4099,655f, 37,22456f, 2942,61f), Vector(0.0f, -126,1021f, 0.0f));
	*(&iLocal_0 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nBASEMENT2", Vector(-4098,767f, 37,22456f, 2942,229f), Vector(0.0f, -119,2245f, 0.0f));
	*(&iLocal_0 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TOWN1", Vector(-3998,036f, 28,22873f, 2933,964f), Vector(0.0f, -125,5167f, 0.0f));
	*(&iLocal_0 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TOWN2", Vector(-3981,839f, 28,45122f, 2906,455f), Vector(0.0f, -154,2482f, 0.0f));
	*(&iLocal_0 + 768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_INSHERIFF2", Vector(-3977,047f, 28,11759f, 2942,953f), Vector(0.0f, -135,6129f, 0.0f));
	*(&iLocal_0 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TOWN3", Vector(-3978,502f, 31,92479f, 2917,959f), Vector(0.0f, -187,8257f, 0.0f));
	*(&iLocal_0 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TOWN4", Vector(-3953.0f, 29,92f, 2941.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TOWN5", Vector(-3968,541f, 28,3825f, 2948,035f), Vector(0.0f, -69,32149f, 0.0f));
	*(&iLocal_0 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_INSHERIFF1", Vector(-3997,209f, 29,31378f, 2950,487f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_INSHERIFF3", Vector(-3980,111f, 32,29058f, 2962,586f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 816) = Vector(-4060.0f, 31,10222f, 2952f);
	*(&iLocal_0 + 816 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SheriffGoToSpot", Vector(-4060.0f, 31,10222f, 2952f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 848) = Vector(-4076,522f, 35,67557f, 2945,216f);
	*(&iLocal_0 + 848 + 12) = Vector(0.0f, 71,81523f, 0.0f);
	*(&iLocal_0 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SheriffTeleport", Vector(-4076,522f, 35,67557f, 2945,216f), Vector(0.0f, 71,81523f, 0.0f));
	*(&iLocal_0 + 880) = Vector(-3987,058f, 27,82765f, 3051,004f);
	*(&iLocal_0 + 880 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ammoFootlocker01", Vector(-3987,058f, 27,82765f, 3051,004f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 912) = Vector(-3998,304f, 29,36919f, 2947,024f);
	*(&iLocal_0 + 912 + 12) = Vector(0.0f, -166,8464f, 0.0f);
	*(&iLocal_0 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ammoFootlocker02", Vector(-3998,304f, 29,36919f, 2947,024f), Vector(0.0f, -166,8464f, 0.0f));
	*(&iLocal_0 + 944) = Vector(-3891,426f, 39,10479f, 2976,432f);
	*(&iLocal_0 + 944 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SheriffSpawnNoTie", Vector(-3891,426f, 39,10479f, 2976,432f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_gringoPos", Vector(-4076,522f, 35,67557f, 2945,216f), Vector(0.0f, 156,5471f, 0.0f));
	*(&iLocal_0 + 984) = Vector(-4002,559f, 28,77277f, 2922,344f);
	*(&iLocal_0 + 984 + 12) = Vector(0.0f, -109,9354f, 0.0f);
	*(&iLocal_0 + 1008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_hostageGringo", Vector(-4002,559f, 28,77277f, 2922,344f), Vector(0.0f, -109,9354f, 0.0f));
	*(&iLocal_0 + 1016) = Vector(-4076,522f, 35,67557f, 2945,216f);
	*(&iLocal_0 + 1016 + 12) = Vector(0.0f, -208,7272f, 0.0f);
	*(&iLocal_0 + 1040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SheriffPos", Vector(-4076,522f, 35,67557f, 2945,216f), Vector(0.0f, -208,7272f, 0.0f));
	*(&iLocal_0 + 1048) = Vector(-4077,03f, 35,61034f, 2946,153f);
	*(&iLocal_0 + 1048 + 12) = Vector(0.0f, -388,1979f, 0.0f);
	*(&iLocal_0 + 1072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_MarstonPos", Vector(-4077,03f, 35,61034f, 2946,153f), Vector(0.0f, -388,1979f, 0.0f));
	*(&iLocal_0 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportHide01", Vector(-4090,661f, 37,24136f, 2941,86f), Vector(0.0f, -83,01345f, 0.0f));
	*(&iLocal_0 + 1088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportHide02", Vector(-4076,522f, 35,6576f, 2945,216f), Vector(0.0f, -119,4231f, 0.0f));
	*(&iLocal_0 + 1096) = Vector(-4002,63f, 28,77279f, 2923,092f);
	*(&iLocal_0 + 1096 + 12) = Vector(0.0f, -10,86022f, 0.0f);
	*(&iLocal_0 + 1120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportMarsMid", Vector(-4002,63f, 28,77279f, 2923,092f), Vector(0.0f, -10,86022f, 0.0f));
	*(&iLocal_0 + 1128) = Vector(-4002,251f, 28,77276f, 2921,945f);
	*(&iLocal_0 + 1128 + 12) = Vector(0.0f, -190,1203f, 0.0f);
	*(&iLocal_0 + 1152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportSheriffMid", Vector(-4002,251f, 28,77276f, 2921,945f), Vector(0.0f, -190,1203f, 0.0f));
	*(&iLocal_0 + 1160) = Vector(-4090,118f, 33,86153f, 2934,964f);
	*(&iLocal_0 + 1160 + 12) = Vector(0.0f, -136,8632f, 0.0f);
	*(&iLocal_0 + 1184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportBasement", Vector(-4090,118f, 33,86153f, 2934,964f), Vector(0.0f, -136,8632f, 0.0f));
	*(&iLocal_0 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-3968,541f, 28,4404f, 2948,035f), Vector(0.0f, -87,04881f, 0.0f));
	*(&iLocal_0 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-3979,998f, 32,29158f, 2962,682f), Vector(0.0f, 14,65417f, 0.0f));
	*(&iLocal_0 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-3978,41f, 31,92476f, 2918,274f), Vector(0.0f, -195,3569f, 0.0f));
	*(&iLocal_0 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-3981,955f, 28,4549f, 2906,25f), Vector(0.0f, -150,4357f, 0.0f));
	*(&iLocal_0 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(-3959,014f, 28,38515f, 2955,877f), Vector(0.0f, -87,04881f, 0.0f));
	*(&iLocal_0 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "smoking_stand37", "smoking_stand", Vector(-4076,522f, 35,6576f, 2945,216f), Vector(0.0f, 157,6079f, 0.0f));
	*(&iLocal_0 + 1240) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ncover_low", Vector(-4062,988f, 31,80792f, 2957,25f), Vector(0.0f, 90,6319f, 0.0f), 4);
	return 1;
}

void Function_284(char* cParam0) //Position: 0x12B57 / 76631
{
	if (!Function_286(128))
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

void Function_285(int iParam0) //Position: 0x12B94 / 76692
{
	int iVar0;
	
	if (Function_16(iParam0, 1) && Function_16(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_286(int iParam0) //Position: 0x12BC8 / 76744
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_287(struct<2>[] Param0, int iParam1) //Position: 0x12BE4 / 76772
{
	int iVar0;
	
	if (!Function_286(2))
	{
		return 0;
	}
	if (Function_272(&(Global_43791[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_14(&(Param0[iVar02]), 2))
		{
			if (Function_14(&(Param0[iVar02]), 4))
			{
				if (IS_LATER_THAN(&Param0[iVar02] + 8, false))
				{
					return 1;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_288(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x12C53 / 76883
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_289(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_243(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_289(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x12C91 / 76945
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_42(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_243(&(Param0[iVar02]), 4);
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

bool Function_290(int iParam0, bool bParam1) //Position: 0x12D60 / 77152
{
	int iVar0;
	
	iVar0 = Function_112(iParam0);
	if (!Function_32(iVar0))
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

int Function_291(int iParam0) //Position: 0x12D9E / 77214
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
	if (Function_272(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

