//Decompiled with MagicRDR v1.0
//Function Count : 85
//Statics Count : 889
//Natives Count : 117
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
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 25;
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
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 48;
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
	int iLocal_764 = 0;
	bool bLocal_765 = false;
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
	var uLocal_778 = 2;
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
	int iLocal_824 = 0;
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
	var uLocal_850 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_764 = 0;
	Function_84(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_83("Initializing TallTrees", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_765 = 1000;
		switch (iLocal_764)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_764 = 1;
				}
				bLocal_765 = false;
				break;
			
			case 0x00000001:
				if (Function_81())
				{
					iLocal_764 = 2;
				}
				bLocal_765 = false;
				break;
			
			case 0x00000002:
				if (Function_72())
				{
					Function_71(&(Global_43791[iScriptParam_0]), 32);
					iLocal_764 = 3;
					Function_69(&iLocal_0);
				}
				bLocal_765 = false;
				break;
			
			case 0x00000003:
				uLocal_766 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TallTreesVol", &iScriptParam_0, 2, 0);
				Function_68(&Global_12766, &Global_15388, iScriptParam_0);
				iLocal_764 = 5;
				bLocal_765 = false;
				break;
			
			case 0x00000005:
				if (Function_67(&Global_12766, &Global_15388, iScriptParam_0))
				{
					iLocal_764 = 4;
					bLocal_765 = false;
				}
				else
				{
					bLocal_765 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_66(&(Global_43791[iScriptParam_0]), 16))
				{
					iLocal_764 = 6;
				}
				bLocal_765 = false;
				break;
			
			case 0x00000006:
				Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, &uLocal_778, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, &uLocal_778, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_58(&Global_12766, &Global_15388, &uLocal_778, &Global_10996, iScriptParam_0);
				Function_71(&(Global_43791[iScriptParam_0]), 8);
				if (Function_66(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_57(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_764 = 10;
				}
				else
				{
					iLocal_764 = 7;
				}
				bLocal_765 = false;
				break;
			
			case 0x00000007:
				Function_48(iScriptParam_0);
				if (Function_47(1) != 9 && Function_46(299) != 0.0f)
				{
					uLocal_768 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_bear", 0);
				}
				if (Function_47(1) != 9 && Function_46(298) != 0.0f)
				{
					uLocal_770 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_wolf", 0);
				}
				uVar0 = uVar0;
				iLocal_764 = 8;
				bLocal_765 = false;
				break;
			
			case 0x00000008:
				Function_45(StackVal, 0, Global_46914[0], Vector(772,1412f, 79,45659f, 1241,604f));
				if (!Function_44(&Global_46926))
				{
					Function_40(3, 0,5f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_44(&Global_46926));
					Function_39(64);
					Function_35(0, 8, 4, 0, 3);
				}
				Function_71(&(Global_43791[iScriptParam_0]), 512);
				iLocal_764 = 9;
				bLocal_765 = false;
				break;
			
			case 0x00000009:
				if (!Function_44(&Global_46926))
				{
					Function_33(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 2;
				Function_71(&(Global_43791[iScriptParam_0]), 4);
				Function_32("Finished Initializing TallTrees", 5.0f);
				iLocal_764 = 10;
				bLocal_765 = false;
				break;
			
			case 0x0000000A:
				if (!Function_44(&Global_46926))
				{
					if (iLocal_824)
					{
						iLocal_824 = 0;
						iLocal_764 = 8;
						bLocal_765 = false;
					}
				}
				else
				{
					iLocal_824 = 1;
				}
				if (0 & Function_31())
				{
					if (IS_VOLUME_VALID(&Global_44085[Global_46926[6]9] + 8))
					{
						if (IS_ACTOR_IN_VOLUME(Function_30(), &Global_44085[Global_46926[6]9] + 8))
						{
							if (!IS_SCRIPT_VALID(&uLocal_772))
							{
								uLocal_772 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/bearWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(&uLocal_772))
						{
							TERMINATE_SCRIPT(&uLocal_772);
						}
					}
					if (IS_VOLUME_VALID(&Global_44085[Global_46926[4]9] + 8))
					{
						if (IS_ACTOR_IN_VOLUME(Function_30(), &Global_44085[Global_46926[4]9] + 8))
						{
							if (!IS_SCRIPT_VALID(&uLocal_774))
							{
								uLocal_774 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/cougarWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(&uLocal_774))
						{
							TERMINATE_SCRIPT(&uLocal_774);
						}
					}
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_776))
					{
						uLocal_776 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_825, 62, 0);
					}
				}
				if (Function_66(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_764 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_765 = false;
				break;
		}
		WAIT(bLocal_765);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_12766, &Global_15388, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_57(&(Global_43791[iScriptParam_0]), 32);
	Function_57(&(Global_43791[iScriptParam_0]), 64);
	Function_57(&(Global_43791[iScriptParam_0]), 8);
	Function_57(&(Global_43791[iScriptParam_0]), 512);
	Function_57(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_766))
	{
		TERMINATE_SCRIPT(&uLocal_766);
	}
	if (IS_SCRIPT_VALID(&uLocal_768))
	{
		TERMINATE_SCRIPT(&uLocal_768);
	}
	if (IS_SCRIPT_VALID(&uLocal_770))
	{
		TERMINATE_SCRIPT(&uLocal_770);
	}
	if (IS_SCRIPT_VALID(&uLocal_772))
	{
		TERMINATE_SCRIPT(&uLocal_772);
	}
	if (IS_SCRIPT_VALID(&uLocal_774))
	{
		TERMINATE_SCRIPT(&uLocal_774);
	}
	Function_32("Unloaded TallTrees", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x677 / 1655
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

void Function_2(int iParam0) //Position: 0x6AD / 1709
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x6CF / 1743
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x6E5 / 1765
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x6FB / 1787
{
	Function_6(&iLocal_162 + 8);
	RELEASE_LAYOUT_REF(&iLocal_162);
	return;
}

void Function_6(int iParam0) //Position: 0x70E / 1806
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x736 / 1846
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

void Function_8(struct<13> Param0) //Position: 0x881 / 2177
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x89E / 2206
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x8BC / 2236
{
	Function_6(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x8CF / 2255
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
	if (Function_66(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_57(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_66(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_66(&(Global_43791[bParam2]), 256))
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
			Function_71(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xAED / 2797
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

int Function_13(int iParam0) //Position: 0xC53 / 3155
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

int Function_14(int iParam0) //Position: 0xC7E / 3198
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

void Function_15(var uParam0, int iParam1) //Position: 0xCB2 / 3250
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xCC3 / 3267
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xCDF / 3295
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xCF9 / 3321
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xD16 / 3350
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(var uParam0, int iParam1) //Position: 0xD31 / 3377
{
	return (uParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xD3E / 3390
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

void Function_22(int iParam0) //Position: 0x11EC / 4588
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

bool Function_23(int iParam0) //Position: 0x1257 / 4695
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

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x12D5 / 4821
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

bool Function_25(int iParam0) //Position: 0x1384 / 4996
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x139F / 5023
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

bool Function_27(bool bParam0) //Position: 0x1454 / 5204
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_66(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x1472 / 5234
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x1481 / 5249
{
	return &Global_21369 + 8;
}

var Function_30() //Position: 0x148D / 5261
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_31() //Position: 0x14A2 / 5282
{
	return 0;
}

void Function_32(char* cParam0) //Position: 0x14A9 / 5289
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

void Function_33(int iParam0, bool bParam1) //Position: 0x14E9 / 5353
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
		Function_34(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x15D9 / 5593
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x15E6 / 5606
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
		Function_36();
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

void Function_36() //Position: 0x16D4 / 5844
{
	int iVar0;
	
	Global_41176 = Function_37(StackVal);
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

int Function_37(int iParam0) //Position: 0x1722 / 5922
{
	if (!Function_38(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_38(int iParam0) //Position: 0x173A / 5946
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_39(bool bParam0) //Position: 0x174F / 5967
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_40(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1762 / 5986
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
		Function_43();
	}
	if (&bParam5)
	{
		Function_41(1048576);
	}
}

void Function_41(int iParam0) //Position: 0x1870 / 6256
{
	Function_42(&Global_43580, iParam0);
	return;
}

void Function_42(var uParam0, var uParam1) //Position: 0x187E / 6270
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_43() //Position: 0x189D / 6301
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_41(16384);
	}
	return;
}

bool Function_44(int[] iParam0) //Position: 0x18B9 / 6329
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

void Function_45(int iParam0, var uParam1, struct<2> Param2) //Position: 0x190A / 6410
{
	if (!Function_38(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

float Function_46(int iParam0) //Position: 0x196B / 6507
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_47(int iParam0) //Position: 0x19A4 / 6564
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_48(int iParam0) //Position: 0x19CC / 6604
{
	Function_53(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_52(&Global_27462[1852] + 188, 1, 5.0f, 1, 640);
	Function_51(&Global_27462[1852] + 188, 5.0f);
	Function_50(&Global_27462[552] + 188, 19,9f, 0,7f);
	Function_49(&Global_27462[552] + 188, -4.0f, 2);
	return;
}

void Function_49(int iParam0, var uParam1, int iParam2) //Position: 0x1A61 / 6753
{
	(&iParam0 + 84)->f_24 = uParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_50(int iParam0, var uParam1, int iParam2) //Position: 0x1A79 / 6777
{
	(&iParam0 + 84)->f_44 = uParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_51(int iParam0, int iParam1) //Position: 0x1A91 / 6801
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_52(struct<85> Param0) //Position: 0x1AA0 / 6816
{
	Param0.f_84 = uParam1;
	(&Param0 + 84)->f_4 = uParam2;
	(&Param0 + 84)->f_8 = uParam3;
	(&Param0 + 84)->f_16 = uParam4;
}

void Function_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x1ACA / 6858
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_54(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, &uParam10, uParam11, uParam12, &uParam13, &uParam14, &uParam15, &uParam16);
	Global_27462[iParam052].f_156 = uParam9;
}

void Function_54(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1B11 / 6929
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
					bVar2 = Function_56(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_55(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_56(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_55(int iParam0, int iParam1) //Position: 0x1ECF / 7887
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_56(int iParam0) //Position: 0x1EF2 / 7922
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_57(var uParam0, int iParam1) //Position: 0x1F09 / 7945
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_58(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1F23 / 7971
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_66(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_59(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_57(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_71(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_59(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x1FDB / 8155
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_66(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_62(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_61(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_60(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_60(int iParam0, struct<2> Param1) //Position: 0x215C / 8540
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_61(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_61(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_61(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_61(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_61(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_61(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_61(vector3 vParam0) //Position: 0x22A2 / 8866
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_62(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x22BA / 8890
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_63(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

var Function_63() //Position: 0x23E1 / 9185
{
	float fVar0;
	
	return &fVar0;
}

void Function_64(float fParam0, struct<11>[] Param1, float fParam2, struct<2> Param3, struct<2> Param5, struct<2> Param7, struct<2> Param9, struct<2> Param11, struct<2> Param13) //Position: 0x23EA / 9194
{
	bool bVar0;
	
	bVar0 = fParam0;
	if (Function_65(StackVal, StackVal, Param3, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param3);
		PRINTNL();
	}
	if (Function_65(StackVal, StackVal, Param5, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	if (Function_65(StackVal, StackVal, Param7, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param7);
		PRINTNL();
	}
	if (Function_65(StackVal, StackVal, Param9, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param9);
		PRINTNL();
	}
	if (Function_65(StackVal, StackVal, Param11, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param11);
		PRINTNL();
	}
	if (Function_65(StackVal, StackVal, Param13, Vector(0.0f, 0.0f, 0.0f)))
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

bool Function_65(struct<2> Param0, struct<2> Param2) //Position: 0x269B / 9883
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_66(var uParam0, int iParam1) //Position: 0x26C7 / 9927
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_67(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x26E4 / 9956
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
	if (Function_66(&(Global_43791[iParam2]), 0x40000000))
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

void Function_68(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x27CD / 10189
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
	if (!Function_66(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_71(&(Global_43791[iParam2]), 0x40000000);
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

int Function_69(var uParam0) //Position: 0x28BD / 10429
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
			bVar9 = (Function_31() && !Function_70(1, 1));
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

bool Function_70(int iParam0, bool bParam1) //Position: 0x2A1C / 10780
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_71(var uParam0, int iParam1) //Position: 0x2A3D / 10813
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_72() //Position: 0x2A4E / 10830
{
	int iVar0;
	
	Function_80(3, 3);
	iVar0 = &iVar0;
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfireriverside", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfirecold", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire06", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfirecold_bad", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfireriverside_bad", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/campfire07", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_final", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/player_herb_violetsnowdrop", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/player_herb_hummingbirdsage", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_78(&iLocal_162 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	if (!Function_73(&iLocal_162 + 8))
	{
		return 0;
	}
	iLocal_162 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_162))
	{
		iLocal_162 = CREATE_LAYOUT("TallTrees_layout");
	}
	*(&iLocal_162 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint", Vector(-1040,393f, 184,047f, 1377,772f), Vector(0.0f, 169,34f, 0.0f));
	*(&iLocal_162 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint1", Vector(-495,255f, 144,499f, 1927,976f), Vector(0.0f, 100,686f, 0.0f));
	*(&iLocal_162 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint2", Vector(-461,26f, 140,187f, 1929,024f), Vector(0.0f, 175,373f, 0.0f));
	*(&iLocal_162 + 808) = Vector(-844,585f, 189,753f, 1583,111f);
	*(&iLocal_162 + 808 + 12) = Vector(0.0f, 174,998f, 0.0f);
	*(&iLocal_162 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint3", Vector(-844,585f, 189,753f, 1583,111f), Vector(0.0f, 174,998f, 0.0f));
	*(&iLocal_162 + 840) = Vector(-733,6751f, 229,0498f, 1132.0f);
	*(&iLocal_162 + 840 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_162 + 864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint4", Vector(-733,6751f, 229,0498f, 1132.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 872) = Vector(-482,9754f, 71,90712f, 2203,033f);
	*(&iLocal_162 + 872 + 12) = Vector(-0,05455317f, -0,02802815f, 0,08660866f);
	*(&iLocal_162 + 896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint7", Vector(-482,9754f, 71,90712f, 2203,033f), Vector(-0,05455317f, -0,02802815f, 0,08660866f));
	*(&iLocal_162 + 904) = Vector(-499,047f, 75,045f, 2209,638f);
	*(&iLocal_162 + 904 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_162 + 928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "talf_bhint8", Vector(-499,047f, 75,045f, 2209,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 936) = Vector(-479,216f, 74,86f, 2216,221f);
	*(&iLocal_162 + 936 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_162 + 960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "talf_bhint9", Vector(-479,216f, 74,86f, 2216,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 968) = Vector(-492,624f, 73,197f, 2215,717f);
	*(&iLocal_162 + 968 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_162 + 992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "talf_bhint10", Vector(-492,624f, 73,197f, 2215,717f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1000) = Vector(-734,578f, 226,755f, 1107,767f);
	*(&iLocal_162 + 1000 + 12) = Vector(0.0f, 164,027f, 0.0f);
	*(&iLocal_162 + 1024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "talf_bhint11", Vector(-734,578f, 226,755f, 1107,767f), Vector(0.0f, 164,027f, 0.0f));
	*(&iLocal_162 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint8", Vector(-1044,787f, 184,066f, 1375,618f), Vector(0.0f, 314,542f, 0.0f));
	*(&iLocal_162 + 1040) = Vector(-465,413f, 142,624f, 1895,747f);
	*(&iLocal_162 + 1040 + 12) = Vector(0.0f, 48,377f, 0.0f);
	*(&iLocal_162 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "tallf_bhint9", Vector(-465,413f, 142,624f, 1895,747f), Vector(0.0f, 48,377f, 0.0f));
	*(&iLocal_162 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire026", "CampfireRiverside", Vector(-1178,529f, 187,3804f, 1427,134f), Vector(0.0f, 114,3875f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1072, "MP_ONLY", true);
	*(&iLocal_162 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_horse_stay3", "horse_stay", Vector(-723,721f, 226,011f, 1122,191f), Vector(0.0f, -87,53077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 1080), 0);
	*(&iLocal_162 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_horse_stay2", "horse_stay", Vector(-727,61f, 226,223f, 1120,39f), Vector(0.0f, -253,3726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 1088), 0);
	*(&iLocal_162 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_horse_stay1", "horse_stay", Vector(-754,41f, 228,791f, 1131,354f), Vector(0.0f, -78,61452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 1096), 0);
	*(&iLocal_162 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_horse_stay", "horse_stay", Vector(-749,865f, 227,201f, 1121,549f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 1104), 0);
	*(&iLocal_162 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire02", "Campfire04", Vector(-826,3951f, 188,6447f, 1592,663f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1112, "MP_ONLY", true);
	*(&iLocal_162 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03", "CampfireCold", Vector(-953,7663f, 184,7204f, 1384,012f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1120, "MP_ONLY", true);
	*(&iLocal_162 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire04", "CampfireRiverside", Vector(-1121,701f, 183,6618f, 1423,662f), Vector(0.0f, 185,3342f, 0.0f));
	*(&iLocal_162 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire05", "CampfireRiverside", Vector(-865,7731f, 186,6494f, 1434,022f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire06", "CampfireCold", Vector(-667,6184f, 167,5303f, 1272,634f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1144, "MP_ONLY", true);
	*(&iLocal_162 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire07", "Campfire03", Vector(-688,0001f, 177,6941f, 1697,287f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1152, "MP_ONLY", true);
	*(&iLocal_162 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire010", "Campfire02", Vector(-684,042f, 151,589f, 1867,911f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire011", "Campfire01", Vector(-783,4873f, 183,5395f, 1609,595f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire012", "Campfire02", Vector(-393,5763f, 142,8359f, 1442,498f), Vector(0.0f, 109,7906f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1176, "MP_ONLY", true);
	*(&iLocal_162 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire013", "Campfire02", Vector(-532,9274f, 148,5803f, 1914,19f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1184, "MP_ONLY", true);
	*(&iLocal_162 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire014", "Campfire05", Vector(-284,9606f, 141,8196f, 1834,855f), Vector(0.0f, 119,2059f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1192, "MP_ONLY", true);
	*(&iLocal_162 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire017", "CampfireRiverside", Vector(-939,5017f, 183,7175f, 1482,246f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire018", "Campfire06", Vector(-712,1743f, 178,3837f, 1651,831f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire019", "Campfire03_bad", Vector(-336,4126f, 149,9332f, 1803,945f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire020", "CampfireRiverside", Vector(-808,9734f, 186,5144f, 1572,36f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire021", "CampfireRiverside", Vector(-282,8439f, 130,5098f, 1420.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1232, "MP_ONLY", true);
	*(&iLocal_162 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire023", "CampfireCold_bad", Vector(-216,5455f, 123,4823f, 1456f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire024", "CampfireRiverside_bad", Vector(-200,829f, 119,4666f, 1192,215f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire025", "Campfire03_bad", Vector(-406,2614f, 135,0844f, 1883,666f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad", "Campfire01_bad", Vector(-465,1943f, 131,7177f, 1189,942f), Vector(0.0f, -101,9659f, 0.0f));
	*(&iLocal_162 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad1", "CampfireRiverside_bad", Vector(-724,3436f, 175,6862f, 1414,882f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad3", "CampfireRiverside_bad", Vector(-564.0f, 159,6234f, 1332,496f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad4", "Campfire01_bad", Vector(-380f, 141,5529f, 1316f), Vector(0.0f, -18,4812f, 0.0f));
	*(&iLocal_162 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad5", "CampfireRiverside_bad", Vector(-626,4926f, 167,6548f, 1332,368f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad6", "CampfireCold_bad", Vector(-584.0f, 128,502f, 565,1566f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad7", "Campfire05", Vector(-694,0187f, 185,6706f, 1552,725f), Vector(0.0f, -132,2762f, 0.0f));
	*(&iLocal_162 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad9", "Campfire01_bad", Vector(-645,9846f, 184,0639f, 1583,066f), Vector(0.0f, 95,84392f, 0.0f));
	*(&iLocal_162 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad10", "Campfire01", Vector(-477,348f, 142,595f, 1936,187f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad11", "Campfire03", Vector(-561,7342f, 150,5881f, 1920f), Vector(0.0f, -206,0948f, 0.0f));
	*(&iLocal_162 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad13", "Campfire03", Vector(-383,6781f, 112,4391f, 1987,174f), Vector(0.0f, -18,25743f, 0.0f));
	*(&iLocal_162 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad16", "Campfire01", Vector(-303,3736f, 123,4823f, 1918,975f), Vector(0.0f, 128,3977f, 0.0f));
	*(&iLocal_162 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad17", "Campfire03", Vector(-465,4048f, 148,5803f, 1833,911f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad18", "Campfire03", Vector(-568,0001f, 167,6548f, 1699,499f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad19", "Campfire05", Vector(-604,6556f, 174,6786f, 1675,709f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad20", "CampfireCold", Vector(-664,0001f, 185,7253f, 1562,867f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad21", "Campfire01_bad", Vector(-856,3843f, 190,986f, 1240,21f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad22", "CampfireCold_bad", Vector(-885,8465f, 189,7411f, 1334,035f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad23", "Campfire03_bad", Vector(-1108,955f, 182,1756f, 1493,125f), Vector(0.0f, -165,2193f, 0.0f));
	*(&iLocal_162 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad24", "CampfireCold_bad", Vector(-760,5605f, 174,6452f, 1290,605f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire01_bad25", "CampfireCold", Vector(-591,5842f, 160,7838f, 1289,88f), Vector(0.0f, -27,09079f, 0.0f));
	*(&iLocal_162 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad", "Campfire01", Vector(-347,0103f, 136,5333f, 1515,952f), Vector(0.0f, 188,5285f, 0.0f));
	*(&iLocal_162 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad1", "Campfire03", Vector(-183,539f, 120,8117f, 1494,249f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad2", "Campfire05", Vector(-104.0f, 117,5716f, 1627,999f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad3", "Campfire05", Vector(-144,1865f, 122,4783f, 1784,669f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad4", "Campfire03", Vector(-6,00997f, 115,2517f, 1708f), Vector(0.0f, 85,13908f, 0.0f));
	*(&iLocal_162 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad5", "Campfire05", Vector(-90,811f, 119,3543f, 1773,976f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad6", "Campfire07", Vector(-4,000009f, 115,3599f, 1653,929f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad7", "Campfire01", Vector(-52.0f, 117,1019f, 1610,341f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad8", "CampfireCold", Vector(-107,0271f, 117,4587f, 1544,972f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad9", "Campfire03", Vector(-266,1858f, 130,5098f, 1316,865f), Vector(0.0f, -145,1019f, 0.0f));
	*(&iLocal_162 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Campfire03_bad11", "Campfire05", Vector(46,2207f, 100,4691f, 1842,221f), Vector(0.0f, 91,96018f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker", "Locked_Footlocker", Vector(-355,125f, 82,322f, 2203,95f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker1", "Locked_Footlocker", Vector(-552,7213f, 151,5033f, 1944,947f), Vector(0.0f, 140,6843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker2", "Locked_Footlocker", Vector(-737,6036f, 226,3215f, 1106,811f), Vector(0.0f, -127,9761f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker3", "Locked_Footlocker", Vector(-1046,258f, 184,066f, 1374,558f), Vector(0.0f, -88,97791f, 0.0f));
	DECOR_SET_BOOL(&iLocal_162 + 1520, "scrap", true);
	*(&iLocal_162 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker4", "Locked_Footlocker", Vector(-495,7857f, 169,1581f, 1668,153f), Vector(0.0f, -28,25195f, 0.0f));
	*(&iLocal_162 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "treasure_hunting_final", "treasure_hunting_final", Vector(-730,9482f, 226,3736f, 1105,583f), Vector(0.0f, 289,8541f, 0.0f));
	*(&iLocal_162 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop9", "Player_Herb_VioletSnowdrop", Vector(-894,1646f, 201,9576f, 1528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop8", "Player_Herb_VioletSnowdrop", Vector(-812,3889f, 186,0371f, 1232,813f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop7", "Player_Herb_VioletSnowdrop", Vector(-811,6999f, 179,2376f, 1384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop6", "Player_Herb_VioletSnowdrop", Vector(-961,0168f, 182,3751f, 1459,109f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop5", "Player_Herb_VioletSnowdrop", Vector(-1011,03f, 185,2311f, 1374,426f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop40", "Player_Herb_VioletSnowdrop", Vector(-680,0544f, 169,5147f, 1260,078f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop4", "Player_Herb_VioletSnowdrop", Vector(-876.0f, 193,718f, 1235,349f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop39", "Player_Herb_VioletSnowdrop", Vector(-608,3892f, 169,8096f, 1178,253f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop38", "Player_Herb_VioletSnowdrop", Vector(-425,9355f, 142,9052f, 1249,295f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop37", "Player_Herb_VioletSnowdrop", Vector(-304.0f, 133,4919f, 1336f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop36", "Player_Herb_VioletSnowdrop", Vector(-446,1278f, 131,3868f, 1201,03f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop35", "Player_Herb_VioletSnowdrop", Vector(-421,5536f, 142,423f, 1254,451f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop34", "Player_Herb_VioletSnowdrop", Vector(-594,7793f, 160,395f, 1281,692f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop33", "Player_Herb_VioletSnowdrop", Vector(-720.0f, 169,6626f, 1344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop32", "Player_Herb_VioletSnowdrop", Vector(-688.0f, 169,5147f, 1272.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop31", "Player_Herb_VioletSnowdrop", Vector(-932,0116f, 194,7607f, 1315,988f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop30", "Player_Herb_VioletSnowdrop", Vector(-840.0f, 184,7214f, 1302,519f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop3", "Player_Herb_VioletSnowdrop", Vector(-905,4869f, 196,5365f, 1267,151f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop29", "Player_Herb_VioletSnowdrop", Vector(302,0675f, 114,1615f, 1725,442f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop28", "Player_Herb_VioletSnowdrop", Vector(-820,2811f, 185,863f, 1248,281f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop27", "Player_Herb_VioletSnowdrop", Vector(-809,2433f, 183,7228f, 1175,171f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop26", "Player_Herb_VioletSnowdrop", Vector(-419,5688f, 116,6903f, 1152,93f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop25", "Player_Herb_VioletSnowdrop", Vector(-262,4087f, 116,0961f, 1224,747f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop24", "Player_Herb_VioletSnowdrop", Vector(-363,0544f, 117,723f, 1220,947f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop23", "Player_Herb_VioletSnowdrop", Vector(-701,5494f, 174,4512f, 1202,581f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop22", "Player_Herb_VioletSnowdrop", Vector(-615,6915f, 168,5812f, 1100,308f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop21", "Player_Herb_VioletSnowdrop", Vector(-490,3961f, 126,1658f, 1040,729f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop20", "Player_Herb_VioletSnowdrop", Vector(-619,6085f, 169,5643f, 1048f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop2", "Player_Herb_VioletSnowdrop", Vector(-1080.0f, 188,8414f, 1354,991f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop19", "Player_Herb_VioletSnowdrop", Vector(-617,6307f, 142,4992f, 904,0003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop18", "Player_Herb_VioletSnowdrop", Vector(-548,0001f, 127,1276f, 916.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop17", "Player_Herb_VioletSnowdrop", Vector(-642,6788f, 140,233f, 844,8235f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop16", "Player_Herb_VioletSnowdrop", Vector(-777,1317f, 184,4256f, 812,6071f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop15", "Player_Herb_VioletSnowdrop", Vector(-902,608f, 206,3865f, 1094,384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop14", "Player_Herb_VioletSnowdrop", Vector(-718,998f, 225,2521f, 1120,439f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop13", "Player_Herb_VioletSnowdrop", Vector(-846,9979f, 211,9342f, 1084,518f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop12", "Player_Herb_VioletSnowdrop", Vector(-872,0032f, 197,4375f, 1128,003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop11", "Player_Herb_VioletSnowdrop", Vector(-791,0549f, 199,3337f, 1202,918f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop10", "Player_Herb_VioletSnowdrop", Vector(-1084,32f, 182,37f, 1497,451f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_VioletSnowdrop", "Player_Herb_VioletSnowdrop", Vector(-1202,184f, 187,051f, 1428,522f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage9", "Player_Herb_HummingbirdSage", Vector(-650,5471f, 96,37646f, 2073,051f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage8", "Player_Herb_HummingbirdSage", Vector(-573,9288f, 150,5809f, 1908f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage7", "Player_Herb_HummingbirdSage", Vector(-424.0f, 125,4901f, 2010,173f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage60", "Player_Herb_HummingbirdSage", Vector(12.0f, 115,419f, 1664.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage6", "Player_Herb_HummingbirdSage", Vector(-353,9566f, 82,26611f, 2188.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage59", "Player_Herb_HummingbirdSage", Vector(-163,3843f, 128,289f, 1739,229f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage58", "Player_Herb_HummingbirdSage", Vector(-579,093f, 167,1844f, 1389,167f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage57", "Player_Herb_HummingbirdSage", Vector(-687,5864f, 181,1271f, 1608,589f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage56", "Player_Herb_HummingbirdSage", Vector(-403,8828f, 147,4588f, 1476,553f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage55", "Player_Herb_HummingbirdSage", Vector(-559,6156f, 168,6587f, 1462,071f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage54", "Player_Herb_HummingbirdSage", Vector(-725,5195f, 175,5069f, 1673,499f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage53", "Player_Herb_HummingbirdSage", Vector(-574,4073f, 175,7316f, 1655,52f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage52", "Player_Herb_HummingbirdSage", Vector(-348.0f, 147,4612f, 1679,097f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage51", "Player_Herb_HummingbirdSage", Vector(-306,1377f, 144,2182f, 1825,862f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage50", "Player_Herb_HummingbirdSage", Vector(-673,0797f, 152,1978f, 1871,119f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage49", "Player_Herb_HummingbirdSage", Vector(-317,0758f, 84,27249f, 2137,3f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage48", "Player_Herb_HummingbirdSage", Vector(206,5806f, 90,17886f, 1944,086f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage47", "Player_Herb_HummingbirdSage", Vector(138,0592f, 82,85904f, 2006,355f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage46", "Player_Herb_HummingbirdSage", Vector(168.0f, 107,4897f, 1856f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage45", "Player_Herb_HummingbirdSage", Vector(-619,5699f, 175,5661f, 1659,533f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage44", "Player_Herb_HummingbirdSage", Vector(-448.0f, 162,0204f, 1731,15f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage43", "Player_Herb_HummingbirdSage", Vector(-498,1167f, 151,3338f, 1826,184f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage42", "Player_Herb_HummingbirdSage", Vector(-300,2108f, 131,726f, 1391,249f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage41", "Player_Herb_HummingbirdSage", Vector(-158,0741f, 123,4823f, 1425,278f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage40", "Player_Herb_HummingbirdSage", Vector(-44,00006f, 122,5702f, 1500.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage4", "Player_Herb_HummingbirdSage", Vector(45,43288f, 79,5917f, 1964,184f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage39", "Player_Herb_HummingbirdSage", Vector(-452,7934f, 152,526f, 1446,807f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage38", "Player_Herb_HummingbirdSage", Vector(-596,0001f, 177,6941f, 1516f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage37", "Player_Herb_HummingbirdSage", Vector(-661,3279f, 173,4927f, 1435,57f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage36", "Player_Herb_HummingbirdSage", Vector(-725,7597f, 176,6901f, 1397,993f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage35", "Player_Herb_HummingbirdSage", Vector(-908,0408f, 184,1334f, 1576,069f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage34", "Player_Herb_HummingbirdSage", Vector(-838,2128f, 189,6234f, 1596,025f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage33", "Player_Herb_HummingbirdSage", Vector(-809,653f, 157,0472f, 1697,251f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage32", "Player_Herb_HummingbirdSage", Vector(-757,8369f, 176,4141f, 1655,508f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage31", "Player_Herb_HummingbirdSage", Vector(-668,0446f, 175,4476f, 1657,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage30", "Player_Herb_HummingbirdSage", Vector(-283,9931f, 130,5098f, 1488,106f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage3", "Player_Herb_HummingbirdSage", Vector(-95,99991f, 81,28975f, 2144,053f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage29", "Player_Herb_HummingbirdSage", Vector(-436f, 147,7323f, 1473,89f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage28", "Player_Herb_HummingbirdSage", Vector(-320,8492f, 142,4725f, 1596,957f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand9", "rand_idle_stand", Vector(-467,906f, 142,681f, 1896,019f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_sit_cleanpistol1", "sit_cleanpistol", Vector(-464,486f, 140,173f, 1931,761f), Vector(0.0f, -92,88916f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand8", "rand_idle_stand", Vector(-456,888f, 140,187f, 1926,388f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand7", "rand_idle_stand", Vector(-459,856f, 140,187f, 1926,487f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_whittle_wood1", "whittle_wood", Vector(-468,799f, 140,454f, 1920,274f), Vector(0.0f, -56,59673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_spit1", "stand_spit", Vector(-475,174f, 141,513f, 1926,68f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-465,096f, 140,295f, 1921,414f), Vector(0.0f, -243,9603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand6", "rand_idle_stand", Vector(-459,367f, 140,156f, 1923,3f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-494,201f, 144,499f, 1927,552f), Vector(0.0f, -243,9603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand5", "rand_idle_stand", Vector(-490,425f, 144,473f, 1931,007f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand4", "rand_idle_stand", Vector(-495,447f, 144,499f, 1930,373f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand3", "rand_idle_stand", Vector(-498,908f, 144,942f, 1920,393f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_sit_no_table1", "sit_no_table", Vector(-536,7271f, 146,6513f, 1880,275f), Vector(0.0f, -79,20766f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand2", "rand_idle_stand", Vector(-465,725f, 142,647f, 1898,082f), Vector(0.0f, -19,29583f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand1", "rand_idle_stand", Vector(-522,4897f, 146,646f, 1888,277f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-531,7095f, 146,6513f, 1878,072f), Vector(0.0f, -243,9603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_guntricks1", "stand_guntricks_e_any", Vector(-848,164f, 189,677f, 1589,346f), Vector(0.0f, -152,5991f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_rand_idle_stand2", "rand_idle_stand", Vector(-843,486f, 189,681f, 1590,27f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_rand_idle_stand1", "rand_idle_stand", Vector(-843,403f, 189,753f, 1585,25f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_rand_idle_stand", "rand_idle_stand", Vector(-844,634f, 189,753f, 1582,716f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_stay7", "horse_stay", Vector(-491,1115f, 72,58714f, 2207,955f), Vector(0.0f, 85,92881f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_tend7", "horse_tend", Vector(-491,2f, 72,336f, 2199,114f), Vector(0.0f, -170,8492f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_stay6", "horse_stay", Vector(-481,9098f, 72,66555f, 2210,361f), Vector(0.0f, -48,69083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_tend6", "horse_tend", Vector(-501,957f, 75,46127f, 2230,747f), Vector(0.0f, 217,4179f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_sit_ground_smoke2", "sit_ground_smoke", Vector(-484,3089f, 71,97777f, 2204,32f), Vector(0.0f, -51,32996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_sit_ground_smoke", "sit_ground_smoke", Vector(-481,8283f, 71,87337f, 2201,816f), Vector(0.0f, 129,3626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-485,3011f, 72,0527f, 2202,761f), Vector(0.0f, -94,26432f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-482,041f, 71,90236f, 2205,006f), Vector(0.0f, 18,83562f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-477,8579f, 71,79588f, 2203,276f), Vector(0.0f, -71,12064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-481,474f, 71,80349f, 2199,808f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-486,1086f, 72,11655f, 2200,902f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2168), 0);
	*(&iLocal_162 + 2176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-485,8302f, 72,53257f, 2211,344f), Vector(0.0f, 162,0719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2176), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-483,8687f, 75,67455f, 2243,048f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-483,075f, 71,961f, 2201,818f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_rand_idle_stand2", "rand_idle_stand", Vector(-513,642f, 78,714f, 2228,851f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_rand_idle_stand1", "rand_idle_stand", Vector(-494,992f, 74,165f, 2222,989f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", Vector(-476,394f, 72,594f, 2208,338f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-489,555f, 72,364f, 2204,134f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_tend5", "horse_tend", Vector(-491,3683f, 72,87353f, 2213,774f), Vector(0.0f, -122,2253f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_stay5", "horse_stay", Vector(-483,0219f, 72,43819f, 2207,555f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_tend4", "horse_tend", Vector(-490,959f, 72,65787f, 2211,081f), Vector(0.0f, -457,3993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_horse_stay4", "horse_stay", Vector(-494,391f, 73,535f, 2216,439f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_Pee2", "Pee", Vector(-500,917f, 75,958f, 2222,902f), Vector(0.0f, 49,93821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-502,51f, 75,94456f, 2226,066f), Vector(0.0f, -138,6134f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-506,2025f, 76,37253f, 2229,087f), Vector(0.0f, 206,1628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-869,239f, 184,363f, 1622,015f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-892,603f, 184,307f, 1598,662f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-898,47f, 196,766f, 1553,119f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-842,423f, 195,287f, 1517,248f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-850,515f, 199,951f, 1524,559f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_horse_stay3", "horse_stay", Vector(-860,0479f, 189,6933f, 1586,576f), Vector(0.0f, -87,53077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2184), 0);
	*(&iLocal_162 + 2192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_horse_stay2", "horse_stay", Vector(-838,1571f, 189,673f, 1582,628f), Vector(0.0f, -253,3726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2192), 0);
	*(&iLocal_162 + 2200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_horse_stay1", "horse_stay", Vector(-858,0981f, 189,7076f, 1589,251f), Vector(0.0f, -78,61452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2200), 0);
	*(&iLocal_162 + 2208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_horse_stay", "horse_stay", Vector(-847,9999f, 189,794f, 1600f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2208), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_whittle_wood", "whittle_wood", Vector(-854,9286f, 189,7101f, 1587,258f), Vector(0.0f, -56,59673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_spit", "stand_spit", Vector(-844,5616f, 189,8666f, 1578,33f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_RandIdleSitGround", "Rand_Idle_Sit_Ground", Vector(-861,1256f, 189,7522f, 1577,534f), Vector(0.0f, 72,17829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_guntricks", "stand_guntricks_e_any", Vector(-843,9632f, 189,7141f, 1594,357f), Vector(0.0f, -152,5991f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_Pee", "Pee", Vector(-834,5575f, 189,5914f, 1578,504f), Vector(0.0f, -120,5125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_skin_scraper", "skin_scraper", Vector(-851,8649f, 189,7936f, 1581,97f), Vector(0.0f, 16,42579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_stand_lookdistance", "stand_lookdistance_w_any", Vector(-860,617f, 197,949f, 1547,594f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_sit_cleanpistol", "sit_cleanpistol", Vector(-846,0652f, 189,779f, 1585,647f), Vector(0.0f, -92,88916f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_lookout_windowR", "look_out_window_R", Vector(-843,0142f, 189,6684f, 1586,801f), Vector(0.0f, -180,6212f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_lookout_windowL", "look_out_window_L", Vector(-846,9889f, 189,7407f, 1583,474f), Vector(0.0f, 91,37856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_smoking_stand1", "smoking_stand", Vector(-847,0233f, 189,7358f, 1583,315f), Vector(0.0f, 88,9194f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_smoking_stand", "smoking_stand", Vector(-839,2578f, 189,6638f, 1589,468f), Vector(0.0f, -126,8859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_sit_ground_smoke1", "sit_ground_smoke", Vector(-840,5498f, 189,6831f, 1590,884f), Vector(0.0f, -132,4568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_sit_coffee_drink", "sit_camp_coffee_drink", Vector(-853,5219f, 189,7364f, 1586,908f), Vector(0.0f, 123,5809f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_sit_ground_smoke", "sit_ground_smoke", Vector(-853,1792f, 189,7862f, 1582,249f), Vector(0.0f, 111,9939f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-852,1535f, 189,6882f, 1585,669f), Vector(0.0f, 90,9255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Tnr_LookDistanceBinocs", "look_distance_binocs", Vector(-860,8885f, 189,5468f, 1589,467f), Vector(0.0f, 93,03499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_guntricks2", "stand_guntricks_e_any", Vector(-1046,667f, 184,257f, 1363,73f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_guntricks1", "stand_guntricks_e_any", Vector(-1040,191f, 184,076f, 1360,591f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_yawning_n_any", "stand_yawning_n_any", Vector(-1044,274f, 184,066f, 1374,797f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_rand_idle_stand1", "rand_idle_stand", Vector(-1042,525f, 183,986f, 1371,567f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2216), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-1060,616f, 186,347f, 1369,309f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1066,706f, 188,877f, 1351,358f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1048,898f, 189,629f, 1344,847f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1030,036f, 189,812f, 1343,675f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1021,314f, 185,173f, 1367,07f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_Pee2", "Pee", Vector(-1044,787f, 184,066f, 1375,618f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1037,289f, 184,007f, 1360,879f), Vector(0.0f, -148,2222f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2224), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_rand_idle_stand1", "rand_idle_stand", Vector(-728,483f, 226,88f, 1124,825f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_rand_idle_stand", "rand_idle_stand", Vector(-732,926f, 226,2996f, 1106,792f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_yawning_n_any", "stand_yawning_n_any", Vector(-741,615f, 227,712f, 1121,556f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_Pee1", "Pee", Vector(-726,613f, 226,972f, 1128,937f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_whittle_wood", "whittle_wood", Vector(-731,111f, 226,912f, 1119,21f), Vector(0.0f, -56,59673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_RandIdleSitGround1", "Rand_Idle_Sit_Ground", Vector(-735,3475f, 226,3739f, 1104,99f), Vector(0.0f, 236,5938f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_RandIdleSitGround", "Rand_Idle_Sit_Ground", Vector(-733,03f, 227,017f, 1113,366f), Vector(0.0f, 72,17829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_spit", "stand_spit", Vector(-745,383f, 227,523f, 1120,269f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_guntricks", "stand_guntricks_e_any", Vector(-738,237f, 230,987f, 1138,923f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_smoking_stand1", "smoking_stand", Vector(-736,827f, 227,061f, 1113,505f), Vector(0.0f, 233,1141f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-776,693f, 208,288f, 1174,507f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-764,583f, 217,809f, 1163,076f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-732,609f, 231,183f, 1161,514f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-728,293f, 228,278f, 1153,609f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_smoking_stand", "smoking_stand", Vector(-839,2578f, 189,6638f, 1589,468f), Vector(0.0f, -126,8859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_Pee", "Pee", Vector(-1027,649f, 184,4096f, 1377,63f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-777,777f, 213,244f, 1163,218f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-718,439f, 226,382f, 1147,617f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nek_stand_lookdistance", "stand_lookdistance_w_any", Vector(-747,145f, 227,698f, 1152,161f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_rand_idle_stand", "rand_idle_stand", Vector(-1045,471f, 184,066f, 1373,464f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_162 + 2232), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_sit_docks1", "nsit_docks", Vector(-1046,972f, 184,0596f, 1378,077f), Vector(0.0f, 90,22343f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_Pee1", "Pee", Vector(-1033,513f, 181,428f, 1405,885f), Vector(0.0f, -182,9437f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_horse_stay4", "horse_stay", Vector(-1035,998f, 184,1881f, 1368,416f), Vector(0.0f, -201,4612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_horse_stay3", "horse_stay", Vector(-1035,918f, 184,0916f, 1366,649f), Vector(0.0f, 149,0538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_horse_stay2", "horse_stay", Vector(-1060,616f, 186,347f, 1369,309f), Vector(0.0f, 149,0538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_horse_stay1", "horse_stay", Vector(-1057,52f, 187,0946f, 1360,963f), Vector(0.0f, -201,4612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_Pee", "Pee", Vector(-1027,649f, 184,4096f, 1377,63f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_NearWall", "Rand_Idle_NearWall", Vector(-1046,11f, 183,7955f, 1371,995f), Vector(0.0f, 711,347f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1038,049f, 184,0207f, 1362,066f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_stand_guntricks", "stand_guntricks_e_any", Vector(-1039,681f, 184,047f, 1376,458f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "nAur_stand", "rand_idle_stand", Vector(-1040,12f, 184,047f, 1374,909f), Vector(0.0f, -145,1313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_lean_rail", "nlean_rail", Vector(-1041,311f, 184,046f, 1388,666f), Vector(0.0f, 91,23931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_look_window", "look_out_window_L", Vector(-1044,392f, 184,065f, 1375,834f), Vector(0.0f, -179,9143f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_lean_fence", "lean_fence_L_talking", Vector(-1046,237f, 184,0319f, 1378,434f), Vector(0.0f, -179,6869f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_sit_docks", "nsit_docks", Vector(-1038,795f, 184,0846f, 1380,922f), Vector(0.0f, -92,40741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Aur_look_binocs", "look_distance_binocs", Vector(-1039,277f, 181,423f, 1405,247f), Vector(0.0f, -183,3307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_smoking_stand12", "smoking_stand", Vector(-534,7827f, 146,6513f, 1877,814f), Vector(0.0f, 181,8827f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-534,1003f, 146,652f, 1881,399f), Vector(0.0f, -358,6365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_smoking_stand11", "smoking_stand", Vector(-491,075f, 144,272f, 1937,443f), Vector(0.0f, -28,95748f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Pee", "Pee", Vector(-461,327f, 142,833f, 1890,427f), Vector(0.0f, -138,032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_rand_idle_stand", "rand_idle_stand", Vector(-454,65f, 139,572f, 1919,325f), Vector(0.0f, -113,4712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_smoking_stand", "smoking_stand", Vector(-495,012f, 144,473f, 1923,981f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_horse_stay3", "horse_stay", Vector(-467,863f, 140,948f, 1918,547f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_horse_stay2", "horse_stay", Vector(-487,01f, 144,068f, 1904,935f), Vector(0.0f, -221,2936f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_horse_stay", "horse_stay", Vector(-500,318f, 145,434f, 1917,507f), Vector(0.0f, -139,2258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-490,864f, 144,376f, 1923,154f), Vector(0.0f, -36,64879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-458,21f, 140,186f, 1931,342f), Vector(0.0f, -3,663632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_lookdistance_binocs3", "look_distance_binocs", Vector(-459,359f, 142,84f, 1890,269f), Vector(0.0f, -68,80422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-494,257f, 144,499f, 1930,558f), Vector(0.0f, -33,78901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Sit_Ground_Smoke_Pipe", "Sit_Ground_Smoke_Pipe", Vector(-497,401f, 144,499f, 1929,53f), Vector(0.0f, 37,61281f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_look_out_window_R", "look_out_window_R", Vector(-464,6117f, 142,647f, 1898,452f), Vector(0.0f, 179,3634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_smoking_stand13", "smoking_stand", Vector(-457,4906f, 142,6668f, 1895,166f), Vector(0.0f, -120,3361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_sit_cleanrifle", "sit_cleanrifle", Vector(-455,6522f, 139,545f, 1919,091f), Vector(0.0f, -48,19163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_sit_no_table", "sit_no_table", Vector(-502,756f, 144,5078f, 1927,236f), Vector(0.0f, -142,8304f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Pee1", "Pee", Vector(-500,237f, 144,473f, 1933,786f), Vector(0.0f, -4,101937f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-451,2635f, 140,1866f, 1934,491f), Vector(0.0f, 10,2007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-454,9582f, 140,186f, 1931,184f), Vector(0.0f, 99,03301f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_Rand_Idle_Near", "Rand_Idle_NearWall_Shoulder_L", Vector(-498,472f, 144,472f, 1933,444f), Vector(0.0f, 181,4896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_announce1", "stand_announce", Vector(-491,863f, 144,506f, 1921,508f), Vector(0.0f, -138,9142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_announce", "stand_announce", Vector(-464,679f, 140,254f, 1920,628f), Vector(0.0f, 48,78769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_lookdistance_binocs", "look_distance_binocs", Vector(-430,077f, 134,9f, 1907,864f), Vector(0.0f, -88,09788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_lookdistance_binocs2", "look_distance_binocs", Vector(-477,696f, 145,356f, 1950,641f), Vector(0.0f, 189,7475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-528,882f, 151,674f, 1944,555f), Vector(0.0f, -66,41837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-537,156f, 147,628f, 1903,934f), Vector(0.0f, 306,722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "bcc_lookdistance_binocs1", "look_distance_binocs", Vector(-475,628f, 145,189f, 1876,517f), Vector(0.0f, -93,37556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_162 + 2240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage27", "Player_Herb_HummingbirdSage", Vector(-234,8312f, 126,4941f, 1413,074f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage26", "Player_Herb_HummingbirdSage", Vector(-328,9761f, 134,5593f, 1347,657f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage25", "Player_Herb_HummingbirdSage", Vector(-184,0001f, 128,9335f, 1312f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage24", "Player_Herb_HummingbirdSage", Vector(-88.0f, 117,4406f, 1404f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage23", "Player_Herb_HummingbirdSage", Vector(-296.0f, 141,2629f, 1624f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage22", "Player_Herb_HummingbirdSage", Vector(-261,9808f, 140,8409f, 1687,524f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage21", "Player_Herb_HummingbirdSage", Vector(-114,3974f, 121,4745f, 1809,136f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage20", "Player_Herb_HummingbirdSage", Vector(-48.0f, 113,286f, 1688f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage2", "Player_Herb_HummingbirdSage", Vector(-200,0116f, 87,21113f, 1980,004f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage19", "Player_Herb_HummingbirdSage", Vector(-43,99976f, 117,4587f, 1600f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage18", "Player_Herb_HummingbirdSage", Vector(24.0f, 115,4509f, 1672.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage17", "Player_Herb_HummingbirdSage", Vector(73,58875f, 118,3772f, 1760,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage16", "Player_Herb_HummingbirdSage", Vector(-171,3039f, 120,5057f, 1860,722f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage15", "Player_Herb_HummingbirdSage", Vector(-316.0f, 144,1793f, 1832f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage14", "Player_Herb_HummingbirdSage", Vector(-412,0512f, 155,5096f, 1807,954f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage13", "Player_Herb_HummingbirdSage", Vector(-616,2814f, 171,8325f, 1825,91f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage12", "Player_Herb_HummingbirdSage", Vector(-780,3611f, 143,7323f, 1824,27f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage10", "Player_Herb_HummingbirdSage", Vector(-616.0f, 116,1135f, 1984f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage1", "Player_Herb_HummingbirdSage", Vector(-72.0f, 107,4196f, 1864f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage", "Player_Herb_HummingbirdSage", Vector(103,5838f, 83,15372f, 1989,076f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_162 + 2400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Player_Herb_HummingbirdSage61", "Player_Herb_HummingbirdSage", Vector(-457,2195f, 140,1816f, 1936,16f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker5", "Locked_Footlocker", Vector(-521,2206f, 146,5908f, 1891,092f), Vector(0.0f, 136,4989f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "CO_LockedFootlocker", "Locked_Footlocker", Vector(-814,35f, 196,8283f, 1113,775f), Vector(0.0f, -153,1052f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	DECOR_SET_FLOAT(&iVar0, "GringoDollarAmt", 1.0f);
	DECOR_SET_INT(&iVar0, "GringoDollarAmt", true);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_162, "Locked_Footlocker6", "Locked_Footlocker", Vector(-1517,7f, 218,91f, 1730,75f), Vector(0.0f, 180.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_73(struct<2>[] Param0) //Position: 0xA327 / 41767
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_77();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_76(&(Param0[iVar02]), 8);
		}
		else if (Function_75())
		{
			iVar1 = 1;
			Function_76(&(Param0[iVar02]), 8);
		}
		Function_76(&(Param0[iVar02]), 16);
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
				Function_76(&(Param0[iVar02]), 1);
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
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_76(&(Param0[iVar02]), 2);
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
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_76(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_76(&(Param0[iVar02]), 2);
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
	Function_74();
	return 1;
}

void Function_74() //Position: 0xA6E9 / 42729
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

bool Function_75() //Position: 0xA729 / 42793
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

void Function_76(struct<13> Param0) //Position: 0xA757 / 42839
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_77() //Position: 0xA76A / 42858
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

var Function_78(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA7AC / 42924
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_79(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_76(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_79(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA7EA / 42986
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_76(&(Param0[iVar02]), 4);
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

void Function_80(int iParam0, int iParam1) //Position: 0xA8B9 / 43193
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

bool Function_81() //Position: 0xA903 / 43267
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
	
	Function_80(3, 3);
	uVar0 = &uVar0;
	Function_78(&iLocal_0 + 8, "p_uti_cover2x1x", 0, 0);
	if (!Function_73(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("TallTrees_layout");
	}
	*(&iLocal_0 + 32) = CREATE_OBJECTSET_IN_LAYOUT("TAL_vantagePointsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 40[03]) = Vector(-1004,93f, 107,54f, 1215,466f);
	*(&iLocal_0 + 40[03] + 12) = Vector(0.0f, 176,0835f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage01", Vector(-1004,93f, 107,54f, 1215,466f), Vector(0.0f, 176,0835f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_0 + 32);
	*(&iLocal_0 + 40[13]) = Vector(-1011,234f, 107,5559f, 1212,117f);
	*(&iLocal_0 + 40[13] + 12) = Vector(0.0f, 153,6292f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage02", Vector(-1011,234f, 107,5559f, 1212,117f), Vector(0.0f, 153,6292f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_0 + 32);
	*(&iLocal_0 + 40[23]) = Vector(-1049.0f, 120.0f, 1194.0f);
	*(&iLocal_0 + 40[23] + 12) = Vector(0.0f, -178,1565f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage03", Vector(-1049.0f, 120.0f, 1194.0f), Vector(0.0f, -178,1565f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_0 + 32);
	*(&iLocal_0 + 40[33]) = Vector(-1105.0f, 131.0f, 1186.0f);
	*(&iLocal_0 + 40[33] + 12) = Vector(0.0f, 183.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage04", Vector(-1105.0f, 131.0f, 1186.0f), Vector(0.0f, 183.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_0 + 32);
	*(&iLocal_0 + 40[43]) = Vector(-1166.0f, 136.0f, 1184.0f);
	*(&iLocal_0 + 40[43] + 12) = Vector(0.0f, 175.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage05", Vector(-1166.0f, 136.0f, 1184.0f), Vector(0.0f, 175.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_0 + 32);
	*(&iLocal_0 + 40[53]) = Vector(-1191.0f, 135,7389f, 1170.0f);
	*(&iLocal_0 + 40[53] + 12) = Vector(0.0f, 122.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage06", Vector(-1191.0f, 135,7389f, 1170.0f), Vector(0.0f, 122.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_0 + 32);
	*(&iLocal_0 + 40[63]) = Vector(-1524.0f, 166.0f, 1083.0f);
	*(&iLocal_0 + 40[63] + 12) = Vector(0.0f, 204.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage07", Vector(-1524.0f, 166.0f, 1083.0f), Vector(0.0f, 204.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_0 + 32);
	*(&iLocal_0 + 40[73]) = Vector(-1629.0f, 162.0f, 1079.0f);
	*(&iLocal_0 + 40[73] + 12) = Vector(0.0f, 209.0f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage08", Vector(-1629.0f, 162.0f, 1079.0f), Vector(0.0f, 209.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_0 + 32);
	*(&iLocal_0 + 40[83]) = Vector(-1484,8f, 89.0f, 1445.0f);
	*(&iLocal_0 + 40[83] + 12) = Vector(0.0f, 356.0f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage09", Vector(-1484,8f, 89.0f, 1445.0f), Vector(0.0f, 356.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_0 + 32);
	*(&iLocal_0 + 40[93]) = Vector(-1419.0f, 80.0f, 1426.0f);
	*(&iLocal_0 + 40[93] + 12) = Vector(0.0f, 314.0f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage10", Vector(-1419.0f, 80.0f, 1426.0f), Vector(0.0f, 314.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_0 + 32);
	*(&iLocal_0 + 40[103]) = Vector(-1363.0f, 91.0f, 1450.0f);
	*(&iLocal_0 + 40[103] + 12) = Vector(0.0f, 76.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage11", Vector(-1363.0f, 91.0f, 1450.0f), Vector(0.0f, 76.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_0 + 32);
	*(&iLocal_0 + 40[113]) = Vector(-886.0f, 115.0f, 1280.0f);
	*(&iLocal_0 + 40[113] + 12) = Vector(0.0f, 190.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage12", Vector(-886.0f, 115.0f, 1280.0f), Vector(0.0f, 190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_0 + 32);
	*(&iLocal_0 + 40[123]) = Vector(-828.0f, 110.0f, 1318.0f);
	*(&iLocal_0 + 40[123] + 12) = Vector(0.0f, 76.0f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage13", Vector(-828.0f, 110.0f, 1318.0f), Vector(0.0f, 76.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_0 + 32);
	*(&iLocal_0 + 40[133]) = Vector(-817.0f, 110.0f, 1326.0f);
	*(&iLocal_0 + 40[133] + 12) = Vector(0.0f, 200.0f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage14", Vector(-817.0f, 110.0f, 1326.0f), Vector(0.0f, 200.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_0 + 32);
	*(&iLocal_0 + 40[143]) = Vector(-755.0f, 113.0f, 1345.0f);
	*(&iLocal_0 + 40[143] + 12) = Vector(0.0f, 110.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage15", Vector(-755.0f, 113.0f, 1345.0f), Vector(0.0f, 110.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_0 + 32);
	*(&iLocal_0 + 40[153]) = Vector(-551.0f, 114.0f, 1584.0f);
	*(&iLocal_0 + 40[153] + 12) = Vector(0.0f, 137.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage16", Vector(-551.0f, 114.0f, 1584.0f), Vector(0.0f, 137.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_0 + 32);
	*(&iLocal_0 + 40[163]) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 40[163] + 12) = Vector(-488.0f, 123.0f, 1699.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage17", Vector(0.0f, 0.0f, 0.0f), Vector(-488.0f, 123.0f, 1699.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_0 + 32);
	*(&iLocal_0 + 40[173]) = Vector(-488.0f, 108.0f, 1728.0f);
	*(&iLocal_0 + 40[173] + 12) = Vector(0.0f, 178.0f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage18", Vector(-488.0f, 108.0f, 1728.0f), Vector(0.0f, 178.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_0 + 32);
	*(&iLocal_0 + 40[183]) = Vector(-433.0f, 116.0f, 1841.0f);
	*(&iLocal_0 + 40[183] + 12) = Vector(0.0f, 42.0f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage19", Vector(-433.0f, 116.0f, 1841.0f), Vector(0.0f, 42.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_0 + 32);
	*(&iLocal_0 + 40[193]) = Vector(-425.0f, 112.0f, 1902.0f);
	*(&iLocal_0 + 40[193] + 12) = Vector(0.0f, 161.0f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage20", Vector(-425.0f, 112.0f, 1902.0f), Vector(0.0f, 161.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_0 + 32);
	*(&iLocal_0 + 40[203]) = Vector(-474.0f, 104.0f, 1948.0f);
	*(&iLocal_0 + 40[203] + 12) = Vector(0.0f, 8.0f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage21", Vector(-474.0f, 104.0f, 1948.0f), Vector(0.0f, 8.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_0 + 32);
	*(&iLocal_0 + 40[213]) = Vector(-423.0f, 113.0f, 1901.0f);
	*(&iLocal_0 + 40[213] + 12) = Vector(0.0f, 200.0f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage22", Vector(-423.0f, 113.0f, 1901.0f), Vector(0.0f, 200.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_0 + 32);
	*(&iLocal_0 + 40[223]) = Vector(-113.0f, 89.0f, 1978.0f);
	*(&iLocal_0 + 40[223] + 12) = Vector(0.0f, 89.0f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage23", Vector(-113.0f, 89.0f, 1978.0f), Vector(0.0f, 89.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_0 + 32);
	*(&iLocal_0 + 40[233]) = Vector(-39.0f, 123.0f, 1694.0f);
	*(&iLocal_0 + 40[233] + 12) = Vector(0.0f, 174.0f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage24", Vector(-39.0f, 123.0f, 1694.0f), Vector(0.0f, 174.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_0 + 32);
	*(&iLocal_0 + 40[243]) = Vector(-74.0f, 114.0f, 1753.0f);
	*(&iLocal_0 + 40[243] + 12) = Vector(0.0f, 176.0f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "TAL_vantage25", Vector(-74.0f, 114.0f, 1753.0f), Vector(0.0f, 176.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_0 + 32);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x0", "p_uti_cover2x1x", Vector(-448,6531f, 138,4329f, 1914,886f), Vector(0.0f, -75,67802f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x1", "p_uti_cover2x1x", Vector(-449,3369f, 138,8412f, 1918,809f), Vector(0.0f, -75,67802f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x2", "p_uti_cover2x1x", Vector(-448,9167f, 139,7174f, 1896,942f), Vector(0.0f, -55,30396f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x3", "p_uti_cover2x1x", Vector(-456,8095f, 142,5521f, 1898,919f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x4", "p_uti_cover2x1x", Vector(-450,2817f, 139,0974f, 1922,986f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x5", "p_uti_cover2x1x", Vector(-443,0971f, 138,5973f, 1896,387f), Vector(0.0f, -13,45933f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x6", "p_uti_cover2x1x", Vector(-462,6826f, 140,1866f, 1921,317f), Vector(0.0f, -27,98695f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x7", "p_uti_cover2x1x", Vector(-458,4989f, 140,116f, 1920,404f), Vector(0.0f, -22,18075f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x8", "p_uti_cover2x1x", Vector(-468,9054f, 142,5568f, 1904,905f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x9", "p_uti_cover2x1x", Vector(-481,9193f, 143,0384f, 1920f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x10", "p_uti_cover2x1x", Vector(-484,5124f, 143,5607f, 1908,006f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x11", "p_uti_cover2x1x", Vector(-486,4197f, 143,5607f, 1919,21f), Vector(0.0f, -61,57892f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x12", "p_uti_cover2x1x", Vector(-480,3436f, 143,5607f, 1913,63f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x13", "p_uti_cover2x1x", Vector(-499,7885f, 144,8462f, 1921,702f), Vector(0.0f, -52,36341f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x14", "p_uti_cover2x1x", Vector(-514,1085f, 146,5724f, 1900f), Vector(0.0f, -103,41f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x15", "p_uti_cover2x1x", Vector(-518,9744f, 146,5725f, 1903,999f), Vector(0.0f, -111,6471f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x16", "p_uti_cover2x1x", Vector(-501,5815f, 145,5685f, 1910,418f), Vector(0.0f, -102,8337f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x17", "p_uti_cover2x1x", Vector(-490,0768f, 144,4524f, 1904f), Vector(0.0f, -115,3954f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x18", "p_uti_cover2x1x", Vector(-498,8087f, 145,4986f, 1902,808f), Vector(0.0f, -115,3954f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x19", "p_uti_cover2x1x", Vector(-508f, 146,5725f, 1911,293f), Vector(0.0f, -115,3954f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x20", "p_uti_cover2x1x", Vector(-481,9105f, 143,5607f, 1890,433f), Vector(0.0f, -191,4418f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x21", "p_uti_cover2x1x", Vector(-490,1463f, 144,5646f, 1888f), Vector(0.0f, -207,9976f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x22", "p_uti_cover2x1x", Vector(-482,9111f, 144,5646f, 1881,089f), Vector(0.0f, -199,7674f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x23", "p_uti_cover2x1x", Vector(-500.0f, 145,5685f, 1890,708f), Vector(0.0f, -165,2202f, 0.0f), 1);
	Function_82(StackVal, StackVal, &iLocal_0, "cover2x1x24", "p_uti_cover2x1x", Vector(-468,9321f, 140,0699f, 1930,365f), Vector(0.0f, -143,4477f, 0.0f), 1);
	return 1;
}

var Function_82(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xB9FE / 47614
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_83(char* cParam0) //Position: 0xBA2C / 47660
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

void Function_84(int iParam0) //Position: 0xBA69 / 47721
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

