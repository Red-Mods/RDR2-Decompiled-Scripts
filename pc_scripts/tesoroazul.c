//Decompiled with MagicRDR v1.0
//Function Count : 341
//Statics Count : 1513
//Natives Count : 528
//Parameters Count : 2

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 6;
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
	var uLocal_452 = 4;
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
	var uLocal_592 = 2;
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
	int iLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 18;
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
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	int iLocal_910 = 0;
	var uLocal_911 = 0;
	bool bLocal_912 = false;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	int iLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 2;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953[4] = { 0, 0, 0, 0 };
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963[4] = { 0, 0, 0, 0 };
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973[2] = { 0, 0 };
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009[2] = { 0, 0 };
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015[2] = { 0, 0 };
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023[2] = { 0, 0 };
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
	var uLocal_1043[1] = { 0 };
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	int iLocal_1047 = 12;
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
	bool bLocal_1097 = false;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	int iLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	int iLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	int iLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	struct<4> Local_1118[4];
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
	vector3 vLocal_1152[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166[3] = { 0, 0, 0 };
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	int iLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	bool bLocal_1181 = false;
	bool bLocal_1182 = false;
	struct<2> Local_1183 = { 0, 0 } ;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	bool bLocal_1198 = false;
	int iLocal_1199 = 0;
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	bool bLocal_1209 = false;
	bool bLocal_1210 = false;
	bool bLocal_1211 = false;
	int iLocal_1212 = 0;
	bool bLocal_1213 = false;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	bool bLocal_1231 = false;
	int iLocal_1232 = 0;
	bool bLocal_1233 = false;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	int iLocal_1236 = 0;
	int iLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 12;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	int iLocal_1508 = 0;
	int iLocal_1509 = 0;
	bool bLocal_1510 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_904 = 0;
	iLocal_905 = 0;
	iLocal_920 = 0;
	iLocal_925 = 0;
	iLocal_944 = 0;
	iLocal_945 = 0;
	iLocal_1174 = 0;
	iLocal_1189 = 0;
	iLocal_1190 = 0;
	iLocal_1191 = 0;
	iLocal_1192 = 0;
	iLocal_1193 = 0;
	iLocal_1194 = 0;
	iLocal_1195 = 0;
	iLocal_1196 = 0;
	iLocal_1197 = 0;
	bLocal_1198 = false;
	iLocal_1199 = 0;
	iLocal_1200 = 0;
	iLocal_1201 = 0;
	iLocal_1202 = 0;
	iLocal_1203 = 0;
	iLocal_1204 = 0;
	iLocal_1205 = 0;
	iLocal_1206 = 0;
	iLocal_1207 = 0;
	iLocal_1208 = 0;
	bLocal_1209 = false;
	bLocal_1210 = false;
	bLocal_1211 = false;
	iLocal_1212 = 0;
	bLocal_1213 = false;
	iLocal_1214 = 0;
	iLocal_1215 = 0;
	iLocal_1216 = 0;
	iLocal_1217 = 0;
	iLocal_1218 = 0;
	iLocal_1219 = 0;
	iLocal_1232 = 0;
	bLocal_1233 = false;
	bLocal_1510 = false;
	iLocal_1236 = 0;
	SET_DUST_LEVEL(3);
	Function_340("Initializing TesoroAzul", 3);
	iVar0 = Function_339(&(Global_43791[iScriptParam_0]));
	if (iVar0 && Function_338(&Global_11988, iScriptParam_0))
	{
		if (Function_337(8))
		{
			bLocal_1510 = true;
			Function_336(8);
		}
	}
	while (!IS_EXITFLAG_SET())
	{
		iLocal_1237 = 1000;
		switch (iLocal_1236)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_1236 = 1;
				}
				iLocal_1237 = 0;
				break;
			
			case 0x00000001:
				if (Function_335())
				{
					iLocal_1236 = 2;
				}
				iLocal_1237 = 0;
				break;
			
			case 0x00000002:
				if (Function_333())
				{
					Function_332(&(Global_43791[iScriptParam_0]), 32);
					iLocal_1236 = 3;
				}
				iLocal_1237 = 0;
				break;
			
			case 0x00000003:
				uLocal_1238 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TesoroAzulVol", &iScriptParam_0, 2, 0);
				Function_331(&Global_11988, &Global_14238, iScriptParam_0);
				iLocal_1236 = 5;
				if (0 & Function_330())
				{
					uLocal_1240 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Tesoro_Azul/TesoroAzulMP", 0);
				}
				iLocal_1237 = 0;
				break;
			
			case 0x00000005:
				if (Function_329(&Global_11988, &Global_14238, iScriptParam_0))
				{
					iLocal_1236 = 4;
					iLocal_1237 = 0;
				}
				else
				{
					iLocal_1237 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_328(&(Global_43791[iScriptParam_0]), 16) && Function_327(Global_44085[iScriptParam_09]))
				{
					iLocal_1236 = 6;
				}
				iLocal_1237 = 0;
				break;
			
			case 0x00000006:
				if (!Function_328(&(Global_43791[iScriptParam_0]), 256) && Function_337(2))
				{
					Function_320(0, &uLocal_1242, &iLocal_2 + 1592);
					Function_319(0, &uLocal_1242, &iLocal_2);
					Function_311(StackVal, 1, &uLocal_1242, Vector(-3279,646f, 38,149f, 4543,188f));
					Function_319(1, &uLocal_1242, &iLocal_2);
					Function_320(2, &uLocal_1242, &iLocal_2 + 1608);
					Function_319(2, &uLocal_1242, &iLocal_2);
					Function_320(3, &uLocal_1242, &iLocal_2 + 1616);
					Function_319(3, &uLocal_1242, &iLocal_2);
					Function_320(4, &uLocal_1242, &iLocal_2 + 1624);
					Function_319(4, &uLocal_1242, &iLocal_2);
					Function_320(5, &uLocal_1242, &iLocal_2 + 1632);
					Function_319(5, &uLocal_1242, &iLocal_2);
					Function_320(6, &uLocal_1242, &iLocal_2 + 1568);
					Function_319(6, &uLocal_1242, &iLocal_2);
					Function_320(7, &uLocal_1242, &iLocal_2 + 1576);
					Function_319(7, &uLocal_1242, &iLocal_2);
					Function_320(8, &uLocal_1242, &iLocal_2 + 1584);
					Function_319(8, &uLocal_1242, &iLocal_2);
					Function_320(9, &uLocal_1242, &iLocal_2 + 1664);
					Function_319(9, &uLocal_1242, &iLocal_2);
					Function_308(&Global_11988, &Global_14238, &uLocal_1242, &Global_10996, iScriptParam_0);
				}
				else
				{
					iVar0 = 0;
					iLocal_1509 = 1;
				}
				if (Function_328(&(Global_43791[iScriptParam_0]), 256) || !Function_337(2))
				{
					iLocal_1509 = 1;
				}
				Function_332(&(Global_43791[iScriptParam_0]), 8);
				iLocal_1236 = 7;
				iLocal_1237 = 0;
				break;
			
			case 0x00000007:
				switch (Global_46720)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000003:
						break;
				}
				iLocal_1236 = 8;
				iLocal_1237 = 0;
				break;
			
			case 0x00000008:
				Function_307(64);
				Function_303(2, 4294967295, 4294967295, 0, 3);
				if (Function_302(iScriptParam_0, &Global_11988, iLocal_1509))
				{
					Function_300(0, 0,2f, 3, &iLocal_2, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_300(0, 0,2f, 3, &iLocal_2, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_300(0, 0,5f, 3, &iLocal_2, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_300(0, 0,2f, 3, &iLocal_2, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						}
				}
				Function_332(&(Global_43791[iScriptParam_0]), 512);
				iLocal_1236 = 9;
				iLocal_1237 = 0;
				break;
			
			case 0x00000009:
				Function_298(&iLocal_2, iScriptParam_0);
				Function_332(&(Global_43791[iScriptParam_0]), 4);
				Function_297("Finished Initializing TesoroAzul", 5.0f);
				iLocal_1236 = 10;
				iLocal_1237 = 0;
				if (Function_296(27, 0) || !Global_6606)
				{
					if (iVar0 && !Function_295(Global_46850[2]))
					{
						if ((!Global_6623 && !Global_6625) && !Global_6627)
						{
							iLocal_1508 = 1;
							Function_283();
						}
					}
					else
					{
						if ((Function_295(Global_46850[2]) && !Global_6623) && !Global_99146)
						{
							Function_282();
							Function_281("AA_GhostTown", 0, -1.0f, 1, 0, 0);
						}
						iVar0 = 0;
					}
				}
				Function_280(&(Global_43791[iScriptParam_0]));
				break;
			
			case 0x0000000A:
				Function_277();
				if (iVar0 && iLocal_1508)
				{
					iVar0 = Function_52(&iScriptParam_0);
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		iLocal_1237 = iLocal_1237;
		WAIT(false);
	}
	if (iVar0 && iLocal_1508)
	{
		Function_25();
		iLocal_1508 = 0;
	}
	if (bLocal_1510)
	{
		Function_24(8);
	}
	Function_22();
	SET_DUST_LEVEL(2);
	Function_12(&Global_11988, &Global_14238, iScriptParam_0, iLocal_1509);
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	Function_1(&(Global_43791[iScriptParam_0]), 32);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	Function_1(&(Global_43791[iScriptParam_0]), 8);
	Function_1(&(Global_43791[iScriptParam_0]), 512);
	Function_1(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_1240))
	{
		TERMINATE_SCRIPT(&uLocal_1240);
	}
	if (IS_SCRIPT_VALID(&uLocal_1238))
	{
		TERMINATE_SCRIPT(&uLocal_1238);
	}
	Function_297("Unloaded TesoroAzul", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x66B / 1643
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x685 / 1669
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

void Function_3(int iParam0) //Position: 0x6BB / 1723
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x6DD / 1757
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x6F3 / 1779
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x709 / 1801
{
	Function_7(&iLocal_724 + 8);
	RELEASE_LAYOUT_REF(&iLocal_724);
	return;
}

void Function_7(int iParam0) //Position: 0x71E / 1822
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_8(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(struct<2>[] Param0, int iParam1) //Position: 0x746 / 1862
{
	if (Function_10(&(Param0[iParam12]), 4))
	{
		if (Function_10(&(Param0[iParam12]), 1))
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
			Function_9(&(Param0[iParam12]), 1);
			Function_9(&(Param0[iParam12]), 2);
			Function_9(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_9(struct<13> Param0) //Position: 0x891 / 2193
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_10(struct<13> Param0) //Position: 0x8AE / 2222
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x8CC / 2252
{
	Function_7(&iLocal_2 + 8);
	RELEASE_LAYOUT_REF(&iLocal_2);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x8DF / 2271
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
	if (Function_328(&(Global_43791[bParam2]), 0x40000000))
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
	if (!Function_328(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_337(2) || Function_328(&(Global_43791[bParam2]), 256))
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
			Function_332(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xAFD / 2813
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

int Function_14(int iParam0) //Position: 0xC63 / 3171
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

int Function_15(int iParam0) //Position: 0xC8E / 3214
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

void Function_16(var uParam0, int iParam1) //Position: 0xCC2 / 3266
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xCD3 / 3283
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xCED / 3309
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xD0A / 3338
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, bool bParam1) //Position: 0xD25 / 3365
{
	return (bParam0 && bParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xD32 / 3378
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

void Function_22() //Position: 0x11E0 / 4576
{
	if (IS_OBJECTSET_VALID(&uLocal_1234))
	{
		Function_23(&uLocal_1234);
		DESTROY_OBJECTSET(&uLocal_1234);
	}
	return;
}

void Function_23(var uParam0) //Position: 0x11FE / 4606
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

void Function_24(bool bParam0) //Position: 0x124D / 4685
{
	if (Function_20(bParam0, 1) && !Function_20(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_25() //Position: 0x127A / 4730
{
	int iVar0;
	
	if (Function_51(Global_46955) == 2)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_FLEEING", true, false, 2, 0, true, false);
		}
	}
	iLocal_1189 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), false);
	Function_282();
	Function_49(1);
	Function_47(32768);
	Function_46(&bLocal_1181, 0x1000000);
	Function_46(&bLocal_1181, 0x2000000);
	Function_46(&bLocal_1181, 0x8000000);
	Function_46(&bLocal_1181, 0x4000000);
	Function_45();
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1005)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1005));
	}
	Function_44(&(Local_1118[04]));
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_LawHelping"))
	{
		Function_41();
		DECOR_REMOVE(&Global_54076, "TES_LawHelping");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_SpawnedPreacher"))
	{
		DECOR_REMOVE(&Global_54076, "TES_SpawnedPreacher");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_SpawnedProstitute"))
	{
		DECOR_REMOVE(&Global_54076, "TES_SpawnedProstitute");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_SpawnedDealer"))
	{
		DECOR_REMOVE(&Global_54076, "TES_SpawnedDealer");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_SpawnedSupplier"))
	{
		DECOR_REMOVE(&Global_54076, "TES_SpawnedSupplier");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "tes_spawnedBoss"))
	{
		DECOR_REMOVE(&Global_54076, "tes_spawnedBoss");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_BossKeepUpdating"))
	{
		DECOR_REMOVE(&Global_54076, "TES_BossKeepUpdating");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_UnlockGate"))
	{
		DECOR_REMOVE(&Global_54076, "TES_UnlockGate");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_BossDead"))
	{
		DECOR_REMOVE(&Global_54076, "TES_BossDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_churchSquadBlip1"))
	{
		DECOR_REMOVE(&Global_54076, "TES_churchSquadBlip1");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_churchSquadBlip2"))
	{
		DECOR_REMOVE(&Global_54076, "TES_churchSquadBlip2");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "tes_gateGuyReady01"))
	{
		DECOR_REMOVE(&Global_54076, "tes_gateGuyReady01");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "tes_gateGuyReady02"))
	{
		DECOR_REMOVE(&Global_54076, "tes_gateGuyReady02");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "DeputyReleased"))
	{
		DECOR_REMOVE(&Global_54076, "DeputyReleased");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_BossDead01"))
	{
		DECOR_REMOVE(&Global_54076, "TES_BossDead01");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SpawnedOnLeft"))
	{
		DECOR_REMOVE(&Global_54076, "SpawnedOnLeft");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SpawnedOnRight"))
	{
		DECOR_REMOVE(&Global_54076, "SpawnedOnRight");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "BossIsDead"))
	{
		DECOR_REMOVE(&Global_54076, "BossIsDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PlayerInVolume"))
	{
		DECOR_REMOVE(&Global_54076, "PlayerInVolume");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PreacherDead"))
	{
		DECOR_REMOVE(&Global_54076, "PreacherDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "DeputyDied"))
	{
		DECOR_REMOVE(&Global_54076, "DeputyDied");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "BossScriptRunning"))
	{
		DECOR_REMOVE(&Global_54076, "BossScriptRunning");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_ResetSheriffTimer"))
	{
		DECOR_REMOVE(&Global_54076, "TES_ResetSheriffTimer");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "DeputyDiedForSheriff"))
	{
		DECOR_REMOVE(&Global_54076, "DeputyDiedForSheriff");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForEnding"))
	{
		DECOR_REMOVE(&Global_54076, "ReadyForEnding");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PimpIsDead"))
	{
		DECOR_REMOVE(&Global_54076, "PimpIsDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TES_InsideHouse"))
	{
		DECOR_REMOVE(&Global_54076, "TES_InsideHouse");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "InTownWithoutSheriff"))
	{
		DECOR_REMOVE(&Global_54076, "InTownWithoutSheriff");
	}
	if (DECOR_CHECK_EXIST(&uLocal_1007, "AA_Exit"))
	{
		DECOR_REMOVE(&uLocal_1007, "AA_Exit");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SheriffNotNatural"))
	{
		DECOR_REMOVE(&Global_54076, "SheriffNotNatural");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "IntroCoverExit"))
	{
		DECOR_REMOVE(&Global_54076, "IntroCoverExit");
	}
	if (IS_VOLUME_VALID(&uLocal_1033))
	{
		DESTROY_VOLUME(&uLocal_1033);
	}
	bLocal_1181 = false;
	Function_39(&uLocal_953, 0);
	Function_39(&uLocal_973, 0);
	Function_38(&Local_1118, &vLocal_1152);
	if (IS_ACTOR_VALID(&iLocal_1005))
	{
		RELEASE_ACTOR(&iLocal_1005);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(&(Local_1118[iVar04])))
		{
			SQUAD_MAKE_EMPTY(&(Local_1118[iVar04]));
			DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&(Local_1118[iVar04])));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(&(vLocal_1152[iVar03])))
		{
			SQUAD_MAKE_EMPTY(&(vLocal_1152[iVar03]));
			DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&(vLocal_1152[iVar03])));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(&(uLocal_1023[iVar0])))
		{
			SQUAD_MAKE_EMPTY(&(uLocal_1023[iVar0]));
			DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&(uLocal_1023[iVar0])));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Function_36(&Global_11988, &Global_14238, iVar0, 0);
		iVar0++;
	}
	if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&uLocal_1175)))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_1175));
	}
	if (IS_LAYOUTREF_VALID(&uLocal_1031))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_1031);
		RELEASE_LAYOUT_REF(&uLocal_1031);
	}
	if (Function_51(Global_46955) == 2)
	{
		Function_26(Global_46955);
	}
	if (!ACTOR_HAS_WEAPON(&Global_54076, 6))
	{
		SET_WEAPONENUM_LOCKED(6, 1);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	Function_7(&iLocal_1047);
	return;
}

void Function_26(int iParam0) //Position: 0x1B47 / 6983
{
	var uVar0;
	
	if (!Function_34(iParam0))
	{
		Function_32();
		return;
	}
	uVar0 = Function_31(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_27("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x1B9A / 7066
{
	struct<4> Var0;
	
	if (!Function_34(bParam1))
	{
		return;
	}
	switch (Function_31(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_28(Function_29(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_31(bParam1), Function_29(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_31(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_31(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_31(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_31(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_31(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_28(int iParam0) //Position: 0x1CC4 / 7364
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

int Function_29(bool bParam0) //Position: 0x1CFE / 7422
{
	if (!Function_30(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_30(int iParam0) //Position: 0x1D1E / 7454
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_31(bool bParam0) //Position: 0x1D35 / 7477
{
	if (!Function_30(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_32() //Position: 0x1D50 / 7504
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
			Function_33(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_33(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1F97 / 8087
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_34(int iParam0) //Position: 0x1FC3 / 8131
{
	if (!Function_30(iParam0))
	{
		return 0;
	}
	if (!Function_35(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x1FE7 / 8167
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_36(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x1FFC / 8188
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
	Function_37(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_13(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_37(int iParam0) //Position: 0x20A4 / 8356
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

void Function_38(struct<4>[] Param0, vector3[] vParam1) //Position: 0x214D / 8525
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SQUAD_IS_VALID(&(Param0[iVar04])))
		{
			SQUAD_GOALS_CLEAR(&(Param0[iVar04]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(&(vParam1[iVar03])))
		{
			SQUAD_GOALS_CLEAR(&(vParam1[iVar03]));
		}
		iVar0++;
	}
	return;
}

void Function_39(var[] uParam0, int iParam1) //Position: 0x21A9 / 8617
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_DOOR_VALID(&(uParam0[iVar0])))
		{
			if (IS_DOOR_LOCKED(&(uParam0[iVar0])))
			{
				Function_40(&(uParam0[iVar0]), &iParam1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x21F1 / 8689
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

void Function_41() //Position: 0x2249 / 8777
{
	if (SQUAD_IS_VALID(&iLocal_910))
	{
		Function_42(&iLocal_910, 1, 0);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&iLocal_910));
	}
	return;
}

void Function_42(var uParam0, bool bParam1, bool bParam2) //Position: 0x226B / 8811
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
				if (!Function_43(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x22F4 / 8948
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &iParam5);
}

void Function_44(bool bParam0) //Position: 0x2314 / 8980
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_45() //Position: 0x2368 / 9064
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_46(int iParam0, bool bParam1) //Position: 0x237D / 9085
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_47(int iParam0) //Position: 0x2393 / 9107
{
	Function_48(&Global_43580, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x23A1 / 9121
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_49(int iParam0) //Position: 0x23C0 / 9152
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_50())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_50() //Position: 0x2400 / 9216
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

int Function_51(int iParam0) //Position: 0x2425 / 9253
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_52(int iParam0) //Position: 0x243F / 9279
{
	var uVar0;
	var uVar2;
	struct<2> Var3;
	var uVar5;
	
	if (!Function_328(&(Global_43791[iParam0]), 8))
	{
		return 0;
	}
	if (!Function_276(&uLocal_1043))
	{
		REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), false);
		Function_25();
		return 0;
	}
	switch (iLocal_1174)
	{
		case 0x00000000:
			if (Function_271(&iLocal_1047))
			{
				Function_267(&uLocal_979);
				Function_263(&uLocal_1031, &Local_1118, &uLocal_979, &vLocal_1152, &iLocal_1005, &bLocal_1181);
				Function_262(&uLocal_979);
				Function_261(&uLocal_1031, &uLocal_1009, &uLocal_1023);
				Function_258(&uLocal_1031, &uLocal_1041, &uLocal_1039);
				Function_257(&uLocal_979);
				uLocal_1179 = GET_GRINGO_FROM_OBJECT(&iLocal_2 + 2752);
				uLocal_1175 = LOCATE_GRINGO_OF_TYPE("sit_headinhands", &iLocal_2 + 2160, 1.0f, 1);
				if (!IS_GRINGO_VALID(&uLocal_1175))
				{
					LOG_ERROR("SheriffGringo IS INVALID");
				}
				if (!IS_GRINGO_VALID(&uLocal_1179))
				{
					LOG_ERROR("shakeHandsGringo IS INVALID");
				}
				if (Function_20(bLocal_1181, 0x40000000))
				{
					Function_256(&bLocal_1181, 2147483648);
					Function_255(&uLocal_1031, &uLocal_1007, &uLocal_1015, &uLocal_1029);
				}
				else
				{
					Function_252(&uLocal_1031, &bLocal_1181, &iLocal_1005, &vLocal_1152, &uLocal_1007, &uLocal_1015, &uLocal_1029, &uLocal_1037);
				}
				Function_251(&iLocal_2 + 2664);
				Local_1183 = Function_251(&iLocal_2 + 2664);
				uLocal_1021 = GET_ACTORS_HORSE(&Global_54076);
				TASK_STAND_STILL(&uLocal_1021, -1.0f, 0, 0);
				Function_251(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
				uLocal_1186 = Function_251(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
				uLocal_1035 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_CheckPlayerHorse");
				iLocal_1174 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_VOLUME_VALID(&iLocal_2 + 472))
			{
				DELETE_PROJECTILES_IN_VOLUME(&iLocal_2 + 472);
				FIRE_STOP_FLAMES_IN_VOLUME(&iLocal_2 + 472);
			}
			if (!iLocal_1217)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "TES_InsideHouse") || DECOR_CHECK_EXIST(&Global_54076, "BossScriptRunning"))
				{
					if (IS_VOLUME_VALID(&iLocal_2 + 472))
					{
						DESTROY_VOLUME(&iLocal_2 + 472);
					}
					SET_ACTOR_INVULNERABILITY(&uLocal_1007, false);
					iLocal_1217 = 1;
				}
			}
			if (!iLocal_1218)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 336) && !DECOR_CHECK_EXIST(&Global_54076, "BossScriptRunning"))
				{
					Function_40(&(uLocal_973[0]), 0);
					Function_40(&(uLocal_973[1]), 0);
					iLocal_1218 = 1;
					iLocal_1219 = 0;
				}
			}
			if (!iLocal_1219)
			{
				if ((iLocal_1218 && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 336)) && !DECOR_CHECK_EXIST(&Global_54076, "BossScriptRunning"))
				{
					Function_250(&(uLocal_973[0]), 0);
					Function_250(&(uLocal_973[1]), 0);
					iLocal_1218 = 0;
					iLocal_1219 = 1;
				}
			}
			if (!Function_20(bLocal_1181, 0x40000000))
			{
				if (!iLocal_1206)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 456))
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_249("tes_SheriffObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_SheriffObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
						if (!Function_51(Global_46955) != 2)
						{
							Function_248(Global_46955, 1);
							Global_6628 = 1;
							SET_PLAYER_ENDLESS_READYMODE(0, 1);
						}
						iLocal_1206 = 1;
					}
				}
			}
			else if (!iLocal_1206)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 456))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_249("tes_MainObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_SheriffObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
					Function_247(&(Local_1118[04]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					if (!Function_51(Global_46955) != 2)
					{
						Function_248(Global_46955, 1);
						Global_6628 = 1;
					}
					if (IS_ACTOR_VALID(&(uLocal_1009[0])))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_1009[0]))))
						{
							ADD_BLIP_FOR_ACTOR(&(uLocal_1009[0]), 322, 0, 2, 0);
						}
					}
					if (IS_ACTOR_VALID(&(uLocal_1009[1])))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_1009[1]))))
						{
							ADD_BLIP_FOR_ACTOR(&(uLocal_1009[1]), 322, 0, 2, 0);
						}
					}
					iLocal_1206 = 1;
				}
			}
			Function_245("sc_challenge_aa_06", &iLocal_1102);
			Function_244(&Local_1118, &uLocal_1023);
			if (DECOR_CHECK_EXIST(&Global_54076, "BossIsDead") && !iLocal_1204)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1005)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1005));
					iLocal_1204 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 168) && !iLocal_1202)
			{
				Function_243(&(Local_1118[04]), -1.0f);
				Function_243(&(uLocal_1023[0]), -1.0f);
				Function_247(&(uLocal_1023[0]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				if (SQUAD_GET_SIZE(&(vLocal_1152[03])) == 1)
				{
					if (SQUAD_IS_VALID(&(vLocal_1152[03])))
					{
						if (!Function_242(&(vLocal_1152[03]), 0x3f800000, 0x42960000, 1, 1))
						{
							Function_241(&(vLocal_1152[03]));
						}
					}
				}
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				Function_249("tes_mainObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_mainObj", 0, 0, false);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
				iLocal_1202 = 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 168) && !iLocal_1208)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				iLocal_1208 = 1;
			}
			if (Function_20(bLocal_1181, 0x40000000) && !iLocal_1200)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(vLocal_1152[03])) == 0)
				{
					TASK_CLEAR(&(uLocal_1009[0]));
					TASK_CLEAR(&(uLocal_1009[1]));
					Function_40(&(uLocal_953[0]), 0);
					Function_40(&(uLocal_953[1]), 0);
					OPEN_DOOR_DIRECTION(&(uLocal_953[0]), 0);
					OPEN_DOOR_DIRECTION(&(uLocal_953[1]), 1);
					if (IS_ACTOR_VALID(&(uLocal_1009[0])))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_1009[0]))))
						{
							ADD_BLIP_FOR_ACTOR(&(uLocal_1009[0]), 322, 0, 2, 0);
						}
					}
					if (IS_ACTOR_VALID(&(uLocal_1009[1])))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_1009[1]))))
						{
							ADD_BLIP_FOR_ACTOR(&(uLocal_1009[1]), 322, 0, 2, 0);
						}
					}
					uVar0 = Vector(-3220,429f, 38,204f, 4536,344f);
					SET_ACTOR_MIN_SPEED(&(uLocal_1009[0]), 2);
					SET_ACTOR_MIN_SPEED(&(uLocal_1009[1]), 2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(&(uLocal_1009[0]), &iLocal_2 + 1968, 0.0f, -1.0f);
					TASK_SHOOT_ENEMIES_FROM_POSITION(&(uLocal_1009[1]), &iLocal_2 + 2000, 0.0f, -1.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_1009[0]), &iLocal_2 + 320, 2, true);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_1009[1]), &iLocal_2 + 320, 2, true);
					iLocal_1200 = 1;
				}
			}
			if (Function_20(bLocal_1181, 0x40000000) && !iLocal_1201)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 208))
				{
					Function_243(&(Local_1118[04]), -1.0f);
					iLocal_1201 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 352) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(Local_1118[04])) != 0)
			{
				if (!Function_20(iLocal_1220, 1))
				{
					Function_256(&iLocal_1220, 1);
					iLocal_1174 = 12;
					break;
				}
			}
			if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 432) && !iLocal_1196)
			{
				Function_239(&(Local_1118[04]), 0, 0, 0);
				iLocal_1196 = 1;
				iLocal_1197 = 0;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 432) && !iLocal_1197)
			{
				Function_239(&(Local_1118[04]), 1, 1, 1);
				iLocal_1197 = 1;
				iLocal_1196 = 0;
			}
			if (!Function_20(bLocal_1181, 16384))
			{
				Function_256(&bLocal_1181, 16384);
				uLocal_1021 = GET_ACTORS_HORSE(&Global_54076);
				TASK_STAND_STILL(&uLocal_1021, -1.0f, 0, 0);
			}
			Function_238(&iLocal_1207, &uLocal_953, &(uLocal_1043[0]));
			if (Function_20(bLocal_1181, 0x40000000))
			{
				if (!iLocal_1192)
				{
					if (Function_236(&Global_54076, &(vLocal_1152[03]), 1, 1, 1, 35.0f))
					{
						Function_247(&(vLocal_1152[03]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					iLocal_1192 = 1;
				}
			}
			if (!iLocal_1193)
			{
				if (SQUAD_GET_SIZE(&(vLocal_1152[03])) == 1)
				{
					if (Function_236(&Global_54076, &(vLocal_1152[03]), 1, 1, 1, 5.0f) || IS_PLAYER_TARGETTING_ACTOR(false, SQUAD_GET_ACTOR_BY_INDEX(&(vLocal_1152[03]), false), 1))
					{
						SQUAD_SET_FACTION(&(vLocal_1152[03]), 19);
						Function_235(&(vLocal_1152[03]), &Global_54076, 4);
						Function_234(&(vLocal_1152[03]), &Global_54076, 1);
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(&(vLocal_1152[03]), false), GET_COVER_LOCATION_FROM_OBJECT(&iLocal_2 + 2792), -1.0f, 5.0f);
						iLocal_1193 = 1;
						if (!Function_233(&(vLocal_1152[03]), 1))
						{
							Function_247(&(vLocal_1152[03]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (!Function_51(Global_46955) != 2)
						{
							Function_248(Global_46955, 1);
							Global_6628 = 1;
							SET_PLAYER_ENDLESS_READYMODE(0, 1);
						}
					}
				}
			}
			if (!Function_20(bLocal_1181, 0x40000000))
			{
				if (!iLocal_1203)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_1023[0])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(vLocal_1152[03])) != 0)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_282();
						Function_249("tes_MainObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_247(&(Local_1118[04]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_1097, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_1097, "tes_MainObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_1097, 0);
						Function_232(&iLocal_1005, &(Local_1118[04]));
						iLocal_1203 = 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 168) && !Function_20(bLocal_1181, 16384))
			{
				Function_256(&bLocal_1181, 16384);
				Function_40(&(uLocal_953[0]), 0);
				Function_40(&(uLocal_953[1]), 0);
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 424) && !Function_20(bLocal_1181, 1))
			{
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uLocal_979[2]), &iLocal_2 + 416, 4, 1);
				Function_256(&bLocal_1181, 1);
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 208) && !Function_20(bLocal_1181, 0x10000000))
			{
				DECOR_SET_BOOL(&Global_54076, "PlayerInVolume", true);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(Local_1118[04]), false))))
				{
					Function_247(&(Local_1118[04]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				Function_40(Function_230("tesoroAzul", "house03", 1), 0);
				Function_256(&bLocal_1181, 0x10000000);
			}
			Function_229();
			if (Function_227(&uLocal_1098, &uLocal_963, &Local_1118) && !iLocal_1190)
			{
				iLocal_1190 = 1;
				Function_226(&(Local_1118[14]), 1, 1);
				Function_225(&(Local_1118[14]), &iLocal_2 + 176, 1, 2);
				Function_223(&(Local_1118[14]));
			}
			if ((!Function_20(bLocal_1181, 0x40000000) && !Function_20(bLocal_1181, 2147483648)) && DECOR_CHECK_EXIST(&Global_54076, "Trigger_TES_Intro"))
			{
				DECOR_REMOVE(&Global_54076, "Trigger_TES_Intro");
				uVar2 = GET_ACTORS_HORSE(&Global_54076);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar2, &uLocal_1035))
					{
						TELEPORT_ACTOR(&uVar2, &uLocal_1186, 1, 1, 1);
					}
				}
				iLocal_1174 = 7;
				break;
			}
			if (!DECOR_CHECK_EXIST(&Global_54076, "TES_churchSquadBlip1"))
			{
				Function_222(&Local_1118);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(Local_1118[04])) < 2)
			{
				DECOR_SET_BOOL(&Global_54076, "TES_churchSquadBlip1", true);
			}
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(Local_1118[04])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(Local_1118[14])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(vLocal_1152[03])) != 0) && DECOR_CHECK_EXIST(&Global_54076, "PreacherDead"))
			{
				DECOR_SET_BOOL(&Global_54076, "ReadyForEnding", true);
				if (!Function_20(bLocal_1181, 64))
				{
					Function_40(Function_230("tesoroAzul", "House01", 1), 0);
					Function_40(Function_230("tesoroAzul", "House01", 2), 0);
					Function_256(&bLocal_1181, 64);
				}
				if (!Function_20(bLocal_1181, 0x20000000))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_249("tes_deputyObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_1097, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(bLocal_1097, "tes_deputyObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(bLocal_1097, 0);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_221(&iLocal_1110);
					Function_219(&iLocal_1110);
					Function_256(&bLocal_1181, 0x20000000);
				}
			}
			if (!iLocal_1205)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForEnding"))
				{
					if (Function_218(&iLocal_1110))
					{
						if (Function_216(&iLocal_1110) < 5.0f)
						{
							Function_215();
							iLocal_1205 = 1;
						}
					}
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1029) == 0)
			{
				if (!Function_20(bLocal_1181, 128))
				{
					Function_256(&bLocal_1181, 128);
					DECOR_SET_BOOL(&Global_54076, "DeputyDiedForSheriff", true);
				}
			}
			if (Function_210(&bLocal_1181, &uLocal_1007, &uLocal_1031, &bLocal_1198, &iLocal_1199, &iLocal_1005, &uLocal_1179))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_1007)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_1007));
				}
				if (!iLocal_1195)
				{
					iLocal_1195 = 1;
					Function_209(Global_46955, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_1097, 0);
					APPEND_JOURNAL_ENTRY(bLocal_1097, 1);
					if (Function_218(&iLocal_1102))
					{
						bLocal_1182 = Function_216(&iLocal_1102);
					}
					if (Function_218(&iLocal_1102))
					{
						if (Function_208(465) < 0.0f)
						{
							if (bLocal_1182 > Function_208(465))
							{
								Function_207(465, bLocal_1182, 0);
							}
						}
						else
						{
							Function_207(465, bLocal_1182, 0);
						}
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					if (Function_206(Global_46951) > 1)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(13))
						{
							AWARD_ACHIEVEMENT(13);
						}
					}
				}
				if (IS_ACTOR_ALIVE(&uLocal_1007) && !IS_PLAYER_DEADEYE(0))
				{
					if (!DECOR_CHECK_EXIST(&Global_54076, "DeputyDied"))
					{
						if (DECOR_CHECK_EXIST(&Global_54076, "DeputyReleased"))
						{
							if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "DeputyReleased")) < 2.0f)
							{
								if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1029) == 1)
								{
									if (IS_ACTOR_ALIVE(&uLocal_1007))
									{
										if (!bLocal_1198)
										{
											if (!DECOR_CHECK_EXIST(&Global_54076, "PlayerNotVolume"))
											{
												Function_203(0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0x3f800000, 0);
												UI_PUSH("CutsceneWithMessages");
												Function_198(&uLocal_1031, 0, 1, 0, 0);
												TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&iLocal_2 + 2480), 90.0f, 0, 0, false);
												TELEPORT_ACTOR_WITH_HEADING(&(uLocal_1015[0]), *(&iLocal_2 + 2416), -85.0f, 1, 1, true);
												TELEPORT_ACTOR_WITH_HEADING(&(uLocal_1015[1]), *(&iLocal_2 + 2448), -80.0f, 1, 1, true);
												TASK_STAND_STILL(&(uLocal_1015[0]), -1.0f, 0, 0);
												TASK_STAND_STILL(&(uLocal_1015[1]), -1.0f, 0, 0);
												if (IS_ACTOR_VALID(&iLocal_1005))
												{
													DESTROY_ACTOR(&iLocal_1005);
													DECOR_SET_BOOL(&Global_54076, "SheriffNotNatural", true);
												}
												Function_221(&iLocal_1106);
												Function_219(&iLocal_1106);
												iLocal_1174 = 2;
											}
											else if (DECOR_CHECK_EXIST(&Global_54076, "PlayerNotVolume"))
											{
												if (!Function_218(&iLocal_1114))
												{
													Function_221(&iLocal_1114);
												}
												bLocal_1213 = true;
												if (IS_ACTOR_VALID(&uLocal_1007))
												{
													if (IS_ACTOR_ALIVE(&uLocal_1007))
													{
														DESTROY_ACTOR(&uLocal_1007);
														bLocal_1210 = true;
													}
												}
												iLocal_1174 = 4;
											}
										}
										else if (bLocal_1198)
										{
											if (!Function_218(&iLocal_1114))
											{
												Function_221(&iLocal_1114);
											}
											bLocal_1213 = true;
											if (IS_ACTOR_VALID(&uLocal_1007))
											{
												if (IS_ACTOR_ALIVE(&uLocal_1007))
												{
													DESTROY_ACTOR(&uLocal_1007);
													bLocal_1210 = true;
												}
											}
											iLocal_1174 = 4;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!Function_218(&iLocal_1114))
					{
						Function_221(&iLocal_1114);
					}
					bLocal_1213 = true;
					iLocal_1174 = 4;
				}
			}
			if (!Function_20(bLocal_1181, 0x40000000))
			{
				if (!Function_20(bLocal_1181, 2147483648))
				{
					if (!Function_182(&iLocal_1005, &vLocal_1152, &uLocal_953, &iLocal_1005, &uLocal_1023, &uLocal_1177, &uLocal_1179, &iLocal_1194, &uLocal_1037, &iLocal_1199))
					{
						Function_46(&bLocal_1181, 1024);
						Function_256(&bLocal_1181, 2147483648);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!bLocal_1211)
			{
				if (Function_218(&iLocal_1106))
				{
					if (Function_216(&iLocal_1106) < 10.0f)
					{
						if (IS_ACTOR_VALID(&uLocal_1007))
						{
							DESTROY_ACTOR(&uLocal_1007);
							bLocal_1210 = true;
						}
						if (IS_ACTOR_VALID(&(uLocal_1015[0])))
						{
							DESTROY_ACTOR(&(uLocal_1015[0]));
						}
						if (IS_ACTOR_VALID(&(uLocal_1015[1])))
						{
							DESTROY_ACTOR(&(uLocal_1015[1]));
						}
						PRINT_BIG("TES_PrintBig", 5f, 0, 2, 0);
						bLocal_1211 = true;
					}
				}
			}
			if (bLocal_1211)
			{
				if (!iLocal_1212)
				{
					if (Function_218(&iLocal_1106))
					{
						if (Function_216(&iLocal_1106) < 18.0f)
						{
							SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-3242,17f, 39,22358f, 4563,479f));
							SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 90.0f, 0.0f), 0);
							Function_179(2, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							Function_177(Function_178(1, 1, 1, 0, 0), 1, 1);
							if (bLocal_1210)
							{
								Function_173(200, 1, 0);
								Function_160(50, 1, 0);
							}
							else
							{
								Function_173(100, 1, 0);
							}
							if (!Function_159())
							{
								Function_157(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_157(9, 0, 1);
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_126(Global_46955);
							Function_70(Global_46955, 1, 1, 0);
							iLocal_1212 = 1;
							iLocal_1174 = 6;
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (bLocal_1213)
			{
				if (!iLocal_1214)
				{
					if (Function_218(&iLocal_1114))
					{
						if (Function_216(&iLocal_1114) < 2.0f)
						{
							if (IS_ACTOR_VALID(&iLocal_1005))
							{
								DESTROY_ACTOR(&iLocal_1005);
							}
							TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&iLocal_2 + 2480), 90.0f, 0, 0, false);
							Function_203(0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0x3f800000, 0);
							UI_PUSH("CutsceneWithMessages");
							Function_66(&uLocal_1031, 0, 1, 0, 0);
							if (Function_218(&iLocal_1114))
							{
								Function_219(&iLocal_1114);
							}
							iLocal_1214 = 1;
						}
					}
				}
			}
			if (bLocal_1213)
			{
				if (!iLocal_1215)
				{
					if (Function_218(&iLocal_1114))
					{
						if (Function_216(&iLocal_1114) < 3.0f)
						{
							if (IS_ACTOR_VALID(&(uLocal_1015[0])))
							{
								DESTROY_ACTOR(&(uLocal_1015[0]));
							}
							if (IS_ACTOR_VALID(&(uLocal_1015[1])))
							{
								DESTROY_ACTOR(&(uLocal_1015[1]));
							}
							PRINT_BIG("TES_PrintBig", 5f, 0, 2, 0);
							iLocal_1215 = 1;
						}
					}
				}
			}
			if (bLocal_1213)
			{
				if (!iLocal_1216)
				{
					if (Function_218(&iLocal_1114))
					{
						if (Function_216(&iLocal_1114) < 12.0f)
						{
							SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 90.0f, 0.0f), 0);
							Function_179(2, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							if (bLocal_1210)
							{
								Function_173(200, 1, 0);
								Function_160(50, 1, 0);
							}
							else if (!bLocal_1210)
							{
								Function_173(100, 1, 0);
							}
							Function_177(Function_178(1, 1, 1, 0, 0), 1, 1);
							if (!Function_159())
							{
								Function_157(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_157(9, 0, 1);
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_126(Global_46955);
							Function_70(Global_46955, 1, 1, 0);
							iLocal_1174 = 6;
							iLocal_1216 = 1;
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!iLocal_1189)
			{
				Function_25();
				iLocal_1189 = 1;
			}
			break;
		
		case 0x0000000C:
			Function_219(&iLocal_1221);
			uLocal_1043[0] = LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TES/event_tes_mb_Prea", 0);
			Function_256(&bLocal_1181, 2048);
			iLocal_1174 = 13;
			break;
		
		case 0x0000000D:
			if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_Preacher_Layout")))
			{
				uLocal_1225 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Preacher_Layout"), "Preacher");
				if (IS_ACTOR_VALID(&uLocal_1225))
				{
					GET_OBJECT_POSITION(&iLocal_2 + 2720, &Var3);
					GET_OBJECT_ORIENTATION(&iLocal_2 + 2720, &uVar5);
					SET_OBJECT_POSITION(&uLocal_1225, Var3);
					SET_OBJECT_ORIENTATION(&uLocal_1225, Var3);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&uLocal_1225);
					SET_WEAPONENUM_LOCKED(16, 0);
					GIVE_WEAPON_TO_ACTOR(&uLocal_1225, 16, false, 1, 1);
					ACTOR_PUT_WEAPON_IN_HAND(&uLocal_1225, 16, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uLocal_1225, 0);
					Function_219(&iLocal_1221);
					iLocal_1174 = 14;
				}
				else
				{
					iLocal_1174 = 1;
				}
			}
			break;
		
		case 0x0000000E:
			if (ACTOR_HAS_WEAPON_IN_HAND(&uLocal_1225, 16))
			{
				TASK_USE_GRINGO(&uLocal_1225, GET_GRINGO_FROM_OBJECT(&iLocal_2 + 2720), "UseCase1", true, 1);
				SAY_SINGLE_LINE_CONTEXT(&uLocal_1225, 60, 0, 1, 0, 2, 4294967295, 4294967295, 0, 1);
				iLocal_1174 = 15;
			}
			if (Function_20(bLocal_1181, 2048))
			{
				if (!IS_ACTOR_VALID(&uLocal_1225))
				{
					iLocal_1174 = 1;
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_ACTOR_VALID(&uLocal_1225))
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uLocal_1225)))
				{
					iLocal_1191 = 1;
				}
				else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uLocal_1225)) && iLocal_1191)
				{
					DECOR_SET_BOOL(&uLocal_1225, "nTriggerAI", true);
					TASK_STAND_STILL(&uLocal_1225, -1.0f, 0, 0);
					iLocal_1174 = 1;
				}
			}
			else
			{
				iLocal_1174 = 1;
			}
			break;
		
		case 0x00000007:
			if (!Function_51(Global_46955) != 2)
			{
				Function_248(Global_46955, 1);
				Global_6628 = 1;
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
			}
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_203(0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0x3f800000, 0);
			uLocal_1227 = Function_62(&uLocal_1031, 0, 1, 0, 0);
			Function_61(&vLocal_1152);
			uLocal_1229 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_1031, Function_60(), 4,203895E-45f, Vector(-3218,79f, 37,14f, 4534,36f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1229);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1229);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_1229, 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uLocal_1229);
			bLocal_1231 = GET_WEAPON_IN_HAND(&Global_54076);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
			Function_58(&Global_54076, 0);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1183, 60,751f, 0, 0, false);
			SET_PLAYER_POSTURE(0, 1, 0);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "AA_tesoro_intro_cover", 0);
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "AA_tesoro_intro_cover/Player/Ply_Pre");
			Function_219(&iLocal_1221);
			iLocal_1174 = 8;
			break;
		
		case 0x00000008:
			if (Function_218(&iLocal_1221))
			{
				if (Function_216(&iLocal_1221) < 0,5f)
				{
					Function_56();
					SET_FORCED_LOOK_ENABLE(&Global_54076, 0);
					SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
					iLocal_1174 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_218(&iLocal_1221))
			{
				if (Function_216(&iLocal_1221) <= 2.0f)
				{
					Function_243(&(Local_1118[04]), -1.0f);
					Function_256(&bLocal_1181, 524288);
					Function_219(&iLocal_1221);
					iLocal_1174 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_218(&iLocal_1221))
			{
				if (Function_216(&iLocal_1221) <= 6.0f)
				{
					Function_55(&vLocal_1152);
					TASK_CLEAR(&(uLocal_1009[0]));
					TASK_CLEAR(&(uLocal_1009[1]));
					Function_40(&(uLocal_953[0]), 0);
					Function_40(&(uLocal_953[1]), 0);
					OPEN_DOOR_DIRECTION(&(uLocal_953[0]), 0);
					OPEN_DOOR_DIRECTION(&(uLocal_953[1]), 1);
					if (IS_ACTOR_VALID(&(uLocal_1009[0])))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_1009[0]))))
						{
							ADD_BLIP_FOR_ACTOR(&(uLocal_1009[0]), 322, 0, 2, 0);
						}
					}
					if (IS_ACTOR_VALID(&(uLocal_1009[1])))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_1009[1]))))
						{
							ADD_BLIP_FOR_ACTOR(&(uLocal_1009[1]), 322, 0, 2, 0);
						}
					}
					SET_ACTOR_MIN_SPEED(&(uLocal_1009[0]), 2);
					SET_ACTOR_MIN_SPEED(&(uLocal_1009[1]), 2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(&(uLocal_1009[0]), &iLocal_2 + 1968, -34.0f, -1.0f);
					TASK_SHOOT_ENEMIES_FROM_POSITION(&(uLocal_1009[1]), &iLocal_2 + 2000, -30.0f, -1.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_1009[0]), &iLocal_2 + 320, 2, true);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_1009[1]), &iLocal_2 + 320, 2, true);
					DECOR_SET_BOOL(&iLocal_1005, "IntroCoverExit", true);
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1183, 60,751f, 0, 0, false);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1229);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1229);
					DESTROY_VOLUME(&uLocal_1229);
					if (IS_ACTOR_VALID(&iLocal_1005))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1005)))
						{
							ADD_BLIP_FOR_ACTOR(&iLocal_1005, 325, 0, 2, 0);
						}
					}
					STOP_FORCE_LOOK_AT_COORD(&iLocal_1005);
					TASK_CLEAR(&iLocal_1005);
					TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_1005, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "sheriff_startingCover")), -1.0f, 0.0f);
					Function_235(&(uLocal_1023[0]), &Global_54076, 4);
					Function_235(&(uLocal_1023[0]), &iLocal_1005, 4);
					Function_54(&(uLocal_1023[0]), &Global_54076);
					Function_54(&(uLocal_1023[0]), &iLocal_1005);
					Function_53(&iLocal_1005, &(uLocal_1023[0]), 4);
					Function_232(&iLocal_1005, &(uLocal_1023[0]));
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_1005, 13, false);
					ACTOR_END_FORCE_HOLSTER(&Global_54076);
					if (bLocal_1231 != 4294967295)
					{
						ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, bLocal_1231, 0);
					}
					SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(-8,863f, 147,791f, 2,402f), 0);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
					SET_PLAYER_POSTURE(0, 1, 0);
					ATTACH_PLAYER_TO_COVER(0, 1, 1);
					ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
					Function_179(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					DECOR_SET_BOOL(&Global_54076, "IntroCoverExit", true);
					DESTROY_OBJECT(&uLocal_1227);
					iLocal_1202 = 1;
					Function_219(&iLocal_1221);
					iLocal_1174 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_218(&iLocal_1221))
			{
				if (Function_216(&iLocal_1221) < 0,1f)
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_249("tes_SheriffGuardObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_SheriffGuardObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
					if (DECOR_CHECK_EXIST(&iLocal_1005, "IntroCoverExit"))
					{
						DECOR_REMOVE(&iLocal_1005, "IntroCoverExit");
					}
					iLocal_1174 = 1;
				}
			}
			break;
	}
	return 1;
}

void Function_53(int iParam0, var uParam1, bool bParam2) //Position: 0x4039 / 16441
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&iParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_54(var uParam0, int iParam1) //Position: 0x408B / 16523
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
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
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_55(vector3[] vParam0) //Position: 0x40E6 / 16614
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&(vParam0[03])) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[03]), bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[03]), bVar0), 13, false);
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&(vParam0[13])) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[13]), bVar1)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[13]), bVar1), 13, false);
		}
		bVar1++;
	}
	return;
}

void Function_56() //Position: 0x416E / 16750
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_KilledGaurds", "TesAzul_KilledGaurds", false, 2, 1, 0, 1);
	Function_57();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

void Function_57() //Position: 0x41BC / 16828
{
	ADD_NEW_CONVERSATION_SPEAKER(false, &Global_54076, 0);
	ADD_NEW_CONVERSATION_SPEAKER(true, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "sheriff"), 0);
	return;
}

void Function_58(var uParam0, bool bParam1) //Position: 0x41F0 / 16880
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_59(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_59(var uParam0, bool bParam1) //Position: 0x425A / 16986
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_60() //Position: 0x427B / 17019
{
	int iVar0;
	
	return &iVar0;
}

void Function_61(vector3[] vParam0) //Position: 0x4284 / 17028
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&(vParam0[03])) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[03]), bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[03]), bVar0), 13, true);
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&(vParam0[13])) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[13]), bVar1)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&(vParam0[13]), bVar1), 13, true);
		}
		bVar1++;
	}
	return;
}

var Function_62(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x430C / 17164
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_60(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TesoroIntro1", 2, 1);
	}
	Function_63(&uVar0);
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

void Function_63(int iParam0) //Position: 0x4392 / 17298
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_65(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_64(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_64(int iParam0) //Position: 0x43D8 / 17368
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3220,87f, 38,54813f, 4532,362f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,205784f, -2,954043f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_65(int iParam0) //Position: 0x444D / 17485
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3219,452f, 38,55973f, 4532,351f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,016785f, 2,34352f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_66(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x44C2 / 17602
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_60(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nTES_Vista", 2, 1);
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

void Function_67(int iParam0) //Position: 0x4545 / 17733
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_69(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_68(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_68(int iParam0) //Position: 0x458F / 17807
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,97587f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3294,48f, 43,04517f, 4534,758f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,123455f, -2,149507f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_69(int iParam0) //Position: 0x4604 / 17924
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,97587f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3290,493f, 42,93991f, 4530,982f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,031552f, -2,403163f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_70(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4679 / 18041
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_34(bParam0))
	{
		Function_32();
		return;
	}
	bVar0 = Function_31(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_159())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_29(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_124(Global_10966) };
		}
		if (Function_159())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_118();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_159())
	{
		Function_117();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_27("DEED_COMPLETE", bParam0);
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
			Function_112(bParam0);
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
						switch (Function_29(bParam0))
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
			Function_73(1);
			Function_72(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_71(bParam0, &Var14);
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

void Function_71(int iParam0, struct<41> Param1) //Position: 0x48D7 / 18647
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_72(bool bParam0, int iParam1) //Position: 0x4915 / 18709
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

void Function_73(bool bParam0) //Position: 0x4954 / 18772
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_102();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_74();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_46(&Global_99144, 1);
		Function_46(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_74() //Position: 0x49A9 / 18857
{
	Function_100();
	Function_99();
	Function_99();
	Function_98();
	Function_98();
	Function_97();
	Function_97();
	Function_82(0);
	Function_82(0);
	Function_79();
	Function_78();
	Function_77();
	Function_76();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_75();
	return;
}

void Function_75() //Position: 0x49F4 / 18932
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

void Function_76() //Position: 0x4AFA / 19194
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

void Function_77() //Position: 0x4B2D / 19245
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

void Function_78() //Position: 0x4CC0 / 19648
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

void Function_79() //Position: 0x4E79 / 20089
{
	Function_80(&Global_42918, 1, 0);
	return;
}

void Function_80(struct<2317> Param0) //Position: 0x4E87 / 20103
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
	
	uVar0 = Function_81();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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

var Function_81() //Position: 0x50A4 / 20644
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_82(int iParam0) //Position: 0x50B9 / 20665
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
					iVar2 = ((Function_96((50 + iVar4)) + Function_96((183 + iVar4))) + Function_96((90 + iVar4)));
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
	Function_83(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_83(int iParam0, bool bParam1, bool bParam2) //Position: 0x5160 / 20832
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
		Function_95(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_94(iParam0);
	if (&bParam2)
	{
		Function_84(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_84(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x53FC / 21500
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_93(390))), 32);
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
					bVar19 = (Function_208(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_208(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_91(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_88(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_85(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_60(), &Var9);
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

var Function_85(int iParam0) //Position: 0x5A3A / 23098
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_86(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5A4B / 23115
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_87(char* cParam0) //Position: 0x5B42 / 23362
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_88(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5B5D / 23389
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_90(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_89(Function_90(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_89(int iParam0, int iParam1) //Position: 0x5BC4 / 23492
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_90(int iParam0, bool bParam1) //Position: 0x5BD6 / 23510
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_91(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5BE8 / 23528
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
	if (((Function_92(iParam0) != 19 || Function_92(iParam0) != 17) || Function_92(iParam0) != 10) || Function_92(iParam0) != 9)
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

int Function_92(int iParam0) //Position: 0x5D1C / 23836
{
	return Global_55480[iParam016].f_96;
}

var Function_93(int iParam0) //Position: 0x5D2B / 23851
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_94(int iParam0) //Position: 0x5D68 / 23912
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

int Function_95(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F02 / 24322
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

int Function_96(bool bParam0) //Position: 0x6146 / 24902
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_97() //Position: 0x6187 / 24967
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
		iVar2 = ((Function_96((50 + iVar3) + 15) + Function_96((183 + iVar3) + 15)) + Function_96((90 + iVar3) + 15));
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
	Function_83(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_98() //Position: 0x6210 / 25104
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
			iVar2 = ((Function_96((50 + iVar3) + 8) + Function_96((183 + iVar3) + 8)) + Function_96((90 + iVar3) + 8));
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
	Function_83(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_99() //Position: 0x62A7 / 25255
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
		iVar2 = ((Function_96((50 + iVar3)) + Function_96((183 + iVar3))) + Function_96((90 + iVar3)));
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
	Function_83(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_100() //Position: 0x6326 / 25382
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_101(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_83(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_101(int iParam0, bool bParam1, int iParam2) //Position: 0x6363 / 25443
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
	Function_95(iParam0, bParam1, 1);
	Function_94(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_84(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_102() //Position: 0x656F / 25967
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_19())
	{
		Function_109(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_109(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_104(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_104(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_103(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_103(char* cParam0) //Position: 0x6626 / 26150
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_104(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x663E / 26174
{
	int iVar0;
	
	iVar0 = Function_107(&uParam2, &fParam3);
	if (Function_106(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_256(&Global_99144, 1);
			Function_46(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_256(&Global_99144, 2);
			Function_46(&Global_99144, 1);
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
		Function_256(&Global_99144, 2);
		Function_46(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_105();
	return StackVal, Function_105();
}

struct<8> Function_105() //Position: 0x6736 / 26422
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_106(int iParam0) //Position: 0x6740 / 26432
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_107(bool bParam0, bool bParam1) //Position: 0x6756 / 26454
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
				fVar2 = Function_108(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_108(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_106(iVar0) && !&bParam1)
	{
		iVar0 = Function_107(&bParam0, 1);
	}
	return iVar0;
}

float Function_108(struct<2> Param0, struct<2> Param2) //Position: 0x6822 / 26658
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_109(float fParam0, int iParam1) //Position: 0x683F / 26687
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_111(&Global_54076, &Var3);
	if (!Function_110(Global_46760[0]))
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
	if (!Function_110(Global_46760[2]))
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
	if (!Function_110(Global_46760[1]))
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
	if (!Function_110(Global_46796[1]))
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
	if (!Function_110(Global_46796[3]))
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
	if (!Function_110(Global_46796[2]))
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
	if (!Function_110(Global_46796[4]))
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
	if (!Function_110(Global_46816[0]))
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
	if (!Function_110(Global_46816[1]))
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
	if (!Function_110(Global_46816[2]))
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
	if (!Function_110(Global_46838[0]))
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
	if (!Function_110(Global_46850[0]))
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
	if (!Function_110(Global_46850[1]))
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
	if (!Function_110(Global_46850[2]))
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
	if (!Function_110(Global_46866[0]))
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
	if (!Function_110(Global_46866[1]))
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
	if (!Function_110(Global_46866[2]))
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
	if (!Function_110(Global_46894[2]))
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
	if (!Function_110(Global_46894[3]))
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
	if (!Function_110(Global_46894[0]))
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
	if (!Function_110(Global_46914[0]))
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
	if (!Function_110(Global_46926[2]))
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
	if (!Function_110(Global_46926[1]))
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
	if (!Function_110(Global_46926[0]))
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
	if (!Function_110(Global_46838[1]))
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
	if (!Function_110(Global_46894[1]))
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
	Function_256(&Global_99144, 2);
	Function_46(&Global_99144, 1);
	iParam1 = 0;
	if (Function_103(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_110(int iParam0) //Position: 0x706B / 28779
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_20(iVar0, 0x1000000) || Function_20(iVar0, 0x2000000)) || Function_20(iVar0, 0x4000000)) || !Function_20(iVar0, 0x10000000));
}

void Function_111(var uParam0, int iParam1) //Position: 0x70A6 / 28838
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_112(bool bParam0) //Position: 0x70B5 / 28853
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(bParam0))
	{
		return;
	}
	switch (Function_31(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_29(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_115(12, 1, 0, 0);
				Function_114(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_115(13, 1, 0, 0);
				Function_114(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_115(14, 1, 0, 0);
				Function_114(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_115(15, 1, 0, 0);
				Function_114(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_115(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_29(bParam0))
			{
				case 0x00000000:
					if (Function_206(bParam0) == 1)
					{
						iVar0 = Function_113(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_114(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_114(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_114(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_114(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_114(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_114(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_114(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_114(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_114(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_114(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_114(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_114(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_114(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_114(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_114(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_114(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_114(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_114(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_114(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_114(4, 19);
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
								Function_115(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_115(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_115(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_113(bParam0) == 0)
			{
				if (Function_206(bParam0) == 1)
				{
					Function_115(458, 1, 0, 0);
					iVar0 = Function_29(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_114(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_114(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_114(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_114(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_114(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_114(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_114(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_114(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_206(bParam0) == 1)
			{
				Function_115(400, 1, 0, 0);
			}
			switch (Function_29(bParam0))
			{
				case 0x00000001:
					Function_115(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_114(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_114(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_114(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_115(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_114(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_114(6, 9);
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

int Function_113(bool bParam0) //Position: 0x7591 / 30097
{
	if (!Function_30(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_114(int iParam0, int iParam1) //Position: 0x75B0 / 30128
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

int Function_115(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x761A / 30234
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
	Function_95(iParam0, TO_FLOAT(bParam1), 1);
	Function_94(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_84(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_116(iParam0);
	return 1;
}

void Function_116(int iParam0) //Position: 0x7842 / 30786
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

void Function_117() //Position: 0x78E0 / 30944
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
	PLAYSTAT_INT("HC_MONEY", Function_96(0));
	PLAYSTAT_INT("HC_FAME", Function_96(3));
	PLAYSTAT_INT("HC_HONOR", Function_96(1));
	return;
}

void Function_118() //Position: 0x7A42 / 31298
{
	int iVar0;
	int iVar1;
	
	if (!Function_123(Global_10966))
	{
		return;
	}
	iVar0 = Function_96(24);
	iVar1 = Function_122(Global_10966);
	if (!Function_123(iVar0) && Function_121(iVar1) < 0)
	{
		Function_83(24, Global_10966, 0);
		Function_119(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_121(Function_122(iVar0)))
	{
		Function_83(24, Global_10966, 0);
		Function_119(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_119(int iParam0, char* cParam1) //Position: 0x7AC2 / 31426
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x7E19 / 32281
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

int Function_121(int iParam0) //Position: 0x7EA1 / 32417
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_122(int iParam0) //Position: 0x7EBB / 32443
{
	if (!Function_123(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_123(int iParam0) //Position: 0x7ED5 / 32469
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_124(int iParam0) //Position: 0x7EEB / 32491
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

struct<24> Function_125(char* cParam0) //Position: 0x7F2A / 32554
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

void Function_126(bool bParam0) //Position: 0x8240 / 33344
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_29(bParam0) == Global_46760[2])
	{
		if (Function_156(2) && !Function_155(2))
		{
			Function_148(2, 2, 0, 0, 1);
		}
	}
	if (Function_29(bParam0) == Global_46796[3])
	{
		if (Function_156(6) && !Function_155(6))
		{
			Function_148(6, 16, 0, 0, 1);
		}
	}
	if (!Function_156(10) || Function_155(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_206(Global_46948);
	if (Global_46948 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_206(Global_46950);
	if (Global_46950 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_206(Global_46952);
	if (Global_46952 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_206(Global_46951);
	if (Global_46951 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_206(Global_46953);
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
	Function_114(2, 24);
	Function_127(10, 0, 1);
	return;
}

void Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x83FE / 33790
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_147(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_155(bParam0))
	{
		if (!Function_156(bParam0))
		{
			Function_131(bParam0, 1, 0, 0, 1);
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
		Function_115(457, 1, 0, 0);
		Function_130(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_73(1);
				Function_72(1, 0);
			}
			else
			{
				Function_128();
			}
		}
	}
	return;
}

void Function_128() //Position: 0x859F / 34207
{
	return;
}

bool Function_129(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x85A5 / 34213
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

void Function_130(bool bParam0, int iParam1) //Position: 0x8654 / 34388
{
	if (!Function_147(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x86A9 / 34473
{
	char* cVar0[32];
	
	if (!Function_147(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_146(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_156(bParam0))
	{
		Function_115(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_73(1);
				Function_72(1, 5);
			}
			else
			{
				Function_128();
			}
		}
		Function_140(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_139() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_139() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_138(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_19())
		{
			if (!Function_137(Global_119934, 2))
			{
				Function_132(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_132(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8805 / 34821
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_134(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_133(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_133(char* cParam0) //Position: 0x887A / 34938
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

bool Function_134(int iParam0, var uParam1, int iParam2) //Position: 0x88B4 / 34996
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
		if (Function_136(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_135(uVar0))
		{
			case 0x00000002:
				if (!Function_137(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_135(char* cParam0) //Position: 0x8930 / 35120
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

int Function_136(int iParam0) //Position: 0x89D1 / 35281
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_46(&iVar1, 2147483648);
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

bool Function_137(int iParam0, int iParam1) //Position: 0x8A0E / 35342
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_138(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8A21 / 35361
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_124(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_139() //Position: 0x8AAC / 35500
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_140(bool bParam0) //Position: 0x8AD9 / 35545
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
			if (Function_144(bParam0, Function_145(bVar24)))
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
			if (Function_144(bParam0, Function_145(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_143(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_142(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_141(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_141(int iParam0) //Position: 0x8C89 / 35977
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_147(iParam0))
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

void Function_142(bool bParam0, bool bParam1) //Position: 0x8CE0 / 36064
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

var Function_143(int iParam0) //Position: 0x8D05 / 36101
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_147(iParam0))
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

bool Function_144(bool bParam0, int iParam1) //Position: 0x8D5B / 36187
{
	int iVar0;
	
	if (!Function_147(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_145(bool bParam0) //Position: 0x8DBA / 36282
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_146(int iParam0) //Position: 0x8DC6 / 36294
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_147(int iParam0) //Position: 0x8DE2 / 36322
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_148(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8DF8 / 36344
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_147(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_146(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_154(bParam0, 2))
	{
		Function_115(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_138(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_144(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_130(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_73(1);
				Function_72(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_140(bParam0);
		if (StackVal && !Function_20(((((!Function_139() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_20((((Function_139() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_19())
		{
			if (!Function_137(Global_119934, 2))
			{
				Function_132(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_150();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_149(3, bParam1);
				break;
			
			case 0x00000005:
				Function_149(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_149(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_149(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_149(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_149(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_114(2, 24);
				break;
			
			case 0x00000003:
				Function_114(2, 25);
				break;
			
			case 0x0000000F:
				Function_114(2, 26);
				break;
			
			case 0x0000000D:
				Function_114(2, 27);
				break;
			
			case 0x0000000E:
				Function_114(2, 28);
				break;
			}
	}
}

void Function_149(int iParam0, bool bParam1) //Position: 0x9097 / 37015
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

void Function_150() //Position: 0x9106 / 37126
{
	if (Function_147(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_153(Global_42827);
			(&Global_42827 + 8) = Function_151(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_153(Global_42827);
			*(&Global_42827 + 8) = Function_151(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_151(int iParam0, int iParam1) //Position: 0x9186 / 37254
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
					if (Function_296(6, 0) || Function_296(12, 0))
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
					if (Function_152(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_296(5, 0))
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
					if (Function_152(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_152(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_152(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_152(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_296(26, 0))
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
					if (Function_152(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_152(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_152(27) && iVar16)
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
					if (Function_152(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_152(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_152(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_152(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_296(17, 0) && iVar13)
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
					if (Function_152(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_296(6, 0) && Function_152(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_152(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_296(9, 0) && Function_152(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_152(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_296(8, 0) && iVar17)
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
	if (Function_103(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_103(StackVal, vVar2))
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
	if (!Function_103(StackVal, vVar2))
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

int Function_152(int iParam0) //Position: 0x9DE9 / 40425
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_153(int iParam0) //Position: 0x9DFE / 40446
{
	int iVar0;
	int iVar1;
	
	if (!Function_147(iParam0))
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

bool Function_154(int iParam0, int iParam1) //Position: 0x9E4D / 40525
{
	int iVar0;
	
	if (!Function_147(iParam0))
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

bool Function_155(int iParam0) //Position: 0x9E7A / 40570
{
	if (!Function_147(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_154(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_156(int iParam0) //Position: 0x9ECB / 40651
{
	if (!Function_147(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_154(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_157(bool bParam0, bool bParam1, int iParam2) //Position: 0x9F1D / 40733
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_158(bParam0), Function_81()) == 0)
		{
			ADD_ITEM(Function_158(bParam0), Function_81(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_158(bParam0), Function_81(), &iParam2);
	return 1;
}

var Function_158(bool bParam0) //Position: 0x9F6B / 40811
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

bool Function_159() //Position: 0xA05F / 41055
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_160(int iParam0, bool bParam1, bool bParam2) //Position: 0xA08A / 41098
{
	int iVar0;
	bool bVar1;
	
	if (Function_172(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_159())
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
	iVar0 = Function_96(3);
	Function_169();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_167(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_137(Global_119936, 4))
			{
				Function_132(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_115(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_208(3));
	iVar0 = Function_96(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_162(4, Function_166(Global_21369.f_248), 1);
				Function_161(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_162(4, Function_166(Global_21369.f_248), 1);
				Function_161(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_162(4, Function_166(Global_21369.f_248), 1);
				Function_161(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_162(4, Function_166(Global_21369.f_248), 1);
				Function_161(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_162(4, Function_166(Global_21369.f_248), 1);
				Function_161(Global_21369.f_244, Global_21369.f_248);
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

void Function_161(int iParam0, int iParam1) //Position: 0xA25E / 41566
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

int Function_162(int iParam0, char* cParam1) //Position: 0xA4C8 / 42184
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
	Function_119(iParam0, &cParam1, 0, 1);
	iVar1 = Function_163();
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

int Function_163() //Position: 0xA658 / 42584
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
	Function_164();
	return 0;
}

void Function_164() //Position: 0xA6F9 / 42745
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
		Function_165(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_165(int iParam0) //Position: 0xA7B7 / 42935
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

var Function_166(int iParam0) //Position: 0xA81D / 43037
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

int Function_167(int iParam0, bool bParam1) //Position: 0xA8AC / 43180
{
	bool bVar0;
	int iVar1;
	
	Function_115(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_168(iParam0, 4294967295);
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
	iVar1 = Function_163();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_168(int iParam0, int iParam1) //Position: 0xAA58 / 43608
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

void Function_169() //Position: 0xAA9D / 43677
{
	Function_171(3, 0.0f);
	Function_170(3, 10000.0f);
	return;
}

int Function_170(int iParam0, int iParam1) //Position: 0xAAB3 / 43699
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_171(int iParam0, int iParam1) //Position: 0xAAF3 / 43763
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_172(int iParam0) //Position: 0xAB33 / 43827
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_173(int iParam0, bool bParam1, bool bParam2) //Position: 0xAB42 / 43842
{
	int iVar0;
	bool bVar1;
	
	if (Function_172(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_159())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_96(1);
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
			Function_167(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_137(Global_119936, 1))
				{
					Function_132(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_176(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_137(Global_119936, 2))
				{
					Function_132(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_115(1, bVar1, 0, 0);
	}
	else
	{
		Function_175(1, (4294967295 * bVar1), 0);
	}
	if (Function_96(1) <= 4294962296)
	{
		Function_83(1, 4294962296, 0);
	}
	else if (Function_96(1) >= 5000)
	{
		Function_83(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_208(1));
	iVar0 = Function_96(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_162(2, Function_174(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_162(2, Function_174(Global_21369.f_244), 0);
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
				Function_162(2, Function_174(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_162(2, Function_174(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_162(2, Function_174(Global_21369.f_244), 1);
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
				Function_162(2, Function_174(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_162(2, Function_174(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_162(2, Function_174(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_162(2, Function_174(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_162(2, Function_174(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_162(2, Function_174(Global_21369.f_244), 1);
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
				Function_162(2, Function_174(Global_21369.f_244), 0);
			}
			break;
	}
	Function_161(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_174(int iParam0) //Position: 0xAE69 / 44649
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

int Function_175(int iParam0, bool bParam1, int iParam2) //Position: 0xAF0C / 44812
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
	Function_94(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_84(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_176(int iParam0, bool bParam1) //Position: 0xB109 / 45321
{
	bool bVar0;
	int iVar1;
	
	Function_175(iParam0, bParam1, 0);
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
	iVar1 = Function_168(iParam0, 4294967295);
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
	iVar1 = Function_163();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_177(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB2B4 / 45748
{
	bool bVar0;
	
	bVar0 = Function_96(0);
	if ((Function_96(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_115(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_96(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_115(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_96(597) + Function_96(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_178(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB386 / 45958
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_96(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_158(17), &Global_54076))
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

void Function_179(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xB48D / 46221
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
		uVar0 = Function_81();
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
		Function_115(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_45();
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
	Function_180(&iParam9, &iParam10);
}

void Function_180(var uParam0, bool bParam1) //Position: 0xB55C / 46428
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
		Function_181();
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

void Function_181() //Position: 0xB62B / 46635
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

bool Function_182(int iParam0, vector3[] vParam1, var[] uParam2, var[] uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9) //Position: 0xB6A3 / 46755
{
	var uVar0;
	var uVar2;
	int iVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar9;
	var uVar11;
	
	if (Function_20(iLocal_913, 8192))
	{
		return 0;
	}
	if (!iLocal_914)
	{
		Function_61(&vParam1);
		iLocal_914 = 1;
		if (IS_ACTOR_VALID(&iParam0))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 13, true);
		}
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		DECOR_REMOVE(&Global_54076, "TES_LawHelping");
		Function_45();
		if (!DECOR_CHECK_EXIST(&Global_54076, "SheriffNotNatural"))
		{
			if (!Function_20(iLocal_913, 16))
			{
				if (!Function_197(&iParam0, &Global_54076))
				{
					Function_281("tes_SheriffDied", 0, -1.0f, 2, 0, 0);
					Function_281("tes_help_sheriffDead", 0, -1.0f, 1, 0, 0);
				}
				else
				{
					Function_281("tes_help_sherDeadByPlayer", 0, -1.0f, 1, 0, 0);
					if (iLocal_925 <= 0 && iLocal_925 >= 10)
					{
						Function_281("tes_help_sheriffDead", 0, -1.0f, 1, 0, 0);
					}
				}
				Function_256(&iLocal_913, 16);
			}
			return 0;
		}
	}
	if (GET_LASSO_TARGET(&Global_54076) == &iParam0)
	{
		if (!Function_20(iLocal_913, 4194304))
		{
			Function_281("tes_lassoedSheriff", 0, -1.0f, 1, 0, 0);
			Function_256(&iLocal_913, 4194304);
			MEMORY_CONSIDER_AS_ENEMY(&iParam0, &Global_54076);
			if (IS_ACTOR_VALID(&iParam0))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
				}
			}
			return 0;
		}
	}
	GET_POSITION(&iParam0, &uVar0);
	GET_POSITION(&Global_54076, &uVar2);
	if (Function_20(iLocal_913, 512))
	{
		DECOR_SET_BOOL(&Global_54076, "SpawnedOnLeft", true);
		iVar4 = 0;
	}
	else
	{
		DECOR_SET_BOOL(&Global_54076, "SpawnedOnRight", true);
		iVar4 = 1;
	}
	switch (iLocal_925)
	{
		case 0x00000000:
			if (((!Function_20(iLocal_913, 131072) && !Function_20(iLocal_913, 1048576)) && !HUD_IS_FADED()) && !HUD_IS_FADED())
			{
				Function_256(&iLocal_913, 1048576);
			}
			if (!iLocal_915)
			{
				if (Function_196(0, &(vParam1[iVar43]), 1) && Function_195(&Global_54076, &iParam0) > 10.0f)
				{
					Function_55(&vParam1);
					iLocal_915 = 1;
					if (IS_ACTOR_VALID(&iParam0))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 13, false);
					}
				}
			}
			if (!Function_20(iLocal_913, 131072))
			{
				if (Function_236(&Global_54076, &(vParam1[iVar43]), 1, 1, 1, 25.0f))
				{
					Function_256(&iLocal_913, 131072);
					Function_247(&(vParam1[iVar43]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_54(&(vParam1[iVar43]), &iParam0);
					Function_194(&iLocal_910, &(vParam1[iVar43]), 1);
					Function_193();
				}
			}
			if (Function_195(&iParam0, &Global_54076) < 10.0f && !iLocal_916)
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(&uParam3, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "sheriff_startingCover")), -1.0f, 0.0f);
				iLocal_916 = 1;
				iLocal_917 = 0;
			}
			if (Function_195(&iParam0, &Global_54076) > 10.0f && !iLocal_917)
			{
				TASK_HIDE_AT_COVER(&uParam3, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "sheriff_startingCover")), -1.0f, 0.0f, 0);
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_JOINING_THE_FRAY", true, false, 2, 0, true, false);
				}
				iLocal_917 = 1;
				iLocal_916 = 0;
			}
			if (!iLocal_919)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 384) && IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_138("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_919 = 1;
				}
			}
			if (iLocal_919)
			{
				if (Function_190(&Global_54076, &iLocal_2 + 384) <= 15.0f)
				{
					iLocal_919 = 0;
				}
			}
			if (Function_188(&fParam8, 0, 1, 1, 1, 0))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&fParam8));
				DESTROY_OBJECT(&fParam8);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_282();
				iLocal_925 = 1;
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_2 + 168))
			{
				Function_40(&(uParam2[0]), 0);
				Function_40(&(uParam2[1]), 0);
				DECOR_SET_BOOL(&Global_54076, "InTownWithoutSheriff", true);
				if (IS_ACTOR_VALID(&iParam0))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
				}
				if (SQUAD_IS_VALID(&iLocal_910))
				{
					Function_42(&iLocal_910, 1, 0);
					DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&iLocal_910));
				}
				if (IS_OBJECT_VALID(&fParam8))
				{
					DESTROY_OBJECT(&fParam8);
				}
				Function_256(&iLocal_913, 8192);
				iLocal_925 = 1;
			}
			break;
		
		case 0x00000001:
			uVar5 = Function_186("ProsSideSquad", FIND_NAMED_LAYOUT("TES_AA_Layout"));
			iVar6 = Function_186("ChurchSideSquad", FIND_NAMED_LAYOUT("TES_AA_Layout"));
			DECOR_SET_BOOL(&Global_54076, "Trigger_TES_Intro", true);
			Function_185(&iLocal_910, &(uParam4[iVar4]), 1);
			Function_219(&iLocal_921);
			Function_256(&iLocal_913, 0x8000000);
			iLocal_925 = 4;
			break;
		
		case 0x00000004:
			if (Function_218(&iLocal_921))
			{
				if (Function_216(&iLocal_921) < 7.0f)
				{
					DECOR_SET_BOOL(&Global_54076, "tes_gateGuyReady01", true);
					DECOR_SET_BOOL(&Global_54076, "tes_gateGuyReady02", true);
					iLocal_925 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uParam4[0])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(vParam1[03])) != 0)
			{
				AI_DONT_HARM_ACTOR(&iParam0);
				Function_256(&iLocal_913, 1024);
				if (!Function_218(&iLocal_906))
				{
					Function_221(&iLocal_906);
				}
				iLocal_925 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_218(&iLocal_906))
			{
				if (Function_216(&iLocal_906) <= 2.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_910);
					bLocal_912 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &iLocal_2 + 1248, 3.0f, 2);
					TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_2 + 2800), -1.0f, 1086324736);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iParam0, bLocal_912);
					TASK_SEQUENCE_RELEASE(bLocal_912, 1);
					Function_184(&iParam0, &uVar5);
					Function_184(&iParam0, &iVar6);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(10, 13, 0,1f);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(13, 10, 0,1f);
					DECOR_SET_BOOL(&Global_54076, "TES_LawHelping", true);
					iLocal_925 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (!iLocal_905)
			{
				if (GET_TASK_STATUS(&iParam0, 28) == 1)
				{
					AI_CLEAR_DONT_HARM_ACTOR(&iParam0);
					iLocal_905 = 1;
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForEnding"))
			{
				iLocal_925 = 11;
			}
			break;
		
		case 0x0000000B:
			if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForEnding"))
			{
				uVar7 = Vector(-3243,32f, 38,149f, 4556,002f);
				uVar9 = Vector(-3242,374f, 39,28f, 4559,253f);
				Function_40(Function_230("tesoroAzul", "house01", 1), 0);
				uParam5 = LOCATE_GRINGO_OF_TYPE("door_kick_rifle_to_coh", &uVar9, 3.0f, 1);
				SQUAD_GOALS_CLEAR(&iLocal_910);
				Function_183(&iLocal_910);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
				TASK_CLEAR(&iParam0);
				if (DECOR_CHECK_EXIST(&iParam0, "IntroCoverExit"))
				{
					DECOR_REMOVE(&iParam0, "IntroCoverExit");
				}
				bLocal_912 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uVar7, 4);
				TASK_USE_GRINGO(false, &uParam5, "UseCase1", true, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam0, bLocal_912);
				TASK_SEQUENCE_RELEASE(bLocal_912, 1);
				Function_256(&iLocal_913, 32768);
				iLocal_925 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!iLocal_920)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "BossScriptRunning"))
				{
					if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_Boss_Layout")))
					{
						if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan")))
						{
							if (IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan")))
							{
								if (DECOR_CHECK_EXIST(&Global_54076, "DeputyDiedForSheriff") && !fParam7)
								{
									if (IS_ACTOR_VALID(&iParam0))
									{
										DECOR_SET_BOOL(&iParam0, "IntroCoverExit", true);
									}
									TASK_CLEAR(&iParam0);
									SQUAD_GOALS_CLEAR(&iLocal_910);
									Function_183(&iLocal_910);
									TASK_KILL_CHAR(&iParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"));
									MEMORY_REPORT_POSITION_AUTO(&iParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"), true);
									iLocal_920 = 1;
									fParam7 = 1;
								}
							}
						}
					}
				}
			}
			if (fParam9 && !iLocal_918)
			{
				if (IS_ACTOR_VALID(&iParam0))
				{
					DECOR_SET_BOOL(&iParam0, "IntroCoverExit", true);
				}
				TASK_CLEAR(&iParam0);
				SQUAD_GOALS_CLEAR(&iLocal_910);
				Function_183(&iLocal_910);
				TASK_KILL_CHAR(&iParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"));
				MEMORY_REPORT_POSITION_AUTO(&iParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"), true);
				iLocal_918 = 1;
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "DeputyReleased"))
			{
				TASK_CLEAR(&iParam0);
				SQUAD_GOALS_CLEAR(&iLocal_910);
				Function_183(&iLocal_910);
				if (IS_ACTOR_VALID(&iParam0))
				{
					DECOR_SET_BOOL(&iParam0, "IntroCoverExit", true);
				}
				uVar11 = Vector(-3244,361f, 38.0f, 4548,187f);
				bLocal_912 = TASK_SEQUENCE_OPEN();
				TASK_USE_GRINGO(false, &uParam6, "UseCase1", true, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam0, bLocal_912);
				TASK_SEQUENCE_RELEASE(bLocal_912, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
			}
			break;
	}
	return 1;
}

void Function_183(int iParam0) //Position: 0xC18D / 49549
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

void Function_184(int iParam0, int iParam1) //Position: 0xC1C2 / 49602
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_REPORT_POSITION_AUTO(&iParam0, &uVar1, true);
		}
		bVar0++;
	}
	return;
}

void Function_185(var uParam0, var uParam1, int iParam2) //Position: 0xC1FF / 49663
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&uParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar1);
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

bool Function_186(bool bParam0, bool bParam1) //Position: 0xC27D / 49789
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	if (!IS_LAYOUTREF_VALID(&bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return &iVar0;
	}
	uVar2 = CREATE_OBJECT_ITERATOR(&bParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 25);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3) && !bVar1)
	{
		uVar4 = GET_OBJECT_NAME(&iVar3);
		if (STRING_CONTAINS_STRING(&uVar4, &bParam0) || Function_187(&bParam0, &uVar4))
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

int Function_187(char* cParam0) //Position: 0xC339 / 49977
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

bool Function_188(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xC366 / 50022
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
				Function_58(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_59(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_59(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_189(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_189(&uVar5, &iVar3);
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

int Function_189(vector3 vParam0) //Position: 0xC59B / 50587
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_103(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_103(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_190(var uParam0, var uParam1) //Position: 0xC611 / 50705
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_192(&uParam0);
		Var0 = Function_192(&uParam0);
		Function_191(&uParam1);
		Var2 = Function_191(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_191(int iParam0) //Position: 0xC68F / 50831
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_192(var uParam0) //Position: 0xC6A1 / 50849
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_193() //Position: 0xC70D / 50957
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_HelpFight", "TesAzul_HelpFight", false, 2, 1, 0, 1);
	Function_57();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

void Function_194(var uParam0, var uParam1, bool bParam2) //Position: 0xC755 / 51029
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&uParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, bParam2);
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

float Function_195(int iParam0, int iParam1) //Position: 0xC7E8 / 51176
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

int Function_196(bool bParam0, bool bParam1, int iParam2) //Position: 0xC8DD / 51421
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				if (IS_PLAYER_TARGETTING_ACTOR(bParam0, &iVar1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_197(int iParam0, int iParam1) //Position: 0xC935 / 51509
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
	{
		if (IS_ACTOR_DEAD(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

var Function_198(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC96B / 51563
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_60(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TES_EndingVista", 3, 1);
	}
	Function_199(&uVar0);
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

void Function_199(int iParam0) //Position: 0xC9F4 / 51700
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_202(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_201(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_200(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 6.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 11.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 1.0f, 2);
	return;
}

void Function_200(int iParam0) //Position: 0xCA59 / 51801
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,44935f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3302,775f, 42,49386f, 4539,279f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,006917f, -1,868997f, -0,000157f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_201(int iParam0) //Position: 0xCAD2 / 51922
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,44935f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3303,364f, 42,45905f, 4534,415f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,006289f, -2,002424f, -0,000157f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_202(float fParam0) //Position: 0xCB4B / 52043
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 48,32753f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-3248,305f, 40,61472f, 4562,832f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(-0,093492f, -1,958853f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_203(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xCBC0 / 52160
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
	Function_45();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_81();
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
				Function_205(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_60(), 2, Function_205(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_115(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_204()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_204()));
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
	if (Function_337(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_336(0x4000000);
	}
	if (Function_337(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_336(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_204() //Position: 0xCE72 / 52850
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

struct<8> Function_205(int iParam0) //Position: 0xCF00 / 52992
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_206(bool bParam0) //Position: 0xCF12 / 53010
{
	if (!Function_30(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

int Function_207(int iParam0, bool bParam1, bool bParam2) //Position: 0xCF2C / 53036
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
		Function_95(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_94(iParam0);
	if (&bParam2)
	{
		Function_84(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_208(int iParam0) //Position: 0xD199 / 53657
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_209(int iParam0, int iParam1) //Position: 0xD1D2 / 53714
{
	if (!Function_34(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

bool Function_210(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xD1ED / 53741
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DeputyReleased") || DECOR_CHECK_EXIST(&Global_54076, "DeputyDied"))
	{
		return 1;
	}
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_Boss_Layout")))
	{
		if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan")))
		{
			if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uParam1, "hold_hostage") && IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"))) && IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_EndingHouse")))
			{
				uParam3 = 1;
				if (!uParam4)
				{
					TASK_FLEE_ACTOR(&uParam1, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"), 15.0f, -1.0f, 0, 0, 0);
					uParam4 = 1;
				}
			}
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "BossIsDead"))
	{
		CANCEL_DEADEYE();
		if (IS_ACTOR_ALIVE(&uParam1))
		{
			DECOR_SET_FLOAT(&Global_54076, "DeputyReleased", GET_CURRENT_GAME_TIME());
			Function_211(&iParam2);
			AI_ENABLE_PERCEPTION(&uParam1);
			Function_46(&iParam0, 512);
			if (!uParam3 && IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_EndingHouse")))
			{
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, (&iLocal_2 + 2480), 90.0f, 1, 1, true);
				DECOR_SET_BOOL(&uParam1, "AA_Exit", true);
			}
			else if (IS_ACTOR_ALIVE(&uParam5))
			{
				DECOR_SET_BOOL(&Global_54076, "PlayerNotVolume", true);
				RESET_ANIM_SET_FOR_ACTOR(&uParam1, 1);
				AI_GLOBAL_CLEAR_DANGER(&uParam1);
				TASK_CLEAR(&uParam1);
				TASK_USE_GRINGO(&uParam1, &uParam6, "ChildUse", true, 1);
			}
			SAY_SINGLE_LINE_CONTEXT(&uParam1, 103, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			return 1;
		}
		if (!IS_ACTOR_ALIVE(&uParam1))
		{
			DECOR_SET_BOOL(&Global_54076, "DeputyDied", true);
			Function_211(&iParam2);
			return 1;
		}
	}
	return 0;
}

void Function_211(int iParam0) //Position: 0xD449 / 54345
{
	var uVar0;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("TES_AreaVultures", &iParam0, 4294967295, 0);
	Function_212(&iParam0, &uVar0, &iLocal_2 + 328);
	return;
}

void Function_212(bool bParam0, float fParam1, var uParam2) //Position: 0xD47B / 54395
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
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213("Ambiance_Vlt") };
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

struct<32> Function_213(char* cParam0) //Position: 0xD5E5 / 54757
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

struct<32> Function_214(char* cParam0) //Position: 0xD651 / 54865
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_215() //Position: 0xD673 / 54899
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_DeputyInHouse", "TesAzul_DeputyInHouse", false, 3, 1, 0, 1);
	Function_57();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

float Function_216(vector3 vParam0) //Position: 0xD6C3 / 54979
{
	if (Function_218(&vParam0))
	{
		if (Function_217(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_217(int iParam0) //Position: 0xD790 / 55184
{
	return Function_20(iParam0, 2);
}

bool Function_218(int iParam0) //Position: 0xD79E / 55198
{
	return Function_20(iParam0, 1);
}

void Function_219(int iParam0) //Position: 0xD7AC / 55212
{
	Function_220(&iParam0, 0.0f);
	return;
}

void Function_220(vector3 vParam0) //Position: 0xD7B9 / 55225
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_256(&vParam0, 1);
	Function_46(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_221(int iParam0) //Position: 0xD7DE / 55262
{
	if (!Function_218(&iParam0))
	{
		Function_220(&iParam0, 0.0f);
	}
	return;
}

void Function_222(struct<4>[] Param0) //Position: 0xD7F5 / 55285
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar0)))
		{
			if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar0), &iLocal_2 + 232))
			{
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar0), &iLocal_2 + 1760, 1, 1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_223(int iParam0) //Position: 0xD84E / 55374
{
	Function_234(&iParam0, &Global_54076, 1);
	Function_224(&iParam0, 1);
	Function_235(&iParam0, &Global_54076, 4);
	Function_54(&iParam0, &Global_54076);
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xD87B / 55419
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

var Function_225(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0xD8C0 / 55488
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

void Function_226(var uParam0, int iParam1, bool bParam2) //Position: 0xD907 / 55559
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_DRAW_HOLSTER_WEAPON(&uVar1, iParam1);
				TASK_PRIORITY_SET(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

int Function_227(int iParam0, int[] iParam1) //Position: 0xD95E / 55646
{
	bool bVar0;
	
	bVar0 = false;
	switch (iLocal_904)
	{
		case 0x00000000:
			if (DECOR_CHECK_EXIST(&Global_54076, "TES_churchSquadBlip1"))
			{
				Function_219(&iParam0);
				iLocal_904 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_218(&iParam0))
			{
				if (Function_216(&iParam0) < 2.0f)
				{
					Function_228();
					iLocal_904 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_218(&iParam0))
			{
				if (Function_216(&iParam0) < 3.0f)
				{
					Function_247(&(Param2[14]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(&(Param2[14])) - 1))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(Param2[14]), bVar0)))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(Param2[14]), bVar0));
							SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(Param2[14]), bVar0), &iLocal_2 + 232, 4, 1);
						}
						bVar0++;
					}
					if (IS_DOOR_LOCKED(&(iParam1[0])))
					{
						Function_40(&(iParam1[0]), 0);
					}
					if (IS_DOOR_LOCKED(&(iParam1[1])))
					{
						Function_40(&(iParam1[1]), 0);
					}
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_228() //Position: 0xDA88 / 55944
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_WarnsAnothaAttack", "TesAzul_WarnsAnothaAttack", false, 3, 1, 0, 1);
	Function_57();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

void Function_229() //Position: 0xDAE0 / 56032
{
	if (!Function_20(bLocal_1181, 32))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(Local_1118[04])) < 2)
		{
			SQUAD_GOALS_CLEAR(&(Local_1118[04]));
			Function_183(&(Local_1118[04]));
			Function_225(&(Local_1118[04]), &iLocal_2 + 280, 0, 4294967295);
			Function_256(&bLocal_1181, 32);
		}
	}
	if (Function_20(bLocal_1181, 2147483648))
	{
		if (!Function_20(bLocal_1181, 4194304))
		{
			if (!Function_20(bLocal_1181, 0x8000000))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(vLocal_1152[03])) == 0)
				{
					DECOR_SET_BOOL(&Global_54076, "tes_gateGuyReady01", true);
					Function_256(&bLocal_1181, 4194304);
				}
			}
		}
	}
	if (Function_20(bLocal_1181, 2147483648))
	{
		if (!Function_20(bLocal_1181, 4194304))
		{
			if (!Function_20(bLocal_1181, 0x4000000))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(vLocal_1152[13])) == 0)
				{
					DECOR_SET_BOOL(&Global_54076, "tes_gateGuyReady02", true);
					Function_256(&bLocal_1181, 4194304);
				}
			}
		}
	}
	return;
}

int Function_230(float fParam0, var uParam1, int iParam2) //Position: 0xDBF1 / 56305
{
	return Function_231(Global_43789, &fParam0, &uParam1, iParam2);
}

int Function_231(int iParam0, char* cParam1, bool bParam3) //Position: 0xDC05 / 56325
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

void Function_232(int iParam0, int iParam1) //Position: 0xDCAA / 56490
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&iParam0, &uVar1);
		}
		bVar0++;
	}
	return;
}

bool Function_233(var uParam0, bool bParam1) //Position: 0xDCE6 / 56550
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

void Function_234(var uParam0, var uParam1, bool bParam2) //Position: 0xDD42 / 56642
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
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

void Function_235(var uParam0, var uParam1, bool bParam2) //Position: 0xDDBA / 56762
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
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_236(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xDE06 / 56838
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
			if (Function_237(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_237(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xDE71 / 56945
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

void Function_238(var uParam0, var[] uParam1) //Position: 0xDF77 / 57207
{
	if (!uParam0)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForEnding"))
		{
			iParam2 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TES/event_tes_boss", 0);
			uParam0 = 1;
			Function_40(&(uParam1[0]), 0);
			Function_40(&(uParam1[1]), 0);
		}
	}
	return;
}

void Function_239(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xDFF3 / 57331
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_240(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE02E / 57390
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

void Function_241(int iParam0) //Position: 0xE078 / 57464
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
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_242(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xE0C3 / 57539
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_43(&uVar1, &uParam1, &uParam2, &uParam3, &bParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_243(var uParam0, bool bParam1) //Position: 0xE111 / 57617
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

void Function_244(struct<4>[] Param0) //Position: 0xE162 / 57698
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&(iParam1[0])))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&(iParam1[0])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(iParam1[0]), bVar0)))
			{
				if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(&(iParam1[0]), bVar0)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam1[0]), bVar0))))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(iParam1[0]), bVar0)));
					}
				}
			}
			bVar0++;
		}
	}
	if (SQUAD_IS_VALID(&(Param0[14])))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(&(Param0[14])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar1)))
			{
				if (IS_ACTOR_IN_HOGTIE(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar1)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar1))))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(Param0[14]), bVar1)));
					}
				}
			}
			bVar1++;
		}
	}
	return;
}

void Function_245(var uParam0, int iParam1) //Position: 0xE252 / 57938
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_246(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_218(&iParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_216(&iParam1);
		}
	}
	return;
}

var Function_246(bool bParam0) //Position: 0xE295 / 58005
{
	int iVar0;
	int iVar1;
	
	iVar0 = &bParam0;
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

void Function_247(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0xE2C8 / 58056
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

void Function_248(bool bParam0, bool bParam1) //Position: 0xE3D8 / 58328
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_34(bParam0))
	{
		Function_32();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_31(bParam0);
	if (StackVal != 2)
	{
		Function_27("DEED_START", bParam0);
	}
	Global_21684[bParam07].f_8 = StackVal + 1;
	Global_21684[bParam07].f_4 = 2;
	Global_10968 = bParam0;
	if (!Global_53524.f_36 && bParam1)
	{
		Function_73(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_29(bParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_124(Global_10966) };
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

void Function_249(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE4E9 / 58601
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
			Var0 = { StackVal, StackVal, StackVal, Function_124(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_250(var uParam0, int iParam1) //Position: 0xE57E / 58750
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

struct<8> Function_251(bool bParam0) //Position: 0xE5D9 / 58841
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

void Function_252(var uParam0, int iParam1, var uParam2, vector3[] vParam3, var uParam7) //Position: 0xE602 / 58882
{
	if (Function_20(iParam1, 1024))
	{
		Function_256(&iParam1, 512);
		uParam2 = CREATE_ACTOR_IN_LAYOUT(&uParam0, "sheriff", 462, (&iLocal_2 + 480), *(&iLocal_2 + 480 + 12));
		iLocal_910 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TES_LawSquad"));
		SQUAD_JOIN(&uParam2, &iLocal_910);
		Function_256(&iLocal_913, 512);
		TASK_PRIORITY_SET(&uParam2, true);
		SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iLocal_910, 1, &iLocal_2 + 128, 4, 1);
		uParam5[0] = CREATE_ACTOR_IN_LAYOUT(&uParam0, Function_60(), 976, *(&iLocal_2 + 960), *(&iLocal_2 + 960 + 12));
		TASK_STAND_STILL(&(uParam5[0]), -1.0f, 0, 0);
		ACCESSORIZE_HORSE(&(uParam5[0]), 3);
		uParam5[1] = CREATE_ACTOR_IN_LAYOUT(&uParam0, Function_60(), 977, *(&iLocal_2 + 1024), *(&iLocal_2 + 1024 + 12));
		TASK_STAND_STILL(&(uParam5[1]), -1.0f, 0, 0);
		ACCESSORIZE_HORSE(&(uParam5[1]), 3);
		uParam4 = CREATE_ACTOR_IN_LAYOUT(&uParam0, "BobTheCaptive", 461, *(&iLocal_2 + 1216), *(&iLocal_2 + 1216 + 12));
		bParam6 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "TES_DeputySquad"));
		SQUAD_JOIN(&uParam4, &bParam6);
		MEMORY_CONSIDER_AS(&uParam4, &Global_54076, false);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam4);
		TASK_STAND_STILL(&uParam4, -1.0f, 0, 0);
		SET_ACTOR_CAN_BE_TARGETED(&uParam4, false);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam4, 0);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam4, 0);
		SET_ACTOR_CAN_BE_AIMASSISTED(&uParam4, 0);
		SET_ACTOR_INVULNERABILITY(&uParam4, true);
		AI_ENABLE_PERCEPTION(&uParam4);
		SET_ACTOR_CAN_PLAY_GESTURES(&uParam4, false);
		SET_ACTOR_UPDATE_PRIORITY(&uParam4, false);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(10, 13, 0,1f);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(13, 10, 0,1f);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 13, 0,1f);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(13, 20, 0,1f);
		SET_FACTIONS_STATUS_TWO_WAY(10, 13, 4);
		SQUAD_SET_FACTION(&iLocal_910, 20);
		MEMORY_CONSIDER_AS_ENEMY(&uParam2, FIND_ACTOR_IN_LAYOUT(&Global_46715, "Preacher"));
		MEMORY_CONSIDER_AS_ENEMY(&uParam2, FIND_ACTOR_IN_LAYOUT(&Global_46715, "MainHo"));
		MEMORY_CONSIDER_AS_ENEMY(&uParam2, FIND_ACTOR_IN_LAYOUT(&Global_46715, "Juan"));
		MEMORY_ATTACK_ON_SIGHT(&uParam2, 1);
		MEMORY_CONSIDER_AS(&uParam2, &Global_54076, false);
		SET_CRIPPLE_ENABLE(&uParam2, 0);
		SET_ACTOR_ALLOW_DISARM(&uParam2, false);
		SET_ACTOR_PROOF(&uParam2, 128);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam2);
		GIVE_WEAPON_TO_ACTOR(&uParam2, 9, false, 1, 1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam2, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(&uParam2, false);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam2, 2, false);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam2, 3, false);
		SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,1f);
		Function_235(&(vParam3[13]), &uParam2, 4);
		Function_53(&uParam2, &(vParam3[13]), 4);
		Function_235(&(vParam3[03]), &uParam2, 4);
		Function_53(&uParam2, &(vParam3[03]), 4);
		Function_253(&iLocal_2 + 2800);
		uParam7 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, Function_60(), &iLocal_2 + 384, &Global_54076, 2, 3, 0, 0, 1, 1);
		ADD_BLIP_FOR_OBJECT(&uParam7, 330, 0f, 2, 0);
	}
}

void Function_253(int iParam0) //Position: 0xE91B / 59675
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_251(&iParam0);
	Var0 = Function_251(&iParam0);
	Function_254(&iParam0);
	Var2 = Function_254(&iParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&iParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&iParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&iParam0);
	iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

struct<8> Function_254(bool bParam0) //Position: 0xE9EF / 59887
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

void Function_255(bool bParam0, var uParam1, bool[] bParam2) //Position: 0xEA18 / 59928
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	bool bVar4;
	
	bVar0 = 999,9f;
	GET_POSITION(&Global_54076, &Var1);
	if (VDIST(*(&iLocal_2 + 480), Var1) > bVar0)
	{
		bVar0 = VDIST(*(&iLocal_2 + 480), Var1);
		bVar4 = true;
		bVar3 = false;
		Function_256(&iLocal_913, 512);
	}
	if (VDIST(*(&iLocal_2 + 544), Var1) > bVar0)
	{
		bVar0 = VDIST(*(&iLocal_2 + 544), Var1);
		bVar4 = false;
		bVar3 = true;
		Function_46(&iLocal_913, 512);
	}
	if (bVar3)
	{
		bParam2[0] = CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_60(), 976, *(&iLocal_2 + 864), *(&iLocal_2 + 864 + 12));
		bParam2[1] = CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_60(), 977, *(&iLocal_2 + 896), *(&iLocal_2 + 896 + 12));
	}
	else if (bVar4)
	{
		bParam2[0] = CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_60(), 976, *(&iLocal_2 + 960), *(&iLocal_2 + 960 + 12));
		bParam2[1] = CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_60(), 977, *(&iLocal_2 + 1024), *(&iLocal_2 + 1024 + 12));
	}
	TASK_STAND_STILL(&(bParam2[0]), -1.0f, 0, 0);
	TASK_STAND_STILL(&(bParam2[1]), -1.0f, 0, 0);
	uParam1 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "BobTheCaptive", 461, *(&iLocal_2 + 1216), *(&iLocal_2 + 1216 + 12));
	bParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "TES_DeputySquad"));
	SQUAD_JOIN(&uParam1, &bParam3);
	MEMORY_CONSIDER_AS(&uParam1, &Global_54076, false);
	TASK_STAND_STILL(&uParam1, -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&uParam1, false);
	SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam1, 0);
	SET_ACTOR_CAN_BE_HARDLOCKED(&uParam1, 0);
	SET_ACTOR_CAN_BE_AIMASSISTED(&uParam1, 0);
	AI_ENABLE_PERCEPTION(&uParam1);
	if (Function_20(iLocal_913, 512))
	{
		DECOR_SET_BOOL(&Global_54076, "SpawnedOnLeft", true);
	}
	else
	{
		DECOR_SET_BOOL(&Global_54076, "SpawnedOnRight", true);
	}
}

void Function_256(bool bParam0, bool bParam1) //Position: 0xEC25 / 60453
{
	bParam0 = (bParam0 || bParam1);
	return;
}

void Function_257(int[] iParam0) //Position: 0xEC36 / 60470
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	Function_251(&iLocal_2 + 1568);
	uVar0 = Function_251(&iLocal_2 + 1568);
	Function_251(&iLocal_2 + 1584);
	uVar2 = Function_251(&iLocal_2 + 1584);
	Function_251(&iLocal_2 + 1608);
	iVar4 = Function_251(&iLocal_2 + 1608);
	TELEPORT_ACTOR(&(iParam0[6]), &uVar0, 1, 1, 1);
	TELEPORT_ACTOR(&(iParam0[8]), &uVar2, 1, 1, 1);
	TELEPORT_ACTOR(&(iParam0[2]), &iVar4, 1, 1, 1);
	return;
}

void Function_258(var uParam0, var uParam1, struct<8> Param2) //Position: 0xEC8E / 60558
{
	char* cVar0[32];
	
	uParam1 = CREATE_OBJECTSET_IN_LAYOUT("TES_AreaChests", &uParam0, 4294967295, 0);
	Function_260(&uParam0, &iLocal_2 + 1792, &uParam1);
	Param2 = CREATE_GRINGO_IN_LAYOUT(&uParam0, "gunChest", "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&iLocal_2 + 2608), *(&iLocal_2 + 2608 + 12));
	strcpy(&cVar0, "Weapon_", 32);
	straddi(&cVar0, 6, 32);
	DECOR_SET_INT(&Param2, &cVar0, false);
	Function_259(&uParam0, 43, &iLocal_2 + 2248, 0, 1, 0.0f, 0, 3212836864);
	Function_259(&uParam0, 43, &iLocal_2 + 2216, 0, 1, 0.0f, 0, 3212836864);
	Function_259(&uParam0, 43, &iLocal_2 + 2280, 0, 1, 0.0f, 0, 3212836864);
	return;
}

var Function_259(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7) //Position: 0xED8C / 60812
{
	var uVar0;
	var uVar1;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	
	GET_OBJECT_POSITION(&uParam2, &uVar3);
	uVar0 = CREATE_WEAPON_PICKUP(&uParam0, iParam1, &uVar3, 0.0f, &fParam5, &fParam6, &fParam7);
	GET_OBJECT_POSITION(&uParam2, &Var5);
	GET_OBJECT_ORIENTATION(&uParam2, &Var7);
	SET_OBJECT_POSITION(&uVar0, Var5);
	SET_OBJECT_ORIENTATION(&uVar0, Var7);
	if (&bParam3)
	{
		uVar1 = Vector(0.0f, -0,001f, 0.0f);
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar0));
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&uVar0), &uVar1);
	}
	DECOR_SET_INT(&uVar0, "NumClips", &iParam4);
	return &uVar0;
}

void Function_260(var uParam0, var uParam1, int iParam2) //Position: 0xEE1A / 60954
{
	bool bVar0;
	bool bVar1;
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
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		Function_251(&bVar1);
		Var2 = Function_251(&bVar1);
		bVar4 = GET_OBJECT_HEADING(&bVar1);
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213("amb_areaChest") };
		uVar13 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam0, &Var5, "$/content/scripting/gringo/simpleGringo/locked_footlocker", Var2, Vector(0.0f, bVar4, 0.0f));
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar13), 0);
		ADD_OBJECT_TO_OBJECTSET(&uVar13, &iParam2);
		if (DECOR_CHECK_EXIST(&bVar1, "GringoDollarAmt"))
		{
			DECOR_SET_INT(&uVar13, "GringoDollarAmt", DECOR_GET_INT(&bVar1, "GringoDollarAmt"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "GiveItem"))
		{
			DECOR_SET_INT(&uVar13, "GiveItem", DECOR_GET_INT(&bVar1, "GiveItem"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_5"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_5", DECOR_GET_INT(&bVar1, "Ammo_5"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_6"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_6", DECOR_GET_INT(&bVar1, "Ammo_6"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_7"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_7", DECOR_GET_INT(&bVar1, "Ammo_7"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_8"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_8", DECOR_GET_INT(&bVar1, "Ammo_8"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_9"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_9", DECOR_GET_INT(&bVar1, "Ammo_9"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_10"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_10", DECOR_GET_INT(&bVar1, "Ammo_10"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_11"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_11", DECOR_GET_INT(&bVar1, "Ammo_11"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_12"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_12", DECOR_GET_INT(&bVar1, "Ammo_12"));
		}
		bVar0++;
	}
	return;
}

void Function_261(bool bParam0, bool[] bParam1) //Position: 0xF100 / 61696
{
	uParam2[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "TES_RunOutSquad0"));
	bParam1[0] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "gateGuy", 411, *(&iLocal_2 + 1312), *(&iLocal_2 + 1312 + 12));
	SQUAD_JOIN(&(bParam1[0]), &(uParam2[0]));
	MEMORY_CONSIDER_AS(&(bParam1[0]), &Global_54076, 4);
	TASK_STAND_STILL(&(bParam1[0]), -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO(&(bParam1[0]), &Global_54076, true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(bParam1[0]), true);
	bParam1[1] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "ngateGuy01", 414, *(&iLocal_2 + 1344), *(&iLocal_2 + 1344 + 12));
	SQUAD_JOIN(&(bParam1[1]), &(uParam2[0]));
	MEMORY_CONSIDER_AS(&(bParam1[1]), &Global_54076, 4);
	TASK_STAND_STILL(&(bParam1[1]), -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO(&(bParam1[1]), &Global_54076, true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(bParam1[1]), true);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(uParam2[0]), 690856);
	SQUAD_SET_FACTION(&(uParam2[0]), 19);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(uParam2[0]), 0);
	return;
}

void Function_262(bool[] bParam0) //Position: 0xF236 / 62006
{
	TELEPORT_ACTOR(&(bParam0[9]), &iLocal_2 + 1376, 1, 1, 1);
	return;
}

void Function_263(var uParam0, struct<4>[] Param1) //Position: 0xF24F / 62031
{
	int iVar0;
	
	Param1[04] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "ProsSideSquad"));
	iVar0 = 6;
	while (iVar0 < 8)
	{
		if (IS_ACTOR_VALID(&(uParam2[iVar0])))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam2[iVar0]), true);
			Function_266(&(uParam2[iVar0]), 50.0f, 1.0f, 1.0f);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam2[iVar0]), &iLocal_2 + 232);
			TASK_STAND_STILL(&(uParam2[iVar0]), -1.0f, 0, 0);
			SQUAD_JOIN(&(uParam2[iVar0]), &(Param1[04]));
			ADD_ACTOR_STAY_WITHIN_VOLUME(&(uParam2[iVar0]), &iLocal_2 + 176);
			MEMORY_IDENTIFY(&(uParam2[iVar0]), &Global_54076);
			MEMORY_REPORT_POSITION_AUTO(&(uParam2[iVar0]), &Global_54076, true);
			SQUAD_SET_FACTION(&(Param1[04]), 19);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(Param1[04]), 0);
		}
		iVar0++;
	}
	*(&Param1[04] + 24) = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&(Param1[04]), 1, &iLocal_2 + 176, 1, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (IS_ACTOR_VALID(&(uParam2[iVar0])))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam2[iVar0]), true);
			Function_266(&(uParam2[iVar0]), 50.0f, 1.0f, 1.0f);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam2[iVar0]), &iLocal_2 + 232);
			TASK_STAND_STILL(&(uParam2[iVar0]), -1.0f, 0, 0);
			SQUAD_JOIN(&(uParam2[iVar0]), &(Param1[04]));
			ADD_ACTOR_STAY_WITHIN_VOLUME(&(uParam2[iVar0]), &iLocal_2 + 176);
			MEMORY_IDENTIFY(&(uParam2[iVar0]), &Global_54076);
			MEMORY_REPORT_POSITION_AUTO(&(uParam2[iVar0]), &Global_54076, true);
		}
		iVar0++;
	}
	Param1[14] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "ChurchSideSquad"));
	iVar0 = 3;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(&(uParam2[iVar0])))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam2[iVar0]), true);
			Function_266(&(uParam2[iVar0]), 50.0f, 1.0f, 1.0f);
			SQUAD_JOIN(&(uParam2[iVar0]), &(Param1[14]));
			SQUAD_SET_FACTION(&(Param1[14]), 19);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(Param1[14]), 0);
			TASK_STAND_STILL(&(uParam2[iVar0]), -1.0f, 0, 0);
			ADD_ACTOR_STAY_WITHIN_VOLUME(&(uParam2[iVar0]), &iLocal_2 + 232);
			MEMORY_IDENTIFY(&(uParam2[iVar0]), &Global_54076);
			MEMORY_REPORT_POSITION_AUTO(&(uParam2[iVar0]), &Global_54076, true);
		}
		iVar0++;
	}
	vParam3[03] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "FrontGateSquad"));
	if (IS_ACTOR_VALID(&(uParam2[9])))
	{
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam2[9]), true);
		MEMORY_CONSIDER_AS(&(uParam2[9]), &Global_54076, 2);
		SQUAD_JOIN(&(uParam2[9]), &(vParam3[03]));
		MEMORY_IDENTIFY(&(uParam2[9]), &uParam4);
		MEMORY_IDENTIFY(&(uParam2[9]), &Global_54076);
		if (Function_20(uParam5, 1024))
		{
			TASK_SHOOT_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(&(vParam3[03]), false), &uParam4, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_2 + 2792), -1.0f, 1086324736);
		}
		else
		{
			Function_183(&(vParam3[03]));
			Function_265(&(vParam3[03]), 1, -1.0f);
		}
		SQUAD_SET_FACTION(&(vParam3[03]), 21);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(vParam3[03]), 0);
		*(&vParam3[03] + 8) = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&(vParam3[03]), 1, &iLocal_2 + 152, 1, 1);
	}
	Function_264(&(Param1[04]), &Global_54076, 4);
	Function_264(&(Param1[14]), &Global_54076, 4);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(Param1[04]), 690856);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(Param1[14]), 690856);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(vParam3[03]), 690856);
}

void Function_264(var uParam0, int iParam1, bool bParam2) //Position: 0xF5EC / 62956
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
			MEMORY_IDENTIFY(&uVar1, &iParam1);
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(&iParam1, &uVar1);
				MEMORY_CONSIDER_AS(&iParam1, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_265(var uParam0, bool bParam1, int iParam2) //Position: 0xF669 / 63081
{
	bool bVar0;
	var uVar1;
	var uVar2;
	bool bVar4;
	
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
			GET_POSITION(&uVar1, &uVar2);
			bVar4 = GET_HEADING(&uVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(&uVar1, &uVar2, bVar4, &iParam2);
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_266(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xF6CC / 63180
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

void Function_267(bool[] bParam0) //Position: 0xF71D / 63261
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		bParam0[iVar0] = Function_268(&Global_11988, &Global_14238, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(&(bParam0[iVar0])))
		{
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&(bParam0[iVar0]), 80.0f);
		}
		iVar0++;
	}
	return;
}

bool Function_268(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xF76A / 63338
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
		(&vParam1[iVar03] + 16) = Function_270(StackVal, &Global_10996, Function_60(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
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
	Function_269(&vParam1[iVar03] + 16, 1);
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

int Function_269(int iParam0, bool bParam1) //Position: 0xF931 / 63793
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

var Function_270(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xF9E3 / 63971
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_60(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

bool Function_271(struct<2>[] Param0) //Position: 0xFB0A / 64266
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_275();
	iVar1 = 0;
	if (!Function_10(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_274(&(Param0[iVar02]), 8);
		}
		else if (Function_273())
		{
			iVar1 = 1;
			Function_274(&(Param0[iVar02]), 8);
		}
		Function_274(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_10(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_10(&(Param0[02]), 8) || iVar1));
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
				Function_274(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_274(&(Param0[iVar02]), 2);
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
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_274(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_274(&(Param0[iVar02]), 2);
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
	Function_272();
	return 1;
}

void Function_272() //Position: 0xFECC / 65228
{
	if (!Function_337(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_273() //Position: 0xFF0C / 65292
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

void Function_274(struct<13> Param0) //Position: 0xFF3A / 65338
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_275() //Position: 0xFF4D / 65357
{
	if (!Function_337(128))
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

bool Function_276(int[] iParam0) //Position: 0xFF8F / 65423
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
		Function_282();
		return 0;
	}
	return 1;
}

void Function_277() //Position: 0xFFDC / 65500
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_1233)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_1234) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_1234);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_278(&Global_54076, &bVar1) > 100.0f)
			{
				Function_251(&bVar1);
				Var3 = Function_251(&bVar1);
				if (!Function_20(iLocal_1232, bVar2))
				{
					Function_256(&iLocal_1232, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_46(&iLocal_1232, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_278(var uParam0, int iParam1) //Position: 0x1006C / 65644
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_279(&uParam0);
			Var0 = Function_279(&uParam0);
			Function_279(&iParam1);
			Var2 = Function_279(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_279(int iParam0) //Position: 0x10109 / 65801
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

int Function_280(bool bParam0) //Position: 0x10177 / 65911
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_328(&bParam0, 2048))
	{
		return 0;
	}
	uLocal_1234 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_1233 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&bVar1))
	{
		Function_251(&bVar1);
		Var2 = Function_251(&bVar1);
		Function_254(&bVar1);
		Var4 = Function_254(&bVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_1234);
		bVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

int Function_281(char* cParam0) //Position: 0x102A1 / 66209
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

void Function_282() //Position: 0x1032E / 66350
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

void Function_283() //Position: 0x103A0 / 66464
{
	int iVar0;
	var uVar1;
	
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_07", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	if ((!Function_137(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_132(&Global_54076, 16, 1, 0);
	}
	bLocal_1097 = CREATE_JOURNAL_ENTRY("tes_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_1097, 0);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_2 + 248);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_2 + 248);
	uLocal_1166[0] = Function_290(1, Global_46850[2], 5);
	uLocal_1166[1] = Function_290(4, Global_46850[2], 5);
	uLocal_1166[2] = Function_290(0, Global_46850[2], 5);
	Function_289(uLocal_1166[2]);
	Function_289(uLocal_1166[1]);
	Function_289(uLocal_1166[0]);
	Function_209(Global_46955, 1);
	if (Function_206(Global_46955) == 0)
	{
		Function_256(&bLocal_1181, 1024);
	}
	if (Function_206(Global_46955) > 1)
	{
		Function_256(&bLocal_1181, 0x40000000);
	}
	uLocal_953[0] = Function_230("tesoroAzul", "wall01", 4);
	uLocal_953[1] = Function_230("tesoroAzul", "wall01", 3);
	uLocal_953[2] = Function_230("tesoroAzul", "wall01", 2);
	uLocal_953[3] = Function_230("tesoroAzul", "wall01", 1);
	uLocal_963[0] = Function_230("tesoroAzul", "house04", 1);
	uLocal_963[1] = Function_230("tesoroAzul", "house04", 2);
	uLocal_963[2] = Function_230("tesoroAzul", "house02", 1);
	uLocal_963[3] = Function_230("tesoroAzul", "house02", 2);
	Function_250(&(uLocal_963[0]), 0);
	Function_250(&(uLocal_963[1]), 0);
	Function_250(&(uLocal_963[2]), 0);
	Function_250(&(uLocal_963[3]), 0);
	uLocal_973[0] = Function_230("tesoroAzul", "house01", 1);
	uLocal_973[1] = Function_230("tesoroAzul", "house01", 2);
	CLOSE_DOOR_FAST(&(uLocal_973[0]));
	CLOSE_DOOR_FAST(&(uLocal_973[1]));
	if (!IS_DOOR_LOCKED(&(uLocal_973[0])))
	{
		Function_250(&(uLocal_973[0]), 0);
	}
	if (!IS_DOOR_LOCKED(&(uLocal_973[1])))
	{
		Function_250(&(uLocal_973[1]), 0);
	}
	Function_288(&iLocal_1047, 461, 3, 1);
	Function_288(&iLocal_1047, 462, 3, 1);
	Function_288(&iLocal_1047, 406, 3, 1);
	Function_288(&iLocal_1047, 408, 3, 1);
	Function_286(&iLocal_1047, "action_areas", 10, 0);
	Function_286(&iLocal_1047, "door_kick_rifle_to_coh", 1, 0);
	Function_286(&iLocal_1047, "shotgun_doubleBarrel01x", 0, 1);
	Function_286(&iLocal_1047, "AA_tesoro_intro_cover", 5, 0);
	Function_286(&iLocal_1047, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_286(&iLocal_1047, "shakehands_link", 1, 0);
	Function_286(&iLocal_1047, "Locked_Footlocker", 1, 0);
	Function_288(&iLocal_1047, 1128, 3, 1);
	Function_253(&iLocal_2 + 2784);
	uLocal_1031 = CREATE_LAYOUT("TES_AA_Layout");
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!(iVar0 != 10 || iVar0 != 11))
		{
			if (!Function_18(&(Global_11988[iVar02]), 2) || Function_18(&(Global_11988[iVar02]), 4))
			{
				bLocal_1209 = true;
			}
		}
		iVar0++;
	}
	if (!bLocal_1209)
	{
		uVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_06");
		SC_CHALLENGE_LAUNCH(&uVar1);
		if (!Function_218(&iLocal_1102))
		{
			Function_221(&iLocal_1102);
		}
		else
		{
			Function_219(&iLocal_1102);
		}
	}
	Function_284(32768);
	return;
}

void Function_284(int iParam0) //Position: 0x10832 / 67634
{
	Function_285(&Global_43580, iParam0);
	return;
}

void Function_285(var uParam0, int iParam1) //Position: 0x10840 / 67648
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

var Function_286(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x10868 / 67688
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_287(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_274(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_287(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x108A6 / 67750
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_274(&(Param0[iVar02]), 4);
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

var Function_288(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10975 / 67957
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_274(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_274(&(Param0[iVar02]), 8);
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

void Function_289(int iParam0) //Position: 0x10A51 / 68177
{
	var uVar0;
	
	if (!Function_34(iParam0))
	{
		Function_32();
		return;
	}
	uVar0 = Function_31(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

int Function_290(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10A75 / 68213
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_294(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_291(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_291(bParam0, bParam1, bParam2, 4294967295);
}

int Function_291(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x10AD3 / 68307
{
	var uVar0;
	
	if (!Function_293(bParam2))
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
	uVar0 = Function_294(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_292(uVar0);
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

var Function_292(int iParam0) //Position: 0x10C37 / 68663
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

bool Function_293(int iParam0) //Position: 0x10C75 / 68725
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_294(int iParam0, int iParam1, int iParam2) //Position: 0x10C8A / 68746
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_295(int iParam0) //Position: 0x10CAA / 68778
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_328(&(Global_43791[iParam0]), 2048);
}

int Function_296(int iParam0, bool bParam1) //Position: 0x10CC8 / 68808
{
	int iVar0;
	
	iVar0 = Function_122(iParam0);
	if (!Function_30(iVar0))
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

void Function_297(char* cParam0) //Position: 0x10D06 / 68870
{
	if (!Function_337(128))
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

void Function_298(int iParam0, bool bParam1) //Position: 0x10D46 / 68934
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
		Function_299(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_299(var uParam0, bool bParam1) //Position: 0x10E36 / 69174
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &bParam1);
	return;
}

void Function_300(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x10E43 / 69187
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
		Function_301();
	}
	if (&bParam5)
	{
		Function_47(1048576);
	}
}

void Function_301() //Position: 0x10F51 / 69457
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_47(16384);
	}
	return;
}

bool Function_302(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x10F6D / 69485
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_328(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_296(49, 0))
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

void Function_303(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1102B / 69675
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
		Function_304();
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

void Function_304() //Position: 0x11119 / 69913
{
	int iVar0;
	
	Global_41176 = Function_305(StackVal);
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

int Function_305(int iParam0) //Position: 0x11167 / 69991
{
	if (!Function_306(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_306(int iParam0) //Position: 0x1117F / 70015
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_307(int iParam0) //Position: 0x11194 / 70036
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_308(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x111A7 / 70055
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_337(2))
	{
		return;
	}
	if (Function_328(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_309(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_332(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_309(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x1125F / 70239
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_328(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_270(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_103(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_310(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_310(int iParam0, struct<2> Param1) //Position: 0x113E0 / 70624
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_103(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_103(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_103(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_103(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_103(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_103(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_311(var uParam0, var uParam1, struct<2> Param2) //Position: 0x11526 / 70950
{
	if (Function_103(StackVal, Param2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_318(StackVal, uParam0, &uParam1, Param2);
		Function_317(StackVal, uParam0, &uParam1, Param2);
		Function_316(StackVal, uParam0, &uParam1, Param2);
		Function_315(StackVal, uParam0, &uParam1, Param2);
		Function_314(StackVal, uParam0, &uParam1, Param2);
		Function_312(StackVal, uParam0, &uParam1, Param2);
	}
}

void Function_312(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x115D6 / 71126
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_313(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_313(struct<2> Param0, struct<2> Param2) //Position: 0x1163D / 71229
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_314(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x11669 / 71273
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_313(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_315(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x116D2 / 71378
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_313(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_316(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x1173D / 71485
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_313(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_317(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x117A3 / 71587
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_313(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_318(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x1180C / 71692
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_313(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

void Function_319(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x11870 / 71792
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

void Function_320(int iParam0, var uParam1, int iParam2) //Position: 0x118CF / 71887
{
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_326(iParam0, &uParam1, &iParam2);
		Function_325(iParam0, &uParam1, &iParam2);
		Function_324(iParam0, &uParam1, &iParam2);
		Function_323(iParam0, &uParam1, &iParam2);
		Function_322(iParam0, &uParam1, &iParam2);
		Function_321(iParam0, &uParam1, &iParam2);
	}
	return;
}

void Function_321(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x11977 / 72055
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

void Function_322(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x119DE / 72158
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

void Function_323(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x11A47 / 72263
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

void Function_324(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x11AB2 / 72370
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

void Function_325(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x11B18 / 72472
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

void Function_326(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x11B81 / 72577
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

int Function_327(int iParam0) //Position: 0x11BF4 / 72692
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_328(&(Global_43791[iParam0]), 4);
}

bool Function_328(var uParam0, int iParam1) //Position: 0x11C10 / 72720
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_329(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x11C2D / 72749
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
	if (Function_328(&(Global_43791[iParam2]), 0x40000000))
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

int Function_330() //Position: 0x11D16 / 72982
{
	return 0;
}

void Function_331(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x11D1D / 72989
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
	if (!Function_328(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_332(&(Global_43791[iParam2]), 0x40000000);
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

void Function_332(var uParam0, int iParam1) //Position: 0x11E0D / 73229
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_333() //Position: 0x11E1E / 73246
{
	var uVar0;
	
	Function_334(3, 3);
	uVar0 = &uVar0;
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_sleeponbench_n_any", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanknife", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/flirting_whore", 1, 0);
	Function_286(&iLocal_724 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	if (!Function_271(&iLocal_724 + 8))
	{
		return 0;
	}
	iLocal_724 = FIND_NAMED_LAYOUT("TesoroAzul_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_724))
	{
		iLocal_724 = CREATE_LAYOUT("TesoroAzul_layout");
	}
	*(&iLocal_724 + 304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_sleeponbench_n_any", "sit_sleeponbench_n_any", Vector(-3244,408f, 38,19928f, 4542,214f), Vector(0.0f, 180,1627f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 304), 0);
	*(&iLocal_724 + 312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_sleeponbench_n_any1", "sit_sleeponbench_n_any", Vector(-3255,032f, 39,29401f, 4558,21f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 312), 0);
	*(&iLocal_724 + 320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_sleeponbench_n_any5", "sit_sleeponbench_n_any", Vector(-3283,97f, 39,26327f, 4559,062f), Vector(0.0f, -37,67156f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 320), 0);
	*(&iLocal_724 + 328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_scripted", "sleeping_scripted", Vector(-3291,927f, 39,1667f, 4565,734f), Vector(0.0f, -33,03367f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 328), 0);
	*(&iLocal_724 + 336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_scripted1", "sleeping_scripted", Vector(-3239,592f, 38,42777f, 4535,862f), Vector(0.0f, -106,6595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 336), 0);
	*(&iLocal_724 + 344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_scripted3", "sleeping_scripted", Vector(-3240,963f, 38,20451f, 4535,047f), Vector(0.0f, 23,49129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 344), 0);
	*(&iLocal_724 + 352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-3281,87f, 39,25564f, 4557,682f), Vector(0.0f, 37,22447f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 352), 0);
	*(&iLocal_724 + 360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3270,622f, 40,16965f, 4541,397f), Vector(0.0f, 177,9028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 360), 0);
	*(&iLocal_724 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3273,17f, 40,14159f, 4538,505f), Vector(0.0f, 121,8172f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 368), 0);
	*(&iLocal_724 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3261,249f, 42,59938f, 4556,613f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 376), 0);
	*(&iLocal_724 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-3255,384f, 42,57737f, 4556,627f), Vector(0.0f, -53,12926f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 384), 0);
	*(&iLocal_724 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-3282,434f, 42,19703f, 4558,405f), Vector(0.0f, 92,34225f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 392), 0);
	*(&iLocal_724 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-3278,809f, 42,23241f, 4562,368f), Vector(0.0f, -168,3611f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 400), 0);
	*(&iLocal_724 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "Pee", "Pee", Vector(-3258,915f, 38,1489f, 4547,365f), Vector(0.0f, 90,20707f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 408), 0);
	*(&iLocal_724 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "Pee1", "Pee", Vector(-3260,984f, 38,19858f, 4545,676f), Vector(0.0f, 195,0909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 416), 0);
	*(&iLocal_724 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_peeing_b_any", "stand_peeing_b_any", Vector(-3243,81f, 39,15283f, 4568,422f), Vector(0.0f, -148,3599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 424), 0);
	*(&iLocal_724 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_peeing_b_any1", "stand_peeing_b_any", Vector(-3268f, 39,23588f, 4556,13f), Vector(0.0f, 157,9097f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 432), 0);
	*(&iLocal_724 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_peeing_b_any2", "stand_peeing_b_any", Vector(-3250,518f, 38,36234f, 4552,079f), Vector(0.0f, -42,68856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 440), 0);
	*(&iLocal_724 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "dealer_and_customer", "dealer_and_customer", Vector(-3296,065f, 39,1528f, 4559,927f), Vector(0.0f, -56,37352f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 448), 0);
	*(&iLocal_724 + 456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "dealer_and_customer1", "dealer_and_customer", Vector(-3272,835f, 38,14893f, 4541,657f), Vector(0.0f, 130,773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 456), 0);
	*(&iLocal_724 + 464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "dealer_and_customer2", "dealer_and_customer", Vector(-3248.0f, 39,15283f, 4568,246f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 464), 0);
	*(&iLocal_724 + 472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "nsit_docks", "nsit_docks", Vector(-3282,287f, 39,27118f, 4551,203f), Vector(0.0f, 35,6928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 472), 0);
	*(&iLocal_724 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_docks1", "nsit_docks", Vector(-3275,372f, 40,2414f, 4538,514f), Vector(0.0f, 179,2844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 480), 0);
	*(&iLocal_724 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_docks2", "nsit_docks", Vector(-3282,221f, 42,50676f, 4565,349f), Vector(0.0f, 220,5138f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 488), 0);
	*(&iLocal_724 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-3272,134f, 40,16892f, 4541,868f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 496), 0);
	*(&iLocal_724 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", Vector(-3258,941f, 42,57413f, 4556,805f), Vector(0.0f, 181,2949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 504), 0);
	*(&iLocal_724 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_play_harmonica2", "sit_ground_play_harmonica", Vector(-3252,027f, 38,25563f, 4540,378f), Vector(0.0f, 178,3351f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 512), 0);
	*(&iLocal_724 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_cleanknife", "sit_cleanknife", Vector(-3256,346f, 39,24395f, 4558,189f), Vector(0.0f, -0,3677738f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 520), 0);
	*(&iLocal_724 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-3262,394f, 38,17802f, 4548,206f), Vector(0.0f, 90,68082f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 528), 0);
	*(&iLocal_724 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-3242,475f, 39,25019f, 4566,129f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 536), 0);
	*(&iLocal_724 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-3284.0f, 38,43526f, 4549,148f), Vector(0.0f, 57,12309f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 544), 0);
	*(&iLocal_724 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_smoke", "sit_ground_smoke", Vector(-3292.0f, 39,1528f, 4551,171f), Vector(0.0f, -178,6161f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 552), 0);
	*(&iLocal_724 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_smoke1", "sit_ground_smoke", Vector(-3278,594f, 40,14517f, 4536,559f), Vector(0.0f, -182,5346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 560), 0);
	*(&iLocal_724 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_smoke2", "sit_ground_smoke", Vector(-3268,508f, 38,14893f, 4542,967f), Vector(0.0f, -143,1388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 568), 0);
	*(&iLocal_724 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_smoke3", "sit_ground_smoke", Vector(-3276,293f, 39,2479f, 4560,752f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 576), 0);
	*(&iLocal_724 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_ground_smoke4", "sit_ground_smoke", Vector(-3272,092f, 39,19081f, 4558,986f), Vector(0.0f, -89,58073f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 584), 0);
	*(&iLocal_724 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_headinhands_n_any01", "sit_headinhands_n_any", Vector(-3268,984f, 38,35751f, 4530,393f), Vector(0.0f, -182,2507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 592), 0);
	*(&iLocal_724 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sit_cleanpistol", "sit_cleanpistol", Vector(-3271,569f, 38,19445f, 4543,613f), Vector(0.0f, 138,6318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 600), 0);
	*(&iLocal_724 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-3240,719f, 38,20005f, 4542,776f), Vector(0.0f, 189,2953f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 608), 0);
	*(&iLocal_724 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-3285,752f, 39,26874f, 4557,189f), Vector(0.0f, 39,35398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 616), 0);
	*(&iLocal_724 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "flirting_whore2", "flirting_whore", Vector(-3238,646f, 38,1489f, 4545,382f), Vector(0.0f, -203,9036f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 624), 0);
	*(&iLocal_724 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "flirting_whore3", "flirting_whore", Vector(-3248.0f, 38,14893f, 4544.0f), Vector(0.0f, -162,2322f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 632), 0);
	*(&iLocal_724 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "flirting_whore4", "flirting_whore", Vector(-3256,612f, 38,14896f, 4540,333f), Vector(0.0f, -178,0666f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 640), 0);
	*(&iLocal_724 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-3278,511f, 38,1489f, 4533,941f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 648), 0);
	*(&iLocal_724 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted1", "sleeping_wall_scripted", Vector(-3276.0f, 38,1489f, 4529,195f), Vector(0.0f, -182,3298f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 656), 0);
	*(&iLocal_724 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(-3277,5f, 38,14893f, 4538,014f), Vector(0.0f, 96,54556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 664), 0);
	*(&iLocal_724 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted3", "sleeping_wall_scripted", Vector(-3229,556f, 38,14893f, 4546,674f), Vector(0.0f, -90,23033f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 672), 0);
	*(&iLocal_724 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted4", "sleeping_wall_scripted", Vector(-3229,986f, 38,14896f, 4551,475f), Vector(0.0f, -88,88425f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 680), 0);
	*(&iLocal_724 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted5", "sleeping_wall_scripted", Vector(-3299,955f, 39,15283f, 4544,85f), Vector(0.0f, 82,67175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 688), 0);
	*(&iLocal_724 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "sleeping_wall_scripted6", "sleeping_wall_scripted", Vector(-3299,905f, 39,15283f, 4549,054f), Vector(0.0f, 85,54407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 696), 0);
	*(&iLocal_724 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", Vector(-3230f, 38,14893f, 4548,997f), Vector(0.0f, -111,0893f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 704), 0);
	*(&iLocal_724 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_724, "stand_lookdistance_w_any8", "stand_lookdistance_w_any", Vector(-3300,847f, 39,15283f, 4547,111f), Vector(0.0f, 96,1373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_724 + 712), 0);
	return 1;
}

void Function_334(int iParam0, int iParam1) //Position: 0x1372A / 79658
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

bool Function_335() //Position: 0x13774 / 79732
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	Function_334(3, 3);
	uVar0 = &uVar0;
	Function_286(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_286(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/shotgun_boss", 1, 0);
	Function_286(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/door_kick_rifle_to_coh", 1, 0);
	Function_286(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/tes_coverintro_player", 1, 0);
	Function_286(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/tes_coverintro_sheriff", 1, 0);
	Function_286(&iLocal_2 + 8, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	if (!Function_271(&iLocal_2 + 8))
	{
		return 0;
	}
	iLocal_2 = FIND_NAMED_LAYOUT("TesoroAzul_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_2))
	{
		iLocal_2 = CREATE_LAYOUT("TesoroAzul_layout");
	}
	*(&iLocal_2 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_sheriffFarmInside", 2,802597E-45f, Vector(-3323,313f, 40,785f, 4552,968f), Vector(0.0f, 0.0f, 0.0f), Vector(8,375486f, 7,088272f, 7,849358f));
	*(&iLocal_2 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_sheriffSupplyInside", 2,802597E-45f, Vector(-3300,955f, 38,1489f, 4529,81f), Vector(0.0f, 0.0f, 0.0f), Vector(4,882275f, 3,950875f, 4,888096f));
	*(&iLocal_2 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_sheriffWhoreInside", 2,802597E-45f, Vector(-3220,593f, 37,52043f, 4533,755f), Vector(0.0f, -19,37662f, 0.0f), Vector(5,148424f, 6,233284f, 6,233284f));
	*(&iLocal_2 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_sheriffChurchInside", 2,802597E-45f, Vector(-3232,017f, 38,8161f, 4565,574f), Vector(0.0f, 0.0f, 0.0f), Vector(5,300668f, 7,731307f, 6,220103f));
	*(&iLocal_2 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_backGate", 2,802597E-45f, Vector(-3300,548f, 39,10523f, 4546,712f), Vector(0.0f, 0.0f, 0.0f), Vector(3,90573f, 4,052313f, 5,641007f));
	*(&iLocal_2 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_frontGate", 2,802597E-45f, Vector(-3230,286f, 37,65789f, 4553,479f), Vector(0.0f, 81,40613f, 0.0f), Vector(4,208195f, 5,833527f, 6,556743f));
	*(&iLocal_2 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_checkInside", 2,802597E-45f, Vector(-3265,379f, 38,14893f, 4548,498f), Vector(0.0f, 0.0f, 0.0f), Vector(125,8221f, 26,57143f, 73,20856f));
	*(&iLocal_2 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_wholeTown", 2,802597E-45f, Vector(-3266,199f, 38,14893f, 4548,644f), Vector(0.0f, 0.0f, 0.0f), Vector(62,77723f, 38,81983f, 38,81983f));
	*(&iLocal_2 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_prosIn", 2,802597E-45f, Vector(-3265,185f, 38,14893f, 4548,972f), Vector(0.0f, 0.0f, 0.0f), Vector(49,08432f, 30,48538f, 32,94942f));
	*(&iLocal_2 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_captiveLeaving", 2,802597E-45f, Vector(-3243,245f, 38,1489f, 4556.0f), Vector(0.0f, 0.0f, 0.0f), Vector(13,33256f, 2,798824f, 2,798824f));
	*(&iLocal_2 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "pimpVolume", 2,802597E-45f, Vector(-3241,411f, 39,56648f, 4540,728f), Vector(0.0f, -0,7841256f, 0.0f), Vector(12,87314f, 6,866024f, 12,52157f));
	*(&iLocal_2 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_gateGuyStayInVolume", 2,802597E-45f, Vector(-3237,342f, 38,69643f, 4549,063f), Vector(0.0f, 0.0f, 0.0f), Vector(2,591131f, 3,674161f, 7,622671f));
	*(&iLocal_2 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_addBlipFirstSquad", 2,802597E-45f, Vector(-3266,199f, 38,14893f, 4548,644f), Vector(0.0f, 0.0f, 0.0f), Vector(61,86731f, 38,81983f, 38,81983f));
	*(&iLocal_2 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_gateGuyStayInVolume1", 2,802597E-45f, Vector(-3295,216f, 39,71419f, 4547,189f), Vector(0.0f, 0.0f, 0.0f), Vector(3,927643f, 3,674161f, 4,484834f));
	*(&iLocal_2 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_PreacherVolume", 2,802597E-45f, Vector(-3258,89f, 39,29543f, 4560,402f), Vector(0.0f, 0.0f, 0.0f), Vector(12,12044f, 9,254376f, 16,3949f));
	*(&iLocal_2 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_ChurchSquadRight", 2,802597E-45f, Vector(-3281,136f, 39,56166f, 4559,848f), Vector(0.0f, -56,89914f, 0.0f), Vector(7,039056f, 7,702643f, 5,641255f));
	*(&iLocal_2 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_wholeTown1", 2,802597E-45f, Vector(-3262,857f, 38,14893f, 4540,492f), Vector(0.0f, 0.0f, 0.0f), Vector(52,07693f, 23,60052f, 20,23231f));
	*(&iLocal_2 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_ambientExclusion", 2,802597E-45f, Vector(-3263,76f, 38,14893f, 4548,644f), Vector(0.0f, 0.0f, 0.0f), Vector(103,9709f, 38,81983f, 39,80967f));
	*(&iLocal_2 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_JuanDominguezObjective", 2,802597E-45f, Vector(-3233,773f, 38,87122f, 4549,194f), Vector(0.0f, 0.0f, 0.0f), Vector(11,6645f, 3,613787f, 9,074621f));
	*(&iLocal_2 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "pimpVolume1", 2,802597E-45f, Vector(-3240,726f, 39,03219f, 4539,12f), Vector(0.0f, -0,7841256f, 0.0f), Vector(3,035321f, 1,864784f, 3,384375f));
	*(&iLocal_2 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_pimpHouse", 2,802597E-45f, Vector(-3242,237f, 39,40137f, 4538,768f), Vector(0.0f, -0,7841256f, 0.0f), Vector(7,098369f, 2,349428f, 4,644449f));
	*(&iLocal_2 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_prosThreeGuysLeft", 2,802597E-45f, Vector(-3263,773f, 38,14893f, 4547,35f), Vector(0.0f, 0.0f, 0.0f), Vector(6,90598f, 6,90598f, 6,90598f));
	*(&iLocal_2 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_defendRoof", 2,802597E-45f, Vector(-3258,516f, 43,4594f, 4558,277f), Vector(0.0f, 0.0f, 0.0f), Vector(8,522068f, 2,392462f, 2,60385f));
	*(&iLocal_2 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "nv_prosIn1", 2,802597E-45f, Vector(-3263,026f, 38,14893f, 4548,565f), Vector(0.0f, 0.0f, 0.0f), Vector(27,91771f, 30,48538f, 13,88249f));
	*(&iLocal_2 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_DeputyGoToSpot", 2,802597E-45f, Vector(-2764,88f, 33,79f, 4287,68f), Vector(0.0f, -10,51184f, 0.0f), Vector(25,21913f, 14,58265f, 27,41931f));
	*(&iLocal_2 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_tes_startObjective", 2,802597E-45f, Vector(-3263,784f, 41,2887f, 4548,498f), Vector(0.0f, 0.0f, 0.0f), Vector(380,0691f, 55,79219f, 209,5086f));
	*(&iLocal_2 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_frontGate1", 2,802597E-45f, Vector(-3229,774f, 38,09704f, 4548,959f), Vector(0.0f, -0,00556294f, 0.0f), Vector(5,629417f, 4,354507f, 6,005315f));
	*(&iLocal_2 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_voltureSpawn", 2,802597E-45f, Vector(-3242,858f, 55,30248f, 4549,83f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 2.0f, 6.0f));
	*(&iLocal_2 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_EndingHouse", 2,802597E-45f, Vector(-3244,254f, 40,59864f, 4562,46f), Vector(0.0f, 0.0f, 0.0f), Vector(7,812244f, 4,966928f, 4,79681f));
	*(&iLocal_2 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_pimpStayInVolume", 2,802597E-45f, Vector(-3264,027f, 39,56648f, 4549,843f), Vector(0.0f, -0,7841256f, 0.0f), Vector(44,60882f, 6,866024f, 8,43239f));
	*(&iLocal_2 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_TriggerPriest", 2,802597E-45f, Vector(-3258,558f, 38,1489f, 4547,677f), Vector(0.0f, 0.0f, 0.0f), Vector(22,5079f, 11,37141f, 17,14375f));
	*(&iLocal_2 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_horseWander1", 2,802597E-45f, Vector(-3238,17f, 37,25783f, 4525,896f), Vector(0.0f, 0.0f, 0.0f), Vector(4,722734f, 6,491456f, 4,125681f));
	*(&iLocal_2 + 368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_horseWander2", 2,802597E-45f, Vector(-3294,01f, 39,15283f, 4572,377f), Vector(0.0f, 0.0f, 0.0f), Vector(5,951175f, 7,14141f, 4,919638f));
	*(&iLocal_2 + 376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_TriggerPimp", 2,802597E-45f, Vector(-3270,797f, 37,73671f, 4548,326f), Vector(0.0f, 0.0f, 0.0f), Vector(37,49358f, 19,4779f, 31,47092f));
	*(&iLocal_2 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "f_startIntro", 4,203895E-45f, Vector(-3217,856f, 37,95359f, 4534,051f), Vector(0.0f, 54,46543f, 0.0f), Vector(3,070723f, 1,5f, 2,366489f));
	*(&iLocal_2 + 392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_SheriffInTown", 2,802597E-45f, Vector(-3234,562f, 37,72468f, 4548,97f), Vector(0.0f, 0.0f, 0.0f), Vector(5,893853f, 5,542946f, 4,184093f));
	*(&iLocal_2 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_PlayerAtCover", 2,802597E-45f, Vector(-3245,832f, 38,14893f, 4552,966f), Vector(0.0f, 0.0f, 0.0f), Vector(3,057167f, 4,316301f, 4,089939f));
	*(&iLocal_2 + 408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_PimpStayInVolume01", 2,802597E-45f, Vector(-3270,804f, 37,73671f, 4547,567f), Vector(0.0f, 0.0f, 0.0f), Vector(42,3812f, 19,4779f, 14,35036f));
	*(&iLocal_2 + 416) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_GetGuyOut", 2,802597E-45f, Vector(-3254,189f, 38,43877f, 4536,927f), Vector(0.0f, -25,78424f, 0.0f), Vector(5,775861f, 7,103632f, 6,923692f));
	*(&iLocal_2 + 424) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_SendGuyOut", 2,802597E-45f, Vector(-3243,306f, 38,1489f, 4550,042f), Vector(0.0f, 0.0f, 0.0f), Vector(10,38934f, 10,54231f, 30,18468f));
	*(&iLocal_2 + 432) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_NotTargetable", 2,802597E-45f, Vector(-3266,1f, 37,73671f, 4547,991f), Vector(0.0f, 0.0f, 0.0f), Vector(126,0061f, 47,51117f, 82,92996f));
	*(&iLocal_2 + 440) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_executionVol", 2,802597E-45f, Vector(-3244,584f, 39,58719f, 4563,567f), Vector(0.0f, 0.0f, 0.0f), Vector(1,507066f, 4,584162f, 1,749671f));
	*(&iLocal_2 + 448) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_PimpGoToVolume", 2,802597E-45f, Vector(-3286,166f, 38,05438f, 4547,425f), Vector(0.0f, 0.0f, 0.0f), Vector(11,54062f, 8,717119f, 9,990112f));
	*(&iLocal_2 + 456) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_PrintFirstObjective", 2,802597E-45f, Vector(-3251,118f, 37,73671f, 4547,991f), Vector(0.0f, 0.0f, 0.0f), Vector(192,2129f, 47,51117f, 82,92996f));
	*(&iLocal_2 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_CheckPlayerHorse", 2,802597E-45f, Vector(-3219,442f, 37,53819f, 4534,23f), Vector(0.0f, -31,19423f, 0.0f), Vector(9,467752f, 7,544872f, 7,61265f));
	*(&iLocal_2 + 472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_2, "v_EndingHouse1", 2,802597E-45f, Vector(-3244,254f, 40,59864f, 4562,46f), Vector(0.0f, 0.0f, 0.0f), Vector(9,660106f, 6,141775f, 5,931419f));
	*(&iLocal_2 + 480) = Vector(-3220.0f, 37,14499f, 4533,361f);
	*(&iLocal_2 + 480 + 12) = Vector(0.0f, -205,5809f, 0.0f);
	*(&iLocal_2 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_prosStart", Vector(-3220.0f, 37,14499f, 4533,361f), Vector(0.0f, -205,5809f, 0.0f));
	*(&iLocal_2 + 512) = Vector(-3232.0f, 39,15283f, 4568.0f);
	*(&iLocal_2 + 512 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_churchStart", Vector(-3232.0f, 39,15283f, 4568.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 544) = Vector(-3324,588f, 40,15336f, 4553,735f);
	*(&iLocal_2 + 544 + 12) = Vector(0.0f, -60,21358f, 0.0f);
	*(&iLocal_2 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_farmStart", Vector(-3324,588f, 40,15336f, 4553,735f), Vector(0.0f, -60,21358f, 0.0f));
	*(&iLocal_2 + 576) = Vector(-3300.0f, 38,14893f, 4528.0f);
	*(&iLocal_2 + 576 + 12) = Vector(0.0f, 169,0685f, 0.0f);
	*(&iLocal_2 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_supplyStart", Vector(-3300.0f, 38,14893f, 4528.0f), Vector(0.0f, 169,0685f, 0.0f));
	*(&iLocal_2 + 608) = Vector(-3225,961f, 37,14496f, 4535,234f);
	*(&iLocal_2 + 608 + 12) = Vector(0.0f, -171,9254f, 0.0f);
	*(&iLocal_2 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_corpseWhore1", Vector(-3225,961f, 37,14496f, 4535,234f), Vector(0.0f, -171,9254f, 0.0f));
	*(&iLocal_2 + 640) = Vector(-3233,622f, 37,72468f, 4546,665f);
	*(&iLocal_2 + 640 + 12) = Vector(0.0f, -150,4031f, 0.0f);
	*(&iLocal_2 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_corpseWhoreChurch", Vector(-3233,622f, 37,72468f, 4546,665f), Vector(0.0f, -150,4031f, 0.0f));
	*(&iLocal_2 + 672) = Vector(-3229,576f, 38,14893f, 4564.0f);
	*(&iLocal_2 + 672 + 12) = Vector(0.0f, 55,70581f, 0.0f);
	*(&iLocal_2 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_corpseChurch1", Vector(-3229,576f, 38,14893f, 4564.0f), Vector(0.0f, 55,70581f, 0.0f));
	*(&iLocal_2 + 704) = Vector(-3296.0f, 39,15283f, 4572.0f);
	*(&iLocal_2 + 704 + 12) = Vector(0.0f, 165,898f, 0.0f);
	*(&iLocal_2 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_corpseDealer1", Vector(-3296.0f, 39,15283f, 4572.0f), Vector(0.0f, 165,898f, 0.0f));
	*(&iLocal_2 + 736) = Vector(-3303,866f, 39,11914f, 4534,056f);
	*(&iLocal_2 + 736 + 12) = Vector(0.0f, -72,01543f, 0.0f);
	*(&iLocal_2 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_corpseSupplier1", Vector(-3303,866f, 39,11914f, 4534,056f), Vector(0.0f, -72,01543f, 0.0f));
	*(&iLocal_2 + 768) = Vector(-3300.0f, 39,15037f, 4547,564f);
	*(&iLocal_2 + 768 + 12) = Vector(0.0f, 73,85822f, 0.0f);
	*(&iLocal_2 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_corpseDealerSupplier", Vector(-3300.0f, 39,15037f, 4547,564f), Vector(0.0f, 73,85822f, 0.0f));
	*(&iLocal_2 + 800) = Vector(-3229,682f, 37,49239f, 4549,219f);
	*(&iLocal_2 + 800 + 12) = Vector(0.0f, 84,604f, 0.0f);
	*(&iLocal_2 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_DoorPosRt", Vector(-3229,682f, 37,49239f, 4549,219f), Vector(0.0f, 84,604f, 0.0f));
	*(&iLocal_2 + 832) = Vector(-3302,09f, 39,13883f, 4546,963f);
	*(&iLocal_2 + 832 + 12) = Vector(0.0f, -89,43679f, 0.0f);
	*(&iLocal_2 + 856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_DoorPosLt", Vector(-3302,09f, 39,13883f, 4546,963f), Vector(0.0f, -89,43679f, 0.0f));
	*(&iLocal_2 + 864) = Vector(-3296.0f, 39,15283f, 4571,571f);
	*(&iLocal_2 + 864 + 12) = Vector(0.0f, 177,2946f, 0.0f);
	*(&iLocal_2 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_DealerHorse1", Vector(-3296.0f, 39,15283f, 4571,571f), Vector(0.0f, 177,2946f, 0.0f));
	*(&iLocal_2 + 896) = Vector(-3291,992f, 39,15283f, 4572,339f);
	*(&iLocal_2 + 896 + 12) = Vector(0.0f, 182,6594f, 0.0f);
	*(&iLocal_2 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_DealerHorse2", Vector(-3291,992f, 39,15283f, 4572,339f), Vector(0.0f, 182,6594f, 0.0f));
	*(&iLocal_2 + 928) = Vector(-3294,19f, 38,1489f, 4525,177f);
	*(&iLocal_2 + 928 + 12) = Vector(0.0f, -182,9804f, 0.0f);
	*(&iLocal_2 + 952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_SupplierHorse1", Vector(-3294,19f, 38,1489f, 4525,177f), Vector(0.0f, -182,9804f, 0.0f));
	*(&iLocal_2 + 960) = Vector(-3239,152f, 37,50234f, 4525,9f);
	*(&iLocal_2 + 960 + 12) = Vector(0.0f, -5,857777f, 0.0f);
	*(&iLocal_2 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_whoreHorse1", Vector(-3239,152f, 37,50234f, 4525,9f), Vector(0.0f, -5,857777f, 0.0f));
	*(&iLocal_2 + 992) = Vector(-3296,004f, 38,12819f, 4525,267f);
	*(&iLocal_2 + 992 + 12) = Vector(0.0f, -182,9804f, 0.0f);
	*(&iLocal_2 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_SupplierHorse2", Vector(-3296,004f, 38,12819f, 4525,267f), Vector(0.0f, -182,9804f, 0.0f));
	*(&iLocal_2 + 1024) = Vector(-3237,127f, 37,61917f, 4526,047f);
	*(&iLocal_2 + 1024 + 12) = Vector(0.0f, 2,053689f, 0.0f);
	*(&iLocal_2 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_WhoreHorse2", Vector(-3237,127f, 37,61917f, 4526,047f), Vector(0.0f, 2,053689f, 0.0f));
	*(&iLocal_2 + 1056) = Vector(-3241,555f, 39,1528f, 4572,544f);
	*(&iLocal_2 + 1056 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_ChurchHorse1", Vector(-3241,555f, 39,1528f, 4572,544f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1088) = Vector(-3240.0f, 39,1528f, 4572,544f);
	*(&iLocal_2 + 1088 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_ChurchHorse2", Vector(-3240.0f, 39,1528f, 4572,544f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1120) = Vector(-3184,381f, 42,76007f, 4594,739f);
	*(&iLocal_2 + 1120 + 12) = Vector(0.0f, 48,94003f, 0.0f);
	*(&iLocal_2 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tesf_teleport", Vector(-3184,381f, 42,76007f, 4594,739f), Vector(0.0f, 48,94003f, 0.0f));
	*(&iLocal_2 + 1152) = Vector(-3233,63f, 39,00423f, 4549,049f);
	*(&iLocal_2 + 1152 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_DoorShootRt", Vector(-3233,63f, 39,00423f, 4549,049f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1184) = Vector(-3298,061f, 39,87785f, 4547,019f);
	*(&iLocal_2 + 1184 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_DoorShootLt", Vector(-3298,061f, 39,87785f, 4547,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1216) = Vector(-3245,41f, 39,23372f, 4563,421f);
	*(&iLocal_2 + 1216 + 12) = Vector(0.0f, -89,59062f, 0.0f);
	*(&iLocal_2 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "deputyObjectiveFlag", Vector(-3245,41f, 39,23372f, 4563,421f), Vector(0.0f, -89,59062f, 0.0f));
	*(&iLocal_2 + 1248) = Vector(-3234,332f, 38,23849f, 4549,019f);
	*(&iLocal_2 + 1248 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tes_leftSide_flag", Vector(-3234,332f, 38,23849f, 4549,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1280) = Vector(-3297,811f, 39,13767f, 4547,03f);
	*(&iLocal_2 + 1280 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "tes_rightSide_flag", Vector(-3297,811f, 39,13767f, 4547,03f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1312) = Vector(-3236,733f, 38,14892f, 4546,369f);
	*(&iLocal_2 + 1312 + 12) = Vector(0.0f, -127,6579f, 0.0f);
	*(&iLocal_2 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "nf_gateGuy", Vector(-3236,733f, 38,14892f, 4546,369f), Vector(0.0f, -127,6579f, 0.0f));
	*(&iLocal_2 + 1344) = Vector(-3236,958f, 38,14467f, 4551,277f);
	*(&iLocal_2 + 1344 + 12) = Vector(0.0f, -78,85402f, 0.0f);
	*(&iLocal_2 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_gateGuy01", Vector(-3236,958f, 38,14467f, 4551,277f), Vector(0.0f, -78,85402f, 0.0f));
	*(&iLocal_2 + 1376) = Vector(-3228,46f, 37,81367f, 4555,122f);
	*(&iLocal_2 + 1376 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "guardTeleportPosition01", Vector(-3228,46f, 37,81367f, 4555,122f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1408) = Vector(-3232,621f, 37,81367f, 4553,554f);
	*(&iLocal_2 + 1408 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "guardTeleportPosition02", Vector(-3232,621f, 37,81367f, 4553,554f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1440) = Vector(-3241,24f, 38,26578f, 4539,743f);
	*(&iLocal_2 + 1440 + 12) = Vector(0.0f, 169,5163f, -1.0f);
	*(&iLocal_2 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_FEMALE_PROS_01", Vector(-3241,24f, 38,26578f, 4539,743f), Vector(0.0f, 169,5163f, -1.0f));
	*(&iLocal_2 + 1472) = Vector(-3241,664f, 38,26411f, 4539,123f);
	*(&iLocal_2 + 1472 + 12) = Vector(0.0f, -198,3456f, -1.0f);
	*(&iLocal_2 + 1496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_FEMALE_PROS_02", Vector(-3241,664f, 38,26411f, 4539,123f), Vector(0.0f, -198,3456f, -1.0f));
	*(&iLocal_2 + 1504) = Vector(-3240,743f, 38,26026f, 4539,001f);
	*(&iLocal_2 + 1504 + 12) = Vector(0.0f, -178,1418f, -1.0f);
	*(&iLocal_2 + 1528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_FEMALE_PROS_03", Vector(-3240,743f, 38,26026f, 4539,001f), Vector(0.0f, -178,1418f, -1.0f));
	*(&iLocal_2 + 1536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_PIMP_BOSS", Vector(-3241,092f, 38,29401f, 4538,319f), Vector(0.0f, 166,3998f, -1.0f));
	*(&iLocal_2 + 1544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_PREACHER_BOSS", Vector(-3258,516f, 39,376f, 4566,383f), Vector(0.0f, 0.0f, -1.0f));
	*(&iLocal_2 + 1552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_FATHER_SQUAD_02", Vector(-3255,989f, 39,376f, 4566,669f), Vector(0.0f, 0.0f, -1.0f));
	*(&iLocal_2 + 1560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_FATHER_SQUAD_03", Vector(-3258,16f, 39,249f, 4563,27f), Vector(0.0f, 0.0f, -1.0f));
	*(&iLocal_2 + 1568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_PROSTITUTE1", Vector(-3251,827f, 38,19906f, 4552,458f), Vector(0.0f, -463,2202f, 0.0f));
	*(&iLocal_2 + 1576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_PROSTITUTE2", Vector(-3260,063f, 39,24408f, 4557,537f), Vector(0.0f, -475,7115f, 0.0f));
	*(&iLocal_2 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_PROSTITUTE3", Vector(-3264,477f, 38,14893f, 4539,657f), Vector(0.0f, -445,9531f, 0.0f));
	*(&iLocal_2 + 1592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO1", Vector(-3282,751f, 38,35536f, 4549,957f), Vector(0.0f, -79,01511f, 0.0f));
	*(&iLocal_2 + 1600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO2", Vector(-3269,925f, 40,05334f, 4535,914f), Vector(0.0f, -157,2591f, 0.0f));
	*(&iLocal_2 + 1608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO3", Vector(-3253,23f, 38,38774f, 4537,039f), Vector(0.0f, -119,3968f, 0.0f));
	*(&iLocal_2 + 1616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO4", Vector(-3278,533f, 39,21079f, 4560,232f), Vector(0.0f, -418,3815f, 0.0f));
	*(&iLocal_2 + 1624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO5", Vector(-3281,594f, 39,2916f, 4562,122f), Vector(0.0f, -443,398f, 0.0f));
	*(&iLocal_2 + 1632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO6", Vector(-3279,38f, 39,26727f, 4560,876f), Vector(0.0f, -422,9509f, 0.0f));
	*(&iLocal_2 + 1640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO7", Vector(-3269,58f, 39,40359f, 4555,325f), Vector(0.0f, -762,1315f, 0.0f));
	*(&iLocal_2 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO8", Vector(-3271,041f, 40,17388f, 4539,809f), Vector(0.0f, -632,2083f, 0.0f));
	*(&iLocal_2 + 1656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO9", Vector(-3276.0f, 38,1489f, 4542,28f), Vector(0.0f, -606,9f, 0.0f));
	*(&iLocal_2 + 1664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO10", Vector(-3232.0f, 37,88876f, 4552,16f), Vector(0.0f, -810,5383f, 0.0f));
	*(&iLocal_2 + 1672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO11", Vector(-3231,614f, 37,67611f, 4545,407f), Vector(0.0f, -452,5928f, 0.0f));
	*(&iLocal_2 + 1680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO12", Vector(-3299,131f, 38,85653f, 4549.0f), Vector(0.0f, -625,1725f, 0.0f));
	*(&iLocal_2 + 1688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TES_BANDITO13", Vector(-3299,629f, 39,06519f, 4544,829f), Vector(0.0f, -628,7875f, 0.0f));
	*(&iLocal_2 + 1696) = Vector(-3296,435f, 39,07924f, 4546,292f);
	*(&iLocal_2 + 1696 + 12) = Vector(0.0f, -273,264f, 0.0f);
	*(&iLocal_2 + 1720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_gateGuy02", Vector(-3296,435f, 39,07924f, 4546,292f), Vector(0.0f, -273,264f, 0.0f));
	*(&iLocal_2 + 1728) = Vector(-3296,542f, 38,98146f, 4547,552f);
	*(&iLocal_2 + 1728 + 12) = Vector(0.0f, -273,264f, 0.0f);
	*(&iLocal_2 + 1752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_gateGuy03", Vector(-3296,542f, 38,98146f, 4547,552f), Vector(0.0f, -273,264f, 0.0f));
	*(&iLocal_2 + 1760) = Vector(-3280,423f, 39,2916f, 4560,762f);
	*(&iLocal_2 + 1760 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "v_teleport02", Vector(-3280,423f, 39,2916f, 4560,762f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1792) = CREATE_OBJECTSET_IN_LAYOUT("rewardChestsSet", &iLocal_2, 8, 0);
	*(&iLocal_2 + 1800[03]) = Vector(-3293,726f, 39,14257f, 4561,292f);
	*(&iLocal_2 + 1800[03] + 12) = Vector(0.0f, -138,6533f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_rewardChest01", Vector(-3293,726f, 39,14257f, 4561,292f), Vector(0.0f, -138,6533f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_2 + 1792);
	*(&iLocal_2 + 1800[13]) = Vector(-3256,386f, 38,33931f, 4536,9f);
	*(&iLocal_2 + 1800[13] + 12) = Vector(0.0f, -157,7097f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_rewardChest02", Vector(-3256,386f, 38,33931f, 4536,9f), Vector(0.0f, -157,7097f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_2 + 1792);
	*(&iLocal_2 + 1800[23]) = Vector(-3260,063f, 42,35891f, 4556,905f);
	*(&iLocal_2 + 1800[23] + 12) = Vector(0.0f, -179,6612f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_rewardChest03", Vector(-3260,063f, 42,35891f, 4556,905f), Vector(0.0f, -179,6612f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_2 + 1792);
	*(&iLocal_2 + 1800[33]) = Vector(-3284,179f, 42,50474f, 4558,42f);
	*(&iLocal_2 + 1800[33] + 12) = Vector(0.0f, -462,3916f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_rewardChest05", Vector(-3284,179f, 42,50474f, 4558,42f), Vector(0.0f, -462,3916f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_2 + 1792);
	*(&iLocal_2 + 1904) = Vector(-3262,636f, 43,05503f, 4567,487f);
	*(&iLocal_2 + 1904 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_ladderPoint", Vector(-3262,636f, 43,05503f, 4567,487f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1936) = Vector(-3262,345f, 42,31497f, 4559,36f);
	*(&iLocal_2 + 1936 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 1960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_ladderPoint1", Vector(-3262,345f, 42,31497f, 4559,36f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 1968) = Vector(-3231,35f, 37,60664f, 4548,61f);
	*(&iLocal_2 + 1968 + 12) = Vector(0.0f, -33,738f, 0.0f);
	*(&iLocal_2 + 1992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_guyRunningOut1", Vector(-3231,35f, 37,60664f, 4548,61f), Vector(0.0f, -33,738f, 0.0f));
	*(&iLocal_2 + 2000) = Vector(-3228,545f, 37,48878f, 4550,17f);
	*(&iLocal_2 + 2000 + 12) = Vector(0.0f, -30,18377f, 0.0f);
	*(&iLocal_2 + 2024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_guyRunningOut2", Vector(-3228,545f, 37,48878f, 4550,17f), Vector(0.0f, -30,18377f, 0.0f));
	*(&iLocal_2 + 2032) = Vector(-3300,743f, 39,14547f, 4545,98f);
	*(&iLocal_2 + 2032 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 2056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_guyRunningOut3", Vector(-3300,743f, 39,14547f, 4545,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2064) = Vector(-3300,743f, 39,14547f, 4547,92f);
	*(&iLocal_2 + 2064 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_2 + 2088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_guyRunningOut4", Vector(-3300,743f, 39,14547f, 4547,92f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_2 + 2096) = Vector(-3220,105f, 37,11281f, 4549,591f);
	*(&iLocal_2 + 2096 + 12) = Vector(0.0f, 89,25315f, 0.0f);
	*(&iLocal_2 + 2120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "v_tes_SheriffGoToSpot", Vector(-3220,105f, 37,11281f, 4549,591f), Vector(0.0f, 89,25315f, 0.0f));
	*(&iLocal_2 + 2128) = Vector(-3246,624f, 39,20978f, 4563,427f);
	*(&iLocal_2 + 2128 + 12) = Vector(0.0f, -92,81906f, 0.0f);
	*(&iLocal_2 + 2152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_BossFlag", Vector(-3246,624f, 39,20978f, 4563,427f), Vector(0.0f, -92,81906f, 0.0f));
	*(&iLocal_2 + 2160) = Vector(-3244,251f, 38,3009f, 4542,222f);
	*(&iLocal_2 + 2160 + 12) = Vector(0.0f, -183,0775f, 0.0f);
	*(&iLocal_2 + 2184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_SheriffGringo", Vector(-3244,251f, 38,3009f, 4542,222f), Vector(0.0f, -183,0775f, 0.0f));
	*(&iLocal_2 + 2192) = Vector(-3250,776f, 38,00482f, 4534,076f);
	*(&iLocal_2 + 2192 + 12) = Vector(285,2712f, 193,5048f, -178,4847f);
	*(&iLocal_2 + 2216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_weaponPickup02", Vector(-3250,776f, 38,00482f, 4534,076f), Vector(285,2712f, 193,5048f, -178,4847f));
	*(&iLocal_2 + 2224) = Vector(-3242,264f, 39,52536f, 4565,281f);
	*(&iLocal_2 + 2224 + 12) = Vector(98,88873f, 175,957f, 0.0f);
	*(&iLocal_2 + 2248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_weaponPickup01", Vector(-3242,264f, 39,52536f, 4565,281f), Vector(98,88873f, 175,957f, 0.0f));
	*(&iLocal_2 + 2256) = Vector(-3272,117f, 39,52103f, 4561,81f);
	*(&iLocal_2 + 2256 + 12) = Vector(461,3647f, 177,405f, 3,741271f);
	*(&iLocal_2 + 2280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_weaponPickup03", Vector(-3272,117f, 39,52103f, 4561,81f), Vector(461,3647f, 177,405f, 3,741271f));
	*(&iLocal_2 + 2288) = Vector(-3236,945f, 37,90723f, 4548,759f);
	*(&iLocal_2 + 2288 + 12) = Vector(0.0f, 85,4296f, 0.0f);
	*(&iLocal_2 + 2312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_SheriffGoInTownLeft", Vector(-3236,945f, 37,90723f, 4548,759f), Vector(0.0f, 85,4296f, 0.0f));
	*(&iLocal_2 + 2320) = Vector(-3292.0f, 38,83525f, 4548,225f);
	*(&iLocal_2 + 2320 + 12) = Vector(0.0f, -88,03016f, 0.0f);
	*(&iLocal_2 + 2344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_SheriffGoInTownRight", Vector(-3292.0f, 38,83525f, 4548,225f), Vector(0.0f, -88,03016f, 0.0f));
	*(&iLocal_2 + 2352) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene1Set", &iLocal_2, 8, 0);
	*(&iLocal_2 + 2360[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_Cut1_BaddieGoto1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_2 + 2360[0], &iLocal_2 + 2352);
	*(&iLocal_2 + 2360[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_Cut1_BaddieGoto2", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_2 + 2360[1], &iLocal_2 + 2352);
	*(&iLocal_2 + 2384) = Vector(-3287,323f, 38,05438f, 4547,425f);
	*(&iLocal_2 + 2384 + 12) = Vector(0.0f, -85,52766f, 0.0f);
	*(&iLocal_2 + 2408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "v_PimpGoto", Vector(-3287,323f, 38,05438f, 4547,425f), Vector(0.0f, -85,52766f, 0.0f));
	*(&iLocal_2 + 2416) = Vector(-3224.0f, 37,32822f, 4546,445f);
	*(&iLocal_2 + 2416 + 12) = Vector(0.0f, -84,74841f, 0.0f);
	*(&iLocal_2 + 2440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_Horse0", Vector(-3224.0f, 37,32822f, 4546,445f), Vector(0.0f, -84,74841f, 0.0f));
	*(&iLocal_2 + 2448) = Vector(-3224.0f, 37,14493f, 4544f);
	*(&iLocal_2 + 2448 + 12) = Vector(0.0f, -87,93457f, 0.0f);
	*(&iLocal_2 + 2472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_Horse1", Vector(-3224.0f, 37,14493f, 4544f), Vector(0.0f, -87,93457f, 0.0f));
	*(&iLocal_2 + 2480) = Vector(-3242,17f, 39,22358f, 4563,479f);
	*(&iLocal_2 + 2480 + 12) = Vector(0.0f, 90.0f, 0.0f);
	*(&iLocal_2 + 2504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_teleportJohn", Vector(-3242,17f, 39,22358f, 4563,479f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_2 + 2512) = Vector(-3243,995f, 39,248f, 4563,506f);
	*(&iLocal_2 + 2512 + 12) = Vector(0.0f, 358,262f, 0.0f);
	*(&iLocal_2 + 2536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_teleportJohn01", Vector(-3243,995f, 39,248f, 4563,506f), Vector(0.0f, 358,262f, 0.0f));
	*(&iLocal_2 + 2544) = Vector(-3240.0f, 38,1489f, 4552.0f);
	*(&iLocal_2 + 2544 + 12) = Vector(0.0f, -224,5283f, 0.0f);
	*(&iLocal_2 + 2568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_SheriffShakePos", Vector(-3240.0f, 38,1489f, 4552.0f), Vector(0.0f, -224,5283f, 0.0f));
	*(&iLocal_2 + 2576) = Vector(-3254,846f, 37,99887f, 4544,597f);
	*(&iLocal_2 + 2576 + 12) = Vector(0.0f, -100,385f, 0.0f);
	*(&iLocal_2 + 2600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_bossGoToSpot", Vector(-3254,846f, 37,99887f, 4544,597f), Vector(0.0f, -100,385f, 0.0f));
	*(&iLocal_2 + 2608) = Vector(-3241,712f, 39,24794f, 4561,089f);
	*(&iLocal_2 + 2608 + 12) = Vector(0.0f, -268,9221f, 0.0f);
	*(&iLocal_2 + 2632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_gunChest", Vector(-3241,712f, 39,24794f, 4561,089f), Vector(0.0f, -268,9221f, 0.0f));
	*(&iLocal_2 + 2640) = Vector(-3218,711f, 37,145f, 4535,117f);
	*(&iLocal_2 + 2640 + 12) = Vector(0.0f, 60,751f, 0.0f);
	*(&iLocal_2 + 2664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_playerCover", Vector(-3218,711f, 37,145f, 4535,117f), Vector(0.0f, 60,751f, 0.0f));
	*(&iLocal_2 + 2672) = Vector(-3244,334f, 38,00027f, 4548,086f);
	*(&iLocal_2 + 2672 + 12) = Vector(0.0f, 90.0f, 0.0f);
	*(&iLocal_2 + 2696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_teleportJohnEnding", Vector(-3244,334f, 38,00027f, 4548,086f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_2 + 2704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "f_TeleportHorse", Vector(-3212f, 37,1451f, 4524.0f), Vector(0.0f, 126,3442f, 0.0f));
	*(&iLocal_2 + 2712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sit_headinhands_n_any", "sit_headinhands_n_any", Vector(-3244,338f, 38,30203f, 4542,589f), Vector(0.0f, -180.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_2 + 2712), 0);
	*(&iLocal_2 + 2720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "shotgun_boss", "shotgun_boss", Vector(-3257,012f, 39,26036f, 4559,685f), Vector(0.0f, 190,0254f, 0.0f));
	*(&iLocal_2 + 2728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "door_kick_rifle_to_coh", "door_kick_rifle_to_coh", Vector(-3243,193f, 39,29246f, 4559,008f), Vector(0.0f, -180.0f, 0.0f));
	*(&iLocal_2 + 2736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "TES_CoverIntro_Player", "TES_CoverIntro_Player", Vector(-3218,791f, 37,14441f, 4534,369f), Vector(0.0f, 53,11246f, 0.0f));
	*(&iLocal_2 + 2744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "TES_CoverIntro_Sheriff", "TES_CoverIntro_Sheriff", Vector(-3220,412f, 37,146f, 4533,669f), Vector(0.0f, -205,9385f, 0.0f));
	*(&iLocal_2 + 2752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "shakehands_link", "shakehands_link", Vector(-3240.0f, 38,1489f, 4552.0f), Vector(0.0f, 147,4366f, 0.0f));
	*(&iLocal_2 + 2760) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "ncover_low", Vector(-3232,171f, 38,49347f, 4565,38f), Vector(0.0f, 0,1224193f, 0.0f), 4);
	*(&iLocal_2 + 2768) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cover_low4", Vector(-3300,103f, 39,24572f, 4568,177f), Vector(0.0f, 0.0f, 0.0f), 4);
	*(&iLocal_2 + 2776) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cover_low5", Vector(-3301,151f, 38,43265f, 4528,36f), Vector(0.0f, -177,4746f, 0.0f), 4);
	*(&iLocal_2 + 2784) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "c_DeputyCover", Vector(-3242,76f, 39,23006f, 4559,802f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_2 + 2792) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "c_GateGuardCover01", Vector(-3228,199f, 37,54156f, 4554,29f), Vector(0.0f, -162,1901f, 0.0f), 1);
	*(&iLocal_2 + 2800) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sheriffStartCover", Vector(-3237,927f, 37,94839f, 4541,535f), Vector(0.0f, -181,2439f, 0.0f), 1);
	*(&iLocal_2 + 2808) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cover_low6", Vector(-3227,521f, 37,57331f, 4552,891f), Vector(0.0f, 105,1223f, 0.0f), 4);
	*(&iLocal_2 + 2816) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "cover_low7", Vector(-3218,667f, 37,2401f, 4534,249f), Vector(0.0f, -208,873f, 0.0f), 4);
	*(&iLocal_2 + 2824) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sheriff_2ndCover", Vector(-3244,517f, 39,14593f, 4552,298f), Vector(0.0f, 92,84489f, 0.0f), 4);
	*(&iLocal_2 + 2832) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_2, "sheriff_startingCover", Vector(-3219,834f, 37,14871f, 4533,474f), Vector(0.0f, 153,5474f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_2 + 2840) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_2, "c_ladderCurve");
	*(&iLocal_2 + 2848) = CREATE_CAMERA_IN_LAYOUT(&iLocal_2, "nchurchCam", 0);
	SET_CAMERA_POSITION(StackVal, &iLocal_2 + 2848, Vector(-3262,471f, 39,02226f, 4548,571f));
	SET_CAMERA_ORIENTATION(StackVal, &iLocal_2 + 2848, Vector(22,93538f, -153,98f, -0,7110495f), 0);
	*(&iLocal_2 + 2856) = CREATE_CAMERA_IN_LAYOUT(&iLocal_2, "whoreCam", 0);
	SET_CAMERA_POSITION(StackVal, &iLocal_2 + 2856, Vector(-3256.0f, 39,14336f, 4551,139f));
	SET_CAMERA_ORIENTATION(StackVal, &iLocal_2 + 2856, Vector(-1,268977f, -7,412613f, 1,252653f), 0);
	*(&iLocal_2 + 2864) = CREATE_CAMERA_IN_LAYOUT(&iLocal_2, "nsupplyCam", 0);
	SET_CAMERA_POSITION(StackVal, &iLocal_2 + 2864, Vector(-3288,135f, 39,90559f, 4545,801f));
	SET_CAMERA_ORIENTATION(StackVal, &iLocal_2 + 2864, Vector(0.0f, 0.0f, 0.0f), 0);
	*(&iLocal_2 + 2872) = CREATE_CAMERA_IN_LAYOUT(&iLocal_2, "nfarmerCam", 0);
	SET_CAMERA_POSITION(StackVal, &iLocal_2 + 2872, Vector(-3273,365f, 40,11851f, 4553,381f));
	SET_CAMERA_ORIENTATION(StackVal, &iLocal_2 + 2872, Vector(0.0f, 133,2872f, 0.0f), 0);
	*(&iLocal_2 + 2880) = CREATE_CAMERA_IN_LAYOUT(&iLocal_2, "bossCam", 0);
	SET_CAMERA_POSITION(StackVal, &iLocal_2 + 2880, Vector(-3243,529f, 39,54105f, 4548,9f));
	SET_CAMERA_ORIENTATION(StackVal, &iLocal_2 + 2880, Vector(0.0f, -94,01595f, 0.0f), 0);
	return 1;
}

void Function_336(int iParam0) //Position: 0x167AC / 92076
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

bool Function_337(int iParam0) //Position: 0x167E0 / 92128
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_338(struct<2>[] Param0, int iParam1) //Position: 0x167FC / 92156
{
	int iVar0;
	
	if (!Function_337(2))
	{
		return 0;
	}
	if (Function_328(&(Global_43791[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_18(&(Param0[iVar02]), 4))
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

int Function_339(int iParam0) //Position: 0x1686B / 92267
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
	if (Function_328(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

void Function_340(char* cParam0) //Position: 0x168D8 / 92376
{
	if (!Function_337(128))
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

