//Decompiled with MagicRDR v1.0
//Function Count : 146
//Statics Count : 1119
//Natives Count : 166
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
	var uLocal_24 = 62;
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
	int iLocal_538 = 0;
	bool bLocal_539 = false;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 25;
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
	int iLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	vector3 vLocal_1097[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_538 = 0;
	SET_DUST_LEVEL(2);
	Function_145("Initializing Hennigan's Ranch", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_539 = 1000;
		switch (iLocal_538)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_538 = 1;
				}
				bLocal_539 = false;
				break;
			
			case 0x00000001:
				if (Function_144())
				{
					Global_98961 = 0;
					if (Function_141(22, 0))
					{
						Function_140(&(Global_11544[212]), 2);
					}
					else
					{
						Function_139(&(Global_11544[212]), 2);
					}
					iLocal_538 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
				}
				bLocal_539 = false;
				break;
			
			case 0x00000002:
				if (Function_130())
				{
					Function_129(&(Global_43791[iScriptParam_0]), 32);
					Function_128(FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_drunkdancing_e_any2"), 1, 0, 0, 0, 0, 1);
					vLocal_1097[03] = { StackVal, StackVal, Function_128(FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_drunkdancing_e_any2"), 1, 0, 0, 0, 0, 1) };
					Function_128(FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_drunkdancing_e_any1"), 1, 0, 0, 0, 0, 1);
					vLocal_1097[13] = { StackVal, StackVal, Function_128(FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_drunkdancing_e_any1"), 1, 0, 0, 0, 0, 1) };
					Function_128(FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_drunkdancing_e_any"), 1, 0, 0, 0, 0, 1);
					vLocal_1097[23] = { StackVal, StackVal, Function_128(FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(&iLocal_22, "stand_drunkdancing_e_any"), 1, 0, 0, 0, 0, 1) };
					iLocal_538 = 3;
					if (Function_141(22, 0))
					{
					}
				}
				bLocal_539 = false;
				break;
			
			case 0x00000003:
				uLocal_540 = LAUNCH_NEW_SCRIPT_WITH_ARGS("HennigansRanchVol", &iScriptParam_0, 2, 0);
				Function_127(&Global_11544, &Global_13580, iScriptParam_0);
				iLocal_538 = 5;
				bLocal_539 = false;
				break;
			
			case 0x00000005:
				if (Function_126(&Global_11544, &Global_13580, iScriptParam_0))
				{
					iLocal_538 = 4;
					bLocal_539 = false;
				}
				else
				{
					bLocal_539 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_125(&(Global_43791[iScriptParam_0]), 16) && Function_124(Global_44085[iScriptParam_09]))
				{
					iLocal_538 = 6;
				}
				bLocal_539 = false;
				break;
			
			case 0x00000006:
				Function_123(StackVal, 0, &uLocal_542, Vector(-839,9963f, 90,36563f, 2461,841f));
				Function_122(0, &uLocal_542, &iLocal_22 + 1448);
				Function_121(StackVal, 0, &uLocal_542, Vector(-900,2579f, 91,41033f, 2401,673f));
				Function_120(StackVal, 0, &uLocal_542, Vector(-839,9963f, 90,36563f, 2461,841f));
				Function_119(0, &uLocal_542, &iLocal_22 + 1192);
				Function_118(0, &uLocal_542, &iLocal_22 + 1192);
				Function_117(0, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 1, &uLocal_542, Vector(-843,738f, 90,353f, 2438,04f));
				Function_116(StackVal, 1, &uLocal_542, Vector(-843,738f, 90,353f, 2438,04f));
				Function_121(StackVal, 1, &uLocal_542, Vector(-843,738f, 90,353f, 2438,04f));
				Function_120(StackVal, 1, &uLocal_542, Vector(-843,738f, 90,353f, 2438,04f));
				Function_119(1, &uLocal_542, &iLocal_22 + 1200);
				Function_115(StackVal, 1, &uLocal_542, Vector(-814,983f, 92,855f, 2387,132f));
				Function_117(1, &uLocal_542, &iLocal_22);
				Function_114(2, &uLocal_542, &iLocal_22 + 1536);
				Function_122(2, &uLocal_542, &iLocal_22 + 1536);
				Function_113(2, &uLocal_542, &iLocal_22 + 1536);
				Function_112(2, &uLocal_542, &iLocal_22 + 1536);
				Function_119(2, &uLocal_542, &iLocal_22 + 1536);
				Function_118(2, &uLocal_542, &iLocal_22 + 1144);
				Function_117(2, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 3, &uLocal_542, Vector(-839,111f, 92,35474f, 2355,903f));
				Function_116(StackVal, 3, &uLocal_542, Vector(-839,111f, 92,35474f, 2355,903f));
				Function_121(StackVal, 3, &uLocal_542, Vector(-839,111f, 92,35474f, 2355,903f));
				Function_120(StackVal, 3, &uLocal_542, Vector(-839,111f, 92,35474f, 2355,903f));
				Function_119(3, &uLocal_542, &iLocal_22 + 1336);
				Function_115(StackVal, 3, &uLocal_542, Vector(-821,334f, 92,847f, 2364,776f));
				Function_117(3, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 4, &uLocal_542, Vector(-905,282f, 91,35687f, 2376,046f));
				Function_116(StackVal, 4, &uLocal_542, Vector(-884,1996f, 91,35687f, 2340,532f));
				Function_121(StackVal, 4, &uLocal_542, Vector(-869,2902f, 91,35687f, 2391,068f));
				Function_120(StackVal, 4, &uLocal_542, Vector(-905,282f, 91,35687f, 2376,046f));
				Function_119(4, &uLocal_542, &iLocal_22 + 1224);
				Function_115(StackVal, 4, &uLocal_542, Vector(-814,202f, 92,847f, 2385,74f));
				Function_117(4, &uLocal_542, &iLocal_22);
				Function_114(5, &uLocal_542, &iLocal_22 + 1456);
				Function_122(5, &uLocal_542, &iLocal_22 + 1456);
				Function_113(5, &uLocal_542, &iLocal_22 + 1456);
				Function_112(5, &uLocal_542, &iLocal_22 + 1456);
				Function_119(5, &uLocal_542, &iLocal_22 + 1456);
				Function_115(StackVal, 5, &uLocal_542, Vector(-818,292f, 92,847f, 2365,753f));
				Function_117(5, &uLocal_542, &iLocal_22);
				Function_114(6, &uLocal_542, &iLocal_22 + 1232);
				Function_116(StackVal, 6, &uLocal_542, Vector(-881,5222f, 91,41033f, 2394,91f));
				Function_121(StackVal, 6, &uLocal_542, Vector(-881,5222f, 91,41033f, 2394,91f));
				Function_120(StackVal, 6, &uLocal_542, Vector(-881,5222f, 91,41033f, 2394,91f));
				Function_111(StackVal, 6, &uLocal_542, Vector(-828,658f, 92,442f, 2375,654f));
				Function_115(StackVal, 6, &uLocal_542, Vector(-815,556f, 92,847f, 2366,083f));
				Function_117(6, &uLocal_542, &iLocal_22);
				Function_114(7, &uLocal_542, &iLocal_22 + 1528);
				Function_122(7, &uLocal_542, &iLocal_22 + 1528);
				Function_113(7, &uLocal_542, &iLocal_22 + 1528);
				Function_112(7, &uLocal_542, &iLocal_22 + 1528);
				Function_119(7, &uLocal_542, &iLocal_22 + 1352);
				Function_115(StackVal, 7, &uLocal_542, Vector(-811,331f, 92,861f, 2382,26f));
				Function_117(7, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 8, &uLocal_542, Vector(-871,4838f, 90,3869f, 2459,469f));
				Function_116(StackVal, 8, &uLocal_542, Vector(-883,5331f, 90,35291f, 2454,028f));
				Function_121(StackVal, 8, &uLocal_542, Vector(-871,4838f, 90,3869f, 2459,469f));
				Function_120(StackVal, 8, &uLocal_542, Vector(-883,5331f, 90,35291f, 2454,028f));
				Function_111(StackVal, 8, &uLocal_542, Vector(-831,489f, 92,361f, 2371,837f));
				Function_115(StackVal, 8, &uLocal_542, Vector(-810,144f, 92,861f, 2381,214f));
				Function_117(8, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 10, &uLocal_542, Vector(-938,6854f, 90,37209f, 2473,552f));
				Function_116(StackVal, 10, &uLocal_542, Vector(-911,2079f, 90,36329f, 2442,858f));
				Function_121(StackVal, 10, &uLocal_542, Vector(-938,6854f, 90,37209f, 2473,552f));
				Function_120(StackVal, 10, &uLocal_542, Vector(-911,2079f, 90,36329f, 2442,858f));
				Function_119(10, &uLocal_542, &iLocal_22 + 1360);
				Function_118(10, &uLocal_542, &iLocal_22 + 1208);
				Function_117(10, &uLocal_542, &iLocal_22);
				Function_114(11, &uLocal_542, &iLocal_22 + 1544);
				Function_122(11, &uLocal_542, &iLocal_22 + 1544);
				Function_113(11, &uLocal_542, &iLocal_22 + 1544);
				Function_112(11, &uLocal_542, &iLocal_22 + 1544);
				Function_119(11, &uLocal_542, &iLocal_22 + 1320);
				Function_118(11, &uLocal_542, &iLocal_22 + 1376);
				Function_117(11, &uLocal_542, &iLocal_22);
				Function_114(12, &uLocal_542, &iLocal_22 + 1256);
				Function_116(StackVal, 12, &uLocal_542, Vector(-854,117f, 91,283f, 2384,327f));
				Function_121(StackVal, 12, &uLocal_542, Vector(-854,117f, 91,283f, 2384,327f));
				Function_120(StackVal, 12, &uLocal_542, Vector(-854,117f, 91,283f, 2384,327f));
				Function_119(12, &uLocal_542, &iLocal_22 + 1352);
				Function_118(12, &uLocal_542, &iLocal_22 + 1352);
				Function_117(12, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 13, &uLocal_542, Vector(-806,974f, 92,723f, 2372,991f));
				Function_116(StackVal, 13, &uLocal_542, Vector(-832,044f, 92,591f, 2399,294f));
				Function_121(StackVal, 13, &uLocal_542, Vector(-832,044f, 92,591f, 2399,294f));
				Function_120(StackVal, 13, &uLocal_542, Vector(-832,044f, 92,591f, 2399,294f));
				Function_111(StackVal, 13, &uLocal_542, Vector(-825,233f, 92,384f, 2370,986f));
				Function_115(StackVal, 13, &uLocal_542, Vector(-806,974f, 92,723f, 2372,991f));
				Function_117(13, &uLocal_542, &iLocal_22);
				Function_114(14, &uLocal_542, &iLocal_22 + 1640);
				Function_122(14, &uLocal_542, &iLocal_22 + 1640);
				Function_113(14, &uLocal_542, &iLocal_22 + 1640);
				Function_112(14, &uLocal_542, &iLocal_22 + 1640);
				Function_111(StackVal, 14, &uLocal_542, Vector(-833,786f, 92,361f, 2369,264f));
				Function_118(14, &uLocal_542, &iLocal_22 + 1392);
				Function_117(14, &uLocal_542, &iLocal_22);
				Function_114(15, &uLocal_542, &iLocal_22 + 1288);
				Function_116(StackVal, 15, &uLocal_542, Vector(-811,331f, 92,861f, 2382,26f));
				Function_121(StackVal, 15, &uLocal_542, Vector(-811,331f, 92,861f, 2382,26f));
				Function_120(StackVal, 15, &uLocal_542, Vector(-805,0695f, 92,5545f, 2373,686f));
				Function_119(15, &uLocal_542, &iLocal_22 + 1288);
				Function_118(15, &uLocal_542, &iLocal_22 + 1288);
				Function_117(15, &uLocal_542, &iLocal_22);
				Function_114(16, &uLocal_542, &iLocal_22 + 1248);
				Function_116(StackVal, 16, &uLocal_542, Vector(-818,292f, 92,847f, 2365,753f));
				Function_121(StackVal, 16, &uLocal_542, Vector(-818,292f, 92,847f, 2365,753f));
				Function_120(StackVal, 16, &uLocal_542, Vector(-807,178f, 92,5545f, 2373,686f));
				Function_119(16, &uLocal_542, &iLocal_22 + 1248);
				Function_118(16, &uLocal_542, &iLocal_22 + 1248);
				Function_117(16, &uLocal_542, &iLocal_22);
				Function_114(17, &uLocal_542, &iLocal_22 + 1496);
				Function_116(StackVal, 17, &uLocal_542, Vector(-821,334f, 92,847f, 2364,776f));
				Function_121(StackVal, 17, &uLocal_542, Vector(-821,334f, 92,847f, 2364,776f));
				Function_112(17, &uLocal_542, &iLocal_22 + 1240);
				Function_119(17, &uLocal_542, &iLocal_22 + 1496);
				Function_118(17, &uLocal_542, &iLocal_22 + 1496);
				Function_117(17, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 21, &uLocal_542, Vector(-823,562f, 93,809f, 2428,292f));
				Function_122(21, &uLocal_542, &iLocal_22 + 1632);
				Function_121(StackVal, 21, &uLocal_542, Vector(-823,562f, 93,809f, 2428,292f));
				Function_112(21, &uLocal_542, &iLocal_22 + 1632);
				Function_111(StackVal, 21, &uLocal_542, Vector(-823,562f, 93,809f, 2428,292f));
				Function_118(21, &uLocal_542, &iLocal_22 + 1488);
				Function_117(21, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 22, &uLocal_542, Vector(-826,8616f, 92,7626f, 2389,543f));
				Function_116(StackVal, 22, &uLocal_542, Vector(-826,8616f, 92,7626f, 2389,543f));
				Function_121(StackVal, 22, &uLocal_542, Vector(-826,8616f, 92,7626f, 2389,543f));
				Function_120(StackVal, 22, &uLocal_542, Vector(-826,8616f, 92,7626f, 2389,543f));
				Function_111(StackVal, 22, &uLocal_542, Vector(-826,8616f, 92,7626f, 2389,543f));
				Function_115(StackVal, 22, &uLocal_542, Vector(-826,8616f, 92,7626f, 2389,543f));
				Function_117(22, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 23, &uLocal_542, Vector(-809,7669f, 92,58f, 2377,339f));
				Function_116(StackVal, 23, &uLocal_542, Vector(-827,287f, 92,3608f, 2382,485f));
				Function_121(StackVal, 23, &uLocal_542, Vector(-830,1461f, 92,36078f, 2369,648f));
				Function_120(StackVal, 23, &uLocal_542, Vector(-830,1461f, 92,36078f, 2369,648f));
				Function_111(StackVal, 23, &uLocal_542, Vector(-830,542f, 92,366f, 2371,186f));
				Function_115(StackVal, 23, &uLocal_542, Vector(-830,542f, 92,366f, 2371,186f));
				Function_117(23, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 24, &uLocal_542, Vector(-826,4434f, 92,3608f, 2381,681f));
				Function_116(StackVal, 24, &uLocal_542, Vector(-815,8525f, 92,8752f, 2365,097f));
				Function_121(StackVal, 24, &uLocal_542, Vector(-826,4434f, 92,3608f, 2381,681f));
				Function_120(StackVal, 24, &uLocal_542, Vector(-826,4434f, 92,3608f, 2381,681f));
				Function_111(StackVal, 24, &uLocal_542, Vector(-828,824f, 92,364f, 2368,46f));
				Function_115(StackVal, 24, &uLocal_542, Vector(-828,824f, 92,364f, 2368,46f));
				Function_117(24, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 18, &uLocal_542, Vector(-952,802f, 90,553f, 2429,724f));
				Function_116(StackVal, 18, &uLocal_542, Vector(-952,802f, 90,553f, 2429,724f));
				Function_121(StackVal, 18, &uLocal_542, Vector(-952,802f, 90,553f, 2429,724f));
				Function_120(StackVal, 18, &uLocal_542, Vector(-952,802f, 90,553f, 2429,724f));
				Function_111(StackVal, 18, &uLocal_542, Vector(-952,802f, 90,553f, 2429,724f));
				Function_118(18, &uLocal_542, &iLocal_22 + 1464);
				Function_117(18, &uLocal_542, &iLocal_22);
				Function_123(StackVal, 9, &uLocal_542, Vector(-827,9807f, 92,54639f, 2359,82f));
				Function_116(StackVal, 9, &uLocal_542, Vector(-827,9807f, 92,54639f, 2359,82f));
				Function_121(StackVal, 9, &uLocal_542, Vector(-827,9807f, 92,54639f, 2359,82f));
				Function_120(StackVal, 9, &uLocal_542, Vector(-827,9807f, 92,54639f, 2359,82f));
				Function_111(StackVal, 9, &uLocal_542, Vector(-827,9807f, 92,54639f, 2359,82f));
				Function_118(9, &uLocal_542, &iLocal_22 + 1368);
				Function_117(9, &uLocal_542, &iLocal_22);
				Function_107(&Global_11544, &Global_13580, &uLocal_542, &Global_10996, iScriptParam_0);
				if (Function_125(&(Global_43791[iScriptParam_0]), 256) || !Function_106(2))
				{
					iLocal_1094 = 1;
				}
				uLocal_1095 = Function_105(Global_46816[0], "hennigansRanch", "store01", 2);
				if (IS_DOOR_VALID(&uLocal_1095))
				{
					Function_104(&uLocal_1095, &Global_13580[223] + 16);
				}
				Function_103(&iLocal_22 + 1304, GET_OBJECT_FROM_PERS_CHAR(&Global_13580[213] + 16));
				Function_103(&iLocal_22 + 1312, GET_OBJECT_FROM_PERS_CHAR(&Global_13580[223] + 16));
				Function_102(&Global_13580[223] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_22, "hen_genStore_set"));
				Function_101(&Global_13580[223] + 16, 1);
				Function_100(&Global_13580[223] + 16, 397);
				Function_102(&Global_13580[93] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_22, "hen_house01_set"));
				Function_101(&Global_13580[93] + 16, 3);
				Function_100(&Global_13580[93] + 16, 398);
				Function_94(0, &iLocal_22 + 1384, &iLocal_22 + 1016, &iLocal_22 + 1016, 0, 0, &iLocal_4 + 48);
				Function_87(StackVal, 1, "$/content/Ambient/JobSystem/Job_nightwatch", Vector(-818,786f, 93,336f, 2420,76f), &Global_13580[173] + 16, 341, iScriptParam_0, 48, -1.0f, 15, 0);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "henv_bonniesYard")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "henv_bonniesYard"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "henv_bonniesYard"));
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "hen_playerHouse_set")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "hen_playerHouse_set"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_22, "hen_playerHouse_set"));
				}
				else
				{
					LOG_ERROR("HEN: Cannot find hen_playerHouse_set to restrict players room");
				}
				if (Global_6623)
				{
				}
				Function_129(&(Global_43791[iScriptParam_0]), 8);
				if (Function_125(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_86(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_538 = 10;
				}
				else
				{
					iLocal_538 = 7;
				}
				bLocal_539 = false;
				break;
			
			case 0x00000007:
				Function_82(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 65.0f, 8, 70, 0);
				Function_81(&Global_27462[952] + 188, 2, 5.0f, 1, 4294967295);
				Function_82(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 65.0f, 8, 70, 0);
				Function_81(&Global_27462[852] + 188, 2, 5.0f, 1, 4294967295);
				Function_82(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 65.0f, 8, 70, 0);
				Function_81(&Global_27462[1052] + 188, 2, 5.0f, 1, 4294967295);
				Function_80(iScriptParam_0);
				Function_77(iScriptParam_0);
				Function_76(iScriptParam_0);
				Function_75(iScriptParam_0);
				if (Function_73(5) && !Function_71(5, 16))
				{
					Function_69(iScriptParam_0);
				}
				Function_57(StackVal, &Global_98318, 5, Global_46816[0], "$/content/Frontier/Mini_Games/HorseShoes_HEN/HorseShoes_HEN", 4294967295, 0, "HenHorseShoes", 350, Vector(-820,956f, 92,361f, 2349,257f), 10.0f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "Henv_HorseShoePit"));
				if (Function_56())
				{
					Function_57(StackVal, &Global_98318, 0, Global_46816[0], "$/content/Frontier/Mini_Games/Poker_HEN/Poker_HEN", 4294967295, 0, "HenPokerHC", 433, Vector(-800,868f, 92,753f, 2375,346f), 3,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "henv_Poker"));
					Function_55(&Global_98318, 0, 5);
				}
				else
				{
					Function_57(StackVal, &Global_98318, 0, Global_46816[0], "$/content/Frontier/Mini_Games/Poker_HEN/Poker_HEN", 4294967295, 0, "HenPoker", 433, Vector(-800,868f, 92,753f, 2375,346f), 3,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "henv_Poker"));
					Function_55(&Global_98318, 0, 10);
				}
				Function_51(&Global_98318, 0, 48);
				Function_51(&Global_98318, 5, 14);
				Function_50(&Global_98318, 5);
				iLocal_538 = 8;
				bLocal_539 = false;
				break;
			
			case 0x00000008:
				if (Function_49(iScriptParam_0, &Global_11544, iLocal_1094))
				{
					Function_45(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_41(2, 4294967295, 4294967295, 0, 3);
				}
				else
				{
					Function_45(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_40(64);
					Function_41(0, 8, 4, 6, 3);
				}
				Function_37(&iLocal_4);
				Function_35(17, 0);
				Function_129(&(Global_43791[iScriptParam_0]), 512);
				iLocal_538 = 9;
				bLocal_539 = false;
				break;
			
			case 0x00000009:
				Function_33(&iLocal_4, iScriptParam_0);
				Function_129(&(Global_43791[iScriptParam_0]), 4);
				Function_32("Finished Initializing Hennigan's Ranch", 5.0f);
				iLocal_538 = 10;
				bLocal_539 = false;
				break;
			
			case 0x0000000A:
				if (!Function_31(Global_98961, 1))
				{
					if (Function_29(&(Global_46816[0]), 0))
					{
						Function_28(&Global_98961, 1);
					}
				}
				if (!Function_27(Global_119934, 8))
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 8) && Function_141(3, 0)) && !Function_141(8, 0))
						{
							Function_22(&Global_54076, 8, 1, 0);
						}
					}
				}
				Function_19(&vLocal_1097);
				if (Function_125(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_538 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_539);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	Function_12(&Global_11544, &Global_13580, iScriptParam_0, (iLocal_1094 || Global_6623));
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_1(0);
	Function_40(64);
	Function_86(&(Global_43791[iScriptParam_0]), 32);
	Function_86(&(Global_43791[iScriptParam_0]), 64);
	Function_86(&(Global_43791[iScriptParam_0]), 8);
	Function_86(&(Global_43791[iScriptParam_0]), 512);
	Function_86(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_540))
	{
		TERMINATE_SCRIPT(&uLocal_540);
	}
	Function_32("Unloaded Hennigan's Ranch", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x1711 / 5905
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_41252)
	{
		if (&bParam0)
		{
			Global_41252[iVar011].f_52 = 1;
		}
		else
		{
			Global_41252[iVar011].f_56 = 1;
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x1748 / 5960
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

void Function_3(int iParam0) //Position: 0x177E / 6014
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x17A0 / 6048
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x17B6 / 6070
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x17CC / 6092
{
	Function_7(&iLocal_22 + 8);
	RELEASE_LAYOUT_REF(&iLocal_22);
	return;
}

void Function_7(int iParam0) //Position: 0x17DF / 6111
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

void Function_8(struct<2>[] Param0, int iParam1) //Position: 0x1807 / 6151
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

void Function_9(struct<13> Param0) //Position: 0x1952 / 6482
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_10(struct<13> Param0) //Position: 0x196F / 6511
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x198D / 6541
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x1999 / 6553
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
	if (Function_125(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_86(&(Global_43791[bParam2]), 0x40000000);
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
				Function_139(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_16(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_139(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_125(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_106(2) || Function_125(&(Global_43791[bParam2]), 256))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_129(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x1BB7 / 7095
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_140(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
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
		Function_140(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0x1D1D / 7453
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

int Function_15(int iParam0) //Position: 0x1D48 / 7496
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

bool Function_16(int iParam0, int iParam1) //Position: 0x1D7C / 7548
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_17() //Position: 0x1D99 / 7577
{
	if (Function_31(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_18(int iParam0) //Position: 0x1DB4 / 7604
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

void Function_19(vector3[] vParam0) //Position: 0x2262 / 8802
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
				Function_28(&vParam0[bVar03] + 16, 64);
				if (Function_31(vParam0[bVar03].f_16, 2))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_31(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_31(vParam0[bVar03].f_16, 16))
				{
					Function_20(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_31(vParam0[bVar03].f_16, 32))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_20(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_20(&vParam0[bVar03] + 16, 64);
				}
				if (Function_31(vParam0[bVar03].f_16, 2))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_31(vParam0[bVar03].f_16, 4))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
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
						if (Function_31(vParam0[iVar13].f_16, 64))
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_31(vParam0[bVar03].f_16, 64) && Function_31(vParam0[bVar03].f_16, 16))
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_20(&vParam0[bVar03] + 16, 64);
						if (Function_31(vParam0[bVar03].f_16, 1))
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_31(vParam0[bVar03].f_16, 64) && Function_31(vParam0[bVar03].f_16, 16))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_20(&vParam0[bVar03] + 16, 64);
					if (Function_31(vParam0[bVar03].f_16, 1))
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_31(vParam0[bVar03].f_16, 64))
					{
						if (Function_31(vParam0[bVar03].f_16, 32))
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_21(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_31(vParam0[bVar03].f_16, 8))
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_21(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_20(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_31(vParam0[bVar03].f_16, 64))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_31(vParam0[bVar03].f_16, 8))
				{
					Function_21(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_20(&vParam0[bVar03] + 16, 64);
					Function_21(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_31(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_20(int iParam0, int iParam1) //Position: 0x2A92 / 10898
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_21(struct<17> Param0) //Position: 0x2AA8 / 10920
{
	if (Function_31(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_22(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x2AD1 / 10961
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_24(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_23(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_23(char* cParam0) //Position: 0x2B46 / 11078
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

bool Function_24(int iParam0, var uParam1, int iParam2) //Position: 0x2B80 / 11136
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
		if (Function_26(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_25(uVar0))
		{
			case 0x00000002:
				if (!Function_27(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_25(char* cParam0) //Position: 0x2BFC / 11260
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

int Function_26(int iParam0) //Position: 0x2C9D / 11421
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_20(&iVar1, 2147483648);
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

bool Function_27(var uParam0, int iParam1) //Position: 0x2CDA / 11482
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_28(var uParam0, int iParam1) //Position: 0x2CED / 11501
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_29(int iParam0, bool bParam1) //Position: 0x2CFE / 11518
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_30(iParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_30(iParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_30(iParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_30(iParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
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

struct<8> Function_30(int iParam0, int iParam1, bool bParam2) //Position: 0x2DD3 / 11731
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

bool Function_31(var uParam0, int iParam1) //Position: 0x337F / 13183
{
	return (uParam0 && iParam1) == 0;
}

void Function_32(char* cParam0) //Position: 0x338C / 13196
{
	if (!Function_106(128))
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

void Function_33(int iParam0, bool bParam1) //Position: 0x33CC / 13260
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

void Function_34(var uParam0, int iParam1) //Position: 0x34BC / 13500
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(int iParam0, bool bParam1) //Position: 0x34C9 / 13513
{
	if (iParam0 == 17)
	{
		if (&bParam1)
		{
		}
	}
	if (!Function_36(iParam0))
	{
		return;
	}
	if (&bParam1)
	{
		Global_41252[iParam011].f_52 = 0;
	}
	else
	{
		Global_41252[iParam011].f_56 = 0;
	}
	return;
}

bool Function_36(int iParam0) //Position: 0x3506 / 13574
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_37(int iParam0) //Position: 0x351C / 13596
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_39(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_38(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_38(var uParam0) //Position: 0x3618 / 13848
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_39() //Position: 0x3635 / 13877
{
	int iVar0;
	
	return &iVar0;
}

void Function_40(int iParam0) //Position: 0x363E / 13886
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3651 / 13905
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
		Function_42();
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

void Function_42() //Position: 0x373F / 14143
{
	int iVar0;
	
	Global_41176 = Function_43(StackVal);
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

int Function_43(int iParam0) //Position: 0x378D / 14221
{
	if (!Function_44(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_44(bool bParam0) //Position: 0x37A5 / 14245
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_45(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x37BA / 14266
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
		Function_48();
	}
	if (&bParam5)
	{
		Function_46(1048576);
	}
}

void Function_46(int iParam0) //Position: 0x38C8 / 14536
{
	Function_47(&Global_43580, iParam0);
	return;
}

void Function_47(var uParam0, var uParam1) //Position: 0x38D6 / 14550
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_48() //Position: 0x38F5 / 14581
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_46(16384);
	}
	return;
}

bool Function_49(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x3911 / 14609
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_125(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_141(49, 0))
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

void Function_50(struct<28>[] Param0, int iParam1) //Position: 0x39CF / 14799
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_51(struct<28>[] Param0, int iParam1, int iParam2) //Position: 0x39EC / 14828
{
	int iVar0;
	
	iVar0 = Param0[iParam128].f_184;
	if (iParam2 & 2 == 0)
	{
		iVar0 |= 64;
		iVar0 = (iVar0 - 64);
	}
	if (iParam2 & 4 == 0)
	{
		iVar0 |= 128;
		iVar0 = (iVar0 - 128);
	}
	if (iParam2 & 8 == 0)
	{
		iVar0 |= 256;
		iVar0 = (iVar0 - 256);
	}
	if (iParam2 & 16 == 0)
	{
		iVar0 |= 512;
		iVar0 = (iVar0 - 512);
	}
	if (iParam2 & 32 == 0)
	{
		iVar0 |= 1024;
		iVar0 = (iVar0 - 1024);
	}
	if (iParam2 & 1 == 0)
	{
		iVar0 |= 32;
		iVar0 = (iVar0 - 32);
	}
	Function_52(Param0[iParam128].f_112, (1 + iParam1), iParam2, 0, 0);
	Param0[iParam128].f_184 = iVar0;
	return;
}

void Function_52(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4) //Position: 0x3AA9 / 15017
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02].f_12 = uParam2;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Function_54(StackVal);
				Var1 = Function_54(StackVal);
				if (Function_53(StackVal, StackVal, Var1, Vector(&fParam3, 0.0f, &fParam4)))
				{
					Global_15863[iVar02].f_12 = uParam2;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_53(struct<2> Param0, struct<2> Param2) //Position: 0x3B5B / 15195
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_54(int iParam0) //Position: 0x3B87 / 15239
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

void Function_55(struct<28>[] Param0, int iParam1, int iParam2) //Position: 0x3BDE / 15326
{
	Param0[iParam128].f_196 = iParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

bool Function_56() //Position: 0x3C05 / 15365
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_57(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x3C30 / 15408
{
	if (0 && !&bParam11)
	{
		return;
	}
	if (1 && bParam11)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(&(Global_98936[bParam1])))
	{
		DESTROY_OBJECTSET(&(Global_98936[bParam1]));
	}
	Param0[bParam128].f_4 = Function_64(bParam2, bParam1, 4);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[bParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[bParam128] + 8) = 4294967295;
	}
	(&Param0[bParam128] + 64) = "";
	(&Param0[bParam128] + 72) = "";
	*(&Param0[bParam128] + 80) = &iParam12;
	Param0[bParam128].f_136 = iParam7;
	Param0[bParam128].f_152 = 5;
	Param0[bParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[bParam128].f_188 = iParam4;
	Param0[bParam128].f_192 = 4294967295;
	Param0[bParam128].f_196 = 4294967295;
	Param0[bParam128].f_200 = 4294967295;
	strcpy(&Param0[bParam128] + 16, &cParam6, 16);
	*(&Param0[bParam128] + 88) = Param8;
	Param0[bParam128].f_100 = iParam10;
	Param0[bParam128].f_112 = bParam2;
	if (Global_39266[bParam1] && Function_63(bParam1))
	{
		Function_58(StackVal, bParam2, (1 + bParam1), Param8, 63);
	}
	Param0[bParam128].f_196 = 1;
	Param0[bParam128].f_184 |= 8192;
}

int Function_58(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x3D99 / 15769
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
		Function_54(uVar3);
		Var6 = Function_54(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_54(StackVal);
				Var4 = Function_54(StackVal);
				if (Function_53(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_59(iParam1), 0.0f, 2, iVar2);
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

int Function_59(int iParam0) //Position: 0x3F82 / 16258
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

var Function_60(vector3 vParam0) //Position: 0x4130 / 16688
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

int Function_61(int iParam0) //Position: 0x417E / 16766
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

bool Function_62(vector3 vParam0) //Position: 0x4236 / 16950
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_63(int iParam0) //Position: 0x424E / 16974
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_64(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4271 / 17009
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

int Function_65(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x42CF / 17103
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

var Function_66(int iParam0) //Position: 0x4433 / 17459
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

bool Function_67(int iParam0) //Position: 0x4471 / 17521
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_68(int iParam0, int iParam1, int iParam2) //Position: 0x4486 / 17542
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_69(int iParam0) //Position: 0x44A6 / 17574
{
	Function_82(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_70(&Global_27462[3352] + 188, 2, 0);
	return;
}

void Function_70(struct<149> Param0) //Position: 0x4509 / 17673
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

bool Function_71(int iParam0, int iParam1) //Position: 0x4520 / 17696
{
	int iVar0;
	
	if (!Function_72(iParam0))
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

bool Function_72(int iParam0) //Position: 0x457F / 17791
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_73(int iParam0) //Position: 0x4595 / 17813
{
	if (!Function_72(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_74(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_74(int iParam0, int iParam1) //Position: 0x45E7 / 17895
{
	int iVar0;
	
	if (!Function_72(iParam0))
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

void Function_75(int iParam0) //Position: 0x4614 / 17940
{
	Function_82(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_70(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_76(int iParam0) //Position: 0x467B / 18043
{
	Function_82(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_77(int iParam0) //Position: 0x46C4 / 18116
{
	if (!Function_79())
	{
		Function_82(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_81(&Global_27462[3952] + 188, 1, 4,5f, 64, 4294967295);
		Function_78(&Global_27462[3952] + 188, -4,5f, 2);
	}
	return;
}

void Function_78(int iParam0, float fParam1, int iParam2) //Position: 0x4745 / 18245
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

bool Function_79() //Position: 0x475D / 18269
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

void Function_80(int iParam0) //Position: 0x4784 / 18308
{
	Function_82(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_81(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_78(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_81(struct<85> Param0) //Position: 0x47FF / 18431
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x4829 / 18473
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Function_83(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_83(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x4870 / 18544
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
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
					bVar2 = Function_85(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_84(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_85(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_84(int iParam0, int iParam1) //Position: 0x4C2E / 19502
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_85(int iParam0) //Position: 0x4C51 / 19537
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_86(var uParam0, bool bParam1) //Position: 0x4C68 / 19560
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

int Function_87(int iParam0, var uParam1, struct<2> Param2, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x4C82 / 19586
{
	var uVar0;
	
	*(&Global_98256[iParam010] + 16) = GET_ASSET_ID(&uParam1, 4);
	Global_98256[iParam010].f_24 = iParam0;
	*(&Global_98256[iParam010] + 40) = &uParam4;
	Global_98256[iParam010].f_36 = uParam6;
	Global_98256[iParam010].f_72 = uParam7;
	Global_98256[iParam010].f_28 = uParam8;
	Global_98256[iParam010].f_32 = uParam9;
	*(&Global_98256[iParam010] + 56) = Param2;
	Global_98256[iParam010].f_68 = uParam5;
	uVar0 = Function_64(uParam6, iParam0, 6);
	if (Function_93(uVar0) == 0)
	{
		Function_89(uVar0, MAKE_TIME_OF_DAY_EX(1, 0, 0, 0));
	}
	uParam10 = &uParam10;
	Function_88(&(Global_98256[iParam010]), 24);
	return 1;
}

void Function_88(var uParam0, int iParam1) //Position: 0x4D34 / 19764
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_89(int iParam0, int iParam1) //Position: 0x4D45 / 19781
{
	if (!Function_90(iParam0))
	{
		return;
	}
	*(&Global_21684[iParam07] + 40) = &iParam1;
	return;
}

bool Function_90(int iParam0) //Position: 0x4D62 / 19810
{
	if (!Function_92(iParam0))
	{
		return 0;
	}
	if (!Function_91(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_91(int iParam0) //Position: 0x4D86 / 19846
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_92(int iParam0) //Position: 0x4D9B / 19867
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_93(int iParam0) //Position: 0x4DB2 / 19890
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x4DCC / 19916
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_99(&uParam1, &uParam2);
	if (!Function_98(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_97(&uParam4, 0);
		}
		else
		{
			Function_96(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_97(&iParam5, 0);
		}
		else
		{
			Function_96(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_95(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_95(&(uVar2[1]), "UseCase1"));
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

var Function_95(var uParam0, int iParam1) //Position: 0x519C / 20892
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_96(var uParam0, int iParam1) //Position: 0x51AB / 20907
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

void Function_97(var uParam0, int iParam1) //Position: 0x5206 / 20998
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

bool Function_98(int iParam0) //Position: 0x525E / 21086
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_99(var uParam0, int iParam1) //Position: 0x5274 / 21108
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

int Function_100(bool bParam0, int iParam1) //Position: 0x53D2 / 21458
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

int Function_101(var uParam0, int iParam1) //Position: 0x54CA / 21706
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

int Function_102(var uParam0, int iParam1) //Position: 0x55AE / 21934
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

void Function_103(var uParam0, int iParam1) //Position: 0x56EA / 22250
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

void Function_104(var uParam0, int iParam1) //Position: 0x5737 / 22327
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(&uParam0, "owner", &iParam1);
	return;
}

var Function_105(int iParam0, char* cParam1, bool bParam3) //Position: 0x575A / 22362
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

bool Function_106(int iParam0) //Position: 0x57FF / 22527
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_107(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x581B / 22555
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_106(2))
	{
		return;
	}
	if (Function_125(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_16(&(Param0[iVar02]), 2))
		{
			if (Function_108(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_86(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_129(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_108(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x58D3 / 22739
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_125(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_110(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_62(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_139(&iParam0, 4);
	}
	Function_109(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_109(int iParam0, struct<2> Param1) //Position: 0x5A54 / 23124
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

var Function_110(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x5B9A / 23450
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

void Function_111(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5CC1 / 23745
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_112(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x5D2A / 23850
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_113(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x5D95 / 23957
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_114(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x5DFB / 24059
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_115(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5E6E / 24174
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_116(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x5ED5 / 24277
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_117(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x5F3E / 24382
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

void Function_118(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x5F9D / 24477
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_119(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x6004 / 24580
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_120(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x606D / 24685
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_121(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x60D8 / 24792
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_122(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x613E / 24894
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_123(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x61A7 / 24999
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_124(int iParam0) //Position: 0x620B / 25099
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_125(&(Global_43791[iParam0]), 4);
}

bool Function_125(var uParam0, int iParam1) //Position: 0x6227 / 25127
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_126(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x6244 / 25156
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
	strcpy(&cVar1, Function_18(iParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_125(&(Global_43791[iParam2]), 0x40000000))
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

void Function_127(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x632D / 25389
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
	if (!Function_125(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_129(&(Global_43791[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_140(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_140(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_128(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x641D / 25629
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_28(&vVar0 + 16, 1);
	}
	else
	{
		Function_20(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_28(&vVar0 + 16, 2);
	}
	else
	{
		Function_20(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_28(&vVar0 + 16, 4);
	}
	else
	{
		Function_20(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_28(&vVar0 + 16, 8);
	}
	else
	{
		Function_20(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_28(&vVar0 + 16, 16);
	}
	else
	{
		Function_20(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_28(&vVar0 + 16, 32);
	}
	else
	{
		Function_20(&vVar0 + 16, 32);
	}
	Function_20(&vVar0 + 16, 64);
	Function_20(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_129(var uParam0, int iParam1) //Position: 0x64EA / 25834
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_130() //Position: 0x64FB / 25851
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
	
	Function_138(3, 3);
	uVar0 = &uVar0;
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_cleanwindow_w_any", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/milk_cow", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/knl_hoe_soil", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/pet_dog", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/multistage_hoe", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/dog_sitting_nosun_norain", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping_nosun_norain", 1, 0);
	Function_136(&iLocal_22 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	if (!Function_131(&iLocal_22 + 8))
	{
		return 0;
	}
	iLocal_22 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_22))
	{
		iLocal_22 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	*(&iLocal_22 + 1008) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_22, "henv_bonniesYard", 2,802597E-45f, Vector(-790,3024f, 93,23891f, 2407,938f), Vector(0.0f, -34,46604f, 0.0f), Vector(26,0053f, 7,173422f, 17,96572f));
	*(&iLocal_22 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_save_flag_HEN", Vector(-839,76f, 92,55f, 2372,67f), Vector(0.0f, 202,5152f, 0.0f));
	*(&iLocal_22 + 1024) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", &iLocal_22, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingA", Vector(-819,1766f, 92,82251f, 2365,016f), Vector(0.0f, 20,41432f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_22 + 1024);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingC", Vector(-831,2278f, 92,53697f, 2361,964f), Vector(0.0f, 120,1605f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_22 + 1024);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingD", Vector(-812,8053f, 92,84023f, 2384,877f), Vector(0.0f, 204,6442f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_22 + 1024);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "putBroomBack", Vector(-806,4645f, 92,76514f, 2374,935f), Vector(0.0f, -123,4115f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_22 + 1024);
	*(&iLocal_22 + 1032) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", &iLocal_22, 8, 0);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingH", Vector(-786,1699f, 93,688f, 2403,179f), Vector(0.0f, 51,69351f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_22 + 1032);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingI", Vector(-779,9948f, 93,688f, 2392,503f), Vector(0.0f, -41,29826f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_22 + 1032);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingJ", Vector(-786,8679f, 93,60988f, 2408,805f), Vector(0.0f, 133,451f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_22 + 1032);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsweepingK", Vector(-783,5532f, 93,688f, 2405,91f), Vector(0.0f, 51,69351f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_22 + 1032);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "doneWithIt", Vector(-784,4118f, 93,69946f, 2401,75f), Vector(0.0f, 55,47858f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_22 + 1032);
	*(&iLocal_22 + 1040) = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", &iLocal_22, 8, 0);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dropHay", Vector(-887,0761f, 91,2944f, 2408,298f), Vector(0.0f, 60,05384f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_22 + 1040);
	DECOR_SET_BOOL(&uVar10, "MSEndBlockCheck", 1);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dropHay1", Vector(-876,0001f, 91,40847f, 2400.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_22 + 1040);
	DECOR_SET_BOOL(&uVar11, "MSEndBlockCheck", 1);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dropHay2", Vector(-892,0001f, 91,35696f, 2409,409f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_22 + 1040);
	DECOR_SET_BOOL(&uVar12, "MSEndBlockCheck", 1);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dropHay3", Vector(-865,7713f, 91,32473f, 2392,768f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_22 + 1040);
	DECOR_SET_BOOL(&uVar13, "MSEndBlockCheck", 1);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dropHay4", Vector(-843,4188f, 90,35291f, 2482,496f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_22 + 1040);
	DECOR_SET_BOOL(&uVar14, "MSEndBlockCheck", 1);
	*(&iLocal_22 + 1048) = Vector(-827,7444f, 92,53575f, 2395,472f);
	*(&iLocal_22 + 1048 + 12) = Vector(0.0f, 169,597f, 0.0f);
	*(&iLocal_22 + 1072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_shop_flag_GEN", Vector(-827,7444f, 92,53575f, 2395,472f), Vector(0.0f, 169,597f, 0.0f));
	*(&iLocal_22 + 1080) = Vector(-950,5053f, 90,55292f, 2428,838f);
	*(&iLocal_22 + 1080 + 12) = Vector(0.0f, 169,597f, 0.0f);
	*(&iLocal_22 + 1104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_shop_flag_TICKET", Vector(-950,5053f, 90,55292f, 2428,838f), Vector(0.0f, 169,597f, 0.0f));
	*(&iLocal_22 + 1112) = Vector(-830,0044f, 92,56405f, 2359,117f);
	*(&iLocal_22 + 1112 + 12) = Vector(0.0f, 169,597f, 0.0f);
	*(&iLocal_22 + 1136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_shop_flag_DR", Vector(-830,0044f, 92,56405f, 2359,117f), Vector(0.0f, 169,597f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "shovel_hay01", "horse_stay", Vector(-876,127f, 91,41033f, 2392,768f), Vector(0.0f, -82,59795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "shovel_hay03", "horse_stay", Vector(-891,5057f, 91,41033f, 2401,761f), Vector(0.0f, 139,9104f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair", "repair_kneel_nospawn", Vector(-902,4957f, 91,41033f, 2405,323f), Vector(0.0f, -150,2357f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair1", "repair_kneel_nospawn", Vector(-900,9758f, 91,37296f, 2377,078f), Vector(0.0f, -53,29918f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle10", "Rand_Idle_NearWall_nospawn", Vector(-893,5835f, 91,37296f, 2377,355f), Vector(0.0f, -197,1262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair2", "repair_kneel_nospawn", Vector(-902,6456f, 91,37296f, 2360,991f), Vector(0.0f, -100,3104f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsit_fence", "sit_fence_nospawn", Vector(-903,3334f, 91,34934f, 2363,854f), Vector(0.0f, 257,5146f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair3", "repair_kneel_nospawn", Vector(-892,8904f, 91,37296f, 2354,653f), Vector(0.0f, -164,3168f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair4", "repair_kneel_nospawn", Vector(-908,5444f, 91,37296f, 2342,529f), Vector(0.0f, 31,91996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence1", "sit_fence_nospawn", Vector(-909,4886f, 91,37296f, 2342,991f), Vector(0.0f, 386,3804f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair5", "repair_kneel_nospawn", Vector(-942,2635f, 91,37296f, 2367,556f), Vector(0.0f, 62,39971f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair6", "repair_kneel_nospawn", Vector(-941,1067f, 91,35687f, 2393,61f), Vector(0.0f, 106,7166f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair7", "repair_kneel_nospawn", Vector(-912,3746f, 91,4075f, 2414,425f), Vector(0.0f, -165,328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nlean_rail", "lean_rail_nospawn", Vector(-848,3721f, 90,35722f, 2461,695f), Vector(0.0f, -69,79144f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle11", "Rand_Idle_NearWall_nospawn", Vector(-866,186f, 91,37329f, 2376,572f), Vector(0.0f, 71,44085f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_RH03", "lie_sleep_on_bed_r", Vector(-820,4538f, 93,80911f, 2436,392f), Vector(0.0f, 164,9983f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail1", "lean_rail_nospawn", Vector(-781,6268f, 96,83918f, 2398,28f), Vector(0.0f, 143,6077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "announce", "stand_announce", Vector(-787,9465f, 93,63123f, 2409,61f), Vector(0.0f, 126,4461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle12", "Rand_Idle_NearWall_nospawn", Vector(-781,8979f, 93,63273f, 2409,377f), Vector(0.0f, -127,2841f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle13", "Rand_Idle_NearWall_nospawn", Vector(-780,476f, 93,66959f, 2397,7f), Vector(0.0f, 53,70927f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle14", "Rand_Idle_NearWall_nospawn", Vector(-773,5709f, 93,66281f, 2395,008f), Vector(0.0f, -214,2884f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1152), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "clean_window02", "stand_cleanwindow_w_any", Vector(-780,2283f, 93,62262f, 2407,008f), Vector(0.0f, -305,3241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking", "rand_idle_stand", Vector(-788,7734f, 93,62315f, 2408,368f), Vector(0.0f, 141,2286f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "clean_window04", "stand_cleanwindow_w_any", Vector(-791,4217f, 93,63973f, 2404,453f), Vector(0.0f, -395,8559f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking1", "rand_idle_stand", Vector(-788,9864f, 96,82925f, 2407,505f), Vector(0.0f, -215,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1160), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail01", "lean_rail_nospawn", Vector(-783,4303f, 93,61821f, 2412,065f), Vector(0.0f, -217,0542f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail02", "rand_idle_stand", Vector(-781,7466f, 93,62625f, 2412,029f), Vector(0.0f, -125,1064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle15", "Rand_Idle_NearWall_nospawn", Vector(-793,5349f, 93,63404f, 2402,858f), Vector(0.0f, -215,535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle02", "rand_idle_stand_nospawn", Vector(-777,1562f, 93,6092f, 2406,301f), Vector(0.0f, -127,8212f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail4", "lean_rail_nospawn", Vector(-783,7834f, 96,81454f, 2398,485f), Vector(0.0f, 595,7698f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_maid01", "lie_sleep_on_bed_l", Vector(-781,5988f, 96,82007f, 2390,604f), Vector(0.0f, -35,82428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1168), 0);
	*(&iLocal_22 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_maid02", "lie_sleep_on_bed_r", Vector(-782,9034f, 96,81838f, 2392,382f), Vector(0.0f, -215,1258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1176), 0);
	*(&iLocal_22 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_paHen", "lie_sleep_on_bed_r", Vector(-778,6096f, 96,82572f, 2393,384f), Vector(0.0f, -125,9706f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1184), 0);
	*(&iLocal_22 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_smoke06", "Rand_Idle_NearWall_Shoulder_R", Vector(-809,2281f, 92,77188f, 2376,195f), Vector(0.0f, 328,975f, 0.0f));
	*(&iLocal_22 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking3", "rand_idle_stand", Vector(-814,2024f, 92,84706f, 2385,74f), Vector(0.0f, -292,2538f, 0.0f));
	*(&iLocal_22 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_RH11", "lie_sleep_on_bed_l", Vector(-802,1787f, 92,74963f, 2372,337f), Vector(0.0f, -303,2454f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle16", "Rand_Idle_Sit_Ground_nospawn", Vector(-858,2271f, 91,37894f, 2375,039f), Vector(0.0f, -45,00678f, 0.0f));
	*(&iLocal_22 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle17", "Rand_Idle_NearWall_nospawn", Vector(-835,6848f, 92,37424f, 2371,618f), Vector(0.0f, -72,72981f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1216), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_randidlenearwall03", "rand_idle_stand", Vector(-814,9829f, 92,85525f, 2387,132f), Vector(0.0f, -319,6607f, 0.0f));
	*(&iLocal_22 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_randidlenearwall04", "Rand_Idle_NearWall_nospawn", Vector(-820,2572f, 92,38236f, 2387,969f), Vector(0.0f, -461,3726f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_rail5", "lean_rail_nospawn", Vector(-791,5001f, 93,62729f, 2406,356f), Vector(0.0f, -216,5679f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "shovel_hay12", "horse_stay", Vector(-878,5818f, 91,35687f, 2338,01f), Vector(0.0f, 7,315061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "shovel_hay13", "horse_stay", Vector(-869,6392f, 91,35687f, 2353,513f), Vector(0.0f, 32,64255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "shovel_hay14", "digging", Vector(-860,9427f, 91,35687f, 2368,304f), Vector(0.0f, 88,01738f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1232), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence2", "sit_fence_nospawn", Vector(-888,004f, 91,34173f, 2377,901f), Vector(0.0f, 374,7073f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_randidlenearwall09", "Rand_Idle_NearWall_nospawn", Vector(-888,7755f, 91,3608f, 2398,221f), Vector(0.0f, -58,87661f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking4", "rand_idle_stand", Vector(-817,8032f, 93,7655f, 2424,557f), Vector(0.0f, -14,56f, 0.0f));
	*(&iLocal_22 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking5", "rand_idle_stand", Vector(-823,9734f, 93,83046f, 2423,275f), Vector(0.0f, -393,3656f, 0.0f));
	*(&iLocal_22 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "xxx", "look_distance_binocs", Vector(-811,9415f, 93,62798f, 2436,817f), Vector(0.0f, -134,4958f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_peeing06", "stand_peeing_b_any", Vector(-847,6154f, 90,35291f, 2484,949f), Vector(0.0f, -207,7152f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair8", "repair_kneel_nospawn", Vector(-935,884f, 90,35294f, 2461,766f), Vector(0.0f, 50,82922f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle18", "Rand_Idle_NearWall_nospawn", Vector(-912,8926f, 90,37659f, 2444,983f), Vector(0.0f, -159,8966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle19", "Rand_Idle_NearWall_nospawn", Vector(-897,8806f, 90,37659f, 2434,631f), Vector(0.0f, -64,70596f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking6", "rand_idle_stand", Vector(-863,6358f, 93,63309f, 2439,817f), Vector(0.0f, 664,0407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking7", "rand_idle_stand", Vector(-831,8262f, 92,58131f, 2398,951f), Vector(0.0f, 202,865f, 0.0f));
	*(&iLocal_22 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle09", "look_out_window_L", Vector(-830,9413f, 92,56772f, 2399,286f), Vector(0.0f, -173,808f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "shovel_hay24", "stand_hammerground_w_any", Vector(-864,9551f, 93,67998f, 2446,718f), Vector(0.0f, 305,9914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "aaa", "look_distance_binocs", Vector(-867,1848f, 93,61197f, 2440,398f), Vector(0.0f, 125,38f, 0.0f));
	*(&iLocal_22 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "bbb", "look_distance_binocs", Vector(-841,4387f, 93,67443f, 2418,409f), Vector(0.0f, 81,02836f, 0.0f));
	*(&iLocal_22 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "fff", "look_distance_binocs", Vector(-780,2034f, 92,33911f, 2428,789f), Vector(0.0f, -133,9039f, 0.0f));
	*(&iLocal_22 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_maHen", "lie_sleep_on_bed_l", Vector(-776,0959f, 96,81454f, 2394,925f), Vector(0.0f, -305,1163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1296), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(-834,0414f, 90,35528f, 2461,479f), Vector(0.0f, -47,18939f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", Vector(-834,3953f, 90,35526f, 2460,228f), Vector(0.0f, -97,43676f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle20", "Rand_Idle_Sit_Ground_nospawn", Vector(-833,2308f, 90,36301f, 2462,397f), Vector(0.0f, -25,31964f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_stay", "horse_tend", Vector(-846,8463f, 90,35529f, 2470,065f), Vector(0.0f, 26,24753f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_stay2", "horse_tend", Vector(-850,5319f, 90,35529f, 2460,201f), Vector(0.0f, 17,96719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle21", "Rand_Idle_Sit_Ground_nospawn", Vector(-856,8738f, 91,35687f, 2375,729f), Vector(0.0f, 340,6458f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "hammer", "repair_kneel", Vector(-812,6243f, 92,36194f, 2362,424f), Vector(0.0f, 75,4216f, 0.0f));
	*(&iLocal_22 + 1304) = CREATE_OBJECTSET_IN_LAYOUT(Function_39(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_yelling_mid1", "stand_yelling_mid", Vector(-892,4946f, 90,35291f, 2439,752f), Vector(0.0f, 102,8846f, 0.0f)), &iLocal_22 + 1304);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce", "stand_announce", Vector(-885,0763f, 91,3993f, 2398,288f), Vector(0.0f, 23,35142f, 0.0f)), &iLocal_22 + 1304);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce1", "stand_announce", Vector(-867,7095f, 93,59226f, 2442,681f), Vector(0.0f, 99,70998f, 0.0f)), &iLocal_22 + 1304);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_announce2", "stand_announce", Vector(-846,9958f, 90,35525f, 2454,885f), Vector(0.0f, -160,1761f, 0.0f)), &iLocal_22 + 1304);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_yelling_mid", "stand_yelling_mid", Vector(-914,0119f, 91,35687f, 2410,471f), Vector(0.0f, -25,72085f, 0.0f)), &iLocal_22 + 1304);
	*(&iLocal_22 + 1312) = CREATE_OBJECTSET_IN_LAYOUT(Function_39(), &iLocal_22, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "use_shelf2", "nuse_shelf", Vector(-824,686f, 92,55173f, 2388,709f), Vector(0.0f, -11,8829f, 0.0f)), &iLocal_22 + 1312);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground_nospawn", Vector(-877,9465f, 91,35687f, 2334,158f), Vector(0.0f, -84,46268f, 0.0f));
	*(&iLocal_22 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", Vector(-830,2526f, 92,36078f, 2372,182f), Vector(0.0f, -62,94236f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1320), 0);
	*(&iLocal_22 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-830,0194f, 92,36078f, 2373,167f), Vector(0.0f, -109,6638f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1328), 0);
	*(&iLocal_22 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-829,4692f, 92,36078f, 2369,576f), Vector(0.0f, -43,78243f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1336), 0);
	*(&iLocal_22 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunk_rowdydrink2", "stand_drunk_dancing_link", Vector(-828,699f, 92,36078f, 2368,512f), Vector(0.0f, 150,737f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1344), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunkdancing_e_any", "stand_dnd_rowdydrink", Vector(-828,7341f, 92,36078f, 2373,626f), Vector(0.0f, 71,26332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunkdancing_e_any1", "stand_drunk_dancing_link", Vector(-827,0538f, 92,36078f, 2368,4f), Vector(0.0f, 155,1144f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_22 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_drunkdancing_e_any2", "stand_drunk_dancing_link", Vector(-831,7697f, 92,36078f, 2371,529f), Vector(0.0f, -79,9409f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1352), 1);
	*(&iLocal_22 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand", "Rand_Idle_Sit_Ground", Vector(-825,9158f, 92,39031f, 2372,315f), Vector(0.0f, 54,08537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1360), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit_Ground_nospawn5", "rand_idle_stand", Vector(-829,7599f, 92,36078f, 2374,118f), Vector(0.0f, 329,4039f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking8", "Rand_Idle_Sit_Ground", Vector(-826,8938f, 92,3885f, 2373,05f), Vector(0.0f, 3,073033f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking_stand_nospawn", "smoking_stand_nospawn", Vector(-845,399f, 92,36078f, 2369,715f), Vector(0.0f, 143,4348f, 0.0f));
	*(&iLocal_22 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_doctor", "lie_sleep_on_bed_l", Vector(-833,0023f, 92,54736f, 2357,227f), Vector(0.0f, 86,0327f, 0.0f));
	*(&iLocal_22 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_newspaper", "lie_sleep_on_bed_l", Vector(-826,4598f, 92,55508f, 2358,066f), Vector(0.0f, -3,588052f, 0.0f));
	*(&iLocal_22 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "player_sleep_HEN", "player_sleep_bed_L", Vector(-838,6916f, 92,56223f, 2371,507f), Vector(0.0f, -69,74495f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_tabletop", "stand_hammer_table", Vector(-820,836f, 92,361f, 2384,852f), Vector(0.0f, 73,05178f, 0.0f));
	*(&iLocal_22 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_blacksmith", "lie_sleep_on_bed_r", Vector(-863,6756f, 91,6474f, 2375,693f), Vector(0.0f, -18,34668f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_Shoulder_R2", "rand_idle_stand_nospawn", Vector(-865,2255f, 91,6385f, 2385,921f), Vector(0.0f, 206,257f, 0.0f));
	*(&iLocal_22 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table1", "stand_hammer_table", Vector(-821,2841f, 93,8091f, 2424,974f), Vector(0.0f, 164,9111f, 0.0f));
	*(&iLocal_22 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_RH14", "sleeping_wall_scripted", Vector(-824,602f, 96,96294f, 2435,933f), Vector(0.0f, -13,46348f, 0.0f));
	*(&iLocal_22 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_RH01", "sleeping_wall_scripted", Vector(-827,982f, 96,97736f, 2430,71f), Vector(0.0f, 253,9377f, 0.0f));
	*(&iLocal_22 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_RH13", "sleeping_wall_scripted", Vector(-828,6963f, 96,95911f, 2433,304f), Vector(0.0f, -101,6486f, 0.0f));
	*(&iLocal_22 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "yyy", "look_distance_binocs", Vector(-830,7986f, 96,71838f, 2454,213f), Vector(0.0f, 241,3766f, 0.0f));
	*(&iLocal_22 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_storeOwner", "lie_sleep_on_bed_l", Vector(-802,0184f, 92,7645f, 2379,661f), Vector(0.0f, -119,5883f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall", "stand_hammer_wall", Vector(-879,6692f, 90,39629f, 2426,541f), Vector(0.0f, -160,9444f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall1", "stand_hammer_wall", Vector(-875,9138f, 90,38712f, 2430,308f), Vector(0.0f, 91,37677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall2", "stand_hammer_wall", Vector(-859,5668f, 90,35291f, 2449,639f), Vector(0.0f, 113,9213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall3", "stand_hammer_wall", Vector(-836,5374f, 90,35318f, 2452,303f), Vector(0.0f, -64,99828f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall4", "stand_hammer_wall", Vector(-839,9308f, 95,22968f, 2465,187f), Vector(0.0f, 18,50953f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall5", "stand_hammer_wall", Vector(-857,6632f, 91,36155f, 2386,28f), Vector(0.0f, 71,16727f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend1", "horse_tend", Vector(-841,1273f, 90,36572f, 2457,62f), Vector(0.0f, 20,50919f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", Vector(-948,2155f, 90,5476f, 2415,756f), Vector(0.0f, -160,4079f, 0.0f));
	*(&iLocal_22 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_stationWorker", "sleeping_scripted", Vector(-953,2607f, 90,55405f, 2421,811f), Vector(0.0f, -67,26672f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend2", "milk_cow", Vector(-906,892f, 90,35291f, 2440,508f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend5", "horse_tend", Vector(-904,1316f, 91,35687f, 2402,689f), Vector(0.0f, 144,5275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend6", "horse_tend", Vector(-911,9522f, 91,35687f, 2376.0f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend7", "horse_tend", Vector(-884.0f, 91,35687f, 2388.0f), Vector(0.0f, -54,84478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend8", "horse_tend", Vector(-878,0702f, 91,35687f, 2385,398f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "horse_tend10", "horse_stay", Vector(-896,6402f, 91,35687f, 2404,802f), Vector(0.0f, 133,1119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table3", "stand_hammer_table", Vector(-870,2556f, 91,37104f, 2388,979f), Vector(0.0f, 5,701097f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn1", "repair_kneel_nospawn", Vector(-877,2628f, 91,36943f, 2390,968f), Vector(0.0f, -148,414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn2", "repair_kneel_nospawn", Vector(-884,6795f, 91,3624f, 2395,976f), Vector(0.0f, -58,54754f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn3", "repair_kneel_nospawn", Vector(-894,8369f, 91,35947f, 2400,88f), Vector(0.0f, -151,2083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn4", "repair_kneel_nospawn", Vector(-872,0689f, 91,35687f, 2354,474f), Vector(0.0f, -54,78888f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn5", "repair_kneel_nospawn", Vector(-863,6531f, 91,35687f, 2372,764f), Vector(0.0f, -276,7116f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", Vector(-888,0453f, 91,37728f, 2402,572f), Vector(0.0f, -150,7114f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table7", "stand_hammer_table", Vector(-905,4208f, 91,40668f, 2408,791f), Vector(0.0f, -119,502f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table8", "stand_hammer_table", Vector(-884,6952f, 90,36724f, 2435,505f), Vector(0.0f, 65,0768f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn7", "repair_kneel_nospawn", Vector(-880,0825f, 90,35291f, 2434,271f), Vector(0.0f, 19,12937f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn8", "stand_hammer_wall", Vector(-886,5148f, 90,35291f, 2431,425f), Vector(0.0f, 111,0873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall6", "stand_hammer_wall", Vector(-885,6204f, 90,35291f, 2436,474f), Vector(0.0f, 22,33353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table10", "stand_hammer_table", Vector(-870,2692f, 90,35291f, 2450,18f), Vector(0.0f, -88,59101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall_nospawn", Vector(-844,7113f, 90,35294f, 2473,44f), Vector(0.0f, -161,3178f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel_nospawn9", "repair_kneel_nospawn", Vector(-857,8174f, 90,35291f, 2476,413f), Vector(0.0f, 5,031807f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_table12", "stand_hammer_table", Vector(-863,7329f, 90,36577f, 2470,518f), Vector(0.0f, -77,3041f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_hammer_wall7", "stand_hammer_wall", Vector(-892,8907f, 90,36308f, 2432,148f), Vector(0.0f, -70,80553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "chop", "stand_chopveggies_w_any", Vector(-822,7479f, 92,36263f, 2385,349f), Vector(0.0f, -369,219f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_hoe_soil", "knl_hoe_soil", Vector(-765,4241f, 93,36469f, 2382,134f), Vector(0.0f, 79,98794f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_hoe_soil1", "knl_hoe_soil", Vector(-770,8867f, 93,40453f, 2378,19f), Vector(0.0f, -253,3525f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_hoe_soil2", "knl_hoe_soil", Vector(-772,6586f, 93,41898f, 2380,639f), Vector(0.0f, 96,56371f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_hoe_soil3", "knl_hoe_soil", Vector(-776,8694f, 93,3647f, 2383,109f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_hoe_soil4", "knl_hoe_soil", Vector(-776,5214f, 93,39307f, 2377,086f), Vector(0.0f, -88,16006f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_hoe_soil5", "knl_hoe_soil", Vector(-767,4054f, 93,36778f, 2385,003f), Vector(0.0f, 47,4827f, 0.0f));
	*(&iLocal_22 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker", "Locked_Footlocker", Vector(-839,551f, 92,54645f, 2367,614f), Vector(0.0f, 108,393f, 0.0f));
	DECOR_SET_BOOL(&iLocal_22 + 1480, "scrap", 1);
	DECOR_SET_BOOL(&iLocal_22 + 1480, "PlayerHouseChest", 1);
	*(&iLocal_22 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sleep_foreman", "lie_sleep_on_bed_l", Vector(-833,1005f, 92,54645f, 2359,052f), Vector(0.0f, -185,2466f, 0.0f));
	*(&iLocal_22 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "ggg", "look_distance_binocs", Vector(-799,2727f, 93,26423f, 2354,897f), Vector(0.0f, -73,38371f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "campfire_talk_01", "Rand_Idle_Sit_Ground", Vector(-827,3671f, 92,36078f, 2369,354f), Vector(0.0f, 496,3519f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_R", "look_out_window_R", Vector(-774,8354f, 93,66527f, 2396,809f), Vector(0.0f, -123,8507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall_nospawn", Vector(-864,3675f, 91,6385f, 2385,175f), Vector(0.0f, 160,9761f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_H_talking", "lean_fence_H_talking", Vector(-881,8886f, 91,35796f, 2359,962f), Vector(0.0f, 116,5969f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L", "look_out_window_L", Vector(-791,4904f, 93,66455f, 2393,703f), Vector(0.0f, 55,60906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1504), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsit_docks", "nsit_docks", Vector(-864,1231f, 93,65692f, 2438,558f), Vector(0.0f, 20,61595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_docks1", "nsit_docks", Vector(-863,9441f, 93,59738f, 2455,269f), Vector(0.0f, -160,516f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-861,5583f, 93,60782f, 2453,736f), Vector(0.0f, 109,7532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-877,5718f, 91,35687f, 2335,257f), Vector(0.0f, -58,28674f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nuse_shelf", "nuse_shelf", Vector(-831,286f, 92,55173f, 2392,661f), Vector(0.0f, 80,19555f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "use_shelf1", "nuse_shelf", Vector(-822,7608f, 92,56094f, 2391,636f), Vector(0.0f, -98,73731f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L1", "look_out_window_L", Vector(-830,5064f, 92,55173f, 2396,476f), Vector(0.0f, 171,5273f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_H_talking1", "lean_fence_H_talking", Vector(-881,6396f, 91,35687f, 2372,575f), Vector(0.0f, 52,4485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Multistage_sweeping", "Multistage_sweeping", Vector(-806,4645f, 92,76514f, 2374,935f), Vector(0.0f, 58,24691f, 0.0f));
	DECOR_SET_INT(&iLocal_22 + 1512, "FlagSetNum", true);
	*(&iLocal_22 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Multistage_sweeping1", "Multistage_sweeping", Vector(-784,4118f, 93,69946f, 2401,75f), Vector(0.0f, 230,8066f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1520), 0);
	DECOR_SET_INT(&iLocal_22 + 1520, "FlagSetNum", 2);
	*(&iLocal_22 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "digging2", "digging", Vector(-772,2172f, 93,36469f, 2375,464f), Vector(0.0f, -204,1359f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L2", "look_out_window_L", Vector(-819,4464f, 93,80832f, 2436,167f), Vector(0.0f, -102,2905f, 0.0f));
	*(&iLocal_22 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_R2", "look_out_window_R", Vector(-821,2407f, 93,80911f, 2434,743f), Vector(0.0f, -14,36713f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nmilk_cow1", "milk_cow", Vector(-914,3898f, 90,35291f, 2442,287f), Vector(0.0f, -80,22819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-784,8835f, 93,64512f, 2411,009f), Vector(0.0f, 99,50083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "milk_cow", "milk_cow", Vector(-868,3619f, 90,35291f, 2448,239f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nmilk_cow4", "milk_cow", Vector(-861,1296f, 90,35291f, 2467,743f), Vector(0.0f, 24,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_horseshoe", "stand_horseshoe", Vector(-868,8219f, 91,35687f, 2373,996f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_sellPaper", "stand_sellPaper", Vector(-954,4781f, 90,78762f, 2436,324f), Vector(0.0f, 194,3955f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand1", "rand_idle_stand", Vector(-961,9915f, 90,76472f, 2426,876f), Vector(0.0f, 111,5584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand2", "rand_idle_stand", Vector(-962,9764f, 90,77058f, 2422,67f), Vector(0.0f, 111,5584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L3", "look_out_window_L", Vector(-958,4318f, 91,05297f, 2429,25f), Vector(0.0f, 112,2265f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-811,3306f, 92,86134f, 2382,26f), Vector(0.0f, 56,52731f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low", "sit_fence_low", Vector(-814,6029f, 92,86088f, 2387,901f), Vector(0.0f, 145,6432f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_R3", "look_out_window_R", Vector(-807,4f, 92,77805f, 2374,609f), Vector(0.0f, 59,52702f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_L_talking1", "lean_fence_L_talking", Vector(-827,4998f, 92,51421f, 2362,609f), Vector(0.0f, 174,7638f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L4", "look_out_window_L", Vector(-818,2917f, 92,84713f, 2365,753f), Vector(0.0f, 165,1354f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "pet_dog", "pet_dog", Vector(-824,8427f, 92,41017f, 2373,47f), Vector(0.0f, 6,607797f, 0.0f));
	*(&iLocal_22 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sleep_RH15", "sleeping_wall_scripted", Vector(-823,066f, 96,95883f, 2426,758f), Vector(0.0f, 525,8105f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_watertrough", "knl_watertrough", Vector(-855,3192f, 91,36256f, 2387,304f), Vector(0.0f, 251,7952f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L5", "look_out_window_R", Vector(-789,588f, 93,66455f, 2390,924f), Vector(0.0f, 55,60906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1560), 0);
	*(&iLocal_22 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle22", "Rand_Idle_NearWall_nospawn", Vector(-777,7162f, 93,66281f, 2398,629f), Vector(0.0f, -34,27971f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1568), 0);
	*(&iLocal_22 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "smoking9", "nlean_rail", Vector(-786,403f, 96,82925f, 2409,19f), Vector(0.0f, -215,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1576), 0);
	*(&iLocal_22 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nsmoking10", "nlean_rail", Vector(-790,9001f, 96,82925f, 2405,976f), Vector(0.0f, -215,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1584), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence_low1", "sit_fence_low", Vector(-810,1443f, 92,86088f, 2381,214f), Vector(0.0f, -37,11192f, 0.0f));
	*(&iLocal_22 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "look_out_window_L6", "look_out_window_L", Vector(-829,014f, 92,53697f, 2362,629f), Vector(0.0f, 176,142f, 0.0f));
	*(&iLocal_22 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_fence_H_talking3", "nlean_rail", Vector(-834,0533f, 92,53697f, 2366,25f), Vector(0.0f, 175,7211f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence3", "Rand_Idle_NearWall", Vector(-907,535f, 91,37296f, 2341,864f), Vector(0.0f, 208,8295f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nrepair105", "stand_hammer_wall", Vector(-929,6423f, 91,37296f, 2355,001f), Vector(0.0f, 31,15341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nrepair107", "look_out_window_L", Vector(-897,2656f, 91,33089f, 2374,108f), Vector(0.0f, -171,5796f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_fence4", "sit_ground_smoke", Vector(-885,9006f, 91,35687f, 2376,903f), Vector(0.0f, 556,3536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn4", "leaning_stand", Vector(-865,5328f, 91,6385f, 2380,694f), Vector(0.0f, 108,4091f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn5", "sit_barrel", Vector(-859,3065f, 91,6385f, 2382,144f), Vector(0.0f, 108,4091f, 0.0f));
	*(&iLocal_22 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_sellPaper2", "Rand_Idle_NearWall", Vector(-945,7577f, 90,69787f, 2431,674f), Vector(0.0f, 199,5726f, 0.0f));
	*(&iLocal_22 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_sellPaper3", "Rand_Idle_NearWall", Vector(-955,6231f, 90,7568f, 2431,927f), Vector(0.0f, 470,8588f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand3", "look_out_window_R", Vector(-961,423f, 91,02246f, 2420,558f), Vector(0.0f, 96,98452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall_nospawn6", "Rand_Idle_NearWall_nospawn", Vector(-946,6158f, 90,35291f, 2423,764f), Vector(0.0f, -68,6913f, 0.0f));
	*(&iLocal_22 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "amos_standing_looking", "stand_lookdistance_w_any", Vector(-830,5779f, 92,53502f, 2444,589f), Vector(0.0f, 75,25243f, 0.0f));
	*(&iLocal_22 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "rand_idle_stand4", "rand_idle_stand", Vector(-857,1008f, 91,64073f, 2381,814f), Vector(0.0f, -111,0237f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_22 + 1640), 0);
	*(&iLocal_22 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-825,676f, 92,36078f, 2351,822f), Vector(0.0f, -41,53579f, 0.0f));
	*(&iLocal_22 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_horseshoe2", "stand_spit", Vector(-825,5615f, 92,36078f, 2346,976f), Vector(0.0f, 199,7344f, 0.0f));
	*(&iLocal_22 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Multistage_hoe", "Multistage_hoe", Vector(-774,4138f, 93,36903f, 2392,128f), Vector(0.0f, 143,2562f, 0.0f));
	*(&iLocal_22 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "sit_camp_coffee_drink", "sit_camp_coffee_drink", Vector(-824,4113f, 92,39366f, 2371,404f), Vector(0.0f, 256,5737f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-828,0052f, 92,38932f, 2372,333f), Vector(0.0f, -10,28456f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "repair_kneel", "repair_kneel", Vector(-787,309f, 93,35026f, 2417,084f), Vector(0.0f, 322,8742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "knl_watertrough1", "knl_watertrough", Vector(-793,5923f, 93,3548f, 2407,567f), Vector(0.0f, -35,32555f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "stand_horseshoe3", "stand_horseshoe", Vector(-870,4416f, 91,35687f, 2378,733f), Vector(0.0f, 135,4871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "fake_horseshoe", "fake_horseshoe", Vector(-814,7646f, 92,423f, 2350,04f), Vector(0.0f, 87,60044f, 0.0f));
	*(&iLocal_22 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain1", "dog_sitting_nosun_norain", Vector(-856,2535f, 91,3424f, 2383,996f), Vector(0.0f, -156,3444f, 0.0f));
	*(&iLocal_22 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain2", "dog_sitting_nosun_norain", Vector(-835,0016f, 92,34972f, 2388,743f), Vector(0.0f, -238,8804f, 0.0f));
	*(&iLocal_22 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain3", "dog_sitting_nosun_norain", Vector(-819,7191f, 93,38113f, 2422,441f), Vector(0.0f, -238,8804f, 0.0f));
	*(&iLocal_22 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain4", "dog_sitting_nosun_norain", Vector(-817,8998f, 93,36668f, 2437,104f), Vector(0.0f, -392,6388f, 0.0f));
	*(&iLocal_22 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain5", "dog_sitting_nosun_norain", Vector(-827,6536f, 90,36311f, 2449,424f), Vector(0.0f, -314,975f, 0.0f));
	*(&iLocal_22 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain6", "dog_sitting_nosun_norain", Vector(-847,237f, 90,34088f, 2448,014f), Vector(0.0f, -196,9681f, 0.0f));
	*(&iLocal_22 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain7", "dog_sitting_nosun_norain", Vector(-857,1271f, 90,40262f, 2441,771f), Vector(0.0f, -354,9052f, 0.0f));
	*(&iLocal_22 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain8", "dog_sitting_nosun_norain", Vector(-863,177f, 90,40262f, 2438,803f), Vector(0.0f, -328,7679f, 0.0f));
	*(&iLocal_22 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain9", "dog_sitting_nosun_norain", Vector(-875,7607f, 90,35526f, 2427,357f), Vector(0.0f, -205,3124f, 0.0f));
	*(&iLocal_22 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain10", "dog_sitting_nosun_norain", Vector(-892,7704f, 90,35526f, 2433,5f), Vector(0.0f, -213,0923f, 0.0f));
	*(&iLocal_22 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain11", "dog_sitting_nosun_norain", Vector(-950,9026f, 90,35526f, 2437,934f), Vector(0.0f, -297,2602f, 0.0f));
	*(&iLocal_22 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain12", "dog_sitting_nosun_norain", Vector(-944,5078f, 90,32678f, 2426,567f), Vector(0.0f, -273,0189f, 0.0f));
	*(&iLocal_22 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain13", "dog_sitting_nosun_norain", Vector(-934,9854f, 90,47307f, 2414,593f), Vector(0.0f, -273,0189f, 0.0f));
	*(&iLocal_22 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain14", "dog_sitting_nosun_norain", Vector(-891,2079f, 91,39855f, 2405,131f), Vector(0.0f, -195,3947f, 0.0f));
	*(&iLocal_22 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain15", "dog_sitting_nosun_norain", Vector(-881,3704f, 91,39874f, 2399,712f), Vector(0.0f, -99,6105f, 0.0f));
	*(&iLocal_22 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain16", "dog_sitting_nosun_norain", Vector(-871,4406f, 91,39874f, 2393,862f), Vector(0.0f, -99,6105f, 0.0f));
	*(&iLocal_22 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain18", "dog_sitting_nosun_norain", Vector(-829,3984f, 92,35977f, 2348,48f), Vector(0.0f, -148,064f, 0.0f));
	*(&iLocal_22 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain19", "dog_sitting_nosun_norain", Vector(-811,3031f, 92,35977f, 2360,295f), Vector(0.0f, -172,5771f, 0.0f));
	*(&iLocal_22 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain20", "dog_sitting_nosun_norain", Vector(-819,6279f, 92,35977f, 2389,699f), Vector(0.0f, -172,5771f, 0.0f));
	*(&iLocal_22 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain21", "dog_sitting_nosun_norain", Vector(-813,4491f, 92,35977f, 2391,035f), Vector(0.0f, -136,0587f, 0.0f));
	*(&iLocal_22 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain22", "dog_sitting_nosun_norain", Vector(-779,2728f, 93,37827f, 2387,067f), Vector(0.0f, -103,4409f, 0.0f));
	*(&iLocal_22 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain23", "dog_sitting_nosun_norain", Vector(-772,3773f, 93,34153f, 2393,385f), Vector(0.0f, -261,7899f, 0.0f));
	*(&iLocal_22 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain24", "dog_sitting_nosun_norain", Vector(-774,1094f, 93,36876f, 2405,524f), Vector(0.0f, -198,6438f, 0.0f));
	*(&iLocal_22 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sitting_nosun_norain25", "dog_sitting_nosun_norain", Vector(-797,3301f, 92,31572f, 2438,703f), Vector(0.0f, -244,6164f, 0.0f));
	*(&iLocal_22 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain19", "dog_sleeping_nosun_norain", Vector(-828,135f, 90,38496f, 2448,316f), Vector(0.0f, 677,5233f, 0.0f));
	*(&iLocal_22 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain27", "dog_sleeping_nosun_norain", Vector(-963,0928f, 90,31821f, 2408,882f), Vector(0.0f, 515,3994f, 0.0f));
	*(&iLocal_22 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain26", "dog_sleeping_nosun_norain", Vector(-934,5275f, 91,42138f, 2408,778f), Vector(0.0f, 754,3392f, 0.0f));
	*(&iLocal_22 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain24", "dog_sleeping_nosun_norain", Vector(-851,6888f, 90,34486f, 2471,022f), Vector(0.0f, 893,3202f, 0.0f));
	*(&iLocal_22 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain25", "dog_sleeping_nosun_norain", Vector(-961,1657f, 90,31296f, 2401,145f), Vector(0.0f, 754,0936f, 0.0f));
	*(&iLocal_22 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain22", "dog_sleeping_nosun_norain", Vector(-835,329f, 90,31109f, 2471,108f), Vector(0.0f, 786,0833f, 0.0f));
	*(&iLocal_22 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain23", "dog_sleeping_nosun_norain", Vector(-844,9305f, 90,31761f, 2474,991f), Vector(0.0f, 786,0833f, 0.0f));
	*(&iLocal_22 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain21", "dog_sleeping_nosun_norain", Vector(-835,6715f, 90,31543f, 2459,261f), Vector(0.0f, 882,652f, 0.0f));
	*(&iLocal_22 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain20", "dog_sleeping_nosun_norain", Vector(-838,3684f, 90,33583f, 2451,252f), Vector(0.0f, 882,652f, 0.0f));
	*(&iLocal_22 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain17", "dog_sleeping_nosun_norain", Vector(-811,3888f, 93,65856f, 2439,418f), Vector(0.0f, 526,283f, 0.0f));
	*(&iLocal_22 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain16", "dog_sleeping_nosun_norain", Vector(-774,4293f, 89,71468f, 2436,886f), Vector(0.0f, 709,8894f, 0.0f));
	*(&iLocal_22 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain15", "dog_sleeping_nosun_norain", Vector(-777,993f, 89,72507f, 2437,808f), Vector(0.0f, 502,1395f, 0.0f));
	*(&iLocal_22 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain13", "dog_sleeping_nosun_norain", Vector(-795,7229f, 93,33755f, 2402,767f), Vector(0.0f, 396,0069f, 0.0f));
	*(&iLocal_22 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain12", "dog_sleeping_nosun_norain", Vector(-859,8157f, 91,3305f, 2373,429f), Vector(0.0f, 563,1933f, 0.0f));
	*(&iLocal_22 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain11", "dog_sleeping_nosun_norain", Vector(-854,0153f, 91,40736f, 2377,676f), Vector(0.0f, 480,7583f, 0.0f));
	*(&iLocal_22 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain7", "dog_sleeping_nosun_norain", Vector(-835,9901f, 92,34204f, 2357,971f), Vector(0.0f, -38,6244f, 0.0f));
	*(&iLocal_22 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain2", "dog_sleeping_nosun_norain", Vector(-812,9628f, 92,38321f, 2381,238f), Vector(0.0f, -84,6154f, 0.0f));
	*(&iLocal_22 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain4", "dog_sleeping_nosun_norain", Vector(-814,5374f, 92,3345f, 2356,515f), Vector(0.0f, 216,8288f, 0.0f));
	*(&iLocal_22 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain3", "dog_sleeping_nosun_norain", Vector(-807,3399f, 92,76865f, 2373,51f), Vector(0.0f, -63,22749f, 0.0f));
	*(&iLocal_22 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "dog_sleeping_nosun_norain1", "dog_sleeping_nosun_norain", Vector(-825,2565f, 92,39362f, 2383,69f), Vector(0.0f, -84,6154f, 0.0f));
	*(&iLocal_22 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "fake_horseshoe1", "fake_horseshoe", Vector(-826,37f, 92,423f, 2350,054f), Vector(0.0f, -87,465f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-819,4832f, 93,8091f, 2430,332f), Vector(0.0f, 73,96046f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "lean_table", "lean_table", Vector(-822,1869f, 93,83833f, 2428,695f), Vector(0.0f, -141,8092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nmilk_cow5", "milk_cow", Vector(-899,2943f, 90,35291f, 2436,934f), Vector(0.0f, 61,14019f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "nmilk_cow8", "milk_cow", Vector(-859,1331f, 90,35291f, 2472,873f), Vector(0.0f, 20,20365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_22 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_22, "Locked_Footlocker1", "Locked_Footlocker", Vector(-779,6139f, 89,86697f, 2434,14f), Vector(0.0f, -136,0742f, 0.0f));
	return 1;
}

bool Function_131(struct<2>[] Param0) //Position: 0xCDB5 / 52661
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_135();
	iVar1 = 0;
	if (!Function_10(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_134(&(Param0[iVar02]), 8);
		}
		else if (Function_133())
		{
			iVar1 = 1;
			Function_134(&(Param0[iVar02]), 8);
		}
		Function_134(&(Param0[iVar02]), 16);
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
				Function_134(&(Param0[iVar02]), 1);
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
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_134(&(Param0[iVar02]), 2);
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
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_134(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_134(&(Param0[iVar02]), 2);
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
	Function_132();
	return 1;
}

void Function_132() //Position: 0xD177 / 53623
{
	if (!Function_106(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_133() //Position: 0xD1B7 / 53687
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

void Function_134(struct<13> Param0) //Position: 0xD1E5 / 53733
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_135() //Position: 0xD1F8 / 53752
{
	if (!Function_106(128))
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

var Function_136(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xD23A / 53818
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_137(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_134(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_137(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xD278 / 53880
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_134(&(Param0[iVar02]), 4);
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

void Function_138(int iParam0, int iParam1) //Position: 0xD347 / 54087
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

void Function_139(int iParam0, int iParam1) //Position: 0xD391 / 54161
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0xD3AB / 54187
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_141(int iParam0, bool bParam1) //Position: 0xD3BC / 54204
{
	int iVar0;
	
	iVar0 = Function_142(iParam0);
	if (!Function_92(iVar0))
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

var Function_142(int iParam0) //Position: 0xD3FA / 54266
{
	if (!Function_143(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_143(int iParam0) //Position: 0xD414 / 54292
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_144() //Position: 0xD42A / 54314
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
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	
	Function_138(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	*(&iLocal_4 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "henv_armtut", 4,203895E-45f, Vector(-987,86f, 91,72f, 2467,045f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 6.0f, 10.0f));
	*(&iLocal_4 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "v_nightwatchVol", 2,802597E-45f, Vector(-855,4252f, 105,4849f, 2407,332f), Vector(-0,6372142f, 25,17678f, -0,4130902f), Vector(240,3393f, 39,50343f, 169,9922f));
	*(&iLocal_4 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "v_nwCorral", 2,802597E-45f, Vector(-890,1721f, 92,15579f, 2460,382f), Vector(-176,4225f, 80,71785f, -176,6112f), Vector(25,40286f, 6,503892f, 31,75247f));
	*(&iLocal_4 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "v_nwSheriff", 2,802597E-45f, Vector(-823,2598f, 94,66096f, 2431,649f), Vector(-182,208f, 105,1435f, -182,2734f), Vector(11,34968f, 4,029452f, 10,92662f));
	*(&iLocal_4 + 40) = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", &iLocal_4, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwplayerpos", Vector(-821,1275f, 93,36469f, 2420.0f), Vector(0.0f, 112,4327f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 40);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwproctor", Vector(-822,1721f, 93,36469f, 2420,419f), Vector(0.0f, 293,2047f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 40);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwforeman", Vector(-824,4701f, 93,36469f, 2419,825f), Vector(0.0f, 79,6981f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 40);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwdogpos", Vector(-821,6245f, 93,36469f, 2419,558f), Vector(0.0f, 119,5842f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 40);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsepos", Vector(-814,809f, 93,39845f, 2432f), Vector(0.0f, 75,09982f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 40);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwintrodog", Vector(-828,4f, 93,28396f, 2418,834f), Vector(0.0f, 293,2047f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 40);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcameraForemanPos", Vector(-824,0341f, 93,80911f, 2428,167f), Vector(0.0f, -14,73302f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 40);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwplayerEndPos", Vector(-825,6826f, 93,36469f, 2419,477f), Vector(0.0f, -105,1622f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 40);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwgateway", Vector(-824,8149f, 93,36469f, 2419,216f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 40);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfleecow", Vector(-892,0001f, 90,35291f, 2459,941f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 40);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_nwfight", Vector(-780,8884f, 93,36469f, 2375,46f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 40);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight1", Vector(-848,2634f, 92,36078f, 2349,09f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_4 + 40);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight2", Vector(-860,8632f, 91,35687f, 2368f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_4 + 40);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight3", Vector(-888,0001f, 91,35687f, 2403,452f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_4 + 40);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight4", Vector(-940,4428f, 90,35291f, 2447,688f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4 + 40);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight5", Vector(-811,6155f, 91,73328f, 2459,615f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_4 + 40);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight6", Vector(-948,0001f, 91,35687f, 2391,013f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_4 + 40);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwfight7", Vector(-817,6152f, 92,48973f, 2379,044f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_4 + 40);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcow", Vector(-872,0001f, 90,35291f, 2435,944f), Vector(0.0f, -10,34259f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_4 + 40);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcow1", Vector(-892,0001f, 90,29952f, 2490,418f), Vector(0.0f, -135,4877f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_4 + 40);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcow2", Vector(-928,0001f, 90,35291f, 2446,504f), Vector(0.0f, -10,34259f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_4 + 40);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcow3", Vector(-896,1941f, 90,1239f, 2428,709f), Vector(0.0f, -10,34259f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_4 + 40);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwbreak_in", Vector(-822,2877f, 92,36078f, 2358,159f), Vector(0.0f, -106,0668f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_4 + 40);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwbreak_in1", Vector(-804,8705f, 92,41194f, 2383,487f), Vector(0.0f, 143,5059f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_4 + 40);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwbreak_in2", Vector(-955,8407f, 90,80297f, 2430,606f), Vector(0.0f, 290,4257f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_4 + 40);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft", Vector(-916,027f, 90,33736f, 2495,536f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_4 + 40);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft1", Vector(-887,4436f, 91,35687f, 2344f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_4 + 40);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft2", Vector(-871,1543f, 91,35687f, 2399,154f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_4 + 40);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft3", Vector(-795,983f, 92,23273f, 2422,755f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_4 + 40);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft4", Vector(-890,1666f, 91,35687f, 2389,643f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_4 + 40);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft5", Vector(-800,0001f, 93,3901f, 2342,688f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_4 + 40);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwhorsetheft6", Vector(-757,7525f, 92,36078f, 2404f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_4 + 40);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcoyotePos", Vector(-882,8876f, 90,35291f, 2436.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_4 + 40);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcoyotePos1", Vector(-882,4459f, 90,35291f, 2436.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_4 + 40);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcoyotePos2", Vector(-884,0001f, 90,35291f, 2437,048f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_4 + 40);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_nwcoyotePos3", Vector(-881,3917f, 90,35291f, 2436.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_4 + 40);
	*(&iLocal_4 + 48) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_PlayerHorse", Vector(-841,3272f, 92,4248f, 2376,841f), Vector(0.0f, 20,95689f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 56) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_nwproctor");
	*(&iLocal_4 + 64) = CREATE_CAMERA_IN_LAYOUT(&iLocal_4, "chickenCam", 0);
	SET_CAMERA_POSITION(StackVal, &iLocal_4 + 64, Vector(-887,0185f, 92,5388f, 2422,952f));
	SET_CAMERA_ORIENTATION(StackVal, &iLocal_4 + 64, Vector(-0,06479035f, -160,0258f, -0,2508703f), 0);
	return 1;
}

void Function_145(char* cParam0) //Position: 0xDE9C / 56988
{
	if (!Function_106(128))
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

