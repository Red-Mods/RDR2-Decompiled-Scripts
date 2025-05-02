//Decompiled with MagicRDR v1.0
//Function Count : 135
//Statics Count : 843
//Natives Count : 179
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<45> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_184 = 1;
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
	var uLocal_220 = 1;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 1;
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
	int iLocal_279 = 0;
	bool bLocal_280 = false;
	bool bLocal_281 = false;
	var uLocal_282 = 25;
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
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
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
	var uLocal_809 = 1;
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
	bool bLocal_839 = false;
	bool bLocal_840 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_787 = 0;
	iLocal_279 = 0;
	SET_DUST_LEVEL(1);
	if (Function_134(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_133(0x8000000);
	}
	Function_132("Initializing Chuparosa", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_280 = 1000;
		switch (iLocal_279)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_279 = 1;
				}
				bLocal_280 = false;
				break;
			
			case 0x00000001:
				if (Function_131())
				{
					Global_62981 = 0;
					if (Function_130())
					{
						if (Function_128())
						{
							ENABLE_CHILD_SECTOR("mp_chu_platforms01x");
							iLocal_279 = 2;
						}
					}
					else
					{
						iLocal_279 = 2;
					}
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 7, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 11, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 20, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
				}
				bLocal_280 = false;
				break;
			
			case 0x00000002:
				if (Function_119())
				{
					Function_118(&(Global_29008[iScriptParam_0]), 32);
					iLocal_279 = 3;
				}
				bLocal_280 = false;
				break;
			
			case 0x00000003:
				bLocal_281 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ChuparosaVol", &iScriptParam_0, 2, 0);
				Function_117(&Global_6815, &Global_7954, iScriptParam_0);
				iLocal_279 = 5;
				bLocal_280 = false;
				break;
			
			case 0x00000005:
				if (Function_116(&Global_6815, &Global_7954, iScriptParam_0))
				{
					iLocal_279 = 4;
					bLocal_280 = false;
				}
				else
				{
					bLocal_280 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_115(&(Global_29008[iScriptParam_0]), 16) && Function_114(Global_29155[iScriptParam_010]))
				{
					iLocal_279 = 6;
				}
				bLocal_280 = false;
				break;
			
			case 0x00000006:
				Function_113(0, &uLocal_282, -2711,908f, 32,2328f, 4239,971f);
				Function_112(0, &uLocal_282, -2701,363f, 32,07698f, 4287,889f);
				Function_111(0, &uLocal_282, -2701,363f, 32,07698f, 4287,889f);
				Function_110(0, &uLocal_282, -2701,363f, 32,07698f, 4287,889f);
				Function_109(0, &uLocal_282, -2701,363f, 32,07698f, 4287,889f);
				Function_108(0, &uLocal_282, -2701,363f, 32,07698f, 4287,889f);
				Function_107(0, &uLocal_282, Local_4);
				Function_113(1, &uLocal_282, -2732,651f, 32,028f, 4292,989f);
				Function_112(1, &uLocal_282, -2732,651f, 32,028f, 4292,989f);
				Function_111(1, &uLocal_282, -2732,651f, 32,028f, 4292,989f);
				Function_110(1, &uLocal_282, -2732,651f, 32,028f, 4292,989f);
				Function_109(1, &uLocal_282, -2699,336f, 32,07365f, 4286,72f);
				Function_108(1, &uLocal_282, -2699,336f, 32,07365f, 4286,72f);
				Function_107(1, &uLocal_282, Local_4);
				Function_113(2, &uLocal_282, -2714,533f, 32,88588f, 4261,468f);
				Function_112(2, &uLocal_282, -2726,229f, 32,82832f, 4277,772f);
				Function_111(2, &uLocal_282, -2742,137f, 32,24309f, 4273,864f);
				Function_110(2, &uLocal_282, -2714,533f, 32,88588f, 4261,468f);
				Function_109(2, &uLocal_282, -2654,689f, 31,26777f, 4277,835f);
				Function_108(2, &uLocal_282, -2714,506f, 32,28f, 4241,621f);
				Function_107(2, &uLocal_282, Local_4);
				Function_113(3, &uLocal_282, -2725,799f, 33,008f, 4296,221f);
				Function_112(3, &uLocal_282, -2725,799f, 33,008f, 4296,221f);
				Function_111(3, &uLocal_282, -2725,799f, 33,008f, 4296,221f);
				Function_110(3, &uLocal_282, -2725,799f, 33,008f, 4296,221f);
				Function_109(3, &uLocal_282, -2725,799f, 33,008f, 4296,221f);
				Function_108(3, &uLocal_282, -2725,799f, 33,008f, 4296,221f);
				Function_107(3, &uLocal_282, Local_4);
				Function_113(4, &uLocal_282, -2734,886f, 36,35334f, 4226,86f);
				Function_112(4, &uLocal_282, -2739,361f, 32,52098f, 4240,463f);
				Function_111(4, &uLocal_282, -2739,361f, 32,52098f, 4240,463f);
				Function_110(4, &uLocal_282, -2739,361f, 32,52098f, 4240,463f);
				Function_109(4, &uLocal_282, -2699,373f, 32,07358f, 4288,571f);
				Function_108(4, &uLocal_282, -2699,373f, 32,07358f, 4288,571f);
				Function_107(4, &uLocal_282, Local_4);
				Function_113(5, &uLocal_282, -2706,638f, 32,27977f, 4235,488f);
				Function_112(5, &uLocal_282, -2696,668f, 32,07016f, 4289,73f);
				Function_111(5, &uLocal_282, -2696,668f, 32,07016f, 4289,73f);
				Function_110(5, &uLocal_282, -2696,668f, 32,07016f, 4289,73f);
				Function_109(5, &uLocal_282, -2696,668f, 32,07016f, 4289,73f);
				Function_108(5, &uLocal_282, -2706,638f, 32,27977f, 4235,488f);
				Function_107(5, &uLocal_282, Local_4);
				Function_113(6, &uLocal_282, -2726,464f, 32,82832f, 4277,536f);
				Function_112(6, &uLocal_282, -2726,464f, 32,82832f, 4277,536f);
				Function_111(6, &uLocal_282, -2726,464f, 32,82832f, 4277,536f);
				Function_110(6, &uLocal_282, -2726,464f, 32,82832f, 4277,536f);
				Function_109(6, &uLocal_282, -2698,067f, 32,07573f, 4288,678f);
				Function_108(6, &uLocal_282, -2698,067f, 32,07573f, 4288,678f);
				Function_107(6, &uLocal_282, Local_4);
				Function_113(7, &uLocal_282, -2687,845f, 32,466f, 4224,631f);
				Function_112(7, &uLocal_282, -2687,845f, 32,466f, 4224,631f);
				Function_111(7, &uLocal_282, -2687,845f, 32,466f, 4224,631f);
				Function_110(7, &uLocal_282, -2687,845f, 32,466f, 4224,631f);
				Function_109(7, &uLocal_282, -2687,845f, 32,466f, 4224,631f);
				Function_108(7, &uLocal_282, -2710,029f, 32,26497f, 4240,836f);
				Function_107(7, &uLocal_282, Local_4);
				Function_113(8, &uLocal_282, -2713,432f, 32,834f, 4289,01f);
				Function_112(8, &uLocal_282, -2713,432f, 32,834f, 4289,01f);
				Function_111(8, &uLocal_282, -2713,432f, 32,834f, 4289,01f);
				Function_110(8, &uLocal_282, -2713,432f, 32,834f, 4289,01f);
				Function_109(8, &uLocal_282, -2713,432f, 32,834f, 4289,01f);
				Function_108(8, &uLocal_282, -2713,432f, 32,834f, 4289,01f);
				Function_107(8, &uLocal_282, Local_4);
				Function_113(9, &uLocal_282, -2724,874f, 36,36723f, 4243,932f);
				Function_106(9, &uLocal_282, Local_16.f_996);
				Function_105(9, &uLocal_282, Local_16.f_996);
				Function_104(9, &uLocal_282, Local_16.f_996);
				Function_109(9, &uLocal_282, -2698,427f, 32,09244f, 4286,033f);
				Function_108(9, &uLocal_282, -2698,427f, 32,09244f, 4286,033f);
				Function_107(9, &uLocal_282, Local_4);
				Function_113(10, &uLocal_282, -2689,847f, 32,435f, 4215,502f);
				Function_112(10, &uLocal_282, -2689,847f, 32,435f, 4215,502f);
				Function_111(10, &uLocal_282, -2689,847f, 32,435f, 4215,502f);
				Function_110(10, &uLocal_282, -2689,847f, 32,435f, 4215,502f);
				Function_109(10, &uLocal_282, -2697,606f, 32,07793f, 4285,677f);
				Function_108(10, &uLocal_282, -2697,606f, 32,07793f, 4285,677f);
				Function_107(10, &uLocal_282, Local_4);
				Function_113(11, &uLocal_282, -2687,573f, 31,352f, 4284,712f);
				Function_112(11, &uLocal_282, -2687,573f, 31,352f, 4284,712f);
				Function_111(11, &uLocal_282, -2687,573f, 31,352f, 4284,712f);
				Function_110(11, &uLocal_282, -2687,573f, 31,352f, 4284,712f);
				Function_109(11, &uLocal_282, -2687,573f, 31,352f, 4284,712f);
				Function_108(11, &uLocal_282, -2687,573f, 31,352f, 4284,712f);
				Function_107(11, &uLocal_282, Local_4);
				if (Global_25974[2])
				{
					Function_103(&(Global_6815[112]), 2);
				}
				else
				{
					Function_102(&(Global_6815[112]), 2);
				}
				Function_113(12, &uLocal_282, -2739,473f, 32,418f, 4275,326f);
				Function_112(12, &uLocal_282, -2739,473f, 32,418f, 4275,326f);
				Function_111(12, &uLocal_282, -2739,473f, 32,418f, 4275,326f);
				Function_110(12, &uLocal_282, -2739,473f, 32,418f, 4275,326f);
				Function_109(12, &uLocal_282, -2697,095f, 32,07283f, 4284,972f);
				Function_108(12, &uLocal_282, -2716,927f, 32,28f, 4245,252f);
				Function_107(12, &uLocal_282, Local_4);
				Function_113(13, &uLocal_282, -2730,625f, 32,828f, 4275,637f);
				Function_112(13, &uLocal_282, -2730,625f, 32,828f, 4275,637f);
				Function_111(13, &uLocal_282, -2730,625f, 32,828f, 4275,637f);
				Function_110(13, &uLocal_282, -2730,625f, 32,828f, 4275,637f);
				Function_109(13, &uLocal_282, -2656,456f, 31,267f, 4277,274f);
				Function_108(13, &uLocal_282, -2716,046f, 32,28f, 4244,72f);
				Function_107(13, &uLocal_282, Local_4);
				Function_113(14, &uLocal_282, -2739,145f, 32,415f, 4283,821f);
				Function_112(14, &uLocal_282, -2739,145f, 32,415f, 4283,821f);
				Function_111(14, &uLocal_282, -2739,145f, 32,415f, 4283,821f);
				Function_110(14, &uLocal_282, -2739,145f, 32,415f, 4283,821f);
				Function_109(14, &uLocal_282, -2695,425f, 32,07424f, 4285,919f);
				Function_108(14, &uLocal_282, -2715,355f, 32,28f, 4244,152f);
				Function_107(14, &uLocal_282, Local_4);
				Function_113(15, &uLocal_282, -2733,628f, 32,822f, 4277,909f);
				Function_112(15, &uLocal_282, -2733,628f, 32,822f, 4277,909f);
				Function_111(15, &uLocal_282, -2733,628f, 32,822f, 4277,909f);
				Function_110(15, &uLocal_282, -2733,628f, 32,822f, 4277,909f);
				Function_109(15, &uLocal_282, -2695,476f, 32,07358f, 4287,719f);
				Function_108(15, &uLocal_282, -2718,897f, 32,28f, 4239,234f);
				Function_107(15, &uLocal_282, Local_4);
				Function_113(16, &uLocal_282, -2718,546f, 32,85599f, 4272,604f);
				Function_112(16, &uLocal_282, -2718,546f, 32,85599f, 4272,604f);
				Function_111(16, &uLocal_282, -2718,546f, 32,85599f, 4272,604f);
				Function_110(16, &uLocal_282, -2718,546f, 32,85599f, 4272,604f);
				Function_109(16, &uLocal_282, -2690,545f, 31,34747f, 4285,168f);
				Function_108(16, &uLocal_282, -2720,189f, 32,28f, 4238,594f);
				Function_107(16, &uLocal_282, Local_4);
				Function_113(17, &uLocal_282, -2722,087f, 32,82832f, 4275,645f);
				Function_112(17, &uLocal_282, -2722,087f, 32,82832f, 4275,645f);
				Function_111(17, &uLocal_282, -2722,087f, 32,82832f, 4275,645f);
				Function_110(17, &uLocal_282, -2722,087f, 32,82832f, 4275,645f);
				Function_109(17, &uLocal_282, -2690,849f, 31,35579f, 4289,367f);
				Function_108(17, &uLocal_282, -2719,193f, 36,38667f, 4239,506f);
				Function_107(17, &uLocal_282, Local_4);
				Function_113(19, &uLocal_282, -2721,419f, 32,82862f, 4285,882f);
				Function_112(19, &uLocal_282, -2720,986f, 32,828f, 4272,306f);
				Function_111(19, &uLocal_282, -2720,986f, 32,828f, 4272,306f);
				Function_110(19, &uLocal_282, -2720,986f, 32,828f, 4272,306f);
				Function_109(19, &uLocal_282, -2692,302f, 31,34747f, 4284,263f);
				Function_108(19, &uLocal_282, -2721,666f, 36,36624f, 4242,072f);
				Function_107(19, &uLocal_282, Local_4);
				Function_113(21, &uLocal_282, -2677,922f, 32,471f, 4219,621f);
				Function_112(21, &uLocal_282, -2677,922f, 32,471f, 4219,621f);
				Function_111(21, &uLocal_282, -2677,922f, 32,471f, 4219,621f);
				Function_110(21, &uLocal_282, -2677,922f, 32,471f, 4219,621f);
				Function_109(21, &uLocal_282, -2698,589f, 31,14145f, 4277,98f);
				Function_108(21, &uLocal_282, -2727,277f, 36,37946f, 4222,154f);
				Function_107(21, &uLocal_282, Local_4);
				Function_113(22, &uLocal_282, -2714,506f, 32,28f, 4241,621f);
				Function_112(22, &uLocal_282, -2689,745f, 31,353f, 4286,876f);
				Function_111(22, &uLocal_282, -2689,745f, 31,353f, 4286,876f);
				Function_110(22, &uLocal_282, -2689,823f, 31,34747f, 4284,649f);
				Function_109(22, &uLocal_282, -2689,823f, 31,34747f, 4284,649f);
				Function_108(22, &uLocal_282, -2714,506f, 32,28f, 4241,621f);
				Function_107(22, &uLocal_282, Local_4);
				Function_113(23, &uLocal_282, -2711,908f, 32,2328f, 4239,971f);
				Function_112(23, &uLocal_282, -2696,598f, 32,072f, 4286,59f);
				Function_111(23, &uLocal_282, -2696,598f, 32,072f, 4286,59f);
				Function_110(23, &uLocal_282, -2691,418f, 31,35579f, 4290,157f);
				Function_109(23, &uLocal_282, -2691,418f, 31,35579f, 4290,157f);
				Function_108(23, &uLocal_282, -2711,908f, 32,2328f, 4239,971f);
				Function_107(23, &uLocal_282, Local_4);
				Function_113(24, &uLocal_282, -2723,34f, 36,36924f, 4243,025f);
				Function_112(24, &uLocal_282, -2689,745f, 31,353f, 4286,876f);
				Function_111(24, &uLocal_282, -2689,745f, 31,353f, 4286,876f);
				Function_110(24, &uLocal_282, -2697,631f, 32,07573f, 4289,472f);
				Function_109(24, &uLocal_282, -2697,631f, 32,07573f, 4289,472f);
				Function_108(24, &uLocal_282, -2723,34f, 36,36924f, 4243,025f);
				Function_107(24, &uLocal_282, Local_4);
				Function_98(&Global_6815, &Global_7954, &uLocal_282, Global_6289, iScriptParam_0);
				if (Function_115(&(Global_29008[iScriptParam_0]), 256) || !Function_134(2))
				{
					iLocal_783 = 1;
				}
				Function_92(StackVal, 2, "$/content/Ambient/JobSystem/job_HorseBreaking", -2640,26f, 30,9f, 4244,634f, 327, iScriptParam_0, 15, -1.0f, 15, 0);
				Function_92(StackVal, 1, "$/content/Ambient/JobSystem/Job_nightwatch", -2734,144f, 32,406f, 4252,29f, 341, iScriptParam_0, 48, -1.0f, 15, 0);
				Function_85(6, Local_16.f_976, Local_16.f_724, Local_16.f_808, Function_91(iScriptParam_0, "nchuparosa", "ncantina01", 1), 0, Local_4.f_44);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_16, "chuv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_16, "chuv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_16, "chuv_players_room"));
				}
				else
				{
					LOG_ERROR("CHU: Cannot find chuv_players_room to restrict players room");
				}
				Function_84(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_16 + 964));
				Function_84(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_16 + 968));
				Function_83(StackVal, FIND_VOLUME_IN_LAYOUT(Local_16, "chuv_merchant"));
				Function_82(StackVal, 1);
				Function_81(StackVal, 397);
				Function_83(StackVal, FIND_VOLUME_IN_LAYOUT(Local_16, "chuv_doctor"));
				Function_82(StackVal, 3);
				Function_81(StackVal, 398);
				Function_118(&(Global_29008[iScriptParam_0]), 8);
				if (Function_115(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_80(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_279 = 10;
				}
				else
				{
					iLocal_279 = 7;
				}
				bLocal_280 = false;
				break;
			
			case 0x00000007:
				switch (Global_30619)
				{
					case 0x00000000:
						Function_79(iScriptParam_0);
						break;
					
					case 0x00000001:
						Function_79(iScriptParam_0);
						break;
					
					case 0x00000002:
						Function_79(iScriptParam_0);
						break;
					
					case 0x00000003:
						break;
				}
				Function_70(&Global_62527, 2, Global_30693[0], "$/content/Mexico/Mini_Games/BlackJack_CHU/BlackJack_CHU", 4294967295, 0, "ChuBlackJack", 349, -2685,421f, 31,356f, 4284,133f, 2,5f, 0, 0);
				Function_69(&Global_62527, 2, 30);
				Function_70(&Global_62527, 0, Global_30693[0], "$/content/Mexico/Mini_Games/Poker_CHU/Poker_CHU", 4294967295, 0, "ChuPoker", 433, -2701,138f, 31,151f, 4278,035f, 2,5f, 0, 0);
				Function_69(&Global_62527, 0, 50);
				Function_68(iScriptParam_0);
				Function_65(iScriptParam_0);
				Function_64(iScriptParam_0);
				Function_62(iScriptParam_0);
				Function_61(iScriptParam_0);
				Function_57(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 80.0f, 8, 70, 0);
				Function_56(&Global_17483[1075] + 120, 2, 5.0f, 1, 4294967295);
				Function_57(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 80.0f, 8, 70, 0);
				Function_56(&Global_17483[975] + 120, 2, 5.0f, 1, 4294967295);
				Function_57(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 80.0f, 8, 70, 0);
				Function_56(&Global_17483[875] + 120, 2, 5.0f, 1, 4294967295);
				Function_57(14, 1, 0, 50, 50, 7, 66, 0, 2, iScriptParam_0, "$/Content/Ambient/Town/first_time_chuparosa", 31, 0, 200.0f, 2, 315, Function_51(2, 0, 3));
				Function_50(StackVal, &Global_17483[1475] + 120, 4, 1);
				iLocal_279 = 8;
				bLocal_280 = false;
				break;
			
			case 0x00000008:
				Function_49(64);
				if (Function_44(iScriptParam_0, &Global_6815, iLocal_783))
				{
					Function_40(StackVal, 0, 0,1f, 4, Local_4, 1);
					Function_36(2, 4294967295, 4294967295, 0, 3);
					Function_33(Local_4);
				}
				else
				{
					Function_36(1, 10, 6, 20, 5);
					switch (Global_30619)
					{
						case 0x00000000:
						case 0x00000001:
							Function_40(StackVal, 0, 0,5f, 4, Local_4, 1);
							break;
						
						case 0x00000002:
							Function_40(StackVal, 0, 0,5f, 4, Local_4, 1);
							break;
						
						case 0x00000003:
							Function_40(StackVal, 0, 0,5f, 4, Local_4, 1);
							break;
					}
					Function_33(Local_4);
					Function_32(StackVal, 0);
				}
				Function_118(&(Global_29008[iScriptParam_0]), 512);
				iLocal_279 = 9;
				bLocal_280 = false;
				break;
			
			case 0x00000009:
				Function_30(Local_4, iScriptParam_0);
				Function_118(&(Global_29008[iScriptParam_0]), 4);
				Function_29("Finished Initializing Chuparosa", 5.0f);
				iLocal_279 = 10;
				bLocal_280 = false;
				break;
			
			case 0x0000000A:
				if (!Function_28(Global_62981, 1))
				{
					if (Function_26(&(Global_30693[0]), 0))
					{
						Function_25(&Global_62981, 1);
					}
				}
				if (!Function_28(Global_62981, 2))
				{
					if (Function_23(&(Global_30693[0])))
					{
						Function_25(&Global_62981, 2);
					}
				}
				if (!iLocal_786)
				{
					if (IS_PERS_CHAR_VALID(StackVal))
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
						{
							AI_CONVERSE_DISABLE(GET_ACTOR_FROM_PERS_CHAR(StackVal));
							iLocal_786 = 1;
						}
					}
				}
				else if (!IS_PERS_CHAR_VALID(StackVal))
				{
					iLocal_786 = 0;
				}
				else if (!IS_PERS_CHAR_ALIVE(StackVal))
				{
					iLocal_786 = 0;
				}
				else if (!IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
				{
					iLocal_786 = 0;
				}
				if (Global_3419)
				{
					if (Global_3386 != 1 && iLocal_787 != 0)
					{
						LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_788, 51, 0);
						iLocal_787 = 1;
					}
					if (!iLocal_784)
					{
						if (GET_HOUR(false) < 16)
						{
							iLocal_784 = 1;
							Function_17(2, 4, 0, 0, 0);
						}
					}
					if (!iLocal_785)
					{
						if (GET_HOUR(false) > 19)
						{
							iLocal_785 = 1;
							Function_17(0, 1, 0, 0, 0);
						}
					}
				}
				if (Function_115(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_279 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_280);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	Function_11(&Global_6815, &Global_7954, iScriptParam_0, (iLocal_783 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(2);
	if (Function_130())
	{
		DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	}
	Function_80(&(Global_29008[iScriptParam_0]), 32);
	Function_80(&(Global_29008[iScriptParam_0]), 64);
	Function_80(&(Global_29008[iScriptParam_0]), 8);
	Function_80(&(Global_29008[iScriptParam_0]), 512);
	Function_80(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_281))
	{
		TERMINATE_SCRIPT(bLocal_281);
	}
	Function_29("Unloaded Chuparosa", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x18F0 / 6384
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x1926 / 6438
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x1948 / 6472
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x195E / 6494
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x1974 / 6516
{
	Function_6(&Local_16 + 4);
	RELEASE_LAYOUT_REF(Local_16);
	return;
}

void Function_6(int iParam0) //Position: 0x1986 / 6534
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x19AC / 6572
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x1ADA / 6874
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x1AF4 / 6900
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1B11 / 6929
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1B1C / 6940
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_130())
	{
		return;
	}
	if (Function_115(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_16(iParam2), 12));
		Function_80(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_15(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_15(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_102(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_15(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_102(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_115(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_134(2) || Function_115(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_15(uParam0[iVar02], 2) && !Function_15(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_15(uParam0[iVar02], 2) && !Function_15(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_118(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1D07 / 7431
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_103(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_15(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_15(uParam0[iParam22], 1) && !bParam3)
	{
		Function_103(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1E56 / 7766
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

int Function_14(int iParam0) //Position: 0x1E81 / 7809
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

bool Function_15(var uParam0, int iParam1) //Position: 0x1EB5 / 7861
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_16(int iParam0) //Position: 0x1ED1 / 7889
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_17(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x237F / 9087
{
	int iVar0;
	bool bVar1;
	
	Function_22(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_21(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_18(StackVal, bVar1, bParam4);
		}
	}
}

void Function_18(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23F1 / 9201
{
	int iVar0;
	
	Function_22(bParam0);
	Function_20(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_19();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_19() //Position: 0x256A / 9578
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_20(bool bParam0) //Position: 0x2576 / 9590
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_21(int iParam0, int iParam1) //Position: 0x25BC / 9660
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_22(iParam0);
	Function_20(iVar0);
	PRINTNL();
	Function_18(iParam0, iVar0, iParam1);
	return;
}

void Function_22(int iParam0) //Position: 0x25E1 / 9697
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

bool Function_23(int iParam0) //Position: 0x2627 / 9767
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_24(*iParam0, iVar1);
		bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(*iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make blackjack stool fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

vector3 Function_24(int iParam0, bool bParam1) //Position: 0x26B9 / 9913
{
	if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2685,328f, 31,35269f, 4284,425f;
				break;
			
			case 0x00000001:
				return -2686,254f, 31,35269f, 4284,686f;
				break;
			
			case 0x00000002:
				return -2686,982f, 31,35269f, 4284,026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -3640,897f, 42,76801f, 2104,235f;
				break;
			
			case 0x00000001:
				return -3640,023f, 42,76801f, 2104,636f;
				break;
			
			case 0x00000002:
				return -3639,895f, 42,76801f, 2105,61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 719,9783f, 78,4736f, 1312,265f;
				break;
			
			case 0x00000001:
				return 719,0787f, 78,4736f, 1312,605f;
				break;
			
			case 0x00000002:
				return 718,2963f, 78,4736f, 1312,011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 172,2084f, 73,75179f, 2224,902f;
				break;
			
			case 0x00000001:
				return 170,9445f, 73,75179f, 2224,73f;
				break;
			
			case 0x00000002:
				return 170,7396f, 73,74976f, 2223,559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_25(var uParam0, int iParam1) //Position: 0x2861 / 10337
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_26(float fParam0, bool bParam1) //Position: 0x2870 / 10352
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_27(*fParam0, iVar1, bParam1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_27(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_27(*fParam0, iVar1, 0);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_27(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
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

vector3 Function_27(int iParam0, int iParam1, bool bParam2) //Position: 0x2933 / 10547
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801,0966f, 92,75807f, 2375,792f;
				break;
			
			case 0x00000001:
				return -801,4974f, 92,75435f, 2375,295f;
				break;
			
			case 0x00000002:
				return -801,2829f, 92,75435f, 2374,737f;
				break;
			
			case 0x00000003:
				return -800,724f, 92,76255f, 2374,656f;
				break;
			
			case 0x00000004:
				return -800,3233f, 92,75678f, 2375,122f;
				break;
			
			case 0x00000005:
				return -800,5463f, 92,75435f, 2375,677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164,353f, 73,75671f, 2230,925f;
				break;
			
			case 0x00000001:
				return 164,5807f, 73,82056f, 2231,472f;
				break;
			
			case 0x00000002:
				return 164,2043f, 73,75299f, 2231,971f;
				break;
			
			case 0x00000003:
				return 163,6548f, 73,76118f, 2231,889f;
				break;
			
			case 0x00000004:
				return 163,4103f, 73,76118f, 2231,366f;
				break;
			
			case 0x00000005:
				return 163,7511f, 73,75671f, 2230,869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157,424f, 16,88292f, 2596,033f;
				break;
			
			case 0x00000001:
				return -2158,012f, 16,94059f, 2595,997f;
				break;
			
			case 0x00000002:
				return -2158,228f, 16,87845f, 2595,416f;
				break;
			
			case 0x00000003:
				return -2157,847f, 16,87845f, 2594,96f;
				break;
			
			case 0x00000004:
				return -2157,261f, 16,87845f, 2595,042f;
				break;
			
			case 0x00000005:
				return -2157,04f, 16,87845f, 2595,596f;
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
					return 748,5359f, 82,6927f, 1267,343f;
					break;
				
				case 0x00000001:
					return 749,138f, 82,6927f, 1266,645f;
					break;
				
				case 0x00000002:
					return 750,045f, 82,6927f, 1266,796f;
					break;
				
				case 0x00000003:
					return 750,0344f, 82,6917f, 1267,552f;
					break;
				
				case 0x00000004:
					return 749,7606f, 82,6927f, 1268,372f;
					break;
				
				case 0x00000005:
					return 748,8501f, 82,6927f, 1268,207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717,6248f, 78,47099f, 1325,972f;
					break;
				
				case 0x00000001:
					return 717,0453f, 78,47099f, 1325,919f;
					break;
				
				case 0x00000002:
					return 716,8008f, 78,47099f, 1325,396f;
					break;
				
				case 0x00000003:
					return 717,1418f, 78,47099f, 1324,928f;
					break;
				
				case 0x00000004:
					return 717,7181f, 78,47099f, 1324,969f;
					break;
				
				case 0x00000005:
					return 717,9684f, 78,47099f, 1325,495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138,6693f, 119,2419f, 1344,049f;
				break;
			
			case 0x00000001:
				return -139,2573f, 119,2419f, 1343,961f;
				break;
			
			case 0x00000002:
				return -139,4945f, 119,2419f, 1343,419f;
				break;
			
			case 0x00000003:
				return -139,1212f, 119,2419f, 1342,946f;
				break;
			
			case 0x00000004:
				return -138,5368f, 119,2419f, 1343,024f;
				break;
			
			case 0x00000005:
				return -138,2953f, 119,2419f, 1343,58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701,487f, 31,151f, 4278,554f;
				break;
			
			case 0x00000001:
				return -2701,713f, 31,151f, 4277,994f;
				break;
			
			case 0x00000002:
				return -2701,347f, 31,151f, 4277,538f;
				break;
			
			case 0x00000003:
				return -2700,726f, 31,151f, 4277,604f;
				break;
			
			case 0x00000004:
				return -2700,508f, 31,151f, 4278,2f;
				break;
			
			case 0x00000005:
				return -2700,919f, 31,151f, 4278,653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795,5794f, 13,16767f, 3699,937f;
				break;
			
			case 0x00000001:
				return -795,8744f, 13,16057f, 3699,083f;
				break;
			
			case 0x00000002:
				return -794,9905f, 13,16057f, 3698,687f;
				break;
			
			case 0x00000003:
				return -794,196f, 13,16057f, 3699,235f;
				break;
			
			case 0x00000004:
				return -794,2787f, 13,16057f, 3700,203f;
				break;
			
			case 0x00000005:
				return -795,169f, 13,16057f, 3700,608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_28(var uParam0, int iParam1) //Position: 0x2EAD / 11949
{
	return (uParam0 && iParam1) == 0;
}

void Function_29(bool bParam0, float fParam1) //Position: 0x2EBA / 11962
{
	if (!Function_134(128))
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

void Function_30(bool bParam0, bool bParam1) //Position: 0x2EF8 / 12024
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
		Function_31(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_130())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x2FF2 / 12274
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_32(bool bParam0, bool bParam1) //Position: 0x2FFF / 12287
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

void Function_33(bool bParam0) //Position: 0x3078 / 12408
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_35(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_34(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_34(var uParam0) //Position: 0x3163 / 12643
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_35() //Position: 0x3180 / 12672
{
	int iVar0;
	
	return iVar0;
}

void Function_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3188 / 12680
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
		Function_37();
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

void Function_37() //Position: 0x326C / 12908
{
	int iVar0;
	
	Global_26960 = Function_38(StackVal);
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

int Function_38(int iParam0) //Position: 0x32BA / 12986
{
	if (!Function_39(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_39(bool bParam0) //Position: 0x32D2 / 13010
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_40(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x32E7 / 13031
{
	bool bVar0;
	
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
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_43();
	}
	if (bParam5)
	{
		Function_41(1048576);
	}
}

void Function_41(int iParam0) //Position: 0x33FA / 13306
{
	Function_42(&Global_28842, iParam0);
	return;
}

void Function_42(var uParam0, var uParam1) //Position: 0x3408 / 13320
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_43() //Position: 0x3423 / 13347
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_41(16384);
	}
	return;
}

bool Function_44(int iParam0, var uParam1, bool bParam2) //Position: 0x343F / 13375
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_115(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_45(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_130())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *uParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

int Function_45(var uParam0, bool bParam1) //Position: 0x34FF / 13567
{
	int iVar0;
	
	iVar0 = Function_47(uParam0);
	if (!Function_46(iVar0))
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

bool Function_46(int iParam0) //Position: 0x353C / 13628
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_47(int iParam0) //Position: 0x3553 / 13651
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_48(int iParam0) //Position: 0x356D / 13677
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_49(int iParam0) //Position: 0x3583 / 13699
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_50(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3596 / 13718
{
	iParam0->f_128 = uParam1;
	(iParam0 + 128)->f_4 = uParam2;
	(iParam0 + 128)->f_8 = uParam3;
}

int Function_51(bool bParam0, bool bParam1, bool bParam2) //Position: 0x35B4 / 13748
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_55(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_52(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_52(bParam0, bParam1, bParam2, 4294967295);
}

int Function_52(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3612 / 13842
{
	var uVar0;
	
	if (!Function_54(bParam2))
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
	uVar0 = Function_55(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_53(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_53(int iParam0) //Position: 0x3767 / 14183
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

bool Function_54(int iParam0) //Position: 0x37A5 / 14245
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_55(int iParam0, int iParam1, int iParam2) //Position: 0x37BA / 14266
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_56(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x37DA / 14298
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x3800 / 14336
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_58(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_58(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x3842 / 14402
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
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
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_60(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_59(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_60(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_59(int iParam0, int iParam1) //Position: 0x3BD2 / 15314
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_60(int iParam0) //Position: 0x3BF3 / 15347
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_61(int iParam0) //Position: 0x3C09 / 15369
{
	Function_57(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_62(int iParam0) //Position: 0x3C5B / 15451
{
	Function_57(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_63(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_63(int iParam0, var uParam1, int iParam2) //Position: 0x3CC2 / 15554
{
	iParam0->f_120 = uParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_64(int iParam0) //Position: 0x3CD6 / 15574
{
	Function_57(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_65(int iParam0) //Position: 0x3D1F / 15647
{
	if (!Function_67())
	{
		Function_57(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_56(&Global_17483[3975] + 120, 1, 4,5f, 64, 4294967295);
		Function_66(&Global_17483[3975] + 120, -4,5f, 2);
	}
	return;
}

void Function_66(int iParam0, float fParam1, int iParam2) //Position: 0x3DA0 / 15776
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

bool Function_67() //Position: 0x3DB6 / 15798
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		bVar0 = GET_ACTOR_ENUM(Global_34573);
		if (bVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_68(int iParam0) //Position: 0x3DDB / 15835
{
	Function_57(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_56(&Global_17483[4075] + 120, 1, 4,5f, 64, 4294967295);
	Function_66(&Global_17483[4075] + 120, -4,5f, 2);
	return;
}

void Function_69(var uParam0, int iParam1, float fParam2) //Position: 0x3E56 / 15958
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_70(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x3E7A / 15994
{
	if (Function_130() && !bParam12)
	{
		return;
	}
	if (!Function_130() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[bParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[bParam1]);
	}
	uParam0[bParam140]->f_4 = Function_51(bParam2, bParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[bParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[bParam140]->f_8 = 4294967295;
	}
	uParam0[bParam140]->f_40 = "";
	uParam0[bParam140]->f_44 = "";
	uParam0[bParam140]->f_48 = iParam13;
	uParam0[bParam140]->f_96 = iParam7;
	uParam0[bParam140]->f_104 = 5;
	uParam0[bParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[bParam140]->f_132 = iParam4;
	uParam0[bParam140]->f_136 = 4294967295;
	uParam0[bParam140]->f_140 = 4294967295;
	uParam0[bParam140]->f_144 = 4294967295;
	strcpy(uParam0[bParam140] + 12, cParam6, 16);
	*(uParam0[bParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[bParam140]->f_64 = iParam11;
	uParam0[bParam140]->f_72 = bParam2;
	if (Global_25974[bParam1] && Function_78(bParam1))
	{
		Function_71(StackVal, StackVal, bParam2, (1 + bParam1), vParam8, 63);
	}
	uParam0[bParam140]->f_140 = 1;
	uParam0[bParam140]->f_128 |= 8192;
}

int Function_71(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x3FC6 / 16326
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_77(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_76(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_75(StackVal, StackVal, vParam2);
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
		Function_74(uVar3);
		vVar7 = { StackVal, StackVal, Function_74(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_74(StackVal);
				vVar4 = { StackVal, StackVal, Function_74(StackVal) };
				if (Function_73(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_72(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_72(bool bParam0) //Position: 0x41AB / 16811
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

bool Function_73(vector3 vParam0, vector3 vParam3) //Position: 0x42E2 / 17122
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_74(int iParam0) //Position: 0x430F / 17167
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

var Function_75(vector3 vParam0) //Position: 0x4366 / 17254
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

int Function_76(int iParam0) //Position: 0x43B4 / 17332
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

bool Function_77(vector3 vParam0) //Position: 0x446C / 17516
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_78(int iParam0) //Position: 0x4484 / 17540
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

void Function_79(int iParam0) //Position: 0x44A7 / 17575
{
	Function_57(27, 1, 150, 4294967271, 150, 1, 0, 0, 4, iParam0, "$/content/Ambient/MexicanRevolution/mexican_rev_rally", 63, 2, 50.0f, 2, 60, 0);
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x4504 / 17668
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

int Function_81(bool bParam0, int iParam1) //Position: 0x451B / 17691
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_PERS_CHAR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(bVar0), "Settings", "blipID", iParam1))
		{
			bVar1 = GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0));
			if (IS_BLIP_VALID(bVar1))
			{
				REMOVE_BLIP(bVar1);
			}
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_BLIP_ICON: This Shopkeeper is not set up correctly in the XML data - Missing blipID in Settings");
	}
	return 0;
}

int Function_82(bool bParam0, int iParam1) //Position: 0x460A / 17930
{
	bool bVar0;
	
	if (!IS_PERS_CHAR_VALID(bParam0))
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

int Function_83(bool bParam0, bool bParam1) //Position: 0x46E9 / 18153
{
	bool bVar0;
	
	if (!IS_PERS_CHAR_VALID(bParam0))
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

void Function_84(var uParam0, bool bParam1) //Position: 0x481E / 18462
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x4866 / 18534
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_90(bParam1, bParam2);
	if (!Function_89(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_88(bParam4, 0);
		}
		else
		{
			Function_87(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_88(bParam5, 0);
		}
		else
		{
			Function_87(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", true);
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
		bVar3[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		bVar3[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(bVar3[0]))
		{
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_86(bVar3[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar6) && !bVar6 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar6);
			}
			GRINGO_ENABLE_SPAWN(bVar3[0], 0);
		}
		if (IS_GRINGO_VALID(bVar3[1]))
		{
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_86(bVar3[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar7) && !bVar7 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar7, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar7, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar7);
			}
			GRINGO_ENABLE_SPAWN(bVar3[1], 0);
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
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", true);
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

var Function_86(bool bParam0, bool bParam1) //Position: 0x4BF9 / 19449
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x4C06 / 19462
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
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

void Function_88(bool bParam0, bool bParam1) //Position: 0x4C5A / 19546
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
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

bool Function_89(int iParam0) //Position: 0x4CAB / 19627
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_90(bool bParam0, bool bParam1) //Position: 0x4CC1 / 19649
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

var Function_91(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x4E1B / 19995
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_4(iParam0))
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
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

int Function_92(int iParam0, bool bParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11) //Position: 0x4EB7 / 20151
{
	var uVar0;
	
	Global_62484[iParam014].f_8 = GET_ASSET_ID(bParam1, 4);
	Global_62484[iParam014].f_12 = iParam0;
	Global_62484[iParam014].f_28 = fParam5;
	Global_62484[iParam014].f_24 = iParam7;
	Global_62484[iParam014].f_52 = iParam8;
	Global_62484[iParam014].f_16 = fParam9;
	Global_62484[iParam014].f_20 = iParam10;
	*(&Global_62484[iParam014] + 36) = { StackVal, StackVal, vParam2 };
	Global_62484[iParam014].f_48 = iParam6;
	uVar0 = Function_51(iParam7, iParam0, 6);
	if (Function_97(uVar0) == 0)
	{
		Function_94(uVar0, MAKE_TIME_OF_DAY_EX(true, false, 0, 0));
	}
	iParam11 = iParam11;
	Function_93(&(Global_62484[iParam014]), 24);
	return 1;
}

void Function_93(var uParam0, int iParam1) //Position: 0x4F5A / 20314
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x4F69 / 20329
{
	if (!Function_95(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_36 = iParam1;
	return;
}

bool Function_95(int iParam0) //Position: 0x4F84 / 20356
{
	if (!Function_46(iParam0))
	{
		return 0;
	}
	if (!Function_96(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_96(int iParam0) //Position: 0x4FA8 / 20392
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_97(int iParam0) //Position: 0x4FBD / 20413
{
	if (!Function_46(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_98(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4FD7 / 20439
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_134(2))
	{
		return;
	}
	if (Function_115(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_15(uParam0[iVar02], 2))
		{
			if (Function_99(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_80(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_118(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_99(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x5089 / 20617
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_115(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_15(uParam0, 2))
	{
		return 1;
	}
	if (Function_15(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
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
		uParam1->f_8 = Function_101(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_77(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_102(uParam0, 4);
	}
	Function_100(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_100(bool bParam0, bool bParam1) //Position: 0x51F4 / 20980
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_77(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_77(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_77(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_77(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_77(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_77(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_101(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x5330 / 21296
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_102(var uParam0, int iParam1) //Position: 0x5449 / 21577
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_103(var uParam0, int iParam1) //Position: 0x5460 / 21600
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_104(var uParam0, var uParam1, bool bParam2) //Position: 0x546F / 21615
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 36);
	return;
}

void Function_105(var uParam0, var uParam1, bool bParam2) //Position: 0x54D7 / 21719
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 24);
	return;
}

void Function_106(var uParam0, var uParam1, bool bParam2) //Position: 0x553A / 21818
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 12);
	return;
}

void Function_107(int iParam0, var uParam1, bool bParam2) //Position: 0x55A0 / 21920
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	uParam1[bVar020]->f_72 = bParam2;
	return;
}

void Function_108(int iParam0, var uParam1, vector3 vParam2) //Position: 0x55FB / 22011
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_73(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_109(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5661 / 22113
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_73(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_110(int iParam0, var uParam1, vector3 vParam2) //Position: 0x56C9 / 22217
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_73(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_111(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5733 / 22323
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_73(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_112(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5798 / 22424
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_73(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_113(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5800 / 22528
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_73(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_114(int iParam0) //Position: 0x5863 / 22627
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_115(&(Global_29008[iParam0]), 4);
}

bool Function_115(var uParam0, int iParam1) //Position: 0x587F / 22655
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_116(var uParam0, var uParam1, int iParam2) //Position: 0x589B / 22683
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_130())
	{
		return 1;
	}
	if (Function_115(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_16(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_15(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_15(uParam0[iVar02], 8))
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

void Function_117(var uParam0, var uParam1, int iParam2) //Position: 0x5967 / 22887
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_130())
	{
		return;
	}
	if (!Function_115(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_16(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_16(iParam2), 12));
			Function_118(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_103(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_103(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_118(var uParam0, int iParam1) //Position: 0x5A3D / 23101
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_119() //Position: 0x5A4C / 23116
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_127(3, 3);
	bVar0 = bVar0;
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/esc_veh_gen", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_cartvendor", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/oldf_pray", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_lean_window", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_table_service", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/browse_table", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_woman", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_leanwall", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/preaching_at_podium", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/browse_table_low", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/grind_corn", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/ai_goat_grazing", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/horse_drinking", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_link", 1, 0);
	Function_125(&Local_16 + 4, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	if (!Function_120(&Local_16 + 4))
	{
		return 0;
	}
	Local_16 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(Local_16))
	{
		Local_16 = CREATE_LAYOUT("Chuparosa_layout");
	}
	Local_16.f_668 = CREATE_OBJECTSET_IN_LAYOUT("moneygrpSet", Local_16, 8, 0);
	*(&Local_16 + 672[06]) = { -2759,24f, 32,12549f, 4276,566f };
	*(&Local_16 + 672[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_16, "nmoneyDrop", -2759,24f, 32,12549f, 4276,566f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "Toss");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_16.f_668);
	*(&Local_16 + 700) = { -2689,996f, 31,55404f, 4295,06f };
	*(&Local_16 + 700 + 12) = { 0.0f, -92,29958f, 0.0f };
	Local_16.f_724 = CREATE_POINT_IN_LAYOUT(Local_16, "player_save_flag_CHU", -2689,996f, 31,55404f, 4295,06f, 0.0f, -92,29958f, 0.0f);
	*(&Local_16 + 728) = { -2724,54f, 32,82832f, 4292,267f };
	*(&Local_16 + 728 + 12) = { 0.0f, -20,18586f, 0.0f };
	Local_16.f_752 = CREATE_POINT_IN_LAYOUT(Local_16, "player_shop_flag_GEN", -2724,54f, 32,82832f, 4292,267f, 0.0f, -20,18586f, 0.0f);
	*(&Local_16 + 756) = { -2713,886f, 32,83387f, 4289,681f };
	*(&Local_16 + 756 + 12) = { 0.0f, 88,2687f, 0.0f };
	Local_16.f_780 = CREATE_POINT_IN_LAYOUT(Local_16, "player_shop_flag_DOC", -2713,886f, 32,83387f, 4289,681f, 0.0f, 88,2687f, 0.0f);
	*(&Local_16 + 784) = { -2683,663f, 31,49239f, 4294,73f };
	*(&Local_16 + 784 + 12) = { 0.0f, 87,77409f, 0.0f };
	Local_16.f_808 = CREATE_POINT_IN_LAYOUT(Local_16, "player_purchase_flag_CHU", -2683,663f, 31,49239f, 4294,73f, 0.0f, 87,77409f, 0.0f);
	Local_16.f_812 = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", Local_16, 8, 0);
	*(&Local_16 + 816[06]) = { -2729,833f, 32,82177f, 4264,17f };
	*(&Local_16 + 816[06] + 12) = { 0.0f, 180,0685f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_16, "setCornDown", -2729,833f, 32,82177f, 4264,17f, 0.0f, 180,0685f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_16.f_812);
	Local_16.f_844 = CREATE_OBJECTSET_IN_LAYOUT("watermelongrpSet", Local_16, 8, 0);
	*(&Local_16 + 848[06]) = { -2699,569f, 31,50973f, 4293,519f };
	*(&Local_16 + 848[06] + 12) = { 0.0f, 126,1483f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_16, "setMelonDown", -2699,569f, 31,50973f, 4293,519f, 0.0f, 126,1483f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_16.f_844);
	*(&Local_16 + 876) = { -2718,053f, 32,23946f, 4234,686f };
	*(&Local_16 + 876 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_16.f_900 = CREATE_POINT_IN_LAYOUT(Local_16, "sleep1", -2718,053f, 32,23946f, 4234,686f, 0.0f, 0.0f, 0.0f);
	*(&Local_16 + 904) = { -2723,413f, 32,23946f, 4237,482f };
	*(&Local_16 + 904 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_16.f_928 = CREATE_POINT_IN_LAYOUT(Local_16, "sleep2", -2723,413f, 32,23946f, 4237,482f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "dealer_and_customer", "dealer_and_customer", -2722,068f, 32,82633f, 4294,833f, 0.0f, -14,98609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "dealer_and_customer1", "dealer_and_customer", -2706,592f, 31,18777f, 4282,946f, 0.0f, -41,04572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "dealer_and_customer2", "dealer_and_customer", -2727,116f, 32,28181f, 4237,824f, 0.0f, -236,5456f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_16, "esc_veh_gen", "esc_veh_gen", -2642,158f, 30,21604f, 4281,609f, 0.0f, -189,9956f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_932), 1);
	Local_16.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_16, "esc_veh_gen1", "esc_veh_gen", -2759,056f, 32,12549f, 4284,19f, 0.0f, 99,74242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_936), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn1", "nlean_rail", -2700,94f, 31,2599f, 4255,972f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn3", "nlean_rail", -2670,462f, 35,65717f, 4257,349f, 0.0f, 92,57377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_cartVendor1", "mex_cartVendor", -2723,965f, 32,83249f, 4272,63f, 0.0f, -91,60421f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_cartVendor2", "mex_cartVendor", -2718,475f, 32,83003f, 4275,44f, 0.0f, -92,17863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanRail7", "nlean_rail", -2700,922f, 32,42649f, 4229,873f, 0.0f, 79,96679f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanRail5", "nlean_rail", -2715,355f, 32,28f, 4244,152f, 0.0f, -146,8703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanRail4", "nlean_rail", -2724,101f, 36,3434f, 4243,567f, 0.0f, -147,1155f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_pickGarbage", "mex_pickGarbage", -2728,942f, 32,82357f, 4264,417f, 0.0f, 170,4939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_pickGarbage2", "mex_pickGarbage", -2730,501f, 32,79107f, 4283,625f, 0.0f, -8,747872f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_pickGarbage3", "mex_pickGarbage", -2716,161f, 32,87223f, 4269,499f, 0.0f, 88,95833f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround1", "Rand_Idle_Sit_Ground", -2732,229f, 32,82489f, 4266,584f, 0.0f, -153,1718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround2", "Rand_Idle_Sit_Ground", -2733,203f, 32,82403f, 4267,043f, 0.0f, -121,0428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround3", "Rand_Idle_Sit_Ground", -2721,261f, 32,82936f, 4297,862f, 0.0f, 3,523345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround4", "Rand_Idle_Sit_Ground", -2736,289f, 32,59834f, 4279,507f, 0.0f, 35,63669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround5", "Rand_Idle_Sit_Ground", -2722,877f, 32,82626f, 4297,546f, 0.0f, -389,6537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround6", "Rand_Idle_Sit_Ground", -2710,026f, 32,83127f, 4291,558f, 0.0f, -268,6413f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround7", "Rand_Idle_Sit_Ground", -2743,353f, 32,60661f, 4252,203f, 0.0f, 135,3136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_washCloths", "mex_washCloths", -2713,497f, 32,88616f, 4262,684f, 0.0f, -138,1016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_washCloths1", "mex_washCloths", -2714,627f, 32,08847f, 4245,144f, 0.0f, -275,1101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_washCloths2", "mex_washCloths", -2751,627f, 32,12549f, 4273,753f, 0.0f, 145,1261f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Pee_nospawn", "Pee", -2699,524f, 31,12157f, 4295,953f, 0.0f, -28,98092f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Pee_nospawn2", "Pee", -2699,436f, 32,27353f, 4215,277f, 0.0f, -49,15475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall", -2710,05f, 32,83532f, 4294,586f, 0.0f, 78,555f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground", -2735,177f, 32,54029f, 4287,906f, 0.0f, 39,6382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -2730,873f, 32,82593f, 4265,899f, 0.0f, 169,64f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn1", "rand_idle_stand", -2722,141f, 32,82832f, 4278,196f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn2", "rand_idle_stand", -2737,552f, 32,51026f, 4274,347f, 0.0f, -237,6557f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn", "rand_idle_stand", -2691,51f, 31,54237f, 4255,169f, 0.0f, -93,53859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn1", "rand_idle_stand", -2683,577f, 31,54405f, 4261,768f, 0.0f, -33,33777f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_announce", "stand_announce", -2716f, 32,89307f, 4264,277f, 0.0f, 179,902f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_announce1", "stand_announce", -2726,999f, 32,82667f, 4288,021f, 0.0f, 16,57644f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_announce2", "stand_announce", -2754,49f, 32,68199f, 4280,257f, 0.0f, -255,3718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround", "Rand_Idle_Sit_Ground", -2741,405f, 32,32196f, 4270,94f, 0.0f, 201,3613f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround8", "Rand_Idle_Sit_Ground", -2741,385f, 32,24132f, 4289,943f, 0.0f, -32,67652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall", -2755,209f, 32,13554f, 4261,26f, 0.0f, -76,76033f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_yelling_mid", "stand_yelling_mid", -2698,177f, 31,14732f, 4276,176f, 0.0f, 173,4091f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2697,212f, 32,0809f, 4287,476f, 0.0f, 6,732717f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -2697,151f, 32,07793f, 4285,755f, 0.0f, 170,1481f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -2697,867f, 32,09244f, 4286,403f, 0.0f, -113,527f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_940), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_announce3", "stand_announce", -2683,431f, 31,86808f, 4287,223f, 0.0f, -271,143f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn2", "rand_idle_stand", -2695,428f, 32,07424f, 4285,912f, 0.0f, -96,15138f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn3", "rand_idle_stand", -2695,436f, 32,07042f, 4282,844f, 0.0f, 146,0121f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn3", "rand_idle_stand", -2681,449f, 31,85911f, 4287,67f, 0.0f, -84,09213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn4", "rand_idle_stand", -2699,48f, 32,07019f, 4283,121f, 0.0f, 355,5928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn4", "Rand_Idle_NearWall", -2695,141f, 31,1384f, 4281,124f, 0.0f, 296,848f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn5", "Rand_Idle_NearWall", -2693,607f, 31,15486f, 4281,363f, 0.0f, -3,418384f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn6", "Rand_Idle_NearWall", -2687,749f, 31,14025f, 4281,558f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn7", "Rand_Idle_NearWall", -2700,762f, 31,19487f, 4280,21f, 0.0f, -2,94624f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "bar_drink_serve", "bar_drink_serve", -2699,28f, 32,07365f, 4287,375f, 0.0f, 88,15914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "bar_drink_serve1", "bar_drink_serve", -2699,325f, 32,07358f, 4288,519f, 0.0f, 88,15914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_flirt_stand_link", "mex_flirt_stand_link", -2697,631f, 32,07573f, 4289,472f, 0.0f, 28,73102f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_flirt_stand_link1", "mex_flirt_stand_link", -2689,823f, 31,34747f, 4284,649f, 0.0f, 125,3811f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_guntricks_e_any", "stand_guntricks_e_any", -2679,242f, 31,51926f, 4286,334f, 0.0f, -256,8764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall", "Rand_Idle_NearWall", -2689,488f, 31,35579f, 4290,813f, 0.0f, -1,641587f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_prayer_oldWoman", "noldf_pray", -2654,689f, 31,26777f, 4277,835f, 0.0f, -20,42616f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_prayer_oldWoman1", "noldf_pray", -2656,279f, 31,28197f, 4277,187f, 0.0f, -43,8672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_holy_water", "stand_holy_water", -2657,05f, 31,27386f, 4275,322f, 0.0f, -105,9093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_holy_water1", "stand_holy_water", -2661,975f, 31,27041f, 4281,784f, 0.0f, -41,89678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround9", "Rand_Idle_Sit_Ground", -2676,626f, 31,22689f, 4277,809f, 0.0f, 136,8702f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_Sit", "Rand_Idle_Sit_Ground", -2675,969f, 31,24844f, 4278,489f, 0.0f, 134,4704f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall4", "Rand_Idle_NearWall", -2662,258f, 31,39314f, 4248,458f, 0.0f, -9,330482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_back_nospawn2", "nlean_rail", -2669,178f, 35,71977f, 4250,244f, 0.0f, 68,18997f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn4", "nlean_rail", -2670,072f, 35,65451f, 4253,028f, 0.0f, 79,65646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn5", "nlean_rail", -2661,612f, 40,53004f, 4249,344f, 0.0f, 79,21042f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall6", "Rand_Idle_NearWall", -2665,05f, 31,38623f, 4261,358f, 0.0f, 164,7648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn5", "rand_idle_stand", -2670,265f, 35,66784f, 4253,768f, 0.0f, 81,04984f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn3", "repair_kneel", -2651,227f, 31,12656f, 4244,463f, 0.0f, -97,86232f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low2", "sit_fence_low", -2660,789f, 40,53606f, 4248,995f, 0.0f, -11,12019f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low3", "sit_fence_low", -2667,715f, 35,67765f, 4262,426f, 0.0f, 172,4417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low4", "sit_fence_low", -2716,046f, 32,28f, 4244,72f, 0.0f, -147,0454f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low5", "sit_fence_low", -2724,418f, 32,28041f, 4245,969f, 0.0f, 121,9602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall8", "Rand_Idle_NearWall", -2714,506f, 32,28f, 4241,621f, 0.0f, -147,7087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall9", "Rand_Idle_NearWall", -2706,638f, 32,27977f, 4235,488f, 0.0f, 301,2578f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall10", "Rand_Idle_NearWall", -2721,418f, 32,2793f, 4239,814f, 0.0f, 211,7959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall11", "Rand_Idle_NearWall", -2723,76f, 36,35501f, 4241,283f, 0.0f, 214,6714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround12", "Rand_Idle_Sit_Ground", -2718,897f, 32,28f, 4239,234f, 0.0f, 117,2789f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround13", "Rand_Idle_Sit_Ground", -2707,46f, 32,28f, 4234,86f, 0.0f, 660,1166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround14", "Rand_Idle_Sit_Ground", -2720,189f, 32,28f, 4238,594f, 0.0f, -148,6528f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_lean_window3", "mex_lean_window", -2710,029f, 32,26497f, 4240,836f, 0.0f, -146,6607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_lean_window5", "mex_lean_window", -2724,874f, 36,36723f, 4243,932f, 0.0f, 211,5863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -2711,908f, 32,2328f, 4239,971f, 0.0f, -146,6575f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_944), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -2715,815f, 32,28f, 4242,415f, 0.0f, -148,7511f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn6", "rand_idle_stand", -2721,666f, 36,36624f, 4242,072f, 0.0f, -145,7532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn7", "rand_idle_stand", -2716,927f, 32,28f, 4245,252f, 0.0f, -146,593f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_948), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn4", "rand_idle_stand", -2734,886f, 36,35334f, 4226,86f, 0.0f, 391,6349f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn5", "rand_idle_stand", -2709,256f, 32,28f, 4240,337f, 0.0f, -151,5569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall12", "Rand_Idle_NearWall", -2735,427f, 32,6099f, 4247,504f, 0.0f, -133,742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall13", "Rand_Idle_NearWall", -2740,268f, 32,60714f, 4252,83f, 0.0f, -131,7845f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall_nospawn10", "Rand_Idle_NearWall", -2739,63f, 32,52044f, 4245,397f, 0.0f, -39,95169f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn8", "rand_idle_stand", -2736,266f, 32,61232f, 4251,381f, 0.0f, -131,5037f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn6", "rand_idle_stand", -2737,481f, 32,6124f, 4252,42f, 0.0f, -65,76472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_16, "xxx_announce", "stand_announce", -2691,794f, 32,44015f, 4216,81f, 0.0f, -89,66628f, 0.0f);
	Local_16.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_16, "yyy_announce", "stand_announce", -2693,515f, 32,48102f, 4227,475f, 0.0f, -104,7692f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn5", "repair_kneel", -2701,437f, 32,35729f, 4216,87f, 0.0f, 77,84497f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn6", "repair_kneel", -2679,476f, 32,45333f, 4232,774f, 0.0f, -203,7723f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall15", "Rand_Idle_NearWall", -2681,455f, 32,47114f, 4228,956f, 0.0f, 169,3333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround15", "Rand_Idle_Sit_Ground", -2680,644f, 32,47001f, 4219,519f, 0.0f, 345,2155f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall16", "Rand_Idle_NearWall", -2678,49f, 32,47263f, 4221,358f, 0.0f, 256,3966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_cleanpistol", "sit_cleanpistol", -2678,367f, 31,35864f, 4248,703f, 0.0f, -43,78442f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_960), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low8", "sit_fence_low", -2686,176f, 31,55106f, 4257,221f, 0.0f, -46,33631f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_stool_sit3", "mex_stool_sit", -2701,574f, 31,18695f, 4260,484f, 0.0f, -160,0326f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_hammer_table6", "stand_hammer_table", -2619,592f, 30,15142f, 4260,75f, 0.0f, -91,33687f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn8", "repair_kneel", -2628,253f, 30,14766f, 4272,25f, 0.0f, -134,1485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_flirt_stand_link2", "mex_flirt_stand_link", -2696,615f, 32,07283f, 4284,166f, 0.0f, -43,31337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_cartVendor3", "mex_cartVendor", -2723,147f, 32,86032f, 4285,009f, 0.0f, 71,97646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_cartVendor4", "mex_cartVendor", -2722,087f, 32,82832f, 4275,645f, 0.0f, 90,11521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_964 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_bartender_bar_work", "stand_bartender_bar_work", -2701,425f, 32,07548f, 4286,737f, 0.0f, -89,85479f, 0.0f), Local_16.f_964);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand2", "rand_idle_stand", -2701,606f, 32,07688f, 4289,271f, 0.0f, -38,70362f, 0.0f), Local_16.f_964);
	Local_16.f_968 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ppp", "mex_table_service", -2697,792f, 31,13223f, 4275,048f, 0.0f, 292,7946f, 0.0f), Local_16.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "uuu", "mex_table_service", -2697,17f, 31,15475f, 4279,653f, 0.0f, -23,09932f, 0.0f), Local_16.f_968);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2602,294f, 30,34495f, 4256,892f, 0.0f, -120,5578f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn10", "nlean_rail", -2612,535f, 30,28069f, 4248,888f, 0.0f, 138,7607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn11", "nlean_rail", -2604,888f, 30,3518f, 4255,212f, 0.0f, 139,5636f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn9", "rand_idle_stand", -2605,657f, 30,36879f, 4254,749f, 0.0f, 136,4897f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn7", "rand_idle_stand", -2611,663f, 30,29744f, 4249,927f, 0.0f, 131,4014f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_announce4", "stand_announce", -2611,097f, 30,3518f, 4250,811f, 0.0f, 124,4171f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_announce5", "stand_announce", -2641,44f, 30,98385f, 4240f, 0.0f, -137,6738f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn8", "rand_idle_stand", -2705,047f, 31,18569f, 4264,266f, 0.0f, -87,6515f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn9", "rand_idle_stand", -2690,441f, 31,54942f, 4256,026f, 0.0f, 51,88127f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn10", "rand_idle_stand", -2702,303f, 31,30546f, 4256,009f, 0.0f, 269,7386f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn10", "rand_idle_stand", -2704,432f, 31,18695f, 4263,304f, 0.0f, -130,454f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn11", "rand_idle_stand", -2698,768f, 31,35398f, 4255,475f, 0.0f, 181,1726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn12", "rand_idle_stand", -2753,123f, 32,67117f, 4287,189f, 0.0f, 112,6122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -2754,104f, 32,66092f, 4278,278f, 0.0f, 45,6679f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_yawning_n_any", "rand_idle_stand", -2754,379f, 32,66957f, 4283,319f, 0.0f, 104,3889f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn12", "nlean_rail", -2755,559f, 32,65507f, 4278,385f, 0.0f, 106,1503f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail_nospawn13", "nlean_rail", -2752,33f, 32,64083f, 4288,577f, 0.0f, 123,4623f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn10", "repair_kneel", -2621,158f, 30,11765f, 4250,561f, 0.0f, -45,13608f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn12", "repair_kneel", -2615,297f, 30,11765f, 4257,675f, 0.0f, -116,5228f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "repair_kneel_nospawn13", "repair_kneel", -2635,528f, 30,60296f, 4248,011f, 0.0f, 179,7069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_hammer_wall2", "stand_hammer_wall", -2614,836f, 29,85286f, 4249,446f, 0.0f, 44,92268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn11", "rand_idle_stand", -2702,966f, 31,17231f, 4276,491f, 0.0f, 119,5458f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn13", "rand_idle_stand", -2704,032f, 31,14145f, 4277,201f, 0.0f, -57,97424f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -2691,164f, 31,13915f, 4280,13f, 0.0f, 80,64589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn12", "rand_idle_stand", -2692,546f, 31,13915f, 4279,655f, 0.0f, -84,59899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand_nospawn14", "rand_idle_stand", -2691,131f, 31,13915f, 4279,315f, 0.0f, 100,455f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn13", "rand_idle_stand", -2699,02f, 31,14145f, 4274,566f, 0.0f, 189,3094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_table", "lean_table", -2733,821f, 32,82417f, 4274,447f, 0.0f, 170,1082f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", -2724,229f, 32,82832f, 4274,469f, 0.0f, -90,48988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -2697,085f, 32,40038f, 4231,594f, 0.0f, -11,5191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "nsit_docks", "nsit_docks", -2676,745f, 32,47237f, 4234,501f, 0.0f, -191,7146f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_out_window_R", "look_out_window_R", -2695,476f, 32,07358f, 4287,719f, 0.0f, -92,57731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_out_window_L", "look_out_window_L", -2681,944f, 31,86889f, 4286,098f, 0.0f, -91,30393f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_table2", "lean_table", -2694,756f, 31,14651f, 4275,161f, 0.0f, 79,34431f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_table3", "lean_table", -2700,052f, 31,15504f, 4276,08f, 0.0f, 45,30392f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_out_window_L1", "look_out_window_L", -2700,352f, 32,07358f, 4282,893f, 0.0f, -2,270569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_972), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "dealer_and_customer3", "dealer_and_customer", -2709,344f, 32,89307f, 4266,02f, 0.0f, 94,84248f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "browse_table", "browse_table", -2716,434f, 32,82832f, 4272,794f, 0.0f, 92,25356f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "browse_table1", "browse_table", -2719,656f, 32,82832f, 4287,158f, 0.0f, 54,85031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_table4", "lean_table", -2713,233f, 32,81488f, 4290,275f, 0.0f, -90,30302f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_out_window_L2", "look_out_window_L", -2722,108f, 32,82832f, 4277,297f, 0.0f, 89,05966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -2750,297f, 32,12549f, 4269,403f, 0.0f, 89,53464f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_fence_L_talking2", "lean_fence_L_talking", -2720,358f, 36,35453f, 4241,028f, 0.0f, -151,8631f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_distance_binocs", "look_distance_binocs", -2735,188f, 36,36133f, 4228,916f, 0.0f, 83,76247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_distance_binocs1", "look_distance_binocs", -2656,327f, 40,53142f, 4249,953f, 0.0f, -57,70402f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Pee", "Pee", -2727,387f, 32,12549f, 4223,108f, 0.0f, -43,92878f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_fence_L_talking3", "lean_fence_L_talking", -2727,277f, 36,37946f, 4222,154f, 0.0f, 30,26789f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_docks1", "nsit_docks", -2675,957f, 35,7747f, 4222,226f, 0.0f, -553,9034f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_distance_binocs2", "look_distance_binocs", -2673,86f, 35,77145f, 4221,826f, 0.0f, -113,1027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_fence_L_talking4", "lean_fence_L_talking", -2666,822f, 31,38693f, 4247,021f, 0.0f, 45,35224f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_out_window_L4", "look_out_window_L", -2670,448f, 31,38693f, 4255,068f, 0.0f, 89,76052f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_16, "player_sleep_CHU", "player_sleep_bed_R", -2693,262f, 31,52597f, 4295,973f, 0.0f, 0.0f, 0.0f);
	Local_16.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Locked_Footlocker", "Locked_Footlocker", -2692,005f, 31,48211f, 4297,786f, 0.0f, 359,0897f, 0.0f);
	DECOR_SET_BOOL(Local_16.f_980, "NoLockpick", true);
	DECOR_SET_BOOL(Local_16.f_980, "nAmmoCheck", true);
	DECOR_SET_INT(Local_16.f_980, "GringoDollarAmt", false);
	DECOR_SET_BOOL(Local_16.f_980, "PlayerHouseChest", true);
	DECOR_SET_BOOL(Local_16.f_980, "scrap", true);
	Local_16.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_16, "aaa", "stand_sellPaper", -2678,621f, 32,51722f, 4219,815f, 0.0f, 54,13822f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand", "rand_idle_stand", -2691,577f, 31,14235f, 4274,137f, 0.0f, 169,7756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Pee1", "Pee", -2649,169f, 30,4815f, 4282,26f, 0.0f, -84,00387f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunkdancing_woman", "stand_drunkdancing_woman", -2696,592f, 32,06985f, 4286,874f, 0.0f, 71,03017f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink7", "stand_drunk_rowdydrink", -2698,701f, 31,12157f, 4267,483f, 0.0f, -178,4159f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_16, "player_sleep_CHU1", "player_sleep_bed_L", -2693,262f, 31,52597f, 4293,715f, 0.0f, -179,9934f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_fence_L_talking", "lean_fence_L_talking", -2740,206f, 32,60661f, 4255,531f, 0.0f, -131,6023f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -2665,775f, 31,08973f, 4297,115f, 0.0f, 13,50743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -2664,846f, 31,08973f, 4296,908f, 0.0f, 12,63311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "nlean_rail", "nlean_rail", -2734,068f, 36,36867f, 4226,253f, 0.0f, 31,02964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail1", "nlean_rail", -2669,572f, 31,3713f, 4251,013f, 0.0f, 69,54353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand1", "rand_idle_stand", -2669,831f, 31,38693f, 4251,682f, 0.0f, 52,64424f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail2", "nlean_rail", -2726,173f, 36,39109f, 4243,399f, 0.0f, 122,4736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail3", "nlean_rail", -2673,79f, 31,26664f, 4268,384f, 0.0f, 42,83303f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail4", "nlean_rail", -2723,34f, 36,36924f, 4243,025f, 0.0f, -148,1259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall17", "mex_leanWall", -2755,46f, 32,12549f, 4260,206f, 0.0f, -256,8691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_leanWall18", "mex_leanWall", -2702,263f, 31,19844f, 4281,075f, 0.0f, 179,4543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -2719,193f, 36,38667f, 4239,506f, 0.0f, -73,66692f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_16, "preaching_at_podium", "preaching_at_podium", -2655,088f, 31,26224f, 4275,884f, 0.0f, 135,7107f, 0.0f);
	Local_16.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_16, "bbb", "stand_sellPaper", -2692,527f, 32,46306f, 4226,13f, 0.0f, 170,0112f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "whittle_wood", "whittle_wood", -2709,336f, 32,83332f, 4275,746f, 0.0f, -125,7399f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "whittle_wood1", "whittle_wood", -2733,389f, 32,80006f, 4280,553f, 0.0f, 72,34325f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "browse_table_low", "browse_table_low", -2712,357f, 32,83294f, 4285,917f, 0.0f, -194,2401f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_eat_fruit_barrel1", "stand_eat_fruit_barrel", -2713,465f, 32,80901f, 4286,327f, 0.0f, -90,43224f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "browse_table_low1", "browse_table_low", -2729,827f, 32,81335f, 4281,943f, 0.0f, 89,53314f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "grind_corn", "grind_corn", -2710,602f, 32,82798f, 4285,104f, 0.0f, 87,95607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "grind_corn1", "grind_corn", -2729,604f, 32,82612f, 4275,97f, 0.0f, -90,32787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_stool_sit4", "mex_stool_sit", -2710,224f, 32,89307f, 4259,807f, 0.0f, 178,55f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sleep_cityhall", "lie_sleep_on_bed_l", -2649,437f, 35,68682f, 4259,565f, 0.0f, -11,51153f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "knl_watertrough", "knl_watertrough", -2730,633f, 32,75423f, 4289,998f, 0.0f, 150,0536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "knl_watertrough1", "knl_watertrough", -2715,935f, 32,14197f, 4246,886f, 0.0f, 31,39256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "look_out_window_L5", "look_out_window_L", -2744,289f, 32,12549f, 4271,932f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_cartVendor", "mex_cartVendor", -2718,546f, 32,85599f, 4272,604f, 0.0f, -91,86276f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_1004), 0);
	Local_16.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_cartVendor5", "mex_cartVendor", -2721,419f, 32,82862f, 4285,882f, 0.0f, -124,9465f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_1008), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_eat_fruit_barrel2", "stand_eat_fruit_barrel", -2717,194f, 32,89307f, 4266,62f, 0.0f, 94,65188f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_eat_fruit_barrel3", "stand_eat_fruit_barrel", -2734,231f, 32,70026f, 4282,312f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_1012 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping1", "dog_sleeping", -2709,229f, 32,13842f, 4241,915f, 0.0f, 87,31003f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping2", "dog_sleeping", -2662,047f, 31,26955f, 4245,833f, 0.0f, -130,5047f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping3", "dog_sleeping", -2661,298f, 31,37847f, 4227,073f, 0.0f, -322,7288f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping4", "dog_sleeping", -2645,48f, 30,85936f, 4267,036f, 0.0f, -390,138f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping5", "dog_sleeping", -2706,37f, 31,20782f, 4278,037f, 0.0f, -207,1072f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping6", "dog_sleeping", -2709,066f, 32,15312f, 4226,422f, 0.0f, 173,0518f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping7", "dog_sleeping", -2741,418f, 32,23201f, 4269,429f, 0.0f, -103,2713f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping8", "dog_sleeping", -2649,078f, 31,05207f, 4265,868f, 0.0f, -316,4597f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping9", "dog_sleeping", -2667,509f, 31,15334f, 4270,441f, 0.0f, -435,3413f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping10", "dog_sleeping", -2681,379f, 31,58239f, 4256,187f, 0.0f, -220,6035f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping11", "dog_sleeping", -2662,222f, 31,09263f, 4295,902f, 0.0f, -458,066f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping12", "dog_sleeping", -2708,875f, 32,88519f, 4270,887f, 0.0f, -27,19551f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping13", "dog_sleeping", -2755,035f, 32,10873f, 4262,861f, 0.0f, -198,0146f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping14", "dog_sleeping", -2742,538f, 32,13963f, 4234,323f, 0.0f, -173,5166f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping15", "dog_sleeping", -2661,901f, 31,2511f, 4275,727f, 0.0f, -435,3413f, 0.0f), Local_16.f_1012);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sleeping16", "dog_sleeping", -2719,659f, 32,80344f, 4293,62f, 0.0f, -137,1826f, 0.0f), Local_16.f_1012);
	Local_16.f_1016 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing", "ai_goat_grazing", -2690,854f, 31,96596f, 4234,824f, 0.0f, 49,7446f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing1", "ai_goat_grazing", -2751,803f, 32,15723f, 4260,115f, 0.0f, 69,84906f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing2", "ai_goat_grazing", -2754,101f, 32,14796f, 4253,272f, 0.0f, -23,74084f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing4", "ai_goat_grazing", -2729,756f, 32,21817f, 4246,561f, 0.0f, -360,0409f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing5", "ai_goat_grazing", -2718,87f, 32,18443f, 4246,359f, 0.0f, -384,1841f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing6", "ai_goat_grazing", -2703,8f, 32,18443f, 4237,148f, 0.0f, -280,3706f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing7", "ai_goat_grazing", -2702,57f, 32,18443f, 4219,721f, 0.0f, -415,6729f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing8", "ai_goat_grazing", -2677,904f, 31,96741f, 4235,489f, 0.0f, -326,0378f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing9", "ai_goat_grazing", -2669,959f, 32,04177f, 4229,94f, 0.0f, -314,9368f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing10", "ai_goat_grazing", -2651,3f, 31,31342f, 4230,939f, 0.0f, -408,8285f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing11", "ai_goat_grazing", -2664,655f, 31,31342f, 4245,007f, 0.0f, -586,1939f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing12", "ai_goat_grazing", -2677,159f, 31,31342f, 4260,934f, 0.0f, -644,1025f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing13", "ai_goat_grazing", -2688,928f, 31,42446f, 4263,198f, 0.0f, -770,3742f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing14", "ai_goat_grazing", -2703,988f, 31,14704f, 4286,387f, 0.0f, -773,7867f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing15", "ai_goat_grazing", -2713,122f, 32,84795f, 4298,404f, 0.0f, -939,9165f, 0.0f), Local_16.f_1016);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "ai_goat_grazing16", "ai_goat_grazing", -2712,866f, 32,85958f, 4259,311f, 0.0f, -791,8191f, 0.0f), Local_16.f_1016);
	Local_16.f_1020 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting", "dog_sitting", -2748,806f, 32,06164f, 4256,887f, 0.0f, -142,7021f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting2", "dog_sitting", -2752,903f, 32,12258f, 4264,483f, 0.0f, -156,3408f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting3", "dog_sitting", -2622,295f, 30,20312f, 4241,458f, 0.0f, -86,29097f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting4", "dog_sitting", -2731,618f, 32,15583f, 4241,564f, 0.0f, -130,3174f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting7", "dog_sitting", -2717,02f, 32,13634f, 4223,875f, 0.0f, -78,1883f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting12", "dog_sitting", -2671,878f, 32,04612f, 4228,613f, 0.0f, -178,0966f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting13", "dog_sitting", -2684,301f, 31,55816f, 4252,694f, 0.0f, 88,66974f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting14", "dog_sitting", -2663,277f, 31,27557f, 4268,03f, 0.0f, 89,50526f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting17", "dog_sitting", -2686,682f, 31,17409f, 4275,11f, 0.0f, 84,84787f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting18", "dog_sitting", -2692,913f, 31,12039f, 4272,403f, 0.0f, 84,6655f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting19", "dog_sitting", -2698,528f, 31,13205f, 4270,298f, 0.0f, 0.0f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting20", "dog_sitting", -2712,587f, 32,88491f, 4274,045f, 0.0f, 0.0f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting21", "dog_sitting", -2720,473f, 32,83862f, 4288,921f, 0.0f, 149,7872f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting22", "dog_sitting", -2743,843f, 32,13454f, 4275,167f, 0.0f, 59,8721f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting23", "dog_sitting", -2759,548f, 32,12264f, 4265,002f, 0.0f, 44,38501f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting24", "dog_sitting", -2757,853f, 32,14272f, 4282,718f, 0.0f, 105,0191f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting25", "dog_sitting", -2750,587f, 32,1354f, 4294,938f, 0.0f, 187,9627f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting26", "dog_sitting", -2743,732f, 32,12132f, 4297,247f, 0.0f, 117,6228f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting27", "dog_sitting", -2644,775f, 31,10398f, 4237,453f, 0.0f, -103,7121f, 0.0f), Local_16.f_1020);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "dog_sitting28", "dog_sitting", -2645,652f, 31,42549f, 4230,086f, 0.0f, -7,666987f, 0.0f), Local_16.f_1020);
	Local_16.f_1024 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "horse_drinking", "horse_drinking", -2672,395f, 31,13385f, 4267,133f, 0.0f, 133,4156f, 0.0f), Local_16.f_1024);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "horse_drinking1", "horse_drinking", -2668,291f, 31,2953f, 4245,95f, 0.0f, 226,3092f, 0.0f), Local_16.f_1024);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "horse_drinking2", "horse_drinking", -2757,545f, 32,12391f, 4278,386f, 0.0f, 281,6989f, 0.0f), Local_16.f_1024);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_16, "horse_drinking4", "horse_drinking", -2749,66f, 32,12391f, 4293,551f, 0.0f, 325,156f, 0.0f), Local_16.f_1024);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_stool_sit5", "mex_stool_sit", -2704,176f, 31,18695f, 4261,896f, 0.0f, -134,0801f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_table5", "lean_table", -2677,635f, 31,5332f, 4285,892f, 0.0f, 267,6974f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_link", -2701,406f, 31,12157f, 4271,844f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_flirt_sit_stool_link1", "mex_flirt_sit_stool_link", -2678,036f, 31,52763f, 4296,334f, 0.0f, 176,8809f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_stool_sit6", "mex_stool_sit", -2700,813f, 31,11627f, 4269,699f, 0.0f, 358,8258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "rand_idle_stand3", "rand_idle_stand", -2677,267f, 31,51938f, 4289,815f, 0.0f, 76,46826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_cleanpistol1", "sit_cleanpistol", -2705,969f, 31,16889f, 4268,409f, 0.0f, -88,83478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunkdancing_woman1", "stand_drunkdancing_woman", -2678,069f, 31,53157f, 4290,594f, 0.0f, 17,27323f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_1028), 1);
	Local_16.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink8", "stand_drunk_rowdydrink", -2678,544f, 31,53034f, 4289,371f, 0.0f, -154,6796f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_16.f_1032), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "stand_drunk_rowdydrink9", "stand_drunk_rowdydrink", -2677,588f, 31,53026f, 4288,903f, 0.0f, 155,3002f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_16, "drink_player", "drink_player", -2699,345f, 32,07688f, 4286,413f, 0.0f, 87,44286f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn14", "rand_idle_stand", -2677,26f, 31,54405f, 4255,711f, 0.0f, 53,38629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "smoking_stand_nospawn15", "rand_idle_stand", -2685,453f, 31,54405f, 4248,753f, 0.0f, -129,0992f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low9", "sit_fence_low", -2682,466f, 31,55106f, 4253,562f, 0.0f, 137,7652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low", "sit_fence_low", -2678,462f, 31,53304f, 4259,703f, 0.0f, 234,8929f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low10", "sit_fence_low", -2690,111f, 31,53304f, 4251,003f, 0.0f, 51,82619f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_16, "sit_fence_low11", "sit_fence_low", -2685,379f, 31,53304f, 4262,559f, 0.0f, 170,1358f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_16.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_16, "lean_rail5", "nlean_rail", -2677,145f, 31,46384f, 4250,785f, 0.0f, -237,6449f, 0.0f);
	Local_16.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround_tlkPsnt_link", "Rand_Idle_Sit_Ground", -2708,707f, 32,89223f, 4272,436f, 0.0f, 85,82832f, 0.0f);
	Local_16.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_16, "mex_sitGround_tlkPsnt_link1", "Rand_Idle_Sit_Ground", -2701,035f, 32,21484f, 4222,516f, 0.0f, 87,47881f, 0.0f);
	return 1;
}

bool Function_120(int iParam0) //Position: 0xC12B / 49451
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_124();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_123(iParam0[iVar03], 8);
		}
		else if (Function_122())
		{
			iVar1 = 1;
			Function_123(iParam0[iVar03], 8);
		}
		Function_123(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_123(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_123(iParam0[iVar03], 2);
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
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_123(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_123(iParam0[iVar03], 2);
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
	Function_121();
	return 1;
}

void Function_121() //Position: 0xC4A6 / 50342
{
	if (!Function_134(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_122() //Position: 0xC4E6 / 50406
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

void Function_123(var uParam0, int iParam1) //Position: 0xC511 / 50449
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_124() //Position: 0xC522 / 50466
{
	if (!Function_134(128))
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

var Function_125(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC564 / 50532
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_126(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_123(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_126(var uParam0, int iParam1, int iParam2) //Position: 0xC59C / 50588
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_123(uParam0[iVar03], 4);
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

void Function_127(int iParam0, int iParam1) //Position: 0xC660 / 50784
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

bool Function_128() //Position: 0xC6A9 / 50857
{
	if (!IS_LAYOUTREF_VALID(bLocal_839))
	{
		bLocal_839 = CREATE_LAYOUT(Function_35());
	}
	if (!IS_OBJECT_VALID(bLocal_840))
	{
		bLocal_840 = CREATE_WORLD_SECTOR(bLocal_839, "nChuparosa");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_840))
	{
		Function_129(StackVal, bLocal_839, "potclay");
		Function_129(StackVal, bLocal_839, "bottle");
		Function_129(StackVal, bLocal_839, "cloth");
		Function_129(StackVal, bLocal_839, "blanket");
		Function_129(StackVal, bLocal_839, "rope");
		Function_129(StackVal, bLocal_839, "jug0");
		Function_129(StackVal, bLocal_839, "bowlterracotta");
		Function_129(StackVal, bLocal_839, "candle0");
		Function_129(StackVal, bLocal_839, "hatchet0");
		Function_129(StackVal, bLocal_839, "cleaver0");
		Function_129(StackVal, bLocal_839, "glass0");
		Function_129(StackVal, bLocal_839, "bucket0");
		Function_129(StackVal, bLocal_839, "basket0");
		Function_129(StackVal, bLocal_839, "crate13");
		Function_129(StackVal, bLocal_839, "gourdwater0");
		Function_129(StackVal, bLocal_839, "butcherknife0");
		Function_129(StackVal, bLocal_839, "fishingpole0");
		Function_129(StackVal, bLocal_839, "nspittoon0");
		Function_129(StackVal, bLocal_839, "strongbox0");
		Function_129(StackVal, bLocal_839, "pitcher0");
		Function_129(StackVal, bLocal_839, "basin0");
		Function_129(StackVal, bLocal_839, "ncandyjar0");
		DESTROY_OBJECT(bLocal_840);
		DESTROY_LAYOUT(bLocal_839);
		return 1;
	}
	return 0;
}

void Function_129(bool bParam0, char* cParam1, int iParam2) //Position: 0xC98C / 51596
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, iParam2, cParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

bool Function_130() //Position: 0xC9E5 / 51685
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_131() //Position: 0xC9EE / 51694
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	
	Function_127(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("Chuparosa_layout");
	}
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_ring", 3, -2607,316f, 32,23925f, 4277,354f, 0.0f, 20.0f, 0.0f, 9,082973f, 3,009366f, 9,156511f);
	Local_4.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_nightwatchVol", 2, -2701,833f, 44,82173f, 4255,272f, 0.0f, 0.0f, 0.0f, 170,5879f, 36,96028f, 128,4257f);
	Local_4.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_nightwatchTeleportVol", 2, -2778,923f, 13,79006f, 4202,495f, 0.0f, 31,7106f, 0.0f, 292,4316f, 21,3058f, 93,2684f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_HorseBreaking", -2610,8f, 30,05599f, 4278,871f, 0.0f, -20,86391f, 0.0f);
	Local_4.f_16 = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwplayerpos", -2730,514f, 32,29929f, 4250,16f, 0.0f, 113,6161f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_16);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwproctor", -2731,438f, 32,3142f, 4250,672f, 0.0f, 283,8648f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_16);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwforeman", -2746,083f, 32,64523f, 4253,814f, 0.0f, 230,522f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_16);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwdogpos", -2730,627f, 32,25657f, 4251,189f, 0.0f, 46,01606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_16);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsepos", -2753,996f, 32,12549f, 4260,307f, 0.0f, 221,7562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_16);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwintrodog", -2724f, 32,68894f, 4257,987f, 0.0f, -8,486823f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_16);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcameraForemanPos", -2737,36f, 32,61f, 4251,46f, 0.0f, 319,0277f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_16);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwplayerEndPos", -2744,914f, 32,60661f, 4254,271f, 0.0f, 101,2515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_16);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwgateway", -2746,629f, 32,70037f, 4254,446f, 0.0f, 221,7562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_16);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_nwfight", -2717,98f, 32,86103f, 4262,021f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_16);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight1", -2675,947f, 31,53657f, 4291,171f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_16);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight2", -2726,148f, 32,82832f, 4273,853f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_16);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight3", -2760f, 32,12549f, 4282,754f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_16);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight4", -2736,275f, 31,77021f, 4215,475f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_16);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight5", -2694,398f, 31,40305f, 4253,984f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_16);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight6", -2676f, 31,35864f, 4246,057f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_16);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwholdup", -2702,149f, 31,12157f, 4308f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_16);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwholdup1", -2690,826f, 31,12157f, 4268,587f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_16);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwholdup2", -2665,617f, 31,81384f, 4228f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_16);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwholdup3", -2717,811f, 32,83012f, 4289,812f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_16);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwholdup4", -2762,626f, 30,83919f, 4253,375f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_16);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwholdup5", -2644,606f, 30,20625f, 4291,395f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_16);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcorpse", -2684.0f, 30,9463f, 4202,852f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_16);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcorpse1", -2741,847f, 31,0315f, 4202,448f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_16);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcorpse2", -2663,25f, 31,21162f, 4274,603f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_16);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcorpse3", -2654,609f, 30,66836f, 4286,61f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_16);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcorpse4", -2633,211f, 30,42161f, 4206,789f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_16);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwbreak_in", -2731,809f, 32,16233f, 4230,734f, 0.0f, -58,28222f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_4.f_16);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwbreak_in1", -2715,698f, 32,28531f, 4220,48f, 0.0f, 123,6798f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_4.f_16);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft", -2625,127f, 30,12083f, 4250,874f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_4.f_16);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft1", -2636f, 30,24974f, 4267,397f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_4.f_16);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft2", -2761,123f, 31,87255f, 4298,105f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_4.f_16);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft3", -2743,13f, 32,20991f, 4280f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_4.f_16);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_nwthief", -2729,7f, 32,81018f, 4286,3f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_4.f_16);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwthief1", -2714,855f, 32,82869f, 4282,065f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_4.f_16);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwthief2", -2713,719f, 32,89307f, 4270,281f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_4.f_16);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwthief3", -2740f, 32,46825f, 4265,935f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_4.f_16);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwthief4", -2729,7f, 32,81018f, 4286,3f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_4.f_16);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwharass", -2674,49f, 31,46854f, 4241,51f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_4.f_16);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwharass1", -2694,028f, 31,60321f, 4244f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_4.f_16);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwharass2", -2694,171f, 31,12157f, 4268,587f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_4.f_16);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwharass3", -2636f, 30,74214f, 4242,4f, 0.0f, -6,8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_4.f_16);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_playerpos", -2610,365f, 30,11765f, 4274,366f, 0.0f, -149,3487f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "flag_helper", -2611,224f, 30,10968f, 4276f, 0.0f, -37,61066f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker", -2612,001f, 30,11765f, 4272f, 0.0f, -138,7728f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker1", -2609,443f, 30,05892f, 4280f, 0.0f, -29,15555f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker2", -2614,069f, 30,11765f, 4276f, 0.0f, -88,34979f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker3", -2606,296f, 29,94294f, 4276f, 0.0f, 121,7345f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker4", -2608,506f, 30,11765f, 4272,506f, 0.0f, 175,2038f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker5", -2612,001f, 30,11765f, 4272,996f, 0.0f, -142,0662f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker6", -2606,338f, 29,981f, 4277,663f, 0.0f, 79,4939f, 0.0f);
	*(&Local_4 + 20) = { -2689,003f, 31,10484f, 4273,432f };
	*(&Local_4 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_44 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -2689,003f, 31,10484f, 4273,432f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_132(bool bParam0, int iParam1) //Position: 0xD5CD / 54733
{
	if (!Function_134(128))
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

void Function_133(int iParam0) //Position: 0xD608 / 54792
{
	int iVar0;
	
	if (Function_28(iParam0, 1) && Function_28(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_134(int iParam0) //Position: 0xD63C / 54844
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

