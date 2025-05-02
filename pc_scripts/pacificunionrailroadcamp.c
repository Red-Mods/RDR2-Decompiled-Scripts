//Decompiled with MagicRDR v1.0
//Function Count : 100
//Statics Count : 835
//Natives Count : 134
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 43;
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
	var uLocal_186 = 11;
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
	var uLocal_256 = 1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 1;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 1;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 1;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 1;
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
	int iLocal_420 = 0;
	bool bLocal_421 = false;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 17;
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
	vector3 vLocal_800[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	int iLocal_832 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_420 = 0;
	Function_99("Initializing PacificUnionRailroadCamp", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_421 = 1000;
		switch (iLocal_420)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_420 = 1;
				}
				bLocal_421 = false;
				break;
			
			case 0x00000001:
				if (Function_98())
				{
					Global_98961 = 0;
					iLocal_420 = 2;
				}
				bLocal_421 = false;
				break;
			
			case 0x00000002:
				if (Function_89())
				{
					Function_88(&(Global_43791[iScriptParam_0]), 32);
					Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "rand_idle_stand15"), 1, 0, 0, 0, 0, 1);
					vLocal_800[03] = { StackVal, StackVal, Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "rand_idle_stand15"), 1, 0, 0, 0, 0, 1) };
					Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "smoking_stand11"), 1, 0, 0, 0, 0, 1);
					vLocal_800[13] = { StackVal, StackVal, Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "smoking_stand11"), 1, 0, 0, 0, 0, 1) };
					Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "rand_idle_stand14"), 1, 0, 0, 0, 0, 1);
					vLocal_800[23] = { StackVal, StackVal, Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "rand_idle_stand14"), 1, 0, 0, 0, 0, 1) };
					Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "smoking_stand10"), 1, 0, 0, 0, 0, 1);
					vLocal_800[33] = { StackVal, StackVal, Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "smoking_stand10"), 1, 0, 0, 0, 0, 1) };
					Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "rand_idle_stand13"), 1, 0, 0, 0, 0, 1);
					vLocal_800[43] = { StackVal, StackVal, Function_87(FIND_OBJECT_IN_LAYOUT(&iLocal_8, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(&iLocal_8, "rand_idle_stand13"), 1, 0, 0, 0, 0, 1) };
					iLocal_420 = 3;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
				}
				bLocal_421 = false;
				break;
			
			case 0x00000003:
				uLocal_422 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PacificUnionRailroadCampVol", &iScriptParam_0, 2, 0);
				Function_86(&Global_12644, &Global_15208, iScriptParam_0);
				iLocal_420 = 5;
				bLocal_421 = false;
				break;
			
			case 0x00000005:
				if (Function_85(&Global_12644, &Global_15208, iScriptParam_0))
				{
					iLocal_420 = 4;
					bLocal_421 = false;
				}
				else
				{
					bLocal_421 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_84(&(Global_43791[iScriptParam_0]), 16) && Function_83(Global_44085[iScriptParam_09]))
				{
					iLocal_420 = 6;
				}
				bLocal_421 = false;
				break;
			
			case 0x00000006:
				Function_82(StackVal, 0, &uLocal_424, Vector(-266,762f, 85,117f, 2120,414f));
				Function_81(StackVal, 0, &uLocal_424, Vector(-280,634f, 87,661f, 2121.0f));
				Function_80(StackVal, 0, &uLocal_424, Vector(-302,73f, 84,35f, 2131,1f));
				Function_79(StackVal, 0, &uLocal_424, Vector(-280,634f, 87,661f, 2121.0f));
				Function_78(StackVal, 0, &uLocal_424, Vector(-302,73f, 84,35f, 2131,1f));
				Function_77(StackVal, 0, &uLocal_424, Vector(-258,06f, 85,05f, 2122,53f));
				Function_76(0, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 1, &uLocal_424, Vector(-266,766f, 85,117f, 2120,2f));
				Function_81(StackVal, 1, &uLocal_424, Vector(-298,6489f, 84,32935f, 2116.0f));
				Function_80(StackVal, 1, &uLocal_424, Vector(-266,766f, 85,117f, 2120,2f));
				Function_79(StackVal, 1, &uLocal_424, Vector(-277,403f, 84,584f, 2095,399f));
				Function_78(StackVal, 1, &uLocal_424, Vector(-266,766f, 85,117f, 2120,2f));
				Function_77(StackVal, 1, &uLocal_424, Vector(-252,373f, 84,329f, 2123,671f));
				Function_76(1, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 2, &uLocal_424, Vector(-299,333f, 84,329f, 2124.0f));
				Function_81(StackVal, 2, &uLocal_424, Vector(-290,79f, 84,35f, 2094,42f));
				Function_80(StackVal, 2, &uLocal_424, Vector(-304.0f, 84,351f, 2128.0f));
				Function_79(StackVal, 2, &uLocal_424, Vector(-290,79f, 84,35f, 2094,42f));
				Function_78(StackVal, 2, &uLocal_424, Vector(-304.0f, 84,351f, 2128.0f));
				Function_77(StackVal, 2, &uLocal_424, Vector(-315,62f, 84,36777f, 2123,791f));
				Function_76(2, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 3, &uLocal_424, Vector(-302,26f, 84,35f, 2123,06f));
				Function_81(StackVal, 3, &uLocal_424, Vector(-244,66f, 84,329f, 2103,381f));
				Function_80(StackVal, 3, &uLocal_424, Vector(-302,26f, 84,35f, 2123,06f));
				Function_79(StackVal, 3, &uLocal_424, Vector(-244,66f, 84,329f, 2103,381f));
				Function_78(StackVal, 3, &uLocal_424, Vector(-302,26f, 84,35f, 2123,06f));
				Function_77(StackVal, 3, &uLocal_424, Vector(-314,006f, 84,329f, 2126,552f));
				Function_76(3, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 4, &uLocal_424, Vector(-299,7092f, 84,32941f, 2082,547f));
				Function_81(StackVal, 4, &uLocal_424, Vector(-277,48f, 84,351f, 2129,169f));
				Function_80(StackVal, 4, &uLocal_424, Vector(-300,53f, 84,55f, 2088,3f));
				Function_79(StackVal, 4, &uLocal_424, Vector(-280,42f, 84,329f, 2093,199f));
				Function_78(StackVal, 4, &uLocal_424, Vector(-307,614f, 84,329f, 2118,864f));
				Function_77(StackVal, 4, &uLocal_424, Vector(-315,999f, 84,27454f, 2126,504f));
				Function_76(4, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 5, &uLocal_424, Vector(-304,1736f, 84,55002f, 2089,449f));
				Function_81(StackVal, 5, &uLocal_424, Vector(-249,858f, 84,329f, 2101,484f));
				Function_80(StackVal, 5, &uLocal_424, Vector(-301,094f, 84,329f, 2131,663f));
				Function_79(StackVal, 5, &uLocal_424, Vector(-249,858f, 84,329f, 2101,484f));
				Function_78(StackVal, 5, &uLocal_424, Vector(-302,553f, 84,329f, 2123,962f));
				Function_77(StackVal, 5, &uLocal_424, Vector(-314,059f, 84,328f, 2134,831f));
				Function_76(5, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 6, &uLocal_424, Vector(-289,72f, 87,32f, 2114,93f));
				Function_81(StackVal, 6, &uLocal_424, Vector(-289,72f, 87,32f, 2114,93f));
				Function_80(StackVal, 6, &uLocal_424, Vector(-289,72f, 87,32f, 2114,93f));
				Function_79(StackVal, 6, &uLocal_424, Vector(-289,72f, 87,32f, 2114,93f));
				Function_78(StackVal, 6, &uLocal_424, Vector(-306,2889f, 84,32941f, 2131,512f));
				Function_77(StackVal, 6, &uLocal_424, Vector(-314,328f, 84,329f, 2131,738f));
				Function_76(6, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 7, &uLocal_424, Vector(-307,653f, 84,329f, 2120,486f));
				Function_81(StackVal, 7, &uLocal_424, Vector(-249,983f, 84,352f, 2096,53f));
				Function_80(StackVal, 7, &uLocal_424, Vector(-307,653f, 84,329f, 2120,486f));
				Function_79(StackVal, 7, &uLocal_424, Vector(-249,983f, 84,352f, 2096,53f));
				Function_78(StackVal, 7, &uLocal_424, Vector(-307,653f, 84,329f, 2120,486f));
				Function_77(StackVal, 7, &uLocal_424, Vector(-315,302f, 84,406f, 2132,153f));
				Function_76(7, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 8, &uLocal_424, Vector(-171,88f, 84,182f, 2071,48f));
				Function_81(StackVal, 8, &uLocal_424, Vector(-171,88f, 84,182f, 2071,48f));
				Function_80(StackVal, 8, &uLocal_424, Vector(-171,88f, 84,182f, 2071,48f));
				Function_79(StackVal, 8, &uLocal_424, Vector(-171,88f, 84,182f, 2071,48f));
				Function_78(StackVal, 8, &uLocal_424, Vector(-302,907f, 84,351f, 2128,898f));
				Function_77(StackVal, 8, &uLocal_424, Vector(-296,439f, 84,264f, 2137,403f));
				Function_76(8, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 9, &uLocal_424, Vector(-305,49f, 84,35f, 2134,11f));
				Function_81(StackVal, 9, &uLocal_424, Vector(-274,612f, 84,329f, 2102,467f));
				Function_80(StackVal, 9, &uLocal_424, Vector(-305,49f, 84,35f, 2134,11f));
				Function_79(StackVal, 9, &uLocal_424, Vector(-274,612f, 84,329f, 2102,467f));
				Function_78(StackVal, 9, &uLocal_424, Vector(-305,49f, 84,35f, 2134,11f));
				Function_77(StackVal, 9, &uLocal_424, Vector(-297,0513f, 84,26437f, 2137,2f));
				Function_76(9, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 10, &uLocal_424, Vector(-294,8471f, 84,329f, 2134,998f));
				Function_81(StackVal, 10, &uLocal_424, Vector(-301,502f, 84,329f, 2130,797f));
				Function_80(StackVal, 10, &uLocal_424, Vector(-301,502f, 84,329f, 2130,797f));
				Function_79(StackVal, 10, &uLocal_424, Vector(-301,502f, 84,329f, 2130,797f));
				Function_78(StackVal, 10, &uLocal_424, Vector(-301,502f, 84,329f, 2130,797f));
				Function_77(StackVal, 10, &uLocal_424, Vector(-301,502f, 84,329f, 2130,797f));
				Function_76(10, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 11, &uLocal_424, Vector(-307,67f, 84,35f, 2128,6f));
				Function_81(StackVal, 11, &uLocal_424, Vector(-294,306f, 84,403f, 2088.0f));
				Function_80(StackVal, 11, &uLocal_424, Vector(-307,67f, 84,35f, 2128,6f));
				Function_79(StackVal, 11, &uLocal_424, Vector(-254,97f, 84,55f, 2097,222f));
				Function_78(StackVal, 11, &uLocal_424, Vector(-307,67f, 84,35f, 2128,6f));
				Function_77(StackVal, 11, &uLocal_424, Vector(-292,85f, 84,38101f, 2124,313f));
				Function_76(11, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 12, &uLocal_424, Vector(-269,74f, 84,329f, 2091,258f));
				Function_81(StackVal, 12, &uLocal_424, Vector(-268,05f, 84,59f, 2097,74f));
				Function_80(StackVal, 12, &uLocal_424, Vector(-310,8121f, 84,32936f, 2128.0f));
				Function_79(StackVal, 12, &uLocal_424, Vector(-268,05f, 84,59f, 2097,74f));
				Function_78(StackVal, 12, &uLocal_424, Vector(-310,8121f, 84,32936f, 2128.0f));
				Function_77(StackVal, 12, &uLocal_424, Vector(-293,9245f, 84,329f, 2125,675f));
				Function_76(12, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 13, &uLocal_424, Vector(-251,671f, 84,329f, 2123,671f));
				Function_81(StackVal, 13, &uLocal_424, Vector(-255,091f, 84,55f, 2097,222f));
				Function_80(StackVal, 13, &uLocal_424, Vector(-306,124f, 84,329f, 2126,922f));
				Function_79(StackVal, 13, &uLocal_424, Vector(-301,247f, 84,55f, 2092,632f));
				Function_78(StackVal, 13, &uLocal_424, Vector(-306,124f, 84,329f, 2126,922f));
				Function_77(StackVal, 13, &uLocal_424, Vector(-294,2988f, 84,28979f, 2122,371f));
				Function_76(13, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 14, &uLocal_424, Vector(-314,006f, 84,329f, 2126,551f));
				Function_81(StackVal, 14, &uLocal_424, Vector(-297,875f, 84,394f, 2103,793f));
				Function_80(StackVal, 14, &uLocal_424, Vector(-314,006f, 84,329f, 2126,551f));
				Function_79(StackVal, 14, &uLocal_424, Vector(-297,875f, 84,394f, 2103,793f));
				Function_78(StackVal, 14, &uLocal_424, Vector(-314,006f, 84,329f, 2126,551f));
				Function_77(StackVal, 14, &uLocal_424, Vector(-240.0f, 84,219f, 2112,08f));
				Function_76(14, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 15, &uLocal_424, Vector(-296,439f, 84,264f, 2137,403f));
				Function_81(StackVal, 15, &uLocal_424, Vector(-305,865f, 84,538f, 2110,722f));
				Function_80(StackVal, 15, &uLocal_424, Vector(-293,127f, 87,594f, 2104,719f));
				Function_79(StackVal, 15, &uLocal_424, Vector(-293,127f, 87,594f, 2104,719f));
				Function_78(StackVal, 15, &uLocal_424, Vector(-296,439f, 84,264f, 2137,403f));
				Function_77(StackVal, 15, &uLocal_424, Vector(-306,379f, 84,329f, 2131,512f));
				Function_76(15, &uLocal_424, &iLocal_8);
				Function_82(StackVal, 16, &uLocal_424, Vector(-314,059f, 84,328f, 2134,831f));
				Function_81(StackVal, 16, &uLocal_424, Vector(-301,247f, 84,55f, 2092,632f));
				Function_80(StackVal, 16, &uLocal_424, Vector(-307,937f, 84,329f, 2132.0f));
				Function_79(StackVal, 16, &uLocal_424, Vector(-271,416f, 84,584f, 2096,576f));
				Function_78(StackVal, 16, &uLocal_424, Vector(-307,937f, 84,329f, 2132.0f));
				Function_77(StackVal, 16, &uLocal_424, Vector(-307,937f, 84,329f, 2132.0f));
				Function_76(16, &uLocal_424, &iLocal_8);
				Function_72(&Global_12644, &Global_15208, &uLocal_424, &Global_10996, iScriptParam_0);
				if (Function_84(&(Global_43791[iScriptParam_0]), 256) || !Function_71(2))
				{
					iLocal_832 = 1;
				}
				Function_70(&iLocal_8 + 1224, GET_OBJECT_FROM_PERS_CHAR(&Global_15208[13] + 16));
				Function_70(&iLocal_8 + 1232, GET_OBJECT_FROM_PERS_CHAR(&Global_15208[03] + 16));
				Function_70(&iLocal_8 + 1408, GET_OBJECT_FROM_PERS_CHAR(&Global_15208[83] + 16));
				Function_88(&(Global_43791[iScriptParam_0]), 8);
				if (Function_84(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_69(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_420 = 10;
				}
				else
				{
					iLocal_420 = 7;
				}
				bLocal_421 = false;
				break;
			
			case 0x00000007:
				Function_55(StackVal, &Global_98318, 4, Global_46926[2], "$/content/North/Mini_Games/ArmWrestling_UPR/ArmWrestling_UPR", 4294967295, 0, "UPRArmWrestling", 351, Vector(-263,113f, 85,117f, 2118,903f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "uprv_armwrestling"));
				Function_54(&Global_98318, 4, 1);
				Function_53(&Global_98318, 4);
				Function_52(iScriptParam_0);
				Function_48(iScriptParam_0);
				Function_43(iScriptParam_0);
				iLocal_420 = 8;
				bLocal_421 = false;
				break;
			
			case 0x00000008:
				Function_39(3, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				Function_38(64);
				Function_34(0, 8, 4, 7, 3);
				Function_31(&iLocal_4);
				Function_88(&(Global_43791[iScriptParam_0]), 512);
				bLocal_421 = false;
				iLocal_420 = 9;
				break;
			
			case 0x00000009:
				Function_29(&iLocal_4, iScriptParam_0);
				Function_88(&(Global_43791[iScriptParam_0]), 4);
				Function_28("Finished Initializing PacificUnionRailroadCamp", 5.0f);
				bLocal_421 = false;
				iLocal_420 = 10;
				break;
			
			case 0x0000000A:
				if (!Function_27(Global_98961, 16))
				{
					if (Function_24(&(Global_46926[2])))
					{
						Function_23(&Global_98961, 16);
					}
				}
				Function_20(&vLocal_800);
				if (Function_84(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_420 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_421);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2);
	Function_11(&Global_12644, &Global_15208, iScriptParam_0, (iLocal_832 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_69(&(Global_43791[iScriptParam_0]), 32);
	Function_69(&(Global_43791[iScriptParam_0]), 64);
	Function_69(&(Global_43791[iScriptParam_0]), 8);
	Function_69(&(Global_43791[iScriptParam_0]), 512);
	Function_69(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_422))
	{
		TERMINATE_SCRIPT(&uLocal_422);
	}
	Function_28("Unloaded PacificUnionRailroadCamp", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x108F / 4239
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

void Function_2(int iParam0) //Position: 0x10C5 / 4293
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x10E7 / 4327
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x10FD / 4349
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x1113 / 4371
{
	Function_6(&iLocal_8 + 8);
	RELEASE_LAYOUT_REF(&iLocal_8);
	return;
}

void Function_6(int iParam0) //Position: 0x1126 / 4390
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x114E / 4430
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

void Function_8(struct<13> Param0) //Position: 0x1299 / 4761
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x12B6 / 4790
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x12D4 / 4820
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x12E0 / 4832
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
	strcpy(&cVar0, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_84(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_69(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_17(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_17(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_16(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_17(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_16(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_84(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_71(2) || Function_84(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
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
			Function_88(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x14FE / 5374
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
		if (!Function_17(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1664 / 5732
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

int Function_14(int iParam0) //Position: 0x168F / 5775
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

void Function_15(var uParam0, int iParam1) //Position: 0x16C3 / 5827
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x16D4 / 5844
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x16EE / 5870
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x170B / 5899
{
	if (Function_27(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x1726 / 5926
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

void Function_20(vector3[] vParam0) //Position: 0x1BD4 / 7124
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (vParam0 - 1))
	{
		if (IS_GRINGO_VALID(&(vParam0[bVar03])) && IS_GRINGO_VALID(&vParam0[bVar03] + 8))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&(vParam0[bVar03]), "UseCase1")))
			{
				Function_23(&vParam0[bVar03] + 16, 64);
				if (Function_27(vParam0[bVar03].f_16, 2))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_27(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_27(vParam0[bVar03].f_16, 16))
				{
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_27(vParam0[bVar03].f_16, 32))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				if (Function_27(vParam0[bVar03].f_16, 2))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_27(vParam0[bVar03].f_16, 4))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
			}
			else
			{
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] == &vParam0[iVar13] + 8)
					{
						if (Function_27(vParam0[iVar13].f_16, 64))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_27(vParam0[bVar03].f_16, 64) && Function_27(vParam0[bVar03].f_16, 16))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_21(&vParam0[bVar03] + 16, 64);
						if (Function_27(vParam0[bVar03].f_16, 1))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_27(vParam0[bVar03].f_16, 64) && Function_27(vParam0[bVar03].f_16, 16))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
					if (Function_27(vParam0[bVar03].f_16, 1))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_27(vParam0[bVar03].f_16, 64))
					{
						if (Function_27(vParam0[bVar03].f_16, 32))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_27(vParam0[bVar03].f_16, 8))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_21(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_27(vParam0[bVar03].f_16, 64))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_27(vParam0[bVar03].f_16, 8))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
					Function_22(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_27(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x2404 / 9220
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_22(struct<17> Param0) //Position: 0x241A / 9242
{
	if (Function_27(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_23(var uParam0, int iParam1) //Position: 0x2443 / 9283
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_24(var uParam0) //Position: 0x2454 / 9300
{
	int iVar0;
	
	Function_26(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_26(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_25(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

struct<8> Function_25(int iParam0) //Position: 0x2557 / 9559
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,656f, 16,56962f, 3948,088f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,743f, 43,17878f, 3720,288f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,16f, 20,97986f, 3881,796f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,9332f, 85,11941f, 2118,893f);
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_26(int iParam0) //Position: 0x260B / 9739
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,104f, 16,52992f, 3948,271f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,721f, 43,17878f, 3720,842f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,5623f, 20,97986f, 3882,657f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,932f, 85,11941f, 2119,438f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_27(var uParam0, int iParam1) //Position: 0x26BB / 9915
{
	return (uParam0 && iParam1) == 0;
}

void Function_28(char* cParam0) //Position: 0x26C8 / 9928
{
	if (!Function_71(128))
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

void Function_29(int iParam0, bool bParam1) //Position: 0x2708 / 9992
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
		Function_30(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x27F8 / 10232
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_31(int iParam0) //Position: 0x2805 / 10245
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_33(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_32(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_32(var uParam0) //Position: 0x2901 / 10497
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_33() //Position: 0x291E / 10526
{
	int iVar0;
	
	return &iVar0;
}

void Function_34(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x2927 / 10535
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
		Function_35();
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

void Function_35() //Position: 0x2A15 / 10773
{
	int iVar0;
	
	Global_41176 = Function_36(StackVal);
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

int Function_36(int iParam0) //Position: 0x2A63 / 10851
{
	if (!Function_37(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_37(int iParam0) //Position: 0x2A7B / 10875
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_38(bool bParam0) //Position: 0x2A90 / 10896
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_39(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x2AA3 / 10915
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
		Function_42();
	}
	if (&bParam5)
	{
		Function_40(1048576);
	}
}

void Function_40(int iParam0) //Position: 0x2BB1 / 11185
{
	Function_41(&Global_43580, iParam0);
	return;
}

void Function_41(var uParam0, var uParam1) //Position: 0x2BBF / 11199
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_42() //Position: 0x2BDE / 11230
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_40(16384);
	}
	return;
}

void Function_43(float fParam0) //Position: 0x2BFA / 11258
{
	Function_44(6, 1, 0, 10, 25, 2, 0, 0, 4, fParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_44(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2C43 / 11331
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_45(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_45(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x2C8A / 11402
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
	if (!Function_18())
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
					bVar2 = Function_47(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_46(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_47(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_46(int iParam0, int iParam1) //Position: 0x3048 / 12360
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_47(int iParam0) //Position: 0x306B / 12395
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_48(int iParam0) //Position: 0x3082 / 12418
{
	if (!Function_51())
	{
		Function_44(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_50(&Global_27462[3952] + 188, 1, 4,5f, 64, 4294967295);
		Function_49(&Global_27462[3952] + 188, -4,5f, 2);
	}
	return;
}

void Function_49(int iParam0, float fParam1, int iParam2) //Position: 0x3103 / 12547
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_50(struct<85> Param0) //Position: 0x311B / 12571
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

bool Function_51() //Position: 0x3145 / 12613
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		bVar0 = GET_ACTOR_ENUM(&Global_54076);
		if (bVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_52(int iParam0) //Position: 0x316C / 12652
{
	Function_44(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_50(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_49(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_53(struct<28>[] Param0, int iParam1) //Position: 0x31E7 / 12775
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_54(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x3204 / 12804
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_55(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x322B / 12843
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
	Param0[iParam128].f_4 = Function_64(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_63(iParam1))
	{
		Function_56(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_56(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x3394 / 13204
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_62(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_61(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_60(StackVal, Param2);
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
		Function_59(uVar3);
		Var6 = Function_59(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_59(StackVal);
				Var4 = Function_59(StackVal);
				if (Function_58(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_57(iParam1), 0.0f, 2, iVar2);
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
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_57(int iParam0) //Position: 0x357D / 13693
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

bool Function_58(struct<2> Param0, struct<2> Param2) //Position: 0x36B4 / 14004
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_59(int iParam0) //Position: 0x36E0 / 14048
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
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

var Function_60(vector3 vParam0) //Position: 0x3737 / 14135
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_61(int iParam0) //Position: 0x3785 / 14213
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

bool Function_62(vector3 vParam0) //Position: 0x383D / 14397
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_63(int iParam0) //Position: 0x3855 / 14421
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_64(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3878 / 14456
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_68(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_65(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_65(bParam0, bParam1, bParam2, 4294967295);
}

int Function_65(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x38D6 / 14550
{
	var uVar0;
	
	if (!Function_67(bParam2))
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
	uVar0 = Function_68(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_66(uVar0);
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

var Function_66(int iParam0) //Position: 0x3A3A / 14906
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

bool Function_67(int iParam0) //Position: 0x3A78 / 14968
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_68(int iParam0, int iParam1, int iParam2) //Position: 0x3A8D / 14989
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_69(var uParam0, int iParam1) //Position: 0x3AAD / 15021
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x3AC7 / 15047
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)), &iParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_71(int iParam0) //Position: 0x3B14 / 15124
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_72(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3B30 / 15152
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_71(2))
	{
		return;
	}
	if (Function_84(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_73(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_69(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_88(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_73(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x3BE8 / 15336
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_84(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
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
		(&iParam1 + 16) = Function_75(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_62(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_74(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_74(int iParam0, struct<2> Param1) //Position: 0x3D69 / 15721
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

var Function_75(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x3EAF / 16047
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_33(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_76(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x3FD6 / 16342
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

void Function_77(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x404C / 16460
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_58(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_78(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x40B3 / 16563
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_58(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_79(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x411C / 16668
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_58(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_80(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4187 / 16775
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_58(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_81(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x41ED / 16877
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_58(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_82(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4256 / 16982
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_58(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_83(int iParam0) //Position: 0x42BA / 17082
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_84(&(Global_43791[iParam0]), 4);
}

bool Function_84(var uParam0, int iParam1) //Position: 0x42D6 / 17110
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_85(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x42F3 / 17139
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_84(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_17(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_17(&(Param0[iVar02]), 8))
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

void Function_86(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x43DC / 17372
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_84(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_88(&(Global_43791[bParam2]), 0x40000000);
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

vector3 Function_87(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x44CC / 17612
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_23(&vVar0 + 16, 1);
	}
	else
	{
		Function_21(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_23(&vVar0 + 16, 2);
	}
	else
	{
		Function_21(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_23(&vVar0 + 16, 4);
	}
	else
	{
		Function_21(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_23(&vVar0 + 16, 8);
	}
	else
	{
		Function_21(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_23(&vVar0 + 16, 16);
	}
	else
	{
		Function_21(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_23(&vVar0 + 16, 32);
	}
	else
	{
		Function_21(&vVar0 + 16, 32);
	}
	Function_21(&vVar0 + 16, 64);
	Function_21(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_88(var uParam0, int iParam1) //Position: 0x4599 / 17817
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_89() //Position: 0x45AA / 17834
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
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/indian_sit_ground_smoke", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/multistage_lumber", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/arm_wrestling_spectate", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping_nosun_norain", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/dog_sitting_nosun_norain", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/dog_peeing", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/dog_begging_nosun_norain", 1, 0);
	Function_95(&iLocal_8 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	if (!Function_90(&iLocal_8 + 8))
	{
		return 0;
	}
	iLocal_8 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_8))
	{
		iLocal_8 = CREATE_LAYOUT("PacificUnionRailroadCamp_layout");
	}
	*(&iLocal_8 + 704) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_8, 8, 0);
	*(&iLocal_8 + 712[03]) = Vector(-260,599f, 84,585f, 2093,939f);
	*(&iLocal_8 + 712[03] + 12) = Vector(0.0f, 200,9157f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag15", Vector(-260,599f, 84,585f, 2093,939f), Vector(0.0f, 200,9157f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_8 + 704);
	*(&iLocal_8 + 712[13]) = Vector(-263,486f, 84,585f, 2094,351f);
	*(&iLocal_8 + 712[13] + 12) = Vector(0.0f, 255,9593f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag5", Vector(-263,486f, 84,585f, 2094,351f), Vector(0.0f, 255,9593f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_8 + 704);
	*(&iLocal_8 + 712[23]) = Vector(-262,4489f, 84,585f, 2096,556f);
	*(&iLocal_8 + 712[23] + 12) = Vector(0.0f, 157,989f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag6", Vector(-262,4489f, 84,585f, 2096,556f), Vector(0.0f, 157,989f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_8 + 704);
	*(&iLocal_8 + 712[33]) = Vector(-265,679f, 84,585f, 2096,008f);
	*(&iLocal_8 + 712[33] + 12) = Vector(0.0f, 276,9504f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag7", Vector(-265,679f, 84,585f, 2096,008f), Vector(0.0f, 276,9504f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_8 + 704);
	*(&iLocal_8 + 712[43]) = Vector(-265,679f, 84,585f, 2098,405f);
	*(&iLocal_8 + 712[43] + 12) = Vector(0.0f, -94,97839f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag8", Vector(-265,679f, 84,585f, 2098,405f), Vector(0.0f, -94,97839f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_8 + 704);
	*(&iLocal_8 + 712[53]) = Vector(-267,969f, 84,585f, 2095,891f);
	*(&iLocal_8 + 712[53] + 12) = Vector(0.0f, 186,6167f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag9", Vector(-267,969f, 84,585f, 2095,891f), Vector(0.0f, 186,6167f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_8 + 704);
	*(&iLocal_8 + 712[63]) = Vector(-272,0507f, 84,585f, 2095,941f);
	*(&iLocal_8 + 712[63] + 12) = Vector(0.0f, 171,2732f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag10", Vector(-272,0507f, 84,585f, 2095,941f), Vector(0.0f, 171,2732f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_8 + 704);
	*(&iLocal_8 + 712[73]) = Vector(-274,496f, 84,585f, 2095,508f);
	*(&iLocal_8 + 712[73] + 12) = Vector(0.0f, 190,6452f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag11", Vector(-274,496f, 84,585f, 2095,508f), Vector(0.0f, 190,6452f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_8 + 704);
	*(&iLocal_8 + 712[83]) = Vector(-276,1889f, 84,585f, 2095,955f);
	*(&iLocal_8 + 712[83] + 12) = Vector(0.0f, 192,7698f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag12", Vector(-276,1889f, 84,585f, 2095,955f), Vector(0.0f, 192,7698f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_8 + 704);
	*(&iLocal_8 + 712[93]) = Vector(-277,6696f, 84,585f, 2096,537f);
	*(&iLocal_8 + 712[93] + 12) = Vector(0.0f, 183,7367f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag13", Vector(-277,6696f, 84,585f, 2096,537f), Vector(0.0f, 183,7367f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_8 + 704);
	*(&iLocal_8 + 712[103]) = Vector(-277,4861f, 84,584f, 2095,357f);
	*(&iLocal_8 + 712[103] + 12) = Vector(0.0f, 92,44174f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag14", Vector(-277,4861f, 84,584f, 2095,357f), Vector(0.0f, 92,44174f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_8 + 704);
	*(&iLocal_8 + 984) = CREATE_OBJECTSET_IN_LAYOUT("lumbergrpSet", &iLocal_8, 8, 0);
	*(&iLocal_8 + 992[03]) = Vector(-250,0973f, 84,40311f, 2102,097f);
	*(&iLocal_8 + 992[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag200", Vector(-250,0973f, 84,40311f, 2102,097f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_8 + 984);
	*(&iLocal_8 + 1024) = CREATE_OBJECTSET_IN_LAYOUT("lumbergrp1Set", &iLocal_8, 8, 0);
	*(&iLocal_8 + 1032[03]) = Vector(-274,851f, 84,329f, 2129,713f);
	*(&iLocal_8 + 1032[03] + 12) = Vector(0.0f, 59,653f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag201", Vector(-274,851f, 84,329f, 2129,713f), Vector(0.0f, 59,653f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_8 + 1024);
	*(&iLocal_8 + 1064) = CREATE_OBJECTSET_IN_LAYOUT("barrelgrpSet", &iLocal_8, 8, 0);
	*(&iLocal_8 + 1072[03]) = Vector(-299,304f, 84,55f, 2096,983f);
	*(&iLocal_8 + 1072[03] + 12) = Vector(0.0f, 4,23f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag300", Vector(-299,304f, 84,55f, 2096,983f), Vector(0.0f, 4,23f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_8 + 1064);
	*(&iLocal_8 + 1104) = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", &iLocal_8, 8, 0);
	*(&iLocal_8 + 1112[03]) = Vector(-268,9317f, 84,10014f, 2104,45f);
	*(&iLocal_8 + 1112[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag400", Vector(-268,9317f, 84,10014f, 2104,45f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_8 + 1104);
	*(&iLocal_8 + 1144) = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", &iLocal_8, 8, 0);
	*(&iLocal_8 + 1152[03]) = Vector(-269,9227f, 84,44086f, 2101,923f);
	*(&iLocal_8 + 1152[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag405", Vector(-269,9227f, 84,44086f, 2101,923f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "putdown");
	DECOR_SET_STRING(&uVar16, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_8 + 1144);
	*(&iLocal_8 + 1184) = CREATE_OBJECTSET_IN_LAYOUT("moveboxgrpSet", &iLocal_8, 8, 0);
	*(&iLocal_8 + 1192[03]) = Vector(-261,392f, 85,11736f, 2121,629f);
	*(&iLocal_8 + 1192[03] + 12) = Vector(0.0f, 174,2225f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Flag500", Vector(-261,392f, 85,11736f, 2121,629f), Vector(0.0f, 174,2225f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_8 + 1184);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand", "smoking_stand", Vector(-279,2508f, 84,3294f, 2103,251f), Vector(0.0f, 149,4077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-292,5457f, 84,329f, 2097,253f), Vector(0.0f, -91,61221f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand", "rand_idle_stand", Vector(-251,0246f, 84,39375f, 2107,018f), Vector(0.0f, -317,5461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand2", "rand_idle_stand", Vector(-251,6714f, 84,32935f, 2123,671f), Vector(0.0f, 31,9494f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-272,406f, 84,3294f, 2091,296f), Vector(0.0f, -35,31573f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-240f, 84,21885f, 2112,08f), Vector(0.0f, -102,2088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-295,3271f, 84,32937f, 2126,216f), Vector(0.0f, 99,18674f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-298,6332f, 84,32938f, 2132.0f), Vector(0.0f, 105,9742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-323,9622f, 83,33489f, 2123,962f), Vector(0.0f, -278,6589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "nsit_docks", "nsit_docks", Vector(-280,2972f, 87,60738f, 2121,221f), Vector(0.0f, -35,59731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand3", "rand_idle_stand", Vector(-299,3329f, 84,32941f, 2124f), Vector(0.0f, 147,0954f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-268,1919f, 85,11826f, 2122,03f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-304,1736f, 84,55002f, 2089,449f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lean_rail2", "nlean_rail", Vector(-299,7092f, 84,34756f, 2082,547f), Vector(0.0f, -15,08531f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Pee", "Pee", Vector(-309,1762f, 84,56106f, 2109,906f), Vector(0.0f, -179,3774f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-290,7443f, 83,64059f, 2146,744f), Vector(0.0f, -105,7152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground6", "Rand_Idle_Sit_Ground", Vector(-263,5143f, 84,61034f, 2100,51f), Vector(0.0f, -177,1633f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_ground_smoke1", "Rand_Idle_Sit_Ground", Vector(-279,4286f, 87,54841f, 2125,676f), Vector(0.0f, -147,0578f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-299,9999f, 84,32935f, 2116,259f), Vector(0.0f, -7,427659f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-269,74f, 84,329f, 2091,258f), Vector(0.0f, -1,515742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_table3", "stand_hammer_table", Vector(-296,4352f, 84,6422f, 2096,126f), Vector(0.0f, 0,1719398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", Vector(-290,7271f, 87,59922f, 2104,286f), Vector(0.0f, 91,17555f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand9", "rand_idle_stand", Vector(-305,8645f, 84,53843f, 2110,722f), Vector(0.0f, -94,3748f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-289,3457f, 84,59759f, 2104,32f), Vector(0.0f, 91,86176f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-301,2272f, 84,57059f, 2090,951f), Vector(0.0f, 181,792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", Vector(-300,4062f, 84,70014f, 2092,159f), Vector(0.0f, 90,00731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand11", "rand_idle_stand", Vector(-292,1161f, 84,32939f, 2112,509f), Vector(0.0f, 259,9453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand12", "rand_idle_stand", Vector(-253,0621f, 84,32941f, 2092.0f), Vector(0.0f, -43,95385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_table4", "stand_hammer_table", Vector(-269,616f, 84,58009f, 2094,75f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammerground_w_any1", "stand_hammerground_w_any", Vector(-284,2853f, 84,32941f, 2116,617f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammerground_w_any2", "stand_hammerground_w_any", Vector(-258,9957f, 84,37399f, 2113,335f), Vector(0.0f, -179,3102f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammerground_w_any3", "stand_hammerground_w_any", Vector(-242,8076f, 84,32941f, 2113,392f), Vector(0.0f, 179,375f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_ground_smoke3", "Rand_Idle_Sit_Ground", Vector(-243,141f, 84,31201f, 2109,459f), Vector(0.0f, 41,52988f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_8 + 1224) = CREATE_OBJECTSET_IN_LAYOUT(Function_33(), &iLocal_8, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_check_clipboard", "stand_check_clipboard", Vector(-298,6489f, 84,32935f, 2116.0f), Vector(0.0f, -200,7457f, 0.0f)), &iLocal_8 + 1224);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_8 + 1224)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_yelling_up", "stand_yelling_up", Vector(-297,875f, 84,39378f, 2103,792f), Vector(0.0f, -92,67122f, 0.0f)), &iLocal_8 + 1224);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_8 + 1224)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_check_clipboard1", "stand_check_clipboard", Vector(-275,6945f, 84,584f, 2095,066f), Vector(0.0f, -83,81947f, 0.0f)), &iLocal_8 + 1224);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_8 + 1224)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_check_clipboard2", "stand_check_clipboard", Vector(-303,2441f, 84,35153f, 2108.0f), Vector(0.0f, 260,6552f, 0.0f)), &iLocal_8 + 1224);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_8 + 1224)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_docks5", "nsit_docks", Vector(-293,1272f, 87,59378f, 2104,719f), Vector(0.0f, 89,82571f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "repair_kneel3", "repair_kneel", Vector(-289,7151f, 84,38799f, 2117,304f), Vector(0.0f, -177,0475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand5", "smoking_stand", Vector(-305,2578f, 84,32941f, 2128,851f), Vector(0.0f, -181,4886f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-306,3789f, 84,32941f, 2131,512f), Vector(0.0f, -96,38894f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Multistage_sweeping", "Multistage_sweeping", Vector(-277,4029f, 84,58439f, 2095,399f), Vector(0.0f, -91,5164f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-309,5937f, 84,32941f, 2133,33f), Vector(0.0f, -68,27385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-307,9366f, 84,32941f, 2132.0f), Vector(0.0f, -83,29604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-308,8994f, 84,32941f, 2125,085f), Vector(0.0f, -144,5907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-307,6673f, 84,32941f, 2127,325f), Vector(0.0f, 24,07184f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand6", "smoking_stand", Vector(-302,9257f, 84,32941f, 2131,319f), Vector(0.0f, 94,46873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_8 + 1232) = CREATE_OBJECTSET_IN_LAYOUT(Function_33(), &iLocal_8, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Indian_Sit_Ground_Smoke", "Indian_Sit_Ground_Smoke", Vector(-303,4368f, 84,33514f, 2130,466f), Vector(0.0f, 122,2069f, 0.0f)), &iLocal_8 + 1232);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_8 + 1232)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_yelling_down", "stand_yelling_down", Vector(-277,7226f, 87,57478f, 2123,033f), Vector(0.0f, -33,84819f, 0.0f)), &iLocal_8 + 1232);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_8 + 1232)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "campfire_talk", "campfire_talk", Vector(-298,8902f, 84,34298f, 2134,881f), Vector(0.0f, -112,5517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Multistage_lumber", "Multistage_lumber", Vector(-294,3057f, 84,40279f, 2088.0f), Vector(0.0f, -209,1495f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Multistage_lumber1", "Multistage_lumber", Vector(-246,89f, 84,329f, 2101,398f), Vector(0.0f, -179,5614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	DECOR_SET_INT(&uVar0, "FlagSetNum", true);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_stirringpot_w_any", "stand_stirringpot_w_any", Vector(-307,6528f, 84,329f, 2120,486f), Vector(0.0f, 92,77699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", Vector(-314,006f, 84,329f, 2126,552f), Vector(0.0f, 90,56123f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-315,62f, 84,36777f, 2123,791f), Vector(0.0f, 12,75637f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_sleepBed_l", "mex_sleepBed_l", Vector(-315,999f, 84,27454f, 2126,504f), Vector(0.0f, 69,89555f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lean_fence_L", "lean_fence_L", Vector(-244,6597f, 84,32939f, 2103,381f), Vector(0.0f, -74,17025f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_sleepBed_r1", "mex_sleepBed_r", Vector(-314,059f, 84,328f, 2134,831f), Vector(0.0f, 109,0961f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_sleepBed_l1", "mex_sleepBed_l", Vector(-315,3019f, 84,40627f, 2132,153f), Vector(0.0f, 110,6767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", Vector(-314,328f, 84,329f, 2131,738f), Vector(0.0f, -63,96337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", Vector(-294,8471f, 84,329f, 2134,998f), Vector(0.0f, -130,6978f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_r2", "lie_sleep_on_bed_r", Vector(-297,063f, 84,26437f, 2137,154f), Vector(0.0f, 56,67732f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_sleepBed_r2", "mex_sleepBed_r", Vector(-296,439f, 84,264f, 2137,403f), Vector(0.0f, -104,0547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_l3", "lie_sleep_on_bed_l", Vector(-292,85f, 84,38101f, 2124,313f), Vector(0.0f, -49,53769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lie_sleep_on_bed_r3", "lie_sleep_on_bed_r", Vector(-293,9245f, 84,329f, 2125,675f), Vector(0.0f, -40,75327f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "mex_sleepBed_r3", "mex_sleepBed_r", Vector(-294,2988f, 84,28979f, 2122,371f), Vector(0.0f, 44,08815f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-264,6607f, 84,32939f, 2090,172f), Vector(0.0f, 21,31175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand7", "smoking_stand", Vector(-256,6131f, 84,32935f, 2104,482f), Vector(0.0f, -229,0816f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_barrel1", "sit_barrel", Vector(-261,697f, 84,55f, 2100,643f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-311,1821f, 84,35149f, 2125,989f), Vector(0.0f, -63,93058f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-311,7607f, 84,32937f, 2118,451f), Vector(0.0f, -180,2778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-310,8121f, 84,32936f, 2128.0f), Vector(0.0f, -84,88094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-283,302f, 87,62878f, 2125,038f), Vector(0.0f, 101,259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", Vector(-299,075f, 84,32938f, 2090,748f), Vector(0.0f, -94,07694f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand8", "smoking_stand", Vector(-302,0144f, 84,55f, 2095,012f), Vector(0.0f, -133,5852f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand9", "smoking_stand", Vector(-257,0061f, 85,14437f, 2118,648f), Vector(0.0f, -35,2438f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_spit", "stand_spit", Vector(-265,38f, 85,11703f, 2117,823f), Vector(0.0f, -34,86943f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_8 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "arm_wrestling_spectate", "arm_wrestling_spectate", Vector(-264,6337f, 85,11941f, 2120,304f), Vector(0.0f, -63,10342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1240), 1);
	*(&iLocal_8 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall", "stand_hammer_wall", Vector(-282,5831f, 84,32134f, 2111,573f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1248), 1);
	*(&iLocal_8 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall1", "stand_hammer_wall", Vector(-268,712f, 84,3324f, 2111,22f), Vector(0.0f, 3,98375f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1256), 1);
	*(&iLocal_8 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall2", "stand_hammer_wall", Vector(-268,2935f, 84,35104f, 2107,836f), Vector(0.0f, 179,7535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1264), 1);
	*(&iLocal_8 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall3", "stand_hammer_wall", Vector(-259,103f, 84,35152f, 2108,147f), Vector(0.0f, 267,2986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1272), 1);
	*(&iLocal_8 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall4", "stand_hammer_wall", Vector(-261,4122f, 84,32699f, 2112,751f), Vector(0.0f, 351,9256f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1280), 1);
	*(&iLocal_8 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall5", "stand_hammer_wall", Vector(-249,4963f, 84,31268f, 2113,484f), Vector(0.0f, 357,4075f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1288), 1);
	*(&iLocal_8 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "repair_kneel", "repair_kneel", Vector(-264,5295f, 84,33018f, 2112,102f), Vector(0.0f, -90,41484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1296), 1);
	*(&iLocal_8 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_table", "stand_hammer_table", Vector(-268,2491f, 84,32483f, 2113,17f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1304), 1);
	*(&iLocal_8 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_hammer_wall6", "stand_hammer_wall", Vector(-275,2304f, 84,35149f, 2120,582f), Vector(0.0f, 140,1084f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1312), 1);
	*(&iLocal_8 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand10", "smoking_stand", Vector(-272,3959f, 84,32217f, 2117,972f), Vector(0.0f, 133,512f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1320), 1);
	*(&iLocal_8 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand11", "smoking_stand", Vector(-272,7484f, 84,34642f, 2119,651f), Vector(0.0f, 132,159f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1328), 1);
	*(&iLocal_8 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand13", "rand_idle_stand", Vector(-273,5462f, 84,31622f, 2117,644f), Vector(0.0f, 135,1958f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1336), 1);
	*(&iLocal_8 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand14", "rand_idle_stand", Vector(-274,9241f, 84,32912f, 2118,563f), Vector(0.0f, 160,5407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1344), 1);
	*(&iLocal_8 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "rand_idle_stand15", "rand_idle_stand", Vector(-273,7637f, 84,34153f, 2119,312f), Vector(0.0f, 140,0703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1352), 1);
	*(&iLocal_8 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-167,204f, 84,19398f, 2062,033f), Vector(0.0f, -39,45452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1360), 1);
	*(&iLocal_8 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-167,204f, 84,19398f, 2068,109f), Vector(0.0f, -53,33166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1368), 1);
	*(&iLocal_8 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-167,2195f, 84,19398f, 2075,252f), Vector(0.0f, -135,3244f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1376), 1);
	*(&iLocal_8 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-170,0493f, 84,19398f, 2075,963f), Vector(0.0f, 180,2888f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1384), 1);
	*(&iLocal_8 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_smokelean_e_any", "leaning_stand", Vector(-167,1948f, 84,19398f, 2060,505f), Vector(0.0f, -359,7245f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1392), 1);
	*(&iLocal_8 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "sit_barrel", "sit_barrel", Vector(-166,7309f, 84,19398f, 2066,87f), Vector(0.0f, -257,7771f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_8 + 1400), 1);
	*(&iLocal_8 + 1408) = CREATE_OBJECTSET_IN_LAYOUT(Function_33(), &iLocal_8, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "nuse_shelf", "nuse_shelf", Vector(-172,519f, 84,19398f, 2072,331f), Vector(0.0f, 182,2958f, 0.0f)), &iLocal_8 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_8 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_check_clipboard_20", "stand_check_clipboard", Vector(-175,1733f, 84,19398f, 2066,873f), Vector(0.0f, 50,20064f, 0.0f)), &iLocal_8 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_8 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "smoking_stand12", "smoking_stand", Vector(-168,2906f, 84,19398f, 2069,358f), Vector(0.0f, -105,4168f, 0.0f)), &iLocal_8 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_8 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "stand_check_clipboard3", "stand_check_clipboard", Vector(-170,6364f, 84,19398f, 2066,194f), Vector(0.0f, -86,80048f, 0.0f)), &iLocal_8 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_8 + 1408)), 0);
	*(&iLocal_8 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain", "dog_sleeping_nosun_norain", Vector(-178,7847f, 83,33339f, 2066,13f), Vector(0.0f, -65,99649f, 0.0f));
	*(&iLocal_8 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sitting_nosun_norain", "dog_sitting_nosun_norain", Vector(-177,1155f, 83,32635f, 2063,515f), Vector(0.0f, -114,5605f, 0.0f));
	*(&iLocal_8 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_peeing", "dog_peeing", Vector(-176,123f, 83,3897f, 2062,861f), Vector(0.0f, -228,2262f, 0.0f));
	*(&iLocal_8 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_begging_nosun_norain", "dog_begging_nosun_norain", Vector(-173,3505f, 83,31264f, 2060,348f), Vector(0.0f, -97,33698f, 0.0f));
	*(&iLocal_8 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain1", "dog_sleeping_nosun_norain", Vector(-179,0085f, 83,33339f, 2077,913f), Vector(0.0f, -150,7849f, 0.0f));
	*(&iLocal_8 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sitting_nosun_norain1", "dog_sitting_nosun_norain", Vector(-178,8697f, 83,32635f, 2073,833f), Vector(0.0f, -312,5417f, 0.0f));
	*(&iLocal_8 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain2", "dog_sleeping_nosun_norain", Vector(-188,7539f, 83,44596f, 2065,748f), Vector(0.0f, -193,9863f, 0.0f));
	*(&iLocal_8 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sitting_nosun_norain2", "dog_sitting_nosun_norain", Vector(-184,146f, 83,32635f, 2066,758f), Vector(0.0f, -114,5605f, 0.0f));
	*(&iLocal_8 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain3", "dog_sleeping_nosun_norain", Vector(-170,512f, 83,23319f, 2077,15f), Vector(0.0f, -244,2281f, 0.0f));
	*(&iLocal_8 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain4", "dog_sleeping_nosun_norain", Vector(-169,2699f, 84,18502f, 2073,027f), Vector(0.0f, -244,2281f, 0.0f));
	*(&iLocal_8 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain5", "dog_sleeping_nosun_norain", Vector(-254,8585f, 84,36404f, 2090,05f), Vector(0.0f, -182,832f, 0.0f));
	*(&iLocal_8 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sitting_nosun_norain3", "dog_sitting_nosun_norain", Vector(-249,8224f, 84,3472f, 2104,698f), Vector(0.0f, -204,443f, 0.0f));
	*(&iLocal_8 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain6", "dog_sleeping_nosun_norain", Vector(-246,2181f, 84,36404f, 2109,342f), Vector(0.0f, -94,44453f, 0.0f));
	*(&iLocal_8 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain7", "dog_sleeping_nosun_norain", Vector(-266,3858f, 84,36404f, 2108,847f), Vector(0.0f, -84,90373f, 0.0f));
	*(&iLocal_8 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain8", "dog_sleeping_nosun_norain", Vector(-287,7652f, 84,60418f, 2099,381f), Vector(0.0f, -164,9557f, 0.0f));
	*(&iLocal_8 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain9", "dog_sleeping_nosun_norain", Vector(-275,388f, 84,3576f, 2122,993f), Vector(0.0f, -164,9557f, 0.0f));
	*(&iLocal_8 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain10", "dog_sleeping_nosun_norain", Vector(-263,2999f, 84,3576f, 2133,662f), Vector(0.0f, -316,3659f, 0.0f));
	*(&iLocal_8 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sitting_nosun_norain4", "dog_sitting_nosun_norain", Vector(-306,7691f, 84,3472f, 2130,097f), Vector(0.0f, -123,6964f, 0.0f));
	*(&iLocal_8 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sitting_nosun_norain5", "dog_sitting_nosun_norain", Vector(-307,647f, 84,3472f, 2123,479f), Vector(0.0f, -14,89172f, 0.0f));
	*(&iLocal_8 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain11", "dog_sleeping_nosun_norain", Vector(-295,8063f, 84,35688f, 2124,774f), Vector(0.0f, -380,823f, 0.0f));
	*(&iLocal_8 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain12", "dog_sleeping_nosun_norain", Vector(-312,5109f, 84,35688f, 2106,095f), Vector(0.0f, -380,823f, 0.0f));
	*(&iLocal_8 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_sleeping_nosun_norain13", "dog_sleeping_nosun_norain", Vector(-308,6532f, 84,35688f, 2082,776f), Vector(0.0f, -380,823f, 0.0f));
	*(&iLocal_8 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_peeing1", "dog_peeing", Vector(-294,009f, 84,37412f, 2081,684f), Vector(0.0f, -295,8659f, 0.0f));
	*(&iLocal_8 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_peeing2", "dog_peeing", Vector(-286,0151f, 84,41178f, 2085,514f), Vector(0.0f, -341,7906f, 0.0f));
	*(&iLocal_8 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_peeing3", "dog_peeing", Vector(-242,0354f, 84,33924f, 2085,034f), Vector(0.0f, -303,8413f, 0.0f));
	*(&iLocal_8 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_peeing4", "dog_peeing", Vector(-242,1467f, 84,36317f, 2096,047f), Vector(0.0f, -268,1775f, 0.0f));
	*(&iLocal_8 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "dog_peeing5", "dog_peeing", Vector(-273,3949f, 84,40952f, 2107,906f), Vector(0.0f, -298,6665f, 0.0f));
	*(&iLocal_8 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-312,8287f, 84,32936f, 2124,613f), Vector(0.0f, -118,9718f, 0.0f));
	*(&iLocal_8 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_8, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(-264,6337f, 85,11941f, 2118,317f), Vector(0.0f, -120,6365f, 0.0f));
	return 1;
}

bool Function_90(struct<2>[] Param0) //Position: 0x8853 / 34899
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_94();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_93(&(Param0[iVar02]), 8);
		}
		else if (Function_92())
		{
			iVar1 = 1;
			Function_93(&(Param0[iVar02]), 8);
		}
		Function_93(&(Param0[iVar02]), 16);
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
				Function_93(&(Param0[iVar02]), 1);
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
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
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
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
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
	Function_91();
	return 1;
}

void Function_91() //Position: 0x8C15 / 35861
{
	if (!Function_71(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_92() //Position: 0x8C55 / 35925
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

void Function_93(struct<13> Param0) //Position: 0x8C83 / 35971
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_94() //Position: 0x8C96 / 35990
{
	if (!Function_71(128))
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

var Function_95(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x8CD8 / 36056
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_96(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_93(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_96(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x8D16 / 36118
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_93(&(Param0[iVar02]), 4);
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

void Function_97(int iParam0, int iParam1) //Position: 0x8DE5 / 36325
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

bool Function_98() //Position: 0x8E2F / 36399
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("PacificUnionRailroadCamp_layout");
	}
	PushArrayP();
	*(&iLocal_4 + 8) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "uprp_patrolpath");
	return 1;
}

void Function_99(char* cParam0) //Position: 0x8F7E / 36734
{
	if (!Function_71(128))
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

