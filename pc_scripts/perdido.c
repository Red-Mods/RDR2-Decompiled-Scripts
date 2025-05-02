//Decompiled with MagicRDR v1.0
//Function Count : 104
//Statics Count : 709
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 52;
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
	int iLocal_588 = 0;
	bool bLocal_589 = false;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 2;
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
	int iLocal_644 = 0;
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
	var uLocal_670 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_588 = 0;
	iScriptParam_0 = &iScriptParam_0;
	Function_103(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_102("Initializing Perdido", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_589 = 1000;
		switch (iLocal_588)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_588 = 1;
				}
				bLocal_589 = false;
				break;
			
			case 0x00000001:
				if (Function_101())
				{
					if (Function_97(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
					iLocal_588 = 2;
				}
				bLocal_589 = false;
				break;
			
			case 0x00000002:
				if (Function_88())
				{
					Function_87(&(Global_43791[iScriptParam_0]), 32);
					iLocal_588 = 3;
					Function_85(&iLocal_0);
				}
				bLocal_589 = false;
				break;
			
			case 0x00000003:
				uLocal_590 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PerdidoVol", &iScriptParam_0, 2, 0);
				Function_84(&Global_12274, &Global_14662, iScriptParam_0);
				iLocal_588 = 5;
				bLocal_589 = false;
				break;
			
			case 0x00000005:
				if (Function_83(&Global_12274, &Global_14662, iScriptParam_0))
				{
					iLocal_588 = 4;
					bLocal_589 = false;
				}
				else
				{
					bLocal_589 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_82(&(Global_43791[iScriptParam_0]), 16))
				{
					iLocal_588 = 6;
				}
				bLocal_589 = false;
				break;
			
			case 0x00000006:
				Function_80(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, &uLocal_598, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_80(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, &uLocal_598, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_75(&Global_12274, &Global_14662, &uLocal_598, &Global_10996, iScriptParam_0);
				Function_87(&(Global_43791[iScriptParam_0]), 8);
				if (Function_82(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_74(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_588 = 10;
				}
				else
				{
					iLocal_588 = 7;
				}
				bLocal_589 = false;
				break;
			
			case 0x00000007:
				Function_60(iScriptParam_0);
				if (Function_59(1) == 8)
				{
					uLocal_592 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_cougar", 0);
				}
				if (Global_39324[8])
				{
					CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Campo_Mirada", Vector(-2147,723f, 18,671f, 4971,68f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 20.0f, 15.0f));
				}
				iLocal_588 = 8;
				bLocal_589 = false;
				break;
			
			case 0x00000008:
				Function_58(StackVal, 1, Global_46866[0], Vector(-2647,498f, 31,386f, 4247,398f));
				if (!Function_57(&Global_46866))
				{
					Function_53(2, 0,5f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_57(&Global_46866));
					Function_52(64);
					Function_48(1, 10, 6, 0, 3);
				}
				Function_87(&(Global_43791[iScriptParam_0]), 512);
				iLocal_588 = 9;
				bLocal_589 = false;
				break;
			
			case 0x00000009:
				if (!Function_57(&Global_46866))
				{
					Function_46(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 1;
				Function_87(&(Global_43791[iScriptParam_0]), 4);
				Function_45("Finished Initializing Perdido", 5.0f);
				iLocal_588 = 10;
				bLocal_589 = false;
				break;
			
			case 0x0000000A:
				if (!Function_57(&Global_46866))
				{
					if (iLocal_644)
					{
						iLocal_644 = 0;
						iLocal_588 = 8;
						bLocal_589 = false;
					}
				}
				else
				{
					iLocal_644 = 1;
				}
				Function_32(&(Global_39874[03]), "SPG", 14, &iLocal_0, 0);
				if (0 & Function_31())
				{
					if (IS_VOLUME_VALID(&Global_44085[Global_46866[3]9] + 8))
					{
						if (IS_ACTOR_IN_VOLUME(Function_30(), &Global_44085[Global_46866[3]9] + 8))
						{
							if (!IS_SCRIPT_VALID(&uLocal_594))
							{
								uLocal_594 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/wolfWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(&uLocal_594))
						{
							TERMINATE_SCRIPT(&uLocal_594);
						}
					}
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_596))
					{
						uLocal_596 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_645, 62, 0);
					}
				}
				if (Function_82(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_588 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_589);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_12274, &Global_14662, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_74(&(Global_43791[iScriptParam_0]), 32);
	Function_74(&(Global_43791[iScriptParam_0]), 64);
	Function_74(&(Global_43791[iScriptParam_0]), 8);
	Function_74(&(Global_43791[iScriptParam_0]), 512);
	Function_74(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_590))
	{
		TERMINATE_SCRIPT(&uLocal_590);
	}
	if (IS_SCRIPT_VALID(&uLocal_592))
	{
		TERMINATE_SCRIPT(&uLocal_592);
	}
	if (IS_SCRIPT_VALID(&uLocal_594))
	{
		TERMINATE_SCRIPT(&uLocal_594);
	}
	Function_45("Unloaded Perdido", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5DE / 1502
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

void Function_2(int iParam0) //Position: 0x614 / 1556
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x636 / 1590
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x64C / 1612
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x662 / 1634
{
	Function_6(&iLocal_2 + 8);
	RELEASE_LAYOUT_REF(&iLocal_2);
	return;
}

void Function_6(int iParam0) //Position: 0x675 / 1653
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x69D / 1693
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

void Function_8(struct<13> Param0) //Position: 0x7E8 / 2024
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x805 / 2053
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x823 / 2083
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x82F / 2095
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
	strcpy(&cVar0, Function_21(bParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_82(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_74(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_18(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_18(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_17(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_18(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_17(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_82(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_82(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_18(&(Param0[iVar162]), 2) && !Function_18(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_18(&(Param0[iVar162]), 2) && !Function_18(&(Param0[iVar162]), 4))
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
			Function_87(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xA4D / 2637
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
		if (!Function_18(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xBB3 / 2995
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

int Function_14(int iParam0) //Position: 0xBDE / 3038
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

void Function_15(var uParam0, int iParam1) //Position: 0xC12 / 3090
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xC23 / 3107
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC3F / 3135
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xC59 / 3161
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC76 / 3190
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0xC91 / 3217
{
	return (bParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xC9E / 3230
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

void Function_22(int iParam0) //Position: 0x114C / 4428
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_44085[iParam09] == Global_46722[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_23(int iParam0) //Position: 0x11B7 / 4535
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
	{
		return 0;
	}
	if (Global_99472 != 32 || Global_99472 != 1)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6647)
	{
		return 0;
	}
	if (Function_28())
	{
		return 0;
	}
	if (&iParam0 == 0)
	{
		if (Function_26(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_25(0))
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Function_24(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_40000.f_80 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1235 / 4661
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

bool Function_25(int iParam0) //Position: 0x12E4 / 4836
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x12FF / 4863
{
	if (&iParam0 == 1)
	{
		if (Global_6629 == 1)
		{
			return 0;
		}
	}
	if (Global_6629 == 0)
	{
		return 0;
	}
	if (Global_43789 == Global_46760[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46914[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46816[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46796[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46850[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46926[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46866[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46894[1])
	{
		if (!Function_27(Global_46894[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0x13B4 / 5044
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_82(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x13D2 / 5074
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x13E1 / 5089
{
	return &Global_21369 + 8;
}

var Function_30() //Position: 0x13ED / 5101
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_31() //Position: 0x1402 / 5122
{
	return 0;
}

void Function_32(vector3 vParam0) //Position: 0x1409 / 5129
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
				Function_43(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_43(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_42(&vParam0, 63))
			{
				if (Function_41(76) || Function_40(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_38(&cParam1, &vParam0, 3, &uParam3);
						Function_35(&vParam0, 63);
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
			Function_34();
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
			Function_33();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_42(&vParam0, 63))
		{
			if (Function_41(76) || Function_40(76))
			{
				Function_38(&cParam1, &vParam0, 3, &uParam3);
				Function_35(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_38(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_33() //Position: 0x161A / 5658
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_35(&(Global_39874[33]), bVar0);
		bVar0++;
	}
	return;
}

void Function_34() //Position: 0x1661 / 5729
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_35(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_35(int iParam0, bool bParam1) //Position: 0x16B3 / 5811
{
	if (bParam1 <= 32)
	{
		Function_36(&iParam0, Function_37(bParam1));
	}
	else
	{
		Function_36(&iParam0 + 4, Function_37((bParam1 - 32)));
	}
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x16DE / 5854
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_37(bool bParam0) //Position: 0x16EF / 5871
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_38(char* cParam0) //Position: 0x16FB / 5883
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
		if (bVar5 != 0 || Function_42(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_39(), &cVar1, bParam2, bVar5, 4278716679);
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

var Function_39() //Position: 0x17A8 / 6056
{
	int iVar0;
	
	return &iVar0;
}

int Function_40(int iParam0) //Position: 0x17B1 / 6065
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_41(int iParam0) //Position: 0x17C6 / 6086
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_42(struct<5> Param0) //Position: 0x17DB / 6107
{
	if (bParam1 <= 32)
	{
		return Function_20(Param0, Function_37(bParam1));
	}
	return Function_20(StackVal, Function_37((bParam1 - 32)));
}

void Function_43(vector3 vParam0) //Position: 0x1808 / 6152
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_44(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_44(var uParam0) //Position: 0x183D / 6205
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

void Function_45(char* cParam0) //Position: 0x188C / 6284
{
	if (!Function_16(128))
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

void Function_46(int iParam0, bool bParam1) //Position: 0x18CC / 6348
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

void Function_47(var uParam0, int iParam1) //Position: 0x19BC / 6588
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_48(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x19C9 / 6601
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
		Function_49();
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

void Function_49() //Position: 0x1AB7 / 6839
{
	int iVar0;
	
	Global_41176 = Function_50(StackVal);
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

int Function_50(int iParam0) //Position: 0x1B05 / 6917
{
	if (!Function_51(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_51(int iParam0) //Position: 0x1B1D / 6941
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_52(bool bParam0) //Position: 0x1B32 / 6962
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_53(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1B45 / 6981
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
		Function_56();
	}
	if (&bParam5)
	{
		Function_54(1048576);
	}
}

void Function_54(int iParam0) //Position: 0x1C53 / 7251
{
	Function_55(&Global_43580, iParam0);
	return;
}

void Function_55(var uParam0, var uParam1) //Position: 0x1C61 / 7265
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_56() //Position: 0x1C80 / 7296
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_54(16384);
	}
	return;
}

bool Function_57(int[] iParam0) //Position: 0x1C9C / 7324
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_4(iParam0[iVar0]))
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

void Function_58(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1CED / 7405
{
	if (!Function_51(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

int Function_59(int iParam0) //Position: 0x1D4E / 7502
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_60(int iParam0) //Position: 0x1D76 / 7542
{
	switch (Global_46720)
	{
		case 0x00000000:
			Function_73(iParam0);
			break;
		
		case 0x00000001:
			Function_73(iParam0);
			Function_67(iParam0);
			break;
		
		case 0x00000002:
			Function_67(iParam0);
			break;
		
		case 0x00000003:
			break;
	}
	if (!Global_6606)
	{
		Function_67(iParam0);
		Function_73(iParam0);
	}
	Function_63(7, 2, 0, 0, 50, 2, 0, 0, 4, iParam0, "$/content/Ambient/Roaming/event_donkey_lead", 31, 2, 190.0f, 8, 55, 0);
	Function_62(&Global_27462[752] + 188, -5.0f, 2);
	Function_61(&Global_27462[752] + 188, 1, 3.0f, 112, 4294967295);
	return;
}

void Function_61(struct<85> Param0) //Position: 0x1E37 / 7735
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_62(int iParam0, float fParam1, float fParam2) //Position: 0x1E61 / 7777
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = fParam2;
	return;
}

void Function_63(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1E79 / 7801
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_64(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_64(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1EC0 / 7872
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
	if (!Function_19())
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
					bVar2 = Function_66(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_65(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_66(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_65(int iParam0, int iParam1) //Position: 0x227E / 8830
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_66(int iParam0) //Position: 0x22A1 / 8865
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_67(int iParam0) //Position: 0x22B8 / 8888
{
	Function_63(28, 2, 25, 4294967146, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_aftermath", 63, 2, 180.0f, 8, 55, 0);
	Function_61(&Global_27462[2852] + 188, 1, 9.0f, 64, 752);
	Function_72(&Global_27462[2852] + 188, 20.0f);
	Function_71(&Global_27462[2852] + 188, 5.0f);
	Function_70(&Global_27462[2852] + 188, 12.0f, 5.0f);
	Function_69(&Global_27462[2852] + 188, 0,4f, 8.0f);
	Function_62(&Global_27462[2852] + 188, -4.0f, 2);
	Function_68(&Global_27462[2852] + 188);
	return;
}

void Function_68(struct<25> Param0) //Position: 0x238E / 9102
{
	Param0.f_24 = 1;
	return;
}

void Function_69(int iParam0, float fParam1, int iParam2) //Position: 0x239A / 9114
{
	(&iParam0 + 84)->f_52 = fParam1;
	(&iParam0 + 84)->f_56 = iParam2;
	return;
}

void Function_70(int iParam0, float fParam1, int iParam2) //Position: 0x23B2 / 9138
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_48 = iParam2;
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x23CA / 9162
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x23D9 / 9177
{
	(&iParam0 + 84)->f_20 = iParam1;
	return;
}

void Function_73(int iParam0) //Position: 0x23E8 / 9192
{
	Function_63(30, 2, 50, 4294967196, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_execution", 63, 2, 180.0f, 8, 55, 0);
	Function_61(&Global_27462[3052] + 188, 2, 5.0f, 96, 752);
	Function_72(&Global_27462[3052] + 188, 32.0f);
	Function_71(&Global_27462[3052] + 188, 5.0f);
	Function_70(&Global_27462[3052] + 188, 19,9f, 8.0f);
	Function_69(&Global_27462[3052] + 188, 0,4f, 4.0f);
	Function_62(&Global_27462[3052] + 188, 0.0f, 4);
	Function_68(&Global_27462[3052] + 188);
	return;
}

void Function_74(var uParam0, int iParam1) //Position: 0x24B6 / 9398
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_75(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x24D0 / 9424
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_82(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
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
		Function_74(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_87(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_76(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2588 / 9608
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_82(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_79(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_78(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_77(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_77(int iParam0, struct<2> Param1) //Position: 0x2709 / 9993
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

bool Function_78(vector3 vParam0) //Position: 0x284F / 10319
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_79(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2867 / 10343
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_39(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_80(float fParam0, struct<11>[] Param1, float fParam2, struct<2> Param3, struct<2> Param5, struct<2> Param7, struct<2> Param9, struct<2> Param11, struct<2> Param13) //Position: 0x298E / 10638
{
	bool bVar0;
	
	bVar0 = fParam0;
	if (Function_81(StackVal, StackVal, Param3, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param3);
		PRINTNL();
	}
	if (Function_81(StackVal, StackVal, Param5, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	if (Function_81(StackVal, StackVal, Param7, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param7);
		PRINTNL();
	}
	if (Function_81(StackVal, StackVal, Param9, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param9);
		PRINTNL();
	}
	if (Function_81(StackVal, StackVal, Param11, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param11);
		PRINTNL();
	}
	if (Function_81(StackVal, StackVal, Param13, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param13);
		PRINTNL();
	}
	if (!IS_LAYOUTREF_VALID(&fParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param3;
	*(&Param1[bVar011] + 12) = Param5;
	*(&Param1[bVar011] + 24) = Param7;
	*(&Param1[bVar011] + 36) = Param9;
	*(&Param1[bVar011] + 48) = Param11;
	*(&Param1[bVar011] + 60) = Param13;
	*(&Param1[bVar011] + 72) = &fParam2;
}

bool Function_81(struct<2> Param0, struct<2> Param2) //Position: 0x2C3F / 11327
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_82(var uParam0, int iParam1) //Position: 0x2C6B / 11371
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_83(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2C88 / 11400
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
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_82(&(Global_43791[iParam2]), 0x40000000))
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

void Function_84(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2D71 / 11633
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
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_82(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_87(&(Global_43791[iParam2]), 0x40000000);
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

int Function_85(var uParam0) //Position: 0x2E61 / 11873
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[32];
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar5 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar5, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar5, "nCampfire0");
		iVar0 = START_OBJECT_ITERATOR(&uVar5);
		while (IS_OBJECT_VALID(&iVar0))
		{
			bVar6 = RAND_INT_RANGE(true, 10000) > 2750;
			bVar7 = (((bVar6 || DECOR_CHECK_EXIST(&iVar0, "guero")) || DECOR_CHECK_EXIST(&iVar0, "always")) || Global_6611);
			bVar8 = false;
			bVar9 = (Function_31() && !Function_86(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_31()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
			{
			}
			else if (bVar8 && !bVar9)
			{
				cVar10 = GET_GRINGO_FROM_OBJECT(&iVar0);
				if (IS_GRINGO_VALID(&cVar10))
				{
					GRINGO_ALLOW_ACTIVATION(&cVar10, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(&iVar0, &Var1);
				GET_OBJECT_ORIENTATION(&iVar0, &uVar3);
				strcpy(&cVar11, "p", 32);
				stradd(&cVar11, GET_OBJECT_NAME(&iVar0), 32);
				CREATE_POINT_IN_LAYOUT(StackVal, &uParam0, &cVar11, Var1, Vector(0.0f, 0.0f, 0.0f));
				DESTROY_OBJECT(&iVar0);
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&uVar5);
		}
		DESTROY_ITERATOR(&uVar5);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_86(int iParam0, bool bParam1) //Position: 0x2FC0 / 12224
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_87(var uParam0, int iParam1) //Position: 0x2FE1 / 12257
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_88() //Position: 0x2FF2 / 12274
{
	var uVar0;
	
	Function_96(3, 3);
	uVar0 = &uVar0;
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire03_law", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/spittoon", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_94(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_4", 1, 0);
	if (!Function_89(&iLocal_2 + 8))
	{
		return 0;
	}
	iLocal_2 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_2))
	{
		iLocal_2 = CREATE_LAYOUT("Perdido_layout");
	}
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint", Vector(-2234,103f, 23,09f, 4450,451f), Vector(0.0f, 327,653f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint1", Vector(-2808,015f, 16,467f, 3991,746f), Vector(0.0f, 132,438f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint3", Vector(-2719,469f, 56,13536f, 4626,306f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint4", Vector(-2401,135f, 9,357473f, 3965,135f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint5", Vector(-1197,553f, 19,07451f, 4961,553f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint6", Vector(-1446,914f, 19,69032f, 4912.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint7", Vector(-1755,834f, 28,35469f, 4824.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint8", Vector(-2136,56f, 19,42f, 5001,652f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint9", Vector(-1146,611f, 27,98853f, 4818,058f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint910", Vector(-1341,777f, 13,05099f, 4301,776f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint11", Vector(-1352f, 13,05099f, 4281,627f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint12", Vector(-1370,036f, 13,05099f, 4317,523f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint13", Vector(-1378,815f, 13,05099f, 4295,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 848) = Vector(-3385,052f, 55,49248f, 4743,046f);
	*(&iLocal_2 + 848 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint15", Vector(-3385,052f, 55,49248f, 4743,046f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 880) = Vector(-2143,072f, 19,566f, 5003,717f);
	*(&iLocal_2 + 880 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhtreas", Vector(-2143,072f, 19,566f, 5003,717f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 912) = Vector(-2169,115f, 19,743f, 5013,526f);
	*(&iLocal_2 + 912 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhtreas1", Vector(-2169,115f, 19,743f, 5013,526f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 944) = Vector(-2151,229f, 18,553f, 4973,971f);
	*(&iLocal_2 + 944 + 12) = Vector(0.0f, 180.0f, 0.0f);
	*(&iLocal_2 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhtreas2", Vector(-2151,229f, 18,553f, 4973,971f), Vector(0.0f, 180.0f, 0.0f));
	*(&iLocal_2 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint911", Vector(-1201,65f, 19,075f, 4963,207f), Vector(0.0f, 240,685f, 0.0f));
	*(&iLocal_2 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint912", Vector(-1198,822f, 19,075f, 4956,911f), Vector(0.0f, 190,323f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint913", Vector(-2232,852f, 23,085f, 4457,229f), Vector(0.0f, 87,258f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint914", Vector(-2239,331f, 23,086f, 4456,599f), Vector(0.0f, 135,904f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhtreas3", Vector(-2228,931f, 23,09f, 4456,119f), Vector(0.0f, 210,21f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "prdf_bhint915", Vector(-2733,588f, 55,062f, 4606,517f), Vector(0.0f, 99,203f, 0.0f));
	*(&iLocal_2 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire07", "Campfire03", Vector(-2465,021f, 11,02602f, 4021,062f), Vector(0.0f, 255,1009f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 992, "MP_ONLY", true);
	*(&iLocal_2 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire08", "Campfire01", Vector(-2759,006f, 14,05219f, 3972f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire09", "Campfire05", Vector(-2165,375f, 11,06847f, 3813,112f), Vector(0.0f, 56,36899f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1008, "MP_ONLY", true);
	*(&iLocal_2 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire010", "Campfire05", Vector(-1980f, 7,070621f, 4032.0f), Vector(0.0f, -14,43717f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1016, "MP_ONLY", true);
	*(&iLocal_2 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire05", "Campfire01", Vector(-3004,241f, 33,12941f, 4427,017f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1024, "MP_ONLY", true);
	*(&iLocal_2 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire012", "Campfire02", Vector(-3027,138f, 32,12549f, 4577,484f), Vector(0.0f, -59,83344f, 0.0f));
	*(&iLocal_2 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire013", "Campfire05", Vector(-2860,492f, 33,1228f, 4611,906f), Vector(0.0f, 71,91928f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1040, "MP_ONLY", true);
	*(&iLocal_2 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire015", "Campfire03_law", Vector(-2632.0f, 28,1098f, 4538,587f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire016", "Campfire01", Vector(-2575,899f, 25,09804f, 4587,576f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_cleanrifle", "sit_cleanrifle", Vector(-1442,006f, 19,69032f, 4912,689f), Vector(0.0f, 47,24794f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-1362,953f, 13,07964f, 4300,644f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-1359,716f, 13,05099f, 4298,842f), Vector(0.0f, -272,5584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_sit_ground_smoke3", "sit_ground_smoke", Vector(-1364,03f, 13,04671f, 4298,394f), Vector(0.0f, -112,4335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-1362,544f, 13,05099f, 4296,964f), Vector(0.0f, -180,1093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay13", "horse_stay", Vector(-1394,776f, 12,977f, 4308,042f), Vector(0.0f, 74,33443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay12", "horse_stay", Vector(-1386,643f, 13,051f, 4290,629f), Vector(0.0f, 41,19416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay11", "horse_stay", Vector(-1396,363f, 13,05099f, 4300,878f), Vector(0.0f, 48,00632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay10", "horse_stay", Vector(-1400,339f, 11,495f, 4292,966f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_Pee3", "Pee", Vector(-1385,775f, 13,05099f, 4298,206f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1378,63f, 13,056f, 4306,34f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", Vector(-1372,292f, 13,05099f, 4291,89f), Vector(0.0f, -28,9995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1374,563f, 13,05099f, 4297,688f), Vector(0.0f, 9,780541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_look_out_window_R", "look_out_window_R", Vector(-1380,752f, 13,04853f, 4297,446f), Vector(0.0f, -41,49537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay21", "horse_stay", Vector(-1365,99f, 13,051f, 4324,597f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay20", "horse_stay", Vector(-1384,05f, 12,988f, 4324,893f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay19", "horse_stay", Vector(-1388,964f, 12,966f, 4324,276f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay18", "horse_stay", Vector(-1364,119f, 13,051f, 4332,481f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", Vector(-1354,34f, 13,05099f, 4309,859f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1361,21f, 13,05939f, 4316,554f), Vector(0.0f, 192,786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1368,854f, 13,05759f, 4314,05f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_sit_ground_smoke2", "sit_ground_smoke", Vector(-1371,078f, 13,05098f, 4315,158f), Vector(0.0f, 82,18061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand6", "rand_idle_stand", Vector(-1381,432f, 13,037f, 4321,681f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay15", "horse_stay", Vector(-1331,086f, 13,691f, 4317,092f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay14", "horse_stay", Vector(-1335,886f, 13,273f, 4317,106f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay17", "horse_stay", Vector(-1329,264f, 13,051f, 4300,218f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_horse_stay16", "horse_stay", Vector(-1327,329f, 13,051f, 4303,468f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", Vector(-1347,543f, 13,051f, 4305,105f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand4", "rand_idle_stand", Vector(-1334,242f, 13,051f, 4304,613f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand5", "rand_idle_stand", Vector(-1336,62f, 13,051f, 4294,1f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand3", "rand_idle_stand", Vector(-1353,39f, 13,051f, 4312,579f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_sit_ground_smoke4", "sit_ground_smoke", Vector(-1343,849f, 13,056f, 4296,042f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_Pee4", "Pee", Vector(-1352,655f, 13,051f, 4301,614f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand", "rand_idle_stand", Vector(-1346,009f, 13,056f, 4294,357f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", Vector(-1346,468f, 13,05098f, 4307,142f), Vector(0.0f, 118,1131f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_horse_stay10c", "horse_stay", Vector(-1361,381f, 13,103f, 4268,063f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_horse_stay9", "horse_stay", Vector(-1344,416f, 13,051f, 4267,783f), Vector(0.0f, -161,8634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_horse_stay8", "horse_stay", Vector(-1361,88f, 13,051f, 4274,834f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_horse_stay", "horse_stay", Vector(-1352,36f, 13,051f, 4270,885f), Vector(0.0f, 212,416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_sit_ground_smoke", "sit_ground_smoke", Vector(-1350,854f, 13,051f, 4272,156f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_smoking_stand2", "smoking_stand", Vector(-1349,743f, 13,05099f, 4283,362f), Vector(0.0f, -55,15614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_Pee2", "Pee", Vector(-1356,144f, 13,05099f, 4286,991f), Vector(0.0f, -151,8606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand2", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Sep_Pee", "Pee", Vector(-1360,661f, 13,107f, 4286,437f), Vector(0.0f, 152,3031f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_smoking_stand", "smoking_stand", Vector(-1358,714f, 13,051f, 4282,462f), Vector(0.0f, -53,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_rand_idle_stand1", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", Vector(-1343,447f, 13,056f, 4286,479f), Vector(0.0f, -35,46272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", Vector(-1339,343f, 13,051f, 4267,934f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", Vector(-1324,474f, 13,051f, 4303,514f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", Vector(-1372,628f, 13,05f, 4335,497f), Vector(0.0f, 14,92106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", Vector(-1408,984f, 14,318f, 4305,296f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_look_out_window_L1", "look_out_window_L", Vector(-2150,377f, 18,76063f, 4969,059f), Vector(0.0f, -26,47319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sleeping_scripted1", "sleeping_scripted", Vector(-2144,55f, 18,6851f, 4975,894f), Vector(0.0f, -88,98843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sleeping_scripted", "sleeping_scripted", Vector(-2150,153f, 18,88321f, 4972,78f), Vector(0.0f, -88,98843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_lean_table", "lean_table", Vector(-2147,479f, 18,65697f, 4971,42f), Vector(0.0f, 167,0051f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2145,568f, 18,68168f, 4966,235f), Vector(0.0f, -2,904451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_look_out_window_L", "look_out_window_L", Vector(-2147,026f, 18,68168f, 4966,039f), Vector(0.0f, 11,03522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_RandIdleNearWall1", "Rand_Idle_NearWall", Vector(-2144,973f, 18,68168f, 4967,628f), Vector(0.0f, -0,2829188f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_barrel1", "sit_barrel", Vector(-2148,418f, 18,58588f, 4977,662f), Vector(0.0f, 304,4866f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_rand_idle_stand4", "rand_idle_stand", Vector(-2183,856f, 21,39841f, 4981,333f), Vector(0.0f, -60,1594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_peeing3", "stand_peeing_b_any", Vector(-2107,46f, 21,99772f, 5025,458f), Vector(0.0f, -52,97831f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_peeing2", "stand_peeing_b_any", Vector(-2121,297f, 20,69375f, 4956,572f), Vector(0.0f, -55,82038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_ground_smoke3", "sit_ground_smoke", Vector(-2109,987f, 26,07461f, 4977,125f), Vector(0.0f, 54,48457f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_rand_idle_stand3", "rand_idle_stand", Vector(-2121,831f, 20,61072f, 4955,092f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_rand_idle_stand2", "rand_idle_stand", Vector(-2163,704f, 18,88586f, 4949,102f), Vector(0.0f, -19,02433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_rand_idle_stand1", "rand_idle_stand", Vector(-2147,941f, 18,0743f, 4985,551f), Vector(0.0f, -26,28773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_rand_idle_stand", "rand_idle_stand", Vector(-2149,982f, 18,14022f, 4983,896f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_harmonica2", "sit_ground_play_harmonica", Vector(-2155,802f, 19,9801f, 5017,955f), Vector(0.0f, -17,66678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_ground_smoke2", "sit_ground_smoke", Vector(-2168,007f, 20,96798f, 5023,034f), Vector(0.0f, -116,3746f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_smoking_stand2", "smoking_stand", Vector(-2168.0f, 20,26305f, 5016.0f), Vector(0.0f, -38,86214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_2 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_yelling_mid", "stand_yelling_mid", Vector(-2139,542f, 25,13448f, 5021,14f), Vector(0.0f, 15,77838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_2 + 1064), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_guntricks3", "stand_guntricks_e_any", Vector(-2175,003f, 19,79538f, 4967,382f), Vector(0.0f, -97,18321f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay14", "horse_stay", Vector(-1169,324f, 25,09804f, 4848,183f), Vector(0.0f, -51,58591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sit_ground_smoke1", "sit_ground_smoke", Vector(-1146,617f, 27,98853f, 4816,168f), Vector(0.0f, -227,0327f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_guntricks1", "stand_guntricks_e_any", Vector(-1149,78f, 28,08622f, 4824,229f), Vector(0.0f, 109,0677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-1147,647f, 28,1014f, 4824,906f), Vector(0.0f, -939,9426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay13", "horse_stay", Vector(-1154,639f, 25,45039f, 4840,386f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay12", "horse_stay", Vector(-1158,92f, 25,95507f, 4832,619f), Vector(0.0f, -359,8061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay11", "horse_stay", Vector(-1170,505f, 25,098f, 4845,793f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Pee", "Pee", Vector(-1166,162f, 25,4834f, 4827,507f), Vector(0.0f, 38,67871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay10", "horse_stay", Vector(-1153,202f, 25,77849f, 4837,963f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_rand_idle_stand2", "rand_idle_stand", Vector(-1151,732f, 26,68782f, 4826,975f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sit_ground_smoke", "sit_ground_smoke", Vector(-1147,908f, 27,98853f, 4815,805f), Vector(0.0f, -169,97f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_rand_idle_stand1", "rand_idle_stand", Vector(-1155,885f, 26,11555f, 4831,447f), Vector(0.0f, 163,3344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance7", "stand_lookdistance_w_any", Vector(-1165,903f, 26,199f, 4816,392f), Vector(0.0f, 11,74429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-1142,304f, 27,06421f, 4829,555f), Vector(0.0f, -140,6723f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1153,553f, 27,915f, 4812,71f), Vector(0.0f, 8,464398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1138,232f, 27,92258f, 4821,114f), Vector(0.0f, -95,10341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1153,667f, 25,19662f, 4842,685f), Vector(0.0f, -229,6765f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay9", "horse_stay", Vector(-1158,446f, 26,204f, 4827,642f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay8", "horse_stay", Vector(-1140,124f, 28,109f, 4817,715f), Vector(0.0f, 91,29439f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_horse_stay", "horse_stay", Vector(-1161,263f, 25,92668f, 4830,808f), Vector(0.0f, -378,4707f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_yawning", "stand_yawning_n_any", Vector(-1141,497f, 27,527f, 4823,505f), Vector(0.0f, 135,6908f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_guntricks", "stand_guntricks_e_any", Vector(-1141,31f, 28,07663f, 4816,137f), Vector(0.0f, 109,0677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_look_out_window_L", "look_out_window_L", Vector(-1149,772f, 27,989f, 4825,187f), Vector(0.0f, 52,4463f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1144,439f, 28,16429f, 4820,793f), Vector(0.0f, 52,06534f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_rand_idle_stand", "rand_idle_stand", Vector(-1148,397f, 28,083f, 4824,674f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_sit_docks", "nsit_docks", Vector(-1152,421f, 28,09809f, 4823,037f), Vector(0.0f, 138,8232f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1154,668f, 26,40717f, 4825,65f), Vector(0.0f, 180,2952f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1143,384f, 28,077f, 4812,623f), Vector(0.0f, -31,23636f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ran_lookdistance_binocs", "look_distance_binocs", Vector(-1158,382f, 27,096f, 4811,459f), Vector(0.0f, 15,42521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_guntricks2", "stand_guntricks_e_any", Vector(-2112.0f, 24,78965f, 4984.0f), Vector(0.0f, 24,5157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_leaning_stand", "leaning_stand", Vector(-2162,551f, 18,11316f, 4962,492f), Vector(0.0f, 169,6326f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_pocketwatch", "stand_pocketwatch_e_any", Vector(-2142,839f, 17,06667f, 4953,641f), Vector(0.0f, 25,44062f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_key_twirl", "stand_key_twirling", Vector(-2142,178f, 18,2133f, 4967,677f), Vector(0.0f, 21,08159f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_guntricks1", "stand_guntricks_e_any", Vector(-2150,272f, 17,06667f, 4955,959f), Vector(0.0f, -10,82537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_spittoon1", "spittoon", Vector(-2141,107f, 17,06667f, 4953,017f), Vector(0.0f, 179,5756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_spittoon", "spittoon", Vector(-2168.0f, 19,44606f, 4952.0f), Vector(0.0f, 13,08312f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-2159,549f, 18,08265f, 4964,163f), Vector(0.0f, -38,89871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_lean_rail_fwd", "lean_rail_forward", Vector(-2146,244f, 18,37671f, 4993,393f), Vector(0.0f, 18,53289f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_mex_chair_sit", "mex_chair_sit", Vector(-2140,079f, 18,07059f, 4987,028f), Vector(0.0f, -183,9298f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_sit_barrel", "sit_barrel", Vector(-2141,56f, 18,06992f, 4987,607f), Vector(0.0f, 238,0275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_RandIdleNearWall", "Rand_Idle_NearWall", Vector(-2153,9f, 18,54898f, 4973,194f), Vector(0.0f, 84,53752f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_mex_sitGround1", "mex_sitGround", Vector(-2145,565f, 18,1965f, 4963,157f), Vector(0.0f, 169,7416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_mex_sitGround", "mex_sitGround", Vector(-2151,62f, 18,62823f, 4967,137f), Vector(0.0f, 188,22f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_mex_stool_sit", "mex_stool_sit", Vector(-2143,014f, 18,40978f, 4972,36f), Vector(0.0f, 270,9647f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_look_binocs2", "look_distance_binocs", Vector(-2125,51f, 21,88434f, 4976,438f), Vector(0.0f, 20,74133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_worried", "stand_worried_n_any", Vector(-2147,102f, 18,25595f, 4963,947f), Vector(0.0f, 1,017094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_yawning", "stand_yawning_n_any", Vector(-2142,325f, 18,26016f, 4969,863f), Vector(0.0f, -27,79862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_Pee", "Pee", Vector(-2141,521f, 18,26262f, 4989,459f), Vector(0.0f, 274,3436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_horse_stay10", "horse_stay", Vector(-2156,871f, 18,32751f, 4968,682f), Vector(0.0f, -93,17694f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_horse_stay9", "horse_stay", Vector(-2146,335f, 18,07149f, 4989,306f), Vector(0.0f, -34,30241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_horse_tend", "horse_tend", Vector(-2139,4f, 18,17197f, 4973,717f), Vector(0.0f, -112,1472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_guntricks", "stand_guntricks_e_any", Vector(-2151,342f, 18,59703f, 4975,875f), Vector(0.0f, -586,383f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2122,872f, 20,44026f, 4952,769f), Vector(0.0f, -2,904451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_smoking_stand", "smoking_stand", Vector(-2148,095f, 18,58343f, 4978,466f), Vector(0.0f, -255,1086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_look_binocs", "look_distance_binocs", Vector(-2154,062f, 17,335f, 4951,49f), Vector(0.0f, 6,739808f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ncam_stand", "rand_idle_stand", Vector(-2144,354f, 18,18847f, 4963,678f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2141,606f, 18,32081f, 4973,772f), Vector(0.0f, -20,28081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cam_horse_staye", "horse_stay", Vector(-2139,533f, 18,28407f, 4971,81f), Vector(0.0f, -244,4586f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_2 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire017", "Campfire04", Vector(-2002,204f, 17,06667f, 4679,053f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1072, "MP_ONLY", true);
	*(&iLocal_2 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire018", "Campfire03", Vector(-2502,995f, 6,023551f, 4100.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire03", "Campfire03", Vector(-1478,438f, 11,04314f, 4126,377f), Vector(0.0f, 254,6316f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1088, "MP_ONLY", true);
	*(&iLocal_2 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire019", "Campfire03", Vector(-3211,368f, 7,107861f, 4204,345f), Vector(0.0f, 254,571f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1096, "MP_ONLY", true);
	*(&iLocal_2 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire020", "Campfire02", Vector(-3507,191f, 25,09805f, 4355,799f), Vector(0.0f, 93,92932f, 0.0f));
	*(&iLocal_2 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire021", "Campfire03", Vector(-2576f, 28,1098f, 4434,404f), Vector(0.0f, -101,3264f, 0.0f));
	*(&iLocal_2 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire022", "Campfire03", Vector(-2374,848f, 22,00761f, 4708,612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire023", "Campfire03_bad", Vector(-2362,249f, 24,05876f, 4831,446f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 1128, "MP_ONLY", true);
	*(&iLocal_2 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire024", "Campfire05", Vector(-2212.0f, 18,97561f, 4733,972f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire02", "Campfire05", Vector(-2225,934f, 21,08237f, 4560.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire025", "Campfire02", Vector(-2370,778f, 23,07593f, 4657,222f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire026", "Campfire01", Vector(-2318,043f, 21,13764f, 4658,043f), Vector(0.0f, 82,47433f, 0.0f));
	*(&iLocal_2 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire027", "Campfire05", Vector(-2220,514f, 19,07451f, 4799,486f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire028", "Campfire02", Vector(-3062,95f, 33,12811f, 4638,467f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", Vector(-3087,487f, 34,13335f, 4568.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", Vector(-2924,045f, 12,11589f, 4522,543f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", Vector(-3123,044f, 12,85511f, 4296,765f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", Vector(-3147,61f, 13,04445f, 4349,696f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", Vector(-2920,644f, 13,88983f, 4184f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", Vector(-2874,131f, 15,28646f, 4357,87f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", Vector(-2748,333f, 37,12934f, 4416,379f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", Vector(-2818,678f, 32,12549f, 4600f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", Vector(-2604.0f, 29,12662f, 4336f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", Vector(-2784.0f, 32,12549f, 4348f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_rand_idle_stand", "rand_idle_stand", Vector(-2238,265f, 23,082f, 4457,25f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_guntricks3", "stand_guntricks_e_any", Vector(-2246,608f, 23,09f, 4454,54f), Vector(0.0f, 45,55705f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "hen_smoking_stand1", "smoking_stand", Vector(-1748,846f, 29,389f, 4821,137f), Vector(0.0f, -53,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "hen_rand_idle_stand5", "rand_idle_stand", Vector(-1742,056f, 29,825f, 4826,535f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_horse_stay11", "horse_stay", Vector(-1758,203f, 32,04f, 4839,499f), Vector(0.0f, 26,17468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "hen_rand_idle_stand4", "rand_idle_stand", Vector(-1760,731f, 29,988f, 4812,287f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "hen_rand_idle_stand3", "rand_idle_stand", Vector(-1759,747f, 30,356f, 4818,834f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_guntricks2", "stand_guntricks_e_any", Vector(-1761,983f, 31,035f, 4829,209f), Vector(0.0f, -198,7769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "hen_pee1", "Pee", Vector(-1754,625f, 32,599f, 4841,774f), Vector(0.0f, 274,3436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "hen_pee", "Pee", Vector(-1750,039f, 31,213f, 4832,931f), Vector(0.0f, 274,3436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-1767,221f, 29,813f, 4816,635f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1760,551f, 29,471f, 4799,91f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1738,453f, 28,481f, 4815,337f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1735,159f, 31,502f, 4837,971f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1761,964f, 32,427f, 4843,662f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1757,995f, 30,40155f, 4819,907f), Vector(0.0f, -167,475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_horse_stay10", "horse_stay", Vector(-1756,031f, 30,91866f, 4830,044f), Vector(0.0f, 26,17468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_horse_stay8", "horse_stay", Vector(-1762,697f, 31,18394f, 4830,312f), Vector(0.0f, 35,7719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_horse_stay", "horse_stay", Vector(-1759,648f, 30,8288f, 4828,202f), Vector(0.0f, 26,65729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_Rand_Ground1", "Rand_Idle_Sit_Ground", Vector(-1753,325f, 29,80431f, 4821,001f), Vector(0.0f, 39,70086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen__drunk_throwbottle", "stand_drunk_throwbottle", Vector(-1763,918f, 30,20828f, 4818,522f), Vector(0.0f, 92,05388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_guntricks1", "stand_guntricks_e_any", Vector(-1756,531f, 30,36356f, 4819,299f), Vector(0.0f, -198,7769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_guntricks", "stand_guntricks_e_any", Vector(-1756,578f, 30,61364f, 4824,122f), Vector(0.0f, 23,2416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_campfire_talk", "campfire_talk", Vector(-1758,249f, 30,5826f, 4823,424f), Vector(0.0f, -108,3938f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen__stand", "rand_idle_stand", Vector(-1755,974f, 30,53736f, 4823,08f), Vector(0.0f, -323,2545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_Sit_Grounde", "Rand_Idle_Sit_Ground", Vector(-1759,385f, 30,48355f, 4821,405f), Vector(0.0f, 268,905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1754,221f, 29,264f, 4806,449f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Hen_look_binocs", "look_distance_binocs", Vector(-1757,968f, 29,94079f, 4809,994f), Vector(0.0f, -8,110764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-2266,168f, 22,992f, 4469,771f), Vector(0.0f, -142,5218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_rand_idle_stand2", "rand_idle_stand", Vector(-2748,117f, 46,183f, 4608,924f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_rand_idle_stand1", "rand_idle_stand", Vector(-2738,463f, 52,114f, 4605,324f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_rand_idle_stand5", "rand_idle_stand", Vector(-1202,635f, 19,137f, 4955,752f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_stand_guntricks1", "stand_guntricks_e_any", Vector(-1457,679f, 19,4f, 4899,244f), Vector(0.0f, -42,21369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_smoking_stand1", "smoking_stand", Vector(-1448,115f, 19,663f, 4903,778f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_rand_idle_stand4", "rand_idle_stand", Vector(-1453,147f, 19,691f, 4904,472f), Vector(0.0f, 66,39404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_rand_idle_stand3", "rand_idle_stand", Vector(-1437,73f, 19,063f, 4916,631f), Vector(0.0f, 66,39404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag__dnd_rowdydrink2", "stand_dnd_rowdydrink", Vector(-1443,396f, 19,69032f, 4914,826f), Vector(0.0f, 13,5401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag__dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-1446,205f, 19,69032f, 4909,839f), Vector(0.0f, -134,5815f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1467,928f, 20,55f, 4901,703f), Vector(0.0f, -112,4326f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_stand_guntricks", "stand_guntricks_e_any", Vector(-1446,765f, 19,69032f, 4914,313f), Vector(0.0f, -42,21369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_rand_idle_stand2", "rand_idle_stand", Vector(-1463,796f, 20,541f, 4914,44f), Vector(0.0f, 66,39404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1456,628f, 19,736f, 4922,165f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_sleeping_scripted", "sleeping_scripted", Vector(-1450,952f, 19,691f, 4913,889f), Vector(0.0f, -86,56843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1444,607f, 19,69032f, 4912,771f), Vector(0.0f, 1,664795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_rand_idle_stand1", "rand_idle_stand", Vector(-1441,416f, 19,691f, 4911,683f), Vector(0.0f, 76,25448f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_horse_stay9", "horse_stay", Vector(-1469,932f, 20,605f, 4910,774f), Vector(0.0f, 28,4633f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_horse_stay8", "horse_stay", Vector(-1472,083f, 20,605f, 4914,579f), Vector(0.0f, -1,15879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_horse_stay", "horse_stay", Vector(-1474,744f, 20,605f, 4909,638f), Vector(0.0f, -240,4191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag__dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-1441,756f, 19,69032f, 4909,068f), Vector(0.0f, -209,2599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_smoking_stand", "smoking_stand", Vector(-1465,869f, 20,605f, 4903,611f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_rand_idle_stand", "rand_idle_stand", Vector(-1448,869f, 19,69032f, 4910,447f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1442,816f, 19,69032f, 4910,106f), Vector(0.0f, 131,1772f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_lookdistance_binocs1", "look_distance_binocs", Vector(-1404,737f, 19,93f, 4875,994f), Vector(0.0f, -38,38484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_lookdistance_binocs", "look_distance_binocs", Vector(-1480,194f, 29,799f, 4871,489f), Vector(0.0f, -38,38484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_lookdistance1", "stand_lookdistance_w_any", Vector(-1432,518f, 16,699f, 4868,561f), Vector(0.0f, 4,833208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "lag_lookdistance", "stand_lookdistance_w_any", Vector(-1463,929f, 21,485f, 4866,299f), Vector(0.0f, 4,833208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_smoking_stand2", "smoking_stand", Vector(-1204,964f, 19,075f, 4960,957f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_smoking_stand1", "smoking_stand", Vector(-1195,916f, 18,885f, 4967,823f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_rand_idle_stand4", "rand_idle_stand", Vector(-1195,711f, 18,07f, 4971,998f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-1195,711f, 18,07f, 4971,998f), Vector(0.0f, -127,008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_rand_idle_stand3", "rand_idle_stand", Vector(-1191,375f, 18,68f, 4964,364f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_look_out_window_R", "look_out_window_R", Vector(-1198,27f, 19,07451f, 4965,246f), Vector(0.0f, -156,2962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1190,268f, 19,075f, 4959,37f), Vector(0.0f, -127,008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "look_distance_binocs2", "look_distance_binocs", Vector(-1173,602f, 24,305f, 4949,526f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "barg_horse_stay9", "horse_stay", Vector(-1185,661f, 18,157f, 4965,001f), Vector(0.0f, -278,5182f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "barg_horse_stay7", "horse_stay", Vector(-1202,677f, 20,19039f, 4950,121f), Vector(0.0f, -180,3898f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "barg_horse_stay6", "horse_stay", Vector(-1198,855f, 20,15f, 4945,947f), Vector(0.0f, -241,8f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_horse_stay9", "horse_stay", Vector(-1209,177f, 18,47f, 4977,493f), Vector(0.0f, -255,5196f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_horse_stay8", "horse_stay", Vector(-1207,309f, 19,07451f, 4966,914f), Vector(0.0f, 129,8418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_standrowdydrink", "stand_dnd_rowdydrink", Vector(-1201,334f, 19,177f, 4961,892f), Vector(0.0f, -131,9079f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_stand_guntricks1", "stand_guntricks_e_any", Vector(-1201,784f, 19,07451f, 4963,372f), Vector(0.0f, -460,9612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_stand_guntricks", "stand_guntricks_e_any", Vector(-1195,662f, 18,95542f, 4966,104f), Vector(0.0f, -162,3401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1200,147f, 19,07451f, 4963,931f), Vector(0.0f, -3,744514f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_smoking_stand", "smoking_stand", Vector(-1198,138f, 19,035f, 4966,952f), Vector(0.0f, 237,8594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1204,836f, 18,396f, 4999,079f), Vector(0.0f, 155,3814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1168,964f, 22,503f, 4956,782f), Vector(0.0f, -50,58932f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Prim_lookdistance_binocs2", "look_distance_binocs", Vector(-1172,956f, 24,22f, 4950,359f), Vector(0.0f, -108,8531f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ndiab_Pee1", "Pee", Vector(-2732,317f, 55,88308f, 4602,23f), Vector(0.0f, -78,35882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2721,312f, 56,135f, 4626,071f), Vector(0.0f, -71,04374f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-2717,047f, 56,13536f, 4626,959f), Vector(0.0f, 28,81129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2394,351f, 9,03528f, 3973,731f), Vector(0.0f, -188,7163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-2396,917f, 9,035282f, 3975,122f), Vector(0.0f, -97,93723f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_rand_idle_stand1", "rand_idle_stand", Vector(-2423,362f, 8,347816f, 3953,373f), Vector(0.0f, 148,2504f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_horse_stay7", "horse_stay", Vector(-2421,392f, 8,098345f, 3950,982f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_horse_stay6", "horse_stay", Vector(-2418,207f, 8,091701f, 3952,367f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_horse_tend5", "horse_tend", Vector(-2419,592f, 8,276022f, 3948,489f), Vector(0.0f, -178,6461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_horse_stay5", "horse_stay", Vector(-2391,552f, 9,035282f, 3973,452f), Vector(0.0f, -77,91962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_horse_stay", "horse_stay", Vector(-2390,36f, 9,035282f, 3976,159f), Vector(0.0f, -108,218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_horse_tend", "horse_tend", Vector(-2393,498f, 9,035286f, 3970,294f), Vector(0.0f, -178,2487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_rand_idle_stand", "rand_idle_stand", Vector(-2409,836f, 8,863125f, 3970,2f), Vector(0.0f, 74,69887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_look_distance_binocs1", "look_distance_binocs", Vector(-2406,953f, 8,885f, 3972,906f), Vector(0.0f, -179,8559f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_Pee", "Pee", Vector(-2403,695f, 9,127972f, 3961,985f), Vector(0.0f, -339,9337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_look_distance_binocs", "look_distance_binocs", Vector(-2377,361f, 13,70045f, 3959,298f), Vector(0.0f, -145,4083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-2392,574f, 9,035279f, 3977,499f), Vector(0.0f, -288,6662f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_stand_guntricks", "stand_guntricks_e_any", Vector(-2395,221f, 9,035282f, 3978,009f), Vector(0.0f, -14,52901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_smoking_stand", "smoking_stand", Vector(-2392,542f, 9,035279f, 3975,33f), Vector(0.0f, 108,3262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2405,164f, 8,857721f, 3973,518f), Vector(0.0f, -26,27371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2719,872f, 56,14576f, 4632,723f), Vector(0.0f, -160,4651f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_Pee", "Pee", Vector(-2719,947f, 56,14061f, 4619,677f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_rand_idle_stand", "rand_idle_stand", Vector(-2732,475f, 54,799f, 4620,533f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-2719,381f, 56,136f, 4624,018f), Vector(0.0f, -86,41405f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2717,162f, 56,13536f, 4622,923f), Vector(0.0f, -199,554f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-2718,725f, 56,19336f, 4625,808f), Vector(0.0f, -49,80202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_stand", "rand_idle_stand", Vector(-2755,338f, 44,574f, 4608,967f), Vector(0.0f, 47,45972f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2747,982f, 46,58796f, 4617,084f), Vector(0.0f, -261,3201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sit_smokediab", "sit_ground_smoke", Vector(-2750,69f, 46,5379f, 4619,904f), Vector(0.0f, -279,5391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_smoking_stand", "smoking_stand", Vector(-2713,061f, 57,17479f, 4633,203f), Vector(0.0f, -192,8825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2730,924f, 55,25158f, 4607,433f), Vector(0.0f, 70,70719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_horse_stay7", "horse_stay", Vector(-2717,415f, 46,003f, 4670,128f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_horse_stay6", "horse_stay", Vector(-2728,029f, 48,83f, 4663,372f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_horse_stay5", "horse_stay", Vector(-2744,786f, 47,842f, 4622,784f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_horse_stay", "horse_stay", Vector(-2752,478f, 45,581f, 4613,565f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_lookdistance_binocs", "look_distance_binocs", Vector(-2739,578f, 52,528f, 4609,783f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "diab_lookdistance_binocs1", "look_distance_binocs", Vector(-2723,603f, 48,057f, 4670,079f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "stand_lookdistance_diab", "stand_lookdistance_w_any", Vector(-2711,862f, 45,174f, 4549,208f), Vector(0.0f, 183,9572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Dia_lookdistance_binocs", "look_distance_binocs", Vector(-2751,219f, 41,231f, 4569,213f), Vector(0.0f, 105,7632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-2235,211f, 23,07668f, 4458,44f), Vector(0.0f, -220,2354f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_smoking_stand4", "smoking_stand", Vector(-2248,473f, 23,09f, 4459,871f), Vector(0.0f, -278,4407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_smoking_stand3", "smoking_stand", Vector(-2251,981f, 23,09363f, 4453,836f), Vector(0.0f, 16,17786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_guntricks2", "stand_guntricks_e_any", Vector(-2236,704f, 23,09021f, 4445,694f), Vector(0.0f, 45,55705f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_smoking_stand2", "smoking_stand", Vector(-2237,801f, 23,08828f, 4450,994f), Vector(0.0f, -162,5718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(-2238,287f, 23,01221f, 4458,699f), Vector(0.0f, 185,9857f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_look_out_window1", "look_out_window_L", Vector(-2225,412f, 23,27891f, 4451,979f), Vector(0.0f, 52,1422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2800f, 12,99747f, 3976.0f), Vector(0.0f, -33,86443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_look_distance_binocs", "look_distance_binocs", Vector(-2821,198f, 14,178f, 3990,256f), Vector(0.0f, 107,9522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_stand_yawning_n_any", "stand_yawning_n_any", Vector(-2808f, 15,63685f, 4000.0f), Vector(0.0f, 123,7318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_stand_worried_n_any", "stand_worried_n_any", Vector(-2801,499f, 15,81774f, 3993,3f), Vector(0.0f, -69,93935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "rio_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2803,31f, 15,6673f, 3997,191f), Vector(0.0f, -120,7834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_horse_tend1", "horse_tend", Vector(-2809,067f, 14,55902f, 4007,062f), Vector(0.0f, -182,7983f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_horse_tend4", "horse_tend", Vector(-2785,864f, 15,38389f, 3997,784f), Vector(0.0f, -176,7439f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_horse_stay2", "horse_stay", Vector(-2812,66f, 14,77457f, 4006,476f), Vector(0.0f, -24,8493f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_horse_stay1", "horse_stay", Vector(-2782,363f, 15,07267f, 3997,314f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_horse_stay4", "horse_stay", Vector(-2792f, 15,52056f, 3997,487f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Pee_rio", "Pee", Vector(-2796,444f, 13,75379f, 3981,866f), Vector(0.0f, -45,26333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_stand_guntricks3", "stand_guntricks_e_any", Vector(-2801,323f, 15,64117f, 3995,094f), Vector(0.0f, -84,98148f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "stand_guntricks_4", "stand_guntricks_e_any", Vector(-2796.0f, 15,55481f, 4000.0f), Vector(0.0f, -97,24407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2803,821f, 15,45894f, 4002,666f), Vector(0.0f, -159,2758f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_look_distance_binocs10", "look_distance_binocs", Vector(-2802,01f, 15,8971f, 3991,164f), Vector(0.0f, -13,09345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Rio_smoking_stand", "smoking_stand", Vector(-2809,624f, 15,99161f, 3992.0f), Vector(0.0f, 48,59919f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sleeping_wall_rio", "sleeping_wall_scripted", Vector(-2809,184f, 15,98761f, 3996,572f), Vector(0.0f, 107,063f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_smoking_stand1", "smoking_stand", Vector(-2231,056f, 23,08467f, 4453,438f), Vector(0.0f, -39,62713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_sit_ground_smoke2", "sit_ground_smoke", Vector(-2249,137f, 23,08695f, 4454,318f), Vector(0.0f, -27,94823f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_ground_harmonica", "sit_ground_play_harmonica", Vector(-2235,434f, 23,08521f, 4455,663f), Vector(0.0f, -27,9268f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_sit_ground_smoke1", "sit_ground_smoke", Vector(-2231,816f, 23,09146f, 4444,698f), Vector(0.0f, -38,92004f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_peeing_b_any", "stand_peeing_b_any", Vector(-2224,567f, 23,06506f, 4460,793f), Vector(0.0f, -59,44532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_spit1", "stand_spit", Vector(-2242,161f, 23,09f, 4465,899f), Vector(0.0f, -259,1897f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_spit", "stand_spit", Vector(-2242,714f, 23,09f, 4458,329f), Vector(0.0f, 173,8711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-2238,399f, 21,7327f, 4480,835f), Vector(0.0f, -142,5218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-2245,74f, 23,10797f, 4448.0f), Vector(0.0f, 20,09966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2227,261f, 22,78294f, 4446,88f), Vector(0.0f, -37,47246f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_horse_stay3", "horse_stay", Vector(-2241,171f, 23,09021f, 4466,272f), Vector(0.0f, -151,222f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_horse_stay2", "horse_stay", Vector(-2238,423f, 23,00134f, 4465,598f), Vector(0.0f, 188,6003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_horse_stay1", "horse_stay", Vector(-2249,609f, 23,09021f, 4459,841f), Vector(0.0f, -346,9635f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_horse_stay", "horse_stay", Vector(-2247,84f, 23,09021f, 4458,915f), Vector(0.0f, -332,9286f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2232,32f, 23,09239f, 4447,919f), Vector(0.0f, -37,95788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-2229,033f, 23,09021f, 4448,373f), Vector(0.0f, -39,34164f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "bar_lookdistance_binocs", "look_distance_binocs", Vector(-2236,719f, 23,09021f, 4441,224f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_2 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", Vector(-2568.0f, 17,35954f, 4184f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", Vector(-2429,295f, 15,05885f, 4280.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", Vector(-2501,216f, 25,89587f, 4432,677f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", Vector(-2666,291f, 53,98365f, 4780,74f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", Vector(-2580,778f, 15,49983f, 4620,063f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", Vector(-2358,007f, 10,03923f, 4465,936f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", Vector(-2346,138f, 12,9453f, 4697,183f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", Vector(-2090,028f, 10,03923f, 4525,774f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", Vector(-2140f, 7,02747f, 4372.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", Vector(-2064f, 7,02747f, 4211,936f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", Vector(-2191,708f, 12,04772f, 4124,719f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", Vector(-1933,636f, 8,031361f, 4312.0f), Vector(0.0f, -39,45688f, 0.0f));
	*(&iLocal_2 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", Vector(-1948,161f, 9,040389f, 4601,057f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", Vector(-1885,215f, 9,370696f, 4433,224f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", Vector(-1827,297f, 13,05566f, 4252,745f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", Vector(-1856f, 7,027451f, 4084.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", Vector(-1658,559f, 18,04464f, 4426,559f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", Vector(-1844f, 17,06665f, 4516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", Vector(-2316f, 8,767691f, 4281,776f), Vector(0.0f, -115,5078f, 0.0f));
	*(&iLocal_2 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", Vector(-2910,036f, 44,57027f, 4654,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", Vector(-2726,28f, 36,25617f, 4521,987f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", Vector(-2441,885f, 11,04316f, 4488.0f), Vector(0.0f, 101,156f, 0.0f));
	*(&iLocal_2 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", Vector(-2354,037f, 22,08627f, 4788.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", Vector(-2839,25f, 32,12549f, 4316,75f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", Vector(-2554,774f, 18,07061f, 4153,149f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", Vector(-2504,785f, 26,10197f, 4451,215f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", Vector(-2380f, 14,05492f, 4240,4f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", Vector(-2131,301f, 12,04518f, 4245,068f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", Vector(-2132.0f, 10,0281f, 4634,028f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", Vector(-2168,012f, 15,10399f, 4691,06f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", Vector(-1952,991f, 41,95831f, 4893,371f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", Vector(-1660,062f, 32,53368f, 4710,832f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", Vector(-1637,863f, 20,07843f, 4621,863f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", Vector(-1778,279f, 17,00437f, 4576,003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", Vector(-1666,141f, 17,71151f, 4478,913f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", Vector(-1933,051f, 9,035278f, 4488.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", Vector(-1400f, 20,07843f, 4590,162f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", Vector(-1376,957f, 17,09519f, 4781,746f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", Vector(-1526,312f, 18,05862f, 4830,312f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", Vector(-1897,378f, 14,05489f, 4230,172f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", Vector(-2352,539f, 25,11804f, 4588,779f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", Vector(-2673,413f, 34,65824f, 4552f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", Vector(-2749,371f, 38,14902f, 4436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", Vector(-2852,56f, 13,00819f, 4501,605f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", Vector(-2607,575f, 41,13937f, 4866,815f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", Vector(-3035,985f, 13,35887f, 4342,248f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", Vector(-2039,102f, 16,05764f, 4753,391f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", Vector(-1716f, 19,07449f, 4434,045f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", Vector(-1343,297f, 19,558f, 4844,218f), Vector(0.0f, 87,85265f, 0.0f));
	*(&iLocal_2 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", Vector(-1370,594f, 17,08653f, 4826,005f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", Vector(-2982,333f, 30,5575f, 4402,333f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", Vector(-2713,959f, 9,200555f, 4116.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", Vector(-2374,489f, 13,051f, 4214,489f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", Vector(-2217,438f, 11,71084f, 4497,232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", Vector(-1927,737f, 7,023766f, 4579,011f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", Vector(-1764.0f, 35,04422f, 4464.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", Vector(-1832f, 15,05882f, 4022,384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", Vector(-3506,558f, 20,30957f, 4201,442f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", Vector(-3436f, 6,023544f, 4248.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", Vector(-3381,324f, 9,035736f, 4149,359f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", Vector(-3312,873f, 40,31164f, 4434,389f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", Vector(-3487,395f, 25,28656f, 4452,401f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", Vector(-3316,056f, 38,90699f, 4626,938f), Vector(0.0f, 101,5016f, 0.0f));
	*(&iLocal_2 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", Vector(-3168,985f, 36,14119f, 4644.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", Vector(-3052,09f, 34,46273f, 4689,37f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", Vector(-2844,54f, 34,36322f, 4617,301f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", Vector(-2892,009f, 12,37078f, 4512f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", Vector(-2820.0f, 12,02767f, 4480,763f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", Vector(-2809,987f, 32,11597f, 4342,014f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", Vector(-2725,906f, 31,28142f, 4200f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", Vector(-2840.0f, 9,035294f, 4170,232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", Vector(-2609,779f, 17,13632f, 4136,288f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", Vector(-2588.0f, 27,81133f, 4162,203f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", Vector(-2431,989f, 13,05544f, 4259,917f), Vector(0.0f, -89,17472f, 0.0f));
	*(&iLocal_2 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", Vector(-2332f, 7,02747f, 4312.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", Vector(-2220f, 10,98272f, 4403,61f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", Vector(-2089,201f, 6,02355f, 4274,799f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls20", "Player_Herb_woollyBlueCurls", Vector(-2144f, 7,967607f, 4320.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls21", "Player_Herb_woollyBlueCurls", Vector(-2004.0f, 7,569696f, 4457,416f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls22", "Player_Herb_woollyBlueCurls", Vector(-2075,324f, 7,02747f, 4460,676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls23", "Player_Herb_woollyBlueCurls", Vector(-1944f, 8,031358f, 4425,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls24", "Player_Herb_woollyBlueCurls", Vector(-1820,795f, 13,11664f, 4354,409f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls25", "Player_Herb_woollyBlueCurls", Vector(-1910,817f, 8,031357f, 4340,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls26", "Player_Herb_woollyBlueCurls", Vector(-1912.0f, 9,035278f, 4287,747f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls27", "Player_Herb_woollyBlueCurls", Vector(-1834,083f, 10,03617f, 4223,111f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls28", "Player_Herb_woollyBlueCurls", Vector(-1956.0f, 8,031357f, 4093,11f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls29", "Player_Herb_woollyBlueCurls", Vector(-2022,958f, 10,89698f, 4017,618f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls30", "Player_Herb_woollyBlueCurls", Vector(-2116,598f, 8,031363f, 4032,598f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls31", "Player_Herb_woollyBlueCurls", Vector(-2222,41f, 15,04577f, 4032.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls32", "Player_Herb_woollyBlueCurls", Vector(-2195,403f, 10,13291f, 3860,817f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls33", "Player_Herb_woollyBlueCurls", Vector(-2125,854f, 14,02664f, 3845,857f), Vector(0.0f, -256,6531f, 0.0f));
	*(&iLocal_2 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls34", "Player_Herb_woollyBlueCurls", Vector(-2062,496f, 14,73775f, 3837,177f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls35", "Player_Herb_woollyBlueCurls", Vector(-2084f, 14,55479f, 3910,628f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls36", "Player_Herb_woollyBlueCurls", Vector(-2000,621f, 12,43142f, 3955,702f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls37", "Player_Herb_woollyBlueCurls", Vector(-1832f, 13,08149f, 4040,557f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls38", "Player_Herb_woollyBlueCurls", Vector(-1820,948f, 6,01367f, 4139,051f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls40", "Player_Herb_woollyBlueCurls", Vector(-1620.0f, 11,68288f, 4373,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls41", "Player_Herb_woollyBlueCurls", Vector(-1632.0f, 9,652975f, 4488.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls42", "Player_Herb_woollyBlueCurls", Vector(-1744f, 13,05098f, 3926,992f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls43", "Player_Herb_woollyBlueCurls", Vector(-1786,523f, 12,64444f, 3809,08f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls44", "Player_Herb_woollyBlueCurls", Vector(-1825,098f, 10,60763f, 3718,17f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Player_Herb_woollyBlueCurls45", "Player_Herb_woollyBlueCurls", Vector(-1772f, 11,97172f, 3778,428f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker1", "Locked_Footlocker", Vector(-2227,462f, 23,2628f, 4452,154f), Vector(0.0f, 44,0713f, 0.0f));
	*(&iLocal_2 + 2088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker2", "Locked_Footlocker", Vector(-1343,113f, 13,05098f, 4306,749f), Vector(0.0f, -353,5625f, 0.0f));
	DECOR_SET_BOOL(&iLocal_2 + 2088, "scrap", true);
	*(&iLocal_2 + 2096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker4", "Locked_Footlocker", Vector(-1498,297f, 15,185f, 3986,531f), Vector(0.0f, 36,58744f, 0.0f));
	*(&iLocal_2 + 2104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "treasure_hunting_4", "treasure_hunting_4", Vector(-2814,985f, 13,07937f, 3973,567f), Vector(0.0f, -55,18276f, 0.0f));
	*(&iLocal_2 + 2112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire55", "Campfire01", Vector(-3436f, 22,08629f, 4417,366f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire029", "Campfire01", Vector(-3416,783f, 25,09334f, 4467,92f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire030", "Campfire01", Vector(-3389,874f, 40,15686f, 4479,534f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire031", "Campfire01", Vector(-3440f, 21,08235f, 4424.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire032", "Campfire01", Vector(-3437,337f, 6,273319f, 4238,663f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire033", "Campfire01", Vector(-3470,462f, 6,023542f, 4213,539f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire034", "Campfire01", Vector(-3372f, 7,027458f, 4181,563f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire035", "Campfire01", Vector(-3414,302f, 18,46286f, 4281,833f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire036", "Campfire01", Vector(-3352,023f, 23,92834f, 4351,963f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire037", "Campfire01", Vector(-3324,359f, 21,43977f, 4320,264f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire038", "Campfire01", Vector(-3236f, 7,571811f, 4196.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire039", "Campfire01", Vector(-3180.0f, 9,03529f, 4049,572f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire040", "Campfire01", Vector(-3057,551f, 33,12941f, 4198,45f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire041", "Campfire01", Vector(-2976,518f, 6,023533f, 4147,483f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire042", "Campfire01", Vector(-2921,325f, 17,05521f, 4126,675f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire043", "Campfire01", Vector(-3105,627f, 34,13334f, 4548.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire044", "Campfire01", Vector(-3057,26f, 33,12939f, 4638,74f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire045", "Campfire03", Vector(-2904.0f, 9,040867f, 4403,443f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire047", "Campfire03", Vector(-2936f, 8,03138f, 4372f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire050", "Campfire03", Vector(-3188,215f, 13,0561f, 4329,33f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire051", "Campfire03", Vector(-1373,638f, 11,20804f, 4445,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire052", "Campfire03", Vector(-1282,648f, 6,023529f, 4424.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire053", "Campfire03", Vector(-1204.0f, 11,03308f, 4437,465f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Campfire054", "Campfire03", Vector(-1134,489f, 6,036162f, 4529,511f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker5", "Locked_Footlocker", Vector(-2141,686f, 18,07949f, 4991,918f), Vector(0.0f, 141,8382f, 0.0f));
	*(&iLocal_2 + 2312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker6", "Locked_Footlocker", Vector(-1758,611f, 29,92846f, 4810,387f), Vector(0.0f, 20,34719f, 0.0f));
	*(&iLocal_2 + 2320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker7", "Locked_Footlocker", Vector(-1451,644f, 19,69032f, 4911,674f), Vector(0.0f, 179,2477f, 0.0f));
	*(&iLocal_2 + 2328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker8", "Locked_Footlocker", Vector(-1202,659f, 19,07451f, 4965,54f), Vector(0.0f, 45,16203f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "nsit_docks", "nsit_docks", Vector(-1149,049f, 28,10178f, 4825,696f), Vector(0.0f, 142,3014f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "look_out_window_R", "look_out_window_R", Vector(-1150,912f, 28,08622f, 4823,648f), Vector(0.0f, 143,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_2 + 2336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "Locked_Footlocker9", "Locked_Footlocker", Vector(-1142,741f, 28,03458f, 4819,365f), Vector(0.0f, -18,00826f, 0.0f));
	return 1;
}

bool Function_89(struct<2>[] Param0) //Position: 0xD8B5 / 55477
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_93();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_92(&(Param0[iVar02]), 8);
		}
		else if (Function_91())
		{
			iVar1 = 1;
			Function_92(&(Param0[iVar02]), 8);
		}
		Function_92(&(Param0[iVar02]), 16);
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
				Function_92(&(Param0[iVar02]), 1);
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
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_92(&(Param0[iVar02]), 2);
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
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_92(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_92(&(Param0[iVar02]), 2);
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
	Function_90();
	return 1;
}

void Function_90() //Position: 0xDC77 / 56439
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_91() //Position: 0xDCB7 / 56503
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

void Function_92(struct<13> Param0) //Position: 0xDCE5 / 56549
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_93() //Position: 0xDCF8 / 56568
{
	if (!Function_16(128))
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

var Function_94(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xDD3A / 56634
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_95(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_92(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_95(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xDD78 / 56696
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_92(&(Param0[iVar02]), 4);
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

void Function_96(int iParam0, int iParam1) //Position: 0xDE47 / 56903
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

bool Function_97(var uParam0, bool bParam1) //Position: 0xDE91 / 56977
{
	int iVar0;
	
	iVar0 = Function_99(uParam0);
	if (!Function_98(iVar0))
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

bool Function_98(int iParam0) //Position: 0xDECF / 57039
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_99(int iParam0) //Position: 0xDEE6 / 57062
{
	if (!Function_100(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_100(int iParam0) //Position: 0xDF00 / 57088
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_101() //Position: 0xDF16 / 57110
{
	var uVar0;
	
	Function_96(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Perdido_layout");
	}
	return 1;
}

void Function_102(char* cParam0) //Position: 0xDF60 / 57184
{
	if (!Function_16(128))
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

void Function_103(int iParam0) //Position: 0xDF9D / 57245
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_44085[iParam09] == Global_46722[0])
	{
		STREAMING_REQUEST_ACTOR(1177, true, false);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_REQUEST_ACTOR(1179, true, false);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_REQUEST_ACTOR(1178, true, false);
	}
	return;
}

