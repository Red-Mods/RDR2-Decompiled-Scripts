//Decompiled with MagicRDR v1.0
//Function Count : 97
//Statics Count : 712
//Natives Count : 133
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<29> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_151 = 19;
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
	var uLocal_267 = 1;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 1;
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
	int iLocal_302 = 0;
	bool bLocal_303 = false;
	bool bLocal_304 = false;
	int iLocal_305 = 0;
	bool bLocal_306 = false;
	var uLocal_307 = 20;
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
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_304 = 4294967295;
	iLocal_305 = 0;
	iLocal_709 = 0;
	iLocal_302 = 0;
	Function_96("Initializing LasHermanas", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_303 = 1000;
		switch (iLocal_302)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_302 = 1;
				}
				bLocal_303 = false;
				break;
			
			case 0x00000001:
				Function_95();
				if (Function_95())
				{
					iLocal_302 = 2;
					if (Function_94())
					{
						ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
					}
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					if (Function_90(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
				}
				bLocal_303 = false;
				break;
			
			case 0x00000002:
				if (Function_81())
				{
					Function_80(&(Global_29008[iScriptParam_0]), 32);
					iLocal_302 = 3;
				}
				bLocal_303 = false;
				break;
			
			case 0x00000003:
				bLocal_306 = LAUNCH_NEW_SCRIPT_WITH_ARGS("LasHermanasVol", &iScriptParam_0, 2, 0);
				Function_79(&Global_6866, &Global_8030, iScriptParam_0);
				iLocal_302 = 5;
				bLocal_303 = false;
				break;
			
			case 0x00000005:
				if (Function_78(&Global_6866, &Global_8030, iScriptParam_0))
				{
					iLocal_302 = 4;
					bLocal_303 = false;
				}
				else
				{
					bLocal_303 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_77(&(Global_29008[iScriptParam_0]), 16) && Function_76(Global_29155[iScriptParam_010]))
				{
					iLocal_302 = 6;
				}
				bLocal_303 = false;
				break;
			
			case 0x00000006:
				Function_75(0, &uLocal_307, -1731.975f, 8.031f, 4220.302f);
				Function_74(0, &uLocal_307, -1714.372f, 11.253f, 4218.281f);
				Function_73(0, &uLocal_307, -1718.894f, 11.267f, 4211.255f);
				Function_72(0, &uLocal_307, -1699.738f, 8.706f, 4183.786f);
				Function_71(0, &uLocal_307, -1718.894f, 11.267f, 4211.255f);
				Function_70(0, &uLocal_307, -1713.996f, 11.28086f, 4214.523f);
				Function_69(0, &uLocal_307, Local_13);
				Function_75(15, &uLocal_307, -1691.62f, 8.406471f, 4194.362f);
				Function_74(15, &uLocal_307, -1683.862f, 11.421f, 4214.699f);
				Function_73(15, &uLocal_307, -1731.975f, 8.031f, 4220.302f);
				Function_72(15, &uLocal_307, -1721.173f, 8.083f, 4199.181f);
				Function_71(15, &uLocal_307, -1723.192f, 11.256f, 4212.918f);
				Function_70(15, &uLocal_307, -1684.307f, 11.421f, 4223.894f);
				Function_69(15, &uLocal_307, Local_13);
				Function_75(16, &uLocal_307, -1700.139f, 8.406f, 4186.993f);
				Function_74(16, &uLocal_307, -1728.461f, 8.079f, 4201.314f);
				Function_73(16, &uLocal_307, -1722.195f, 8.183f, 4212.391f);
				Function_72(16, &uLocal_307, -1691.62f, 8.406f, 4194.362f);
				Function_71(16, &uLocal_307, -1734.719f, 8.279f, 4210.561f);
				Function_70(16, &uLocal_307, -1684.176f, 11.421f, 4217.864f);
				Function_69(16, &uLocal_307, Local_13);
				Function_75(17, &uLocal_307, -1717.266f, 8.083f, 4201.051f);
				Function_74(17, &uLocal_307, -1704.753f, 8.406f, 4192.281f);
				Function_73(17, &uLocal_307, -1723.282f, 11.332f, 4209.531f);
				Function_72(17, &uLocal_307, -1683.862f, 11.421f, 4214.699f);
				Function_71(17, &uLocal_307, -1723.282f, 11.332f, 4209.531f);
				Function_70(17, &uLocal_307, -1684.335f, 11.421f, 4215.385f);
				Function_69(17, &uLocal_307, Local_13);
				Function_75(18, &uLocal_307, -1684.335f, 11.421f, 4205.474f);
				Function_74(18, &uLocal_307, -1734.719f, 8.279f, 4210.561f);
				Function_73(18, &uLocal_307, -1722.169f, 11.291f, 4213.031f);
				Function_72(18, &uLocal_307, -1717.201f, 11.332f, 4216.945f);
				Function_71(18, &uLocal_307, -1717.201f, 11.332f, 4216.945f);
				Function_70(18, &uLocal_307, -1699.401f, 8.728f, 4183.876f);
				Function_69(18, &uLocal_307, Local_13);
				Function_75(19, &uLocal_307, -1686.583f, 8.141f, 4245.348f);
				Function_74(19, &uLocal_307, -1703.762f, 8.071f, 4235.874f);
				Function_73(19, &uLocal_307, -1683.862f, 11.421f, 4214.699f);
				Function_72(19, &uLocal_307, -1722.195f, 8.183f, 4212.391f);
				Function_71(19, &uLocal_307, -1691.62f, 8.406f, 4194.362f);
				Function_70(19, &uLocal_307, -1683.932f, 11.454f, 4202.743f);
				Function_69(19, &uLocal_307, Local_13);
				Function_75(9, &uLocal_307, -1726.591f, 8.206f, 4217.448f);
				Function_74(9, &uLocal_307, -1736.075f, 7.254f, 4200.024f);
				Function_73(9, &uLocal_307, -1699.866f, 8.388f, 4194.315f);
				Function_72(9, &uLocal_307, -1736.075f, 7.254f, 4200.024f);
				Function_71(9, &uLocal_307, -1726.591f, 8.206f, 4217.448f);
				Function_70(9, &uLocal_307, -1685.366f, 11.454f, 4222.697f);
				Function_69(9, &uLocal_307, Local_13);
				Function_75(10, &uLocal_307, -1699.866f, 8.388f, 4194.315f);
				Function_74(10, &uLocal_307, -1686.583f, 8.141f, 4245.348f);
				Function_73(10, &uLocal_307, -1734.719f, 8.279f, 4210.561f);
				Function_72(10, &uLocal_307, -1686.583f, 8.141f, 4245.348f);
				Function_71(10, &uLocal_307, -1722.195f, 8.183f, 4212.391f);
				Function_70(10, &uLocal_307, -1685.366f, 11.454f, 4216.608f);
				Function_69(10, &uLocal_307, Local_13);
				Function_75(11, &uLocal_307, -1736.075f, 7.275f, 4200.024f);
				Function_74(11, &uLocal_307, -1699.866f, 8.388f, 4194.315f);
				Function_73(11, &uLocal_307, -1736.075f, 7.275f, 4200.024f);
				Function_72(11, &uLocal_307, -1699.436f, 8.071f, 4232.832f);
				Function_71(11, &uLocal_307, -1699.866f, 8.388f, 4194.315f);
				Function_70(11, &uLocal_307, -1685.061f, 11.454f, 4204.198f);
				Function_69(11, &uLocal_307, Local_13);
				Function_75(12, &uLocal_307, -1685.366f, 11.454f, 4222.697f);
				Function_74(12, &uLocal_307, -1722.195f, 8.183f, 4212.391f);
				Function_73(12, &uLocal_307, -1698.7f, 8.406f, 4209.805f);
				Function_72(12, &uLocal_307, -1686.182f, 8.329f, 4215.932f);
				Function_71(12, &uLocal_307, -1675.668f, 8.339f, 4215.184f);
				Function_70(12, &uLocal_307, -1712.958f, 8.106f, 4215.458f);
				Function_69(12, &uLocal_307, Local_13);
				Function_75(13, &uLocal_307, -1685.366f, 11.454f, 4216.608f);
				Function_74(13, &uLocal_307, -1698.7f, 8.406f, 4209.805f);
				Function_73(13, &uLocal_307, -1686.182f, 8.329f, 4215.932f);
				Function_72(13, &uLocal_307, -1675.668f, 8.339f, 4215.184f);
				Function_71(13, &uLocal_307, -1712.958f, 8.106f, 4215.458f);
				Function_70(13, &uLocal_307, -1722.195f, 8.183f, 4212.391f);
				Function_69(13, &uLocal_307, Local_13);
				Function_75(14, &uLocal_307, -1685.061f, 11.454f, 4204.198f);
				Function_74(14, &uLocal_307, -1686.182f, 8.329f, 4215.932f);
				Function_73(14, &uLocal_307, -1675.668f, 8.339f, 4215.184f);
				Function_72(14, &uLocal_307, -1712.958f, 8.106f, 4215.458f);
				Function_71(14, &uLocal_307, -1698.7f, 8.406f, 4209.805f);
				Function_70(14, &uLocal_307, -1686.182f, 8.329f, 4215.932f);
				Function_69(14, &uLocal_307, Local_13);
				Function_75(1, &uLocal_307, -1703.141f, 8.406472f, 4209.348f);
				Function_74(1, &uLocal_307, -1708.707f, 8.021f, 4237.89f);
				Function_73(1, &uLocal_307, -1699.225f, 8.071f, 4243.456f);
				Function_72(1, &uLocal_307, -1711.017f, 8.085f, 4232.0f);
				Function_71(1, &uLocal_307, -1683.926f, 11.242f, 4246.735f);
				Function_70(1, &uLocal_307, -1690.432f, 8.406473f, 4190.056f);
				Function_69(1, &uLocal_307, Local_13);
				Function_75(4, &uLocal_307, -1683.243f, 11.231f, 4252.623f);
				Function_74(4, &uLocal_307, -1720.753f, 8.022f, 4245.132f);
				Function_73(4, &uLocal_307, -1728.772f, 11.26f, 4186.611f);
				Function_72(4, &uLocal_307, -1707.737f, 8.042f, 4249.17f);
				Function_71(4, &uLocal_307, -1728.772f, 11.26f, 4186.611f);
				Function_70(4, &uLocal_307, -1684.594f, 8.329f, 4207.049f);
				Function_69(4, &uLocal_307, Local_13);
				Function_75(5, &uLocal_307, -1684.594f, 8.329f, 4207.049f);
				Function_74(5, &uLocal_307, -1713.185f, 8.031f, 4247.38f);
				Function_73(5, &uLocal_307, -1740.639f, 7.3f, 4205.736f);
				Function_72(5, &uLocal_307, -1713.185f, 8.031f, 4247.38f);
				Function_71(5, &uLocal_307, -1701.945f, 8.4f, 4198.533f);
				Function_70(5, &uLocal_307, -1683.243f, 11.231f, 4252.623f);
				Function_69(5, &uLocal_307, Local_13);
				Function_75(6, &uLocal_307, -1721.846f, 11.286f, 4250.997f);
				Function_74(6, &uLocal_307, -1711.494f, 8.032f, 4234.503f);
				Function_73(6, &uLocal_307, -1702.475f, 8.093f, 4234.368f);
				Function_72(6, &uLocal_307, -1711.494f, 8.032f, 4234.503f);
				Function_71(6, &uLocal_307, -1697.923f, 8.402f, 4196.733f);
				Function_70(6, &uLocal_307, -1676.408f, 8.339f, 4206.9f);
				Function_69(6, &uLocal_307, Local_13);
				Function_75(7, &uLocal_307, -1676.408f, 8.339f, 4206.9f);
				Function_74(7, &uLocal_307, -1717.216f, 11.575f, 4239.32f);
				Function_73(7, &uLocal_307, -1720.624f, 11.304f, 4217.61f);
				Function_72(7, &uLocal_307, -1717.216f, 11.575f, 4239.32f);
				Function_71(7, &uLocal_307, -1720.624f, 11.304f, 4217.61f);
				Function_70(7, &uLocal_307, -1721.846f, 11.286f, 4250.997f);
				Function_69(7, &uLocal_307, Local_13);
				Function_75(2, &uLocal_307, -1719.925f, 8.096f, 4230.973f);
				Function_74(2, &uLocal_307, -1719.925f, 8.096f, 4230.973f);
				Function_73(2, &uLocal_307, -1731.209f, 11.242f, 4186.966f);
				Function_72(2, &uLocal_307, -1719.925f, 8.096f, 4230.973f);
				Function_71(2, &uLocal_307, -1731.209f, 11.242f, 4186.966f);
				Function_70(2, &uLocal_307, -1676.393f, 8.336f, 4216.602f);
				Function_69(2, &uLocal_307, Local_13);
				Function_75(8, &uLocal_307, -1666.297f, 8.389f, 4289.555f);
				Function_74(8, &uLocal_307, -1666.297f, 8.389f, 4289.555f);
				Function_73(8, &uLocal_307, -1666.297f, 8.389f, 4289.555f);
				Function_72(8, &uLocal_307, -1666.297f, 8.389f, 4289.555f);
				Function_71(8, &uLocal_307, -1701.277f, 8.071f, 4240.814f);
				Function_70(8, &uLocal_307, -1676.393f, 8.336f, 4222.548f);
				Function_69(8, &uLocal_307, Local_13);
				Function_65(&Global_6866, &Global_8030, &uLocal_307, Global_6289, iScriptParam_0);
				if (Function_77(&(Global_29008[iScriptParam_0]), 256) || !Function_64(2))
				{
					iLocal_708 = 1;
				}
				Function_63(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1132));
				Function_63(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1140));
				Function_63(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1136));
				Function_80(&(Global_29008[iScriptParam_0]), 8);
				if (Function_77(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_62(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_302 = 10;
				}
				else
				{
					iLocal_302 = 7;
				}
				bLocal_303 = false;
				break;
			
			case 0x00000007:
				Function_61(&Global_62527, 5);
				Function_54(iScriptParam_0);
				Function_40(&Global_62527, 5, Global_30693[1], "$/content/Mexico/Mini_Games/HorseShoes_LSH/HorseShoes_LSH", 4294967295, 0, "LshHorseshoes", 350, -1716.808f, 8.031f, 4258.536f, 2.5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "lshv_horseshoepit"));
				iLocal_302 = 8;
				bLocal_303 = false;
				break;
			
			case 0x00000008:
				Function_39(64);
				if (Function_38(iScriptParam_0, &Global_6866, iLocal_708))
				{
					Function_34(StackVal, 0, 0.1f, 4, Local_4, 1);
					Function_30(2, 4294967295, 4294967295, 0, 3);
					Function_27(Local_4);
				}
				else
				{
					Function_30(1, 10, 6, 8, 5);
					switch (Global_30619)
					{
						case 0x00000000:
						case 0x00000001:
							Function_34(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000002:
							Function_34(StackVal, 0, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000003:
							Function_34(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
					}
					Function_27(Local_4);
				}
				Function_80(&(Global_29008[iScriptParam_0]), 512);
				iLocal_302 = 9;
				bLocal_303 = false;
				break;
			
			case 0x00000009:
				Function_25(Local_4, iScriptParam_0);
				Function_80(&(Global_29008[iScriptParam_0]), 4);
				Function_24("Finished Initializing LasHermanas", 5.0f);
				iLocal_302 = 10;
				bLocal_303 = false;
				break;
			
			case 0x0000000A:
				if (!Function_21())
				{
					if (bLocal_304 < 0 && iLocal_305 >= 0)
					{
						PLAY_SOUND_FROM_POSITION("BELL_LRG_IMP_HVY_MASTER", -1699.55f, 19.625f, 4207.602f);
						PLAY_SOUND_FROM_POSITION("BELL_LRG_IMP_HVY_MASTER", -1744.712f, 13.63f, 4199.02f);
						PLAY_SOUND_FROM_POSITION("BELL_LRG_IMP_HVY_MASTER", -1700.279f, 15.833f, 4260.511f);
						iLocal_305 = RAND_INT_RANGE(50, 65);
						bLocal_304 = (bLocal_304 - 1);
						bLocal_303 = false;
					}
					else if (bLocal_304 < 0)
					{
						bLocal_304 = 4294967295;
						bVar0 = GET_TIME_OF_DAY();
						if (GET_MINUTE(bVar0) != 0 && !iLocal_709)
						{
							iVar1 = GET_HOUR(bVar0);
							if (iVar1 <= 7 && iVar1 >= 18)
							{
								if (iVar1 >= 12)
								{
									iVar1 = (iVar1 - 12);
								}
								bLocal_304 = iVar1;
								PRINTSTRING("Here's how many times we're supposed to ring: ");
								PRINTINT(bLocal_304);
								PRINTNL();
								iLocal_305 = 0;
								bLocal_303 = false;
								iLocal_709 = 1;
							}
						}
						else
						{
							bLocal_303 = 1000;
							if (GET_MINUTE(bVar0) != 0)
							{
								iLocal_709 = 0;
							}
						}
					}
					else
					{
						bLocal_303 = false;
					}
					iLocal_305 = (iLocal_305 - 1);
				}
				if (Function_77(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_302 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_303);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	Function_11(&Global_6866, &Global_8030, iScriptParam_0, (iLocal_708 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	if (Function_94())
	{
		DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
	}
	Function_62(&(Global_29008[iScriptParam_0]), 32);
	Function_62(&(Global_29008[iScriptParam_0]), 64);
	Function_62(&(Global_29008[iScriptParam_0]), 8);
	Function_62(&(Global_29008[iScriptParam_0]), 512);
	Function_62(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_306))
	{
		TERMINATE_SCRIPT(bLocal_306);
	}
	Function_24("Unloaded LasHermanas", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x10F7 / 4343
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

void Function_2(int iParam0) //Position: 0x112D / 4397
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x114F / 4431
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x1165 / 4453
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x117B / 4475
{
	Function_6(&Local_13 + 4);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_6(int iParam0) //Position: 0x118D / 4493
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

void Function_7(var uParam0, int iParam1) //Position: 0x11B3 / 4531
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

void Function_8(var uParam0, int iParam1) //Position: 0x12E1 / 4833
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x12FB / 4859
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1318 / 4888
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1323 / 4899
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_94())
	{
		return;
	}
	strcpy(&cVar0, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_77(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_62(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_17(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_17(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_16(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_16(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_77(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_64(2) || Function_77(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
		{
			Function_12(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
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
			Function_80(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1523 / 5411
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_17(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1672 / 5746
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

int Function_14(int iParam0) //Position: 0x169D / 5789
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

void Function_15(var uParam0, int iParam1) //Position: 0x16D1 / 5841
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x16E0 / 5856
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x16F7 / 5879
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x1713 / 5907
{
	if (Function_19(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(var uParam0, int iParam1) //Position: 0x172E / 5934
{
	return (uParam0 && iParam1) == 0;
}

var Function_20(int iParam0) //Position: 0x173B / 5947
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

bool Function_21() //Position: 0x1BE9 / 7145
{
	return !Function_22();
}

bool Function_22() //Position: 0x1BF3 / 7155
{
	if (Function_94())
	{
		return (Function_23() != 1 || Function_23() != 0);
	}
	return 0;
}

int Function_23() //Position: 0x1C0C / 7180
{
	return Global_79349.f_16;
}

void Function_24(bool bParam0, float fParam1) //Position: 0x1C18 / 7192
{
	if (!Function_64(128))
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

void Function_25(bool bParam0, bool bParam1) //Position: 0x1C56 / 7254
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
		Function_26(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_94())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x1D50 / 7504
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_27(bool bParam0) //Position: 0x1D5D / 7517
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_29(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_28(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_28(var uParam0) //Position: 0x1E48 / 7752
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_29() //Position: 0x1E65 / 7781
{
	int iVar0;
	
	return iVar0;
}

void Function_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1E6D / 7789
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
		Function_31();
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

void Function_31() //Position: 0x1F51 / 8017
{
	int iVar0;
	
	Global_26960 = Function_32(StackVal);
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

int Function_32(int iParam0) //Position: 0x1F9F / 8095
{
	if (!Function_33(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_33(bool bParam0) //Position: 0x1FB7 / 8119
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_34(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1FCC / 8140
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
		Function_37();
	}
	if (bParam5)
	{
		Function_35(1048576);
	}
}

void Function_35(int iParam0) //Position: 0x20DF / 8415
{
	Function_36(&Global_28842, iParam0);
	return;
}

void Function_36(var uParam0, var uParam1) //Position: 0x20ED / 8429
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_37() //Position: 0x2108 / 8456
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_35(16384);
	}
	return;
}

bool Function_38(int iParam0, int iParam1, bool bParam2) //Position: 0x2124 / 8484
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_77(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_90(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_94())
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

void Function_39(float fParam0) //Position: 0x21E4 / 8676
{
	Global_26316.f_56 = (Global_26316.f_56 || fParam0);
	return;
}

void Function_40(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x21F7 / 8695
{
	if (Function_94() && !bParam12)
	{
		return;
	}
	if (!Function_94() && bParam12)
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

int Function_41(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x2343 / 9027
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

int Function_42(bool bParam0) //Position: 0x2526 / 9510
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

bool Function_43(vector3 vParam0, vector3 vParam3) //Position: 0x265D / 9821
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_44(bool bParam0) //Position: 0x268A / 9866
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

var Function_45(vector3 vParam0) //Position: 0x26E1 / 9953
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

int Function_46(int iParam0) //Position: 0x272F / 10031
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

bool Function_47(vector3 vParam0) //Position: 0x27E7 / 10215
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_48(int iParam0) //Position: 0x27FF / 10239
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_49(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2822 / 10274
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

int Function_50(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2880 / 10368
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

int Function_51(int iParam0) //Position: 0x29D5 / 10709
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

bool Function_52(int iParam0) //Position: 0x2A13 / 10771
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_53(int iParam0, int iParam1, int iParam2) //Position: 0x2A28 / 10792
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_54(int iParam0) //Position: 0x2A48 / 10824
{
	Function_57(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_56(&Global_17483[4075] + 120, 1, 4.5f, 64, 4294967295);
	Function_55(&Global_17483[4075] + 120, -4.5f, 2);
	return;
}

void Function_55(int iParam0, var uParam1, int iParam2) //Position: 0x2AC3 / 10947
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_56(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2AD9 / 10969
{
	iParam0->f_60 = uParam1;
	(iParam0 + 60)->f_4 = uParam2;
	(iParam0 + 60)->f_8 = uParam3;
	(iParam0 + 60)->f_16 = uParam4;
}

void Function_57(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x2AFF / 11007
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_58(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_58(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x2B41 / 11073
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
	if (!Function_18())
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

int Function_59(int iParam0, int iParam1) //Position: 0x2EE9 / 12009
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_60(int iParam0) //Position: 0x2F0A / 12042
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_61(var uParam0, int iParam1) //Position: 0x2F20 / 12064
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_62(var uParam0, int iParam1) //Position: 0x2F3B / 12091
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_63(var uParam0, bool bParam1) //Position: 0x2F52 / 12114
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

bool Function_64(int iParam0) //Position: 0x2F9A / 12186
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_65(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2FB6 / 12214
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_64(2))
	{
		return;
	}
	if (Function_77(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_66(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_62(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_80(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_66(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x3068 / 12392
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_77(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(iParam0, 2))
	{
		return 1;
	}
	if (Function_17(iParam0, 4))
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
		uParam1->f_8 = Function_68(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_47(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(iParam0, 4);
	}
	Function_67(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_67(bool bParam0, bool bParam1) //Position: 0x31D3 / 12755
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

var Function_68(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x330F / 13071
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_29(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_69(int iParam0, var uParam1, bool bParam2) //Position: 0x3428 / 13352
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

void Function_70(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3483 / 13443
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

void Function_71(int iParam0, var uParam1, vector3 vParam2) //Position: 0x34E9 / 13545
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

void Function_72(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3551 / 13649
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

void Function_73(int iParam0, var uParam1, vector3 vParam2) //Position: 0x35BB / 13755
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

void Function_74(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3620 / 13856
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

void Function_75(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3688 / 13960
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

int Function_76(int iParam0) //Position: 0x36EB / 14059
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_77(&(Global_29008[iParam0]), 4);
}

bool Function_77(var uParam0, int iParam1) //Position: 0x3707 / 14087
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x3723 / 14115
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_94())
	{
		return 1;
	}
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_77(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
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

void Function_79(var uParam0, var uParam1, int iParam2) //Position: 0x3804 / 14340
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_94())
	{
		return;
	}
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_77(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_80(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x38EC / 14572
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_81() //Position: 0x38FB / 14587
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
	
	Function_89(3, 3);
	bVar0 = bVar0;
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/oldf_pray", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nosmoke", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_lumber", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_embroidery_e_any", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/light_candle", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/light_candle_multi", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_sleeponbench_n_any", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/mex_bench_chair_sit", 1, 0);
	Function_87(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	if (!Function_82(&Local_13 + 4))
	{
		return 0;
	}
	Local_13 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (!IS_LAYOUTREF_VALID(Local_13))
	{
		Local_13 = CREATE_LAYOUT("LasHermanas_layout");
	}
	Local_13.f_548 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_13, 8, 0);
	*(&Local_13 + 552[06]) = { -1676.778f, 11.416f, 4225.216f };
	*(&Local_13 + 552[06] + 12) = { 0.0f, 191.342f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag23", -1676.778f, 11.416f, 4225.216f, 0.0f, 191.342f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_13.f_548);
	*(&Local_13 + 552[16]) = { -1679.978f, 11.412f, 4225.848f };
	*(&Local_13 + 552[16] + 12) = { 0.0f, 221.6891f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag5", -1679.978f, 11.412f, 4225.848f, 0.0f, 221.6891f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_13.f_548);
	*(&Local_13 + 552[26]) = { -1685.193f, 11.421f, 4225.493f };
	*(&Local_13 + 552[26] + 12) = { 0.0f, 70.161f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag6", -1685.193f, 11.421f, 4225.493f, 0.0f, 70.161f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_13.f_548);
	*(&Local_13 + 552[36]) = { -1685.027f, 11.421f, 4220.312f };
	*(&Local_13 + 552[36] + 12) = { 0.0f, 82.239f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag7", -1685.027f, 11.421f, 4220.312f, 0.0f, 82.239f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_13.f_548);
	*(&Local_13 + 552[46]) = { -1684.437f, 11.421f, 4214.542f };
	*(&Local_13 + 552[46] + 12) = { 0.0f, 125.4319f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag8", -1684.437f, 11.421f, 4214.542f, 0.0f, 125.4319f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_13.f_548);
	*(&Local_13 + 552[56]) = { -1685.284f, 11.421f, 4210.466f };
	*(&Local_13 + 552[56] + 12) = { 0.0f, 54.65687f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag9", -1685.284f, 11.421f, 4210.466f, 0.0f, 54.65687f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_13.f_548);
	*(&Local_13 + 552[66]) = { -1684.966f, 11.421f, 4204.857f };
	*(&Local_13 + 552[66] + 12) = { 0.0f, 415.3283f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag10", -1684.966f, 11.421f, 4204.857f, 0.0f, 415.3283f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_13.f_548);
	*(&Local_13 + 552[76]) = { -1684.0f, 11.421f, 4197.469f };
	*(&Local_13 + 552[76] + 12) = { 0.0f, 348.6252f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag11", -1684.0f, 11.421f, 4197.469f, 0.0f, 348.6252f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_13.f_548);
	*(&Local_13 + 552[86]) = { -1694.449f, 8.459f, 4197.87f };
	*(&Local_13 + 552[86] + 12) = { 0.0f, 331.2801f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag12", -1694.449f, 8.459f, 4197.87f, 0.0f, 331.2801f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_13.f_548);
	*(&Local_13 + 552[96]) = { -1695.101f, 8.407f, 4208.164f };
	*(&Local_13 + 552[96] + 12) = { 0.0f, 403.5736f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag13", -1695.101f, 8.407f, 4208.164f, 0.0f, 403.5736f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_13.f_548);
	*(&Local_13 + 552[106]) = { -1696.386f, 8.407f, 4209.293f };
	*(&Local_13 + 552[106] + 12) = { 0.0f, 252.4854f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag14", -1696.386f, 8.407f, 4209.293f, 0.0f, 252.4854f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_13.f_548);
	*(&Local_13 + 552[116]) = { -1698.186f, 8.407f, 4207.328f };
	*(&Local_13 + 552[116] + 12) = { 0.0f, -126.6505f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag15", -1698.186f, 8.407f, 4207.328f, 0.0f, -126.6505f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_13.f_548);
	*(&Local_13 + 552[126]) = { -1699.359f, 8.407f, 4209.715f };
	*(&Local_13 + 552[126] + 12) = { 0.0f, 237.2079f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag16", -1699.359f, 8.407f, 4209.715f, 0.0f, 237.2079f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_13.f_548);
	*(&Local_13 + 552[136]) = { -1704.049f, 8.393f, 4207.796f };
	*(&Local_13 + 552[136] + 12) = { 0.0f, 171.9238f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag17", -1704.049f, 8.393f, 4207.796f, 0.0f, 171.9238f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_13.f_548);
	*(&Local_13 + 552[146]) = { -1714.844f, 8.107f, 4211.341f };
	*(&Local_13 + 552[146] + 12) = { 0.0f, 278.901f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag18", -1714.844f, 8.107f, 4211.341f, 0.0f, 278.901f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_13.f_548);
	*(&Local_13 + 552[156]) = { -1714.089f, 8.107f, 4215.721f };
	*(&Local_13 + 552[156] + 12) = { 0.0f, 318.5831f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag19", -1714.089f, 8.107f, 4215.721f, 0.0f, 318.5831f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_13.f_548);
	*(&Local_13 + 552[166]) = { -1714.381f, 8.107f, 4218.91f };
	*(&Local_13 + 552[166] + 12) = { 0.0f, 288.0729f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag20", -1714.381f, 8.107f, 4218.91f, 0.0f, 288.0729f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_13.f_548);
	*(&Local_13 + 552[176]) = { -1714.086f, 8.107f, 4222.057f };
	*(&Local_13 + 552[176] + 12) = { 0.0f, 268.5576f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag21", -1714.086f, 8.107f, 4222.057f, 0.0f, 268.5576f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_13.f_548);
	*(&Local_13 + 552[186]) = { -1684.177f, 11.421f, 4214.698f };
	*(&Local_13 + 552[186] + 12) = { 0.0f, 271.675f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag22", -1684.177f, 11.421f, 4214.698f, 0.0f, 271.675f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_13.f_548);
	Local_13.f_1012 = CREATE_OBJECTSET_IN_LAYOUT("lumbergrpSet", Local_13, 8, 0);
	*(&Local_13 + 1016[06]) = { -1714.348f, 8.032f, 4243.2f };
	*(&Local_13 + 1016[06] + 12) = { 0.0f, 357.877f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag24", -1714.348f, 8.032f, 4243.2f, 0.0f, 357.877f, 0.0f);
	DECOR_SET_STRING(bVar20, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_13.f_1012);
	Local_13.f_1044 = CREATE_OBJECTSET_IN_LAYOUT("watermelongrpSet", Local_13, 8, 0);
	*(&Local_13 + 1048[06]) = { -1684.76f, 8.045694f, 4245.493f };
	*(&Local_13 + 1048[06] + 12) = { 0.0f, 86.28854f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag25", -1684.76f, 8.045694f, 4245.493f, 0.0f, 86.28854f, 0.0f);
	DECOR_SET_STRING(bVar21, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_13.f_1044);
	*(&Local_13 + 1076) = { -1714.395f, 11.26139f, 4213.877f };
	*(&Local_13 + 1076 + 12) = { 0.0f, 178.0935f, 0.0f };
	Local_13.f_1100 = CREATE_POINT_IN_LAYOUT(Local_13, "player_save_flag_LAS", -1714.395f, 11.26139f, 4213.877f, 0.0f, 178.0935f, 0.0f);
	*(&Local_13 + 1104) = { -1719.506f, 11.2808f, 4217.135f };
	*(&Local_13 + 1104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_13.f_1128 = CREATE_POINT_IN_LAYOUT(Local_13, "player_purchase_flag_LAS", -1719.506f, 11.2808f, 4217.135f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "noldf_pray", "noldf_pray", -1722.195f, 8.183189f, 4212.391f, 0.0f, -175.4412f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -1739.606f, 7.300356f, 4207.416f, 0.0f, -42.51902f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "oldf_pray1", "noldf_pray", -1701.08f, 8.72789f, 4183.54f, 0.0f, -17.53588f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "oldf_pray3", "noldf_pray", -1699.401f, 8.72789f, 4183.875f, 0.0f, 2.109802f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "oldf_pray4", "noldf_pray", -1697.878f, 8.756759f, 4183.391f, 0.0f, 28.43623f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yawning_n_any1", "stand_yawning_n_any", -1735.214f, 7.300356f, 4195.721f, 0.0f, 100.4818f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1132 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -1711.017f, 8.084888f, 4232.0f, 0.0f, 112.7936f, 0.0f), Local_13.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", -1703.141f, 8.406472f, 4209.348f, 0.0f, -168.7639f, 0.0f), Local_13.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any4", "stand_pocketwatch_e_any", -1722.399f, 8.082561f, 4191.393f, 0.0f, -130.8964f, 0.0f), Local_13.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard", "stand_check_clipboard", -1699.225f, 8.071346f, 4243.456f, 0.0f, 15.47881f, 0.0f), Local_13.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any10", "stand_pocketwatch_e_any", -1708.707f, 8.020612f, 4237.89f, 0.0f, 82.2148f, 0.0f), Local_13.f_1132);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard1", "stand_check_clipboard", -1730.214f, 8.210081f, 4188.308f, 0.0f, 4.313756f, 0.0f), Local_13.f_1132);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand11", "smoking_stand", -1704.068f, 8.031364f, 4246.768f, 0.0f, 26.83949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand1", "smoking_stand", -1685.383f, 8.071345f, 4236.926f, 0.0f, -311.0861f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -1711.072f, 8.071357f, 4253.021f, 0.0f, -0.9125836f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -1687.545f, 8.075707f, 4250.399f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -1682.803f, 8.031363f, 4233.502f, 0.0f, 90.84982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -1696.498f, 8.122991f, 4249.032f, 0.0f, 0.5993124f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence_low2", "sit_fence_low", -1699.768f, 11.1373f, 4252.409f, 0.0f, -179.305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand13", "smoking_stand", -1701.277f, 8.071356f, 4240.813f, 0.0f, -6.861321f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel19", "repair_kneel", -1714.384f, 8.031361f, 4224.462f, 0.0f, 92.71163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand14", "smoking_stand", -1740.639f, 7.300356f, 4205.736f, 0.0f, -100.5448f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yawning_n_any3", "stand_yawning_n_any", -1688.838f, 11.21289f, 4251.956f, 0.0f, 95.01781f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yawning_n_any4", "stand_yawning_n_any", -1721.389f, 11.51309f, 4240.81f, 0.0f, 24.16522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence_low4", "sit_fence_low", -1682.794f, 11.26792f, 4250.548f, 0.0f, 270.7113f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence_low5", "sit_fence_low", -1679.146f, 11.25226f, 4234.642f, 0.0f, 86.36115f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence_low6", "sit_fence_low", -1707.763f, 11.09727f, 4251.409f, 0.0f, -361.6765f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -1678.33f, 11.23122f, 4233.496f, 0.0f, -114.1962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -1683.243f, 11.23122f, 4252.623f, 0.0f, 191.4235f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -1721.846f, 11.28585f, 4250.998f, 0.0f, 89.55013f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -1711.734f, 11.68961f, 4186.07f, 0.0f, -10.87054f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground3f", "Rand_Idle_Sit_Ground", -1688.965f, 8.031361f, 4251.035f, 0.0f, 149.0219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel2", "repair_kneel", -1711.889f, 11.08464f, 4251.438f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand15", "smoking_stand", -1684.961f, 8.338675f, 4219.323f, 0.0f, 97.15651f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", -1692.3f, 8.071357f, 4252.745f, 0.0f, -35.45182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nlean_rail", "nlean_rail", -1686.277f, 11.23122f, 4251.764f, 0.0f, 374.862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke2", "sit_ground_smoke", -1719.791f, 8.031357f, 4251.327f, 0.0f, -108.2698f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand17", "smoking_stand", -1713.952f, 11.26073f, 4185.418f, 0.0f, -81.52162f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand18", "smoking_stand", -1719.925f, 8.096425f, 4230.973f, 0.0f, -94.94963f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1136 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel7", "repair_kneel", -1714.048f, 8.031361f, 4234.782f, 0.0f, -91.26965f, 0.0f), Local_13.f_1136);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel4", "repair_kneel", -1702.399f, 11.19571f, 4258.6f, 0.0f, 0.0f, 0.0f), Local_13.f_1136);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel5", "repair_kneel", -1703.107f, 11.0803f, 4254.066f, 0.0f, -88.05102f, 0.0f), Local_13.f_1136);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel6", "repair_kneel", -1701.535f, 11.12688f, 4252.202f, 0.0f, 177.3045f, 0.0f), Local_13.f_1136);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel8", "repair_kneel", -1691.538f, 8.110466f, 4235.881f, 0.0f, -112.3965f, 0.0f), Local_13.f_1136);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel9", "repair_kneel", -1688.987f, 8.070285f, 4237.209f, 0.0f, 68.02136f, 0.0f), Local_13.f_1136);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand19", "smoking_stand", -1695.62f, 8.080924f, 4235.768f, 0.0f, 87.6114f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail4", "nlean_rail", -1718.767f, 11.29243f, 4227.722f, 0.0f, 269.706f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", -1717.785f, 8.031364f, 4186.591f, 0.0f, -151.7176f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", -1717.667f, 8.031362f, 4184.476f, 0.0f, -177.5021f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand", "smoking_stand", -1719.976f, 8.071302f, 4196.748f, 0.0f, -157.2704f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", -1689.681f, 8.031361f, 4199.52f, 0.0f, -5.333084f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand", "rand_idle_stand_nosmoke", -1717.189f, 8.082555f, 4196.772f, 0.0f, 135.1499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_holy_water", "stand_holy_water", -1700.763f, 8.406472f, 4203.448f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_holy_water2", "stand_holy_water", -1691.62f, 8.399546f, 4194.362f, 0.0f, -4.30763f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_holy_water3", "stand_holy_water", -1700.139f, 8.388999f, 4186.993f, 0.0f, 3.344887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_holy_water5", "stand_holy_water", -1721.864f, 8.220417f, 4211.499f, 0.0f, -178.6426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_holy_water6", "stand_holy_water", -1723.445f, 8.183189f, 4211.417f, 0.0f, -181.3018f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_distance_binocs", "look_distance_binocs", -1707.251f, 11.09721f, 4252.921f, 0.0f, -188.9174f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_distance_binocs1", "look_distance_binocs", -1692.415f, 11.24212f, 4252.74f, 0.0f, -157.5644f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", -1713.996f, 11.28086f, 4214.523f, 0.0f, -90.62759f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yawning_n_any2", "stand_yawning_n_any", -1721.798f, 11.20961f, 4226.549f, 0.0f, 125.8318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", -1741.047f, 7.395913f, 4200.905f, 0.0f, -89.72421f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_chopveggies_w_any", "stand_chopveggies_w_any", -1686.286f, 8.077932f, 4245.085f, 0.0f, -175.3813f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend", "horse_tend", -1701.456f, 8.03136f, 4272.64f, 0.0f, -150.9963f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_stay", "horse_stay", -1699.431f, 8.031361f, 4272.283f, 0.0f, 27.00345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend1", "horse_tend", -1697.683f, 8.031361f, 4271.647f, 0.0f, -167.2825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -1704.082f, 8.053353f, 4228.842f, 0.0f, -271.2493f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_H_talking", "lean_fence_H_talking", -1683.761f, 8.341617f, 4215.667f, 0.0f, -90.51841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L", "look_out_window_L", -1685.833f, 11.42468f, 4210.431f, 0.0f, 88.02628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table", "stand_hammer_table", -1720.753f, 8.022425f, 4245.132f, 0.0f, -273.2521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L", "lean_fence_L", -1711.494f, 8.032317f, 4234.503f, 0.0f, 89.31889f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table1", "stand_hammer_table", -1707.737f, 8.042475f, 4249.17f, 0.0f, 86.44759f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_R", "look_out_window_R", -1713.156f, 11.28086f, 4221.348f, 0.0f, -87.19025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking1", "lean_fence_L_talking", -1720.624f, 11.30416f, 4217.61f, 0.0f, 90.52699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", -1729.963f, 8.205861f, 4222.326f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L1", "look_out_window_L", -1734.132f, 8.206572f, 4209.476f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail15", "nlean_rail", -1728.161f, 10.24838f, 4215.196f, 0.0f, 91.11217f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_Shoulder_R1", "Rand_Idle_NearWall_Shoulder_R", -1737.229f, 7.391932f, 4208.269f, 0.0f, 4.032918f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall10", "Rand_Idle_NearWall", -1731.185f, 8.078622f, 4199.998f, 0.0f, -179.4121f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail16", "nlean_rail", -1716.894f, 11.2844f, 4183.629f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall", "stand_hammer_wall", -1715.843f, 8.031f, 4250.29f, 0.0f, 87.97842f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_R1", "look_out_window_R", -1717.943f, 8.21082f, 4220.822f, 0.0f, -88.6336f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table2", "stand_hammer_table", -1697.002f, 11.07467f, 4248.004f, 0.0f, -176.826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking3", "lean_fence_L_talking", -1683.926f, 11.24176f, 4246.735f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel1", "repair_kneel", -1717.216f, 11.57537f, 4239.32f, 0.0f, -90.90639f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail12", "nlean_rail", -1721.923f, 11.47f, 4237.812f, 0.0f, 88.75313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", -1664.837f, 8.122361f, 4295.506f, 0.0f, 147.1349f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall11", "Rand_Idle_NearWall", -1660.563f, 8.381023f, 4286.659f, 0.0f, -45.90385f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any200", "stand_pocketwatch_e_any", -1662.873f, 8.399433f, 4290.174f, 0.0f, -75.50686f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L2", "look_out_window_L", -1699.773f, 11.08f, 4259.688f, 0.0f, -178.9678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall12", "Rand_Idle_NearWall", -1708.933f, 8.032f, 4254.594f, 0.0f, -179.2756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand1", "rand_idle_stand_nosmoke", -1713.053f, 8.031361f, 4254.796f, 0.0f, -203.8362f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_sweeping", "Multistage_sweeping", -1684.098f, 11.421f, 4214.699f, 0.0f, 90.3879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_lumber", "Multistage_lumber", -1718.592f, 8.006807f, 4249.085f, 0.0f, 89.66975f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1140 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_embroidery_e_any", "sit_embroidery_e_any", -1697.108f, 8.069492f, 4239.155f, 0.0f, 52.20126f, 0.0f), Local_13.f_1140);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_13.f_1140)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "mex_washCloths1", "mex_washCloths", -1684.896f, 8.07091f, 4250.169f, 0.0f, 41.16016f, 0.0f), Local_13.f_1140);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_13.f_1140)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", -1692.903f, 8.064622f, 4248.172f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand2", "rand_idle_stand_nosmoke", -1703.761f, 8.071356f, 4235.874f, 0.0f, -113.832f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_table", "lean_table", -1708.688f, 8.032f, 4247.973f, 0.0f, -179.1494f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_eat_fruit_barrel1", "stand_eat_fruit_barrel", -1697.744f, 8.071f, 4248.272f, 0.0f, -179.4436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_barrel", "sit_barrel", -1689.073f, 8.12009f, 4245.9f, 0.0f, -121.0385f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "light_candle", "light_candle", -1727.455f, 8.206f, 4217.448f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "light_candle_multi", "light_candle_multi", -1720.816f, 11.267f, 4211.255f, 0.0f, 89.90731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_sleeponbench_n_any", "sit_sleeponbench_n_any", -1702.475f, 8.092653f, 4234.368f, 0.0f, -147.2703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall_Shoulder_L", -1715.575f, 8.032f, 4189.248f, 0.0f, -89.04753f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "light_candle_multi1", "light_candle", -1675.668f, 8.339f, 4211.115f, 0.0f, -88.62391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "light_candle_multi2", "light_candle", -1675.742f, 8.339f, 4219.18f, 0.0f, -90.20255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker", "Locked_Footlocker", -1713.7f, 11.2917f, 4212.825f, 0.0f, -266.2146f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_1144, "PlayerHouseChest", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any201", "stand_pocketwatch_e_any", -1707.411f, 8.031357f, 4260.482f, 0.0f, -219.3375f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any202", "stand_pocketwatch_e_any", -1708.747f, 8.031359f, 4261.722f, 0.0f, -316.2559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_spit", "stand_spit", -1710.588f, 8.031361f, 4261.815f, 0.0f, 34.91966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_spit1", "stand_spit", -1711.394f, 8.042853f, 4257.294f, 0.0f, -180.4076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fake_horseshoe", "fake_horseshoe", -1721.364f, 8.091f, 4259.787f, 0.0f, -88.26054f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1148), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "oldf_pray5", "noldf_pray", -1731.975f, 8.205861f, 4220.302f, 0.0f, 160.2688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_holy_water7", "stand_holy_water", -1733.123f, 8.177019f, 4219.672f, 0.0f, -177.6864f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand3", "rand_idle_stand_nosmoke", -1717.266f, 8.082555f, 4201.051f, 0.0f, 29.23837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "mex_chair_sit", "mex_chair_sit", -1721.857f, 8.082553f, 4200.122f, 0.0f, 88.6946f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "mex_chair_sit1", "mex_chair_sit", -1721.803f, 8.082553f, 4198.587f, 0.0f, 88.6946f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l4", "lie_sleep_on_bed_l", -1716.621f, 11.25663f, 4214.544f, 0.0f, -90.39659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "oldf_pray6", "noldf_pray", -1704.753f, 8.406471f, 4192.281f, 0.0f, 90.3811f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand4", "rand_idle_stand_nosmoke", -1699.436f, 8.071356f, 4232.833f, 0.0f, -182.9552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand5", "rand_idle_stand_nosmoke", -1695.922f, 8.071356f, 4238.419f, 0.0f, -296.6133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand6", "rand_idle_stand_nosmoke", -1698.355f, 8.071356f, 4241.551f, 0.0f, -313.5586f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "mex_bench_chair_sit", "mex_bench_chair_sit", -1698.098f, 8.12276f, 4233.905f, 0.0f, 317.4727f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "mex_bench_chair_sit1", "mex_bench_chair_sit", -1702.106f, 8.12276f, 4240.244f, 0.0f, 142.6339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand7", "rand_idle_stand_nosmoke", -1740.0f, 7.254313f, 4200.0f, 0.0f, -51.29264f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand8", "rand_idle_stand_nosmoke", -1736.075f, 7.274668f, 4200.023f, 0.0f, 54.76555f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L3", "look_out_window_L", -1685.812f, 11.41961f, 4204.198f, 0.0f, 88.02628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L4", "look_out_window_L", -1685.807f, 11.42421f, 4219.944f, 0.0f, 88.02628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand9", "rand_idle_stand_nosmoke", -1698.7f, 8.406472f, 4209.805f, 0.0f, 135.1499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand10", "rand_idle_stand_nosmoke", -1695.079f, 8.406472f, 4208.657f, 0.0f, 279.7311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand11", "rand_idle_stand_nosmoke", -1700.88f, 8.406472f, 4207.664f, 0.0f, 216.8064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand12", "rand_idle_stand_nosmoke", -1707.052f, 8.107873f, 4208.583f, 0.0f, 71.08535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand13", "rand_idle_stand_nosmoke", -1683.745f, 8.329041f, 4227.836f, 0.0f, 135.1499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand14", "rand_idle_stand_nosmoke", -1686.182f, 8.329041f, 4215.932f, 0.0f, 63.67053f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand15", "rand_idle_stand_nosmoke", -1684.594f, 8.329041f, 4207.049f, 0.0f, 117.091f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand16", "rand_idle_stand_nosmoke", -1713.485f, 8.106472f, 4210.946f, 0.0f, 231.9069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand17", "rand_idle_stand_nosmoke", -1713.751f, 8.106472f, 4221.013f, 0.0f, 292.4454f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand18", "rand_idle_stand_nosmoke", -1712.958f, 8.106472f, 4215.458f, 0.0f, 229.5487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke", "sit_ground_smoke", -1728.179f, 11.25985f, 4188.168f, 0.0f, -3.000558f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Drink", "Sit_Ground_Drink", -1729.543f, 11.25985f, 4188.01f, 0.0f, 65.30602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_barrel1", "sit_barrel", -1730.387f, 11.25985f, 4188.036f, 0.0f, 149.5227f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fake_horseshoe1", "fake_horseshoe", -1709.76f, 8.091f, 4259.935f, 0.0f, 86.804f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1152), 1);
	return 1;
}

bool Function_82(int iParam0) //Position: 0x7D41 / 32065
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_86();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_85(iParam0[iVar03], 8);
		}
		else if (Function_84())
		{
			iVar1 = 1;
			Function_85(iParam0[iVar03], 8);
		}
		Function_85(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_85(iParam0[iVar03], 1);
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
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
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
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
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
	Function_83();
	return 1;
}

void Function_83() //Position: 0x80BD / 32957
{
	if (!Function_64(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_84() //Position: 0x80FD / 33021
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

void Function_85(var uParam0, int iParam1) //Position: 0x8128 / 33064
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_86() //Position: 0x8139 / 33081
{
	if (!Function_64(128))
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

var Function_87(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x817B / 33147
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_88(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_85(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_88(var uParam0, int iParam1, int iParam2) //Position: 0x81B3 / 33203
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_85(uParam0[iVar03], 4);
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

void Function_89(int iParam0, int iParam1) //Position: 0x8277 / 33399
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

bool Function_90(int iParam0, bool bParam1) //Position: 0x82C0 / 33472
{
	int iVar0;
	
	iVar0 = Function_92(iParam0);
	if (!Function_91(iVar0))
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

bool Function_91(int iParam0) //Position: 0x82FD / 33533
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_92(int iParam0) //Position: 0x8314 / 33556
{
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_93(int iParam0) //Position: 0x832E / 33582
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_94() //Position: 0x8344 / 33604
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_95() //Position: 0x834D / 33613
{
	var uVar0;
	
	Function_89(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("LasHermanas_layout");
	}
	*(&Local_4 + 4) = { -1693.753f, 8.006304f, 4258.227f };
	*(&Local_4 + 4 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -1693.753f, 8.006304f, 4258.227f, 0.0f, 0.0f, 0.0f);
}

void Function_96(bool bParam0, var uParam1) //Position: 0x8579 / 34169
{
	if (!Function_64(128))
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

