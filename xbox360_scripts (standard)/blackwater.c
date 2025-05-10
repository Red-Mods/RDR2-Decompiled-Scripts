//Decompiled with MagicRDR v1.0
//Function Count : 193
//Statics Count : 1114
//Natives Count : 331
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<9> Local_4 = { 0, 0, 0, 0, 62, 0, 0, 0, 0 } ;
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
	int iLocal_312 = 0;
	var uLocal_313[4] = { 0, 0, 0, 0 };
	bool bLocal_318[4] = { false, false, false, false };
	bool bLocal_323 = false;
	bool bLocal_324[3] = { false, false, false };
	bool bLocal_328 = false;
	bool bLocal_329 = false;
	bool bLocal_330 = false;
	bool bLocal_331 = false;
	vector3 vLocal_332 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_335 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_338 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_341 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_344 = { 0.0f, 0.0f, 0.0f };
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	bool bLocal_355 = false;
	bool bLocal_356 = false;
	bool bLocal_357 = false;
	bool bLocal_358 = false;
	bool bLocal_359 = false;
	bool bLocal_360 = false;
	var uLocal_361 = 36;
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
	int iLocal_1082 = 0;
	int iLocal_1083 = 0;
	bool bLocal_1084 = false;
	int iLocal_1085 = 0;
	int iLocal_1086[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1104 = 0;
	int iLocal_1105 = 0;
	bool bLocal_1106 = false;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	bool bLocal_1109 = false;
	bool bLocal_1110 = false;
	bool bLocal_1111 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_312 = 0;
	vLocal_332 = { -2069,74f, 19,431f, 2648,075f };
	vLocal_335 = { 705,8332f, 78,78346f, 1287,04f };
	vLocal_338 = { 705,8778f, 78,8585f, 1291,81f };
	vLocal_341 = { 705,8347f, 78,98534f, 1292,865f };
	vLocal_344 = { 725,5926f, 78,78246f, 1293,011f };
	iLocal_347 = 0;
	iLocal_348 = 0;
	iLocal_349 = 0;
	iLocal_1083 = 0;
	bLocal_1084 = false;
	iLocal_1085 = 0;
	iLocal_1104 = 0;
	bLocal_1106 = 4294967295;
	iLocal_1107 = 0;
	iLocal_1108 = 0;
	iLocal_354 = 0;
	Function_192("Initializing Blackwater", 3);
	SET_DUST_LEVEL(0);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_359 = 1000;
		switch (iLocal_354)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_354 = 1;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000001:
				if (Function_191())
				{
					Global_62981 = 0;
					if (Function_190())
					{
						if (Function_188())
						{
							iLocal_354 = 2;
						}
					}
					else
					{
						iLocal_354 = 2;
					}
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
				}
				bLocal_359 = false;
				break;
			
			case 0x00000002:
				if (Function_179())
				{
					Function_178(&(Global_29008[iScriptParam_0]), 32);
					iLocal_354 = 3;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000003:
				bLocal_360 = LAUNCH_NEW_SCRIPT_WITH_ARGS("BlackwaterVol", &iScriptParam_0, 2, 0);
				Function_177(&Global_7035, &Global_8279, iScriptParam_0);
				iLocal_354 = 5;
				bLocal_359 = false;
				break;
			
			case 0x00000005:
				if (Function_176(&Global_7035, &Global_8279, iScriptParam_0))
				{
					iLocal_354 = 4;
					bLocal_359 = false;
				}
				else
				{
					bLocal_359 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_175(&(Global_29008[iScriptParam_0]), 16) && Function_174(Global_29155[iScriptParam_010]))
				{
					iLocal_354 = 6;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000006:
				Function_173(11, &uLocal_361, 666,073f, 78,306f, 1396,688f);
				Function_172(11, &uLocal_361, 666,073f, 78,306f, 1396,688f);
				Function_171(11, &uLocal_361, 666,073f, 78,306f, 1396,688f);
				Function_170(11, &uLocal_361, 666,073f, 78,306f, 1396,688f);
				Function_169(11, &uLocal_361, 717,023f, 78,456f, 1327,226f);
				Function_168(11, &uLocal_361, 676.0f, 78,496f, 1400.0f);
				Function_167(11, &uLocal_361, vLocal_4.x);
				Function_173(12, &uLocal_361, 771,876f, 89,837f, 1449,349f);
				Function_172(12, &uLocal_361, 558,827f, 94,572f, 1196,699f);
				Function_171(12, &uLocal_361, 558,827f, 94,572f, 1196,699f);
				Function_170(12, &uLocal_361, 728,7109f, 78,47312f, 1289,681f);
				Function_169(12, &uLocal_361, 728,7109f, 78,47312f, 1289,681f);
				Function_168(12, &uLocal_361, 771,876f, 89,837f, 1449,349f);
				Function_167(12, &uLocal_361, vLocal_4.x);
				Function_173(13, &uLocal_361, 776,099f, 79,455f, 1236,048f);
				Function_172(13, &uLocal_361, 776,099f, 79,455f, 1236,048f);
				Function_171(13, &uLocal_361, 776,099f, 79,455f, 1236,048f);
				Function_170(13, &uLocal_361, 776,099f, 79,455f, 1236,048f);
				Function_169(13, &uLocal_361, 748,856f, 78,517f, 1265,403f);
				Function_168(13, &uLocal_361, 727,216f, 78,489f, 1347,611f);
				Function_167(13, &uLocal_361, vLocal_4.x);
				Function_173(14, &uLocal_361, 767,196f, 79,475f, 1235,251f);
				Function_172(14, &uLocal_361, 717,494f, 82,71f, 1343,308f);
				Function_171(14, &uLocal_361, 767,196f, 79,475f, 1235,251f);
				Function_170(14, &uLocal_361, 767,196f, 79,475f, 1235,251f);
				Function_169(14, &uLocal_361, 767,196f, 79,475f, 1235,251f);
				Function_168(14, &uLocal_361, 767,196f, 79,475f, 1235,251f);
				Function_167(14, &uLocal_361, vLocal_4.x);
				Function_173(15, &uLocal_361, 725,403f, 78,783f, 1293,407f);
				Function_172(15, &uLocal_361, 725,403f, 78,783f, 1293,407f);
				Function_171(15, &uLocal_361, 725,403f, 78,783f, 1293,407f);
				Function_170(15, &uLocal_361, 725,403f, 78,783f, 1293,407f);
				Function_169(15, &uLocal_361, 725,403f, 78,783f, 1293,407f);
				Function_168(15, &uLocal_361, 725,403f, 78,783f, 1293,407f);
				Function_167(15, &uLocal_361, vLocal_4.x);
				Function_173(16, &uLocal_361, 766,322f, 80,893f, 1346,26f);
				Function_172(16, &uLocal_361, 679,649f, 78,174f, 1292,084f);
				Function_171(16, &uLocal_361, 729,511f, 78,457f, 1329,42f);
				Function_170(16, &uLocal_361, 735,471f, 78,505f, 1244,32f);
				Function_169(16, &uLocal_361, 724,105f, 78,782f, 1293,247f);
				Function_168(16, &uLocal_361, 724,105f, 78,782f, 1293,247f);
				Function_167(16, &uLocal_361, vLocal_4.x);
				Function_173(17, &uLocal_361, 723,701f, 78,66f, 1363,942f);
				Function_172(17, &uLocal_361, 723,701f, 78,66f, 1363,942f);
				Function_171(17, &uLocal_361, 723,701f, 78,66f, 1363,942f);
				Function_170(17, &uLocal_361, 723,701f, 78,66f, 1363,942f);
				Function_169(17, &uLocal_361, 781,845f, 84,207f, 1414,036f);
				Function_168(17, &uLocal_361, 781,845f, 84,207f, 1414,036f);
				Function_167(17, &uLocal_361, vLocal_4.x);
				Function_173(18, &uLocal_361, 713,897f, 78,476f, 1314,553f);
				Function_166(18, &uLocal_361, Local_7.f_1156);
				Function_165(18, &uLocal_361, Local_7.f_1156);
				Function_164(18, &uLocal_361, Local_7.f_1156);
				Function_163(18, &uLocal_361, Local_7.f_1156);
				Function_162(18, &uLocal_361, Local_7.f_1156);
				Function_167(18, &uLocal_361, vLocal_4.x);
				Function_161(19, &uLocal_361, Local_7.f_1156);
				Function_172(19, &uLocal_361, 713,897f, 78,476f, 1314,553f);
				Function_171(19, &uLocal_361, 724,706f, 78,306f, 1316,992f);
				Function_170(19, &uLocal_361, 724,706f, 78,306f, 1316,992f);
				Function_169(19, &uLocal_361, 724,706f, 78,306f, 1316,992f);
				Function_168(19, &uLocal_361, 724,706f, 78,306f, 1316,992f);
				Function_167(19, &uLocal_361, vLocal_4.x);
				Function_173(20, &uLocal_361, 659,69f, 78,752f, 1314,367f);
				Function_172(20, &uLocal_361, 659,69f, 78,752f, 1314,367f);
				Function_171(20, &uLocal_361, 659,69f, 78,752f, 1314,367f);
				Function_170(20, &uLocal_361, 659,69f, 78,752f, 1314,367f);
				Function_169(20, &uLocal_361, 659,69f, 78,752f, 1314,367f);
				Function_168(20, &uLocal_361, 605,807f, 86,268f, 1270,324f);
				Function_167(20, &uLocal_361, vLocal_4.x);
				Function_173(21, &uLocal_361, 604,786f, 84,559f, 1377,316f);
				Function_172(21, &uLocal_361, 665,578f, 79,34f, 1333,494f);
				Function_171(21, &uLocal_361, 666,086f, 79,34f, 1324,473f);
				Function_170(21, &uLocal_361, 665,578f, 79,34f, 1333,494f);
				Function_169(21, &uLocal_361, 729,511f, 78,457f, 1329,42f);
				Function_168(21, &uLocal_361, 604,786f, 84,559f, 1377,316f);
				Function_167(21, &uLocal_361, vLocal_4.x);
				Function_173(22, &uLocal_361, 727,325f, 78,47f, 1369,675f);
				Function_172(22, &uLocal_361, 724,891f, 78,355f, 1377,013f);
				Function_171(22, &uLocal_361, 724,891f, 78,355f, 1377,013f);
				Function_170(22, &uLocal_361, 722,832f, 78,49f, 1312,672f);
				Function_169(22, &uLocal_361, 722,832f, 78,49f, 1312,672f);
				Function_168(22, &uLocal_361, 722,832f, 78,49f, 1312,672f);
				Function_167(22, &uLocal_361, vLocal_4.x);
				Function_173(23, &uLocal_361, 607,136f, 84,559f, 1375,898f);
				Function_172(23, &uLocal_361, 812,499f, 79,6f, 1250,564f);
				Function_171(23, &uLocal_361, 849,013f, 78,477f, 1241,664f);
				Function_170(23, &uLocal_361, 812,499f, 79,6f, 1250,564f);
				Function_169(23, &uLocal_361, 718,972f, 78,306f, 1325,719f);
				Function_168(23, &uLocal_361, 607,136f, 84,559f, 1375,898f);
				Function_167(23, &uLocal_361, vLocal_4.x);
				Function_173(24, &uLocal_361, 756,159f, 78,497f, 1265,147f);
				Function_172(24, &uLocal_361, 756,159f, 78,497f, 1265,147f);
				Function_171(24, &uLocal_361, 756,159f, 78,497f, 1265,147f);
				Function_170(24, &uLocal_361, 756,159f, 78,497f, 1265,147f);
				Function_169(24, &uLocal_361, 756,159f, 78,497f, 1265,147f);
				Function_168(24, &uLocal_361, 756,159f, 78,497f, 1265,147f);
				Function_167(24, &uLocal_361, vLocal_4.x);
				Function_173(25, &uLocal_361, 749,951f, 86,887f, 1271,678f);
				Function_172(25, &uLocal_361, 681,695f, 79,306f, 1235,091f);
				Function_171(25, &uLocal_361, 681,695f, 79,306f, 1235,091f);
				Function_170(25, &uLocal_361, 681,695f, 79,306f, 1235,091f);
				Function_169(25, &uLocal_361, 728,38f, 78,49f, 1289,45f);
				Function_168(25, &uLocal_361, 749,951f, 86,887f, 1271,678f);
				Function_167(25, &uLocal_361, vLocal_4.x);
				Function_173(26, &uLocal_361, 569,462f, 88,068f, 1251,456f);
				Function_172(26, &uLocal_361, 681,695f, 79,306f, 1232,574f);
				Function_171(26, &uLocal_361, 681,695f, 79,306f, 1232,574f);
				Function_170(26, &uLocal_361, 681,695f, 79,306f, 1232,574f);
				Function_169(26, &uLocal_361, 721,125f, 82,668f, 1325,278f);
				Function_168(26, &uLocal_361, 569,462f, 88,068f, 1251,456f);
				Function_167(26, &uLocal_361, vLocal_4.x);
				Function_173(27, &uLocal_361, 750,223f, 78,641f, 1322,44f);
				Function_172(27, &uLocal_361, 750,223f, 78,641f, 1322,44f);
				Function_171(27, &uLocal_361, 750,223f, 78,641f, 1322,44f);
				Function_170(27, &uLocal_361, 750,223f, 78,641f, 1322,44f);
				Function_169(27, &uLocal_361, 730,536f, 98,042f, 1496,604f);
				Function_168(27, &uLocal_361, 731,661f, 98,042f, 1498,598f);
				Function_167(27, &uLocal_361, vLocal_4.x);
				Function_173(31, &uLocal_361, 775,441f, 78,675f, 1318,186f);
				Function_172(31, &uLocal_361, 775,441f, 78,675f, 1318,186f);
				Function_171(31, &uLocal_361, 775,441f, 78,675f, 1318,186f);
				Function_170(31, &uLocal_361, 775,441f, 78,675f, 1318,186f);
				Function_169(31, &uLocal_361, 749,182f, 78,517f, 1268,638f);
				Function_168(31, &uLocal_361, 759,419f, 86,865f, 1268,816f);
				Function_167(31, &uLocal_361, vLocal_4.x);
				Function_173(32, &uLocal_361, 767,3827f, 78,62399f, 1294,895f);
				Function_172(32, &uLocal_361, 767,3827f, 78,62399f, 1294,895f);
				Function_171(32, &uLocal_361, 767,3827f, 78,62399f, 1294,895f);
				Function_169(32, &uLocal_361, 749,562f, 89,342f, 1440,807f);
				Function_170(32, &uLocal_361, 767,3827f, 78,62399f, 1294,895f);
				Function_168(32, &uLocal_361, 749,562f, 89,342f, 1440,807f);
				Function_167(32, &uLocal_361, vLocal_4.x);
				Function_173(33, &uLocal_361, 743,065f, 89,326f, 1441,419f);
				Function_172(33, &uLocal_361, 669,127f, 78,306f, 1394,085f);
				Function_171(33, &uLocal_361, 669,127f, 78,306f, 1394,085f);
				Function_170(33, &uLocal_361, 669,127f, 78,306f, 1394,085f);
				Function_169(33, &uLocal_361, 669,127f, 78,306f, 1394,085f);
				Function_168(33, &uLocal_361, 743,969f, 89,342f, 1441,273f);
				Function_167(33, &uLocal_361, vLocal_4.x);
				Function_173(34, &uLocal_361, 717,274f, 78,49f, 1311,335f);
				Function_172(34, &uLocal_361, 717,274f, 78,49f, 1311,335f);
				Function_171(34, &uLocal_361, 717,274f, 78,49f, 1311,335f);
				Function_170(34, &uLocal_361, 717,274f, 78,49f, 1311,335f);
				Function_169(34, &uLocal_361, 717,274f, 78,49f, 1311,335f);
				Function_168(34, &uLocal_361, 717,274f, 78,49f, 1311,335f);
				Function_167(34, &uLocal_361, vLocal_4.x);
				if (Global_25974[2])
				{
					Function_160(&(Global_7035[342]), 2);
				}
				else
				{
					Function_159(&(Global_7035[342]), 2);
				}
				Function_156(&Global_7035, &Global_8279, &uLocal_361, Global_6289, iScriptParam_0);
				if (Function_175(&(Global_29008[iScriptParam_0]), 256) || !Function_155(2))
				{
					iLocal_1082 = 1;
				}
				bLocal_355 = Function_154(Global_30717[0], "Blackwater", "doctorsOffice01", 2);
				if (IS_DOOR_VALID(bLocal_355))
				{
					Function_153(StackVal, bLocal_355);
				}
				bLocal_356 = Function_154(Global_30717[0], "Blackwater", "generalStore01", 2);
				if (IS_DOOR_VALID(bLocal_356))
				{
					Function_153(StackVal, bLocal_356);
				}
				bLocal_357 = Function_154(Global_30717[0], "Blackwater", "tailor01", 2);
				if (IS_DOOR_VALID(bLocal_357))
				{
					Function_153(StackVal, bLocal_357);
				}
				bLocal_358 = Function_154(Global_30717[0], "Blackwater", "ngunshop01", 2);
				if (IS_DOOR_VALID(bLocal_358))
				{
					Function_153(StackVal, bLocal_358);
				}
				Function_152(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_7 + 1192));
				Function_152(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_7 + 1212));
				Function_151(StackVal, FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_generalStore_set"));
				Function_150(StackVal, 1);
				Function_149(StackVal, 397);
				Function_151(StackVal, FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_doctor_set"));
				Function_150(StackVal, 3);
				Function_149(StackVal, 398);
				Function_151(StackVal, FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_gunShop_set"));
				Function_150(StackVal, 2);
				Function_149(StackVal, 399);
				Function_151(StackVal, FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_tailor_set"));
				Function_150(StackVal, 4);
				Function_149(StackVal, 520);
				Function_145(9, Local_7.f_1080, Local_7.f_908, Local_7.f_936, 0, 0, Local_7.f_964);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_players_room"));
				}
				else
				{
					LOG_ERROR("BLK: Cannot find blkv_players_room to restrict players room");
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_highStakesPoker_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_highStakesPoker_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_7, "blkv_highStakesPoker_room"));
				}
				else
				{
					LOG_ERROR("BLK: Cannot find blkv_highStakesPoker_room to restrict players room");
				}
				if (!Function_141(StackVal, 1, "$/content/Ambient/JobSystem/Job_nightwatch", 692,931f, 78,403f, 1371,9f, 341, iScriptParam_0, 48, -1.0f, 15, 0))
				{
				}
				Function_178(&(Global_29008[iScriptParam_0]), 8);
				if (Function_175(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_140(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_354 = 10;
				}
				else
				{
					iLocal_354 = 7;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000007:
				uVar0 = uVar0;
				Function_139(iScriptParam_0);
				Function_136(iScriptParam_0);
				Function_135(iScriptParam_0);
				Function_133(iScriptParam_0);
				Function_129(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 95.0f, 8, 70, 0);
				Function_128(StackVal, &Global_17483[975] + 120, 4, 1);
				Function_127(&Global_17483[975] + 120, 2, 5.0f, 1, 4294967295);
				Function_129(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 95.0f, 8, 70, 0);
				Function_128(StackVal, &Global_17483[875] + 120, 4, 1);
				Function_127(&Global_17483[875] + 120, 2, 5.0f, 1, 4294967295);
				Function_129(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 95.0f, 8, 70, 0);
				Function_128(StackVal, &Global_17483[1075] + 120, 4, 1);
				Function_127(&Global_17483[1075] + 120, 2, 5.0f, 1, 4294967295);
				Function_126(iScriptParam_0);
				Function_124(&Global_62527, 1, Global_30717[0], "$/content/North/Mini_Games/Poker_BLK_Social_Club/Poker_BLK_Social_Club", 4294967295, 0, "BLKSocialPoker", 433, 749,782f, 82,688f, 1267,456f, 2,5f, 0, 0);
				Function_123(&Global_62527, 1, 250);
				Function_124(&Global_62527, 0, Global_30717[0], "$/content/North/Mini_Games/Poker_BLK/Poker_BLK", 4294967295, 0, "BLKPoker", 433, 717,543f, 78,47099f, 1325,519f, 2,5f, 0, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_poker"));
				Function_123(&Global_62527, 0, 100);
				Function_124(&Global_62527, 2, Global_30717[0], "$/content/North/Mini_Games/BlackJack_BLK/BlackJack_BLK", 4294967295, 0, "BLKBlackJack", 349, 719,2f, 78,47099f, 1311,971f, 2,5f, 0, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_blackjack"));
				Function_123(&Global_62527, 2, 50);
				iLocal_354 = 8;
				bLocal_359 = false;
				break;
			
			case 0x00000008:
				if (Global_34165.f_44)
				{
					Function_119(StackVal, 5, 0.0f, 2, vLocal_4.x, 1);
				}
				else
				{
					Function_119(StackVal, 7, 0.0f, 1, vLocal_4.x, 1);
					Function_118(1);
				}
				Function_117(64);
				Function_113(0, 8, 4, 50, 5);
				Function_111(vLocal_4.x);
				Function_110(StackVal, 0);
				Function_110(StackVal, 0);
				Function_178(&(Global_29008[iScriptParam_0]), 512);
				bLocal_359 = false;
				iLocal_354 = 9;
				break;
			
			case 0x00000009:
				Function_108(vLocal_4.x, iScriptParam_0);
				Function_178(&(Global_29008[iScriptParam_0]), 4);
				Function_107("Finished Initializing Blackwater", 5.0f);
				bLocal_359 = false;
				iLocal_354 = 10;
				break;
			
			case 0x0000000A:
				if (iLocal_1108 > 2)
				{
					if (!IS_GRINGO_VALID(bLocal_1109))
					{
						vVar1 = { 736,841f, 89,623f, 1205,092f };
						bLocal_1109 = LOCATE_GRINGO_OF_TYPE("clock", &vVar1, 5.0f, 1);
					}
					else
					{
						GRINGO_STAY_ACTIVE(bLocal_1109, 5);
					}
					iLocal_1108 = 0;
				}
				iLocal_1108++;
				if (!Function_106(Global_62981, 1))
				{
					if (Function_104(&(Global_30717[0]), 0))
					{
						Function_103(&Global_62981, 1);
					}
				}
				if (!Function_106(Global_62981, 32))
				{
					if (Function_104(&(Global_30717[0]), 1))
					{
						Function_103(&Global_62981, 32);
					}
				}
				if (!Function_106(Global_62981, 2))
				{
					if (Function_101(&(Global_30717[0])))
					{
						Function_103(&Global_62981, 2);
					}
				}
				if (!Function_106(Global_62981, 64))
				{
					if (Function_99(&(Global_30717[0])))
					{
						Function_103(&Global_62981, 64);
					}
				}
				if (Function_190())
				{
					switch (iLocal_312)
					{
						case 0x00000000:
							DESTROY_OBJECT(Local_7.f_1200);
							iLocal_312 = 10;
							break;
						
						case 0x0000000A:
							break;
					}
				}
				else if (!Function_98(0, 0, 1, 1))
				{
					switch (iLocal_312)
					{
						case 0x00000000:
							if (!IS_ACTOR_VALID(bLocal_323))
							{
								bLocal_323 = Function_95(&Global_7035, &Global_8279, 15, 0, 0, 1);
								SET_ACTOR_UPDATE_PRIORITY(bLocal_323, true);
							}
							else
							{
								bLocal_330 = CREATE_VOLUME_IN_LAYOUT(vLocal_4.x, Function_94(), false, 725,5926f, 78,78246f, 1293,011f, 0.0f, 44,46211f, 0.0f, 2,5f, 4.0f, 2,5f);
								bLocal_329 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("payForMovie", bLocal_330, 25, 5, "", "", "", "", 4, 0);
								bLocal_328 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/ticket_taker_link", &vLocal_344, 1.0f, 0);
								iLocal_312 = 1;
							}
							break;
						
						case 0x00000001:
							if (!CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vLocal_344, 1065353216, 1117126656, 1, 1, 0))
							{
								SNAP_ACTOR_TO_GRINGO(bLocal_323, GET_OBJECT_FROM_GRINGO(bLocal_328), "UseCase1", true, 1, 1);
								TASK_USE_GRINGO(bLocal_323, bLocal_328, "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(bLocal_323, 2);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_323, true);
								iLocal_312 = 2;
							}
							break;
						
						case 0x00000002:
							if (IS_ACTOR_VALID(bLocal_323) && IS_VOLUME_VALID(bLocal_330))
							{
								if (IS_ACTOR_IN_VOLUME(bLocal_323, bLocal_330))
								{
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_329))
									{
										bLocal_331 = ADD_BLIP_FOR_COORD(&vLocal_344, 525, 1,25f, 1, 0);
										Function_87(StackVal, StackVal, Global_30717[0], 21, vLocal_344, 63);
										iLocal_312 = 3;
									}
								}
							}
							break;
						
						case 0x00000003:
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_329))
							{
								if (!IS_AI_ACTOR_UNALERTED(bLocal_323))
								{
									if (IS_BLIP_VALID(bLocal_331))
									{
										REMOVE_BLIP(bLocal_331);
									}
									if (IS_VOLUME_VALID(bLocal_330))
									{
										DESTROY_VOLUME(bLocal_330);
									}
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_329))
									{
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_329);
									}
									if (IS_ACTOR_VALID(bLocal_323))
									{
										Function_85(&Global_7035, &Global_8279, 15, 0);
									}
								}
								else if (IS_ACTOR_DEAD(bLocal_323))
								{
									if (IS_BLIP_VALID(bLocal_331))
									{
										REMOVE_BLIP(bLocal_331);
									}
									if (IS_VOLUME_VALID(bLocal_330))
									{
										DESTROY_VOLUME(bLocal_330);
									}
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_329))
									{
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_329);
									}
									if (IS_ACTOR_VALID(bLocal_323))
									{
										Function_85(&Global_7035, &Global_8279, 15, 0);
									}
								}
								else if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_329))
								{
									ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
									SET_PLAYER_CONTROL(0, 0, 0, 0);
									iLocal_312 = 4;
								}
							}
							else
							{
								if (IS_BLIP_VALID(bLocal_331))
								{
									REMOVE_BLIP(bLocal_331);
								}
								if (IS_VOLUME_VALID(bLocal_330))
								{
									DESTROY_VOLUME(bLocal_330);
								}
								if (IS_ACTOR_VALID(bLocal_323))
								{
									Function_85(&Global_7035, &Global_8279, 15, 0);
								}
								iLocal_312 = 0;
							}
							break;
						
						case 0x00000004:
							if (Function_84() > 2)
							{
								SAY_SINGLE_LINE_CONTEXT(Global_34573, 366, bLocal_323, 0, 0, 1, 4294967295, 4294967295, 0, 1);
								Function_81(2, 1);
								DESTROY_VOLUME(bLocal_330);
								bLocal_324[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &vLocal_335, 2.0f, 0);
								bLocal_324[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &vLocal_338, 2.0f, 0);
								bLocal_324[2] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/bench_chair", &vLocal_341, 2.0f, 0);
								iLocal_312 = 6;
							}
							else
							{
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_329);
								iLocal_312 = 5;
							}
							break;
						
						case 0x00000005:
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 365, bLocal_323, 0, 0, 1, 4294967295, 4294967295, 0, 1);
							Function_80("NO_LAUNCH_Player", 2,5f, 1, 0, 2, 1, 0);
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							bLocal_329 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("payForMovie", bLocal_330, 25, 5, "", "", "", "", 4, 0);
							iLocal_312 = 2;
							break;
						
						case 0x00000006:
							Function_79(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
							if (HUD_IS_FADED() && !HUD_IS_FADING())
							{
								Function_77(0, 0);
								iLocal_312 = 7;
							}
							break;
						
						case 0x00000007:
							if (Function_76(Global_30750[1], 0, 4294967295, 0) && !iLocal_349)
							{
								iVar4 = 0;
								while (iVar4 <= 3)
								{
									uLocal_313[iVar4] = Function_67(Global_30750[1], 1, 0, 0);
									bLocal_318[iVar4] = CREATE_ACTOR_IN_LAYOUT(vLocal_4.x, Function_94(), uLocal_313[iVar4], vLocal_332, 0.0f, 0.0f, 0.0f);
									vLocal_332.x = (vLocal_332.x + 0,2f);
									SNAP_ACTOR_TO_GRINGO(bLocal_318[iVar4], GET_OBJECT_FROM_GRINGO(bLocal_324[iVar4]), "UseCase1", true, 1, 1);
									TASK_USE_GRINGO(bLocal_318[iVar4], bLocal_324[iVar4], "UseCase1", 4294967295, 1);
									iLocal_348 = 1;
									iLocal_349 = 1;
									iVar4++;
								}
							}
							else if (iLocal_348)
							{
								Function_63(0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1);
								Function_62(vLocal_4.x, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
								Function_60(715,155f, 83,403f, 1284,271f, -0,94f, -0,061f, 0,334f, 0x40a00000, 0, 1);
								REMOVE_BLIP(bLocal_331);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 1);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 1);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 1);
								if (HUD_IS_FADED() && !HUD_IS_FADING())
								{
									SNAP_ACTOR_TO_GRINGO(Global_34573, Local_7.f_1200, "UseCase1", true, 1, 1);
									TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(Local_7.f_1200), "UseCase1", 4294967295, 1);
									Function_59();
									iLocal_312 = 8;
									UI_PUSH("Movies");
								}
							}
							break;
						
						case 0x00000008:
							Function_58(4.0f);
							Global_63096 = 1;
							iLocal_312 = 9;
							break;
						
						case 0x00000009:
							Function_55(&iLocal_350);
							iLocal_312 = 10;
							break;
						
						case 0x0000000A:
							if (Function_52(&iLocal_350) < 2.0f)
							{
								iLocal_312 = 11;
							}
							break;
						
						case 0x0000000B:
							iLocal_353 = Function_47(0, Global_30717[0], 3);
							if ((Function_46(iLocal_353) % 2) == 0)
							{
								UNK_0x7614AEBA("game:/blk00.bik", 1);
							}
							else
							{
								UNK_0x7614AEBA("game:/arm00.bik", 1);
							}
							Function_45(iLocal_353, Function_46(iLocal_353) + 1);
							iLocal_312 = 12;
							break;
						
						case 0x0000000C:
							bLocal_359 = false;
							if (UNK_0xD036DF91())
							{
								UI_EXIT("MoviesPromptsZoomed");
								UI_ENTER("MoviesPrompts");
								iLocal_312 = 13;
							}
							break;
						
						case 0x0000000D:
							bLocal_359 = false;
							if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 5, 1, 0) || !UNK_0xD036DF91())
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
								Function_79(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
								UNK_0x69FC319E();
								Function_55(&iLocal_350);
								iLocal_312 = 16;
							}
							else if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 0, 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								Function_60(709,598f, 82,967f, 1286,472f, -0,932f, -0,034f, 0,36f, 0x40a00000, 0, 1);
								iLocal_312 = 14;
							}
							break;
						
						case 0x0000000E:
							bLocal_359 = false;
							UI_EXIT("MoviesPrompts");
							UI_ENTER("MoviesPromptsZoomed");
							iLocal_312 = 15;
							break;
						
						case 0x0000000F:
							bLocal_359 = false;
							if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 0, 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								Function_60(715,155f, 83,403f, 1284,271f, -0,94f, -0,061f, 0,334f, 0x40a00000, 0, 1);
								iLocal_312 = 12;
							}
							else if (IS_BUTTON_RELEASED(GET_PLAYER_PADINDEX(Global_34573), 5, 1, 0) || !UNK_0xD036DF91())
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
								Function_79(0.0f, 0.0f, 0.0f, 2.0f, 1.0f, 1);
								UNK_0x69FC319E();
								Function_55(&iLocal_350);
								iLocal_312 = 16;
							}
							else if (!iLocal_347)
							{
								Function_63(0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1);
								Function_62(vLocal_4.x, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
								Function_60(709,598f, 82,967f, 1286,472f, -0,932f, -0,034f, 0,36f, 0x40a00000, 0, 1);
								iLocal_347 = 1;
								UI_PUSH("Movies");
							}
							break;
						
						case 0x00000010:
							if (Function_52(&iLocal_350) < 3.0f)
							{
								iVar4 = 0;
								while (iVar4 <= 3)
								{
									DESTROY_ACTOR(bLocal_318[iVar4]);
									iVar4++;
								}
								Function_44(0, 1);
								Function_27(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
								TASK_CLEAR(Global_34573);
								Function_85(&Global_7035, &Global_8279, 15, 0);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 0);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 0);
								ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 0);
								ACTOR_END_FORCE_HOLSTER(Global_34573);
								MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
								TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_7 + 968), 1, true, 1);
								iLocal_348 = 0;
								iLocal_349 = 0;
								Global_63096 = 0;
								HUD_FADE_IN(1.0f, 1065353216);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								UI_EXIT("MoviesPromptsZoomed");
								UI_ENTER("MoviesPrompts");
								iLocal_312 = 0;
								UI_POP("Movies");
							}
							break;
					}
				}
				else if (((IS_BLIP_VALID(bLocal_331) && IS_VOLUME_VALID(bLocal_330)) && IS_SCRIPT_USE_CONTEXT_VALID(bLocal_329)) && IS_ACTOR_VALID(bLocal_323))
				{
					REMOVE_BLIP(bLocal_331);
					DESTROY_VOLUME(bLocal_330);
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_329);
					Function_85(&Global_7035, &Global_8279, 15, 0);
					iLocal_312 = 0;
				}
				if (iLocal_312 <= 4)
				{
					if (bLocal_1106 < 0 && iLocal_1107 >= 0)
					{
						PLAY_SOUND_FROM_POSITION("BELL_SML_IMP_HVY_MASTER", 564,917f, 104,326f, 1184,424f);
						iLocal_1107 = RAND_INT_RANGE(50, 65);
						bLocal_1106 = (bLocal_1106 - 1);
						bLocal_359 = false;
					}
					else if (bLocal_1106 < 0)
					{
						bLocal_1106 = 4294967295;
						bVar5 = GET_TIME_OF_DAY();
						if (GET_MINUTE(bVar5) != 0 && !iLocal_1104)
						{
							iVar6 = GET_HOUR(bVar5);
							if (iVar6 <= 7 && iVar6 >= 18)
							{
								if (iVar6 >= 12)
								{
									iVar6 = (iVar6 - 12);
								}
								bLocal_1106 = iVar6;
								PRINTSTRING("Here's how many times we're supposed to ring: ");
								PRINTINT(bLocal_1106);
								PRINTNL();
								iLocal_1107 = 0;
								bLocal_359 = false;
								iLocal_1104 = 1;
							}
						}
						else
						{
							bLocal_359 = 1000;
							if (GET_MINUTE(bVar5) != 0)
							{
								iLocal_1104 = 0;
							}
						}
					}
					else
					{
						bLocal_359 = false;
					}
					iLocal_1107 = (iLocal_1107 - 1);
				}
				if (Global_28178 == 1)
				{
					Function_25(Function_26("blackwater", "hotel01", 50), 0);
					Function_25(Function_26("blackwater", "hotel01", 51), 0);
				}
				else
				{
					Function_24(Function_26("blackwater", "hotel01", 50), 0);
					Function_24(Function_26("blackwater", "hotel01", 51), 0);
				}
				if (!Function_190())
				{
					if ((Global_63399 != 2 || Global_63399 != 4) || Global_63399 != 8)
					{
						if (!iLocal_1083)
						{
							iLocal_1083 = 1;
							iLocal_1105 = 0;
							while (iLocal_1105 <= 17)
							{
								if (!iLocal_1086[iLocal_1105])
								{
									switch (iLocal_1105)
									{
										case 0x00000000:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_theatre_night_set")))
											{
												ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
												ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
												DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x00000001:
											if (!Function_18(43))
											{
												ENABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
												ENABLE_CHILD_SECTOR("blk_bank_int_01x");
												DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											break;
										
										case 0x00000002:
											ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000004:
											ENABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000005:
											ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_church_int_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000006:
											ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
											DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000007:
											ENABLE_CHILD_SECTOR("blk_forgeMill01_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_forgeMill_int_01x");
											DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000008:
											ENABLE_CHILD_SECTOR("blk_sawMill_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_sawMill_int_01x");
											DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000009:
											ENABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_freightstation_int_01x");
											DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x0000000A:
											ENABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
											ENABLE_CHILD_SECTOR("blk_generalStore_int_01x");
											DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x0000000C:
											ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_tailor_int_01x");
											DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x0000000E:
											ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_gunshop_int_01x");
											DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										}
								}
								iLocal_1105++;
							}
							if (iLocal_1083)
							{
								iLocal_1105 = 0;
								while (iLocal_1105 <= 17)
								{
									iLocal_1086[iLocal_1105] = 0;
									iLocal_1105++;
								}
								bLocal_1084 = false;
							}
						}
					}
					else if ((Global_63399 != 16 || Global_63399 != 32) || Global_63399 != 1)
					{
						if (!bLocal_1084)
						{
							bLocal_1084 = true;
							iLocal_1105 = 0;
							while (iLocal_1105 <= 17)
							{
								if (!iLocal_1086[iLocal_1105])
								{
									switch (iLocal_1105)
									{
										case 0x00000000:
											ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
											DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000001:
											if (!Function_18(43))
											{
												if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_bank_set")))
												{
													DISABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
													DISABLE_CHILD_SECTOR("blk_bank_int_01x");
													ENABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
													iLocal_1086[iLocal_1105] = 1;
												}
												else
												{
													iLocal_1083 = 0;
												}
											}
											break;
										
										case 0x00000002:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_CityHall_set")))
											{
												ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x00000004:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_blacksmith_set")))
											{
												ENABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x00000005:
											ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_church_int_01x");
											break;
										
										case 0x00000006:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_doctor_set")))
											{
												DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
												DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
												ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x00000007:
											ENABLE_CHILD_SECTOR("blk_forgeMill01_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_forgeMill_int_01x");
											DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000008:
											ENABLE_CHILD_SECTOR("blk_sawMill_int_Props01x");
											ENABLE_CHILD_SECTOR("blk_sawMill_int_01x");
											DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
											iLocal_1086[iLocal_1105] = 1;
											break;
										
										case 0x00000009:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_freightStation_set")))
											{
												DISABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
												DISABLE_CHILD_SECTOR("blk_freightstation_int_01x");
												ENABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x0000000A:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_generalStore_set")))
											{
												DISABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
												DISABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
												DISABLE_CHILD_SECTOR("blk_generalStore_int_01x");
												ENABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x0000000C:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_tailor_set")))
											{
												DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
												DISABLE_CHILD_SECTOR("blk_tailor_int_01x");
												ENABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										
										case 0x0000000E:
											if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(vLocal_4.x, "blkv_gunShop_set")))
											{
												DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
												DISABLE_CHILD_SECTOR("blk_gunshop_int_01x");
												ENABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
												iLocal_1086[iLocal_1105] = 1;
											}
											else
											{
												iLocal_1083 = 0;
											}
											break;
										}
								}
								iLocal_1105++;
							}
							if (bLocal_1084)
							{
								iLocal_1105 = 0;
								while (iLocal_1105 <= 17)
								{
									iLocal_1086[iLocal_1105] = 0;
									iLocal_1105++;
								}
								iLocal_1083 = 0;
							}
						}
					}
				}
				else if (Function_190())
				{
					if (!iLocal_1085)
					{
						ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
						ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
						DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
						ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
						ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
						ENABLE_CHILD_SECTOR("blk_church_int_01x");
						iLocal_1085 = 1;
					}
				}
				if (Function_175(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_354 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_359);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	if (IS_ACTOR_VALID(bLocal_323))
	{
		Function_85(&Global_7035, &Global_8279, 15, 0);
	}
	if (IS_BLIP_VALID(bLocal_331))
	{
		REMOVE_BLIP(bLocal_331);
	}
	Function_12(&Global_7035, &Global_8279, iScriptParam_0, (iLocal_1082 || Global_3380));
	Function_11();
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_140(&(Global_29008[iScriptParam_0]), 32);
	Function_140(&(Global_29008[iScriptParam_0]), 64);
	Function_140(&(Global_29008[iScriptParam_0]), 8);
	Function_140(&(Global_29008[iScriptParam_0]), 512);
	Function_140(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_360))
	{
		TERMINATE_SCRIPT(bLocal_360);
	}
	Function_107("Unloaded Blackwater", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x3228 / 12840
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

void Function_2(int iParam0) //Position: 0x325E / 12894
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x3280 / 12928
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x3296 / 12950
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x32AC / 12972
{
	Function_6(&Local_7 + 4);
	RELEASE_LAYOUT_REF(Local_7);
	return;
}

void Function_6(int iParam0) //Position: 0x32BE / 12990
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

void Function_7(var uParam0, int iParam1) //Position: 0x32E4 / 13028
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

void Function_8(var uParam0, int iParam1) //Position: 0x3412 / 13330
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x342C / 13356
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x3449 / 13385
{
	RELEASE_LAYOUT_REF(vLocal_4.x);
	return;
}

void Function_11() //Position: 0x3454 / 13396
{
	Global_28842.f_44 = 4294967295;
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3460 / 13408
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_190())
	{
		return;
	}
	if (Function_175(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(iParam2), 12));
		Function_140(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_16(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_16(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_159(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_159(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_175(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_155(2) || Function_175(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2) && !Function_16(uParam0[iVar02], 4))
		{
			Function_13(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_16(uParam0[iVar02], 2) && !Function_16(uParam0[iVar02], 4))
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
			Function_178(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x364B / 13899
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_160(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
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
		Function_160(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0x379A / 14234
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

int Function_15(int iParam0) //Position: 0x37C5 / 14277
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

bool Function_16(var uParam0, int iParam1) //Position: 0x37F9 / 14329
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_17(int iParam0) //Position: 0x3815 / 14357
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

bool Function_18(int iParam0) //Position: 0x3CC3 / 15555
{
	int iVar0;
	
	if (!Function_23(iParam0))
	{
		return 0;
	}
	iVar0 = Function_22(iParam0);
	if (!Function_19(Function_22(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_19(int iParam0) //Position: 0x3CF9 / 15609
{
	if (!Function_21(iParam0))
	{
		return 0;
	}
	if (!Function_20(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_20(int iParam0) //Position: 0x3D1D / 15645
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x3D32 / 15666
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_22(int iParam0) //Position: 0x3D49 / 15689
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_23(int iParam0) //Position: 0x3D63 / 15715
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_24(bool bParam0, bool bParam1) //Position: 0x3D79 / 15737
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

void Function_25(bool bParam0, bool bParam1) //Position: 0x3DCD / 15821
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

bool Function_26(var uParam0, char* cParam1, bool bParam2) //Position: 0x3E1E / 15902
{
	return Function_154(Global_29006, uParam0, cParam1, bParam2);
}

void Function_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x3E30 / 15920
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
		bVar0 = Function_43();
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
			if (Function_190())
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
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_29(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_59();
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
	Function_28(uParam9);
}

void Function_28(bool bParam0) //Position: 0x3F20 / 16160
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
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

int Function_29(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3FC5 / 16325
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
	Function_42(iParam0, TO_FLOAT(bParam1), 1);
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_30(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_30(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x420F / 16911
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_40(390))), 32);
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
					bVar19 = (Function_39(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_39(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_37(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_34(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_31(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_94(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_31(int iParam0) //Position: 0x483C / 18492
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_32(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x484D / 18509
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_33(char* cParam0, char* cParam1) //Position: 0x4942 / 18754
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_34(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x495B / 18779
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_36(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_35(Function_36(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_35(int iParam0, int iParam1) //Position: 0x49C0 / 18880
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_36(int iParam0, bool bParam1) //Position: 0x49D2 / 18898
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_37(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x49E4 / 18916
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
	if (((Function_38(iParam0) != 19 || Function_38(iParam0) != 17) || Function_38(iParam0) != 10) || Function_38(iParam0) != 9)
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

int Function_38(int iParam0) //Position: 0x4B14 / 19220
{
	return Global_35278[iParam020].f_48;
}

float Function_39(int iParam0) //Position: 0x4B23 / 19235
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_40(int iParam0) //Position: 0x4B5C / 19292
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_41(int iParam0) //Position: 0x4B99 / 19353
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

int Function_42(int iParam0, float fParam1, bool bParam2) //Position: 0x4D33 / 19763
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
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

var Function_43() //Position: 0x4F4D / 20301
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x4F62 / 20322
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

void Function_45(int iParam0, int iParam1) //Position: 0x4FAE / 20398
{
	if (!Function_19(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_8 = iParam1;
	return;
}

int Function_46(int iParam0) //Position: 0x4FC9 / 20425
{
	if (!Function_19(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_47(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4FE3 / 20451
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_51(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_48(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_48(bParam0, bParam1, bParam2, 4294967295);
}

int Function_48(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5041 / 20545
{
	var uVar0;
	
	if (!Function_50(bParam2))
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
	uVar0 = Function_51(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_49(uVar0);
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

int Function_49(int iParam0) //Position: 0x5196 / 20886
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

bool Function_50(int iParam0) //Position: 0x51D4 / 20948
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_51(int iParam0, int iParam1, int iParam2) //Position: 0x51E9 / 20969
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

float Function_52(int iParam0) //Position: 0x5209 / 21001
{
	if (Function_54(iParam0))
	{
		if (Function_53(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_53(int iParam0) //Position: 0x52D1 / 21201
{
	return Function_106(*iParam0, 2);
}

bool Function_54(int iParam0) //Position: 0x52DE / 21214
{
	return Function_106(*iParam0, 1);
}

void Function_55(int iParam0) //Position: 0x52EB / 21227
{
	Function_56(iParam0, 0.0f);
	return;
}

void Function_56(var uParam0, float fParam1) //Position: 0x52F7 / 21239
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_103(uParam0, 1);
	Function_57(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x5318 / 21272
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_58(bool bParam0) //Position: 0x532B / 21291
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

void Function_59() //Position: 0x5348 / 21320
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_60(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, int iParam8) //Position: 0x535D / 21341
{
	Function_61(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam6 >= 0.0f)
	{
		fParam6 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam0);
}

void Function_61(float fParam0) //Position: 0x544C / 21580
{
	REMOVE_OBJECT_FROM_ATTACHMENT(fParam0);
	RESET_CAMERASHOT_TARGET(fParam0, 0);
	return;
}

void Function_62(bool bParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x545D / 21597
{
	Function_44(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_94(), 2, 1);
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

void Function_63(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x5536 / 21814
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
	HUD_ENABLE(false);
	Function_59();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_43();
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
			if (Function_190())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
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
				Function_66(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_94(), 2, Function_66(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_29(19, 1, 0, 0);
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
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_65()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_65()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
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
	if (Function_155(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_64(0x4000000);
	}
	if (Function_155(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_64(0x8000000);
	}
}

void Function_64(int iParam0) //Position: 0x57DF / 22495
{
	int iVar0;
	
	if (Function_106(iParam0, 1) && Function_106(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_65() //Position: 0x5813 / 22547
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
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
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

vector3 Function_66(bool bParam0) //Position: 0x5892 / 22674
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_67(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x58A3 / 22691
{
	return Function_68(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x58B7 / 22711
{
	return Function_69(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_69(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x58D0 / 22736
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_75();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_74(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_73(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_73(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_72(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_74(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_72(bVar0))
				{
					Function_71();
				}
				Function_70(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_74(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_70(int iParam0) //Position: 0x5BC3 / 23491
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

void Function_71() //Position: 0x5C77 / 23671
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

bool Function_72(bool bParam0) //Position: 0x5CB1 / 23729
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_73(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5CDE / 23774
{
	bool bVar0;
	
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
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
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

bool Function_74(bool bParam0) //Position: 0x5E2F / 24111
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_75() //Position: 0x5E46 / 24134
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_71();
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
	Function_71();
	return;
}

int Function_76(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5E91 / 24209
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_77(int iParam0, int iParam1) //Position: 0x5EB8 / 24248
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
			Function_78(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_78(bool bParam0) //Position: 0x5F3A / 24378
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

void Function_79(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x5F88 / 24456
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

void Function_80(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5FB1 / 24497
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

int Function_81(int iParam0, bool bParam1) //Position: 0x5FFC / 24572
{
	bool bVar0;
	
	bVar0 = Function_83(0);
	if ((Function_83(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_82(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_83(0));
	return 1;
}

int Function_82(int iParam0, bool bParam1, int iParam2) //Position: 0x608C / 24716
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
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_30(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_83(bool bParam0) //Position: 0x6287 / 25223
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

int Function_84() //Position: 0x62C8 / 25288
{
	return Function_83(0);
}

void Function_85(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x62D2 / 25298
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
		Function_159(uParam0[iVar02], 8);
	}
	Function_159(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_86(StackVal);
	if (bParam3)
	{
		Function_13(uParam0, uParam1, iParam2, 0);
	}
}

int Function_86(bool bParam0) //Position: 0x636C / 25452
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

int Function_87(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x6406 / 25606
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
	if (Function_93(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_92(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_91(StackVal, StackVal, vParam2);
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
		Function_90(uVar3);
		vVar7 = { StackVal, StackVal, Function_90(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_90(StackVal);
				vVar4 = { StackVal, StackVal, Function_90(StackVal) };
				if (Function_89(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_88(iParam1), 0.0f, 2, iVar2);
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

int Function_88(bool bParam0) //Position: 0x65E9 / 26089
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

bool Function_89(vector3 vParam0, vector3 vParam3) //Position: 0x6720 / 26400
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_90(int iParam0) //Position: 0x674D / 26445
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

var Function_91(vector3 vParam0) //Position: 0x67A4 / 26532
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

int Function_92(int iParam0) //Position: 0x67F2 / 26610
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

bool Function_93(vector3 vParam0) //Position: 0x68AA / 26794
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_94() //Position: 0x68C2 / 26818
{
	bool bVar0;
	
	return bVar0;
}

bool Function_95(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x68CA / 26826
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
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_160(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_97(StackVal, StackVal, StackVal, Global_6289, Function_94(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_16(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_160(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_160(uParam0[iVar02], 1);
	Function_96(StackVal, 1);
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

int Function_96(bool bParam0, bool bParam1) //Position: 0x6A60 / 27232
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
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

var Function_97(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x6B02 / 27394
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

bool Function_98(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6C1B / 27675
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

bool Function_99(int iParam0) //Position: 0x6CBF / 27839
{
	bool bVar0;
	
	Function_100(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_100(*iParam0), 1.0f, "p_gen_organstool01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make piano stool fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_100(int iParam0) //Position: 0x6D3E / 27966
{
	if (iParam0 == Global_30668[1])
	{
		return 154,443f, 73,832f, 2245,542f;
	}
	if (iParam0 == Global_30640[0])
	{
		return -2170,534f, 16,879f, 2589,138f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 721,884f, 78,476f, 1311,799f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_101(int iParam0) //Position: 0x6DC0 / 28096
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_102(*iParam0, iVar1);
		bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_102(*iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
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

vector3 Function_102(int iParam0, int iParam1) //Position: 0x6E52 / 28242
{
	if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
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
		switch (iParam1)
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
		switch (iParam1)
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
		switch (iParam1)
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

void Function_103(var uParam0, int iParam1) //Position: 0x6FFA / 28666
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_104(float fParam0, bool bParam1) //Position: 0x7009 / 28681
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_105(*fParam0, iVar1, bParam1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_105(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_105(*fParam0, iVar1, 0);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_105(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
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

vector3 Function_105(int iParam0, int iParam1, bool bParam2) //Position: 0x70CC / 28876
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

bool Function_106(var uParam0, int iParam1) //Position: 0x7646 / 30278
{
	return (uParam0 && iParam1) == 0;
}

void Function_107(bool bParam0, float fParam1) //Position: 0x7653 / 30291
{
	if (!Function_155(128))
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

void Function_108(bool bParam0, bool bParam1) //Position: 0x7691 / 30353
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
		Function_109(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_190())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_109(var uParam0, int iParam1) //Position: 0x778B / 30603
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_110(bool bParam0, bool bParam1) //Position: 0x7798 / 30616
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

void Function_111(bool bParam0) //Position: 0x7811 / 30737
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_94(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_112(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_112(int iParam0) //Position: 0x78FC / 30972
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_113(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x7919 / 31001
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
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_114();
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

void Function_114() //Position: 0x79FD / 31229
{
	int iVar0;
	
	Global_26960 = Function_115(StackVal);
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

int Function_115(int iParam0) //Position: 0x7A4B / 31307
{
	if (!Function_116(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_116(int iParam0) //Position: 0x7A63 / 31331
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_117(int iParam0) //Position: 0x7A78 / 31352
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_118(bool bParam0) //Position: 0x7A8B / 31371
{
	if (bParam0 <= 0)
	{
		return;
	}
	if (bParam0 >= 10)
	{
		bParam0 = 3;
	}
	Global_28842.f_44 = bParam0;
	return;
}

void Function_119(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7AA9 / 31401
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
		Function_122();
	}
	if (bParam5)
	{
		Function_120(1048576);
	}
}

void Function_120(int iParam0) //Position: 0x7BBC / 31676
{
	Function_121(&Global_28842, iParam0);
	return;
}

void Function_121(var uParam0, var uParam1) //Position: 0x7BCA / 31690
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_122() //Position: 0x7BE5 / 31717
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_120(16384);
	}
	return;
}

void Function_123(var uParam0, int iParam1, float fParam2) //Position: 0x7C01 / 31745
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_124(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, bool bParam13) //Position: 0x7C25 / 31781
{
	if (Function_190() && !bParam12)
	{
		return;
	}
	if (!Function_190() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[bParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[bParam1]);
	}
	uParam0[bParam140]->f_4 = Function_47(bParam2, bParam1, 4);
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
	uParam0[bParam140]->f_48 = bParam13;
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
	if (Global_25974[bParam1] && Function_125(bParam1))
	{
		Function_87(StackVal, StackVal, bParam2, (1 + bParam1), vParam8, 63);
	}
	uParam0[bParam140]->f_140 = 1;
	uParam0[bParam140]->f_128 |= 8192;
}

int Function_125(int iParam0) //Position: 0x7D71 / 32113
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

void Function_126(int iParam0) //Position: 0x7D94 / 32148
{
	Function_129(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_127(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x7DE6 / 32230
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_128(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x7E0C / 32268
{
	iParam0->f_128 = uParam1;
	(iParam0 + 128)->f_4 = iParam2;
	(iParam0 + 128)->f_8 = iParam3;
}

void Function_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x7E2A / 32298
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_130(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_130(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x7E6C / 32364
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
					bVar2 = Function_132(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_131(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_132(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_131(int iParam0, int iParam1) //Position: 0x81FE / 33278
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_132(int iParam0) //Position: 0x821F / 33311
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_133(int iParam0) //Position: 0x8235 / 33333
{
	Function_129(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_134(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_134(int iParam0, var uParam1, int iParam2) //Position: 0x829C / 33436
{
	iParam0->f_120 = uParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_135(int iParam0) //Position: 0x82B0 / 33456
{
	Function_129(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_136(int iParam0) //Position: 0x82F9 / 33529
{
	if (!Function_138())
	{
		Function_129(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_127(&Global_17483[3975] + 120, 1, 4,5f, 64, 4294967295);
		Function_137(&Global_17483[3975] + 120, -4,5f, 2);
	}
	return;
}

void Function_137(int iParam0, float fParam1, int iParam2) //Position: 0x837A / 33658
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

bool Function_138() //Position: 0x8390 / 33680
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

void Function_139(int iParam0) //Position: 0x83B5 / 33717
{
	Function_129(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_127(&Global_17483[4075] + 120, 1, 4,5f, 64, 4294967295);
	Function_137(&Global_17483[4075] + 120, -4,5f, 2);
	return;
}

void Function_140(var uParam0, bool bParam1) //Position: 0x8430 / 33840
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_141(int iParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x8447 / 33863
{
	var uVar0;
	
	Global_62484[iParam014].f_8 = GET_ASSET_ID(bParam1, 4);
	Global_62484[iParam014].f_12 = iParam0;
	Global_62484[iParam014].f_28 = uParam5;
	Global_62484[iParam014].f_24 = uParam7;
	Global_62484[iParam014].f_52 = uParam8;
	Global_62484[iParam014].f_16 = uParam9;
	Global_62484[iParam014].f_20 = uParam10;
	*(&Global_62484[iParam014] + 36) = { StackVal, StackVal, vParam2 };
	Global_62484[iParam014].f_48 = uParam6;
	uVar0 = Function_47(uParam7, iParam0, 6);
	if (Function_144(uVar0) == 0)
	{
		Function_143(uVar0, MAKE_TIME_OF_DAY_EX(true, false, 0, 0));
	}
	uParam11 = uParam11;
	Function_142(&(Global_62484[iParam014]), 24);
	return 1;
}

void Function_142(var uParam0, int iParam1) //Position: 0x84EA / 34026
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_143(int iParam0, int iParam1) //Position: 0x84F9 / 34041
{
	if (!Function_19(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_36 = iParam1;
	return;
}

int Function_144(int iParam0) //Position: 0x8514 / 34068
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_145(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x852E / 34094
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_148(bParam1, bParam2);
	if (!Function_147(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_25(bParam4, 0);
		}
		else
		{
			Function_24(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_25(bParam5, 0);
		}
		else
		{
			Function_24(bParam5, 1);
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
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_146(bVar3[0], "UseCase1"));
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
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_146(bVar3[1], "UseCase1"));
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

var Function_146(bool bParam0, bool bParam1) //Position: 0x88C1 / 35009
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

bool Function_147(int iParam0) //Position: 0x88CE / 35022
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_148(bool bParam0, bool bParam1) //Position: 0x88E4 / 35044
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

int Function_149(bool bParam0, int iParam1) //Position: 0x8A3E / 35390
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

int Function_150(bool bParam0, int iParam1) //Position: 0x8B2D / 35629
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

int Function_151(bool bParam0, bool bParam1) //Position: 0x8C0C / 35852
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

void Function_152(var uParam0, bool bParam1) //Position: 0x8D41 / 36161
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

void Function_153(bool bParam0, bool bParam1) //Position: 0x8D89 / 36233
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(bParam0, "owner", bParam1);
	return;
}

int Function_154(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x8DA9 / 36265
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

bool Function_155(int iParam0) //Position: 0x8E45 / 36421
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_156(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x8E61 / 36449
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_155(2))
	{
		return;
	}
	if (Function_175(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2))
		{
			if (Function_157(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_140(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_178(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x8F13 / 36627
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_175(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(uParam0, 2))
	{
		return 1;
	}
	if (Function_16(uParam0, 4))
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
		uParam1->f_8 = Function_97(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_93(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_159(uParam0, 4);
	}
	Function_158(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_158(bool bParam0, int iParam1) //Position: 0x907E / 36990
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_93(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_93(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_93(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_93(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_93(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_93(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_159(var uParam0, int iParam1) //Position: 0x91BA / 37306
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_160(var uParam0, int iParam1) //Position: 0x91D1 / 37329
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_161(var uParam0, var uParam1, bool bParam2) //Position: 0x91E0 / 37344
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020]);
	PRINTVECTOR(*uParam1[bVar020]);
	PRINTNL();
	return;
}

void Function_162(var uParam0, var uParam1, bool bParam2) //Position: 0x924F / 37455
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 60);
	return;
}

void Function_163(var uParam0, var uParam1, bool bParam2) //Position: 0x92B3 / 37555
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 48);
	return;
}

void Function_164(var uParam0, var uParam1, bool bParam2) //Position: 0x9319 / 37657
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

void Function_165(var uParam0, var uParam1, bool bParam2) //Position: 0x9381 / 37761
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

void Function_166(var uParam0, var uParam1, bool bParam2) //Position: 0x93E4 / 37860
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

void Function_167(int iParam0, var uParam1, bool bParam2) //Position: 0x944A / 37962
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

void Function_168(int iParam0, var uParam1, vector3 vParam2) //Position: 0x94A5 / 38053
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_89(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_169(int iParam0, var uParam1, vector3 vParam2) //Position: 0x950B / 38155
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_89(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_170(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9573 / 38259
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_89(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_171(int iParam0, var uParam1, vector3 vParam2) //Position: 0x95DD / 38365
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_89(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_172(int iParam0, var uParam1, vector3 vParam2) //Position: 0x9642 / 38466
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_89(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_173(int iParam0, var uParam1, vector3 vParam2) //Position: 0x96AA / 38570
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_89(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_174(int iParam0) //Position: 0x970D / 38669
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_175(&(Global_29008[iParam0]), 4);
}

bool Function_175(var uParam0, int iParam1) //Position: 0x9729 / 38697
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_176(var uParam0, var uParam1, int iParam2) //Position: 0x9745 / 38725
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_190())
	{
		return 1;
	}
	if (Function_175(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_17(iParam2), 12)))
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

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x9811 / 38929
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_190())
	{
		return;
	}
	if (!Function_175(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_17(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(iParam2), 12));
			Function_178(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_160(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_160(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_178(var uParam0, int iParam1) //Position: 0x98E7 / 39143
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_179() //Position: 0x98F6 / 39158
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
	
	Function_187(3, 3);
	bVar0 = bVar0;
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/window_shopping", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/light_candle", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/factory_foreman", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stool_sit_newspaper", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_knock_on_door", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_back", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/repair_wagon", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_nospawn", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_chopwood_w_any", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/tend_counter_and_patron", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/bench_chair", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/ticket_taker_link", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/player_sit_movie", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_185(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	if (!Function_180(&Local_7 + 4))
	{
		return 0;
	}
	Local_7 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(Local_7))
	{
		Local_7 = CREATE_LAYOUT("Blackwater_layout");
	}
	Local_7.f_752 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_7, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep3", 716,6196f, 78,47568f, 1312,891f, 0.0f, 279,1356f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_7.f_752);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep2", 715,2597f, 78,47568f, 1313,301f, 0.0f, -56,13581f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_7.f_752);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep1", 713,2221f, 78,49438f, 1313,673f, 4,060635f, 59,86573f, 4,585001f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_7.f_752);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_7, "done", 713,897f, 78,47568f, 1314,553f, 0.0f, -181,8848f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_7.f_752);
	Local_7.f_756 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", Local_7, 8, 0);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep1_2", 751,7712f, 78,48277f, 1264,771f, 0.0f, 160,0726f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_7.f_756);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep2_2", 752,0189f, 78,48277f, 1269,142f, 0.0f, -173,3165f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_7.f_756);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_7, "done_2", 751,7539f, 78,48277f, 1262,687f, 0.0f, 0,391171f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_7.f_756);
	Local_7.f_760 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp3Set", Local_7, 8, 0);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep1_3", 746,9716f, 78,65002f, 1324,263f, 0.0f, 231,0299f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_7.f_760);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep2_3", 754,6426f, 78,65002f, 1324,865f, 0.0f, 281,2144f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_7.f_760);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_7, "done_3", 746,0232f, 78,65002f, 1321,576f, 0.0f, -0,008872669f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_7.f_760);
	Local_7.f_764 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp4Set", Local_7, 8, 0);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep1_4", 724,5081f, 78,6604f, 1365,222f, 0.0f, 201,6466f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_7.f_764);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_7, "sweep2_4", 721,5602f, 78,66041f, 1363,966f, 0.0f, 79,98044f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_7.f_764);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_7, "done_4", 723,7635f, 78,6604f, 1361,778f, 0.0f, -0,4129413f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_7.f_764);
	Local_7.f_768 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp12Set", Local_7, 8, 0);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_7, "nsweep1_12", 664,182f, 78,77114f, 1300,138f, 0.0f, 56,85511f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_7.f_768);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_7, "nsweep2_12", 669,4498f, 78,76159f, 1291,767f, 0.0f, -38,74752f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_7.f_768);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_7, "done_12", 667,7686f, 78,77487f, 1305,621f, 0.0f, -181,6324f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_7.f_768);
	*(&Local_7 + 772) = { 724,8973f, 78,66041f, 1363,18f };
	*(&Local_7 + 772 + 12) = { 0.0f, -90,35841f, 0.0f };
	Local_7.f_796 = CREATE_POINT_IN_LAYOUT(Local_7, "player_shop_flag_DOC", 724,8973f, 78,66041f, 1363,18f, 0.0f, -90,35841f, 0.0f);
	*(&Local_7 + 800) = { 777,3568f, 78,67459f, 1318,214f };
	*(&Local_7 + 800 + 12) = { 0.0f, -88,72865f, 0.0f };
	Local_7.f_824 = CREATE_POINT_IN_LAYOUT(Local_7, "player_shop_flag_GUN", 777,3568f, 78,67459f, 1318,214f, 0.0f, -88,72865f, 0.0f);
	*(&Local_7 + 828) = { 746,1685f, 78,65002f, 1323,355f };
	*(&Local_7 + 828 + 12) = { 0.0f, 90,72213f, 0.0f };
	Local_7.f_852 = CREATE_POINT_IN_LAYOUT(Local_7, "player_shop_flag_GEN", 746,1685f, 78,65002f, 1323,355f, 0.0f, 90,72213f, 0.0f);
	*(&Local_7 + 856) = { 777,3279f, 78,6226f, 1291,225f };
	*(&Local_7 + 856 + 12) = { 0.0f, -91,14621f, 0.0f };
	Local_7.f_880 = CREATE_POINT_IN_LAYOUT(Local_7, "player_shop_flag_TAL", 777,3279f, 78,6226f, 1291,225f, 0.0f, -91,14621f, 0.0f);
	*(&Local_7 + 884) = { 711,4298f, 84,64764f, 1321,287f };
	*(&Local_7 + 884 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_7.f_908 = CREATE_POINT_IN_LAYOUT(Local_7, "player_save_flag_BLK", 711,4298f, 84,64764f, 1321,287f, 0.0f, 0.0f, 0.0f);
	*(&Local_7 + 912) = { 710,4987f, 82,67567f, 1317,442f };
	*(&Local_7 + 912 + 12) = { 0.0f, 180,1605f, 0.0f };
	Local_7.f_936 = CREATE_POINT_IN_LAYOUT(Local_7, "player_purchase_flag_BLK", 710,4987f, 82,67567f, 1317,442f, 0.0f, 180,1605f, 0.0f);
	*(&Local_7 + 940) = { 731,2505f, 78,30585f, 1316,073f };
	*(&Local_7 + 940 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_7.f_964 = CREATE_POINT_IN_LAYOUT(Local_7, "f_playerHorse", 731,2505f, 78,30585f, 1316,073f, 0.0f, 0.0f, 0.0f);
	*(&Local_7 + 968) = { 725,298f, 78,78248f, 1288,546f };
	*(&Local_7 + 968 + 12) = { 0.0f, -90,71182f, 0.0f };
	Local_7.f_992 = CREATE_POINT_IN_LAYOUT(Local_7, "blkf_leaveMovie", 725,298f, 78,78248f, 1288,546f, 0.0f, -90,71182f, 0.0f);
	*(&Local_7 + 996) = { 713,6155f, 81,98243f, 1285,187f };
	*(&Local_7 + 996 + 12) = { 0.0f, 90,43823f, 0.0f };
	Local_7.f_1020 = CREATE_POINT_IN_LAYOUT(Local_7, "blkf_watchMovie", 713,6155f, 81,98243f, 1285,187f, 0.0f, 90,43823f, 0.0f);
	Local_7.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Multistage_sweeping2", "Multistage_sweeping", 751,7539f, 78,48277f, 1262,687f, 0.0f, -180,4018f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1024), 1);
	DECOR_SET_INT(Local_7.f_1024, "FlagSetNum", 2);
	DECOR_SET_INT(Local_7.f_1024, "FlagSetNum", 2);
	Local_7.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Multistage_sweeping3", "Multistage_sweeping", 746,0232f, 78,65002f, 1321,576f, 0.0f, 180,1402f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1028), 0);
	DECOR_SET_INT(Local_7.f_1028, "FlagSetNum", 3);
	Local_7.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Multistage_sweeping4", "Multistage_sweeping", 723,7635f, 78,6604f, 1361,778f, 0.0f, 178,9652f, 0.0f);
	DECOR_SET_INT(Local_7.f_1032, "FlagSetNum", 4);
	Local_7.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Multistage_sweeping5", "Multistage_sweeping", 713,897f, 78,47568f, 1314,553f, 0.0f, 358,3619f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1036), 1);
	Local_7.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Multistage_sweeping12", "Multistage_sweeping", 667,7686f, 78,77487f, 1305,621f, 0.0f, 361,2336f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1040), 1);
	DECOR_SET_INT(Local_7.f_1040, "FlagSetNum", 12);
	Local_7.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sellPapers1", "stand_sellPaper", 735,4706f, 78,50465f, 1244,32f, 0.0f, -167,9311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1044), 0);
	Local_7.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sellPapers3", "stand_sellPaper", 679,6489f, 78,17414f, 1292,084f, 0.0f, 139,9129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1048), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_H_talking", "lean_fence_H_talking", 757,533f, 78,54008f, 1205,415f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 743,1425f, 79,59556f, 1205,326f, 0.0f, 180,2817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", 730,7963f, 79,59456f, 1205,314f, 0.0f, 182,2745f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand", "rand_idle_stand", 735,913f, 79,5923f, 1207,588f, 0.0f, 181,6933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail1", "nlean_rail", 739,6573f, 84,97102f, 1207,542f, 0.0f, 179,3439f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking2", "lean_fence_L_talking", 736,1446f, 84,97102f, 1207,388f, 0.0f, 181,3025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand2", "rand_idle_stand", 732,2499f, 84,97102f, 1207,487f, 0.0f, 179,6983f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any", "stand_lookdistance_w_any", 741,8456f, 89,17091f, 1204,826f, 0.0f, 179,5443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", 734,3572f, 79,59374f, 1207,199f, 0.0f, 181,0094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", 735,8599f, 79,44998f, 1227,888f, 0.0f, 178,2865f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", 757,6396f, 78,52522f, 1236,318f, 0.0f, 90,65166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", 693,804f, 78,46474f, 1308,966f, 0.0f, 90,21436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_sellPaper", "stand_sellPaper", 693,0724f, 78,47004f, 1294,718f, 0.0f, 89,97436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1052), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "dealer_and_customer", "dealer_and_customer", 708,0382f, 78,30585f, 1310,416f, 0.0f, 179,2714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand6", "rand_idle_stand", 695,1035f, 78,48756f, 1276,85f, 0.0f, 95,48736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", 694,1122f, 78,48427f, 1268,774f, 0.0f, 87,69978f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L2", "look_out_window_L", 692,5536f, 78,48125f, 1275,156f, 0.0f, 90,73781f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "dealer_and_customer1", "dealer_and_customer", 709,0131f, 78,30585f, 1270,152f, 0.0f, 5,094352f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall6", "Rand_Idle_NearWall", 694,0665f, 78,4436f, 1262,419f, 0.0f, 90,08855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", 693,3006f, 78,45257f, 1259,912f, 0.0f, -46,5522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand9", "rand_idle_stand", 728,3024f, 78,47202f, 1261,657f, 0.0f, -74,38342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand10", "rand_idle_stand", 726,4654f, 78,47202f, 1259,955f, 0.0f, -18,82523f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand13", "rand_idle_stand", 724,8102f, 78,78248f, 1289,914f, 0.0f, -94,28057f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "nuse_shelf", "window_shopping", 727,2377f, 78,46642f, 1308,63f, 0.0f, 91,17877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_drink_serve2", "bar_drink_serve", 719,8852f, 78,47568f, 1318,386f, 0.0f, 90,80371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_drink_serve3", "bar_drink_serve", 719,8906f, 78,47568f, 1317,723f, 0.0f, 90,80371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_drink_serve4", "bar_drink_serve", 719,8737f, 78,47568f, 1319,044f, 0.0f, 89,72533f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand14", "rand_idle_stand", 710,6749f, 78,4559f, 1324,332f, 0.0f, -155,4332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel", "sit_barrel", 713,085f, 78,4559f, 1323,695f, 0.0f, 360,7238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R1", "look_out_window_R", 719,9471f, 78,4559f, 1328,009f, 0.0f, 180,1927f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", 721,2181f, 78,4559f, 1329,318f, 0.0f, 179,9175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R2", "look_out_window_R", 724,3611f, 78,4559f, 1329,359f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail5", "nlean_rail", 721,6705f, 82,68023f, 1321,345f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking5", "lean_fence_L_talking", 724,529f, 82,67567f, 1317,449f, 0.0f, 89,23894f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R3", "look_out_window_R", 726,1747f, 82,67567f, 1323,28f, 0.0f, -89,47371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R4", "look_out_window_R", 720,1345f, 82,67567f, 1325,827f, 0.0f, 180,3488f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", 745,989f, 78,65002f, 1324,636f, 0.0f, 90,30943f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf1", "nuse_shelf", 749,6891f, 78,65002f, 1327,119f, 0.0f, 181,2002f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf2", "nuse_shelf", 747,3059f, 78,65002f, 1327,233f, 0.0f, 181,2002f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf3", "nuse_shelf", 756,0656f, 78,65002f, 1322,593f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L4", "look_out_window_L", 758,6628f, 82,85001f, 1321,999f, 0.0f, -89,21008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking6", "lean_fence_L_talking", 760,8135f, 81,69339f, 1320,338f, 0.0f, -91,16459f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking7", "lean_fence_L_talking", 743,4857f, 82,85244f, 1323,947f, 0.0f, 90,45868f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail6", "nlean_rail", 743,3248f, 82,85244f, 1326,579f, 0.0f, 90,45868f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_fence_low", "sit_fence_low", 743,4464f, 82,85412f, 1318,906f, 0.0f, 359,6271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "dealer_and_customer2", "dealer_and_customer", 749,673f, 78,51162f, 1308,511f, 0.0f, 90,06834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall10", "Rand_Idle_NearWall", 743,7484f, 78,46758f, 1311,173f, 0.0f, 91,6879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R5", "look_out_window_R", 742,7198f, 78,41696f, 1301,416f, 0.0f, 89,0247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf4", "window_shopping", 744,1077f, 78,42467f, 1298,163f, 0.0f, -87,77483f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", 743,4306f, 82,65868f, 1283,7f, 0.0f, 12,18162f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail7", "nlean_rail", 742,9953f, 82,66647f, 1287,752f, 0.0f, 91,00787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L5", "look_out_window_L", 743,0324f, 78,47829f, 1284,853f, 0.0f, 90,06793f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand18", "Rand_Idle_NearWall", 744,2853f, 78,48866f, 1274,966f, 0.0f, 88,28998f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall11", "rand_idle_stand", 744,1816f, 78,48793f, 1264,546f, 0.0f, 88,89437f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_7, "DEL_light_candle", "light_candle", 747,0383f, 86,88279f, 1268,919f, 0.0f, 53,39135f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1056), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail8", "nlean_rail", 763,9521f, 82,82666f, 1267,109f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", 764,452f, 86,86085f, 1275,588f, 0.0f, -88,09883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand19", "rand_idle_stand", 763,9924f, 78,48963f, 1262,253f, 0.0f, -39,34098f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall12", "Rand_Idle_NearWall", 777,9196f, 78,4509f, 1261,225f, 0.0f, 0,2685556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel2", "sit_barrel", 780,8846f, 78,47502f, 1288,43f, 0.0f, -92,52832f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R6", "rand_idle_stand", 781,8f, 78,43202f, 1280,767f, 0.0f, -58,99691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf5", "nuse_shelf", 776,1238f, 78,6226f, 1291,412f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", 776,6684f, 82,88287f, 1313,869f, 0.0f, -65,4193f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail9", "nlean_rail", 776,4473f, 82,88287f, 1312,583f, 0.0f, -89,42748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall13", "Rand_Idle_NearWall", 779,2252f, 78,42117f, 1322,192f, 0.0f, -88,76082f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "mex_pickGarbage", "mex_pickGarbage", 775,3196f, 78,4559f, 1330,176f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_7, "factory_foreman1", "factory_foreman", 808,2466f, 78,46973f, 1284,302f, 0.0f, 259,6734f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1060), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel7", "sit_barrel", 800,6945f, 79,59608f, 1237,842f, 0.0f, -89,08908f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_announce1", "stand_announce", 812,4994f, 79,60011f, 1250,564f, 0.0f, -87,34089f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_wall5", "stand_hammer_wall", 809,398f, 78,50423f, 1300,225f, 0.0f, -90,98383f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_wall6", "stand_hammer_wall", 804,6464f, 79,48904f, 1303,002f, 0.0f, 90,28212f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table", "stand_hammer_table", 799,6985f, 79,48903f, 1296,814f, 0.0f, 84,10031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking13", "lean_fence_L_talking", 840,6377f, 78,44637f, 1251,749f, 0.0f, 180,0259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail14", "rand_idle_stand", 811,7169f, 78,43724f, 1289,934f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail16", "nlean_rail", 796,3568f, 79,5737f, 1254,534f, 0.0f, 89,40377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand32", "rand_idle_stand", 666,0728f, 78,30585f, 1396,688f, 0.0f, -58,17736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall23", "Rand_Idle_NearWall", 679,4692f, 78,48917f, 1375,193f, 0.0f, -90,39735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel11", "sit_barrel", 680,0394f, 78,47678f, 1370,808f, 0.0f, 91,62535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall24", "Rand_Idle_NearWall", 678,528f, 78,50835f, 1359,066f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall25", "Rand_Idle_NearWall", 673,2787f, 79,29982f, 1340,215f, 0.0f, 180,3127f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks10", "nsit_docks", 672,6722f, 79,29978f, 1341,354f, 0.0f, 180,6438f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any14", "stand_lookdistance_w_any", 665,1462f, 79,33347f, 1340,869f, 0.0f, 160,5156f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table6", "stand_hammer_table", 662,3488f, 78,76155f, 1335,836f, 0.0f, -103,3517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table7", "stand_hammer_table", 657,8969f, 78,73125f, 1325,46f, 0.0f, -107,0231f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "repair_kneel8", "repair_kneel", 656,9224f, 78,76156f, 1329,189f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "repair_kneel9", "repair_kneel", 661,8639f, 78,76155f, 1331,375f, 0.0f, -6,365757f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks11", "nsit_docks", 664,6595f, 79,34006f, 1334,848f, 0.0f, 89,85727f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking14", "lean_fence_L_talking", 670,1075f, 78,76907f, 1311,281f, 0.0f, -90,70055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail19", "nlean_rail", 670,277f, 78,7616f, 1302,121f, 0.0f, -88,28071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail20", "nlean_rail", 670,1945f, 78,76159f, 1317,37f, 0.0f, -89,16447f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand37", "rand_idle_stand", 670,3906f, 78,7616f, 1293,617f, 0.0f, -87,9136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand38", "rand_idle_stand", 694,1248f, 78,48866f, 1349,224f, 0.0f, 91,33687f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall29", "Rand_Idle_NearWall_Shoulder_L", 694,1938f, 78,37503f, 1365,824f, 0.0f, 90,07986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L12", "look_out_window_L", 695,602f, 78,31335f, 1353,338f, 0.0f, 91,63447f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall30", "Rand_Idle_NearWall", 695,3558f, 78,30585f, 1376,896f, 0.0f, 179,9754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall32", "Rand_Idle_NearWall", 710,7695f, 78,30585f, 1353,941f, 0.0f, 87,75419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall33", "Rand_Idle_NearWall", 718,8475f, 78,30585f, 1375,35f, 0.0f, 180,4237f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall34", "Rand_Idle_NearWall", 727,1077f, 78,47861f, 1358,862f, 0.0f, -89,85516f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall35", "Rand_Idle_NearWall", 727,2165f, 78,48865f, 1347,611f, 0.0f, -89,07448f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall37", "Rand_Idle_NearWall", 744,825f, 78,46182f, 1343,871f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall38", "Rand_Idle_NearWall", 744,2474f, 78,45758f, 1380,663f, 0.0f, 88,21552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall39", "Rand_Idle_NearWall", 754,4095f, 78,30717f, 1361,92f, 0.0f, -87,91795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand40", "rand_idle_stand", 708,457f, 78,30585f, 1371,105f, 0.0f, -91,63898f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand43", "rand_idle_stand", 729,1898f, 78,48866f, 1342,272f, 0.0f, -41,96416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand46", "rand_idle_stand", 746,9446f, 78,75503f, 1345,489f, 0.0f, 23,09299f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand48", "rand_idle_stand", 744,0148f, 78,43201f, 1361,096f, 0.0f, 88,22166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail23", "nlean_rail", 727,9006f, 82,7098f, 1346,722f, 0.0f, -90,46728f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail24", "nlean_rail", 717,4937f, 82,7098f, 1343,308f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail28", "nlean_rail", 765,8303f, 80,89331f, 1345,334f, 0.0f, 89,38559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_H_talking7", "lean_fence_H_talking", 723,1609f, 78,48892f, 1343,916f, 0.0f, 180,0475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_H_talking8", "lean_fence_H_talking", 743,3723f, 78,46932f, 1353,751f, 0.0f, -91,1283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking16", "lean_fence_L_talking", 723,2128f, 82,70773f, 1343,401f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_7, "stool_sit_newspaper1", "stool_sit_newspaper", 722,7706f, 78,6604f, 1365,626f, 0.0f, 86,2308f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R10", "look_out_window_R", 727,8027f, 78,47819f, 1360,418f, 0.0f, -91,10849f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R11", "look_out_window_R", 726,7567f, 78,48865f, 1343,933f, 0.0f, 180,3222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L13", "look_out_window_L", 727,808f, 82,7098f, 1349,996f, 0.0f, -89,53709f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "window_shopping", "window_shopping", 779,4394f, 78,46877f, 1358,047f, 0.0f, 91,34872f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_wall14", "stand_hammer_wall", 745,8066f, 78,44427f, 1369,689f, 0.0f, 90,16531f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_wall15", "stand_hammer_wall", 755,0883f, 78,30585f, 1374,606f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammerground_w_any5", "stand_hammerground_w_any", 751,1927f, 78,44083f, 1372,794f, 0.0f, -132,6278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_7, "factory_foreman6", "factory_foreman", 757,0696f, 78,46094f, 1368,897f, 0.0f, 98,43386f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1064), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_table1", "lean_table", 780,5647f, 78,43993f, 1353,09f, 0.0f, 89,45054f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R13", "look_out_window_R", 732,6514f, 98,04203f, 1496,158f, 0.0f, -56,08453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand49", "rand_idle_stand", 732,2639f, 98,04203f, 1495,241f, 0.0f, -56,08453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any16", "stand_lookdistance_w_any", 730,4158f, 98,04214f, 1506,2f, 0.0f, 153,6338f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand50", "rand_idle_stand", 771,3107f, 89,83692f, 1446,672f, 0.0f, 88,02988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand51", "rand_idle_stand", 749,562f, 89,34232f, 1440,807f, 0.0f, -29,12567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel13", "sit_barrel", 743,0646f, 89,32565f, 1441,419f, 0.0f, 191,2619f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks14", "nsit_docks", 747,7121f, 89,36176f, 1439,212f, 0.0f, 10,8033f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand52", "rand_idle_stand", 780,4347f, 84,19436f, 1413,886f, 0.0f, 103,3177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail29", "nlean_rail", 782,7726f, 84,1959f, 1406,613f, 0.0f, 11,38793f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking19", "lean_fence_L_talking", 779,8757f, 84,1959f, 1407,299f, 0.0f, 102,7997f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "dealer_and_customer6", "dealer_and_customer", 729,8784f, 78,97916f, 1413,118f, 0.0f, 42,71037f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "digging", "digging", 711,9514f, 78,69594f, 1418,382f, 0.0f, -148,4512f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R15", "look_out_window_R", 663,6323f, 81,20404f, 1416,716f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall40", "Rand_Idle_NearWall", 658,7283f, 81,20404f, 1418,289f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", 722,0927f, 78,93578f, 1414,797f, 0.0f, -60,07095f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", 723,5049f, 78,95549f, 1415,901f, 0.0f, -19,52544f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand54", "look_out_window_L", 730,9775f, 79,80169f, 1408,59f, 0.0f, 11,55879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks17", "nsit_docks", 750,6455f, 80,4561f, 1404,543f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_fence_low1", "sit_fence_low", 658,136f, 81,2049f, 1417,344f, 0.0f, 88,48681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_announce6", "stand_announce", 705,4583f, 78,78553f, 1412,572f, 0.0f, 103,6559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", 723,207f, 78,79372f, 1411,5f, 0.0f, 197,0522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", 725,6359f, 78,90941f, 1415,416f, 0.0f, 50,95287f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand57", "rand_idle_stand", 600,3531f, 84,53281f, 1368,719f, 0.0f, 15,01752f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks18", "nsit_docks", 602,1412f, 84,53796f, 1367,751f, 0.0f, 24,32792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks19", "nsit_docks", 608,3167f, 84,53188f, 1377,081f, 0.0f, 207,5843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any18", "stand_lookdistance_w_any", 625,8112f, 80,62988f, 1344,774f, 0.0f, -42,00841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", 623,6466f, 80,35783f, 1367,377f, 0.0f, -13,4745f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_announce7", "stand_announce", 629,1728f, 80,21693f, 1366,737f, 0.0f, -34,11556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel14", "sit_barrel", 625,5787f, 80,28311f, 1367,059f, 0.0f, 178,4214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel15", "sit_barrel", 604,7859f, 84,55909f, 1377,316f, 0.0f, 28,39185f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall44", "Rand_Idle_NearWall", 623,6828f, 80,62241f, 1343,737f, 0.0f, 181,7843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "digging1", "digging", 589,9551f, 85,33331f, 1308.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "horse_tend3", "horse_tend", 563,9999f, 86,48528f, 1328f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "horse_tend4", "horse_tend", 565,5425f, 86,27617f, 1334,457f, 0.0f, -82,7515f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "horse_tend5", "horse_tend", 559,1775f, 86,87167f, 1316,061f, 0.0f, 9,734894f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "horse_tend6", "horse_tend", 563,9999f, 86,14185f, 1314,739f, 0.0f, -98,72478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "horse_tend7", "horse_tend", 564,8443f, 86,09988f, 1307,156f, 0.0f, -25,84238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "repair_kneel16", "repair_kneel", 587,517f, 85,46693f, 1344,16f, 0.0f, -114,7056f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_announce8", "stand_announce", 583,9999f, 85,50741f, 1311,385f, 0.0f, 175,6971f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1068), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_wall16", "stand_hammer_wall", 575,1299f, 85,52423f, 1329,202f, 0.0f, -89,7115f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_knock_on_door", "stand_knock_on_door", 605,8066f, 86,26844f, 1270,324f, 0.0f, 165,5764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1072), 1);
	Local_7.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_table2", "lean_table", 573,536f, 85,54723f, 1325,317f, 0.0f, -90,53914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1076), 1);
	Local_7.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_7, "player_sleep_BLK", "player_sleep_bed_R", 715,5102f, 82,67963f, 1320,292f, 0.0f, 0,5431197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1080), 1);
	Local_7.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Locked_Footlocker", "Locked_Footlocker", 714,4935f, 82,67567f, 1319,108f, 0.0f, -270,2886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1084), 1);
	DECOR_SET_BOOL(Local_7.f_1084, "PlayerHouseChest", true);
	Local_7.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand59", "rand_idle_stand", 739,3559f, 79,44998f, 1224,201f, 0.0f, -243,4305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1088), 1);
	Local_7.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand69", "rand_idle_stand", 736,2913f, 79,44998f, 1223,781f, 0.0f, -151,1676f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1092), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand70", "nlean_rail", 739,4585f, 79,44998f, 1225,822f, 0.0f, -133,9725f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand72", "lean_fence_L_talking", 734,3198f, 79,44998f, 1225,429f, 0.0f, -225,419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand73", "look_out_window_L", 738,5273f, 79,44998f, 1226,677f, 0.0f, -183,9045f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand74", "lean_fence_L_talking", 740,3773f, 79,44998f, 1221,633f, 0.0f, -407,3262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand76", "lean_rail_back", 733,9058f, 79,44998f, 1221,139f, 0.0f, 46,06223f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall45", "Rand_Idle_NearWall", 780,2723f, 78,45591f, 1233,557f, 0.0f, 269,5681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall46", "Rand_Idle_NearWall_Shoulder_R", 782,0057f, 78,45591f, 1225,903f, 0.0f, 93,89873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand78", "Rand_Idle_NearWall_Shoulder_R", 719,192f, 78,47202f, 1261,515f, 0.0f, -0,3879568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand79", "rand_idle_stand", 712,2138f, 78,46776f, 1261,168f, 0.0f, 6,899922f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand80", "Rand_Idle_NearWall_Shoulder_R", 699,3901f, 78,47202f, 1261,381f, 0.0f, -0,3879568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall47", "Rand_Idle_NearWall", 693,2442f, 78,47002f, 1280,854f, 0.0f, 87,69978f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_sellPaper2", "rand_idle_stand", 693,7496f, 78,47025f, 1301,02f, 0.0f, 115,4374f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1096), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall48", "rand_idle_stand", 691,2797f, 78,46474f, 1305,876f, 0.0f, 66,71307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall49", "rand_idle_stand", 692,0511f, 78,46345f, 1328,614f, 0.0f, 90,21436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall51", "Rand_Idle_NearWall_Shoulder_L", 692,4605f, 78,46345f, 1330,498f, 0.0f, 256,8582f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand81", "rand_idle_stand", 719,0966f, 78,46169f, 1331,125f, 0.0f, -31,81831f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand84", "rand_idle_stand", 730,0757f, 78,46169f, 1331,669f, 0.0f, 211,2814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf7", "rand_idle_stand", 727,1797f, 78,46122f, 1305,208f, 0.0f, 301,6729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf8", "Rand_Idle_NearWall_Shoulder_L", 725,9549f, 78,48625f, 1301,299f, 0.0f, 360,8402f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand86", "Rand_Idle_NearWall", 727,202f, 78,45571f, 1286,743f, 0.0f, -90,11201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf9", "window_shopping", 727,5004f, 78,42651f, 1272,01f, 0.0f, 91,17877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf10", "window_shopping", 727,6124f, 78,42651f, 1277,455f, 0.0f, 91,17877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sellPapers4", "stand_sellPaper", 729,0436f, 78,45667f, 1332,091f, 0.0f, -307,2341f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall53", "Rand_Idle_NearWall_Shoulder_L", 743,0488f, 78,48793f, 1259,624f, 0.0f, 389,2517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall54", "rand_idle_stand", 742,2991f, 78,47829f, 1290,01f, 0.0f, 109,6508f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall56", "Rand_Idle_NearWall_Shoulder_L", 744,5591f, 78,46758f, 1307,818f, 0.0f, 179,7722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall57", "Rand_Idle_NearWall_Shoulder_R", 745,556f, 78,48963f, 1320,131f, 0.0f, 361,2299f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall58", "Rand_Idle_NearWall_Shoulder_L", 744,6332f, 78,44722f, 1329,387f, 0.0f, 179,7722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand87", "rand_idle_stand", 742,6069f, 78,47474f, 1330,102f, 0.0f, 116,5209f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall59", "Rand_Idle_NearWall", 751,9132f, 78,44722f, 1329,314f, 0.0f, 179,7722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand89", "rand_idle_stand", 765,3123f, 78,47755f, 1329,495f, 0.0f, 156,2161f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "mex_pickGarbage2", "rand_idle_stand", 781,5133f, 78,42017f, 1330,508f, 0.0f, 233,045f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall60", "Rand_Idle_NearWall_Shoulder_R", 778,3213f, 78,49258f, 1312,476f, 0.0f, -177,6917f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall61", "Rand_Idle_NearWall_Shoulder_R", 781,1957f, 78,41875f, 1296,434f, 0.0f, -269,6396f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R17", "repair_wagon", 775,9982f, 78,30585f, 1272,14f, 0.0f, -181,0115f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall62", "rand_idle_stand", 781,7653f, 78,46606f, 1260,448f, 0.0f, -165,8364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "dealer_and_customer7", "dealer_and_customer", 765,6392f, 78,30585f, 1270,675f, 0.0f, -44,44049f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "whittle_wood13", "Rand_Idle_NearWall_Shoulder_L", 806,2742f, 79,5376f, 1236,123f, 0.0f, -179,0939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "whittle_wood14", "Rand_Idle_NearWall_Shoulder_L", 808,084f, 79,56089f, 1249,198f, 0.0f, -179,0939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any19", "sit_fence_low", 795,4872f, 79,57791f, 1247,463f, 0.0f, 177,6926f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any20", "sit_fence_low", 801,111f, 79,57791f, 1267,626f, 0.0f, 179,7055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail32", "lean_fence_L_talking", 796,4366f, 79,5737f, 1263,054f, 0.0f, 89,40377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail33", "rand_idle_stand", 807,8725f, 79,5737f, 1254,218f, 0.0f, 67,13522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail34", "rand_idle_stand", 809,8982f, 79,5737f, 1262,265f, 0.0f, 148,3584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any21", "sit_fence_low", 847,5742f, 78,47651f, 1249,094f, 0.0f, 269,5928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_7, "factory_foreman8", "kneel_hammer", 798,2959f, 78,46569f, 1269,974f, 0.0f, 360,0317f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1104), 1);
	Local_7.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_7, "factory_foreman9", "Rand_Idle_NearWall_Shoulder_L", 814,7153f, 78,46569f, 1292,152f, 0.0f, 516,7408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1108), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table9", "nsit_docks", 797,5083f, 79,48903f, 1294,462f, 0.0f, 0,02731565f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table10", "nsit_docks", 803,9357f, 79,48903f, 1294,459f, 0.0f, 0,02731565f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand104", "nlean_rail", 666,7754f, 78,7616f, 1282,499f, 0.0f, -1,197093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand105", "rand_idle_stand", 679,9716f, 78,15804f, 1275,86f, 0.0f, 40,03609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand108", "Rand_Idle_NearWall", 676,4709f, 78,01736f, 1290,16f, 0.0f, 182,399f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail40", "nsit_docks", 676,8644f, 79,28242f, 1323,431f, 0.0f, 2,133793f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand111", "rand_idle_stand", 656,1124f, 78,7616f, 1301,756f, 0.0f, -276,3351f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand113", "stand_announce", 657,9998f, 78,7616f, 1294,285f, 0.0f, -449,7851f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand114", "stand_announce", 657,9795f, 78,7616f, 1288,889f, 0.0f, -449,7851f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table12", "Rand_Idle_NearWall", 657,1494f, 78,73125f, 1322,337f, 0.0f, 89,97512f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall64", "Rand_Idle_NearWall", 666,225f, 79,29982f, 1339,224f, 0.0f, 89,97098f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L15", "sit_barrel", 679,9662f, 79,29594f, 1339,606f, 0.0f, -55,84651f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall65", "Pee", 675,4128f, 78,39197f, 1377,494f, 0.0f, -56,46573f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall66", "Rand_Idle_NearWall", 681,3649f, 78,40292f, 1386,866f, 0.0f, -90,39735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand115", "look_out_window_L", 693,0779f, 78,37503f, 1375,701f, 0.0f, 89,88766f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand116", "rand_idle_stand", 692,2606f, 78,37503f, 1368,443f, 0.0f, 43,74846f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand117", "rand_idle_stand", 695,0961f, 78,48866f, 1343,774f, 0.0f, 0,3846634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand118", "rand_idle_stand", 692,6342f, 78,48866f, 1342,19f, 0.0f, -56,88344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall67", "dealer_and_customer", 710,4716f, 78,30585f, 1361,537f, 0.0f, 39,34124f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel20", "mex_pickGarbage", 716,3611f, 78,30585f, 1374,03f, 0.0f, -89,68405f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_barrel21", "Pee", 716,4769f, 78,30585f, 1361,552f, 0.0f, -53,00579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand119", "Rand_Idle_NearWall_Shoulder_R", 729,6305f, 78,47043f, 1377,191f, 0.0f, -270,0623f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand120", "rand_idle_stand", 727,3466f, 78,47043f, 1369,818f, 0.0f, -107,5377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand121", "Rand_Idle_Sit_Ground", 727,0447f, 78,47919f, 1353,707f, 0.0f, -96,00417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R18", "stand_lookdistance_w_any", 709,874f, 82,7098f, 1343,309f, 0.0f, 44,70309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand123", "look_out_window_R", 742,1583f, 78,49042f, 1358,179f, 0.0f, 88,22166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall68", "rand_idle_stand", 744,1433f, 78,45758f, 1384,005f, 0.0f, 138,8927f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall69", "dealer_and_customer", 763,3989f, 78,30717f, 1355,823f, 0.0f, 0,4703464f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "chop_wood1", "Rand_Idle_Sit_Ground", 755,9878f, 78,30585f, 1381,467f, 0.0f, 165,2116f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand124", "rand_idle_stand", 781,7729f, 78,50927f, 1373,926f, 0.0f, -87,65372f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand126", "rand_idle_stand", 779,3011f, 78,50927f, 1341,972f, 0.0f, -33,05725f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand127", "rand_idle_stand", 781,1627f, 78,50927f, 1344,392f, 0.0f, -61,21333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand130", "rand_idle_stand", 762,7175f, 78,46284f, 1343,25f, 0.0f, -44,77103f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand131", "rand_idle_stand", 735,435f, 79,80169f, 1407,678f, 0.0f, -8,074136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_announce10", "Rand_Idle_NearWall", 716,3098f, 79,38667f, 1410,446f, 0.0f, 11,58128f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any22", "nlean_rail", 793,7657f, 84,1959f, 1405,245f, 0.0f, -78,46164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_w_any23", "look_out_window_L", 794,7848f, 84,1959f, 1410,616f, 0.0f, -78,46164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail41", "nlean_rail", 782,3232f, 84,19893f, 1420,518f, 0.0f, 100,1951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand132", "look_out_window_R", 749,3213f, 89,34232f, 1443,401f, 0.0f, -79,62952f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand133", "nlean_rail", 772,2308f, 89,83692f, 1444,155f, 0.0f, -5,220157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand134", "rand_idle_stand", 731,9628f, 98,04203f, 1501,84f, 0.0f, -131,6382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_docks25", "nsit_docks", 604,3771f, 84,53188f, 1367,865f, 0.0f, 296,855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", 622,1136f, 80,62342f, 1344,901f, 0.0f, 240,58f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "repair_kneel26", "repair_kneel", 555,2327f, 87,86961f, 1336,035f, 0.0f, 90,42761f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_7, "pitch_hay5", "sit_fence_nospawn", 575,9046f, 85,54479f, 1307,824f, 0.0f, 96,19228f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1112), 1);
	Local_7.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_theatreMgr2", "nlean_rail", 568,6009f, 88,06783f, 1249,101f, 0.0f, 314,1673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1116), 1);
	Local_7.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_theatreMgr3", "whittle_wood", 569,4618f, 88,06783f, 1253,53f, 0.0f, 497,7896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1120), 1);
	Local_7.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_theatreMgr4", "stand_chopwood_w_any", 566,38f, 87,54343f, 1265,546f, 0.0f, 384,5671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1124), 1);
	Local_7.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx10", "rand_idle_stand", 599,274f, 88,15438f, 1228,685f, 0.0f, -198,5563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1128), 1);
	Local_7.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx11", "nlean_rail", 597,7041f, 88,15438f, 1226,984f, 0.0f, -228,1098f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1132), 1);
	Local_7.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx13", "stand_lookdistance_w_any", 605,0844f, 88,15438f, 1234,016f, 0.0f, -135,3247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1136), 1);
	Local_7.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx15", "stand_lookdistance_w_any", 613,1263f, 91,86629f, 1223,044f, 0.0f, -135,3247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1140), 1);
	Local_7.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx17", "rand_idle_stand", 607,6458f, 91,86629f, 1217,364f, 0.0f, -370,0242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1144), 1);
	Local_7.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx18", "rand_idle_stand", 610,2879f, 88,15504f, 1219,612f, 0.0f, -407,7359f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1148), 1);
	Local_7.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleep_xxx20", "Rand_Idle_NearWall", 612,7048f, 88,15504f, 1224,39f, 0.0f, -47,66469f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1152), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R", "look_out_window_R", 692,4138f, 79,30591f, 1241,194f, 0.0f, 269,9545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand3", "rand_idle_stand", 685,2208f, 79,30591f, 1232,571f, 0.0f, 89,12919f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand4", "rand_idle_stand", 684,9955f, 79,30591f, 1234,978f, 0.0f, 89,12919f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L1", "look_out_window_L", 692,3935f, 83,50591f, 1228,485f, 0.0f, -89,69969f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand5", "rand_idle_stand", 692,7802f, 79,30591f, 1235,69f, 0.0f, 267,797f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand77", "Rand_Idle_NearWall", 692,4668f, 78,52423f, 1244,543f, 0.0f, 178,7122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand135", "Rand_Idle_NearWall_Shoulder_R", 698,8159f, 78,52325f, 1233,915f, 0.0f, 180,4036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand136", "Rand_Idle_NearWall", 700,6685f, 78,52325f, 1229,747f, 0.0f, -89,35862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand137", "Rand_Idle_NearWall", 700,6499f, 78,52325f, 1238,453f, 0.0f, -89,35862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_bartender_bar_work", "stand_bartender_bar_work", 718,0094f, 78,47568f, 1318,58f, 0.0f, -90,17238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1156), 1);
	Local_7.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_7, "tend_counter_and_patron", "tend_counter_and_patron", 723,2033f, 79,71748f, 1293,664f, 0.0f, 92,20874f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "nsit_chair", "bench_chair", 705,8778f, 78,8585f, 1291,81f, 0.0f, 628,4899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_chair1", "bench_chair", 705,8347f, 78,98534f, 1292,865f, 0.0f, 628,1778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_chair3", "sit_no_table", 707,8832f, 78,87556f, 1286,239f, 0.0f, 449,8457f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_chair4", "bench_chair", 705,8332f, 78,78346f, 1287,04f, 0.0f, 630,0517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_chair6", "sit_no_table", 707,8844f, 78,84325f, 1287,228f, 0.0f, 449,8457f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lie_sleep_on_bed_r", "lie_sleep_on_bed_l", 758,7114f, 86,96805f, 1268,81f, 0.0f, 89,59889f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1164), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "drink_player2", "drink_player", 719,9905f, 78,47568f, 1316,999f, 0.0f, 91,25426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand138", "rand_idle_stand", 802,1723f, 78,46973f, 1282,014f, 0.0f, 129,0553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1168), 1);
	Local_7.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rand_idle_stand139", "rand_idle_stand", 800,1163f, 78,46973f, 1287,585f, 0.0f, 47,61947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1172), 1);
	Local_7.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_7, "factory_foreman11", "kneel_hammer", 800,6837f, 79,48903f, 1278,759f, 0.0f, 358,141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1176), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table13", "nsit_docks", 796,4917f, 79,48903f, 1278,028f, 0.0f, 89,79528f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_hammer_table14", "nsit_docks", 801,6976f, 79,48903f, 1279,486f, 0.0f, 179,7225f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail43", "lean_fence_L_talking", 815,0085f, 78,43724f, 1272,918f, 0.0f, -90,35589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_7, "smoking_stand", "smoking_stand", 675,9999f, 78,49587f, 1400.0f, 0.0f, -132,3873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1180), 1);
	Local_7.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_7, "smoking_stand1", "smoking_stand", 667,2037f, 78,41813f, 1398,364f, 0.0f, -222,516f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1184), 1);
	Local_7.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R19", "look_out_window_R", 669,3433f, 78,39612f, 1397,9f, 0.0f, 158,9834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1188), 1);
	Local_7.f_1192 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), Local_7, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_check_clipboard2", "stand_check_clipboard", 655,6088f, 78,73125f, 1325,5f, 0.0f, 221,6099f, 0.0f), Local_7.f_1192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_check_clipboard1", "stand_check_clipboard", 665,5778f, 79,34006f, 1333,494f, 0.0f, 67,49352f, 0.0f), Local_7.f_1192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_check_clipboard3", "stand_check_clipboard", 655,6089f, 78,73125f, 1334,453f, 0.0f, 245,8163f, 0.0f), Local_7.f_1192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_check_clipboard4", "stand_check_clipboard", 661,7337f, 78,73125f, 1339,398f, 0.0f, 390,5841f, 0.0f), Local_7.f_1192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "Multistage_sweeping", "Multistage_sweeping", 666,0862f, 79,34006f, 1325,895f, 0.0f, -270,6167f, 0.0f), Local_7.f_1192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_check_clipboard5", "stand_check_clipboard", 679,0473f, 79,25401f, 1338,421f, 0.0f, 309,9528f, 0.0f), Local_7.f_1192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_check_clipboard6", "stand_check_clipboard", 678,375f, 79,28242f, 1325,254f, 0.0f, 236,7765f, 0.0f), Local_7.f_1192);
	Local_7.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_7, "MovieTixSeller", "ticket_taker_link", 725,5926f, 78,78246f, 1293,011f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1196), 0);
	Local_7.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_7, "player_watchMovie", "player_sit_movie", 713,6155f, 81,98243f, 1285,187f, 0.0f, -89,93529f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1200), 0);
	Local_7.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ooo", "npreaching", 728,7109f, 78,47312f, 1289,681f, 0.0f, 89,43671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1204), 0);
	Local_7.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_7, "uuu", "npreaching", 723,9673f, 78,47652f, 1331,406f, 0.0f, 25,10256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1208), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf12", "nuse_shelf", 769,4637f, 78,6226f, 1291,412f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf13", "nuse_shelf", 767,173f, 78,6226f, 1291,412f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "use_shelf14", "nuse_shelf", 776,5944f, 78,6226f, 1294,441f, 0.0f, -180,6165f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "leaning_stand1", "leaning_stand", 719,9072f, 78,47568f, 1319,705f, 0.0f, 88,07973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Bar_lean_stand", "Bar_lean_stand", 717,7413f, 78,47568f, 1314,192f, 0.0f, 178,115f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Bar_lean_stand1", "Bar_lean_stand", 719,9882f, 78,47568f, 1320,458f, 0.0f, 88,97034f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Bar_lean_stand2", "Bar_lean_stand", 719,6778f, 78,47568f, 1314,369f, 0.0f, 141,8794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "leaning_stand2", "leaning_stand", 718,5629f, 78,47568f, 1314,229f, 0.0f, 178,1431f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink5", "stand_drunk_rowdydrink", 725,4598f, 78,48964f, 1318,404f, 0.0f, 131,1568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink6", "stand_drunk_rowdydrink", 717,2745f, 78,48964f, 1311,335f, 0.0f, -129,8468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink7", "stand_drunk_rowdydrink", 724,8708f, 78,48964f, 1319,512f, 0.0f, 10,219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_rowdydrink9", "stand_drunk_rowdydrink", 725,2202f, 78,48964f, 1315,56f, 0.0f, 119,9218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_dancing_link", "stand_drunk_dancing_link", 725,2949f, 78,48964f, 1316,895f, 0.0f, 76,84011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_drunk_dancing_link1", "stand_drunk_dancing_link", 723,426f, 78,48964f, 1311,032f, 0.0f, 178,3979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_table", "lean_table", 721,2203f, 78,48964f, 1317,471f, 0.0f, -120,347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_table3", "lean_table", 722,8278f, 78,48964f, 1324,178f, 0.0f, -129,5446f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "mex_flirt_stand_link", "mex_flirt_stand_link", 719,864f, 78,48964f, 1315,657f, 0.0f, 269,8144f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "mex_flirt_stand_link1", "mex_flirt_stand_link", 719,4333f, 82,67567f, 1316,186f, 0.0f, 179,1936f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "nlean_rail", "nlean_rail", 719,4103f, 82,67567f, 1318,464f, 0.0f, -87,53169f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail44", "nlean_rail", 712,9167f, 82,67567f, 1316,136f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail_whore", "lean_rail_whore", 716,1841f, 82,67567f, 1316,04f, 0.0f, 13,95272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail_whore1", "lean_rail_whore", 722,4893f, 82,67567f, 1321,388f, 0.0f, 10,55588f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail_whore2", "lean_rail_whore", 719,4219f, 82,67567f, 1319,628f, 0.0f, -78,90787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_rail_whore3", "lean_rail_whore", 724,3997f, 82,67567f, 1319,836f, 0.0f, 111,1692f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R20", "look_out_window_R", 723,5314f, 78,48964f, 1321,193f, 0.0f, 1,192507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_L", "look_out_window_L", 726,204f, 78,47568f, 1315,202f, 0.0f, -91,69072f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1212 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), Local_7, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "npreaching", "npreaching", 558,9433f, 94,57698f, 1198,368f, 0.0f, -3,151187f, 0.0f), Local_7.f_1212);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_holy_water", "stand_holy_water", 558,6476f, 95,10844f, 1199,795f, 0.0f, 355,8459f, 0.0f), Local_7.f_1212);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rand_Idle_NearWall70", "Rand_Idle_NearWall", 753,3569f, 82,69431f, 1272,746f, 0.0f, 89,84752f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_7.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lean_fence_L_talking", "lean_fence_L_talking", 814,7902f, 78,46808f, 1298,794f, 0.0f, -89,51781f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_1216), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "smoking_stand2", "smoking_stand", 725,0443f, 78,78248f, 1288,12f, 0.0f, -109,1886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "smoking_stand3", "smoking_stand", 728,6918f, 78,45571f, 1287,884f, 0.0f, -48,42709f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "smoking_stand4", "smoking_stand", 728,1044f, 78,45571f, 1292,366f, 0.0f, -140,6869f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	return 1;
}

bool Function_180(int iParam0) //Position: 0x11DC9 / 73161
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_184();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_183(iParam0[iVar03], 8);
		}
		else if (Function_182())
		{
			iVar1 = 1;
			Function_183(iParam0[iVar03], 8);
		}
		Function_183(iParam0[iVar03], 16);
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
				Function_183(iParam0[iVar03], 1);
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
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
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
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
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
	Function_181();
	return 1;
}

void Function_181() //Position: 0x12144 / 74052
{
	if (!Function_155(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_182() //Position: 0x12184 / 74116
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

void Function_183(var uParam0, int iParam1) //Position: 0x121AF / 74159
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_184() //Position: 0x121C0 / 74176
{
	if (!Function_155(128))
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

var Function_185(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x12202 / 74242
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_186(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_183(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_186(var uParam0, int iParam1, int iParam2) //Position: 0x1223A / 74298
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_183(uParam0[iVar03], 4);
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

void Function_187(int iParam0, int iParam1) //Position: 0x122FE / 74494
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

bool Function_188() //Position: 0x12347 / 74567
{
	if (!IS_LAYOUTREF_VALID(bLocal_1110))
	{
		bLocal_1110 = CREATE_LAYOUT(Function_94());
	}
	if (!IS_OBJECT_VALID(bLocal_1111))
	{
		bLocal_1111 = CREATE_WORLD_SECTOR(bLocal_1110, "Blackwater");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_1111))
	{
		Function_189(StackVal, bLocal_1110, "pot");
		Function_189(StackVal, bLocal_1110, "bottle");
		Function_189(StackVal, bLocal_1110, "cloth");
		Function_189(StackVal, bLocal_1110, "flag");
		Function_189(StackVal, bLocal_1110, "rope");
		DESTROY_OBJECT(bLocal_1111);
		DESTROY_LAYOUT(bLocal_1110);
		return 1;
	}
	return 0;
}

void Function_189(bool bParam0, char* cParam1, int iParam2) //Position: 0x1241C / 74780
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), bParam0, 4294967295, 1);
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

bool Function_190() //Position: 0x12475 / 74869
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_191() //Position: 0x1247E / 74878
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
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	
	Function_187(3, 3);
	uVar0 = uVar0;
	vLocal_4 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(vLocal_4.x))
	{
		vLocal_4 = CREATE_LAYOUT("Blackwater_layout");
	}
	vLocal_4.f_4 = CREATE_VOLUME_IN_LAYOUT(vLocal_4.x, "v_nightwatchVol", 2, 696,0002f, 78,30585f, 1344f, 0.0f, 0.0f, 0.0f, 361,3978f, 71,28477f, 370,9875f);
	vLocal_4.f_8 = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", vLocal_4.x, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwplayerpos", 680,505f, 78,502f, 1365,235f, 0.0f, 0,06141054f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, vLocal_4.z);
	bVar2 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwproctor", 680,5524f, 78,502f, 1363,957f, 0.0f, -182,1255f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, vLocal_4.z);
	bVar3 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwforeman", 689,4882f, 78,30585f, 1374,158f, 0.0f, 357,1368f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, vLocal_4.z);
	bVar4 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwdogpos", 675,1085f, 78,40311f, 1359,04f, 0.0f, -91,37721f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, vLocal_4.z);
	bVar5 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsepos", 668,0289f, 78,103f, 1353,876f, 0.0f, 86,89158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, vLocal_4.z);
	bVar6 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwintrodog", 685,9432f, 78,30585f, 1366,368f, 0.0f, 360,1421f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, vLocal_4.z);
	bVar7 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcameraForemanPos", 676,0193f, 78,40328f, 1359,054f, 0.0f, -92,98987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, vLocal_4.z);
	bVar8 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwplayerEndPos", 689,4788f, 78,33612f, 1372,899f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, vLocal_4.z);
	bVar9 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwgateway", 692,931f, 78,403f, 1371,9f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, vLocal_4.z);
	bVar10 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwendforeman", 694,0552f, 78,403f, 1370,31f, 0.0f, 454,1318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, vLocal_4.z);
	bVar11 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "nf_nwfight", 753,3979f, 78,30585f, 1234,603f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, vLocal_4.z);
	bVar12 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight1", 687,6924f, 78,2358f, 1313,306f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, vLocal_4.z);
	bVar13 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight2", 765,6191f, 78,30585f, 1318,381f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, vLocal_4.z);
	bVar14 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight3", 803,7411f, 78,29465f, 1206,058f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, vLocal_4.z);
	bVar15 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight4", 678,4777f, 77,9265f, 1313,522f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, vLocal_4.z);
	bVar16 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight5", 735,6952f, 78,28503f, 1358,311f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, vLocal_4.z);
	bVar17 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight6", 665,8712f, 78,18673f, 1230,301f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, vLocal_4.z);
	bVar18 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwfight7", 712,6531f, 78,30591f, 1403,667f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, vLocal_4.z);
	bVar19 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup", 737,1954f, 78,30585f, 1172,066f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, vLocal_4.z);
	bVar20 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup1", 707,6347f, 78,30585f, 1306,578f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, vLocal_4.z);
	bVar21 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup2", 803,7749f, 79,33429f, 1253,836f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, vLocal_4.z);
	bVar22 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup3", 669,0963f, 77,83994f, 1276f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, vLocal_4.z);
	bVar23 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup4", 762,1121f, 78,30585f, 1377,888f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, vLocal_4.z);
	bVar24 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup5", 700,8335f, 78,30591f, 1406,333f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, vLocal_4.z);
	bVar25 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup6", 775,0374f, 78,30585f, 1337,305f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, vLocal_4.z);
	bVar26 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwholdup7", 628,4135f, 80,55706f, 1409,563f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, vLocal_4.z);
	bVar27 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse", 689,9352f, 78,30585f, 1218,744f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, vLocal_4.z);
	bVar28 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse1", 766,7617f, 78,30585f, 1268.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, vLocal_4.z);
	bVar29 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse2", 810,724f, 78,30591f, 1377,276f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, vLocal_4.z);
	bVar30 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse3", 713,3537f, 78,30585f, 1376.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, vLocal_4.z);
	bVar31 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse4", 642,5431f, 78,30585f, 1372f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, vLocal_4.z);
	bVar32 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse5", 779,855f, 84,25138f, 1425,924f, -0,4035701f, 1,052374f, -0,8999673f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, vLocal_4.z);
	bVar33 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwcorpse6", 746,2831f, 78,30585f, 1163,14f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, vLocal_4.z);
	bVar34 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwbreak_in", 697,2916f, 78,36908f, 1276,295f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, vLocal_4.z);
	bVar35 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwbreak_in1", 765,2625f, 78,30585f, 1294,671f, 0.0f, -88,77894f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, vLocal_4.z);
	bVar36 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwbreak_in2", 810,1047f, 79,57791f, 1234,743f, 0.0f, -182,1266f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, vLocal_4.z);
	bVar37 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwbreak_in3", 701,9269f, 78,30585f, 1345,812f, 0.0f, -271,0496f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, vLocal_4.z);
	bVar38 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwbreak_in4", 782,759f, 84,22276f, 1416,58f, 0.0f, -440,8147f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, vLocal_4.z);
	bVar39 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft", 691,0678f, 78,30585f, 1253,422f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, vLocal_4.z);
	bVar40 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft1", 736,3972f, 78,30585f, 1301,061f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, vLocal_4.z);
	bVar41 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft2", 788,081f, 78,30588f, 1291,295f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, vLocal_4.z);
	bVar42 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft3", 790,6352f, 78,3059f, 1331,601f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, vLocal_4.z);
	bVar43 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft4", 643,7003f, 78,09436f, 1265,727f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, vLocal_4.z);
	bVar44 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft5", 685,597f, 78,3079f, 1401,512f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, vLocal_4.z);
	bVar45 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwhorsetheft6", 789,5144f, 78,30589f, 1378,281f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, vLocal_4.z);
	bVar46 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "nf_nwthief", 682,0505f, 78,30585f, 1374,531f, 0.0f, -90,74362f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, vLocal_4.z);
	bVar47 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwthief1", 692,5495f, 78,30585f, 1349,331f, 0.0f, -270,0532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, vLocal_4.z);
	bVar48 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwthief2", 690,0426f, 78,30585f, 1267,495f, 0.0f, -270,0532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, vLocal_4.z);
	bVar49 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwthief3", 804,002f, 79,33429f, 1245,087f, 0.0f, -229,3683f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, vLocal_4.z);
	bVar50 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwthief4", 732,7404f, 78,30585f, 1276,613f, 0.0f, -88,25769f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, vLocal_4.z);
	bVar51 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwthief5", 737,3723f, 78,22346f, 1296,936f, 0.0f, -265,3612f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, vLocal_4.z);
	bVar52 = CREATE_POINT_IN_LAYOUT(vLocal_4.x, "f_nwthief6", 702,5386f, 78,30585f, 1334,033f, 0.0f, -181,8298f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, vLocal_4.z);
	return 1;
}

void Function_192(bool bParam0, var uParam1) //Position: 0x12F94 / 77716
{
	if (!Function_155(128))
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

