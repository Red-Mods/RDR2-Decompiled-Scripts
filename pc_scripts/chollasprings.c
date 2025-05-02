//Decompiled with MagicRDR v1.0
//Function Count : 107
//Statics Count : 1037
//Natives Count : 133
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 3;
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
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 54;
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
	var uLocal_376 = 2;
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
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 5;
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
	int iLocal_967 = 0;
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
	var uLocal_993 = 1;
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
	int iLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	float fLocal_1033 = 0.0f;
	int iLocal_1034 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_1034 = 1;
	iLocal_848 = 0;
	Function_106(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_105("Initializing Cholla Springs", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_849 = 1000;
		switch (iLocal_848)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_848 = 1;
				}
				iLocal_849 = 0;
				break;
			
			case 0x00000001:
				if (Function_103())
				{
					iLocal_848 = 2;
				}
				iLocal_849 = 0;
				break;
			
			case 0x00000002:
				if (Function_94())
				{
					Function_93(&(Global_43791[iScriptParam_0]), 32);
					iLocal_848 = 3;
					Function_90(&iLocal_0);
				}
				iLocal_849 = 0;
				break;
			
			case 0x00000003:
				uLocal_850 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ChollaSpringsVol", &iScriptParam_0, 2, 0);
				Function_89(&Global_11200, &Global_13072, iScriptParam_0);
				iLocal_848 = 5;
				iLocal_849 = 0;
				break;
			
			case 0x00000005:
				if (Function_88(&Global_11200, &Global_13072, iScriptParam_0))
				{
					iLocal_848 = 4;
					iLocal_849 = 0;
				}
				else
				{
					iLocal_849 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_87(&(Global_43791[iScriptParam_0]), 16))
				{
					if ((Global_99472 != 32 || Global_99472 != 16) || Global_99472 != 1)
					{
						SET_ENABLE_POINT_LIGHT(&uLocal_1031, 1);
						fLocal_1033 = 0.0f;
						iLocal_1030 = 1;
					}
					else
					{
						SET_ENABLE_POINT_LIGHT(&uLocal_1031, 0);
						fLocal_1033 = 1.0f;
						iLocal_1030 = 0;
					}
					iLocal_848 = 6;
				}
				iLocal_849 = 0;
				break;
			
			case 0x00000006:
				Function_86(StackVal, 0, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_85(StackVal, 0, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_84(StackVal, 0, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_83(StackVal, 0, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_82(StackVal, 0, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_80(StackVal, 0, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_79(0, &uLocal_855, &iLocal_134);
				Function_86(StackVal, 1, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_85(StackVal, 1, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_84(StackVal, 1, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_83(StackVal, 1, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_82(StackVal, 1, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_80(StackVal, 1, &uLocal_855, Vector(-2923,128f, 13,051f, 2961,234f));
				Function_79(1, &uLocal_855, &iLocal_134);
				Function_86(StackVal, 2, &uLocal_855, Vector(-2017,916f, 42,338f, 3014,271f));
				Function_85(StackVal, 2, &uLocal_855, Vector(-2017,916f, 42,338f, 3014,271f));
				Function_84(StackVal, 2, &uLocal_855, Vector(-2017,916f, 42,338f, 3014,271f));
				Function_83(StackVal, 2, &uLocal_855, Vector(-2017,916f, 42,338f, 3014,271f));
				Function_82(StackVal, 2, &uLocal_855, Vector(-2017,916f, 42,338f, 3014,271f));
				Function_80(StackVal, 2, &uLocal_855, Vector(-2017,916f, 42,338f, 3014,271f));
				Function_79(2, &uLocal_855, &iLocal_134);
				Function_74(&Global_11200, &Global_13072, &uLocal_855, &Global_10994, iScriptParam_0);
				Global_26651 = 0;
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 2840), false);
				if (DECOR_CHECK_EXIST(&iLocal_134 + 2840, "SavingAtBedAllowed"))
				{
					DECOR_REMOVE(&iLocal_134 + 2840, "SavingAtBedAllowed");
				}
				Function_73(&iLocal_134 + 2840, &iLocal_134 + 1120);
				Function_93(&(Global_43791[iScriptParam_0]), 8);
				if (Function_87(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_72(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_848 = 10;
				}
				else
				{
					iLocal_848 = 7;
				}
				iLocal_849 = 0;
				break;
			
			case 0x00000007:
				Function_71(iScriptParam_0);
				if (Function_69(512))
				{
					Function_59(iScriptParam_0);
				}
				uLocal_854 = uLocal_854;
				Function_58(64);
				iLocal_848 = 8;
				iLocal_849 = 0;
				break;
			
			case 0x00000008:
				Function_57(StackVal, 0, Global_46760[0], Vector(-2080,289f, 16,962f, 2603,609f));
				if (!Function_56(&Global_46760))
				{
					Function_52(2, 0,5f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_56(&Global_46760));
					Function_48(0, 8, 4, 0, 2);
					Function_58(64);
				}
				Function_93(&(Global_43791[iScriptParam_0]), 512);
				iLocal_848 = 9;
				iLocal_849 = 0;
				break;
			
			case 0x00000009:
				if (!Function_56(&Global_46760))
				{
					Function_46(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 0;
				Function_93(&(Global_43791[iScriptParam_0]), 4);
				Function_45("Finished Initializing Cholla Springs", 5.0f);
				iLocal_848 = 10;
				iLocal_849 = 0;
				break;
			
			case 0x0000000A:
				if (Function_44(68) && iLocal_1034)
				{
					uVar0 = FIND_NEAREST_DOOR(&Global_99725[6943] + 184, 10.0f);
					if (IS_DOOR_VALID(&uVar0))
					{
						OPEN_DOOR_DIRECTION_FAST(&uVar0, 1);
						iLocal_1034 = 0;
					}
				}
				if (Global_26651)
				{
					if (!HAS_ITEM(Function_43(59), &Global_54076))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 2840), false);
						if (DECOR_CHECK_EXIST(&iLocal_134 + 2840, "SavingAtBedAllowed"))
						{
							DECOR_REMOVE(&iLocal_134 + 2840, "SavingAtBedAllowed");
						}
						Global_26651 = 0;
					}
				}
				else if (HAS_ITEM(Function_43(59), &Global_54076))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 2840), true);
					DECOR_SET_BOOL(&iLocal_134 + 2840, "SavingAtBedAllowed", 1);
					Global_26651 = 1;
				}
				Function_42();
				if (!Function_56(&Global_46760))
				{
					if (iLocal_967)
					{
						iLocal_967 = 0;
						iLocal_848 = 8;
						iLocal_849 = 0;
					}
				}
				else
				{
					iLocal_967 = 1;
				}
				Function_30(&(Global_39874[33]), "OFG", 20, &iLocal_0, 3);
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_852))
					{
						uLocal_852 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_968, 62, 0);
					}
				}
				if (Function_87(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_848 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_849);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_11200, &Global_13072, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_58(64);
	Function_72(&(Global_43791[iScriptParam_0]), 32);
	Function_72(&(Global_43791[iScriptParam_0]), 64);
	Function_72(&(Global_43791[iScriptParam_0]), 8);
	Function_72(&(Global_43791[iScriptParam_0]), 512);
	Function_72(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_850))
	{
		TERMINATE_SCRIPT(&uLocal_850);
	}
	Function_45("Unloaded Cholla Springs", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x72D / 1837
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

void Function_2(int iParam0) //Position: 0x763 / 1891
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x785 / 1925
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x79B / 1947
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x7B1 / 1969
{
	Function_6(&iLocal_134 + 8);
	RELEASE_LAYOUT_REF(&iLocal_134);
	return;
}

void Function_6(int iParam0) //Position: 0x7C4 / 1988
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x7EC / 2028
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

void Function_8(struct<13> Param0) //Position: 0x937 / 2359
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x954 / 2388
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x972 / 2418
{
	Function_6(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x985 / 2437
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
	if (Function_87(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_72(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_87(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_87(&(Global_43791[bParam2]), 256))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_93(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xBA3 / 2979
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

int Function_13(int iParam0) //Position: 0xD09 / 3337
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

int Function_14(int iParam0) //Position: 0xD34 / 3380
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

void Function_15(var uParam0, int iParam1) //Position: 0xD68 / 3432
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xD79 / 3449
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xD95 / 3477
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xDAF / 3503
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xDCC / 3532
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0xDE7 / 3559
{
	return (bParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xDF4 / 3572
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

void Function_22(int iParam0) //Position: 0x12A2 / 4770
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

bool Function_23(int iParam0) //Position: 0x130D / 4877
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

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x138B / 5003
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

bool Function_25(int iParam0) //Position: 0x143A / 5178
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x1455 / 5205
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

bool Function_27(bool bParam0) //Position: 0x150A / 5386
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_87(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x1528 / 5416
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x1537 / 5431
{
	return &Global_21369 + 8;
}

void Function_30(vector3 vParam0) //Position: 0x1543 / 5443
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
				Function_40(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_40(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_39(&vParam0, 63))
			{
				if (Function_38(76) || Function_44(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_36(&cParam1, &vParam0, 3, &uParam3);
						Function_33(&vParam0, 63);
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
			Function_32();
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
			Function_31();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_39(&vParam0, 63))
		{
			if (Function_38(76) || Function_44(76))
			{
				Function_36(&cParam1, &vParam0, 3, &uParam3);
				Function_33(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_36(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_31() //Position: 0x1754 / 5972
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_33(&(Global_39874[33]), bVar0);
		bVar0++;
	}
	return;
}

void Function_32() //Position: 0x179B / 6043
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_33(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_33(int iParam0, bool bParam1) //Position: 0x17ED / 6125
{
	if (bParam1 <= 32)
	{
		Function_34(&iParam0, Function_35(bParam1));
	}
	else
	{
		Function_34(&iParam0 + 4, Function_35((bParam1 - 32)));
	}
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x1818 / 6168
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_35(bool bParam0) //Position: 0x1829 / 6185
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_36(char* cParam0) //Position: 0x1835 / 6197
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(&iParam1 + 16))
	{
		*(&iParam1 + 16) = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", &uParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, &cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_39(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_37(), &cVar1, bParam2, bVar5, 4278716679);
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

var Function_37() //Position: 0x18E2 / 6370
{
	int iVar0;
	
	return &iVar0;
}

int Function_38(int iParam0) //Position: 0x18EB / 6379
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_39(struct<5> Param0) //Position: 0x1900 / 6400
{
	if (bParam1 <= 32)
	{
		return Function_20(Param0, Function_35(bParam1));
	}
	return Function_20(StackVal, Function_35((bParam1 - 32)));
}

void Function_40(vector3 vParam0) //Position: 0x192D / 6445
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_41(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_41(var uParam0) //Position: 0x1962 / 6498
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uParam0);
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

void Function_42() //Position: 0x19B1 / 6577
{
	float fVar0;
	
	fVar0 = 0,1f;
	if (((Global_99472 != 32 || Global_99472 != 16) || Global_99472 != 1) && !iLocal_1030)
	{
		fLocal_1033 = (fLocal_1033 - fVar0);
		if (fLocal_1033 >= 0.0f)
		{
			fLocal_1033 = 0.0f;
			SET_ENABLE_POINT_LIGHT(&uLocal_1031, 1);
			iLocal_1030 = 1;
		}
	}
	else if (((Global_99472 != 2 || Global_99472 != 4) || Global_99472 != 8) && iLocal_1030)
	{
		fLocal_1033 = (fLocal_1033 + fVar0);
		if (fLocal_1033 <= 1.0f)
		{
			fLocal_1033 = 1.0f;
			SET_ENABLE_POINT_LIGHT(&uLocal_1031, 0);
			iLocal_1030 = 0;
		}
	}
	return;
}

var Function_43(bool bParam0) //Position: 0x1A3D / 6717
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_44(int iParam0) //Position: 0x1B31 / 6961
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_45(char* cParam0) //Position: 0x1B46 / 6982
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

void Function_46(int iParam0, bool bParam1) //Position: 0x1B86 / 7046
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

void Function_47(var uParam0, int iParam1) //Position: 0x1C76 / 7286
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_48(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1C83 / 7299
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

void Function_49() //Position: 0x1D71 / 7537
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

int Function_50(bool bParam0) //Position: 0x1DBF / 7615
{
	if (!Function_51(bParam0))
	{
		return 0;
	}
	return Global_40060[bParam0];
}

bool Function_51(bool bParam0) //Position: 0x1DD7 / 7639
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_52(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1DEC / 7660
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
		Function_55();
	}
	if (&bParam5)
	{
		Function_53(1048576);
	}
}

void Function_53(int iParam0) //Position: 0x1EFA / 7930
{
	Function_54(&Global_43580, iParam0);
	return;
}

void Function_54(var uParam0, var uParam1) //Position: 0x1F08 / 7944
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_55() //Position: 0x1F27 / 7975
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_53(16384);
	}
	return;
}

bool Function_56(int[] iParam0) //Position: 0x1F43 / 8003
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

void Function_57(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1F94 / 8084
{
	if (!Function_51(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

void Function_58(int iParam0) //Position: 0x1FF5 / 8181
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_59(int iParam0) //Position: 0x2008 / 8200
{
	if (Function_68(349) == 0)
	{
		Function_64(53, 2, 760, 0, 770, 2, 2, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 15, 0);
	}
	else
	{
		Function_64(53, 2, 760, 0, 770, 2, 0, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 45, 0);
	}
	Function_63(&Global_27462[5352] + 188, 2, 8.0f, 1, 704);
	Function_62(&Global_27462[5352] + 188, 19,9f, 0,6f);
	Function_61(&Global_27462[5352] + 188, 0.0f, 2);
	Function_60(&Global_27462[5352] + 188, 10.0f);
	return;
}

void Function_60(int iParam0, int iParam1) //Position: 0x2100 / 8448
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_61(int iParam0, float fParam1, int iParam2) //Position: 0x210F / 8463
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_62(int iParam0, float fParam1, int iParam2) //Position: 0x2127 / 8487
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_63(struct<85> Param0) //Position: 0x213F / 8511
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2169 / 8553
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_65(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_65(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x21B0 / 8624
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
					bVar2 = Function_67(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_66(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_67(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_66(int iParam0, int iParam1) //Position: 0x256E / 9582
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_67(int iParam0) //Position: 0x2591 / 9617
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_68(int iParam0) //Position: 0x25A8 / 9640
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_69(int iParam0) //Position: 0x25E9 / 9705
{
	return Function_70(Global_131807.f_1304, iParam0);
}

int Function_70(var uParam0, int iParam1) //Position: 0x25FB / 9723
{
	return (uParam0 && iParam1) == 0;
}

void Function_71(int iParam0) //Position: 0x2608 / 9736
{
	Function_64(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_63(&Global_27462[1852] + 188, 1, 5.0f, 1, 640);
	Function_60(&Global_27462[1852] + 188, 5.0f);
	Function_62(&Global_27462[552] + 188, 19,9f, 0,7f);
	Function_61(&Global_27462[552] + 188, -4.0f, 2);
	return;
}

void Function_72(var uParam0, int iParam1) //Position: 0x269D / 9885
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

int Function_73(var uParam0, int iParam1) //Position: 0x26B7 / 9911
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

void Function_74(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2815 / 10261
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_87(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_75(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_72(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_93(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_75(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x28CD / 10445
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_87(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_78(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_77(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_76(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_76(int iParam0, struct<2> Param1) //Position: 0x2A4E / 10830
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_77(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_77(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_77(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_77(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_77(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_77(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_77(vector3 vParam0) //Position: 0x2B94 / 11156
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_78(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2BAC / 11180
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_37(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_79(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2CD3 / 11475
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

void Function_80(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2D32 / 11570
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_81(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_81(struct<2> Param0, struct<2> Param2) //Position: 0x2D99 / 11673
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_82(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2DC5 / 11717
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_81(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_83(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2E2E / 11822
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_81(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_84(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2E99 / 11929
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_81(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_85(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2EFF / 12031
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_81(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_86(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2F68 / 12136
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_81(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_87(var uParam0, int iParam1) //Position: 0x2FCC / 12236
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_88(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2FE9 / 12265
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
	if (Function_87(&(Global_43791[iParam2]), 0x40000000))
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

void Function_89(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x30D2 / 12498
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
	if (!Function_87(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_93(&(Global_43791[iParam2]), 0x40000000);
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

int Function_90(var uParam0) //Position: 0x31C2 / 12738
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
			bVar9 = (Function_92() && !Function_91(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_92()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
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

bool Function_91(bool bParam0, bool bParam1) //Position: 0x3321 / 13089
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_92() //Position: 0x3342 / 13122
{
	return 0;
}

void Function_93(var uParam0, int iParam1) //Position: 0x3349 / 13129
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_94() //Position: 0x335A / 13146
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	Function_102(3, 3);
	uVar0 = &uVar0;
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_campfire", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire03_law", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire01_law", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_1", 1, 0);
	Function_100(&iLocal_134 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_95(&iLocal_134 + 8))
	{
		return 0;
	}
	iLocal_134 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_134))
	{
		iLocal_134 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	*(&iLocal_134 + 880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint", Vector(-1864.0f, 25,66513f, 3304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint1", Vector(-2307,94f, 24,22564f, 3004,581f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint2", Vector(-2328,088f, 17,06667f, 3172.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint3", Vector(-2872f, 74,29016f, 2177,927f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint4", Vector(-2832f, 49,97124f, 2422,863f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint5", Vector(-2832,009f, 20,221f, 3076,099f), Vector(0.0f, 268,302f, 0.0f));
	*(&iLocal_134 + 928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint6", Vector(-1916.0f, 28,12522f, 2248,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint7", Vector(-2904,914f, 19,0745f, 2701,286f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint8", Vector(-3440,624f, 23,55206f, 2500.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint9", Vector(-1948,986f, 30,338f, 3468,504f), Vector(0.0f, 4,794f, 0.0f));
	*(&iLocal_134 + 960) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", &iLocal_134, 8, 0);
	*(&iLocal_134 + 968[03]) = Vector(-2934,529f, 14,297f, 2973,767f);
	*(&iLocal_134 + 968[03] + 12) = Vector(0.0f, 176,6796f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Flag2", Vector(-2934,529f, 14,297f, 2973,767f), Vector(0.0f, 176,6796f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_134 + 960);
	*(&iLocal_134 + 968[13]) = Vector(-2932,407f, 13,051f, 2969,621f);
	*(&iLocal_134 + 968[13] + 12) = Vector(0.0f, 88,681f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Flag1", Vector(-2932,407f, 13,051f, 2969,621f), Vector(0.0f, 88,681f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_134 + 960);
	*(&iLocal_134 + 1024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint10", Vector(-2002,36f, 43,13799f, 3572,674f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint11", Vector(-3504,35f, 16,25382f, 3138,471f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint12", Vector(-1233,881f, 22,28738f, 3209,578f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint13", Vector(-2827,172f, 20,218f, 3076,897f), Vector(0.0f, 26,674f, 0.0f));
	*(&iLocal_134 + 1056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhtreas", Vector(-2830,891f, 20,21f, 3077,916f), Vector(0.0f, 36,637f, 0.0f));
	*(&iLocal_134 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhtreas1", Vector(-2819,144f, 20,898f, 3097,647f), Vector(0.0f, 167,963f, 0.0f));
	*(&iLocal_134 + 1072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhtreas2", Vector(-2849,445f, 19,723f, 3104,265f), Vector(0.0f, 238,743f, 0.0f));
	*(&iLocal_134 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint14", Vector(-1911,676f, 29,161f, 2259,116f), Vector(0.0f, 212,788f, 0.0f));
	*(&iLocal_134 + 1088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "chof_bhint15", Vector(-2864,669f, 82,175f, 2160,382f), Vector(0.0f, 198,307f, 0.0f));
	*(&iLocal_134 + 1096) = Vector(-2833,166f, 50,332f, 2417,407f);
	*(&iLocal_134 + 1096 + 12) = Vector(0.0f, -76,14326f, 0.0f);
	*(&iLocal_134 + 1120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "player_save_flag_PLE", Vector(-2833,166f, 50,332f, 2417,407f), Vector(0.0f, -76,14326f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campsite_pee", "Pee", Vector(-2306,277f, 28,39551f, 2246,277f), Vector(0.0f, 121,9837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_look_distance_b1", "look_distance_binocs", Vector(-2307,302f, 24,09412f, 3013,673f), Vector(0.0f, 180,1332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_tend3", "horse_tend", Vector(-2315,239f, 23,18176f, 3001,263f), Vector(0.0f, -134,7993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_stay", "horse_stay", Vector(-2317,562f, 24,09412f, 3013,69f), Vector(0.0f, -236,7155f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_tend1", "horse_tend", Vector(-2313,096f, 24,09412f, 3015,129f), Vector(0.0f, -50,75182f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_tend", "horse_tend", Vector(-2310,636f, 24,09412f, 3016,065f), Vector(0.0f, -50,75182f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_tend5", "horse_tend", Vector(-2314,721f, 23,09976f, 2998,606f), Vector(0.0f, -113,6393f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_stay5", "horse_stay", Vector(-2314,11f, 23,31754f, 3000,44f), Vector(0.0f, -312,8547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_horse_stay4", "horse_stay", Vector(-2315,098f, 23,09695f, 2997,101f), Vector(0.0f, -299,9993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_lookdistance", "stand_lookdistance_w_any", Vector(-2321,633f, 23,09019f, 2995,128f), Vector(0.0f, 57,05201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_rowdydrink", "stand_drunk_rowdydrink", Vector(-2306,282f, 24,09412f, 3004,487f), Vector(0.0f, 88,02834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_Pee4", "Pee", Vector(-2307,927f, 24,08537f, 3018,643f), Vector(0.0f, -137,4129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_look_distance_b", "look_distance_binocs", Vector(-2312,529f, 24,0251f, 3007,667f), Vector(0.0f, 101,1517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_sleeping_wall", "sleeping_wall_scripted", Vector(-2308,404f, 24,09412f, 3007,325f), Vector(0.0f, -43,6532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_sstand6", "smoking_stand", Vector(-2309,569f, 24,09412f, 3005,758f), Vector(0.0f, -39,61635f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_Ground3", "Rand_Idle_Sit_Ground", Vector(-2307,361f, 24,09412f, 3005,891f), Vector(0.0f, 11,60332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_lobinocs5", "look_distance_binocs", Vector(-2306,032f, 24,05074f, 2993,701f), Vector(0.0f, -7,349932f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_NearWall2", "Rand_Idle_NearWall", Vector(-2309,781f, 24,09412f, 3004,131f), Vector(0.0f, -134,4684f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_runk_throw", "stand_drunk_throwbottle", Vector(-2308,548f, 24,09412f, 3006,197f), Vector(0.0f, -22,12869f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "twoCrw_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-2308,48f, 24,09412f, 3003,163f), Vector(0.0f, -158,2691f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campsite_stand_idle", "rand_idle_stand_nospawn", Vector(-2303,121f, 27,91747f, 2244,138f), Vector(0.0f, -130,4733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-1958,388f, 25,837f, 2253,862f), Vector(0.0f, 532,3543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(-1928,494f, 28,198f, 2256,35f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1128), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_guntricks3", "stand_guntricks_e_any", Vector(-1913,875f, 28,405f, 2250,965f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_guntricks2", "stand_guntricks_e_any", Vector(-1918,708f, 28,993f, 2256,007f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(-1926,926f, 28,128f, 2248,919f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1136), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_horse_stay5", "horse_stay", Vector(-1931,363f, 31,714f, 3457,895f), Vector(0.0f, -90,69595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_horse_stay4", "horse_stay", Vector(-1922,429f, 33,198f, 3457,79f), Vector(0.0f, -119,5589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_guntricks1", "stand_guntricks_e_any", Vector(-1935,254f, 31,071f, 3465,635f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3554,44f, 15,6855f, 3158,265f), Vector(0.0f, 209,569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1144), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_rand_idle_stand3", "stand_lookdistance_w_any", Vector(-3552,909f, 15,63719f, 3157,377f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_rand_idle_stand2", "rand_idle_stand", Vector(-3555,438f, 15,60915f, 3159,332f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3543,762f, 15,3694f, 3162,819f), Vector(0.0f, -210,2364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3545,373f, 15,49567f, 3162,648f), Vector(0.0f, 34,25905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1152), 0);
	*(&iLocal_134 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3544,541f, 15,49885f, 3161,289f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1160), 0);
	*(&iLocal_134 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_look_distance_binocs2", "look_distance_binocs", Vector(-3545,451f, 15,64982f, 3159,776f), Vector(0.0f, 138,5309f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1168), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_horse_tend1", "horse_tend", Vector(-3495,967f, 19,65504f, 3136,116f), Vector(0.0f, -91,20521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_horse_tend", "horse_tend", Vector(-3499,674f, 16,25382f, 3147,382f), Vector(0.0f, 21,67242f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_horse_stay2", "horse_stay", Vector(-3497,875f, 16,7437f, 3146,125f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_horse_stay1", "horse_stay", Vector(-3496f, 17,07369f, 3146,051f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_horse_stay", "horse_stay", Vector(-3494,914f, 17,262f, 3150,906f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_look_distance_binocs1", "look_distance_binocs", Vector(-3516,268f, 15,515f, 3124,192f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_Pee", "Pee", Vector(-3492,114f, 19,66672f, 3136,246f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_rand_idle_stand1", "rand_idle_stand", Vector(-3520,276f, 11,12099f, 3146,674f), Vector(0.0f, 78,99949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_rand_idle_stand", "rand_idle_stand", Vector(-3509,928f, 13,78963f, 3146,481f), Vector(0.0f, -82,29346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3511,514f, 13,83953f, 3143,129f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", Vector(-3497,143f, 17,32072f, 3150,853f), Vector(0.0f, -105,2133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_lean_rail", "look_distance_binocs", Vector(-3520,693f, 15,672f, 3127,985f), Vector(0.0f, 37,36112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", Vector(-3516,66f, 15,74677f, 3134,089f), Vector(0.0f, 41,5251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_look_distance_binocs", "look_distance_binocs", Vector(-3503,269f, 15,4507f, 3126,436f), Vector(0.0f, -47,4214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1176), 0);
	*(&iLocal_134 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3507,42f, 14,41f, 3147,197f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1184), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_smoking_stand2", "smoking_stand", Vector(-1946,722f, 30,068f, 3464,956f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-1954,085f, 30,043f, 3461,345f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-1913,139f, 35,528f, 3465,48f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-1931,168f, 31,081f, 3472,563f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_smoking_stand1", "smoking_stand", Vector(-1947,871f, 30,049f, 3454,507f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DIR_LockedFootlocker", "Locked_Footlocker", Vector(-1987,543f, 48,60604f, 3602,282f), Vector(0.0f, -147,379f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	DECOR_SET_INT(&uVar0, "GringoDollarAmt", 11);
	*(&iLocal_134 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "lean_rail2", "nlean_rail", Vector(-2932,204f, 14,297f, 2980,332f), Vector(0.0f, 179,9064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1192), 0);
	*(&iLocal_134 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "horse_tend1", "horse_tend", Vector(-2908,074f, 13,05095f, 2943,909f), Vector(0.0f, 116,8855f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1200), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_horse_tend1", "horse_tend", Vector(-101,656f, 55,227f, 2801,408f), Vector(0.0f, -141,5272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_horse_tend", "horse_tend", Vector(-111,4741f, 55,2157f, 2810,284f), Vector(0.0f, 66,63183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_horse_stay3", "horse_stay", Vector(-113,5305f, 55,2157f, 2812.0f), Vector(0.0f, -134,0859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_horse_stay2", "horse_stay", Vector(-100,2657f, 55,2157f, 2800,768f), Vector(0.0f, 38,61838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_horse_stay1", "horse_stay", Vector(-116,4423f, 55,2157f, 2812,442f), Vector(0.0f, 146,8178f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Sit_Ground_Drink_Ven", "Sit_Ground_Drink", Vector(-2019,311f, 42,37034f, 3013,165f), Vector(0.0f, -163,9837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "NearWall_Ven", "Rand_Idle_NearWall", Vector(-2003,049f, 41,99572f, 3043,089f), Vector(0.0f, -36,88197f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "sleeping_wall_Ven", "sleeping", Vector(-2006,959f, 42,16058f, 3043,295f), Vector(0.0f, -91,77731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_worried_Ven", "stand_worried_n_any", Vector(-2008,618f, 42,041f, 3046,047f), Vector(0.0f, -131,9067f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Pee_Ven", "Pee", Vector(-2005,099f, 42,04128f, 3055,422f), Vector(0.0f, 1,465339f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_lookdistanc_Ven", "stand_lookdistance_w_any", Vector(-1982,15f, 45,017f, 3070,941f), Vector(0.0f, -164,3452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "lean_rail_Ven", "nlean_rail", Vector(-2017,916f, 42,338f, 3014,271f), Vector(0.0f, -165,6215f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "look_distance_binocs_Ven", "look_distance_binocs", Vector(-2011,333f, 42,35631f, 3012,558f), Vector(0.0f, -77,03822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "ook_out_window_R_Ven", "look_out_window_R", Vector(-2023,634f, 42,041f, 3010,935f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_horse_stay", "horse_stay", Vector(-102,823f, 55,2157f, 2802,823f), Vector(0.0f, 49,26177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_sit_ground_smoke", "sit_ground_smoke", Vector(-105,7061f, 55,2157f, 2803,866f), Vector(0.0f, -116,7412f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_play_harmonica", "sit_ground_play_harmonica", Vector(-113,111f, 55,2157f, 2806,26f), Vector(0.0f, -108,6369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_stand_guntricks", "stand_guntricks_e_any", Vector(-111,1549f, 55,2157f, 2808f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_stand_yawning", "stand_yawning_n_any", Vector(-106,334f, 55,2157f, 2806,334f), Vector(0.0f, 100,3735f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_stand_lookdistanc", "stand_lookdistance_w_any", Vector(-117,9617f, 55,2157f, 2809,962f), Vector(0.0f, 96,93845f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_smoking_stand", "smoking_stand", Vector(-109,5375f, 55,21568f, 2805,538f), Vector(0.0f, 142,1955f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_look_distance_binocs", "look_distance_binocs", Vector(-114,3744f, 54,75f, 2814,374f), Vector(0.0f, 191,7611f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Man_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-111,443f, 55,198f, 2804,726f), Vector(0.0f, 182,6724f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "lean_rail1", "nlean_rail", Vector(-2935,203f, 14,297f, 2977,5f), Vector(0.0f, 91,34452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1208), 0);
	*(&iLocal_134 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_hammer_tabletop", "nuse_shelf", Vector(-2901,083f, 13,05095f, 2953,657f), Vector(0.0f, 46,55552f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1216), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2900,832f, 16,386f, 2946,484f), Vector(0.0f, 114,7093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "nsit_docks", "nsit_docks", Vector(-2903,891f, 16,4614f, 2948,211f), Vector(0.0f, 43,21585f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1224), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "look_distance_binocs", "look_distance_binocs", Vector(-2912f, 14,05486f, 2976f), Vector(0.0f, 213,9748f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2888,407f, 13,051f, 2930,088f), Vector(0.0f, -89,05313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Multistage_bucket", "Multistage_bucket", Vector(-2905,335f, 13,051f, 2957,407f), Vector(0.0f, 255,3506f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "any_washCloths", "any_washCloths", Vector(-2934,739f, 14,3303f, 2975,081f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "horse_tend", "horse_tend", Vector(-2903,199f, 13,05095f, 2950,597f), Vector(0.0f, 219,8719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1232), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall_Shoulder_L", Vector(-2919,18f, 13,085f, 2991,829f), Vector(0.0f, 265,6623f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_horseshoe", "stand_horseshoe", Vector(-2908,933f, 13,051f, 2956,028f), Vector(0.0f, -12,4248f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "nlean_rail", "nlean_rail", Vector(-2925,291f, 14,297f, 2980,532f), Vector(0.0f, -87,29653f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_hammer_wall", "stand_hammer_wall", Vector(-2899,185f, 13,051f, 2945,381f), Vector(0.0f, 190,7813f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-2935,112f, 14,297f, 2978,921f), Vector(0.0f, 87,12711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_horse_tend", "horse_tend", Vector(-1230,139f, 22,08622f, 3216,563f), Vector(0.0f, 96,76688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1237,924f, 22,299f, 3209,018f), Vector(0.0f, 88,8347f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1240), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_horse_tend2", "horse_tend", Vector(-1249,513f, 23,42436f, 3210,53f), Vector(0.0f, -91,21593f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_horse_tend1", "horse_tend", Vector(-1248.0f, 22,43698f, 3216.0f), Vector(0.0f, -95,92507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_horse_stay2", "horse_stay", Vector(-1248f, 22,82869f, 3213,701f), Vector(0.0f, 81,59499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_horse_stay1", "horse_stay", Vector(-1226,133f, 22,08622f, 3212,074f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_horse_stay", "horse_stay", Vector(-1224f, 22,08622f, 3209,978f), Vector(0.0f, 35,12274f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_loobinocs", "look_distance_binocs", Vector(-1226,583f, 22,11765f, 3215,137f), Vector(0.0f, -98,96873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_NearWall", "Rand_Idle_NearWall", Vector(-1240,39f, 22,069f, 3206,121f), Vector(0.0f, 89,76422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn_rtand", "rand_idle_stand", Vector(-1220,766f, 23,494f, 3204,79f), Vector(0.0f, -54,23795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "np2Grn_Pee", "Pee", Vector(-1228,186f, 22,25996f, 3204,888f), Vector(0.0f, -31,56896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "p2Grn__e_any", "stand_guntricks_e_any", Vector(-1235,087f, 22,23831f, 3209,045f), Vector(0.0f, 68,27065f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "P2Grn_rowdydrink", "stand_drunk_rowdydrink", Vector(-1233,846f, 22,23988f, 3207,39f), Vector(0.0f, 128,9384f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "P2Grn__Ground", "Rand_Idle_Sit_Ground", Vector(-1238,468f, 22,3443f, 3207,1f), Vector(0.0f, -144,53f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Grn_smoking_stand", "smoking_stand", Vector(-1233,558f, 22,2506f, 3212,879f), Vector(0.0f, 1,289225f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-2011,576f, 45,81986f, 3593,491f), Vector(0.0f, -125,9303f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1975,478f, 48,8424f, 3604,32f), Vector(0.0f, -132,8838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_horse_tend", "horse_tend", Vector(-1996.0f, 42,13971f, 3568.0f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_horse_stay2", "horse_stay", Vector(-2006,351f, 41,217f, 3562,468f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_horse_stay1", "horse_stay", Vector(-2006,351f, 41,66239f, 3564,456f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_horse_stay", "horse_stay", Vector(-1994,442f, 41,63882f, 3565,585f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_rand_idle_stand", "rand_idle_stand", Vector(-1997,602f, 43,169f, 3578,858f), Vector(0.0f, 34,43791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_lookbinocs1", "look_distance_binocs", Vector(-2006,103f, 44,906f, 3599,149f), Vector(0.0f, 181,4747f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_stand_announce", "stand_announce", Vector(-1989,706f, 48,9093f, 3595,814f), Vector(0.0f, 40,51711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1973,284f, 49,67323f, 3596,814f), Vector(0.0f, -98,72509f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_Pee", "Pee", Vector(-1988f, 42,33515f, 3580.0f), Vector(0.0f, -92,33208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_lookbinocs", "look_distance_binocs", Vector(-1994,93f, 42,25149f, 3569,405f), Vector(0.0f, -33,84345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_sleeping_scripted", "sleeping_scripted", Vector(-1997,189f, 43,14079f, 3575,614f), Vector(0.0f, 34,06158f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_throwbottle", "stand_drunk_throwbottle", Vector(-2002,435f, 43,169f, 3577,113f), Vector(0.0f, -68,14408f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_smoking_stand", "smoking_stand", Vector(-1995,996f, 44,17252f, 3584,72f), Vector(0.0f, 0,2951546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_sit_harmonica", "sit_ground_play_harmonica", Vector(-1998,269f, 43,07529f, 3575,167f), Vector(0.0f, -245,3799f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "DlR_Sit_Tend", "Sit_Ground_Campfire_Tend", Vector(-1999,387f, 43,169f, 3577,917f), Vector(0.0f, 0,6212928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_play_harmonica4", "sit_ground_play_harmonica", Vector(-1949,729f, 30,338f, 3468,748f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_play_harmonica3", "sit_ground_play_harmonica", Vector(-1944,537f, 30,174f, 3462,752f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_guntricks", "stand_guntricks_e_any", Vector(-1940,999f, 30,465f, 3466,823f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1938,157f, 40,077f, 3411,248f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_peeing4", "stand_peeing_b_any", Vector(-1938,611f, 31,35f, 3445,034f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1256), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1928,01f, 31,471f, 3470,586f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1905,697f, 37,586f, 3460,313f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1973,683f, 23,404f, 3452,104f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1966,768f, 24,473f, 3444,756f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_horse_stay3", "horse_stay", Vector(-1928,781f, 32,027f, 3459,594f), Vector(0.0f, -90,69595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_horse_stay2", "horse_stay", Vector(-1919,589f, 33,631f, 3452,771f), Vector(0.0f, -119,5589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-1945,132f, 30,25158f, 3468,703f), Vector(0.0f, -76,99028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_smoking_stand", "smoking_stand", Vector(-1944,187f, 30,25158f, 3467,699f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_sleeping_scripted", "sleeping_scripted", Vector(-1948,295f, 30,42581f, 3469,483f), Vector(0.0f, -56,70472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_lookdistance_b2", "look_distance_binocs", Vector(-1937,952f, 30,59689f, 3471,31f), Vector(0.0f, -168,9819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_lookdistance_b1", "look_distance_binocs", Vector(-1955,76f, 29,60071f, 3464,03f), Vector(0.0f, 93,37398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_look_out", "look_out_window_L", Vector(-1946,82f, 30,33619f, 3470,723f), Vector(0.0f, -173,4546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", Vector(-1944,898f, 30,25158f, 3469,718f), Vector(0.0f, -89,65778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "del_Pee", "Pee", Vector(-1949,664f, 30,068f, 3463,846f), Vector(0.0f, -239,1129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_yawning", "stand_yawning_n_any", Vector(-1910,459f, 29,215f, 2259,989f), Vector(0.0f, 47,39015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_smoking_stand2", "smoking_stand", Vector(-1915,036f, 30,291f, 2265,368f), Vector(0.0f, 91,15357f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-1927,442f, 27,087f, 2297,244f), Vector(0.0f, 532,3543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_Pee1", "Pee", Vector(-1923,613f, 27,28f, 2233,131f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1912,419f, 26,04f, 2214,9f), Vector(0.0f, 369,6023f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1887,422f, 25,50956f, 2230,188f), Vector(0.0f, 369,6023f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1889,173f, 26,06054f, 2294,459f), Vector(0.0f, 532,3543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1922,28f, 28,10736f, 2243,813f), Vector(0.0f, -151,0814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_sit_ground_smoke1", "sit_ground_smoke", Vector(-1919,767f, 28,07989f, 2245,429f), Vector(0.0f, -228,1689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_lookdistance_b1", "look_distance_binocs", Vector(-1953,821f, 26,43f, 2269,117f), Vector(0.0f, 41,80516f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_llook_distance_bin2", "look_distance_binocs", Vector(-2915,209f, 18,79024f, 2710,875f), Vector(0.0f, -240,6861f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker9", "Locked_Footlocker", Vector(-3433,135f, 23,59216f, 2500,124f), Vector(0.0f, 179,9754f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_horse_tend", "horse_tend", Vector(-3432,923f, 23,90886f, 2489,69f), Vector(0.0f, -220,4545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_horse_stay2", "horse_stay", Vector(-3430,707f, 23,75444f, 2500,938f), Vector(0.0f, 69,35268f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_horse_stay1", "horse_stay", Vector(-3429,728f, 24,09414f, 2491,26f), Vector(0.0f, -232,7364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_horse_stay", "horse_stay", Vector(-3428,362f, 24,09412f, 2495,286f), Vector(0.0f, 94,78333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_Pee", "Pee", Vector(-3433,225f, 23,594f, 2505,034f), Vector(0.0f, 35,20251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_look_distance_b1", "look_distance_binocs", Vector(-3432f, 23,59217f, 2508.0f), Vector(0.0f, -152,0119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_look_distance_b", "look_distance_binocs", Vector(-3452f, 23,09019f, 2500f), Vector(0.0f, -262,6823f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-3435,124f, 23,592f, 2497,544f), Vector(0.0f, 102,2661f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_stand_guntricks2", "stand_guntricks_e_any", Vector(-3436,929f, 23,592f, 2494,608f), Vector(0.0f, 49,04795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_stand_guntricks1", "stand_guntricks_e_any", Vector(-3437,837f, 23,592f, 2492,929f), Vector(0.0f, -182,7671f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_sleeping_wall", "sit_ground_smoke", Vector(-3446,411f, 23,09018f, 2499,819f), Vector(0.0f, -223,3851f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_smoking_stand", "smoking_stand", Vector(-3436,582f, 23,592f, 2501,046f), Vector(0.0f, 128,5334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3437,098f, 23,592f, 2502,806f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2903,393f, 19,075f, 2701,3f), Vector(0.0f, 139,7804f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_llook_distance_bin1", "look_distance_binocs", Vector(-2901,03f, 19,0745f, 2710,082f), Vector(0.0f, -187,8924f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_horse_stay3", "horse_stay", Vector(-2889,462f, 19,19097f, 2695,489f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_horse_stay2", "horse_stay", Vector(-2885,788f, 18,6661f, 2697,682f), Vector(0.0f, -132,036f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_horse_stay1", "horse_stay", Vector(-2912,183f, 18,66879f, 2715,71f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_horse_stay", "horse_stay", Vector(-2904,096f, 18,66879f, 2714,48f), Vector(0.0f, 23,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_horse_tend1", "horse_tend", Vector(-2888f, 18,6661f, 2700f), Vector(0.0f, 62,70821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_horse_tend", "horse_tend", Vector(-2908,379f, 18,66879f, 2714,691f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_stand_guntricks", "stand_guntricks_e_any", Vector(-2905,96f, 19,075f, 2702,57f), Vector(0.0f, -112,69f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_smoking_stand", "smoking_stand", Vector(-2902,563f, 19,075f, 2703,72f), Vector(0.0f, 50,53659f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2904,813f, 19,075f, 2704,292f), Vector(0.0f, -1,60452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_llook_distance_bin", "look_distance_binocs", Vector(-2899,741f, 19,0745f, 2709,509f), Vector(0.0f, -110,9011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_lPee", "Pee", Vector(-2914,146f, 19,28531f, 2652,242f), Vector(0.0f, 20,78754f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_lstand_lookdistance", "stand_lookdistance_w_any", Vector(-2910,037f, 19,07449f, 2668,611f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Odd_lean_fence", "lean_fence_L_talking", Vector(-2921,907f, 19,0543f, 2710,088f), Vector(0.0f, -405,9772f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_horse_stay", "horse_stay", Vector(-1913,693f, 28,11f, 2244,617f), Vector(0.0f, 178,051f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1878,651f, 25,90808f, 2261,477f), Vector(0.0f, 261,5796f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1938,915f, 27,18923f, 2248,859f), Vector(0.0f, 415,6428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_horse_stay3", "horse_stay", Vector(-1883,159f, 25,808f, 2255,907f), Vector(0.0f, 214,5367f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_horse_stay2", "horse_stay", Vector(-1887,953f, 25,778f, 2252,354f), Vector(0.0f, 206,2613f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_horse_stay1", "horse_stay", Vector(-1890,348f, 26,039f, 2243,639f), Vector(0.0f, 181,4791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_Pee", "Pee", Vector(-1910,703f, 29,06427f, 2265,037f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_sleepingscripted", "sleeping_wall_scripted", Vector(-1907,404f, 28,53935f, 2252,136f), Vector(0.0f, -32,20943f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_smoking_stand1", "smoking_stand", Vector(-1918,182f, 28,912f, 2255,277f), Vector(0.0f, 91,15357f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1920,754f, 28,0557f, 2248,032f), Vector(0.0f, -5,000641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_sit_ground_smoke", "sit_ground_smoke", Vector(-1922,146f, 28,07582f, 2246,551f), Vector(0.0f, -70,17099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_guntricks1", "stand_guntricks_e_any", Vector(-1889,321f, 25,69709f, 2271,382f), Vector(0.0f, -95,93178f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_stand_guntricks", "stand_guntricks_e_any", Vector(-1887,121f, 25,72222f, 2270,516f), Vector(0.0f, -235,0462f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_smoking_stand", "smoking_stand", Vector(-1894,167f, 26,3774f, 2264,46f), Vector(0.0f, -138,4957f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "han_lookdistance_b", "look_distance_binocs", Vector(-1925,775f, 30,04066f, 2265,69f), Vector(0.0f, 146,1794f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_horse_stay", "horse_stay", Vector(-1871,25f, 24,947f, 3304,927f), Vector(0.0f, -66,14877f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_horse_tend", "horse_tend", Vector(-1871,038f, 24,947f, 3306,689f), Vector(0.0f, 100,4271f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_look_distanceBin", "look_distance_binocs", Vector(-1900.0f, 24,2108f, 3300.0f), Vector(0.0f, 58,03205f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1858,272f, 25,08248f, 3308,799f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1860.0f, 24,02274f, 3292.0f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_play_harmonica2", "sit_ground_play_harmonica", Vector(-2826,924f, 20,222f, 3075,662f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_peeing3", "stand_peeing_b_any", Vector(-2839,318f, 19,804f, 3087,875f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1272), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2828,607f, 20,079f, 3076,498f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_play_harmonica1", "sit_ground_play_harmonica", Vector(-2830,344f, 20,079f, 3077,056f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2825,495f, 20,078f, 3065,822f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_guntricks2", "stand_guntricks_e_any", Vector(-2831,572f, 20,078f, 3071,561f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_smoking_stand1", "smoking_stand", Vector(-2819,144f, 20,898f, 3097,647f), Vector(0.0f, 8,869471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2860,124f, 18,071f, 3052,454f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-2839,148f, 19,074f, 3047,189f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-2816,013f, 19,074f, 3054,258f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-2794,852f, 19,075f, 3074,642f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-2807,877f, 20,397f, 3089,516f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-2877,226f, 18,9f, 3088,852f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_horse_stay3", "horse_stay", Vector(-2839,699f, 19,8962f, 3083,606f), Vector(0.0f, -92,17142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_horse_stay2", "horse_stay", Vector(-2842,107f, 20,07843f, 3077,05f), Vector(0.0f, -62,75959f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1280), 0);
	*(&iLocal_134 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_horse_stay1", "horse_stay", Vector(-2825,325f, 20,078f, 3061,285f), Vector(0.0f, 291,1736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1288), 0);
	*(&iLocal_134 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_horse_stay", "horse_stay", Vector(-2809,631f, 20,06283f, 3078,922f), Vector(0.0f, 262,5791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1296), 0);
	*(&iLocal_134 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_peeing2", "stand_peeing_b_any", Vector(-2856,467f, 18,07058f, 3083,134f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1304), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_guntricks1", "stand_guntricks_e_any", Vector(-2820,465f, 20,07843f, 3077,348f), Vector(0.0f, -216,9882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_guntricks", "stand_guntricks_e_any", Vector(-2822,097f, 20,07843f, 3079,603f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-2832,129f, 20,19984f, 3075,018f), Vector(0.0f, -91,55288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_lookdistance_binocs", "look_distance_binocs", Vector(-2810,723f, 20,06739f, 3080,786f), Vector(0.0f, -93,60166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", Vector(-2827,709f, 20,21305f, 3073,477f), Vector(0.0f, -93,82076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_lean_fence_L_talking", "lean_fence_L_talking", Vector(-2815,689f, 20,069f, 3080,324f), Vector(0.0f, -86,0629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_look_out_window_R", "look_out_window_R", Vector(-2827,741f, 20,22371f, 3077,974f), Vector(0.0f, -183,1475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-2834,184f, 20,0484f, 3078,272f), Vector(0.0f, -269,9485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2808,104f, 19,074f, 3061,17f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_lookdistance_bi", "look_distance_binocs", Vector(-1848.0f, 24,20136f, 3296.0f), Vector(0.0f, -48,03191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_riverwash", "nriverwash", Vector(-1896.0f, 20,03532f, 3278,427f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_play_harmonica", "sit_ground_play_harmonica", Vector(-1864,677f, 25,66241f, 3306,876f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_Pee", "Pee", Vector(-1866,15f, 24,92944f, 3310,094f), Vector(0.0f, -39,43715f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_swall_scripted", "sleeping_wall_scripted", Vector(-1860,336f, 24,94665f, 3308.0f), Vector(0.0f, -90,61703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_rand_idle_stand1", "rand_idle_stand", Vector(-2889,7f, 74,951f, 2179,784f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_horse_stay1", "horse_stay", Vector(-2876,946f, 63,95793f, 2208,62f), Vector(0.0f, -411,4891f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_horse_stay", "horse_stay", Vector(-2881,993f, 63,32512f, 2207,375f), Vector(0.0f, -324,5696f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_Rand_Idlewall1", "Rand_Idle_NearWall", Vector(-2832,241f, 50,06886f, 2419,76f), Vector(0.0f, -165,8873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "pleg_horse_tend", "horse_tend", Vector(-2837,17f, 50,06274f, 2419,742f), Vector(0.0f, -174,6107f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "pleg_horse_stay3", "horse_stay", Vector(-2836,022f, 50,00851f, 2422,997f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "pleg_horse_stay2", "horse_stay", Vector(-2828,464f, 49,72395f, 2428,7f), Vector(0.0f, 5,013465f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "pleg_horse_stay1", "horse_stay", Vector(-2829,578f, 50,06861f, 2422,836f), Vector(0.0f, -98,19669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "pleg_horse_stay", "horse_stay", Vector(-2828,639f, 50,00851f, 2425,449f), Vector(0.0f, -93,15823f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "pleg_stand_smoke", "smoking_stand_campfire", Vector(-2828,633f, 50,367f, 2415,569f), Vector(0.0f, 6,046f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 1312), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_lean_rail1", "stand_lookdistance_w_any", Vector(-2823,15f, 50,13624f, 2418,37f), Vector(0.0f, -133,9271f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_lean_rail", "stand_lookdistance_w_any", Vector(-2829,861f, 50,02065f, 2404,48f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "nPlHse_Pee", "Pee", Vector(-2837,53f, 49,99474f, 2417,286f), Vector(0.0f, 92,59926f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_Rand_Idlewall", "Rand_Idle_NearWall", Vector(-2835,383f, 49,87704f, 2413,798f), Vector(0.0f, 13,29576f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_Rand_Idle_Sit", "Rand_Idle_Sit_Ground", Vector(-2833,558f, 49,85797f, 2413,086f), Vector(0.0f, 20,55275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_look_distance_b", "look_distance_binocs", Vector(-2818,289f, 50,16013f, 2441,946f), Vector(0.0f, 145,3511f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "PlHse_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2803,651f, 47,61401f, 2435,472f), Vector(0.0f, 604,6125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_smoking_stand3", "smoking_stand", Vector(-2864,773f, 73,869f, 2177,522f), Vector(0.0f, -140,3333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_Pee2", "Pee", Vector(-2884,337f, 68,098f, 2196,993f), Vector(0.0f, -8,973413f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_smoking_stand2", "smoking_stand", Vector(-2889,596f, 68,07998f, 2189,904f), Vector(0.0f, -115,3605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_sleeping_wall", "sleeping_wall_scripted", Vector(-2868,646f, 69,94992f, 2190,018f), Vector(0.0f, 30,61945f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_Pee1", "Pee", Vector(-2888,585f, 74,67922f, 2179,7f), Vector(0.0f, 17,31714f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_stand_guntricks", "stand_guntricks_e_any", Vector(-2851,004f, 74,49863f, 2160,491f), Vector(0.0f, -178,8246f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "stand_yawning_n_any1", "stand_yawning_n_any", Vector(-2869,534f, 77,34993f, 2171,384f), Vector(0.0f, -446,2964f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_smoking_stand1", "smoking_stand", Vector(-2850,925f, 80,91016f, 2152,941f), Vector(0.0f, -186,2538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_stand_yawning", "stand_yawning_n_any", Vector(-2863,793f, 82,21507f, 2162,268f), Vector(0.0f, 47,39015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_smoking_stand", "smoking_stand", Vector(-2865,889f, 82,13461f, 2160,711f), Vector(0.0f, 156,7821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_Rand_Idle_Sit1", "Rand_Idle_Sit_Ground", Vector(-2866,512f, 82,24068f, 2162,827f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_lookdistance_bin1", "look_distance_binocs", Vector(-2905,05f, 63,644f, 2225,066f), Vector(0.0f, -67,55823f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_lookdistance_b", "look_distance_binocs", Vector(-2856,574f, 62,45f, 2205,337f), Vector(0.0f, -164,3135f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk__lookdistance2", "stand_lookdistance_w_any", Vector(-2848,564f, 66,814f, 2179,506f), Vector(0.0f, 203,8714f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_lookdistance1", "stand_lookdistance_w_any", Vector(-2884,276f, 68,109f, 2196,944f), Vector(0.0f, 182,2417f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RatSnk_lookdistance_bin", "look_distance_binocs", Vector(-2877,223f, 63,679f, 2212,098f), Vector(0.0f, -181,4657f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-1865,814f, 25,66671f, 3307,519f), Vector(0.0f, 87,70355f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_stand_yawning_n_any", "stand_yawning_n_any", Vector(-1865,306f, 25,66399f, 3305,107f), Vector(0.0f, 39,85841f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_use_shelf", "nuse_shelf", Vector(-1862,918f, 25,66398f, 3306,517f), Vector(0.0f, -88,87695f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_smoking_stand", "smoking_stand", Vector(-1856,748f, 24,94665f, 3306,175f), Vector(0.0f, 8,869471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_lean_fence_L_talking", "nlean_rail", Vector(-1866,671f, 25,6088f, 3300,205f), Vector(0.0f, 88,52171f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_lean_fence_L", "lean_fence_L", Vector(-1876,88f, 24,78501f, 3302,044f), Vector(0.0f, 2,954553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_lean_rail", "nlean_rail", Vector(-1862,731f, 25,68472f, 3300,49f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_Rand_Idle_Sit_G1", "Rand_Idle_Sit_Ground", Vector(-2297,463f, 17,06667f, 3189,693f), Vector(0.0f, -60,72914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_horse_stay1", "horse_stay", Vector(-2325,298f, 17,06667f, 3163,429f), Vector(0.0f, -54,787f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_horse_stay", "horse_stay", Vector(-2339,857f, 17,06667f, 3159,897f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_horse_tend4", "horse_tend", Vector(-2328,579f, 17,06667f, 3159,601f), Vector(0.0f, -12,03976f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_horse_stay3", "horse_stay", Vector(-2332,498f, 17,06667f, 3159,259f), Vector(0.0f, -183,6086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_horse_stay2", "horse_stay", Vector(-2336,508f, 17,06667f, 3159,829f), Vector(0.0f, -164,9671f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_stand_guntricks_1", "stand_guntricks_e_any", Vector(-2331,044f, 17,06667f, 3167,898f), Vector(0.0f, -91,07268f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_smoking_stand5", "smoking_stand", Vector(-2331,86f, 17,067f, 3173,427f), Vector(0.0f, -145,6339f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_earWall1", "Rand_Idle_NearWall", Vector(-2335,833f, 17,06667f, 3165,465f), Vector(0.0f, 2,348993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_rand_idle_stand", "rand_idle_stand", Vector(-2306,294f, 17,067f, 3165,18f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_Pee3", "Pee", Vector(-2284,865f, 17,47239f, 3186,339f), Vector(0.0f, -36,12689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_look_distance_bin", "look_distance_binocs", Vector(-2307,035f, 19,98892f, 3193,416f), Vector(0.0f, 213,3344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_smoking_stand4", "smoking_stand", Vector(-2296,114f, 17,06667f, 3187,239f), Vector(0.0f, 139,1357f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_Rand_Idle_Sit_G", "Rand_Idle_Sit_Ground", Vector(-2295,173f, 17,06667f, 3189,489f), Vector(0.0f, 61,58029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_stand_lookdistance_", "stand_lookdistance_w_any", Vector(-2313,974f, 18,98317f, 3139,142f), Vector(0.0f, -81,86817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "RilCrg_sleeping_wall", "sleeping_wall_scripted", Vector(-2335,925f, 17,112f, 3171,869f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_horse_tend2", "horse_tend", Vector(-1862,967f, 24,924f, 3296,038f), Vector(0.0f, 177,8756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_horse_stay1", "horse_stay", Vector(-1860.0f, 24,924f, 3296.0f), Vector(0.0f, -34,19213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_horse_stay2", "horse_stay", Vector(-1861,859f, 24,929f, 3312,894f), Vector(0.0f, -96,24462f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "LDJ_horse_tend3", "horse_tend", Vector(-1861,174f, 24,929f, 3314,454f), Vector(0.0f, 84,86111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi1", "Campfire02", Vector(-2269,801f, 17,56864f, 2484f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1320, "MP_ONLY", 1);
	*(&iLocal_134 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi2", "Campfire03", Vector(-2338.0f, 18,57689f, 2508.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi3", "Campfire04", Vector(-2389,497f, 20,58039f, 2488f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi4", "Campfire05", Vector(-2375,945f, 20,57701f, 2516,959f), Vector(0.0f, -28,58611f, 0.0f));
	*(&iLocal_134 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi5", "Campfire01", Vector(-2400.0f, 27,73763f, 2624f), Vector(0.0f, -90,08619f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1352, "MP_ONLY", 1);
	*(&iLocal_134 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi6", "Campfire02", Vector(-2397,63f, 21,08458f, 2447,949f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi7", "Campfire03", Vector(-2460,448f, 21,59076f, 2420,433f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi8", "Campfire04", Vector(-2485,235f, 22,58824f, 2348,1f), Vector(0.0f, 6,492813f, 0.0f));
	*(&iLocal_134 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi10", "Campfire01", Vector(-2563,905f, 27,10588f, 2228.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi12", "Campfire03", Vector(-2575,653f, 27,10814f, 2167,793f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi13", "Campfire01", Vector(-2578,209f, 25,09804f, 2113,374f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1400, "MP_ONLY", 1);
	*(&iLocal_134 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi14", "Campfire03", Vector(-2784f, 43,16864f, 2392.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1408, "MP_ONLY", 1);
	*(&iLocal_134 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi15", "Campfire01", Vector(-2732,012f, 39,15295f, 2479,944f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi16", "Campfire02", Vector(-2832f, 32,12549f, 2492.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi18", "Campfire03", Vector(-2852,006f, 51,20001f, 2392,037f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi19", "Campfire03_law", Vector(-2704,013f, 51,20001f, 2196,004f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi21", "Campfire02", Vector(-2944,32f, 65,25488f, 2289,136f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi23", "Campfire01_law", Vector(-2954,589f, 43,16993f, 2444,467f), Vector(0.0f, -7,673816f, 0.0f));
	*(&iLocal_134 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi24", "Campfire05", Vector(-2907,983f, 63,25003f, 2235,96f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi27", "Campfire03", Vector(-2859,865f, 27,10588f, 2529,76f), Vector(0.0f, 54,23653f, 0.0f));
	*(&iLocal_134 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi28", "Campfire04", Vector(-2984,561f, 31,33581f, 2579,961f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi29", "Campfire05", Vector(-2984f, 26,10196f, 2624f), Vector(0.0f, 8,737748f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1488, "MP_ONLY", 1);
	*(&iLocal_134 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi30", "Campfire01", Vector(-2736f, 25,09805f, 2944f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1496, "MP_ONLY", 1);
	*(&iLocal_134 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi31", "Campfire02", Vector(-2112.0f, 20,58037f, 2736.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1504, "MP_ONLY", 1);
	*(&iLocal_134 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi32", "Campfire03", Vector(-2102,618f, 17,06668f, 2357,143f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1512, "MP_ONLY", 1);
	*(&iLocal_134 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi33", "Campfire05", Vector(-2069,571f, 17,06665f, 1996.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1520, "MP_ONLY", 1);
	*(&iLocal_134 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi34", "Campfire03_law", Vector(-2235,997f, 24,0941f, 2900,474f), Vector(0.0f, -90,96239f, 0.0f));
	*(&iLocal_134 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi35", "Campfire01", Vector(-2232.0f, 14,55685f, 2832.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi36", "Campfire02", Vector(-2327,977f, 23,09019f, 3042,621f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi37", "Campfire03", Vector(-2300.0f, 16,06275f, 3080.0f), Vector(0.0f, -65,13084f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1552, "MP_ONLY", 1);
	*(&iLocal_134 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi38", "Campfire04", Vector(-2214,194f, 24,09412f, 3145,864f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi40", "Campfire01", Vector(-2416,725f, 28,1098f, 3178,042f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi41", "Campfire02", Vector(-2500.0f, 21,08235f, 3096.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi42", "Campfire03", Vector(-2544.0f, 22,08627f, 3076.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi43", "Campfire04", Vector(-1584.0f, 42,16473f, 3572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi48", "Campfire03_bad", Vector(-2033,209f, 42,16473f, 3350,193f), Vector(0.0f, -67,82351f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1600, "MP_ONLY", 1);
	*(&iLocal_134 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi49", "Campfire01", Vector(-2463,666f, 16,06274f, 2957,086f), Vector(0.0f, -87,54749f, 0.0f));
	*(&iLocal_134 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi59", "Campfire02", Vector(-3313,911f, 11,07134f, 2994,153f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi60", "Campfire03", Vector(-3168.0f, 14,0549f, 3016.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi61", "Campfire03", Vector(-2905,278f, 17,0667f, 2842,082f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi62", "Campfire04", Vector(-3109,608f, 16,06276f, 2793,519f), Vector(0.0f, -179,8667f, 0.0f));
	*(&iLocal_134 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi63", "Campfire03", Vector(-3432f, 36,64314f, 2768f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi64", "Campfire01", Vector(-2944f, 18,07059f, 2732f), Vector(0.0f, -174,7564f, 0.0f));
	*(&iLocal_134 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi65", "Campfire02", Vector(-2772f, 18,57256f, 2836f), Vector(0.0f, -87,87708f, 0.0f));
	*(&iLocal_134 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi66", "Campfire03", Vector(-2508.0f, 22,08626f, 2906,427f), Vector(0.0f, -60,85707f, 0.0f));
	*(&iLocal_134 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi67", "Campfire04", Vector(-3280f, 12,04706f, 2984f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi68", "Campfire03_bad", Vector(-2416.0f, 15,05881f, 2784f), Vector(0.0f, -21,76875f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1688, "MP_ONLY", 1);
	*(&iLocal_134 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi70", "Campfire02", Vector(-1668,919f, 30,11763f, 3035,07f), Vector(0.0f, 36,61399f, 0.0f));
	DECOR_SET_BOOL(&iLocal_134 + 1696, "MP_ONLY", 1);
	*(&iLocal_134 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi71", "Campfire03", Vector(-3460f, 17,45671f, 2676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "cs_campfire_poi72", "Campfire04", Vector(-3468f, 21,58434f, 2480f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker", "Locked_Footlocker", Vector(-2813,631f, 21,05924f, 3098,029f), Vector(0.0f, 258,3164f, 0.0f));
	*(&iLocal_134 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker1", "Locked_Footlocker", Vector(-1660f, 39,55385f, 2584.0f), Vector(0.0f, 171,0893f, 0.0f));
	*(&iLocal_134 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker2", "Locked_Footlocker", Vector(-1950,584f, 30,338f, 3469,875f), Vector(0.0f, -92,42374f, 0.0f));
	*(&iLocal_134 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker4", "Locked_Footlocker", Vector(-2604,907f, 25,09647f, 2868,141f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker5", "Locked_Footlocker", Vector(-2854,107f, 74,559f, 2158,164f), Vector(0.0f, -136,8519f, 0.0f));
	*(&iLocal_134 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker6", "Locked_Footlocker", Vector(-2821,483f, 50,244f, 2438,324f), Vector(0.0f, 319,7627f, 0.0f));
	*(&iLocal_134 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker7", "Locked_Footlocker", Vector(-2330,187f, 39,57245f, 2356,538f), Vector(0.0f, 138,4779f, 0.0f));
	*(&iLocal_134 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker8", "Locked_Footlocker", Vector(-2359,105f, 32,39352f, 3237,303f), Vector(0.0f, -95,38628f, 0.0f));
	*(&iLocal_134 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-1809,164f, 34,13332f, 2614,975f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-1872,868f, 25,09804f, 2534,356f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-1819,221f, 33,12939f, 2498,033f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-1881,43f, 27,10588f, 2354,711f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", Vector(-1776.0f, 42,16269f, 2420,654f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-1862,088f, 25,43321f, 2253,097f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", Vector(-1863,983f, 24,80974f, 2124,637f), Vector(0.0f, 111,3935f, 0.0f));
	*(&iLocal_134 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", Vector(-1953,868f, 25,73973f, 2156.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", Vector(-2076,509f, 18,07056f, 2114,895f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", Vector(-2117,773f, 17,05431f, 2306,228f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", Vector(-2062,649f, 16,06273f, 2395,693f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", Vector(-2025,139f, 16,06274f, 2494,748f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", Vector(-2186,835f, 16,56468f, 2494,746f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", Vector(-2004,895f, 19,07037f, 2663,057f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", Vector(-1888f, 26,09381f, 2740.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", Vector(-2097,638f, 16,07927f, 2757,475f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", Vector(-1936f, 26,09594f, 2816.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", Vector(-1750,301f, 29,11371f, 2951,231f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", Vector(-1713,958f, 29,11143f, 2785,685f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", Vector(-1793,629f, 32,12547f, 3028,976f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", Vector(-1599,583f, 31,12155f, 3058,855f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", Vector(-1681,41f, 30,58092f, 3150,357f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", Vector(-1986,594f, 41,1608f, 3140,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", Vector(-1953,15f, 43,16864f, 3336,652f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", Vector(-1998,062f, 38,17972f, 3299,311f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", Vector(-1649,182f, 39,15294f, 3581,322f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", Vector(-1926,915f, 32,84261f, 3450,15f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", Vector(-2208,176f, 27,10588f, 3275,162f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", Vector(-2272,921f, 21,08237f, 3141,617f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", Vector(-2304.0f, 16,06275f, 3103,27f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", Vector(-2506,098f, 20,07843f, 3029,75f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", Vector(-2267,31f, 25,62406f, 3004,974f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", Vector(-2380.0f, 15,05882f, 2916.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", Vector(-2400f, 15,05884f, 2816f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", Vector(-2386,359f, 26,56646f, 2669,375f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", Vector(-2430,064f, 28,93966f, 2539,944f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", Vector(-2446,346f, 21,06786f, 2434,44f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", Vector(-2465,73f, 22,34854f, 2327,623f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", Vector(-2564.0f, 33,12941f, 2264.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", Vector(-2484f, 24,59608f, 2124f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", Vector(-2594,33f, 31,12157f, 2228.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", Vector(-2721,778f, 48,18823f, 2246,322f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", Vector(-2821,329f, 50,19109f, 2278,865f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", Vector(-2787,912f, 45,17645f, 2364.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", Vector(-2931,98f, 42,1647f, 2445,57f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", Vector(-2725,072f, 43,66911f, 2588,745f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", Vector(-2886,282f, 24,30968f, 2586,586f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", Vector(-3057,38f, 23,59215f, 2636,545f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", Vector(-3162f, 27,03656f, 2619,981f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", Vector(-2972,393f, 18,99831f, 2724,636f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", Vector(-2931,138f, 16,5647f, 2769,227f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", Vector(-2820f, 15,04506f, 2880.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", Vector(-2677,099f, 37,0814f, 2862,823f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", Vector(-2583,262f, 24,07536f, 2836f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", Vector(-2944f, 13,05095f, 2988.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", Vector(-3025,173f, 12,04702f, 2939,328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", Vector(-2996.0f, 16,06271f, 3052.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", Vector(-2870,417f, 18,05603f, 3068.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", Vector(-2961,148f, 39,14639f, 3152.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", Vector(-3364f, 34,76507f, 2897,138f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", Vector(-3451,863f, 38,68925f, 2782,621f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", Vector(-3516,026f, 18,00411f, 2658,301f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", Vector(-3466,109f, 20,10135f, 2579,818f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", Vector(-3487,573f, 21,96187f, 2449,466f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", Vector(-3451,715f, 32,39011f, 2378,037f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", Vector(-3329,114f, 33,22234f, 2416,813f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", Vector(-3153,094f, 32,99203f, 2528,005f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", Vector(-2877,417f, 27,083f, 2542,436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", Vector(-2801,798f, 29,59754f, 2698,214f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", Vector(-2565,893f, 29,11371f, 2579,068f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", Vector(-2532.0f, 24,08308f, 2825,685f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", Vector(-2548.0f, 22,0697f, 3064.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", Vector(-2732,613f, 36,07454f, 3114,997f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", Vector(-2252,015f, 14,23525f, 2837,254f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", Vector(-2392.0f, 16,04904f, 3033,567f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", Vector(-2121,752f, 31,11604f, 3150,439f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", Vector(-2188,784f, 26,07653f, 3335,883f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", Vector(-1913,648f, 14,05918f, 3527,989f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", Vector(-1592.0f, 42,16473f, 3580.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", Vector(-1917,401f, 46,16298f, 3350,608f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", Vector(-2058,322f, 33,12001f, 3268.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", Vector(-2101,707f, 38,21952f, 3009,054f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", Vector(-2016.0f, 16,05705f, 2452.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", Vector(-1808,353f, 34,11918f, 3010,601f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", Vector(-2020,183f, 33,11653f, 2904,958f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", Vector(-1901,352f, 27,10078f, 2829,72f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", Vector(-1648,51f, 30,11284f, 3033,932f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", Vector(-1635,213f, 36,12833f, 2925,545f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", Vector(-1931,117f, 18,0657f, 2546,134f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", Vector(-2450,85f, 24,07297f, 2305,088f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", Vector(-2288f, 25,59441f, 2265,334f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", Vector(-2159,397f, 18,07059f, 2131,043f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", Vector(-2582,329f, 28,10516f, 2194,395f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", Vector(-1856f, 24,09851f, 2176,955f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", Vector(-1964,618f, 27,10588f, 2090,045f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", Vector(-1934,848f, 19,07001f, 2482,137f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", Vector(-2032,373f, 16,06274f, 2420.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", Vector(-2930,862f, 30,97843f, 2541,092f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_WildFeverFew100", "Player_Herb_WildFeverFew", Vector(-2977,802f, 23,03248f, 2678,177f), Vector(0.0f, -131,8582f, 0.0f));
	*(&iLocal_134 + 2576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage", "Player_Herb_DesertSage", Vector(-3531,307f, 22,08626f, 2392f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", Vector(-3404f, 25,59999f, 2464f), Vector(0.0f, 83,73667f, 0.0f));
	*(&iLocal_134 + 2592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-3409,871f, 35,75687f, 2366,129f), Vector(0.0f, 108,7428f, 0.0f));
	*(&iLocal_134 + 2600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", Vector(-3501,291f, 17,07282f, 2676,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-3390,313f, 22,58824f, 2533,687f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-3357,473f, 28,10983f, 2833,473f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-3185,485f, 28,44057f, 2866,027f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-3111,059f, 22,47323f, 2672f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-3313,609f, 48,9672f, 2286,391f), Vector(0.0f, -150,0233f, 0.0f));
	*(&iLocal_134 + 2648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-3439,223f, 45,05908f, 2292,257f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", Vector(-3520.0f, 18,57258f, 2592,073f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", Vector(-3377,422f, 11,94043f, 2970,384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", Vector(-3087,329f, 12,04706f, 2967,311f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", Vector(-3040f, 12,04702f, 2928f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", Vector(-3046,282f, 19,91639f, 2709,539f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage", "Player_Herb_RedSage", Vector(-2952f, 14,05487f, 3009,02f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage1", "Player_Herb_RedSage", Vector(-2703,62f, 28,74411f, 2983,983f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage2", "Player_Herb_RedSage", Vector(-2602,854f, 20,07299f, 3008f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage3", "Player_Herb_RedSage", Vector(-2461,875f, 19,07451f, 3039,008f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage4", "Player_Herb_RedSage", Vector(-2370,378f, 15,05882f, 2993,947f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage5", "Player_Herb_RedSage", Vector(-2182,813f, 33,12939f, 3067,767f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage6", "Player_Herb_RedSage", Vector(-2204,127f, 29,11371f, 2952,043f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage7", "Player_Herb_RedSage", Vector(-2496.0f, 26,09545f, 2802,195f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage8", "Player_Herb_RedSage", Vector(-2327,571f, 15,20463f, 2857,772f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage9", "Player_Herb_RedSage", Vector(-2734,011f, 30,11765f, 2873,989f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage10", "Player_Herb_RedSage", Vector(-2969,938f, 17,10321f, 2784f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage11", "Player_Herb_RedSage", Vector(-3141,563f, 11,81059f, 2959,274f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage12", "Player_Herb_RedSage", Vector(-2420.0f, 16,06274f, 3068.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage13", "Player_Herb_RedSage", Vector(-2238,543f, 25,09804f, 3101,457f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_134 + 2808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Player_Herb_RedSage14", "Player_Herb_RedSage", Vector(-2068.0f, 36,14114f, 2984f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "look_distance_binocsx", "look_distance_binocs", Vector(-2299,929f, 27,38924f, 2245,614f), Vector(0.0f, -146,725f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 2816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "treasure_hunting_1", "treasure_hunting_1", Vector(-1900,209f, 27,49931f, 2251,607f), Vector(0.0f, 79,36184f, 0.0f));
	*(&iLocal_134 + 2824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2833,042f, 50,35676f, 2415,177f), Vector(0.0f, -157,8512f, 0.0f));
	*(&iLocal_134 + 2832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "Locked_Footlocker10", "Locked_Footlocker", Vector(-2337,794f, 17,06667f, 3172,046f), Vector(0.0f, -72,43813f, 0.0f));
	DECOR_SET_INT(&iLocal_134 + 2832, "Give_AvatarItem", 4);
	*(&iLocal_134 + 2840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "player_sleep_PLE", "player_sleep_bed_R", Vector(-2833,441f, 50,332f, 2417,903f), Vector(0.0f, 103,9856f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_horse_stay4", "horse_stay", Vector(-2833,166f, 20,082f, 3098,089f), Vector(0.0f, -92,17142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_134 + 2848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_134, "mrc_horse_stay5", "horse_stay", Vector(-2832,59f, 20,078f, 3061,418f), Vector(0.0f, 291,1736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_134 + 2848), 0);
	return 1;
}

bool Function_95(struct<2>[] Param0) //Position: 0xE84F / 59471
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_99();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_98(&(Param0[iVar02]), 8);
		}
		else if (Function_97())
		{
			iVar1 = 1;
			Function_98(&(Param0[iVar02]), 8);
		}
		Function_98(&(Param0[iVar02]), 16);
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
				Function_98(&(Param0[iVar02]), 1);
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
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
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
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
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
	Function_96();
	return 1;
}

void Function_96() //Position: 0xEC11 / 60433
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

bool Function_97() //Position: 0xEC51 / 60497
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

void Function_98(struct<13> Param0) //Position: 0xEC7F / 60543
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_99() //Position: 0xEC92 / 60562
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

var Function_100(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xECD4 / 60628
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_101(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_98(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_101(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xED12 / 60690
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_98(&(Param0[iVar02]), 4);
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

void Function_102(int iParam0, int iParam1) //Position: 0xEDE1 / 60897
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

bool Function_103() //Position: 0xEE2B / 60971
{
	var uVar0;
	
	Function_102(3, 3);
	uVar0 = &uVar0;
	Function_100(&iLocal_0 + 8, "p_uti_cover2x1x", 0, 0);
	Function_100(&iLocal_0 + 8, "p_uti_cover1x1x", 0, 0);
	Function_100(&iLocal_0 + 8, "p_uti_cover1x2x", 0, 0);
	if (!Function_95(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_Graveyard", 4,203895E-45f, Vector(-2908,625f, 17,94441f, 2688,64f), Vector(0.0f, 20.0f, 0.0f), Vector(26,60202f, 7,525174f, 26,60202f));
	*(&iLocal_0 + 72) = Vector(-2434,318f, 25,34245f, 2138,649f);
	*(&iLocal_0 + 72 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 96) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "CHO_twrCampfire", Vector(-2434,318f, 25,34245f, 2138,649f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 104) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x0", "p_uti_cover2x1x", Vector(-1874,574f, 25,15615f, 3310,97f), Vector(0.0f, -55,16314f, 0.0f), 1);
	*(&iLocal_0 + 112) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x1", "p_uti_cover2x1x", Vector(-1875,562f, 24,42323f, 3298,636f), Vector(41,3482f, -94,0601f, -42,74914f), 1);
	*(&iLocal_0 + 120) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x2", "p_uti_cover2x1x", Vector(-1894,304f, 25,13744f, 3305,493f), Vector(79,69798f, -96,1249f, -80,11449f), 1);
	*(&iLocal_0 + 128) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x0", "p_uti_cover1x1x", Vector(-1893,099f, 23,6921f, 3299,567f), Vector(1,031222f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 136) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x0", "p_uti_cover1x2x", Vector(-1872,981f, 24,77232f, 3301,277f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 144) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x1", "p_uti_cover1x1x", Vector(-1889,483f, 25,20171f, 3305,896f), Vector(0,3153433f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 152) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x2", "p_uti_cover1x1x", Vector(-1870,083f, 24,25316f, 3294,455f), Vector(0,02395189f, 16,52971f, -1,150986f), 1);
	*(&iLocal_0 + 160) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x3", "p_uti_cover2x1x", Vector(-1871,17f, 24,65515f, 3297,785f), Vector(0.0f, -108,0473f, 0.0f), 1);
	*(&iLocal_0 + 168) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x4", "p_uti_cover2x1x", Vector(-1898,048f, 24,17256f, 3300,073f), Vector(-86,26497f, -92,01823f, 86,6328f), 1);
	*(&iLocal_0 + 176) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x1", "p_uti_cover1x2x", Vector(-1898,89f, 23,66671f, 3297,622f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 184) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x5", "p_uti_cover2x1x", Vector(-1868,45f, 24,91129f, 3314,147f), Vector(0.0f, -122,8839f, 0.0f), 1);
	*(&iLocal_0 + 192) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x3", "p_uti_cover1x1x", Vector(-1852,681f, 24,91608f, 3301,679f), Vector(0.0f, -30,25064f, 0.0f), 1);
	*(&iLocal_0 + 200) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x6", "p_uti_cover2x1x", Vector(-1855,119f, 24,97884f, 3301,298f), Vector(0.0f, 59,71492f, 0.0f), 1);
	*(&iLocal_0 + 208) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x7", "p_uti_cover2x1x", Vector(-1852,854f, 24,77687f, 3297,26f), Vector(-5,619742f, 57,96167f, -4,432617f), 1);
	*(&iLocal_0 + 216) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x4", "p_uti_cover1x1x", Vector(-1877,822f, 25,19737f, 3307,809f), Vector(-2,465835f, -2,881502f, -3,360986f), 1);
	*(&iLocal_0 + 224) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x8", "p_uti_cover2x1x", Vector(-1879,318f, 36,23691f, 3321,556f), Vector(173,9886f, -168,316f, -179,2431f), 1);
	*(&iLocal_0 + 232) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x5", "p_uti_cover1x1x", Vector(-1883,052f, 36,229f, 3320,932f), Vector(-11,42422f, -12,52498f, 3,229102f), 1);
	*(&iLocal_0 + 240) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x2", "p_uti_cover1x2x", Vector(-1875,51f, 36,1945f, 3322,666f), Vector(-9,240377f, -19,99353f, -0,5183975f), 1);
	*(&iLocal_0 + 248) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x9", "p_uti_cover2x1x", Vector(-1871,931f, 36,01286f, 3324,151f), Vector(167,0025f, -157,7994f, -184,747f), 1);
	*(&iLocal_0 + 256) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x10", "p_uti_cover2x1x", Vector(-1886,588f, 35,91621f, 3320,727f), Vector(162,9637f, -175,6157f, -170,9016f), 1);
	*(&iLocal_0 + 264) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x11", "p_uti_cover2x1x", Vector(-1937,624f, 27,33243f, 2260,236f), Vector(0.0f, 95,86443f, 0.0f), 1);
	*(&iLocal_0 + 272) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x12", "p_uti_cover2x1x", Vector(-1926,193f, 27,129f, 2285,985f), Vector(0.0f, 156,8953f, 0.0f), 1);
	*(&iLocal_0 + 280) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x13", "p_uti_cover2x1x", Vector(-1927,651f, 27,44351f, 2275,759f), Vector(0.0f, -28,0458f, 0.0f), 1);
	*(&iLocal_0 + 288) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x14", "p_uti_cover2x1x", Vector(-1938,835f, 27,18849f, 2252,075f), Vector(0.0f, 89,23954f, 0.0f), 1);
	*(&iLocal_0 + 296) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x3", "p_uti_cover1x2x", Vector(-1938,844f, 27,19193f, 2253,084f), Vector(-0,673139f, -0,07919134f, -0,06951825f), 1);
	*(&iLocal_0 + 304) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x6", "p_uti_cover1x1x", Vector(-1932.0f, 27,79487f, 2250,824f), Vector(0.0f, 7,039717f, 0.0f), 1);
	*(&iLocal_0 + 312) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x7", "p_uti_cover1x1x", Vector(-1930,538f, 28,08783f, 2244.0f), Vector(0.0f, 15,29191f, 0.0f), 1);
	*(&iLocal_0 + 320) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x8", "p_uti_cover1x1x", Vector(-1916,584f, 27,95595f, 2242,491f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 328) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x9", "p_uti_cover1x1x", Vector(-1928,13f, 28,11059f, 2247,87f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 336) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x15", "p_uti_cover2x1x", Vector(-1935,932f, 27,03125f, 2234,192f), Vector(0.0f, -137,268f, 0.0f), 1);
	*(&iLocal_0 + 344) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x4", "p_uti_cover1x2x", Vector(-1942,899f, 26,81865f, 2238,644f), Vector(0.0f, 47,61343f, 0.0f), 1);
	*(&iLocal_0 + 352) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x16", "p_uti_cover2x1x", Vector(-1942,899f, 26,81865f, 2238,644f), Vector(0.0f, 47,61343f, 0.0f), 1);
	*(&iLocal_0 + 360) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x17", "p_uti_cover2x1x", Vector(-1949,317f, 26,52253f, 2253,317f), Vector(0.0f, -77,24281f, 0.0f), 1);
	*(&iLocal_0 + 368) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x18", "p_uti_cover2x1x", Vector(-1952,928f, 26,29795f, 2257,751f), Vector(0.0f, -80,79298f, 0.0f), 1);
	*(&iLocal_0 + 376) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x19", "p_uti_cover2x1x", Vector(-1943,015f, 27,06477f, 2275,347f), Vector(0.0f, -62,59982f, 0.0f), 1);
	*(&iLocal_0 + 384) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x20", "p_uti_cover2x1x", Vector(-1938,285f, 27,19747f, 2280.0f), Vector(0.0f, -45,37524f, 0.0f), 1);
	*(&iLocal_0 + 392) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x21", "p_uti_cover2x1x", Vector(-1943,22f, 27,10296f, 2280,717f), Vector(-2,120075f, -50,84748f, 2,269612f), 1);
	*(&iLocal_0 + 400) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x10", "p_uti_cover1x1x", Vector(-1926,155f, 27,10197f, 2294,155f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 408) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x22", "p_uti_cover2x1x", Vector(-2831,469f, 50,00412f, 2405,231f), Vector(0.0f, 0,7156401f, 0.0f), 1);
	*(&iLocal_0 + 416) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x23", "p_uti_cover2x1x", Vector(-2793,605f, 43,169f, 2404,136f), Vector(0.0f, -50,4087f, 0.0f), 1);
	*(&iLocal_0 + 424) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x11", "p_uti_cover1x1x", Vector(-2794,258f, 43,559f, 2413,021f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 432) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x24", "p_uti_cover2x1x", Vector(-1898,208f, 25,01152f, 3304,696f), Vector(70,42919f, -97,66837f, -70,31107f), 1);
	*(&iLocal_0 + 440) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x25", "p_uti_cover2x1x", Vector(-1890,802f, 23,54468f, 3298,707f), Vector(126,1768f, -93,78294f, -126,5071f), 1);
	*(&iLocal_0 + 448) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x5", "p_uti_cover1x2x", Vector(-1897,234f, 25,1286f, 3305,447f), Vector(-0,673139f, -0,07919134f, -0,06951825f), 1);
	*(&iLocal_0 + 456) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x26", "p_uti_cover2x1x", Vector(-1881,15f, 25,86003f, 3310,732f), Vector(0.0f, -88,32053f, 0.0f), 1);
	*(&iLocal_0 + 464) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x27", "p_uti_cover2x1x", Vector(-1881,845f, 25,85751f, 3312,087f), Vector(0.0f, -114,1054f, 0.0f), 1);
	*(&iLocal_0 + 472) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x12", "p_uti_cover1x1x", Vector(-1887,29f, 25,4781f, 3307,655f), Vector(-3,769616f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 480) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x28", "p_uti_cover2x1x", Vector(-1874,386f, 25,15075f, 3312,564f), Vector(0,3631007f, -80,21103f, 0,1407903f), 1);
	*(&iLocal_0 + 488) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x6", "p_uti_cover1x2x", Vector(-1881,178f, 26,24035f, 3313,337f), Vector(-0,7079128f, -18,03272f, 0,1487029f), 1);
	*(&iLocal_0 + 496) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x29", "p_uti_cover2x1x", Vector(-1870,552f, 24,71342f, 3296,645f), Vector(-39,57664f, -71,99532f, 39,89071f), 1);
	*(&iLocal_0 + 504) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x30", "p_uti_cover2x1x", Vector(-1877,726f, 24,73512f, 3301,444f), Vector(41,3482f, -94,0601f, -42,74914f), 1);
	*(&iLocal_0 + 512) = Function_104(StackVal, StackVal, &iLocal_0, "cover2x1x31", "p_uti_cover2x1x", Vector(-1876,875f, 24,98071f, 3306,579f), Vector(-2,250155f, -91,79108f, 0,9232733f), 1);
	*(&iLocal_0 + 520) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x2x7", "p_uti_cover1x2x", Vector(-1883,164f, 24,05248f, 3299,422f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_0 + 528) = Function_104(StackVal, StackVal, &iLocal_0, "cover1x1x13", "p_uti_cover1x1x", Vector(-1883,099f, 23,85318f, 3298,402f), Vector(0.0f, 0.0f, 0.0f), 1);
	return 1;
}

var Function_104(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xFE5F / 65119
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_105(char* cParam0) //Position: 0xFE8D / 65165
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

void Function_106(int iParam0) //Position: 0xFECA / 65226
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

