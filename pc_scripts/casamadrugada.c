//Decompiled with MagicRDR v1.0
//Function Count : 115
//Statics Count : 679
//Natives Count : 153
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
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 54;
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
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 14;
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
	int iLocal_676 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_362 = 0;
	ALLOW_TUMBLEWEEDS(0);
	Function_114("Initializing CasaMadrugada", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_363 = 1000;
		switch (iLocal_362)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_362 = 1;
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000001:
				if (Function_113())
				{
					Global_98961 = 0;
					iLocal_362 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000002:
				if (Function_104())
				{
					Function_103(&(Global_43791[iScriptParam_0]), 32);
					iLocal_362 = 3;
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000003:
				uLocal_364 = LAUNCH_NEW_SCRIPT_WITH_ARGS("CasaMadrugadaVol", &iScriptParam_0, 2, 0);
				Function_102(&Global_12284, &Global_14676, iScriptParam_0);
				iLocal_362 = 5;
				iLocal_363 = 0;
				break;
			
			case 0x00000005:
				if (Function_101(&Global_12284, &Global_14676, iScriptParam_0))
				{
					iLocal_362 = 4;
					iLocal_363 = 0;
				}
				else
				{
					iLocal_363 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_100(&(Global_43791[iScriptParam_0]), 16) && Function_99(Global_44085[iScriptParam_09]))
				{
					iLocal_362 = 6;
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000006:
				if (!Function_100(&(Global_43791[iScriptParam_0]), 256) && Function_98(2))
				{
					Function_97(StackVal, 0, &uLocal_366, Vector(-786,8682f, 13,17285f, 3694,873f));
					Function_96(StackVal, 0, &uLocal_366, Vector(-794,588f, 13,184f, 3694,352f));
					Function_95(StackVal, 0, &uLocal_366, Vector(-794,588f, 13,184f, 3694,352f));
					Function_94(StackVal, 0, &uLocal_366, Vector(-794,588f, 13,184f, 3694,352f));
					Function_93(StackVal, 0, &uLocal_366, Vector(-794,588f, 13,184f, 3694,352f));
					Function_92(StackVal, 0, &uLocal_366, Vector(-794,588f, 13,184f, 3694,352f));
					Function_91(0, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 1, &uLocal_366, Vector(-768,35f, 14,055f, 3749,934f));
					Function_96(StackVal, 1, &uLocal_366, Vector(-826,342f, 13,051f, 3747,089f));
					Function_95(StackVal, 1, &uLocal_366, Vector(-826,342f, 13,051f, 3747,089f));
					Function_94(StackVal, 1, &uLocal_366, Vector(-826,342f, 13,051f, 3747,089f));
					Function_93(StackVal, 1, &uLocal_366, Vector(-797,062f, 13,171f, 3694,872f));
					Function_92(StackVal, 1, &uLocal_366, Vector(-788,5248f, 13,20358f, 3693,256f));
					Function_91(1, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 2, &uLocal_366, Vector(-808,064f, 13,051f, 3776,004f));
					Function_96(StackVal, 2, &uLocal_366, Vector(-808,064f, 13,051f, 3776,004f));
					Function_95(StackVal, 2, &uLocal_366, Vector(-808,064f, 13,051f, 3776,004f));
					Function_94(StackVal, 2, &uLocal_366, Vector(-808,064f, 13,051f, 3776,004f));
					Function_93(StackVal, 2, &uLocal_366, Vector(-795,678f, 13,213f, 3696,258f));
					Function_92(StackVal, 2, &uLocal_366, Vector(-791,942f, 13,163f, 3689,718f));
					Function_91(2, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 10, &uLocal_366, Vector(-792,003f, 13,165f, 3702,806f));
					Function_96(StackVal, 10, &uLocal_366, Vector(-806,9908f, 13,19484f, 3693,934f));
					Function_95(StackVal, 10, &uLocal_366, Vector(-806,9908f, 13,19484f, 3693,934f));
					Function_94(StackVal, 10, &uLocal_366, Vector(-799,117f, 13,214f, 3704,794f));
					Function_93(StackVal, 10, &uLocal_366, Vector(-807,515f, 13,165f, 3696,357f));
					Function_92(StackVal, 10, &uLocal_366, Vector(-812,164f, 16,702f, 3712,19f));
					Function_91(10, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 3, &uLocal_366, Vector(-815,222f, 16,645f, 3699,205f));
					Function_96(StackVal, 3, &uLocal_366, Vector(-815,222f, 16,645f, 3699,205f));
					Function_95(StackVal, 3, &uLocal_366, Vector(-800,343f, 13,195f, 3695,726f));
					Function_94(StackVal, 3, &uLocal_366, Vector(-799,117f, 13,214f, 3704,794f));
					Function_93(StackVal, 3, &uLocal_366, Vector(-807,47f, 13,168f, 3694,621f));
					Function_92(StackVal, 3, &uLocal_366, Vector(-820,203f, 16,769f, 3709,885f));
					Function_91(3, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 4, &uLocal_366, Vector(-809,411f, 16,665f, 3705,222f));
					Function_96(StackVal, 4, &uLocal_366, Vector(-809,4114f, 16,66483f, 3705,222f));
					Function_95(StackVal, 4, &uLocal_366, Vector(-814,024f, 16,665f, 3713,905f));
					Function_94(StackVal, 4, &uLocal_366, Vector(-792,906f, 13,188f, 3697,834f));
					Function_93(StackVal, 4, &uLocal_366, Vector(-809,411f, 16,665f, 3705,222f));
					Function_92(StackVal, 4, &uLocal_366, Vector(-809,411f, 16,665f, 3705,222f));
					Function_91(4, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 5, &uLocal_366, Vector(-811,452f, 16,669f, 3693,501f));
					Function_96(StackVal, 5, &uLocal_366, Vector(-811,452f, 16,669f, 3693,501f));
					Function_95(StackVal, 5, &uLocal_366, Vector(-796,148f, 13,196f, 3695,799f));
					Function_94(StackVal, 5, &uLocal_366, Vector(-819,808f, 13,209f, 3738,526f));
					Function_93(StackVal, 5, &uLocal_366, Vector(-811,452f, 16,669f, 3693,501f));
					Function_92(StackVal, 5, &uLocal_366, Vector(-800,343f, 13,195f, 3695,726f));
					Function_91(5, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 6, &uLocal_366, Vector(-812,064f, 13,133f, 3697,763f));
					Function_96(StackVal, 6, &uLocal_366, Vector(-812,064f, 13,133f, 3697,763f));
					Function_95(StackVal, 6, &uLocal_366, Vector(-812,064f, 13,133f, 3697,763f));
					Function_94(StackVal, 6, &uLocal_366, Vector(-796,315f, 13,17f, 3689,777f));
					Function_93(StackVal, 6, &uLocal_366, Vector(-807,5838f, 13,16464f, 3704,585f));
					Function_92(StackVal, 6, &uLocal_366, Vector(-812,064f, 13,133f, 3697,763f));
					Function_91(6, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 7, &uLocal_366, Vector(-815,453f, 13,148f, 3702,745f));
					Function_96(StackVal, 7, &uLocal_366, Vector(-815,453f, 13,148f, 3702,745f));
					Function_95(StackVal, 7, &uLocal_366, Vector(-815,453f, 13,148f, 3702,745f));
					Function_94(StackVal, 7, &uLocal_366, Vector(-828,671f, 13,165f, 3712,736f));
					Function_93(StackVal, 7, &uLocal_366, Vector(-815,453f, 13,148f, 3702,745f));
					Function_92(StackVal, 7, &uLocal_366, Vector(-815,453f, 13,148f, 3702,745f));
					Function_91(7, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 8, &uLocal_366, Vector(-818,5184f, 13,20006f, 3709,336f));
					Function_96(StackVal, 8, &uLocal_366, Vector(-818,5184f, 13,20006f, 3709,336f));
					Function_95(StackVal, 8, &uLocal_366, Vector(-792,11f, 13,163f, 3709,14f));
					Function_94(StackVal, 8, &uLocal_366, Vector(-780,1166f, 13,03314f, 3696,272f));
					Function_93(StackVal, 8, &uLocal_366, Vector(-819,09f, 13,165f, 3715,537f));
					Function_92(StackVal, 8, &uLocal_366, Vector(-818,5184f, 13,20006f, 3709,336f));
					Function_91(8, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 9, &uLocal_366, Vector(-805,415f, 16,665f, 3697,317f));
					Function_96(StackVal, 9, &uLocal_366, Vector(-805,415f, 16,665f, 3697,317f));
					Function_95(StackVal, 9, &uLocal_366, Vector(-801,96f, 16,73f, 3701,59f));
					Function_94(StackVal, 9, &uLocal_366, Vector(-797,0615f, 13,03292f, 3727,115f));
					Function_93(StackVal, 9, &uLocal_366, Vector(-801,96f, 16,73f, 3701,59f));
					Function_92(StackVal, 9, &uLocal_366, Vector(-811,293f, 16,685f, 3711,247f));
					Function_91(9, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 11, &uLocal_366, Vector(-820,015f, 13,165f, 3715,255f));
					Function_96(StackVal, 11, &uLocal_366, Vector(-792,7556f, 13,05098f, 3730,498f));
					Function_95(StackVal, 11, &uLocal_366, Vector(-791,768f, 13,169f, 3685,52f));
					Function_94(StackVal, 11, &uLocal_366, Vector(-789,3539f, 13,16464f, 3706,811f));
					Function_93(StackVal, 11, &uLocal_366, Vector(-792,7556f, 13,05098f, 3730,498f));
					Function_92(StackVal, 11, &uLocal_366, Vector(-823,643f, 16,665f, 3709,448f));
					Function_91(11, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 12, &uLocal_366, Vector(-806,6476f, 16,66514f, 3688,365f));
					Function_96(StackVal, 12, &uLocal_366, Vector(-793,916f, 13,178f, 3688,014f));
					Function_95(StackVal, 12, &uLocal_366, Vector(-815,9912f, 13,2092f, 3735,653f));
					Function_94(StackVal, 12, &uLocal_366, Vector(-792,7556f, 13,05098f, 3730,498f));
					Function_93(StackVal, 12, &uLocal_366, Vector(-820,446f, 13,211f, 3721,602f));
					Function_92(StackVal, 12, &uLocal_366, Vector(-784,958f, 13,252f, 3697,156f));
					Function_91(12, &uLocal_366, &iLocal_14);
					Function_97(StackVal, 13, &uLocal_366, Vector(-791,7902f, 13,16862f, 3685,779f));
					Function_96(StackVal, 13, &uLocal_366, Vector(-820,015f, 13,165f, 3715,255f));
					Function_95(StackVal, 13, &uLocal_366, Vector(-792,218f, 13,136f, 3714,992f));
					Function_94(StackVal, 13, &uLocal_366, Vector(-808,1292f, 16,66519f, 3689,384f));
					Function_93(StackVal, 13, &uLocal_366, Vector(-823,643f, 16,665f, 3709,448f));
					Function_92(StackVal, 13, &uLocal_366, Vector(-753,161f, 13,091f, 3741,224f));
					Function_91(13, &uLocal_366, &iLocal_14);
					iLocal_676 = 0;
				}
				else
				{
					iLocal_676 = 1;
				}
				Function_87(&Global_12284, &Global_14676, &uLocal_366, &Global_10996, iScriptParam_0);
				if (Function_100(&(Global_43791[iScriptParam_0]), 256) || !Function_98(2))
				{
					iLocal_676 = 1;
				}
				Function_86(1);
				Function_79(7, &iLocal_14 + 1032, &iLocal_14 + 904, &iLocal_14 + 936, Function_85(iScriptParam_0, "casaMadrugada", "whorehouse01", 7), Function_85(iScriptParam_0, "casaMadrugada", "whorehouse01", 8), &iLocal_4 + 32);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "casv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "casv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "casv_players_room"));
				}
				else
				{
					LOG_ERROR("CAS: Cannot find casv_players_room to restrict players room");
				}
				Function_78(&iLocal_14 + 1080, GET_OBJECT_FROM_PERS_CHAR(&Global_14676[03] + 16));
				Function_78(&iLocal_14 + 976, GET_OBJECT_FROM_PERS_CHAR(&Global_14676[13] + 16));
				Function_78(&iLocal_14 + 984, GET_OBJECT_FROM_PERS_CHAR(&Global_14676[103] + 16));
				Function_78(&iLocal_14 + 992, GET_OBJECT_FROM_PERS_CHAR(&Global_14676[113] + 16));
				Function_78(&iLocal_14 + 1040, GET_OBJECT_FROM_PERS_CHAR(&Global_14676[123] + 16));
				Function_78(&iLocal_14 + 1048, GET_OBJECT_FROM_PERS_CHAR(&Global_14676[133] + 16));
				Function_103(&(Global_43791[iScriptParam_0]), 8);
				if (Function_100(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_77(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_362 = 10;
				}
				else
				{
					iLocal_362 = 7;
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000007:
				if (Function_76())
				{
					Function_62(StackVal, &Global_98318, 7, Global_46894[2], "$/content/Mexico/Mini_Games/LiarsDice_CAS/LiarsDice_CAS", 4294967295, 0, "CasLiarsDiceHC", 426, Vector(-789,579f, 13,165f, 3699,865f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "casv_liarsdice"));
					Function_61(&Global_98318, 7, 10);
				}
				else
				{
					Function_62(StackVal, &Global_98318, 7, Global_46894[2], "$/content/Mexico/Mini_Games/LiarsDice_CAS/LiarsDice_CAS", 4294967295, 0, "CasLiarsDice", 426, Vector(-789,579f, 13,165f, 3699,865f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "casv_liarsdice"));
					Function_61(&Global_98318, 7, 20);
				}
				if (Function_76())
				{
					Function_62(StackVal, &Global_98318, 0, Global_46894[2], "$/content/Mexico/Mini_Games/Poker_CAS/Poker_CAS", 4294967295, 0, "CasPokerHC", 433, Vector(-795,247f, 13,165f, 3699,644f), 2,5f, 0, 0);
					Function_61(&Global_98318, 0, 25);
				}
				else
				{
					Function_62(StackVal, &Global_98318, 0, Global_46894[2], "$/content/Mexico/Mini_Games/Poker_CAS/Poker_CAS", 4294967295, 0, "CasPoker", 433, Vector(-795,247f, 13,165f, 3699,644f), 2,5f, 0, 0);
					Function_61(&Global_98318, 0, 50);
				}
				switch (Global_46720)
				{
					case 0x00000000:
						Function_60(iScriptParam_0);
						break;
					
					case 0x00000001:
						Function_60(iScriptParam_0);
						break;
					
					case 0x00000002:
						Function_60(iScriptParam_0);
						break;
					
					case 0x00000003:
						break;
				}
				Function_59(iScriptParam_0);
				Function_57(iScriptParam_0);
				Function_56(iScriptParam_0);
				Function_55(iScriptParam_0);
				Function_52(iScriptParam_0);
				Function_51(iScriptParam_0);
				Function_47(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 65.0f, 8, 70, 0);
				Function_46(&Global_27462[952] + 188, 2, 5.0f, 1, 4294967295);
				Function_47(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 65.0f, 8, 70, 0);
				Function_46(&Global_27462[852] + 188, 2, 5.0f, 1, 4294967295);
				Function_47(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 65.0f, 8, 70, 0);
				Function_46(&Global_27462[1052] + 188, 2, 5.0f, 1, 4294967295);
				iLocal_362 = 8;
				iLocal_363 = 0;
				break;
			
			case 0x00000008:
				Function_45(64);
				if (Function_40(iScriptParam_0, &Global_12284, iLocal_676))
				{
					Function_36(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					switch (Global_46720)
					{
						case 0x00000000:
							Function_36(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000001:
							Function_36(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_36(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_36(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						}
				}
				Function_32(2, 4294967295, 4294967295, 0, 3);
				Function_29(&iLocal_4);
				Function_103(&(Global_43791[iScriptParam_0]), 512);
				iLocal_362 = 9;
				iLocal_363 = 0;
				break;
			
			case 0x00000009:
				Function_27(&iLocal_4, iScriptParam_0);
				Function_103(&(Global_43791[iScriptParam_0]), 4);
				Function_26("Finished Initializing CasaMadrugada", 5.0f);
				iLocal_362 = 10;
				iLocal_363 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_25(Global_98961, 1))
				{
					if (Function_23(&(Global_46894[2]), 0))
					{
						Function_22(&Global_98961, 1);
					}
				}
				if (!Function_25(Global_98961, 4))
				{
					if (Function_20(&(Global_46894[2])))
					{
						Function_22(&Global_98961, 4);
					}
				}
				if (Function_100(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_362 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_363);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	Function_11(&Global_12284, &Global_14676, iScriptParam_0, (iLocal_676 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_86(0);
	Function_77(&(Global_43791[iScriptParam_0]), 32);
	Function_77(&(Global_43791[iScriptParam_0]), 64);
	Function_77(&(Global_43791[iScriptParam_0]), 8);
	Function_77(&(Global_43791[iScriptParam_0]), 512);
	Function_77(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_364))
	{
		TERMINATE_SCRIPT(&uLocal_364);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_26("Unloaded CasaMadrugada", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x129D / 4765
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

void Function_2(int iParam0) //Position: 0x12D3 / 4819
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x12F5 / 4853
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x130B / 4875
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x1321 / 4897
{
	Function_6(&iLocal_14 + 8);
	RELEASE_LAYOUT_REF(&iLocal_14);
	return;
}

void Function_6(int iParam0) //Position: 0x1334 / 4916
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x135C / 4956
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

void Function_8(struct<13> Param0) //Position: 0x14A7 / 5287
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x14C4 / 5316
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x14E2 / 5346
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x14EE / 5358
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
	if (Function_100(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_77(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_100(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_98(2) || Function_100(&(Global_43791[bParam2]), 256))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_103(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x170C / 5900
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
		if (!Function_17(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1872 / 6258
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

int Function_14(int iParam0) //Position: 0x189D / 6301
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

void Function_15(var uParam0, int iParam1) //Position: 0x18D1 / 6353
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x18E2 / 6370
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x18FC / 6396
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x1919 / 6425
{
	if (Function_25(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x1934 / 6452
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

bool Function_20(int iParam0) //Position: 0x1DE2 / 7650
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (iParam0 == Global_46850[0])
		{
			Function_21(iParam0, iVar1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_21(iParam0, iVar1), 1.0f, "p_gen_chair06x", 1);
		}
		else
		{
			Function_21(iParam0, iVar1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_21(iParam0, iVar1), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(&uVar0))
		{
			SET_PROP_FIXED(&uVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make liars dice chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

struct<8> Function_21(int iParam0, int iParam1) //Position: 0x1EAB / 7851
{
	if (iParam0 == Global_46850[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-4288,696f, 26,72937f, 4381,383f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-4289,277f, 26,72937f, 4381,477f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-4289,651f, 26,72937f, 4381,039f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-4289,435f, 26,72937f, 4380,51f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-4288,878f, 26,72937f, 4380,39f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-4288,485f, 26,72937f, 4380,807f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(167,5964f, 73,74156f, 2222,775f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(167,958f, 73,74529f, 2222,327f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(168,5496f, 73,74591f, 2222,387f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(168,7889f, 73,74529f, 2222,935f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(168,4313f, 73,74976f, 2223,425f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(167,8298f, 73,74976f, 2223,35f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-788,6586f, 13,16462f, 3698,422f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-788,4316f, 13,16762f, 3698,957f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-788,7964f, 13,165f, 3699,425f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-789,389f, 13,165f, 3699,35f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-789,6095f, 13,165f, 3698,805f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-789,2333f, 13,165f, 3698,335f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(856,9058f, 77,51558f, 1278,093f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(856,6888f, 77,51558f, 1277,556f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(857,0518f, 77,51558f, 1277,099f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(857,629f, 77,51558f, 1277,148f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(857,8614f, 77,51558f, 1277,699f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(857,4864f, 77,51558f, 1278,173f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_22(var uParam0, int iParam1) //Position: 0x2198 / 8600
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_23(int iParam0, bool bParam1) //Position: 0x21A9 / 8617
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_24(iParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(iParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_24(iParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(iParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
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

struct<8> Function_24(int iParam0, int iParam1, bool bParam2) //Position: 0x227E / 8830
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

bool Function_25(var uParam0, int iParam1) //Position: 0x282A / 10282
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(char* cParam0) //Position: 0x2837 / 10295
{
	if (!Function_98(128))
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

void Function_27(int iParam0, bool bParam1) //Position: 0x2877 / 10359
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
		Function_28(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x2967 / 10599
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_29(int iParam0) //Position: 0x2974 / 10612
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_31(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_30(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_30(var uParam0) //Position: 0x2A70 / 10864
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_31() //Position: 0x2A8D / 10893
{
	int iVar0;
	
	return &iVar0;
}

void Function_32(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x2A96 / 10902
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
		Function_33();
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

void Function_33() //Position: 0x2B84 / 11140
{
	int iVar0;
	
	Global_41176 = Function_34(StackVal);
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

int Function_34(int iParam0) //Position: 0x2BD2 / 11218
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_35(bool bParam0) //Position: 0x2BEA / 11242
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_36(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x2BFF / 11263
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
		Function_39();
	}
	if (&bParam5)
	{
		Function_37(1048576);
	}
}

void Function_37(int iParam0) //Position: 0x2D0D / 11533
{
	Function_38(&Global_43580, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x2D1B / 11547
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x2D3A / 11578
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_37(16384);
	}
	return;
}

bool Function_40(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x2D56 / 11606
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_100(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_41(49, 0))
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

int Function_41(var uParam0, bool bParam1) //Position: 0x2E14 / 11796
{
	int iVar0;
	
	iVar0 = Function_43(uParam0);
	if (!Function_42(iVar0))
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

bool Function_42(int iParam0) //Position: 0x2E52 / 11858
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_43(int iParam0) //Position: 0x2E69 / 11881
{
	if (!Function_44(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_44(int iParam0) //Position: 0x2E83 / 11907
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_45(int iParam0) //Position: 0x2E99 / 11929
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_46(struct<85> Param0) //Position: 0x2EAC / 11948
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2ED6 / 11990
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_48(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_48(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x2F1D / 12061
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

int Function_49(int iParam0, int iParam1) //Position: 0x32DB / 13019
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_50(int iParam0) //Position: 0x32FE / 13054
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_51(int iParam0) //Position: 0x3315 / 13077
{
	Function_47(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_52(int iParam0) //Position: 0x335E / 13150
{
	if (!Function_54())
	{
		Function_47(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_46(&Global_27462[3952] + 188, 1, 4,5f, 64, 4294967295);
		Function_53(&Global_27462[3952] + 188, -4,5f, 2);
	}
	return;
}

void Function_53(int iParam0, float fParam1, int iParam2) //Position: 0x33DF / 13279
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

bool Function_54() //Position: 0x33F7 / 13303
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

void Function_55(int iParam0) //Position: 0x341E / 13342
{
	Function_47(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_46(&Global_27462[4052] + 188, 1, 4,5f, 64, 4294967295);
	Function_53(&Global_27462[4052] + 188, -4,5f, 2);
	return;
}

void Function_56(int iParam0) //Position: 0x3499 / 13465
{
	Function_47(41, 1, 25, 4294967276, 50, 1, 0, 1, 4, iParam0, "$/content/Ambient/Town/event_unforgiven", 63, 2, 65.0f, 8, 100, 0);
	return;
}

void Function_57(int iParam0) //Position: 0x34E8 / 13544
{
	Function_47(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_58(&Global_27462[3352] + 188, 2, 0);
	return;
}

void Function_58(struct<149> Param0) //Position: 0x354B / 13643
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_59(int iParam0) //Position: 0x3562 / 13666
{
	Function_47(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_58(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_60(int iParam0) //Position: 0x35C9 / 13769
{
	Function_47(27, 1, 150, 4294967271, 150, 1, 0, 0, 4, iParam0, "$/content/Ambient/MexicanRevolution/mexican_rev_rally", 63, 2, 50.0f, 2, 60, 0);
	return;
}

void Function_61(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x3626 / 13862
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_62(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x364D / 13901
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
	Param0[iParam128].f_4 = Function_71(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_70(iParam1))
	{
		Function_63(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_63(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x37B6 / 14262
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
	if (Function_69(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_68(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_67(StackVal, Param2);
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
		Function_66(uVar3);
		Var6 = Function_66(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_66(StackVal);
				Var4 = Function_66(StackVal);
				if (Function_65(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_64(iParam1), 0.0f, 2, iVar2);
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

int Function_64(int iParam0) //Position: 0x399F / 14751
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

bool Function_65(struct<2> Param0, struct<2> Param2) //Position: 0x3AD6 / 15062
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_66(int iParam0) //Position: 0x3B02 / 15106
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

var Function_67(vector3 vParam0) //Position: 0x3B59 / 15193
{
	bool bVar0;
	
	bVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
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

int Function_68(int iParam0) //Position: 0x3BA7 / 15271
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

bool Function_69(vector3 vParam0) //Position: 0x3C5F / 15455
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_70(int iParam0) //Position: 0x3C77 / 15479
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_71(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3C9A / 15514
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_75(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_72(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_72(bParam0, bParam1, bParam2, 4294967295);
}

int Function_72(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3CF8 / 15608
{
	var uVar0;
	
	if (!Function_74(bParam2))
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
	uVar0 = Function_75(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_73(uVar0);
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

var Function_73(int iParam0) //Position: 0x3E5C / 15964
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

bool Function_74(int iParam0) //Position: 0x3E9A / 16026
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_75(int iParam0, int iParam1, bool bParam2) //Position: 0x3EAF / 16047
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_76() //Position: 0x3ECF / 16079
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_77(var uParam0, int iParam1) //Position: 0x3EFA / 16122
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x3F14 / 16148
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

void Function_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x3F61 / 16225
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_84(&uParam1, &uParam2);
	if (!Function_83(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_82(&uParam4, 0);
		}
		else
		{
			Function_81(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_82(&iParam5, 0);
		}
		else
		{
			Function_81(&iParam5, 1);
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_80(&(uVar2[0]), "UseCase1"));
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
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_80(&(uVar2[1]), "UseCase1"));
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

var Function_80(var uParam0, int iParam1) //Position: 0x4332 / 17202
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_81(var uParam0, int iParam1) //Position: 0x4341 / 17217
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

void Function_82(var uParam0, int iParam1) //Position: 0x439C / 17308
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

bool Function_83(int iParam0) //Position: 0x43F4 / 17396
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_84(var uParam0, int iParam1) //Position: 0x440A / 17418
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

var Function_85(int iParam0, char* cParam1, bool bParam3) //Position: 0x4568 / 17768
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_4(iParam0))
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

void Function_86(bool bParam0) //Position: 0x460D / 17933
{
	if (bParam0)
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN", 1);
	}
	else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN");
	}
	return;
}

void Function_87(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x468A / 18058
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_98(2))
	{
		return;
	}
	if (Function_100(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_88(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_77(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_103(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_88(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x4742 / 18242
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_100(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
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
		(&iParam1 + 16) = Function_90(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_69(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_89(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_89(int iParam0, struct<2> Param1) //Position: 0x48C3 / 18627
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_69(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_69(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_69(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_69(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_69(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_69(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_90(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x4A09 / 18953
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_31(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_91(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x4B30 / 19248
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

void Function_92(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4B8F / 19343
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_93(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4BF6 / 19446
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_94(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4C5F / 19551
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_95(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4CCA / 19658
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_96(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4D30 / 19760
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_97(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4D99 / 19865
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_98(int iParam0) //Position: 0x4DFD / 19965
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_99(int iParam0) //Position: 0x4E19 / 19993
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_100(&(Global_43791[iParam0]), 4);
}

bool Function_100(var uParam0, int iParam1) //Position: 0x4E35 / 20021
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_101(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x4E52 / 20050
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
	if (Function_100(&(Global_43791[iParam2]), 0x40000000))
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

void Function_102(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x4F3B / 20283
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_100(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_103(&(Global_43791[iParam2]), 0x40000000);
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

void Function_103(var uParam0, int iParam1) //Position: 0x502B / 20523
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_104() //Position: 0x503C / 20540
{
	var uVar0;
	
	Function_112(3, 3);
	uVar0 = &uVar0;
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/prostitute_bed", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_adjuststocking_w_whore", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_link", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/chop_wood", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_110(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	if (!Function_105(&iLocal_14 + 8))
	{
		return 0;
	}
	iLocal_14 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_14))
	{
		iLocal_14 = CREATE_LAYOUT("CasaMadrugada_layout");
	}
	*(&iLocal_14 + 880) = Vector(-809,4519f, 16,66464f, 3705,648f);
	*(&iLocal_14 + 880 + 12) = Vector(0.0f, -134,5835f, 0.0f);
	*(&iLocal_14 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_save_flag_CAS", Vector(-809,4519f, 16,66464f, 3705,648f), Vector(0.0f, -134,5835f, 0.0f));
	*(&iLocal_14 + 912) = Vector(-808,0638f, 16,66464f, 3706,94f);
	*(&iLocal_14 + 912 + 12) = Vector(0.0f, 46,01444f, 0.0f);
	*(&iLocal_14 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_purchase_flag_CAS", Vector(-808,0638f, 16,66464f, 3706,94f), Vector(0.0f, 46,01444f, 0.0f));
	*(&iLocal_14 + 944) = Vector(-815,263f, 16,665f, 3704,426f);
	*(&iLocal_14 + 944 + 12) = Vector(0.0f, 46,01444f, 0.0f);
	*(&iLocal_14 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_purchase_flag_CAS1", Vector(-815,263f, 16,665f, 3704,426f), Vector(0.0f, 46,01444f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link64", "mex_flirt_stand_link", Vector(-798,9713f, 13,11084f, 3704,736f), Vector(0.0f, -347,2005f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-784,4613f, 13,05098f, 3716,99f), Vector(0.0f, 45,52002f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-808,721f, 13,05098f, 3741,778f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-806,8731f, 13,20941f, 3740,572f), Vector(0.0f, 44,50387f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_whore", "lean_rail_whore", Vector(-814,0237f, 16,66464f, 3713,905f), Vector(0.0f, -495,8834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand", "smoking_stand", Vector(-823,1275f, 16,66507f, 3705,004f), Vector(0.0f, -25,20816f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link65", "mex_flirt_stand_link", Vector(-786,0313f, 13,11425f, 3707,521f), Vector(0.0f, 89,53207f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link1", "mex_flirt_stand_link", Vector(-787,9437f, 13,16588f, 3701,774f), Vector(0.0f, 93,36678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-796,7607f, 13,11101f, 3705,602f), Vector(0.0f, -94,76331f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-790,7928f, 13,16464f, 3695,978f), Vector(0.0f, 160,2729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunkdancing_woman", "stand_drunk_rowdydrink", Vector(-800,8853f, 13,16497f, 3694,83f), Vector(0.0f, -78,11233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_whore1", "lean_rail_whore", Vector(-806,5536f, 16,66766f, 3706,323f), Vector(0.0f, -139,3453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_whore2", "lean_rail_whore", Vector(-811,3497f, 16,6664f, 3711,183f), Vector(0.0f, 221,6967f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee", "Pee", Vector(-824,7227f, 13,05098f, 3756,134f), Vector(0.0f, 190,3324f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee1", "Pee", Vector(-832,6101f, 13,05098f, 3706,155f), Vector(0.0f, 21,70144f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 976) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any", "stand_hammerground_w_any", Vector(-826,3416f, 13,05098f, 3747,089f), Vector(0.0f, -245,8698f, 0.0f)), &iLocal_14 + 976);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke4", "sit_ground_smoke", Vector(-819,0344f, 13,05098f, 3747,392f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_14 + 976);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_fence_low2", "sit_fence_low", Vector(-823,4095f, 13,05098f, 3751,541f), Vector(0.0f, 46,0511f, 0.0f)), &iLocal_14 + 976);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand70", "smoking_stand", Vector(-823,6781f, 13,05187f, 3746,589f), Vector(0.0f, 60,9567f, 0.0f)), &iLocal_14 + 976);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(-825,16f, 13,05098f, 3752,141f), Vector(0.0f, -174,4326f, 0.0f)), &iLocal_14 + 976);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke9", "sit_ground_smoke", Vector(-822,1619f, 13,09346f, 3745,919f), Vector(0.0f, -34,38533f, 0.0f)), &iLocal_14 + 976);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_table", "stand_hammer_table", Vector(-826,077f, 13,034f, 3749,3f), Vector(0.0f, -138,4202f, 0.0f)), &iLocal_14 + 976);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_fence_low", "sit_fence_low", Vector(-823,5158f, 13,04673f, 3722,416f), Vector(0.0f, -135,41f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-823,429f, 16,66464f, 3703,097f), Vector(0.0f, -167,1398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-824.0f, 13,05098f, 3742,036f), Vector(0.0f, -194,8316f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(-810,2053f, 13,04969f, 3739,601f), Vector(0.0f, -103,5132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink5", "stand_drunk_rowdydrink", Vector(-819,2557f, 16,66465f, 3708,258f), Vector(0.0f, -130,016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_throwbottle2", "stand_drunk_throwbottle", Vector(-821,2933f, 13,05883f, 3742,707f), Vector(0.0f, -214,711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand2", "smoking_stand", Vector(-821,4617f, 13,11086f, 3721,16f), Vector(0.0f, 13,85231f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand3", "smoking_stand", Vector(-814,311f, 13,53179f, 3779,522f), Vector(0.0f, 10,39614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-814,9534f, 13,53455f, 3779,946f), Vector(0.0f, 43,79168f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-811,1107f, 13,55089f, 3785,776f), Vector(0.0f, 135,4093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", Vector(-810,4875f, 13,53158f, 3786,518f), Vector(0.0f, 90,98701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand4", "smoking_stand", Vector(-800,8079f, 13,16227f, 3693,637f), Vector(0.0f, -114,9996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-820,0147f, 13,11315f, 3715,255f), Vector(0.0f, 134,3029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke3", "Rand_Idle_Sit_Ground", Vector(-842,3299f, 13,05098f, 3729,6f), Vector(0.0f, -23,15889f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand5", "smoking_stand", Vector(-843,065f, 13,05098f, 3726,925f), Vector(0.0f, 237,8243f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand6", "smoking_stand", Vector(-833,7081f, 13,05098f, 3736,207f), Vector(0.0f, -41,27139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Prostitute_bed1", "Prostitute_bed", Vector(-815,722f, 13,14799f, 3703,024f), Vector(0.0f, 46,01797f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Prostitute_bed2", "Prostitute_bed", Vector(-806,8588f, 13,16465f, 3694,253f), Vector(0.0f, 43,6377f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Prostitute_bed3", "Prostitute_bed", Vector(-805,5912f, 16,66452f, 3698,938f), Vector(0.0f, 133,1909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Prostitute_bed5", "Prostitute_bed", Vector(-822,9219f, 13,13343f, 3708,329f), Vector(0.0f, -44,97831f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Prostitute_bed6", "Prostitute_bed", Vector(-809,6495f, 16,66465f, 3691,811f), Vector(0.0f, 43,45522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_horseshoe", "stand_horseshoe", Vector(-830,7405f, 13,05098f, 3741,9f), Vector(0.0f, 134,5845f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link17", "mex_flirt_stand_link", Vector(-822,816f, 16,66464f, 3708,664f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link37", "mex_flirt_stand_link", Vector(-821,444f, 16,66465f, 3704,611f), Vector(0.0f, -76,50036f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link38", "mex_flirt_stand_link", Vector(-797,0615f, 13,03292f, 3727,115f), Vector(0.0f, -11,92086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link4", "mex_flirt_stand_link", Vector(-791,2941f, 13,05098f, 3722,177f), Vector(0.0f, 9,820838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand8", "smoking_stand", Vector(-816,5524f, 13,11046f, 3713,981f), Vector(0.0f, -99,30985f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l", "mex_sleepBed_l", Vector(-807,4429f, 16,66452f, 3700,414f), Vector(0.0f, -42,53862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r", "mex_sleepBed_r", Vector(-784,2705f, 13,16464f, 3692,981f), Vector(0.0f, -44,23887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l1", "mex_sleepBed_l", Vector(-787,2595f, 13,11535f, 3694,804f), Vector(0.0f, 45,74263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l2", "mex_sleepBed_l", Vector(-788,7697f, 13,13287f, 3693,003f), Vector(0.0f, 44,07854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r1", "mex_sleepBed_r", Vector(-791,2982f, 13,12779f, 3690,627f), Vector(0.0f, -138,0761f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l3", "mex_sleepBed_l", Vector(-792,016f, 13,1087f, 3689,794f), Vector(0.0f, 45,98722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l4", "mex_sleepBed_l", Vector(-794,0886f, 13,11087f, 3687,985f), Vector(0.0f, 39,92428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l5", "mex_sleepBed_l", Vector(-791,7665f, 13,12753f, 3685,529f), Vector(0.0f, -47,74477f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_kneelvomit_n_any", "stand_kneelvomit_n_any", Vector(-837,8294f, 13,05098f, 3730,975f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_kneelvomit_n_any1", "stand_kneelvomit_n_any", Vector(-781,7925f, 13,05098f, 3704.0f), Vector(0.0f, -27,01057f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_kneelvomit_n_any2", "stand_kneelvomit_n_any", Vector(-778,5369f, 13,05474f, 3705,266f), Vector(0.0f, -172,4109f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink9", "stand_drunk_rowdydrink", Vector(-783,4716f, 13,10076f, 3703,881f), Vector(0.0f, 96,98547f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink10", "stand_drunk_rowdydrink", Vector(-780.0f, 13,05098f, 3702,158f), Vector(0.0f, -151,4423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_throwbottle4", "stand_drunk_throwbottle", Vector(-777,0222f, 13,03702f, 3700.0f), Vector(0.0f, 160,8476f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link5", "mex_flirt_stand_link", Vector(-819,1003f, 16,66465f, 3705,893f), Vector(0.0f, 177,3645f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link7", "mex_flirt_stand_link", Vector(-804,2177f, 16,66464f, 3700,746f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link8", "mex_flirt_stand_link", Vector(-805,5372f, 13,15068f, 3695,135f), Vector(0.0f, 137,3307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link9", "mex_flirt_stand_link", Vector(-814,892f, 13,16465f, 3700,126f), Vector(0.0f, -110,7206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 984) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-799,6317f, 13,10965f, 3701,837f), Vector(0.0f, 76,55304f, 0.0f)), &iLocal_14 + 984);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-795,1436f, 13,11595f, 3708,656f), Vector(0.0f, 160,5508f, 0.0f)), &iLocal_14 + 984);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink11", "stand_drunk_rowdydrink", Vector(-828.0f, 13,04855f, 3717,348f), Vector(0.0f, -28,50132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", Vector(-813,0558f, 16,66441f, 3700,454f), Vector(0.0f, -132,811f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_whore4", "lean_rail_whore", Vector(-814,5765f, 16,66464f, 3714,418f), Vector(0.0f, -496,3514f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_kneelvomit_n_any3", "stand_kneelvomit_n_any", Vector(-811,5275f, 13,12227f, 3730,629f), Vector(0.0f, -155,2017f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link26", "mex_flirt_stand_link", Vector(-838,4948f, 13,05098f, 3725,93f), Vector(0.0f, -87,14256f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke7", "Rand_Idle_Sit_Ground", Vector(-795,7993f, 13,09998f, 3704,404f), Vector(0.0f, 134,5416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link31", "mex_flirt_stand_link", Vector(-793,5636f, 13,11487f, 3709,492f), Vector(0.0f, 180,1981f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l8", "mex_sleepBed_l", Vector(-815,2219f, 16,64507f, 3699,205f), Vector(0.0f, -224,1283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand11", "smoking_stand", Vector(-820,755f, 13,05098f, 3750,443f), Vector(0.0f, -18,271f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link32", "mex_flirt_stand_link", Vector(-810,8887f, 13,10962f, 3711,107f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link10", "mex_flirt_stand_link", Vector(-807,5838f, 13,11155f, 3704,585f), Vector(0.0f, -145,0233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link33", "mex_flirt_stand_link", Vector(-805,8397f, 16,66477f, 3705,466f), Vector(0.0f, -39,54983f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_l10", "mex_sleepBed_l", Vector(-813,5138f, 13,12426f, 3699,623f), Vector(0.0f, -46,43394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand12", "smoking_stand", Vector(-817,1055f, 13,0988f, 3735,664f), Vector(0.0f, -1,415389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke8", "Rand_Idle_Sit_Ground", Vector(-818,4448f, 13,13828f, 3736,836f), Vector(0.0f, 58,31172f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(-815,3773f, 13,11621f, 3737,073f), Vector(0.0f, -85,25128f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link34", "mex_flirt_stand_link", Vector(-812,9553f, 13,05252f, 3737,205f), Vector(0.0f, -45,49263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link49", "mex_flirt_stand_link", Vector(-817,2917f, 13,11268f, 3739,624f), Vector(0.0f, -261,183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-819,0333f, 13,09615f, 3735,386f), Vector(0.0f, -125,4483f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-818,8584f, 13,08984f, 3737,59f), Vector(0.0f, 9,913409f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink12", "stand_drunk_rowdydrink", Vector(-822,4501f, 13,05098f, 3736.0f), Vector(0.0f, -99,8985f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink13", "stand_drunk_rowdydrink", Vector(-802,222f, 13,1113f, 3702,417f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_horseshoe1", "stand_horseshoe", Vector(-785,7069f, 13,05098f, 3749,038f), Vector(0.0f, 41,91398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-812,8537f, 13,56627f, 3786,74f), Vector(0.0f, -31,24563f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-806,6642f, 13,60363f, 3779,412f), Vector(0.0f, -83,94334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", Vector(-798,7903f, 13,54906f, 3781,134f), Vector(0.0f, -83,40726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-821,4899f, 13,52526f, 3783,064f), Vector(0.0f, -84,72837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", Vector(-822,8912f, 13,56098f, 3784,609f), Vector(0.0f, -46,63389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", Vector(-810,0308f, 13,60363f, 3784,418f), Vector(0.0f, -45,2575f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground6", "Rand_Idle_Sit_Ground", Vector(-792,5906f, 13,56102f, 3774,996f), Vector(0.0f, 77,86096f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand14", "smoking_stand", Vector(-796,5763f, 13,53179f, 3774,891f), Vector(0.0f, -24,17122f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r2", "mex_sleepBed_r", Vector(-809,7695f, 16,66465f, 3691,628f), Vector(0.0f, 45,1656f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", Vector(-797,5237f, 13,55041f, 3776,324f), Vector(0.0f, 225,3208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 992) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand50", "rand_idle_stand", Vector(-824,691f, 13,11084f, 3718,615f), Vector(0.0f, -9,158113f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand51", "rand_idle_stand", Vector(-792,7556f, 13,05098f, 3730,498f), Vector(0.0f, -104,4572f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand_nospawn", "smoking_stand_nospawn", Vector(-791,6711f, 13,05098f, 3729,723f), Vector(0.0f, -146,2553f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-791,4022f, 13,10535f, 3731,027f), Vector(0.0f, -86,81573f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(-789,3539f, 13,11265f, 3706,811f), Vector(0.0f, -199,0093f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand55", "rand_idle_stand", Vector(-823,6431f, 16,66467f, 3709,448f), Vector(0.0f, 1,503125f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand52", "rand_idle_stand", Vector(-822,6042f, 13,11084f, 3716,352f), Vector(0.0f, 176,5468f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand53", "rand_idle_stand", Vector(-821,6242f, 13,11084f, 3716,559f), Vector(0.0f, 220,8584f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(-790,3304f, 13,11265f, 3708,368f), Vector(0.0f, -199,0093f, 0.0f)), &iLocal_14 + 992);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand54", "rand_idle_stand", Vector(-828,046f, 16,66467f, 3708,893f), Vector(0.0f, -75,33441f, 0.0f)), &iLocal_14 + 992);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_adjuststocking_w_whore4", "stand_adjuststocking_w_whore", Vector(-807,4703f, 13,16322f, 3694,621f), Vector(0.0f, 225,6231f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand16", "smoking_stand", Vector(-800,6797f, 13,11162f, 3702,854f), Vector(0.0f, 33,18119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand17", "smoking_stand", Vector(-816,9847f, 13,15602f, 3705,418f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink14", "stand_drunk_rowdydrink", Vector(-815,3252f, 13,15263f, 3705,392f), Vector(0.0f, 20,42323f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink15", "stand_drunk_rowdydrink", Vector(-810,8188f, 13,16702f, 3699,433f), Vector(0.0f, 172,9763f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink16", "stand_drunk_rowdydrink", Vector(-807,5151f, 13,15206f, 3696,357f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink17", "stand_drunk_rowdydrink", Vector(-804,8492f, 16,67485f, 3697,985f), Vector(0.0f, 150,6357f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand18", "smoking_stand", Vector(-806,4613f, 16,66452f, 3701,834f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand19", "smoking_stand", Vector(-812,4797f, 16,66452f, 3692,51f), Vector(0.0f, -93,80099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink18", "stand_drunk_rowdydrink", Vector(-813,8199f, 16,66175f, 3694,803f), Vector(0.0f, -49,55317f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink19", "stand_drunk_rowdydrink", Vector(-818,1127f, 16,65711f, 3702,102f), Vector(0.0f, -18,39827f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand20", "smoking_stand", Vector(-819,2537f, 16,66452f, 3699,858f), Vector(0.0f, -118,5145f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link58", "mex_flirt_stand_link", Vector(-817,9089f, 16,6641f, 3713,474f), Vector(0.0f, -145,6384f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link59", "mex_flirt_stand_link", Vector(-814,5538f, 16,66454f, 3711,36f), Vector(0.0f, 227,6614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link60", "mex_flirt_stand_link", Vector(-816,5477f, 16,66455f, 3709,07f), Vector(0.0f, 64,13387f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link35", "mex_flirt_stand_link", Vector(-820,2027f, 16,66891f, 3709,885f), Vector(0.0f, -101,4191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_adjuststocking_w_whore", "stand_adjuststocking_w_whore", Vector(-815,7085f, 16,66464f, 3698,896f), Vector(0.0f, 133,841f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link36", "mex_flirt_stand_link", Vector(-817,7526f, 16,67883f, 3697,71f), Vector(0.0f, -84,47811f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link61", "mex_flirt_stand_link", Vector(-817,129f, 16,66452f, 3701,307f), Vector(0.0f, -322,234f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link19", "mex_flirt_stand_link", Vector(-808,2471f, 16,66452f, 3692,147f), Vector(0.0f, -205,9111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link62", "mex_flirt_stand_link", Vector(-811,452f, 16,66947f, 3693,501f), Vector(0.0f, -316,7266f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link18", "mex_flirt_stand_link", Vector(-806,7678f, 16,6644f, 3696,066f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link11", "mex_flirt_stand_link", Vector(-814,0446f, 16,6645f, 3703,412f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1000), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground7", "Rand_Idle_Sit_Ground", Vector(-814,3098f, 16,66445f, 3701,388f), Vector(0.0f, 217,524f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link63", "mex_flirt_stand_link", Vector(-803,5862f, 16,66452f, 3697,29f), Vector(0.0f, 42,7423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_adjuststocking_w_whore8", "stand_adjuststocking_w_whore", Vector(-807,1155f, 16,66792f, 3700,721f), Vector(0.0f, 136,7812f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_drink", "lean_rail_drink", Vector(-812,1641f, 16,66525f, 3712,19f), Vector(0.0f, -137,1838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_drink1", "lean_rail_drink", Vector(-802,1868f, 16,66863f, 3702,117f), Vector(0.0f, -133,217f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link20", "mex_flirt_stand_link", Vector(-807,4917f, 13,16331f, 3698,97f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link39", "mex_flirt_stand_link", Vector(-804,5997f, 13,1246f, 3697,033f), Vector(0.0f, -185,0295f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link21", "mex_flirt_stand_link", Vector(-807,6855f, 13,20722f, 3701,54f), Vector(0.0f, 84,90507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link40", "mex_flirt_stand_link", Vector(-809,4669f, 13,16465f, 3700,721f), Vector(0.0f, 197,879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link41", "mex_flirt_stand_link", Vector(-810,2599f, 13,12648f, 3703,267f), Vector(0.0f, -140,1386f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link22", "mex_flirt_stand_link", Vector(-818,1828f, 13,16214f, 3703,815f), Vector(0.0f, -101,7282f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_adjuststocking_w_whore10", "stand_adjuststocking_w_whore", Vector(-816,0388f, 13,16465f, 3702,927f), Vector(0.0f, 224,1174f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_adjuststocking_w_whore11", "stand_adjuststocking_w_whore", Vector(-822,4019f, 13,16465f, 3708,682f), Vector(0.0f, -224,2745f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link23", "mex_flirt_stand_link", Vector(-820,5656f, 13,17282f, 3712,127f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link42", "mex_flirt_stand_link", Vector(-820,0342f, 13,13795f, 3710,692f), Vector(0.0f, -100,5733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", Vector(-817,3033f, 13,09408f, 3710,529f), Vector(0.0f, 105,1442f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link12", "mex_flirt_stand_link", Vector(-818,5184f, 13,13967f, 3709,336f), Vector(0.0f, 95,6059f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link43", "mex_flirt_stand_link", Vector(-833,6385f, 13,11084f, 3715,139f), Vector(0.0f, 140,9501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand24", "rand_idle_stand", Vector(-792,2183f, 13,05033f, 3714,992f), Vector(0.0f, 137,4352f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand22", "smoking_stand", Vector(-790,8454f, 13,09902f, 3713,307f), Vector(0.0f, -140,4913f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_drink2", "lean_rail_drink", Vector(-804,9147f, 16,6658f, 3691,386f), Vector(0.0f, -45,34135f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_rail_whore5", "lean_rail_whore", Vector(-808,231f, 16,6689f, 3688,113f), Vector(0.0f, 43,51617f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand20", "rand_idle_stand", Vector(-806,6476f, 16,66514f, 3688,365f), Vector(0.0f, -70,00545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted4", "sleeping_wall_scripted", Vector(-808,1292f, 16,66519f, 3689,384f), Vector(0.0f, -47,23259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", Vector(-806,6957f, 16,66515f, 3691,339f), Vector(0.0f, -45,20524f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand22", "rand_idle_stand", Vector(-815,9912f, 13,11098f, 3735,653f), Vector(0.0f, -41,92613f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any4", "stand_pocketwatch_e_any", Vector(-803,9536f, 13,63123f, 3787,22f), Vector(0.0f, -31,15587f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any5", "stand_pocketwatch_e_any", Vector(-803,771f, 13,59627f, 3771,971f), Vector(0.0f, 53,80722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted5", "sleeping_wall_scripted", Vector(-793,3409f, 13,53111f, 3773,42f), Vector(0.0f, 136,3716f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted6", "sleeping_wall_scripted", Vector(-814,2081f, 13,58187f, 3783,231f), Vector(0.0f, 136,2906f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any5", "stand_guntricks_e_any", Vector(-825,7863f, 16,66424f, 3705,866f), Vector(0.0f, -126,1402f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand25", "rand_idle_stand", Vector(-820,0043f, 13,05486f, 3745,558f), Vector(0.0f, -11,43797f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand26", "rand_idle_stand", Vector(-812,3839f, 13,11829f, 3708,808f), Vector(0.0f, -129,6718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-783,0179f, 13,16492f, 3694,403f), Vector(0.0f, -148,7298f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yawning_n_any1", "stand_yawning_n_any", Vector(-785,5421f, 13,1793f, 3691,75f), Vector(0.0f, 141,8488f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee2", "Pee", Vector(-784,8695f, 13,00898f, 3701,333f), Vector(0.0f, 65,35993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall10", "Rand_Idle_NearWall", Vector(-779,508f, 13,05098f, 3696,524f), Vector(0.0f, 134,915f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_tend2", "horse_tend", Vector(-836,924f, 13,05098f, 3736,569f), Vector(0.0f, -44,03599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1008), 1);
	*(&iLocal_14 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_tend3", "horse_tend", Vector(-834,2196f, 13,05098f, 3739,688f), Vector(0.0f, -45,10152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1016), 1);
	*(&iLocal_14 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "horse_tend4", "horse_tend", Vector(-789,7804f, 13,05098f, 3752,149f), Vector(0.0f, -132,2463f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1024), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r3", "mex_sleepBed_r", Vector(-821,2569f, 13,08385f, 3706,667f), Vector(0.0f, 135,7847f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve", "bar_drink_serve", Vector(-796,3875f, 13,16669f, 3695,576f), Vector(0.0f, -43,08977f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve1", "Bar_lean_stand", Vector(-795,9691f, 13,16576f, 3695,985f), Vector(0.0f, -43,08977f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "bar_drink_serve3", "bar_drink_serve", Vector(-797,2322f, 13,16574f, 3694,668f), Vector(0.0f, -46,21058f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table", "lean_table", Vector(-792,0028f, 13,16464f, 3702,806f), Vector(0.0f, -226,5094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_L", "look_out_window_L", Vector(-794,5992f, 13,16735f, 3703,027f), Vector(0.0f, 133,485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table1", "lean_table", Vector(-827,7014f, 13,034f, 3743,492f), Vector(0.0f, 134,9267f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee3", "Pee", Vector(-786,8605f, 13,36909f, 3768,203f), Vector(0.0f, -137,356f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_link", Vector(-817,2579f, 16,69228f, 3700,541f), Vector(0.0f, -46,51249f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_sleep_CAS", "player_sleep_bed_L", Vector(-809,668f, 16,66483f, 3705,151f), Vector(0.0f, -45,16735f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link2", "mex_flirt_sit_stool_link", Vector(-809,91f, 16,67154f, 3691,976f), Vector(0.0f, 46,73872f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link44", "stand_drunk_dancing_link", Vector(-800,3425f, 13,16518f, 3695,726f), Vector(0.0f, -58,22062f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link66", "mex_flirt_stand_link", Vector(-813,2617f, 16,66464f, 3695,909f), Vector(0.0f, -22,46006f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link3", "mex_flirt_sit_stool_link", Vector(-812,0645f, 13,13336f, 3697,763f), Vector(0.0f, 130,5172f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Prostitute_bed7", "Prostitute_bed", Vector(-814,1857f, 13,18901f, 3699,47f), Vector(0.0f, -47,2863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_stirringpot_w_any", "stand_stirringpot_w_any", Vector(-798,0518f, 13,17015f, 3690,425f), Vector(0.0f, 58,63639f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_chopveggies_w_any", "stand_chopveggies_w_any", Vector(-796,2065f, 13,17783f, 3690,168f), Vector(0.0f, -42,25528f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link4", "mex_flirt_sit_stool_link", Vector(-816,0577f, 13,11105f, 3703,469f), Vector(0.0f, 46,90324f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link45", "mex_flirt_stand_link", Vector(-816,3439f, 13,10492f, 3707,073f), Vector(0.0f, 48,70354f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link24", "mex_flirt_stand_link", Vector(-815,7791f, 13,14022f, 3707,844f), Vector(0.0f, -48,35913f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link5", "mex_flirt_sit_stool_link", Vector(-820,7476f, 13,1245f, 3706,879f), Vector(0.0f, 136,731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link25", "mex_flirt_stand_link", Vector(-781,0241f, 13,05098f, 3696,077f), Vector(0.0f, 177,664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_sit_stool_link6", "mex_flirt_sit_stool_link", Vector(-807,801f, 16,66452f, 3700,375f), Vector(0.0f, -44,97259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link27", "mex_flirt_stand_link", Vector(-805,4154f, 16,66452f, 3697,317f), Vector(0.0f, -115,7508f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r5", "mex_sleepBed_r", Vector(-815,8522f, 13,0617f, 3702,727f), Vector(0.0f, 49,66564f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nlean_rail", "nlean_rail", Vector(-818,0214f, 16,6704f, 3715,282f), Vector(0.0f, 137,9091f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1040) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs", "look_distance_binocs", Vector(-784,0673f, 13,02603f, 3726,56f), Vector(0.0f, -113,3598f, 0.0f)), &iLocal_14 + 1040);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand63", "rand_idle_stand", Vector(-780,2827f, 12,94526f, 3736,797f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_14 + 1040);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any6", "stand_pocketwatch_e_any", Vector(-778,8552f, 12,90862f, 3735,636f), Vector(0.0f, 43,13345f, 0.0f)), &iLocal_14 + 1040);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand80", "smoking_stand", Vector(-783,6508f, 13,00989f, 3741,02f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_14 + 1040);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand62", "rand_idle_stand", Vector(-791,2656f, 13,01066f, 3727,799f), Vector(0.0f, -134,8514f, 0.0f)), &iLocal_14 + 1040);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand61", "rand_idle_stand", Vector(-784,9583f, 13,16806f, 3697,156f), Vector(0.0f, -134,5118f, 0.0f)), &iLocal_14 + 1040);
	*(&iLocal_14 + 1048) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_guntricks_e_any45", "stand_guntricks_e_any", Vector(-745,6708f, 13,20158f, 3734,108f), Vector(0.0f, 149,8586f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", Vector(-753,1614f, 13,09131f, 3741,224f), Vector(0.0f, -119,0337f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand10", "rand_idle_stand", Vector(-751,9778f, 13,16721f, 3743,596f), Vector(0.0f, 0.0f, 0.0f)), &iLocal_14 + 1048);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_sleepBed_r6", "mex_sleepBed_r", Vector(-806,9908f, 13,04911f, 3693,934f), Vector(0.0f, 46,58624f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nchop_wood", "nchop_wood", Vector(-768,35f, 14,0549f, 3749,934f), Vector(0.0f, 118,2569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1056), 1);
	*(&iLocal_14 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand25", "smoking_stand", Vector(-768,2448f, 14,0549f, 3751f), Vector(0.0f, 186,8718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1064), 1);
	*(&iLocal_14 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_out_window_R", "look_out_window_R", Vector(-770,0327f, 14,0549f, 3751,258f), Vector(0.0f, 126,4042f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1072), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link13", "mex_flirt_stand_link", Vector(-818,208f, 13,16452f, 3715,14f), Vector(0.0f, -170,1304f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link46", "mex_flirt_stand_link", Vector(-819,2087f, 13,16452f, 3715,483f), Vector(0.0f, 187,6881f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link47", "mex_flirt_stand_link", Vector(-792,0587f, 13,10895f, 3709,46f), Vector(0.0f, -189,92f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1080) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_bartender_bar_work", "stand_bartender_bar_work", Vector(-794,5876f, 13,16519f, 3694,352f), Vector(0.0f, -225,4789f, 0.0f)), &iLocal_14 + 1080);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nuse_shelf", "nuse_shelf", Vector(-792,3839f, 13,16651f, 3694,633f), Vector(0.0f, -46,33226f, 0.0f)), &iLocal_14 + 1080);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf1", "nuse_shelf", Vector(-795,3474f, 13,17218f, 3691,662f), Vector(0.0f, -46,33226f, 0.0f)), &iLocal_14 + 1080);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "use_shelf2", "nuse_shelf", Vector(-793,8457f, 13,15827f, 3693,236f), Vector(0.0f, -46,33226f, 0.0f)), &iLocal_14 + 1080);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand2", "leaning_stand", Vector(-792,9347f, 13,16574f, 3693,883f), Vector(0.0f, -44,08652f, 0.0f)), &iLocal_14 + 1080);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand1", "leaning_stand", Vector(-794,4186f, 13,16574f, 3692,432f), Vector(0.0f, -44,08652f, 0.0f)), &iLocal_14 + 1080);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand3", "leaning_stand", Vector(-794,8012f, 13,16574f, 3697,136f), Vector(0.0f, -31,92894f, 0.0f)), &iLocal_14 + 1080);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand26", "smoking_stand", Vector(-820,2253f, 13,11086f, 3721,484f), Vector(0.0f, -104,3165f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall_nospawn", Vector(-810,2733f, 16,66441f, 3699,63f), Vector(0.0f, -315,0395f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall_nospawn", Vector(-812,8969f, 16,66441f, 3702,221f), Vector(0.0f, -315,0395f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand27", "smoking_stand", Vector(-816,0274f, 13,0988f, 3738,696f), Vector(0.0f, -140,1924f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand28", "smoking_stand", Vector(-815,4815f, 13,0988f, 3737,732f), Vector(0.0f, -97,7478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink21", "stand_drunk_rowdydrink", Vector(-801,6171f, 13,1113f, 3703,073f), Vector(0.0f, -189,3123f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink22", "stand_drunk_rowdydrink", Vector(-799,4937f, 13,1113f, 3702,687f), Vector(0.0f, -189,3123f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "knl_watertrough", "knl_watertrough", Vector(-789,2448f, 13,05097f, 3754,817f), Vector(0.0f, 42,584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1088), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any7", "stand_pocketwatch_e_any", Vector(-801,5388f, 13,54906f, 3784,01f), Vector(0.0f, -169,6598f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand29", "smoking_stand", Vector(-795,5189f, 13,53179f, 3774,072f), Vector(0.0f, 94,65035f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand30", "smoking_stand", Vector(-796,9933f, 13,59406f, 3773,508f), Vector(0.0f, -117,6008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand31", "smoking_stand", Vector(-802,7503f, 13,59406f, 3769,549f), Vector(0.0f, -83,13165f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand32", "smoking_stand", Vector(-800,014f, 13,11162f, 3700,825f), Vector(0.0f, 157,3736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "drink_player", "drink_player", Vector(-795,515f, 13,16775f, 3696,417f), Vector(0.0f, -44,32381f, 0.0f));
	*(&iLocal_14 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Locked_Footlocker", "Locked_Footlocker", Vector(-813,7915f, 16,66464f, 3708,446f), Vector(0.0f, -45,25312f, 0.0f));
	DECOR_SET_BOOL(&iLocal_14 + 1104, "PlayerHouseChest", 1);
	DECOR_SET_BOOL(&iLocal_14 + 1104, "scrap", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink23", "stand_drunk_rowdydrink", Vector(-791,8537f, 13,16515f, 3700,779f), Vector(0.0f, 10,78339f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link28", "mex_flirt_stand_link", Vector(-807,9788f, 13,10962f, 3706,566f), Vector(0.0f, -89,52911f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link29", "mex_flirt_stand_link", Vector(-798,2959f, 13,10962f, 3703,502f), Vector(0.0f, -156,804f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link30", "mex_flirt_stand_link", Vector(-794,5205f, 13,10962f, 3707,089f), Vector(0.0f, -257,0035f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink24", "stand_drunk_rowdydrink", Vector(-815,2469f, 16,66454f, 3712,958f), Vector(0.0f, 70,30784f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1112), 1);
	*(&iLocal_14 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink25", "stand_drunk_rowdydrink", Vector(-819,4444f, 16,66454f, 3712,227f), Vector(0.0f, -16,40136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1120), 1);
	*(&iLocal_14 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink26", "stand_drunk_rowdydrink", Vector(-818,886f, 16,66454f, 3713,132f), Vector(0.0f, -71,83122f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1128), 1);
	*(&iLocal_14 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink27", "stand_drunk_rowdydrink", Vector(-793,2356f, 13,11487f, 3708,18f), Vector(0.0f, 122,3791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1136), 1);
	*(&iLocal_14 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink28", "stand_drunk_rowdydrink", Vector(-796,6321f, 13,11487f, 3707,277f), Vector(0.0f, 172,5255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1144), 1);
	*(&iLocal_14 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink29", "stand_drunk_rowdydrink", Vector(-789,4683f, 13,11084f, 3712,045f), Vector(0.0f, 88,37279f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1152), 1);
	*(&iLocal_14 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink30", "stand_drunk_rowdydrink", Vector(-789,4284f, 13,11084f, 3710,641f), Vector(0.0f, 132,4895f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1160), 1);
	*(&iLocal_14 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink31", "stand_drunk_rowdydrink", Vector(-804,5413f, 13,1009f, 3704,19f), Vector(0.0f, 172,5255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1168), 1);
	*(&iLocal_14 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel", "repair_kneel", Vector(-814,3336f, 13,05097f, 3728,416f), Vector(0.0f, 44,59594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1176), 1);
	*(&iLocal_14 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel1", "repair_kneel", Vector(-822,6083f, 13,05097f, 3724,36f), Vector(0.0f, 44,59594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1184), 1);
	*(&iLocal_14 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table2", "lean_table", Vector(-809,879f, 13,05098f, 3727,07f), Vector(0.0f, -202,1715f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1192), 1);
	*(&iLocal_14 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "knl_watertrough1", "knl_watertrough", Vector(-813,5269f, 13,05098f, 3715,738f), Vector(0.0f, 223,291f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1200), 1);
	*(&iLocal_14 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "knl_watertrough2", "knl_watertrough", Vector(-807,5786f, 13,05098f, 3710,463f), Vector(0.0f, 223,291f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1208), 1);
	*(&iLocal_14 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall", "stand_hammer_wall", Vector(-805,3109f, 13,05098f, 3730,489f), Vector(0.0f, -178,7119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1216), 1);
	*(&iLocal_14 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel2", "repair_kneel", Vector(-807,0389f, 13,05097f, 3737,643f), Vector(0.0f, -134,6423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1224), 1);
	*(&iLocal_14 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_barrel", "sit_barrel", Vector(-806,5542f, 13,05098f, 3728,01f), Vector(0.0f, -178,9501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1232), 1);
	*(&iLocal_14 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table3", "lean_table", Vector(-806,0385f, 13,05098f, 3713,954f), Vector(0.0f, -285,6767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1240), 1);
	*(&iLocal_14 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted7", "sleeping_wall_scripted", Vector(-802,4534f, 13,05098f, 3722,581f), Vector(0.0f, -18,76607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1248), 1);
	*(&iLocal_14 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted8", "sleeping_wall_scripted", Vector(-800,6075f, 13,05098f, 3724,483f), Vector(0.0f, -41,03999f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1256), 1);
	*(&iLocal_14 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_wall_scripted9", "sleeping_wall_scripted", Vector(-801,3068f, 13,05098f, 3727,918f), Vector(0.0f, -50,06787f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1264), 1);
	*(&iLocal_14 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_barrel1", "sit_barrel", Vector(-788,2455f, 13,03054f, 3727,917f), Vector(0.0f, -349,7947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1272), 1);
	*(&iLocal_14 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand", "rand_idle_stand", Vector(-786,9204f, 13,03939f, 3727,962f), Vector(0.0f, -189,1086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1280), 1);
	*(&iLocal_14 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand23", "rand_idle_stand", Vector(-787,6658f, 13,05098f, 3727,19f), Vector(0.0f, -168,0072f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1288), 1);
	*(&iLocal_14 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall1", "stand_hammer_wall", Vector(-791,3873f, 13,02221f, 3733,766f), Vector(0.0f, -294,4543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1296), 1);
	*(&iLocal_14 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel3", "repair_kneel", Vector(-793,0188f, 12,93192f, 3749,936f), Vector(0.0f, -133,6652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1304), 1);
	*(&iLocal_14 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel4", "repair_kneel", Vector(-787,6237f, 13,05098f, 3758,369f), Vector(0.0f, -116,084f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1312), 1);
	*(&iLocal_14 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall2", "stand_hammer_wall", Vector(-784,1396f, 13,09419f, 3763,084f), Vector(0.0f, -497,4629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1320), 1);
	*(&iLocal_14 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall3", "stand_hammer_wall", Vector(-785,1576f, 13,06069f, 3760,949f), Vector(0.0f, -390,3687f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1328), 1);
	*(&iLocal_14 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_barrel2", "sit_barrel", Vector(-782,6583f, 13,0878f, 3760,89f), Vector(0.0f, -163,1886f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1336), 1);
	*(&iLocal_14 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall4", "stand_hammer_wall", Vector(-787,5849f, 13,05098f, 3752,306f), Vector(0.0f, -317,9287f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1344), 1);
	*(&iLocal_14 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel5", "repair_kneel", Vector(-801,5622f, 13,05098f, 3739,104f), Vector(0.0f, 45,65297f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1352), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link48", "mex_flirt_stand_link", Vector(-792,2535f, 13,16017f, 3696,859f), Vector(0.0f, -181,3318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link50", "mex_flirt_stand_link", Vector(-792,1039f, 13,16017f, 3699,494f), Vector(0.0f, 188,3305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link52", "mex_flirt_stand_link", Vector(-795,412f, 13,16017f, 3702,495f), Vector(0.0f, -417,2525f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link53", "mex_flirt_stand_link", Vector(-798,7386f, 13,16017f, 3699,046f), Vector(0.0f, -760,618f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link55", "mex_flirt_stand_link", Vector(-798,8843f, 13,16017f, 3691,635f), Vector(0.0f, -886,0712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link15", "mex_flirt_stand_link", Vector(-830,5178f, 13,11366f, 3710,126f), Vector(0.0f, -158,5605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "mex_flirt_stand_link56", "mex_flirt_stand_link", Vector(-832,5757f, 13,11084f, 3712,945f), Vector(0.0f, 193,3396f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_14 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "nbar_stand", "Bar_lean_stand", Vector(-796,8418f, 13,16574f, 3695,086f), Vector(0.0f, -46,08844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1360), 0);
	*(&iLocal_14 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "ooo", "npreaching", Vector(-788,6112f, 13,03229f, 3730,068f), Vector(0.0f, 50,8871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1368), 0);
	*(&iLocal_14 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "ppp", "npreaching", Vector(-791,2759f, 13,11084f, 3711,519f), Vector(0.0f, -21,85451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1376), 0);
	*(&iLocal_14 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "qqq", "npreaching", Vector(-825,5682f, 16,66465f, 3707,854f), Vector(0.0f, -84,08395f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1384), 0);
	return 1;
}

bool Function_105(struct<2>[] Param0) //Position: 0xC1D2 / 49618
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_109();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_108(&(Param0[iVar02]), 8);
		}
		else if (Function_107())
		{
			iVar1 = 1;
			Function_108(&(Param0[iVar02]), 8);
		}
		Function_108(&(Param0[iVar02]), 16);
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
				Function_108(&(Param0[iVar02]), 1);
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
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
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
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
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
	Function_106();
	return 1;
}

void Function_106() //Position: 0xC594 / 50580
{
	if (!Function_98(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_107() //Position: 0xC5D4 / 50644
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

void Function_108(struct<13> Param0) //Position: 0xC602 / 50690
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_109() //Position: 0xC615 / 50709
{
	if (!Function_98(128))
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

var Function_110(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xC657 / 50775
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_111(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_108(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_111(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xC695 / 50837
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_108(&(Param0[iVar02]), 4);
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

void Function_112(int iParam0, int iParam1) //Position: 0xC764 / 51044
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

bool Function_113() //Position: 0xC7AE / 51118
{
	var uVar0;
	
	Function_112(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("CasaMadrugada_layout");
	}
	*(&iLocal_4 + 8) = Vector(-805,9355f, 13,1009f, 3708,502f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, -135,8845f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-805,9355f, 13,1009f, 3708,502f), Vector(0.0f, -135,8845f, 0.0f));
	return 1;
}

void Function_114(char* cParam0) //Position: 0xC85B / 51291
{
	if (!Function_98(128))
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

