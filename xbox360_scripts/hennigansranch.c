//Decompiled with MagicRDR v1.0
//Function Count : 145
//Statics Count : 863
//Natives Count : 164
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<25> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_342 = 0;
	bool bLocal_343 = false;
	bool bLocal_344 = false;
	var uLocal_345 = 25;
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
	int iLocal_846 = 0;
	bool bLocal_847 = false;
	struct<4> Local_848[3];
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_342 = 0;
	SET_DUST_LEVEL(2);
	Function_144("Initializing Hennigan's Ranch", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_343 = 1000;
		switch (iLocal_342)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_342 = 1;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000001:
				if (Function_143())
				{
					Global_62981 = 0;
					if (Function_140(22, 0))
					{
						Function_139(&(Global_6563[212]), 2);
					}
					else
					{
						Function_138(&(Global_6563[212]), 2);
					}
					iLocal_342 = 2;
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
				bLocal_343 = false;
				break;
			
			case 0x00000002:
				if (Function_129())
				{
					Function_128(&(Global_29008[iScriptParam_0]), 32);
					Local_848[04] = { StackVal, StackVal, StackVal, Function_127(FIND_OBJECT_IN_LAYOUT(Local_13, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(Local_13, "stand_drunkdancing_e_any2"), 1, 0, 0, 0, 0, 1) };
					Local_848[14] = { StackVal, StackVal, StackVal, Function_127(FIND_OBJECT_IN_LAYOUT(Local_13, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(Local_13, "stand_drunkdancing_e_any1"), 1, 0, 0, 0, 0, 1) };
					Local_848[24] = { StackVal, StackVal, StackVal, Function_127(FIND_OBJECT_IN_LAYOUT(Local_13, "stand_fiddle_w_fiddle"), FIND_OBJECT_IN_LAYOUT(Local_13, "stand_drunkdancing_e_any"), 1, 0, 0, 0, 0, 1) };
					iLocal_342 = 3;
					if (Function_140(22, 0))
					{
					}
				}
				bLocal_343 = false;
				break;
			
			case 0x00000003:
				bLocal_344 = LAUNCH_NEW_SCRIPT_WITH_ARGS("HennigansRanchVol", &iScriptParam_0, 2, 0);
				Function_126(&Global_6563, &Global_7581, iScriptParam_0);
				iLocal_342 = 5;
				bLocal_343 = false;
				break;
			
			case 0x00000005:
				if (Function_125(&Global_6563, &Global_7581, iScriptParam_0))
				{
					iLocal_342 = 4;
					bLocal_343 = false;
				}
				else
				{
					bLocal_343 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_124(&(Global_29008[iScriptParam_0]), 16) && Function_123(Global_29155[iScriptParam_010]))
				{
					iLocal_342 = 6;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000006:
				Function_122(0, &uLocal_345, -839,9963f, 90,36563f, 2461,841f);
				Function_121(0, &uLocal_345, Local_13.f_1008);
				Function_120(0, &uLocal_345, -900,2579f, 91,41033f, 2401,673f);
				Function_119(0, &uLocal_345, -839,9963f, 90,36563f, 2461,841f);
				Function_118(0, &uLocal_345, Local_13.f_880);
				Function_117(0, &uLocal_345, Local_13.f_880);
				Function_116(0, &uLocal_345, Local_13);
				Function_122(1, &uLocal_345, -843,738f, 90,353f, 2438,04f);
				Function_115(1, &uLocal_345, -843,738f, 90,353f, 2438,04f);
				Function_120(1, &uLocal_345, -843,738f, 90,353f, 2438,04f);
				Function_119(1, &uLocal_345, -843,738f, 90,353f, 2438,04f);
				Function_118(1, &uLocal_345, Local_13.f_884);
				Function_114(1, &uLocal_345, -814,983f, 92,855f, 2387,132f);
				Function_116(1, &uLocal_345, Local_13);
				Function_113(2, &uLocal_345, Local_13.f_1052);
				Function_121(2, &uLocal_345, Local_13.f_1052);
				Function_112(2, &uLocal_345, Local_13.f_1052);
				Function_111(2, &uLocal_345, Local_13.f_1052);
				Function_118(2, &uLocal_345, Local_13.f_1052);
				Function_117(2, &uLocal_345, Local_13.f_856);
				Function_116(2, &uLocal_345, Local_13);
				Function_122(3, &uLocal_345, -839,111f, 92,35474f, 2355,903f);
				Function_115(3, &uLocal_345, -839,111f, 92,35474f, 2355,903f);
				Function_120(3, &uLocal_345, -839,111f, 92,35474f, 2355,903f);
				Function_119(3, &uLocal_345, -839,111f, 92,35474f, 2355,903f);
				Function_118(3, &uLocal_345, Local_13.f_952);
				Function_114(3, &uLocal_345, -821,334f, 92,847f, 2364,776f);
				Function_116(3, &uLocal_345, Local_13);
				Function_122(4, &uLocal_345, -905,282f, 91,35687f, 2376,046f);
				Function_115(4, &uLocal_345, -884,1996f, 91,35687f, 2340,532f);
				Function_120(4, &uLocal_345, -869,2902f, 91,35687f, 2391,068f);
				Function_119(4, &uLocal_345, -905,282f, 91,35687f, 2376,046f);
				Function_118(4, &uLocal_345, Local_13.f_896);
				Function_114(4, &uLocal_345, -814,202f, 92,847f, 2385,74f);
				Function_116(4, &uLocal_345, Local_13);
				Function_113(5, &uLocal_345, Local_13.f_1012);
				Function_121(5, &uLocal_345, Local_13.f_1012);
				Function_112(5, &uLocal_345, Local_13.f_1012);
				Function_111(5, &uLocal_345, Local_13.f_1012);
				Function_118(5, &uLocal_345, Local_13.f_1012);
				Function_114(5, &uLocal_345, -818,292f, 92,847f, 2365,753f);
				Function_116(5, &uLocal_345, Local_13);
				Function_113(6, &uLocal_345, Local_13.f_900);
				Function_115(6, &uLocal_345, -881,5222f, 91,41033f, 2394,91f);
				Function_120(6, &uLocal_345, -881,5222f, 91,41033f, 2394,91f);
				Function_119(6, &uLocal_345, -881,5222f, 91,41033f, 2394,91f);
				Function_110(6, &uLocal_345, -828,658f, 92,442f, 2375,654f);
				Function_114(6, &uLocal_345, -815,556f, 92,847f, 2366,083f);
				Function_116(6, &uLocal_345, Local_13);
				Function_113(7, &uLocal_345, Local_13.f_1048);
				Function_121(7, &uLocal_345, Local_13.f_1048);
				Function_112(7, &uLocal_345, Local_13.f_1048);
				Function_111(7, &uLocal_345, Local_13.f_1048);
				Function_118(7, &uLocal_345, Local_13.f_960);
				Function_114(7, &uLocal_345, -811,331f, 92,861f, 2382,26f);
				Function_116(7, &uLocal_345, Local_13);
				Function_122(8, &uLocal_345, -871,4838f, 90,3869f, 2459,469f);
				Function_115(8, &uLocal_345, -883,5331f, 90,35291f, 2454,028f);
				Function_120(8, &uLocal_345, -871,4838f, 90,3869f, 2459,469f);
				Function_119(8, &uLocal_345, -883,5331f, 90,35291f, 2454,028f);
				Function_110(8, &uLocal_345, -831,489f, 92,361f, 2371,837f);
				Function_114(8, &uLocal_345, -810,144f, 92,861f, 2381,214f);
				Function_116(8, &uLocal_345, Local_13);
				Function_122(10, &uLocal_345, -938,6854f, 90,37209f, 2473,552f);
				Function_115(10, &uLocal_345, -911,2079f, 90,36329f, 2442,858f);
				Function_120(10, &uLocal_345, -938,6854f, 90,37209f, 2473,552f);
				Function_119(10, &uLocal_345, -911,2079f, 90,36329f, 2442,858f);
				Function_118(10, &uLocal_345, Local_13.f_964);
				Function_117(10, &uLocal_345, Local_13.f_888);
				Function_116(10, &uLocal_345, Local_13);
				Function_113(11, &uLocal_345, Local_13.f_1056);
				Function_121(11, &uLocal_345, Local_13.f_1056);
				Function_112(11, &uLocal_345, Local_13.f_1056);
				Function_111(11, &uLocal_345, Local_13.f_1056);
				Function_118(11, &uLocal_345, Local_13.f_944);
				Function_117(11, &uLocal_345, Local_13.f_972);
				Function_116(11, &uLocal_345, Local_13);
				Function_113(12, &uLocal_345, Local_13.f_912);
				Function_115(12, &uLocal_345, -854,117f, 91,283f, 2384,327f);
				Function_120(12, &uLocal_345, -854,117f, 91,283f, 2384,327f);
				Function_119(12, &uLocal_345, -854,117f, 91,283f, 2384,327f);
				Function_118(12, &uLocal_345, Local_13.f_960);
				Function_117(12, &uLocal_345, Local_13.f_960);
				Function_116(12, &uLocal_345, Local_13);
				Function_122(13, &uLocal_345, -806,974f, 92,723f, 2372,991f);
				Function_115(13, &uLocal_345, -832,044f, 92,591f, 2399,294f);
				Function_120(13, &uLocal_345, -832,044f, 92,591f, 2399,294f);
				Function_119(13, &uLocal_345, -832,044f, 92,591f, 2399,294f);
				Function_110(13, &uLocal_345, -825,233f, 92,384f, 2370,986f);
				Function_114(13, &uLocal_345, -806,974f, 92,723f, 2372,991f);
				Function_116(13, &uLocal_345, Local_13);
				Function_113(14, &uLocal_345, Local_13.f_1104);
				Function_121(14, &uLocal_345, Local_13.f_1104);
				Function_112(14, &uLocal_345, Local_13.f_1104);
				Function_111(14, &uLocal_345, Local_13.f_1104);
				Function_110(14, &uLocal_345, -833,786f, 92,361f, 2369,264f);
				Function_117(14, &uLocal_345, Local_13.f_980);
				Function_116(14, &uLocal_345, Local_13);
				Function_113(15, &uLocal_345, Local_13.f_928);
				Function_115(15, &uLocal_345, -811,331f, 92,861f, 2382,26f);
				Function_120(15, &uLocal_345, -811,331f, 92,861f, 2382,26f);
				Function_119(15, &uLocal_345, -805,0695f, 92,5545f, 2373,686f);
				Function_118(15, &uLocal_345, Local_13.f_928);
				Function_117(15, &uLocal_345, Local_13.f_928);
				Function_116(15, &uLocal_345, Local_13);
				Function_113(16, &uLocal_345, Local_13.f_908);
				Function_115(16, &uLocal_345, -818,292f, 92,847f, 2365,753f);
				Function_120(16, &uLocal_345, -818,292f, 92,847f, 2365,753f);
				Function_119(16, &uLocal_345, -807,178f, 92,5545f, 2373,686f);
				Function_118(16, &uLocal_345, Local_13.f_908);
				Function_117(16, &uLocal_345, Local_13.f_908);
				Function_116(16, &uLocal_345, Local_13);
				Function_113(17, &uLocal_345, Local_13.f_1032);
				Function_115(17, &uLocal_345, -821,334f, 92,847f, 2364,776f);
				Function_120(17, &uLocal_345, -821,334f, 92,847f, 2364,776f);
				Function_111(17, &uLocal_345, Local_13.f_904);
				Function_118(17, &uLocal_345, Local_13.f_1032);
				Function_117(17, &uLocal_345, Local_13.f_1032);
				Function_116(17, &uLocal_345, Local_13);
				Function_122(21, &uLocal_345, -823,562f, 93,809f, 2428,292f);
				Function_121(21, &uLocal_345, Local_13.f_1100);
				Function_120(21, &uLocal_345, -823,562f, 93,809f, 2428,292f);
				Function_111(21, &uLocal_345, Local_13.f_1100);
				Function_110(21, &uLocal_345, -823,562f, 93,809f, 2428,292f);
				Function_117(21, &uLocal_345, Local_13.f_1028);
				Function_116(21, &uLocal_345, Local_13);
				Function_122(22, &uLocal_345, -826,8616f, 92,7626f, 2389,543f);
				Function_115(22, &uLocal_345, -826,8616f, 92,7626f, 2389,543f);
				Function_120(22, &uLocal_345, -826,8616f, 92,7626f, 2389,543f);
				Function_119(22, &uLocal_345, -826,8616f, 92,7626f, 2389,543f);
				Function_110(22, &uLocal_345, -826,8616f, 92,7626f, 2389,543f);
				Function_114(22, &uLocal_345, -826,8616f, 92,7626f, 2389,543f);
				Function_116(22, &uLocal_345, Local_13);
				Function_122(23, &uLocal_345, -809,7669f, 92,58f, 2377,339f);
				Function_115(23, &uLocal_345, -827,287f, 92,3608f, 2382,485f);
				Function_120(23, &uLocal_345, -830,1461f, 92,36078f, 2369,648f);
				Function_119(23, &uLocal_345, -830,1461f, 92,36078f, 2369,648f);
				Function_110(23, &uLocal_345, -830,542f, 92,366f, 2371,186f);
				Function_114(23, &uLocal_345, -830,542f, 92,366f, 2371,186f);
				Function_116(23, &uLocal_345, Local_13);
				Function_122(24, &uLocal_345, -826,4434f, 92,3608f, 2381,681f);
				Function_115(24, &uLocal_345, -815,8525f, 92,8752f, 2365,097f);
				Function_120(24, &uLocal_345, -826,4434f, 92,3608f, 2381,681f);
				Function_119(24, &uLocal_345, -826,4434f, 92,3608f, 2381,681f);
				Function_110(24, &uLocal_345, -828,824f, 92,364f, 2368,46f);
				Function_114(24, &uLocal_345, -828,824f, 92,364f, 2368,46f);
				Function_116(24, &uLocal_345, Local_13);
				Function_122(18, &uLocal_345, -952,802f, 90,553f, 2429,724f);
				Function_115(18, &uLocal_345, -952,802f, 90,553f, 2429,724f);
				Function_120(18, &uLocal_345, -952,802f, 90,553f, 2429,724f);
				Function_119(18, &uLocal_345, -952,802f, 90,553f, 2429,724f);
				Function_110(18, &uLocal_345, -952,802f, 90,553f, 2429,724f);
				Function_117(18, &uLocal_345, Local_13.f_1016);
				Function_116(18, &uLocal_345, Local_13);
				Function_122(9, &uLocal_345, -827,9807f, 92,54639f, 2359,82f);
				Function_115(9, &uLocal_345, -827,9807f, 92,54639f, 2359,82f);
				Function_120(9, &uLocal_345, -827,9807f, 92,54639f, 2359,82f);
				Function_119(9, &uLocal_345, -827,9807f, 92,54639f, 2359,82f);
				Function_110(9, &uLocal_345, -827,9807f, 92,54639f, 2359,82f);
				Function_117(9, &uLocal_345, Local_13.f_968);
				Function_116(9, &uLocal_345, Local_13);
				Function_106(&Global_6563, &Global_7581, &uLocal_345, Global_6289, iScriptParam_0);
				if (Function_124(&(Global_29008[iScriptParam_0]), 256) || !Function_105(2))
				{
					iLocal_846 = 1;
				}
				bLocal_847 = Function_104(Global_30668[0], "hennigansRanch", "store01", 2);
				if (IS_DOOR_VALID(bLocal_847))
				{
					Function_103(StackVal, bLocal_847);
				}
				Function_102(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 936));
				Function_102(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 940));
				Function_101(StackVal, FIND_VOLUME_IN_LAYOUT(Local_13, "hen_genStore_set"));
				Function_100(StackVal, 1);
				Function_99(StackVal, 397);
				Function_101(StackVal, FIND_VOLUME_IN_LAYOUT(Local_13, "hen_house01_set"));
				Function_100(StackVal, 3);
				Function_99(StackVal, 398);
				Function_93(0, Local_13.f_976, Local_13.f_756, Local_13.f_756, 0, 0, Local_4.f_24);
				Function_86(StackVal, 1, "$/content/Ambient/JobSystem/Job_nightwatch", -818,786f, 93,336f, 2420,76f, 341, iScriptParam_0, 48, -1.0f, 15, 0);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_13, "henv_bonniesYard")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "henv_bonniesYard"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "henv_bonniesYard"));
				}
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_13, "hen_playerHouse_set")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "hen_playerHouse_set"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "hen_playerHouse_set"));
				}
				else
				{
					LOG_ERROR("HEN: Cannot find hen_playerHouse_set to restrict players room");
				}
				if (Global_3380)
				{
				}
				Function_128(&(Global_29008[iScriptParam_0]), 8);
				if (Function_124(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_85(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_342 = 10;
				}
				else
				{
					iLocal_342 = 7;
				}
				bLocal_343 = false;
				break;
			
			case 0x00000007:
				Function_81(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 65.0f, 8, 70, 0);
				Function_80(&Global_17483[975] + 120, 2, 5.0f, 1, 4294967295);
				Function_81(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 65.0f, 8, 70, 0);
				Function_80(&Global_17483[875] + 120, 2, 5.0f, 1, 4294967295);
				Function_81(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 65.0f, 8, 70, 0);
				Function_80(&Global_17483[1075] + 120, 2, 5.0f, 1, 4294967295);
				Function_79(iScriptParam_0);
				Function_76(iScriptParam_0);
				Function_75(iScriptParam_0);
				Function_74(iScriptParam_0);
				if (Function_72(5) && !Function_70(5, 16))
				{
					Function_68(iScriptParam_0);
				}
				Function_56(&Global_62527, 5, Global_30668[0], "$/content/Frontier/Mini_Games/HorseShoes_HEN/HorseShoes_HEN", 4294967295, 0, "HenHorseShoes", 350, -820,956f, 92,361f, 2349,257f, 10.0f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "Henv_HorseShoePit"));
				Function_56(&Global_62527, 0, Global_30668[0], "$/content/Frontier/Mini_Games/Poker_HEN/Poker_HEN", 4294967295, 0, "HenPoker", 433, -800,868f, 92,753f, 2375,346f, 3,5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "henv_Poker"));
				Function_55(&Global_62527, 0, 10);
				Function_51(&Global_62527, 0, 48);
				Function_51(&Global_62527, 5, 14);
				Function_50(&Global_62527, 5);
				iLocal_342 = 8;
				bLocal_343 = false;
				break;
			
			case 0x00000008:
				if (Function_49(iScriptParam_0, &Global_6563, iLocal_846))
				{
					Function_45(StackVal, 0, 0,1f, 4, Local_4, 1);
					Function_41(2, 4294967295, 4294967295, 0, 3);
				}
				else
				{
					Function_45(StackVal, 2, 0,5f, 4, Local_4, 1);
					Function_40(64);
					Function_41(0, 8, 4, 6, 3);
				}
				Function_37(Local_4);
				Function_35(17, 0);
				Function_128(&(Global_29008[iScriptParam_0]), 512);
				iLocal_342 = 9;
				bLocal_343 = false;
				break;
			
			case 0x00000009:
				Function_33(Local_4, iScriptParam_0);
				Function_128(&(Global_29008[iScriptParam_0]), 4);
				Function_32("Finished Initializing Hennigan's Ranch", 5.0f);
				iLocal_342 = 10;
				bLocal_343 = false;
				break;
			
			case 0x0000000A:
				if (!Function_31(Global_62981, 1))
				{
					if (Function_29(&(Global_30668[0]), 0))
					{
						Function_28(&Global_62981, 1);
					}
				}
				if (!Function_27(Global_76846, 8))
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if ((IS_ACTOR_IN_VOLUME(StackVal, Global_34573) && Function_140(3, 0)) && !Function_140(8, 0))
						{
							Function_22(Global_34573, 8, 1, 0);
						}
					}
				}
				Function_19(&Local_848);
				if (Function_124(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_342 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_343);
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
	Function_12(&Global_6563, &Global_7581, iScriptParam_0, (iLocal_846 || Global_3380));
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_1(0);
	Function_40(64);
	Function_85(&(Global_29008[iScriptParam_0]), 32);
	Function_85(&(Global_29008[iScriptParam_0]), 64);
	Function_85(&(Global_29008[iScriptParam_0]), 8);
	Function_85(&(Global_29008[iScriptParam_0]), 512);
	Function_85(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_344))
	{
		TERMINATE_SCRIPT(bLocal_344);
	}
	Function_32("Unloaded Hennigan's Ranch", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x15A6 / 5542
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26998)
	{
		if (bParam0)
		{
			Global_26998[iVar018].f_36 = 1;
		}
		else
		{
			Global_26998[iVar018].f_40 = 1;
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x15DC / 5596
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

void Function_3(int iParam0) //Position: 0x1612 / 5650
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x1634 / 5684
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x164A / 5706
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x1660 / 5728
{
	Function_7(&Local_13 + 4);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_7(int iParam0) //Position: 0x1672 / 5746
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

void Function_8(var uParam0, int iParam1) //Position: 0x1698 / 5784
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

void Function_9(var uParam0, int iParam1) //Position: 0x17C6 / 6086
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x17E0 / 6112
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x17FD / 6141
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1808 / 6152
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_18())
	{
		return;
	}
	if (Function_124(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(iParam2), 12));
		Function_85(&(Global_29008[iParam2]), 0x40000000);
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
				Function_138(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_138(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_124(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_105(2) || Function_124(&(Global_29008[iParam2]), 256))
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
			Function_128(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x19F3 / 6643
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_139(uParam0[iParam22], 4);
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
		Function_139(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0x1B42 / 6978
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

int Function_15(int iParam0) //Position: 0x1B6D / 7021
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

bool Function_16(var uParam0, int iParam1) //Position: 0x1BA1 / 7073
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_17(int iParam0) //Position: 0x1BBD / 7101
{
	if (!Function_5(iParam0))
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

bool Function_18() //Position: 0x206B / 8299
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_19(int iParam0) //Position: 0x2074 / 8308
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (*iParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*iParam0)[bVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*iParam0)[bVar04], "UseCase1")))
			{
				Function_28(iParam0[bVar04] + 8, 64);
				if (Function_31(StackVal, 2))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_31(StackVal, 4), "UseCase1")))
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_31(StackVal, 16))
				{
					Function_20(iParam0[bVar04] + 8, 64);
				}
				else if (Function_31(StackVal, 32))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_20(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_20(iParam0[bVar04] + 8, 64);
				}
				if (Function_31(StackVal, 2))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_31(StackVal, 4))
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
			}
			else
			{
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[bVar04])
					{
						if (Function_31(StackVal, 64))
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_31(Function_31(StackVal, 64), 16))
					{
						Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_20(iParam0[bVar04] + 8, 64);
						if (Function_31(StackVal, 1))
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_31(Function_31(StackVal, 64), 16))
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_20(iParam0[bVar04] + 8, 64);
					if (Function_31(StackVal, 1))
					{
						Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_31(StackVal, 64))
					{
						if (Function_31(StackVal, 32))
						{
							Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_31(StackVal, 8))
					{
						Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_20(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_31(StackVal, 64))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_31(StackVal, 8))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_20(iParam0[bVar04] + 8, 64);
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_31(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_20(int iParam0, bool bParam1) //Position: 0x2804 / 10244
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_21(vector3 vParam0) //Position: 0x2817 / 10263
{
	if (Function_31(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

void Function_22(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x283E / 10302
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_24(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_23(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_23(char* cParam0, int iParam1) //Position: 0x28AA / 10410
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_24(bool bParam0, var uParam1, int iParam2) //Position: 0x28E1 / 10465
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_26(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_25(uVar0))
		{
			case 0x00000002:
				if (!Function_27(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_25(char* cParam0) //Position: 0x2959 / 10585
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

int Function_26(int iParam0) //Position: 0x29FA / 10746
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

bool Function_27(var uParam0, int iParam1) //Position: 0x2A37 / 10807
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_28(var uParam0, int iParam1) //Position: 0x2A4A / 10826
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_29(float fParam0, bool bParam1) //Position: 0x2A59 / 10841
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_30(*fParam0, iVar1, bParam1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_30(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_30(*fParam0, iVar1, 0);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_30(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
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

vector3 Function_30(int iParam0, int iParam1, bool bParam2) //Position: 0x2B1C / 11036
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

bool Function_31(bool bParam0, int iParam1) //Position: 0x3096 / 12438
{
	return (bParam0 && iParam1) == 0;
}

void Function_32(bool bParam0, float fParam1) //Position: 0x30A3 / 12451
{
	if (!Function_105(128))
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

void Function_33(bool bParam0, bool bParam1) //Position: 0x30E1 / 12513
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
		Function_34(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_18())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x31DB / 12763
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(int iParam0, bool bParam1) //Position: 0x31E8 / 12776
{
	if (iParam0 == 17)
	{
		if (bParam1)
		{
		}
	}
	if (!Function_36(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_26998[iParam018].f_36 = 0;
	}
	else
	{
		Global_26998[iParam018].f_40 = 0;
	}
	return;
}

bool Function_36(int iParam0) //Position: 0x3223 / 12835
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_37(bool bParam0) //Position: 0x3239 / 12857
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_39(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_38(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_38(var uParam0) //Position: 0x3324 / 13092
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_39() //Position: 0x3341 / 13121
{
	int iVar0;
	
	return iVar0;
}

void Function_40(int iParam0) //Position: 0x3349 / 13129
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x335C / 13148
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

void Function_42() //Position: 0x3440 / 13376
{
	int iVar0;
	
	Global_26960 = Function_43(StackVal);
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

int Function_43(int iParam0) //Position: 0x348E / 13454
{
	if (!Function_44(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_44(bool bParam0) //Position: 0x34A6 / 13478
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_45(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x34BB / 13499
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
		Function_48();
	}
	if (bParam5)
	{
		Function_46(1048576);
	}
}

void Function_46(int iParam0) //Position: 0x35CE / 13774
{
	Function_47(&Global_28842, iParam0);
	return;
}

void Function_47(var uParam0, var uParam1) //Position: 0x35DC / 13788
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_48() //Position: 0x35F7 / 13815
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_46(16384);
	}
	return;
}

bool Function_49(int iParam0, int iParam1, bool bParam2) //Position: 0x3613 / 13843
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_124(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_140(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_18())
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

void Function_50(var uParam0, int iParam1) //Position: 0x36D3 / 14035
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2) //Position: 0x36EE / 14062
{
	int iVar0;
	
	iVar0 = uParam0[iParam140]->f_128;
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
	Function_52(uParam0[iParam140]->f_72, (1 + iParam1), iParam2, 0, 0);
	uParam0[iParam140]->f_128 = iVar0;
	return;
}

void Function_52(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4) //Position: 0x37A8 / 14248
{
	int iVar0;
	vector3 vVar1;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04].f_12 = uParam2;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Function_54(StackVal);
				vVar1 = { StackVal, StackVal, Function_54(StackVal) };
				if (Function_53(StackVal, StackVal, vVar1, fParam3, 0.0f, fParam4))
				{
					Global_8723[iVar04].f_12 = uParam2;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_53(vector3 vParam0, vector3 vParam3) //Position: 0x3858 / 14424
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_54(int iParam0) //Position: 0x3885 / 14469
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

void Function_55(var uParam0, int iParam1, float fParam2) //Position: 0x38DC / 14556
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_56(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, bool bParam13) //Position: 0x3900 / 14592
{
	if (Function_18() && !bParam12)
	{
		return;
	}
	if (!Function_18() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[bParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[bParam1]);
	}
	uParam0[bParam140]->f_4 = Function_63(bParam2, bParam1, 4);
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
	if (Global_25974[bParam1] && Function_62(bParam1))
	{
		Function_57(StackVal, StackVal, bParam2, (1 + bParam1), vParam8, 63);
	}
	uParam0[bParam140]->f_140 = 1;
	uParam0[bParam140]->f_128 |= 8192;
}

int Function_57(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x3A4C / 14924
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
	if (Function_61(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_60(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_59(StackVal, StackVal, vParam2);
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
		Function_54(uVar3);
		vVar7 = { StackVal, StackVal, Function_54(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_54(StackVal);
				vVar4 = { StackVal, StackVal, Function_54(StackVal) };
				if (Function_53(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_58(iParam1), 0.0f, 2, iVar2);
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

int Function_58(bool bParam0) //Position: 0x3C2F / 15407
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

var Function_59(vector3 vParam0) //Position: 0x3D66 / 15718
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

int Function_60(int iParam0) //Position: 0x3DB4 / 15796
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

bool Function_61(vector3 vParam0) //Position: 0x3E6C / 15980
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_62(int iParam0) //Position: 0x3E84 / 16004
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3EA7 / 16039
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_67(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_64(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_64(bParam0, bParam1, bParam2, 4294967295);
}

int Function_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3F05 / 16133
{
	var uVar0;
	
	if (!Function_66(bParam2))
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
	uVar0 = Function_67(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_65(uVar0);
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

int Function_65(int iParam0) //Position: 0x405C / 16476
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

bool Function_66(int iParam0) //Position: 0x409A / 16538
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_67(int iParam0, int iParam1, int iParam2) //Position: 0x40AF / 16559
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_68(int iParam0) //Position: 0x40CF / 16591
{
	Function_81(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_69(&Global_17483[3375] + 120, 2, 0);
	return;
}

void Function_69(int iParam0, int iParam1, int iParam2) //Position: 0x4132 / 16690
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

bool Function_70(int iParam0, int iParam1) //Position: 0x4146 / 16710
{
	int iVar0;
	
	if (!Function_71(iParam0))
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

bool Function_71(int iParam0) //Position: 0x41A5 / 16805
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_72(int iParam0) //Position: 0x41BB / 16827
{
	if (!Function_71(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_73(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_73(int iParam0, int iParam1) //Position: 0x420D / 16909
{
	int iVar0;
	
	if (!Function_71(iParam0))
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

void Function_74(int iParam0) //Position: 0x423A / 16954
{
	Function_81(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_69(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_75(int iParam0) //Position: 0x42A1 / 17057
{
	Function_81(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_76(int iParam0) //Position: 0x42EA / 17130
{
	if (!Function_78())
	{
		Function_81(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_80(&Global_17483[3975] + 120, 1, 4,5f, 64, 4294967295);
		Function_77(&Global_17483[3975] + 120, -4,5f, 2);
	}
	return;
}

void Function_77(int iParam0, float fParam1, int iParam2) //Position: 0x436B / 17259
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

bool Function_78() //Position: 0x4381 / 17281
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

void Function_79(int iParam0) //Position: 0x43A6 / 17318
{
	Function_81(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_80(&Global_17483[4075] + 120, 1, 4,5f, 64, 4294967295);
	Function_77(&Global_17483[4075] + 120, -4,5f, 2);
	return;
}

void Function_80(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x4421 / 17441
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x4447 / 17479
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Function_82(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_82(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x4489 / 17545
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_4(iParam0))
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
					bVar2 = Function_84(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_83(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_84(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_83(int iParam0, int iParam1) //Position: 0x4819 / 18457
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_84(int iParam0) //Position: 0x483A / 18490
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_85(var uParam0, bool bParam1) //Position: 0x4850 / 18512
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

int Function_86(int iParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x4867 / 18535
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
	uVar0 = Function_63(uParam7, iParam0, 6);
	if (Function_92(uVar0) == 0)
	{
		Function_88(uVar0, MAKE_TIME_OF_DAY_EX(true, false, 0, 0));
	}
	uParam11 = uParam11;
	Function_87(&(Global_62484[iParam014]), 24);
	return 1;
}

void Function_87(var uParam0, int iParam1) //Position: 0x490A / 18698
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4919 / 18713
{
	if (!Function_89(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_36 = iParam1;
	return;
}

bool Function_89(int iParam0) //Position: 0x4934 / 18740
{
	if (!Function_91(iParam0))
	{
		return 0;
	}
	if (!Function_90(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x4958 / 18776
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_91(int iParam0) //Position: 0x496D / 18797
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_92(int iParam0) //Position: 0x4984 / 18820
{
	if (!Function_91(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_93(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x499E / 18846
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_98(bParam1, bParam2);
	if (!Function_97(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_96(bParam4, 0);
		}
		else
		{
			Function_95(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_96(bParam5, 0);
		}
		else
		{
			Function_95(bParam5, 1);
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
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_94(bVar3[0], "UseCase1"));
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
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_94(bVar3[1], "UseCase1"));
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

var Function_94(bool bParam0, bool bParam1) //Position: 0x4D31 / 19761
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x4D3E / 19774
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

void Function_96(bool bParam0, bool bParam1) //Position: 0x4D92 / 19858
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

bool Function_97(int iParam0) //Position: 0x4DE3 / 19939
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_98(bool bParam0, bool bParam1) //Position: 0x4DF9 / 19961
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

int Function_99(bool bParam0, int iParam1) //Position: 0x4F53 / 20307
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

int Function_100(bool bParam0, int iParam1) //Position: 0x5042 / 20546
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

int Function_101(bool bParam0, bool bParam1) //Position: 0x5121 / 20769
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

void Function_102(var uParam0, bool bParam1) //Position: 0x5256 / 21078
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

void Function_103(bool bParam0, bool bParam1) //Position: 0x529E / 21150
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(bParam0, "owner", bParam1);
	return;
}

var Function_104(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x52BE / 21182
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
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
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_105(int iParam0) //Position: 0x535A / 21338
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_106(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x5376 / 21366
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_105(2))
	{
		return;
	}
	if (Function_124(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2))
		{
			if (Function_107(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_85(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_128(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_107(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x5428 / 21544
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_124(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_109(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_61(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_138(uParam0, 4);
	}
	Function_108(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_108(bool bParam0, bool bParam1) //Position: 0x5593 / 21907
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_61(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_61(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_61(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_61(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_61(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_61(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_109(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x56CF / 22223
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

void Function_110(int iParam0, var uParam1, vector3 vParam2) //Position: 0x57E8 / 22504
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_111(int iParam0, var uParam1, bool bParam2) //Position: 0x5850 / 22608
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_112(int iParam0, var uParam1, bool bParam2) //Position: 0x58B8 / 22712
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_113(int iParam0, var uParam1, bool bParam2) //Position: 0x591B / 22811
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_114(int iParam0, var uParam1, vector3 vParam2) //Position: 0x598A / 22922
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_115(int iParam0, var uParam1, vector3 vParam2) //Position: 0x59F0 / 23024
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_116(int iParam0, var uParam1, bool bParam2) //Position: 0x5A58 / 23128
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

void Function_117(int iParam0, var uParam1, bool bParam2) //Position: 0x5AB3 / 23219
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_118(int iParam0, var uParam1, bool bParam2) //Position: 0x5B17 / 23319
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_119(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5B7D / 23421
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_120(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5BE7 / 23527
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x5C4C / 23628
{
	bool bVar0;
	
	bVar0 = iParam0;
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

void Function_122(int iParam0, var uParam1, vector3 vParam2) //Position: 0x5CB2 / 23730
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_123(int iParam0) //Position: 0x5D15 / 23829
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_124(&(Global_29008[iParam0]), 4);
}

bool Function_124(var uParam0, int iParam1) //Position: 0x5D31 / 23857
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_125(var uParam0, var uParam1, int iParam2) //Position: 0x5D4D / 23885
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_18())
	{
		return 1;
	}
	if (Function_124(&(Global_29008[iParam2]), 0x40000000))
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

void Function_126(var uParam0, var uParam1, bool bParam2) //Position: 0x5E19 / 24089
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_18())
	{
		return;
	}
	if (!Function_124(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_17(bParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(bParam2), 12));
			Function_128(&(Global_29008[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_139(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_139(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

struct<16> Function_127(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x5EEF / 24303
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_28(&Var0 + 8, 1);
	}
	else
	{
		Function_20(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_28(&Var0 + 8, 2);
	}
	else
	{
		Function_20(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_28(&Var0 + 8, 4);
	}
	else
	{
		Function_20(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_28(&Var0 + 8, 8);
	}
	else
	{
		Function_20(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_28(&Var0 + 8, 16);
	}
	else
	{
		Function_20(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_28(&Var0 + 8, 32);
	}
	else
	{
		Function_20(&Var0 + 8, 32);
	}
	Function_20(&Var0 + 8, 64);
	Function_20(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

void Function_128(var uParam0, int iParam1) //Position: 0x5FB8 / 24504
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_129() //Position: 0x5FC7 / 24519
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
	
	Function_137(3, 3);
	bVar0 = bVar0;
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_cleanwindow_w_any", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/milk_cow", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/knl_hoe_soil", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/pet_dog", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_hoe", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_sitting_nosun_norain", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping_nosun_norain", 1, 0);
	Function_135(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	if (!Function_130(&Local_13 + 4))
	{
		return 0;
	}
	Local_13 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(Local_13))
	{
		Local_13 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	Local_13.f_752 = CREATE_VOLUME_IN_LAYOUT(Local_13, "henv_bonniesYard", 2, -790,3024f, 93,23891f, 2407,938f, 0.0f, -34,46604f, 0.0f, 26,0053f, 7,173422f, 17,96572f);
	Local_13.f_756 = CREATE_POINT_IN_LAYOUT(Local_13, "player_save_flag_HEN", -839,76f, 92,55f, 2372,67f, 0.0f, 202,5152f, 0.0f);
	Local_13.f_760 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", Local_13, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingA", -819,1766f, 92,82251f, 2365,016f, 0.0f, 20,41432f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_13.f_760);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingC", -831,2278f, 92,53697f, 2361,964f, 0.0f, 120,1605f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_13.f_760);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingD", -812,8053f, 92,84023f, 2384,877f, 0.0f, 204,6442f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_13.f_760);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_13, "putBroomBack", -806,4645f, 92,76514f, 2374,935f, 0.0f, -123,4115f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_13.f_760);
	Local_13.f_764 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", Local_13, 8, 0);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingH", -786,1699f, 93,688f, 2403,179f, 0.0f, 51,69351f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_13.f_764);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingI", -779,9948f, 93,688f, 2392,503f, 0.0f, -41,29826f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_13.f_764);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingJ", -786,8679f, 93,60988f, 2408,805f, 0.0f, 133,451f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_13.f_764);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_13, "nsweepingK", -783,5532f, 93,688f, 2405,91f, 0.0f, 51,69351f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_13.f_764);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_13, "doneWithIt", -784,4118f, 93,69946f, 2401,75f, 0.0f, 55,47858f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_13.f_764);
	Local_13.f_768 = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", Local_13, 8, 0);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_13, "dropHay", -887,0761f, 91,2944f, 2408,298f, 0.0f, 60,05384f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_13.f_768);
	DECOR_SET_BOOL(bVar10, "MSEndBlockCheck", true);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_13, "dropHay1", -876,0001f, 91,40847f, 2400.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_13.f_768);
	DECOR_SET_BOOL(bVar11, "MSEndBlockCheck", true);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_13, "dropHay2", -892,0001f, 91,35696f, 2409,409f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_13.f_768);
	DECOR_SET_BOOL(bVar12, "MSEndBlockCheck", true);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_13, "dropHay3", -865,7713f, 91,32473f, 2392,768f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_13.f_768);
	DECOR_SET_BOOL(bVar13, "MSEndBlockCheck", true);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_13, "dropHay4", -843,4188f, 90,35291f, 2482,496f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_13.f_768);
	DECOR_SET_BOOL(bVar14, "MSEndBlockCheck", true);
	*(&Local_13 + 772) = { -827,7444f, 92,53575f, 2395,472f };
	*(&Local_13 + 772 + 12) = { 0.0f, 169,597f, 0.0f };
	Local_13.f_796 = CREATE_POINT_IN_LAYOUT(Local_13, "player_shop_flag_GEN", -827,7444f, 92,53575f, 2395,472f, 0.0f, 169,597f, 0.0f);
	*(&Local_13 + 800) = { -950,5053f, 90,55292f, 2428,838f };
	*(&Local_13 + 800 + 12) = { 0.0f, 169,597f, 0.0f };
	Local_13.f_824 = CREATE_POINT_IN_LAYOUT(Local_13, "player_shop_flag_TICKET", -950,5053f, 90,55292f, 2428,838f, 0.0f, 169,597f, 0.0f);
	*(&Local_13 + 828) = { -830,0044f, 92,56405f, 2359,117f };
	*(&Local_13 + 828 + 12) = { 0.0f, 169,597f, 0.0f };
	Local_13.f_852 = CREATE_POINT_IN_LAYOUT(Local_13, "player_shop_flag_DR", -830,0044f, 92,56405f, 2359,117f, 0.0f, 169,597f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "shovel_hay01", "horse_stay", -876,127f, 91,41033f, 2392,768f, 0.0f, -82,59795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "shovel_hay03", "horse_stay", -891,5057f, 91,41033f, 2401,761f, 0.0f, 139,9104f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair", "repair_kneel_nospawn", -902,4957f, 91,41033f, 2405,323f, 0.0f, -150,2357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "repair1", "repair_kneel_nospawn", -900,9758f, 91,37296f, 2377,078f, 0.0f, -53,29918f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle10", "Rand_Idle_NearWall_nospawn", -893,5835f, 91,37296f, 2377,355f, 0.0f, -197,1262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair2", "repair_kneel_nospawn", -902,6456f, 91,37296f, 2360,991f, 0.0f, -100,3104f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nsit_fence", "sit_fence_nospawn", -903,3334f, 91,34934f, 2363,854f, 0.0f, 257,5146f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair3", "repair_kneel_nospawn", -892,8904f, 91,37296f, 2354,653f, 0.0f, -164,3168f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair4", "repair_kneel_nospawn", -908,5444f, 91,37296f, 2342,529f, 0.0f, 31,91996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence1", "sit_fence_nospawn", -909,4886f, 91,37296f, 2342,991f, 0.0f, 386,3804f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair5", "repair_kneel_nospawn", -942,2635f, 91,37296f, 2367,556f, 0.0f, 62,39971f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "repair6", "repair_kneel_nospawn", -941,1067f, 91,35687f, 2393,61f, 0.0f, 106,7166f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair7", "repair_kneel_nospawn", -912,3746f, 91,4075f, 2414,425f, 0.0f, -165,328f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "nlean_rail", "lean_rail_nospawn", -848,3721f, 90,35722f, 2461,695f, 0.0f, -69,79144f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle11", "Rand_Idle_NearWall_nospawn", -866,186f, 91,37329f, 2376,572f, 0.0f, 71,44085f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_RH03", "lie_sleep_on_bed_r", -820,4538f, 93,80911f, 2436,392f, 0.0f, 164,9983f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail1", "lean_rail_nospawn", -781,6268f, 96,83918f, 2398,28f, 0.0f, 143,6077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "announce", "stand_announce", -787,9465f, 93,63123f, 2409,61f, 0.0f, 126,4461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle12", "Rand_Idle_NearWall_nospawn", -781,8979f, 93,63273f, 2409,377f, 0.0f, -127,2841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle13", "Rand_Idle_NearWall_nospawn", -780,476f, 93,66959f, 2397,7f, 0.0f, 53,70927f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle14", "Rand_Idle_NearWall_nospawn", -773,5709f, 93,66281f, 2395,008f, 0.0f, -214,2884f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_860), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "clean_window02", "stand_cleanwindow_w_any", -780,2283f, 93,62262f, 2407,008f, 0.0f, -305,3241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking", "rand_idle_stand", -788,7734f, 93,62315f, 2408,368f, 0.0f, 141,2286f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "clean_window04", "stand_cleanwindow_w_any", -791,4217f, 93,63973f, 2404,453f, 0.0f, -395,8559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking1", "rand_idle_stand", -788,9864f, 96,82925f, 2407,505f, 0.0f, -215,5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_864), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail01", "lean_rail_nospawn", -783,4303f, 93,61821f, 2412,065f, 0.0f, -217,0542f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail02", "rand_idle_stand", -781,7466f, 93,62625f, 2412,029f, 0.0f, -125,1064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle15", "Rand_Idle_NearWall_nospawn", -793,5349f, 93,63404f, 2402,858f, 0.0f, -215,535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle02", "rand_idle_stand_nospawn", -777,1562f, 93,6092f, 2406,301f, 0.0f, -127,8212f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail4", "lean_rail_nospawn", -783,7834f, 96,81454f, 2398,485f, 0.0f, 595,7698f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_maid01", "lie_sleep_on_bed_l", -781,5988f, 96,82007f, 2390,604f, 0.0f, -35,82428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_868), 0);
	Local_13.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_maid02", "lie_sleep_on_bed_r", -782,9034f, 96,81838f, 2392,382f, 0.0f, -215,1258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_872), 0);
	Local_13.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_paHen", "lie_sleep_on_bed_r", -778,6096f, 96,82572f, 2393,384f, 0.0f, -125,9706f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_876), 0);
	Local_13.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_smoke06", "Rand_Idle_NearWall_Shoulder_R", -809,2281f, 92,77188f, 2376,195f, 0.0f, 328,975f, 0.0f);
	Local_13.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking3", "rand_idle_stand", -814,2024f, 92,84706f, 2385,74f, 0.0f, -292,2538f, 0.0f);
	Local_13.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_RH11", "lie_sleep_on_bed_l", -802,1787f, 92,74963f, 2372,337f, 0.0f, -303,2454f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle16", "Rand_Idle_Sit_Ground_nospawn", -858,2271f, 91,37894f, 2375,039f, 0.0f, -45,00678f, 0.0f);
	Local_13.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle17", "Rand_Idle_NearWall_nospawn", -835,6848f, 92,37424f, 2371,618f, 0.0f, -72,72981f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_892), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_randidlenearwall03", "rand_idle_stand", -814,9829f, 92,85525f, 2387,132f, 0.0f, -319,6607f, 0.0f);
	Local_13.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_randidlenearwall04", "Rand_Idle_NearWall_nospawn", -820,2572f, 92,38236f, 2387,969f, 0.0f, -461,3726f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail5", "lean_rail_nospawn", -791,5001f, 93,62729f, 2406,356f, 0.0f, -216,5679f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "shovel_hay12", "horse_stay", -878,5818f, 91,35687f, 2338,01f, 0.0f, 7,315061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "shovel_hay13", "horse_stay", -869,6392f, 91,35687f, 2353,513f, 0.0f, 32,64255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_13, "shovel_hay14", "digging", -860,9427f, 91,35687f, 2368,304f, 0.0f, 88,01738f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_900), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence2", "sit_fence_nospawn", -888,004f, 91,34173f, 2377,901f, 0.0f, 374,7073f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_randidlenearwall09", "Rand_Idle_NearWall_nospawn", -888,7755f, 91,3608f, 2398,221f, 0.0f, -58,87661f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking4", "rand_idle_stand", -817,8032f, 93,7655f, 2424,557f, 0.0f, -14,56f, 0.0f);
	Local_13.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking5", "rand_idle_stand", -823,9734f, 93,83046f, 2423,275f, 0.0f, -393,3656f, 0.0f);
	Local_13.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_13, "xxx", "look_distance_binocs", -811,9415f, 93,62798f, 2436,817f, 0.0f, -134,4958f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_peeing06", "stand_peeing_b_any", -847,6154f, 90,35291f, 2484,949f, 0.0f, -207,7152f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair8", "repair_kneel_nospawn", -935,884f, 90,35294f, 2461,766f, 0.0f, 50,82922f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle18", "Rand_Idle_NearWall_nospawn", -912,8926f, 90,37659f, 2444,983f, 0.0f, -159,8966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle19", "Rand_Idle_NearWall_nospawn", -897,8806f, 90,37659f, 2434,631f, 0.0f, -64,70596f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking6", "rand_idle_stand", -863,6358f, 93,63309f, 2439,817f, 0.0f, 664,0407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking7", "rand_idle_stand", -831,8262f, 92,58131f, 2398,951f, 0.0f, 202,865f, 0.0f);
	Local_13.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle09", "look_out_window_L", -830,9413f, 92,56772f, 2399,286f, 0.0f, -173,808f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "shovel_hay24", "stand_hammerground_w_any", -864,9551f, 93,67998f, 2446,718f, 0.0f, 305,9914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_13, "aaa", "look_distance_binocs", -867,1848f, 93,61197f, 2440,398f, 0.0f, 125,38f, 0.0f);
	Local_13.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_13, "bbb", "look_distance_binocs", -841,4387f, 93,67443f, 2418,409f, 0.0f, 81,02836f, 0.0f);
	Local_13.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fff", "look_distance_binocs", -780,2034f, 92,33911f, 2428,789f, 0.0f, -133,9039f, 0.0f);
	Local_13.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_maHen", "lie_sleep_on_bed_l", -776,0959f, 96,81454f, 2394,925f, 0.0f, -305,1163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_932), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", -834,0414f, 90,35528f, 2461,479f, 0.0f, -47,18939f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", -834,3953f, 90,35526f, 2460,228f, 0.0f, -97,43676f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle20", "Rand_Idle_Sit_Ground_nospawn", -833,2308f, 90,36301f, 2462,397f, 0.0f, -25,31964f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_stay", "horse_tend", -846,8463f, 90,35529f, 2470,065f, 0.0f, 26,24753f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_stay2", "horse_tend", -850,5319f, 90,35529f, 2460,201f, 0.0f, 17,96719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle21", "Rand_Idle_Sit_Ground_nospawn", -856,8738f, 91,35687f, 2375,729f, 0.0f, 340,6458f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "hammer", "repair_kneel", -812,6243f, 92,36194f, 2362,424f, 0.0f, 75,4216f, 0.0f);
	Local_13.f_936 = CREATE_OBJECTSET_IN_LAYOUT(Function_39(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yelling_mid1", "stand_yelling_mid", -892,4946f, 90,35291f, 2439,752f, 0.0f, 102,8846f, 0.0f), Local_13.f_936);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_announce", "stand_announce", -885,0763f, 91,3993f, 2398,288f, 0.0f, 23,35142f, 0.0f), Local_13.f_936);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_announce1", "stand_announce", -867,7095f, 93,59226f, 2442,681f, 0.0f, 99,70998f, 0.0f), Local_13.f_936);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_announce2", "stand_announce", -846,9958f, 90,35525f, 2454,885f, 0.0f, -160,1761f, 0.0f), Local_13.f_936);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yelling_mid", "stand_yelling_mid", -914,0119f, 91,35687f, 2410,471f, 0.0f, -25,72085f, 0.0f), Local_13.f_936);
	Local_13.f_940 = CREATE_OBJECTSET_IN_LAYOUT(Function_39(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "use_shelf2", "nuse_shelf", -824,686f, 92,55173f, 2388,709f, 0.0f, -11,8829f, 0.0f), Local_13.f_940);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground_nospawn", -877,9465f, 91,35687f, 2334,158f, 0.0f, -84,46268f, 0.0f);
	Local_13.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -830,2526f, 92,36078f, 2372,182f, 0.0f, -62,94236f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_944), 0);
	Local_13.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -830,0194f, 92,36078f, 2373,167f, 0.0f, -109,6638f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_948), 0);
	Local_13.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -829,4692f, 92,36078f, 2369,576f, 0.0f, -43,78243f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_952), 0);
	Local_13.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_rowdydrink2", "stand_drunk_dancing_link", -828,699f, 92,36078f, 2368,512f, 0.0f, 150,737f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_956), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunkdancing_e_any", "stand_dnd_rowdydrink", -828,7341f, 92,36078f, 2373,626f, 0.0f, 71,26332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunkdancing_e_any1", "stand_drunk_dancing_link", -827,0538f, 92,36078f, 2368,4f, 0.0f, 155,1144f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunkdancing_e_any2", "stand_drunk_dancing_link", -831,7697f, 92,36078f, 2371,529f, 0.0f, -79,9409f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_960), 1);
	Local_13.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand", "Rand_Idle_Sit_Ground", -825,9158f, 92,39031f, 2372,315f, 0.0f, 54,08537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_964), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground_nospawn5", "rand_idle_stand", -829,7599f, 92,36078f, 2374,118f, 0.0f, 329,4039f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking8", "Rand_Idle_Sit_Ground", -826,8938f, 92,3885f, 2373,05f, 0.0f, 3,073033f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn", "smoking_stand_nospawn", -845,399f, 92,36078f, 2369,715f, 0.0f, 143,4348f, 0.0f);
	Local_13.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_doctor", "lie_sleep_on_bed_l", -833,0023f, 92,54736f, 2357,227f, 0.0f, 86,0327f, 0.0f);
	Local_13.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_newspaper", "lie_sleep_on_bed_l", -826,4598f, 92,55508f, 2358,066f, 0.0f, -3,588052f, 0.0f);
	Local_13.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_13, "player_sleep_HEN", "player_sleep_bed_L", -838,6916f, 92,56223f, 2371,507f, 0.0f, -69,74495f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_tabletop", "stand_hammer_table", -820,836f, 92,361f, 2384,852f, 0.0f, 73,05178f, 0.0f);
	Local_13.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_blacksmith", "lie_sleep_on_bed_r", -863,6756f, 91,6474f, 2375,693f, 0.0f, -18,34668f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_Shoulder_R2", "rand_idle_stand_nospawn", -865,2255f, 91,6385f, 2385,921f, 0.0f, 206,257f, 0.0f);
	Local_13.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table1", "stand_hammer_table", -821,2841f, 93,8091f, 2424,974f, 0.0f, 164,9111f, 0.0f);
	Local_13.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_RH14", "sleeping_wall_scripted", -824,602f, 96,96294f, 2435,933f, 0.0f, -13,46348f, 0.0f);
	Local_13.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_RH01", "sleeping_wall_scripted", -827,982f, 96,97736f, 2430,71f, 0.0f, 253,9377f, 0.0f);
	Local_13.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_RH13", "sleeping_wall_scripted", -828,6963f, 96,95911f, 2433,304f, 0.0f, -101,6486f, 0.0f);
	Local_13.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_13, "yyy", "look_distance_binocs", -830,7986f, 96,71838f, 2454,213f, 0.0f, 241,3766f, 0.0f);
	Local_13.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_storeOwner", "lie_sleep_on_bed_l", -802,0184f, 92,7645f, 2379,661f, 0.0f, -119,5883f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall", "stand_hammer_wall", -879,6692f, 90,39629f, 2426,541f, 0.0f, -160,9444f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall1", "stand_hammer_wall", -875,9138f, 90,38712f, 2430,308f, 0.0f, 91,37677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall2", "stand_hammer_wall", -859,5668f, 90,35291f, 2449,639f, 0.0f, 113,9213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall3", "stand_hammer_wall", -836,5374f, 90,35318f, 2452,303f, 0.0f, -64,99828f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall4", "stand_hammer_wall", -839,9308f, 95,22968f, 2465,187f, 0.0f, 18,50953f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall5", "stand_hammer_wall", -857,6632f, 91,36155f, 2386,28f, 0.0f, 71,16727f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend1", "horse_tend", -841,1273f, 90,36572f, 2457,62f, 0.0f, 20,50919f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", -948,2155f, 90,5476f, 2415,756f, 0.0f, -160,4079f, 0.0f);
	Local_13.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_stationWorker", "sleeping_scripted", -953,2607f, 90,55405f, 2421,811f, 0.0f, -67,26672f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend2", "milk_cow", -906,892f, 90,35291f, 2440,508f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend5", "horse_tend", -904,1316f, 91,35687f, 2402,689f, 0.0f, 144,5275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend6", "horse_tend", -911,9522f, 91,35687f, 2376.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend7", "horse_tend", -884.0f, 91,35687f, 2388.0f, 0.0f, -54,84478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend8", "horse_tend", -878,0702f, 91,35687f, 2385,398f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend10", "horse_stay", -896,6402f, 91,35687f, 2404,802f, 0.0f, 133,1119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table3", "stand_hammer_table", -870,2556f, 91,37104f, 2388,979f, 0.0f, 5,701097f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn1", "repair_kneel_nospawn", -877,2628f, 91,36943f, 2390,968f, 0.0f, -148,414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn2", "repair_kneel_nospawn", -884,6795f, 91,3624f, 2395,976f, 0.0f, -58,54754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn3", "repair_kneel_nospawn", -894,8369f, 91,35947f, 2400,88f, 0.0f, -151,2083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn4", "repair_kneel_nospawn", -872,0689f, 91,35687f, 2354,474f, 0.0f, -54,78888f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn5", "repair_kneel_nospawn", -863,6531f, 91,35687f, 2372,764f, 0.0f, -276,7116f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", -888,0453f, 91,37728f, 2402,572f, 0.0f, -150,7114f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table7", "stand_hammer_table", -905,4208f, 91,40668f, 2408,791f, 0.0f, -119,502f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table8", "stand_hammer_table", -884,6952f, 90,36724f, 2435,505f, 0.0f, 65,0768f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn7", "repair_kneel_nospawn", -880,0825f, 90,35291f, 2434,271f, 0.0f, 19,12937f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn8", "stand_hammer_wall", -886,5148f, 90,35291f, 2431,425f, 0.0f, 111,0873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall6", "stand_hammer_wall", -885,6204f, 90,35291f, 2436,474f, 0.0f, 22,33353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table10", "stand_hammer_table", -870,2692f, 90,35291f, 2450,18f, 0.0f, -88,59101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall_nospawn", -844,7113f, 90,35294f, 2473,44f, 0.0f, -161,3178f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel_nospawn9", "repair_kneel_nospawn", -857,8174f, 90,35291f, 2476,413f, 0.0f, 5,031807f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table12", "stand_hammer_table", -863,7329f, 90,36577f, 2470,518f, 0.0f, -77,3041f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall7", "stand_hammer_wall", -892,8907f, 90,36308f, 2432,148f, 0.0f, -70,80553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_13, "chop", "stand_chopveggies_w_any", -822,7479f, 92,36263f, 2385,349f, 0.0f, -369,219f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_hoe_soil", "knl_hoe_soil", -765,4241f, 93,36469f, 2382,134f, 0.0f, 79,98794f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_hoe_soil1", "knl_hoe_soil", -770,8867f, 93,40453f, 2378,19f, 0.0f, -253,3525f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_hoe_soil2", "knl_hoe_soil", -772,6586f, 93,41898f, 2380,639f, 0.0f, 96,56371f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_hoe_soil3", "knl_hoe_soil", -776,8694f, 93,3647f, 2383,109f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_hoe_soil4", "knl_hoe_soil", -776,5214f, 93,39307f, 2377,086f, 0.0f, -88,16006f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_hoe_soil5", "knl_hoe_soil", -767,4054f, 93,36778f, 2385,003f, 0.0f, 47,4827f, 0.0f);
	Local_13.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker", "Locked_Footlocker", -839,551f, 92,54645f, 2367,614f, 0.0f, 108,393f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_1024, "scrap", true);
	DECOR_SET_BOOL(Local_13.f_1024, "PlayerHouseChest", true);
	Local_13.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_foreman", "lie_sleep_on_bed_l", -833,1005f, 92,54645f, 2359,052f, 0.0f, -185,2466f, 0.0f);
	Local_13.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_13, "ggg", "look_distance_binocs", -799,2727f, 93,26423f, 2354,897f, 0.0f, -73,38371f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "campfire_talk_01", "Rand_Idle_Sit_Ground", -827,3671f, 92,36078f, 2369,354f, 0.0f, 496,3519f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_R", "look_out_window_R", -774,8354f, 93,66527f, 2396,809f, 0.0f, -123,8507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall_nospawn", -864,3675f, 91,6385f, 2385,175f, 0.0f, 160,9761f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_H_talking", "lean_fence_H_talking", -881,8886f, 91,35796f, 2359,962f, 0.0f, 116,5969f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L", "look_out_window_L", -791,4904f, 93,66455f, 2393,703f, 0.0f, 55,60906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1036), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nsit_docks", "nsit_docks", -864,1231f, 93,65692f, 2438,558f, 0.0f, 20,61595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_docks1", "nsit_docks", -863,9441f, 93,59738f, 2455,269f, 0.0f, -160,516f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -861,5583f, 93,60782f, 2453,736f, 0.0f, 109,7532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -877,5718f, 91,35687f, 2335,257f, 0.0f, -58,28674f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "nuse_shelf", "nuse_shelf", -831,286f, 92,55173f, 2392,661f, 0.0f, 80,19555f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "use_shelf1", "nuse_shelf", -822,7608f, 92,56094f, 2391,636f, 0.0f, -98,73731f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L1", "look_out_window_L", -830,5064f, 92,55173f, 2396,476f, 0.0f, 171,5273f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_H_talking1", "lean_fence_H_talking", -881,6396f, 91,35687f, 2372,575f, 0.0f, 52,4485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_sweeping", "Multistage_sweeping", -806,4645f, 92,76514f, 2374,935f, 0.0f, 58,24691f, 0.0f);
	DECOR_SET_INT(Local_13.f_1040, "FlagSetNum", true);
	Local_13.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_sweeping1", "Multistage_sweeping", -784,4118f, 93,69946f, 2401,75f, 0.0f, 230,8066f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1044), 0);
	DECOR_SET_INT(Local_13.f_1044, "FlagSetNum", 2);
	Local_13.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_13, "digging2", "digging", -772,2172f, 93,36469f, 2375,464f, 0.0f, -204,1359f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L2", "look_out_window_L", -819,4464f, 93,80832f, 2436,167f, 0.0f, -102,2905f, 0.0f);
	Local_13.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_R2", "look_out_window_R", -821,2407f, 93,80911f, 2434,743f, 0.0f, -14,36713f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nmilk_cow1", "milk_cow", -914,3898f, 90,35291f, 2442,287f, 0.0f, -80,22819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -784,8835f, 93,64512f, 2411,009f, 0.0f, 99,50083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "milk_cow", "milk_cow", -868,3619f, 90,35291f, 2448,239f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nmilk_cow4", "milk_cow", -861,1296f, 90,35291f, 2467,743f, 0.0f, 24,62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_horseshoe", "stand_horseshoe", -868,8219f, 91,35687f, 2373,996f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_sellPaper", "stand_sellPaper", -954,4781f, 90,78762f, 2436,324f, 0.0f, 194,3955f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand1", "rand_idle_stand", -961,9915f, 90,76472f, 2426,876f, 0.0f, 111,5584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand2", "rand_idle_stand", -962,9764f, 90,77058f, 2422,67f, 0.0f, 111,5584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L3", "look_out_window_L", -958,4318f, 91,05297f, 2429,25f, 0.0f, 112,2265f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking", "lean_fence_L_talking", -811,3306f, 92,86134f, 2382,26f, 0.0f, 56,52731f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence_low", "sit_fence_low", -814,6029f, 92,86088f, 2387,901f, 0.0f, 145,6432f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_R3", "look_out_window_R", -807,4f, 92,77805f, 2374,609f, 0.0f, 59,52702f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking1", "lean_fence_L_talking", -827,4998f, 92,51421f, 2362,609f, 0.0f, 174,7638f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L4", "look_out_window_L", -818,2917f, 92,84713f, 2365,753f, 0.0f, 165,1354f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "pet_dog", "pet_dog", -824,8427f, 92,41017f, 2373,47f, 0.0f, 6,607797f, 0.0f);
	Local_13.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sleep_RH15", "sleeping_wall_scripted", -823,066f, 96,95883f, 2426,758f, 0.0f, 525,8105f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_watertrough", "knl_watertrough", -855,3192f, 91,36256f, 2387,304f, 0.0f, 251,7952f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L5", "look_out_window_R", -789,588f, 93,66455f, 2390,924f, 0.0f, 55,60906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1064), 0);
	Local_13.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle22", "Rand_Idle_NearWall_nospawn", -777,7162f, 93,66281f, 2398,629f, 0.0f, -34,27971f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1068), 0);
	Local_13.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking9", "nlean_rail", -786,403f, 96,82925f, 2409,19f, 0.0f, -215,5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1072), 0);
	Local_13.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nsmoking10", "nlean_rail", -790,9001f, 96,82925f, 2405,976f, 0.0f, -215,5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1076), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence_low1", "sit_fence_low", -810,1443f, 92,86088f, 2381,214f, 0.0f, -37,11192f, 0.0f);
	Local_13.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L6", "look_out_window_L", -829,014f, 92,53697f, 2362,629f, 0.0f, 176,142f, 0.0f);
	Local_13.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_H_talking3", "nlean_rail", -834,0533f, 92,53697f, 2366,25f, 0.0f, 175,7211f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence3", "Rand_Idle_NearWall", -907,535f, 91,37296f, 2341,864f, 0.0f, 208,8295f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nrepair105", "stand_hammer_wall", -929,6423f, 91,37296f, 2355,001f, 0.0f, 31,15341f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "nrepair107", "look_out_window_L", -897,2656f, 91,33089f, 2374,108f, 0.0f, -171,5796f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_fence4", "sit_ground_smoke", -885,9006f, 91,35687f, 2376,903f, 0.0f, 556,3536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn4", "leaning_stand", -865,5328f, 91,6385f, 2380,694f, 0.0f, 108,4091f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn5", "sit_barrel", -859,3065f, 91,6385f, 2382,144f, 0.0f, 108,4091f, 0.0f);
	Local_13.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_sellPaper2", "Rand_Idle_NearWall", -945,7577f, 90,69787f, 2431,674f, 0.0f, 199,5726f, 0.0f);
	Local_13.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_sellPaper3", "Rand_Idle_NearWall", -955,6231f, 90,7568f, 2431,927f, 0.0f, 470,8588f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand3", "look_out_window_R", -961,423f, 91,02246f, 2420,558f, 0.0f, 96,98452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall_nospawn6", "Rand_Idle_NearWall_nospawn", -946,6158f, 90,35291f, 2423,764f, 0.0f, -68,6913f, 0.0f);
	Local_13.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_13, "amos_standing_looking", "stand_lookdistance_w_any", -830,5779f, 92,53502f, 2444,589f, 0.0f, 75,25243f, 0.0f);
	Local_13.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand4", "rand_idle_stand", -857,1008f, 91,64073f, 2381,814f, 0.0f, -111,0237f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1104), 0);
	Local_13.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -825,676f, 92,36078f, 2351,822f, 0.0f, -41,53579f, 0.0f);
	Local_13.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_horseshoe2", "stand_spit", -825,5615f, 92,36078f, 2346,976f, 0.0f, 199,7344f, 0.0f);
	Local_13.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_hoe", "Multistage_hoe", -774,4138f, 93,36903f, 2392,128f, 0.0f, 143,2562f, 0.0f);
	Local_13.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_camp_coffee_drink", "sit_camp_coffee_drink", -824,4113f, 92,39366f, 2371,404f, 0.0f, 256,5737f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -828,0052f, 92,38932f, 2372,333f, 0.0f, -10,28456f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel", "repair_kneel", -787,309f, 93,35026f, 2417,084f, 0.0f, 322,8742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_13, "knl_watertrough1", "knl_watertrough", -793,5923f, 93,3548f, 2407,567f, 0.0f, -35,32555f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_horseshoe3", "stand_horseshoe", -870,4416f, 91,35687f, 2378,733f, 0.0f, 135,4871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fake_horseshoe", "fake_horseshoe", -814,7646f, 92,423f, 2350,04f, 0.0f, 87,60044f, 0.0f);
	Local_13.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain1", "dog_sitting_nosun_norain", -856,2535f, 91,3424f, 2383,996f, 0.0f, -156,3444f, 0.0f);
	Local_13.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain2", "dog_sitting_nosun_norain", -835,0016f, 92,34972f, 2388,743f, 0.0f, -238,8804f, 0.0f);
	Local_13.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain3", "dog_sitting_nosun_norain", -819,7191f, 93,38113f, 2422,441f, 0.0f, -238,8804f, 0.0f);
	Local_13.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain4", "dog_sitting_nosun_norain", -817,8998f, 93,36668f, 2437,104f, 0.0f, -392,6388f, 0.0f);
	Local_13.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain5", "dog_sitting_nosun_norain", -827,6536f, 90,36311f, 2449,424f, 0.0f, -314,975f, 0.0f);
	Local_13.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain6", "dog_sitting_nosun_norain", -847,237f, 90,34088f, 2448,014f, 0.0f, -196,9681f, 0.0f);
	Local_13.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain7", "dog_sitting_nosun_norain", -857,1271f, 90,40262f, 2441,771f, 0.0f, -354,9052f, 0.0f);
	Local_13.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain8", "dog_sitting_nosun_norain", -863,177f, 90,40262f, 2438,803f, 0.0f, -328,7679f, 0.0f);
	Local_13.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain9", "dog_sitting_nosun_norain", -875,7607f, 90,35526f, 2427,357f, 0.0f, -205,3124f, 0.0f);
	Local_13.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain10", "dog_sitting_nosun_norain", -892,7704f, 90,35526f, 2433,5f, 0.0f, -213,0923f, 0.0f);
	Local_13.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain11", "dog_sitting_nosun_norain", -950,9026f, 90,35526f, 2437,934f, 0.0f, -297,2602f, 0.0f);
	Local_13.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain12", "dog_sitting_nosun_norain", -944,5078f, 90,32678f, 2426,567f, 0.0f, -273,0189f, 0.0f);
	Local_13.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain13", "dog_sitting_nosun_norain", -934,9854f, 90,47307f, 2414,593f, 0.0f, -273,0189f, 0.0f);
	Local_13.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain14", "dog_sitting_nosun_norain", -891,2079f, 91,39855f, 2405,131f, 0.0f, -195,3947f, 0.0f);
	Local_13.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain15", "dog_sitting_nosun_norain", -881,3704f, 91,39874f, 2399,712f, 0.0f, -99,6105f, 0.0f);
	Local_13.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain16", "dog_sitting_nosun_norain", -871,4406f, 91,39874f, 2393,862f, 0.0f, -99,6105f, 0.0f);
	Local_13.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain18", "dog_sitting_nosun_norain", -829,3984f, 92,35977f, 2348,48f, 0.0f, -148,064f, 0.0f);
	Local_13.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain19", "dog_sitting_nosun_norain", -811,3031f, 92,35977f, 2360,295f, 0.0f, -172,5771f, 0.0f);
	Local_13.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain20", "dog_sitting_nosun_norain", -819,6279f, 92,35977f, 2389,699f, 0.0f, -172,5771f, 0.0f);
	Local_13.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain21", "dog_sitting_nosun_norain", -813,4491f, 92,35977f, 2391,035f, 0.0f, -136,0587f, 0.0f);
	Local_13.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain22", "dog_sitting_nosun_norain", -779,2728f, 93,37827f, 2387,067f, 0.0f, -103,4409f, 0.0f);
	Local_13.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain23", "dog_sitting_nosun_norain", -772,3773f, 93,34153f, 2393,385f, 0.0f, -261,7899f, 0.0f);
	Local_13.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain24", "dog_sitting_nosun_norain", -774,1094f, 93,36876f, 2405,524f, 0.0f, -198,6438f, 0.0f);
	Local_13.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain25", "dog_sitting_nosun_norain", -797,3301f, 92,31572f, 2438,703f, 0.0f, -244,6164f, 0.0f);
	Local_13.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain19", "dog_sleeping_nosun_norain", -828,135f, 90,38496f, 2448,316f, 0.0f, 677,5233f, 0.0f);
	Local_13.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain27", "dog_sleeping_nosun_norain", -963,0928f, 90,31821f, 2408,882f, 0.0f, 515,3994f, 0.0f);
	Local_13.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain26", "dog_sleeping_nosun_norain", -934,5275f, 91,42138f, 2408,778f, 0.0f, 754,3392f, 0.0f);
	Local_13.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain24", "dog_sleeping_nosun_norain", -851,6888f, 90,34486f, 2471,022f, 0.0f, 893,3202f, 0.0f);
	Local_13.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain25", "dog_sleeping_nosun_norain", -961,1657f, 90,31296f, 2401,145f, 0.0f, 754,0936f, 0.0f);
	Local_13.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain22", "dog_sleeping_nosun_norain", -835,329f, 90,31109f, 2471,108f, 0.0f, 786,0833f, 0.0f);
	Local_13.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain23", "dog_sleeping_nosun_norain", -844,9305f, 90,31761f, 2474,991f, 0.0f, 786,0833f, 0.0f);
	Local_13.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain21", "dog_sleeping_nosun_norain", -835,6715f, 90,31543f, 2459,261f, 0.0f, 882,652f, 0.0f);
	Local_13.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain20", "dog_sleeping_nosun_norain", -838,3684f, 90,33583f, 2451,252f, 0.0f, 882,652f, 0.0f);
	Local_13.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain17", "dog_sleeping_nosun_norain", -811,3888f, 93,65856f, 2439,418f, 0.0f, 526,283f, 0.0f);
	Local_13.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain16", "dog_sleeping_nosun_norain", -774,4293f, 89,71468f, 2436,886f, 0.0f, 709,8894f, 0.0f);
	Local_13.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain15", "dog_sleeping_nosun_norain", -777,993f, 89,72507f, 2437,808f, 0.0f, 502,1395f, 0.0f);
	Local_13.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain13", "dog_sleeping_nosun_norain", -795,7229f, 93,33755f, 2402,767f, 0.0f, 396,0069f, 0.0f);
	Local_13.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain12", "dog_sleeping_nosun_norain", -859,8157f, 91,3305f, 2373,429f, 0.0f, 563,1933f, 0.0f);
	Local_13.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain11", "dog_sleeping_nosun_norain", -854,0153f, 91,40736f, 2377,676f, 0.0f, 480,7583f, 0.0f);
	Local_13.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain7", "dog_sleeping_nosun_norain", -835,9901f, 92,34204f, 2357,971f, 0.0f, -38,6244f, 0.0f);
	Local_13.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain2", "dog_sleeping_nosun_norain", -812,9628f, 92,38321f, 2381,238f, 0.0f, -84,6154f, 0.0f);
	Local_13.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain4", "dog_sleeping_nosun_norain", -814,5374f, 92,3345f, 2356,515f, 0.0f, 216,8288f, 0.0f);
	Local_13.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain3", "dog_sleeping_nosun_norain", -807,3399f, 92,76865f, 2373,51f, 0.0f, -63,22749f, 0.0f);
	Local_13.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain1", "dog_sleeping_nosun_norain", -825,2565f, 92,39362f, 2383,69f, 0.0f, -84,6154f, 0.0f);
	Local_13.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fake_horseshoe1", "fake_horseshoe", -826,37f, 92,423f, 2350,054f, 0.0f, -87,465f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -819,4832f, 93,8091f, 2430,332f, 0.0f, 73,96046f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_table", "lean_table", -822,1869f, 93,83833f, 2428,695f, 0.0f, -141,8092f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nmilk_cow5", "milk_cow", -899,2943f, 90,35291f, 2436,934f, 0.0f, 61,14019f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nmilk_cow8", "milk_cow", -859,1331f, 90,35291f, 2472,873f, 0.0f, 20,20365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_13.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker1", "Locked_Footlocker", -779,6139f, 89,86697f, 2434,14f, 0.0f, -136,0742f, 0.0f);
	return 1;
}

bool Function_130(int iParam0) //Position: 0xC3B2 / 50098
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_134();
	iVar1 = 0;
	if (!Function_10(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_133(iParam0[iVar03], 8);
		}
		else if (Function_132())
		{
			iVar1 = 1;
			Function_133(iParam0[iVar03], 8);
		}
		Function_133(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_10(iParam0[03], 8) || iVar1));
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
				Function_133(iParam0[iVar03], 1);
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
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
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
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
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
	Function_131();
	return 1;
}

void Function_131() //Position: 0xC72D / 50989
{
	if (!Function_105(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_132() //Position: 0xC76D / 51053
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

void Function_133(var uParam0, int iParam1) //Position: 0xC798 / 51096
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_134() //Position: 0xC7A9 / 51113
{
	if (!Function_105(128))
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

var Function_135(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC7EB / 51179
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_136(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_133(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_136(var uParam0, int iParam1, int iParam2) //Position: 0xC823 / 51235
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_133(uParam0[iVar03], 4);
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

void Function_137(int iParam0, int iParam1) //Position: 0xC8E7 / 51431
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

void Function_138(var uParam0, int iParam1) //Position: 0xC930 / 51504
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0xC947 / 51527
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_140(int iParam0, bool bParam1) //Position: 0xC956 / 51542
{
	int iVar0;
	
	iVar0 = Function_141(iParam0);
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

var Function_141(int iParam0) //Position: 0xC993 / 51603
{
	if (!Function_142(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_142(int iParam0) //Position: 0xC9AD / 51629
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_143() //Position: 0xC9C3 / 51651
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
	
	Function_137(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "henv_armtut", 3, -987,86f, 91,72f, 2467,045f, 0.0f, 0.0f, 0.0f, 10.0f, 6.0f, 10.0f);
	Local_4.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_nightwatchVol", 2, -855,4252f, 105,4849f, 2407,332f, -0,6372142f, 25,17678f, -0,4130902f, 240,3393f, 39,50343f, 169,9922f);
	Local_4.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_nwCorral", 2, -890,1721f, 92,15579f, 2460,382f, -176,4225f, 80,71785f, -176,6112f, 25,40286f, 6,503892f, 31,75247f);
	Local_4.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_nwSheriff", 2, -823,2598f, 94,66096f, 2431,649f, -182,208f, 105,1435f, -182,2734f, 11,34968f, 4,029452f, 10,92662f);
	Local_4.f_20 = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwplayerpos", -821,1275f, 93,36469f, 2420.0f, 0.0f, 112,4327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_20);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwproctor", -822,1721f, 93,36469f, 2420,419f, 0.0f, 293,2047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_20);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwforeman", -824,4701f, 93,36469f, 2419,825f, 0.0f, 79,6981f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_20);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwdogpos", -821,6245f, 93,36469f, 2419,558f, 0.0f, 119,5842f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_20);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsepos", -814,809f, 93,39845f, 2432f, 0.0f, 75,09982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_20);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwintrodog", -828,4f, 93,28396f, 2418,834f, 0.0f, 293,2047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_20);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcameraForemanPos", -824,0341f, 93,80911f, 2428,167f, 0.0f, -14,73302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_20);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwplayerEndPos", -825,6826f, 93,36469f, 2419,477f, 0.0f, -105,1622f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_20);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwgateway", -824,8149f, 93,36469f, 2419,216f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_20);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfleecow", -892,0001f, 90,35291f, 2459,941f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_20);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_nwfight", -780,8884f, 93,36469f, 2375,46f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_20);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight1", -848,2634f, 92,36078f, 2349,09f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_20);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight2", -860,8632f, 91,35687f, 2368f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_20);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight3", -888,0001f, 91,35687f, 2403,452f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_20);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight4", -940,4428f, 90,35291f, 2447,688f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_20);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight5", -811,6155f, 91,73328f, 2459,615f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_20);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight6", -948,0001f, 91,35687f, 2391,013f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_20);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwfight7", -817,6152f, 92,48973f, 2379,044f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_20);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcow", -872,0001f, 90,35291f, 2435,944f, 0.0f, -10,34259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_20);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcow1", -892,0001f, 90,29952f, 2490,418f, 0.0f, -135,4877f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_20);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcow2", -928,0001f, 90,35291f, 2446,504f, 0.0f, -10,34259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_20);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcow3", -896,1941f, 90,1239f, 2428,709f, 0.0f, -10,34259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_20);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwbreak_in", -822,2877f, 92,36078f, 2358,159f, 0.0f, -106,0668f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_20);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwbreak_in1", -804,8705f, 92,41194f, 2383,487f, 0.0f, 143,5059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_20);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwbreak_in2", -955,8407f, 90,80297f, 2430,606f, 0.0f, 290,4257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_20);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft", -916,027f, 90,33736f, 2495,536f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_20);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft1", -887,4436f, 91,35687f, 2344f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_20);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft2", -871,1543f, 91,35687f, 2399,154f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_4.f_20);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft3", -795,983f, 92,23273f, 2422,755f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_4.f_20);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft4", -890,1666f, 91,35687f, 2389,643f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_4.f_20);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft5", -800,0001f, 93,3901f, 2342,688f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_4.f_20);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwhorsetheft6", -757,7525f, 92,36078f, 2404f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_4.f_20);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcoyotePos", -882,8876f, 90,35291f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_4.f_20);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcoyotePos1", -882,4459f, 90,35291f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_4.f_20);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcoyotePos2", -884,0001f, 90,35291f, 2437,048f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_4.f_20);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_4, "f_nwcoyotePos3", -881,3917f, 90,35291f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_4.f_20);
	Local_4.f_24 = CREATE_POINT_IN_LAYOUT(Local_4, "f_PlayerHorse", -841,3272f, 92,4248f, 2376,841f, 0.0f, 20,95689f, 0.0f);
}

void Function_144(bool bParam0, var uParam1) //Position: 0xD339 / 54073
{
	if (!Function_105(128))
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

