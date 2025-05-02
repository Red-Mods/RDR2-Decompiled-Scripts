//Decompiled with MagicRDR v1.0
//Function Count : 93
//Statics Count : 675
//Natives Count : 124
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
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 40;
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
	var uLocal_224 = 8;
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
	var uLocal_276 = 5;
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
	var uLocal_310 = 1;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 4;
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
	var uLocal_358 = 5;
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
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 10;
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
	int iLocal_672 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_446 = 0;
	Unknown_Function();
	while (!IS_EXITFLAG_SET())
	{
		iLocal_447 = 1000;
		switch (iLocal_446)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_446 = 1;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4, 2);
				}
				iLocal_447 = 0;
				break;
			
			case 0x00000001:
				if (Function_92())
				{
					Global_98961 = 0;
					iLocal_446 = 2;
				}
				iLocal_447 = 0;
				break;
			
			case 0x00000002:
				if (Function_83())
				{
					Function_82(&(Global_43791[iScriptParam_0]), 32);
					iLocal_446 = 3;
				}
				iLocal_447 = 0;
				break;
			
			case 0x00000003:
				uLocal_448 = LAUNCH_NEW_SCRIPT_WITH_ARGS("AgaveViejoVol", &iScriptParam_0, 2, 0);
				Function_81(&Global_12232, &Global_14600, iScriptParam_0);
				iLocal_446 = 5;
				iLocal_447 = 0;
				break;
			
			case 0x00000005:
				if (Function_80(&Global_12232, &Global_14600, iScriptParam_0))
				{
					iLocal_446 = 4;
					iLocal_447 = 0;
				}
				else
				{
					iLocal_447 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_79(&(Global_43791[iScriptParam_0]), 16) && Function_78(Global_44085[iScriptParam_09]))
				{
					iLocal_446 = 6;
				}
				iLocal_447 = 0;
				break;
			
			case 0x00000006:
				Function_77(3, 0, &uLocal_450, Vector(-1483,586f, 20,894f, 3914,605f));
				Function_76("Initializing AgaveViejo", 0, &uLocal_450, Vector(-1481,873f, 20,902f, 3917,322f));
				Function_75(StackVal, 0, &uLocal_450, Vector(-1476,716f, 17,302f, 3906,466f));
				Function_74(StackVal, 0, &uLocal_450, Vector(-1503,194f, 17,702f, 3908,495f));
				Function_73(StackVal, 0, &uLocal_450, Vector(-1481,873f, 20,902f, 3917,322f));
				Function_72(StackVal, 0, &uLocal_450, Vector(-1483,586f, 20,894f, 3914,605f));
				Function_71(0, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 1, &uLocal_450, Vector(-1502,441f, 17,702f, 3908,643f));
				Function_76(StackVal, 1, &uLocal_450, Vector(-1528,322f, 15,549f, 3914,941f));
				Function_75(StackVal, 1, &uLocal_450, Vector(-1461,306f, 16,545f, 3943,836f));
				Function_74(StackVal, 1, &uLocal_450, Vector(-1518,804f, 15,227f, 3932,349f));
				Function_73(StackVal, 1, &uLocal_450, Vector(-1461,306f, 16,545f, 3943,836f));
				Function_72(StackVal, 1, &uLocal_450, Vector(-1484,237f, 17,202f, 3915,965f));
				Function_71(1, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 2, &uLocal_450, Vector(-1508,558f, 15,069f, 3886,614f));
				Function_76(StackVal, 2, &uLocal_450, Vector(-1515,017f, 15,175f, 3879,03f));
				Function_75(StackVal, 2, &uLocal_450, Vector(-1465,326f, 16,545f, 3947,066f));
				Function_74(StackVal, 2, &uLocal_450, Vector(-1462,262f, 14,804f, 3850,746f));
				Function_73(StackVal, 2, &uLocal_450, Vector(-1465,326f, 16,545f, 3947,066f));
				Function_72(StackVal, 2, &uLocal_450, Vector(-1482,069f, 17,202f, 3906,694f));
				Function_71(2, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 3, &uLocal_450, Vector(-1465,326f, 16,545f, 3947,066f));
				Function_76(StackVal, 3, &uLocal_450, Vector(-1511,724f, 15,18f, 3879,456f));
				Function_75(StackVal, 3, &uLocal_450, Vector(-1467,337f, 16,545f, 3942,122f));
				Function_74(StackVal, 3, &uLocal_450, Vector(-1509,094f, 15,18f, 3882,661f));
				Function_73(StackVal, 3, &uLocal_450, Vector(-1457,124f, 16,545f, 3946,441f));
				Function_72(StackVal, 3, &uLocal_450, Vector(-1478,075f, 16,546f, 3951,656f));
				Function_71(3, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 4, &uLocal_450, Vector(-1462,267f, 16,546f, 3944,521f));
				Function_76(StackVal, 4, &uLocal_450, Vector(-1508,92f, 15,069f, 3887,885f));
				Function_75(StackVal, 4, &uLocal_450, Vector(-1468.0f, 16,545f, 3944,168f));
				Function_74(StackVal, 4, &uLocal_450, Vector(-1508,92f, 15,069f, 3887,885f));
				Function_73(StackVal, 4, &uLocal_450, Vector(-1468.0f, 16,545f, 3944,168f));
				Function_72(StackVal, 4, &uLocal_450, Vector(-1480,001f, 16,546f, 3945,905f));
				Function_71(4, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 5, &uLocal_450, Vector(-1492,125f, 17,202f, 3900,201f));
				Function_76(StackVal, 5, &uLocal_450, Vector(-1469,88f, 17,202f, 3906,603f));
				Function_75(StackVal, 5, &uLocal_450, Vector(-1510,918f, 15,069f, 3880,18f));
				Function_74(StackVal, 5, &uLocal_450, Vector(-1469,88f, 17,202f, 3906,603f));
				Function_73(StackVal, 5, &uLocal_450, Vector(-1473,648f, 16,546f, 3958,927f));
				Function_72(StackVal, 5, &uLocal_450, Vector(-1482,005f, 16,546f, 3947,177f));
				Function_71(5, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 6, &uLocal_450, Vector(-1483,919f, 17,194f, 3898,009f));
				Function_76(StackVal, 6, &uLocal_450, Vector(-1469,685f, 17,202f, 3917,537f));
				Function_75(StackVal, 6, &uLocal_450, Vector(-1540.0f, 14,033f, 3840,001f));
				Function_74(StackVal, 6, &uLocal_450, Vector(-1520,461f, 15,107f, 3931,652f));
				Function_73(StackVal, 3, &uLocal_450, Vector(-1509,841f, 17,416f, 3906,289f));
				Function_72(StackVal, 6, &uLocal_450, Vector(-1466,942f, 16,564f, 3939,209f));
				Function_71(6, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 7, &uLocal_450, Vector(-1502,475f, 15,034f, 3873,255f));
				Function_76(StackVal, 7, &uLocal_450, Vector(-1502,475f, 15,034f, 3873,255f));
				Function_75(StackVal, 7, &uLocal_450, Vector(-1457,509f, 16,545f, 3943,039f));
				Function_74(StackVal, 7, &uLocal_450, Vector(-1502,475f, 15,034f, 3873,255f));
				Function_73(StackVal, 7, &uLocal_450, Vector(-1457,509f, 16,545f, 3943,039f));
				Function_72(StackVal, 7, &uLocal_450, Vector(-1465,222f, 16,546f, 3935,87f));
				Function_71(7, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 8, &uLocal_450, Vector(-1452f, 16,54457f, 3937,624f));
				Function_76(StackVal, 8, &uLocal_450, Vector(-1546,715f, 15,034f, 3918,657f));
				Function_75(StackVal, 8, &uLocal_450, Vector(-1583,672f, 15,233f, 3841,704f));
				Function_74(StackVal, 8, &uLocal_450, Vector(-1546,715f, 15,034f, 3918,657f));
				Function_73(StackVal, 8, &uLocal_450, Vector(-1477,84f, 16,545f, 3937,601f));
				Function_72(StackVal, 8, &uLocal_450, Vector(-1509,841f, 17,416f, 3906,289f));
				Function_71(8, &uLocal_450, &iLocal_58);
				Function_77(StackVal, 9, &uLocal_450, Vector(-1465,222f, 16,546f, 3935,87f));
				Function_76(StackVal, 9, &uLocal_450, Vector(-1583,672f, 15,233f, 3841,704f));
				Function_75(StackVal, 9, &uLocal_450, Vector(-1546,715f, 15,034f, 3918,657f));
				Function_74(StackVal, 9, &uLocal_450, Vector(-1583,672f, 15,233f, 3841,704f));
				Function_73(StackVal, 9, &uLocal_450, Vector(-1546,715f, 15,034f, 3918,657f));
				Function_72(StackVal, 9, &uLocal_450, Vector(-1477,84f, 16,545f, 3937,601f));
				Function_71(9, &uLocal_450, &iLocal_58);
				Function_67(&Global_12232, &Global_14600, &uLocal_450, &Global_10996, iScriptParam_0);
				if (Function_79(&(Global_43791[iScriptParam_0]), 256) || !Function_66(2))
				{
					iLocal_672 = 1;
				}
				if (!Function_60(StackVal, 2, "$/content/Ambient/JobSystem/job_HorseBreaking", Vector(-1459,919f, 14,803f, 3848,309f), &Global_12796[33] + 16, 327, iScriptParam_0, 15, -1.0f, 15, 0))
				{
				}
				Function_59(&iLocal_58 + 1328, GET_OBJECT_FROM_PERS_CHAR(&Global_14600[23] + 16));
				Function_82(&(Global_43791[iScriptParam_0]), 8);
				if (Function_79(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_58(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_446 = 10;
				}
				else
				{
					iLocal_446 = 7;
				}
				iLocal_447 = 0;
				break;
			
			case 0x00000007:
				switch (Global_46720)
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
				Function_44(StackVal, &Global_98318, 4, Global_46866[2], "$/content/Mexico/Mini_Games/ArmWrestling_AGV/ArmWrestling_AGV", 4294967295, 0, "AgvArmWrestling", 351, Vector(-1470,591f, 16,545f, 3946,4f), 2,5f, 0, 0);
				Function_43(&Global_98318, 4, 1);
				Function_42(&Global_98318, 4);
				iLocal_446 = 8;
				iLocal_447 = 0;
				break;
			
			case 0x00000008:
				Function_41(64);
				if (Function_36(iScriptParam_0, &Global_12232, iLocal_672))
				{
					Function_32(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_28(2, 4294967295, 4294967295, 0, 3);
					Function_25(&iLocal_4);
				}
				else
				{
					Function_28(1, 10, 6, 5, 2);
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_32(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_32(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_32(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
							break;
					}
					Function_25(&iLocal_4);
				}
				Function_82(&(Global_43791[iScriptParam_0]), 512);
				iLocal_446 = 9;
				iLocal_447 = 0;
				break;
			
			case 0x00000009:
				Function_23(&iLocal_4, iScriptParam_0);
				Function_82(&(Global_43791[iScriptParam_0]), 4);
				Function_22("Finished Initializing AgaveViejo", 5.0f);
				iLocal_446 = 10;
				iLocal_447 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_21(Global_98961, 16))
				{
					if (Function_18(&(Global_46866[2])))
					{
						Function_17(&Global_98961, 16);
					}
				}
				if (Function_79(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_446 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_447);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4);
	Function_7(&Global_12232, &Global_14600, iScriptParam_0, (iLocal_672 || Global_6623));
	Function_6();
	Function_1();
	Function_58(&(Global_43791[iScriptParam_0]), 32);
	Function_58(&(Global_43791[iScriptParam_0]), 64);
	Function_58(&(Global_43791[iScriptParam_0]), 8);
	Function_58(&(Global_43791[iScriptParam_0]), 512);
	Function_58(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_448))
	{
		TERMINATE_SCRIPT(&uLocal_448);
	}
	Function_22("Unloaded AgaveViejo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xB84 / 2948
{
	Function_2(&iLocal_58 + 8);
	RELEASE_LAYOUT_REF(&iLocal_58);
	return;
}

void Function_2(int iParam0) //Position: 0xB97 / 2967
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0xBBF / 3007
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0xD0A / 3338
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0xD27 / 3367
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0xD45 / 3397
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_7(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xD51 / 3409
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
	strcpy(&cVar0, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_79(&(Global_43791[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_58(&(Global_43791[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_13(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_13(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_12(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_13(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_12(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_79(&(Global_43791[iParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_66(2) || Function_79(&(Global_43791[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_13(&(Param0[iVar162]), 2) && !Function_13(&(Param0[iVar162]), 4))
		{
			Function_8(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_13(&(Param0[iVar162]), 2) && !Function_13(&(Param0[iVar162]), 4))
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
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_82(&(Global_43791[iParam2]), 2048);
		}
	}
}

void Function_8(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xF6F / 3951
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_11(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_10(Global_43790), Function_9(Global_43790), 0, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_13(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_13(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_11(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_10(Global_43790), Function_9(Global_43790), 0, 0);
	}
}

int Function_9(int iParam0) //Position: 0x10D5 / 4309
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

int Function_10(int iParam0) //Position: 0x1100 / 4352
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

void Function_11(var uParam0, int iParam1) //Position: 0x1134 / 4404
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x1145 / 4421
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x115F / 4447
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_14() //Position: 0x117C / 4476
{
	if (Function_21(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_15(int iParam0) //Position: 0x1197 / 4503
{
	if (!Function_16(iParam0))
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

bool Function_16(int iParam0) //Position: 0x1645 / 5701
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_17(var uParam0, int iParam1) //Position: 0x165B / 5723
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_18(var uParam0) //Position: 0x166C / 5740
{
	int iVar0;
	
	Function_20(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_20(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_19(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_19(uParam0), 1.0f, "p_gen_chair01x", 1);
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

struct<8> Function_19(int iParam0) //Position: 0x176F / 5999
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

struct<8> Function_20(int iParam0) //Position: 0x1823 / 6179
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

bool Function_21(var uParam0, int iParam1) //Position: 0x18D3 / 6355
{
	return (uParam0 && iParam1) == 0;
}

void Function_22(char* cParam0) //Position: 0x18E0 / 6368
{
	if (!Function_66(128))
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

void Function_23(int iParam0, int iParam1) //Position: 0x1920 / 6432
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_46715 = &iParam0;
	Global_40000.f_12 = iParam1;
	Global_43789 = iParam1;
	if (IS_OBJECT_VALID(&Global_44085[iParam19] + 56))
	{
		if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam19] + 56))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(&Global_44085[iParam19] + 56);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_24(&Global_44085[iParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", iParam1);
	Global_46721 = 0;
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x1A10 / 6672
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_25(int iParam0) //Position: 0x1A1D / 6685
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_27(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_26(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_26(var uParam0) //Position: 0x1B19 / 6937
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_27() //Position: 0x1B36 / 6966
{
	int iVar0;
	
	return &iVar0;
}

void Function_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1B3F / 6975
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

void Function_29() //Position: 0x1C2D / 7213
{
	int iVar0;
	
	Global_41176 = Function_30(StackVal);
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

int Function_30(int iParam0) //Position: 0x1C7B / 7291
{
	if (!Function_31(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_31(bool bParam0) //Position: 0x1C93 / 7315
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x1CA8 / 7336
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
		Function_35();
	}
	if (&bParam5)
	{
		Function_33(1048576);
	}
}

void Function_33(int iParam0) //Position: 0x1DB6 / 7606
{
	Function_34(&Global_43580, iParam0);
	return;
}

void Function_34(var uParam0, var uParam1) //Position: 0x1DC4 / 7620
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_35() //Position: 0x1DE3 / 7651
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_33(16384);
	}
	return;
}

bool Function_36(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x1DFF / 7679
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_79(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_37(49, 0))
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

int Function_37(var uParam0, bool bParam1) //Position: 0x1EBD / 7869
{
	int iVar0;
	
	iVar0 = Function_39(uParam0);
	if (!Function_38(iVar0))
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

bool Function_38(int iParam0) //Position: 0x1EFB / 7931
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_39(int iParam0) //Position: 0x1F12 / 7954
{
	if (!Function_40(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_40(int iParam0) //Position: 0x1F2C / 7980
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_41(int iParam0) //Position: 0x1F42 / 8002
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_42(struct<28>[] Param0, int iParam1) //Position: 0x1F55 / 8021
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_43(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x1F72 / 8050
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_44(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x1F99 / 8089
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
	Param0[iParam128].f_4 = Function_53(iParam2, iParam1, 4);
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
	if (Global_39266[iParam1] && Function_52(iParam1))
	{
		Function_45(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_45(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x2102 / 8450
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_51(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_50(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_49(StackVal, Param2);
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
		Function_48(uVar3);
		Var6 = Function_48(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_48(StackVal);
				Var4 = Function_48(StackVal);
				if (Function_47(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_46(iParam1), 0.0f, 2, iVar2);
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

int Function_46(int iParam0) //Position: 0x22EB / 8939
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

bool Function_47(struct<2> Param0, struct<2> Param2) //Position: 0x2422 / 9250
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_48(int iParam0) //Position: 0x244E / 9294
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	iVar2 = iParam0 & 32767;
	iVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(iVar2);
	Var0.f_8 = TO_FLOAT(iVar3);
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

var Function_49(vector3 vParam0) //Position: 0x24A5 / 9381
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

int Function_50(int iParam0) //Position: 0x24F3 / 9459
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

bool Function_51(vector3 vParam0) //Position: 0x25AB / 9643
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_52(int iParam0) //Position: 0x25C3 / 9667
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_53(int iParam0, int iParam1, int iParam2) //Position: 0x25E6 / 9702
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_57(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_54(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_54(iParam0, iParam1, iParam2, 4294967295);
}

int Function_54(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2644 / 9796
{
	var uVar0;
	
	if (!Function_56(iParam2))
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
	uVar0 = Function_57(iParam0, iParam1, iParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_55(uVar0);
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
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
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
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_55(int iParam0) //Position: 0x27A8 / 10152
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

bool Function_56(int iParam0) //Position: 0x27E6 / 10214
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_57(int iParam0, int iParam1, int iParam2) //Position: 0x27FB / 10235
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_58(var uParam0, int iParam1) //Position: 0x281B / 10267
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_59(var uParam0, bool bParam1) //Position: 0x2835 / 10293
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(&bParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)), &bParam1);
		}
		iVar0++;
	}
	return;
}

bool Function_60(int iParam0, var uParam1, struct<2> Param2, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x2882 / 10370
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
	uVar0 = Function_53(uParam6, iParam0, 6);
	if (Function_65(uVar0) == 0)
	{
		Function_62(uVar0, MAKE_TIME_OF_DAY_EX(1, 0, 0, 0));
	}
	uParam10 = &uParam10;
	Function_61(&(Global_98256[iParam010]), 24);
	return 1;
}

void Function_61(var uParam0, int iParam1) //Position: 0x2934 / 10548
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x2945 / 10565
{
	if (!Function_63(iParam0))
	{
		return;
	}
	*(&Global_21684[iParam07] + 40) = &iParam1;
	return;
}

bool Function_63(int iParam0) //Position: 0x2962 / 10594
{
	if (!Function_38(iParam0))
	{
		return 0;
	}
	if (!Function_64(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_64(int iParam0) //Position: 0x2986 / 10630
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_65(int iParam0) //Position: 0x299B / 10651
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_66(int iParam0) //Position: 0x29B5 / 10677
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_67(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x29D1 / 10705
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_66(2))
	{
		return;
	}
	if (Function_79(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_13(&(Param0[iVar02]), 2))
		{
			if (Function_68(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_58(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_82(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_68(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2A89 / 10889
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_79(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_13(&iParam0, 2))
	{
		return 1;
	}
	if (Function_13(&iParam0, 4))
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
		(&iParam1 + 16) = Function_70(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_51(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_12(&iParam0, 4);
	}
	Function_69(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_69(int iParam0, struct<2> Param1) //Position: 0x2C0A / 11274
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_51(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_51(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_51(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_51(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_51(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_51(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_70(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2D50 / 11600
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_27(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_71(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2E77 / 11895
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 72) = &iParam2;
	return;
}

void Function_72(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2ED6 / 11990
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_47(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 60) = Param2;
}

void Function_73(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2F3D / 12093
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_47(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 48) = Param2;
}

void Function_74(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2FA6 / 12198
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_47(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 36) = Param2;
}

void Function_75(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3011 / 12305
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_47(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 24) = Param2;
}

void Function_76(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3077 / 12407
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_47(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(&Param1[iVar011] + 12) = Param2;
}

void Function_77(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x30E0 / 12512
{
	int iVar0;
	
	iVar0 = uParam0;
	if (Function_47(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	Param1[iVar011] = Param2;
}

int Function_78(int iParam0) //Position: 0x3144 / 12612
{
	if (!Function_16(iParam0))
	{
		return 1;
	}
	return Function_79(&(Global_43791[iParam0]), 4);
}

bool Function_79(var uParam0, int iParam1) //Position: 0x3160 / 12640
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_80(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x317D / 12669
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_79(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_13(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_13(&(Param0[iVar02]), 8))
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

void Function_81(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3266 / 12902
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_79(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_82(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_11(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_11(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x3356 / 13142
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_83() //Position: 0x3367 / 13159
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
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/knl_hoe_soil", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/multistage_hoe", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/milk_cow", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/arm_wrestling_spectate", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_89(&iLocal_58 + 8, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	if (!Function_84(&iLocal_58 + 8))
	{
		return 0;
	}
	iLocal_58 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_58))
	{
		iLocal_58 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	*(&iLocal_58 + 656) = CREATE_OBJECTSET_IN_LAYOUT("nhoegrpSet", &iLocal_58, 8, 0);
	*(&iLocal_58 + 664[03]) = Vector(-1468,988f, 17,2016f, 3905,636f);
	*(&iLocal_58 + 664[03] + 12) = Vector(0.0f, 204,9791f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag9", Vector(-1468,988f, 17,2016f, 3905,636f), Vector(0.0f, 204,9791f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_58 + 656);
	*(&iLocal_58 + 664[13]) = Vector(-1471,727f, 17,2016f, 3908,184f);
	*(&iLocal_58 + 664[13] + 12) = Vector(0.0f, 202,8735f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag1", Vector(-1471,727f, 17,2016f, 3908,184f), Vector(0.0f, 202,8735f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_58 + 656);
	*(&iLocal_58 + 664[23]) = Vector(-1468,956f, 17,2016f, 3910,515f);
	*(&iLocal_58 + 664[23] + 12) = Vector(0.0f, 202,4568f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag2", Vector(-1468,956f, 17,2016f, 3910,515f), Vector(0.0f, 202,4568f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_58 + 656);
	*(&iLocal_58 + 664[33]) = Vector(-1470,302f, 17,2016f, 3919,103f);
	*(&iLocal_58 + 664[33] + 12) = Vector(0.0f, 64,63643f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag3", Vector(-1470,302f, 17,2016f, 3919,103f), Vector(0.0f, 64,63643f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_58 + 656);
	*(&iLocal_58 + 664[43]) = Vector(-1470,819f, 17,2016f, 3920,492f);
	*(&iLocal_58 + 664[43] + 12) = Vector(0.0f, -223,0396f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag4", Vector(-1470,819f, 17,2016f, 3920,492f), Vector(0.0f, -223,0396f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_58 + 656);
	*(&iLocal_58 + 664[53]) = Vector(-1482,949f, 17,2016f, 3919,032f);
	*(&iLocal_58 + 664[53] + 12) = Vector(0.0f, 522,4911f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag5", Vector(-1482,949f, 17,2016f, 3919,032f), Vector(0.0f, 522,4911f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_58 + 656);
	*(&iLocal_58 + 664[63]) = Vector(-1481,847f, 17,2016f, 3904,302f);
	*(&iLocal_58 + 664[63] + 12) = Vector(0.0f, 350,8373f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag6", Vector(-1481,847f, 17,2016f, 3904,302f), Vector(0.0f, 350,8373f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_58 + 656);
	*(&iLocal_58 + 664[73]) = Vector(-1469,644f, 17,202f, 3904,231f);
	*(&iLocal_58 + 664[73] + 12) = Vector(0.0f, -0,1112507f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag102", Vector(-1469,644f, 17,202f, 3904,231f), Vector(0.0f, -0,1112507f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "exit");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_58 + 656);
	*(&iLocal_58 + 864) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", &iLocal_58, 8, 0);
	*(&iLocal_58 + 872[03]) = Vector(-1522,798f, 14,99596f, 3930,805f);
	*(&iLocal_58 + 872[03] + 12) = Vector(0.0f, -1,757305f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag15", Vector(-1522,798f, 14,99596f, 3930,805f), Vector(0.0f, -1,757305f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_58 + 864);
	*(&iLocal_58 + 872[13]) = Vector(-1515,347f, 15,50746f, 3931,501f);
	*(&iLocal_58 + 872[13] + 12) = Vector(0.0f, -112,0334f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag11", Vector(-1515,347f, 15,50746f, 3931,501f), Vector(0.0f, -112,0334f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_58 + 864);
	*(&iLocal_58 + 872[23]) = Vector(-1520.0f, 15,03867f, 3928,006f);
	*(&iLocal_58 + 872[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag12", Vector(-1520.0f, 15,03867f, 3928,006f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_58 + 864);
	*(&iLocal_58 + 872[33]) = Vector(-1514,47f, 15,65978f, 3930,477f);
	*(&iLocal_58 + 872[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag13", Vector(-1514,47f, 15,65978f, 3930,477f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_58 + 864);
	*(&iLocal_58 + 872[43]) = Vector(-1525,43f, 15,43945f, 3916,006f);
	*(&iLocal_58 + 872[43] + 12) = Vector(0.0f, -196,1929f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag14", Vector(-1525,43f, 15,43945f, 3916,006f), Vector(0.0f, -196,1929f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_58 + 864);
	*(&iLocal_58 + 1000) = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", &iLocal_58, 8, 0);
	*(&iLocal_58 + 1008[03]) = Vector(-1468,873f, 14,804f, 3846,249f);
	*(&iLocal_58 + 1008[03] + 12) = Vector(0.0f, 26,758f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag97", Vector(-1468,873f, 14,804f, 3846,249f), Vector(0.0f, 26,758f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_58 + 1000);
	*(&iLocal_58 + 1040) = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", &iLocal_58, 8, 0);
	*(&iLocal_58 + 1048[03]) = Vector(-1547,739f, 14,195f, 3838,161f);
	*(&iLocal_58 + 1048[03] + 12) = Vector(0.0f, 16,139f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag96", Vector(-1547,739f, 14,195f, 3838,161f), Vector(0.0f, 16,139f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_58 + 1040);
	*(&iLocal_58 + 1080) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrp1Set", &iLocal_58, 8, 0);
	*(&iLocal_58 + 1088[03]) = Vector(-1468,104f, 17,202f, 3905,31f);
	*(&iLocal_58 + 1088[03] + 12) = Vector(0.0f, 352,2283f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag108", Vector(-1468,104f, 17,202f, 3905,31f), Vector(0.0f, 352,2283f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_58 + 1080);
	*(&iLocal_58 + 1088[13]) = Vector(-1468,743f, 17,2016f, 3913,167f);
	*(&iLocal_58 + 1088[13] + 12) = Vector(0.0f, 358,0765f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag105", Vector(-1468,743f, 17,2016f, 3913,167f), Vector(0.0f, 358,0765f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_58 + 1080);
	*(&iLocal_58 + 1088[23]) = Vector(-1471,062f, 17,202f, 3918,815f);
	*(&iLocal_58 + 1088[23] + 12) = Vector(0.0f, 63,388f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag106", Vector(-1471,062f, 17,202f, 3918,815f), Vector(0.0f, 63,388f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_58 + 1080);
	*(&iLocal_58 + 1088[33]) = Vector(-1484f, 17,18989f, 3897,185f);
	*(&iLocal_58 + 1088[33] + 12) = Vector(0.0f, -183,3923f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Flag107", Vector(-1484f, 17,18989f, 3897,185f), Vector(0.0f, -183,3923f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_58 + 1080);
	*(&iLocal_58 + 1192) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp3Set", &iLocal_58, 8, 0);
	*(&iLocal_58 + 1200[03]) = Vector(-1509,291f, 17,41558f, 3914,572f);
	*(&iLocal_58 + 1200[03] + 12) = Vector(0.0f, -243,7382f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sweep1_3", Vector(-1509,291f, 17,41558f, 3914,572f), Vector(0.0f, -243,7382f, 0.0f));
	DECOR_SET_STRING(&uVar20, "UseAnim", "sweeping");
	DECOR_SET_INT(&uVar20, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_58 + 1192);
	DECOR_SET_INT(&uVar20, "FlagSetNum", 3);
	*(&iLocal_58 + 1200[13]) = Vector(-1508,516f, 17,41558f, 3909,047f);
	*(&iLocal_58 + 1200[13] + 12) = Vector(0.0f, -299,2566f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sweep2_2", Vector(-1508,516f, 17,41558f, 3909,047f), Vector(0.0f, -299,2566f, 0.0f));
	DECOR_SET_STRING(&uVar21, "UseAnim", "sweeping");
	DECOR_SET_INT(&uVar21, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_58 + 1192);
	DECOR_SET_INT(&uVar21, "FlagSetNum", 3);
	*(&iLocal_58 + 1200[23]) = Vector(-1507,766f, 17,41558f, 3906,384f);
	*(&iLocal_58 + 1200[23] + 12) = Vector(0.0f, -272,5389f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sweep3_3", Vector(-1507,766f, 17,41558f, 3906,384f), Vector(0.0f, -272,5389f, 0.0f));
	DECOR_SET_STRING(&uVar22, "UseAnim", "sweeping");
	DECOR_SET_INT(&uVar22, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_58 + 1192);
	DECOR_SET_INT(&uVar22, "FlagSetNum", 3);
	*(&iLocal_58 + 1200[33]) = Vector(-1505,535f, 17,41558f, 3902,712f);
	*(&iLocal_58 + 1200[33] + 12) = Vector(0.0f, -416,4438f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sweep4_4", Vector(-1505,535f, 17,41558f, 3902,712f), Vector(0.0f, -416,4438f, 0.0f));
	DECOR_SET_STRING(&uVar23, "UseAnim", "sweeping");
	DECOR_SET_INT(&uVar23, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_58 + 1192);
	DECOR_SET_INT(&uVar23, "FlagSetNum", 3);
	*(&iLocal_58 + 1200[43]) = Vector(-1499,967f, 17,56363f, 3917,541f);
	*(&iLocal_58 + 1200[43] + 12) = Vector(0.0f, 352,9069f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "broom_pst3", Vector(-1499,967f, 17,56363f, 3917,541f), Vector(0.0f, 352,9069f, 0.0f));
	DECOR_SET_STRING(&uVar24, "UseAnim", "nbroom_pst");
	DECOR_SET_INT(&uVar24, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_58 + 1192);
	DECOR_SET_INT(&uVar24, "FlagSetNum", 3);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "nlean_rail", "nlean_rail", Vector(-1503,886f, 17,702f, 3914,355f), Vector(0.0f, 78,17119f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_hammer_table", "stand_hammer_table", Vector(-1504,827f, 15,06869f, 3882,007f), Vector(0.0f, -68,48032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil", "knl_hoe_soil", Vector(-1471,374f, 17,22707f, 3911,655f), Vector(0.0f, -346,6793f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil1", "knl_hoe_soil", Vector(-1469,88f, 17,202f, 3906,603f), Vector(0.0f, 73,32478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand_nospawn1", "smoking_stand_nospawn", Vector(-1515,72f, 15,06869f, 3873,919f), Vector(0.0f, -4,171082f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_washCloths", "mex_washCloths", Vector(-1523,562f, 15,53524f, 3913,098f), Vector(0.0f, -176,0116f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand_nospawn2", "rand_idle_stand", Vector(-1548,224f, 15,03447f, 3916,911f), Vector(0.0f, -254,4653f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand_nospawn3", "smoking_stand_nospawn", Vector(-1580,27f, 14,99868f, 3843,654f), Vector(0.0f, -208,8197f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_hammer_table1", "stand_hammer_table", Vector(-1499,561f, 15,03945f, 3882,641f), Vector(0.0f, 110,4223f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand_nospawn4", "smoking_stand_nospawn", Vector(-1473,852f, 17,302f, 3912,452f), Vector(0.0f, 415,3875f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_washCloths1", "mex_washCloths", Vector(-1528,48f, 15,56622f, 3913,241f), Vector(0.0f, 28,48538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand_nospawn5", "smoking_stand_nospawn", Vector(-1548f, 14,17225f, 3837,896f), Vector(0.0f, 204,6605f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-1465,374f, 16,54457f, 3950,458f), Vector(0.0f, -5,31854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1465,326f, 16,54457f, 3947,066f), Vector(0.0f, 180,9886f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1463,636f, 16,54457f, 3949,016f), Vector(0.0f, -292,52f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1462,436f, 16,54457f, 3941,564f), Vector(0.0f, -150,7194f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "rand_idle_stand", "rand_idle_stand", Vector(-1467,337f, 16,54457f, 3942,122f), Vector(0.0f, 218,9225f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1468.0f, 16,54457f, 3944,168f), Vector(0.0f, -99,09139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil2", "knl_hoe_soil", Vector(-1467,821f, 17,202f, 3906,039f), Vector(0.0f, 19,52302f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil3", "knl_hoe_soil", Vector(-1469,685f, 17,202f, 3917,537f), Vector(0.0f, -216,4655f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil4", "knl_hoe_soil", Vector(-1470,666f, 17,20655f, 3921,45f), Vector(0.0f, 86,31735f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_58 + 1328) = CREATE_OBJECTSET_IN_LAYOUT(Function_27(), &iLocal_58, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", Vector(-1524,267f, 15,48784f, 3915,537f), Vector(0.0f, -113,7572f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &iLocal_58 + 1328)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-1478,555f, 14,805f, 3853,377f), Vector(0.0f, -244,8757f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(1, &iLocal_58 + 1328)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "rand_idle_stand1", "rand_idle_stand", Vector(-1509,04f, 17,416f, 3903,422f), Vector(0.0f, -278,5679f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_58 + 1328)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-1513,657f, 15,06869f, 3873,66f), Vector(0.0f, -113,9005f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_58 + 1328)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand22", "smoking_stand", Vector(-1532,379f, 14,11864f, 3894,207f), Vector(0.0f, 117,0685f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_58 + 1328)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-1509,751f, 15,07638f, 3871,961f), Vector(0.0f, 25,81026f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_58 + 1328)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_pocketwatch_e_any3", "stand_pocketwatch_e_any", Vector(-1462,179f, 14,80229f, 3850,418f), Vector(0.0f, -216,875f, 0.0f)), &iLocal_58 + 1328);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(6, &iLocal_58 + 1328)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel", "repair_kneel", Vector(-1526,268f, 14,034f, 3840,611f), Vector(0.0f, -93,29059f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel1", "repair_kneel", Vector(-1530,362f, 14,03305f, 3838,781f), Vector(0.0f, -279,4068f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel2", "repair_kneel", Vector(-1516,457f, 14,95476f, 3885,492f), Vector(0.0f, 290,4165f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel3", "repair_kneel", Vector(-1495,746f, 17,2016f, 3900,395f), Vector(0.0f, -100,0808f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel4", "repair_kneel", Vector(-1517,009f, 16,14261f, 3924,573f), Vector(0.0f, -185,8395f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel5", "repair_kneel", Vector(-1540,603f, 15,03447f, 3925,674f), Vector(0.0f, -410,1426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "repair_kneel6", "repair_kneel", Vector(-1462,229f, 14,80225f, 3846,617f), Vector(0.0f, -332,5046f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_horseshoe", "stand_horseshoe", Vector(-1506,627f, 15,06869f, 3878,476f), Vector(0.0f, -249,2752f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_horseshoe1", "stand_horseshoe", Vector(-1514,865f, 15,19236f, 3881,796f), Vector(0.0f, -252,0428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-1501,645f, 17,702f, 3903,124f), Vector(0.0f, 80,73307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "lean_fence_H_talking", "lean_fence_H_talking", Vector(-1468,904f, 17,202f, 3901,982f), Vector(0.0f, -189,4935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Multistage_hoe", "Multistage_hoe", Vector(-1469,644f, 17,202f, 3904,231f), Vector(0.0f, 4,834909f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "horse_tend", "horse_tend", Vector(-1475,865f, 14,804f, 3850,432f), Vector(0.0f, 2,060024f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "horse_tend1", "horse_tend", Vector(-1473,409f, 14,804f, 3849,123f), Vector(0.0f, -0,04932394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_58 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "horse_tend2", "horse_tend", Vector(-1469,974f, 14,804f, 3847,725f), Vector(0.0f, -261,731f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1336), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Multistage_bucket", "Multistage_bucket", Vector(-1527,698f, 15,54501f, 3912,213f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "horse_tend5", "horse_tend", Vector(-1513,503f, 15,18f, 3885,066f), Vector(0.0f, 108,7944f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_horseshoe2", "stand_horseshoe", Vector(-1466,239f, 14,80225f, 3845,621f), Vector(0.0f, -6,238536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "look_distance_binocs", "look_distance_binocs", Vector(-1583,672f, 15,233f, 3841,704f), Vector(0.0f, 86,03588f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "milk_cow", "milk_cow", Vector(-1547,821f, 14,034f, 3832,911f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "nmilk_cow1", "milk_cow", Vector(-1543,618f, 14,034f, 3832,997f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "nmilk_cow2", "milk_cow", Vector(-1540,163f, 14,034f, 3834,363f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "nmilk_cow3", "milk_cow", Vector(-1536,508f, 14,034f, 3835,043f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_hammer_wall", "stand_hammer_wall", Vector(-1551,084f, 14,034f, 3834,471f), Vector(0.0f, -101,986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	DECOR_SET_STRING(&uVar0, "UseAnim", "exit");
	DECOR_SET_STRING(&uVar0, "UseAnim", "exit");
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "lean_fence_L", "lean_fence_L", Vector(-1481,873f, 20,902f, 3917,322f), Vector(0.0f, -88,92303f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1545,375f, 15,03447f, 3921,375f), Vector(0.0f, 123,8903f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil5", "knl_hoe_soil", Vector(-1520,461f, 15,10742f, 3931,652f), Vector(0.0f, 41,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand", "smoking_stand", Vector(-1483,112f, 20,902f, 3921,551f), Vector(0.0f, -169,2238f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-1484,832f, 20,902f, 3919,396f), Vector(0.0f, -96,82875f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil6", "knl_hoe_soil", Vector(-1479,809f, 17,202f, 3903,259f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "look_out_window_R", "look_out_window_R", Vector(-1480,022f, 17,302f, 3904,471f), Vector(0.0f, -94,75592f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1481,985f, 17,302f, 3915,548f), Vector(0.0f, -178,8116f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil7", "knl_hoe_soil", Vector(-1517,791f, 15,2969f, 3931,977f), Vector(0.0f, -48,36694f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "knl_hoe_soil8", "knl_hoe_soil", Vector(-1518,37f, 15,10406f, 3928,148f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-1502,525f, 17,69016f, 3907,024f), Vector(0.0f, 110,2036f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sit_no_table1", "sit_no_table", Vector(-1460,044f, 16,557f, 3946,428f), Vector(0.0f, 14,92064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Pee", "Pee", Vector(-1450,339f, 16,54457f, 3945,888f), Vector(0.0f, -91,77083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sleeping_wall_scripted1", "sleeping_wall_scripted", Vector(-1452,033f, 16,54457f, 3937,491f), Vector(0.0f, -166,2091f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "skin_scraper", "skin_scraper", Vector(-1481,266f, 14,80225f, 3855,542f), Vector(0.0f, 13,81049f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "lean_rail1", "nlean_rail", Vector(-1531,801f, 14,03446f, 3838,799f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-1457,124f, 16,54457f, 3946,441f), Vector(0.0f, 56,92791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_58 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-1474,818f, 16,548f, 3956,916f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1344), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "sit_camp_coffee_drink", "sit_camp_coffee_drink", Vector(-1462,267f, 16,546f, 3944,521f), Vector(0.0f, -261,0739f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(-1475,467f, 16,54457f, 3946,173f), Vector(0.0f, -19,28305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Multistage_bucket1", "Multistage_bucket", Vector(-1483,919f, 17,194f, 3898,009f), Vector(0.0f, -85,97762f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	DECOR_SET_INT(&uVar0, "FlagSetNum", 1);
	*(&iLocal_58 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_sleepBed_l1", "mex_sleepBed_l", Vector(-1480,657f, 16,546f, 3949,317f), Vector(0.0f, -148,1573f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1352), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_sleepBed_r", "mex_sleepBed_r", Vector(-1477,953f, 16,546f, 3947,577f), Vector(0.0f, 213,0571f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_sleepBed_r1", "mex_sleepBed_r", Vector(-1480,001f, 16,546f, 3945,905f), Vector(0.0f, 33,33398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_sleepBed_l2", "mex_sleepBed_l", Vector(-1467,06f, 16,564f, 3939,242f), Vector(0.0f, 105,7901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_sleepBed_l3", "mex_sleepBed_l", Vector(-1465,254f, 16,56536f, 3935,975f), Vector(0.0f, -70,62105f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_58 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Multistage_sweeping_03", "Multistage_sweeping", Vector(-1499,973f, 17,56363f, 3917,548f), Vector(0.0f, 171,2262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1360), 1);
	DECOR_SET_INT(&iLocal_58 + 1360, "FlagSetNum", 3);
	*(&iLocal_58 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-1510,18f, 17,41558f, 3908,153f), Vector(0.0f, 107,8189f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1368), 1);
	*(&iLocal_58 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-1509,841f, 17,41558f, 3906,289f), Vector(0.0f, 50,70983f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1376), 1);
	*(&iLocal_58 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-1479,349f, 16,54457f, 3939,397f), Vector(0.0f, 76,0742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1384), 1);
	*(&iLocal_58 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-1477,84f, 16,54457f, 3937,601f), Vector(0.0f, 27,61599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1392), 1);
	*(&iLocal_58 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-1546,715f, 15,03447f, 3918,657f), Vector(0.0f, 163,207f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1400), 1);
	*(&iLocal_58 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand23", "smoking_stand", Vector(-1550,39f, 15,03447f, 3915,294f), Vector(0.0f, 91,38368f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1408), 1);
	*(&iLocal_58 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand24", "rand_idle_stand", Vector(-1544,27f, 15,03447f, 3922,966f), Vector(0.0f, 111,8797f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1416), 1);
	*(&iLocal_58 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand25", "smoking_stand", Vector(-1582,163f, 15,0725f, 3842,927f), Vector(0.0f, 137,6652f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1424), 1);
	*(&iLocal_58 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand26", "smoking_stand", Vector(-1457,509f, 16,54457f, 3943,039f), Vector(0.0f, 122,2502f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1432), 1);
	*(&iLocal_58 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "rand_idle_stand2", "rand_idle_stand", Vector(-1502,422f, 15,03303f, 3872,666f), Vector(0.0f, -126,2428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1440), 1);
	*(&iLocal_58 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "smoking_stand27", "smoking_stand", Vector(-1478,472f, 16,54457f, 3938,528f), Vector(0.0f, 55,73417f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1448), 1);
	*(&iLocal_58 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "arm_wrestling_spectate1", "arm_wrestling_spectate", Vector(-1470,917f, 16,54662f, 3950,254f), Vector(0.0f, 5,143475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1456), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-1470,211f, 16,54457f, 3944,001f), Vector(0.0f, -139,6526f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1462,606f, 16,54457f, 3947,076f), Vector(0.0f, -243,6713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-1456,997f, 16,54457f, 3944,541f), Vector(0.0f, -266,5351f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_58 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-1529,288f, 14,03305f, 3839,734f), Vector(0.0f, -63,79673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1464), 1);
	*(&iLocal_58 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "lean_table", "lean_table", Vector(-1459,975f, 16,54457f, 3942,889f), Vector(0.0f, -30,51801f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1472), 1);
	*(&iLocal_58 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-1463,483f, 16,54457f, 3943,029f), Vector(0.0f, -109,1718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1480), 1);
	*(&iLocal_58 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-1466,99f, 16,54457f, 3949,445f), Vector(0.0f, -422,5913f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1488), 1);
	*(&iLocal_58 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-1466,777f, 16,54457f, 3947,17f), Vector(0.0f, -505,4325f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1496), 1);
	*(&iLocal_58 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(-1462,058f, 16,54457f, 3950,57f), Vector(0.0f, 59,91953f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1504), 1);
	*(&iLocal_58 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(-1457,836f, 16,54457f, 3941,808f), Vector(0.0f, 142,1694f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1512), 1);
	*(&iLocal_58 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-1509,81f, 17,41558f, 3910,547f), Vector(0.0f, 51,15646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_58 + 1520), 1);
	*(&iLocal_58 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(-1473,098f, 16,54662f, 3949,357f), Vector(0.0f, -44,21534f, 0.0f));
	*(&iLocal_58 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "Rand_Idle_NearWall0", "Rand_Idle_NearWall", Vector(-1546,074f, 15,03447f, 3920,164f), Vector(0.0f, 129,7915f, 0.0f));
	*(&iLocal_58 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_58, "mex_stool_sit", "mex_stool_sit", Vector(-1463,714f, 16,54457f, 3951,358f), Vector(0.0f, 26,77365f, 0.0f));
	return 1;
}

bool Function_84(struct<2>[] Param0) //Position: 0x6F50 / 28496
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_88();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_87(&(Param0[iVar02]), 8);
		}
		else if (Function_86())
		{
			iVar1 = 1;
			Function_87(&(Param0[iVar02]), 8);
		}
		Function_87(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_87(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
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
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_87(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_87(&(Param0[iVar02]), 2);
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
	Function_85();
	return 1;
}

void Function_85() //Position: 0x7312 / 29458
{
	if (!Function_66(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_86() //Position: 0x7352 / 29522
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

void Function_87(struct<13> Param0) //Position: 0x7380 / 29568
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_88() //Position: 0x7393 / 29587
{
	if (!Function_66(128))
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

var Function_89(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x73D5 / 29653
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_90(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_87(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_90(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x7413 / 29715
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_87(&(Param0[iVar02]), 4);
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

void Function_91(int iParam0, int iParam1) //Position: 0x74E2 / 29922
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

bool Function_92() //Position: 0x752C / 29996
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	*(&iLocal_4 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_ring", 4,203895E-45f, Vector(-1472,179f, 16,66442f, 3871,895f), Vector(0.0f, 20.0f, 0.0f), Vector(12.0f, 3.0f, 12.0f));
	*(&iLocal_4 + 16) = Vector(-1472,254f, 16,3946f, 3871,771f);
	*(&iLocal_4 + 16 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 40) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Horsebreaking", Vector(-1472,254f, 16,3946f, 3871,771f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 48) = Vector(-1463,624f, 16,395f, 3871,771f);
	*(&iLocal_4 + 48 + 12) = Vector(0.0f, 86,15168f, 0.0f);
	*(&iLocal_4 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker1", Vector(-1463,624f, 16,395f, 3871,771f), Vector(0.0f, 86,15168f, 0.0f));
	*(&iLocal_4 + 80) = Vector(-1465,8f, 16,395f, 3862,353f);
	*(&iLocal_4 + 80 + 12) = Vector(0.0f, 151,0871f, 0.0f);
	*(&iLocal_4 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker2", Vector(-1465,8f, 16,395f, 3862,353f), Vector(0.0f, 151,0871f, 0.0f));
	*(&iLocal_4 + 112) = Vector(-1476,408f, 16,395f, 3863,545f);
	*(&iLocal_4 + 112 + 12) = Vector(0.0f, -135,22f, 0.0f);
	*(&iLocal_4 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker3", Vector(-1476,408f, 16,395f, 3863,545f), Vector(0.0f, -135,22f, 0.0f));
	*(&iLocal_4 + 144) = Vector(-1481,34f, 16,395f, 3875,777f);
	*(&iLocal_4 + 144 + 12) = Vector(0.0f, -68,64329f, 0.0f);
	*(&iLocal_4 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker4", Vector(-1481,34f, 16,395f, 3875,777f), Vector(0.0f, -68,64329f, 0.0f));
	*(&iLocal_4 + 176) = Vector(-1469,122f, 16,395f, 3879,373f);
	*(&iLocal_4 + 176 + 12) = Vector(0.0f, 17,80298f, 0.0f);
	*(&iLocal_4 + 200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_Onlooker5", Vector(-1469,122f, 16,395f, 3879,373f), Vector(0.0f, 17,80298f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 208) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "agvp_patrolpath");
	return 1;
	if (!Function_66(128))
	{
		return;
	}
}

