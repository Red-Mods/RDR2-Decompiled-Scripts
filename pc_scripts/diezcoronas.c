//Decompiled with MagicRDR v1.0
//Function Count : 97
//Statics Count : 711
//Natives Count : 118
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 46;
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
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 2;
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
	int iLocal_646 = 0;
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
	var uLocal_672 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_594 = 0;
	Function_96(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_95("Initializing DiezCoronas", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_595 = 1000;
		switch (iLocal_594)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_594 = 1;
				}
				iLocal_595 = 0;
				break;
			
			case 0x00000001:
				if (Function_93())
				{
					if (Function_89(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
					iLocal_594 = 2;
				}
				iLocal_595 = 0;
				break;
			
			case 0x00000002:
				if (Function_80())
				{
					Function_79(&(Global_43791[iScriptParam_0]), 32);
					iLocal_594 = 3;
					Function_76(&iLocal_8);
				}
				iLocal_595 = 0;
				break;
			
			case 0x00000003:
				uLocal_596 = LAUNCH_NEW_SCRIPT_WITH_ARGS("DiezCoronasVol", &iScriptParam_0, 2, 0);
				Function_75(&Global_12472, &Global_14954, iScriptParam_0);
				iLocal_594 = 5;
				iLocal_595 = 0;
				break;
			
			case 0x00000005:
				if (Function_74(&Global_12472, &Global_14954, iScriptParam_0))
				{
					iLocal_594 = 4;
					iLocal_595 = 0;
				}
				else
				{
					iLocal_595 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_73(&(Global_43791[iScriptParam_0]), 16))
				{
					iLocal_594 = 6;
				}
				iLocal_595 = 0;
				break;
			
			case 0x00000006:
				Function_72(StackVal, 0, &uLocal_600, Vector(-788,6112f, 13,03229f, 3730,068f));
				Function_71(StackVal, 0, &uLocal_600, Vector(-788,6112f, 13,03229f, 3730,068f));
				Function_70(StackVal, 0, &uLocal_600, Vector(-791,2759f, 13,11084f, 3711,519f));
				Function_69(StackVal, 0, &uLocal_600, Vector(-825,5682f, 16,66465f, 3707,854f));
				Function_68(StackVal, 0, &uLocal_600, Vector(-791,2759f, 13,11084f, 3711,519f));
				Function_66(StackVal, 0, &uLocal_600, Vector(-825,5682f, 16,66465f, 3707,854f));
				Function_65(0, &uLocal_600, &iLocal_8);
				Function_59(&Global_12472, &Global_14954, &uLocal_600, &Global_10996, iScriptParam_0);
				Function_79(&(Global_43791[iScriptParam_0]), 8);
				if (Function_73(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_58(&(Global_43791[iScriptParam_0]), 131072);
					if ((!Global_39324[1] && !Global_39324[2]) && !Global_39324[3])
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_8, "dzcv_BB_Restriction")))
						{
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_8, "dzcv_BB_Restriction"));
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_8, "dzcv_BB_Restriction"));
						}
						CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Butter_Bridge", Vector(33,938f, 94,713f, 2742,488f), Vector(0.0f, 214.0f, 0.0f), Vector(30.0f, 40.0f, 100.0f));
					}
					if (Global_39324[2] && !Global_39324[3])
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_8, "dzcv_BB_Restriction")))
						{
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_8, "dzcv_BB_Restriction"));
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_8, "dzcv_BB_Restriction"));
						}
						CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Butter_Bridge", Vector(33,938f, 94,713f, 2742,488f), Vector(0.0f, 214.0f, 0.0f), Vector(30.0f, 40.0f, 100.0f));
					}
					iLocal_594 = 10;
				}
				else
				{
					iLocal_594 = 7;
				}
				iLocal_595 = 0;
				break;
			
			case 0x00000007:
				Function_44(iScriptParam_0);
				iLocal_594 = 8;
				iLocal_595 = 0;
				break;
			
			case 0x00000008:
				Function_43(StackVal, 1, Global_46894[1], Vector(-724,92f, 63,349f, 3297,469f));
				if (!Function_42(&Global_46894))
				{
					Function_38(2, 0,5f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_42(&Global_46894));
					Function_37(64);
					Function_33(1, 10, 6, 0, 3);
				}
				Function_79(&(Global_43791[iScriptParam_0]), 512);
				iLocal_594 = 9;
				iLocal_595 = 0;
				break;
			
			case 0x00000009:
				if (!Function_42(&Global_46894))
				{
					Function_31(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 1;
				Function_79(&(Global_43791[iScriptParam_0]), 4);
				Function_30("Finished Initializing DiezCoronas", 5.0f);
				iLocal_594 = 10;
				iLocal_595 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_42(&Global_46894))
				{
					if (iLocal_646)
					{
						iLocal_646 = 0;
						iLocal_594 = 8;
						iLocal_595 = 0;
					}
				}
				else
				{
					iLocal_646 = 1;
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_598))
					{
						uLocal_598 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_647, 62, 0);
					}
				}
				if (Function_73(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_594 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_595);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_12472, &Global_14954, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_58(&(Global_43791[iScriptParam_0]), 32);
	Function_58(&(Global_43791[iScriptParam_0]), 64);
	Function_58(&(Global_43791[iScriptParam_0]), 8);
	Function_58(&(Global_43791[iScriptParam_0]), 512);
	Function_58(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_596))
	{
		TERMINATE_SCRIPT(&uLocal_596);
	}
	Function_30("Unloaded DiezCoronas", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5BC / 1468
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

void Function_2(int iParam0) //Position: 0x5F2 / 1522
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x614 / 1556
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x62A / 1578
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x640 / 1600
{
	Function_6(&iLocal_8 + 8);
	RELEASE_LAYOUT_REF(&iLocal_8);
	return;
}

void Function_6(int iParam0) //Position: 0x653 / 1619
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x67B / 1659
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

void Function_8(struct<13> Param0) //Position: 0x7C6 / 1990
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x7E3 / 2019
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x801 / 2049
{
	Function_6(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x814 / 2068
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
	if (Function_73(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_58(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_73(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_73(&(Global_43791[bParam2]), 256))
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
			Function_79(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xA32 / 2610
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
		if (!Function_18(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xB98 / 2968
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

int Function_14(int iParam0) //Position: 0xBC3 / 3011
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

void Function_15(var uParam0, int iParam1) //Position: 0xBF7 / 3063
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xC08 / 3080
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC24 / 3108
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xC3E / 3134
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC5B / 3163
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(var uParam0, int iParam1) //Position: 0xC76 / 3190
{
	return (uParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xC83 / 3203
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

void Function_22(int iParam0) //Position: 0x1131 / 4401
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

bool Function_23(int iParam0) //Position: 0x119C / 4508
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

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x121A / 4634
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

bool Function_25(int iParam0) //Position: 0x12C9 / 4809
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x12E4 / 4836
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

bool Function_27(bool bParam0) //Position: 0x1399 / 5017
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_73(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x13B7 / 5047
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x13C6 / 5062
{
	return &Global_21369 + 8;
}

void Function_30(char* cParam0) //Position: 0x13D2 / 5074
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

void Function_31(int iParam0, bool bParam1) //Position: 0x1412 / 5138
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

void Function_32(var uParam0, int iParam1) //Position: 0x1502 / 5378
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_33(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x150F / 5391
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
		Function_34();
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

void Function_34() //Position: 0x15FD / 5629
{
	int iVar0;
	
	Global_41176 = Function_35(StackVal);
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

int Function_35(int iParam0) //Position: 0x164B / 5707
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_36(int iParam0) //Position: 0x1663 / 5731
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_37(bool bParam0) //Position: 0x1678 / 5752
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_38(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x168B / 5771
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
		Function_41();
	}
	if (&bParam5)
	{
		Function_39(1048576);
	}
}

void Function_39(int iParam0) //Position: 0x1799 / 6041
{
	Function_40(&Global_43580, iParam0);
	return;
}

void Function_40(var uParam0, var uParam1) //Position: 0x17A7 / 6055
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_41() //Position: 0x17C6 / 6086
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_39(16384);
	}
	return;
}

bool Function_42(int[] iParam0) //Position: 0x17E2 / 6114
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

void Function_43(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1833 / 6195
{
	if (!Function_36(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

void Function_44(int iParam0) //Position: 0x1894 / 6292
{
	switch (Global_46720)
	{
		case 0x00000000:
			Function_57(iParam0);
			break;
		
		case 0x00000001:
			Function_57(iParam0);
			Function_51(iParam0);
			break;
		
		case 0x00000002:
			Function_51(iParam0);
			break;
		
		case 0x00000003:
			break;
	}
	if (!Global_6606)
	{
		Function_51(iParam0);
		Function_57(iParam0);
	}
	Function_47(7, 2, 0, 0, 50, 2, 0, 0, 4, iParam0, "$/content/Ambient/Roaming/event_donkey_lead", 31, 2, 0x42c80000, 8, 55, 0);
	Function_46(&Global_27462[752] + 188, -5.0f, 2);
	Function_45(&Global_27462[752] + 188, 1, 3.0f, 112, 4294967295);
	return;
}

void Function_45(struct<85> Param0) //Position: 0x1955 / 6485
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_46(int iParam0, float fParam1, float fParam2) //Position: 0x197F / 6527
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = fParam2;
	return;
}

void Function_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1997 / 6551
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_48(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_48(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x19DE / 6622
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
					bVar2 = Function_50(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_49(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_50(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_49(int iParam0, int iParam1) //Position: 0x1D9C / 7580
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_50(int iParam0) //Position: 0x1DBF / 7615
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_51(int iParam0) //Position: 0x1DD6 / 7638
{
	Function_47(28, 2, 25, 4294967146, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_aftermath", 63, 2, 180.0f, 8, 55, 0);
	Function_45(&Global_27462[2852] + 188, 1, 9.0f, 64, 752);
	Function_56(&Global_27462[2852] + 188, 20.0f);
	Function_55(&Global_27462[2852] + 188, 5.0f);
	Function_54(&Global_27462[2852] + 188, 12.0f, 5.0f);
	Function_53(&Global_27462[2852] + 188, 0,4f, 8.0f);
	Function_46(&Global_27462[2852] + 188, -4.0f, 2);
	Function_52(&Global_27462[2852] + 188);
	return;
}

void Function_52(struct<25> Param0) //Position: 0x1EAC / 7852
{
	Param0.f_24 = 1;
	return;
}

void Function_53(int iParam0, float fParam1, int iParam2) //Position: 0x1EB8 / 7864
{
	(&iParam0 + 84)->f_52 = fParam1;
	(&iParam0 + 84)->f_56 = iParam2;
	return;
}

void Function_54(int iParam0, float fParam1, int iParam2) //Position: 0x1ED0 / 7888
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_48 = iParam2;
	return;
}

void Function_55(int iParam0, int iParam1) //Position: 0x1EE8 / 7912
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_56(int iParam0, int iParam1) //Position: 0x1EF7 / 7927
{
	(&iParam0 + 84)->f_20 = iParam1;
	return;
}

void Function_57(int iParam0) //Position: 0x1F06 / 7942
{
	Function_47(30, 2, 50, 4294967196, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_execution", 63, 2, 180.0f, 8, 55, 0);
	Function_45(&Global_27462[3052] + 188, 2, 5.0f, 96, 752);
	Function_56(&Global_27462[3052] + 188, 32.0f);
	Function_55(&Global_27462[3052] + 188, 5.0f);
	Function_54(&Global_27462[3052] + 188, 19,9f, 8.0f);
	Function_53(&Global_27462[3052] + 188, 0,4f, 4.0f);
	Function_46(&Global_27462[3052] + 188, 0.0f, 4);
	Function_52(&Global_27462[3052] + 188);
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x1FD4 / 8148
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_59(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1FEE / 8174
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_73(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_60(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_58(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_79(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_60(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x20A6 / 8358
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_73(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
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
		(&iParam1 + 16) = Function_63(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_62(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_61(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_61(int iParam0, struct<2> Param1) //Position: 0x2227 / 8743
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_62(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_62(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_62(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_62(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_62(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_62(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_62(vector3 vParam0) //Position: 0x236D / 9069
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_63(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2385 / 9093
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_64(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

var Function_64() //Position: 0x24AC / 9388
{
	int iVar0;
	
	return &iVar0;
}

void Function_65(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x24B5 / 9397
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_66(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2514 / 9492
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_67(struct<2> Param0, struct<2> Param2) //Position: 0x257B / 9595
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_68(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x25A7 / 9639
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_69(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2610 / 9744
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_70(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x267B / 9851
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_71(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x26E1 / 9953
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_72(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x274A / 10058
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_73(var uParam0, int iParam1) //Position: 0x27AE / 10158
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_74(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x27CB / 10187
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
	if (Function_73(&(Global_43791[iParam2]), 0x40000000))
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

void Function_75(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x28B4 / 10420
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
	if (!Function_73(&(Global_43791[iParam2]), 0x40000000))
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

int Function_76(var uParam0) //Position: 0x29A4 / 10660
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
			bVar6 = RAND_INT_RANGE(1, 10000) > 2750;
			bVar7 = (((bVar6 || DECOR_CHECK_EXIST(&iVar0, "guero")) || DECOR_CHECK_EXIST(&iVar0, "always")) || Global_6611);
			bVar8 = false;
			bVar9 = (Function_78() && !Function_77(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_78()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
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

bool Function_77(bool bParam0, bool bParam1) //Position: 0x2B03 / 11011
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_78() //Position: 0x2B24 / 11044
{
	return 0;
}

void Function_79(var uParam0, int iParam1) //Position: 0x2B2B / 11051
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_80() //Position: 0x2B3C / 11068
{
	var uVar0;
	
	Function_88(3, 3);
	uVar0 = &uVar0;
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire06", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_86(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	if (!Function_81(&iLocal_8 + 8))
	{
		return 0;
	}
	iLocal_8 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_8))
	{
		iLocal_8 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint", Vector(-1328,862f, 83,27f, 3602,278f), Vector(0.0f, 9,33f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint1", Vector(-596.0f, 30,83434f, 4006,688f), Vector(0.0f, 10,879f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint2", Vector(-528.0f, 28,61168f, 3587,232f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint3", Vector(-111,0578f, 55,2157f, 2808f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 752) = Vector(-578,514f, 28,459f, 3838,448f);
	*(&iLocal_8 + 752 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_8 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint4", Vector(-578,514f, 28,459f, 3838,448f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint5", Vector(-1341,777f, 13,05099f, 4301,776f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint6", Vector(-1352f, 13,05099f, 4281,627f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint7", Vector(-1370,036f, 13,05099f, 4317,523f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint8", Vector(-1378,815f, 13,05099f, 4295,221f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dzcf_bhint9", Vector(-1344f, 13,482f, 4260.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire03", "Campfire03", Vector(-1108.0f, 77,30637f, 3621,951f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 784, "MP_ONLY", 1);
	*(&iLocal_8 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire05", "Campfire03", Vector(-1374,141f, 70,27447f, 4054,141f), Vector(0.0f, -154,5513f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 792, "MP_ONLY", 1);
	*(&iLocal_8 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire07", "Campfire01_bad", Vector(-529,4337f, 22,08627f, 3170,421f), Vector(0.0f, 180,5047f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 800, "MP_ONLY", 1);
	*(&iLocal_8 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire010", "Campfire05", Vector(-1448,114f, 70,26101f, 3730,889f), Vector(0.0f, -78,42554f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 808, "MP_ONLY", 1);
	*(&iLocal_8 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire011", "Campfire05", Vector(-1056.0f, 8,031372f, 4159,881f), Vector(0.0f, 70,38938f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 816, "MP_ONLY", 1);
	*(&iLocal_8 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire012", "Campfire05", Vector(-1013,744f, 7,027447f, 4010,256f), Vector(0.0f, -107,5164f, 0.0f));
	*(&iLocal_8 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire06", "Campfire06", Vector(-1015,098f, 16,06277f, 4365,251f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire013", "Campfire06", Vector(-741,5064f, 10,03925f, 4340,215f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 840, "MP_ONLY", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-1362,953f, 13,07964f, 4300,644f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-1359,716f, 13,05099f, 4298,842f), Vector(0.0f, -272,5584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_sit_ground_smoke3", "sit_ground_smoke", Vector(-1364,03f, 13,04671f, 4298,394f), Vector(0.0f, -112,4335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-1362,544f, 13,05099f, 4296,964f), Vector(0.0f, -180,1093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay13", "horse_stay", Vector(-1394,776f, 12,977f, 4308,042f), Vector(0.0f, 74,33443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay12", "horse_stay", Vector(-1386,643f, 13,051f, 4290,629f), Vector(0.0f, 41,19416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay11", "horse_stay", Vector(-1396,363f, 13,05099f, 4300,878f), Vector(0.0f, 48,00632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay10b", "horse_stay", Vector(-1400,339f, 11,495f, 4292,966f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_Pee3", "Pee", Vector(-1385,775f, 13,05099f, 4298,206f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1378,63f, 13,056f, 4306,34f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", Vector(-1372,292f, 13,05099f, 4291,89f), Vector(0.0f, -28,9995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1374,563f, 13,05099f, 4297,688f), Vector(0.0f, 9,780541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_look_out_window_R", "look_out_window_R", Vector(-1380,752f, 13,04853f, 4297,446f), Vector(0.0f, -41,49537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay21", "horse_stay", Vector(-1365,99f, 13,051f, 4324,597f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay20", "horse_stay", Vector(-1384,05f, 12,988f, 4324,893f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay19", "horse_stay", Vector(-1388,964f, 12,966f, 4324,276f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay18", "horse_stay", Vector(-1364,119f, 13,051f, 4332,481f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", Vector(-1354,34f, 13,05099f, 4309,859f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1361,21f, 13,05939f, 4316,554f), Vector(0.0f, 192,786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1368,854f, 13,05759f, 4314,05f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_sit_ground_smoke2", "sit_ground_smoke", Vector(-1371,078f, 13,05098f, 4315,158f), Vector(0.0f, 82,18061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand6", "rand_idle_stand", Vector(-1381,432f, 13,037f, 4321,681f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay15", "horse_stay", Vector(-1331,086f, 13,691f, 4317,092f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay14", "horse_stay", Vector(-1335,886f, 13,273f, 4317,106f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay17", "horse_stay", Vector(-1329,264f, 13,051f, 4300,218f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_horse_stay16", "horse_stay", Vector(-1327,329f, 13,051f, 4303,468f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", Vector(-1347,543f, 13,051f, 4305,105f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand4", "rand_idle_stand", Vector(-1334,242f, 13,051f, 4304,613f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand5", "rand_idle_stand", Vector(-1336,62f, 13,051f, 4294,1f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand3", "rand_idle_stand", Vector(-1353,39f, 13,051f, 4312,579f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_sit_ground_smoke4", "sit_ground_smoke", Vector(-1343,849f, 13,056f, 4296,042f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_Pee4", "Pee", Vector(-1352,655f, 13,051f, 4301,614f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand", "rand_idle_stand", Vector(-1346,009f, 13,056f, 4294,357f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", Vector(-1346,468f, 13,05098f, 4307,142f), Vector(0.0f, 118,1131f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_horse_stay10", "horse_stay", Vector(-1361,381f, 13,103f, 4268,063f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_horse_stay9", "horse_stay", Vector(-1344,416f, 13,051f, 4267,783f), Vector(0.0f, -161,8634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_horse_stay8", "horse_stay", Vector(-1361,88f, 13,051f, 4274,834f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_horse_stay", "horse_stay", Vector(-1352,36f, 13,051f, 4270,885f), Vector(0.0f, 212,416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_sit_ground_smoke", "sit_ground_smoke", Vector(-1350,854f, 13,051f, 4272,156f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_smoking_stand2", "smoking_stand", Vector(-1349,743f, 13,05099f, 4283,362f), Vector(0.0f, -55,15614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_Pee2", "Pee", Vector(-1356,144f, 13,05099f, 4286,991f), Vector(0.0f, -151,8606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand2", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sep_Pee", "Pee", Vector(-1360,661f, 13,107f, 4286,437f), Vector(0.0f, 152,3031f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_smoking_stand", "smoking_stand", Vector(-1358,714f, 13,051f, 4282,462f), Vector(0.0f, -53,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_rand_idle_stand1", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", Vector(-1343,447f, 13,056f, 4286,479f), Vector(0.0f, -35,46272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", Vector(-1339,343f, 13,051f, 4267,934f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", Vector(-1324,474f, 13,051f, 4303,514f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", Vector(-1372,628f, 13,05f, 4335,497f), Vector(0.0f, 14,92106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", Vector(-1408,984f, 14,318f, 4305,296f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_8 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire014", "Campfire03", Vector(-238,2539f, 31,12157f, 4266,254f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 848, "MP_ONLY", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark1", "horse_tend", Vector(-101,656f, 55,227f, 2801,408f), Vector(0.0f, -141,5272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark2", "horse_tend", Vector(-111,4741f, 55,2157f, 2810,284f), Vector(0.0f, 66,63183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark3", "horse_stay", Vector(-113,5305f, 55,2157f, 2812.0f), Vector(0.0f, -134,0859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark4", "horse_stay", Vector(-100,0075f, 55,38091f, 2800,44f), Vector(0.0f, 38,61838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark5", "horse_stay", Vector(-118,1587f, 55,2157f, 2812,576f), Vector(0.0f, 224,0045f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark6", "horse_stay", Vector(-102,8546f, 55,37479f, 2802,538f), Vector(0.0f, 49,26177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark7", "sit_ground_smoke", Vector(-109,1386f, 55,21569f, 2807,325f), Vector(0.0f, -280,0471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark8", "sit_ground_play_harmonica", Vector(-112,5914f, 55,2157f, 2806,592f), Vector(0.0f, -108,6369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark9", "stand_guntricks_e_any", Vector(-111,0713f, 55,2157f, 2808,681f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark10", "stand_yawning_n_any", Vector(-106,3725f, 55,29201f, 2806,399f), Vector(0.0f, 100,3735f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark11", "stand_lookdistance_w_any", Vector(-117,9617f, 55,2157f, 2809,962f), Vector(0.0f, 96,93845f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark12", "Pee", Vector(-98,37971f, 55,19736f, 2802,857f), Vector(0.0f, 249,0699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark13", "rand_idle_stand", Vector(-104,064f, 55,47073f, 2807,075f), Vector(0.0f, -109,9886f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark14", "nsit_docks", Vector(-101,3585f, 55,47161f, 2807,162f), Vector(0.0f, -136,5345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark15", "smoking_stand", Vector(-109,5375f, 55,21568f, 2805,538f), Vector(0.0f, 142,1955f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark16", "look_distance_binocs", Vector(-114,3744f, 54,75f, 2814,374f), Vector(0.0f, 191,7611f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Man_landmark17", "Rand_Idle_Sit_Ground", Vector(-111,3886f, 55,21569f, 2804,94f), Vector(0.0f, 182,6724f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark1", "horse_stay", Vector(-485,8965f, 20,02694f, 3026,479f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_8 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark1", "Sit_Ground_Campfire_Tend", Vector(-1237,767f, 22,29545f, 3209,357f), Vector(0.0f, 87,69044f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 856), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark2", "horse_tend", Vector(-1245,056f, 22,3515f, 3213,548f), Vector(0.0f, -101,8198f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark1", "sleeping_wall_scripted", Vector(-524,7726f, 28,61168f, 3585,052f), Vector(0.0f, 141,0826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark2", "horse_tend", Vector(-523,9998f, 28,09874f, 3593,792f), Vector(0.0f, 82,67101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark3", "Sit_Ground_Campfire_Tend", Vector(-529,402f, 28,61169f, 3586,814f), Vector(0.0f, -106,4862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark4", "horse_tend", Vector(-528,4648f, 28,61169f, 3584.0f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark5", "stand_yawning_n_any", Vector(-526,808f, 28,61168f, 3586,416f), Vector(0.0f, 123,4238f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark6", "smoking_stand_nospawn", Vector(-530,215f, 28,612f, 3588,583f), Vector(0.0f, 302,8259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark7", "stand_lookdistance_w_any", Vector(-532,8776f, 28,59505f, 3586,723f), Vector(0.0f, 119,1744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark8", "stand_lookdistance_w_any", Vector(-523,8267f, 27,21791f, 3603,666f), Vector(0.0f, 188,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark9", "horse_stay", Vector(-524,2856f, 28,57678f, 3592,028f), Vector(0.0f, 466,0749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark10", "horse_stay", Vector(-526,8679f, 28,61168f, 3584.0f), Vector(0.0f, 369,76f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark11", "horse_stay", Vector(-530,737f, 28,612f, 3584,215f), Vector(0.0f, -0,6411512f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark12", "stand_drunk_rowdydrink", Vector(-528,0726f, 28,61168f, 3589,514f), Vector(0.0f, 12,18899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark13", "stand_guntricks_e_any", Vector(-530,475f, 28,612f, 3586,142f), Vector(0.0f, -103,6828f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sol_landmark14", "Rand_Idle_Sit_Ground", Vector(-527,2328f, 28,61168f, 3588,458f), Vector(0.0f, 38,3594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_8 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-596,7665f, 30,87692f, 4008,65f), Vector(0.0f, -39,59076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 864), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark1", "stand_lookdistance_w_any", Vector(-613,8975f, 27,71271f, 4015,721f), Vector(0.0f, 38,57999f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark2", "smoking_stand_nospawn", Vector(-598,088f, 30,877f, 4007,252f), Vector(0.0f, -88,51762f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark3", "stand_lookdistance_w_any", Vector(-595,0942f, 30,87692f, 4003,644f), Vector(0.0f, 40,7513f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark4", "stand_lookdistance_w_any", Vector(-568,1231f, 34,93197f, 4019,918f), Vector(0.0f, -134,8334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark5", "horse_stay", Vector(-598,0424f, 30,87692f, 4005,047f), Vector(0.0f, -109,1773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark6", "horse_stay", Vector(-652,4681f, 12,93578f, 3998,157f), Vector(0.0f, -178,8803f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark7", "horse_stay", Vector(-596,8939f, 30,87373f, 4003,538f), Vector(0.0f, -146,6455f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark8", "horse_stay", Vector(-650,021f, 13,01396f, 3997,718f), Vector(0.0f, -63,92681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark9", "horse_stay", Vector(-654,9255f, 12,7644f, 3998,088f), Vector(0.0f, -132,133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark10", "sleeping_wall_scripted", Vector(-595,894f, 30,877f, 4009,931f), Vector(0.0f, 13,83779f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark11", "stand_guntricks_e_any", Vector(-593,51f, 30,876f, 4006,038f), Vector(0.0f, 127,0322f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark12", "Rand_Idle_Sit_Ground", Vector(-594,076f, 30,877f, 4007,19f), Vector(0.0f, 101,0548f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "cab_landmark13", "look_distance_binocs", Vector(-577,5045f, 32,83132f, 4002,572f), Vector(0.0f, -67,42719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark3", "horse_tend", Vector(-1245,323f, 21,83688f, 3217,079f), Vector(0.0f, -95,92507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark4", "horse_tend", Vector(-1229,347f, 22,0393f, 3216,383f), Vector(0.0f, 96,76688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark5", "horse_stay", Vector(-1249,337f, 23,3665f, 3211,135f), Vector(0.0f, -33,82539f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark6", "horse_stay", Vector(-1224,93f, 22,02998f, 3213,278f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark8", "stand_lookdistance_w_any", Vector(-1245,312f, 21,15314f, 3219,846f), Vector(0.0f, 176,0394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark9", "look_distance_binocs", Vector(-1226,53f, 22,09952f, 3215,262f), Vector(0.0f, -144,2426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark10", "Rand_Idle_NearWall", Vector(-1239,73f, 22,0971f, 3205,014f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark11", "rand_idle_stand", Vector(-1220,766f, 23,494f, 3204,79f), Vector(0.0f, -54,23795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark12", "Pee", Vector(-1225,842f, 22,606f, 3204,7f), Vector(0.0f, -31,56896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark13", "stand_lookdistance_w_any", Vector(-1236,023f, 20,958f, 3221,002f), Vector(0.0f, 175,0627f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark14", "stand_guntricks_e_any", Vector(-1236,338f, 22,24551f, 3208f), Vector(0.0f, 36,00572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark15", "stand_drunk_rowdydrink", Vector(-1233,859f, 22,23026f, 3207,647f), Vector(0.0f, 62,26207f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark16", "Rand_Idle_Sit_Ground", Vector(-1238,578f, 22,33991f, 3206,593f), Vector(0.0f, -115,5628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Grn_landmark17", "smoking_stand", Vector(-1232,763f, 22,24354f, 3212,812f), Vector(0.0f, 45,14069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark2", "horse_stay", Vector(-486,6529f, 20,15339f, 3025,138f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark3", "horse_tend", Vector(-486,7703f, 20,2141f, 3023,461f), Vector(0.0f, -254,62f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark4", "horse_tend", Vector(-486,9326f, 20,22241f, 3021,869f), Vector(0.0f, -249,1905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark5", "smoking_stand", Vector(-484,2574f, 20,49877f, 3031,654f), Vector(0.0f, -93,37111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark6", "stand_guntricks_e_any", Vector(-482,7634f, 20,4562f, 3032,894f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark7", "lie_sleep_on_bed_r", Vector(-488,9799f, 20,48626f, 3033,376f), Vector(0.0f, 21,64087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark8", "look_out_window_L", Vector(-486,3158f, 20,5107f, 3032,65f), Vector(0.0f, -66,49553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark10", "stand_lookdistance_w_any", Vector(-483,0443f, 18,67955f, 3048,706f), Vector(0.0f, 176,6462f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark12", "lean_fence_L_talking", Vector(-484,9706f, 20,49036f, 3036,224f), Vector(0.0f, -156,5074f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark13", "Pee", Vector(-492,1762f, 20,335f, 3022,99f), Vector(0.0f, 62,1369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark14", "stand_lookdistance_w_any", Vector(-479,421f, 21,113f, 3013,55f), Vector(0.0f, -22,8892f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark15", "Rand_Idle_NearWall", Vector(-490,3453f, 20,08626f, 3026,755f), Vector(0.0f, -71,52729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark16", "nriverwash", Vector(-472,1022f, 17,75337f, 3031,939f), Vector(0.0f, -125,2288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark17", "nsit_docks", Vector(-476,763f, 18,7006f, 3037,619f), Vector(0.0f, -71,01546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Brit_landmark18", "nlean_rail", Vector(-488,092f, 20,486f, 3037,493f), Vector(0.0f, -162,8951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_8 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire015", "Campfire03", Vector(-708.0f, 11,04317f, 4528.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire016", "Campfire03", Vector(-348f, 22,08627f, 4288.0f), Vector(0.0f, -88,23318f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark1", "horse_tend", Vector(97,78033f, 71,27844f, 2684.0f), Vector(0.0f, -203,1011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark2", "horse_tend", Vector(100,282f, 71,27846f, 2683,792f), Vector(0.0f, -203,1011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark3", "horse_tend", Vector(108,8526f, 71,28279f, 2675,14f), Vector(0.0f, 124,6175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark4", "horse_stay", Vector(93,90526f, 71,27841f, 2684,384f), Vector(0.0f, 18,86558f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark5", "horse_stay", Vector(103,9007f, 71,12509f, 2677,505f), Vector(0.0f, -48,71856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark6", "horse_stay", Vector(90,52749f, 71,27842f, 2684,49f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark7", "nuse_shelf", Vector(124,6688f, 72,42136f, 2671,896f), Vector(0.0f, 294,9007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark8", "lie_sleep_on_bed_r", Vector(123,5967f, 72,42126f, 2669,792f), Vector(0.0f, -63,85365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark9", "look_out_window_L", Vector(121,8093f, 72,41193f, 2670,812f), Vector(0.0f, 117,1071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark10", "look_distance_binocs", Vector(128,4899f, 72,50111f, 2674,588f), Vector(0.0f, -74,37722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark12", "stand_kneelvomit_n_any", Vector(127,0404f, 72,41193f, 2668,225f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark14", "stand_drunk_throwbottle", Vector(120,5929f, 71,25062f, 2682,702f), Vector(0.0f, -149,8333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark15", "smoking_stand", Vector(126,9357f, 72,4119f, 2675,583f), Vector(0.0f, 164,1807f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark16", "nsit_docks", Vector(118,6707f, 71,25098f, 2684,139f), Vector(0.0f, -153,0388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Bach_landmark17", "Rand_Idle_NearWall", Vector(122,0053f, 72,41192f, 2674,544f), Vector(0.0f, -240,2579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_8 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark18", "look_distance_binocs", Vector(-573,2406f, 28,33539f, 3840,228f), Vector(0.0f, -93,01151f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 888), 0);
	*(&iLocal_8 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark2", "stand_spit", Vector(-560,3032f, 22,78524f, 3833,79f), Vector(0.0f, -49,85806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 896), 0);
	*(&iLocal_8 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark3", "stand_key_twirling", Vector(-582,897f, 34,49655f, 3814,11f), Vector(0.0f, -53,07253f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 904), 0);
	*(&iLocal_8 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark4", "stand_guntricks_e_any", Vector(-576,779f, 28,94148f, 3847,087f), Vector(0.0f, -131,297f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 912), 0);
	*(&iLocal_8 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark5", "smoking_stand", Vector(-586,2288f, 34,64845f, 3850,912f), Vector(0.0f, -138,8816f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 920), 0);
	*(&iLocal_8 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark6", "nsit_docks", Vector(-583,4898f, 34,5748f, 3837,621f), Vector(0.0f, -130,979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 928), 0);
	*(&iLocal_8 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark7", "sit_ground_smoke", Vector(-578,5978f, 28,4573f, 3841,574f), Vector(0.0f, -101,907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 936), 0);
	*(&iLocal_8 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark8", "sit_ground_smoke", Vector(-583,3972f, 26,90271f, 3852.0f), Vector(0.0f, -88,43743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 944), 0);
	*(&iLocal_8 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark9", "sit_ground_play_harmonica", Vector(-575,2004f, 28,40461f, 3841,486f), Vector(0.0f, -313,2773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 952), 0);
	*(&iLocal_8 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark11", "rand_idle_stand", Vector(-576,1994f, 29,7793f, 3820,138f), Vector(0.0f, -67,84433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 960), 0);
	*(&iLocal_8 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark12", "rand_idle_stand", Vector(-568,0064f, 27,37984f, 3846,823f), Vector(0.0f, -85,34988f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 968), 0);
	*(&iLocal_8 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark13", "Rand_Idle_Sit_Ground", Vector(-576,6311f, 28,47113f, 3838,295f), Vector(0.0f, -163,0736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 976), 0);
	*(&iLocal_8 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark14", "Pee", Vector(-570,251f, 26,61557f, 3819,763f), Vector(0.0f, -86,62787f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 984), 0);
	*(&iLocal_8 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark15", "look_distance_binocs", Vector(-580,898f, 33,55491f, 3827,646f), Vector(0.0f, -93,01151f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 992), 0);
	*(&iLocal_8 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark16", "stand_lookdistance_w_any", Vector(-580,4172f, 34,52888f, 3818,119f), Vector(0.0f, -122,0883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1000), 0);
	*(&iLocal_8 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Mes_landmark17", "stand_lookdistance_w_any", Vector(-564,8317f, 23,73019f, 3826,123f), Vector(0.0f, -71,81815f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1008), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark17", "stand_lookdistance_w_any", Vector(-1331,238f, 82,91322f, 3605,093f), Vector(0.0f, 138,2342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark1", "look_distance_binocs", Vector(-1337,197f, 81,134f, 3586,58f), Vector(0.0f, 60,24803f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark2", "stand_lookdistance_w_any", Vector(-1306,063f, 77,58575f, 3594,078f), Vector(0.0f, -126,0736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark3", "stand_lookdistance_w_any", Vector(-1350,953f, 77,415f, 3596,393f), Vector(0.0f, 93,68055f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark4", "stand_lookdistance_w_any", Vector(-1329,711f, 83,16241f, 3604,284f), Vector(0.0f, 235,914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark5", "smoking_stand_nospawn", Vector(-1336,671f, 81,20458f, 3588,376f), Vector(0.0f, 107,5332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark7", "horse_stay", Vector(-1352,224f, 76,71698f, 3602,276f), Vector(0.0f, 242,6949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark8", "horse_stay", Vector(-1349,171f, 77,00807f, 3601,257f), Vector(0.0f, 36,29667f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark9", "horse_stay", Vector(-1338,272f, 80,34926f, 3592,964f), Vector(0.0f, 256,7841f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark10", "horse_stay", Vector(-1353,553f, 76,02035f, 3606,206f), Vector(0.0f, 67,47733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark11", "sleeping_wall_scripted", Vector(-1331,993f, 81,58298f, 3580,936f), Vector(0.0f, 157,8373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark12", "look_distance_binocs", Vector(-1333,419f, 83,48002f, 3573,536f), Vector(0.0f, 76,9311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark13", "stand_guntricks_e_any", Vector(-1310,068f, 78,20392f, 3584,787f), Vector(0.0f, 236,313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark14", "rand_idle_stand", Vector(-1313,753f, 78,817f, 3584,856f), Vector(0.0f, -51,82711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark15", "horse_tend", Vector(-1337,189f, 80,76552f, 3591,217f), Vector(0.0f, 73,23474f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rocg_landmark16", "Rand_Idle_Sit_Ground", Vector(-1333,754f, 81,13485f, 3587,381f), Vector(0.0f, 125,5873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_8 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire017", "Campfire03", Vector(-424.0f, 17,06665f, 4256.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire018", "Campfire01_bad", Vector(-384,4127f, 46,23904f, 4006,379f), Vector(0.0f, 251,0532f, 0.0f));
	*(&iLocal_8 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire021", "Campfire02", Vector(141,4883f, 31,12616f, 3643,922f), Vector(0.0f, 92,98228f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 1032, "MP_ONLY", 1);
	*(&iLocal_8 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire022", "Campfire02", Vector(288.0f, 28,92602f, 3736f), Vector(0.0f, 83,90411f, 0.0f));
	*(&iLocal_8 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire023", "Campfire02", Vector(265,7404f, 28,10977f, 3534,26f), Vector(0.0f, 91,11589f, 0.0f));
	*(&iLocal_8 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire025", "Campfire03", Vector(348.0f, 27,96825f, 3605,587f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire026", "Campfire05", Vector(-182,1737f, 70,25212f, 3465,135f), Vector(0.0f, -30,78214f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 1064, "MP_ONLY", 1);
	*(&iLocal_8 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire028", "Campfire05", Vector(223,5977f, 26,10197f, 3364,402f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire029", "Campfire03", Vector(266,0879f, 47,71142f, 3241,912f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire031", "Campfire03", Vector(484,8363f, 52,56187f, 3187,164f), Vector(0.0f, 108,0584f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 1088, "MP_ONLY", 1);
	*(&iLocal_8 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire033", "Campfire03", Vector(-444,392f, 69,16816f, 3288,795f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_8 + 1096, "MP_ONLY", 1);
	*(&iLocal_8 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire034", "Campfire02", Vector(-388f, 22,21107f, 3139,704f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire035", "Campfire02", Vector(-484,7629f, 17,07818f, 3680,768f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire036", "Campfire02", Vector(-796,6959f, 10,10592f, 3902,202f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire037", "Campfire02", Vector(-968,6183f, 7,027447f, 3976.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire038", "Campfire03", Vector(-1004.0f, 8,031406f, 4100.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire039", "Campfire03", Vector(-792.0f, 11,04317f, 4252.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire040", "Campfire05", Vector(-903,0235f, 8,031404f, 4100.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire041", "Campfire05", Vector(-813,5936f, 8,036981f, 4128,659f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire042", "Campfire05", Vector(-604.0f, 14,0549f, 3916.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire044", "Campfire03", Vector(-548.0f, 14,05494f, 4104.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire045", "Campfire03", Vector(-428f, 21,39385f, 3808.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire046", "Campfire02", Vector(-450,3149f, 18,57121f, 3628.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire047", "Campfire02", Vector(-251,2701f, 27,39859f, 3435,27f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire049", "Campfire03", Vector(-233,8977f, 31,01145f, 3537,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire050", "Campfire02", Vector(-263,1768f, 50,44444f, 3901,276f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire052", "Campfire03", Vector(181,8246f, 28,33915f, 3438,175f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire053", "Campfire03", Vector(177,4173f, 29,85258f, 3688.0f), Vector(0.0f, 156,3296f, 0.0f));
	*(&iLocal_8 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire054", "Campfire05", Vector(256f, 26,1028f, 3429,515f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire055", "Campfire05", Vector(310,0252f, 26,10199f, 3633,975f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", Vector(-905,2795f, 6,120781f, 4018,96f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", Vector(-724,2992f, 12,04706f, 3904.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", Vector(-1072,128f, 8,031372f, 4152,004f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", Vector(-736,3608f, 7,827786f, 4146,011f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", Vector(-460,1092f, 18,21953f, 3704,093f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", Vector(-504,6984f, 22,20414f, 3388,045f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", Vector(-435,1801f, 19,84951f, 3594,031f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", Vector(-270,4164f, 49,59292f, 3911,249f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", Vector(-557,9813f, 15,90394f, 3926,233f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", Vector(-561,4404f, 11,10295f, 4351,428f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", Vector(-400,0199f, 20,16208f, 4239,861f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", Vector(-444,8199f, 15,53144f, 4313,396f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", Vector(-552.0f, 11,04317f, 4352.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", Vector(228.0f, 27,9649f, 3817,106f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", Vector(139,8584f, 31,81403f, 3688,034f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", Vector(244,4953f, 29,08238f, 3510,065f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", Vector(-342,3104f, 45,48911f, 3915,337f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", Vector(-688,5254f, 17,06666f, 3627,078f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", Vector(-284.0f, 26,46134f, 3532,476f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", Vector(-896.0f, 13,05101f, 4324.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage", "Player_Herb_woollyBlueCurls", Vector(-1352.0f, 13,66009f, 4239,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage1", "Player_Herb_woollyBlueCurls", Vector(-1128,61f, 18,37431f, 4315,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-1088.0f, 7,042808f, 4070,731f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", Vector(-873,3788f, 13,05101f, 4333,379f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-743,6987f, 9,114012f, 4515,974f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-752.0f, 11,04317f, 4277,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-636,0112f, 12,04709f, 4220.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-531,8919f, 22,29921f, 4154,04f), Vector(0.0f, -64,5629f, 0.0f));
	*(&iLocal_8 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-904,9533f, 6,089074f, 3976,993f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-1041,081f, 13,448f, 3868,099f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage10", "Player_Herb_woollyBlueCurls", Vector(-1282,566f, 67,2627f, 3813,828f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage11", "Player_Herb_woollyBlueCurls", Vector(-992.0f, 71,27844f, 3576.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage12", "Player_Herb_woollyBlueCurls", Vector(-984,6598f, 76,29416f, 3402,395f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage13", "Player_Herb_woollyBlueCurls", Vector(-460,402f, 18,07059f, 3547,07f), Vector(0.0f, 20,28518f, 0.0f));
	*(&iLocal_8 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage14", "Player_Herb_woollyBlueCurls", Vector(-378,6794f, 36,16063f, 3893,247f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage15", "Player_Herb_woollyBlueCurls", Vector(-482,8534f, 30,20636f, 3232.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage16", "Player_Herb_woollyBlueCurls", Vector(-826,3027f, 21,37297f, 3224,528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", Vector(280f, 44,15651f, 3280.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", Vector(204f, 48,97747f, 3536.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", Vector(248.0f, 33,515f, 3368.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", Vector(-180,7101f, 31,2964f, 3610,375f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", Vector(308.0f, 28,59479f, 3680.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", Vector(-496,095f, 16,88821f, 4112,057f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", Vector(-1292,595f, 66,30639f, 3924,595f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", Vector(-46,87721f, 39,15293f, 3436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", Vector(-663,9893f, 13,61824f, 3891,603f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", Vector(-713,616f, 23,59388f, 4444,34f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", Vector(-166,1611f, 38,14902f, 3088,026f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", Vector(-928,0001f, 71,33346f, 3520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", Vector(-508,5906f, 17,06666f, 3804.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", Vector(-286,5252f, 51,81712f, 4088,712f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", Vector(-1232,669f, 38,07505f, 3352,668f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", Vector(-1469,036f, 22,27979f, 3511,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed2", "Player_Herb_ButterflyWeed", Vector(-1106f, 77,11635f, 3591,26f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", Vector(-225,3674f, 29,2757f, 3079,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", Vector(227,6754f, 44,81975f, 3264.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", Vector(-540.0f, 37,84377f, 3540.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", Vector(-434,9474f, 21,08234f, 3766,917f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", Vector(-647,7579f, 15,04771f, 3590,837f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", Vector(-596.0f, 18,07059f, 3339,244f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", Vector(-986,0681f, 7,731964f, 3952,793f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", Vector(256.0f, 28,10977f, 3529,897f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", Vector(-279,0793f, 31,43542f, 3783,705f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", Vector(300.0f, 28,80191f, 3724f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed13", "Player_Herb_ButterflyWeed", Vector(-224,0991f, 30,63802f, 4270,219f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", Vector(-701,8191f, 9,685109f, 4120,612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", Vector(-374,2852f, 21,12761f, 4327,816f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", Vector(-1325,839f, 67,05676f, 3892.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", Vector(-1180.0f, 16,94636f, 4289,671f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", Vector(-1067,828f, 14,09871f, 3951,976f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", Vector(-522,1499f, 17,06667f, 3984.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", Vector(176,1462f, 64,41196f, 3132,123f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", Vector(-436,0832f, 43,10912f, 3328,062f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", Vector(-520.0f, 30,11765f, 3256f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", Vector(-1109,437f, 9,035294f, 4284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", Vector(-491,3083f, 16,07239f, 4271,612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", Vector(-1392f, 7,027454f, 4408.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", Vector(-1468f, 11,04314f, 4343,305f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", Vector(-1494,949f, 13,05098f, 4440.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", Vector(-1432.0f, 69,27054f, 4036,591f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", Vector(-1000,878f, 44,00829f, 3825,16f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", Vector(-1154,268f, 12,13892f, 4439,583f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", Vector(-932,7137f, 20,15159f, 4543,724f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", Vector(-1073,241f, 19,25794f, 4382.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", Vector(-896.0f, 14,05493f, 4340.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", Vector(-925,2434f, 6,113177f, 4415,63f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", Vector(-848.0f, 11,04317f, 4500.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", Vector(-736,5878f, 10,03925f, 4350,856f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", Vector(-528.0f, 11,04317f, 4348.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", Vector(-553,654f, 14,06855f, 4250,448f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed40", "Player_Herb_ButterflyWeed", Vector(-670,5288f, 27,3503f, 4317,688f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed41", "Player_Herb_ButterflyWeed", Vector(-965,9622f, 76,71277f, 3534,832f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed42", "Player_Herb_ButterflyWeed", Vector(-92,50905f, 41,1608f, 3005,489f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed43", "Player_Herb_ButterflyWeed", Vector(418,3058f, 57,71587f, 3293,716f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed44", "Player_Herb_ButterflyWeed", Vector(376,9338f, 54,58826f, 3157,095f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed45", "Player_Herb_ButterflyWeed", Vector(-55,61684f, 32,23711f, 3396,743f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed46", "Player_Herb_ButterflyWeed", Vector(19,37307f, 38,42727f, 3458,521f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed47", "Player_Herb_ButterflyWeed", Vector(429,962f, 21,8845f, 3587,73f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed48", "Player_Herb_ButterflyWeed", Vector(209,6463f, 28,0322f, 3604,245f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed49", "Player_Herb_ButterflyWeed", Vector(-422,619f, 26,22769f, 3542,444f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed50", "Player_Herb_ButterflyWeed", Vector(-493,5766f, 17,06666f, 3616,596f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed51", "Player_Herb_ButterflyWeed", Vector(-620.0f, 14,91997f, 3558,162f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed52", "Player_Herb_ButterflyWeed", Vector(-1068,755f, 54,27743f, 3806,161f), Vector(0.0f, -110,965f, 0.0f));
	*(&iLocal_8 + 2080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed53", "Player_Herb_ButterflyWeed", Vector(-797,5426f, 9,062623f, 3884,759f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed54", "Player_Herb_ButterflyWeed", Vector(-686,5418f, 12,04706f, 3906,474f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed55", "Player_Herb_ButterflyWeed", Vector(-775,9088f, 6,049286f, 4054,486f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed56", "Player_Herb_ButterflyWeed", Vector(-972.0f, 7,027447f, 3984.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed57", "Player_Herb_ButterflyWeed", Vector(-1087,176f, 14,97461f, 3950,302f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed58", "Player_Herb_ButterflyWeed", Vector(-1258,826f, 12,94118f, 4074,825f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed59", "Player_Herb_ButterflyWeed", Vector(-1136.0f, 8,031372f, 4220.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed60", "Player_Herb_ButterflyWeed", Vector(-1162,391f, 18,19985f, 4286,317f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed61", "Player_Herb_ButterflyWeed", Vector(-781,8239f, 8,021932f, 4128,854f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed62", "Player_Herb_ButterflyWeed", Vector(-560.0f, 14,0549f, 4088.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed63", "Player_Herb_ButterflyWeed", Vector(-348,3476f, 31,78596f, 4120,968f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed64", "Player_Herb_ButterflyWeed", Vector(-697,5889f, 11,12089f, 4526,161f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed65", "Player_Herb_ButterflyWeed", Vector(-1024.0f, 16,06274f, 4528.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed66", "Player_Herb_ButterflyWeed", Vector(-1016.0f, 16,06277f, 4384.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Player_Herb_ButterflyWeed67", "Player_Herb_ButterflyWeed", Vector(-1200.0f, 11,04314f, 4436.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker", "Locked_Footlocker", Vector(-301,6443f, 21,56683f, 3959,359f), Vector(0.0f, 3,613572f, 0.0f));
	*(&iLocal_8 + 2208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker1", "Locked_Footlocker", Vector(-657,2154f, 20,09431f, 3241,789f), Vector(0.0f, -193,1838f, 0.0f));
	*(&iLocal_8 + 2216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker2", "Locked_Footlocker", Vector(-72,00005f, 54,39764f, 2820.0f), Vector(0.0f, -599,5729f, 0.0f));
	*(&iLocal_8 + 2224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker3", "Locked_Footlocker", Vector(490,8085f, 72,29198f, 3412,761f), Vector(0.0f, 196,7411f, 0.0f));
	*(&iLocal_8 + 2232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire01", "Campfire01", Vector(-1164.0f, 73,28625f, 3688.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire057", "Campfire03", Vector(-900.0f, 71,27844f, 3520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire059", "Campfire05", Vector(-934,2301f, 59,45457f, 3773,597f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire061", "Campfire05", Vector(-1009,824f, 72,28236f, 3429,985f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire062", "Campfire03", Vector(-1250,224f, 83,32552f, 3485,12f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire064", "Campfire01", Vector(-1345,799f, 68,26664f, 3865,542f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire065", "Campfire01", Vector(-1243,491f, 72,28233f, 3677,055f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire066", "Campfire01", Vector(-1145,455f, 74,30277f, 3486,493f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire067", "Campfire04", Vector(-706,4178f, 66,25882f, 3524,573f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Campfire068", "Campfire06", Vector(-533,7559f, 19,07451f, 3441,453f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_8 + 2312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker6", "Locked_Footlocker", Vector(-374,0065f, 22,46162f, 3972,148f), Vector(0.0f, 62,34739f, 0.0f));
	*(&iLocal_8 + 2320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker7", "Locked_Footlocker", Vector(-328,7478f, 19,30516f, 3962,325f), Vector(0.0f, -177,917f, 0.0f));
	*(&iLocal_8 + 2328) = CREATE_OBJECTSET_IN_LAYOUT(Function_64(), &iLocal_8, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(36,00005f, 93,0325f, 2952.0f), Vector(0.0f, -45,75198f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(20,00004f, 93,36469f, 2956.0f), Vector(0.0f, -88,02906f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(52,00005f, 93,36469f, 2948.0f), Vector(0.0f, 134,4493f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(32.0f, 92,506f, 2968.0f), Vector(0.0f, 22,79796f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", Vector(30,19795f, 93,365f, 2953,052f), Vector(0.0f, -115,576f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground_nospawn2", "Rand_Idle_Sit_Ground_nospawn", Vector(16.0f, 93,278f, 2964.0f), Vector(0.0f, -113,554f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground_nospawn3", "Rand_Idle_Sit_Ground_nospawn", Vector(28.0f, 91,888f, 2972.0f), Vector(0.0f, -24,07149f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(36.0f, 91,497f, 2976.0f), Vector(0.0f, -175,1794f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(28.0f, 91,086f, 2980.0f), Vector(0.0f, -114,1734f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand_nospawn2", "rand_idle_stand_nospawn", Vector(20.0f, 91,762f, 2976.0f), Vector(0.0f, 108,5983f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand_nospawn3", "rand_idle_stand_nospawn", Vector(16.0f, 92,155f, 2976.0f), Vector(0.0f, -120,0937f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(12.0f, 93,393f, 2956.0f), Vector(0.0f, 96,716f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(52.0f, 93,558f, 2936.0f), Vector(0.0f, -48,40675f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(20.0f, 90,154f, 2992.0f), Vector(0.0f, 154,5021f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(48.0f, 92,06221f, 2968.0f), Vector(0.0f, 203,9767f, 0.0f)), &iLocal_8 + 2328);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(8.0f, 99,388f, 2928.0f), Vector(0.0f, 100,0739f, 0.0f)), &iLocal_8 + 2328);
	*(&iLocal_8 + 2336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Locked_Footlocker8", "Locked_Footlocker", Vector(-535,6028f, 28,46724f, 3584,208f), Vector(0.0f, -261,5026f, 0.0f));
	return 1;
}

bool Function_81(struct<2>[] Param0) //Position: 0xAF15 / 44821
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

void Function_82() //Position: 0xB2D7 / 45783
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

bool Function_83() //Position: 0xB317 / 45847
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

void Function_84(struct<13> Param0) //Position: 0xB345 / 45893
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_85() //Position: 0xB358 / 45912
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

var Function_86(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB39A / 45978
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

var Function_87(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB3D8 / 46040
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

void Function_88(int iParam0, int iParam1) //Position: 0xB4A7 / 46247
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

bool Function_89(var uParam0, bool bParam1) //Position: 0xB4F1 / 46321
{
	int iVar0;
	
	iVar0 = Function_91(uParam0);
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

bool Function_90(int iParam0) //Position: 0xB52F / 46383
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0xB546 / 46406
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0xB560 / 46432
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_93() //Position: 0xB576 / 46454
{
	var uVar0;
	
	Function_88(3, 3);
	uVar0 = &uVar0;
	Function_86(&iLocal_0 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_81(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	Function_94(StackVal, StackVal, &iLocal_0, "cover1x1x0", "p_uti_cover1x1x", Vector(-237,6518f, 34,38753f, 3754,085f), Vector(11,40923f, -140,8511f, 0.0f), 1);
	Function_94(StackVal, StackVal, &iLocal_0, "cover1x1x1", "p_uti_cover1x1x", Vector(-223,8871f, 34,55111f, 3741,238f), Vector(0.0f, -43,30798f, 0.0f), 1);
	Function_94(StackVal, StackVal, &iLocal_0, "cover1x1x2", "p_uti_cover1x1x", Vector(-262,1187f, 34,4931f, 3763,64f), Vector(0.0f, -30,92613f, 0.0f), 1);
	return 1;
}

var Function_94(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xB6B2 / 46770
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_95(char* cParam0) //Position: 0xB6E0 / 46816
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

void Function_96(int iParam0) //Position: 0xB71D / 46877
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
		STREAMING_REQUEST_ACTOR(1177, 1, false);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_REQUEST_ACTOR(1179, 1, false);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_REQUEST_ACTOR(1178, 1, false);
	}
	return;
}

