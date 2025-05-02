//Decompiled with MagicRDR v1.0
//Function Count : 198
//Statics Count : 1262
//Natives Count : 336
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 2;
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
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
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
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 65;
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
	var uLocal_363 = 1;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 1;
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
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	var uLocal_525 = 26;
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
	var uLocal_1099[4] = { 0, 0, 0, 0 };
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113[4] = { 0, 0, 0, 0 };
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125[3] = { 0, 0, 0 };
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
	struct<2> Local_1141 = { 0, 0 } ;
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
	struct<2> Local_1153 = { 0, 0 } ;
	var uLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	int iLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	char[] cLocal_1162[4] = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	int iLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	vector3 vLocal_1180[13] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar1;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_22 = 0;
	iLocal_23 = 0;
	iLocal_523 = 0;
	Local_1141 = Vector(-2069,74f, 19,431f, 2648,075f);
	uLocal_1144 = Vector(-2071,095f, 19,53035f, 2649,305f);
	uLocal_1147 = Vector(-2068,924f, 19,53035f, 2647,186f);
	uLocal_1150 = Vector(-2072,769f, 19,53035f, 2648,47f);
	Local_1153 = Vector(-2077,17f, 18,74f, 2642,87f);
	iLocal_1157 = 0;
	iLocal_1158 = 0;
	iLocal_1159 = 0;
	iLocal_524 = 0;
	Function_197("Initializing Armadillo", 3);
	SET_DUST_LEVEL(1);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_1166 = 1000;
		switch (iLocal_524)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_524 = 1;
				}
				iLocal_1166 = 0;
				break;
			
			case 0x00000001:
				if (Function_196())
				{
					Global_98961 = 0;
					iLocal_524 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 25, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
				}
				iLocal_1166 = 0;
				break;
			
			case 0x00000002:
				if (Function_187())
				{
					Function_186(&(Global_43791[iScriptParam_0]), 32);
					if (Function_185(14, 0))
					{
						Function_184(&(Global_11014[252]), 2);
					}
					else
					{
						Function_183(&(Global_11014[252]), 2);
					}
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "hhh"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "stand_announce2"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[03] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "hhh"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "stand_announce2"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "hhh"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "stand_yelling_mid"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[13] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "hhh"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "stand_yelling_mid"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen1"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[23] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen1"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen2"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[33] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen2"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen3"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[43] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen3"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen4"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[53] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen4"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen5"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[63] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen5"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen6"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[73] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen6"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen7"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[83] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "eee"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_preach_listen7"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_dnd_rowdydrink1"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[93] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_dnd_rowdydrink1"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_worried"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[103] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_worried"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_yelling"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[113] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_yelling"), 1, 0, 0, 0, 0, 1) };
					Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_dnd_rowdydrink"), 1, 0, 0, 0, 0, 1);
					vLocal_1180[123] = { StackVal, StackVal, Function_182(FIND_OBJECT_IN_LAYOUT(&iLocal_47, "fff"), FIND_OBJECT_IN_LAYOUT(&iLocal_47, "arm_dnd_rowdydrink"), 1, 0, 0, 0, 0, 1) };
					iLocal_524 = 3;
				}
				iLocal_1166 = 0;
				break;
			
			case 0x00000003:
				uLocal_1109 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ArmadilloVol", &iScriptParam_0, 2, 0);
				Function_181(&Global_11014, &Global_12796, iScriptParam_0);
				iLocal_524 = 4;
				iLocal_1166 = 0;
				break;
			
			case 0x00000004:
				if (Function_180(&Global_11014, &Global_12796, iScriptParam_0))
				{
					iLocal_524 = 5;
					iLocal_1166 = 0;
				}
				else
				{
					iLocal_1166 = 100;
				}
				break;
			
			case 0x00000005:
				if (Function_179(&(Global_43791[iScriptParam_0]), 16) && Function_178(Global_44085[iScriptParam_09]))
				{
					iLocal_524 = 6;
				}
				iLocal_1166 = 0;
				break;
			
			case 0x00000006:
				if (Function_185(3, 0) && !Function_185(23, 0))
				{
					Function_177(6, &uLocal_525, 30.0f);
					Function_176(StackVal, 6, &uLocal_525, Vector(-2128,634f, 16,583f, 2618,783f));
					Function_175(StackVal, 6, &uLocal_525, Vector(-2128,634f, 16,583f, 2618,783f));
					Function_174(StackVal, 6, &uLocal_525, Vector(-2128,634f, 16,583f, 2618,783f));
					Function_173(StackVal, 6, &uLocal_525, Vector(-2128,634f, 16,583f, 2618,783f));
					Function_172(StackVal, 6, &uLocal_525, Vector(-2128,634f, 16,583f, 2618,783f));
					Function_171(StackVal, 6, &uLocal_525, Vector(-2128,634f, 16,583f, 2618,783f));
					Function_170(6, &uLocal_525, &iLocal_31);
				}
				else
				{
					Function_177(6, &uLocal_525, 30.0f);
					Function_176(StackVal, 6, &uLocal_525, Vector(-2085,898f, 16,552f, 2613,133f));
					Function_175(StackVal, 6, &uLocal_525, Vector(-2086,503f, 16,962f, 2603,994f));
					Function_174(StackVal, 6, &uLocal_525, Vector(-2086,503f, 16,962f, 2603,994f));
					Function_173(StackVal, 6, &uLocal_525, Vector(-2089,548f, 16,962f, 2607,976f));
					Function_172(StackVal, 6, &uLocal_525, Vector(-2089,548f, 16,962f, 2607,976f));
					Function_171(StackVal, 6, &uLocal_525, Vector(-2085,898f, 16,552f, 2613,133f));
					Function_170(6, &uLocal_525, &iLocal_31);
				}
				Function_177(7, &uLocal_525, 30.0f);
				Function_176(StackVal, 7, &uLocal_525, Vector(-2162,298f, 19,974f, 2588,137f));
				Function_175(StackVal, 7, &uLocal_525, Vector(-2166,685f, 16,874f, 2593,884f));
				Function_174(StackVal, 7, &uLocal_525, Vector(-2117,659f, 17,03f, 2601,285f));
				Function_173(StackVal, 7, &uLocal_525, Vector(-2164,637f, 16,899f, 2620,142f));
				Function_172(StackVal, 7, &uLocal_525, Vector(-2086,503f, 16,962f, 2603,994f));
				Function_171(StackVal, 7, &uLocal_525, Vector(-2086,503f, 16,962f, 2603,994f));
				Function_170(7, &uLocal_525, &iLocal_31);
				Function_177(0, &uLocal_525, 40.0f);
				Function_169(0, &uLocal_525, &iLocal_47 + 1464);
				Function_175(StackVal, 0, &uLocal_525, Vector(-2125,318f, 16,894f, 2595,877f));
				Function_174(StackVal, 0, &uLocal_525, Vector(-2125,318f, 16,894f, 2595,877f));
				Function_173(StackVal, 0, &uLocal_525, Vector(-2125,318f, 16,894f, 2595,877f));
				Function_172(StackVal, 0, &uLocal_525, Vector(-2125,318f, 16,894f, 2595,877f));
				Function_168(0, &uLocal_525, &iLocal_47 + 1464);
				Function_170(0, &uLocal_525, &iLocal_31);
				Function_177(1, &uLocal_525, 40.0f);
				Function_176(StackVal, 1, &uLocal_525, Vector(-2139,334f, 16,87215f, 2593,638f));
				Function_175(StackVal, 1, &uLocal_525, Vector(-2139,334f, 16,87215f, 2593,638f));
				Function_174(StackVal, 1, &uLocal_525, Vector(-2139,334f, 16,87215f, 2593,638f));
				Function_173(StackVal, 1, &uLocal_525, Vector(-2139,334f, 16,87215f, 2593,638f));
				Function_172(StackVal, 1, &uLocal_525, Vector(-2139,334f, 16,87215f, 2593,638f));
				Function_171(StackVal, 1, &uLocal_525, Vector(-2139,334f, 16,87215f, 2593,638f));
				Function_170(1, &uLocal_525, &iLocal_31);
				Function_177(2, &uLocal_525, 40.0f);
				Function_169(2, &uLocal_525, &iLocal_47 + 1440);
				Function_175(StackVal, 2, &uLocal_525, Vector(-2162,866f, 16,875f, 2594,306f));
				Function_174(StackVal, 2, &uLocal_525, Vector(-2162,866f, 16,875f, 2594,306f));
				Function_173(StackVal, 2, &uLocal_525, Vector(-2162,866f, 16,875f, 2594,306f));
				Function_172(StackVal, 2, &uLocal_525, Vector(-2162,866f, 16,875f, 2594,306f));
				Function_171(StackVal, 2, &uLocal_525, Vector(-2162,866f, 16,875f, 2594,306f));
				Function_170(2, &uLocal_525, &iLocal_31);
				Function_177(3, &uLocal_525, 60.0f);
				Function_176(StackVal, 3, &uLocal_525, Vector(-2145,491f, 16,625f, 2565,731f));
				Function_175(StackVal, 3, &uLocal_525, Vector(-2145,491f, 16,625f, 2565,731f));
				Function_174(StackVal, 3, &uLocal_525, Vector(-2145,491f, 16,625f, 2565,731f));
				Function_173(StackVal, 3, &uLocal_525, Vector(-2145,491f, 16,625f, 2565,731f));
				Function_172(StackVal, 3, &uLocal_525, Vector(-2167,3f, 16,87f, 2592,21f));
				Function_168(3, &uLocal_525, &iLocal_47 + 1616);
				Function_170(3, &uLocal_525, &iLocal_31);
				Function_177(4, &uLocal_525, 20.0f);
				Function_176(StackVal, 4, &uLocal_525, Vector(-2122,468f, 16,713f, 2620,148f));
				Function_175(StackVal, 4, &uLocal_525, Vector(-2129,951f, 16,612f, 2629,762f));
				Function_174(StackVal, 4, &uLocal_525, Vector(-2129,951f, 16,612f, 2629,762f));
				Function_173(StackVal, 4, &uLocal_525, Vector(-2129,951f, 16,612f, 2629,762f));
				Function_172(StackVal, 4, &uLocal_525, Vector(-2112,286f, 17,03f, 2601,792f));
				Function_171(StackVal, 4, &uLocal_525, Vector(-2122,468f, 16,713f, 2620,148f));
				Function_170(4, &uLocal_525, &iLocal_31);
				Function_177(5, &uLocal_525, 60.0f);
				Function_169(5, &uLocal_525, &iLocal_47 + 1424);
				Function_167(5, &uLocal_525, &iLocal_47 + 1416);
				Function_166(5, &uLocal_525, &iLocal_47 + 1408);
				Function_165(5, &uLocal_525, &iLocal_47 + 1800);
				Function_164(5, &uLocal_525, &iLocal_47 + 1728);
				Function_168(5, &uLocal_525, &iLocal_47 + 1424);
				Function_170(5, &uLocal_525, &iLocal_31);
				Function_177(21, &uLocal_525, 60.0f);
				Function_176(StackVal, 21, &uLocal_525, Vector(-2156,334f, 16,458f, 2567,839f));
				Function_175(StackVal, 21, &uLocal_525, Vector(-2156,334f, 16,458f, 2567,839f));
				Function_174(StackVal, 21, &uLocal_525, Vector(-2156,334f, 16,458f, 2567,839f));
				Function_173(StackVal, 21, &uLocal_525, Vector(-2156,334f, 16,458f, 2567,839f));
				Function_172(StackVal, 21, &uLocal_525, Vector(-2162,805f, 19,97492f, 2591,801f));
				Function_171(StackVal, 21, &uLocal_525, Vector(-2076,937f, 19,77f, 2616,289f));
				Function_170(21, &uLocal_525, &iLocal_31);
				Function_177(8, &uLocal_525, 30.0f);
				Function_176(StackVal, 8, &uLocal_525, Vector(-2162,298f, 19,974f, 2588,137f));
				Function_175(StackVal, 8, &uLocal_525, Vector(-2163,129f, 19,725f, 2597,887f));
				Function_174(StackVal, 8, &uLocal_525, Vector(-2163,304f, 19,721f, 2588,763f));
				Function_173(StackVal, 8, &uLocal_525, Vector(-2162,648f, 16,774f, 2591,998f));
				Function_172(StackVal, 8, &uLocal_525, Vector(-2162,648f, 16,774f, 2591,998f));
				Function_171(StackVal, 8, &uLocal_525, Vector(-2162,648f, 16,774f, 2591,998f));
				Function_170(8, &uLocal_525, &iLocal_31);
				Function_177(9, &uLocal_525, 60.0f);
				Function_169(9, &uLocal_525, &iLocal_47 + 1448);
				Function_175(StackVal, 9, &uLocal_525, Vector(-2168,7f, 16,876f, 2595,89f));
				Function_174(StackVal, 9, &uLocal_525, Vector(-2168,277f, 16,565f, 2607,094f));
				Function_173(StackVal, 9, &uLocal_525, Vector(-2168,277f, 16,565f, 2607,094f));
				Function_172(StackVal, 9, &uLocal_525, Vector(-2168,7f, 16,876f, 2595,89f));
				Function_168(9, &uLocal_525, &iLocal_47 + 1448);
				Function_170(9, &uLocal_525, &iLocal_31);
				Function_177(10, &uLocal_525, 60.0f);
				Function_169(10, &uLocal_525, &iLocal_47 + 1456);
				Function_175(StackVal, 10, &uLocal_525, Vector(-2168,2f, 16,876f, 2597,99f));
				Function_174(StackVal, 10, &uLocal_525, Vector(-2168.0f, 16,214f, 2609,379f));
				Function_173(StackVal, 10, &uLocal_525, Vector(-2168.0f, 16,214f, 2609,379f));
				Function_172(StackVal, 10, &uLocal_525, Vector(-2168,2f, 16,876f, 2597,99f));
				Function_168(10, &uLocal_525, &iLocal_47 + 1456);
				Function_170(10, &uLocal_525, &iLocal_31);
				Function_177(11, &uLocal_525, 40.0f);
				Function_176(StackVal, 11, &uLocal_525, Vector(-2110,686f, 17,03f, 2601,707f));
				Function_175(StackVal, 11, &uLocal_525, Vector(-2110,686f, 17,03f, 2601,707f));
				Function_174(StackVal, 11, &uLocal_525, Vector(-2110,987f, 16,967f, 2588,157f));
				Function_173(StackVal, 11, &uLocal_525, Vector(-2110,987f, 16,967f, 2588,157f));
				Function_172(StackVal, 11, &uLocal_525, Vector(-2110,686f, 17,03f, 2601,707f));
				Function_171(StackVal, 11, &uLocal_525, Vector(-2110,686f, 17,03f, 2601,707f));
				Function_170(11, &uLocal_525, &iLocal_31);
				Function_177(12, &uLocal_525, 40.0f);
				Function_176(StackVal, 12, &uLocal_525, Vector(-2192,954f, 16,966f, 2600,267f));
				Function_175(StackVal, 12, &uLocal_525, Vector(-2192,954f, 16,966f, 2600,267f));
				Function_174(StackVal, 12, &uLocal_525, Vector(-2192,954f, 16,966f, 2600,267f));
				Function_173(StackVal, 12, &uLocal_525, Vector(-2192,954f, 16,966f, 2600,267f));
				Function_172(StackVal, 12, &uLocal_525, Vector(-2192,954f, 16,966f, 2600,267f));
				Function_168(12, &uLocal_525, &iLocal_47 + 1472);
				Function_170(12, &uLocal_525, &iLocal_31);
				Function_177(13, &uLocal_525, 40.0f);
				Function_176(StackVal, 13, &uLocal_525, Vector(-2148,539f, 16,774f, 2625,462f));
				Function_175(StackVal, 13, &uLocal_525, Vector(-2148,539f, 16,774f, 2625,462f));
				Function_174(StackVal, 13, &uLocal_525, Vector(-2148,539f, 16,774f, 2625,462f));
				Function_173(StackVal, 13, &uLocal_525, Vector(-2148,539f, 16,774f, 2625,462f));
				Function_172(StackVal, 13, &uLocal_525, Vector(-2148,539f, 16,774f, 2625,462f));
				Function_171(StackVal, 13, &uLocal_525, Vector(-2148,539f, 16,774f, 2625,462f));
				Function_170(13, &uLocal_525, &iLocal_31);
				Function_177(14, &uLocal_525, 40.0f);
				Function_176(StackVal, 14, &uLocal_525, Vector(-2173,207f, 16,447f, 2636,992f));
				Function_175(StackVal, 14, &uLocal_525, Vector(-2173,207f, 16,447f, 2636,992f));
				Function_174(StackVal, 14, &uLocal_525, Vector(-2173,207f, 16,447f, 2636,992f));
				Function_173(StackVal, 14, &uLocal_525, Vector(-2173,207f, 16,447f, 2636,992f));
				Function_172(StackVal, 14, &uLocal_525, Vector(-2174,889f, 16,88762f, 2600,959f));
				Function_171(StackVal, 14, &uLocal_525, Vector(-2174,889f, 16,88762f, 2600,959f));
				Function_170(14, &uLocal_525, &iLocal_31);
				Function_177(15, &uLocal_525, 40.0f);
				Function_176(StackVal, 15, &uLocal_525, Vector(-2077,117f, 18,763f, 2643,115f));
				Function_175(StackVal, 15, &uLocal_525, Vector(-2077,117f, 18,763f, 2643,115f));
				Function_174(StackVal, 15, &uLocal_525, Vector(-2077,117f, 18,763f, 2643,115f));
				Function_173(StackVal, 15, &uLocal_525, Vector(-2077,117f, 18,763f, 2643,115f));
				Function_172(StackVal, 15, &uLocal_525, Vector(-2077,117f, 18,763f, 2643,115f));
				Function_171(StackVal, 15, &uLocal_525, Vector(-2077,117f, 18,763f, 2643,115f));
				Function_170(15, &uLocal_525, &iLocal_31);
				Function_177(16, &uLocal_525, 60.0f);
				Function_176(StackVal, 16, &uLocal_525, Vector(-2162,298f, 19,974f, 2590,307f));
				Function_175(StackVal, 16, &uLocal_525, Vector(-2166,765f, 16,87441f, 2589,263f));
				Function_174(StackVal, 16, &uLocal_525, Vector(-2166,765f, 16,87441f, 2589,263f));
				Function_173(StackVal, 16, &uLocal_525, Vector(-2166,765f, 16,87441f, 2589,263f));
				Function_172(StackVal, 16, &uLocal_525, Vector(-2166,765f, 16,87441f, 2589,263f));
				Function_171(StackVal, 16, &uLocal_525, Vector(-2166,765f, 16,87441f, 2589,263f));
				Function_170(16, &uLocal_525, &iLocal_31);
				Function_177(17, &uLocal_525, 60.0f);
				Function_176(StackVal, 17, &uLocal_525, Vector(-2162,298f, 19,974f, 2595,048f));
				Function_175(StackVal, 17, &uLocal_525, Vector(-2175,337f, 19,688f, 2599,697f));
				Function_174(StackVal, 17, &uLocal_525, Vector(-2175,337f, 19,688f, 2599,697f));
				Function_173(StackVal, 17, &uLocal_525, Vector(-2175,337f, 19,688f, 2599,697f));
				Function_164(17, &uLocal_525, &iLocal_47 + 1720);
				Function_168(17, &uLocal_525, &iLocal_47 + 1720);
				Function_170(17, &uLocal_525, &iLocal_31);
				Function_177(18, &uLocal_525, 100.0f);
				Function_176(StackVal, 18, &uLocal_525, Vector(-2112,385f, 16,57f, 2620,674f));
				Function_175(StackVal, 18, &uLocal_525, Vector(-2170,773f, 16,8755f, 2588,755f));
				Function_174(StackVal, 18, &uLocal_525, Vector(-2170,773f, 16,8755f, 2588,755f));
				Function_173(StackVal, 18, &uLocal_525, Vector(-2170,773f, 16,8755f, 2588,755f));
				Function_172(StackVal, 18, &uLocal_525, Vector(-2170,773f, 16,8755f, 2588,755f));
				Function_171(StackVal, 18, &uLocal_525, Vector(-2170,773f, 16,8755f, 2588,755f));
				Function_170(18, &uLocal_525, &iLocal_31);
				Function_177(19, &uLocal_525, 20.0f);
				Function_176(StackVal, 19, &uLocal_525, Vector(-2136,458f, 19,864f, 2601,958f));
				Function_175(StackVal, 19, &uLocal_525, Vector(-2157,634f, 16,449f, 2625,538f));
				Function_174(StackVal, 19, &uLocal_525, Vector(-2157,634f, 16,449f, 2625,538f));
				Function_173(StackVal, 19, &uLocal_525, Vector(-2157,634f, 16,449f, 2625,538f));
				Function_172(StackVal, 19, &uLocal_525, Vector(-2171,504f, 16,88975f, 2604,152f));
				Function_171(StackVal, 19, &uLocal_525, Vector(-2171,504f, 16,88975f, 2604,152f));
				Function_170(19, &uLocal_525, &iLocal_31);
				Function_177(20, &uLocal_525, 20.0f);
				Function_169(20, &uLocal_525, &iLocal_47 + 1432);
				Function_175(StackVal, 20, &uLocal_525, Vector(-2150,672f, 16,449f, 2579,07f));
				Function_174(StackVal, 20, &uLocal_525, Vector(-2150,672f, 16,449f, 2579,07f));
				Function_173(StackVal, 20, &uLocal_525, Vector(-2150,672f, 16,449f, 2579,07f));
				Function_172(StackVal, 20, &uLocal_525, Vector(-2166,915f, 16,874f, 2590,191f));
				Function_168(20, &uLocal_525, &iLocal_47 + 1432);
				Function_170(20, &uLocal_525, &iLocal_31);
				Function_177(22, &uLocal_525, 60.0f);
				Function_176(StackVal, 22, &uLocal_525, Vector(-2162,261f, 19,975f, 2586,651f));
				Function_175(StackVal, 22, &uLocal_525, Vector(-2190,739f, 16,54066f, 2616,604f));
				Function_174(StackVal, 22, &uLocal_525, Vector(-2190,739f, 16,54066f, 2616,604f));
				Function_173(StackVal, 22, &uLocal_525, Vector(-2190,739f, 16,54066f, 2616,604f));
				Function_172(StackVal, 22, &uLocal_525, Vector(-2174,445f, 19,961f, 2601,539f));
				Function_171(StackVal, 22, &uLocal_525, Vector(-2162,261f, 19,975f, 2586,651f));
				Function_170(22, &uLocal_525, &iLocal_31);
				Function_177(23, &uLocal_525, 40.0f);
				Function_176(StackVal, 23, &uLocal_525, Vector(-2204,041f, 16,511f, 2607,533f));
				Function_175(StackVal, 23, &uLocal_525, Vector(-2204,041f, 16,511f, 2607,533f));
				Function_174(StackVal, 23, &uLocal_525, Vector(-2204,041f, 16,511f, 2607,533f));
				Function_173(StackVal, 23, &uLocal_525, Vector(-2204,041f, 16,511f, 2607,533f));
				Function_172(StackVal, 23, &uLocal_525, Vector(-2165,634f, 16,892f, 2593,316f));
				Function_171(StackVal, 23, &uLocal_525, Vector(-2162,298f, 19,974f, 2595,048f));
				Function_170(23, &uLocal_525, &iLocal_31);
				Function_177(24, &uLocal_525, 60.0f);
				Function_176(StackVal, 24, &uLocal_525, Vector(-2204,936f, 16,656f, 2624,992f));
				Function_175(StackVal, 24, &uLocal_525, Vector(-2204,936f, 16,656f, 2624,992f));
				Function_174(StackVal, 24, &uLocal_525, Vector(-2204,936f, 16,656f, 2624,992f));
				Function_173(StackVal, 24, &uLocal_525, Vector(-2204,936f, 16,656f, 2624,992f));
				Function_172(StackVal, 24, &uLocal_525, Vector(-2204,936f, 16,656f, 2624,992f));
				Function_171(StackVal, 24, &uLocal_525, Vector(-2138,745f, 19,81f, 2601,71f));
				Function_170(24, &uLocal_525, &iLocal_31);
				Function_177(25, &uLocal_525, 60.0f);
				Function_176(StackVal, 25, &uLocal_525, Vector(-2160,135f, 16,449f, 2628,601f));
				Function_175(StackVal, 25, &uLocal_525, Vector(-2161,728f, 16,879f, 2603,609f));
				Function_174(StackVal, 25, &uLocal_525, Vector(-2172.0f, 16,874f, 2598,572f));
				Function_173(StackVal, 25, &uLocal_525, Vector(-2161,728f, 16,879f, 2603,609f));
				Function_172(StackVal, 25, &uLocal_525, Vector(-2172.0f, 16,874f, 2598,572f));
				Function_171(StackVal, 25, &uLocal_525, Vector(-2161,728f, 16,879f, 2603,609f));
				Function_170(25, &uLocal_525, &iLocal_31);
				Function_161(&Global_11014, &Global_12796, &uLocal_525, &Global_10996, iScriptParam_0);
				if (Function_179(&(Global_43791[iScriptParam_0]), 256) || !Function_160(2))
				{
					iLocal_1156 = 1;
				}
				uLocal_1160 = Function_159(Global_46760[0], "nArmadillo", "generalStore", 1);
				if (IS_DOOR_VALID(&uLocal_1160))
				{
					Function_158(&uLocal_1160, &Global_12796[133] + 16);
				}
				cLocal_1162 = Function_159(Global_46760[0], "nArmadillo", "doctorsOffice01", 1);
				if (IS_DOOR_VALID(&cLocal_1162))
				{
					Function_158(&cLocal_1162, &Global_12796[03] + 16);
				}
				uLocal_1164 = Function_159(Global_46760[0], "nArmadillo", "gunsmith01", 2);
				if (IS_DOOR_VALID(&uLocal_1164))
				{
					Function_158(&uLocal_1164, &Global_12796[13] + 16);
				}
				if (IS_PERS_CHAR_VALID(&Global_12796[23] + 16))
				{
					SET_PERS_CHAR_ALLOW_SPAWN_ELSEWHERE(&Global_12796[23] + 16, 0);
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_players_room"));
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_schoolhouse_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_schoolhouse_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_schoolhouse_room"));
				}
				Function_157(&iLocal_47 + 1488, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[33] + 16));
				Function_157(&iLocal_47 + 1496, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[113] + 16));
				Function_157(&iLocal_47 + 1504, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[183] + 16));
				Function_157(&iLocal_47 + 1512, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[43] + 16));
				Function_157(&iLocal_47 + 1528, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[63] + 16));
				Function_157(&iLocal_47 + 1536, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[123] + 16));
				Function_157(&iLocal_47 + 1592, GET_OBJECT_FROM_PERS_CHAR(&Global_12796[23] + 16));
				uLocal_1173 = CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_31, "chopWood_obstacle", Vector(-2107,232f, 16,45f, 2624,115f), Vector(0.0f, -0,646f, 0.0f), Vector(1.0f, 5.0f, 2.0f));
				Function_156(&Global_12796[133] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_gstore_set"));
				Function_155(&Global_12796[133] + 16, 1);
				Function_154(&Global_12796[133] + 16, 397);
				Function_156(&Global_12796[03] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_doctor_set"));
				Function_155(&Global_12796[03] + 16, 3);
				Function_154(&Global_12796[03] + 16, 398);
				Function_156(&Global_12796[13] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_47, "armv_gunsmith_set"));
				Function_155(&Global_12796[13] + 16, 2);
				Function_154(&Global_12796[13] + 16, 399);
				Function_149(1, &iLocal_47 + 1600, &iLocal_47 + 1080, &iLocal_47 + 1184, Function_159(iScriptParam_0, "narmadillo", "saloon01", 6), Function_159(iScriptParam_0, "narmadillo", "saloon01", 9), &iLocal_31 + 32);
				Function_147(1, &iLocal_47 + 1400);
				Function_186(&(Global_43791[iScriptParam_0]), 8);
				if (Function_179(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_146(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_524 = 10;
				}
				else
				{
					iLocal_524 = 7;
				}
				iLocal_1166 = 0;
				break;
			
			case 0x00000007:
				if (!Global_6665)
				{
					Function_142(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 65.0f, 4, 70, 0);
					Function_141(&Global_27462[1052] + 188, 4, &Global_44085[Global_46760[0]9] + 8, 1);
					Function_140(&Global_27462[1052] + 188, 2, 5.0f, 1, 4294967295);
					Function_142(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 65.0f, 8, 70, 0);
					Function_141(&Global_27462[852] + 188, 4, &Global_44085[Global_46760[0]9] + 8, 1);
					Function_140(&Global_27462[852] + 188, 2, 5.0f, 1, 4294967295);
					Function_142(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 65.0f, 8, 70, 0);
					Function_141(&Global_27462[952] + 188, 4, &Global_44085[Global_46760[0]9] + 8, 1);
					Function_140(&Global_27462[952] + 188, 2, 5.0f, 1, 4294967295);
					Function_139(iScriptParam_0);
				}
				Function_138(iScriptParam_0);
				Function_137(iScriptParam_0);
				Function_136(iScriptParam_0);
				Function_133(iScriptParam_0);
				Function_132(iScriptParam_0);
				Function_130(iScriptParam_0);
				Function_123(StackVal, &Global_98318, 8, Global_46760[0], "$/content/Frontier/Mini_Games/FiveFingerFillet_ARM/FiveFingerFillet_ARM", 4294967295, 0, "ArmFiveFinger", 353, Vector(-2193,326f, 16,58f, 2592,508f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_31, "armv_fff"));
				if (Function_122())
				{
					Function_123(StackVal, &Global_98318, 0, Global_46760[0], "$/content/Frontier/Mini_Games/Poker_ARM/Poker_ARM", 4294967295, 0, "ArmPokerHC", 433, Vector(-2157,565f, 16,875f, 2595,535f), 2,5f, 0, 0);
					Function_121(&Global_98318, 0, 15);
				}
				else
				{
					Function_123(StackVal, &Global_98318, 0, Global_46760[0], "$/content/Frontier/Mini_Games/Poker_ARM/Poker_ARM", 4294967295, 0, "ArmPoker", 433, Vector(-2157,565f, 16,875f, 2595,535f), 2,5f, 0, 0);
					Function_121(&Global_98318, 0, 25);
				}
				Function_121(&Global_98318, 8, 1);
				Function_120(&Global_98318, 8);
				iLocal_524 = 8;
				iLocal_1166 = 0;
				break;
			
			case 0x00000008:
				Function_119(64);
				if (Function_118(iScriptParam_0, &Global_11014, iLocal_1156))
				{
					Function_114(0, 0,1f, 4, &iLocal_31, &Global_44085[iScriptParam_09] + 8, 1);
					Function_110(2, 4294967295, 4294967295, 0, 3);
					Function_108(&iLocal_31);
				}
				else
				{
					Function_114(4, 1.0f, 2, &iLocal_31, &Global_44085[iScriptParam_09] + 8, 1);
					Function_110(0, 8, 4, 20, 5);
					Function_108(&iLocal_31);
					Function_107(&Global_12796[73] + 16, 0);
					Function_107(&Global_12796[63] + 16, 0);
				}
				Function_186(&(Global_43791[iScriptParam_0]), 512);
				iLocal_524 = 9;
				iLocal_1166 = 0;
				break;
			
			case 0x00000009:
				Function_105(&iLocal_31, iScriptParam_0);
				Function_186(&(Global_43791[iScriptParam_0]), 4);
				iLocal_524 = 10;
				iLocal_1166 = 0;
				break;
			
			case 0x0000000A:
				Function_103(&vLocal_1180);
				if (!Function_102(Global_98961, 1))
				{
					if (Function_100(&(Global_46760[0]), 0))
					{
						Function_99(&Global_98961, 1);
					}
				}
				if (!Function_102(Global_98961, 8))
				{
					if (Function_95(&(Global_46760[0])))
					{
						Function_99(&Global_98961, 8);
					}
				}
				if (!Function_102(Global_98961, 64))
				{
					if (Function_93(&(Global_46760[0])))
					{
						Function_99(&Global_98961, 64);
					}
				}
				if (IS_OBJECT_VALID(&uLocal_1171))
				{
					if (Function_87(11) || (Function_185(10, 0) && Function_185(5, 0)))
					{
						DESTROY_OBJECT(&uLocal_1171);
						STREAMING_EVICT_GRINGO(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1));
						iLocal_1175 = 0;
					}
				}
				else if (Function_185(10, 0) && !Function_185(5, 0))
				{
					if (!iLocal_1175)
					{
						STREAMING_REQUEST_GRINGO(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1));
						iLocal_1175 = 1;
					}
					if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1)))
					{
						uLocal_1171 = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, StackVal, &Global_10992, Function_86(), GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1), Vector(-2125,509f, 16,485f, 2604,504f), Vector(0.0f, 0.0f, 0.0f));
					}
				}
				if (!Function_85(0, 0, 1, 1))
				{
					switch (iLocal_523)
					{
						case 0x00000000:
							if (!IS_ACTOR_VALID(&uLocal_1123))
							{
								uLocal_1123 = Function_82(&Global_11014, &Global_12796, 15, 0, 0, 1);
								SET_ACTOR_UPDATE_PRIORITY(&uLocal_1123, 1);
							}
							else
							{
								uLocal_1137 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_31, Function_86(), 0f, Vector(-2078,399f, 20,16009f, 2642,17f), Vector(0.0f, 44,46211f, 0.0f), Vector(2,5f, 4.0f, 2,5f));
								uLocal_1135 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("payForMovie", &uLocal_1137, 1, "@FOOT.INTERACT", "", "", "", "", 4, 0);
								uLocal_1133 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/ticket_taker_link", &Local_1153, 1.0f, 0);
								iLocal_523 = 1;
							}
							break;
						
						case 0x00000001:
							if (!CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Local_1153, 1065353216, 1117126656, 1, 1, 0))
							{
								SNAP_ACTOR_TO_GRINGO(&uLocal_1123, GET_OBJECT_FROM_GRINGO(&uLocal_1133), "UseCase1", 1, 1, 1);
								TASK_USE_GRINGO(&uLocal_1123, &uLocal_1133, "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&uLocal_1123, 2);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uLocal_1123, 1);
								iLocal_523 = 2;
							}
							break;
						
						case 0x00000002:
							if (IS_ACTOR_VALID(&uLocal_1123) && IS_VOLUME_VALID(&uLocal_1137))
							{
								if (IS_ACTOR_IN_VOLUME(&uLocal_1123, &uLocal_1137))
								{
									if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1135))
									{
										uLocal_1139 = ADD_BLIP_FOR_COORD(&Local_1153, 525, 1,25f, 1, 0);
										Function_75(StackVal, Global_46760[0], 21, Local_1153, 63);
										iLocal_523 = 3;
									}
								}
							}
							break;
						
						case 0x00000003:
							if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1135))
							{
								if (!IS_AI_ACTOR_UNALERTED(&uLocal_1123))
								{
									if (IS_BLIP_VALID(&uLocal_1139))
									{
										REMOVE_BLIP(&uLocal_1139);
									}
									if (IS_VOLUME_VALID(&uLocal_1137))
									{
										DESTROY_VOLUME(&uLocal_1137);
									}
									if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1135))
									{
										RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1135);
									}
									if (IS_ACTOR_VALID(&uLocal_1123))
									{
										Function_73(&Global_11014, &Global_12796, 15, 0);
									}
								}
								else if (IS_ACTOR_DEAD(&uLocal_1123))
								{
									if (IS_BLIP_VALID(&uLocal_1139))
									{
										REMOVE_BLIP(&uLocal_1139);
									}
									if (IS_VOLUME_VALID(&uLocal_1137))
									{
										DESTROY_VOLUME(&uLocal_1137);
									}
									if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1135))
									{
										RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1135);
									}
									if (IS_ACTOR_VALID(&uLocal_1123))
									{
										Function_73(&Global_11014, &Global_12796, 15, 0);
									}
								}
								else if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_1135))
								{
									ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
									SET_PLAYER_CONTROL(0, 0, 0, 0);
									iLocal_523 = 4;
								}
							}
							else
							{
								if (IS_BLIP_VALID(&uLocal_1139))
								{
									REMOVE_BLIP(&uLocal_1139);
								}
								if (IS_VOLUME_VALID(&uLocal_1137))
								{
									DESTROY_VOLUME(&uLocal_1137);
								}
								if (IS_ACTOR_VALID(&uLocal_1123))
								{
									Function_73(&Global_12488, &Global_14976, 15, 0);
								}
								iLocal_523 = 0;
							}
							break;
						
						case 0x00000004:
							if (Function_72() > 2)
							{
								SAY_SINGLE_LINE_CONTEXT(&Global_54076, 366, &uLocal_1123, 0, 0, 1, 4294967295, 4294967295, 0, 1);
								Function_69(2, 1);
								DESTROY_VOLUME(&uLocal_1137);
								uLocal_1125[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &uLocal_1144, 0,5f, 0);
								uLocal_1125[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &uLocal_1147, 0,5f, 0);
								uLocal_1125[2] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &uLocal_1150, 0,5f, 0);
								iLocal_523 = 6;
							}
							else
							{
								RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1135);
								iLocal_523 = 5;
							}
							break;
						
						case 0x00000005:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 365, &uLocal_1123, 0, 0, 1, 4294967295, 4294967295, 0, 1);
							Function_67("NO_LAUNCH_Player", 2,5f, 1, 0, 2, 1, 0);
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							uLocal_1135 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("payForMovie", &uLocal_1137, 1, "@FOOT.INTERACT", "", "", "", "", 4, 0);
							iLocal_523 = 2;
							break;
						
						case 0x00000006:
							Function_66(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
							if (HUD_IS_FADED() && !HUD_IS_FADING())
							{
								Function_64(0, 0);
								iLocal_523 = 7;
							}
							break;
						
						case 0x00000007:
							if (Function_63(&(Global_46972[1]), 0, 4294967295, 0) && !iLocal_1159)
							{
								iVar1 = 0;
								while (iVar1 <= 3)
								{
									uLocal_1099[iVar1] = Function_54(&(Global_46972[1]), 1, 0, 0);
									uLocal_1113[iVar1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_31, Function_86(), uLocal_1099[iVar1], Local_1141, Vector(0.0f, 0.0f, 0.0f));
									Local_1141 = (Local_1141 + 0,2f);
									SNAP_ACTOR_TO_GRINGO(&(uLocal_1113[iVar1]), GET_OBJECT_FROM_GRINGO(&(uLocal_1125[iVar1])), "UseCase1", 1, 1, 1);
									TASK_USE_GRINGO(&(uLocal_1113[iVar1]), &(uLocal_1125[iVar1]), "UseCase1", 4294967295, 1);
									iLocal_1158 = 1;
									iLocal_1159 = 1;
									iVar1++;
								}
							}
							else if (iLocal_1158)
							{
								UNK_0x5B47E49A(1);
								Function_50(0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
								Function_49(&iLocal_31, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
								Function_47(StackVal, StackVal, Vector(-2075,14f, 20,939f, 2645,867f), Vector(0,887f, -0,014f, 0,462f), 0x40a00000, 0, 1);
								REMOVE_BLIP(&uLocal_1139);
								ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 4, 1);
								ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 6, 1);
								ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 1);
								if (HUD_IS_FADED() && !HUD_IS_FADING())
								{
									SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_47 + 1768, "UseCase1", 1, 1, 1);
									TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1768), "UseCase1", 4294967295, 1);
									Function_46();
									iLocal_523 = 8;
									UI_PUSH("Movies");
								}
							}
							break;
						
						case 0x00000008:
							Function_45(2.0f);
							Global_99146 = 1;
							iLocal_523 = 9;
							break;
						
						case 0x00000009:
							Function_42(&iLocal_1176);
							iLocal_523 = 10;
							break;
						
						case 0x0000000A:
							if (Function_39(&iLocal_1176) < 2.0f)
							{
								iLocal_523 = 11;
							}
							break;
						
						case 0x0000000B:
							UNK_0x7614AEBA("game:/arm00.bk2", 0);
							iLocal_523 = 12;
							break;
						
						case 0x0000000C:
							iLocal_1166 = 0;
							if (Global_99145)
							{
								iLocal_523 = 13;
							}
							else if (UNK_0xD036DF91())
							{
								UI_EXIT("MoviesPromptsZoomed");
								UI_ENTER("MoviesPrompts");
								iLocal_523 = 13;
							}
							break;
						
						case 0x0000000D:
							iLocal_1166 = 0;
							if (UNK_0x973F30EE("@UI.CANCELMINIGAME", 1, 0) || !UNK_0xD036DF91())
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
								Function_66(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
								UNK_0x69FC319E();
								Function_42(&iLocal_1176);
								iLocal_523 = 16;
							}
							else if (UNK_0x973F30EE("@UI.ZOOM_CINEMA", 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								Function_47(StackVal, StackVal, Vector(-2070,021f, 21,1f, 2647,764f), Vector(0,715f, -0,012f, 0,699f), 0x40a00000, 0, 1);
								iLocal_523 = 14;
							}
							break;
						
						case 0x0000000E:
							iLocal_1166 = 0;
							UI_EXIT("MoviesPrompts");
							UI_ENTER("MoviesPromptsZoomed");
							iLocal_523 = 15;
							break;
						
						case 0x0000000F:
							iLocal_1166 = 0;
							if (UNK_0x973F30EE("@UI.ZOOM_CINEMA", 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								Function_47(StackVal, StackVal, Vector(-2075,14f, 20,939f, 2645,867f), Vector(0,887f, -0,014f, 0,462f), 0x40a00000, 0, 1);
								iLocal_523 = 12;
							}
							else if (UNK_0x973F30EE("@UI.CANCELMINIGAME", 1, 0) || !UNK_0xD036DF91())
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
								Function_66(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
								UNK_0x69FC319E();
								Function_42(&iLocal_1176);
								iLocal_523 = 16;
							}
							else if (!iLocal_1157)
							{
								Function_50(0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
								Function_49(&iLocal_31, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
								Function_47(StackVal, StackVal, Vector(-2070,021f, 21,1f, 2647,764f), Vector(0,715f, -0,012f, 0,699f), 0x40a00000, 0, 1);
								iLocal_1157 = 1;
								UI_PUSH("Movies");
							}
							break;
						
						case 0x00000010:
							if (Function_39(&iLocal_1176) < 3.0f)
							{
								iVar1 = 0;
								while (iVar1 <= 3)
								{
									DESTROY_ACTOR(&(uLocal_1113[iVar1]));
									iVar1++;
								}
								Function_38(0, 1);
								Function_19(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
								UNK_0x5B47E49A(0);
								TASK_CLEAR(&Global_54076);
								Function_73(&Global_11014, &Global_12796, 15, 0);
								ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 4, 0);
								ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 6, 0);
								ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 0);
								ACTOR_END_FORCE_HOLSTER(&Global_54076);
								MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
								TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_47 + 1368), 1, 1, 1);
								iLocal_1158 = 0;
								iLocal_1159 = 0;
								Global_99146 = 0;
								HUD_FADE_IN(1.0f, 1065353216);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								UI_EXIT("MoviesPromptsZoomed");
								UI_EXIT("MoviesPrompts");
								iLocal_523 = 0;
								UI_POP("Movies");
							}
							break;
					}
				}
				else if (((IS_BLIP_VALID(&uLocal_1139) && IS_VOLUME_VALID(&uLocal_1137)) && IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1135)) && IS_ACTOR_VALID(&uLocal_1123))
				{
					REMOVE_BLIP(&uLocal_1139);
					DESTROY_VOLUME(&uLocal_1137);
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1135);
					Function_73(&Global_11014, &Global_12796, 15, 0);
					iLocal_523 = 0;
				}
				if (Function_179(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_524 = 6;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(iLocal_1166);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 25);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 8);
	DESTROY_OBJECTSET(&uLocal_1111);
	if (IS_ACTOR_VALID(&uLocal_1123))
	{
		Function_73(&Global_11014, &Global_12796, 15, 0);
	}
	if (IS_BLIP_VALID(&uLocal_1139))
	{
		REMOVE_BLIP(&uLocal_1139);
	}
	Function_12(&Global_11014, &Global_12796, iScriptParam_0, (iLocal_1156 || Global_6623));
	if (IS_OBJECT_VALID(&uLocal_1171))
	{
		DESTROY_OBJECT(&uLocal_1171);
	}
	if (iLocal_1175)
	{
		STREAMING_EVICT_GRINGO(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1));
		iLocal_1175 = 0;
	}
	if (IS_OBJECT_VALID(&uLocal_1173))
	{
		DESTROY_OBJECT(&uLocal_1173);
	}
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	SET_DUST_LEVEL(2);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_119(64);
	Function_146(&(Global_43791[iScriptParam_0]), 32);
	Function_146(&(Global_43791[iScriptParam_0]), 64);
	Function_146(&(Global_43791[iScriptParam_0]), 8);
	Function_146(&(Global_43791[iScriptParam_0]), 512);
	Function_146(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_1109))
	{
		TERMINATE_SCRIPT(&uLocal_1109);
	}
	Function_1("Unloaded Armadillo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(char* cParam0) //Position: 0x2E43 / 11843
{
	if (!Function_160(128))
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

void Function_2(int iParam0) //Position: 0x2E83 / 11907
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

void Function_3(int iParam0) //Position: 0x2EB9 / 11961
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x2EDB / 11995
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x2EF1 / 12017
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x2F07 / 12039
{
	Function_7(&iLocal_47 + 8);
	RELEASE_LAYOUT_REF(&iLocal_47);
	return;
}

void Function_7(int iParam0) //Position: 0x2F1A / 12058
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

void Function_8(struct<2>[] Param0, int iParam1) //Position: 0x2F42 / 12098
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

void Function_9(struct<13> Param0) //Position: 0x308D / 12429
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_10(struct<13> Param0) //Position: 0x30AA / 12458
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x30C8 / 12488
{
	DESTROY_OBJECT(&iLocal_31 + 40);
	DESTROY_OBJECT(&iLocal_31 + 48);
	DESTROY_OBJECT(&iLocal_31 + 56);
	RELEASE_LAYOUT_REF(&iLocal_31);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x30EC / 12524
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
	strcpy(&cVar0, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_179(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_146(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_16(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_16(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_184(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_16(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_184(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_179(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_160(2) || Function_179(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_16(&(Param0[iVar162]), 2) && !Function_16(&(Param0[iVar162]), 4))
		{
			Function_13(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_16(&(Param0[iVar162]), 2) && !Function_16(&(Param0[iVar162]), 4))
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
			Function_186(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x330A / 13066
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_183(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), 0, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_16(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_183(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), 0, 0);
	}
}

int Function_14(int iParam0) //Position: 0x3470 / 13424
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

int Function_15(int iParam0) //Position: 0x349B / 13467
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

bool Function_16(int iParam0, int iParam1) //Position: 0x34CF / 13519
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_17() //Position: 0x34EC / 13548
{
	if (Function_102(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_18(bool bParam0) //Position: 0x3507 / 13575
{
	if (!Function_5(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (bParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (bParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (bParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (bParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (bParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (bParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (bParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (bParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (bParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (bParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (bParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (bParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (bParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (bParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (bParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (bParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (bParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (bParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (bParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (bParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (bParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (bParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (bParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (bParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (bParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (bParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (bParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (bParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (bParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (bParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (bParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (bParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (bParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (bParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (bParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (bParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (bParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (bParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (bParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_19(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x39B5 / 14773
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
		uVar0 = Function_37();
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
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_22(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_46();
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
	Function_20(&uParam9, &uParam10);
}

void Function_20(var uParam0, bool bParam1) //Position: 0x3A84 / 14980
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
		Function_21();
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

void Function_21() //Position: 0x3B53 / 15187
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

int Function_22(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3BCB / 15307
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(iParam1));
	Function_36(iParam0, TO_FLOAT(iParam1), 1);
	Function_35(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_24(iParam0, 1, TO_FLOAT(iParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_23(iParam0);
	return 1;
}

void Function_23(bool bParam0) //Position: 0x3DF3 / 15859
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

void Function_24(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, var uParam7) //Position: 0x3E91 / 16017
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((fParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					iVar6 = FLOOR((fParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar6), 32);
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_34(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_33(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_33(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_31(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_28(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_25(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_86(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_25(int iParam0) //Position: 0x44D0 / 17616
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_26(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x44E1 / 17633
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_27(char* cParam0) //Position: 0x45D8 / 17880
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_28(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x45F3 / 17907
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_30(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_29(Function_30(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_29(int iParam0, int iParam1) //Position: 0x465A / 18010
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_30(int iParam0, int iParam1) //Position: 0x466C / 18028
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_31(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x467E / 18046
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
	if (((Function_32(iParam0) != 19 || Function_32(iParam0) != 17) || Function_32(iParam0) != 10) || Function_32(iParam0) != 9)
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

int Function_32(int iParam0) //Position: 0x47B2 / 18354
{
	return Global_55480[iParam016].f_96;
}

float Function_33(int iParam0) //Position: 0x47C1 / 18369
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_34(int iParam0) //Position: 0x47FA / 18426
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_35(int iParam0) //Position: 0x4837 / 18487
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

int Function_36(int iParam0, float fParam1, bool bParam2) //Position: 0x49D1 / 18897
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

var Function_37() //Position: 0x4C15 / 19477
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x4C2A / 19498
{
	if (&bParam0)
	{
		if (VMAG((&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

float Function_39(vector3 vParam0) //Position: 0x4C80 / 19584
{
	if (Function_41(&vParam0))
	{
		if (Function_40(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_40(int iParam0) //Position: 0x4D4D / 19789
{
	return Function_102(iParam0, 2);
}

bool Function_41(int iParam0) //Position: 0x4D5B / 19803
{
	return Function_102(iParam0, 1);
}

void Function_42(int iParam0) //Position: 0x4D69 / 19817
{
	Function_43(&iParam0, 0.0f);
	return;
}

void Function_43(vector3 vParam0) //Position: 0x4D76 / 19830
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_99(&vParam0, 1);
	Function_44(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0x4D9B / 19867
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_45(bool bParam0) //Position: 0x4DB1 / 19889
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_46() //Position: 0x4DCE / 19918
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_47(struct<2> Param0, struct<2> Param2, int iParam4, int iParam5, int iParam6) //Position: 0x4DE3 / 19939
{
	Function_48(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (&iParam4 >= 0.0f)
	{
		iParam4 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &iParam6);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, &iParam4);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam5))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &iParam5, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_48(float fParam0) //Position: 0x4EFC / 20220
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_49(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, float fParam12, int iParam13) //Position: 0x4F0F / 20239
{
	Function_38(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_86(), 2, 1);
	Global_99148.f_16 = &iParam3;
	Global_99148.f_20 = &iParam4;
	Global_99148.f_24 = &iParam5;
	Global_99148.f_28 = &iParam6;
	Global_99148.f_32 = &iParam7;
	Global_99148.f_36 = &iParam8;
	Global_99148.f_40 = &iParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &iParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &iParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &iParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_50(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x5018 / 20504
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
	Function_46();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_37();
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
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
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
				Function_53(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_86(), 2,802597E-45f, Function_53(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_22(19, 1, 0, 0);
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
	if (iParam10 && !Function_17())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_52()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_52()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
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
	if (Function_160(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_51(0x4000000);
	}
	if (Function_160(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_51(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_51(int iParam0) //Position: 0x52CA / 21194
{
	int iVar0;
	
	if (Function_102(iParam0, 1) && Function_102(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_52() //Position: 0x52FE / 21246
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

struct<8> Function_53(int iParam0) //Position: 0x538C / 21388
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_54(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x539E / 21406
{
	return Function_55(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x53B5 / 21429
{
	return Function_56(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_56(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, var uParam5, struct<2> Param6) //Position: 0x53D3 / 21459
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_62();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, uParam5, Param6);
	if (!Function_61(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_60(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_60(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_59(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, uParam5, Param6);
				if (Function_61(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_59(iVar0))
				{
					Function_58();
				}
				Function_57(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, uParam5, Param6);
				if (Function_61(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_57(int iParam0) //Position: 0x56CC / 22220
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_58() //Position: 0x5780 / 22400
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_59(int iParam0) //Position: 0x57BB / 22459
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_60(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x57E8 / 22504
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&uParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&uParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &uParam2, &uParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_61(int iParam0) //Position: 0x5943 / 22851
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_62() //Position: 0x595A / 22874
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_58();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_58();
	return;
}

int Function_63(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x59A6 / 22950
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_64(int iParam0, int iParam1) //Position: 0x59D2 / 22994
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_65(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_65(struct<113> Param0) //Position: 0x5A59 / 23129
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_66(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x5AB7 / 23223
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

void Function_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5AE1 / 23265
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_68(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_68(int iParam0) //Position: 0x5B6C / 23404
{
	char* cVar0[16];
	
	if (!Function_17())
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

int Function_69(int iParam0, bool bParam1) //Position: 0x5BAB / 23467
{
	int iVar0;
	
	iVar0 = Function_71(0);
	if ((Function_71(0) - iParam0) <= 0)
	{
		iParam0 = iVar0;
	}
	if (iParam0 >= 0)
	{
		Function_70(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), iVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	return 1;
}

int Function_70(int iParam0, int iParam1, int iParam2) //Position: 0x5C3C / 23612
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(iParam1));
	Function_35(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_24(iParam0, 0, TO_FLOAT(iParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_71(int iParam0) //Position: 0x5E39 / 24121
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_72() //Position: 0x5E7A / 24186
{
	return Function_71(0);
}

void Function_73(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x5E84 / 24196
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_16(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_16(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_16(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_184(&(Param0[iVar02]), 8);
	}
	Function_184(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_74(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_13(&Param0, &vParam1, iParam2, 0);
	}
}

int Function_74(int iParam0) //Position: 0x5F2C / 24364
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

int Function_75(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x5FD5 / 24533
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_81(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_80(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_79(StackVal, Param2);
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
		Function_78(uVar3);
		Var6 = Function_78(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_78(StackVal);
				Var4 = Function_78(StackVal);
				if (Function_77(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_76(iParam1), 0.0f, 2, iVar2);
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

int Function_76(int iParam0) //Position: 0x61BE / 25022
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

bool Function_77(struct<2> Param0, struct<2> Param2) //Position: 0x62F5 / 25333
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_78(int iParam0) //Position: 0x6321 / 25377
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	iVar2 = iParam0 & 32767;
	iVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(iVar2);
	Var0.f_8 = TO_FLOAT(iVar3);
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

var Function_79(vector3 vParam0) //Position: 0x6378 / 25464
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

int Function_80(int iParam0) //Position: 0x63C6 / 25542
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

bool Function_81(vector3 vParam0) //Position: 0x647E / 25726
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_82(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x6496 / 25750
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_16(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_16(&(Param0[iVar02]), 2))
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
			if (!Function_16(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_183(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_84(StackVal, &Global_10996, Function_86(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_16(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_183(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_183(&(Param0[iVar02]), 1);
	Function_83(&vParam1[iVar03] + 16, 1);
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

int Function_83(int iParam0, bool bParam1) //Position: 0x665D / 26205
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
			TASK_PRIORITY_SET(&uVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 0);
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

var Function_84(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x670F / 26383
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_86(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

bool Function_85(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6836 / 26678
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

var Function_86() //Position: 0x68E5 / 26853
{
	int iVar0;
	
	return &iVar0;
}

int Function_87(int iParam0) //Position: 0x68EE / 26862
{
	int iVar0;
	
	if (!Function_92(iParam0))
	{
		return 0;
	}
	iVar0 = Function_91(iParam0);
	if (!Function_88(Function_91(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x6924 / 26916
{
	if (!Function_90(iParam0))
	{
		return 0;
	}
	if (!Function_89(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x6948 / 26952
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x695D / 26973
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0x6974 / 26996
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0x698E / 27022
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_93(var uParam0) //Position: 0x69A4 / 27044
{
	int iVar0;
	
	Function_94(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_94(uParam0), 1.0f, "p_gen_organstool01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make piano stool fixed but the physinst is invalid");
	}
	return 1;
}

struct<8> Function_94(int iParam0) //Position: 0x6A27 / 27175
{
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(154,443f, 73,832f, 2245,542f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2170,534f, 16,879f, 2589,138f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(721,884f, 78,476f, 1311,799f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_95(int iParam0) //Position: 0x6AAD / 27309
{
	var uVar0;
	
	Function_98(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_98(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_97(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_97(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_96(&iParam0);
	return 1;
}

void Function_96(var uParam0) //Position: 0x6BBE / 27582
{
	var uVar0;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	Function_98(uParam0);
	uVar0 = Function_98(uParam0);
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

struct<8> Function_97(int iParam0) //Position: 0x6CAC / 27820
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

struct<8> Function_98(int iParam0) //Position: 0x6D84 / 28036
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

void Function_99(var uParam0, int iParam1) //Position: 0x6E58 / 28248
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_100(var uParam0, bool bParam1) //Position: 0x6E69 / 28265
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_101(uParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_101(uParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_101(uParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_101(uParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(&uVar0))
		{
			if (!IS_PROP_FIXED(&uVar0))
			{
				SET_PROP_FIXED(&uVar0, 1);
			}
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make poker chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

struct<8> Function_101(int iParam0, int iParam1, bool bParam2) //Position: 0x6F3E / 28478
{
	if (iParam0 == Global_46816[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_102(var uParam0, int iParam1) //Position: 0x74EA / 29930
{
	return (uParam0 && iParam1) == 0;
}

void Function_103(vector3[] vParam0) //Position: 0x74F7 / 29943
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (IS_GRINGO_VALID(&(vParam0[iVar03])) && IS_GRINGO_VALID(&vParam0[iVar03] + 8))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&(vParam0[iVar03]), "UseCase1")))
			{
				Function_99(&vParam0[iVar03] + 16, 64);
				if (Function_102(vParam0[iVar03].f_16, 2))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "1.child.SWITCHING OFF: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, false);
				}
				else
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "2.child.SWITCHING ON: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, true);
				}
				if (Function_102(vParam0[iVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[iVar03] + 8, "UseCase1")))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "3.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
				}
				else
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "4.parent.SWITCHING ON: ", &(vParam0[iVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[iVar03] + 8, "UseCase1")))
			{
				if (Function_102(vParam0[iVar03].f_16, 16))
				{
					Function_44(&vParam0[iVar03] + 16, 64);
				}
				else if (Function_102(vParam0[iVar03].f_16, 32))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "5.child.SWITCHING OFF: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, false);
					Function_44(&vParam0[iVar03] + 16, 64);
				}
				else
				{
					Function_44(&vParam0[iVar03] + 16, 64);
				}
				if (Function_102(vParam0[iVar03].f_16, 2))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "6.child.SWITCHING OFF: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, false);
				}
				if (Function_102(vParam0[iVar03].f_16, 4))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "7.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
				}
			}
			else
			{
				if (vParam0[iVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[iVar03].f_20;
					if (&vParam0[iVar03] == &vParam0[iVar13] + 8)
					{
						if (Function_102(vParam0[iVar13].f_16, 64))
						{
							Function_104(StackVal, StackVal, vParam0[iVar03], "8.parent.SWITCHING ON: ", &(vParam0[iVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), true);
						}
						else
						{
							Function_104(StackVal, StackVal, vParam0[iVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
						}
					}
					else if (Function_102(vParam0[iVar03].f_16, 64) && Function_102(vParam0[iVar03].f_16, 16))
					{
						Function_104(StackVal, StackVal, vParam0[iVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
					}
					else
					{
						Function_44(&vParam0[iVar03] + 16, 64);
						if (Function_102(vParam0[iVar03].f_16, 1))
						{
							Function_104(StackVal, StackVal, vParam0[iVar03], "12b.parent.SWITCHING ON: ", &(vParam0[iVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), true);
						}
						else
						{
							Function_104(StackVal, StackVal, vParam0[iVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
						}
					}
				}
				else if (Function_102(vParam0[iVar03].f_16, 64) && Function_102(vParam0[iVar03].f_16, 16))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "11.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
				}
				else
				{
					Function_44(&vParam0[iVar03] + 16, 64);
					if (Function_102(vParam0[iVar03].f_16, 1))
					{
						Function_104(StackVal, StackVal, vParam0[iVar03], "12.parent.SWITCHING ON: ", &(vParam0[iVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), true);
					}
					else
					{
						Function_104(StackVal, StackVal, vParam0[iVar03], "13.parent.SWITCHING OFF: ", &(vParam0[iVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[iVar03]), false);
					}
				}
				if (vParam0[iVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[iVar03].f_20;
					if (&vParam0[iVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_102(vParam0[iVar03].f_16, 64))
					{
						if (Function_102(vParam0[iVar03].f_16, 32))
						{
							Function_104(StackVal, StackVal, vParam0[iVar03], "14b.child.SWITCHING OFF: ", &vParam0[iVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, false);
						}
						else
						{
							Function_104(StackVal, StackVal, vParam0[iVar03], "14.child.SWITCHING ON: ", &vParam0[iVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, true);
						}
					}
					else if (Function_102(vParam0[iVar03].f_16, 8))
					{
						Function_104(StackVal, StackVal, vParam0[iVar03], "15.child.SWITCHING ON: ", &vParam0[iVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, true);
					}
					else
					{
						Function_104(StackVal, StackVal, vParam0[iVar03], "16.child.SWITCHING OFF: ", &vParam0[iVar03] + 8);
						Function_44(&vParam0[iVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, false);
					}
				}
				else if (Function_102(vParam0[iVar03].f_16, 64))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "17.child.SWITCHING ON: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, true);
				}
				else if (Function_102(vParam0[iVar03].f_16, 8))
				{
					Function_104(StackVal, StackVal, vParam0[iVar03], "18.child.SWITCHING ON: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, true);
				}
				else
				{
					Function_44(&vParam0[iVar03] + 16, 64);
					Function_104(StackVal, StackVal, vParam0[iVar03], "19.child.SWITCHING OFF: ", &vParam0[iVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[iVar03] + 8, false);
				}
			}
		}
		if (Function_102(vParam0[iVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(iVar0);
			PRINTNL();
		}
		iVar0++;
	}
	return;
}

void Function_104(struct<17> Param0) //Position: 0x7D27 / 32039
{
	if (Function_102(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_105(int iParam0, bool bParam1) //Position: 0x7D50 / 32080
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
		Function_106(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_106(var uParam0, int iParam1) //Position: 0x7E40 / 32320
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_107(int iParam0, int iParam1) //Position: 0x7E4D / 32333
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

void Function_108(int iParam0) //Position: 0x7ED8 / 32472
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_86(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_109(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_109(int iParam0) //Position: 0x7FD4 / 32724
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7FF1 / 32753
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
		Function_111();
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

void Function_111() //Position: 0x80E2 / 32994
{
	int iVar0;
	
	Global_41176 = Function_112(StackVal);
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

int Function_112(int iParam0) //Position: 0x8130 / 33072
{
	if (!Function_113(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_113(bool bParam0) //Position: 0x8148 / 33096
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_114(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x815D / 33117
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
		Function_117();
	}
	if (&bParam5)
	{
		Function_115(1048576);
	}
}

void Function_115(int iParam0) //Position: 0x826B / 33387
{
	Function_116(&Global_43580, iParam0);
	return;
}

void Function_116(var uParam0, var uParam1) //Position: 0x8279 / 33401
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_117() //Position: 0x8298 / 33432
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_115(16384);
	}
	return;
}

bool Function_118(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x82B4 / 33460
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_179(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_185(49, 0))
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

void Function_119(int iParam0) //Position: 0x8372 / 33650
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_120(struct<28>[] Param0, int iParam1) //Position: 0x8385 / 33669
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_121(struct<28>[] Param0, int iParam1, int iParam2) //Position: 0x83A2 / 33698
{
	Param0[iParam128].f_196 = iParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

bool Function_122() //Position: 0x83C9 / 33737
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_123(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x83F4 / 33780
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
	Param0[iParam128].f_4 = Function_125(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_124(iParam1))
	{
		Function_75(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_124(int iParam0) //Position: 0x855D / 34141
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_125(int iParam0, int iParam1, int iParam2) //Position: 0x8580 / 34176
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_129(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_126(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_126(iParam0, iParam1, iParam2, 4294967295);
}

int Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x85DE / 34270
{
	var uVar0;
	
	if (!Function_128(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_129(iParam0, iParam1, iParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_127(uVar0);
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
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
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
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_127(int iParam0) //Position: 0x8742 / 34626
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

bool Function_128(int iParam0) //Position: 0x8780 / 34688
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_129(int iParam0, int iParam1, int iParam2) //Position: 0x8795 / 34709
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_130(int iParam0) //Position: 0x87B5 / 34741
{
	Function_142(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_131(&Global_27462[3352] + 188, 2, 0);
	return;
}

void Function_131(struct<149> Param0) //Position: 0x8818 / 34840
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_132(int iParam0) //Position: 0x882F / 34863
{
	Function_142(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_133(int iParam0) //Position: 0x8881 / 34945
{
	if (!Function_135())
	{
		Function_142(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_140(&Global_27462[3952] + 188, 1, 4,5f, 64, 4294967295);
		Function_134(&Global_27462[3952] + 188, -4,5f, 2);
	}
	return;
}

void Function_134(int iParam0, float fParam1, int iParam2) //Position: 0x8902 / 35074
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

bool Function_135() //Position: 0x891A / 35098
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		iVar0 = GET_ACTOR_ENUM(&Global_54076);
		if (iVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_136(int iParam0) //Position: 0x8941 / 35137
{
	Function_142(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_140(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_134(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_137(int iParam0) //Position: 0x89BC / 35260
{
	Function_142(41, 1, 25, 4294967276, 50, 1, 0, 1, 4, iParam0, "$/content/Ambient/Town/event_unforgiven", 63, 2, 65.0f, 8, 100, 0);
	return;
}

void Function_138(int iParam0) //Position: 0x8A0B / 35339
{
	Function_142(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_131(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_139(int iParam0) //Position: 0x8A72 / 35442
{
	Function_142(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_140(struct<85> Param0) //Position: 0x8ABB / 35515
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_141(struct<157> Param0) //Position: 0x8AE5 / 35557
{
	Param0.f_156 = iParam1;
	(&Param0 + 156)->f_4 = uParam2;
	(&Param0 + 156)->f_8 = iParam3;
}

void Function_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x8B06 / 35590
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Function_143(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_143(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x8B4D / 35661
{
	var uVar0;
	char[] cVar1[4];
	int iVar2;
	char* cVar3[64];
	
	if (!Function_4(iParam0))
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
	(&Global_27462[iParam052] + 188)->f_8 = &iParam13;
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
	if (!Function_17())
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
				iVar2 = 0;
				ADD_TIME(&cVar1, 0, 7, iVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = Function_145(1200);
					iVar2 = RAND_INT_RANGE(30, iVar2);
				}
				ADD_TIME(&cVar1, 0, 7, iVar2, 0);
			}
		}
		Function_144(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_145(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_144(int iParam0, int iParam1) //Position: 0x8F0B / 36619
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

int Function_145(int iParam0) //Position: 0x8F2E / 36654
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_146(var uParam0, int iParam1) //Position: 0x8F45 / 36677
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_147(int iParam0, int iParam1) //Position: 0x8F5F / 36703
{
	if (!Function_148(iParam0))
	{
		return;
	}
	GET_OBJECT_POSITION(&iParam1, &Global_26200[iParam014] + 28);
	return;
}

bool Function_148(int iParam0) //Position: 0x8F7F / 36735
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

void Function_149(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x8F95 / 36757
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_153(&uParam1, &uParam2);
	if (!Function_148(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_152(&uParam4, 0);
		}
		else
		{
			Function_151(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_152(&iParam5, 0);
		}
		else
		{
			Function_151(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_150(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_150(&(uVar2[1]), "UseCase1"));
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

var Function_150(var uParam0, int iParam1) //Position: 0x9365 / 37733
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_151(var uParam0, int iParam1) //Position: 0x9374 / 37748
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

void Function_152(var uParam0, int iParam1) //Position: 0x93CF / 37839
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

int Function_153(var uParam0, int iParam1) //Position: 0x9427 / 37927
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

int Function_154(bool bParam0, int iParam1) //Position: 0x9585 / 38277
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

int Function_155(var uParam0, int iParam1) //Position: 0x967D / 38525
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

int Function_156(var uParam0, int iParam1) //Position: 0x9761 / 38753
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

void Function_157(var uParam0, int iParam1) //Position: 0x989D / 39069
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)), &iParam1);
		}
		iVar0++;
	}
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x98EA / 39146
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(&uParam0, "owner", &iParam1);
	return;
}

var Function_159(int iParam0, char* cParam1, int iParam3) //Position: 0x990D / 39181
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
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
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

bool Function_160(int iParam0) //Position: 0x99B2 / 39346
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_161(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x99CE / 39374
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_160(2))
	{
		return;
	}
	if (Function_179(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_16(&(Param0[iVar02]), 2))
		{
			if (Function_162(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_146(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_186(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_162(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x9A86 / 39558
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_179(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(&iParam0, 2))
	{
		return 1;
	}
	if (Function_16(&iParam0, 4))
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
		(&iParam1 + 16) = Function_84(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_81(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_184(&iParam0, 4);
	}
	Function_163(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_163(int iParam0, struct<2> Param1) //Position: 0x9C07 / 39943
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_81(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_81(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_81(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_81(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_81(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_81(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_164(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x9D4D / 40269
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[iVar011] + 48);
	return;
}

void Function_165(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x9DB6 / 40374
{
	int iVar0;
	
	iVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[iVar011] + 36);
	return;
}

void Function_166(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x9E21 / 40481
{
	int iVar0;
	
	iVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[iVar011] + 24);
	return;
}

void Function_167(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x9E87 / 40583
{
	int iVar0;
	
	iVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[iVar011] + 12);
	return;
}

void Function_168(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x9EF0 / 40688
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[iVar011] + 60);
	return;
}

void Function_169(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x9F57 / 40791
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &(Param1[iVar011]));
	PRINTVECTOR(Param1[iVar011]);
	PRINTNL();
	return;
}

void Function_170(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x9FCA / 40906
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 72) = &iParam2;
	return;
}

void Function_171(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xA029 / 41001
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_77(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 60) = Param2;
}

void Function_172(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xA090 / 41104
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_77(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 48) = Param2;
}

void Function_173(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xA0F9 / 41209
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_77(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 36) = Param2;
}

void Function_174(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xA164 / 41316
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_77(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 24) = Param2;
}

void Function_175(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xA1CA / 41418
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_77(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 12) = Param2;
}

void Function_176(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xA233 / 41523
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_77(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	Param1[iVar011] = Param2;
}

void Function_177(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xA297 / 41623
{
	int iVar0;
	
	iVar0 = iParam0;
	Param1[iVar011].f_80 = iParam2;
	return;
}

int Function_178(int iParam0) //Position: 0xA2AC / 41644
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_179(&(Global_43791[iParam0]), 4);
}

bool Function_179(var uParam0, int iParam1) //Position: 0xA2C8 / 41672
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_180(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0xA2E5 / 41701
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(bParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_179(&(Global_43791[bParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_16(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_16(&(Param0[iVar02]), 8))
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

void Function_181(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0xA3CE / 41934
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(bParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_179(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_186(&(Global_43791[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_183(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_183(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_182(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xA4BE / 42174
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&iParam1);
	if (bParam2)
	{
		Function_99(&vVar0 + 16, 1);
	}
	else
	{
		Function_44(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_99(&vVar0 + 16, 2);
	}
	else
	{
		Function_44(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_99(&vVar0 + 16, 4);
	}
	else
	{
		Function_44(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_99(&vVar0 + 16, 8);
	}
	else
	{
		Function_44(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_99(&vVar0 + 16, 16);
	}
	else
	{
		Function_44(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_99(&vVar0 + 16, 32);
	}
	else
	{
		Function_44(&vVar0 + 16, 32);
	}
	Function_44(&vVar0 + 16, 64);
	Function_44(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_183(var uParam0, int iParam1) //Position: 0xA58B / 42379
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_184(int iParam0, int iParam1) //Position: 0xA59C / 42396
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

bool Function_185(int iParam0, bool bParam1) //Position: 0xA5B6 / 42422
{
	int iVar0;
	
	iVar0 = Function_91(iParam0);
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

void Function_186(var uParam0, int iParam1) //Position: 0xA5F4 / 42484
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_187() //Position: 0xA605 / 42501
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	Function_195(3, 3);
	iVar0 = &iVar0;
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_wipetable_w_any", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stool_sit_newspaper", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_drunkrowdy_spawn", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_push_any", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/feed_chickens", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/dog_peeing", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/browse_table", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_knock_on_door", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/browse_table_low", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/player_sit_movie", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/ticket_taker_link", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/bench_chair", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_193(&iLocal_47 + 8, "$/content/scripting/gringo/simplegringo/merchant_lay_bed", 1, 0);
	if (!Function_188(&iLocal_47 + 8))
	{
		return 0;
	}
	iLocal_47 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_47))
	{
		iLocal_47 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&iLocal_47 + 1056) = Vector(-2158,348f, 21,02943f, 2597,453f);
	*(&iLocal_47 + 1056 + 12) = Vector(0.0f, 89,88011f, 0.0f);
	*(&iLocal_47 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_save_flag_ARM", Vector(-2158,348f, 21,02943f, 2597,453f), Vector(0.0f, 89,88011f, 0.0f));
	*(&iLocal_47 + 1088) = Vector(-2125,274f, 16,90918f, 2598,47f);
	*(&iLocal_47 + 1088 + 12) = Vector(0.0f, 181,1964f, 0.0f);
	*(&iLocal_47 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_shop_flag_DOC", Vector(-2125,274f, 16,90918f, 2598,47f), Vector(0.0f, 181,1964f, 0.0f));
	*(&iLocal_47 + 1120) = Vector(-2136,934f, 16,87223f, 2599,046f);
	*(&iLocal_47 + 1120 + 12) = Vector(0.0f, -178,3221f, 0.0f);
	*(&iLocal_47 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_shop_flag_GUN", Vector(-2136,934f, 16,87223f, 2599,046f), Vector(0.0f, -178,3221f, 0.0f));
	*(&iLocal_47 + 1152) = Vector(-2146,717f, 16,77384f, 2624,388f);
	*(&iLocal_47 + 1152 + 12) = Vector(0.0f, -47,42792f, 0.0f);
	*(&iLocal_47 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_shop_flag_GEN", Vector(-2146,717f, 16,77384f, 2624,388f), Vector(0.0f, -47,42792f, 0.0f));
	*(&iLocal_47 + 1184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_purchase_flag_ARM", Vector(-2157,764f, 19,9733f, 2600,405f), Vector(0.0f, 89,88011f, 0.0f));
	*(&iLocal_47 + 1192) = Vector(-2165,783f, 16,87441f, 2592,628f);
	*(&iLocal_47 + 1192 + 12) = Vector(0.0f, -87,274f, 0.0f);
	*(&iLocal_47 + 1216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "armf_blacksmith", Vector(-2165,783f, 16,87441f, 2592,628f), Vector(0.0f, -87,274f, 0.0f));
	*(&iLocal_47 + 1224) = Vector(-2173,403f, 16,8885f, 2597,779f);
	*(&iLocal_47 + 1224 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_47 + 1248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "armf_dentist", Vector(-2173,403f, 16,8885f, 2597,779f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_47 + 1256) = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", &iLocal_47, 8, 0);
	*(&iLocal_47 + 1264[03]) = Vector(-2157,308f, 16,44941f, 2627,966f);
	*(&iLocal_47 + 1264[03] + 12) = Vector(0.0f, -170,8768f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dropOffCorn", Vector(-2157,308f, 16,44941f, 2627,966f), Vector(0.0f, -170,8768f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_47 + 1256);
	*(&iLocal_47 + 1296) = CREATE_OBJECTSET_IN_LAYOUT("moveboxgrpSet", &iLocal_47, 8, 0);
	*(&iLocal_47 + 1304[03]) = Vector(-2207,618f, 16,50616f, 2613,018f);
	*(&iLocal_47 + 1304[03] + 12) = Vector(0.0f, 75,04214f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dropOffBox", Vector(-2207,618f, 16,50616f, 2613,018f), Vector(0.0f, 75,04214f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_47 + 1296);
	*(&iLocal_47 + 1336) = Vector(-2074,223f, 19,52564f, 2647,24f);
	*(&iLocal_47 + 1336 + 12) = Vector(0.0f, -134,8511f, 0.0f);
	*(&iLocal_47 + 1360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "armf_watchMovie", Vector(-2074,223f, 19,52564f, 2647,24f), Vector(0.0f, -134,8511f, 0.0f));
	*(&iLocal_47 + 1368) = Vector(-2078,746f, 18,49339f, 2638,829f);
	*(&iLocal_47 + 1368 + 12) = Vector(0.0f, 43,11663f, 0.0f);
	*(&iLocal_47 + 1392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "armf_leaveMovie", Vector(-2078,746f, 18,49339f, 2638,829f), Vector(0.0f, 43,11663f, 0.0f));
	*(&iLocal_47 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_purchase_flag_alt_ARM", Vector(-2161,875f, 19,972f, 2597,579f), Vector(0.0f, 89,88011f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_6", "rand_idle_stand", Vector(-2164,242f, 16,87458f, 2605,731f), Vector(0.0f, -178,681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "eee", "npreaching", Vector(-2159,994f, 16,44941f, 2620.0f), Vector(0.0f, 705,2877f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_8", "Pee", Vector(-2153,916f, 16,45634f, 2587,205f), Vector(0.0f, 94,901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_13", "repair_kneel", Vector(-2191,137f, 16,32234f, 2570,69f), Vector(0.0f, 269,278f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_14", "repair_kneel", Vector(-2191,222f, 16,32149f, 2583,342f), Vector(0.0f, 272,1305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_19", "rand_idle_stand", Vector(-2201,517f, 16,97089f, 2605,947f), Vector(0.0f, 94,901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_20", "rand_idle_stand", Vector(-2187,246f, 16,95369f, 2605,591f), Vector(0.0f, -88,72202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_30", "rand_idle_stand", Vector(-2152,235f, 16,55283f, 2565,279f), Vector(0.0f, -175,099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_34", "rand_idle_stand", Vector(-2163,689f, 19,94677f, 2605,685f), Vector(0.0f, -179,7939f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_38", "rand_idle_stand", Vector(-2130,46f, 16,59232f, 2602,579f), Vector(0.0f, -174,564f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_41", "nlean_rail", Vector(-2187,474f, 16,94478f, 2611,293f), Vector(0.0f, -88,018f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_42", "rand_idle_stand", Vector(-2138,115f, 16,87216f, 2602,979f), Vector(0.0f, 178,356f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_43", "Pee", Vector(-2172,814f, 16,47535f, 2584,011f), Vector(0.0f, 210,5279f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_50", "rand_idle_stand", Vector(-2162,888f, 19,97975f, 2593,445f), Vector(0.0f, 91,589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_53", "rand_idle_stand", Vector(-2144,297f, 16,45328f, 2590,22f), Vector(0.0f, 37,247f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_54", "Pee", Vector(-2158,445f, 16,62463f, 2557,712f), Vector(0.0f, -132,6798f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_56", "repair_kneel", Vector(-2142,03f, 16,46156f, 2573,172f), Vector(0.0f, -90,376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_60", "rand_idle_stand", Vector(-2159,389f, 16,33366f, 2583,355f), Vector(0.0f, 23,02206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_61", "Rand_Idle_NearWall", Vector(-2190,146f, 16,31624f, 2586,848f), Vector(0.0f, -85,46859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_65", "nlean_rail", Vector(-2157,103f, 16,89572f, 2602,139f), Vector(0.0f, -177,842f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_69", "nlean_rail", Vector(-2170,11f, 19,98182f, 2605,159f), Vector(0.0f, 147,6108f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_72", "nlean_rail", Vector(-2176,293f, 19,95606f, 2597,29f), Vector(0.0f, 91,297f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_74", "nlean_rail", Vector(-2158,079f, 19,98192f, 2605,014f), Vector(0.0f, -90,745f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_78", "nlean_rail", Vector(-2187,537f, 16,92989f, 2602,908f), Vector(0.0f, -88,343f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_79", "nlean_rail", Vector(-2174,889f, 16,88762f, 2600,959f), Vector(0.0f, 136,0875f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_81", "nlean_rail", Vector(-2140,576f, 19,8104f, 2602,695f), Vector(0.0f, 179,358f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_87", "Rand_Idle_NearWall", Vector(-2174,01f, 16,8852f, 2599,3f), Vector(0.0f, 138,104f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "fff", "npreaching", Vector(-2092,849f, 16,44941f, 2620,062f), Vector(0.0f, 290,4833f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_98", "Rand_Idle_NearWall", Vector(-2197,808f, 16,57718f, 2612,909f), Vector(0.0f, 89,447f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_99", "Rand_Idle_NearWall", Vector(-2197,853f, 16,9272f, 2603,58f), Vector(0.0f, 91,224f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_100", "Rand_Idle_NearWall", Vector(-2196,893f, 16,57307f, 2595,137f), Vector(0.0f, 1,303f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType2", "lean_rail_whore", Vector(-2174,445f, 19,96103f, 2601,539f), Vector(0.0f, 135,4749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType3", "lean_rail_whore", Vector(-2174,999f, 19,96569f, 2600,96f), Vector(0.0f, 132,9681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType4", "lean_rail_whore", Vector(-2171,596f, 19,98828f, 2604,265f), Vector(0.0f, 139,4323f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType10", "Rand_Idle_NearWall", Vector(-2154,863f, 16,44941f, 2585,234f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType13", "Rand_Idle_NearWall", Vector(-2134,428f, 16,44941f, 2592,068f), Vector(0.0f, 3,154f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType15", "Pee", Vector(-2129,484f, 16,47092f, 2588,084f), Vector(0.0f, 89,882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType16", "Rand_Idle_NearWall", Vector(-2142,738f, 16,6462f, 2558,908f), Vector(0.0f, -90,16124f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType18", "Pee", Vector(-2167,875f, 16,5755f, 2564,619f), Vector(0.0f, 143,457f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType19", "look_out_window_R", Vector(-2174,882f, 16,56467f, 2578,452f), Vector(0.0f, 123,1951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType21", "nlean_rail", Vector(-2167,019f, 19,95521f, 2598,867f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType22", "nlean_rail", Vector(-2162,805f, 19,97492f, 2591,801f), Vector(0.0f, 90,28026f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_whore_lean1", "lean_rail_whore", Vector(-2165,178f, 19,96229f, 2598,949f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType27", "Rand_Idle_NearWall", Vector(-2141,791f, 16,44941f, 2591,46f), Vector(0.0f, -0,006908528f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType30", "Rand_Idle_NearWall", Vector(-2160,471f, 16,44941f, 2622,198f), Vector(0.0f, -89,70406f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType31", "Pee", Vector(-2155,852f, 16,44941f, 2644,829f), Vector(0.0f, -164,2836f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType32", "nlean_rail", Vector(-2142,831f, 20,02196f, 2624,504f), Vector(0.0f, -89,68678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType34", "rand_idle_stand", Vector(-2141,781f, 16,77385f, 2625,852f), Vector(0.0f, -88,719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType41", "rand_idle_stand", Vector(-2160,18f, 16,29214f, 2583,555f), Vector(0.0f, -0,1386576f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType46", "rand_idle_stand", Vector(-2126,755f, 16,58855f, 2618,947f), Vector(0.0f, 13,59654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType47", "rand_idle_stand", Vector(-2087,167f, 16,60519f, 2614,154f), Vector(0.0f, 110,107f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType52", "rand_idle_stand", Vector(-2084,224f, 16,72931f, 2617,299f), Vector(0.0f, 63,07613f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType66", "Pee", Vector(-2085,793f, 16,44941f, 2598,167f), Vector(0.0f, -149,536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType71", "rand_idle_stand", Vector(-2109,522f, 17,02981f, 2587,233f), Vector(0.0f, 0,603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType72", "repair_kneel", Vector(-2115,708f, 16,5358f, 2581,5f), Vector(0.0f, 133,2005f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType74", "Rand_Idle_NearWall", Vector(-2116,591f, 16,64206f, 2586,317f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType76", "Rand_Idle_NearWall", Vector(-2143,697f, 16,87216f, 2600,705f), Vector(0.0f, -177,081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType90", "rand_idle_stand", Vector(-2160f, 16,44941f, 2636.0f), Vector(0.0f, -130,782f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType93", "Rand_Idle_NearWall", Vector(-2152,81f, 16,44941f, 2632,356f), Vector(0.0f, -176,407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType123", "Rand_Idle_NearWall", Vector(-2133,373f, 16,612f, 2625,567f), Vector(0.0f, -86,9981f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_preacher", "lie_sleep_on_bed_r", Vector(-2066,7f, 19,53035f, 2653,851f), Vector(0.0f, 43,05116f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_pee", "Pee", Vector(-2061,803f, 18,79698f, 2647,822f), Vector(0.0f, 84,80161f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_stables", "sleeping_scripted", Vector(-2169,625f, 19,76811f, 2573,771f), Vector(0.0f, 94,89822f, 0.0f));
	*(&iLocal_47 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_bartender", "lie_sleep_on_bed_l", Vector(-2156,266f, 16,89338f, 2590,763f), Vector(0.0f, -87,27148f, 0.0f));
	*(&iLocal_47 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_DnD01", "sleeping_scripted", Vector(-2153,723f, 16,69863f, 2554,31f), Vector(0.0f, 270,9525f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1448), 0);
	*(&iLocal_47 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_DnD02", "sleeping_scripted", Vector(-2152,576f, 16,64987f, 2553,116f), Vector(0.0f, 1,27207f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1456), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType217", "Rand_Idle_NearWall", Vector(-2139,177f, 19,8104f, 2600,647f), Vector(0.0f, -181,754f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_doctor", "lie_sleep_on_bed_r", Vector(-2124,276f, 16,905f, 2594,836f), Vector(0.0f, 273,7321f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType38", "Rand_Idle_NearWall", Vector(-2144,218f, 20,02196f, 2623,854f), Vector(0.0f, -42,719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType36", "Rand_Idle_NearWall", Vector(-2148,087f, 16,77385f, 2621,157f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType35", "nlean_rail", Vector(-2147,308f, 16,77385f, 2619,759f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType33", "nlean_rail", Vector(-2147,764f, 20,01724f, 2620,543f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType186", "lean_rail_nospawn", Vector(-2168,421f, 17,42125f, 2629,843f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType95", "Rand_Idle_NearWall", Vector(-2161,991f, 16,90901f, 2634,251f), Vector(0.0f, 89,674f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_trainstation", "lie_sleep_on_bed_l", Vector(-2192,959f, 16,971f, 2597,632f), Vector(0.0f, 0,1749532f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType28", "Rand_Idle_NearWall", Vector(-2162,079f, 16,91562f, 2621,518f), Vector(0.0f, -3,206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_29", "Rand_Idle_NearWall", Vector(-2169,906f, 16,92029f, 2627,131f), Vector(0.0f, 91,21906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_18", "rand_idle_stand", Vector(-2170,754f, 16,93093f, 2623,234f), Vector(0.0f, 45,90849f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_frieghtStation", "lie_sleep_on_bed_l", Vector(-2165,261f, 16,9224f, 2635,022f), Vector(0.0f, -177,7328f, 0.0f));
	*(&iLocal_47 + 1488) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_lean", "rand_idle_stand", Vector(-2147,091f, 16,62627f, 2562,163f), Vector(0.0f, 181,9847f, 0.0f)), &iLocal_47 + 1488);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_counter", "stand_wipetable_w_any", Vector(-2155,969f, 16,62888f, 2559,935f), Vector(0.0f, 90,4558f, 0.0f)), &iLocal_47 + 1488);
	*(&iLocal_47 + 1496) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType67", "Rand_Idle_NearWall", Vector(-2109,827f, 17,02981f, 2601,334f), Vector(0.0f, 178,738f, 0.0f)), &iLocal_47 + 1496);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_hammer_wall1", "stand_hammer_wall", Vector(-2117,659f, 17,02981f, 2601,285f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1496);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stool_sit_newspaper", "stool_sit_newspaper", Vector(-2115,121f, 17,01704f, 2599,524f), Vector(0.0f, 361,723f, 0.0f)), &iLocal_47 + 1496);
	*(&iLocal_47 + 1504) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType48", "rand_idle_stand", Vector(-2110,905f, 16,55575f, 2618,797f), Vector(0.0f, 11,19181f, 0.0f)), &iLocal_47 + 1504);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType56", "Pee", Vector(-2116,492f, 16,44941f, 2624.0f), Vector(0.0f, -130,5531f, 0.0f)), &iLocal_47 + 1504);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType284", "rand_idle_stand", Vector(-2112,385f, 16,56983f, 2620,674f), Vector(0.0f, -17,84062f, 0.0f)), &iLocal_47 + 1504);
	*(&iLocal_47 + 1512) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType82", "rand_idle_stand", Vector(-2119,883f, 16,72542f, 2620,72f), Vector(0.0f, 25,03708f, 0.0f)), &iLocal_47 + 1512);
	*(&iLocal_47 + 1520) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType63", "look_distance_binocs", Vector(-2067,405f, 16,69958f, 2617,552f), Vector(0.0f, -81,38427f, 0.0f)), &iLocal_47 + 1520);
	*(&iLocal_47 + 1528) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType237", "Rand_Idle_NearWall_nospawn", Vector(-2090,025f, 16,96187f, 2604,178f), Vector(0.0f, 115,7748f, 0.0f)), &iLocal_47 + 1528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType239", "lean_rail_nospawn", Vector(-2089,427f, 16,9485f, 2608,886f), Vector(0.0f, 115,7847f, 0.0f)), &iLocal_47 + 1528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType252", "stand_lookdistance_w_any", Vector(-2091,729f, 16,96536f, 2602,352f), Vector(0.0f, 39,85849f, 0.0f)), &iLocal_47 + 1528);
	*(&iLocal_47 + 1536) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType253", "stand_announce", Vector(-2187,911f, 16,94703f, 2607,581f), Vector(0.0f, 88,12452f, 0.0f)), &iLocal_47 + 1536);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType254", "stand_announce", Vector(-2204,041f, 16,51072f, 2606,236f), Vector(0.0f, 264,013f, 0.0f)), &iLocal_47 + 1536);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType255", "stand_announce", Vector(-2198,794f, 16,96556f, 2607,583f), Vector(0.0f, -89,32014f, 0.0f)), &iLocal_47 + 1536);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType256", "stand_announce", Vector(-2200,322f, 16,96627f, 2610,745f), Vector(0.0f, 315,166f, 0.0f)), &iLocal_47 + 1536);
	*(&iLocal_47 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "triggerDancer02", "stand_drunk_dancing_link", Vector(-2169,921f, 16,87449f, 2590,573f), Vector(0.0f, 167,6132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1544), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType231", "stand_lookdistance_w_any", Vector(-2205,243f, 16,59217f, 2592,872f), Vector(0.0f, 18,75779f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType64", "Rand_Idle_NearWall", Vector(-2081,491f, 16,74427f, 2620,966f), Vector(0.0f, 116,767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType240", "stand_drunk_rowdydrink", Vector(-2169,033f, 16,41378f, 2608,294f), Vector(0.0f, -74,80332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType241", "stand_drunk_rowdydrink", Vector(-2167,032f, 16,28049f, 2608,5f), Vector(0.0f, 60,83088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType242", "stand_drunk_rowdydrink", Vector(-2167,314f, 16,40722f, 2607,566f), Vector(0.0f, 123,469f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType243", "stand_drunk_rowdydrink", Vector(-2168,759f, 16,46106f, 2607,238f), Vector(0.0f, -128,1123f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType244", "stand_drunk_rowdydrink", Vector(-2167,855f, 16,26282f, 2609,123f), Vector(0.0f, 20,68025f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType248", "rand_idle_stand", Vector(-2152,155f, 16,77385f, 2619,603f), Vector(0.0f, -1,021891f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_dnd_rowdydrink", "stand_drunkRowdy_Spawn", Vector(-2090,957f, 16,47942f, 2614,072f), Vector(0.0f, -223,5286f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1552), 1);
	*(&iLocal_47 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_dnd_rowdydrink1", "stand_drunkRowdy_Spawn", Vector(-2090,664f, 16,4346f, 2616,222f), Vector(0.0f, 88,49599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1560), 1);
	*(&iLocal_47 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_worried", "stand_announce", Vector(-2090,604f, 16,46924f, 2615,268f), Vector(0.0f, 109,626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1568), 1);
	*(&iLocal_47 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_yelling", "stand_yelling_mid", Vector(-2092,197f, 16,47942f, 2613,164f), Vector(0.0f, -195,479f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1576), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "arm_yell_down", "nlean_rail", Vector(-2164,722f, 19,98465f, 2586,89f), Vector(0.0f, 179,8283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "fence_talking", "lean_fence_L_talking", Vector(-2162,677f, 19,95568f, 2594,332f), Vector(0.0f, 90,3136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType264", "bar_drink_serve", Vector(-2165,634f, 16,89193f, 2593,316f), Vector(0.0f, -88,6147f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType266", "bar_drink_serve", Vector(-2165,617f, 16,87588f, 2594,951f), Vector(0.0f, -90,22275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType270", "Bar_lean_stand", Vector(-2165,66f, 16,89193f, 2595,927f), Vector(0.0f, -90,22275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType271", "nlean_rail", Vector(-2172,252f, 17,77166f, 2588,141f), Vector(0.0f, -91,36955f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType279", "horse_stay", Vector(-2173,197f, 16,56468f, 2558,211f), Vector(0.0f, -91,77948f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType281", "horse_stay", Vector(-2168f, 16,01711f, 2532f), Vector(0.0f, 17,754f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType282", "horse_stay", Vector(-2160.0f, 16,21155f, 2527,988f), Vector(0.0f, -217,4164f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-2173,376f, 16,87441f, 2593,056f), Vector(0.0f, -74,3936f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "triggerDancer01", "stand_drunk_dancing_link", Vector(-2169,052f, 16,87441f, 2589,236f), Vector(0.0f, 207,3129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1584), 1);
	*(&iLocal_47 + 1592) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_bartender_bar_work", "stand_bartender_bar_work", Vector(-2163,707f, 16,87201f, 2594,99f), Vector(0.0f, 89,79378f, 0.0f)), &iLocal_47 + 1592);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "mex_flirt_stand_link", "mex_flirt_stand_link", Vector(-2165,617f, 16,87441f, 2591,68f), Vector(0.0f, 88,5307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "mex_flirt_stand_link1", "mex_flirt_stand_link", Vector(-2173,214f, 17,77769f, 2585,899f), Vector(0.0f, -136,866f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_sleep_ARM", "player_sleep_bed_R", Vector(-2156,463f, 19,94658f, 2596,331f), Vector(0.0f, -90,89016f, 0.0f));
	*(&iLocal_47 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Locked_Footlocker", "Locked_Footlocker", Vector(-2159,828f, 19,9203f, 2598,874f), Vector(0.0f, 0,293473f, 0.0f));
	DECOR_SET_BOOL(&iLocal_47 + 1608, "PlayerHouseChest", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L", "look_out_window_L", Vector(-2193,027f, 16,97576f, 2612,505f), Vector(0.0f, 180,6047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_table", "lean_table", Vector(-2195,412f, 16,9651f, 2604,664f), Vector(0.0f, 89,03907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "nsit_docks", "nsit_docks", Vector(-2204,892f, 19,72501f, 2619,306f), Vector(0.0f, -89,25264f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L1x", "look_out_window_L", Vector(-2168,6f, 17,41901f, 2632,336f), Vector(0.0f, 89,71231f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_anyx", "stand_lookdistance_w_any", Vector(-2190,059f, 16,54568f, 2619,522f), Vector(0.0f, -84,13775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_distance_binocsx", "look_distance_binocs", Vector(-2208,104f, 19,7898f, 2620,879f), Vector(0.0f, 174,3069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talkingx", "lean_fence_H_talking", Vector(-2191,414f, 16,20722f, 2574,817f), Vector(0.0f, -88,865f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talking1x", "lean_fence_H_talking", Vector(-2189,916f, 16,40691f, 2561,385f), Vector(0.0f, 87,66937f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L2x", "look_out_window_L", Vector(-2190,495f, 16,99175f, 2606,629f), Vector(0.0f, -91,09498f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L3x", "look_out_window_L", Vector(-2196,375f, 16,97022f, 2608,372f), Vector(0.0f, 90,3454f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_docks11x", "nsit_docks", Vector(-2171,954f, 17,41891f, 2630,839f), Vector(0.0f, 84,45539f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand11x", "rand_idle_stand", Vector(-2170,156f, 16,91929f, 2622,642f), Vector(0.0f, 45,69848f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Pee12x", "Pee", Vector(-2163,634f, 16,44941f, 2637,621f), Vector(0.0f, 32,65222f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R11x", "look_out_window_R", Vector(-2163,833f, 16,9118f, 2622,975f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R12x", "look_out_window_R", Vector(-2162,215f, 16,90901f, 2619,504f), Vector(0.0f, 10,08464f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "use_shelf10x", "nuse_shelf", Vector(-2162,611f, 16,91421f, 2625,158f), Vector(0.0f, -87,28861f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "use_shelf11x", "nuse_shelf", Vector(-2164,559f, 16,91039f, 2632,775f), Vector(0.0f, 149,5729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any11x", "stand_lookdistance_w_any", Vector(-2169,946f, 17,41941f, 2631,192f), Vector(0.0f, 64,43163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talking", "lean_fence_H_talking", Vector(-2169,24f, 16,4355f, 2554,9f), Vector(0.0f, 89,81428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_hammer_wall", "stand_hammer_wall", Vector(-2179,42f, 16,48747f, 2554,251f), Vector(0.0f, -89,59718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand", "rand_idle_stand", Vector(-2177,09f, 16,52774f, 2573,944f), Vector(0.0f, 98,65912f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand12", "rand_idle_stand", Vector(-2177,072f, 16,53057f, 2575,016f), Vector(0.0f, 88,32368f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand13", "rand_idle_stand", Vector(-2164,281f, 16,46638f, 2573,677f), Vector(0.0f, 271,2641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand14", "rand_idle_stand", Vector(-2164,32f, 16,46638f, 2574,818f), Vector(0.0f, 271,2641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L4", "look_out_window_L", Vector(-2164,184f, 16,44568f, 2541,941f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talking2", "lean_fence_H_talking", Vector(-2156,483f, 16,5428f, 2541,823f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_table1", "lean_table", Vector(-2146,071f, 16,63495f, 2556,974f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R", "look_out_window_R", Vector(-2144,218f, 16,63187f, 2561,093f), Vector(0.0f, -88,93098f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_blacksmith", "lie_sleep_on_bed_l", Vector(-2155,853f, 16,63935f, 2556,417f), Vector(0.0f, 91,40843f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R13", "look_out_window_R", Vector(-2143,866f, 16,44941f, 2634,852f), Vector(0.0f, 92,58372f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand15", "rand_idle_stand", Vector(-2155,129f, 16,44941f, 2633,409f), Vector(0.0f, 142,5491f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2154,127f, 16,44941f, 2634,827f), Vector(0.0f, 131,6572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_rail15x", "nlean_rail", Vector(-2150,81f, 16,77385f, 2619,821f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand16", "rand_idle_stand", Vector(-2144,35f, 16,78238f, 2620,699f), Vector(0.0f, -37,14258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R15", "look_out_window_R", Vector(-2149,081f, 16,77385f, 2622,638f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "use_shelf13", "nuse_shelf", Vector(-2146,548f, 16,77385f, 2626,819f), Vector(0.0f, 178,3069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "use_shelf12", "nuse_shelf", Vector(-2149,791f, 16,77385f, 2628,58f), Vector(0.0f, 178,3069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_distance_binocs16x", "look_distance_binocs", Vector(-2142,713f, 20,02196f, 2626,441f), Vector(0.0f, -143,8928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_railz", "nlean_rail", Vector(-2145,077f, 20,02196f, 2621,982f), Vector(0.0f, -44,45429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWallz", "Rand_Idle_NearWall", Vector(-2148,146f, 19,96004f, 2621,185f), Vector(0.0f, 0,6971646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any12", "stand_lookdistance_w_any", Vector(-2151,815f, 19,95455f, 2620,367f), Vector(0.0f, 53,34575f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "mex_pickGarbage", "mex_pickGarbage", Vector(-2135,736f, 16,44941f, 2625,605f), Vector(0.0f, -118,7554f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "mex_pickGarbage1", "mex_pickGarbage", Vector(-2117,878f, 16,34741f, 2629,083f), Vector(0.0f, 47,83566f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-2123,178f, 16,6948f, 2621,176f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2108,371f, 16,44941f, 2621,976f), Vector(0.0f, -74,40768f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_table2", "lean_table", Vector(-2065,618f, 19,53035f, 2654,512f), Vector(0.0f, 134,5308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L7", "look_out_window_L", Vector(-2071,781f, 19,43289f, 2642,833f), Vector(0.0f, 43,94379f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talking3", "lean_fence_H_talking", Vector(-2071,249f, 16,65631f, 2617,191f), Vector(0.0f, 23,64186f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any14", "stand_lookdistance_w_any", Vector(-2084,098f, 16,70948f, 2620,059f), Vector(0.0f, 80,12573f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L9", "look_out_window_L", Vector(-2090,384f, 16,96457f, 2606,772f), Vector(0.0f, 114,1929f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_distance_binocs", "look_distance_binocs", Vector(-2091,325f, 16,96188f, 2605,651f), Vector(0.0f, 102,1292f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-2092,172f, 16,95293f, 2602,69f), Vector(0.0f, 115,9281f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_47 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-2083,03f, 16,96188f, 2599,26f), Vector(0.0f, 25,04439f, 0.0f));
	*(&iLocal_47 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleep_prisoner", "lie_sleep_on_bed_r", Vector(-2080,711f, 16,96188f, 2604,168f), Vector(0.0f, -153,7522f, 0.0f));
	*(&iLocal_47 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_announce", "stand_announce", Vector(-2080,467f, 16,96188f, 2602,948f), Vector(0.0f, -63,28666f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L10", "look_out_window_L", Vector(-2082,81f, 16,96188f, 2603,262f), Vector(0.0f, 116,0992f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R18", "look_out_window_R", Vector(-2083,772f, 16,96188f, 2601,11f), Vector(0.0f, 115,0678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_distance_binocs17", "look_distance_binocs", Vector(-2112,446f, 17,02981f, 2587,183f), Vector(0.0f, -14,99437f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand17", "rand_idle_stand", Vector(-2110,686f, 17,02981f, 2602,168f), Vector(0.0f, 179,6518f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand18", "rand_idle_stand", Vector(-2125,737f, 16,88595f, 2602,359f), Vector(0.0f, 179,6518f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand19", "rand_idle_stand", Vector(-2119,52f, 17,00331f, 2602,167f), Vector(0.0f, 179,6518f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any15", "stand_lookdistance_w_any", Vector(-2117,373f, 17,02981f, 2602,097f), Vector(0.0f, 127,9576f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-2124,348f, 16,90333f, 2600,418f), Vector(0.0f, 179,3093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R19", "look_out_window_R", Vector(-2129,349f, 16,61306f, 2602,486f), Vector(0.0f, 183,1944f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-2137,998f, 16,87524f, 2600,658f), Vector(0.0f, 178,6125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_L_talking1", "lean_fence_L_talking", Vector(-2144,883f, 19,8104f, 2602,59f), Vector(0.0f, -179,08f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_fence_low1", "sit_fence_low", Vector(-2145,288f, 19,8104f, 2601,557f), Vector(0.0f, 89,64549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any16", "stand_lookdistance_w_any", Vector(-2138,745f, 19,8104f, 2602,665f), Vector(0.0f, -101,1778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "nlean_rail", "nlean_rail", Vector(-2136,458f, 19,86377f, 2601,958f), Vector(0.0f, -89,1021f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "use_shelf15", "nuse_shelf", Vector(-2142,562f, 16,87216f, 2595,831f), Vector(0.0f, 94,53776f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_announce1", "stand_announce", Vector(-2145,085f, 19,8104f, 2597,825f), Vector(0.0f, 2,444614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talking4", "lean_fence_H_talking", Vector(-2153,772f, 16,44941f, 2598,243f), Vector(0.0f, 85,6907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_L_talking2", "lean_fence_L_talking", Vector(-2158,817f, 16,88975f, 2605,337f), Vector(0.0f, -87,18102f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-2161,728f, 16,87863f, 2603,609f), Vector(0.0f, 180,9005f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(-2171,504f, 16,88975f, 2604,152f), Vector(0.0f, 141,1548f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_fence_low2", "sit_fence_low", Vector(-2176,4f, 19,98138f, 2594,772f), Vector(0.0f, 89,01402f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any17", "stand_lookdistance_w_any", Vector(-2176,207f, 20,04194f, 2592,683f), Vector(0.0f, 17,81982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_H_talking5", "lean_fence_H_talking", Vector(-2176,997f, 16,56471f, 2588,368f), Vector(0.0f, -93,96775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_L_talking4", "lean_fence_L_talking", Vector(-2176,047f, 19,94883f, 2598,568f), Vector(0.0f, 106,6973f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_fence_L_talking5", "lean_fence_L_talking", Vector(-2167,177f, 19,97874f, 2605,375f), Vector(0.0f, 179,5665f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any18", "stand_lookdistance_w_any", Vector(-2155,892f, 20,01127f, 2602,075f), Vector(0.0f, -103,3536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_fence_low3", "sit_fence_low", Vector(-2157,925f, 19,99962f, 2607,469f), Vector(0.0f, -91,6655f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_table7", "lean_table", Vector(-2167,044f, 16,87441f, 2594,208f), Vector(0.0f, 48,96613f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_table8", "lean_table", Vector(-2169,899f, 16,8748f, 2595,687f), Vector(0.0f, 122,5053f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", Vector(-2166,893f, 19,9811f, 2585,772f), Vector(0.0f, 180,1479f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", Vector(-2154,495f, 16,44941f, 2623,977f), Vector(0.0f, -92,92416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_rail_push_any", "lean_rail_push_any", Vector(-2173,194f, 19,97495f, 2602,803f), Vector(0.0f, 136,8586f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L12", "look_out_window_L", Vector(-2166,921f, 19,79557f, 2571,635f), Vector(0.0f, -93,35995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_docks12", "nsit_docks", Vector(-2168,921f, 19,79536f, 2571,135f), Vector(0.0f, 93,41817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "horse_tend2", "horse_tend", Vector(-2172,122f, 16,56471f, 2575,044f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "horse_stay", "horse_stay", Vector(-2168,317f, 16,56469f, 2574,49f), Vector(0.0f, 214,9998f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_barrel", "sit_barrel", Vector(-2153,645f, 16,44941f, 2617,644f), Vector(0.0f, 179,8896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_sellPaper", "stand_sellPaper", Vector(-2190,739f, 16,54066f, 2616,604f), Vector(0.0f, -85,88631f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "knl_watertrough", "knl_watertrough", Vector(-2158,693f, 16,44941f, 2576,211f), Vector(0.0f, 179,2573f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "knl_watertrough1", "knl_watertrough", Vector(-2156,368f, 16,44941f, 2604,331f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "knl_watertrough2", "knl_watertrough", Vector(-2173,254f, 16,44941f, 2626,777f), Vector(0.0f, -89,20662f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType283", "rand_idle_stand", Vector(-2087,949f, 16,60519f, 2612,018f), Vector(0.0f, 110,107f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType287", "rand_idle_stand", Vector(-2132,379f, 16,58855f, 2618,899f), Vector(0.0f, -27,44688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType288", "Rand_Idle_NearWall", Vector(-2143,395f, 16,77385f, 2625,513f), Vector(0.0f, -89,81995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_railz1", "nlean_rail", Vector(-2143,662f, 20,02196f, 2623,37f), Vector(0.0f, -44,45429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2159,542f, 16,44941f, 2632,819f), Vector(0.0f, -91,22659f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_distance_binocsx1", "look_distance_binocs", Vector(-2208,026f, 19,7898f, 2616,236f), Vector(0.0f, 13,98371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L13", "Rand_Idle_NearWall_Shoulder_L", Vector(-2175,934f, 16,47405f, 2532,868f), Vector(0.0f, 179,2605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L14", "repair_kneel", Vector(-2160,465f, 16,33682f, 2519,147f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType289", "look_out_window_R", Vector(-2141,506f, 16,6462f, 2557,709f), Vector(0.0f, -122,7426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "feed_chickens", "feed_chickens", Vector(-2149,653f, 16,46369f, 2546,724f), Vector(0.0f, -32,78732f, 0.0f));
	*(&iLocal_47 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "feed_chickens1", "feed_chickens", Vector(-2140,72f, 16,46369f, 2546,855f), Vector(0.0f, -42,18499f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "aiGringoLocType290", "rand_idle_stand", Vector(-2144,209f, 16,87216f, 2602,623f), Vector(0.0f, -259,5937f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Location_102", "look_out_window_R", Vector(-2166,648f, 16,87458f, 2605,398f), Vector(0.0f, -178,681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1680) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_saloon_01", "dog_peeing", Vector(-2176,938f, 16,41905f, 2593,074f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_station_01", "dog_sleeping", Vector(-2185,926f, 16,37673f, 2605,409f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_station_01", "dog_peeing", Vector(-2186,083f, 16,3475f, 2602,338f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_station_02", "dog_peeing", Vector(-2204,967f, 16,64079f, 2595,141f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_saloon_03", "dog_sleeping", Vector(-2174,763f, 16,40189f, 2596,316f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_saloon_02", "dog_peeing", Vector(-2157,361f, 16,42052f, 2606,533f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_saloon_01", "dog_sleeping", Vector(-2173,104f, 16,53476f, 2604,969f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_saloon_03", "dog_peeing", Vector(-2168,33f, 16,37242f, 2582,668f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_gunsmith_01", "dog_sleeping", Vector(-2143,878f, 16,41491f, 2587,041f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_dpexpress_01", "dog_peeing", Vector(-2165,343f, 16,42262f, 2617,71f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_gunsmith_01", "dog_peeing", Vector(-2133,749f, 16,57407f, 2603,01f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_crossstreet_01", "dog_sleeping", Vector(-2114,696f, 16,57451f, 2619,658f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_crossstreet_02", "dog_sleeping", Vector(-2109,964f, 16,5428f, 2620,052f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_crossstreet_01", "dog_peeing", Vector(-2116,7f, 16,33736f, 2621,7f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_crossstreet_04", "dog_sleeping", Vector(-2129,593f, 16,52833f, 2619,152f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_crossstreet_02", "dog_peeing", Vector(-2135,163f, 16,40815f, 2621,397f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_crossstreet_03", "dog_peeing", Vector(-2144,514f, 16,37378f, 2617,726f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_pens_01", "dog_sleeping", Vector(-2177,076f, 16,48463f, 2567,023f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_pens_02", "dog_sleeping", Vector(-2141,78f, 16,59721f, 2559,999f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_pens_01", "dog_peeing", Vector(-2156f, 16,41133f, 2574,28f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_outskirts_01", "dog_peeing", Vector(-2087,994f, 16,45528f, 2598,725f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_outskirts_02", "dog_sleeping", Vector(-2084,795f, 16,55237f, 2614,501f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sleeping_outskirts_03", "dog_sleeping", Vector(-2074,266f, 16,66845f, 2619,537f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_outskirts_02", "dog_peeing", Vector(-2084,092f, 16,48549f, 2622,574f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_47 + 1680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_peeing_church_01", "dog_peeing", Vector(-2076f, 18,45389f, 2637,149f), Vector(0.0f, -98,08987f, 0.0f)), &iLocal_47 + 1680);
	*(&iLocal_47 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "bathroom_break", "Pee", Vector(-2165,054f, 16,88134f, 2586,268f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1688), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "leaning_stand", "leaning_stand", Vector(-2165,598f, 16,87441f, 2594,096f), Vector(0.0f, -90,42302f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "drink_player", "drink_player", Vector(-2165,623f, 16,87441f, 2596,735f), Vector(0.0f, -89,85806f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "leaning_stand1", "leaning_stand", Vector(-2165,573f, 16,87441f, 2598,364f), Vector(0.0f, -89,18932f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "nuse_shelf", "nuse_shelf", Vector(-2162,475f, 16,87441f, 2596,327f), Vector(0.0f, -89,87218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1704), 0);
	*(&iLocal_47 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "browse_table", "browse_table", Vector(-2162,348f, 16,87441f, 2599,653f), Vector(0.0f, -89,73068f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1712), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R20", "look_out_window_R", Vector(-2113,121f, 17,02981f, 2602,041f), Vector(0.0f, 180,4369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_knock_on_door", "stand_knock_on_door", Vector(-2112,364f, 17,02981f, 2588,467f), Vector(0.0f, 178,6835f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_knock_on_door1", "stand_knock_on_door", Vector(-2082,3f, 16,72945f, 2619,006f), Vector(0.0f, -63,12367f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "whore_stand_flirt", "mex_flirt_stand_link", Vector(-2166,973f, 16,87441f, 2597,623f), Vector(0.0f, -5,155336f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1720), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-2168,673f, 16,87441f, 2595,944f), Vector(0.0f, 231,3069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-2168,076f, 16,87441f, 2596,689f), Vector(0.0f, 29,81904f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(-2173,386f, 16,87441f, 2592,021f), Vector(0.0f, -102,9586f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_L15", "look_out_window_L", Vector(-2167,305f, 16,87441f, 2602,172f), Vector(0.0f, 180,5833f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall6", "Rand_Idle_NearWall", Vector(-2168,365f, 16,87441f, 2602,208f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "hhh", "npreaching", Vector(-2175,464f, 16,47526f, 2604,99f), Vector(0.0f, -42,51667f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1728), 0);
	*(&iLocal_47 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_announce2", "stand_drunk_rowdydrink", Vector(-2174,118f, 16,88116f, 2602,615f), Vector(0.0f, 148,3137f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1736), 1);
	*(&iLocal_47 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_yelling_mid", "stand_drunk_rowdydrink", Vector(-2173,363f, 16,88977f, 2603,128f), Vector(0.0f, 131,1913f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1744), 1);
	*(&iLocal_47 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any19", "stand_lookdistance_w_any", Vector(-2138,948f, 16,8834f, 2602,986f), Vector(0.0f, -180,0513f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_lookdistance_w_any20", "stand_lookdistance_w_any", Vector(-2132.0f, 16,61191f, 2561,799f), Vector(0.0f, -109,9834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_knock_on_door2", "stand_knock_on_door", Vector(-2143,287f, 19,86164f, 2600,546f), Vector(0.0f, -16,74055f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_hammer_table", "stand_hammer_table", Vector(-2149,096f, 16,44941f, 2618,401f), Vector(0.0f, 90,45417f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sit_barrel3", "sit_barrel", Vector(-2125,166f, 16,58369f, 2619,433f), Vector(0.0f, 179,2646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand22", "rand_idle_stand", Vector(-2111,911f, 16,57949f, 2618,774f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand23", "rand_idle_stand", Vector(-2120,654f, 16,7545f, 2618,422f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand24", "rand_idle_stand", Vector(-2131,845f, 16,58368f, 2620,233f), Vector(0.0f, -20,62683f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand25", "rand_idle_stand", Vector(-2143,765f, 16,74739f, 2621,279f), Vector(0.0f, -45,43121f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "rand_idle_stand26", "rand_idle_stand", Vector(-2148,637f, 16,77405f, 2623,75f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", Vector(-2111,081f, 16,57949f, 2620,705f), Vector(0.0f, -0,9419219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", Vector(-2130,372f, 16,60757f, 2600,985f), Vector(0.0f, 181,1283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R21", "look_out_window_R", Vector(-2125,397f, 16,56102f, 2618,889f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "look_out_window_R22", "look_out_window_R", Vector(-2150,208f, 20,01768f, 2620,493f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "lean_rail16", "nlean_rail", Vector(-2143,254f, 19,8046f, 2602,573f), Vector(0.0f, 181,8103f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_hammer_table1", "stand_hammer_table", Vector(-2119,774f, 16,72619f, 2618,871f), Vector(0.0f, 6,194611f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "browse_table_low", "browse_table_low", Vector(-2146,302f, 16,44941f, 2599,054f), Vector(0.0f, -67,13042f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "browse_table1", "browse_table", Vector(-2155,683f, 16,44941f, 2620,919f), Vector(0.0f, 194,9734f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "mex_flirt_sit_stool_att_lnk", "mex_flirt_sit_stool_attached_link", Vector(-2170,724f, 16,89649f, 2603,103f), Vector(0.0f, 313,6567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "player_watchMovie", "player_sit_movie", Vector(-2074,223f, 19,52564f, 2647,24f), Vector(0.0f, 46,52636f, 0.0f));
	*(&iLocal_47 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "MovieTixSeller", "ticket_taker_link", Vector(-2077,179f, 18,74706f, 2642,875f), Vector(0.0f, 39,10923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1776), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_drunk_dancing_link", "stand_drunk_dancing_link", Vector(-2171,523f, 16,87441f, 2590,842f), Vector(0.0f, -168,1155f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1784) = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), &iLocal_47, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting", "dog_sitting", Vector(-2186,302f, 16,37671f, 2613,554f), Vector(0.0f, -191,1482f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting1", "dog_sitting", Vector(-2186,604f, 16,35862f, 2623,452f), Vector(0.0f, -92,32429f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting2", "dog_sitting", Vector(-2187,527f, 16,34282f, 2597,933f), Vector(0.0f, -175,2858f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting4", "dog_sitting", Vector(-2177,214f, 16,53463f, 2552,832f), Vector(0.0f, 83,80367f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting5", "dog_sitting", Vector(-2176,894f, 16,52697f, 2602,231f), Vector(0.0f, -152,9984f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting7", "dog_sitting", Vector(-2154,525f, 16,52697f, 2606,247f), Vector(0.0f, -180,9651f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting8", "dog_sitting", Vector(-2157,976f, 16,52697f, 2566,476f), Vector(0.0f, -431,1105f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting9", "dog_sitting", Vector(-2141,493f, 16,66621f, 2565,51f), Vector(0.0f, -286,3068f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting10", "dog_sitting", Vector(-2146,901f, 16,56983f, 2551,105f), Vector(0.0f, -367,7505f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting11", "dog_sitting", Vector(-2168,334f, 16,56983f, 2549,836f), Vector(0.0f, -297,1856f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting12", "dog_sitting", Vector(-2084,815f, 16,73917f, 2628,624f), Vector(0.0f, -273,8647f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting13", "dog_sitting", Vector(-2124,204f, 16,39455f, 2639,636f), Vector(0.0f, -226,6797f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting14", "dog_sitting", Vector(-2140,348f, 16,4856f, 2628,998f), Vector(0.0f, -395,0715f, 0.0f)), &iLocal_47 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "dog_sitting15", "dog_sitting", Vector(-2135,021f, 16,4856f, 2620,546f), Vector(0.0f, -395,0715f, 0.0f)), &iLocal_47 + 1784);
	*(&iLocal_47 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "www", "stand_drunk_rowdydrink", Vector(-2161,039f, 16,29356f, 2583,57f), Vector(0.0f, -23,57689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1792), 0);
	*(&iLocal_47 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "ddd", "npreaching", Vector(-2164,57f, 16,21394f, 2608,978f), Vector(0.0f, 58,71915f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1800), 0);
	*(&iLocal_47 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Locked_Footlocker1", "Locked_Footlocker", Vector(-2133,297f, 16,61758f, 2636,681f), Vector(0.0f, -88,37072f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1808), 0);
	DECOR_SET_INT(&iLocal_47 + 1808, "GringoDollarAmt", 20);
	*(&iLocal_47 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Locked_Footlocker2", "Locked_Footlocker", Vector(-2132,833f, 16,61759f, 2637,759f), Vector(0.0f, -32,03496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1816), 0);
	DECOR_SET_INT(&iLocal_47 + 1816, "GringoDollarAmt", 20);
	*(&iLocal_47 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-2160,135f, 16,44941f, 2628,601f), Vector(0.0f, -89,88496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1824), 1);
	*(&iLocal_47 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Bar_lean_stand", "Bar_lean_stand", Vector(-2165,654f, 16,86839f, 2592,604f), Vector(0.0f, -91,42857f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1832), 1);
	*(&iLocal_47 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "Bar_lean_stand1", "Bar_lean_stand", Vector(-2164,351f, 16,87442f, 2589,66f), Vector(0.0f, 195,3948f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1840), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "mex_flirt_s_s_attached_link", "mex_flirt_sit_stool_attached_link", Vector(-2173,015f, 16,87441f, 2594,442f), Vector(0.0f, 89,51157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_47 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "bench_chair1", "bench_chair", Vector(-2071,095f, 19,53035f, 2649,305f), Vector(0.0f, 44,19792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1848), 0);
	*(&iLocal_47 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "bench_chair2", "bench_chair", Vector(-2072,769f, 19,53035f, 2648,47f), Vector(0.0f, 44,19792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1856), 0);
	*(&iLocal_47 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "bench_chair3", "bench_chair", Vector(-2068,924f, 19,53035f, 2647,186f), Vector(0.0f, 44,19792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1864), 0);
	*(&iLocal_47 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "fivefingerfillet_spectate", "fivefingerfillet_spectate", Vector(-2193,327f, 16,5768f, 2593,874f), Vector(0.0f, 51,97347f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1872), 1);
	*(&iLocal_47 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(-2192,68f, 16,5768f, 2592,817f), Vector(0.0f, 62,0464f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1880), 1);
	*(&iLocal_47 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(-2192,956f, 16,5768f, 2591,536f), Vector(0.0f, 126,1652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_47 + 1888), 1);
	*(&iLocal_47 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "merchant_lay_bed", "merchant_lay_bed", Vector(-2124,275f, 16,905f, 2594,836f), Vector(0.0f, 273,732f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_47, "stand_hammer_table2", "stand_hammer_table", Vector(-2159,391f, 16,43887f, 2626,448f), Vector(0.0f, 90,1709f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	return 1;
}

bool Function_188(struct<2>[] Param0) //Position: 0x12581 / 75137
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_192();
	iVar1 = 0;
	if (!Function_10(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_191(&(Param0[iVar02]), 8);
		}
		else if (Function_190())
		{
			iVar1 = 1;
			Function_191(&(Param0[iVar02]), 8);
		}
		Function_191(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_10(&(Param0[02]), 8) || iVar1));
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
				Function_191(&(Param0[iVar02]), 1);
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
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
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
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
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
	Function_189();
	return 1;
}

void Function_189() //Position: 0x12943 / 76099
{
	if (!Function_160(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_190() //Position: 0x12983 / 76163
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

void Function_191(struct<13> Param0) //Position: 0x129B1 / 76209
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_192() //Position: 0x129C4 / 76228
{
	if (!Function_160(128))
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

var Function_193(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x12A06 / 76294
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_194(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_191(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_194(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x12A44 / 76356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_191(&(Param0[iVar02]), 4);
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

void Function_195(int iParam0, int iParam1) //Position: 0x12B13 / 76563
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

bool Function_196() //Position: 0x12B5D / 76637
{
	var uVar0;
	
	Function_195(3, 3);
	uVar0 = &uVar0;
	iLocal_31 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_31))
	{
		iLocal_31 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&iLocal_31 + 8) = Vector(-2161,618f, 16,42906f, 2606,938f);
	*(&iLocal_31 + 8 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_31 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_31, "f_playerHorse", Vector(-2161,618f, 16,42906f, 2606,938f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_31 + 40) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_31, Function_86(), "p_gen_boiler01x", Vector(-2138,359f, 19,4f, 2573,469f), Vector(81,21272f, -59,54844f, -9,668658f), 0);
	*(&iLocal_31 + 48) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_31, Function_86(), "p_gen_boiler01x", Vector(-2136,288f, 19,3f, 2573,469f), Vector(81,21272f, -59,54844f, -9,668658f), 0);
	*(&iLocal_31 + 56) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_31, Function_86(), "p_gen_boiler01x", Vector(-2133,824f, 19,20046f, 2573,469f), Vector(81,21272f, -59,54844f, -9,668658f), 0);
	return 1;
}

void Function_197(char* cParam0) //Position: 0x12CBD / 76989
{
	if (!Function_160(128))
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

