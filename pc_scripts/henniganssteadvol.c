//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 978
//Natives Count : 105
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 7;
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
	var uLocal_20 = 15;
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
	var uLocal_54 = 4;
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
	var uLocal_92 = 10;
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
	var uLocal_138 = 1;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 18;
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
	var uLocal_186 = 2;
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
	var uLocal_206 = 3;
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
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	var uLocal_954 = 0;
	bool bLocal_955 = false;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 2;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_952 = 0;
	iLocal_953 = &uScriptParam_0;
	Function_59("Initializing Hennigan's Stead Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_955 = 500;
		uLocal_956 = Function_58();
		switch (iLocal_952)
		{
			case 0x00000000:
				if (Function_56())
				{
					iLocal_952 = 1;
				}
				bLocal_955 = false;
				break;
			
			case 0x00000001:
				Function_55(&uLocal_958, &uLocal_962, 2, &Global_44085[iLocal_9539] + 8, 4294967295, 0);
				Function_55(&uLocal_958, &uLocal_962, 5, &iLocal_0 + 856, 4294967295, 0);
				Function_54(&iLocal_0 + 856, 20);
				HORSE_ADD_REPULSION_EXCLUSION_VOLUME(&iLocal_0 + 736);
				iLocal_952 = 2;
				bLocal_955 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_43791[iLocal_953]), 16);
				Function_52("Finished Initializing Hennigan's Stead Volumes", 5.0f);
				iLocal_952 = 3;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_46816))
				{
					Function_11(&uLocal_958, &uLocal_962, &uLocal_956, uScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_955);
	}
	if (IS_VOLUME_VALID(&iLocal_0 + 736))
	{
		HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(&iLocal_0 + 736);
	}
	Function_3(&uLocal_958, &uLocal_962);
	Function_2();
	Function_1(&(Global_43791[iLocal_953]), 16);
	Function_52("Unloaded Hennigan's Stead Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1A4 / 420
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1BE / 446
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(var uParam0, vector3[] vParam1) //Position: 0x1CA / 458
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_10(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_9(&(vParam1[iVar03]), 4);
		}
		if (Function_10(&(vParam1[iVar03]), 8))
		{
			Function_4(0, 0, 30);
			Function_9(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_4(int iParam0, int iParam1, int iParam2) //Position: 0x227 / 551
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
		Function_5(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_5(int iParam0, int iParam1, bool bParam2) //Position: 0x311 / 785
{
	int iVar0;
	
	Function_8(iParam0);
	Function_7(&iParam1);
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
	Function_6();
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

void Function_6() //Position: 0x490 / 1168
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_7(int iParam0) //Position: 0x49C / 1180
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

void Function_8(int iParam0) //Position: 0x4E6 / 1254
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

void Function_9(struct<17> Param0) //Position: 0x52C / 1324
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_10(struct<17> Param0) //Position: 0x549 / 1353
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(vector3 vParam0) //Position: 0x567 / 1383
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_50(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_12(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_12(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x5F1 / 1521
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_49(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_47(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_46(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_4(0, 0, 0);
						}
						else
						{
							Function_4(0, 0, 30);
						}
						Function_9(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_46(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_9(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_45(iParam2)) && !Function_44(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_43(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 16))
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
								Function_46(&vParam0, 16);
								Function_35(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 16))
					{
						Function_9(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_46(&vParam0, 2);
			}
			else
			{
				Function_9(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_45(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_34(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_10(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_33(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_46(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_45(iParam2))
					{
						Function_32(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_13(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_13(int iParam0) //Position: 0xA49 / 2633
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_34(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_53(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_18(473, 1, 0, 0);
		iVar0 = Function_17(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_18(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_18(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_18(476, 1, 0, 0);
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
		Function_16(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_16(7, 30);
	}
	if (Function_15(473) <= Function_14(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_14(int iParam0) //Position: 0xB3A / 2874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_15(int iParam0) //Position: 0xB77 / 2935
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, int iParam1) //Position: 0xBB0 / 2992
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

var Function_17(int iParam0) //Position: 0xC1A / 3098
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_45(iParam0))
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

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC72 / 3186
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
	Function_31(iParam0, TO_FLOAT(bParam1), 1);
	Function_30(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_19(iParam0);
	return 1;
}

void Function_19(bool bParam0) //Position: 0xE9A / 3738
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

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xF38 / 3896
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_14(390))), 32);
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
					bVar19 = (Function_15(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_15(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_25(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_21(), &Var9);
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

var Function_21() //Position: 0x1576 / 5494
{
	int iVar0;
	
	return &iVar0;
}

var Function_22(int iParam0) //Position: 0x157F / 5503
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1590 / 5520
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0) //Position: 0x1687 / 5767
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x16A2 / 5794
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x1709 / 5897
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x171B / 5915
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x172D / 5933
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x1861 / 6241
{
	return Global_55480[iParam016].f_96;
}

void Function_30(int iParam0) //Position: 0x1870 / 6256
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

int Function_31(int iParam0, float fParam1, bool bParam2) //Position: 0x1A0A / 6666
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

void Function_32(var uParam0, int iParam1) //Position: 0x1C4E / 7246
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_33(int iParam0, var uParam1, var uParam2) //Position: 0x1C5B / 7259
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_34(var uParam0, int iParam1) //Position: 0x1C85 / 7301
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_35(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1CA2 / 7330
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_42(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_41(iParam1))
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
	if (!Function_38(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_21(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_36();
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

void Function_36() //Position: 0x1F55 / 8021
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_37(&uVar0, &uVar1);
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

void Function_37(var uParam0, int iParam1) //Position: 0x1FC8 / 8136
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

bool Function_38(bool bParam0) //Position: 0x1FFE / 8190
{
	if (Function_43(256))
	{
		return 0;
	}
	if (Function_43(262144))
	{
		return 0;
	}
	if (Function_40())
	{
		return 0;
	}
	if (!Function_43(1))
	{
		return 0;
	}
	if (!Function_43(4096))
	{
		return 0;
	}
	if (bParam0 && Function_39(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_43(2048))
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

int Function_39(int iParam0) //Position: 0x2074 / 8308
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_40() //Position: 0x2085 / 8325
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

bool Function_41(int iParam0) //Position: 0x209E / 8350
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_42(int iParam0) //Position: 0x20B4 / 8372
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x20C9 / 8393
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x20E7 / 8423
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

bool Function_45(int iParam0) //Position: 0x2196 / 8598
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(struct<17> Param0) //Position: 0x21AC / 8620
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_47(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x21BF / 8639
{
	int iVar0;
	int iVar1;
	
	Function_8(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_48(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_5(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_48(int iParam0, int iParam1) //Position: 0x2239 / 8761
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_8(iParam0);
	Function_7(&uVar0);
	PRINTNL();
	Function_5(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x2262 / 8802
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

bool Function_50(int iParam0) //Position: 0x2282 / 8834
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int[] iParam0) //Position: 0x229E / 8862
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_45(iParam0[iVar0]))
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

void Function_52(char* cParam0) //Position: 0x22EF / 8943
{
	if (!Function_50(128))
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

void Function_53(var uParam0, int iParam1) //Position: 0x232F / 9007
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_54(var uParam0, bool bParam1) //Position: 0x2340 / 9024
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (32 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 32);
	}
	DECOR_SET_INT(&uParam0, "customweather", bParam1);
	return;
}

void Function_55(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x23AC / 9132
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
	iParam4 = iParam4;
	(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

bool Function_56() //Position: 0x2499 / 9369
{
	var uVar0;
	
	Function_57(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("HennigansStead_layout");
	}
	*(&iLocal_0 + 72) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_flk_NE_NW_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs26", 4,203895E-45f, Vector(-1546,43f, 97,38037f, 1853,78f), Vector(0.0f, 26,73163f, 0.0f), Vector(56,72965f, 109,8061f, 128,395f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs25", 4,203895E-45f, Vector(-1628,388f, 132,5176f, 2159,78f), Vector(0.0f, 20.0f, 0.0f), Vector(52,97129f, 102,6874f, 102,6874f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[1]);
	*(&iLocal_0 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs24", 4,203895E-45f, Vector(-95,91358f, 83,8786f, 2326,572f), Vector(0.0f, 14,49333f, 0.0f), Vector(187,8941f, 82,59116f, 56,21016f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[2]);
	*(&iLocal_0 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolf4", 4,203895E-45f, Vector(-669,6195f, 82,32153f, 2243,572f), Vector(0.0f, -25,1136f, 0.0f), Vector(77,45664f, 61,52451f, 61,12249f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[3]);
	*(&iLocal_0 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolf3", 4,203895E-45f, Vector(-641,6283f, 105,2476f, 2147,894f), Vector(0.0f, -25,1136f, 0.0f), Vector(63,94891f, 61,52451f, 37,62522f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[4]);
	*(&iLocal_0 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolf2", 4,203895E-45f, Vector(-1244,821f, 109,2441f, 1986,66f), Vector(0.0f, 74,82964f, 0.0f), Vector(61,50541f, 61,52451f, 292,1641f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[5]);
	*(&iLocal_0 + 8[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolf1", 4,203895E-45f, Vector(-978,507f, 90,53821f, 2145,038f), Vector(0.0f, -25,1136f, 0.0f), Vector(81,73277f, 61,52451f, 61,52451f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[6]);
	*(&iLocal_0 + 208) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_flk_ALL_set");
	*(&iLocal_0 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes1", 4,203895E-45f, Vector(-168,285f, 121,9097f, 2701,151f), Vector(0.0f, 6,717595f, 0.0f), Vector(213,5704f, 78,37719f, 73,07709f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[0]);
	*(&iLocal_0 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes2", 4,203895E-45f, Vector(-1126,763f, 114,2393f, 2588,604f), Vector(0.0f, 20.0f, 0.0f), Vector(146,5656f, 74,16763f, 188,0626f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[1]);
	*(&iLocal_0 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes3", 4,203895E-45f, Vector(-1389,948f, 116,4549f, 2801,983f), Vector(0.0f, 96,61452f, 0.0f), Vector(171,6007f, 56,67553f, 76,86866f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[2]);
	*(&iLocal_0 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes4", 4,203895E-45f, Vector(-1579,845f, 101,3961f, 2518,945f), Vector(0.0f, 48,37656f, 0.0f), Vector(38,0601f, 28,90815f, 53,12041f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[3]);
	*(&iLocal_0 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes5", 4,203895E-45f, Vector(-1414,897f, 98,38428f, 2511,757f), Vector(0.0f, 20.0f, 0.0f), Vector(80,8248f, 24,70572f, 32,38042f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[4]);
	*(&iLocal_0 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes6", 4,203895E-45f, Vector(-1514,231f, 101,3961f, 2560,085f), Vector(0.0f, -3,53844f, 0.0f), Vector(25,17345f, 17,08007f, 21,68644f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[5]);
	*(&iLocal_0 + 80[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes7", 4,203895E-45f, Vector(-1326,246f, 97,38037f, 2249,009f), Vector(0.0f, 20.0f, 0.0f), Vector(184,2568f, 57,90978f, 203,9913f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[6]);
	*(&iLocal_0 + 80[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes8", 4,203895E-45f, Vector(-1608.0f, 125,5505f, 1980f), Vector(0.0f, 33,98433f, 0.0f), Vector(66,48834f, 39,50645f, 203,3061f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[7]);
	*(&iLocal_0 + 80[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes9", 4,203895E-45f, Vector(-1957,161f, 101,5846f, 1828,827f), Vector(0.0f, -14,7906f, 0.0f), Vector(249,577f, 128,3171f, 61,17927f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[8]);
	*(&iLocal_0 + 80[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncoyotes10", 4,203895E-45f, Vector(-450,4749f, 109,7193f, 2320,553f), Vector(0.0f, -10,25944f, 0.0f), Vector(170,8267f, 69,64325f, 122,3093f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[9]);
	*(&iLocal_0 + 80[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncoyotes11", 4,203895E-45f, Vector(-870,6578f, 120,6339f, 2242,882f), Vector(0.0f, 20.0f, 0.0f), Vector(137,9932f, 31,99745f, 55,90967f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[10]);
	*(&iLocal_0 + 80[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncoyotes12", 4,203895E-45f, Vector(-26,85835f, 73,28625f, 2445,993f), Vector(0.0f, 20.0f, 0.0f), Vector(89,6356f, 74,6244f, 57,78758f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[11]);
	*(&iLocal_0 + 80[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyote3", 4,203895E-45f, Vector(-705,2985f, 31,27967f, 2881,13f), Vector(0.0f, 12,9101f, 0.0f), Vector(168,8916f, 70,98837f, 54,45016f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[12]);
	*(&iLocal_0 + 80[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyote2", 4,203895E-45f, Vector(-1281,534f, 43,7626f, 3124,979f), Vector(0.0f, 20.0f, 0.0f), Vector(133,0771f, 70,98837f, 61,59326f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[13]);
	*(&iLocal_0 + 80[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyote1", 4,203895E-45f, Vector(-1548,017f, 43,7626f, 2987,519f), Vector(0.0f, -38,60177f, 0.0f), Vector(199,5057f, 70,98837f, 99,28436f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 80[14]);
	*(&iLocal_0 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_BIRDS_set");
	*(&iLocal_0 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds4", 4,203895E-45f, Vector(-33,64362f, 84,32941f, 2378,274f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 429,8304f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[0]);
	*(&iLocal_0 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds3", 4,203895E-45f, Vector(-638,519f, 89,349f, 2563,405f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 591,4594f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[1]);
	*(&iLocal_0 + 216[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds2", 4,203895E-45f, Vector(-1265,749f, 93,1955f, 2163,575f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 429,8304f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[2]);
	*(&iLocal_0 + 216[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds1", 4,203895E-45f, Vector(-1082,411f, 96,37646f, 2811,352f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 429,8304f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[3]);
	*(&iLocal_0 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_corr_g", 4,203895E-45f, Vector(-919,4725f, 93,44283f, 2380,834f), Vector(0.0f, 20.0f, 0.0f), Vector(21,77287f, 5,26564f, 24,40062f));
	*(&iLocal_0 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nhgnv_ng_g", 2,802597E-45f, Vector(-861,9213f, 90,67301f, 2456,731f), Vector(0.0f, 20,98884f, -0,355489f), Vector(12,13512f, 8,652277f, 36,94154f));
	*(&iLocal_0 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g1", 2,802597E-45f, Vector(-783,8423f, 90,3952f, 2399,794f), Vector(0.0f, -37,76251f, -0,355489f), Vector(21,45912f, 15,55698f, 28,28264f));
	*(&iLocal_0 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g2", 2,802597E-45f, Vector(-824,0499f, 89,96601f, 2430,379f), Vector(0.0f, -15,44712f, -0,355489f), Vector(14,39529f, 15,55698f, 16,9643f));
	*(&iLocal_0 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g3", 2,802597E-45f, Vector(-843,5833f, 89,96601f, 2460,735f), Vector(0.0f, 19,71824f, -0,355489f), Vector(20,80103f, 15,55698f, 30,64089f));
	*(&iLocal_0 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g4", 2,802597E-45f, Vector(-957,7906f, 89,96601f, 2422,677f), Vector(0.0f, 21,25423f, -0,355489f), Vector(20,93081f, 15,55698f, 38,45191f));
	*(&iLocal_0 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g5", 4,203895E-45f, Vector(-823,7832f, 93,44283f, 2375,945f), Vector(0.0f, 20.0f, 0.0f), Vector(24,1193f, 5,26564f, 27,03024f));
	*(&iLocal_0 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g6", 2,802597E-45f, Vector(-879,0945f, 91,02522f, 2430,412f), Vector(0.0f, 20,98884f, -0,355489f), Vector(6,678232f, 6,105186f, 6,992032f));
	*(&iLocal_0 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g7", 2,802597E-45f, Vector(-888,8362f, 91,11685f, 2433,847f), Vector(0.0f, 20,98884f, -0,355489f), Vector(5,146282f, 5,805651f, 6,648986f));
	*(&iLocal_0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g8", 2,802597E-45f, Vector(-907,2183f, 91,10203f, 2440,071f), Vector(0.0f, 20,98884f, -0,355489f), Vector(19,88898f, 5,805651f, 5,396366f));
	*(&iLocal_0 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nhgnv_yg_g", 2,802597E-45f, Vector(-891,7211f, 89,96601f, 2415,688f), Vector(0.0f, -62,1231f, -0,355489f), Vector(21,93415f, 15,55698f, 89,95455f));
	*(&iLocal_0 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g10", 2,802597E-45f, Vector(-965,2615f, 90,6857f, 2466,688f), Vector(0.0f, -29,91364f, -0,355489f), Vector(10,95652f, 6,128434f, 10,16233f));
	*(&iLocal_0 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_ng_g11", 2,802597E-45f, Vector(-977,4526f, 90,6857f, 2446,704f), Vector(0.0f, 86,50684f, -0,355489f), Vector(10,95652f, 6,128434f, 10,16233f));
	*(&iLocal_0 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_flk_SE_set");
	*(&iLocal_0 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses9", 4,203895E-45f, Vector(-1252,915f, 115,5038f, 2776,96f), Vector(0.0f, 20.0f, 0.0f), Vector(53,69228f, 241,5724f, 159,1528f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[0]);
	*(&iLocal_0 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses8", 4,203895E-45f, Vector(-683,7336f, 101,3961f, 2504,357f), Vector(0.0f, 20.0f, 0.0f), Vector(108,5375f, 241,5724f, 73,36443f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[1]);
	*(&iLocal_0 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses7", 4,203895E-45f, Vector(-206,5182f, 107,4196f, 2489,549f), Vector(0.0f, 20.0f, 0.0f), Vector(95,45268f, 241,5724f, 89,9445f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[2]);
	*(&iLocal_0 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses6", 4,203895E-45f, Vector(-1068,474f, 97,64758f, 2288,876f), Vector(0.0f, 13,47815f, 0.0f), Vector(62,59843f, 166,692f, 146,1641f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[3]);
	*(&iLocal_0 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses5", 4,203895E-45f, Vector(-1356,155f, 105,5688f, 2589,477f), Vector(0.0f, 89,71684f, 0.0f), Vector(59,19648f, 167,1936f, 62,71087f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[4]);
	*(&iLocal_0 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses4", 4,203895E-45f, Vector(-929,6819f, 99,90509f, 2698,564f), Vector(0.0f, 4,474324f, 0.0f), Vector(241,5724f, 241,5724f, 136,8911f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[5]);
	*(&iLocal_0 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses3", 4,203895E-45f, Vector(-453,3163f, 110,2287f, 2913,625f), Vector(0.0f, 20.0f, 0.0f), Vector(206,5026f, 241,5724f, 75,11042f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[6]);
	*(&iLocal_0 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses2", 4,203895E-45f, Vector(55,33076f, 91,35687f, 2562,685f), Vector(0.0f, -4,355933f, 0.0f), Vector(152,0613f, 241,5724f, 75,9871f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[7]);
	*(&iLocal_0 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses1", 4,203895E-45f, Vector(-909,8542f, 30,11766f, 3047,201f), Vector(0.0f, 18,27707f, 0.0f), Vector(278,4159f, 241,5724f, 53,45417f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[8]);
	*(&iLocal_0 + 368[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_wild_horses10", 4,203895E-45f, Vector(-471,0976f, 108,2639f, 2622,838f), Vector(2,126057f, 30,47574f, 5,442584f), Vector(135,5817f, 68,29441f, 122,8929f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 368[9]);
	*(&iLocal_0 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_blackHorse", 4,203895E-45f, Vector(-591,0882f, 109,6251f, 2680,91f), Vector(0.0f, 20.0f, 0.0f), Vector(11,34726f, 11,34726f, 11,34726f));
	*(&iLocal_0 + 472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea", 4,203895E-45f, Vector(-823,0997f, 93,45189f, 2375,409f), Vector(0.0f, 14,89016f, 0.0f), Vector(21,89399f, 8,244097f, 25,59612f));
	*(&iLocal_0 + 480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea1", 2,802597E-45f, Vector(-842,5452f, 94,04724f, 2460,788f), Vector(0.0f, 22,15306f, 0.0f), Vector(27,05575f, 13,7937f, 31,79581f));
	*(&iLocal_0 + 488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea2", 4,203895E-45f, Vector(-824,0959f, 94,57282f, 2427,253f), Vector(0.0f, -32,35684f, 0.0f), Vector(21,1792f, 10,17107f, 15,41338f));
	*(&iLocal_0 + 496) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea3", 4,203895E-45f, Vector(-783,6304f, 97,11323f, 2399,24f), Vector(0.0f, -32,8998f, 0.0f), Vector(13,45809f, 9,658726f, 15,57873f));
	*(&iLocal_0 + 504) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgv_nwreturn", 2,802597E-45f, Vector(-824,5424f, 98,57576f, 2431,177f), Vector(0.0f, -15,53175f, 0.0f), Vector(8,046127f, 3,443669f, 8,918226f));
	*(&iLocal_0 + 512) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea4", 2,802597E-45f, Vector(-897,3228f, 94,61942f, 2435,878f), Vector(0.0f, 21,06976f, 0.0f), Vector(47,62032f, 15,94985f, 16,65399f));
	*(&iLocal_0 + 520) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea5", 2,802597E-45f, Vector(-889,1013f, 94,61942f, 2397,852f), Vector(0.0f, 29,61621f, 0.0f), Vector(47,62032f, 15,94985f, 18,31907f));
	*(&iLocal_0 + 528) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea6", 2,802597E-45f, Vector(-872,9827f, 93,44815f, 2349,158f), Vector(0.0f, -58,25443f, 0.0f), Vector(44,3011f, 15,94985f, 15,19241f));
	*(&iLocal_0 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_nwarea7", 4,203895E-45f, Vector(-861,7238f, 95,68819f, 2380,121f), Vector(0.0f, 20.0f, 0.0f), Vector(9,669715f, 6,168983f, 10,11579f));
	*(&iLocal_0 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_cougarVol", 2,802597E-45f, Vector(-500,1792f, 110,2059f, 2908,145f), Vector(0.0f, 0.0f, 0.0f), Vector(705,1399f, 157,6671f, 343,9255f));
	*(&iLocal_0 + 568) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "BridgeNoSpawn_set");
	*(&iLocal_0 + 552[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box", 2,802597E-45f, Vector(28,88792f, 95,09991f, 2737,801f), Vector(0.0f, -55,5507f, 0.0f), Vector(46,82572f, 65,73853f, 21,10844f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 568, &iLocal_0 + 552[0]);
	*(&iLocal_0 + 728) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_aquaticWildlife_set");
	*(&iLocal_0 + 576[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder", 4,203895E-45f, Vector(-1512,764f, 8,039202f, 3292,98f), Vector(0.0f, 20.0f, 0.0f), Vector(84,79319f, 60,33804f, 60,33804f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[0]);
	*(&iLocal_0 + 576[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder1", 4,203895E-45f, Vector(-1346,899f, 9,043137f, 3234,699f), Vector(0.0f, 20.0f, 0.0f), Vector(205,4157f, 60,33804f, 39,8123f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[1]);
	*(&iLocal_0 + 576[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder2", 4,203895E-45f, Vector(-1089,253f, 10,04872f, 3186,707f), Vector(0.0f, 70,81681f, 0.0f), Vector(35,98895f, 60,33804f, 106,7133f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[2]);
	*(&iLocal_0 + 576[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder3", 4,203895E-45f, Vector(-994,1088f, 10,04705f, 3208,598f), Vector(0.0f, 70,81681f, 0.0f), Vector(59,6558f, 51,61178f, 60,13989f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[3]);
	*(&iLocal_0 + 576[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder4", 4,203895E-45f, Vector(-839,1843f, 3,615696f, 3117,664f), Vector(0.0f, 119,4781f, 0.0f), Vector(44,35005f, 74,22896f, 154,3542f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[4]);
	*(&iLocal_0 + 576[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-637,1089f, 24,74285f, 3041,886f), Vector(0.0f, 119,4781f, 0.0f), Vector(88,07926f, 34,47046f, 90,22388f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[5]);
	*(&iLocal_0 + 576[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-470,0913f, 14,73549f, 2999,796f), Vector(0.0f, 99,98062f, 0.0f), Vector(37,44569f, 39,02574f, 118,2715f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[6]);
	*(&iLocal_0 + 576[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder7", 4,203895E-45f, Vector(-369,1953f, 21,65845f, 2903,82f), Vector(0.0f, 99,98062f, 0.0f), Vector(64,58783f, 35,06966f, 60,56346f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[7]);
	*(&iLocal_0 + 576[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-250,8742f, 17,47171f, 2865,07f), Vector(0.0f, 138,2915f, 0.0f), Vector(34,61906f, 35,32534f, 102,2345f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[8]);
	*(&iLocal_0 + 576[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder18", 4,203895E-45f, Vector(197,6258f, 75,37587f, 2436,369f), Vector(0.0f, 244,9178f, 0.0f), Vector(25,2479f, 39,10424f, 45,45464f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[9]);
	*(&iLocal_0 + 576[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder20", 4,203895E-45f, Vector(272,2747f, 69,27057f, 2027,005f), Vector(0.0f, 169,8044f, 0.0f), Vector(98,88961f, 21,28149f, 112,3064f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[10]);
	*(&iLocal_0 + 576[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder21", 4,203895E-45f, Vector(215,6241f, 78,14816f, 2367,177f), Vector(0.0f, 198,4123f, 0.0f), Vector(33,27529f, 15,48362f, 46,38807f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[11]);
	*(&iLocal_0 + 576[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder22", 4,203895E-45f, Vector(113,125f, 76,65231f, 1968,507f), Vector(0.0f, 169,8044f, 0.0f), Vector(98,88961f, 21,28149f, 21,67072f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[12]);
	*(&iLocal_0 + 576[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder23", 4,203895E-45f, Vector(85,59643f, 82,13325f, 2163,788f), Vector(0.0f, 151,2728f, 0.0f), Vector(98,88961f, 21,28149f, 21,67072f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[13]);
	*(&iLocal_0 + 576[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder24", 4,203895E-45f, Vector(-109,6845f, 79,79099f, 2126,796f), Vector(0.0f, 195,8334f, 0.0f), Vector(98,88961f, 21,28149f, 21,67072f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[14]);
	*(&iLocal_0 + 576[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder25", 4,203895E-45f, Vector(-47,7452f, 77,93546f, 2041,63f), Vector(0.0f, 195,8334f, 0.0f), Vector(25,03891f, 21,28149f, 73,96124f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[15]);
	*(&iLocal_0 + 576[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder26", 4,203895E-45f, Vector(-10,75366f, 74,62328f, 1963,345f), Vector(0.0f, 195,8334f, 0.0f), Vector(53,70681f, 21,28149f, 20,89974f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[16]);
	*(&iLocal_0 + 576[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder27", 4,203895E-45f, Vector(-16,77554f, 77,93485f, 2119,054f), Vector(0.0f, 181,4433f, 0.0f), Vector(53,70681f, 21,28149f, 15,84347f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 576[17]);
	*(&iLocal_0 + 736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_RepulsionExclusion", 4,203895E-45f, Vector(-644,2127f, 88,45143f, 2749,292f), Vector(8,640414f, 24,33359f, 0.0f), Vector(26,2284f, 3,865706f, 72,83427f));
	*(&iLocal_0 + 768) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_null_set");
	*(&iLocal_0 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_null_01", 2,802597E-45f, Vector(-1466,12f, 112,8202f, 1971,609f), Vector(0.0f, 64,5147f, 0.0f), Vector(26,26892f, 35,53505f, 173,8512f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 744[0]);
	*(&iLocal_0 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_null_02", 2,802597E-45f, Vector(-1315,409f, 112,8202f, 2024,83f), Vector(0.0f, 76,49454f, 0.0f), Vector(26,26892f, 35,53505f, 155,8071f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 744[1]);
	*(&iLocal_0 + 776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_bhstop", 2,802597E-45f, Vector(-820,3679f, 93,44864f, 2420,626f), Vector(0.0f, -103,272f, 0.0f), Vector(8,879921f, 7,344114f, 14,69935f));
	*(&iLocal_0 + 784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_war_livestock", 4,203895E-45f, Vector(-910,5361f, 101,392f, 2737,4f), Vector(0.0f, 20.0f, 0.0f), Vector(14,45543f, 9,568694f, 16,20005f));
	*(&iLocal_0 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_war_chickens", 4,203895E-45f, Vector(-950,9265f, 104,3524f, 2732,826f), Vector(0.0f, 20.0f, 0.0f), Vector(11,66664f, 7,72267f, 13,07468f));
	*(&iLocal_0 + 800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_war_pigs", 4,203895E-45f, Vector(-923,754f, 102,1641f, 2758,016f), Vector(0.0f, -53,44098f, 0.0f), Vector(2,831347f, 1,874195f, 4,532186f));
	*(&iLocal_0 + 808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_war_barn", 2,802597E-45f, Vector(-929,8949f, 100,7226f, 2750,85f), Vector(0.0f, 35,14248f, 0.0f), Vector(8,754588f, 8,754588f, 11,38631f));
	*(&iLocal_0 + 816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_bacc_chickens", 4,203895E-45f, Vector(113,4888f, 72,84962f, 2673,31f), Vector(0.0f, 20.0f, 0.0f), Vector(9,261682f, 3,104064f, 3,87598f));
	*(&iLocal_0 + 856) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hgnv_weather_set");
	*(&iLocal_0 + 824[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_weather02", 2,802597E-45f, Vector(-1615,721f, 99,44508f, 1904,794f), Vector(-3,439431f, 66,95576f, 0.0f), Vector(31,94579f, 41,12966f, 275,6443f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 824[0]);
	*(&iLocal_0 + 824[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_weather03", 2,802597E-45f, Vector(-1441,342f, 109,7487f, 1979,218f), Vector(-3,439431f, 66,95576f, 0.0f), Vector(31,94579f, 25,6088f, 124,293f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 824[1]);
	*(&iLocal_0 + 824[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hgnv_weather04", 2,802597E-45f, Vector(-1366,98f, 115,8711f, 2011,337f), Vector(0.0f, 69,65112f, 0.0f), Vector(21,31541f, 19,58715f, 85,85076f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 824[2]);
	*(&iLocal_0 + 864) = Vector(-886,204f, 110,4f, 2618,948f);
	*(&iLocal_0 + 864 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_poi_sbridge", Vector(-886,204f, 110,4f, 2618,948f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 896) = Vector(-764.0f, 103,6768f, 2239,9f);
	*(&iLocal_0 + 896 + 12) = Vector(0.0f, 157,5f, 0.0f);
	*(&iLocal_0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_poi_deadtrees", Vector(-764.0f, 103,6768f, 2239,9f), Vector(0.0f, 157,5f, 0.0f));
	*(&iLocal_0 + 928) = Vector(-595,187f, 100,689f, 2719,8f);
	*(&iLocal_0 + 928 + 12) = Vector(0.0f, 45.0f, 0.0f);
	*(&iLocal_0 + 952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_poi_covbridge", Vector(-595,187f, 100,689f, 2719,8f), Vector(0.0f, 45.0f, 0.0f));
	*(&iLocal_0 + 960) = Vector(-746,498f, 98,75f, 2627,884f);
	*(&iLocal_0 + 960 + 12) = Vector(0.0f, 45.0f, 0.0f);
	*(&iLocal_0 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_poi_4trees", Vector(-746,498f, 98,75f, 2627,884f), Vector(0.0f, 45.0f, 0.0f));
	*(&iLocal_0 + 992) = Vector(-511,67f, 90,115f, 2319.0f);
	*(&iLocal_0 + 992 + 12) = Vector(0.0f, 232.0f, 0.0f);
	*(&iLocal_0 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_poi_swamp", Vector(-511,67f, 90,115f, 2319.0f), Vector(0.0f, 232.0f, 0.0f));
	*(&iLocal_0 + 1024) = Vector(-1055,395f, 103,68f, 2699.0f);
	*(&iLocal_0 + 1024 + 12) = Vector(0.0f, 348.0f, 0.0f);
	*(&iLocal_0 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_poi_flat", Vector(-1055,395f, 103,68f, 2699.0f), Vector(0.0f, 348.0f, 0.0f));
	*(&iLocal_0 + 1056) = Vector(-812,374f, 92,361f, 2382,59f);
	*(&iLocal_0 + 1056 + 12) = Vector(0.0f, 130,801f, 0.0f);
	*(&iLocal_0 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwway", Vector(-812,374f, 92,361f, 2382,59f), Vector(0.0f, 130,801f, 0.0f));
	*(&iLocal_0 + 1088) = Vector(-844,9763f, 91,49334f, 2461,833f);
	*(&iLocal_0 + 1088 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwway1", Vector(-844,9763f, 91,49334f, 2461,833f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1120) = Vector(-782,2222f, 91,49334f, 2401,543f);
	*(&iLocal_0 + 1120 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwway2", Vector(-782,2222f, 91,49334f, 2401,543f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1152) = Vector(-821,5574f, 91,49334f, 2429,458f);
	*(&iLocal_0 + 1152 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwway3", Vector(-821,5574f, 91,49334f, 2429,458f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1184) = Vector(-938,82f, 90,324f, 2473,492f);
	*(&iLocal_0 + 1184 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide", Vector(-938,82f, 90,324f, 2473,492f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1216) = Vector(-863,548f, 91,637f, 2376,084f);
	*(&iLocal_0 + 1216 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide1", Vector(-863,548f, 91,637f, 2376,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1248) = Vector(-827,514f, 93,365f, 2439,583f);
	*(&iLocal_0 + 1248 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide2", Vector(-827,514f, 93,365f, 2439,583f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1280) = Vector(-837,127f, 90,353f, 2463,477f);
	*(&iLocal_0 + 1280 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide3", Vector(-837,127f, 90,353f, 2463,477f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1312) = Vector(-880,615f, 91,357f, 2334,385f);
	*(&iLocal_0 + 1312 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide4", Vector(-880,615f, 91,357f, 2334,385f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1344) = Vector(-815,535f, 91,255f, 2472,396f);
	*(&iLocal_0 + 1344 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide5", Vector(-815,535f, 91,255f, 2472,396f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1376) = Vector(-780,733f, 90,353f, 2440,178f);
	*(&iLocal_0 + 1376 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide6", Vector(-780,733f, 90,353f, 2440,178f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1408) = Vector(-821,183f, 92,361f, 2396,052f);
	*(&iLocal_0 + 1408 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide7", Vector(-821,183f, 92,361f, 2396,052f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1440) = Vector(-821,183f, 92,361f, 2396,052f);
	*(&iLocal_0 + 1440 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide8", Vector(-821,183f, 92,361f, 2396,052f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1472) = Vector(-785,799f, 93,365f, 2388,569f);
	*(&iLocal_0 + 1472 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide9", Vector(-785,799f, 93,365f, 2388,569f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1504) = Vector(-793,778f, 93,365f, 2362,382f);
	*(&iLocal_0 + 1504 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide10", Vector(-793,778f, 93,365f, 2362,382f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1536) = Vector(-814,774f, 92,361f, 2344,782f);
	*(&iLocal_0 + 1536 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide11", Vector(-814,774f, 92,361f, 2344,782f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1568) = Vector(-893,606f, 91,357f, 2402,228f);
	*(&iLocal_0 + 1568 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide12", Vector(-893,606f, 91,357f, 2402,228f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1600) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1600 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide13", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1632) = Vector(-836,39f, 90,353f, 2457,28f);
	*(&iLocal_0 + 1632 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide14", Vector(-836,39f, 90,353f, 2457,28f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1664) = Vector(-823,243f, 90,353f, 2475,886f);
	*(&iLocal_0 + 1664 + 12) = Vector(0.0f, 171,4f, 0.0f);
	*(&iLocal_0 + 1688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide15", Vector(-823,243f, 90,353f, 2475,886f), Vector(0.0f, 171,4f, 0.0f));
	*(&iLocal_0 + 1696) = Vector(-831,904f, 92,361f, 2362,93f);
	*(&iLocal_0 + 1696 + 12) = Vector(0.0f, 186,386f, 0.0f);
	*(&iLocal_0 + 1720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide16", Vector(-831,904f, 92,361f, 2362,93f), Vector(0.0f, 186,386f, 0.0f));
	*(&iLocal_0 + 1728) = Vector(-836,39f, 90,353f, 2457,28f);
	*(&iLocal_0 + 1728 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide17", Vector(-836,39f, 90,353f, 2457,28f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1760) = Vector(-846,081f, 90,353f, 2477,001f);
	*(&iLocal_0 + 1760 + 12) = Vector(0.0f, 282,006f, 0.0f);
	*(&iLocal_0 + 1784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide18", Vector(-846,081f, 90,353f, 2477,001f), Vector(0.0f, 282,006f, 0.0f));
	*(&iLocal_0 + 1792) = Vector(-851,076f, 90,353f, 2451,747f);
	*(&iLocal_0 + 1792 + 12) = Vector(0.0f, 182,407f, 0.0f);
	*(&iLocal_0 + 1816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide19", Vector(-851,076f, 90,353f, 2451,747f), Vector(0.0f, 182,407f, 0.0f));
	*(&iLocal_0 + 1824) = Vector(-852,568f, 90,353f, 2448,739f);
	*(&iLocal_0 + 1824 + 12) = Vector(0.0f, 93,77f, 0.0f);
	*(&iLocal_0 + 1848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide20", Vector(-852,568f, 90,353f, 2448,739f), Vector(0.0f, 93,77f, 0.0f));
	*(&iLocal_0 + 1856) = Vector(-830,179f, 90,353f, 2448,349f);
	*(&iLocal_0 + 1856 + 12) = Vector(0.0f, 143,138f, 0.0f);
	*(&iLocal_0 + 1880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide21", Vector(-830,179f, 90,353f, 2448,349f), Vector(0.0f, 143,138f, 0.0f));
	*(&iLocal_0 + 1888) = Vector(-856,616f, 90,353f, 2452,78f);
	*(&iLocal_0 + 1888 + 12) = Vector(0.0f, 75,853f, 0.0f);
	*(&iLocal_0 + 1912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide22", Vector(-856,616f, 90,353f, 2452,78f), Vector(0.0f, 75,853f, 0.0f));
	*(&iLocal_0 + 1920) = Vector(-829,59f, 93,365f, 2430,77f);
	*(&iLocal_0 + 1920 + 12) = Vector(0.0f, 93,027f, 0.0f);
	*(&iLocal_0 + 1944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide23", Vector(-829,59f, 93,365f, 2430,77f), Vector(0.0f, 93,027f, 0.0f));
	*(&iLocal_0 + 1952) = Vector(-810,973f, 93,365f, 2440,708f);
	*(&iLocal_0 + 1952 + 12) = Vector(0.0f, 91,635f, 0.0f);
	*(&iLocal_0 + 1976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide24", Vector(-810,973f, 93,365f, 2440,708f), Vector(0.0f, 91,635f, 0.0f));
	*(&iLocal_0 + 1984) = Vector(-803,359f, 91,357f, 2448,251f);
	*(&iLocal_0 + 1984 + 12) = Vector(0.0f, 17,835f, 0.0f);
	*(&iLocal_0 + 2008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide25", Vector(-803,359f, 91,357f, 2448,251f), Vector(0.0f, 17,835f, 0.0f));
	*(&iLocal_0 + 2016) = Vector(-772,11f, 93,365f, 2411,111f);
	*(&iLocal_0 + 2016 + 12) = Vector(0.0f, 127,188f, 0.0f);
	*(&iLocal_0 + 2040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide26", Vector(-772,11f, 93,365f, 2411,111f), Vector(0.0f, 127,188f, 0.0f));
	*(&iLocal_0 + 2048) = Vector(-773,476f, 93,365f, 2397,437f);
	*(&iLocal_0 + 2048 + 12) = Vector(0.0f, 250,683f, 0.0f);
	*(&iLocal_0 + 2072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide27", Vector(-773,476f, 93,365f, 2397,437f), Vector(0.0f, 250,683f, 0.0f));
	*(&iLocal_0 + 2080) = Vector(-779,747f, 93,365f, 2388,024f);
	*(&iLocal_0 + 2080 + 12) = Vector(0.0f, 63,328f, 0.0f);
	*(&iLocal_0 + 2104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide28", Vector(-779,747f, 93,365f, 2388,024f), Vector(0.0f, 63,328f, 0.0f));
	*(&iLocal_0 + 2112) = Vector(-776,103f, 93,365f, 2371,667f);
	*(&iLocal_0 + 2112 + 12) = Vector(0.0f, 206,97f, 0.0f);
	*(&iLocal_0 + 2136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide29", Vector(-776,103f, 93,365f, 2371,667f), Vector(0.0f, 206,97f, 0.0f));
	*(&iLocal_0 + 2144) = Vector(-761,763f, 93,388f, 2380,605f);
	*(&iLocal_0 + 2144 + 12) = Vector(0.0f, 97,728f, 0.0f);
	*(&iLocal_0 + 2168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide30", Vector(-761,763f, 93,388f, 2380,605f), Vector(0.0f, 97,728f, 0.0f));
	*(&iLocal_0 + 2176) = Vector(-816,417f, 92,361f, 2354,328f);
	*(&iLocal_0 + 2176 + 12) = Vector(0.0f, 3,285f, 0.0f);
	*(&iLocal_0 + 2200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide31", Vector(-816,417f, 92,361f, 2354,328f), Vector(0.0f, 3,285f, 0.0f));
	*(&iLocal_0 + 2208) = Vector(-826,99f, 92,361f, 2358,85f);
	*(&iLocal_0 + 2208 + 12) = Vector(0.0f, 295,112f, 0.0f);
	*(&iLocal_0 + 2232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide32", Vector(-826,99f, 92,361f, 2358,85f), Vector(0.0f, 295,112f, 0.0f));
	*(&iLocal_0 + 2240) = Vector(-830,217f, 92,361f, 2370,55f);
	*(&iLocal_0 + 2240 + 12) = Vector(0.0f, 296,989f, 0.0f);
	*(&iLocal_0 + 2264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide33", Vector(-830,217f, 92,361f, 2370,55f), Vector(0.0f, 296,989f, 0.0f));
	*(&iLocal_0 + 2272) = Vector(-833,169f, 93,365f, 2419,737f);
	*(&iLocal_0 + 2272 + 12) = Vector(0.0f, 97,728f, 0.0f);
	*(&iLocal_0 + 2296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide34", Vector(-833,169f, 93,365f, 2419,737f), Vector(0.0f, 97,728f, 0.0f));
	*(&iLocal_0 + 2304) = Vector(-846,112f, 90,353f, 2448,327f);
	*(&iLocal_0 + 2304 + 12) = Vector(0.0f, 294,464f, 0.0f);
	*(&iLocal_0 + 2328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide35", Vector(-846,112f, 90,353f, 2448,327f), Vector(0.0f, 294,464f, 0.0f));
	*(&iLocal_0 + 2336) = Vector(-833,234f, 90,353f, 2466,787f);
	*(&iLocal_0 + 2336 + 12) = Vector(0.0f, 216,919f, 0.0f);
	*(&iLocal_0 + 2360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide36", Vector(-833,234f, 90,353f, 2466,787f), Vector(0.0f, 216,919f, 0.0f));
	*(&iLocal_0 + 2368) = Vector(-852,955f, 90,353f, 2462,946f);
	*(&iLocal_0 + 2368 + 12) = Vector(0.0f, 65,891f, 0.0f);
	*(&iLocal_0 + 2392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide37", Vector(-852,955f, 90,353f, 2462,946f), Vector(0.0f, 65,891f, 0.0f));
	*(&iLocal_0 + 2400) = Vector(-839,771f, 90,353f, 2452,96f);
	*(&iLocal_0 + 2400 + 12) = Vector(0.0f, 80,427f, 0.0f);
	*(&iLocal_0 + 2424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide38", Vector(-839,771f, 90,353f, 2452,96f), Vector(0.0f, 80,427f, 0.0f));
	*(&iLocal_0 + 2432) = Vector(-834,559f, 90,353f, 2467,964f);
	*(&iLocal_0 + 2432 + 12) = Vector(0.0f, 53,542f, 0.0f);
	*(&iLocal_0 + 2456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide39", Vector(-834,559f, 90,353f, 2467,964f), Vector(0.0f, 53,542f, 0.0f));
	*(&iLocal_0 + 2464) = Vector(-875,748f, 90,353f, 2430,767f);
	*(&iLocal_0 + 2464 + 12) = Vector(0.0f, 267,975f, 0.0f);
	*(&iLocal_0 + 2488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide40", Vector(-875,748f, 90,353f, 2430,767f), Vector(0.0f, 267,975f, 0.0f));
	*(&iLocal_0 + 2496) = Vector(-879,926f, 90,353f, 2434,369f);
	*(&iLocal_0 + 2496 + 12) = Vector(0.0f, 73,407f, 0.0f);
	*(&iLocal_0 + 2520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide41", Vector(-879,926f, 90,353f, 2434,369f), Vector(0.0f, 73,407f, 0.0f));
	*(&iLocal_0 + 2528) = Vector(-889,26f, 90,353f, 2430,237f);
	*(&iLocal_0 + 2528 + 12) = Vector(0.0f, 24,138f, 0.0f);
	*(&iLocal_0 + 2552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide42", Vector(-889,26f, 90,353f, 2430,237f), Vector(0.0f, 24,138f, 0.0f));
	*(&iLocal_0 + 2560) = Vector(-893,963f, 91,357f, 2407,55f);
	*(&iLocal_0 + 2560 + 12) = Vector(0.0f, 192,133f, 0.0f);
	*(&iLocal_0 + 2584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide43", Vector(-893,963f, 91,357f, 2407,55f), Vector(0.0f, 192,133f, 0.0f));
	*(&iLocal_0 + 2592) = Vector(-916,777f, 90,353f, 2445,419f);
	*(&iLocal_0 + 2592 + 12) = Vector(0.0f, 81,945f, 0.0f);
	*(&iLocal_0 + 2616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide44", Vector(-916,777f, 90,353f, 2445,419f), Vector(0.0f, 81,945f, 0.0f));
	*(&iLocal_0 + 2624) = Vector(-888,983f, 91,071f, 2433,968f);
	*(&iLocal_0 + 2624 + 12) = Vector(0.0f, 16,7f, 0.0f);
	*(&iLocal_0 + 2648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide45", Vector(-888,983f, 91,071f, 2433,968f), Vector(0.0f, 16,7f, 0.0f));
	*(&iLocal_0 + 2656) = Vector(-905,077f, 91,357f, 2406,632f);
	*(&iLocal_0 + 2656 + 12) = Vector(0.0f, 317,433f, 0.0f);
	*(&iLocal_0 + 2680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide46", Vector(-905,077f, 91,357f, 2406,632f), Vector(0.0f, 317,433f, 0.0f));
	*(&iLocal_0 + 2688) = Vector(-873,142f, 91,357f, 2389,937f);
	*(&iLocal_0 + 2688 + 12) = Vector(0.0f, 359,911f, 0.0f);
	*(&iLocal_0 + 2712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide47", Vector(-873,142f, 91,357f, 2389,937f), Vector(0.0f, 359,911f, 0.0f));
	*(&iLocal_0 + 2720) = Vector(-867,391f, 91,357f, 2356,293f);
	*(&iLocal_0 + 2720 + 12) = Vector(0.0f, 162,898f, 0.0f);
	*(&iLocal_0 + 2744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide48", Vector(-867,391f, 91,357f, 2356,293f), Vector(0.0f, 162,898f, 0.0f));
	*(&iLocal_0 + 2752) = Vector(-863,874f, 91,357f, 2358,976f);
	*(&iLocal_0 + 2752 + 12) = Vector(0.0f, 299,451f, 0.0f);
	*(&iLocal_0 + 2776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide49", Vector(-863,874f, 91,357f, 2358,976f), Vector(0.0f, 299,451f, 0.0f));
	*(&iLocal_0 + 2784) = Vector(-854,504f, 91,357f, 2375,794f);
	*(&iLocal_0 + 2784 + 12) = Vector(0.0f, 312,773f, 0.0f);
	*(&iLocal_0 + 2808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide50", Vector(-854,504f, 91,357f, 2375,794f), Vector(0.0f, 312,773f, 0.0f));
	*(&iLocal_0 + 2816) = Vector(-867,942f, 91,357f, 2381,48f);
	*(&iLocal_0 + 2816 + 12) = Vector(0.0f, 105,366f, 0.0f);
	*(&iLocal_0 + 2840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide51", Vector(-867,942f, 91,357f, 2381,48f), Vector(0.0f, 105,366f, 0.0f));
	*(&iLocal_0 + 2848) = Vector(-792,25f, 93,365f, 2392,549f);
	*(&iLocal_0 + 2848 + 12) = Vector(0.0f, 55,064f, 0.0f);
	*(&iLocal_0 + 2872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide52", Vector(-792,25f, 93,365f, 2392,549f), Vector(0.0f, 55,064f, 0.0f));
	*(&iLocal_0 + 2880) = Vector(-784,179f, 93,364f, 2412,746f);
	*(&iLocal_0 + 2880 + 12) = Vector(0.0f, 216,828f, 0.0f);
	*(&iLocal_0 + 2904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_nwhide53", Vector(-784,179f, 93,364f, 2412,746f), Vector(0.0f, 216,828f, 0.0f));
	*(&iLocal_0 + 2912) = Vector(-609,421f, 58,313f, 2869,093f);
	*(&iLocal_0 + 2912 + 12) = Vector(0.0f, 334,865f, 0.0f);
	*(&iLocal_0 + 2936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar", Vector(-609,421f, 58,313f, 2869,093f), Vector(0.0f, 334,865f, 0.0f));
	*(&iLocal_0 + 2944) = Vector(-667,922f, 28,661f, 3009,792f);
	*(&iLocal_0 + 2944 + 12) = Vector(0.0f, 332,957f, 0.0f);
	*(&iLocal_0 + 2968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar1", Vector(-667,922f, 28,661f, 3009,792f), Vector(0.0f, 332,957f, 0.0f));
	*(&iLocal_0 + 2976) = Vector(-611,116f, 39,25f, 2937,017f);
	*(&iLocal_0 + 2976 + 12) = Vector(0.0f, 333,304f, 0.0f);
	*(&iLocal_0 + 3000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar2", Vector(-611,116f, 39,25f, 2937,017f), Vector(0.0f, 333,304f, 0.0f));
	*(&iLocal_0 + 3008) = Vector(-599,414f, 35,553f, 2978,019f);
	*(&iLocal_0 + 3008 + 12) = Vector(0.0f, 355,273f, 0.0f);
	*(&iLocal_0 + 3032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar3", Vector(-599,414f, 35,553f, 2978,019f), Vector(0.0f, 355,273f, 0.0f));
	*(&iLocal_0 + 3040) = Vector(-458,357f, 36,35f, 2963,933f);
	*(&iLocal_0 + 3040 + 12) = Vector(0.0f, 27,341f, 0.0f);
	*(&iLocal_0 + 3064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar4", Vector(-458,357f, 36,35f, 2963,933f), Vector(0.0f, 27,341f, 0.0f));
	*(&iLocal_0 + 3072) = Vector(-439,848f, 34,122f, 2981,26f);
	*(&iLocal_0 + 3072 + 12) = Vector(0.0f, 89,176f, 0.0f);
	*(&iLocal_0 + 3096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar5", Vector(-439,848f, 34,122f, 2981,26f), Vector(0.0f, 89,176f, 0.0f));
	*(&iLocal_0 + 3104) = Vector(-516,926f, 51,579f, 2863,099f);
	*(&iLocal_0 + 3104 + 12) = Vector(0.0f, 7,263f, 0.0f);
	*(&iLocal_0 + 3128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar6", Vector(-516,926f, 51,579f, 2863,099f), Vector(0.0f, 7,263f, 0.0f));
	*(&iLocal_0 + 3136) = Vector(-465,391f, 34,282f, 2934,764f);
	*(&iLocal_0 + 3136 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 3160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar7", Vector(-465,391f, 34,282f, 2934,764f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 3168) = Vector(-440,141f, 18,125f, 3015,614f);
	*(&iLocal_0 + 3168 + 12) = Vector(0.0f, 213,149f, 0.0f);
	*(&iLocal_0 + 3192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar8", Vector(-440,141f, 18,125f, 3015,614f), Vector(0.0f, 213,149f, 0.0f));
	*(&iLocal_0 + 3200) = Vector(-641,021f, 17,815f, 3025,635f);
	*(&iLocal_0 + 3200 + 12) = Vector(0.0f, 194,212f, 0.0f);
	*(&iLocal_0 + 3224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hgnf_cougar9", Vector(-641,021f, 17,815f, 3025,635f), Vector(0.0f, 194,212f, 0.0f));
	*(&iLocal_0 + 3232) = Vector(-1084,182f, 100,4239f, 2907,834f);
	*(&iLocal_0 + 3232 + 12) = Vector(0.0f, 179,8879f, 0.0f);
	*(&iLocal_0 + 3256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_hgn1", Vector(-1084,182f, 100,4239f, 2907,834f), Vector(0.0f, 179,8879f, 0.0f));
	*(&iLocal_0 + 3264) = Vector(-1084f, 100,499f, 2904.0f);
	*(&iLocal_0 + 3264 + 12) = Vector(0.0f, 178,2066f, 0.0f);
	*(&iLocal_0 + 3288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_hgn1", Vector(-1084f, 100,499f, 2904.0f), Vector(0.0f, 178,2066f, 0.0f));
	*(&iLocal_0 + 3296) = Vector(-1088f, 99,60892f, 2900f);
	*(&iLocal_0 + 3296 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 3320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_hgn1", Vector(-1088f, 99,60892f, 2900f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 3328) = Vector(-1084,182f, 100,4239f, 2910,447f);
	*(&iLocal_0 + 3328 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 3352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_hgn1", Vector(-1084,182f, 100,4239f, 2910,447f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 3360) = Vector(-1080,36f, 100,4441f, 2911,143f);
	*(&iLocal_0 + 3360 + 12) = Vector(0.0f, 53,31279f, 0.0f);
	*(&iLocal_0 + 3384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_hgn1", Vector(-1080,36f, 100,4441f, 2911,143f), Vector(0.0f, 53,31279f, 0.0f));
	*(&iLocal_0 + 3392) = Vector(-1084,43f, 101,0248f, 2914,738f);
	*(&iLocal_0 + 3392 + 12) = Vector(0.0f, -2,253904f, 0.0f);
	*(&iLocal_0 + 3416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_hgn1", Vector(-1084,43f, 101,0248f, 2914,738f), Vector(0.0f, -2,253904f, 0.0f));
	*(&iLocal_0 + 3424) = Vector(-872,724f, 41,23136f, 3070,519f);
	*(&iLocal_0 + 3424 + 12) = Vector(0.0f, 131,4123f, 0.0f);
	*(&iLocal_0 + 3448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_hgn2", Vector(-872,724f, 41,23136f, 3070,519f), Vector(0.0f, 131,4123f, 0.0f));
	*(&iLocal_0 + 3456) = Vector(-872,724f, 41,17292f, 3066,799f);
	*(&iLocal_0 + 3456 + 12) = Vector(0.0f, 180,8444f, 0.0f);
	*(&iLocal_0 + 3480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_hgn2", Vector(-872,724f, 41,17292f, 3066,799f), Vector(0.0f, 180,8444f, 0.0f));
	*(&iLocal_0 + 3488) = Vector(-871,9998f, 41,21151f, 3064f);
	*(&iLocal_0 + 3488 + 12) = Vector(0.0f, -74,38534f, 0.0f);
	*(&iLocal_0 + 3512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_hgn2", Vector(-871,9998f, 41,21151f, 3064f), Vector(0.0f, -74,38534f, 0.0f));
	*(&iLocal_0 + 3520) = Vector(-875,0469f, 41,18454f, 3071,935f);
	*(&iLocal_0 + 3520 + 12) = Vector(0.0f, -59,64066f, 0.0f);
	*(&iLocal_0 + 3544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_hgn2", Vector(-875,0469f, 41,18454f, 3071,935f), Vector(0.0f, -59,64066f, 0.0f));
	*(&iLocal_0 + 3552) = Vector(-863,0834f, 40,15686f, 3068f);
	*(&iLocal_0 + 3552 + 12) = Vector(0.0f, 68,95885f, 0.0f);
	*(&iLocal_0 + 3576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_hgn2", Vector(-863,0834f, 40,15686f, 3068f), Vector(0.0f, 68,95885f, 0.0f));
	*(&iLocal_0 + 3584) = Vector(-862,2219f, 40,15686f, 3064,376f);
	*(&iLocal_0 + 3584 + 12) = Vector(-4,386553f, 103,4417f, -1,514705f);
	*(&iLocal_0 + 3608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_hgn2", Vector(-862,2219f, 40,15686f, 3064,376f), Vector(-4,386553f, 103,4417f, -1,514705f));
	*(&iLocal_0 + 3616) = Vector(-113,557f, 101,4211f, 2775,839f);
	*(&iLocal_0 + 3616 + 12) = Vector(0.0f, 176,8049f, 0.0f);
	*(&iLocal_0 + 3640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_hgn3", Vector(-113,557f, 101,4211f, 2775,839f), Vector(0.0f, 176,8049f, 0.0f));
	*(&iLocal_0 + 3648) = Vector(-113,557f, 101,4299f, 2772f);
	*(&iLocal_0 + 3648 + 12) = Vector(0.0f, 184,0346f, 0.0f);
	*(&iLocal_0 + 3672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_hgn3", Vector(-113,557f, 101,4299f, 2772f), Vector(0.0f, 184,0346f, 0.0f));
	*(&iLocal_0 + 3680) = Vector(-112f, 101,4607f, 2768f);
	*(&iLocal_0 + 3680 + 12) = Vector(0.0f, -68,41741f, 0.0f);
	*(&iLocal_0 + 3704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_hgn3", Vector(-112f, 101,4607f, 2768f), Vector(0.0f, -68,41741f, 0.0f));
	*(&iLocal_0 + 3712) = Vector(-113,557f, 101,4211f, 2778,209f);
	*(&iLocal_0 + 3712 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 3736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_hgn3", Vector(-113,557f, 101,4211f, 2778,209f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 3744) = Vector(-109,5103f, 101,411f, 2774,271f);
	*(&iLocal_0 + 3744 + 12) = Vector(0.0f, 113,2994f, 0.0f);
	*(&iLocal_0 + 3768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_hgn3", Vector(-109,5103f, 101,411f, 2774,271f), Vector(0.0f, 113,2994f, 0.0f));
	*(&iLocal_0 + 3776) = Vector(-108,7824f, 101,4551f, 2777,506f);
	*(&iLocal_0 + 3776 + 12) = Vector(0.0f, 68,30651f, 0.0f);
	*(&iLocal_0 + 3800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_hgn3", Vector(-108,7824f, 101,4551f, 2777,506f), Vector(0.0f, 68,30651f, 0.0f));
	return 1;
}

void Function_57(int iParam0, int iParam1) //Position: 0x6276 / 25206
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

var Function_58() //Position: 0x62C0 / 25280
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_59(char* cParam0) //Position: 0x62D5 / 25301
{
	if (!Function_50(128))
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

