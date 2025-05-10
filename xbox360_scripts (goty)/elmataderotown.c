//Decompiled with MagicRDR v1.0
//Function Count : 97
//Statics Count : 703
//Natives Count : 149
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<29> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_144 = 5;
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
	var uLocal_176 = 1;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 39;
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
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	bool bLocal_458 = false;
	var uLocal_459 = 12;
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
	int iLocal_700 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_456 = 0;
	Function_96("Initializing ElMataderoTown", 3);
	ALLOW_TUMBLEWEEDS(0);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_457 = 1000;
		switch (iLocal_456)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_456 = 1;
				}
				iLocal_457 = 0;
				break;
			
			case 0x00000001:
				if (Function_95())
				{
					Global_62981 = 0;
					if (Function_91(35, 0) || Function_91(32, 0))
					{
						Function_90(&(Global_7002[112]), 2);
						Function_90(&(Global_7002[12]), 2);
						Function_90(&(Global_7002[22]), 2);
					}
					else
					{
						Function_89(&(Global_7002[112]), 2);
						Function_89(&(Global_7002[12]), 2);
						Function_89(&(Global_7002[22]), 2);
					}
					iLocal_456 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 13, 2);
				}
				iLocal_457 = 0;
				break;
			
			case 0x00000002:
				if (Function_80())
				{
					Function_79(&(Global_29008[iScriptParam_0]), 32);
					iLocal_456 = 3;
				}
				iLocal_457 = 0;
				break;
			
			case 0x00000003:
				bLocal_458 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ElMataderoTownVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_7002, &Global_8231, iScriptParam_0);
				iLocal_456 = 5;
				iLocal_457 = 0;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_7002, &Global_8231, iScriptParam_0))
				{
					iLocal_456 = 4;
					iLocal_457 = 0;
				}
				else
				{
					iLocal_457 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_29008[iScriptParam_0]), 16) && Function_75(Global_29155[iScriptParam_010]))
				{
					iLocal_456 = 6;
				}
				iLocal_457 = 0;
				break;
			
			case 0x00000006:
				Function_74(1, &uLocal_459, -362.487f, 17.351f, 3945.686f);
				Function_73(1, &uLocal_459, -362.487f, 17.351f, 3945.686f);
				Function_72(1, &uLocal_459, -362.487f, 17.351f, 3945.686f);
				Function_71(1, &uLocal_459, -362.487f, 17.351f, 3945.686f);
				Function_70(1, &uLocal_459, -362.487f, 17.351f, 3945.686f);
				Function_69(1, &uLocal_459, -362.487f, 17.351f, 3945.686f);
				Function_68(1, &uLocal_459, Local_12);
				Function_74(2, &uLocal_459, -287.557f, 24.147f, 3981.423f);
				Function_73(2, &uLocal_459, -287.557f, 24.147f, 3981.423f);
				Function_72(2, &uLocal_459, -287.557f, 24.147f, 3981.423f);
				Function_71(2, &uLocal_459, -287.557f, 24.147f, 3981.423f);
				Function_70(2, &uLocal_459, -287.557f, 24.147f, 3981.423f);
				Function_69(2, &uLocal_459, -287.557f, 24.147f, 3981.423f);
				Function_68(2, &uLocal_459, Local_12);
				Function_74(3, &uLocal_459, -461.111f, 20.61f, 3915.448f);
				Function_73(3, &uLocal_459, -498.128f, 17.815f, 3874.257f);
				Function_72(3, &uLocal_459, -441.189f, 25.867f, 3922.419f);
				Function_71(3, &uLocal_459, -473.888f, 20.591f, 3910.805f);
				Function_70(3, &uLocal_459, -477.125f, 20.59f, 3916.037f);
				Function_69(3, &uLocal_459, -441.189f, 25.867f, 3922.419f);
				Function_68(3, &uLocal_459, Local_12);
				Function_74(4, &uLocal_459, -473.9f, 20.605f, 3912.723f);
				Function_73(4, &uLocal_459, -411.211f, 23.888f, 3914.334f);
				Function_72(4, &uLocal_459, -431.954f, 22.839f, 4002.249f);
				Function_71(4, &uLocal_459, -441.189f, 25.867f, 3922.419f);
				Function_70(4, &uLocal_459, -466.945f, 20.586f, 3916.015f);
				Function_69(4, &uLocal_459, -431.954f, 22.839f, 4002.249f);
				Function_68(4, &uLocal_459, Local_12);
				Function_74(0, &uLocal_459, -441.189f, 25.867f, 3922.419f);
				Function_73(0, &uLocal_459, -443.101f, 22.456f, 3919.692f);
				Function_72(0, &uLocal_459, -439.336f, 22.537f, 3925.833f);
				Function_71(0, &uLocal_459, -443.101f, 22.456f, 3919.692f);
				Function_70(0, &uLocal_459, -439.336f, 22.537f, 3925.833f);
				Function_69(0, &uLocal_459, -439.336f, 22.537f, 3925.833f);
				Function_68(0, &uLocal_459, Local_12);
				Function_74(5, &uLocal_459, -466.5159f, 21.13641f, 3872.297f);
				Function_73(5, &uLocal_459, -469.0941f, 21.08241f, 3935.253f);
				Function_72(5, &uLocal_459, -460.99f, 20.579f, 3918.446f);
				Function_71(5, &uLocal_459, -469.0941f, 21.08241f, 3935.253f);
				Function_70(5, &uLocal_459, -459.691f, 21.064f, 3874.933f);
				Function_69(5, &uLocal_459, -463.847f, 21.16f, 3866.903f);
				Function_68(5, &uLocal_459, Local_12);
				Function_74(6, &uLocal_459, -478.024f, 20.16f, 3875.573f);
				Function_73(6, &uLocal_459, -403.488f, 24.17f, 3892.889f);
				Function_72(6, &uLocal_459, -404.066f, 23.891f, 3885.175f);
				Function_71(6, &uLocal_459, -403.488f, 24.17f, 3892.889f);
				Function_70(6, &uLocal_459, -403.488f, 24.17f, 3892.889f);
				Function_69(6, &uLocal_459, -467.765f, 21.083f, 3875.348f);
				Function_68(6, &uLocal_459, Local_12);
				Function_74(7, &uLocal_459, -464.043f, 21.082f, 3870.21f);
				Function_73(7, &uLocal_459, -429.991f, 22.537f, 3933.109f);
				Function_72(7, &uLocal_459, -401.24f, 24.094f, 3882.343f);
				Function_71(7, &uLocal_459, -469.479f, 20.586f, 3916.448f);
				Function_70(7, &uLocal_459, -464.616f, 21.083f, 3871.633f);
				Function_69(7, &uLocal_459, -460.739f, 21.116f, 3878.095f);
				Function_68(7, &uLocal_459, Local_12);
				Function_74(8, &uLocal_459, -473.92f, 21.082f, 3945.912f);
				Function_73(8, &uLocal_459, -473.92f, 21.082f, 3945.912f);
				Function_72(8, &uLocal_459, -460.99f, 20.579f, 3916.999f);
				Function_71(8, &uLocal_459, -473.92f, 21.082f, 3945.912f);
				Function_70(8, &uLocal_459, -466.516f, 21.121f, 3872.297f);
				Function_69(8, &uLocal_459, -462.927f, 21.106f, 3879.357f);
				Function_68(8, &uLocal_459, Local_12);
				Function_74(9, &uLocal_459, -417.204f, 24.094f, 3953.031f);
				Function_73(9, &uLocal_459, -401.222f, 24.1f, 3905.002f);
				Function_72(9, &uLocal_459, -400.343f, 24.094f, 3886.531f);
				Function_71(9, &uLocal_459, -401.222f, 24.1f, 3905.002f);
				Function_70(9, &uLocal_459, -467.765f, 21.083f, 3875.348f);
				Function_69(9, &uLocal_459, -478.024f, 20.16f, 3875.573f);
				Function_68(9, &uLocal_459, Local_12);
				Function_74(10, &uLocal_459, -465.4743f, 21.08235f, 3870.993f);
				Function_73(10, &uLocal_459, -417.204f, 24.094f, 3953.031f);
				Function_72(10, &uLocal_459, -460.99f, 20.655f, 3915.621f);
				Function_71(10, &uLocal_459, -417.204f, 24.094f, 3953.031f);
				Function_70(10, &uLocal_459, -465.474f, 21.082f, 3870.993f);
				Function_69(10, &uLocal_459, -461.381f, 21.118f, 3864.773f);
				Function_68(10, &uLocal_459, Local_12);
				Function_74(11, &uLocal_459, -277.782f, 24.835f, 3979.783f);
				Function_73(11, &uLocal_459, -277.782f, 24.835f, 3979.783f);
				Function_72(11, &uLocal_459, -277.782f, 24.835f, 3979.783f);
				Function_71(11, &uLocal_459, -277.782f, 24.835f, 3979.783f);
				Function_70(11, &uLocal_459, -277.782f, 24.835f, 3979.783f);
				Function_69(11, &uLocal_459, -277.782f, 24.835f, 3979.783f);
				Function_68(11, &uLocal_459, Local_12);
				Function_64(&Global_7002, &Global_8231, &uLocal_459, Global_6289, iScriptParam_0);
				if (Function_76(&(Global_29008[iScriptParam_0]), 256) || !Function_63(2))
				{
					iLocal_700 = 1;
				}
				Function_62(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 1716));
				Function_55(8, Local_12.f_1712, Local_12.f_1652, Local_12.f_1680, Function_61(iScriptParam_0, "elMatadero", "guardHouse01", 2), 0, Local_4.f_28);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_12, "emtv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "emtv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "emtv_players_room"));
				}
				else
				{
					LOG_ERROR("EMT: Cannot find emtv_players_room to restrict players room");
				}
				Function_79(&(Global_29008[iScriptParam_0]), 8);
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_54(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_456 = 10;
				}
				else
				{
					iLocal_456 = 7;
				}
				iLocal_457 = 0;
				break;
			
			case 0x00000007:
				switch (Global_30619)
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
				Function_40(&Global_62527, 4, Global_30707[0], "$/content/Mexico/Mini_Games/ArmWrestling_ELM/ArmWrestling_ELM", 4294967295, 0, "ElmArmWrestling", 351, -466.434f, 21.015f, 3882.245f, 2.5f, 0, 0);
				Function_39(&Global_62527, 4, 1);
				Function_38(&Global_62527, 4);
				iLocal_456 = 8;
				iLocal_457 = 0;
				break;
			
			case 0x00000008:
				Function_37(64);
				if (Function_36(iScriptParam_0, &Global_7002, iLocal_700))
				{
					Function_32(StackVal, 0, 0.2f, 3, Local_4, 1);
					Function_28(2, 4294967295, 4294967295, 0, 3);
					Function_25(Local_4);
				}
				else
				{
					Function_28(1, 10, 6, 9, 3);
					Function_25(Local_4);
					Function_24(StackVal, 0);
					Function_24(StackVal, 0);
					Function_24(StackVal, 0);
					Function_24(StackVal, 0);
					Function_24(StackVal, 0);
					switch (Global_30619)
					{
						case 0x00000000:
						case 0x00000001:
							Function_32(StackVal, 2, 0.5f, 3, Local_4, 1);
							break;
						
						case 0x00000002:
							Function_32(StackVal, 0, 0.5f, 3, Local_4, 1);
							break;
						
						case 0x00000003:
							Function_32(StackVal, 2, 0.5f, 3, Local_4, 1);
							break;
						}
				}
				Function_79(&(Global_29008[iScriptParam_0]), 512);
				iLocal_456 = 9;
				iLocal_457 = 0;
				break;
			
			case 0x00000009:
				Function_22(Local_4, iScriptParam_0);
				Function_79(&(Global_29008[iScriptParam_0]), 4);
				Function_21("Finished Initializing ElMataderoTown", 5.0f);
				iLocal_456 = 10;
				iLocal_457 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_20(Global_62981, 16))
				{
					if (Function_17(&(Global_30707[0])))
					{
						Function_16(&Global_62981, 16);
					}
				}
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_456 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_457);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 12);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 12);
	Function_7(&Global_7002, &Global_8231, iScriptParam_0, (iLocal_700 || Global_3380));
	Function_6();
	Function_1();
	Function_54(&(Global_29008[iScriptParam_0]), 32);
	Function_54(&(Global_29008[iScriptParam_0]), 64);
	Function_54(&(Global_29008[iScriptParam_0]), 8);
	Function_54(&(Global_29008[iScriptParam_0]), 512);
	Function_54(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_458))
	{
		TERMINATE_SCRIPT(bLocal_458);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_21("Unloaded ElMataderoTown", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xD91 / 3473
{
	Function_2(&Local_12 + 4);
	RELEASE_LAYOUT_REF(Local_12);
	return;
}

void Function_2(int iParam0) //Position: 0xDA3 / 3491
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xDC9 / 3529
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xEF7 / 3831
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0xF11 / 3857
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0xF2E / 3886
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_7(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF39 / 3897
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_15())
	{
		return;
	}
	strcpy(&cVar0, Function_13(iParam2), 64);
	if (Function_12())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_54(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_11(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_11(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_90(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_11(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_90(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_76(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_63(2) || Function_76(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_11(uParam0[iVar162], 2) && !Function_11(uParam0[iVar162], 4))
		{
			Function_8(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_11(uParam0[iVar162], 2) && !Function_11(uParam0[iVar162], 4))
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
		bVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(bVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(bVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar21));
				CLEAN_OBJECTSET(bVar21);
			}
			DESTROY_OBJECTSET(bVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_79(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_8(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1139 / 4409
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_89(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_10(Global_29007), Function_9(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_11(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_11(uParam0[iParam22], 1) && !bParam3)
	{
		Function_89(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_10(Global_29007), Function_9(Global_29007), false, 0);
	}
}

int Function_9(int iParam0) //Position: 0x1288 / 4744
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

int Function_10(int iParam0) //Position: 0x12B3 / 4787
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

bool Function_11(int iParam0, int iParam1) //Position: 0x12E7 / 4839
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_12() //Position: 0x1303 / 4867
{
	if (Function_20(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_13(int iParam0) //Position: 0x131E / 4894
{
	if (!Function_14(iParam0))
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

bool Function_14(int iParam0) //Position: 0x17CC / 6092
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_15() //Position: 0x17E2 / 6114
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_16(var uParam0, int iParam1) //Position: 0x17EB / 6123
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_17(int iParam0) //Position: 0x17FA / 6138
{
	bool bVar0;
	
	Function_19(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_19(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_18(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_18(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_18(int iParam0) //Position: 0x18F5 / 6389
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.656f, 16.56962f, 3948.088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.743f, 43.17878f, 3720.288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.16f, 20.97986f, 3881.796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.9332f, 85.11941f, 2118.893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_19(int iParam0) //Position: 0x19A4 / 6564
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.104f, 16.52992f, 3948.271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.721f, 43.17878f, 3720.842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.5623f, 20.97986f, 3882.657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.932f, 85.11941f, 2119.438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_20(var uParam0, int iParam1) //Position: 0x1A4F / 6735
{
	return (uParam0 && iParam1) == 0;
}

void Function_21(bool bParam0, float fParam1) //Position: 0x1A5C / 6748
{
	if (!Function_63(128))
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

void Function_22(bool bParam0, bool bParam1) //Position: 0x1A9A / 6810
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
		Function_23(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_15())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x1B94 / 7060
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_24(bool bParam0, bool bParam1) //Position: 0x1BA1 / 7073
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

void Function_25(bool bParam0) //Position: 0x1C1A / 7194
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_27(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_26(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_26(var uParam0) //Position: 0x1D05 / 7429
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_27() //Position: 0x1D22 / 7458
{
	int iVar0;
	
	return iVar0;
}

void Function_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1D2A / 7466
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
		Function_29();
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

void Function_29() //Position: 0x1E0E / 7694
{
	int iVar0;
	
	Global_26960 = Function_30(StackVal);
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

int Function_30(int iParam0) //Position: 0x1E5C / 7772
{
	if (!Function_31(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_31(bool bParam0) //Position: 0x1E74 / 7796
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1E89 / 7817
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
		Function_35();
	}
	if (bParam5)
	{
		Function_33(1048576);
	}
}

void Function_33(int iParam0) //Position: 0x1F9C / 8092
{
	Function_34(&Global_28842, iParam0);
	return;
}

void Function_34(var uParam0, var uParam1) //Position: 0x1FAA / 8106
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_35() //Position: 0x1FC5 / 8133
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_33(16384);
	}
	return;
}

bool Function_36(int iParam0, int iParam1, bool bParam2) //Position: 0x1FE1 / 8161
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_76(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_91(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_15())
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

void Function_37(int iParam0) //Position: 0x20A1 / 8353
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x20B4 / 8372
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_39(var uParam0, int iParam1, float fParam2) //Position: 0x20CF / 8399
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_40(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x20F3 / 8435
{
	if (Function_15() && !bParam12)
	{
		return;
	}
	if (!Function_15() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_49(iParam2, iParam1, 4);
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
	if (Global_25974[iParam1] && Function_48(iParam1))
	{
		Function_41(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_41(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x223F / 8767
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_47(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_46(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_45(StackVal, StackVal, vParam2);
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
		Function_44(uVar3);
		vVar7 = { StackVal, StackVal, Function_44(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_44(StackVal);
				vVar4 = { StackVal, StackVal, Function_44(StackVal) };
				if (Function_43(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_42(iParam1), 0.0f, 2, iVar2);
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

int Function_42(bool bParam0) //Position: 0x2422 / 9250
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

bool Function_43(vector3 vParam0, vector3 vParam3) //Position: 0x2559 / 9561
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_44(bool bParam0) //Position: 0x2586 / 9606
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_45(vector3 vParam0) //Position: 0x25DD / 9693
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

int Function_46(int iParam0) //Position: 0x262B / 9771
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

bool Function_47(vector3 vParam0) //Position: 0x26E3 / 9955
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_48(int iParam0) //Position: 0x26FB / 9979
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_49(bool bParam0, bool bParam1, bool bParam2) //Position: 0x271E / 10014
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_53(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_50(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_50(bParam0, bParam1, bParam2, 4294967295);
}

int Function_50(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x277C / 10108
{
	var uVar0;
	
	if (!Function_52(bParam2))
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
	uVar0 = Function_53(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_51(uVar0);
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

int Function_51(int iParam0) //Position: 0x28D1 / 10449
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

bool Function_52(int iParam0) //Position: 0x290F / 10511
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_53(int iParam0, int iParam1, int iParam2) //Position: 0x2924 / 10532
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_54(var uParam0, int iParam1) //Position: 0x2944 / 10564
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_55(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x295B / 10587
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_60(bParam1, bParam2);
	if (!Function_59(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_58(bParam4, 0);
		}
		else
		{
			Function_57(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_58(bParam5, 0);
		}
		else
		{
			Function_57(bParam5, 1);
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
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_56(bVar3[0], "UseCase1"));
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
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_56(bVar3[1], "UseCase1"));
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

var Function_56(bool bParam0, bool bParam1) //Position: 0x2CEE / 11502
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x2CFB / 11515
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

void Function_58(bool bParam0, bool bParam1) //Position: 0x2D4F / 11599
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

bool Function_59(int iParam0) //Position: 0x2DA0 / 11680
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_60(bool bParam0, bool bParam1) //Position: 0x2DB6 / 11702
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

var Function_61(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2F10 / 12048
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_14(iParam0))
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

void Function_62(var uParam0, bool bParam1) //Position: 0x2FAC / 12204
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

bool Function_63(int iParam0) //Position: 0x2FF4 / 12276
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_64(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3010 / 12304
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_63(2))
	{
		return;
	}
	if (Function_76(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_11(uParam0[iVar02], 2))
		{
			if (Function_65(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_54(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_79(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_65(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x30C2 / 12482
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_11(iParam0, 2))
	{
		return 1;
	}
	if (Function_11(iParam0, 4))
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
		uParam1->f_8 = Function_67(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_47(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_90(iParam0, 4);
	}
	Function_66(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_66(bool bParam0, bool bParam1) //Position: 0x322D / 12845
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_47(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_47(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_47(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_47(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_47(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_47(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_67(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x3369 / 13161
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_27(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_68(int iParam0, var uParam1, bool bParam2) //Position: 0x3482 / 13442
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

void Function_69(int iParam0, var uParam1, vector3 vParam2) //Position: 0x34DD / 13533
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_43(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_70(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3543 / 13635
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_43(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_71(int iParam0, var uParam1, vector3 vParam2) //Position: 0x35AB / 13739
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_43(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_72(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3615 / 13845
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_43(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_73(int iParam0, var uParam1, vector3 vParam2) //Position: 0x367A / 13946
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_43(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_74(int iParam0, var uParam1, vector3 vParam2) //Position: 0x36E2 / 14050
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_43(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_75(int iParam0) //Position: 0x3745 / 14149
{
	if (!Function_14(iParam0))
	{
		return 1;
	}
	return Function_76(&(Global_29008[iParam0]), 4);
}

bool Function_76(var uParam0, int iParam1) //Position: 0x3761 / 14177
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(var uParam0, var uParam1, int iParam2) //Position: 0x377D / 14205
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_14(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_15())
	{
		return 1;
	}
	strcpy(&cVar1, Function_13(iParam2), 64);
	if (Function_12())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_11(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_11(uParam0[iVar02], 8))
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

void Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x385E / 14430
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_14(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_15())
	{
		return;
	}
	strcpy(&cVar1, Function_13(iParam2), 64);
	if (Function_12())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_79(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_89(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_89(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x3946 / 14662
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_80() //Position: 0x3955 / 14677
{
	bool bVar0;
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
	bool bVar43;
	bool bVar44;
	bool bVar45;
	
	Function_88(3, 3);
	bVar0 = bVar0;
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_sweeping_w_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/arm_wrestling_spectate", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_embroidery_e_any", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/opium_pipe", 1, 0);
	Function_86(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	if (!Function_81(&Local_12 + 4))
	{
		return 0;
	}
	Local_12 = FIND_NAMED_LAYOUT("ElMataderoTown_layout");
	if (!IS_LAYOUTREF_VALID(Local_12))
	{
		Local_12 = CREATE_LAYOUT("ElMataderoTown_layout");
	}
	Local_12.f_524 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", Local_12, 8, 0);
	*(&Local_12 + 528[06]) = { -408.4076f, 24.09405f, 3902.813f };
	*(&Local_12 + 528[06] + 12) = { 0.0f, 62.73736f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag4", -408.4076f, 24.09405f, 3902.813f, 0.0f, 62.73736f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_12.f_524);
	*(&Local_12 + 528[16]) = { -405.706f, 24.20465f, 3894.258f };
	*(&Local_12 + 528[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag1", -405.706f, 24.20465f, 3894.258f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_12.f_524);
	*(&Local_12 + 528[26]) = { -398.8264f, 24.16975f, 3897.753f };
	*(&Local_12 + 528[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag2", -398.8264f, 24.16975f, 3897.753f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_12.f_524);
	*(&Local_12 + 528[36]) = { -403.735f, 24.11477f, 3909.121f };
	*(&Local_12 + 528[36] + 12) = { 0.0f, -145.8065f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag3", -403.735f, 24.11477f, 3909.121f, 0.0f, -145.8065f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "PourBucket");
	DECOR_SET_STRING(bVar4, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_12.f_524);
	*(&Local_12 + 528[46]) = { -411.6289f, 24.19822f, 3906.596f };
	*(&Local_12 + 528[46] + 12) = { 0.0f, 2.68055f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag49", -411.6289f, 24.19822f, 3906.596f, 0.0f, 2.68055f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_12.f_524);
	Local_12.f_652 = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", Local_12, 8, 0);
	*(&Local_12 + 656[06]) = { -474.6493f, 21.02119f, 3957.953f };
	*(&Local_12 + 656[06] + 12) = { 0.0f, 86.42764f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag5", -474.6493f, 21.02119f, 3957.953f, 0.0f, 86.42764f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_12.f_652);
	Local_12.f_684 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_12, 8, 0);
	*(&Local_12 + 688[06]) = { -436.4912f, 22.52994f, 3934.01f };
	*(&Local_12 + 688[06] + 12) = { 0.0f, 59.98388f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag11", -436.4912f, 22.52994f, 3934.01f, 0.0f, 59.98388f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_12.f_684);
	*(&Local_12 + 688[16]) = { -434.7257f, 22.52994f, 3932.884f };
	*(&Local_12 + 688[16] + 12) = { 0.0f, 42.98274f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag6", -434.7257f, 22.52994f, 3932.884f, 0.0f, 42.98274f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_12.f_684);
	*(&Local_12 + 688[26]) = { -434.3143f, 22.52994f, 3935.279f };
	*(&Local_12 + 688[26] + 12) = { 0.0f, 76.38705f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag7", -434.3143f, 22.52994f, 3935.279f, 0.0f, 76.38705f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_12.f_684);
	*(&Local_12 + 688[36]) = { -431.5023f, 22.52994f, 3935.137f };
	*(&Local_12 + 688[36] + 12) = { 0.0f, 109.1505f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag8", -431.5023f, 22.52994f, 3935.137f, 0.0f, 109.1505f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_12.f_684);
	*(&Local_12 + 688[46]) = { -432.6459f, 22.52994f, 3932.889f };
	*(&Local_12 + 688[46] + 12) = { 0.0f, -262.4891f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag9", -432.6459f, 22.52994f, 3932.889f, 0.0f, -262.4891f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_12.f_684);
	*(&Local_12 + 688[56]) = { -433.4839f, 22.52994f, 3932.072f };
	*(&Local_12 + 688[56] + 12) = { 0.0f, 98.61428f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag10", -433.4839f, 22.52994f, 3932.072f, 0.0f, 98.61428f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_12.f_684);
	*(&Local_12 + 688[66]) = { -431.3317f, 22.53819f, 3929.571f };
	*(&Local_12 + 688[66] + 12) = { 0.0f, -159.4279f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag15", -431.3317f, 22.53819f, 3929.571f, 0.0f, -159.4279f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_12.f_684);
	*(&Local_12 + 688[76]) = { -433.157f, 22.53819f, 3930.467f };
	*(&Local_12 + 688[76] + 12) = { 0.0f, -216.3448f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag12", -433.157f, 22.53819f, 3930.467f, 0.0f, -216.3448f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_12.f_684);
	*(&Local_12 + 688[86]) = { -435.6472f, 22.53819f, 3930.552f };
	*(&Local_12 + 688[86] + 12) = { 0.0f, 24.22374f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag13", -435.6472f, 22.53819f, 3930.552f, 0.0f, 24.22374f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_12.f_684);
	*(&Local_12 + 688[96]) = { -434.3728f, 22.53819f, 3929.035f };
	*(&Local_12 + 688[96] + 12) = { 0.0f, -239.1948f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag14", -434.3728f, 22.53819f, 3929.035f, 0.0f, -239.1948f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_12.f_684);
	*(&Local_12 + 688[106]) = { -438.438f, 22.08627f, 3922.438f };
	*(&Local_12 + 688[106] + 12) = { 0.0f, 145.4143f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag16", -438.438f, 22.08627f, 3922.438f, 0.0f, 145.4143f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_12.f_684);
	*(&Local_12 + 688[116]) = { -437.2068f, 22.08627f, 3923.69f };
	*(&Local_12 + 688[116] + 12) = { 0.0f, 145.4143f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag17", -437.2068f, 22.08627f, 3923.69f, 0.0f, 145.4143f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_12.f_684);
	*(&Local_12 + 688[126]) = { -435.8471f, 22.08627f, 3923.209f };
	*(&Local_12 + 688[126] + 12) = { 0.0f, 145.4143f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag18", -435.8471f, 22.08627f, 3923.209f, 0.0f, 145.4143f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_12.f_684);
	*(&Local_12 + 688[136]) = { -434.7333f, 22.08627f, 3924.163f };
	*(&Local_12 + 688[136] + 12) = { 0.0f, 159.9366f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag19", -434.7333f, 22.08627f, 3924.163f, 0.0f, 159.9366f, 0.0f);
	DECOR_SET_STRING(bVar20, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_12.f_684);
	*(&Local_12 + 688[146]) = { -434.7455f, 22.08627f, 3925.752f };
	*(&Local_12 + 688[146] + 12) = { 0.0f, 225.762f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag20", -434.7455f, 22.08627f, 3925.752f, 0.0f, 225.762f, 0.0f);
	DECOR_SET_STRING(bVar21, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_12.f_684);
	*(&Local_12 + 688[156]) = { -432.8912f, 22.08627f, 3924.749f };
	*(&Local_12 + 688[156] + 12) = { 0.0f, 328.6054f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag21", -432.8912f, 22.08627f, 3924.749f, 0.0f, 328.6054f, 0.0f);
	DECOR_SET_STRING(bVar22, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_12.f_684);
	*(&Local_12 + 688[166]) = { -438.438f, 22.08627f, 3926.487f };
	*(&Local_12 + 688[166] + 12) = { 0.0f, 227.2345f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag22", -438.438f, 22.08627f, 3926.487f, 0.0f, 227.2345f, 0.0f);
	DECOR_SET_STRING(bVar23, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_12.f_684);
	*(&Local_12 + 688[176]) = { -441.4936f, 22.08627f, 3927.554f };
	*(&Local_12 + 688[176] + 12) = { 0.0f, 276.0832f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag23", -441.4936f, 22.08627f, 3927.554f, 0.0f, 276.0832f, 0.0f);
	DECOR_SET_STRING(bVar24, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_12.f_684);
	*(&Local_12 + 688[186]) = { -439.0841f, 22.08627f, 3927.993f };
	*(&Local_12 + 688[186] + 12) = { 0.0f, 227.2345f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag24", -439.0841f, 22.08627f, 3927.993f, 0.0f, 227.2345f, 0.0f);
	DECOR_SET_STRING(bVar25, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_12.f_684);
	*(&Local_12 + 688[196]) = { -438.7991f, 22.08627f, 3929.552f };
	*(&Local_12 + 688[196] + 12) = { 0.0f, 189.9922f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag25", -438.7991f, 22.08627f, 3929.552f, 0.0f, 189.9922f, 0.0f);
	DECOR_SET_STRING(bVar26, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_12.f_684);
	*(&Local_12 + 688[206]) = { -439.5444f, 22.08627f, 3930.911f };
	*(&Local_12 + 688[206] + 12) = { 0.0f, 149.0608f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag26", -439.5444f, 22.08627f, 3930.911f, 0.0f, 149.0608f, 0.0f);
	DECOR_SET_STRING(bVar27, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_12.f_684);
	*(&Local_12 + 688[216]) = { -441.7916f, 22.08627f, 3929.715f };
	*(&Local_12 + 688[216] + 12) = { 0.0f, 219.0145f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag27", -441.7916f, 22.08627f, 3929.715f, 0.0f, 219.0145f, 0.0f);
	DECOR_SET_STRING(bVar28, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_12.f_684);
	*(&Local_12 + 688[226]) = { -474.1854f, 20.58473f, 3911.659f };
	*(&Local_12 + 688[226] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag45", -474.1854f, 20.58473f, 3911.659f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar29, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_12.f_684);
	*(&Local_12 + 688[236]) = { -472.936f, 20.58473f, 3911.659f };
	*(&Local_12 + 688[236] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag29", -472.936f, 20.58473f, 3911.659f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar30, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_12.f_684);
	*(&Local_12 + 688[246]) = { -472.0462f, 20.58473f, 3910.823f };
	*(&Local_12 + 688[246] + 12) = { 0.0f, -68.97984f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag30", -472.0462f, 20.58473f, 3910.823f, 0.0f, -68.97984f, 0.0f);
	DECOR_SET_STRING(bVar31, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_12.f_684);
	*(&Local_12 + 688[256]) = { -471.1407f, 20.58473f, 3911.659f };
	*(&Local_12 + 688[256] + 12) = { 0.0f, -32.56598f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag31", -471.1407f, 20.58473f, 3911.659f, 0.0f, -32.56598f, 0.0f);
	DECOR_SET_STRING(bVar32, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_12.f_684);
	*(&Local_12 + 688[266]) = { -469.5037f, 20.58473f, 3911.327f };
	*(&Local_12 + 688[266] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag32", -469.5037f, 20.58473f, 3911.327f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar33, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_12.f_684);
	*(&Local_12 + 688[276]) = { -470.9852f, 20.58473f, 3913.397f };
	*(&Local_12 + 688[276] + 12) = { 0.0f, -64.76234f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag33", -470.9852f, 20.58473f, 3913.397f, 0.0f, -64.76234f, 0.0f);
	DECOR_SET_STRING(bVar34, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_12.f_684);
	*(&Local_12 + 688[286]) = { -464.5076f, 20.425f, 3918.978f };
	*(&Local_12 + 688[286] + 12) = { 0.0f, -216.7657f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag34", -464.5076f, 20.425f, 3918.978f, 0.0f, -216.7657f, 0.0f);
	DECOR_SET_STRING(bVar35, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_12.f_684);
	*(&Local_12 + 688[296]) = { -466.8747f, 20.425f, 3918.306f };
	*(&Local_12 + 688[296] + 12) = { 0.0f, -227.7739f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag35", -466.8747f, 20.425f, 3918.306f, 0.0f, -227.7739f, 0.0f);
	DECOR_SET_STRING(bVar36, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_12.f_684);
	*(&Local_12 + 688[306]) = { -468.9477f, 20.425f, 3916.851f };
	*(&Local_12 + 688[306] + 12) = { 0.0f, -179.1256f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag36", -468.9477f, 20.425f, 3916.851f, 0.0f, -179.1256f, 0.0f);
	DECOR_SET_STRING(bVar37, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_12.f_684);
	*(&Local_12 + 688[316]) = { -471.7246f, 20.425f, 3916.817f };
	*(&Local_12 + 688[316] + 12) = { 0.0f, -177.5444f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag37", -471.7246f, 20.425f, 3916.817f, 0.0f, -177.5444f, 0.0f);
	DECOR_SET_STRING(bVar38, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_12.f_684);
	*(&Local_12 + 688[326]) = { -474.2186f, 20.425f, 3916.946f };
	*(&Local_12 + 688[326] + 12) = { 0.0f, -192.6765f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag38", -474.2186f, 20.425f, 3916.946f, 0.0f, -192.6765f, 0.0f);
	DECOR_SET_STRING(bVar39, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_12.f_684);
	*(&Local_12 + 688[336]) = { -464.3194f, 20.57385f, 3916.428f };
	*(&Local_12 + 688[336] + 12) = { 0.0f, 108.2416f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag39", -464.3194f, 20.57385f, 3916.428f, 0.0f, 108.2416f, 0.0f);
	DECOR_SET_STRING(bVar40, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_12.f_684);
	*(&Local_12 + 688[346]) = { -465.3709f, 20.57385f, 3914.805f };
	*(&Local_12 + 688[346] + 12) = { 0.0f, 93.70631f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag40", -465.3709f, 20.57385f, 3914.805f, 0.0f, 93.70631f, 0.0f);
	DECOR_SET_STRING(bVar41, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_12.f_684);
	*(&Local_12 + 688[356]) = { -466.8551f, 20.57385f, 3913.507f };
	*(&Local_12 + 688[356] + 12) = { 0.0f, 31.02789f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag41", -466.8551f, 20.57385f, 3913.507f, 0.0f, 31.02789f, 0.0f);
	DECOR_SET_STRING(bVar42, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_12.f_684);
	*(&Local_12 + 688[366]) = { -465.9915f, 20.57385f, 3911.845f };
	*(&Local_12 + 688[366] + 12) = { 0.0f, -28.50266f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag42", -465.9915f, 20.57385f, 3911.845f, 0.0f, -28.50266f, 0.0f);
	DECOR_SET_STRING(bVar43, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_12.f_684);
	*(&Local_12 + 688[376]) = { -464.3194f, 20.57385f, 3913.929f };
	*(&Local_12 + 688[376] + 12) = { 0.0f, -57.50648f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag43", -464.3194f, 20.57385f, 3913.929f, 0.0f, -57.50648f, 0.0f);
	DECOR_SET_STRING(bVar44, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_12.f_684);
	*(&Local_12 + 688[386]) = { -429.991f, 22.53679f, 3933.109f };
	*(&Local_12 + 688[386] + 12) = { 0.0f, -92.99655f, 0.0f };
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag44", -429.991f, 22.53679f, 3933.109f, 0.0f, -92.99655f, 0.0f);
	DECOR_SET_STRING(bVar45, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_12.f_684);
	*(&Local_12 + 1628) = { -434.7641f, 22.53568f, 3929.63f };
	*(&Local_12 + 1628 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_12.f_1652 = CREATE_POINT_IN_LAYOUT(Local_12, "player_save_flag_ELM", -434.7641f, 22.53568f, 3929.63f, 0.0f, 0.0f, 0.0f);
	*(&Local_12 + 1656) = { -434.6205f, 22.53568f, 3926.551f };
	*(&Local_12 + 1656 + 12) = { 0.0f, 176.1026f, 0.0f };
	Local_12.f_1680 = CREATE_POINT_IN_LAYOUT(Local_12, "player_purchase_flag_ELM", -434.6205f, 22.53568f, 3926.551f, 0.0f, 176.1026f, 0.0f);
	*(&Local_12 + 1684) = { -457.1181f, 20.07843f, 3914.354f };
	*(&Local_12 + 1684 + 12) = { 0.0f, 86.96138f, 0.0f };
	Local_12.f_1708 = CREATE_POINT_IN_LAYOUT(Local_12, "elmf_report_crime", -457.1181f, 20.07843f, 3914.354f, 0.0f, 86.96138f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_gateGuards", "mex_gateGuards", -435.1938f, 22.8392f, 4004.139f, 0.0f, 223.5985f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -431.9537f, 22.83945f, 4002.249f, 0.0f, -147.6463f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn", "smoking_stand_nospawn", -437.0509f, 22.87443f, 4002.75f, 0.0f, -61.50329f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -413.6794f, 24.16101f, 3908.525f, 0.0f, 151.1745f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand", "smoking_stand", -407.5995f, 23.92949f, 3914.533f, 0.0f, 113.0202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nlean_rail", "nlean_rail", -407.937f, 27.63952f, 3908.358f, 0.0f, -26.54954f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand", "rand_idle_stand", -402.9427f, 27.62066f, 3894.02f, 0.0f, -194.6572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -415.6729f, 24.05288f, 3953.248f, 0.0f, 89.4566f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted1", "sleeping_wall_scripted", -415.8235f, 24.05288f, 3955.145f, 0.0f, 388.3418f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any", "stand_hammerground_w_any", -412.3169f, 24.1801f, 3910.919f, 0.0f, -118.7025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -418.1162f, 24.06925f, 3956.482f, 0.0f, -221.5459f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground7", "Rand_Idle_Sit_Ground", -416.8118f, 24.03449f, 3957.875f, 0.0f, -241.5472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand3", "rand_idle_stand", -408.7993f, 24.19855f, 3901.185f, 0.0f, -152.4236f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand4", "rand_idle_stand", -411.149f, 24.21894f, 3904.919f, 0.0f, -105.1341f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel11", "repair_kneel", -403.5339f, 24.12935f, 3899.721f, 0.0f, -28.54338f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -397.0038f, 27.59928f, 3894.388f, 0.0f, 150.5325f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail3", "nlean_rail", -402.9675f, 27.61284f, 3908.659f, 0.0f, 60.84692f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_sweeping_w_any", "stand_sweeping_w_any", -403.4877f, 24.16974f, 3892.889f, 0.0f, 126.2229f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_sweeping_w_any1", "stand_sweeping_w_any", -399.078f, 24.20164f, 3897.604f, 0.0f, 108.3968f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", -398.632f, 24.08017f, 3905.263f, 0.0f, 242.0227f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted2", "sleeping_scripted", -463.8466f, 21.16027f, 3866.903f, 0.0f, 90.90612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted3", "sleeping_scripted", -461.3805f, 21.1178f, 3864.773f, 0.0f, -91.45325f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted4", "sleeping_scripted", -460.7392f, 21.15327f, 3878.095f, 0.0f, 27.7294f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted5", "sleeping_scripted", -462.8099f, 21.16234f, 3879.636f, 0.0f, 17.39233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted6", "sleeping_scripted", -478.0237f, 20.16032f, 3875.573f, 0.0f, 109.5719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted7", "sleeping_scripted", -478.8122f, 20.2144f, 3873.238f, 0.0f, 117.727f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", -468.6928f, 21.08234f, 3874.838f, 0.0f, -72.86279f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -461.9886f, 21.08235f, 3871.495f, 0.0f, 128.9996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand11", "smoking_stand", -459.7873f, 21.08235f, 3868.765f, 0.0f, 158.3456f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke6", "Rand_Idle_Sit_Ground", -475.7904f, 20.02446f, 3870.787f, 0.0f, -103.2235f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground9", "Rand_Idle_Sit_Ground", -473.7287f, 20.04757f, 3871.886f, 0.0f, 22.83615f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand12", "smoking_stand", -474.4712f, 20.07593f, 3870.191f, 0.0f, 173.5909f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -461.9249f, 21.08234f, 3874.796f, 0.0f, 57.99604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_no_table1", "sit_no_table", -464.5575f, 21.11875f, 3874.96f, 0.0f, -21.47618f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand13", "smoking_stand", -478.0471f, 19.04948f, 3864.682f, 0.0f, 193.1461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke7", "Rand_Idle_Sit_Ground", -465.4743f, 21.08235f, 3870.993f, 0.0f, -144.8529f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground10", "Rand_Idle_Sit_Ground", -461.6447f, 21.08479f, 3872.665f, 0.0f, 103.2312f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel12", "repair_kneel", -408.5577f, 24.21817f, 3900.003f, 0.0f, 62.49356f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee4", "Pee", -479.3713f, 19.07451f, 3844.0f, 0.0f, 82.74141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand14", "smoking_stand", -475.1298f, 20.04757f, 3873.789f, 0.0f, -35.48491f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_talking_soldiers_link", "mex_talking_soldiers_link", -443.723f, 22.50995f, 3925.722f, 0.0f, 138.263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", -411.2111f, 23.88766f, 3914.334f, 0.0f, 110.4233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground11", "Rand_Idle_Sit_Ground", -399.019f, 24.09411f, 3889.264f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground12", "Rand_Idle_Sit_Ground", -402.4818f, 24.1368f, 3888.362f, 0.0f, -19.36408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall6", "Rand_Idle_NearWall", -406.6981f, 24.13713f, 3887.549f, 0.0f, -28.00024f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted6", "sleeping_wall_scripted", -404.9822f, 24.13713f, 3887.956f, 0.0f, -28.34296f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand15", "smoking_stand", -400.4355f, 24.09411f, 3889.668f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -394.4096f, 24.07297f, 3893.431f, 0.0f, 19.70973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand5", "rand_idle_stand", -402.0529f, 24.0941f, 3883.043f, 0.0f, -162.1589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground13", "Rand_Idle_Sit_Ground", -400.3425f, 24.09411f, 3886.531f, 0.0f, 28.64784f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_worried_n_any", "stand_worried_n_any", -402.9959f, 24.0941f, 3885.893f, 0.0f, -57.87351f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table", "lean_table", -465.3461f, 20.58005f, 3918.488f, 0.0f, 47.47797f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -467.9691f, 20.5862f, 3916.448f, 0.0f, -108.2921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -474.5353f, 20.58473f, 3918.042f, 0.0f, -87.933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r", "mex_sleepBed_r", -473.8995f, 20.60549f, 3912.723f, 0.0f, -183.3541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l", "mex_sleepBed_l", -473.888f, 20.59122f, 3910.805f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l1", "mex_sleepBed_r", -464.5076f, 20.54162f, 3910.69f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand17", "smoking_stand", -466.9454f, 20.5862f, 3916.015f, 0.0f, -129.6702f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L", "look_out_window_L", -463.8401f, 20.587f, 3917.45f, 0.0f, -90.2175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any", "stand_guntricks_e_any", -461.1455f, 20.56938f, 3912.806f, 0.0f, -57.6147f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanpistol1", "sit_cleanpistol", -461.8852f, 20.65673f, 3916.626f, 0.0f, -93.8183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanrifle", "sit_cleanrifle", -461.8356f, 20.60959f, 3915.447f, 0.0f, -90.86664f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand6", "rand_idle_stand", -461.2008f, 20.58642f, 3910.469f, 0.0f, 4.161201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", -462.3168f, 20.60042f, 3909.817f, 0.0f, -90.41282f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L1", "look_out_window_L", -460.3816f, 20.55018f, 3916.262f, 0.0f, -91.31308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -477.125f, 20.58991f, 3916.037f, 0.0f, 28.43399f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -476.99f, 20.58f, 3918.138f, 0.0f, 84.80421f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs", "look_distance_binocs", -437.949f, 25.87649f, 3923.236f, 0.0f, 60.73296f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs1", "look_distance_binocs", -434.2016f, 25.86758f, 3935.712f, 0.0f, -180.4358f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted", "sleeping_wall_scripted", -433.8842f, 25.91981f, 3923.522f, 0.0f, -189.3775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand7", "rand_idle_stand", -440.5646f, 25.869f, 3927.256f, 0.0f, 78.09951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", -429.8883f, 25.86723f, 3930.311f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any1", "stand_guntricks_e_any", -434.6213f, 25.86893f, 3927.8f, 0.0f, 44.56473f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L2", "look_out_window_L", -441.55f, 22.53819f, 3924.719f, 0.0f, 88.05113f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table1", "lean_table", -439.3358f, 22.53678f, 3925.833f, 0.0f, 56.09112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", -437.8411f, 22.52402f, 3926.717f, 0.0f, 36.10178f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -436.4721f, 22.53678f, 3925.07f, 0.0f, 69.81035f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_1712 = CREATE_GRINGO_IN_LAYOUT(Local_12, "player_sleep_ELM", "player_sleep_bed_L", -436.602f, 22.52985f, 3934.668f, 0.0f, -185.6343f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand18", "smoking_stand", -431.3405f, 22.5426f, 3926.102f, 0.0f, -61.2644f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", -440.8822f, 22.45596f, 3920.781f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any2", "stand_guntricks_e_any", -438.1347f, 22.54466f, 3920.335f, 0.0f, -71.41123f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanrifle1", "sit_cleanrifle", -437.0813f, 22.50589f, 3920.794f, 0.0f, -2.080508f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_no_table", "sit_no_table", -435.7766f, 22.57576f, 3920.83f, 0.0f, -2.015504f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R", "look_out_window_R", -445.3932f, 22.54713f, 3928.49f, 0.0f, 82.9482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_stay", "horse_stay", -467.244f, 21.04833f, 3938.558f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_stay4", "horse_stay", -469.9704f, 21.05106f, 3948.496f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_stay5", "horse_stay", -466.8071f, 21.06896f, 3954.637f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee", "Pee", -401.2577f, 25.26645f, 3928.959f, 0.0f, -86.67371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel", "repair_kneel", -401.2176f, 25.09645f, 3923.792f, 0.0f, -46.02734f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall", "stand_hammer_wall", -413.3299f, 24.092f, 3951.034f, 0.0f, 133.7728f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs2", "look_distance_binocs", -498.1281f, 17.81501f, 3874.257f, 0.0f, 58.51119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sitGround_beat", "mex_sitGround_tlkPsnt_hrasSol_link", -413.4211f, 24.17999f, 3910.266f, 0.0f, 129.7563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_no_table2", "sit_no_table", -466.5159f, 21.12063f, 3872.297f, 0.0f, -103.7906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel13", "repair_kneel", -475.3041f, 21.08235f, 3937.168f, 0.0f, 91.56857f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel14", "repair_kneel", -479.8951f, 21.08235f, 3937.116f, 0.0f, -92.6727f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Multistage_bucket", "Multistage_bucket", -411.6289f, 24.19822f, 3906.596f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_gateGuards1", "mex_gateGuards", -502.3318f, 17.84166f, 3878.04f, 0.0f, 50.57427f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand8", "rand_idle_stand", -501.3259f, 18.01188f, 3879.198f, 0.0f, -12.43883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_1716 = CREATE_OBJECTSET_IN_LAYOUT(Function_27(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "Multistage_sweeping", "Multistage_sweeping", -429.991f, 22.53679f, 3933.109f, 0.0f, -274.4034f, 0.0f), Local_12.f_1716);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted", "sleeping_scripted", -479.6891f, 19.17204f, 3862.08f, 0.0f, -158.4256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs3", "look_distance_binocs", -376.286f, 22.467f, 3972.388f, 0.0f, -9.655441f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_worried_n_any1", "stand_worried_n_any", -275.5216f, 25.0269f, 3976.982f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee5", "Pee", -276.483f, 24.928f, 3981.46f, 0.0f, 120.4665f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", -287.5569f, 24.1473f, 3981.423f, 0.0f, 118.9179f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand9", "rand_idle_stand", -362.487f, 17.351f, 3945.686f, 0.0f, 47.74981f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_1720 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Locked_Footlocker", "Locked_Footlocker", -437.3585f, 22.53668f, 3933.594f, 0.0f, -91.26926f, 0.0f);
	DECOR_SET_BOOL(Local_12.f_1720, "PlayerHouseChest", true);
	DECOR_SET_BOOL(Local_12.f_1720, "scrap", true);
	Local_12.f_1724 = CREATE_GRINGO_IN_LAYOUT(Local_12, "arm_wrestling_spectate", "arm_wrestling_spectate", -467.4124f, 21.06433f, 3884.092f, 0.0f, -63.10342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_1724), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nsit_docks", "nsit_docks", -445.6615f, 22.54713f, 3927.243f, 0.0f, 88.29755f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nuse_shelf", "nuse_shelf", -409.9503f, 24.21843f, 3902.549f, 0.0f, 62.11762f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_no_table3", "sit_no_table", -465.6446f, 21.10207f, 3874.5f, 0.0f, -21.47618f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", -441.1893f, 25.86723f, 3922.419f, 0.0f, 42.08221f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand19", "smoking_stand", -288.0259f, 24.15235f, 3983.273f, 0.0f, 72.9556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand20", "smoking_stand", -288.5877f, 24.16162f, 3979.875f, 0.0f, 137.5141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_worried_n_any2", "stand_worried_n_any", -277.7816f, 24.8352f, 3979.783f, 0.0f, 70.03278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted7", "sleeping_wall_scripted", -274.0245f, 25.07162f, 3977.017f, 0.0f, 89.39806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer", "kneel_hammer", -465.3449f, 21.08235f, 3953.501f, 0.0f, 92.04393f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer1", "kneel_hammer", -465.2764f, 21.08235f, 3947.139f, 0.0f, 92.04393f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_chair_sit", "mex_chair_sit", -472.8877f, 21.08235f, 3931.455f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_chair_sit1", "mex_chair_sit", -471.4069f, 21.08235f, 3931.455f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_embroidery_e_any", "sit_embroidery_e_any", -466.8522f, 21.08235f, 3873.47f, 0.0f, -105.8852f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L3", "look_out_window_L", -443.1011f, 22.45596f, 3919.692f, 0.0f, 40.18476f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", -442.2021f, 22.45596f, 3919.447f, 0.0f, 16.45711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any8", "stand_lookdistance_w_any", -443.8158f, 22.45596f, 3923.268f, 0.0f, 150.4022f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any9", "stand_lookdistance_w_any", -444.7141f, 22.45596f, 3930.671f, 0.0f, 175.4107f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L4", "look_out_window_L", -444.8503f, 22.45596f, 3922.369f, 0.0f, 21.9817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand10", "rand_idle_stand", -443.8512f, 22.45596f, 3920.898f, 0.0f, 59.06887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted8", "sleeping_wall_scripted", -463.6985f, 21.08303f, 3938.713f, 0.0f, -51.18568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_no_table4", "sit_no_table", -464.0165f, 21.08235f, 3941.216f, 0.0f, -134.9472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand21", "smoking_stand", -460.3122f, 20.55018f, 3915.274f, 0.0f, 145.899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand22", "smoking_stand", -461.9966f, 20.11231f, 3920.32f, 0.0f, -131.3944f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_1728 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe", "opium_pipe", -416.3965f, 23.92296f, 3909.515f, 0.0f, 107.7402f, 0.0f);
	Local_12.f_1732 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe1", "opium_pipe", -409.5733f, 23.93582f, 3917.288f, 0.0f, 54.89847f, 0.0f);
	Local_12.f_1736 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe2", "opium_pipe", -411.9217f, 24.00797f, 3920.068f, 0.0f, 25.14095f, 0.0f);
	Local_12.f_1740 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe3", "opium_pipe", -408.3542f, 24.20233f, 3913.024f, 0.0f, 100.9975f, 0.0f);
	Local_12.f_1744 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe4", "opium_pipe", -405.9211f, 24.09399f, 3907.596f, 0.0f, 100.9975f, 0.0f);
	Local_12.f_1748 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe5", "opium_pipe", -405.2331f, 24.11477f, 3901.914f, 0.0f, 161.8686f, 0.0f);
	Local_12.f_1752 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe6", "opium_pipe", -408.5447f, 24.11477f, 3904.249f, 0.0f, 204.8311f, 0.0f);
	Local_12.f_1756 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -459.9282f, 21.08234f, 3875.707f, 0.0f, 79.58956f, 0.0f);
	Local_12.f_1760 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted9", "sleeping_wall_scripted", -441.0229f, 22.55048f, 3922.865f, 0.0f, -152.785f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand11", "rand_idle_stand", -362.815f, 17.31245f, 3943.827f, 0.0f, 112.7882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand12", "rand_idle_stand", -363.3979f, 17.26134f, 3947.141f, 0.0f, 70.61053f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_1764 = CREATE_GRINGO_IN_LAYOUT(Local_12, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", -465.9765f, 21.06314f, 3884.092f, 0.0f, -9.414042f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand23", "smoking_stand", -461.2898f, 20.55018f, 3914.359f, 0.0f, 187.4124f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_1768 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Locked_Footlocker1", "Locked_Footlocker", -473.8472f, 24.28803f, 3957.105f, 0.0f, -25.96929f, 0.0f);
	DECOR_SET_BOOL(Local_12.f_1768, "PlayerHouseChest", true);
	DECOR_SET_BOOL(Local_12.f_1768, "scrap", true);
	Local_12.f_1772 = CREATE_GRINGO_IN_LAYOUT(Local_12, "opium_pipe7", "opium_pipe", -404.0657f, 24.09311f, 3885.175f, 0.0f, -84.74769f, 0.0f);
	return 1;
}

bool Function_81(int iParam0) //Position: 0x88A7 / 34983
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_85();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_84(iParam0[iVar03], 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_84(iParam0[iVar03], 8);
		}
		Function_84(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_84(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
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
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x8C22 / 35874
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_83() //Position: 0x8C62 / 35938
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

void Function_84(var uParam0, int iParam1) //Position: 0x8C8D / 35981
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_85() //Position: 0x8C9E / 35998
{
	if (!Function_63(128))
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

var Function_86(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8CE0 / 36064
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_87(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_84(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_87(var uParam0, int iParam1, int iParam2) //Position: 0x8D18 / 36120
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_84(uParam0[iVar03], 4);
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

void Function_88(int iParam0, int iParam1) //Position: 0x8DDC / 36316
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

void Function_89(var uParam0, int iParam1) //Position: 0x8E25 / 36389
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_90(int iParam0, int iParam1) //Position: 0x8E34 / 36404
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	*iParam0 = (*iParam0 - iVar0);
	return;
}

int Function_91(int iParam0, bool bParam1) //Position: 0x8E4B / 36427
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (!Function_92(iVar0))
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

bool Function_92(int iParam0) //Position: 0x8E88 / 36488
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_93(int iParam0) //Position: 0x8E9F / 36511
{
	if (!Function_94(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_94(int iParam0) //Position: 0x8EB9 / 36537
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_95() //Position: 0x8ECF / 36559
{
	var uVar0;
	
	Function_88(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("ElMataderoTown_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("ElMataderoTown_layout");
	}
	*(&Local_4 + 4) = { -445.8579f, 21.47666f, 3923.305f };
	*(&Local_4 + 4 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -445.8579f, 21.47666f, 3923.305f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_96(bool bParam0, var uParam1) //Position: 0x8F6D / 36717
{
	if (!Function_63(128))
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

