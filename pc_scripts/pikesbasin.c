//Decompiled with MagicRDR v1.0
//Function Count : 274
//Statics Count : 919
//Natives Count : 445
//Parameters Count : 2

#region Local Var
	struct<16> Local_0 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_270 = 2;
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
	int iLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 15;
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
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	float fLocal_509 = 0.0f;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512[2] = { 0, 0 };
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518[2] = { 0, 0 };
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524[2] = { 0, 0 };
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530[2] = { 0, 0 };
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	float fLocal_542 = 0.0f;
	var uLocal_543 = 0;
	var uLocal_544[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_570 = false;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	bool bLocal_579 = false;
	int iLocal_580 = 0;
	float fLocal_581 = 0.0f;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	bool bLocal_587 = false;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	bool bLocal_590 = false;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	bool bLocal_593 = false;
	bool bLocal_594 = false;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 2;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	int iLocal_608 = 2;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	int iLocal_618 = 2;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 2;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	int iLocal_638 = 4;
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
	int iLocal_656 = 4;
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
	bool bLocal_674 = false;
	int iLocal_675 = 0;
	bool bLocal_676 = false;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	bool bLocal_680 = false;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	int iLocal_684 = 0;
	bool bLocal_685 = false;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	var uLocal_690 = 0;
	bool bLocal_691 = false;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 5;
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
	int iLocal_808 = 1;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	bool bLocal_814 = false;
	int iLocal_815 = 0;
	bool bLocal_816 = false;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	int iLocal_821 = 0;
	bool bLocal_822 = false;
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
	struct<2> Local_849 = { 0, 0 } ;
	var uLocal_851 = 0;
	struct<2> Local_852 = { 0, 0 } ;
	var uLocal_854 = 0;
	struct<2> Local_855 = { 0, 0 } ;
	var uLocal_857 = 0;
	struct<2> Local_858 = { 0, 0 } ;
	var uLocal_860 = 0;
	struct<2> Local_861 = { 0, 0 } ;
	var uLocal_863 = 0;
	struct<2> Local_864 = { 0, 0 } ;
	var uLocal_866 = 0;
	struct<2> Local_867 = { 0, 0 } ;
	var uLocal_869 = 0;
	var uLocal_870[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	struct<2> Local_910 = { 0, 0 } ;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	bool bLocal_916 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_506 = 31;
	iLocal_507 = 33;
	iLocal_508 = 1;
	fLocal_509 = 2.0f;
	iLocal_582 = 0;
	iLocal_583 = 0;
	iLocal_584 = 0;
	iLocal_585 = 0;
	iLocal_586 = 0;
	bLocal_587 = false;
	iLocal_588 = 0;
	iLocal_589 = 0;
	bLocal_590 = false;
	iLocal_591 = 0;
	iLocal_592 = 0;
	bLocal_593 = false;
	bLocal_594 = false;
	iLocal_595 = 0;
	iLocal_596 = 0;
	iLocal_684 = 0;
	bLocal_685 = false;
	bLocal_816 = false;
	iLocal_821 = 0;
	bLocal_822 = true;
	uLocal_837 = Vector(0,992f, 0,166f, 1,992f);
	uLocal_840 = Vector(-1,178f, 0,167f, 1,987f);
	uLocal_843 = Vector(1,177f, 0,122f, -1,801f);
	uLocal_846 = Vector(-1,144f, 0,126f, -1,827f);
	Local_849 = Vector(-1451,619f, 77,59732f, 2285,729f);
	Local_852 = Vector(-1266,49f, 84,303f, 2402,563f);
	Local_855 = Vector(-1280,695f, 85,915f, 2367,501f);
	Local_858 = Vector(-1445,339f, 79,31211f, 2302,879f);
	Local_861 = Vector(-1447,415f, 79,31261f, 2303,509f);
	Local_864 = Vector(-1455,739f, 79,34842f, 2268,228f);
	Local_867 = Vector(-1457,966f, 79,35226f, 2268,882f);
	bLocal_916 = false;
	iLocal_688 = 0;
	iLocal_689 = &iScriptParam_0;
	bLocal_814 = Function_273(&(Global_43791[iScriptParam_0]));
	Function_271(&iLocal_808, "$/fragment/p_gen_testbridge01x", 0, 1);
	Unknown_Function();
	if (Global_11704 && iScriptParam_0)
	{
		Unknown_Function();
		if (8)
		{
			bLocal_916 = true;
			Unknown_Function();
		}
	}
	Unknown_Function();
	while (!IS_EXITFLAG_SET())
	{
		bLocal_691 = 1000;
		switch (iLocal_688)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_688 = 1;
				}
				bLocal_691 = false;
				break;
			
			case 0x00000001:
				Function_270();
				if (Function_270())
				{
					iLocal_688 = 2;
				}
				bLocal_691 = false;
				break;
			
			case 0x00000002:
				if (Function_268())
				{
					Function_267(&(Global_43791[iLocal_689]), 32);
					iLocal_688 = 3;
				}
				bLocal_691 = false;
				break;
			
			case 0x00000003:
				uLocal_692 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PikesBasinVol", &iLocal_689, 2, 0);
				Function_266(&Global_11704, &Global_13818, iScriptParam_0);
				iLocal_688 = 5;
				if (0 & Function_265())
				{
					uLocal_694 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Pikes_Basin/PikesBasinMP", 0);
				}
				bLocal_691 = false;
				break;
			
			case 0x00000005:
				if (Function_264(&Global_11704, &Global_13818, iScriptParam_0))
				{
					iLocal_688 = 4;
					bLocal_691 = false;
				}
				else
				{
					bLocal_691 = 25;
				}
				break;
			
			case 0x00000004:
				if (Function_263(&(Global_43791[iLocal_689]), 16) && Function_262(Global_44085[iScriptParam_09]))
				{
					iLocal_688 = 6;
				}
				bLocal_691 = false;
				break;
			
			case 0x00000006:
				Unknown_Function();
				if (((!Function_263(&(Global_43791[iScriptParam_0]), 256) && bLocal_814) && 2) && !Global_6623)
				{
					Function_255(0, &uLocal_696, &Local_0 + 1264);
					Function_254(0, &uLocal_696, &Local_0);
					Function_255(1, &uLocal_696, &Local_0 + 1272);
					Function_254(1, &uLocal_696, &Local_0);
					Function_255(2, &uLocal_696, &Local_0 + 1280);
					Function_254(2, &uLocal_696, &Local_0);
					Function_255(3, &uLocal_696, &Local_0 + 1288);
					Function_254(3, &uLocal_696, &Local_0);
					Function_255(4, &uLocal_696, &Local_0 + 1296);
					Function_254(4, &uLocal_696, &Local_0);
					Function_251(&Global_11704, &Global_13818, &uLocal_696, &Global_10996, iScriptParam_0);
				}
				else
				{
					bLocal_814 = false;
					iLocal_815 = 1;
				}
				Unknown_Function();
				if (Function_263(&(Global_43791[iScriptParam_0]), 256) || !2)
				{
					iLocal_815 = 1;
				}
				Function_267(&(Global_43791[iLocal_689]), 8);
				iLocal_688 = 7;
				bLocal_691 = false;
				break;
			
			case 0x00000007:
				iLocal_688 = 8;
				bLocal_691 = false;
				break;
			
			case 0x00000008:
				if (Function_250(iScriptParam_0, &Global_11704, iLocal_815))
				{
					Function_246(0, 0,1f, 3, &Local_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					Function_246(0, 0,5f, 3, &Local_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				Function_245(64);
				Function_241(2, 4294967295, 4294967295, 0, 3);
				Function_267(&(Global_43791[iLocal_689]), 512);
				iLocal_688 = 9;
				bLocal_691 = false;
				break;
			
			case 0x00000009:
				if (Function_237(&iLocal_808))
				{
					Function_235(&Local_0, iScriptParam_0);
					Function_267(&(Global_43791[iLocal_689]), 4);
					Function_234("Finished Initializing PikesBasin", 5.0f);
					iLocal_688 = 10;
					bLocal_691 = false;
					if (bLocal_814 && !Function_233(Global_46816[2]))
					{
						if ((!Global_6623 && !Global_6625) && !Global_6627)
						{
							bLocal_674 = Function_228(0, Global_46816[2], 3);
							if (Function_227(9, 0) || !Global_6606)
							{
								Function_225();
							}
							else
							{
								bLocal_814 = false;
							}
						}
					}
					else
					{
						bLocal_814 = false;
					}
					Function_223(&(Global_43791[iLocal_689]));
					if (bLocal_822)
					{
						uLocal_829 = CREATE_LAYOUT("Pik_bridge_layout");
						uLocal_823 = CREATE_PROP_IN_LAYOUT(3, &uLocal_829, "Pikes_RopeBridge1", "$/fragments/p_gen_testBridge01x", Local_849, Vector(0.0f, 17.0f, 0.0f), 1);
						uLocal_831 = GET_PHYSINST_FROM_OBJECT(&uLocal_823);
						if (0 || IS_PS3())
						{
							SET_PHYSINST_FROZEN(&uLocal_831, true);
							SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_823, 0);
						}
						else
						{
							SET_PHYSINST_FROZEN(&uLocal_831, false);
							SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_823, 0);
						}
						uLocal_884[0] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_831, "boardJoint09", &uLocal_837, &Local_858, 0.0f);
						uLocal_884[1] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_831, "boardJoint09", &uLocal_840, &Local_861, 0.0f);
						uLocal_884[2] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_831, "boardJoint18", &uLocal_843, &Local_864, 0.0f);
						uLocal_884[3] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_831, "boardJoint18", &uLocal_846, &Local_867, 0.0f);
						SET_PROP_AI_OBSTACLE_ENABLED(&uLocal_823, 0);
						if (!(0 || IS_PS3()))
						{
							SET_BRIDGE_STIFFNESS(&uLocal_831, 0,9f);
							SET_SLEEP_TOLERANCE(&uLocal_831, 0.0f);
							if (!IS_LAYOUTREF_VALID(&uLocal_829))
							{
								LOG_ERROR("nNo layout");
							}
						}
						uLocal_870[0] = CREATE_ROPE_FOR_BRIDGE_LEFT(&uLocal_829, "nRopeName1", &uLocal_831);
						uLocal_870[1] = CREATE_ROPE_FOR_BRIDGE_RIGHT(&uLocal_829, "nRopeName2", &uLocal_831);
						uLocal_825 = CREATE_PROP_IN_LAYOUT("Initializing PikesBasin", &uLocal_829, "Pikes_RopeBridge2", "$/fragments/p_gen_testBridge01x", Local_852, Vector(-3,683f, -115,073f, 0.0f), 1);
						uLocal_833 = GET_PHYSINST_FROM_OBJECT(&uLocal_825);
						if (0 || IS_PS3())
						{
							SET_PHYSINST_FROZEN(&uLocal_833, true);
							SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_825, 0);
						}
						else
						{
							SET_PHYSINST_FROZEN(&uLocal_833, false);
							SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_825, 0);
						}
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_858, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_825, Local_910, &uLocal_913);
						uLocal_884[4] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_833, "boardJoint09", &uLocal_837, &uLocal_913, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_861, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_825, Local_910, &uLocal_913);
						uLocal_884[5] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_833, "boardJoint09", &uLocal_840, &uLocal_913, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_864, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_825, Local_910, &uLocal_913);
						uLocal_884[6] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_833, "boardJoint18", &uLocal_843, &uLocal_913, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_867, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_825, Local_910, &uLocal_913);
						uLocal_884[7] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_833, "boardJoint18", &uLocal_846, &uLocal_913, 0.0f);
						SET_PROP_AI_OBSTACLE_ENABLED(&uLocal_825, 0);
						if (!(0 || IS_PS3()))
						{
							SET_BRIDGE_STIFFNESS(&uLocal_833, 0,9f);
							SET_SLEEP_TOLERANCE(&uLocal_833, 0.0f);
							if (!IS_LAYOUTREF_VALID(&uLocal_829))
							{
								LOG_ERROR("No layout2");
							}
						}
						uLocal_870[2] = CREATE_ROPE_FOR_BRIDGE_LEFT(&uLocal_829, "nRopeName3", &uLocal_833);
						uLocal_870[3] = CREATE_ROPE_FOR_BRIDGE_RIGHT(&uLocal_829, "nRopeName4", &uLocal_833);
						uLocal_827 = CREATE_PROP_IN_LAYOUT(8, &uLocal_829, "Pikes_RopeBridge3", "$/fragments/p_gen_testBridge01x", Local_855, Vector(-0,043f, -13,408f, 0.0f), 1);
						uLocal_835 = GET_PHYSINST_FROM_OBJECT(&uLocal_827);
						if (0 || IS_PS3())
						{
							SET_PHYSINST_FROZEN(&uLocal_835, true);
							SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_827, 0);
						}
						else
						{
							SET_PHYSINST_FROZEN(&uLocal_835, false);
							SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_827, 0);
						}
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_858, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_827, Local_910, &uLocal_913);
						uLocal_884[8] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_835, "boardJoint09", &uLocal_837, &uLocal_913, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_861, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_827, Local_910, &uLocal_913);
						uLocal_884[9] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_835, "boardJoint09", &uLocal_840, &uLocal_913, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_864, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_827, Local_910, &uLocal_913);
						uLocal_884[10] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_835, "boardJoint18", &uLocal_843, &uLocal_913, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(&uLocal_823, Local_867, &Local_910);
						GET_OBJECT_RELATIVE_POSITION(&uLocal_827, Local_910, &uLocal_913);
						uLocal_884[11] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&uLocal_835, "boardJoint18", &uLocal_846, &uLocal_913, 0.0f);
						SET_PROP_AI_OBSTACLE_ENABLED(&uLocal_827, 0);
						if (!(0 || IS_PS3()))
						{
							SET_BRIDGE_STIFFNESS(&uLocal_835, 0,9f);
							SET_SLEEP_TOLERANCE(&uLocal_835, 0.0f);
							if (!IS_LAYOUTREF_VALID(&uLocal_829))
							{
								LOG_ERROR("No layout3");
							}
						}
						uLocal_870[4] = CREATE_ROPE_FOR_BRIDGE_LEFT(&uLocal_829, "nRopeName5", &uLocal_835);
						uLocal_870[5] = CREATE_ROPE_FOR_BRIDGE_RIGHT(&uLocal_829, "nRopeName6", &uLocal_835);
						Function_222(&uLocal_817, 0.0f);
					}
					else
					{
						LOG_WARNING("Not making bridges.");
					}
				}
				break;
			
			case 0x0000000A:
				Function_219();
				if (bLocal_814)
				{
					bLocal_814 = Function_46();
					bLocal_816 = true;
					bLocal_691 = false;
				}
				if (bLocal_822)
				{
					if (!iLocal_821 && !(0 || IS_PS3()))
					{
						if (Function_42(&uLocal_817, 1.0f))
						{
							SET_BRIDGE_STIFFNESS(&uLocal_831, 0,2f);
							SET_BRIDGE_STIFFNESS(&uLocal_833, 0,2f);
							SET_BRIDGE_STIFFNESS(&uLocal_835, 0,2f);
							iLocal_821 = 1;
						}
					}
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_691);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_829))
	{
		DESTROY_LAYOUT(&uLocal_829);
	}
	iLocal_580 = 0;
	while (iLocal_580 < 11)
	{
		if (&uLocal_884[iLocal_580] != "")
		{
			RELEASE_CONSTRAINT(&(uLocal_884[iLocal_580]));
		}
		iLocal_580++;
	}
	iLocal_580 = 0;
	while (iLocal_580 < 5)
	{
		if (IS_OBJECT_VALID(&(uLocal_870[iLocal_580])))
		{
			DESTROY_OBJECT(&(uLocal_870[iLocal_580]));
		}
		iLocal_580++;
	}
	if (Function_41(bLocal_674) == 2)
	{
		Function_31(bLocal_674);
	}
	if (bLocal_816)
	{
		Function_22();
	}
	if (bLocal_916)
	{
		Function_21(8);
	}
	Function_19();
	Function_8(&Global_11704, &Global_13818, iScriptParam_0, iLocal_815);
	Function_7();
	Function_2();
	Function_245(64);
	Function_1(&(Global_43791[iLocal_689]), 32);
	Function_1(&(Global_43791[iLocal_689]), 64);
	Function_1(&(Global_43791[iLocal_689]), 8);
	Function_1(&(Global_43791[iLocal_689]), 512);
	Function_1(&(Global_43791[iLocal_689]), 4);
	if (IS_SCRIPT_VALID(&uLocal_694))
	{
		TERMINATE_SCRIPT(&uLocal_694);
	}
	if (IS_SCRIPT_VALID(&uLocal_692))
	{
		TERMINATE_SCRIPT(&uLocal_692);
	}
	Function_234("Unloaded PikesBasin", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xCE5 / 3301
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xCFF / 3327
{
	Function_3(&iLocal_352 + 8);
	RELEASE_LAYOUT_REF(&iLocal_352);
	return;
}

void Function_3(int iParam0) //Position: 0xD14 / 3348
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_4(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0xD3C / 3388
{
	if (Function_6(&(Param0[iParam12]), 4))
	{
		if (Function_6(&(Param0[iParam12]), 1))
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
			Function_5(&(Param0[iParam12]), 1);
			Function_5(&(Param0[iParam12]), 2);
			Function_5(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_5(struct<13> Param0) //Position: 0xE87 / 3719
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0xEA4 / 3748
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0xEC2 / 3778
{
	RELEASE_LAYOUT_REF(&Local_0);
	return;
}

void Function_8(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xECE / 3790
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
	strcpy(&cVar0, Function_17(bParam2), 64);
	if (Function_15())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_263(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_43791[bParam2]), 0x40000000);
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (!Function_14(&(Param0[bVar162]), 1))
		{
			if ((!vParam1[bVar163] != 4294967295 && !vParam1[bVar163] != 0) && Function_14(&(Param0[bVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[bVar163], 4294967295);
				Function_13(&(Param0[bVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[bVar163] + 8) && Function_14(&(Param0[bVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[bVar163] + 8);
			Function_13(&(Param0[bVar162]), 16);
		}
		bVar16++;
	}
	if (!Function_263(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	Unknown_Function();
	if (!2 || Function_263(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (Function_14(&(Param0[bVar162]), 2) && !Function_14(&(Param0[bVar162]), 4))
		{
			Function_9(&Param0, &vParam1, bVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_14(&(Param0[bVar162]), 2) && !Function_14(&(Param0[bVar162]), 4))
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
			Function_267(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_9(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x10EC / 4332
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_12(&(Param0[bParam22]), 4);
				(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_11(Global_43790), Function_10(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_14(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_14(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_12(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_11(Global_43790), Function_10(Global_43790), false, 0);
	}
}

int Function_10(int iParam0) //Position: 0x1252 / 4690
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

int Function_11(int iParam0) //Position: 0x127D / 4733
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

void Function_12(var uParam0, int iParam1) //Position: 0x12B1 / 4785
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x12C2 / 4802
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_14(int iParam0, int iParam1) //Position: 0x12DC / 4828
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_15() //Position: 0x12F9 / 4857
{
	if (Function_16(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_16(bool bParam0, bool bParam1) //Position: 0x1314 / 4884
{
	return (bParam0 && bParam1) == 0;
}

var Function_17(int iParam0) //Position: 0x1321 / 4897
{
	if (!Function_18(iParam0))
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

bool Function_18(int iParam0) //Position: 0x17CF / 6095
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_19() //Position: 0x17E5 / 6117
{
	if (IS_OBJECTSET_VALID(&uLocal_686))
	{
		Function_20(&uLocal_686);
		DESTROY_OBJECTSET(&uLocal_686);
	}
	return;
}

void Function_20(var uParam0) //Position: 0x1803 / 6147
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

void Function_21(bool bParam0) //Position: 0x1852 / 6226
{
	if (Function_16(bParam0, 1) && !Function_16(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_22() //Position: 0x187F / 6271
{
	Function_3(&iLocal_598);
	Function_3(&iLocal_608);
	Function_3(&iLocal_618);
	Function_3(&iLocal_628);
	Function_3(&iLocal_638);
	Function_3(&iLocal_656);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	CLEAR_PRINTED_OBJECTIVE();
	DECOR_SET_BOOL(&Global_54076, "CleanupHerding", true);
	REMOVE_JOURNAL_ENTRY(iLocal_675, false);
	if (!Function_16(bLocal_579, 2))
	{
		DECOR_REMOVE(&Global_54076, "PIK_HerdingStarted");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "MakeBadAgain"))
	{
		DECOR_REMOVE(&Global_54076, "MakeBadAgain");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PlayerTalkedHelper"))
	{
		DECOR_REMOVE(&Global_54076, "PlayerTalkedHelper");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PlayerAggroing"))
	{
		DECOR_REMOVE(&Global_54076, "PlayerAggroing");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "RancherDead"))
	{
		DECOR_REMOVE(&Global_54076, "RancherDead");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PrintThruCut"))
	{
		DECOR_REMOVE(&Global_54076, "PrintThruCut");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "RemoveExtraBlips"))
	{
		DECOR_REMOVE(&Global_54076, "RemoveExtraBlips");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PIK_GivenObjective"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_GivenObjective");
	}
	if (IS_ACTOR_VALID(&uLocal_536))
	{
		RELEASE_ACTOR(&uLocal_536);
	}
	if (IS_ACTOR_VALID(&uLocal_538))
	{
		RELEASE_ACTOR(&uLocal_538);
	}
	if (IS_ACTOR_VALID(&uLocal_540))
	{
		RELEASE_ACTOR(&uLocal_540);
	}
	if (IS_ACTOR_VALID(&fLocal_542))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&fLocal_542)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&fLocal_542));
		}
	}
	iLocal_580 = 0;
	while (iLocal_580 < 4)
	{
		Function_29(&Global_11704, &Global_13818, iLocal_580, 0);
		iLocal_580++;
	}
	iLocal_580 = 0;
	while (iLocal_580 < 11)
	{
		if (Function_28(&(uLocal_544[iLocal_580]), 1))
		{
			Function_27(&(uLocal_544[iLocal_580]));
		}
		iLocal_580++;
	}
	if (Function_28(&bLocal_570, 1))
	{
		Function_27(&bLocal_570);
	}
	iLocal_580 = 0;
	while (iLocal_580 < 11)
	{
		Function_25(&(uLocal_544[iLocal_580]), 0, 0);
		DESTROY_OBJECT(&(uLocal_544[iLocal_580]));
		iLocal_580++;
	}
	RESET_FACTIONS_STATUS_TWO_WAY(14, 2);
	if (Function_41(bLocal_674) == 2)
	{
		Function_31(bLocal_674);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_510))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_510);
		RELEASE_LAYOUT_REF(&uLocal_510);
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	Function_23(1);
	return;
}

void Function_23(int iParam0) //Position: 0x1B94 / 7060
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_24())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_24() //Position: 0x1BD4 / 7124
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

void Function_25(var uParam0, bool bParam1, bool bParam2) //Position: 0x1BF9 / 7161
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
				if (!Function_26(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_26(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1C82 / 7298
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_27(bool bParam0) //Position: 0x1CA2 / 7330
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

bool Function_28(bool bParam0, bool bParam1) //Position: 0x1CF6 / 7414
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_29(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x1D52 / 7506
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_14(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_14(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_14(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_13(&(Param0[iVar02]), 8);
	}
	Function_13(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_30(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_9(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_30(int iParam0) //Position: 0x1DFA / 7674
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

void Function_31(bool bParam0) //Position: 0x1EA3 / 7843
{
	int iVar0;
	
	if (!Function_39(bParam0))
	{
		Function_37();
		return;
	}
	iVar0 = Function_36(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_32("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_32(var uParam0, bool bParam1) //Position: 0x1EF6 / 7926
{
	struct<4> Var0;
	
	if (!Function_39(bParam1))
	{
		return;
	}
	switch (Function_36(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_33(Function_34(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_36(bParam1), Function_34(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_36(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_36(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_36(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_36(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_36(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_33(int iParam0) //Position: 0x2020 / 8224
{
	char* cVar0[16];
	
	if (!Function_15())
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

int Function_34(bool bParam0) //Position: 0x205A / 8282
{
	if (!Function_35(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_35(int iParam0) //Position: 0x207A / 8314
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_36(bool bParam0) //Position: 0x2091 / 8337
{
	if (!Function_35(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_37() //Position: 0x20AC / 8364
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
			Function_38(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_38(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x22F3 / 8947
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_39(int iParam0) //Position: 0x231F / 8991
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	if (!Function_40(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_40(int iParam0) //Position: 0x2343 / 9027
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_41(int iParam0) //Position: 0x2358 / 9048
{
	if (!Function_39(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_42(bool bParam0, float fParam1) //Position: 0x2372 / 9074
{
	if (Function_45(&bParam0))
	{
		if (Function_43(&bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_43(vector3 vParam0) //Position: 0x2390 / 9104
{
	if (Function_45(&vParam0))
	{
		if (Function_44(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_44(int iParam0) //Position: 0x245D / 9309
{
	return Function_16(iParam0, 2);
}

bool Function_45(bool bParam0) //Position: 0x246B / 9323
{
	return Function_16(bParam0, 1);
}

bool Function_46() //Position: 0x2479 / 9337
{
	var uVar0;
	var uVar1;
	var uVar3;
	var uVar5;
	var uVar7;
	var uVar9;
	int iVar11;
	var uVar12;
	int iVar14;
	
	if ((Global_6623 || Global_6625) || Global_6627)
	{
		return 0;
	}
	GET_POSITION(&Global_54076, &uLocal_576);
	switch (iLocal_597)
	{
		case 0x00000000:
			if (Function_218())
			{
				Function_217();
				iLocal_597 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_218())
			{
				Function_216();
				iLocal_597 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_218())
			{
				Function_215();
				iLocal_597 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_218())
			{
				Function_214();
				iLocal_597 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_218())
			{
				Function_211();
				iLocal_597 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_218())
			{
				iLocal_597 = 6;
			}
			break;
		
		case 0x00000006:
			if (GET_AMBIENT_NUM_ACTORS_GRANTED_FOR_MISSIONS() > 38)
			{
				if (!Function_207(&bLocal_570))
				{
					return 0;
				}
				Function_204();
				uLocal_572 = CREATE_OBJECTSET_IN_LAYOUT("PIK_AreaChests", &uLocal_510, 4294967295, 0);
				Function_201(&uLocal_510, &Local_0 + 1072, &uLocal_572);
				Function_195();
				Function_194(&Local_0 + 1264);
				uVar1 = Function_194(&Local_0 + 1264);
				Function_194(&Local_0 + 1272);
				uVar3 = Function_194(&Local_0 + 1272);
				Function_194(&Local_0 + 1280);
				uVar5 = Function_194(&Local_0 + 1280);
				Function_194(&Local_0 + 1288);
				uVar7 = Function_194(&Local_0 + 1288);
				Function_194(&Local_0 + 1296);
				uVar9 = Function_194(&Local_0 + 1296);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, false), &uVar1, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, true), &uVar3, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, 2), &uVar5, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, 3), &uVar7, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, 4), &uVar9, 1, 1, 1);
				iLocal_597 = 7;
			}
			break;
		
		case 0x00000007:
			if (!bLocal_593)
			{
				bLocal_593 = Function_191(StackVal, Vector(-1178,384f, 76,568f, 2359,734f), 0, 0);
			}
			if (!iLocal_586)
			{
				if (Global_42825 == 5)
				{
					iVar11 = 0;
					while (iVar11 < 11)
					{
						SQUAD_SET_FACTION(&(uLocal_544[iVar11]), 21);
						Function_190(&(uLocal_544[iVar11]), &Global_54076, 2);
						iVar11++;
					}
					SQUAD_SET_FACTION(&bLocal_570, 21);
					Function_190(&bLocal_570, &Global_54076, 2);
					iLocal_586 = 1;
				}
			}
			if (!iLocal_588)
			{
				if (SQUAD_IS_VALID(&(uLocal_544[4])))
				{
					if (SQUAD_GET_SIZE(&(uLocal_544[4])) == 3)
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[4]), 2)))
						{
							Function_194(&Local_0 + 656);
							uVar12 = Function_194(&Local_0 + 656);
							SET_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[4]), 2), &Local_0 + 328, 2, true);
							TASK_SHOOT_ENEMIES_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[4]), 2), &uVar12, -204.0f, -1.0f);
							iLocal_588 = 1;
						}
					}
				}
			}
			if (!iLocal_595)
			{
				if (Global_6628)
				{
					iVar14 = 0;
					while (iVar14 <= 4)
					{
						if (!Function_14(&(Global_11704[iVar142]), 2) || Function_14(&(Global_11704[iVar142]), 4))
						{
							bLocal_594 = true;
						}
						iVar14++;
					}
					if (!bLocal_594)
					{
						uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_03");
						SC_CHALLENGE_LAUNCH(&uVar0);
						if (!Function_45(&bLocal_680))
						{
							Function_189(&bLocal_680);
						}
						else
						{
							Function_188(&bLocal_680);
						}
						iLocal_595 = 1;
					}
				}
			}
			Function_186("sc_challenge_aa_03", &bLocal_680);
			if (!bLocal_590)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "RancherDead") || DECOR_CHECK_EXIST(&Global_54076, "KilledCows"))
				{
					if (!Global_6628)
					{
						Global_6628 = 1;
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "RancherDead") && DECOR_CHECK_EXIST(&Global_54076, "PIK_GivenObjective"))
					{
						if (!bLocal_587)
						{
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
							}
							Function_185("PIK_Obj_RancherDead", 0x40f00000, 1, 2, 0, 0, 0, 0);
							bLocal_587 = true;
						}
					}
					if (bLocal_587)
					{
						if (!iLocal_596)
						{
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_570) == 0)
							{
								if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 216))
								{
									if (!HUD_IS_SHOWING_OBJECTIVE())
									{
										Function_185("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0, 0);
										if (SQUAD_IS_VALID(&(uLocal_544[3])))
										{
											if (!Function_28(&(uLocal_544[3]), 1))
											{
												Function_184(&(uLocal_544[3]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
											}
										}
										if (SQUAD_IS_VALID(&(uLocal_544[4])))
										{
											if (!Function_28(&(uLocal_544[4]), 1))
											{
												Function_184(&(uLocal_544[4]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
											}
										}
										iLocal_596 = 1;
									}
								}
							}
						}
					}
					if ((((((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[0])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[1])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[2])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[3])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[4])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[5])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[6])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[7])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_570) != 0)
					{
						if (!Function_183())
						{
							Function_182(9, 0, 1);
						}
						else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
						{
							Function_182(9, 0, 1);
						}
						SET_WEAPONENUM_LOCKED(15, 0);
						GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, false, 1, 1);
						if (Function_45(&bLocal_680))
						{
							fLocal_581 = Function_43(&bLocal_680);
							if (Function_181(462) < 0.0f)
							{
								if (fLocal_581 > Function_181(462))
								{
									Function_180(462, fLocal_581, 0);
								}
							}
							else
							{
								Function_180(462, fLocal_581, 0);
							}
						}
						Function_179(Function_228(0, Global_46816[2], 3), 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						if (DECOR_CHECK_EXIST(&Global_54076, "RancherDead"))
						{
							DECOR_REMOVE(&Global_54076, "RancherDead");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "KilledCows"))
						{
							DECOR_REMOVE(&Global_54076, "KilledCows");
						}
						if (!Function_45(&bLocal_676))
						{
							Function_189(&bLocal_676);
						}
						uLocal_574 = Function_175(&uLocal_510, 0, 1, 1, 0);
						bLocal_590 = true;
					}
				}
			}
			if (!iLocal_592)
			{
				if (bLocal_590)
				{
					if (Function_45(&bLocal_676))
					{
						if (Function_43(&bLocal_676) <= 2.0f)
						{
							Function_172(1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
							UI_PUSH("CutsceneWithMessages");
							Function_171(&uLocal_574, 0);
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							Function_188(&bLocal_676);
							iLocal_592 = 1;
						}
					}
				}
			}
			if (!iLocal_591)
			{
				if (Function_45(&bLocal_676))
				{
					if (Function_43(&bLocal_676) <= 7.0f)
					{
						Function_167(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
						UI_POP("CutsceneWithMessages");
						Function_163(200, 1, 0);
						Function_150(50, 1, 0);
						Function_147(Function_148(1, 1, 1, 0, 0), 1, 1);
						SET_WEAPONENUM_LOCKED(15, 0);
						GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, false, 1, 1);
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_116(Global_46950);
						Function_58(Global_46950, 1, 1, 0);
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						if ((Function_57(Function_228(0, Global_46796[3], 3)) <= 1 && Function_57(Function_228(0, Global_46760[2], 3)) <= 1) && Function_57(Function_228(0, Global_46816[2], 3)) <= 1)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
							{
								AWARD_ACHIEVEMENT(12);
							}
						}
						iLocal_591 = 1;
					}
				}
			}
			if (Function_45(&bLocal_676))
			{
				if (Function_43(&bLocal_676) <= 10.0f)
				{
					iLocal_597 = 8;
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "RemoveExtraBlips"))
			{
				iLocal_580 = 0;
				while (iLocal_580 < 11)
				{
					if (Function_28(&(uLocal_544[iLocal_580]), 1))
					{
						Function_27(&(uLocal_544[iLocal_580]));
					}
					iLocal_580++;
				}
				if (Function_28(&bLocal_570, 1))
				{
					Function_27(&bLocal_570);
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "TriggerSpecialCase"))
			{
				iLocal_597 = 8;
			}
			Function_51();
			Function_49();
			Function_47();
			if (DECOR_CHECK_EXIST(&Global_54076, "EndMission"))
			{
				iLocal_597 = 8;
			}
			break;
		
		case 0x00000008:
			if (!iLocal_582)
			{
				Function_22();
				iLocal_582 = 1;
			}
			break;
	}
	return 1;
}

void Function_47() //Position: 0x2CDA / 11482
{
	if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper1"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper1");
		Function_48("PIK_AfterKillHelper_Obj", 0, -1.0f, 0, 0, 0);
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper2"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper2");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper3"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper3");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper4"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper4");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper5"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper5");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper7"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper7");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper8"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper8");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "PIK_PlayerKilledHelper9"))
	{
		DECOR_REMOVE(&Global_54076, "PIK_PlayerKilledHelper9");
	}
	return;
}

int Function_48(char* cParam0) //Position: 0x2F48 / 12104
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			*(&Global_99485[iVar019] + 64) = &uParam1;
			Global_99485[iVar019].f_72 = uParam2;
			Global_99485[iVar019].f_76 = uParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_49() //Position: 0x2FD5 / 12245
{
	if (!iLocal_583)
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 216) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[4])) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[3])) != 0)
		{
			if (!Function_28(&bLocal_570, 1))
			{
				Function_184(&bLocal_570, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				iLocal_583 = 1;
			}
		}
	}
	if (!Function_16(bLocal_579, 32))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 224) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[6])) != 0)
		{
			if (!Function_28(&(uLocal_544[7]), 1))
			{
				Function_184(&(uLocal_544[7]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 32);
			}
		}
	}
	if (!Function_16(bLocal_579, 64))
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 232) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[7])) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[5])) != 0)
		{
			if (!Function_28(&(uLocal_544[6]), 1))
			{
				Function_184(&(uLocal_544[6]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 64);
			}
		}
	}
	if (!Function_16(bLocal_579, 128))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 240) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[6])) != 0)
		{
			if (!Function_28(&(uLocal_544[5]), 1))
			{
				Function_184(&(uLocal_544[5]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 128);
			}
		}
	}
	if (!Function_16(bLocal_579, 256))
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 248) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[5])) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_570) != 0)
		{
			if (!Function_28(&(uLocal_544[4]), 1))
			{
				Function_184(&(uLocal_544[4]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 256);
			}
		}
	}
	if (!Function_16(bLocal_579, 512))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 256) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[2])) != 0)
		{
			if (!Function_28(&(uLocal_544[3]), 1))
			{
				Function_184(&(uLocal_544[3]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 512);
			}
		}
	}
	if (!Function_16(bLocal_579, 1024))
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 264) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[3])) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[1])) != 0)
		{
			if (!Function_28(&(uLocal_544[2]), 1))
			{
				Function_184(&(uLocal_544[2]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 1024);
			}
		}
	}
	if (!Function_16(bLocal_579, 2048))
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 272) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[2])) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[0])) != 0)
		{
			if (!Function_28(&(uLocal_544[1]), 1))
			{
				Function_184(&(uLocal_544[1]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 2048);
			}
		}
	}
	if (!Function_16(bLocal_579, 4096))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_0 + 280) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(uLocal_544[1])) != 0)
		{
			if (!Function_28(&(uLocal_544[0]), 1))
			{
				Function_184(&(uLocal_544[0]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_50(&bLocal_579, 4096);
			}
		}
	}
	return;
}

void Function_50(bool bParam0, bool bParam1) //Position: 0x3354 / 13140
{
	bParam0 = (bParam0 || bParam1);
	return;
}

int Function_51() //Position: 0x3365 / 13157
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	
	if (!iLocal_585)
	{
		if (((Function_55(&Global_54076, &bLocal_570, 1, 1, 1, 20.0f) && !Global_42825 != 5) || Function_55(&Global_54076, &bLocal_570, 1, 1, 1, 0.0f)) || DECOR_CHECK_EXIST(&Global_54076, "MakeBadAgain"))
		{
			DECOR_REMOVE(&Global_54076, "MakeBadAgain");
			if (!DECOR_CHECK_EXIST(&Global_54076, "PlayerTalkedHelper"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			}
			if (!DECOR_CHECK_EXIST(&Global_54076, "PrintThruCut"))
			{
				if (!iLocal_589)
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_185("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_589 = 1;
				}
			}
			Function_54(&bLocal_570);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_570, true, 1, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
			SQUAD_SET_FACTION(&bLocal_570, 19);
			Function_190(&bLocal_570, &Global_54076, 4);
			Function_53(&bLocal_570, &Global_54076);
			Function_52(&(uLocal_544[0]), &Global_54076, 1);
			Function_52(&(uLocal_544[1]), &Global_54076, 1);
			Function_52(&(uLocal_544[2]), &Global_54076, 1);
			Function_52(&(uLocal_544[3]), &Global_54076, 1);
			Function_52(&(uLocal_544[4]), &Global_54076, 1);
			Function_52(&(uLocal_544[5]), &Global_54076, 1);
			Function_52(&(uLocal_544[6]), &Global_54076, 1);
			Function_52(&(uLocal_544[7]), &Global_54076, 1);
			Function_52(&(uLocal_544[8]), &Global_54076, 1);
			Function_52(&(uLocal_544[9]), &Global_54076, 1);
			Function_52(&(uLocal_544[10]), &Global_54076, 1);
			Function_52(&(uLocal_544[11]), &Global_54076, 1);
			Function_52(&bLocal_570, &Global_54076, 1);
			iVar0 = 0;
			while (iVar0 < 11)
			{
				Function_54(&(uLocal_544[iVar0]));
				SQUAD_GOAL_ADD_GENERAL_TASK(&(uLocal_544[iVar0]), true, 1, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				SQUAD_SET_FACTION(&(uLocal_544[iVar0]), 19);
				Function_190(&(uLocal_544[iVar0]), &Global_54076, 4);
				Function_53(&(uLocal_544[iVar0]), &Global_54076);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				bVar2 = false;
				while (bVar2 < (SQUAD_GET_SIZE(&(uLocal_544[iVar1])) - 1))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar1]), bVar2)))
					{
						AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar1]), bVar2), 1);
					}
					bVar2++;
				}
				iVar1++;
			}
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(&bLocal_570) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, bVar3)))
				{
					AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, bVar3), 1);
				}
				bVar3++;
			}
			DECOR_SET_BOOL(&Global_54076, "PlayerAggroing", true);
			iLocal_585 = 1;
		}
	}
	if (!iLocal_584)
	{
		iVar4 = 0;
		while (iVar4 < 11)
		{
			if (((Function_55(&Global_54076, &(uLocal_544[iVar4]), 1, 1, 1, 20.0f) && !Global_42825 != 5) || Function_55(&Global_54076, &(uLocal_544[iVar4]), 1, 1, 1, 0.0f)) || DECOR_CHECK_EXIST(&Global_54076, "MakeBadAgain"))
			{
				DECOR_REMOVE(&Global_54076, "MakeBadAgain");
				if (!DECOR_CHECK_EXIST(&Global_54076, "PlayerTalkedHelper"))
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				}
				if (!DECOR_CHECK_EXIST(&Global_54076, "PrintThruCut"))
				{
					if (!iLocal_589)
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_185("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iLocal_589 = 1;
					}
				}
				Function_52(&(uLocal_544[0]), &Global_54076, 1);
				Function_52(&(uLocal_544[1]), &Global_54076, 1);
				Function_52(&(uLocal_544[2]), &Global_54076, 1);
				Function_52(&(uLocal_544[3]), &Global_54076, 1);
				Function_52(&(uLocal_544[4]), &Global_54076, 1);
				Function_52(&(uLocal_544[5]), &Global_54076, 1);
				Function_52(&(uLocal_544[6]), &Global_54076, 1);
				Function_52(&(uLocal_544[7]), &Global_54076, 1);
				Function_52(&(uLocal_544[8]), &Global_54076, 1);
				Function_52(&(uLocal_544[9]), &Global_54076, 1);
				Function_52(&(uLocal_544[10]), &Global_54076, 1);
				Function_52(&(uLocal_544[11]), &Global_54076, 1);
				Function_52(&bLocal_570, &Global_54076, 1);
				iVar5 = 0;
				while (iVar5 < 11)
				{
					Function_54(&(uLocal_544[iVar5]));
					SQUAD_GOAL_ADD_GENERAL_TASK(&(uLocal_544[iVar5]), true, 1, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					SQUAD_SET_FACTION(&(uLocal_544[iVar5]), 19);
					Function_190(&(uLocal_544[iVar5]), &Global_54076, 4);
					Function_53(&(uLocal_544[iVar5]), &Global_54076);
					iVar5++;
				}
				iVar6 = 0;
				while (iVar6 < 11)
				{
					bVar7 = false;
					while (bVar7 < (SQUAD_GET_SIZE(&(uLocal_544[iVar6])) - 1))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar6]), bVar7)))
						{
							AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar6]), bVar7), 1);
						}
						bVar7++;
					}
					iVar6++;
				}
				bVar8 = false;
				while (bVar8 < (SQUAD_GET_SIZE(&bLocal_570) - 1))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, bVar8)))
					{
						AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_570, bVar8), 1);
					}
					bVar8++;
				}
				Function_54(&bLocal_570);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_570, true, 1, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				SQUAD_SET_FACTION(&bLocal_570, 19);
				Function_190(&bLocal_570, &Global_54076, 4);
				Function_53(&bLocal_570, &Global_54076);
				DECOR_SET_BOOL(&Global_54076, "PlayerAggroing", true);
				iLocal_584 = 1;
			}
			iVar4++;
		}
	}
	iVar9 = 0;
	while (iVar9 < 2)
	{
		bVar10 = false;
		while (bVar10 < (SQUAD_GET_SIZE(&(uLocal_544[iVar9])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10)))
			{
				if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10)))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10))))
					{
						ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10), 322, 0, 2, 0);
					}
				}
			}
			bVar10++;
		}
		iVar9++;
	}
	iVar9 = 4;
	while (iVar9 < 6)
	{
		bVar10 = false;
		while (bVar10 < (SQUAD_GET_SIZE(&(uLocal_544[iVar9])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10)))
			{
				if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10)))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10))))
					{
						ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10), 322, 0, 2, 0);
					}
				}
			}
			bVar10++;
		}
		iVar9++;
	}
	iVar9 = 8;
	while (iVar9 < 11)
	{
		bVar10 = false;
		while (bVar10 < (SQUAD_GET_SIZE(&(uLocal_544[iVar9])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10)))
			{
				if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10)))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10))))
					{
						ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[iVar9]), bVar10), 322, 0, 2, 0);
					}
				}
			}
			bVar10++;
		}
		iVar9++;
	}
	return 1;
}

void Function_52(int iParam0, var uParam1, bool bParam2) //Position: 0x3AEB / 15083
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
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

void Function_53(bool bParam0, int iParam1) //Position: 0x3B63 / 15203
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_54(bool bParam0) //Position: 0x3BBE / 15294
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_55(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x3BF3 / 15347
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_56(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x3C5E / 15454
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

int Function_57(bool bParam0) //Position: 0x3D64 / 15716
{
	if (!Function_35(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_58(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3D7E / 15742
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_39(bParam0))
	{
		Function_37();
		return;
	}
	bVar0 = Function_36(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_183())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_34(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_115(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
		}
		if (Function_183())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_108();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_183())
	{
		Function_107();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_32("DEED_COMPLETE", bParam0);
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
			Function_102(bParam0);
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
						switch (Function_34(bParam0))
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
			Function_61(1);
			Function_60(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_59(bParam0, &Var14);
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

void Function_59(int iParam0, struct<41> Param1) //Position: 0x3FDC / 16348
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_60(bool bParam0, int iParam1) //Position: 0x401B / 16411
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

void Function_61(bool bParam0) //Position: 0x405A / 16474
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_92();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_63();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_62(&Global_99144, 1);
		Function_62(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_62(int iParam0, bool bParam1) //Position: 0x40AF / 16559
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_63() //Position: 0x40C5 / 16581
{
	Function_90();
	Function_89();
	Function_89();
	Function_88();
	Function_88();
	Function_87();
	Function_87();
	Function_71(0);
	Function_71(0);
	Function_68();
	Function_67();
	Function_66();
	Function_65();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_64();
	return;
}

void Function_64() //Position: 0x4110 / 16656
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

void Function_65() //Position: 0x4216 / 16918
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

void Function_66() //Position: 0x4249 / 16969
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_67() //Position: 0x43DC / 17372
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_68() //Position: 0x4595 / 17813
{
	Function_69(&Global_42918, 1, 0);
	return;
}

void Function_69(struct<2317> Param0) //Position: 0x45A3 / 17827
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
	
	uVar0 = Function_70();
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

var Function_70() //Position: 0x47C0 / 18368
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_71(int iParam0) //Position: 0x47D5 / 18389
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
					iVar2 = ((Function_86((50 + iVar4)) + Function_86((183 + iVar4))) + Function_86((90 + iVar4)));
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
	Function_72(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_72(int iParam0, bool bParam1, bool bParam2) //Position: 0x487C / 18556
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
		Function_85(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_84(iParam0);
	if (&bParam2)
	{
		Function_73(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_73(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x4B18 / 19224
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_83(390))), 32);
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
					bVar19 = (Function_181(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_181(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_81(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_78(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_75(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_74(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_74() //Position: 0x5156 / 20822
{
	int iVar0;
	
	return &iVar0;
}

var Function_75(int iParam0) //Position: 0x515F / 20831
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_76(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5170 / 20848
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_77(char* cParam0) //Position: 0x5267 / 21095
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_78(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5282 / 21122
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_80(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_79(Function_80(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_79(int iParam0, int iParam1) //Position: 0x52E9 / 21225
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_80(int iParam0, bool bParam1) //Position: 0x52FB / 21243
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_81(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x530D / 21261
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
	if (((Function_82(iParam0) != 19 || Function_82(iParam0) != 17) || Function_82(iParam0) != 10) || Function_82(iParam0) != 9)
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

int Function_82(int iParam0) //Position: 0x5441 / 21569
{
	return Global_55480[iParam016].f_96;
}

var Function_83(int iParam0) //Position: 0x5450 / 21584
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_84(int iParam0) //Position: 0x548D / 21645
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

int Function_85(int iParam0, bool bParam1, bool bParam2) //Position: 0x5627 / 22055
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

int Function_86(bool bParam0) //Position: 0x586B / 22635
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_87() //Position: 0x58AC / 22700
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
		iVar2 = ((Function_86((50 + iVar3) + 15) + Function_86((183 + iVar3) + 15)) + Function_86((90 + iVar3) + 15));
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
	Function_72(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_88() //Position: 0x5935 / 22837
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
			iVar2 = ((Function_86((50 + iVar3) + 8) + Function_86((183 + iVar3) + 8)) + Function_86((90 + iVar3) + 8));
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
	Function_72(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_89() //Position: 0x59CC / 22988
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
		iVar2 = ((Function_86((50 + iVar3)) + Function_86((183 + iVar3))) + Function_86((90 + iVar3)));
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
	Function_72(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_90() //Position: 0x5A4B / 23115
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_91(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_72(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_91(int iParam0, bool bParam1, int iParam2) //Position: 0x5A88 / 23176
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
	Function_85(iParam0, bParam1, 1);
	Function_84(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_73(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_92() //Position: 0x5C94 / 23700
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_15())
	{
		Function_99(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_99(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_94(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_94(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_93(StackVal, Var0))
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

bool Function_93(char* cParam0) //Position: 0x5D4B / 23883
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_94(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5D63 / 23907
{
	int iVar0;
	
	iVar0 = Function_97(&uParam2, &uParam3);
	if (Function_96(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_50(&Global_99144, 1);
			Function_62(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_50(&Global_99144, 2);
			Function_62(&Global_99144, 1);
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
		Function_50(&Global_99144, 2);
		Function_62(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_95();
	return StackVal, Function_95();
}

struct<8> Function_95() //Position: 0x5E5B / 24155
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_96(int iParam0) //Position: 0x5E65 / 24165
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_97(bool bParam0, bool bParam1) //Position: 0x5E7B / 24187
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
				fVar2 = Function_98(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_98(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_96(iVar0) && !&bParam1)
	{
		iVar0 = Function_97(&bParam0, 1);
	}
	return iVar0;
}

float Function_98(struct<2> Param0, struct<2> Param2) //Position: 0x5F47 / 24391
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_99(float fParam0, int iParam1) //Position: 0x5F64 / 24420
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_101(&Global_54076, &Var3);
	if (!Function_100(Global_46760[0]))
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
	if (!Function_100(Global_46760[2]))
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
	if (!Function_100(Global_46760[1]))
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
	if (!Function_100(Global_46796[1]))
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
	if (!Function_100(Global_46796[3]))
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
	if (!Function_100(Global_46796[2]))
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
	if (!Function_100(Global_46796[4]))
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
	if (!Function_100(Global_46816[0]))
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
	if (!Function_100(Global_46816[1]))
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
	if (!Function_100(Global_46816[2]))
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
	if (!Function_100(Global_46838[0]))
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
	if (!Function_100(Global_46850[0]))
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
	if (!Function_100(Global_46850[1]))
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
	if (!Function_100(Global_46850[2]))
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
	if (!Function_100(Global_46866[0]))
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
	if (!Function_100(Global_46866[1]))
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
	if (!Function_100(Global_46866[2]))
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
	if (!Function_100(Global_46894[2]))
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
	if (!Function_100(Global_46894[3]))
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
	if (!Function_100(Global_46894[0]))
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
	if (!Function_100(Global_46914[0]))
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
	if (!Function_100(Global_46926[2]))
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
	if (!Function_100(Global_46926[1]))
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
	if (!Function_100(Global_46926[0]))
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
	if (!Function_100(Global_46838[1]))
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
	if (!Function_100(Global_46894[1]))
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
	Function_50(&Global_99144, 2);
	Function_62(&Global_99144, 1);
	iParam1 = 0;
	if (Function_93(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_100(int iParam0) //Position: 0x6790 / 26512
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_16(iVar0, 0x1000000) || Function_16(iVar0, 0x2000000)) || Function_16(iVar0, 0x4000000)) || !Function_16(iVar0, 0x10000000));
}

void Function_101(var uParam0, int iParam1) //Position: 0x67CB / 26571
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_102(bool bParam0) //Position: 0x67DA / 26586
{
	int iVar0;
	int iVar1;
	
	if (!Function_35(bParam0))
	{
		return;
	}
	switch (Function_36(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_34(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_105(12, 1, 0, 0);
				Function_104(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_105(13, 1, 0, 0);
				Function_104(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_105(14, 1, 0, 0);
				Function_104(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_105(15, 1, 0, 0);
				Function_104(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_105(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_34(bParam0))
			{
				case 0x00000000:
					if (Function_57(bParam0) == 1)
					{
						iVar0 = Function_103(bParam0);
						if (Function_18(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_104(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_104(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_104(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_104(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_104(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_104(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_104(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_104(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_104(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_104(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_104(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_104(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_104(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_104(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_104(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_104(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_104(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_104(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_104(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_104(4, 19);
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
								Function_105(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_105(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_105(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_103(bParam0) == 0)
			{
				if (Function_57(bParam0) == 1)
				{
					Function_105(458, 1, 0, 0);
					iVar0 = Function_34(bParam0);
					if (Function_18(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_104(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_104(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_104(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_104(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_104(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_104(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_104(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_104(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_57(bParam0) == 1)
			{
				Function_105(400, 1, 0, 0);
			}
			switch (Function_34(bParam0))
			{
				case 0x00000001:
					Function_105(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_104(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_104(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_104(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_105(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_104(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_104(6, 9);
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

int Function_103(bool bParam0) //Position: 0x6CB6 / 27830
{
	if (!Function_35(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_104(int iParam0, int iParam1) //Position: 0x6CD5 / 27861
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

int Function_105(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6D3F / 27967
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
	Function_85(iParam0, TO_FLOAT(bParam1), 1);
	Function_84(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_73(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_106(iParam0);
	return 1;
}

void Function_106(int iParam0) //Position: 0x6F67 / 28519
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

void Function_107() //Position: 0x7005 / 28677
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
	PLAYSTAT_INT("HC_MONEY", Function_86(0));
	PLAYSTAT_INT("HC_FAME", Function_86(3));
	PLAYSTAT_INT("HC_HONOR", Function_86(1));
	return;
}

void Function_108() //Position: 0x7167 / 29031
{
	int iVar0;
	int iVar1;
	
	if (!Function_113(Global_10966))
	{
		return;
	}
	iVar0 = Function_86(24);
	iVar1 = Function_112(Global_10966);
	if (!Function_113(iVar0) && Function_111(iVar1) < 0)
	{
		Function_72(24, Global_10966, 0);
		Function_109(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_111(Function_112(iVar0)))
	{
		Function_72(24, Global_10966, 0);
		Function_109(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_109(int iParam0, char* cParam1) //Position: 0x71E7 / 29159
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
		Function_110(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_110(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x753E / 30014
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

int Function_111(int iParam0) //Position: 0x75C6 / 30150
{
	if (!Function_39(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_112(int iParam0) //Position: 0x75E0 / 30176
{
	if (!Function_113(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_113(int iParam0) //Position: 0x75FA / 30202
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_114(int iParam0) //Position: 0x7610 / 30224
{
	char* cVar0[16];
	
	if (!Function_15())
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

struct<24> Function_115(char* cParam0) //Position: 0x764F / 30287
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

void Function_116(int iParam0) //Position: 0x78A5 / 30885
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_34(iParam0) == Global_46760[2])
	{
		if (Function_146(2) && !Function_145(2))
		{
			Function_138(2, 2, 0, 0, 1);
		}
	}
	if (Function_34(iParam0) == Global_46796[3])
	{
		if (Function_146(6) && !Function_145(6))
		{
			Function_138(6, 16, 0, 0, 1);
		}
	}
	if (!Function_146(10) || Function_145(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(0) - 1), GET_HOUR(false), GET_MINUTE(0), GET_SECOND(0));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_57(Global_46948);
	if (Global_46948 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_57(Global_46950);
	if (Global_46950 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_57(Global_46952);
	if (Global_46952 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_57(Global_46951);
	if (Global_46951 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_57(Global_46953);
	if (Global_46953 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != iParam0)
	{
		return;
	}
	Function_104(2, 24);
	Function_117(10, 0, 1);
	return;
}

void Function_117(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7A63 / 31331
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_145(bParam0))
	{
		if (!Function_146(bParam0))
		{
			Function_121(bParam0, 1, 0, 0, 1);
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
		Function_105(457, 1, 0, 0);
		Function_120(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_119(0, 0, 1, 1))
			{
				Function_61(1);
				Function_60(1, 0);
			}
			else
			{
				Function_118();
			}
		}
	}
	return;
}

void Function_118() //Position: 0x7C04 / 31748
{
	return;
}

bool Function_119(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7C0A / 31754
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

void Function_120(bool bParam0, int iParam1) //Position: 0x7CB9 / 31929
{
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_121(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7D0E / 32014
{
	char* cVar0[32];
	
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_136(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_146(bParam0))
	{
		Function_105(456, 1, 0, 0);
		Function_120(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_119(0, 0, 1, 1))
			{
				Function_61(1);
				Function_60(1, 5);
			}
			else
			{
				Function_118();
			}
		}
		Function_130(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_129() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_129() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_128(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_15())
		{
			if (!Function_127(Global_119934, 2))
			{
				Function_122(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_122(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7E6A / 32362
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_124(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_123(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_123(char* cParam0) //Position: 0x7EDF / 32479
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

bool Function_124(int iParam0, var uParam1, int iParam2) //Position: 0x7F19 / 32537
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
		if (Function_126(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_125(uVar0))
		{
			case 0x00000002:
				if (!Function_127(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_125(char* cParam0) //Position: 0x7F95 / 32661
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

int Function_126(int iParam0) //Position: 0x809A / 32922
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_62(&iVar1, 2147483648);
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

bool Function_127(int iParam0, int iParam1) //Position: 0x80D7 / 32983
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_128(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x80EA / 33002
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_129() //Position: 0x8175 / 33141
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_130(bool bParam0) //Position: 0x81A2 / 33186
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
			if (Function_134(bParam0, Function_135(bVar24)))
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
			if (Function_134(bParam0, Function_135(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_133(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_132(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_131(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_131(int iParam0) //Position: 0x8352 / 33618
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_137(iParam0))
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

void Function_132(char* cParam0, bool bParam1) //Position: 0x83A9 / 33705
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_133(int iParam0) //Position: 0x83CE / 33742
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_137(iParam0))
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

bool Function_134(bool bParam0, int iParam1) //Position: 0x8424 / 33828
{
	int iVar0;
	
	if (!Function_137(bParam0))
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

int Function_135(bool bParam0) //Position: 0x8483 / 33923
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_136(int iParam0) //Position: 0x848F / 33935
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_137(int iParam0) //Position: 0x84AB / 33963
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x84C1 / 33985
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_137(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_136(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_144(bParam0, 2))
	{
		Function_105(456, 1, 0, 0);
		Function_120(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_128(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_134(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_120(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_119(0, 0, 1, 1))
			{
				Function_61(1);
				Function_60(1, 0);
			}
			else
			{
				Function_118();
			}
		}
		Function_130(bParam0);
		if (StackVal && !Function_16(((((!Function_129() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_16((((Function_129() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_15())
		{
			if (!Function_127(Global_119934, 2))
			{
				Function_122(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_140();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_139(3, bParam1);
				break;
			
			case 0x00000005:
				Function_139(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_139(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_139(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_139(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_139(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_104(2, 24);
				break;
			
			case 0x00000003:
				Function_104(2, 25);
				break;
			
			case 0x0000000F:
				Function_104(2, 26);
				break;
			
			case 0x0000000D:
				Function_104(2, 27);
				break;
			
			case 0x0000000E:
				Function_104(2, 28);
				break;
			}
	}
}

void Function_139(int iParam0, bool bParam1) //Position: 0x8760 / 34656
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

void Function_140() //Position: 0x87CF / 34767
{
	if (Function_137(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_143(Global_42827);
			(&Global_42827 + 8) = Function_141(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_143(Global_42827);
			*(&Global_42827 + 8) = Function_141(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_141(int iParam0, int iParam1) //Position: 0x884F / 34895
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
					if (Function_227(6, 0) || Function_227(12, 0))
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
					if (Function_142(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_227(5, 0))
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
					if (Function_142(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_142(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_142(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_142(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_227(26, 0))
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
					if (Function_142(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_142(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_142(27) && iVar16)
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
					if (Function_142(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_142(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_142(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_142(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_227(17, 0) && iVar13)
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
					if (Function_142(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_227(6, 0) && Function_142(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_142(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_227(9, 0) && Function_142(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_142(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_227(8, 0) && iVar17)
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
	if (Function_93(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_93(StackVal, vVar2))
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
	if (!Function_93(StackVal, vVar2))
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

int Function_142(int iParam0) //Position: 0x94B2 / 38066
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_143(int iParam0) //Position: 0x94C7 / 38087
{
	int iVar0;
	int iVar1;
	
	if (!Function_137(iParam0))
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

bool Function_144(int iParam0, int iParam1) //Position: 0x9516 / 38166
{
	int iVar0;
	
	if (!Function_137(iParam0))
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

bool Function_145(int iParam0) //Position: 0x9543 / 38211
{
	if (!Function_137(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_144(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_146(int iParam0) //Position: 0x9594 / 38292
{
	if (!Function_137(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_144(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_147(bool bParam0, bool bParam1, bool bParam2) //Position: 0x95E6 / 38374
{
	bool bVar0;
	
	bVar0 = Function_86(0);
	if ((Function_86(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_105(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_86(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_105(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_86(597) + Function_86(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

var Function_148(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x96B8 / 38584
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_86(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_149(17), &Global_54076))
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

var Function_149(bool bParam0) //Position: 0x97BF / 38847
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_150(int iParam0, bool bParam1, bool bParam2) //Position: 0x98B3 / 39091
{
	int iVar0;
	bool bVar1;
	
	if (Function_162(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_183())
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
	iVar0 = Function_86(3);
	Function_159();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_157(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_127(Global_119936, 4))
			{
				Function_122(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_105(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_181(3));
	iVar0 = Function_86(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_152(4, Function_156(Global_21369.f_248), 1);
				Function_151(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_152(4, Function_156(Global_21369.f_248), 1);
				Function_151(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_152(4, Function_156(Global_21369.f_248), 1);
				Function_151(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_152(4, Function_156(Global_21369.f_248), 1);
				Function_151(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_152(4, Function_156(Global_21369.f_248), 1);
				Function_151(Global_21369.f_244, Global_21369.f_248);
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

void Function_151(int iParam0, int iParam1) //Position: 0x9A87 / 39559
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

int Function_152(int iParam0, char* cParam1) //Position: 0x9CF1 / 40177
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
	Function_109(iParam0, &cParam1, 0, 1);
	iVar1 = Function_153();
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

int Function_153() //Position: 0x9E81 / 40577
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
	Function_154();
	return 0;
}

void Function_154() //Position: 0x9F22 / 40738
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
		Function_155(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_155(int iParam0) //Position: 0x9FE0 / 40928
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

var Function_156(int iParam0) //Position: 0xA046 / 41030
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

int Function_157(int iParam0, bool bParam1) //Position: 0xA0D5 / 41173
{
	bool bVar0;
	int iVar1;
	
	Function_105(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_158(iParam0, 4294967295);
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
	iVar1 = Function_153();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_158(int iParam0, int iParam1) //Position: 0xA281 / 41601
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

void Function_159() //Position: 0xA2C6 / 41670
{
	Function_161(3, 0.0f);
	Function_160(3, 10000.0f);
	return;
}

int Function_160(int iParam0, int iParam1) //Position: 0xA2DC / 41692
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_161(int iParam0, int iParam1) //Position: 0xA31C / 41756
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_162(int iParam0) //Position: 0xA35C / 41820
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_163(int iParam0, bool bParam1, bool bParam2) //Position: 0xA36B / 41835
{
	int iVar0;
	bool bVar1;
	
	if (Function_162(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_183())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_86(1);
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
			Function_157(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_127(Global_119936, 1))
				{
					Function_122(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_166(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_127(Global_119936, 2))
				{
					Function_122(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_105(1, bVar1, 0, 0);
	}
	else
	{
		Function_165(1, (4294967295 * bVar1), 0);
	}
	if (Function_86(1) <= 4294962296)
	{
		Function_72(1, 4294962296, 0);
	}
	else if (Function_86(1) >= 5000)
	{
		Function_72(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_181(1));
	iVar0 = Function_86(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_152(2, Function_164(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_152(2, Function_164(Global_21369.f_244), 0);
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
				Function_152(2, Function_164(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_152(2, Function_164(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_152(2, Function_164(Global_21369.f_244), 1);
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
				Function_152(2, Function_164(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_152(2, Function_164(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_152(2, Function_164(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_152(2, Function_164(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_152(2, Function_164(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_152(2, Function_164(Global_21369.f_244), 1);
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
				Function_152(2, Function_164(Global_21369.f_244), 0);
			}
			break;
	}
	Function_151(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_164(int iParam0) //Position: 0xA692 / 42642
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

int Function_165(int iParam0, bool bParam1, int iParam2) //Position: 0xA735 / 42805
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
	Function_84(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_73(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_166(int iParam0, bool bParam1) //Position: 0xA932 / 43314
{
	bool bVar0;
	int iVar1;
	
	Function_165(iParam0, bParam1, 0);
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
	iVar1 = Function_158(iParam0, 4294967295);
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
	iVar1 = Function_153();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_167(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0xAADD / 43741
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
		uVar0 = Function_70();
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
		Function_105(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_170();
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
	Function_168(&uParam9, &uParam10);
}

void Function_168(var uParam0, bool bParam1) //Position: 0xABAC / 43948
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
		Function_169();
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

void Function_169() //Position: 0xAC7B / 44155
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

void Function_170() //Position: 0xACF3 / 44275
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_171(var uParam0, bool bParam1) //Position: 0xAD08 / 44296
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

void Function_172(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xAD1E / 44318
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_170();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_70();
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
			if (IS_VOLUME_VALID(&bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&bParam7);
				DELETE_PROJECTILES_IN_VOLUME(&bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_174(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_74(), 2,802597E-45f, Function_174(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_105(19, 1, 0, 0);
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
	if (uParam10 && !Function_15())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_173()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_173()));
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
	Unknown_Function();
	if (67108864)
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Unknown_Function();
	}
	Unknown_Function();
	if (134217728)
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Unknown_Function();
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_173() //Position: 0xAFD0 / 45008
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&bVar0);
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

struct<8> Function_174(int iParam0) //Position: 0xB05E / 45150
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_175(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB070 / 45168
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_74(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PIK_Vista01", 2, 1);
	}
	Function_176(&uVar0);
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

void Function_176(int iParam0) //Position: 0xB0F5 / 45301
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_178(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_177(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7.0f, 0, 0);
	return;
}

void Function_177(int iParam0) //Position: 0xB130 / 45360
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1298,358f, 89,32796f, 2378,287f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,085643f, -1,275337f, -0,000837f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_178(int iParam0) //Position: 0xB1A9 / 45481
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1298,552f, 90,06156f, 2378,257f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,042042f, -1,742399f, -0,000834f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_179(int iParam0, int iParam1) //Position: 0xB222 / 45602
{
	if (!Function_39(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

int Function_180(int iParam0, float fParam1, bool bParam2) //Position: 0xB23D / 45629
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
	if (Global_54086[iParam0] > fParam1)
	{
		Function_85(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_84(iParam0);
	if (&bParam2)
	{
		Function_73(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_181(int iParam0) //Position: 0xB4AA / 46250
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_182(bool bParam0, bool bParam1, int iParam2) //Position: 0xB4E3 / 46307
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_149(bParam0), Function_70()) == 0)
		{
			ADD_ITEM(Function_149(bParam0), Function_70(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_149(bParam0), Function_70(), &iParam2);
	return 1;
}

bool Function_183() //Position: 0xB531 / 46385
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_184(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xB55C / 46428
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
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

void Function_185(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xB66C / 46700
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
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_114(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_186(var uParam0, bool bParam1) //Position: 0xB701 / 46849
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_187(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_45(&bParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_43(&bParam1);
		}
	}
	return;
}

var Function_187(int iParam0) //Position: 0xB744 / 46916
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
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

void Function_188(bool bParam0) //Position: 0xB777 / 46967
{
	Function_222(&bParam0, 0.0f);
	return;
}

void Function_189(bool bParam0) //Position: 0xB784 / 46980
{
	if (!Function_45(&bParam0))
	{
		Function_222(&bParam0, 0.0f);
	}
	return;
}

void Function_190(bool bParam0, var uParam1, bool bParam2) //Position: 0xB79B / 47003
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_191(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0xB7E7 / 47079
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_193(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam2)
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 1);
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_192(&(uVar0[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar4) && !&iVar4 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar4);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[0]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_192(&(uVar0[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[1]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_192(var uParam0, int iParam1) //Position: 0xB964 / 47460
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_193(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xB973 / 47475
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_15())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &bParam0, 2.0f, 0);
		}
	}
}

struct<8> Function_194(var uParam0) //Position: 0xBABD / 47805
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_195() //Position: 0xBAE6 / 47846
{
	int iVar0;
	
	*(&iVar0 + 28) = 1;
	Function_95();
	Function_95();
	Function_196(StackVal, StackVal, 4096, 1, GET_ASSET_ID("$/content/Frontier/Hennigans_Stead/Pikes_Basin/ActionArea/PikesBasin_Herding", 4), Function_95(), Function_95(), 0, 0, 0, Global_46816[2], 0, 0, 0, &iVar0, 0, 0, 0x40a00000, 4294967295, 0, 0);
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("NuHerd_Layout")))
	{
		LOG_ERROR("HERDING LAYOUT IS VALID");
		fLocal_542 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("NuHerd_Layout"), "Pete_The_Pikes_Basin_Herder");
	}
	return;
}

int Function_196(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0xBBDC / 48092
{
	int iVar0;
	
	uParam11 = uParam11;
	uParam12 = uParam12;
	uParam13 = uParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_200(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = uParam7;
					Global_38380[iVar036].f_88 = &uParam19;
					Global_38380[iVar036].f_104 = &uParam20;
					Global_38380[iVar036].f_84 = &uParam17;
					Global_38380[iVar036].f_92 = &uParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					(&Global_38380[iVar036] + 16) = &uParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &uParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &uParam9;
					Global_38380[iVar036].f_96 = &uParam15;
					Global_38380[iVar036].f_100 = &uParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_199(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_198(&(Global_38380[iVar036]), 1);
					Function_197(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_197(vector3 vParam0) //Position: 0xBD2A / 48426
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_198(vector3 vParam0) //Position: 0xBD47 / 48455
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_199(struct<157> Param0) //Position: 0xBD5A / 48474
{
	Param1 = Param0;
	Param1.f_24 = Param0.f_24;
	*(&Param1 + 28) = &Param0 + 28;
	Param1.f_4 = StackVal;
	Param1.f_8 = StackVal;
	*(&Param1 + 36) = { StackVal, *(&Param0 + 36) };
	(&Param1 + 36)->f_16 = (&Param0 + 36)->f_16;
	(&Param1 + 36)->f_20 = (&Param0 + 36)->f_20;
	(&Param1 + 36)->f_24 = (&Param0 + 36)->f_24;
	(&Param1 + 36)->f_28 = (&Param0 + 36)->f_28;
	Param1.f_68 = Param0.f_68;
	(&Param1 + 68)->f_4 = StackVal;
	(&Param1 + 68)->f_8 = StackVal;
	Param1.f_84 = Param0.f_84;
	(&Param1 + 84)->f_4 = StackVal;
	(&Param1 + 84)->f_8 = StackVal;
	(&Param1 + 84)->f_12 = (&Param0 + 84)->f_12;
	(&Param1 + 84)->f_16 = (&Param0 + 84)->f_16;
	(&Param1 + 84)->f_20 = (&Param0 + 84)->f_20;
	(&Param1 + 84)->f_24 = (&Param0 + 84)->f_24;
	(&Param1 + 84)->f_32 = (&Param0 + 84)->f_32;
	(&Param1 + 84)->f_36 = (&Param0 + 84)->f_36;
	(&Param1 + 84)->f_40 = (&Param0 + 84)->f_40;
	(&Param1 + 84)->f_44 = (&Param0 + 84)->f_44;
	(&Param1 + 84)->f_52 = (&Param0 + 84)->f_52;
	(&Param1 + 84)->f_48 = (&Param0 + 84)->f_48;
	(&Param1 + 84)->f_56 = (&Param0 + 84)->f_56;
	(&Param1 + 84)->f_28 = (&Param0 + 84)->f_28;
	Param1.f_148 = Param0.f_148;
	(&Param1 + 148)->f_4 = StackVal;
	Param1.f_156 = Param0.f_156;
	(&Param1 + 156)->f_4 = StackVal;
	(&Param1 + 156)->f_8 = StackVal;
	return;
}

bool Function_200(vector3 vParam0) //Position: 0xBF0A / 48906
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_201(var uParam0, var uParam1, int iParam2) //Position: 0xBF28 / 48936
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	float fVar4;
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
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		Function_194(&uVar1);
		Var2 = Function_194(&uVar1);
		fVar4 = GET_OBJECT_HEADING(&uVar1);
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_202("amb_areaChest") };
		uVar13 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam0, &Var5, "$/content/scripting/gringo/simpleGringo/locked_footlocker", Var2, Vector(0.0f, fVar4, 0.0f));
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar13), 0);
		ADD_OBJECT_TO_OBJECTSET(&uVar13, &iParam2);
		if (DECOR_CHECK_EXIST(&uVar1, "GringoDollarAmt"))
		{
			DECOR_SET_INT(&uVar13, "GringoDollarAmt", DECOR_GET_INT(&uVar1, "GringoDollarAmt"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "GiveItem"))
		{
			DECOR_SET_INT(&uVar13, "GiveItem", DECOR_GET_INT(&uVar1, "GiveItem"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_5"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_5", DECOR_GET_INT(&uVar1, "Ammo_5"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_6"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_6", DECOR_GET_INT(&uVar1, "Ammo_6"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_7"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_7", DECOR_GET_INT(&uVar1, "Ammo_7"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_8"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_8", DECOR_GET_INT(&uVar1, "Ammo_8"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_9"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_9", DECOR_GET_INT(&uVar1, "Ammo_9"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_10"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_10", DECOR_GET_INT(&uVar1, "Ammo_10"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_11"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_11", DECOR_GET_INT(&uVar1, "Ammo_11"));
		}
		if (DECOR_CHECK_EXIST(&uVar1, "Ammo_12"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_12", DECOR_GET_INT(&uVar1, "Ammo_12"));
		}
		bVar0++;
	}
	return;
}

struct<32> Function_202(char* cParam0) //Position: 0xC21B / 49691
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_203("0", &cVar8, ""), 4);
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

struct<32> Function_203(char* cParam0) //Position: 0xC287 / 49799
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_204() //Position: 0xC2A9 / 49833
{
	var uVar0;
	int iVar1;
	int iVar2[6];
	var uVar9;
	var uVar10;
	struct<2> Var11;
	struct<2> Var13;
	var uVar15;
	struct<2> Var16;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;
	struct<2> Var24;
	struct<2> Var26;
	struct<2> Var28;
	struct<2> Var30;
	struct<2> Var32;
	struct<2> Var34;
	struct<2> Var36;
	struct<2> Var38;
	struct<2> Var40;
	struct<2> Var42;
	struct<2> Var44;
	struct<2> Var46;
	var uVar48;
	var uVar49;
	char* cVar50[16];
	
	uLocal_544[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad1"));
	uLocal_544[1] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad2"));
	uLocal_544[2] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad3"));
	uLocal_544[3] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad4"));
	uLocal_544[4] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad5"));
	uLocal_544[5] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad6"));
	uLocal_544[6] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad7"));
	uLocal_544[7] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad8"));
	uLocal_544[8] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad9"));
	uLocal_544[9] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad10"));
	uLocal_544[10] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad11"));
	uLocal_544[11] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_canyonSquad12"));
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_510);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	iVar1 = 0;
	iVar2[0] = 477;
	iVar2[1] = 480;
	iVar2[2] = 479;
	iVar2[3] = 481;
	iVar2[4] = 478;
	iVar2[5] = 482;
	uVar9 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar9))
	{
		uVar10 = GET_OBJECT_NAME(&uVar9);
		Var11 = Vector(0.0f, 0.0f, 0.0f);
		Var13 = Vector(0.0f, 0.0f, 0.0f);
		GET_OBJECT_POSITION(&uVar9, &Var11);
		GET_OBJECT_ORIENTATION(&uVar9, &Var13);
		if (DECOR_CHECK_EXIST(&uVar9, "PIK_Canyon") && DECOR_CHECK_EXIST(&uVar9, "FTE"))
		{
			if (STRING_CONTAINS_STRING(&uVar10, "p1_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[0]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "p2_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[1]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "3_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[2]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "4_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[3]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "5_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[4]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "6_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[5]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "7_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[6]));
			}
			else if (STRING_CONTAINS_STRING(&uVar10, "8_"))
			{
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uLocal_510, &uVar10, iVar2[iVar1], Var11, Var13);
				SQUAD_JOIN(&uVar15, &(uLocal_544[7]));
			}
			iVar1++;
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar15, 37, 5.0f);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar15, true);
			Function_206(&uVar15, 60.0f, 359.0f, 360.0f, 0,25f);
			AI_SET_WEAPON_MAX_RANGE(&uVar15, 40.0f);
			ACTOR_ENABLE_VARIABLE_MESH(&uVar15, 0, true);
		}
		if (iVar1 >= 5)
		{
			iVar1 = 0;
		}
		uVar9 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	Var16 = Vector(-1250,367f, 80,22279f, 2185,654f);
	Var18 = Vector(0.0f, 60,742f, 0.0f);
	Var20 = Vector(-1251,885f, 80,12868f, 2183,575f);
	Var22 = Vector(0.0f, 258,1044f, 0.0f);
	Var24 = Vector(-1268.0f, 80,314f, 2240.0f);
	Var26 = Vector(0.0f, 7,574f, 0.0f);
	Var28 = Vector(-1272,061f, 80,31372f, 2232,837f);
	Var30 = Vector(0.0f, -4,182f, 0.0f);
	Var32 = Vector(-1290,873f, 76,29803f, 2289,005f);
	Var34 = Vector(0.0f, -31,949f, 0.0f);
	Var36 = Vector(-1297,173f, 76,29803f, 2285,627f);
	Var38 = Vector(0.0f, -39,859f, 0.0f);
	Var40 = Vector(-1306,897f, 71,27841f, 2353,559f);
	Var42 = Vector(0.0f, 27,446f, 0.0f);
	Var44 = Vector(-1323,141f, 71,27841f, 2348,429f);
	Var46 = Vector(0.0f, -5,392f, 0.0f);
	uLocal_512[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad01Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var16, Var18));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_512[0]), "UseCase1", 0);
	uLocal_512[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad01Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var20, Var22));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_512[1]), "UseCase1", 0);
	uLocal_518[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad02Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var24, Var26));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_518[0]), "UseCase1", 0);
	uLocal_518[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad02Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var28, Var30));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_518[1]), "UseCase1", 0);
	uLocal_524[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad03Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var32, Var34));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_524[0]), "UseCase1", 0);
	uLocal_524[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad03Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var36, Var38));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_524[1]), "UseCase1", 0);
	uLocal_530[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad04Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var40, Var42));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_530[0]), "UseCase1", 0);
	uLocal_530[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_510, "Squad04Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", Var44, Var46));
	GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_530[1]), "UseCase1", 0);
	if (SQUAD_GET_SIZE(&(uLocal_544[0])) == 2)
	{
		if (IS_GRINGO_VALID(&(uLocal_512[0])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[0]), false), &(uLocal_512[0]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd01gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(&(uLocal_512[1])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[0]), true), &(uLocal_512[1]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd01gringo[1] IS INVALID");
		}
	}
	if (SQUAD_GET_SIZE(&(uLocal_544[1])) == 2)
	{
		if (IS_GRINGO_VALID(&(uLocal_518[0])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[1]), false), &(uLocal_518[0]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd02gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(&(uLocal_518[1])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[1]), true), &(uLocal_518[1]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd02gringo[1] IS INVALID");
		}
	}
	if (SQUAD_GET_SIZE(&(uLocal_544[2])) == 2)
	{
		if (IS_GRINGO_VALID(&(uLocal_524[0])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[2]), false), &(uLocal_524[0]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd03gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(&(uLocal_524[1])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[2]), true), &(uLocal_524[1]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd03gringo[1] IS INVALID");
		}
	}
	if (SQUAD_GET_SIZE(&(uLocal_544[3])) == 2)
	{
		if (IS_GRINGO_VALID(&(uLocal_530[0])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[3]), false), &(uLocal_530[0]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd04gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(&(uLocal_530[1])))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_544[3]), true), &(uLocal_530[1]), "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd04gringo[1] IS INVALID");
		}
	}
	Function_193(StackVal, Vector(-1178,384f, 76,568f, 2359,734f), &uVar48, &uVar49);
	uLocal_538 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_510, "aHorsey1", 976, Vector(-1180,755f, 76,298f, 2358,911f), Vector(0.0f, -50.0f, 0.0f));
	ACCESSORIZE_HORSE(&uLocal_538, 3);
	if (IS_GRINGO_VALID(&uVar48))
	{
		TASK_PRIORITY_SET(&uLocal_538, true);
		TASK_USE_GRINGO(&uLocal_538, &uVar48, "UseCase1", true, 1);
	}
	else
	{
		TASK_STAND_STILL(&uLocal_538, -1.0f, 0, 0);
	}
	uLocal_540 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_510, "aHorsey2", 976, Vector(-1179,655f, 76,298f, 2360,737f), Vector(0.0f, -50.0f, 0.0f));
	ACCESSORIZE_HORSE(&uLocal_540, 3);
	if (IS_GRINGO_VALID(&uVar49))
	{
		TASK_PRIORITY_SET(&uLocal_540, true);
		TASK_USE_GRINGO(&uLocal_540, &uVar49, "UseCase1", true, 1);
	}
	else
	{
		TASK_STAND_STILL(&uLocal_540, -1.0f, 0, 0);
	}
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(14, &Global_54076, 4);
	SET_FACTIONS_STATUS_TWO_WAY(14, 20, 4);
	iLocal_580 = 0;
	while (iLocal_580 < 11)
	{
		strcpy(&cVar50, "nv_groupIn", 16);
		straddi(&cVar50, iLocal_580 + 1, 16);
		Function_190(&(uLocal_544[iLocal_580]), &Global_54076, 2);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(uLocal_544[iLocal_580]), 0);
		Function_205(&(uLocal_544[iLocal_580]), FIND_VOLUME_IN_LAYOUT(&Global_46715, &cVar50), 1, 1);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(uLocal_544[iLocal_580]), 690856);
		iLocal_580++;
	}
	return;
}

void Function_205(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD079 / 53369
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
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_206(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0xD0D1 / 53457
{
	SET_ACTOR_VISION_MAX_RANGE(&uParam0, bParam1, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam0, bParam2);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uParam0, bParam3);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&uParam0, fParam4);
}

bool Function_207(bool bParam0) //Position: 0xD0FC / 53500
{
	var uVar0;
	bool bVar1;
	
	bParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_510, "PIK_MainSquad"));
	iLocal_580 = 0;
	while (iLocal_580 < 4)
	{
		uVar0 = Function_208(&Global_11704, &Global_13818, iLocal_580, 0, 0, 1);
		if (IS_ACTOR_VALID(&uVar0))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
			Function_206(&uVar0, 60.0f, 359.0f, 359.0f, 0,25f);
			SQUAD_JOIN(&uVar0, &bParam0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bParam0, 690856);
			if (iLocal_580 == 4)
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
				SET_WEAPONENUM_LOCKED(15, 0);
				GIVE_WEAPON_TO_ACTOR(&uVar0, 15, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
			}
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "npikv_cows"), 1, 1);
			bVar1 = (COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&uVar0) + 10.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar0, bVar1);
		}
		iLocal_580++;
	}
	Function_205(&bParam0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_MainCampStayIn"), 4, 1);
	return 1;
}

var Function_208(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xD201 / 53761
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_14(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_14(&(Param0[iVar02]), 2))
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
			if (!Function_14(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_12(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_210(StackVal, &Global_10996, Function_74(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_14(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_12(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_12(&(Param0[iVar02]), 1);
	Function_209(&vParam1[iVar03] + 16, 1);
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

int Function_209(int iParam0, bool bParam1) //Position: 0xD3C8 / 54216
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

var Function_210(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xD47A / 54394
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_74(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_211() //Position: 0xD5A1 / 54689
{
	Function_271(&iLocal_656, "action_areas", 10, 0);
	Function_271(&iLocal_656, "rand_idle_stand_nospawn", 1, 0);
	Function_212(&iLocal_656, 1010, 3, 1);
	Function_212(&iLocal_656, 1011, 3, 1);
	return;
}

var Function_212(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD5FB / 54779
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_213(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_213(&(Param0[iVar02]), 8);
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

void Function_213(struct<13> Param0) //Position: 0xD6D7 / 54999
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_214() //Position: 0xD6EA / 55018
{
	Function_212(&iLocal_638, 483, 3, 1);
	Function_212(&iLocal_638, 484, 3, 1);
	Function_212(&iLocal_638, 485, 3, 1);
	Function_212(&iLocal_638, 1009, 3, 1);
	return;
}

void Function_215() //Position: 0xD720 / 55072
{
	Function_212(&iLocal_628, 976, 3, 1);
	Function_212(&iLocal_628, 977, 3, 1);
	return;
}

void Function_216() //Position: 0xD73E / 55102
{
	Function_212(&iLocal_618, 481, 3, 1);
	Function_212(&iLocal_618, 482, 3, 1);
	return;
}

void Function_217() //Position: 0xD75C / 55132
{
	Function_212(&iLocal_608, 479, 3, 1);
	Function_212(&iLocal_608, 480, 3, 1);
	return;
}

bool Function_218() //Position: 0xD77A / 55162
{
	switch (iLocal_597)
	{
		case 0x00000000:
			if (!Function_237(&iLocal_598))
			{
				return 0;
			}
			break;
		
		case 0x00000001:
			if (!Function_237(&iLocal_608))
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_237(&iLocal_618))
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Function_237(&iLocal_628))
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_237(&iLocal_638))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (!Function_237(&iLocal_656))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void Function_219() //Position: 0xD807 / 55303
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_685)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_686) - 1))
		{
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_686);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_220(&Global_54076, &uVar1) > 100.0f)
			{
				Function_194(&uVar1);
				Var3 = Function_194(&uVar1);
				if (!Function_16(iLocal_684, bVar2))
				{
					Function_50(&iLocal_684, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_62(&iLocal_684, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_220(var uParam0, int iParam1) //Position: 0xD895 / 55445
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_221(&uParam0);
			Var0 = Function_221(&uParam0);
			Function_221(&iParam1);
			Var2 = Function_221(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_221(int iParam0) //Position: 0xD932 / 55602
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

void Function_222(vector3 vParam0) //Position: 0xD9A0 / 55712
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_50(&vParam0, 1);
	Function_62(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_223(var uParam0) //Position: 0xD9C5 / 55749
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_263(&uParam0, 2048))
	{
		return 0;
	}
	uLocal_686 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_685 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_194(&iVar1);
		Var2 = Function_194(&iVar1);
		Function_224(&iVar1);
		Var4 = Function_224(&iVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_202("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_686);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

struct<8> Function_224(var uParam0) //Position: 0xDAEF / 56047
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&uParam0, &Var0);
	return StackVal, Var0;
}

int Function_225() //Position: 0xDB18 / 56088
{
	bool bVar0;
	
	if ((!Function_127(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_122(&Global_54076, 16, 1, 0);
	}
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_06", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bVar0 > 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	uLocal_510 = CREATE_LAYOUT("PIK_AA_Layout");
	iLocal_675 = CREATE_JOURNAL_ENTRY("PB_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(iLocal_675, 0);
	Function_226();
	bLocal_579 = false;
	iLocal_597 = 0;
	RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
	bLocal_674 = Function_228(0, Global_46816[2], 3);
	if (Function_57(bLocal_674) == 0)
	{
		Function_50(&bLocal_579, 1);
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(38);
	return 1;
}

void Function_226() //Position: 0xDC19 / 56345
{
	Function_212(&iLocal_598, 477, 3, 1);
	Function_212(&iLocal_598, 478, 3, 1);
	return;
}

int Function_227(int iParam0, bool bParam1) //Position: 0xDC37 / 56375
{
	int iVar0;
	
	iVar0 = Function_112(iParam0);
	if (!Function_35(iVar0))
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

bool Function_228(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDC75 / 56437
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_232(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_229(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_229(bParam0, bParam1, bParam2, 4294967295);
}

int Function_229(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xDCD3 / 56531
{
	var uVar0;
	
	if (!Function_231(bParam2))
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
	uVar0 = Function_232(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_230(uVar0);
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

var Function_230(int iParam0) //Position: 0xDE37 / 56887
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

bool Function_231(int iParam0) //Position: 0xDE75 / 56949
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_232(int iParam0, int iParam1, int iParam2) //Position: 0xDE8A / 56970
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_233(int iParam0) //Position: 0xDEAA / 57002
{
	if (!Function_18(iParam0))
	{
		return 0;
	}
	return Function_263(&(Global_43791[iParam0]), 2048);
}

void Function_234(char* cParam0) //Position: 0xDEC8 / 57032
{
	Unknown_Function();
	if (!128)
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

void Function_235(int iParam0, bool bParam1) //Position: 0xDF08 / 57096
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
		Function_236(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_236(var uParam0, int iParam1) //Position: 0xDFF8 / 57336
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_237(struct<2>[] Param0) //Position: 0xE005 / 57349
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_240();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_213(&(Param0[iVar02]), 8);
		}
		else if (Function_239())
		{
			iVar1 = 1;
			Function_213(&(Param0[iVar02]), 8);
		}
		Function_213(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_6(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_6(&(Param0[02]), 8) || iVar1));
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
				Function_213(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
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
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
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
	Function_238();
	return 1;
}

void Function_238() //Position: 0xE3C7 / 58311
{
	Unknown_Function();
	if (!128)
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_239() //Position: 0xE407 / 58375
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

void Function_240() //Position: 0xE435 / 58421
{
	Unknown_Function();
	if (!128)
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

void Function_241(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xE477 / 58487
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
		Function_242();
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

void Function_242() //Position: 0xE565 / 58725
{
	int iVar0;
	
	Global_41176 = Function_243(StackVal);
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

int Function_243(int iParam0) //Position: 0xE5B3 / 58803
{
	if (!Function_244(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_244(int iParam0) //Position: 0xE5CB / 58827
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_245(bool bParam0) //Position: 0xE5E0 / 58848
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_246(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0xE5F3 / 58867
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
		Function_249();
	}
	if (&bParam5)
	{
		Function_247(1048576);
	}
}

void Function_247(int iParam0) //Position: 0xE701 / 59137
{
	Function_248(&Global_43580, iParam0);
	return;
}

void Function_248(var uParam0, var uParam1) //Position: 0xE70F / 59151
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_249() //Position: 0xE72E / 59182
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_247(16384);
	}
	return;
}

bool Function_250(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0xE74A / 59210
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_263(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_227(49, 0))
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

void Function_251(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0xE808 / 59400
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Unknown_Function();
	if (!2)
	{
		return;
	}
	if (Function_263(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_14(&(Param0[iVar02]), 2))
		{
			if (Function_252(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_267(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_252(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0xE8C0 / 59584
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_263(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_14(&iParam0, 2))
	{
		return 1;
	}
	if (Function_14(&iParam0, 4))
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
		(&iParam1 + 16) = Function_210(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_93(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_13(&iParam0, 4);
	}
	Function_253(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_253(int iParam0, struct<2> Param1) //Position: 0xEA41 / 59969
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_93(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_93(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_93(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_93(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_93(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_93(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_254(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xEB87 / 60295
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

void Function_255(int iParam0, var uParam1, int iParam2) //Position: 0xEBE6 / 60390
{
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_261(iParam0, &uParam1, &iParam2);
		Function_260(iParam0, &uParam1, &iParam2);
		Function_259(iParam0, &uParam1, &iParam2);
		Function_258(iParam0, &uParam1, &iParam2);
		Function_257(iParam0, &uParam1, &iParam2);
		Function_256(iParam0, &uParam1, &iParam2);
	}
	return;
}

void Function_256(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xEC8E / 60558
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

void Function_257(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xECF5 / 60661
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

void Function_258(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xED5E / 60766
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

void Function_259(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xEDC9 / 60873
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

void Function_260(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xEE2F / 60975
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

void Function_261(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xEE98 / 61080
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

int Function_262(int iParam0) //Position: 0xEF0B / 61195
{
	if (!Function_18(iParam0))
	{
		return 1;
	}
	return Function_263(&(Global_43791[iParam0]), 4);
}

bool Function_263(var uParam0, int iParam1) //Position: 0xEF27 / 61223
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_264(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xEF44 / 61252
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_18(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_15())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_263(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_14(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_14(&(Param0[iVar02]), 8))
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

int Function_265() //Position: 0xF02D / 61485
{
	return 0;
}

void Function_266(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xF034 / 61492
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_18(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_15())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_263(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_267(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_12(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_12(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_267(var uParam0, int iParam1) //Position: 0xF124 / 61732
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_268() //Position: 0xF135 / 61749
{
	var uVar0;
	
	Function_269(3, 3);
	uVar0 = &uVar0;
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling", 1, 0);
	Function_271(&iLocal_352 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_237(&iLocal_352 + 8))
	{
		return 0;
	}
	iLocal_352 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_352))
	{
		iLocal_352 = CREATE_LAYOUT("PikesBasin_layout");
	}
	*(&iLocal_352 + 256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "kneel_hammer", "kneel_hammer", Vector(-1202,302f, 75,29413f, 2354,097f), Vector(0.0f, -74,60783f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 256), 0);
	*(&iLocal_352 + 264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Pee_nospawn", "Pee_nospawn", Vector(-1192.0f, 75,29413f, 2357,749f), Vector(0.0f, -177,0614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 264), 0);
	*(&iLocal_352 + 272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Pee_nospawn1", "Pee_nospawn", Vector(-1169,195f, 76,489f, 2391,551f), Vector(0.0f, -116,1596f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 272), 0);
	*(&iLocal_352 + 280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1197,084f, 75,29413f, 2366,027f), Vector(0.0f, -186,261f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 280), 0);
	*(&iLocal_352 + 288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1199,385f, 75,29413f, 2370,493f), Vector(0.0f, -46,43064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 288), 0);
	*(&iLocal_352 + 296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "rand_idle_stand", "rand_idle_stand", Vector(-1194,401f, 75,29413f, 2379,484f), Vector(0.0f, 17,88893f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 296), 0);
	*(&iLocal_352 + 304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "rand_idle_stand1", "rand_idle_stand", Vector(-1202,31f, 75,29407f, 2361,132f), Vector(0.0f, -140,612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 304), 0);
	*(&iLocal_352 + 312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1198,014f, 75,29413f, 2368,262f), Vector(0.0f, -108,9585f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 312), 0);
	*(&iLocal_352 + 320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-1214,618f, 74,29016f, 2371,631f), Vector(0.0f, -72,79943f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 320), 0);
	*(&iLocal_352 + 328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", Vector(-1195,559f, 75,29413f, 2370,29f), Vector(0.0f, 30,13509f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 328), 0);
	*(&iLocal_352 + 336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_smoke", "sit_ground_smoke", Vector(-1190,802f, 75,29413f, 2374,861f), Vector(0.0f, 100,2602f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 336), 0);
	*(&iLocal_352 + 344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_smoke1", "sit_ground_smoke", Vector(-1194,976f, 75,29413f, 2366,998f), Vector(0.0f, -219,1066f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 344), 0);
	*(&iLocal_352 + 352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1208f, 75,29413f, 2364.0f), Vector(0.0f, 69,66526f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 352), 0);
	*(&iLocal_352 + 360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-1207,994f, 74,29016f, 2376,025f), Vector(0.0f, 73,27496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 360), 0);
	*(&iLocal_352 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1196.0f, 75,29413f, 2360.0f), Vector(0.0f, 69,98853f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 368), 0);
	*(&iLocal_352 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1220.0f, 74,29016f, 2368.0f), Vector(0.0f, 103,784f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 376), 0);
	*(&iLocal_352 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_spit", "stand_spit", Vector(-1200.0f, 75,29413f, 2376.0f), Vector(0.0f, 86,50423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 384), 0);
	*(&iLocal_352 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_spit1", "stand_spit", Vector(-1206,262f, 75,29411f, 2356,792f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 392), 0);
	*(&iLocal_352 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_yelling", "stand_yelling_mid", Vector(-1205,428f, 75,29413f, 2367,632f), Vector(0.0f, -97,40594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 400), 0);
	*(&iLocal_352 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "kneel_hammer1", "kneel_hammer", Vector(-1244,944f, 75,39232f, 2531,394f), Vector(0.0f, -137,8052f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 408), 0);
	*(&iLocal_352 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Pee_nospawn2", "Pee_nospawn", Vector(-1230,62f, 76,25161f, 2518,232f), Vector(0.0f, -71,4719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 416), 0);
	*(&iLocal_352 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-1243,949f, 75,29412f, 2523,44f), Vector(0.0f, 181,0862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 424), 0);
	*(&iLocal_352 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "rand_idle_stand2", "rand_idle_stand", Vector(-1248,017f, 75,40473f, 2527,961f), Vector(0.0f, 58,84678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 432), 0);
	*(&iLocal_352 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-1244,204f, 75,34436f, 2527,539f), Vector(0.0f, -33,51836f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 440), 0);
	*(&iLocal_352 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_play_harmonica2", "sit_ground_play_harmonica", Vector(-1240,836f, 75,29408f, 2526,966f), Vector(0.0f, 56,64608f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 448), 0);
	*(&iLocal_352 + 456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_announce", "stand_announce", Vector(-1243,957f, 75,298f, 2520,003f), Vector(0.0f, 192,8241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 456), 0);
	*(&iLocal_352 + 464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-1240,005f, 75,29413f, 2524,009f), Vector(0.0f, 111,8986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 464), 0);
	*(&iLocal_352 + 472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-1252,123f, 75,19318f, 2523,851f), Vector(0.0f, 61,24049f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 472), 0);
	*(&iLocal_352 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_spit2", "stand_spit", Vector(-1248,017f, 75,42365f, 2532,021f), Vector(0.0f, 21,16471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 480), 0);
	*(&iLocal_352 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-1241,378f, 75,29407f, 2530,489f), Vector(0.0f, 42,40554f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 488), 0);
	*(&iLocal_352 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_yelling1", "stand_yelling", Vector(-1238,453f, 75,33948f, 2529,928f), Vector(0.0f, 42,61644f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 496), 0);
	*(&iLocal_352 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Pee_nospawn3", "Pee_nospawn", Vector(-1495,551f, 76,29803f, 2292,629f), Vector(0.0f, 280,3958f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 504), 0);
	*(&iLocal_352 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-1495,988f, 77,30194f, 2279,976f), Vector(0.0f, -41,60196f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 512), 0);
	*(&iLocal_352 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "rand_idle_stand3", "rand_idle_stand", Vector(-1493,025f, 77,30194f, 2274,117f), Vector(0.0f, 118,4338f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 520), 0);
	*(&iLocal_352 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Sit_Ground_Campfire_Tend2", "Sit_Ground_Campfire_Tend", Vector(-1493,487f, 77,30194f, 2278,184f), Vector(0.0f, 41,13057f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 528), 0);
	*(&iLocal_352 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_smoke2", "sit_ground_smoke", Vector(-1495,083f, 77,30194f, 2273,966f), Vector(0.0f, -172,2864f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 536), 0);
	*(&iLocal_352 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "sit_ground_smoke3", "sit_ground_smoke", Vector(-1496,851f, 77,30194f, 2276,556f), Vector(0.0f, -60,06681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 544), 0);
	*(&iLocal_352 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_announce1", "stand_announce", Vector(-1490,797f, 77,30194f, 2283,772f), Vector(0.0f, -334,6429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 552), 0);
	*(&iLocal_352 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_announce2", "stand_announce", Vector(-1500.0f, 76,29803f, 2288.0f), Vector(0.0f, -47,23029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 560), 0);
	*(&iLocal_352 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-1500.0f, 77,30194f, 2280.0f), Vector(0.0f, -86,52061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 568), 0);
	*(&iLocal_352 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_spit3", "stand_spit", Vector(-1496f, 77,30194f, 2284.0f), Vector(0.0f, -102,6642f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 576), 0);
	*(&iLocal_352 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_yawning_n_any1", "stand_yawning_n_any", Vector(-1480f, 77,6004f, 2276.0f), Vector(0.0f, 127,0419f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 584), 0);
	*(&iLocal_352 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "stand_yelling2", "stand_yelling", Vector(-1489,977f, 77,30194f, 2276,747f), Vector(0.0f, 90,28252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_352 + 592), 0);
	*(&iLocal_352 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Locked_Footlocker", "Locked_Footlocker", Vector(-1239,362f, 76,12821f, 2516,392f), Vector(0.0f, -230,5784f, 0.0f));
	*(&iLocal_352 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_352, "Locked_Footlocker1", "Locked_Footlocker", Vector(-1483,228f, 77,6f, 2272,772f), Vector(0.0f, -217,2793f, 0.0f));
	return 1;
}

void Function_269(int iParam0, int iParam1) //Position: 0x1061F / 67103
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

struct<8> Function_270() //Position: 0x10669 / 67177
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	Function_269(3, 3);
	uVar0 = &uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(&Local_0))
	{
		Local_0 = CREATE_LAYOUT("PikesBasin_layout");
	}
	*(&Local_0 + 48) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_0, "AlreadyInsideSet_set");
	*(&Local_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_AreadyIn1", 2,802597E-45f, Vector(-1139,669f, 85,50198f, 2397,994f), Vector(0.0f, -98,43246f, 0.0f), Vector(72,28513f, 38,93865f, 29,30383f));
	ADD_TO_VOLUME_SET(&Local_0 + 48, &Local_0 + 8[0]);
	*(&Local_0 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_AlreadyIn2", 2,802597E-45f, Vector(-1244,81f, 85,29498f, 2113,82f), Vector(0.0f, 0.0f, 0.0f), Vector(55,32957f, 28,01724f, 28,01724f));
	ADD_TO_VOLUME_SET(&Local_0 + 48, &Local_0 + 8[1]);
	*(&Local_0 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_AlreadyIn3", 2,802597E-45f, Vector(-1401,132f, 74,07532f, 2244,32f), Vector(0.0f, 46,80381f, 0.0f), Vector(33,13998f, 33,13998f, 59,95037f));
	ADD_TO_VOLUME_SET(&Local_0 + 48, &Local_0 + 8[2]);
	*(&Local_0 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_alreadyIn4", 2,802597E-45f, Vector(-1595,619f, 53,96125f, 2437,53f), Vector(0.0f, -37,01864f, 0.0f), Vector(71,20465f, 23,2709f, 23,2709f));
	ADD_TO_VOLUME_SET(&Local_0 + 48, &Local_0 + 8[3]);
	*(&Local_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "pikv_helperStop", 2,802597E-45f, Vector(-1178,028f, 76,29803f, 2368,719f), Vector(0.0f, 0.0f, 0.0f), Vector(8,237045f, 8,237045f, 9,253483f));
	*(&Local_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "pikv_guardVol", 2,802597E-45f, Vector(-1175,562f, 76,18143f, 2362,396f), Vector(0.0f, 35,91524f, 0.0f), Vector(11,11741f, 4,474076f, 15,52327f));
	*(&Local_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "pikv_bridgesniCyl1", 2,802597E-45f, Vector(-1280,723f, 87,13815f, 2369,308f), Vector(0.0f, -11,37486f, 0.0f), Vector(6,065359f, 6,065359f, 13,57058f));
	*(&Local_0 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "pikv_bridgesniCyl2", 2,802597E-45f, Vector(-1266,951f, 85,35784f, 2402,505f), Vector(0.0f, -113,9405f, 0.0f), Vector(4,693594f, 4,693594f, 13,95571f));
	*(&Local_0 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_slowDown", 2,802597E-45f, Vector(-1164,005f, 90,71706f, 2327,153f), Vector(0.0f, -23,07202f, 0.0f), Vector(17,27579f, 17,27579f, 24,33576f));
	*(&Local_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn1", 2,802597E-45f, Vector(-1253,801f, 80,314f, 2182,282f), Vector(0.0f, -42,79086f, 0.0f), Vector(27,61767f, 18,75238f, 20,04885f));
	*(&Local_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn2", 2,802597E-45f, Vector(-1272.0f, 80,31372f, 2236.0f), Vector(0.0f, 0.0f, 0.0f), Vector(21,51628f, 21,51628f, 21,51628f));
	*(&Local_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn3", 2,802597E-45f, Vector(-1296.0f, 76,29803f, 2288.0f), Vector(0.0f, 0.0f, 0.0f), Vector(34,95654f, 23,60032f, 23,60032f));
	*(&Local_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn4", 2,802597E-45f, Vector(-1311,946f, 70,275f, 2350,613f), Vector(0.0f, 0.0f, 0.0f), Vector(22,63349f, 21,44477f, 21,44477f));
	*(&Local_0 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn5", 2,802597E-45f, Vector(-1278,395f, 72,65167f, 2434,16f), Vector(0.0f, -14,70481f, 0.0f), Vector(31,97156f, 29,29355f, 19,24492f));
	*(&Local_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn6", 2,802597E-45f, Vector(-1265,314f, 70,43589f, 2505,984f), Vector(0.0f, 66,77618f, 0.0f), Vector(25,02906f, 14,28399f, 27,45445f));
	*(&Local_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn7", 2,802597E-45f, Vector(-1359,338f, 72,322f, 2436,749f), Vector(0.0f, 15,98228f, 0.0f), Vector(160,8902f, 27,50153f, 47,53299f));
	*(&Local_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn8", 2,802597E-45f, Vector(-1478,667f, 59,52267f, 2468,32f), Vector(0.0f, 0.0f, 0.0f), Vector(21,0649f, 37,31767f, 30,44314f));
	*(&Local_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn9", 2,802597E-45f, Vector(-1425,953f, 62,244f, 2408,26f), Vector(0.0f, 33,54885f, 0.0f), Vector(30,26427f, 23,14559f, 23,14559f));
	*(&Local_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn10", 2,802597E-45f, Vector(-1425,721f, 70,275f, 2337,188f), Vector(0.0f, 0.0f, 0.0f), Vector(28,39706f, 28,39706f, 28,39706f));
	*(&Local_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn11", 2,802597E-45f, Vector(-1467,874f, 70,374f, 2299,959f), Vector(0.0f, 0.0f, 0.0f), Vector(28,68723f, 28,68723f, 28,68723f));
	*(&Local_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_groupIn12", 2,802597E-45f, Vector(-1419,859f, 70,52f, 2263,771f), Vector(0.0f, -51,09812f, 0.0f), Vector(38,50616f, 11,87008f, 16,37532f));
	*(&Local_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_ArmGateway", 2,802597E-45f, Vector(-1625,022f, 53,95382f, 2413,722f), Vector(0.0f, -42,72219f, 0.0f), Vector(9,400867f, 15,05778f, 8,67498f));
	*(&Local_0 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_introGateway", 2,802597E-45f, Vector(-1503,814f, 59,72019f, 2460,026f), Vector(0.0f, 0.0f, 0.0f), Vector(2,134621f, 2,697062f, 3,491583f));
	*(&Local_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_helperIntro", 2,802597E-45f, Vector(-1503,47f, 59,35239f, 2461,05f), Vector(0.0f, 0.0f, 0.0f), Vector(2,652559f, 5,064361f, 2,652559f));
	*(&Local_0 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_blipMainCampSquad", 2,802597E-45f, Vector(-1216,7f, 75,29413f, 2370,382f), Vector(0.0f, 0.0f, 0.0f), Vector(168,1334f, 128,6735f, 113,9047f));
	*(&Local_0 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad8", 2,802597E-45f, Vector(-1496,443f, 69,0963f, 2452,288f), Vector(0.0f, -4,721901f, 0.0f), Vector(186,1838f, 48,31003f, 75,76049f));
	*(&Local_0 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad7", 2,802597E-45f, Vector(-1353,833f, 69,0963f, 2451,325f), Vector(0.0f, -15,48637f, 0.0f), Vector(100,3228f, 48,31003f, 68,34258f));
	*(&Local_0 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad6", 2,802597E-45f, Vector(-1281,962f, 69,0963f, 2493,322f), Vector(0.0f, 30,4951f, 0.0f), Vector(113,3849f, 48,31003f, 87,72249f));
	*(&Local_0 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad5", 2,802597E-45f, Vector(-1267,796f, 69,0963f, 2439,839f), Vector(0.0f, 87,60785f, 0.0f), Vector(113,3849f, 48,31003f, 48,50608f));
	*(&Local_0 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad4", 2,802597E-45f, Vector(-1312,318f, 83,79956f, 2333,569f), Vector(0.0f, 84,99364f, 0.0f), Vector(109,5603f, 48,31003f, 48,86852f));
	*(&Local_0 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad3", 2,802597E-45f, Vector(-1288,323f, 83,79956f, 2276,337f), Vector(0.0f, 49,85001f, 0.0f), Vector(112,6867f, 48,31003f, 44,00807f));
	*(&Local_0 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad2", 2,802597E-45f, Vector(-1274,505f, 83,79956f, 2235,281f), Vector(0.0f, 74,46017f, 0.0f), Vector(93,29057f, 48,31003f, 70,20873f));
	*(&Local_0 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BlipSquad1", 2,802597E-45f, Vector(-1255,359f, 83,79956f, 2168,172f), Vector(0.0f, 74,46017f, 0.0f), Vector(111,5295f, 48,31003f, 70,20873f));
	*(&Local_0 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_MainCampStayIn", 2,802597E-45f, Vector(-1200,78f, 75,54284f, 2368,463f), Vector(0.0f, 0.0f, 0.0f), Vector(37,88311f, 20,66769f, 32,60902f));
	*(&Local_0 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_VolumeSet01", 4,203895E-45f, Vector(-1177,527f, 72,63332f, 2369,007f), Vector(0.0f, 2,914154f, 0.0f), Vector(56,80202f, 56,80202f, 56,80202f));
	*(&Local_0 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_VolumeSet02", 4,203895E-45f, Vector(-1250,711f, 84,03722f, 2139,524f), Vector(0.0f, 2,914154f, 0.0f), Vector(32,67224f, 32,67224f, 32,67224f));
	*(&Local_0 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_VolumeSet03", 4,203895E-45f, Vector(-1408,88f, 80,74612f, 2229,907f), Vector(0.0f, 2,914154f, 0.0f), Vector(23,84316f, 23,84316f, 23,84316f));
	*(&Local_0 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_VolumeSet04", 4,203895E-45f, Vector(-1585,562f, 50,80611f, 2438,274f), Vector(0.0f, 2,914154f, 0.0f), Vector(41,29047f, 38,31564f, 41,29047f));
	*(&Local_0 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_BridgeGuyStayIn", 2,802597E-45f, Vector(-1267,027f, 85,61971f, 2402,348f), Vector(0.0f, -24,63436f, 0.0f), Vector(8,233026f, 4,08976f, 3,708815f));
	*(&Local_0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_excitedReturn", 2,802597E-45f, Vector(-1490,9f, 59,52267f, 2468,32f), Vector(0.0f, 0.0f, 0.0f), Vector(50,54816f, 60,89615f, 49,67807f));
	*(&Local_0 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_0, "v_CheckPlayerHorse", 2,802597E-45f, Vector(-1504,312f, 59,35239f, 2461,05f), Vector(0.0f, 0.0f, 0.0f), Vector(14,22822f, 15,17736f, 14,60995f));
	*(&Local_0 + 352) = Vector(-1503,966f, 59,05378f, 2461,444f);
	*(&Local_0 + 352 + 12) = Vector(0.0f, 274,7909f, 0.0f);
	*(&Local_0 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "pikf_help_front", Vector(-1503,966f, 59,05378f, 2461,444f), Vector(0.0f, 274,7909f, 0.0f));
	*(&Local_0 + 384) = Vector(-1608,838f, 53,96173f, 2422,991f);
	*(&Local_0 + 384 + 12) = Vector(0.0f, -113,2362f, 0.0f);
	*(&Local_0 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "pikf_teleport", Vector(-1608,838f, 53,96173f, 2422,991f), Vector(0.0f, -113,2362f, 0.0f));
	*(&Local_0 + 416) = Vector(-1239,878f, 75,66244f, 2520,361f);
	*(&Local_0 + 416 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "nf_camp1_1", Vector(-1239,878f, 75,66244f, 2520,361f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 448) = Vector(-1240.0f, 75,29407f, 2528f);
	*(&Local_0 + 448 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "nf_camp1_2", Vector(-1240.0f, 75,29407f, 2528f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 480) = Vector(-1496f, 77,30194f, 2284.0f);
	*(&Local_0 + 480 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "nf_camp2_1", Vector(-1496f, 77,30194f, 2284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 512) = Vector(-1492f, 77,30194f, 2284.0f);
	*(&Local_0 + 512 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "nf_camp2_2", Vector(-1492f, 77,30194f, 2284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group1_1", Vector(-1250,268f, 80,21631f, 2185,513f), Vector(0.0f, 60,74244f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 544, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 544, "FTE", true);
	*(&Local_0 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group1_2", Vector(-1251,885f, 80,12868f, 2183,575f), Vector(0.0f, 258,1044f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 552, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 552, "FTE", true);
	*(&Local_0 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group1_3", Vector(-1253,715f, 80,31372f, 2188,117f), Vector(0.0f, -33,97869f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 560, "PIK_Canyon", true);
	*(&Local_0 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group2_1", Vector(-1268f, 80,31372f, 2240.0f), Vector(0.0f, 7,574362f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 568, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 568, "FTE", true);
	*(&Local_0 + 576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group2_2", Vector(-1272,061f, 80,31372f, 2232,837f), Vector(0.0f, -4,182311f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 576, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 576, "FTE", true);
	*(&Local_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group2_3", Vector(-1274,929f, 79,30981f, 2240.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 584, "PIK_Canyon", true);
	*(&Local_0 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group3_1", Vector(-1290,873f, 76,29803f, 2289,005f), Vector(0.0f, -31,94887f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 592, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 592, "FTE", true);
	*(&Local_0 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group3_2", Vector(-1297,173f, 76,29803f, 2285,627f), Vector(0.0f, -39,85867f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 600, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 600, "FTE", true);
	*(&Local_0 + 608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group3_3", Vector(-1301,273f, 76,29803f, 2285,453f), Vector(0.0f, 327,0281f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 608, "PIK_Canyon", true);
	*(&Local_0 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group4_1", Vector(-1306,897f, 71,27841f, 2353,559f), Vector(0.0f, 27,44552f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 616, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 616, "FTE", true);
	*(&Local_0 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group4_2", Vector(-1323,141f, 71,27841f, 2348,429f), Vector(0.0f, 5,391821f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 624, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 624, "FTE", true);
	*(&Local_0 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group4_3", Vector(-1309,483f, 71,27841f, 2354,814f), Vector(0.0f, 41,27657f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 632, "PIK_Canyon", true);
	*(&Local_0 + 640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group5_1", Vector(-1282,078f, 70,32738f, 2433,271f), Vector(0.0f, -198,1902f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 640, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 640, "FTE", true);
	*(&Local_0 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group5_2", Vector(-1274,775f, 70,28547f, 2433,839f), Vector(-176,5139f, 29,47797f, 182,9077f));
	DECOR_SET_BOOL(&Local_0 + 648, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 648, "FTE", true);
	*(&Local_0 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group5_3", Vector(-1267,109f, 84,18763f, 2402,51f), Vector(0.0f, -203,9592f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 656, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 656, "FTE", true);
	*(&Local_0 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group6_1", Vector(-1267,538f, 69,32523f, 2501,696f), Vector(0.0f, -215,1035f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 664, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 664, "FTE", true);
	*(&Local_0 + 672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group6_2", Vector(-1257,553f, 70,05267f, 2500,39f), Vector(0.0f, -198,1204f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 672, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 672, "FTE", true);
	*(&Local_0 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group6_3", Vector(-1260,314f, 69,43683f, 2511,771f), Vector(0.0f, 69,9072f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 680, "PIK_Canyon", true);
	*(&Local_0 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group7_1", Vector(-1349,316f, 72,34944f, 2438,939f), Vector(0.0f, -291,7401f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 688, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 688, "FTE", true);
	*(&Local_0 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group7_2", Vector(-1333,182f, 73,15293f, 2434,341f), Vector(0.0f, -285,5722f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 696, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 696, "FTE", true);
	*(&Local_0 + 704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group7_3", Vector(-1355,373f, 73,04667f, 2426,764f), Vector(0.0f, -272,9511f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 704, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 704, "FTE", true);
	*(&Local_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group7_4", Vector(-1390,267f, 76,69369f, 2462,469f), Vector(0.0f, -265,598f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 712, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 712, "FTE", true);
	*(&Local_0 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group7_5", Vector(-1410,233f, 68,90279f, 2446,952f), Vector(0.0f, -237,4765f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 720, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 720, "FTE", true);
	*(&Local_0 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group8_1", Vector(-1471,338f, 60,93575f, 2469,271f), Vector(0.0f, -245,6488f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 728, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 728, "FTE", true);
	*(&Local_0 + 736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group8_2", Vector(-1478,161f, 60,18522f, 2476,429f), Vector(0.0f, -268,5379f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 736, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 736, "FTE", true);
	*(&Local_0 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group8_3", Vector(-1477,018f, 60,35752f, 2469,042f), Vector(0.0f, -282,0281f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 744, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 744, "FTE", true);
	*(&Local_0 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group9_1", Vector(-1432.0f, 64,25095f, 2408.0f), Vector(0.0f, 138,7788f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 752, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 752, "FTE", true);
	*(&Local_0 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group9_2", Vector(-1424.0f, 64,25099f, 2412.0f), Vector(0.0f, 126,2359f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 760, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 760, "FTE", true);
	*(&Local_0 + 768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group9_3", Vector(-1424.0f, 64,79581f, 2400.0f), Vector(0.0f, -262,6426f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 768, "PIK_Canyon", true);
	*(&Local_0 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group10_1", Vector(-1416f, 70,27448f, 2336f), Vector(0.0f, -219,3174f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 776, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 776, "FTE", true);
	*(&Local_0 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group10_2", Vector(-1432f, 70,27446f, 2340.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 784, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 784, "FTE", true);
	*(&Local_0 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group10_3", Vector(-1432f, 70,27448f, 2332f), Vector(0.0f, -241,2943f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 792, "PIK_Canyon", true);
	*(&Local_0 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group11_1", Vector(-1464.0f, 70,27451f, 2296.0f), Vector(0.0f, -189,857f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 800, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 800, "FTE", true);
	*(&Local_0 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group11_2", Vector(-1480f, 69,27057f, 2308.0f), Vector(0.0f, -34,79613f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 808, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 808, "FTE", true);
	*(&Local_0 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group11_3", Vector(-1471,832f, 69,27057f, 2312.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 816, "PIK_Canyon", true);
	*(&Local_0 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group12_1", Vector(-1420.0f, 71,27841f, 2273,024f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 824, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 824, "FTE", true);
	*(&Local_0 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group12_2", Vector(-1424.0f, 71,27841f, 2264f), Vector(0.0f, -83,38127f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 832, "PIK_Canyon", true);
	DECOR_SET_BOOL(&Local_0 + 832, "FTE", true);
	*(&Local_0 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_group12_3", Vector(-1412.0f, 71,13173f, 2268,177f), Vector(0.0f, 67,39184f, 0.0f));
	DECOR_SET_BOOL(&Local_0 + 840, "PIK_Canyon", true);
	*(&Local_0 + 848) = Vector(-1457,178f, 86,87448f, 2310,231f);
	*(&Local_0 + 848 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "bridgePin1_2", Vector(-1457,178f, 86,87448f, 2310,231f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 880) = Vector(-1455,008f, 86,87398f, 2310,237f);
	*(&Local_0 + 880 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "bridgePin1_1", Vector(-1455,008f, 86,87398f, 2310,237f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 912) = Vector(-1454,823f, 86,91029f, 2274,059f);
	*(&Local_0 + 912 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "bridgePin1_3", Vector(-1454,823f, 86,91029f, 2274,059f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 944) = Vector(-1457,144f, 86,91412f, 2274,033f);
	*(&Local_0 + 944 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_0 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "bridgePin1_4", Vector(-1457,144f, 86,91412f, 2274,033f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_0 + 976) = Vector(-1634,091f, 54,21176f, 2402,574f);
	*(&Local_0 + 976 + 12) = Vector(0.0f, 52,20312f, 0.0f);
	*(&Local_0 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_playerGoToFlag", Vector(-1634,091f, 54,21176f, 2402,574f), Vector(0.0f, 52,20312f, 0.0f));
	*(&Local_0 + 1008) = Vector(-1161,776f, 76,63732f, 2364.0f);
	*(&Local_0 + 1008 + 12) = Vector(0.0f, 109,5129f, 0.0f);
	*(&Local_0 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_HerdCreation", Vector(-1161,776f, 76,63732f, 2364.0f), Vector(0.0f, 109,5129f, 0.0f));
	*(&Local_0 + 1040) = Vector(-1660,24f, 51,9105f, 2392,137f);
	*(&Local_0 + 1040 + 12) = Vector(0.0f, 64,63776f, 0.0f);
	*(&Local_0 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_CowGoToFlag", Vector(-1660,24f, 51,9105f, 2392,137f), Vector(0.0f, 64,63776f, 0.0f));
	*(&Local_0 + 1072) = CREATE_OBJECTSET_IN_LAYOUT("PIK_AreaChestsSet", &Local_0, 8, 0);
	*(&Local_0 + 1080[03]) = Vector(-1190,333f, 75,295f, 2379,068f);
	*(&Local_0 + 1080[03] + 12) = Vector(0.0f, 90.0f, 0.0f);
	iVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_AreaChests01", Vector(-1190,333f, 75,295f, 2379,068f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar1, &Local_0 + 1072);
	*(&Local_0 + 1080[13]) = Vector(-1194,71f, 75,295f, 2361,093f);
	*(&Local_0 + 1080[13] + 12) = Vector(0.0f, 140,6601f, 0.0f);
	iVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_AreaChests02", Vector(-1194,71f, 75,295f, 2361,093f), Vector(0.0f, 140,6601f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar2, &Local_0 + 1072);
	*(&Local_0 + 1136) = Vector(-1503,75f, 59,10756f, 2460,121f);
	*(&Local_0 + 1136 + 12) = Vector(0.0f, -180.0f, 0.0f);
	*(&Local_0 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_teleportJohnCrouch", Vector(-1503,75f, 59,10756f, 2460,121f), Vector(0.0f, -180.0f, 0.0f));
	*(&Local_0 + 1168) = Vector(-1503,809f, 59,05842f, 2461,374f);
	*(&Local_0 + 1168 + 12) = Vector(0.0f, -51,92019f, 0.0f);
	*(&Local_0 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_teleportRancherCrouch", Vector(-1503,809f, 59,05842f, 2461,374f), Vector(0.0f, -51,92019f, 0.0f));
	*(&Local_0 + 1200) = Vector(-1178,068f, 76,29803f, 2369,931f);
	*(&Local_0 + 1200 + 12) = Vector(0.0f, -134,7105f, 0.0f);
	*(&Local_0 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_teleportRancher", Vector(-1178,068f, 76,29803f, 2369,931f), Vector(0.0f, -134,7105f, 0.0f));
	*(&Local_0 + 1232) = Vector(-1176,856f, 76,29803f, 2371,131f);
	*(&Local_0 + 1232 + 12) = Vector(0.0f, -318,3134f, 0.0f);
	*(&Local_0 + 1256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_teleportMarston", Vector(-1176,856f, 76,29803f, 2371,131f), Vector(0.0f, -318,3134f, 0.0f));
	*(&Local_0 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_MAINCAMP1", Vector(-1204.0f, 75,29412f, 2363,419f), Vector(0.0f, 97,0135f, 0.0f));
	*(&Local_0 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_MAINCAMP2", Vector(-1192.0f, 75,29413f, 2380.0f), Vector(0.0f, 65,82169f, 0.0f));
	*(&Local_0 + 1280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_MAINCAMP3", Vector(-1212,993f, 74,29016f, 2371,007f), Vector(0.0f, 85,32869f, 0.0f));
	*(&Local_0 + 1288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_MAINCAMP4", Vector(-1192f, 75,29413f, 2368.0f), Vector(0.0f, 96,14014f, 0.0f));
	*(&Local_0 + 1296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_PIK_MAINCAMP5", Vector(-1204f, 74,61318f, 2378,142f), Vector(0.0f, 101,9614f, 0.0f));
	*(&Local_0 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_0, "f_TeleportHorse", Vector(-1512,136f, 58,64619f, 2461,237f), Vector(0.0f, -65,3695f, 0.0f));
	*(&Local_0 + 1312) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "introCover", Vector(-1504,215f, 59,13425f, 2461f), Vector(0.0f, -90,29622f, 0.0f), 4);
	*(&Local_0 + 1320) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low1", Vector(-1430,396f, 64,9642f, 2465,819f), Vector(0.0f, -66,76308f, 0.0f), 4);
	*(&Local_0 + 1328) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low1a", Vector(-1375,024f, 70,46259f, 2438,6f), Vector(0.0f, -73,59174f, 0.0f), 4);
	*(&Local_0 + 1336) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low2", Vector(-1281,78f, 68,36338f, 2523,242f), Vector(0.0f, -74,8913f, 0.0f), 4);
	*(&Local_0 + 1344) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low3", Vector(-1287,685f, 70,39079f, 2458,864f), Vector(0.0f, -24,91617f, 0.0f), 4);
	*(&Local_0 + 1352) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low4", Vector(-1241,877f, 73,56133f, 2375,054f), Vector(0.0f, -89,48199f, 0.0f), 4);
	*(&Local_0 + 1360) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low5", Vector(-1216,463f, 74,29016f, 2369,405f), Vector(0.0f, -449,8068f, 0.0f), 4);
	*(&Local_0 + 1368) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low6", Vector(-1306,166f, 73,15712f, 2323,85f), Vector(0.0f, -363,3798f, 0.0f), 4);
	*(&Local_0 + 1376) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low7", Vector(-1276,516f, 77,5472f, 2281,081f), Vector(0.0f, -373,7749f, 0.0f), 4);
	*(&Local_0 + 1384) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_0, "cover_low8", Vector(-1262,99f, 80,40509f, 2211,63f), Vector(0.0f, -381,7527f, 0.0f), 4);
	PushArrayP();
	*(&Local_0 + 1392) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_0, "c_CowFollowPath01");
	PushArrayP();
	*(&Local_0 + 1400) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_0, "path_cows01");
	return 1;
	Unknown_Function();
	if (!128)
	{
		return;
	}
}

var Function_271(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x12F4F / 77647
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&iParam1, iParam2);
	iVar0 = Function_272(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_213(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_272(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x12F8D / 77709
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_213(&(Param0[iVar02]), 4);
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

int Function_273(int iParam0) //Position: 0x1305C / 77916
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
	if (Function_263(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

