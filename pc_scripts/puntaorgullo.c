//Decompiled with MagicRDR v1.0
//Function Count : 100
//Statics Count : 718
//Natives Count : 129
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
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 39;
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
	bool bLocal_707 = false;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar1;
	struct<2> Var2;
	
	iLocal_644 = 0;
	Function_99(iScriptParam_0);
	SET_DUST_LEVEL(2);
	ALLOW_TUMBLEWEEDS(1);
	Function_98("Initializing PuntaOrgullo", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_707 = 1000;
		switch (iLocal_644)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_644 = 1;
				}
				bLocal_707 = false;
				break;
			
			case 0x00000001:
				if (Function_96())
				{
					if (Function_92(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
					iLocal_644 = 2;
				}
				bLocal_707 = false;
				break;
			
			case 0x00000002:
				if (Function_83())
				{
					Function_82(&(Global_43791[iScriptParam_0]), 32);
					iLocal_644 = 3;
				}
				Function_79(&iLocal_0);
				bLocal_707 = false;
				break;
			
			case 0x00000003:
				uLocal_710 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PuntaOrgulloVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_12038, &Global_14312, iScriptParam_0);
				iLocal_644 = 5;
				bLocal_707 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_12038, &Global_14312, iScriptParam_0))
				{
					iLocal_644 = 4;
					bLocal_707 = false;
				}
				else
				{
					bLocal_707 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_43791[iScriptParam_0]), 16))
				{
					iLocal_644 = 6;
				}
				bLocal_707 = false;
				break;
			
			case 0x00000006:
				Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, &uLocal_598, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, &uLocal_598, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_68(&Global_12038, &Global_14312, &uLocal_598, &Global_10996, iScriptParam_0);
				Function_63(4, &iLocal_22 + 2296, &iLocal_22 + 792, 0, 0, 0, &iLocal_0 + 48);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "punv_player_house")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "punv_player_house"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "punv_player_house"));
				}
				else
				{
					LOG_ERROR("PUN: Cannot find punv_player_house to restrict players room");
				}
				Function_82(&(Global_43791[iScriptParam_0]), 8);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_62(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_644 = 10;
				}
				else
				{
					iLocal_644 = 7;
				}
				bLocal_707 = false;
				break;
			
			case 0x00000007:
				Function_48(iScriptParam_0);
				iLocal_644 = 8;
				bLocal_707 = false;
				break;
			
			case 0x00000008:
				Function_47(StackVal, 1, Global_46850[0], Vector(-4355,349f, 30,16f, 4384,089f));
				if (!Function_46(&Global_46850))
				{
					Function_42(3, 1.0f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_46(&Global_46850));
					Function_41(64);
					Function_37(1, 10, 6, 0, 3);
				}
				Function_82(&(Global_43791[iScriptParam_0]), 512);
				iLocal_644 = 9;
				bLocal_707 = false;
				break;
			
			case 0x00000009:
				if (!Function_46(&Global_46850))
				{
					Function_35(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 1;
				Function_82(&(Global_43791[iScriptParam_0]), 4);
				Function_34("Finished Initializing PuntaOrgullo", 5.0f);
				iLocal_644 = 10;
				bLocal_707 = false;
				iLocal_709 = 0;
				break;
			
			case 0x0000000A:
				if (!iLocal_709)
				{
					if (IS_LAYOUTREF_VALID(&Global_46715))
					{
						uVar1 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_playerHorse");
						if (IS_OBJECT_VALID(&uVar1))
						{
							Var2 = Vector(0.0f, 0.0f, 0.0f);
							GET_OBJECT_POSITION(&uVar1, &Var2);
							iLocal_709 = Function_31(StackVal, Var2, 0, 0);
							Function_30(StackVal, Var2, 1, &uLocal_714);
						}
					}
				}
				else if (!IS_GRINGO_VALID(&uLocal_714))
				{
					iLocal_709 = 0;
				}
				if (!Function_46(&Global_46850))
				{
					if (iLocal_708)
					{
						iLocal_708 = 0;
						iLocal_644 = 8;
						bLocal_707 = false;
					}
				}
				else
				{
					iLocal_708 = 1;
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_712))
					{
						uLocal_712 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_645, 62, 0);
					}
				}
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_644 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_707);
	}
	Function_22(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_11(&Global_12038, &Global_14312, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_62(&(Global_43791[iScriptParam_0]), 32);
	Function_62(&(Global_43791[iScriptParam_0]), 64);
	Function_62(&(Global_43791[iScriptParam_0]), 8);
	Function_62(&(Global_43791[iScriptParam_0]), 512);
	Function_62(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_710))
	{
		TERMINATE_SCRIPT(&uLocal_710);
	}
	Function_34("Unloaded PuntaOrgullo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5BA / 1466
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

void Function_2(int iParam0) //Position: 0x5F0 / 1520
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x612 / 1554
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x628 / 1576
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x63E / 1598
{
	Function_6(&iLocal_22 + 8);
	RELEASE_LAYOUT_REF(&iLocal_22);
	return;
}

void Function_6(int iParam0) //Position: 0x651 / 1617
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x679 / 1657
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

void Function_8(struct<13> Param0) //Position: 0x7C4 / 1988
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x7E1 / 2017
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x7FF / 2047
{
	Function_6(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x812 / 2066
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
	if (Function_76(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_62(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_76(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_76(&(Global_43791[bParam2]), 256))
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
			Function_82(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xA30 / 2608
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

int Function_13(int iParam0) //Position: 0xB96 / 2966
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

int Function_14(int iParam0) //Position: 0xBC1 / 3009
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

void Function_15(var uParam0, int iParam1) //Position: 0xBF5 / 3061
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xC06 / 3078
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC22 / 3106
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xC3C / 3132
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC59 / 3161
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(var uParam0, int iParam1) //Position: 0xC74 / 3188
{
	return (uParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xC81 / 3201
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

void Function_22(int iParam0) //Position: 0x112F / 4399
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

bool Function_23(int iParam0) //Position: 0x119A / 4506
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

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1218 / 4632
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

bool Function_25(int iParam0) //Position: 0x12C7 / 4807
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x12E2 / 4834
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

bool Function_27(bool bParam0) //Position: 0x1397 / 5015
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_76(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x13B5 / 5045
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x13C4 / 5060
{
	return &Global_21369 + 8;
}

void Function_30(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x13D0 / 5072
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
	if (bParam2)
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
	}
	else
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
	}
}

bool Function_31(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x1486 / 5254
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_33(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_32(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_32(&(uVar0[1]), "UseCase1"));
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

var Function_32(bool bParam0, int iParam1) //Position: 0x1603 / 5635
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&bParam0, &iParam1);
}

void Function_33(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1612 / 5650
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_19())
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

void Function_34(char* cParam0) //Position: 0x175C / 5980
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

void Function_35(int iParam0, bool bParam1) //Position: 0x179C / 6044
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
		Function_36(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x188C / 6284
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1899 / 6297
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

void Function_38() //Position: 0x1987 / 6535
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

int Function_39(int iParam0) //Position: 0x19D5 / 6613
{
	if (!Function_40(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_40(int iParam0) //Position: 0x19ED / 6637
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_41(bool bParam0) //Position: 0x1A02 / 6658
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_42(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1A15 / 6677
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
		Function_45();
	}
	if (&bParam5)
	{
		Function_43(1048576);
	}
}

void Function_43(int iParam0) //Position: 0x1B23 / 6947
{
	Function_44(&Global_43580, iParam0);
	return;
}

void Function_44(var uParam0, var uParam1) //Position: 0x1B31 / 6961
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_45() //Position: 0x1B50 / 6992
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_43(16384);
	}
	return;
}

bool Function_46(int[] iParam0) //Position: 0x1B6C / 7020
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

void Function_47(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1BBD / 7101
{
	if (!Function_40(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

void Function_48(int iParam0) //Position: 0x1C1E / 7198
{
	switch (Global_46720)
	{
		case 0x00000000:
			Function_61(iParam0);
			break;
		
		case 0x00000001:
			Function_61(iParam0);
			Function_56(iParam0);
			break;
		
		case 0x00000002:
			Function_56(iParam0);
			break;
		
		case 0x00000003:
			break;
	}
	if (!Global_6606)
	{
		Function_56(iParam0);
		Function_61(iParam0);
	}
	Function_52(7, 2, 0, 0, 50, 2, 0, 0, 4, iParam0, "$/content/Ambient/Roaming/event_donkey_lead", 31, 2, 185.0f, 8, 55, 0);
	Function_51(&Global_27462[752] + 188, 1, 3.0f, 112, 4294967295);
	Function_50(&Global_27462[752] + 188, -5.0f, 2);
	Function_49(&Global_27462[752] + 188);
	return;
}

void Function_49(struct<25> Param0) //Position: 0x1CEA / 7402
{
	Param0.f_24 = 1;
	return;
}

void Function_50(int iParam0, float fParam1, int iParam2) //Position: 0x1CF6 / 7414
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_51(struct<85> Param0) //Position: 0x1D0E / 7438
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1D38 / 7480
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_53(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_53(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1D7F / 7551
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
					bVar2 = Function_55(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_54(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_55(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_54(int iParam0, int iParam1) //Position: 0x213D / 8509
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2160 / 8544
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_56(int iParam0) //Position: 0x2177 / 8567
{
	Function_52(28, 2, 25, 4294967146, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_aftermath", 63, 2, 180.0f, 8, 55, 0);
	Function_51(&Global_27462[2852] + 188, 1, 9.0f, 64, 752);
	Function_60(&Global_27462[2852] + 188, 20.0f);
	Function_59(&Global_27462[2852] + 188, 5.0f);
	Function_58(&Global_27462[2852] + 188, 12.0f, 5.0f);
	Function_57(&Global_27462[2852] + 188, 0,4f, 8.0f);
	Function_50(&Global_27462[2852] + 188, -4.0f, 2);
	Function_49(&Global_27462[2852] + 188);
	return;
}

void Function_57(int iParam0, float fParam1, int iParam2) //Position: 0x224D / 8781
{
	(&iParam0 + 84)->f_52 = fParam1;
	(&iParam0 + 84)->f_56 = iParam2;
	return;
}

void Function_58(int iParam0, float fParam1, int iParam2) //Position: 0x2265 / 8805
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_48 = iParam2;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x227D / 8829
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_60(int iParam0, int iParam1) //Position: 0x228C / 8844
{
	(&iParam0 + 84)->f_20 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x229B / 8859
{
	Function_52(30, 2, 50, 4294967196, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_execution", 63, 2, 180.0f, 8, 55, 0);
	Function_51(&Global_27462[3052] + 188, 2, 5.0f, 96, 752);
	Function_60(&Global_27462[3052] + 188, 32.0f);
	Function_59(&Global_27462[3052] + 188, 5.0f);
	Function_58(&Global_27462[3052] + 188, 19,9f, 8.0f);
	Function_57(&Global_27462[3052] + 188, 0,4f, 4.0f);
	Function_50(&Global_27462[3052] + 188, 0.0f, 4);
	Function_49(&Global_27462[3052] + 188);
	return;
}

void Function_62(var uParam0, int iParam1) //Position: 0x2369 / 9065
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_63(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x2383 / 9091
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_67(&uParam1, &uParam2);
	if (!Function_66(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_65(&uParam4, 0);
		}
		else
		{
			Function_64(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_65(&iParam5, 0);
		}
		else
		{
			Function_64(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_32(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_32(&(uVar2[1]), "UseCase1"));
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

void Function_64(var uParam0, int iParam1) //Position: 0x2753 / 10067
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

void Function_65(var uParam0, int iParam1) //Position: 0x27AE / 10158
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

bool Function_66(int iParam0) //Position: 0x2806 / 10246
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_67(var uParam0, int iParam1) //Position: 0x281C / 10268
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

void Function_68(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x297A / 10618
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_76(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_69(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_62(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_82(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_69(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2A32 / 10802
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_72(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_71(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_70(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_70(int iParam0, struct<2> Param1) //Position: 0x2BB3 / 11187
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_71(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_71(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_71(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_71(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_71(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_71(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_71(vector3 vParam0) //Position: 0x2CF9 / 11513
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_72(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2D11 / 11537
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_73(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

var Function_73() //Position: 0x2E38 / 11832
{
	float fVar0;
	
	return &fVar0;
}

void Function_74(float fParam0, struct<11>[] Param1, float fParam2, struct<2> Param3, struct<2> Param5, struct<2> Param7, struct<2> Param9, struct<2> Param11, struct<2> Param13) //Position: 0x2E41 / 11841
{
	bool bVar0;
	
	bVar0 = fParam0;
	if (Function_75(StackVal, StackVal, Param3, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param3);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param5, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param7, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param7);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param9, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param9);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param11, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param11);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param13, Vector(0.0f, 0.0f, 0.0f)))
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

bool Function_75(struct<2> Param0, struct<2> Param2) //Position: 0x30F2 / 12530
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x311E / 12574
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x313B / 12603
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
	if (Function_76(&(Global_43791[iParam2]), 0x40000000))
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

void Function_78(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3224 / 12836
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
	if (!Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_82(&(Global_43791[iParam2]), 0x40000000);
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

int Function_79(var uParam0) //Position: 0x3314 / 13076
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
			bVar9 = (Function_81() && !Function_80(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_81()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
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

bool Function_80(bool bParam0, bool bParam1) //Position: 0x3473 / 13427
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_81() //Position: 0x3494 / 13460
{
	return 0;
}

void Function_82(var uParam0, int iParam1) //Position: 0x349B / 13467
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_83() //Position: 0x34AC / 13484
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire03_law", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_5", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/campfire01_law", 1, 0);
	Function_89(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_84(&iLocal_22 + 8))
	{
		return 0;
	}
	iLocal_22 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_22))
	{
		iLocal_22 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&iLocal_22 + 640) = Vector(-3568f, 10,03922f, 4690,101f);
	*(&iLocal_22 + 640 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_22 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "punf_bhint", Vector(-3568f, 10,03922f, 4690,101f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 672) = Vector(-3385,052f, 55,49248f, 4743,046f);
	*(&iLocal_22 + 672 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_22 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "punf_bhint1", Vector(-3385,052f, 55,49248f, 4743,046f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 704) = Vector(-3858,618f, 7,561752f, 4324,156f);
	*(&iLocal_22 + 704 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_22 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "punf_bhint2", Vector(-3858,618f, 7,561752f, 4324,156f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 736) = Vector(-2719,469f, 56,13536f, 4626,306f);
	*(&iLocal_22 + 736 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_22 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "punf_bhint4", Vector(-2719,469f, 56,13536f, 4626,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 768) = Vector(-3838,222f, 2,936056f, 4224,813f);
	*(&iLocal_22 + 768 + 12) = Vector(0.0f, 9,896287f, 0.0f);
	*(&iLocal_22 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_save_flag_PUC", Vector(-3838,222f, 2,936056f, 4224,813f), Vector(0.0f, 9,896287f, 0.0f));
	*(&iLocal_22 + 800) = Vector(-3361,005f, 57,105f, 4753,646f);
	*(&iLocal_22 + 800 + 12) = Vector(0.0f, 71,122f, 0.0f);
	*(&iLocal_22 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "punf_bhint5", Vector(-3361,005f, 57,105f, 4753,646f), Vector(0.0f, 71,122f, 0.0f));
	*(&iLocal_22 + 832) = Vector(-3387,089f, 56,047f, 4760,838f);
	*(&iLocal_22 + 832 + 12) = Vector(0.0f, 66,78f, 0.0f);
	*(&iLocal_22 + 856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "punf_bhint6", Vector(-3387,089f, 56,047f, 4760,838f), Vector(0.0f, 66,78f, 0.0f));
	*(&iLocal_22 + 864) = Vector(-3342,636f, 60,009f, 4761,252f);
	*(&iLocal_22 + 864 + 12) = Vector(0.0f, 80,667f, 0.0f);
	*(&iLocal_22 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "pltf_bhtreas", Vector(-3342,636f, 60,009f, 4761,252f), Vector(0.0f, 80,667f, 0.0f));
	*(&iLocal_22 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker1", "Locked_Footlocker", Vector(-3544,657f, 14,49005f, 4673,083f), Vector(0.0f, -493,7166f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 896, "scrap", true);
	*(&iLocal_22 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire07", "Campfire01", Vector(-3162,487f, 5,701304f, 4001,499f), Vector(0.0f, 170,011f, 0.0f));
	*(&iLocal_22 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire09", "Campfire05", Vector(-4024,297f, 4,000141f, 4094,753f), Vector(0.0f, 180,8559f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 912, "MP_ONLY", true);
	*(&iLocal_22 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire010", "Campfire03", Vector(-4234,257f, 12,04705f, 3993,879f), Vector(0.0f, 141,0463f, 0.0f));
	*(&iLocal_22 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire011", "Campfire01_bad", Vector(-4453,055f, 3,011759f, 3922,932f), Vector(0.0f, 184,9782f, 0.0f));
	*(&iLocal_22 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire05", "Campfire05", Vector(-4569,796f, 3,011755f, 3990,204f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 936, "MP_ONLY", true);
	*(&iLocal_22 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire013", "Campfire03_bad", Vector(-4426,577f, 2,007832f, 4030,568f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire016", "Campfire05", Vector(-4011,23f, 27,1059f, 4608,542f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 952, "MP_ONLY", true);
	*(&iLocal_22 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire017", "Campfire04", Vector(-4298,417f, 20,33175f, 4887,738f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 960, "MP_ONLY", true);
	*(&iLocal_22 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire018", "Campfire02", Vector(-4463,917f, 18,89766f, 4799,959f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire019", "Campfire05", Vector(-4859,982f, 71,27844f, 4734,235f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 976, "MP_ONLY", true);
	*(&iLocal_22 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire021", "Campfire03_law", Vector(-4420,074f, 17,06668f, 4707,93f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire03", "Campfire01_bad", Vector(-4602,909f, 34,13333f, 4676,658f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire023", "Campfire03", Vector(-3106,648f, 34,13283f, 4616,734f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire024", "Campfire01_bad", Vector(-3300,361f, 39,15295f, 4631,043f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire026", "Campfire05", Vector(-4102,554f, 25,09805f, 4641,447f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire027", "Campfire03_bad", Vector(-3944f, 27,10707f, 4767,612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire031", "Campfire05", Vector(-4741,271f, 54,21176f, 4761,272f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire032", "Campfire02", Vector(-4552.0f, 17,12078f, 4744f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", Vector(-4632,535f, 11,04314f, 4158,549f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", Vector(-4426,68f, 9,035282f, 4084.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", Vector(-4493,135f, 31,7201f, 4356,126f), Vector(0.0f, 92,51361f, 0.0f));
	*(&iLocal_22 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", Vector(-4558,406f, 28,35676f, 4676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", Vector(-4805,758f, 56,31878f, 4690,146f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", Vector(-4668f, 37,131f, 4772f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", Vector(-4364,523f, 38,22166f, 4939,899f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", Vector(-4409,146f, 21,25448f, 4785,146f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", Vector(-4189,719f, 33,21698f, 4571,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", Vector(-4472,893f, 19,16406f, 4472.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", Vector(-4084f, 28,10982f, 4472.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", Vector(-4149,149f, 26,06166f, 4640,418f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", Vector(-4356,042f, 19,05772f, 4866,668f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", Vector(-3978,189f, 22,98985f, 4722,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", Vector(-3843,246f, 19,07475f, 4624,743f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", Vector(-3794,123f, 16,16675f, 4523,952f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", Vector(-3684f, 42,5381f, 4797,563f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", Vector(-4380,303f, 20,46654f, 4539,749f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", Vector(-3656,912f, 16,05293f, 4323,089f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", Vector(-4185,621f, 26,89562f, 4823,349f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", Vector(-4076,728f, 8,020976f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", Vector(-3381,186f, 41,79821f, 4516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", Vector(-3293,425f, 24,08786f, 4250,755f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", Vector(-3163,528f, 12,40064f, 4184,124f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", Vector(-3914,963f, 6,85247f, 4232,754f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", Vector(-4341,831f, 10,03922f, 3941,085f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear26", "Player_Herb_PricklyPear", Vector(-3491,775f, 39,79387f, 4621,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", Vector(-3763,327f, 11,09543f, 4268,9f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", Vector(-4177,569f, 19,92033f, 4230,45f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", Vector(-3877,123f, 7,098152f, 4314,877f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear30", "Player_Herb_PricklyPear", Vector(-4604,543f, 13,05097f, 4078,206f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear31", "Player_Herb_PricklyPear", Vector(-4189,641f, 6,694569f, 4036,434f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear33", "Player_Herb_PricklyPear", Vector(-4286,105f, 19,51563f, 4523,792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear34", "Player_Herb_PricklyPear", Vector(-3964f, 26,36402f, 4591,619f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear73", "Player_Herb_PricklyPear", Vector(-3921,737f, 10,23184f, 4457,994f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear74", "Player_Herb_PricklyPear", Vector(-3462,793f, 48,18824f, 4724.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear75", "Player_Herb_PricklyPear", Vector(-3242,406f, 52,46712f, 4662,22f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear76", "Player_Herb_PricklyPear", Vector(-3834,247f, 52,18822f, 4872,777f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear77", "Player_Herb_PricklyPear", Vector(-3600f, 21,08236f, 4282,167f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sit_Ground_Drink10", "Sit_Ground_Drink", Vector(-3566,151f, 10,03922f, 4684,807f), Vector(0.0f, 125,7517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1360), 0);
	*(&iLocal_22 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand", "rand_idle_stand", Vector(-3543,14f, 14,39135f, 4677,602f), Vector(0.0f, 104,3152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1368), 0);
	*(&iLocal_22 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sit_Ground_Drink2", "Sit_Ground_Drink", Vector(-3542,386f, 14,49005f, 4675,354f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1376), 0);
	*(&iLocal_22 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(-3542,094f, 14,49005f, 4673,319f), Vector(0.0f, 136,8575f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1384), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_rand_idle_stand2", "rand_idle_stand", Vector(-2748,117f, 46,183f, 4608,924f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_rand_idle_stand1", "rand_idle_stand", Vector(-2738,463f, 52,114f, 4605,324f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ndiab_Pee1", "Pee", Vector(-2732,317f, 55,88308f, 4602,23f), Vector(0.0f, -78,35882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2721,312f, 56,135f, 4626,071f), Vector(0.0f, -71,04374f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-2717,047f, 56,13536f, 4626,959f), Vector(0.0f, 28,81129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2719,872f, 56,14576f, 4632,723f), Vector(0.0f, -160,4651f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_Pee", "Pee", Vector(-2719,947f, 56,14061f, 4619,677f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_rand_idle_stand", "rand_idle_stand", Vector(-2732,475f, 54,799f, 4620,533f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-2719,381f, 56,136f, 4624,018f), Vector(0.0f, -86,41405f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2717,162f, 56,13536f, 4622,923f), Vector(0.0f, -199,554f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-2718,725f, 56,19336f, 4625,808f), Vector(0.0f, -49,80202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_stand", "rand_idle_stand", Vector(-2755,338f, 44,574f, 4608,967f), Vector(0.0f, 47,45972f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2747,982f, 46,58796f, 4617,084f), Vector(0.0f, -261,3201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_sit_smokediab", "sit_ground_smoke", Vector(-2750,69f, 46,5379f, 4619,904f), Vector(0.0f, -279,5391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_smoking_stand", "smoking_stand", Vector(-2713,061f, 57,17479f, 4633,203f), Vector(0.0f, -192,8825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2730,924f, 55,25158f, 4607,433f), Vector(0.0f, 70,70719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_horse_stay7", "horse_stay", Vector(-2717,415f, 46,003f, 4670,128f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_horse_stay6", "horse_stay", Vector(-2728,029f, 48,83f, 4663,372f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_horse_stay5", "horse_stay", Vector(-2744,786f, 47,842f, 4622,784f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_horse_stay", "horse_stay", Vector(-2752,478f, 45,581f, 4613,565f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_lookdistance_binocs", "look_distance_binocs", Vector(-2739,578f, 52,528f, 4609,783f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "diab_lookdistance_binocs1", "look_distance_binocs", Vector(-2723,603f, 48,057f, 4670,079f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_lookdistance_diab", "stand_lookdistance_w_any", Vector(-2711,862f, 45,174f, 4549,208f), Vector(0.0f, 183,9572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Dia_lookdistance_binocs", "look_distance_binocs", Vector(-2751,219f, 41,231f, 4569,213f), Vector(0.0f, 105,7632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sit_Ground_Only", "Sit_Ground_Only", Vector(-3544,161f, 14,49005f, 4675,211f), Vector(0.0f, -35,80775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1392), 0);
	*(&iLocal_22 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_ground_smoke10", "sit_ground_smoke", Vector(-3552,318f, 20,33336f, 4707,359f), Vector(0.0f, -96,85366f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1400), 0);
	*(&iLocal_22 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-3550,872f, 20,26141f, 4706,266f), Vector(0.0f, -184,3158f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1408), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_look_distance_binocs2", "look_distance_binocs", Vector(-3563,442f, 17,07998f, 4662,798f), Vector(0.0f, 14,69602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_horse_tend2", "horse_tend", Vector(-3569,781f, 10,02471f, 4677,918f), Vector(0.0f, -183,2637f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_horse_stay1", "horse_stay", Vector(-3567,08f, 10,039f, 4678,634f), Vector(0.0f, -38,47382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_horse_tend1", "horse_tend", Vector(-3585,365f, 10,03922f, 4692,382f), Vector(0.0f, -58,05069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_horse_stay", "horse_stay", Vector(-3582,068f, 10,16748f, 4693,933f), Vector(0.0f, -76,20228f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_horse_tend", "horse_tend", Vector(-3583,761f, 10,06808f, 4690,108f), Vector(0.0f, -61,44313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1416), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_rand_idle_stand1", "rand_idle_stand", Vector(-3546,922f, 14,49005f, 4672,127f), Vector(0.0f, 133,9157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_sleeping_scripted2", "sleeping_scripted", Vector(-3563,274f, 10,108f, 4684,026f), Vector(0.0f, -218,0335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker5", "Locked_Footlocker", Vector(-3839,084f, 2,935274f, 4227,305f), Vector(0.0f, 4,809028f, 0.0f));
	*(&iLocal_22 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_ground_smoke", "sit_ground_smoke", Vector(-3831,97f, 2,137364f, 4213,593f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1432), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_horse_stay1", "horse_stay", Vector(-3846,59f, 2,616897f, 4220.0f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_horse_stay", "horse_stay", Vector(-3842,54f, 2,837366f, 4226,175f), Vector(0.0f, -193,8496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_horse_tend", "horse_tend", Vector(-3844,865f, 2,973f, 4226,62f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_Pee", "Pee", Vector(-3850,322f, 4,144f, 4229,261f), Vector(0.0f, 102,0665f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_stand_guntrick", "stand_guntricks_e_any", Vector(-3834,501f, 2,258546f, 4216,329f), Vector(0.0f, -6,798063f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_riverwash", "nriverwash", Vector(-3831,051f, 1,483f, 4220,467f), Vector(0.0f, -57,8837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_stand_lookdistance", "stand_lookdistance_w_any", Vector(-3849,787f, 7,337f, 4240,15f), Vector(0.0f, 270,0022f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_window_R", "look_out_window_R", Vector(-3839,42f, 2,941082f, 4224,783f), Vector(0.0f, 93,35406f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3838,539f, 2,941082f, 4225,021f), Vector(0.0f, 54,31423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Pue_sit_docks", "nsit_docks", Vector(-3830,538f, 2,177495f, 4213,612f), Vector(0.0f, -135,9579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_sleeping_scripted1", "sleeping_scripted", Vector(-3551,362f, 20,431f, 4709,676f), Vector(0.0f, 13,06262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-3549,921f, 20,32929f, 4708,246f), Vector(0.0f, 69,86318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3563,03f, 18,60939f, 4708,513f), Vector(0.0f, 136,4816f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_look_distance_binocs1", "look_distance_binocs", Vector(-3549,38f, 20,22122f, 4704,918f), Vector(0.0f, 23,99923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3569,209f, 10,03922f, 4686,378f), Vector(0.0f, -62,98453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3577,605f, 9,625031f, 4667,982f), Vector(0.0f, -9,328076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_Pee", "Pee", Vector(-3551,588f, 10,68554f, 4688,082f), Vector(0.0f, -87,17547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3567,046f, 10,03922f, 4687,078f), Vector(0.0f, 13,78003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_smoking_stand", "smoking_stand", Vector(-3579,044f, 9,793329f, 4671,625f), Vector(0.0f, -319,5549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-3568,74f, 10,02699f, 4684,736f), Vector(0.0f, 230,0923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_sleeping_scripted", "sleeping_scripted", Vector(-3542,32f, 14,49005f, 4672,359f), Vector(0.0f, -126,5194f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_stand_announce", "stand_announce", Vector(-3558,897f, 17,39976f, 4661,43f), Vector(0.0f, -179,4728f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3565,633f, 16,92693f, 4663,674f), Vector(0.0f, -11,63906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sid_look_distance_binocs", "look_distance_binocs", Vector(-3555,776f, 18,28032f, 4658,035f), Vector(0.0f, 51,24591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear78", "Player_Herb_PricklyPear", Vector(-3590,427f, 24,09413f, 4297,574f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear79", "Player_Herb_PricklyPear", Vector(-4140,784f, 30,07766f, 4359,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear80", "Player_Herb_PricklyPear", Vector(-4727,197f, 59,61876f, 4714,125f), Vector(0.0f, -108,8801f, 0.0f));
	*(&iLocal_22 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear81", "Player_Herb_PricklyPear", Vector(-4274,932f, 20,08273f, 4767,003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker3", "Locked_Footlocker", Vector(-3341,697f, 60,06153f, 4762,584f), Vector(0.0f, 20,63023f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_horse_stay3", "horse_stay", Vector(-3374,934f, 47,48188f, 4702,021f), Vector(0.0f, -18,36461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_horse_stay2", "horse_stay", Vector(-3405,209f, 49,85294f, 4723,533f), Vector(0.0f, 97,535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_smoking_stand2", "smoking_stand", Vector(-3368,674f, 56,19841f, 4749,482f), Vector(0.0f, -337,4679f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-3359,302f, 57,98686f, 4759,069f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-3385,947f, 56,12448f, 4761,743f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_lookdistance_binocs5", "look_distance_binocs", Vector(-3364,368f, 50,58201f, 4712,998f), Vector(0.0f, 56,20469f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_lookdistance_binocs4", "look_distance_binocs", Vector(-3358,165f, 48,05708f, 4680,735f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-3386,745f, 48,04662f, 4706,654f), Vector(0.0f, 29,63346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_lookdistance_binocs3", "look_distance_binocs", Vector(-3402,552f, 51,57449f, 4734,544f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plta_stand_lookdistance", "stand_lookdistance_w_any", Vector(-3397,058f, 48,07362f, 4708,585f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "pun_smoking_stand1", "smoking_stand", Vector(-3362,111f, 56,98337f, 4750,522f), Vector(0.0f, -267,2515f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_stand1", "rand_idle_stand", Vector(-3367,398f, 55,96766f, 4740,842f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_stand_spit", "stand_spit", Vector(-3400,005f, 53,02031f, 4739,182f), Vector(0.0f, 18,25717f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_sit_ground_smoke", "sit_ground_smoke", Vector(-3376,3f, 56,40027f, 4746,254f), Vector(0.0f, 61,63646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_rand_idle_stand", "rand_idle_stand", Vector(-3408,065f, 52,341f, 4739,222f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_horse_stay1", "horse_stay", Vector(-3398,433f, 55,29071f, 4753,295f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_horse_stay", "horse_stay", Vector(-3405,549f, 53,05554f, 4742,302f), Vector(0.0f, 98,06629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-3380,9f, 55,83662f, 4741,939f), Vector(0.0f, -17,49117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3369,956f, 56,21962f, 4747,671f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_Pee", "Pee", Vector(-3390,581f, 55,248f, 4749,821f), Vector(0.0f, -166,7814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3367,293f, 56,27127f, 4747,336f), Vector(0.0f, 87,42749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_smoking_stand", "smoking_stand", Vector(-3369,253f, 56,20813f, 4743,391f), Vector(0.0f, 87,17111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3371,387f, 56,2196f, 4746,512f), Vector(0.0f, 24,36719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "plt_look_distance_binocs2", "look_distance_binocs", Vector(-3389,051f, 47,53177f, 4700,163f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear82", "Player_Herb_PricklyPear", Vector(-4501,43f, 19,14546f, 4487,654f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear72", "Player_Herb_PricklyPear", Vector(-3306,959f, 39,31733f, 4485,227f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear71", "Player_Herb_PricklyPear", Vector(-3294,075f, 6,459073f, 4080f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker", "Locked_Footlocker", Vector(-3861,684f, 6,829773f, 4317,187f), Vector(0.0f, -165,349f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3875,95f, 9,035301f, 4332,05f), Vector(0.0f, -223,8547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_sleeping1", "sleeping", Vector(-3859,652f, 7,0667f, 4320,313f), Vector(0.0f, 116,6932f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_Pee_nospawn", "Pee_nospawn", Vector(-3867,383f, 7,484222f, 4281,296f), Vector(0.0f, 425,9995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_sleeping", "sleeping", Vector(-3859,669f, 6,903308f, 4317,758f), Vector(0.0f, -131,6545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_sit_ground_smoke1", "sit_ground_smoke", Vector(-3862,264f, 6,999852f, 4319,712f), Vector(0.0f, -142,6826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3888,642f, 7,098955f, 4311,407f), Vector(0.0f, 132,3517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3872f, 8,045292f, 4285,055f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_rand_idle_stand", "rand_idle_stand", Vector(-3859,487f, 8,505493f, 4293,897f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3860f, 7,522324f, 4325,883f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_stay2", "horse_stay", Vector(-3856,691f, 8,325266f, 4293,951f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_stay1", "horse_stay", Vector(-3854,29f, 8,783296f, 4335,07f), Vector(0.0f, 1,794803f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_stay", "horse_stay", Vector(-3856,527f, 8,618322f, 4334,046f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nCrT_Yawn2", "stand_yawning_n_any", Vector(-3839,57f, 9,503844f, 4315,619f), Vector(0.0f, 300,2774f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_tend1", "horse_tend", Vector(-3851,085f, 9,136021f, 4338,731f), Vector(0.0f, -175,3594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_rand_idle_stand1", "rand_idle_stand", Vector(-3907,57f, 8,015f, 4308,359f), Vector(0.0f, -120,7614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_look_distance_binocs1", "look_distance_binocs", Vector(-3919,962f, 8,015f, 4306,852f), Vector(0.0f, 103,8305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_tend", "horse_tend", Vector(-3852,886f, 8,974073f, 4336,7f), Vector(0.0f, -176,1855f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1512), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT__look_distance_binocs", "look_distance_binocs", Vector(-3871,676f, 9,375f, 4305,959f), Vector(0.0f, -224,6903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3857,507f, 7,871f, 4307,467f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_stay5", "horse_stay", Vector(-3847,016f, 9,325869f, 4338,026f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "CrT_horse_stay4", "horse_stay", Vector(-3848,894f, 9,203953f, 4339,044f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear35", "Player_Herb_PricklyPear", Vector(-3133,017f, 36,10571f, 4557,55f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear36", "Player_Herb_PricklyPear", Vector(-3163,875f, 37,14511f, 4557,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear37", "Player_Herb_PricklyPear", Vector(-3108f, 35,13727f, 4484,593f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear38", "Player_Herb_PricklyPear", Vector(-3116f, 34,13333f, 4440.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear39", "Player_Herb_PricklyPear", Vector(-3313,94f, 40,27979f, 4434,933f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear40", "Player_Herb_PricklyPear", Vector(-3196f, 38,14905f, 4668,886f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear41", "Player_Herb_PricklyPear", Vector(-3116f, 40,15668f, 4684.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear42", "Player_Herb_PricklyPear", Vector(-3110,445f, 35,13728f, 4660.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear43", "Player_Herb_PricklyPear", Vector(-3282,099f, 40,15684f, 4583,203f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear44", "Player_Herb_PricklyPear", Vector(-3312,71f, 38,14905f, 4667,29f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear45", "Player_Herb_PricklyPear", Vector(-3387,117f, 44,17185f, 4646,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear46", "Player_Herb_PricklyPear", Vector(-3436,896f, 22,08629f, 4417,115f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear47", "Player_Herb_PricklyPear", Vector(-3395,47f, 41,1608f, 4602,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear48", "Player_Herb_PricklyPear", Vector(-3550,464f, 6,620461f, 4570,535f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear49", "Player_Herb_PricklyPear", Vector(-3873,01f, 18,0706f, 4561,492f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear50", "Player_Herb_PricklyPear", Vector(-3860,274f, 15,07009f, 4639,726f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear51", "Player_Herb_PricklyPear", Vector(-3720,529f, 12,21378f, 4781,691f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear52", "Player_Herb_PricklyPear", Vector(-3906,22f, 27,1059f, 4755,946f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear53", "Player_Herb_PricklyPear", Vector(-4028,633f, 34,2771f, 4916.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear54", "Player_Herb_PricklyPear", Vector(-4113,239f, 33,12943f, 4933,24f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear55", "Player_Herb_PricklyPear", Vector(-4142,28f, 28,91674f, 4837,522f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear56", "Player_Herb_PricklyPear", Vector(-4157,844f, 23,29663f, 4739,758f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear57", "Player_Herb_PricklyPear", Vector(-4187,375f, 24,64962f, 4735,156f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear58", "Player_Herb_PricklyPear", Vector(-4246,079f, 23,09832f, 4833,922f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear59", "Player_Herb_PricklyPear", Vector(-4089,535f, 23,56466f, 4705,024f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear60", "Player_Herb_PricklyPear", Vector(-4042,739f, 26,21959f, 4665,643f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear61", "Player_Herb_PricklyPear", Vector(-3985,936f, 25,14525f, 4650,064f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear62", "Player_Herb_PricklyPear", Vector(-3964f, 24,09413f, 4620,622f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear63", "Player_Herb_PricklyPear", Vector(-3925,73f, 14,05492f, 4520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear64", "Player_Herb_PricklyPear", Vector(-3896f, 16,05245f, 4513,779f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear65", "Player_Herb_PricklyPear", Vector(-3902,233f, 8,031385f, 4477,767f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear66", "Player_Herb_PricklyPear", Vector(-3949,548f, 11,5296f, 4456,587f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear67", "Player_Herb_PricklyPear", Vector(-4072f, 7,012664f, 4276.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear68", "Player_Herb_PricklyPear", Vector(-4032f, 7,883675f, 4240.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear69", "Player_Herb_PricklyPear", Vector(-3908,567f, 7,907296f, 4267,709f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_PricklyPear70", "Player_Herb_PricklyPear", Vector(-3869,266f, 7,051301f, 4274,734f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", Vector(-3116,625f, 7,027439f, 4040f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", Vector(-3195,682f, 11,05647f, 4070,123f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", Vector(-3236,957f, 7,02744f, 4039,739f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", Vector(-3318,133f, 6,285552f, 4099,07f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", Vector(-3418,286f, 6,273073f, 4178,574f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", Vector(-3116,365f, 13,19427f, 4303,721f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", Vector(-3181,101f, 13,2906f, 4349,328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", Vector(-3168f, 11,53559f, 4393,568f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", Vector(-3328,261f, 39,34695f, 4431,806f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", Vector(-3372,252f, 39,11925f, 4463,432f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", Vector(-3357,001f, 24,09412f, 4357,001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", Vector(-3244.0f, 37,14493f, 4520f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", Vector(-3287,507f, 70,34961f, 4733,125f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", Vector(-3336f, 39,37475f, 4630,026f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", Vector(-3378,919f, 46,0826f, 4685,082f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", Vector(-3458,412f, 40,1588f, 4595,002f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", Vector(-3482,208f, 40,39444f, 4524,735f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", Vector(-3433,55f, 22,08629f, 4419,86f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", Vector(-3510,125f, 25,09805f, 4357,875f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", Vector(-3473,502f, 7,027458f, 4284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker2", "Locked_Footlocker", Vector(-4866,375f, 17,067f, 4107,945f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker4", "Locked_Footlocker", Vector(-3454,651f, 7,888914f, 4283,069f), Vector(0.0f, 10,23197f, 0.0f));
	*(&iLocal_22 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "treasure_hunting_5", "treasure_hunting_5", Vector(-3860,103f, 15,1966f, 4316,584f), Vector(0.0f, 184,057f, 0.0f));
	*(&iLocal_22 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire033", "Campfire01", Vector(-4542,765f, 24,39446f, 4651,873f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire034", "Campfire01", Vector(-4684.0f, 21,14939f, 4588f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire060", "Campfire02", Vector(-4040f, 4,0157f, 4105,844f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire063", "Campfire02", Vector(-4103,984f, 34,19405f, 4554,11f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire062", "Campfire02", Vector(-3896f, 7,706976f, 4212.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire061", "Campfire02", Vector(-4012f, 7,707736f, 4200.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire059", "Campfire02", Vector(-4125,93f, 8,087302f, 4234,096f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire058", "Campfire02", Vector(-4212,016f, 19,76294f, 4331,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire057", "Campfire02", Vector(-4220,016f, 19,44476f, 4403,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire056", "Campfire03", Vector(-4132,188f, 27,6606f, 4423,231f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire055", "Campfire03", Vector(-3879,919f, 7,629743f, 4212.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire054", "Campfire03", Vector(-3527,104f, 27,1059f, 4376,896f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire052", "Campfire03", Vector(-3696f, 18,0706f, 4496.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire051", "Campfire03", Vector(-3810,45f, 16,52399f, 4509,55f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire050", "Campfire03", Vector(-3678,991f, 14,46896f, 4360.0f), Vector(0.0f, 16,74681f, 0.0f));
	*(&iLocal_22 + 2112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire049", "Campfire03", Vector(-3816f, 10,15505f, 4360.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire048", "Campfire03", Vector(-3695,819f, 8,035632f, 4300,293f), Vector(0.0f, 21,46014f, 0.0f));
	*(&iLocal_22 + 2128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire047", "Campfire03", Vector(-4068f, 9,579922f, 4328.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire046", "Campfire03", Vector(-3860f, 10,03923f, 4352.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire045", "Campfire03", Vector(-4000f, 5,73634f, 4156.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire044", "Campfire01", Vector(-4276,709f, 50,41082f, 4219,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire043", "Campfire01", Vector(-4356,738f, 55,46604f, 4216,74f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire039", "Campfire01", Vector(-4308,016f, 39,29932f, 4321,996f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire038", "Campfire01", Vector(-4592,177f, 21,56481f, 4195,824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire036", "Campfire01", Vector(-4736.0f, 4,015678f, 4208.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire035", "Campfire01", Vector(-4600,016f, 14,11363f, 4399,855f), Vector(0.0f, -84,81538f, 0.0f));
	*(&iLocal_22 + 2200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire64", "Campfire01", Vector(-4207,466f, 34,63542f, 4519,471f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire02", "Campfire02", Vector(-4606,735f, 14,07416f, 4391,949f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 2208, "MP_ONLY", true);
	*(&iLocal_22 + 2216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire030", "Campfire03", Vector(-4312,595f, 27,16458f, 4155,245f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire028", "Campfire02", Vector(-3742,653f, 10,62494f, 4260.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire022", "Campfire01_law", Vector(-4549,409f, 20,07076f, 4284,618f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 2232, "MP_ONLY", true);
	*(&iLocal_22 + 2240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire020", "Campfire05", Vector(-3924,768f, 7,822199f, 4349,599f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire014", "Campfire02", Vector(-4064,623f, 6,84568f, 4248,364f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire08", "Campfire04", Vector(-3881,527f, 7,286815f, 4193,192f), Vector(0.0f, 179,5666f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 2256, "MP_ONLY", true);
	*(&iLocal_22 + 2264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire037", "Campfire01", Vector(-4728.0f, 5,019634f, 4060.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire040", "Campfire01", Vector(-4288.0f, 11,04314f, 3945,51f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire041", "Campfire01", Vector(-4233,28f, 12,14476f, 4005,51f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Campfire042", "Campfire01", Vector(-4242,38f, 15,05889f, 4057,62f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_22 + 2296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_sleep_PUC", "player_sleep_bed_R", Vector(-3837,743f, 2,943747f, 4225,485f), Vector(0.0f, -174,3147f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 2296), 1);
	return 1;
}

bool Function_84(struct<2>[] Param0) //Position: 0x9956 / 39254
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_88();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_87(&(Param0[iVar02]), 8);
		}
		else if (Function_86())
		{
			iVar1 = 1;
			Function_87(&(Param0[iVar02]), 8);
		}
		Function_87(&(Param0[iVar02]), 16);
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
				Function_87(&(Param0[iVar02]), 1);
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
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
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
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
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
	Function_85();
	return 1;
}

void Function_85() //Position: 0x9D18 / 40216
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

bool Function_86() //Position: 0x9D58 / 40280
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

void Function_87(struct<13> Param0) //Position: 0x9D86 / 40326
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_88() //Position: 0x9D99 / 40345
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

var Function_89(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x9DDB / 40411
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_90(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_87(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_90(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x9E19 / 40473
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_87(&(Param0[iVar02]), 4);
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

void Function_91(int iParam0, int iParam1) //Position: 0x9EE8 / 40680
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

bool Function_92(var uParam0, bool bParam1) //Position: 0x9F32 / 40754
{
	int iVar0;
	
	iVar0 = Function_94(uParam0);
	if (!Function_93(iVar0))
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

bool Function_93(int iParam0) //Position: 0x9F70 / 40816
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_94(int iParam0) //Position: 0x9F87 / 40839
{
	if (!Function_95(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95(int iParam0) //Position: 0x9FA1 / 40865
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_96() //Position: 0x9FB7 / 40887
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	Function_89(&iLocal_0 + 8, "p_uti_cover2x1x", 0, 0);
	Function_89(&iLocal_0 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_84(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&iLocal_0 + 48) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_playerHorse", Vector(-3829,98f, 2,74f, 4227,475f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 56) = Function_97(StackVal, StackVal, &iLocal_0, "cover2x1x0", "p_uti_cover2x1x", Vector(-3825,586f, 2,900937f, 4226,143f), Vector(0.0f, 82,24956f, 0.0f), 1);
	*(&iLocal_0 + 64) = Function_97(StackVal, StackVal, &iLocal_0, "cover2x1x1", "p_uti_cover2x1x", Vector(-3849,503f, 3,143f, 4213,479f), Vector(0.0f, 77,38024f, 0.0f), 1);
	*(&iLocal_0 + 72) = Function_97(StackVal, StackVal, &iLocal_0, "cover1x1x0", "p_uti_cover1x1x", Vector(-3850,03f, 3,715f, 4225,948f), Vector(0.0f, 16,0873f, 0.0f), 1);
	*(&iLocal_0 + 80) = Function_97(StackVal, StackVal, &iLocal_0, "cover1x1x1", "p_uti_cover1x1x", Vector(-3850,701f, 3,365f, 4220,66f), Vector(0.0f, 29,73987f, 0.0f), 1);
	return 1;
}

var Function_97(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xA18B / 41355
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_98(char* cParam0) //Position: 0xA1B9 / 41401
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

void Function_99(int iParam0) //Position: 0xA1F6 / 41462
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

