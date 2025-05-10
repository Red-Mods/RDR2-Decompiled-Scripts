//Decompiled with MagicRDR v1.0
//Function Count : 200
//Statics Count : 996
//Natives Count : 342
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
	var uLocal_11 = 2;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	struct<29> Local_25 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 1;
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
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	var uLocal_368 = 26;
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
	var uLocal_889[4] = { 0, 0, 0, 0 };
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	bool bLocal_896[4] = { false, false, false, false };
	bool bLocal_901 = false;
	var uLocal_902[3] = { 0, 0, 0 };
	bool bLocal_906 = false;
	int iLocal_907 = 0;
	bool bLocal_908 = false;
	int iLocal_909 = 0;
	vector3 vLocal_910 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_913 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_916 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_919 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_922 = { 0.0f, 0.0f, 0.0f };
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	bool bLocal_929 = false;
	bool bLocal_930 = false;
	bool bLocal_931 = false;
	int iLocal_932 = 0;
	bool bLocal_933 = false;
	bool bLocal_934 = false;
	bool bLocal_935 = false;
	bool bLocal_936 = false;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	struct<4> Local_941[13];
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
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_366 = 0;
	vLocal_910 = { -2069.74f, 19.431f, 2648.075f };
	vLocal_913 = { -2071.095f, 19.53035f, 2649.305f };
	vLocal_916 = { -2068.924f, 19.53035f, 2647.186f };
	vLocal_919 = { -2072.769f, 19.53035f, 2648.47f };
	vLocal_922 = { -2077.17f, 18.74f, 2642.87f };
	iLocal_926 = 0;
	iLocal_927 = 0;
	iLocal_928 = 0;
	iLocal_367 = 0;
	Function_199("Initializing Armadillo", 3);
	SET_DUST_LEVEL(1);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_932 = 1000;
		switch (iLocal_367)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_367 = 1;
				}
				iLocal_932 = 0;
				break;
			
			case 0x00000001:
				if (Function_198())
				{
					Global_62981 = 0;
					if (Function_197())
					{
						if (Function_195())
						{
							iLocal_367 = 2;
						}
					}
					else
					{
						iLocal_367 = 2;
					}
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
				iLocal_932 = 0;
				break;
			
			case 0x00000002:
				if (Function_186())
				{
					Function_185(&(Global_29008[iScriptParam_0]), 32);
					if (Function_184(14, 0))
					{
						Function_183(&(Global_6298[252]), 2);
					}
					else
					{
						Function_182(&(Global_6298[252]), 2);
					}
					Local_941[04] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "hhh"), FIND_OBJECT_IN_LAYOUT(Local_33, "stand_announce2"), 1, 0, 0, 0, 0, 1) };
					Local_941[14] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "hhh"), FIND_OBJECT_IN_LAYOUT(Local_33, "stand_yelling_mid"), 1, 0, 0, 0, 0, 1) };
					Local_941[24] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen1"), 1, 0, 0, 0, 0, 1) };
					Local_941[34] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen2"), 1, 0, 0, 0, 0, 1) };
					Local_941[44] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen3"), 1, 0, 0, 0, 0, 1) };
					Local_941[54] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen4"), 1, 0, 0, 0, 0, 1) };
					Local_941[64] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen5"), 1, 0, 0, 0, 0, 1) };
					Local_941[74] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen6"), 1, 0, 0, 0, 0, 1) };
					Local_941[84] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "eee"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_preach_listen7"), 1, 0, 0, 0, 0, 1) };
					Local_941[94] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "fff"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_dnd_rowdydrink1"), 1, 0, 0, 0, 0, 1) };
					Local_941[104] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "fff"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_worried"), 1, 0, 0, 0, 0, 1) };
					Local_941[114] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "fff"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_yelling"), 1, 0, 0, 0, 0, 1) };
					Local_941[124] = { StackVal, StackVal, StackVal, Function_181(FIND_OBJECT_IN_LAYOUT(Local_33, "fff"), FIND_OBJECT_IN_LAYOUT(Local_33, "arm_dnd_rowdydrink"), 1, 0, 0, 0, 0, 1) };
					iLocal_367 = 3;
				}
				iLocal_932 = 0;
				break;
			
			case 0x00000003:
				iLocal_894 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ArmadilloVol", &iScriptParam_0, 2, 0);
				Function_180(&Global_6298, &Global_7189, iScriptParam_0);
				iLocal_367 = 4;
				iLocal_932 = 0;
				break;
			
			case 0x00000004:
				if (Function_179(&Global_6298, &Global_7189, iScriptParam_0))
				{
					iLocal_367 = 5;
					iLocal_932 = 0;
				}
				else
				{
					iLocal_932 = 100;
				}
				break;
			
			case 0x00000005:
				if (Function_178(&(Global_29008[iScriptParam_0]), 16) && Function_177(Global_29155[iScriptParam_010]))
				{
					iLocal_367 = 6;
				}
				iLocal_932 = 0;
				break;
			
			case 0x00000006:
				if (Function_184(3, 0) && !Function_184(23, 0))
				{
					Function_176(6, &uLocal_368, 30.0f);
					Function_175(6, &uLocal_368, -2128.634f, 16.583f, 2618.783f);
					Function_174(6, &uLocal_368, -2128.634f, 16.583f, 2618.783f);
					Function_173(6, &uLocal_368, -2128.634f, 16.583f, 2618.783f);
					Function_172(6, &uLocal_368, -2128.634f, 16.583f, 2618.783f);
					Function_171(6, &uLocal_368, -2128.634f, 16.583f, 2618.783f);
					Function_170(6, &uLocal_368, -2128.634f, 16.583f, 2618.783f);
					Function_169(6, &uLocal_368, Local_25);
				}
				else
				{
					Function_176(6, &uLocal_368, 30.0f);
					Function_175(6, &uLocal_368, -2085.898f, 16.552f, 2613.133f);
					Function_174(6, &uLocal_368, -2086.503f, 16.962f, 2603.994f);
					Function_173(6, &uLocal_368, -2086.503f, 16.962f, 2603.994f);
					Function_172(6, &uLocal_368, -2089.548f, 16.962f, 2607.976f);
					Function_171(6, &uLocal_368, -2089.548f, 16.962f, 2607.976f);
					Function_170(6, &uLocal_368, -2085.898f, 16.552f, 2613.133f);
					Function_169(6, &uLocal_368, Local_25);
				}
				Function_176(7, &uLocal_368, 30.0f);
				Function_175(7, &uLocal_368, -2162.298f, 19.974f, 2588.137f);
				Function_174(7, &uLocal_368, -2166.685f, 16.874f, 2593.884f);
				Function_173(7, &uLocal_368, -2117.659f, 17.03f, 2601.285f);
				Function_172(7, &uLocal_368, -2164.637f, 16.899f, 2620.142f);
				Function_171(7, &uLocal_368, -2086.503f, 16.962f, 2603.994f);
				Function_170(7, &uLocal_368, -2086.503f, 16.962f, 2603.994f);
				Function_169(7, &uLocal_368, Local_25);
				Function_176(0, &uLocal_368, 40.0f);
				Function_168(0, &uLocal_368, Local_33.f_1112);
				Function_174(0, &uLocal_368, -2125.318f, 16.894f, 2595.877f);
				Function_173(0, &uLocal_368, -2125.318f, 16.894f, 2595.877f);
				Function_172(0, &uLocal_368, -2125.318f, 16.894f, 2595.877f);
				Function_171(0, &uLocal_368, -2125.318f, 16.894f, 2595.877f);
				Function_167(0, &uLocal_368, Local_33.f_1112);
				Function_169(0, &uLocal_368, Local_25);
				Function_176(1, &uLocal_368, 40.0f);
				Function_175(1, &uLocal_368, -2139.334f, 16.87215f, 2593.638f);
				Function_174(1, &uLocal_368, -2139.334f, 16.87215f, 2593.638f);
				Function_173(1, &uLocal_368, -2139.334f, 16.87215f, 2593.638f);
				Function_172(1, &uLocal_368, -2139.334f, 16.87215f, 2593.638f);
				Function_171(1, &uLocal_368, -2139.334f, 16.87215f, 2593.638f);
				Function_170(1, &uLocal_368, -2139.334f, 16.87215f, 2593.638f);
				Function_169(1, &uLocal_368, Local_25);
				Function_176(2, &uLocal_368, 40.0f);
				Function_168(2, &uLocal_368, Local_33.f_1100);
				Function_174(2, &uLocal_368, -2162.866f, 16.875f, 2594.306f);
				Function_173(2, &uLocal_368, -2162.866f, 16.875f, 2594.306f);
				Function_172(2, &uLocal_368, -2162.866f, 16.875f, 2594.306f);
				Function_171(2, &uLocal_368, -2162.866f, 16.875f, 2594.306f);
				Function_170(2, &uLocal_368, -2162.866f, 16.875f, 2594.306f);
				Function_169(2, &uLocal_368, Local_25);
				Function_176(3, &uLocal_368, 60.0f);
				Function_175(3, &uLocal_368, -2145.491f, 16.625f, 2565.731f);
				Function_174(3, &uLocal_368, -2145.491f, 16.625f, 2565.731f);
				Function_173(3, &uLocal_368, -2145.491f, 16.625f, 2565.731f);
				Function_172(3, &uLocal_368, -2145.491f, 16.625f, 2565.731f);
				Function_171(3, &uLocal_368, -2167.3f, 16.87f, 2592.21f);
				Function_167(3, &uLocal_368, Local_33.f_1188);
				Function_169(3, &uLocal_368, Local_25);
				Function_176(4, &uLocal_368, 20.0f);
				Function_175(4, &uLocal_368, -2122.468f, 16.713f, 2620.148f);
				Function_174(4, &uLocal_368, -2129.951f, 16.612f, 2629.762f);
				Function_173(4, &uLocal_368, -2129.951f, 16.612f, 2629.762f);
				Function_172(4, &uLocal_368, -2129.951f, 16.612f, 2629.762f);
				Function_171(4, &uLocal_368, -2112.286f, 17.03f, 2601.792f);
				Function_170(4, &uLocal_368, -2122.468f, 16.713f, 2620.148f);
				Function_169(4, &uLocal_368, Local_25);
				Function_176(5, &uLocal_368, 60.0f);
				Function_168(5, &uLocal_368, Local_33.f_1092);
				Function_166(5, &uLocal_368, Local_33.f_1088);
				Function_165(5, &uLocal_368, Local_33.f_1084);
				Function_164(5, &uLocal_368, Local_33.f_1280);
				Function_163(5, &uLocal_368, Local_33.f_1244);
				Function_167(5, &uLocal_368, Local_33.f_1092);
				Function_169(5, &uLocal_368, Local_25);
				Function_176(21, &uLocal_368, 60.0f);
				Function_175(21, &uLocal_368, -2156.334f, 16.458f, 2567.839f);
				Function_174(21, &uLocal_368, -2156.334f, 16.458f, 2567.839f);
				Function_173(21, &uLocal_368, -2156.334f, 16.458f, 2567.839f);
				Function_172(21, &uLocal_368, -2156.334f, 16.458f, 2567.839f);
				Function_171(21, &uLocal_368, -2162.805f, 19.97492f, 2591.801f);
				Function_170(21, &uLocal_368, -2076.937f, 19.77f, 2616.289f);
				Function_169(21, &uLocal_368, Local_25);
				Function_176(8, &uLocal_368, 30.0f);
				Function_175(8, &uLocal_368, -2162.298f, 19.974f, 2588.137f);
				Function_174(8, &uLocal_368, -2163.129f, 19.725f, 2597.887f);
				Function_173(8, &uLocal_368, -2163.304f, 19.721f, 2588.763f);
				Function_172(8, &uLocal_368, -2162.648f, 16.774f, 2591.998f);
				Function_171(8, &uLocal_368, -2162.648f, 16.774f, 2591.998f);
				Function_170(8, &uLocal_368, -2162.648f, 16.774f, 2591.998f);
				Function_169(8, &uLocal_368, Local_25);
				Function_176(9, &uLocal_368, 60.0f);
				Function_168(9, &uLocal_368, Local_33.f_1104);
				Function_174(9, &uLocal_368, -2168.7f, 16.876f, 2595.89f);
				Function_173(9, &uLocal_368, -2168.277f, 16.565f, 2607.094f);
				Function_172(9, &uLocal_368, -2168.277f, 16.565f, 2607.094f);
				Function_171(9, &uLocal_368, -2168.7f, 16.876f, 2595.89f);
				Function_167(9, &uLocal_368, Local_33.f_1104);
				Function_169(9, &uLocal_368, Local_25);
				Function_176(10, &uLocal_368, 60.0f);
				Function_168(10, &uLocal_368, Local_33.f_1108);
				Function_174(10, &uLocal_368, -2168.2f, 16.876f, 2597.99f);
				Function_173(10, &uLocal_368, -2168.0f, 16.214f, 2609.379f);
				Function_172(10, &uLocal_368, -2168.0f, 16.214f, 2609.379f);
				Function_171(10, &uLocal_368, -2168.2f, 16.876f, 2597.99f);
				Function_167(10, &uLocal_368, Local_33.f_1108);
				Function_169(10, &uLocal_368, Local_25);
				Function_176(11, &uLocal_368, 40.0f);
				Function_175(11, &uLocal_368, -2110.686f, 17.03f, 2601.707f);
				Function_174(11, &uLocal_368, -2110.686f, 17.03f, 2601.707f);
				Function_173(11, &uLocal_368, -2110.987f, 16.967f, 2588.157f);
				Function_172(11, &uLocal_368, -2110.987f, 16.967f, 2588.157f);
				Function_171(11, &uLocal_368, -2110.686f, 17.03f, 2601.707f);
				Function_170(11, &uLocal_368, -2110.686f, 17.03f, 2601.707f);
				Function_169(11, &uLocal_368, Local_25);
				Function_176(12, &uLocal_368, 40.0f);
				Function_175(12, &uLocal_368, -2192.954f, 16.966f, 2600.267f);
				Function_174(12, &uLocal_368, -2192.954f, 16.966f, 2600.267f);
				Function_173(12, &uLocal_368, -2192.954f, 16.966f, 2600.267f);
				Function_172(12, &uLocal_368, -2192.954f, 16.966f, 2600.267f);
				Function_171(12, &uLocal_368, -2192.954f, 16.966f, 2600.267f);
				Function_167(12, &uLocal_368, Local_33.f_1116);
				Function_169(12, &uLocal_368, Local_25);
				Function_176(13, &uLocal_368, 40.0f);
				Function_175(13, &uLocal_368, -2148.539f, 16.774f, 2625.462f);
				Function_174(13, &uLocal_368, -2148.539f, 16.774f, 2625.462f);
				Function_173(13, &uLocal_368, -2148.539f, 16.774f, 2625.462f);
				Function_172(13, &uLocal_368, -2148.539f, 16.774f, 2625.462f);
				Function_171(13, &uLocal_368, -2148.539f, 16.774f, 2625.462f);
				Function_170(13, &uLocal_368, -2148.539f, 16.774f, 2625.462f);
				Function_169(13, &uLocal_368, Local_25);
				Function_176(14, &uLocal_368, 40.0f);
				Function_175(14, &uLocal_368, -2173.207f, 16.447f, 2636.992f);
				Function_174(14, &uLocal_368, -2173.207f, 16.447f, 2636.992f);
				Function_173(14, &uLocal_368, -2173.207f, 16.447f, 2636.992f);
				Function_172(14, &uLocal_368, -2173.207f, 16.447f, 2636.992f);
				Function_171(14, &uLocal_368, -2174.889f, 16.88762f, 2600.959f);
				Function_170(14, &uLocal_368, -2174.889f, 16.88762f, 2600.959f);
				Function_169(14, &uLocal_368, Local_25);
				Function_176(15, &uLocal_368, 40.0f);
				Function_175(15, &uLocal_368, -2077.117f, 18.763f, 2643.115f);
				Function_174(15, &uLocal_368, -2077.117f, 18.763f, 2643.115f);
				Function_173(15, &uLocal_368, -2077.117f, 18.763f, 2643.115f);
				Function_172(15, &uLocal_368, -2077.117f, 18.763f, 2643.115f);
				Function_171(15, &uLocal_368, -2077.117f, 18.763f, 2643.115f);
				Function_170(15, &uLocal_368, -2077.117f, 18.763f, 2643.115f);
				Function_169(15, &uLocal_368, Local_25);
				Function_176(16, &uLocal_368, 60.0f);
				Function_175(16, &uLocal_368, -2162.298f, 19.974f, 2590.307f);
				Function_174(16, &uLocal_368, -2166.765f, 16.87441f, 2589.263f);
				Function_173(16, &uLocal_368, -2166.765f, 16.87441f, 2589.263f);
				Function_172(16, &uLocal_368, -2166.765f, 16.87441f, 2589.263f);
				Function_171(16, &uLocal_368, -2166.765f, 16.87441f, 2589.263f);
				Function_170(16, &uLocal_368, -2166.765f, 16.87441f, 2589.263f);
				Function_169(16, &uLocal_368, Local_25);
				Function_176(17, &uLocal_368, 60.0f);
				Function_175(17, &uLocal_368, -2162.298f, 19.974f, 2595.048f);
				Function_174(17, &uLocal_368, -2175.337f, 19.688f, 2599.697f);
				Function_173(17, &uLocal_368, -2175.337f, 19.688f, 2599.697f);
				Function_172(17, &uLocal_368, -2175.337f, 19.688f, 2599.697f);
				Function_163(17, &uLocal_368, Local_33.f_1240);
				Function_167(17, &uLocal_368, Local_33.f_1240);
				Function_169(17, &uLocal_368, Local_25);
				Function_176(18, &uLocal_368, 100.0f);
				Function_175(18, &uLocal_368, -2112.385f, 16.57f, 2620.674f);
				Function_174(18, &uLocal_368, -2170.773f, 16.8755f, 2588.755f);
				Function_173(18, &uLocal_368, -2170.773f, 16.8755f, 2588.755f);
				Function_172(18, &uLocal_368, -2170.773f, 16.8755f, 2588.755f);
				Function_171(18, &uLocal_368, -2170.773f, 16.8755f, 2588.755f);
				Function_170(18, &uLocal_368, -2170.773f, 16.8755f, 2588.755f);
				Function_169(18, &uLocal_368, Local_25);
				Function_176(19, &uLocal_368, 20.0f);
				Function_175(19, &uLocal_368, -2136.458f, 19.864f, 2601.958f);
				Function_174(19, &uLocal_368, -2157.634f, 16.449f, 2625.538f);
				Function_173(19, &uLocal_368, -2157.634f, 16.449f, 2625.538f);
				Function_172(19, &uLocal_368, -2157.634f, 16.449f, 2625.538f);
				Function_171(19, &uLocal_368, -2171.504f, 16.88975f, 2604.152f);
				Function_170(19, &uLocal_368, -2171.504f, 16.88975f, 2604.152f);
				Function_169(19, &uLocal_368, Local_25);
				Function_176(20, &uLocal_368, 20.0f);
				Function_168(20, &uLocal_368, Local_33.f_1096);
				Function_174(20, &uLocal_368, -2150.672f, 16.449f, 2579.07f);
				Function_173(20, &uLocal_368, -2150.672f, 16.449f, 2579.07f);
				Function_172(20, &uLocal_368, -2150.672f, 16.449f, 2579.07f);
				Function_171(20, &uLocal_368, -2166.915f, 16.874f, 2590.191f);
				Function_167(20, &uLocal_368, Local_33.f_1096);
				Function_169(20, &uLocal_368, Local_25);
				Function_176(22, &uLocal_368, 60.0f);
				Function_175(22, &uLocal_368, -2162.261f, 19.975f, 2586.651f);
				Function_174(22, &uLocal_368, -2190.739f, 16.54066f, 2616.604f);
				Function_173(22, &uLocal_368, -2190.739f, 16.54066f, 2616.604f);
				Function_172(22, &uLocal_368, -2190.739f, 16.54066f, 2616.604f);
				Function_171(22, &uLocal_368, -2174.445f, 19.961f, 2601.539f);
				Function_170(22, &uLocal_368, -2162.261f, 19.975f, 2586.651f);
				Function_169(22, &uLocal_368, Local_25);
				Function_176(23, &uLocal_368, 40.0f);
				Function_175(23, &uLocal_368, -2204.041f, 16.511f, 2607.533f);
				Function_174(23, &uLocal_368, -2204.041f, 16.511f, 2607.533f);
				Function_173(23, &uLocal_368, -2204.041f, 16.511f, 2607.533f);
				Function_172(23, &uLocal_368, -2204.041f, 16.511f, 2607.533f);
				Function_171(23, &uLocal_368, -2165.634f, 16.892f, 2593.316f);
				Function_170(23, &uLocal_368, -2162.298f, 19.974f, 2595.048f);
				Function_169(23, &uLocal_368, Local_25);
				Function_176(24, &uLocal_368, 60.0f);
				Function_175(24, &uLocal_368, -2204.936f, 16.656f, 2624.992f);
				Function_174(24, &uLocal_368, -2204.936f, 16.656f, 2624.992f);
				Function_173(24, &uLocal_368, -2204.936f, 16.656f, 2624.992f);
				Function_172(24, &uLocal_368, -2204.936f, 16.656f, 2624.992f);
				Function_171(24, &uLocal_368, -2204.936f, 16.656f, 2624.992f);
				Function_170(24, &uLocal_368, -2138.745f, 19.81f, 2601.71f);
				Function_169(24, &uLocal_368, Local_25);
				Function_176(25, &uLocal_368, 60.0f);
				Function_175(25, &uLocal_368, -2160.135f, 16.449f, 2628.601f);
				Function_174(25, &uLocal_368, -2161.728f, 16.879f, 2603.609f);
				Function_173(25, &uLocal_368, -2172.0f, 16.874f, 2598.572f);
				Function_172(25, &uLocal_368, -2161.728f, 16.879f, 2603.609f);
				Function_171(25, &uLocal_368, -2172.0f, 16.874f, 2598.572f);
				Function_170(25, &uLocal_368, -2161.728f, 16.879f, 2603.609f);
				Function_169(25, &uLocal_368, Local_25);
				Function_160(&Global_6298, &Global_7189, &uLocal_368, Global_6289, iScriptParam_0);
				if (Function_178(&(Global_29008[iScriptParam_0]), 256) || !Function_159(2))
				{
					iLocal_925 = 1;
				}
				bLocal_929 = Function_158(Global_30640[0], "nArmadillo", "generalStore", 1);
				if (IS_DOOR_VALID(bLocal_929))
				{
					Function_157(StackVal, bLocal_929);
				}
				bLocal_930 = Function_158(Global_30640[0], "nArmadillo", "doctorsOffice01", 1);
				if (IS_DOOR_VALID(bLocal_930))
				{
					Function_157(StackVal, bLocal_930);
				}
				bLocal_931 = Function_158(Global_30640[0], "nArmadillo", "gunsmith01", 2);
				if (IS_DOOR_VALID(bLocal_931))
				{
					Function_157(StackVal, bLocal_931);
				}
				if (IS_PERS_CHAR_VALID(StackVal))
				{
					SET_PERS_CHAR_ALLOW_SPAWN_ELSEWHERE(StackVal, 0);
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_33, "armv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_33, "armv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_33, "armv_players_room"));
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_33, "armv_schoolhouse_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_33, "armv_schoolhouse_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_33, "armv_schoolhouse_room"));
				}
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1124));
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1128));
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1132));
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1136));
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1144));
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1148));
				Function_156(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_33 + 1176));
				bLocal_936 = CREATE_OBSTACLE_IN_LAYOUT(Local_25, "chopWood_obstacle", -2107.232f, 16.45f, 2624.115f, 0.0f, -0.646f, 0.0f, 1.0f, 5.0f, 2.0f);
				Function_155(StackVal, FIND_VOLUME_IN_LAYOUT(Local_33, "armv_gstore_set"));
				Function_154(StackVal, 1);
				Function_153(StackVal, 397);
				Function_155(StackVal, FIND_VOLUME_IN_LAYOUT(Local_33, "armv_doctor_set"));
				Function_154(StackVal, 3);
				Function_153(StackVal, 398);
				Function_155(StackVal, FIND_VOLUME_IN_LAYOUT(Local_33, "armv_gunsmith_set"));
				Function_154(StackVal, 2);
				Function_153(StackVal, 399);
				Function_148(1, Local_33.f_1180, Local_33.f_812, Local_33.f_900, Function_158(iScriptParam_0, "narmadillo", "saloon01", 6), Function_158(iScriptParam_0, "narmadillo", "saloon01", 9), Local_25.f_28);
				Function_146(1, Local_33.f_1080);
				Function_185(&(Global_29008[iScriptParam_0]), 8);
				if (Function_178(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_145(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_367 = 10;
				}
				else
				{
					iLocal_367 = 7;
				}
				iLocal_932 = 0;
				break;
			
			case 0x00000007:
				if (!Global_3420)
				{
					Function_141(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 65.0f, 4, 70, 0);
					Function_140(StackVal, &Global_17483[1075] + 120, 4, 1);
					Function_139(&Global_17483[1075] + 120, 2, 5.0f, 1, 4294967295);
					Function_141(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 65.0f, 8, 70, 0);
					Function_140(StackVal, &Global_17483[875] + 120, 4, 1);
					Function_139(&Global_17483[875] + 120, 2, 5.0f, 1, 4294967295);
					Function_141(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 65.0f, 8, 70, 0);
					Function_140(StackVal, &Global_17483[975] + 120, 4, 1);
					Function_139(&Global_17483[975] + 120, 2, 5.0f, 1, 4294967295);
					Function_138(iScriptParam_0);
				}
				Function_137(iScriptParam_0);
				Function_136(iScriptParam_0);
				Function_135(iScriptParam_0);
				Function_132(iScriptParam_0);
				Function_131(iScriptParam_0);
				Function_129(iScriptParam_0);
				Function_122(&Global_62527, 8, Global_30640[0], "$/content/Frontier/Mini_Games/FiveFingerFillet_ARM/FiveFingerFillet_ARM", 4294967295, 0, "ArmFiveFinger", 353, -2193.326f, 16.58f, 2592.508f, 2.5f, 0, FIND_VOLUME_IN_LAYOUT(Local_25, "armv_fff"));
				if (Function_121())
				{
					Function_122(&Global_62527, 0, Global_30640[0], "$/content/Frontier/Mini_Games/Poker_ARM/Poker_ARM", 4294967295, 0, "ArmPokerHC", 433, -2157.565f, 16.875f, 2595.535f, 2.5f, 0, 0);
					Function_120(&Global_62527, 0, 15);
				}
				else
				{
					Function_122(&Global_62527, 0, Global_30640[0], "$/content/Frontier/Mini_Games/Poker_ARM/Poker_ARM", 4294967295, 0, "ArmPoker", 433, -2157.565f, 16.875f, 2595.535f, 2.5f, 0, 0);
					Function_120(&Global_62527, 0, 25);
				}
				Function_120(&Global_62527, 8, 1);
				Function_119(&Global_62527, 8);
				iLocal_367 = 8;
				iLocal_932 = 0;
				break;
			
			case 0x00000008:
				Function_118(64);
				if (Function_117(iScriptParam_0, &Global_6298, iLocal_925))
				{
					Function_113(StackVal, 0, 0.1f, 4, Local_25, 1);
					Function_109(2, 4294967295, 4294967295, 0, 3);
					Function_107(Local_25);
				}
				else
				{
					Function_113(StackVal, 4, 1.0f, 2, Local_25, 1);
					Function_109(0, 8, 4, 20, 5);
					Function_107(Local_25);
					Function_106(StackVal, 0);
					Function_106(StackVal, 0);
				}
				Function_185(&(Global_29008[iScriptParam_0]), 512);
				iLocal_367 = 9;
				iLocal_932 = 0;
				break;
			
			case 0x00000009:
				Function_104(Local_25, iScriptParam_0);
				Function_185(&(Global_29008[iScriptParam_0]), 4);
				iLocal_367 = 10;
				iLocal_932 = 0;
				break;
			
			case 0x0000000A:
				Function_102(&Local_941);
				if (!Function_101(Global_62981, 1))
				{
					if (Function_99(&(Global_30640[0]), 0))
					{
						Function_98(&Global_62981, 1);
					}
				}
				if (!Function_101(Global_62981, 8))
				{
					if (Function_94(&(Global_30640[0])))
					{
						Function_98(&Global_62981, 8);
					}
				}
				if (!Function_101(Global_62981, 64))
				{
					if (Function_92(&(Global_30640[0])))
					{
						Function_98(&Global_62981, 64);
					}
				}
				if (IS_OBJECT_VALID(bLocal_935))
				{
					if (Function_86(11) || (Function_184(10, 0) && Function_184(5, 0)))
					{
						DESTROY_OBJECT(bLocal_935);
						STREAMING_EVICT_GRINGO(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1));
						iLocal_937 = 0;
					}
				}
				else if (Function_184(10, 0) && !Function_184(5, 0))
				{
					if (!iLocal_937)
					{
						STREAMING_REQUEST_GRINGO(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1));
						iLocal_937 = 1;
					}
					if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1)))
					{
						bLocal_935 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_85(), GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1), -2125.509f, 16.485f, 2604.504f, 0.0f, 0.0f, 0.0f);
					}
				}
				if (Function_197())
				{
					switch (iLocal_366)
					{
						case 0x00000000:
							DESTROY_OBJECT(Local_33.f_1264);
							iLocal_366 = 10;
							break;
						
						case 0x0000000A:
							break;
					}
				}
				else if (!Function_84(0, 0, 1, 1))
				{
					switch (iLocal_366)
					{
						case 0x00000000:
							if (!IS_ACTOR_VALID(bLocal_901))
							{
								bLocal_901 = Function_81(&Global_6298, &Global_7189, 15, 0, 0, 1);
								SET_ACTOR_UPDATE_PRIORITY(bLocal_901, 1);
							}
							else
							{
								bLocal_908 = CREATE_VOLUME_IN_LAYOUT(Local_25, Function_85(), 0, -2078.399f, 20.16009f, 2642.17f, 0.0f, 44.46211f, 0.0f, 2.5f, 4.0f, 2.5f);
								iLocal_907 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("payForMovie", bLocal_908, 1, 5, "", "", "", "", 4, 0);
								bLocal_906 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/ticket_taker_link", &vLocal_922, 1.0f, 0);
								iLocal_366 = 1;
							}
							break;
						
						case 0x00000001:
							if (!CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vLocal_922, 1065353216, 1117126656, 1, 1, 0))
							{
								SNAP_ACTOR_TO_GRINGO(bLocal_901, GET_OBJECT_FROM_GRINGO(bLocal_906), "UseCase1", 1, 1, 1);
								TASK_USE_GRINGO(bLocal_901, bLocal_906, "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(bLocal_901, 2);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_901, 1);
								iLocal_366 = 2;
							}
							break;
						
						case 0x00000002:
							if (IS_ACTOR_VALID(bLocal_901) && IS_VOLUME_VALID(bLocal_908))
							{
								if (IS_ACTOR_IN_VOLUME(bLocal_901, bLocal_908))
								{
									if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_907))
									{
										iLocal_909 = ADD_BLIP_FOR_COORD(&vLocal_922, 525, 1.25f, 1, 0);
										Function_74(StackVal, StackVal, Global_30640[0], 21, vLocal_922, 63);
										iLocal_366 = 3;
									}
								}
							}
							break;
						
						case 0x00000003:
							if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_907))
							{
								if (!IS_AI_ACTOR_UNALERTED(bLocal_901))
								{
									if (IS_BLIP_VALID(iLocal_909))
									{
										REMOVE_BLIP(iLocal_909);
									}
									if (IS_VOLUME_VALID(bLocal_908))
									{
										DESTROY_VOLUME(bLocal_908);
									}
									if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_907))
									{
										RELEASE_SCRIPT_USE_CONTEXT(iLocal_907);
									}
									if (IS_ACTOR_VALID(bLocal_901))
									{
										Function_72(&Global_6298, &Global_7189, 15, 0);
									}
								}
								else if (IS_ACTOR_DEAD(bLocal_901))
								{
									if (IS_BLIP_VALID(iLocal_909))
									{
										REMOVE_BLIP(iLocal_909);
									}
									if (IS_VOLUME_VALID(bLocal_908))
									{
										DESTROY_VOLUME(bLocal_908);
									}
									if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_907))
									{
										RELEASE_SCRIPT_USE_CONTEXT(iLocal_907);
									}
									if (IS_ACTOR_VALID(bLocal_901))
									{
										Function_72(&Global_6298, &Global_7189, 15, 0);
									}
								}
								else if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iLocal_907))
								{
									ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
									SET_PLAYER_CONTROL(0, 0, 0, 0);
									iLocal_366 = 4;
								}
							}
							else
							{
								if (IS_BLIP_VALID(iLocal_909))
								{
									REMOVE_BLIP(iLocal_909);
								}
								if (IS_VOLUME_VALID(bLocal_908))
								{
									DESTROY_VOLUME(bLocal_908);
								}
								if (IS_ACTOR_VALID(bLocal_901))
								{
									Function_72(&Global_7035, &Global_8279, 15, 0);
								}
								iLocal_366 = 0;
							}
							break;
						
						case 0x00000004:
							if (Function_71() > 2)
							{
								SAY_SINGLE_LINE_CONTEXT(Global_34573, 366, bLocal_901, 0, 0, 1, 4294967295, 4294967295, 0, 1);
								Function_68(2, 1);
								DESTROY_VOLUME(bLocal_908);
								uLocal_902[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &vLocal_913, 0.5f, 0);
								uLocal_902[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &vLocal_916, 0.5f, 0);
								uLocal_902[2] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &vLocal_919, 0.5f, 0);
								iLocal_366 = 6;
							}
							else
							{
								RELEASE_SCRIPT_USE_CONTEXT(iLocal_907);
								iLocal_366 = 5;
							}
							break;
						
						case 0x00000005:
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 365, bLocal_901, 0, 0, 1, 4294967295, 4294967295, 0, 1);
							Function_66("NO_LAUNCH_Player", 2.5f, 1, 0, 2, 1, 0);
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							iLocal_907 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("payForMovie", bLocal_908, 1, 5, "", "", "", "", 4, 0);
							iLocal_366 = 2;
							break;
						
						case 0x00000006:
							Function_65(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
							if (HUD_IS_FADED() && !HUD_IS_FADING())
							{
								Function_63(0, 0);
								iLocal_366 = 7;
							}
							break;
						
						case 0x00000007:
							if (Function_62(Global_30750[1], 0, 4294967295, 0) && !iLocal_928)
							{
								iVar1 = 0;
								while (iVar1 <= 3)
								{
									uLocal_889[iVar1] = Function_53(Global_30750[1], 1, 0, 0);
									bLocal_896[iVar1] = CREATE_ACTOR_IN_LAYOUT(Local_25, Function_85(), uLocal_889[iVar1], vLocal_910, 0.0f, 0.0f, 0.0f);
									vLocal_910.x = (vLocal_910.x + 0.2f);
									SNAP_ACTOR_TO_GRINGO(bLocal_896[iVar1], GET_OBJECT_FROM_GRINGO(uLocal_902[iVar1]), "UseCase1", 1, 1, 1);
									TASK_USE_GRINGO(bLocal_896[iVar1], uLocal_902[iVar1], "UseCase1", 4294967295, 1);
									iLocal_927 = 1;
									iLocal_928 = 1;
									iVar1++;
								}
							}
							else if (iLocal_927)
							{
								Function_49(0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1);
								Function_48(Local_25, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
								Function_46(-2075.14f, 20.939f, 2645.867f, 0.887f, -0.014f, 0.462f, 0x40a00000, 0, 1);
								REMOVE_BLIP(iLocal_909);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 1);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 1);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 1);
								if (HUD_IS_FADED() && !HUD_IS_FADING())
								{
									SNAP_ACTOR_TO_GRINGO(Global_34573, Local_33.f_1264, "UseCase1", 1, 1, 1);
									TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(Local_33.f_1264), "UseCase1", 4294967295, 1);
									Function_45();
									iLocal_366 = 8;
									UI_PUSH("Movies");
								}
							}
							break;
						
						case 0x00000008:
							Function_44(2.0f);
							Global_63096 = 1;
							iLocal_366 = 9;
							break;
						
						case 0x00000009:
							Function_41(&iLocal_938);
							iLocal_366 = 10;
							break;
						
						case 0x0000000A:
							if (Function_38(&iLocal_938) < 2.0f)
							{
								iLocal_366 = 11;
							}
							break;
						
						case 0x0000000B:
							UNK_0x7614AEBA("game:/arm00.bik", 0);
							iLocal_366 = 12;
							break;
						
						case 0x0000000C:
							iLocal_932 = 0;
							if (UNK_0xD036DF91())
							{
								UI_EXIT("MoviesPromptsZoomed");
								UI_ENTER("MoviesPrompts");
								iLocal_366 = 13;
							}
							break;
						
						case 0x0000000D:
							iLocal_932 = 0;
							if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 5, 1, 0) || !UNK_0xD036DF91())
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
								Function_65(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
								UNK_0x69FC319E();
								Function_41(&iLocal_938);
								iLocal_366 = 16;
							}
							else if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 0, 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								Function_46(-2070.021f, 21.1f, 2647.764f, 0.715f, -0.012f, 0.699f, 0x40a00000, 0, 1);
								iLocal_366 = 14;
							}
							break;
						
						case 0x0000000E:
							iLocal_932 = 0;
							UI_EXIT("MoviesPrompts");
							UI_ENTER("MoviesPromptsZoomed");
							iLocal_366 = 15;
							break;
						
						case 0x0000000F:
							iLocal_932 = 0;
							if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 0, 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								Function_46(-2075.14f, 20.939f, 2645.867f, 0.887f, -0.014f, 0.462f, 0x40a00000, 0, 1);
								iLocal_366 = 12;
							}
							else if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 5, 1, 0) || !UNK_0xD036DF91())
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
								Function_65(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
								UNK_0x69FC319E();
								Function_41(&iLocal_938);
								iLocal_366 = 16;
							}
							else if (!iLocal_926)
							{
								Function_49(0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1);
								Function_48(Local_25, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
								Function_46(-2070.021f, 21.1f, 2647.764f, 0.715f, -0.012f, 0.699f, 0x40a00000, 0, 1);
								iLocal_926 = 1;
								UI_PUSH("Movies");
							}
							break;
						
						case 0x00000010:
							if (Function_38(&iLocal_938) < 3.0f)
							{
								iVar1 = 0;
								while (iVar1 <= 3)
								{
									DESTROY_ACTOR(bLocal_896[iVar1]);
									iVar1++;
								}
								Function_37(0, 1);
								Function_19(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
								TASK_CLEAR(Global_34573);
								Function_72(&Global_6298, &Global_7189, 15, 0);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 0);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 0);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 0);
								ACTOR_END_FORCE_HOLSTER(Global_34573);
								MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
								TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_33 + 1052), 1, 1, 1);
								iLocal_927 = 0;
								iLocal_928 = 0;
								Global_63096 = 0;
								HUD_FADE_IN(1.0f, 1065353216);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								UI_EXIT("MoviesPromptsZoomed");
								UI_ENTER("MoviesPrompts");
								iLocal_366 = 0;
								UI_POP("Movies");
							}
							break;
					}
				}
				else if (((IS_BLIP_VALID(iLocal_909) && IS_VOLUME_VALID(bLocal_908)) && IS_SCRIPT_USE_CONTEXT_VALID(iLocal_907)) && IS_ACTOR_VALID(bLocal_901))
				{
					REMOVE_BLIP(iLocal_909);
					DESTROY_VOLUME(bLocal_908);
					RELEASE_SCRIPT_USE_CONTEXT(iLocal_907);
					Function_72(&Global_6298, &Global_7189, 15, 0);
					iLocal_366 = 0;
				}
				if (Function_178(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_367 = 6;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(iLocal_932);
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
	DESTROY_OBJECTSET(iLocal_895);
	if (IS_ACTOR_VALID(bLocal_901))
	{
		Function_72(&Global_6298, &Global_7189, 15, 0);
	}
	if (IS_BLIP_VALID(iLocal_909))
	{
		REMOVE_BLIP(iLocal_909);
	}
	Function_12(&Global_6298, &Global_7189, iScriptParam_0, (iLocal_925 || Global_3380));
	if (IS_OBJECT_VALID(bLocal_935))
	{
		DESTROY_OBJECT(bLocal_935);
	}
	if (iLocal_937)
	{
		STREAMING_EVICT_GRINGO(GET_ASSET_ID("$/content/scripting/gringo/simplegringo/merchant_camp02", 1));
		iLocal_937 = 0;
	}
	if (IS_OBJECT_VALID(bLocal_936))
	{
		DESTROY_OBJECT(bLocal_936);
	}
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	SET_DUST_LEVEL(2);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_118(64);
	Function_145(&(Global_29008[iScriptParam_0]), 32);
	Function_145(&(Global_29008[iScriptParam_0]), 64);
	Function_145(&(Global_29008[iScriptParam_0]), 8);
	Function_145(&(Global_29008[iScriptParam_0]), 512);
	Function_145(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(iLocal_894))
	{
		TERMINATE_SCRIPT(iLocal_894);
	}
	Function_1("Unloaded Armadillo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, float fParam1) //Position: 0x2C6F / 11375
{
	if (!Function_159(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_2(int iParam0) //Position: 0x2CAD / 11437
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x2CE3 / 11491
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x2D05 / 11525
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x2D1B / 11547
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x2D31 / 11569
{
	Function_7(&Local_33 + 4);
	RELEASE_LAYOUT_REF(Local_33);
	return;
}

void Function_7(int iParam0) //Position: 0x2D43 / 11587
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_8(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x2D69 / 11625
{
	if (Function_10(uParam0[iParam13], 4))
	{
		if (Function_10(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_9(uParam0[iParam13], 1);
			Function_9(uParam0[iParam13], 2);
			Function_9(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x2E97 / 11927
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x2EB1 / 11953
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x2ECE / 11982
{
	RELEASE_LAYOUT_REF(Local_25);
	return;
}

void Function_12(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x2ED9 / 11993
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	if (StackVal != 5 && Function_197())
	{
		return;
	}
	strcpy(&cVar0, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_178(&(Global_29008[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_145(&(Global_29008[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_16(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_16(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_183(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_183(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_178(&(Global_29008[bParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_159(2) || Function_178(&(Global_29008[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_16(uParam0[iVar162], 2) && !Function_16(uParam0[iVar162], 4))
		{
			Function_13(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_16(uParam0[iVar162], 2) && !Function_16(uParam0[iVar162], 4))
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
		bVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		iVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(iVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(iVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, iVar21));
				CLEAN_OBJECTSET(iVar21);
			}
			DESTROY_OBJECTSET(iVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_185(&(Global_29008[bParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x30D9 / 12505
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_182(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), 0, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_16(uParam0[iParam22], 1) && !bParam3)
	{
		Function_182(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), 0, 0);
	}
}

int Function_14(int iParam0) //Position: 0x3228 / 12840
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

int Function_15(int iParam0) //Position: 0x3253 / 12883
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

bool Function_16(int iParam0, int iParam1) //Position: 0x3287 / 12935
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_17() //Position: 0x32A3 / 12963
{
	if (Function_101(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_18(bool bParam0) //Position: 0x32BE / 12990
{
	if (!Function_5(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (bParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (bParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (bParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (bParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (bParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (bParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (bParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (bParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (bParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (bParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (bParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (bParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (bParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (bParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (bParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (bParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (bParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (bParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (bParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (bParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (bParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (bParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (bParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (bParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (bParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (bParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (bParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (bParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (bParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (bParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (bParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (bParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (bParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (bParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (bParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (bParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (bParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (bParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (bParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x376C / 14188
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_36();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_197())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_22(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_45();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_20(uParam9);
}

void Function_20(int iParam0) //Position: 0x385C / 14428
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_21();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_21() //Position: 0x390B / 14603
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

int Function_22(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x397D / 14717
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_23(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_23(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3B9D / 15261
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(bParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((bParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((bParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_33(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_32(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_32(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_30(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_27(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_24(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_85(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_24(int iParam0) //Position: 0x41D3 / 16851
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_25(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x41E4 / 16868
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_26(char* cParam0, bool bParam1) //Position: 0x42D9 / 17113
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_27(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x42F2 / 17138
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_29(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_28(Function_29(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_28(int iParam0, int iParam1) //Position: 0x4357 / 17239
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_29(int iParam0, int iParam1) //Position: 0x4369 / 17257
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_30(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x437B / 17275
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_31(iParam0) != 19 || Function_31(iParam0) != 17) || Function_31(iParam0) != 10) || Function_31(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_31(int iParam0) //Position: 0x44AB / 17579
{
	return Global_35278[iParam020].f_48;
}

float Function_32(int iParam0) //Position: 0x44BA / 17594
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_33(int iParam0) //Position: 0x44F3 / 17651
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_34(int iParam0) //Position: 0x4530 / 17712
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x46CA / 18122
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

var Function_36() //Position: 0x490E / 18702
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_37(bool bParam0, bool bParam1) //Position: 0x4923 / 18723
{
	if (bParam0)
	{
		if (VMAG(*(&Global_63098 + 44)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(Global_63098))
	{
		if (!bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(Global_63098, 0);
		}
		DESTROY_OBJECT(Global_63098);
	}
	return;
}

float Function_38(int iParam0) //Position: 0x496F / 18799
{
	if (Function_40(iParam0))
	{
		if (Function_39(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_39(int iParam0) //Position: 0x4A37 / 18999
{
	return Function_101(*iParam0, 2);
}

bool Function_40(int iParam0) //Position: 0x4A44 / 19012
{
	return Function_101(*iParam0, 1);
}

void Function_41(int iParam0) //Position: 0x4A51 / 19025
{
	Function_42(iParam0, 0.0f);
	return;
}

void Function_42(var uParam0, float fParam1) //Position: 0x4A5D / 19037
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_98(uParam0, 1);
	Function_43(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x4A7E / 19070
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_44(float fParam0) //Position: 0x4A91 / 19089
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

void Function_45() //Position: 0x4AAE / 19118
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_46(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, int iParam8) //Position: 0x4AC3 / 19139
{
	Function_47(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam6 >= 0.0f)
	{
		fParam6 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam3, iParam8);
	Global_63098.f_4 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, Global_63098, 0f, fParam6);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), iParam7))
	{
		PLAY_CUTSCENEOBJECT(Global_63098, iParam7, Global_63098.f_12, Global_63098.f_16, Global_63098.f_20, Global_63098.f_24, Global_63098.f_28, Global_63098.f_32, Global_63098.f_36, Global_63098.f_40);
	}
	ROTATE_VECTOR_XZ(&vParam3, 180.0f, 0);
}

void Function_47(float fParam0) //Position: 0x4BB2 / 19378
{
	REMOVE_OBJECT_FROM_ATTACHMENT(fParam0);
	RESET_CAMERASHOT_TARGET(fParam0, 0);
	return;
}

void Function_48(bool bParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x4BC3 / 19395
{
	Function_37(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_85(), 2, 1);
	Global_63098.f_12 = iParam3;
	Global_63098.f_16 = iParam4;
	Global_63098.f_20 = iParam5;
	Global_63098.f_24 = iParam6;
	Global_63098.f_28 = iParam7;
	Global_63098.f_32 = iParam8;
	Global_63098.f_36 = iParam9;
	Global_63098.f_40 = iParam10;
	Global_63098.f_44 = iParam11;
	(&Global_63098 + 44)->f_4 = iParam12;
	(&Global_63098 + 44)->f_8 = iParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	if (bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), fParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), fParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), fParam1);
	Global_63098.f_4 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 0;
}

void Function_49(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x4C9C / 19612
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_45();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_36();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_197())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_52(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_85(), 2, Function_52(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_22(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_17())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_51()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_51()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_159(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_50(0x4000000);
	}
	if (Function_159(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_50(0x8000000);
	}
}

void Function_50(bool bParam0) //Position: 0x4F4A / 20298
{
	bool bVar0;
	
	if (Function_101(bParam0, 1) && Function_101(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_51() //Position: 0x4F7E / 20350
{
	bool bVar0;
	char* cVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		cVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(cVar1);
		ITERATE_ON_OBJECT_TYPE(cVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(cVar1);
			}
		}
		DESTROY_ITERATOR(cVar1);
	}
	return "";
}

vector3 Function_52(bool bParam0) //Position: 0x4FFD / 20477
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_53(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x500E / 20494
{
	return Function_54(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_54(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x5022 / 20514
{
	return Function_55(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_55(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x503B / 20539
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_61();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam2, iParam3, bParam4, iParam5, vParam6);
	if (!Function_60(iVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_59(uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_59(uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_58(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam2, iParam3, false, iParam5, vParam6);
				if (Function_60(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_58(iVar0))
				{
					Function_57();
				}
				Function_56(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam2, iParam3, false, iParam5, vParam6);
				if (Function_60(iVar1))
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

void Function_56(int iParam0) //Position: 0x532E / 21294
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_57() //Position: 0x53E2 / 21474
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_58(int iParam0) //Position: 0x541C / 21532
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_59(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x5449 / 21577
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
	PRINTINT(iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(uParam0, iParam2, iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(uParam0, iVar0), 4294967295))
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

bool Function_60(int iParam0) //Position: 0x559A / 21914
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_61() //Position: 0x55B1 / 21937
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_57();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_57();
	return;
}

int Function_62(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x55FC / 22012
{
	if (!IS_POPSET_VALID(uParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(uParam0, iParam1, iParam2);
}

void Function_63(int iParam0, int iParam1) //Position: 0x5623 / 22051
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_64(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_64(bool bParam0) //Position: 0x56A5 / 22181
{
	bParam0->f_92 = 0;
	bParam0->f_4 = 0;
	bParam0->f_12 = 4294967295;
	bParam0->f_16 = "";
	*(bParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(bParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	bParam0->f_44 = "";
	bParam0->f_56 = "";
	bParam0->f_48 = 4294967295;
	bParam0->f_52 = "";
	bParam0->f_88 = 0.0f;
	bParam0->f_76 = 0;
	return;
}

void Function_65(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x56F3 / 22259
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x571C / 22300
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_67(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_67(int iParam0) //Position: 0x5797 / 22423
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

int Function_68(int iParam0, bool bParam1) //Position: 0x57D6 / 22486
{
	int iVar0;
	
	iVar0 = Function_70(0);
	if ((Function_70(0) - iParam0) <= 0)
	{
		iParam0 = iVar0;
	}
	if (iParam0 >= 0)
	{
		Function_69(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), iVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	return 1;
}

int Function_69(int iParam0, bool bParam1, int iParam2) //Position: 0x5866 / 22630
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_23(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_70(int iParam0) //Position: 0x5A61 / 23137
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_71() //Position: 0x5AA2 / 23202
{
	return Function_70(0);
}

void Function_72(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x5AAC / 23212
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_16(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_16(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_16(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_183(uParam0[iVar02], 8);
	}
	Function_183(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_73(StackVal);
	if (bParam3)
	{
		Function_13(uParam0, uParam1, iParam2, 0);
	}
}

int Function_73(bool bParam0) //Position: 0x5B46 / 23366
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

int Function_74(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x5BE0 / 23520
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_80(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_79(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_78(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_77(uVar3);
		vVar7 = { StackVal, StackVal, Function_77(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_77(StackVal);
				vVar4 = { StackVal, StackVal, Function_77(StackVal) };
				if (Function_76(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_75(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_75(bool bParam0) //Position: 0x5DC3 / 24003
{
	switch (bParam0)
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

bool Function_76(vector3 vParam0, vector3 vParam3) //Position: 0x5EFA / 24314
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_77(int iParam0) //Position: 0x5F27 / 24359
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_78(vector3 vParam0) //Position: 0x5F7E / 24446
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

int Function_79(int iParam0) //Position: 0x5FCC / 24524
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

bool Function_80(vector3 vParam0) //Position: 0x6084 / 24708
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_81(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x609C / 24732
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_16(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_16(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_16(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_182(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_83(StackVal, StackVal, StackVal, Global_6289, Function_85(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_16(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_182(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_182(uParam0[iVar02], 1);
	Function_82(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x6232 / 25138
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(uParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 0);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_83(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x62D4 / 25300
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	uVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(uVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_85(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

bool Function_84(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x63ED / 25581
{
	uParam0 = uParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && uParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

var Function_85() //Position: 0x6491 / 25745
{
	int iVar0;
	
	return iVar0;
}

int Function_86(int iParam0) //Position: 0x6499 / 25753
{
	int iVar0;
	
	if (!Function_91(iParam0))
	{
		return 0;
	}
	iVar0 = Function_90(iParam0);
	if (!Function_87(Function_90(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x64CF / 25807
{
	if (!Function_89(iParam0))
	{
		return 0;
	}
	if (!Function_88(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_88(int iParam0) //Position: 0x64F3 / 25843
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x6508 / 25864
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_90(int iParam0) //Position: 0x651F / 25887
{
	if (!Function_91(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_91(int iParam0) //Position: 0x6539 / 25913
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_92(int iParam0) //Position: 0x654F / 25935
{
	int iVar0;
	
	Function_93(*iParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_93(*iParam0), 1.0f, "p_gen_organstool01x", 1);
	if (IS_PHYSINST_VALID(iVar0))
	{
		SET_PROP_FIXED(iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make piano stool fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_93(int iParam0) //Position: 0x65CE / 26062
{
	if (iParam0 == Global_30668[1])
	{
		return 154.443f, 73.832f, 2245.542f;
	}
	if (iParam0 == Global_30640[0])
	{
		return -2170.534f, 16.879f, 2589.138f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 721.884f, 78.476f, 1311.799f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_94(int iParam0) //Position: 0x6650 / 26192
{
	int iVar0;
	
	Function_97(*iParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_97(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(iVar0))
	{
		SET_PROP_FIXED(iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_96(*iParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_96(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(iVar0))
	{
		SET_PROP_FIXED(iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_95(iParam0);
	return 1;
}

void Function_95(int iParam0) //Position: 0x6758 / 26456
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Function_97(*iParam0);
	vVar0 = { StackVal, StackVal, Function_97(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		bVar4 = GRINGO_GET_USE_COMPONENT_EXT(bVar3, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(bVar4))
		{
			iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, 0);
			while (iVar5 >= 4294967295)
			{
				iVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, bVar4);
				iVar7 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar6, bVar3);
				if (IS_PHYSINST_VALID(iVar7))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(iVar7), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(iVar7), 0);
				}
				iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, iVar5 + 1);
			}
		}
	}
	return;
}

vector3 Function_96(int iParam0) //Position: 0x6837 / 26679
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.299f, 16.57026f, 2593.136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.0631f, 73.82803f, 2294.619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.766f, 18.07059f, 4453.27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.6982f, 76.28821f, 3447.546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465.0943f, 152.3517f, 1596.716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_97(int iParam0) //Position: 0x6909 / 26889
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.388f, 16.57687f, 2592.54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.1002f, 73.83751f, 2294.133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.772f, 18.07059f, 4453.844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.5946f, 76.28807f, 3448.024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464.3469f, 152.3559f, 1596.59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_98(var uParam0, int iParam1) //Position: 0x69D7 / 27095
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_99(float fParam0, bool bParam1) //Position: 0x69E6 / 27110
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_100(*fParam0, iVar1, bParam1);
			iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_100(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_100(*fParam0, iVar1, 0);
			iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_100(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(iVar0))
		{
			SET_PROP_FIXED(iVar0, 1);
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

vector3 Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x6AA9 / 27305
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801.0966f, 92.75807f, 2375.792f;
				break;
			
			case 0x00000001:
				return -801.4974f, 92.75435f, 2375.295f;
				break;
			
			case 0x00000002:
				return -801.2829f, 92.75435f, 2374.737f;
				break;
			
			case 0x00000003:
				return -800.724f, 92.76255f, 2374.656f;
				break;
			
			case 0x00000004:
				return -800.3233f, 92.75678f, 2375.122f;
				break;
			
			case 0x00000005:
				return -800.5463f, 92.75435f, 2375.677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164.353f, 73.75671f, 2230.925f;
				break;
			
			case 0x00000001:
				return 164.5807f, 73.82056f, 2231.472f;
				break;
			
			case 0x00000002:
				return 164.2043f, 73.75299f, 2231.971f;
				break;
			
			case 0x00000003:
				return 163.6548f, 73.76118f, 2231.889f;
				break;
			
			case 0x00000004:
				return 163.4103f, 73.76118f, 2231.366f;
				break;
			
			case 0x00000005:
				return 163.7511f, 73.75671f, 2230.869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157.424f, 16.88292f, 2596.033f;
				break;
			
			case 0x00000001:
				return -2158.012f, 16.94059f, 2595.997f;
				break;
			
			case 0x00000002:
				return -2158.228f, 16.87845f, 2595.416f;
				break;
			
			case 0x00000003:
				return -2157.847f, 16.87845f, 2594.96f;
				break;
			
			case 0x00000004:
				return -2157.261f, 16.87845f, 2595.042f;
				break;
			
			case 0x00000005:
				return -2157.04f, 16.87845f, 2595.596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 748.5359f, 82.6927f, 1267.343f;
					break;
				
				case 0x00000001:
					return 749.138f, 82.6927f, 1266.645f;
					break;
				
				case 0x00000002:
					return 750.045f, 82.6927f, 1266.796f;
					break;
				
				case 0x00000003:
					return 750.0344f, 82.6917f, 1267.552f;
					break;
				
				case 0x00000004:
					return 749.7606f, 82.6927f, 1268.372f;
					break;
				
				case 0x00000005:
					return 748.8501f, 82.6927f, 1268.207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717.6248f, 78.47099f, 1325.972f;
					break;
				
				case 0x00000001:
					return 717.0453f, 78.47099f, 1325.919f;
					break;
				
				case 0x00000002:
					return 716.8008f, 78.47099f, 1325.396f;
					break;
				
				case 0x00000003:
					return 717.1418f, 78.47099f, 1324.928f;
					break;
				
				case 0x00000004:
					return 717.7181f, 78.47099f, 1324.969f;
					break;
				
				case 0x00000005:
					return 717.9684f, 78.47099f, 1325.495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138.6693f, 119.2419f, 1344.049f;
				break;
			
			case 0x00000001:
				return -139.2573f, 119.2419f, 1343.961f;
				break;
			
			case 0x00000002:
				return -139.4945f, 119.2419f, 1343.419f;
				break;
			
			case 0x00000003:
				return -139.1212f, 119.2419f, 1342.946f;
				break;
			
			case 0x00000004:
				return -138.5368f, 119.2419f, 1343.024f;
				break;
			
			case 0x00000005:
				return -138.2953f, 119.2419f, 1343.58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701.487f, 31.151f, 4278.554f;
				break;
			
			case 0x00000001:
				return -2701.713f, 31.151f, 4277.994f;
				break;
			
			case 0x00000002:
				return -2701.347f, 31.151f, 4277.538f;
				break;
			
			case 0x00000003:
				return -2700.726f, 31.151f, 4277.604f;
				break;
			
			case 0x00000004:
				return -2700.508f, 31.151f, 4278.2f;
				break;
			
			case 0x00000005:
				return -2700.919f, 31.151f, 4278.653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795.5794f, 13.16767f, 3699.937f;
				break;
			
			case 0x00000001:
				return -795.8744f, 13.16057f, 3699.083f;
				break;
			
			case 0x00000002:
				return -794.9905f, 13.16057f, 3698.687f;
				break;
			
			case 0x00000003:
				return -794.196f, 13.16057f, 3699.235f;
				break;
			
			case 0x00000004:
				return -794.2787f, 13.16057f, 3700.203f;
				break;
			
			case 0x00000005:
				return -795.169f, 13.16057f, 3700.608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_101(bool bParam0, int iParam1) //Position: 0x7023 / 28707
{
	return (bParam0 && iParam1) == 0;
}

void Function_102(bool bParam0) //Position: 0x7030 / 28720
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*bParam0)[iVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*bParam0)[iVar04], "UseCase1")))
			{
				Function_98(bParam0[iVar04] + 8, 64);
				if (Function_101(StackVal, 2))
				{
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_101(StackVal, 4), "UseCase1")))
				{
					Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "3.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
					GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
				}
				else
				{
					Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "4.parent.SWITCHING ON: ", (*bParam0)[iVar04]);
					GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_101(StackVal, 16))
				{
					Function_43(bParam0[iVar04] + 8, 64);
				}
				else if (Function_101(StackVal, 32))
				{
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_43(bParam0[iVar04] + 8, 64);
				}
				else
				{
					Function_43(bParam0[iVar04] + 8, 64);
				}
				if (Function_101(StackVal, 2))
				{
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_101(StackVal, 4))
				{
					Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "7.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
					GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
				}
			}
			else
			{
				if (bParam0[iVar04]->f_12 >= 4294967295)
				{
					iVar1 = bParam0[iVar04]->f_12;
					if (StackVal == (*bParam0)[iVar04])
					{
						if (Function_101(StackVal, 64))
						{
							Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "8.parent.SWITCHING ON: ", (*bParam0)[iVar04]);
							GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], true);
						}
						else
						{
							Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "8b.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
							GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
						}
					}
					else if (StackVal && Function_101(Function_101(StackVal, 64), 16))
					{
						Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "11b.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
						GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
					}
					else
					{
						Function_43(bParam0[iVar04] + 8, 64);
						if (Function_101(StackVal, 1))
						{
							Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "12b.parent.SWITCHING ON: ", (*bParam0)[iVar04]);
							GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], true);
						}
						else
						{
							Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "13b.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
							GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
						}
					}
				}
				else if (StackVal && Function_101(Function_101(StackVal, 64), 16))
				{
					Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "11.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
					GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
				}
				else
				{
					Function_43(bParam0[iVar04] + 8, 64);
					if (Function_101(StackVal, 1))
					{
						Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "12.parent.SWITCHING ON: ", (*bParam0)[iVar04]);
						GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], true);
					}
					else
					{
						Function_103(StackVal, StackVal, StackVal, *bParam0[iVar04], "13.parent.SWITCHING OFF: ", (*bParam0)[iVar04]);
						GRINGO_ALLOW_ACTIVATION((*bParam0)[iVar04], false);
					}
				}
				if (bParam0[iVar04]->f_12 >= 4294967295)
				{
					iVar1 = bParam0[iVar04]->f_12;
					if (StackVal == (*bParam0)[iVar14])
					{
					}
					else if (Function_101(StackVal, 64))
					{
						if (Function_101(StackVal, 32))
						{
							Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_101(StackVal, 8))
					{
						Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "16.child.SWITCHING OFF: ");
						Function_43(bParam0[iVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_101(StackVal, 64))
				{
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_101(StackVal, 8))
				{
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_43(bParam0[iVar04] + 8, 64);
					Function_103(StackVal, StackVal, StackVal, StackVal, *bParam0[iVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_101(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(iVar0);
			PRINTNL();
		}
		iVar0++;
	}
	return;
}

void Function_103(vector3 vParam0) //Position: 0x77C0 / 30656
{
	if (Function_101(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x77E7 / 30695
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_105(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_197())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_105(var uParam0, int iParam1) //Position: 0x78E1 / 30945
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_106(bool bParam0, int iParam1) //Position: 0x78EE / 30958
{
	int iVar0;
	char* cVar1;
	
	if (!IS_OBJECTSET_VALID(iVar0))
	{
		cVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(cVar1);
		ITERATE_ON_OBJECT_TYPE(cVar1, 2);
		ITERATE_ON_PARTIAL_NAME(cVar1, "nSharedLaw");
		iVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(cVar1));
		DESTROY_ITERATOR(cVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	if (!IS_OBJECTSET_VALID(iVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, iVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, iVar0);
	CLEAN_OBJECTSET(iVar0);
	return 1;
}

void Function_107(bool bParam0) //Position: 0x7967 / 31079
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_85(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_108(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_108(int iParam0) //Position: 0x7A52 / 31314
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7A6F / 31343
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = iParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = iParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_110();
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

void Function_110() //Position: 0x7B53 / 31571
{
	int iVar0;
	
	Global_26960 = Function_111(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_111(int iParam0) //Position: 0x7BA1 / 31649
{
	if (!Function_112(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_112(bool bParam0) //Position: 0x7BB9 / 31673
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_113(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7BCE / 31694
{
	char* cVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = iParam1;
	cVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(cVar0))
	{
		ITERATE_ON_OBJECT_TYPE(cVar0, 9);
		ITERATE_ON_PARTIAL_NAME(cVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(cVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(cVar0));
		}
		DESTROY_ITERATOR(cVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_116();
	}
	if (bParam5)
	{
		Function_114(1048576);
	}
}

void Function_114(int iParam0) //Position: 0x7CE1 / 31969
{
	Function_115(&Global_28842, iParam0);
	return;
}

void Function_115(var uParam0, var uParam1) //Position: 0x7CEF / 31983
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_116() //Position: 0x7D0A / 32010
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_114(16384);
	}
	return;
}

bool Function_117(int iParam0, int iParam1, bool bParam2) //Position: 0x7D26 / 32038
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_178(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_184(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_197())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *iParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_118(int iParam0) //Position: 0x7DE6 / 32230
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_119(var uParam0, int iParam1) //Position: 0x7DF9 / 32249
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_120(var uParam0, int iParam1, int iParam2) //Position: 0x7E14 / 32276
{
	uParam0[iParam140]->f_140 = iParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

bool Function_121() //Position: 0x7E38 / 32312
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_122(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x7E63 / 32355
{
	if (Function_197() && !bParam12)
	{
		return;
	}
	if (!Function_197() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_124(iParam2, iParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[iParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[iParam140]->f_8 = 4294967295;
	}
	uParam0[iParam140]->f_40 = "";
	uParam0[iParam140]->f_44 = "";
	uParam0[iParam140]->f_48 = iParam13;
	uParam0[iParam140]->f_96 = iParam7;
	uParam0[iParam140]->f_104 = 5;
	uParam0[iParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[iParam140]->f_132 = iParam4;
	uParam0[iParam140]->f_136 = 4294967295;
	uParam0[iParam140]->f_140 = 4294967295;
	uParam0[iParam140]->f_144 = 4294967295;
	strcpy(uParam0[iParam140] + 12, cParam6, 16);
	*(uParam0[iParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[iParam140]->f_64 = iParam11;
	uParam0[iParam140]->f_72 = iParam2;
	if (Global_25974[iParam1] && Function_123(iParam1))
	{
		Function_74(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_123(int iParam0) //Position: 0x7FAF / 32687
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_124(int iParam0, int iParam1, int iParam2) //Position: 0x7FD2 / 32722
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_128(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_125(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_125(iParam0, iParam1, iParam2, 4294967295);
}

int Function_125(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8031 / 32817
{
	var uVar0;
	
	if (!Function_127(iParam2))
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
	uVar0 = Function_128(iParam0, iParam1, iParam2);
	if (iParam3 != 4294967295 || iParam3 <= 275)
	{
		iParam3 = Function_126(uVar0);
	}
	if (iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[iParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
		Global_16198[iParam3] = 0;
		Global_13172[iParam311].f_4 = 0;
		Global_13172[iParam311].f_8 = 0;
		Global_13172[iParam311].f_12 = 0;
		Global_13172[iParam311].f_16 = 0;
		Global_13172[iParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return iParam3;
}

int Function_126(int iParam0) //Position: 0x8186 / 33158
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_127(int iParam0) //Position: 0x81C4 / 33220
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_128(int iParam0, int iParam1, int iParam2) //Position: 0x81D9 / 33241
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_129(int iParam0) //Position: 0x81F9 / 33273
{
	Function_141(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_130(&Global_17483[3375] + 120, 2, 0);
	return;
}

void Function_130(int iParam0, int iParam1, int iParam2) //Position: 0x825C / 33372
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_131(int iParam0) //Position: 0x8270 / 33392
{
	Function_141(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_132(int iParam0) //Position: 0x82C2 / 33474
{
	if (!Function_134())
	{
		Function_141(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_139(&Global_17483[3975] + 120, 1, 4.5f, 64, 4294967295);
		Function_133(&Global_17483[3975] + 120, -4.5f, 2);
	}
	return;
}

void Function_133(int iParam0, float fParam1, int iParam2) //Position: 0x8343 / 33603
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

bool Function_134() //Position: 0x8359 / 33625
{
	int iVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		iVar0 = GET_ACTOR_ENUM(Global_34573);
		if (iVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_135(int iParam0) //Position: 0x837E / 33662
{
	Function_141(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_139(&Global_17483[4075] + 120, 1, 4.5f, 64, 4294967295);
	Function_133(&Global_17483[4075] + 120, -4.5f, 2);
	return;
}

void Function_136(int iParam0) //Position: 0x83F9 / 33785
{
	Function_141(41, 1, 25, 4294967276, 50, 1, 0, 1, 4, iParam0, "$/content/Ambient/Town/event_unforgiven", 63, 2, 65.0f, 8, 100, 0);
	return;
}

void Function_137(int iParam0) //Position: 0x8448 / 33864
{
	Function_141(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_130(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_138(int iParam0) //Position: 0x84AF / 33967
{
	Function_141(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_139(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x84F8 / 34040
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_140(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x851E / 34078
{
	iParam0->f_128 = uParam1;
	(iParam0 + 128)->f_4 = iParam2;
	(iParam0 + 128)->f_8 = iParam3;
}

void Function_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x853C / 34108
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Function_142(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_142(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, var uParam15) //Position: 0x857E / 34174
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* cVar3[64];
	
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0.5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0.5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0.5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	if (!Function_17())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				iVar2 = 0;
				ADD_TIME(&iVar1, 0, 7, iVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = Function_144(1200);
					iVar2 = RAND_INT_RANGE(30, iVar2);
				}
				ADD_TIME(&iVar1, 0, 7, iVar2, 0);
			}
		}
		Function_143(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	iParam14 = Function_144(iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, iParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_143(int iParam0, int iParam1) //Position: 0x8926 / 35110
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

int Function_144(int iParam0) //Position: 0x8947 / 35143
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_145(var uParam0, int iParam1) //Position: 0x895D / 35165
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_146(int iParam0, bool bParam1) //Position: 0x8974 / 35188
{
	if (!Function_147(iParam0))
	{
		return;
	}
	GET_OBJECT_POSITION(bParam1, &Global_16537[iParam021] + 28);
	return;
}

bool Function_147(int iParam0) //Position: 0x8993 / 35219
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

void Function_148(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x89A9 / 35241
{
	var uVar0;
	var uVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_152(bParam1, bParam2);
	if (!Function_147(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_151(bParam4, 0);
		}
		else
		{
			Function_150(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_151(bParam5, 0);
		}
		else
		{
			Function_150(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", 1);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), false);
			if (DECOR_CHECK_EXIST(bParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(bParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		GET_OBJECT_POSITION(bParam6, &uVar0);
		uVar3[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		uVar3[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(uVar3[0]))
		{
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_149(uVar3[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar6) && !bVar6 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar6);
			}
			GRINGO_ENABLE_SPAWN(uVar3[0], 0);
		}
		if (IS_GRINGO_VALID(uVar3[1]))
		{
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_149(uVar3[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar7) && !bVar7 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar7, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar7, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar7);
			}
			GRINGO_ENABLE_SPAWN(uVar3[1], 0);
		}
		if (Global_16537[iParam021].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(bParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(bParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", 1);
		}
	}
	Global_16537[iParam021].f_68 = bParam4;
	Global_16537[iParam021].f_72 = bParam5;
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_56))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_56);
		Global_16537[iParam021].f_56 = "";
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_60))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_60);
		Global_16537[iParam021].f_60 = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iParam021].f_64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iParam021].f_64);
		Global_16537[iParam021].f_64 = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(bParam2, &(Global_16537[iParam021]));
	}
	Global_16537[iParam021].f_12 = GET_OBJECT_HEADING(bParam2);
	GET_OBJECT_POSITION(bParam3, &Global_16537[iParam021] + 16);
	Global_16537[iParam021].f_76 = bParam6;
}

var Function_149(var uParam0, bool bParam1) //Position: 0x8D3C / 36156
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(uParam0, iParam1);
}

void Function_150(bool bParam0, int iParam1) //Position: 0x8D49 / 36169
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_151(bool bParam0, int iParam1) //Position: 0x8D9D / 36253
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

int Function_152(bool bParam0, bool bParam1) //Position: 0x8DEE / 36334
{
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bParam0), "nPlayerUse", "MyRestartFlag", bParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

int Function_153(bool bParam0, int iParam1) //Position: 0x8F48 / 36680
{
	bool bVar0;
	int iVar1;
	
	if (!IS_PERS_CHAR_VALID(uParam0))
	{
		return 0;
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(bVar0), "Settings", "blipID", iParam1))
		{
			iVar1 = GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0));
			if (IS_BLIP_VALID(iVar1))
			{
				REMOVE_BLIP(iVar1);
			}
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_BLIP_ICON: This Shopkeeper is not set up correctly in the XML data - Missing blipID in Settings");
	}
	return 0;
}

int Function_154(bool bParam0, int iParam1) //Position: 0x9037 / 36919
{
	bool bVar0;
	
	if (!IS_PERS_CHAR_VALID(uParam0))
	{
		return 0;
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(bVar0), "ShopSettings", "ShopType", iParam1))
		{
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_TYPE: This Shopkeeper is not set up correctly in the XML data - Missing ShopType in ShopSettings");
	}
	return 0;
}

int Function_155(bool bParam0, bool bParam1) //Position: 0x9116 / 37142
{
	bool bVar0;
	
	if (!IS_PERS_CHAR_VALID(uParam0))
	{
		return 0;
	}
	if (IS_VOLUME_VALID(bParam1))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar0))
		{
			if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bVar0), "ShopSettings", "ShopVolumeRef", GET_OBJECT_FROM_VOLUME(bParam1)))
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

void Function_156(var uParam0, bool bParam1) //Position: 0x924B / 37451
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *uParam0)), bParam1);
		}
		iVar0++;
	}
	return;
}

void Function_157(bool bParam0, bool bParam1) //Position: 0x9293 / 37523
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(bParam0, "owner", bParam1);
	return;
}

var Function_158(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x92B3 / 37555
{
	char* cVar0[8];
	char* cVar2[32];
	char* cVar10;
	
	if (!Function_5(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	cVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(cVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(cVar10);
}

bool Function_159(int iParam0) //Position: 0x934F / 37711
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_160(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x936B / 37739
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_159(2))
	{
		return;
	}
	if (Function_178(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2))
		{
			if (Function_161(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_145(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_185(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_161(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x941D / 37917
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_178(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(iParam0, 2))
	{
		return 1;
	}
	if (Function_16(iParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, 0))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_83(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_80(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_183(iParam0, 4);
	}
	Function_162(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_162(bool bParam0, int iParam1) //Position: 0x9588 / 38280
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(uParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_80(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_80(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_80(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_80(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_80(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_80(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_163(int iParam0, var uParam1, bool bParam2) //Position: 0x96C4 / 38596
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[iVar020] + 48);
	return;
}

void Function_164(var uParam0, var uParam1, bool bParam2) //Position: 0x972A / 38698
{
	int iVar0;
	
	iVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[iVar020] + 36);
	return;
}

void Function_165(var uParam0, var uParam1, bool bParam2) //Position: 0x9792 / 38802
{
	int iVar0;
	
	iVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[iVar020] + 24);
	return;
}

void Function_166(var uParam0, var uParam1, bool bParam2) //Position: 0x97F5 / 38901
{
	int iVar0;
	
	iVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[iVar020] + 12);
	return;
}

void Function_167(int iParam0, var uParam1, bool bParam2) //Position: 0x985B / 39003
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[iVar020] + 60);
	return;
}

void Function_168(int iParam0, var uParam1, bool bParam2) //Position: 0x98BF / 39103
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[iVar020]);
	PRINTVECTOR(*uParam1[iVar020]);
	PRINTNL();
	return;
}

void Function_169(int iParam0, var uParam1, bool bParam2) //Position: 0x992E / 39214
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	uParam1[iVar020]->f_72 = bParam2;
	return;
}

void Function_170(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9989 / 39305
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_76(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_171(int iParam0, var uParam1, vector3 vParam2) //Position: 0x99EF / 39407
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_76(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_172(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9A57 / 39511
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_76(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_173(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9AC1 / 39617
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_76(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_174(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9B26 / 39718
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_76(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_175(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9B8E / 39822
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_76(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*uParam1[iVar020] = { StackVal, StackVal, vParam2 };
}

void Function_176(int iParam0, var uParam1, int iParam2) //Position: 0x9BF1 / 39921
{
	int iVar0;
	
	iVar0 = iParam0;
	uParam1[iVar020]->f_76 = iParam2;
	return;
}

int Function_177(int iParam0) //Position: 0x9C05 / 39941
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_178(&(Global_29008[iParam0]), 4);
}

bool Function_178(var uParam0, int iParam1) //Position: 0x9C21 / 39969
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_179(var uParam0, var uParam1, bool bParam2) //Position: 0x9C3D / 39997
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(bParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_197())
	{
		return 1;
	}
	strcpy(&cVar1, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_178(&(Global_29008[bParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_16(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_180(var uParam0, var uParam1, bool bParam2) //Position: 0x9D1E / 40222
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_197())
	{
		return;
	}
	strcpy(&cVar1, Function_18(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_178(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_185(&(Global_29008[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_182(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_182(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

struct<16> Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x9E06 / 40454
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_98(&Var0 + 8, 1);
	}
	else
	{
		Function_43(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_98(&Var0 + 8, 2);
	}
	else
	{
		Function_43(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_98(&Var0 + 8, 4);
	}
	else
	{
		Function_43(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_98(&Var0 + 8, 8);
	}
	else
	{
		Function_43(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_98(&Var0 + 8, 16);
	}
	else
	{
		Function_43(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_98(&Var0 + 8, 32);
	}
	else
	{
		Function_43(&Var0 + 8, 32);
	}
	Function_43(&Var0 + 8, 64);
	Function_43(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

void Function_182(var uParam0, int iParam1) //Position: 0x9ECF / 40655
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_183(int iParam0, int iParam1) //Position: 0x9EDE / 40670
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	*iParam0 = (*iParam0 - iVar0);
	return;
}

bool Function_184(int iParam0, bool bParam1) //Position: 0x9EF5 / 40693
{
	int iVar0;
	
	iVar0 = Function_90(iParam0);
	if (!Function_89(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_185(var uParam0, int iParam1) //Position: 0x9F32 / 40754
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_186() //Position: 0x9F41 / 40769
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_194(3, 3);
	bVar0 = bVar0;
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_wipetable_w_any", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stool_sit_newspaper", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_drunkrowdy_spawn", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_push_any", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/feed_chickens", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/dog_peeing", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/browse_table", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_knock_on_door", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/browse_table_low", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/player_sit_movie", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/ticket_taker_link", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/bench_chair", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_192(&Local_33 + 4, "$/content/scripting/gringo/simplegringo/merchant_lay_bed", 1, 0);
	if (!Function_187(&Local_33 + 4))
	{
		return 0;
	}
	Local_33 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(Local_33))
	{
		Local_33 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&Local_33 + 788) = { -2158.348f, 21.02943f, 2597.453f };
	*(&Local_33 + 788 + 12) = { 0.0f, 89.88011f, 0.0f };
	Local_33.f_812 = CREATE_POINT_IN_LAYOUT(Local_33, "player_save_flag_ARM", -2158.348f, 21.02943f, 2597.453f, 0.0f, 89.88011f, 0.0f);
	*(&Local_33 + 816) = { -2125.274f, 16.90918f, 2598.47f };
	*(&Local_33 + 816 + 12) = { 0.0f, 181.1964f, 0.0f };
	Local_33.f_840 = CREATE_POINT_IN_LAYOUT(Local_33, "player_shop_flag_DOC", -2125.274f, 16.90918f, 2598.47f, 0.0f, 181.1964f, 0.0f);
	*(&Local_33 + 844) = { -2136.934f, 16.87223f, 2599.046f };
	*(&Local_33 + 844 + 12) = { 0.0f, -178.3221f, 0.0f };
	Local_33.f_868 = CREATE_POINT_IN_LAYOUT(Local_33, "player_shop_flag_GUN", -2136.934f, 16.87223f, 2599.046f, 0.0f, -178.3221f, 0.0f);
	*(&Local_33 + 872) = { -2146.717f, 16.77384f, 2624.388f };
	*(&Local_33 + 872 + 12) = { 0.0f, -47.42792f, 0.0f };
	Local_33.f_896 = CREATE_POINT_IN_LAYOUT(Local_33, "player_shop_flag_GEN", -2146.717f, 16.77384f, 2624.388f, 0.0f, -47.42792f, 0.0f);
	Local_33.f_900 = CREATE_POINT_IN_LAYOUT(Local_33, "player_purchase_flag_ARM", -2157.764f, 19.9733f, 2600.405f, 0.0f, 89.88011f, 0.0f);
	*(&Local_33 + 904) = { -2165.783f, 16.87441f, 2592.628f };
	*(&Local_33 + 904 + 12) = { 0.0f, -87.274f, 0.0f };
	Local_33.f_928 = CREATE_POINT_IN_LAYOUT(Local_33, "armf_blacksmith", -2165.783f, 16.87441f, 2592.628f, 0.0f, -87.274f, 0.0f);
	*(&Local_33 + 932) = { -2173.403f, 16.8885f, 2597.779f };
	*(&Local_33 + 932 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_33.f_956 = CREATE_POINT_IN_LAYOUT(Local_33, "armf_dentist", -2173.403f, 16.8885f, 2597.779f, 0.0f, 0.0f, 0.0f);
	Local_33.f_960 = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", Local_33, 8, 0);
	*(&Local_33 + 964[06]) = { -2157.308f, 16.44941f, 2627.966f };
	*(&Local_33 + 964[06] + 12) = { 0.0f, -170.8768f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_33, "dropOffCorn", -2157.308f, 16.44941f, 2627.966f, 0.0f, -170.8768f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_33.f_960);
	Local_33.f_992 = CREATE_OBJECTSET_IN_LAYOUT("moveboxgrpSet", Local_33, 8, 0);
	*(&Local_33 + 996[06]) = { -2207.618f, 16.50616f, 2613.018f };
	*(&Local_33 + 996[06] + 12) = { 0.0f, 75.04214f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_33, "dropOffBox", -2207.618f, 16.50616f, 2613.018f, 0.0f, 75.04214f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_33.f_992);
	*(&Local_33 + 1024) = { -2074.223f, 19.52564f, 2647.24f };
	*(&Local_33 + 1024 + 12) = { 0.0f, -134.8511f, 0.0f };
	Local_33.f_1048 = CREATE_POINT_IN_LAYOUT(Local_33, "armf_watchMovie", -2074.223f, 19.52564f, 2647.24f, 0.0f, -134.8511f, 0.0f);
	*(&Local_33 + 1052) = { -2078.746f, 18.49339f, 2638.829f };
	*(&Local_33 + 1052 + 12) = { 0.0f, 43.11663f, 0.0f };
	Local_33.f_1076 = CREATE_POINT_IN_LAYOUT(Local_33, "armf_leaveMovie", -2078.746f, 18.49339f, 2638.829f, 0.0f, 43.11663f, 0.0f);
	Local_33.f_1080 = CREATE_POINT_IN_LAYOUT(Local_33, "player_purchase_flag_alt_ARM", -2161.875f, 19.972f, 2597.579f, 0.0f, 89.88011f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_6", "rand_idle_stand", -2164.242f, 16.87458f, 2605.731f, 0.0f, -178.681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_33, "eee", "npreaching", -2159.994f, 16.44941f, 2620.0f, 0.0f, 705.2877f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_8", "Pee", -2153.916f, 16.45634f, 2587.205f, 0.0f, 94.901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_13", "repair_kneel", -2191.137f, 16.32234f, 2570.69f, 0.0f, 269.278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_14", "repair_kneel", -2191.222f, 16.32149f, 2583.342f, 0.0f, 272.1305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_19", "rand_idle_stand", -2201.517f, 16.97089f, 2605.947f, 0.0f, 94.901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_20", "rand_idle_stand", -2187.246f, 16.95369f, 2605.591f, 0.0f, -88.72202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_30", "rand_idle_stand", -2152.235f, 16.55283f, 2565.279f, 0.0f, -175.099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_34", "rand_idle_stand", -2163.689f, 19.94677f, 2605.685f, 0.0f, -179.7939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_38", "rand_idle_stand", -2130.46f, 16.59232f, 2602.579f, 0.0f, -174.564f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_41", "nlean_rail", -2187.474f, 16.94478f, 2611.293f, 0.0f, -88.018f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_42", "rand_idle_stand", -2138.115f, 16.87216f, 2602.979f, 0.0f, 178.356f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_43", "Pee", -2172.814f, 16.47535f, 2584.011f, 0.0f, 210.5279f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_50", "rand_idle_stand", -2162.888f, 19.97975f, 2593.445f, 0.0f, 91.589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_53", "rand_idle_stand", -2144.297f, 16.45328f, 2590.22f, 0.0f, 37.247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_54", "Pee", -2158.445f, 16.62463f, 2557.712f, 0.0f, -132.6798f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_56", "repair_kneel", -2142.03f, 16.46156f, 2573.172f, 0.0f, -90.376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_60", "rand_idle_stand", -2159.389f, 16.33366f, 2583.355f, 0.0f, 23.02206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_61", "Rand_Idle_NearWall", -2190.146f, 16.31624f, 2586.848f, 0.0f, -85.46859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_65", "nlean_rail", -2157.103f, 16.89572f, 2602.139f, 0.0f, -177.842f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_69", "nlean_rail", -2170.11f, 19.98182f, 2605.159f, 0.0f, 147.6108f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_72", "nlean_rail", -2176.293f, 19.95606f, 2597.29f, 0.0f, 91.297f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_74", "nlean_rail", -2158.079f, 19.98192f, 2605.014f, 0.0f, -90.745f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_78", "nlean_rail", -2187.537f, 16.92989f, 2602.908f, 0.0f, -88.343f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_79", "nlean_rail", -2174.889f, 16.88762f, 2600.959f, 0.0f, 136.0875f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_81", "nlean_rail", -2140.576f, 19.8104f, 2602.695f, 0.0f, 179.358f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_87", "Rand_Idle_NearWall", -2174.01f, 16.8852f, 2599.3f, 0.0f, 138.104f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_33, "fff", "npreaching", -2092.849f, 16.44941f, 2620.062f, 0.0f, 290.4833f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_98", "Rand_Idle_NearWall", -2197.808f, 16.57718f, 2612.909f, 0.0f, 89.447f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_99", "Rand_Idle_NearWall", -2197.853f, 16.9272f, 2603.58f, 0.0f, 91.224f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_100", "Rand_Idle_NearWall", -2196.893f, 16.57307f, 2595.137f, 0.0f, 1.303f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType2", "lean_rail_whore", -2174.445f, 19.96103f, 2601.539f, 0.0f, 135.4749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType3", "lean_rail_whore", -2174.999f, 19.96569f, 2600.96f, 0.0f, 132.9681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType4", "lean_rail_whore", -2171.596f, 19.98828f, 2604.265f, 0.0f, 139.4323f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType10", "Rand_Idle_NearWall", -2154.863f, 16.44941f, 2585.234f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType13", "Rand_Idle_NearWall", -2134.428f, 16.44941f, 2592.068f, 0.0f, 3.154f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType15", "Pee", -2129.484f, 16.47092f, 2588.084f, 0.0f, 89.882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType16", "Rand_Idle_NearWall", -2142.738f, 16.6462f, 2558.908f, 0.0f, -90.16124f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType18", "Pee", -2167.875f, 16.5755f, 2564.619f, 0.0f, 143.457f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType19", "look_out_window_R", -2174.882f, 16.56467f, 2578.452f, 0.0f, 123.1951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType21", "nlean_rail", -2167.019f, 19.95521f, 2598.867f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType22", "nlean_rail", -2162.805f, 19.97492f, 2591.801f, 0.0f, 90.28026f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_whore_lean1", "lean_rail_whore", -2165.178f, 19.96229f, 2598.949f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType27", "Rand_Idle_NearWall", -2141.791f, 16.44941f, 2591.46f, 0.0f, -0.006908528f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType30", "Rand_Idle_NearWall", -2160.471f, 16.44941f, 2622.198f, 0.0f, -89.70406f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType31", "Pee", -2155.852f, 16.44941f, 2644.829f, 0.0f, -164.2836f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType32", "nlean_rail", -2142.831f, 20.02196f, 2624.504f, 0.0f, -89.68678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType34", "rand_idle_stand", -2141.781f, 16.77385f, 2625.852f, 0.0f, -88.719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType41", "rand_idle_stand", -2160.18f, 16.29214f, 2583.555f, 0.0f, -0.1386576f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType46", "rand_idle_stand", -2126.755f, 16.58855f, 2618.947f, 0.0f, 13.59654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType47", "rand_idle_stand", -2087.167f, 16.60519f, 2614.154f, 0.0f, 110.107f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType52", "rand_idle_stand", -2084.224f, 16.72931f, 2617.299f, 0.0f, 63.07613f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType66", "Pee", -2085.793f, 16.44941f, 2598.167f, 0.0f, -149.536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType71", "rand_idle_stand", -2109.522f, 17.02981f, 2587.233f, 0.0f, 0.603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType72", "repair_kneel", -2115.708f, 16.5358f, 2581.5f, 0.0f, 133.2005f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType74", "Rand_Idle_NearWall", -2116.591f, 16.64206f, 2586.317f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType76", "Rand_Idle_NearWall", -2143.697f, 16.87216f, 2600.705f, 0.0f, -177.081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType90", "rand_idle_stand", -2160f, 16.44941f, 2636.0f, 0.0f, -130.782f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType93", "Rand_Idle_NearWall", -2152.81f, 16.44941f, 2632.356f, 0.0f, -176.407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType123", "Rand_Idle_NearWall", -2133.373f, 16.612f, 2625.567f, 0.0f, -86.9981f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_preacher", "lie_sleep_on_bed_r", -2066.7f, 19.53035f, 2653.851f, 0.0f, 43.05116f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_pee", "Pee", -2061.803f, 18.79698f, 2647.822f, 0.0f, 84.80161f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_stables", "sleeping_scripted", -2169.625f, 19.76811f, 2573.771f, 0.0f, 94.89822f, 0.0f);
	Local_33.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_bartender", "lie_sleep_on_bed_l", -2156.266f, 16.89338f, 2590.763f, 0.0f, -87.27148f, 0.0f);
	Local_33.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_DnD01", "sleeping_scripted", -2153.723f, 16.69863f, 2554.31f, 0.0f, 270.9525f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1104), 0);
	Local_33.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_DnD02", "sleeping_scripted", -2152.576f, 16.64987f, 2553.116f, 0.0f, 1.27207f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1108), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType217", "Rand_Idle_NearWall", -2139.177f, 19.8104f, 2600.647f, 0.0f, -181.754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_doctor", "lie_sleep_on_bed_r", -2124.276f, 16.905f, 2594.836f, 0.0f, 273.7321f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType38", "Rand_Idle_NearWall", -2144.218f, 20.02196f, 2623.854f, 0.0f, -42.719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType36", "Rand_Idle_NearWall", -2148.087f, 16.77385f, 2621.157f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType35", "nlean_rail", -2147.308f, 16.77385f, 2619.759f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType33", "nlean_rail", -2147.764f, 20.01724f, 2620.543f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType186", "lean_rail_nospawn", -2168.421f, 17.42125f, 2629.843f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType95", "Rand_Idle_NearWall", -2161.991f, 16.90901f, 2634.251f, 0.0f, 89.674f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_trainstation", "lie_sleep_on_bed_l", -2192.959f, 16.971f, 2597.632f, 0.0f, 0.1749532f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType28", "Rand_Idle_NearWall", -2162.079f, 16.91562f, 2621.518f, 0.0f, -3.206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_29", "Rand_Idle_NearWall", -2169.906f, 16.92029f, 2627.131f, 0.0f, 91.21906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_18", "rand_idle_stand", -2170.754f, 16.93093f, 2623.234f, 0.0f, 45.90849f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_frieghtStation", "lie_sleep_on_bed_l", -2165.261f, 16.9224f, 2635.022f, 0.0f, -177.7328f, 0.0f);
	Local_33.f_1124 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_lean", "rand_idle_stand", -2147.091f, 16.62627f, 2562.163f, 0.0f, 181.9847f, 0.0f), Local_33.f_1124);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_counter", "stand_wipetable_w_any", -2155.969f, 16.62888f, 2559.935f, 0.0f, 90.4558f, 0.0f), Local_33.f_1124);
	Local_33.f_1128 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType67", "Rand_Idle_NearWall", -2109.827f, 17.02981f, 2601.334f, 0.0f, 178.738f, 0.0f), Local_33.f_1128);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_hammer_wall1", "stand_hammer_wall", -2117.659f, 17.02981f, 2601.285f, 0.0f, 0.0f, 0.0f), Local_33.f_1128);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "stool_sit_newspaper", "stool_sit_newspaper", -2115.121f, 17.01704f, 2599.524f, 0.0f, 361.723f, 0.0f), Local_33.f_1128);
	Local_33.f_1132 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType48", "rand_idle_stand", -2110.905f, 16.55575f, 2618.797f, 0.0f, 11.19181f, 0.0f), Local_33.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType56", "Pee", -2116.492f, 16.44941f, 2624.0f, 0.0f, -130.5531f, 0.0f), Local_33.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType284", "rand_idle_stand", -2112.385f, 16.56983f, 2620.674f, 0.0f, -17.84062f, 0.0f), Local_33.f_1132);
	Local_33.f_1136 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType82", "rand_idle_stand", -2119.883f, 16.72542f, 2620.72f, 0.0f, 25.03708f, 0.0f), Local_33.f_1136);
	Local_33.f_1140 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType63", "look_distance_binocs", -2067.405f, 16.69958f, 2617.552f, 0.0f, -81.38427f, 0.0f), Local_33.f_1140);
	Local_33.f_1144 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType237", "Rand_Idle_NearWall_nospawn", -2090.025f, 16.96187f, 2604.178f, 0.0f, 115.7748f, 0.0f), Local_33.f_1144);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType239", "lean_rail_nospawn", -2089.427f, 16.9485f, 2608.886f, 0.0f, 115.7847f, 0.0f), Local_33.f_1144);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType252", "stand_lookdistance_w_any", -2091.729f, 16.96536f, 2602.352f, 0.0f, 39.85849f, 0.0f), Local_33.f_1144);
	Local_33.f_1148 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType253", "stand_announce", -2187.911f, 16.94703f, 2607.581f, 0.0f, 88.12452f, 0.0f), Local_33.f_1148);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType254", "stand_announce", -2204.041f, 16.51072f, 2606.236f, 0.0f, 264.013f, 0.0f), Local_33.f_1148);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType255", "stand_announce", -2198.794f, 16.96556f, 2607.583f, 0.0f, -89.32014f, 0.0f), Local_33.f_1148);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType256", "stand_announce", -2200.322f, 16.96627f, 2610.745f, 0.0f, 315.166f, 0.0f), Local_33.f_1148);
	Local_33.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_33, "triggerDancer02", "stand_drunk_dancing_link", -2169.921f, 16.87449f, 2590.573f, 0.0f, 167.6132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1152), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType231", "stand_lookdistance_w_any", -2205.243f, 16.59217f, 2592.872f, 0.0f, 18.75779f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType64", "Rand_Idle_NearWall", -2081.491f, 16.74427f, 2620.966f, 0.0f, 116.767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType240", "stand_drunk_rowdydrink", -2169.033f, 16.41378f, 2608.294f, 0.0f, -74.80332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType241", "stand_drunk_rowdydrink", -2167.032f, 16.28049f, 2608.5f, 0.0f, 60.83088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType242", "stand_drunk_rowdydrink", -2167.314f, 16.40722f, 2607.566f, 0.0f, 123.469f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType243", "stand_drunk_rowdydrink", -2168.759f, 16.46106f, 2607.238f, 0.0f, -128.1123f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType244", "stand_drunk_rowdydrink", -2167.855f, 16.26282f, 2609.123f, 0.0f, 20.68025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType248", "rand_idle_stand", -2152.155f, 16.77385f, 2619.603f, 0.0f, -1.021891f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_dnd_rowdydrink", "stand_drunkRowdy_Spawn", -2090.957f, 16.47942f, 2614.072f, 0.0f, -223.5286f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1156), 1);
	Local_33.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_dnd_rowdydrink1", "stand_drunkRowdy_Spawn", -2090.664f, 16.4346f, 2616.222f, 0.0f, 88.49599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1160), 1);
	Local_33.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_worried", "stand_announce", -2090.604f, 16.46924f, 2615.268f, 0.0f, 109.626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1164), 1);
	Local_33.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_yelling", "stand_yelling_mid", -2092.197f, 16.47942f, 2613.164f, 0.0f, -195.479f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1168), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "arm_yell_down", "nlean_rail", -2164.722f, 19.98465f, 2586.89f, 0.0f, 179.8283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "fence_talking", "lean_fence_L_talking", -2162.677f, 19.95568f, 2594.332f, 0.0f, 90.3136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType264", "bar_drink_serve", -2165.634f, 16.89193f, 2593.316f, 0.0f, -88.6147f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType266", "bar_drink_serve", -2165.617f, 16.87588f, 2594.951f, 0.0f, -90.22275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType270", "Bar_lean_stand", -2165.66f, 16.89193f, 2595.927f, 0.0f, -90.22275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType271", "nlean_rail", -2172.252f, 17.77166f, 2588.141f, 0.0f, -91.36955f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType279", "horse_stay", -2173.197f, 16.56468f, 2558.211f, 0.0f, -91.77948f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType281", "horse_stay", -2168f, 16.01711f, 2532f, 0.0f, 17.754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType282", "horse_stay", -2160.0f, 16.21155f, 2527.988f, 0.0f, -217.4164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2173.376f, 16.87441f, 2593.056f, 0.0f, -74.3936f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_33, "triggerDancer01", "stand_drunk_dancing_link", -2169.052f, 16.87441f, 2589.236f, 0.0f, 207.3129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1172), 1);
	Local_33.f_1176 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_bartender_bar_work", "stand_bartender_bar_work", -2163.707f, 16.87201f, 2594.99f, 0.0f, 89.79378f, 0.0f), Local_33.f_1176);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "mex_flirt_stand_link", "mex_flirt_stand_link", -2165.617f, 16.87441f, 2591.68f, 0.0f, 88.5307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "mex_flirt_stand_link1", "mex_flirt_stand_link", -2173.214f, 17.77769f, 2585.899f, 0.0f, -136.866f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_33, "player_sleep_ARM", "player_sleep_bed_R", -2156.463f, 19.94658f, 2596.331f, 0.0f, -90.89016f, 0.0f);
	Local_33.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Locked_Footlocker", "Locked_Footlocker", -2159.828f, 19.9203f, 2598.874f, 0.0f, 0.293473f, 0.0f);
	DECOR_SET_BOOL(Local_33.f_1184, "PlayerHouseChest", 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L", "look_out_window_L", -2193.027f, 16.97576f, 2612.505f, 0.0f, 180.6047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_table", "lean_table", -2195.412f, 16.9651f, 2604.664f, 0.0f, 89.03907f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "nsit_docks", "nsit_docks", -2204.892f, 19.72501f, 2619.306f, 0.0f, -89.25264f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L1x", "look_out_window_L", -2168.6f, 17.41901f, 2632.336f, 0.0f, 89.71231f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_anyx", "stand_lookdistance_w_any", -2190.059f, 16.54568f, 2619.522f, 0.0f, -84.13775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_distance_binocsx", "look_distance_binocs", -2208.104f, 19.7898f, 2620.879f, 0.0f, 174.3069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talkingx", "lean_fence_H_talking", -2191.414f, 16.20722f, 2574.817f, 0.0f, -88.865f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talking1x", "lean_fence_H_talking", -2189.916f, 16.40691f, 2561.385f, 0.0f, 87.66937f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L2x", "look_out_window_L", -2190.495f, 16.99175f, 2606.629f, 0.0f, -91.09498f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L3x", "look_out_window_L", -2196.375f, 16.97022f, 2608.372f, 0.0f, 90.3454f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_docks11x", "nsit_docks", -2171.954f, 17.41891f, 2630.839f, 0.0f, 84.45539f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand11x", "rand_idle_stand", -2170.156f, 16.91929f, 2622.642f, 0.0f, 45.69848f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Pee12x", "Pee", -2163.634f, 16.44941f, 2637.621f, 0.0f, 32.65222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R11x", "look_out_window_R", -2163.833f, 16.9118f, 2622.975f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R12x", "look_out_window_R", -2162.215f, 16.90901f, 2619.504f, 0.0f, 10.08464f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "use_shelf10x", "nuse_shelf", -2162.611f, 16.91421f, 2625.158f, 0.0f, -87.28861f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "use_shelf11x", "nuse_shelf", -2164.559f, 16.91039f, 2632.775f, 0.0f, 149.5729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any11x", "stand_lookdistance_w_any", -2169.946f, 17.41941f, 2631.192f, 0.0f, 64.43163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talking", "lean_fence_H_talking", -2169.24f, 16.4355f, 2554.9f, 0.0f, 89.81428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_hammer_wall", "stand_hammer_wall", -2179.42f, 16.48747f, 2554.251f, 0.0f, -89.59718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand", "rand_idle_stand", -2177.09f, 16.52774f, 2573.944f, 0.0f, 98.65912f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand12", "rand_idle_stand", -2177.072f, 16.53057f, 2575.016f, 0.0f, 88.32368f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand13", "rand_idle_stand", -2164.281f, 16.46638f, 2573.677f, 0.0f, 271.2641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand14", "rand_idle_stand", -2164.32f, 16.46638f, 2574.818f, 0.0f, 271.2641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L4", "look_out_window_L", -2164.184f, 16.44568f, 2541.941f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talking2", "lean_fence_H_talking", -2156.483f, 16.5428f, 2541.823f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_table1", "lean_table", -2146.071f, 16.63495f, 2556.974f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R", "look_out_window_R", -2144.218f, 16.63187f, 2561.093f, 0.0f, -88.93098f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_blacksmith", "lie_sleep_on_bed_l", -2155.853f, 16.63935f, 2556.417f, 0.0f, 91.40843f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R13", "look_out_window_R", -2143.866f, 16.44941f, 2634.852f, 0.0f, 92.58372f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand15", "rand_idle_stand", -2155.129f, 16.44941f, 2633.409f, 0.0f, 142.5491f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2154.127f, 16.44941f, 2634.827f, 0.0f, 131.6572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_rail15x", "nlean_rail", -2150.81f, 16.77385f, 2619.821f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand16", "rand_idle_stand", -2144.35f, 16.78238f, 2620.699f, 0.0f, -37.14258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R15", "look_out_window_R", -2149.081f, 16.77385f, 2622.638f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "use_shelf13", "nuse_shelf", -2146.548f, 16.77385f, 2626.819f, 0.0f, 178.3069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "use_shelf12", "nuse_shelf", -2149.791f, 16.77385f, 2628.58f, 0.0f, 178.3069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_distance_binocs16x", "look_distance_binocs", -2142.713f, 20.02196f, 2626.441f, 0.0f, -143.8928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_railz", "nlean_rail", -2145.077f, 20.02196f, 2621.982f, 0.0f, -44.45429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWallz", "Rand_Idle_NearWall", -2148.146f, 19.96004f, 2621.185f, 0.0f, 0.6971646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any12", "stand_lookdistance_w_any", -2151.815f, 19.95455f, 2620.367f, 0.0f, 53.34575f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "mex_pickGarbage", "mex_pickGarbage", -2135.736f, 16.44941f, 2625.605f, 0.0f, -118.7554f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "mex_pickGarbage1", "mex_pickGarbage", -2117.878f, 16.34741f, 2629.083f, 0.0f, 47.83566f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -2123.178f, 16.6948f, 2621.176f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2108.371f, 16.44941f, 2621.976f, 0.0f, -74.40768f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_table2", "lean_table", -2065.618f, 19.53035f, 2654.512f, 0.0f, 134.5308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L7", "look_out_window_L", -2071.781f, 19.43289f, 2642.833f, 0.0f, 43.94379f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talking3", "lean_fence_H_talking", -2071.249f, 16.65631f, 2617.191f, 0.0f, 23.64186f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any14", "stand_lookdistance_w_any", -2084.098f, 16.70948f, 2620.059f, 0.0f, 80.12573f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L9", "look_out_window_L", -2090.384f, 16.96457f, 2606.772f, 0.0f, 114.1929f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_distance_binocs", "look_distance_binocs", -2091.325f, 16.96188f, 2605.651f, 0.0f, 102.1292f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_L_talking", "lean_fence_L_talking", -2092.172f, 16.95293f, 2602.69f, 0.0f, 115.9281f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_33.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -2083.03f, 16.96188f, 2599.26f, 0.0f, 25.04439f, 0.0f);
	Local_33.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleep_prisoner", "lie_sleep_on_bed_r", -2080.711f, 16.96188f, 2604.168f, 0.0f, -153.7522f, 0.0f);
	Local_33.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_announce", "stand_announce", -2080.467f, 16.96188f, 2602.948f, 0.0f, -63.28666f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L10", "look_out_window_L", -2082.81f, 16.96188f, 2603.262f, 0.0f, 116.0992f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R18", "look_out_window_R", -2083.772f, 16.96188f, 2601.11f, 0.0f, 115.0678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_distance_binocs17", "look_distance_binocs", -2112.446f, 17.02981f, 2587.183f, 0.0f, -14.99437f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand17", "rand_idle_stand", -2110.686f, 17.02981f, 2602.168f, 0.0f, 179.6518f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand18", "rand_idle_stand", -2125.737f, 16.88595f, 2602.359f, 0.0f, 179.6518f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand19", "rand_idle_stand", -2119.52f, 17.00331f, 2602.167f, 0.0f, 179.6518f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any15", "stand_lookdistance_w_any", -2117.373f, 17.02981f, 2602.097f, 0.0f, 127.9576f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -2124.348f, 16.90333f, 2600.418f, 0.0f, 179.3093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R19", "look_out_window_R", -2129.349f, 16.61306f, 2602.486f, 0.0f, 183.1944f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -2137.998f, 16.87524f, 2600.658f, 0.0f, 178.6125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_L_talking1", "lean_fence_L_talking", -2144.883f, 19.8104f, 2602.59f, 0.0f, -179.08f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_fence_low1", "sit_fence_low", -2145.288f, 19.8104f, 2601.557f, 0.0f, 89.64549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any16", "stand_lookdistance_w_any", -2138.745f, 19.8104f, 2602.665f, 0.0f, -101.1778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "nlean_rail", "nlean_rail", -2136.458f, 19.86377f, 2601.958f, 0.0f, -89.1021f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "use_shelf15", "nuse_shelf", -2142.562f, 16.87216f, 2595.831f, 0.0f, 94.53776f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_announce1", "stand_announce", -2145.085f, 19.8104f, 2597.825f, 0.0f, 2.444614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talking4", "lean_fence_H_talking", -2153.772f, 16.44941f, 2598.243f, 0.0f, 85.6907f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_L_talking2", "lean_fence_L_talking", -2158.817f, 16.88975f, 2605.337f, 0.0f, -87.18102f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -2161.728f, 16.87863f, 2603.609f, 0.0f, 180.9005f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_L_talking3", "lean_fence_L_talking", -2171.504f, 16.88975f, 2604.152f, 0.0f, 141.1548f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_fence_low2", "sit_fence_low", -2176.4f, 19.98138f, 2594.772f, 0.0f, 89.01402f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any17", "stand_lookdistance_w_any", -2176.207f, 20.04194f, 2592.683f, 0.0f, 17.81982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_H_talking5", "lean_fence_H_talking", -2176.997f, 16.56471f, 2588.368f, 0.0f, -93.96775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_L_talking4", "lean_fence_L_talking", -2176.047f, 19.94883f, 2598.568f, 0.0f, 106.6973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_fence_L_talking5", "lean_fence_L_talking", -2167.177f, 19.97874f, 2605.375f, 0.0f, 179.5665f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any18", "stand_lookdistance_w_any", -2155.892f, 20.01127f, 2602.075f, 0.0f, -103.3536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_fence_low3", "sit_fence_low", -2157.925f, 19.99962f, 2607.469f, 0.0f, -91.6655f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_table7", "lean_table", -2167.044f, 16.87441f, 2594.208f, 0.0f, 48.96613f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_table8", "lean_table", -2169.899f, 16.8748f, 2595.687f, 0.0f, 122.5053f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", -2166.893f, 19.9811f, 2585.772f, 0.0f, 180.1479f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", -2154.495f, 16.44941f, 2623.977f, 0.0f, -92.92416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_rail_push_any", "lean_rail_push_any", -2173.194f, 19.97495f, 2602.803f, 0.0f, 136.8586f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L12", "look_out_window_L", -2166.921f, 19.79557f, 2571.635f, 0.0f, -93.35995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_docks12", "nsit_docks", -2168.921f, 19.79536f, 2571.135f, 0.0f, 93.41817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "horse_tend2", "horse_tend", -2172.122f, 16.56471f, 2575.044f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "horse_stay", "horse_stay", -2168.317f, 16.56469f, 2574.49f, 0.0f, 214.9998f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_barrel", "sit_barrel", -2153.645f, 16.44941f, 2617.644f, 0.0f, 179.8896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_sellPaper", "stand_sellPaper", -2190.739f, 16.54066f, 2616.604f, 0.0f, -85.88631f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "knl_watertrough", "knl_watertrough", -2158.693f, 16.44941f, 2576.211f, 0.0f, 179.2573f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "knl_watertrough1", "knl_watertrough", -2156.368f, 16.44941f, 2604.331f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "knl_watertrough2", "knl_watertrough", -2173.254f, 16.44941f, 2626.777f, 0.0f, -89.20662f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType283", "rand_idle_stand", -2087.949f, 16.60519f, 2612.018f, 0.0f, 110.107f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType287", "rand_idle_stand", -2132.379f, 16.58855f, 2618.899f, 0.0f, -27.44688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType288", "Rand_Idle_NearWall", -2143.395f, 16.77385f, 2625.513f, 0.0f, -89.81995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_railz1", "nlean_rail", -2143.662f, 20.02196f, 2623.37f, 0.0f, -44.45429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -2159.542f, 16.44941f, 2632.819f, 0.0f, -91.22659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_distance_binocsx1", "look_distance_binocs", -2208.026f, 19.7898f, 2616.236f, 0.0f, 13.98371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L13", "Rand_Idle_NearWall_Shoulder_L", -2175.934f, 16.47405f, 2532.868f, 0.0f, 179.2605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L14", "repair_kneel", -2160.465f, 16.33682f, 2519.147f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType289", "look_out_window_R", -2141.506f, 16.6462f, 2557.709f, 0.0f, -122.7426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_33, "feed_chickens", "feed_chickens", -2149.653f, 16.46369f, 2546.724f, 0.0f, -32.78732f, 0.0f);
	Local_33.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_33, "feed_chickens1", "feed_chickens", -2140.72f, 16.46369f, 2546.855f, 0.0f, -42.18499f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "aiGringoLocType290", "rand_idle_stand", -2144.209f, 16.87216f, 2602.623f, 0.0f, -259.5937f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Location_102", "look_out_window_R", -2166.648f, 16.87458f, 2605.398f, 0.0f, -178.681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1220 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_saloon_01", "dog_peeing", -2176.938f, 16.41905f, 2593.074f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_station_01", "dog_sleeping", -2185.926f, 16.37673f, 2605.409f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_station_01", "dog_peeing", -2186.083f, 16.3475f, 2602.338f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_station_02", "dog_peeing", -2204.967f, 16.64079f, 2595.141f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_saloon_03", "dog_sleeping", -2174.763f, 16.40189f, 2596.316f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_saloon_02", "dog_peeing", -2157.361f, 16.42052f, 2606.533f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_saloon_01", "dog_sleeping", -2173.104f, 16.53476f, 2604.969f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_saloon_03", "dog_peeing", -2168.33f, 16.37242f, 2582.668f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_gunsmith_01", "dog_sleeping", -2143.878f, 16.41491f, 2587.041f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_dpexpress_01", "dog_peeing", -2165.343f, 16.42262f, 2617.71f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_gunsmith_01", "dog_peeing", -2133.749f, 16.57407f, 2603.01f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_crossstreet_01", "dog_sleeping", -2114.696f, 16.57451f, 2619.658f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_crossstreet_02", "dog_sleeping", -2109.964f, 16.5428f, 2620.052f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_crossstreet_01", "dog_peeing", -2116.7f, 16.33736f, 2621.7f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_crossstreet_04", "dog_sleeping", -2129.593f, 16.52833f, 2619.152f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_crossstreet_02", "dog_peeing", -2135.163f, 16.40815f, 2621.397f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_crossstreet_03", "dog_peeing", -2144.514f, 16.37378f, 2617.726f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_pens_01", "dog_sleeping", -2177.076f, 16.48463f, 2567.023f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_pens_02", "dog_sleeping", -2141.78f, 16.59721f, 2559.999f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_pens_01", "dog_peeing", -2156f, 16.41133f, 2574.28f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_outskirts_01", "dog_peeing", -2087.994f, 16.45528f, 2598.725f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_outskirts_02", "dog_sleeping", -2084.795f, 16.55237f, 2614.501f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sleeping_outskirts_03", "dog_sleeping", -2074.266f, 16.66845f, 2619.537f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_outskirts_02", "dog_peeing", -2084.092f, 16.48549f, 2622.574f, 0.0f, 0.0f, 0.0f), Local_33.f_1220);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_peeing_church_01", "dog_peeing", -2076f, 18.45389f, 2637.149f, 0.0f, -98.08987f, 0.0f), Local_33.f_1220);
	Local_33.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_33, "bathroom_break", "Pee", -2165.054f, 16.88134f, 2586.268f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1224), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "leaning_stand", "leaning_stand", -2165.598f, 16.87441f, 2594.096f, 0.0f, -90.42302f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_33, "drink_player", "drink_player", -2165.623f, 16.87441f, 2596.735f, 0.0f, -89.85806f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "leaning_stand1", "leaning_stand", -2165.573f, 16.87441f, 2598.364f, 0.0f, -89.18932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_33, "nuse_shelf", "nuse_shelf", -2162.475f, 16.87441f, 2596.327f, 0.0f, -89.87218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1232), 0);
	Local_33.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_33, "browse_table", "browse_table", -2162.348f, 16.87441f, 2599.653f, 0.0f, -89.73068f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1236), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R20", "look_out_window_R", -2113.121f, 17.02981f, 2602.041f, 0.0f, 180.4369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_knock_on_door", "stand_knock_on_door", -2112.364f, 17.02981f, 2588.467f, 0.0f, 178.6835f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_knock_on_door1", "stand_knock_on_door", -2082.3f, 16.72945f, 2619.006f, 0.0f, -63.12367f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_33, "whore_stand_flirt", "mex_flirt_stand_link", -2166.973f, 16.87441f, 2597.623f, 0.0f, -5.155336f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1240), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -2168.673f, 16.87441f, 2595.944f, 0.0f, 231.3069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -2168.076f, 16.87441f, 2596.689f, 0.0f, 29.81904f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -2173.386f, 16.87441f, 2592.021f, 0.0f, -102.9586f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_L15", "look_out_window_L", -2167.305f, 16.87441f, 2602.172f, 0.0f, 180.5833f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall6", "Rand_Idle_NearWall", -2168.365f, 16.87441f, 2602.208f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_33, "hhh", "npreaching", -2175.464f, 16.47526f, 2604.99f, 0.0f, -42.51667f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1244), 0);
	Local_33.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_announce2", "stand_drunk_rowdydrink", -2174.118f, 16.88116f, 2602.615f, 0.0f, 148.3137f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1248), 1);
	Local_33.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_yelling_mid", "stand_drunk_rowdydrink", -2173.363f, 16.88977f, 2603.128f, 0.0f, 131.1913f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1252), 1);
	Local_33.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any19", "stand_lookdistance_w_any", -2138.948f, 16.8834f, 2602.986f, 0.0f, -180.0513f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_lookdistance_w_any20", "stand_lookdistance_w_any", -2132.0f, 16.61191f, 2561.799f, 0.0f, -109.9834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_knock_on_door2", "stand_knock_on_door", -2143.287f, 19.86164f, 2600.546f, 0.0f, -16.74055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_hammer_table", "stand_hammer_table", -2149.096f, 16.44941f, 2618.401f, 0.0f, 90.45417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sit_barrel3", "sit_barrel", -2125.166f, 16.58369f, 2619.433f, 0.0f, 179.2646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand22", "rand_idle_stand", -2111.911f, 16.57949f, 2618.774f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand23", "rand_idle_stand", -2120.654f, 16.7545f, 2618.422f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand24", "rand_idle_stand", -2131.845f, 16.58368f, 2620.233f, 0.0f, -20.62683f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand25", "rand_idle_stand", -2143.765f, 16.74739f, 2621.279f, 0.0f, -45.43121f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "rand_idle_stand26", "rand_idle_stand", -2148.637f, 16.77405f, 2623.75f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", -2111.081f, 16.57949f, 2620.705f, 0.0f, -0.9419219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", -2130.372f, 16.60757f, 2600.985f, 0.0f, 181.1283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R21", "look_out_window_R", -2125.397f, 16.56102f, 2618.889f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "look_out_window_R22", "look_out_window_R", -2150.208f, 20.01768f, 2620.493f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "lean_rail16", "nlean_rail", -2143.254f, 19.8046f, 2602.573f, 0.0f, 181.8103f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_hammer_table1", "stand_hammer_table", -2119.774f, 16.72619f, 2618.871f, 0.0f, 6.194611f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "browse_table_low", "browse_table_low", -2146.302f, 16.44941f, 2599.054f, 0.0f, -67.13042f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "browse_table1", "browse_table", -2155.683f, 16.44941f, 2620.919f, 0.0f, 194.9734f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "mex_flirt_sit_stool_att_lnk", "mex_flirt_sit_stool_attached_link", -2170.724f, 16.89649f, 2603.103f, 0.0f, 313.6567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_33, "player_watchMovie", "player_sit_movie", -2074.223f, 19.52564f, 2647.24f, 0.0f, 46.52636f, 0.0f);
	Local_33.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_33, "MovieTixSeller", "ticket_taker_link", -2077.179f, 18.74706f, 2642.875f, 0.0f, 39.10923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1268), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_drunk_dancing_link", "stand_drunk_dancing_link", -2171.523f, 16.87441f, 2590.842f, 0.0f, -168.1155f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1272 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_33, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting", "dog_sitting", -2186.302f, 16.37671f, 2613.554f, 0.0f, -191.1482f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting1", "dog_sitting", -2186.604f, 16.35862f, 2623.452f, 0.0f, -92.32429f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting2", "dog_sitting", -2187.527f, 16.34282f, 2597.933f, 0.0f, -175.2858f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting4", "dog_sitting", -2177.214f, 16.53463f, 2552.832f, 0.0f, 83.80367f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting5", "dog_sitting", -2176.894f, 16.52697f, 2602.231f, 0.0f, -152.9984f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting7", "dog_sitting", -2154.525f, 16.52697f, 2606.247f, 0.0f, -180.9651f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting8", "dog_sitting", -2157.976f, 16.52697f, 2566.476f, 0.0f, -431.1105f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting9", "dog_sitting", -2141.493f, 16.66621f, 2565.51f, 0.0f, -286.3068f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting10", "dog_sitting", -2146.901f, 16.56983f, 2551.105f, 0.0f, -367.7505f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting11", "dog_sitting", -2168.334f, 16.56983f, 2549.836f, 0.0f, -297.1856f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting12", "dog_sitting", -2084.815f, 16.73917f, 2628.624f, 0.0f, -273.8647f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting13", "dog_sitting", -2124.204f, 16.39455f, 2639.636f, 0.0f, -226.6797f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting14", "dog_sitting", -2140.348f, 16.4856f, 2628.998f, 0.0f, -395.0715f, 0.0f), Local_33.f_1272);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_33, "dog_sitting15", "dog_sitting", -2135.021f, 16.4856f, 2620.546f, 0.0f, -395.0715f, 0.0f), Local_33.f_1272);
	Local_33.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_33, "www", "stand_drunk_rowdydrink", -2161.039f, 16.29356f, 2583.57f, 0.0f, -23.57689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1276), 0);
	Local_33.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_33, "ddd", "npreaching", -2164.57f, 16.21394f, 2608.978f, 0.0f, 58.71915f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1280), 0);
	Local_33.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Locked_Footlocker1", "Locked_Footlocker", -2133.297f, 16.61758f, 2636.681f, 0.0f, -88.37072f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1284), 0);
	DECOR_SET_INT(Local_33.f_1284, "GringoDollarAmt", 20);
	Local_33.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Locked_Footlocker2", "Locked_Footlocker", -2132.833f, 16.61759f, 2637.759f, 0.0f, -32.03496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1288), 0);
	DECOR_SET_INT(Local_33.f_1288, "GringoDollarAmt", 20);
	Local_33.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_33, "sleeping_wall_scripted", "sleeping_wall_scripted", -2160.135f, 16.44941f, 2628.601f, 0.0f, -89.88496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1292), 1);
	Local_33.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Bar_lean_stand", "Bar_lean_stand", -2165.654f, 16.86839f, 2592.604f, 0.0f, -91.42857f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1296), 1);
	Local_33.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_33, "Bar_lean_stand1", "Bar_lean_stand", -2164.351f, 16.87442f, 2589.66f, 0.0f, 195.3948f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1300), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "mex_flirt_s_s_attached_link", "mex_flirt_sit_stool_attached_link", -2173.015f, 16.87441f, 2594.442f, 0.0f, 89.51157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_33.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_33, "bench_chair1", "bench_chair", -2071.095f, 19.53035f, 2649.305f, 0.0f, 44.19792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1304), 0);
	Local_33.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_33, "bench_chair2", "bench_chair", -2072.769f, 19.53035f, 2648.47f, 0.0f, 44.19792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1308), 0);
	Local_33.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_33, "bench_chair3", "bench_chair", -2068.924f, 19.53035f, 2647.186f, 0.0f, 44.19792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1312), 0);
	Local_33.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_33, "fivefingerfillet_spectate", "fivefingerfillet_spectate", -2193.327f, 16.5768f, 2593.874f, 0.0f, 51.97347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1316), 1);
	Local_33.f_1320 = CREATE_GRINGO_IN_LAYOUT(Local_33, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", -2192.68f, 16.5768f, 2592.817f, 0.0f, 62.0464f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1320), 1);
	Local_33.f_1324 = CREATE_GRINGO_IN_LAYOUT(Local_33, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", -2192.956f, 16.5768f, 2591.536f, 0.0f, 126.1652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_33.f_1324), 1);
	Local_33.f_1328 = CREATE_GRINGO_IN_LAYOUT(Local_33, "merchant_lay_bed", "merchant_lay_bed", -2124.275f, 16.905f, 2594.836f, 0.0f, 273.732f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_33, "stand_hammer_table2", "stand_hammer_table", -2159.391f, 16.43887f, 2626.448f, 0.0f, 90.1709f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	return 1;
}

bool Function_187(int iParam0) //Position: 0x11850 / 71760
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_191();
	iVar1 = 0;
	if (!Function_10(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_190(iParam0[iVar03], 8);
		}
		else if (Function_189())
		{
			iVar1 = 1;
			Function_190(iParam0[iVar03], 8);
		}
		Function_190(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_10(iParam0[iVar03], 4))
		{
			if (!Function_10(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_10(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_10(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_190(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_10(iParam0[iVar03], 4))
		{
			if (!Function_10(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_190(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_190(iParam0[iVar03], 2);
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
	Function_188();
	return 1;
}

void Function_188() //Position: 0x11BCB / 72651
{
	if (!Function_159(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_189() //Position: 0x11C0B / 72715
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_190(var uParam0, int iParam1) //Position: 0x11C36 / 72758
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_191() //Position: 0x11C47 / 72775
{
	if (!Function_159(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_192(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x11C89 / 72841
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_193(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_190(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_193(var uParam0, int iParam1, int iParam2) //Position: 0x11CC1 / 72897
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_190(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_194(int iParam0, int iParam1) //Position: 0x11D85 / 73093
{
	switch (iParam1)
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

bool Function_195() //Position: 0x11DCE / 73166
{
	if (!IS_LAYOUTREF_VALID(bLocal_933))
	{
		bLocal_933 = CREATE_LAYOUT(Function_85());
	}
	if (!IS_OBJECT_VALID(bLocal_934))
	{
		bLocal_934 = CREATE_WORLD_SECTOR(bLocal_933, "nArmadillo");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_934))
	{
		Function_196(StackVal, bLocal_933, "pot0");
		Function_196(StackVal, bLocal_933, "bottle");
		Function_196(StackVal, bLocal_933, "tarp");
		Function_196(StackVal, bLocal_933, "flag");
		Function_196(StackVal, bLocal_933, "rope");
		Function_196(StackVal, bLocal_933, "jug0");
		Function_196(StackVal, bLocal_933, "hatchet0");
		Function_196(StackVal, bLocal_933, "cleaver0");
		Function_196(StackVal, bLocal_933, "glass0");
		Function_196(StackVal, bLocal_933, "bucket0");
		Function_196(StackVal, bLocal_933, "basket0");
		Function_196(StackVal, bLocal_933, "nspittoon0");
		Function_196(StackVal, bLocal_933, "pitcher0");
		Function_196(StackVal, bLocal_933, "basin0");
		Function_196(StackVal, bLocal_933, "ncandyjar0");
		Function_196(StackVal, bLocal_933, "hammer0");
		Function_196(StackVal, bLocal_933, "milkcan0");
		Function_196(StackVal, bLocal_933, "teaset0");
		Function_196(StackVal, bLocal_933, "package0");
		Function_196(StackVal, bLocal_933, "hatbox0");
		Function_196(StackVal, bLocal_933, "jar0");
		Function_196(StackVal, bLocal_933, "boiler0");
		Function_196(StackVal, bLocal_933, "clamp0");
		Function_196(StackVal, bLocal_933, "horseshoe0");
		Function_196(StackVal, bLocal_933, "handdrill0");
		Function_196(StackVal, bLocal_933, "blanket0");
		DESTROY_OBJECT(bLocal_934);
		DESTROY_LAYOUT(bLocal_933);
		return 1;
	}
	return 0;
}

void Function_196(bool bParam0, char* cParam1, char* cParam2) //Position: 0x1210A / 73994
{
	int iVar0;
	int iVar1;
	char* cVar2;
	bool bVar3;
	
	iVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(iVar1, cParam2, cParam1, 1);
	cVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(cVar2, iVar1);
	bVar3 = START_OBJECT_ITERATOR(cVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(cVar2);
	}
	DESTROY_OBJECTSET(iVar1);
	DESTROY_ITERATOR(cVar2);
	return;
}

bool Function_197() //Position: 0x12163 / 74083
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_198() //Position: 0x1216C / 74092
{
	var uVar0;
	
	Function_194(3, 3);
	uVar0 = uVar0;
	Local_25 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(Local_25))
	{
		Local_25 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&Local_25 + 4) = { -2161.618f, 16.42906f, 2606.938f };
	*(&Local_25 + 4 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_25.f_28 = CREATE_POINT_IN_LAYOUT(Local_25, "f_playerHorse", -2161.618f, 16.42906f, 2606.938f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_199(bool bParam0, var uParam1) //Position: 0x12200 / 74240
{
	if (!Function_159(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

