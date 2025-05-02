//Decompiled with MagicRDR v1.0
//Function Count : 271
//Statics Count : 664
//Natives Count : 459
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	char[] cLocal_7[4] = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 8;
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
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 13;
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
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = false;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 3;
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
	int iLocal_218 = 0;
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
	var uLocal_234 = 2;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 17;
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
	var uLocal_280 = 5;
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
	var uLocal_294 = 12;
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
	var uLocal_322 = 1;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 3;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 6;
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
	var uLocal_362 = 1;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 3;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 3;
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
	var uLocal_392 = 1;
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
	var uLocal_416 = 9;
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
	var uLocal_472 = 15;
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
	int iLocal_594 = 5;
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
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	int iLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	int iLocal_634 = 0;
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
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	bool bScriptParam_0 = false;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_660 = 0;
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_270(&cVar0, 3);
	Function_269();
	if (StackVal && (((((!Global_6666 && bScriptParam_0 == Global_46838[1]) && bScriptParam_0 == Global_46894[1]) && bScriptParam_0 == Global_46894[2]) && bScriptParam_0 == Global_46914[1]) && bScriptParam_0 == Global_46796[0]) == 5)
	{
		bLocal_177 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_6632)
				{
					if (bLocal_177)
					{
						Function_262(&iLocal_13, bScriptParam_0, 0);
					}
					else
					{
						Function_261(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_259())
				{
					Function_258();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_257())
				{
					Function_256();
					Function_255(&(Global_43791[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_252())
				{
					Function_250(bScriptParam_0);
					if (bLocal_177)
					{
						Function_248(&iLocal_13, Function_249(), bScriptParam_0);
						Function_247(&iLocal_13, Function_249());
					}
					Function_255(&(Global_43791[bScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_246(&uLocal_9);
				Function_244();
				Function_241(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_240() && Function_239(Global_44085[bScriptParam_09])) && Function_238(&iLocal_13))
				{
					Function_237();
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				else
				{
					iLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_177)
				{
					Function_225(&iLocal_13, bScriptParam_0, Function_249());
				}
				Function_224(bScriptParam_0);
				Function_223();
				Function_222();
				Function_255(&(Global_43791[bScriptParam_0]), 8);
				if (Function_221(&(Global_43791[bScriptParam_0]), 131072))
				{
					Function_220(&(Global_43791[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_219(bScriptParam_0);
				Function_218();
				Function_217(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_212(bScriptParam_0);
				Function_211(64);
				Function_255(&(Global_43791[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_210(Function_249(), bScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
				Function_209(&cVar0, 5.0f);
				Function_255(&(Global_43791[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_205(bScriptParam_0);
				if (Function_221(&(Global_43791[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_177)
				{
					Function_88(&iLocal_13, bScriptParam_0);
				}
				Function_51(&uLocal_9, &uLocal_416, Function_87(), bScriptParam_0);
				Function_47(&uLocal_472, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_177)
	{
		Function_37(&iLocal_13, bScriptParam_0);
	}
	Function_33(bScriptParam_0);
	Function_32();
	Function_31();
	Function_30();
	Function_22(&uLocal_9, &uLocal_416);
	Function_21(&uLocal_472);
	Function_14();
	Function_10(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_211(64);
	Function_220(&(Global_43791[bScriptParam_0]), 32);
	Function_220(&(Global_43791[bScriptParam_0]), 64);
	Function_220(&(Global_43791[bScriptParam_0]), 8);
	Function_220(&(Global_43791[bScriptParam_0]), 512);
	Function_220(&(Global_43791[bScriptParam_0]), 16);
	Function_220(&(Global_43791[bScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_209(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3CD / 973
{
	if (!Global_6623 && !Function_9(0x8000000))
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (!Function_8(Global_119936, 512))
	{
		Function_2(&Global_54076, 512, 3, 1);
		Function_2(&Global_54076, 1024, 3, 1);
	}
	return;
}

void Function_2(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x40F / 1039
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_4(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_3(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_3(char* cParam0) //Position: 0x484 / 1156
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

bool Function_4(int iParam0, var uParam1, int iParam2) //Position: 0x4BE / 1214
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
		if (Function_6(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_5(uVar0))
		{
			case 0x00000002:
				if (!Function_8(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_5(char* cParam0) //Position: 0x53A / 1338
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

int Function_6(int iParam0) //Position: 0x5DB / 1499
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_7(&iVar1, 2147483648);
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

void Function_7(int iParam0, int iParam1) //Position: 0x618 / 1560
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x62E / 1582
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_9(int iParam0) //Position: 0x641 / 1601
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(int iParam0) //Position: 0x65D / 1629
{
	int iVar0;
	
	if (!Function_13(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_11(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0x693 / 1683
{
	if (!Function_12(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_12(int iParam0) //Position: 0x6B5 / 1717
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_13(int iParam0) //Position: 0x6CB / 1739
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_14() //Position: 0x6E1 / 1761
{
	if (IS_OBJECT_VALID(&uLocal_616))
	{
		DESTROY_OBJECT(&uLocal_616);
	}
	if (IS_OBJECT_VALID(&uLocal_618))
	{
		DESTROY_OBJECT(&uLocal_618);
	}
	if (IS_ACTOR_VALID(&iLocal_624))
	{
		DESTROY_ACTOR(&iLocal_624);
	}
	if (IS_ACTOR_VALID(&iLocal_626))
	{
		DESTROY_ACTOR(&iLocal_626);
	}
	Function_17(&iLocal_594);
	if (DECOR_CHECK_EXIST(&Global_54076, "bFinishedFalseCutscene"))
	{
		DECOR_REMOVE(&Global_54076, "bFinishedFalseCutscene");
	}
	Function_16();
	Function_15();
	return;
}

void Function_15() //Position: 0x77B / 1915
{
	RELEASE_LAYOUT_REF(&iLocal_218);
	return;
}

void Function_16() //Position: 0x787 / 1927
{
	Function_17(&iLocal_178 + 8);
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_17(int iParam0) //Position: 0x79A / 1946
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_18(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_18(struct<2>[] Param0, int iParam1) //Position: 0x7C2 / 1986
{
	if (Function_20(&(Param0[iParam12]), 4))
	{
		if (Function_20(&(Param0[iParam12]), 1))
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
			Function_19(&(Param0[iParam12]), 1);
			Function_19(&(Param0[iParam12]), 2);
			Function_19(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_19(struct<13> Param0) //Position: 0x90D / 2317
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_20(struct<13> Param0) //Position: 0x92A / 2346
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21(struct<4>[] Param0) //Position: 0x948 / 2376
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
		}
		iVar0++;
	}
	return;
}

void Function_22(var uParam0, vector3[] vParam1) //Position: 0x9AD / 2477
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_29(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_28(&(vParam1[iVar03]), 4);
		}
		if (Function_29(&(vParam1[iVar03]), 8))
		{
			Function_23(0, 0, 30);
			Function_28(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_23(int iParam0, int iParam1, int iParam2) //Position: 0xA0A / 2570
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_24(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_24(int iParam0, int iParam1, bool bParam2) //Position: 0xAF4 / 2804
{
	int iVar0;
	
	Function_27(iParam0);
	Function_26(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_25();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_25() //Position: 0xC73 / 3187
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_26(int iParam0) //Position: 0xC7F / 3199
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_27(int iParam0) //Position: 0xCC9 / 3273
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

void Function_28(struct<17> Param0) //Position: 0xD0F / 3343
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_29(struct<17> Param0) //Position: 0xD2C / 3372
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_30() //Position: 0xD4A / 3402
{
	return;
}

void Function_31() //Position: 0xD50 / 3408
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	return;
}

void Function_32() //Position: 0xD67 / 3431
{
	DISABLE_CHILD_SECTOR("dlc_beh_fireplace01x");
	Function_16();
	return;
}

void Function_33(bool bParam0) //Position: 0xD8A / 3466
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_221(&(Global_43791[bParam0]), 0x20000000))
	{
		Function_220(&(Global_43791[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(&Global_43578))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			START_OBJECT_ITERATOR(&uVar0);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar2)))
				{
					DEREFERENCE_ACTOR(&uVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar2);
					TASK_CLEAR(&uVar2);
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			DESTROY_ITERATOR(&uVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_34(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
	}
	return;
}

bool Function_34(bool bParam0) //Position: 0xE44 / 3652
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_46894[2] || bParam0 != Global_46894[1]) || bParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[bParam0];
	return (((Function_36(uVar0, 0x1000000) || Function_36(uVar0, 0x2000000)) || Function_36(uVar0, 0x4000000)) || Function_35(bParam0));
}

bool Function_35(int iParam0) //Position: 0xEB7 / 3767
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_36(var uParam0, int iParam1) //Position: 0xED4 / 3796
{
	return (uParam0 && iParam1) == 0;
}

void Function_37(int iParam0, int iParam1) //Position: 0xEE1 / 3809
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_13(iParam1) || Function_36(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_40(&iParam0, &Global_11014, iParam1);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_40(&iParam0, &Global_11146, iParam1);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_40(&iParam0, &Global_11120, iParam1);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_40(&iParam0, &Global_11222, iParam1);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_40(&iParam0, &Global_11284, iParam1);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_40(&iParam0, &Global_11492, iParam1);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_40(&iParam0, &Global_11544, iParam1);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_40(&iParam0, &Global_11646, iParam1);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_40(&iParam0, &Global_11704, iParam1);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_40(&iParam0, &Global_11752, iParam1);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_40(&iParam0, &Global_11726, iParam1);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_40(&iParam0, &Global_11836, iParam1);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_40(&iParam0, &Global_11946, iParam1);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_40(&iParam0, &Global_11988, iParam1);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_40(&iParam0, &Global_12048, iParam1);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_40(&iParam0, &Global_12150, iParam1);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_40(&iParam0, &Global_11398, iParam1);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_40(&iParam0, &Global_12284, iParam1);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_40(&iParam0, &Global_12342, iParam1);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_40(&iParam0, &Global_12422, iParam1);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_40(&iParam0, &Global_12392, iParam1);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_40(&iParam0, &Global_12760, iParam1);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_40(&iParam0, &Global_12714, iParam1);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_40(&iParam0, &Global_12644, iParam1);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_40(&iParam0, &Global_12488, iParam1);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_40(&iParam0, &Global_12482, iParam1);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", 0);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_33(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_6623)
	{
		Function_38(iParam1);
	}
	return;
}

void Function_38(int iParam0) //Position: 0x1248 / 4680
{
	var uVar0;
	
	if (Global_6623 || Function_9(0x8000000))
	{
		return;
	}
	uVar0 = Function_39(iParam0);
	if (Function_34(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

int Function_39(int iParam0) //Position: 0x12AF / 4783
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_46838[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46894[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46926[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46850[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46850[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46850[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46866[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46894[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46760[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46760[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46760[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_46796[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46796[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46838[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return &iVar0;
}

void Function_40(vector3 vParam0) //Position: 0x15F7 / 5623
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (!IS_ACTOR_VALID(&uVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(&uVar1))
		{
		}
		else
		{
			Function_46(&(Param1[iVar02]), 4);
		}
		if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
		{
			DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
		}
		iVar0++;
	}
	if (!Function_34(iParam2))
	{
		Global_21684[&vParam0 + 6247].f_32 = 0.0f;
		if (!Function_8(Global_119934, 0x4000000))
		{
			Function_2(&Global_54076, 0x4000000, 1, 0);
		}
	}
	else if (Function_36(&vParam0 + 608, 32))
	{
		if (!Function_8(Global_119934, 8388608))
		{
			Function_2(&Global_54076, 8388608, 1, 0);
		}
	}
	else if (!Function_8(Global_119934, 4194304))
	{
		Function_2(&Global_54076, 4194304, 1, 0);
	}
	Function_44(&vParam0, 0, 0);
	DESTROY_OBJECT(&vParam0);
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRifles"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumPistols"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	Function_17(&vParam0 + 384);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_41(iParam2, Function_34(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_9(1));
	return;
}

void Function_41(int iParam0, bool bParam1) //Position: 0x18D7 / 6359
{
	if (!Function_13(iParam0))
	{
		return;
	}
	if (bParam1 && Function_43("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_46760[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[4])
	{
	}
	else if (iParam0 == Global_46816[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_42(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46838[1])
	{
	}
	else if (iParam0 == Global_46838[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[1])
	{
	}
	else if (iParam0 == Global_46894[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[0])
	{
	}
	else if (iParam0 == Global_46926[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[1])
	{
	}
	return;
}

bool Function_42(int iParam0) //Position: 0x202D / 8237
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_43(int iParam0) //Position: 0x2042 / 8258
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_44(var uParam0, bool bParam1, bool bParam2) //Position: 0x2064 / 8292
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_45(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
			iVar0++;
		}
	}
	return;
}

bool Function_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x20ED / 8429
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_46(var uParam0, int iParam1) //Position: 0x210D / 8461
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_47(struct<4>[] Param0, bool bParam1) //Position: 0x2127 / 8487
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar6 = false;
	if (Global_46721 > Param0)
	{
		Global_46721 = 0;
	}
	iVar0 = Global_46721;
	while (iVar0 < Function_50((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_49(&(Param0[iVar04]), 16384);
				uVar8 = Param0[iVar04].f_12;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(&uVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(&uVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (&bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_48(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_49(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(&Param0[iVar04] + 24))
							{
								if (IS_PERS_CHAR_ALIVE(&Param0[iVar04] + 24))
								{
									uVar10 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar04] + 24);
									if (IS_ACTOR_VALID(&uVar10))
									{
										if (IS_ACTOR_IN_VOLUME(&uVar10, &Param0[iVar04] + 16))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_48(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
						else
						{
							Function_48(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_49(&(Param0[iVar04]), 1);
						uVar8 = Param0[iVar04].f_12;
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(&uVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_48(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_48(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(&uVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_49(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_49(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			bVar3 = IS_DOOR_LOCKED(&uVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_6630)
				{
					if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
							{
								SET_DOOR_LOCK(&uVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(&uVar7, 1);
				}
			}
			else if (Global_6630)
			{
				if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_49(&(Param0[iVar04]), 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(&uVar7, 0);
			}
		}
		iVar0++;
	}
	Global_46721 = iVar0;
	return;
}

void Function_48(struct<13> Param0) //Position: 0x2548 / 9544
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_49(struct<13> Param0) //Position: 0x255B / 9563
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_50(int iParam0, int iParam1) //Position: 0x2578 / 9592
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_51(vector3 vParam0) //Position: 0x258A / 9610
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_9(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_52(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_6630)
	{
		vParam0.f_8 = 1;
	}
	else if (Global_6629)
	{
		vParam0.f_8 = 1;
	}
	else if (vParam0.z)
	{
		vParam0.f_8 = 0;
	}
}

bool Function_52(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x2614 / 9748
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(&vParam0))
	{
		return 0;
	}
	Function_220(&(Global_43791[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(&vParam0 + 8, "locflag");
	if (bVar0 != 0 && vParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (vParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_29(&vParam0, 2))
					{
						if (!Function_29(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_84(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_83(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_29(&vParam0, 2))
				{
					if (Function_29(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_23(0, 0, 0);
						}
						else
						{
							Function_23(0, 0, 30);
						}
						Function_28(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_29(&vParam0, 2))
					{
						if (!Function_29(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_83(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_29(&vParam0, 2))
				{
					if (Function_29(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_28(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_13(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_81(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_29(&vParam0, 2))
					{
						if (!Function_29(&vParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
							{
								if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime");
								}
							}
							if (bVar2)
							{
								Function_83(&vParam0, 16);
								Function_73(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_29(&vParam0, 2))
				{
					if (Function_29(&vParam0, 16))
					{
						Function_28(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_29(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_29(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_83(&vParam0, 2);
			}
			else
			{
				Function_28(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_13(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_221(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_29(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_72(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_83(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_13(iParam2))
					{
						Function_71(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_53(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_53(int iParam0) //Position: 0x2A6C / 10860
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_221(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_255(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_58(473, 1, 0, 0);
		iVar0 = Function_57(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_58(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_58(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_58(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_56(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_56(7, 30);
	}
	if (Function_55(473) <= Function_54(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_54(int iParam0) //Position: 0x2B5D / 11101
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_55(int iParam0) //Position: 0x2B9A / 11162
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_56(int iParam0, int iParam1) //Position: 0x2BD3 / 11219
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iVar0);
	return;
	return;
}

var Function_57(int iParam0) //Position: 0x2C3D / 11325
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_13(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

int Function_58(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2C95 / 11413
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_59(iParam0);
	return 1;
}

void Function_59(bool bParam0) //Position: 0x2EBD / 11965
{
	switch (bParam0)
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

void Function_60(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2F5B / 12123
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_54(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_55(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_55(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_65(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_61(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_61() //Position: 0x3599 / 13721
{
	int iVar0;
	
	return &iVar0;
}

var Function_62(int iParam0) //Position: 0x35A2 / 13730
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x35B3 / 13747
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0) //Position: 0x36AA / 13994
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x36C5 / 14021
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_50(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x372C / 14124
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x373E / 14142
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x3872 / 14450
{
	return Global_55480[iParam016].f_96;
}

void Function_69(int iParam0) //Position: 0x3881 / 14465
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

int Function_70(int iParam0, float fParam1, bool bParam2) //Position: 0x3A1B / 14875
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_71(var uParam0, int iParam1) //Position: 0x3C5F / 15455
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(int iParam0, var uParam1, int iParam2) //Position: 0x3C6C / 15468
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x3C96 / 15510
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_80(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_79(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_76(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_74();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_74() //Position: 0x3F49 / 16201
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_75(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_75(var uParam0, int iParam1) //Position: 0x3FBC / 16316
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_76(bool bParam0) //Position: 0x3FF2 / 16370
{
	if (Function_81(256))
	{
		return 0;
	}
	if (Function_81(262144))
	{
		return 0;
	}
	if (Function_78())
	{
		return 0;
	}
	if (!Function_81(1))
	{
		return 0;
	}
	if (!Function_81(4096))
	{
		return 0;
	}
	if (bParam0 && Function_77(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_81(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_77(int iParam0) //Position: 0x4068 / 16488
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x4079 / 16505
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x4092 / 16530
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x40A8 / 16552
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x40BD / 16573
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x40DB / 16603
{
	uParam0 = &uParam0;
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
	if (Global_6636 && uParam2)
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
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_83(struct<17> Param0) //Position: 0x418A / 16778
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x419D / 16797
{
	int iVar0;
	int iVar1;
	
	Function_27(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_85(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_24(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x4217 / 16919
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_27(iParam0);
	Function_26(&uVar0);
	PRINTNL();
	Function_24(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x4240 / 16960
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam0 + 8))
	{
		return 0;
	}
	return 1;
}

var Function_87() //Position: 0x4260 / 16992
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(struct<82> Param0) //Position: 0x4275 / 17013
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	char* cVar5[32];
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<5> Var24;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(&Global_54076, "QM_TriggerAttack");
		Function_7(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_200(0, bParam1, 3);
		}
		if (!Function_36(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (bParam1 != Global_46914[1] || HUD_IS_FADED())
	{
		if (!Function_36(&Param0 + 608, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_198(1, 0));
			Function_197(&Param0 + 608, 0x20000000);
		}
		return;
	}
	if (Function_36(&Param0 + 608, 16))
	{
		Function_196(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_36(&Param0 + 608, 4))
	{
		return;
	}
	if (Global_6623 && !Function_36(&Param0 + 608, 4))
	{
		Function_197(&Param0 + 608, 4);
		Function_37(&Param0, bParam1);
		DECOR_SET_FLOAT(&Global_44085[bParam19] + 8, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_33(bParam1);
		return;
	}
	fVar0 = Function_192(Function_193(bParam1));
	fVar1 = Function_191(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (&Param0 + 616 == 4294967295)
	{
		*(&Param0 + 616) = Function_200(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			uVar4 = &Param0 + 8[iVar35];
			if (IS_ACTOR_ALIVE(&uVar4))
			{
				Function_190(&Param0 + 8[iVar35]);
			}
			iVar3++;
		}
		Function_189(&Param0);
		*(&Param0 + 376) = 7;
		return;
	}
	if (Function_188(Function_193(bParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_36(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[bParam19] + 32, 32);
			SET_MISSION_INFO(&cVar5, "");
			if (Function_36(&Param0 + 608, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_185(&Param0, 0);
				Function_190(&Param0 + 336);
				iVar13 = 0;
				while (StackVal < (iVar13 - 1))
				{
					Function_190(&Param0 + 8[iVar135]);
					iVar13++;
				}
				Function_197(&Param0 + 608, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_196(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0,5f);
				Function_184(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(&Global_54076, "nDecayRate", 3);
				*(&Param0 + 376) = 5;
			}
			else
			{
				Function_182();
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(&Global_54076, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(&Global_54076, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (&Param0 + 376 <= 1 && &Param0 + 376 >= 6)
		{
			if (&Param0 + 376 >= 1)
			{
				Function_177(&Param0, bParam1, fVar2);
			}
			if (!Function_36(&Param0 + 608, 131072))
			{
				if (&Param0 + 376 == 6 && &Param0 + 376 < 1)
				{
					if ((Global_6629 && !Function_36(&Param0 + 608, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_197(&Param0 + 608, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar14 = Function_191(bParam1);
						fVar15 = (fVar14 % 10.0f);
						fVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar16));
						UI_REFRESH("ZMeter");
					}
					if (((Function_36(&Param0 + 608, 32768) && !DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && &Param0 + 376 > 5)
					{
						Function_189(&Param0);
					}
				}
			}
		}
	}
	Function_175(&Param0, bParam1);
	if (Function_36(&Param0 + 608, 1024))
	{
		Function_174(&Param0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_99146)
	{
		if (!Function_36(&Param0 + 608, 16384))
		{
			Function_197(&Param0 + 608, 16384);
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 0);
				iVar17++;
			}
		}
	}
	else if (Function_36(&Param0 + 608, 16384))
	{
		Function_7(&Param0 + 608, 16384);
		iVar17 = 0;
		while (StackVal < (iVar17 - 1))
		{
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 1);
			iVar17++;
		}
	}
	if (Function_36(&Param0 + 608, 262144))
	{
		if (Function_238(&Param0))
		{
			Function_7(&Param0 + 608, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, bParam1, Param0);
			if (!Function_34(bParam1))
			{
				if (!Function_36(&Param0 + 608, 8))
				{
					Function_197(&Param0 + 608, 8);
					Function_171();
				}
			}
		}
	}
	if (Function_36(&Param0 + 608, 524288))
	{
		if (Function_171())
		{
			Function_197(&Param0 + 608, 8);
			Function_7(&Param0 + 608, 524288);
		}
	}
	switch (&Param0 + 376)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_8(Global_119934, 65536) || !Global_6606)) && Global_6629) && !Global_6628)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
				{
					DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
				}
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				if (Function_34(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_261(bParam1, 1);
					Function_157(bParam1);
					Function_195(0, 4294967295);
					Function_196(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_36(&Param0 + 608, 1))
					{
						Function_156(&Param0, bParam1);
						Function_155("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						*(&Param0 + 376) = 2;
					}
					else
					{
						*(&Param0 + 376) = 4;
					}
					Function_152("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_261(bParam1, 0);
					Function_157(bParam1);
					Function_197(&Param0 + 608, 2);
					Function_195(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					*(&Param0 + 632) = 1000.0f;
					*(&Param0 + 376) = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_146(&Param0 + 336, 1, &Param0 + 608))
			{
				SET_ANIM_SET_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo", 0);
				iVar18 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&Param0 + 336));
				if (((iVar18 != 41 || iVar18 != 42) || iVar18 != 43) || iVar18 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_114(&Param0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(&Param0 + 336, "GET_US_AMMO_P", &Global_54076, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				*(&Param0 + 376) = 3;
			}
			break;
		
		case 0x00000003:
			bVar19 = false;
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				uVar20 = &Param0 + 8[iVar175];
				if (IS_ACTOR_ALIVE(&uVar20))
				{
					if (Function_36((&Param0 + 8[iVar175])->f_32, 2))
					{
						if (DECOR_CHECK_EXIST(&uVar20, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(&uVar20, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&uVar20, "nUC_NoAmmo"));
								DECOR_REMOVE(&uVar20, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(&uVar20, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_146(&Param0 + 8[iVar175], 0, &Param0 + 8[iVar175] + 32))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
							iVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_103(&Param0 + 8[iVar175], iVar21);
							Function_7(&Param0 + 8[iVar175] + 32, 2);
							Function_197(&Param0 + 8[iVar175] + 32, 16);
						}
						bVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_36((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_7(&Param0 + 8[iVar175] + 32, 16);
						AI_CLEAR_DONT_HARM_ACTOR(&uVar20);
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						SET_MOVER_FROZEN(&uVar20, 0);
						RESET_ANIM_SET_FOR_ACTOR(&uVar20, 1);
						uVar22 = Vector(0.0f, 0.0f, 0.0f);
						Var24 = Vector(0.0f, 0.0f, 0.0f);
						GET_OBJECT_POSITION(&Param0 + 8[iVar175] + 8, &uVar22);
						GET_OBJECT_ORIENTATION(&Param0 + 8[iVar175] + 8, &Var24);
						TASK_PRIORITY_SET(&uVar20, true);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar20, &uVar22, -1f);
						strcpy(&cVar26, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(&uVar20))
						{
							stradd(&cVar26, "M", 64);
						}
						else
						{
							stradd(&cVar26, "F", 64);
						}
						if (Function_102(&uVar20))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "THANKS_FOR_AMMO_P", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "nTHANK_YOU", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						Param0.f_640 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(&uVar20))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
					}
					if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
					{
						DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
					}
				}
				iVar17++;
			}
			if (Global_47151[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar19);
				PRINTNL();
			}
			if (bVar19 == 0)
			{
				*(&Param0 + 376) = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(&Global_54076, "bNoSurvivorHelp", 1);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "nDecayRate"))
			{
				bVar42 = DECOR_GET_INT(&Global_54076, "nDecayRate");
				if (bVar42 == 3)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,5f);
				}
				else if (bVar42 == 2)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,75f);
				}
				else if (bVar42 == 1)
				{
					DECOR_REMOVE(&Global_54076, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_184(1);
			if (Function_97(&Param0))
			{
				DECOR_SET_FLOAT(&Global_54076, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_96(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				*(&Param0 + 376) = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 600) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_196(bParam1, 300.0f);
			}
			else
			{
				Function_196(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_36(&Param0 + 608, 8))
			{
				Function_197(&Param0 + 608, 8);
				Function_171();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
			{
				DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
			}
			Function_95(bParam1);
			Function_94(&Param0);
			Function_185(&Param0, 1);
			Function_33(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_200(0, bParam1, 3);
			Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_197(&Param0 + 608, 512);
			if (!Function_36(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_91(Function_193(bParam1));
				Function_58(660, bVar43, 0, 0);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Function_262(&Param0, bParam1, 1);
			Function_248(&Param0, &Global_46715, bParam1);
			Function_247(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_238(&Param0))
			{
				if (!bParam1 != Global_46914[0])
				{
					Function_225(&Param0, bParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_225(&Param0, bParam1, &Global_46715);
					DECOR_SET_FLOAT(&Global_54076, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(&Global_54076, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns");
					*(&Param0 + 376) = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(&Global_54076, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(&Global_54076, "Special_BLK_Ready");
				Function_114(&Param0, bParam1);
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				Function_261(bParam1, 1);
				Function_197(&Global_21684[Function_200(111, 111, 5)7] + 20, 4);
				Function_157(bParam1);
				Function_195(0, 4294967295);
				Function_196(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], 0);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], 0);
				*(&Param0 + 376) = 3;
			}
			break;
	}
	iVar17 = 0;
	while (StackVal < (iVar17 - 1))
	{
		iVar44 = &Param0 + 8[iVar175];
		if (IS_ACTOR_VALID(&iVar44))
		{
			if (!IS_ACTOR_ALIVE(&iVar44))
			{
				if (!DECOR_CHECK_EXIST(&iVar44, "DeathTallied"))
				{
					DECOR_SET_BOOL(&iVar44, "DeathTallied", 1);
					Global_21684[&Param0 + 6247].f_28 = (Global_21684[&Param0 + 6247].f_28 + 1.0f);
					if (Function_36(Global_21684[&Param0 + 6247].f_24, 1))
					{
						Function_90(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (DECOR_CHECK_EXIST(&Param0 + 8[iVar175], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&Param0 + 8[iVar175], "nUC_NoAmmo"));
				}
				if (&iVar44 == &Param0 + 336)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
					}
					if (&Param0 + 376 <= 7)
					{
						if ((!GET_LAST_ATTACKER(&iVar44) != &Global_54076 && &Param0 + 376 != 2) && !Function_36(&Param0 + 608, 8192))
						{
							Function_197(&Param0 + 608, 8192);
							Function_152("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar45 = 0;
							while (StackVal < (iVar45 - 1))
							{
								Function_190(&Param0 + 8[iVar455]);
								SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar455], 1);
								iVar45++;
							}
							if (&Param0 + 376 <= 4)
							{
								*(&Param0 + 376) = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
				{
					DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
				}
			}
			if (GET_LAST_ATTACKER(&iVar44) != &Global_54076 && !Function_36(&Param0 + 608, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
				}
				iVar46 = 0;
				while (StackVal < (iVar46 - 1))
				{
					Function_190(&Param0 + 8[iVar465]);
					SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar465], 1);
					MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8[iVar465], &Global_54076);
					iVar46++;
				}
				if (&Param0 + 376 <= 7)
				{
					if (&Param0 + 376 <= 5)
					{
						*(&Param0 + 376) = 4;
					}
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_200(0, bParam1, 3);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			}
		}
		iVar17++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	uVar47 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar47))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar47)), "footlock"))
		{
			Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar47, Param0);
		}
	}
	return;
}

void Function_89(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, bool bParam80, var uParam81, char* cParam82) //Position: 0x5757 / 22359
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	uVar0 = GET_OBJECT_FROM_GRINGO(&uParam0);
	uVar1 = GET_OBJECT_NAME(&uVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
	uVar3 = STRING_GET_TOKEN((iVar2 - 2));
	fVar4 = TO_FLOAT(STRING_TO_INT(&uVar3));
	Function_197(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, fVar4)));
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x57AE / 22446
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
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_91(int iParam0) //Position: 0x59AB / 22955
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_92(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_12760[iVar102];
					break;
			}
			if (!Function_36(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int[] iParam0) //Position: 0x5B95 / 23445
{
	iParam1 = iParam1;
	if (iParam1 == Global_46760[0])
	{
		iParam0[0] = 65;
		iParam0[1] = 68;
		iParam0[2] = 435;
		iParam0[3] = 428;
		iParam0[4] = 107;
		iParam0[5] = 140;
		return 6;
	}
	if (iParam1 == Global_46914[0])
	{
		iParam0[0] = 89;
		iParam0[1] = 95;
		iParam0[2] = 146;
		return 3;
	}
	if (iParam1 == Global_46816[1])
	{
		iParam0[0] = 56;
		iParam0[1] = 24;
		iParam0[2] = 138;
		iParam0[3] = 139;
		return 4;
	}
	if (iParam1 == Global_46816[0])
	{
		iParam0[0] = 54;
		iParam0[1] = 420;
		iParam0[2] = 38;
		iParam0[3] = 213;
		iParam0[4] = 55;
		return 5;
	}
	if (iParam1 == Global_46866[0])
	{
		iParam0[0] = 276;
		iParam0[1] = 237;
		iParam0[2] = 290;
		iParam0[3] = 460;
		iParam0[4] = 269;
		iParam0[5] = 283;
		return 6;
	}
	if (iParam1 == Global_46850[0])
	{
		iParam0[0] = 289;
		iParam0[1] = 392;
		iParam0[2] = 268;
		iParam0[3] = 266;
		iParam0[4] = 382;
		iParam0[5] = 245;
		iParam0[6] = 304;
		return 7;
	}
	if (iParam1 == Global_46760[2])
	{
		iParam0[0] = 487;
		iParam0[1] = 491;
		iParam0[2] = 493;
		return 3;
	}
	if (iParam1 == Global_46894[3])
	{
		iParam0[0] = 379;
		iParam0[1] = 380;
		iParam0[2] = 391;
		iParam0[3] = 455;
		return 4;
	}
	if (iParam1 == Global_46850[2])
	{
		iParam0[0] = 410;
		iParam0[1] = 411;
		iParam0[2] = 465;
		return 3;
	}
	if (iParam1 == Global_46760[1])
	{
		iParam0[0] = 152;
		iParam0[1] = 176;
		return 2;
	}
	if (iParam1 == Global_46796[1])
	{
		iParam0[0] = 133;
		iParam0[1] = 144;
		return 2;
	}
	if (iParam1 == Global_46926[2])
	{
		iParam0[0] = 29;
		iParam0[1] = 30;
		iParam0[2] = 28;
		return 3;
	}
	if (iParam1 == Global_46850[1])
	{
		iParam0[0] = 516;
		iParam0[1] = 529;
		return 2;
	}
	if (iParam1 == Global_46926[1])
	{
		iParam0[0] = 169;
		iParam0[1] = 39;
		iParam0[2] = 149;
		return 3;
	}
	if (iParam1 == Global_46866[1])
	{
		iParam0[0] = 62;
		iParam0[1] = 242;
		iParam0[2] = 244;
		iParam0[3] = 296;
		iParam0[4] = 297;
		iParam0[5] = 260;
		iParam0[6] = 295;
		iParam0[7] = 141;
		return 8;
	}
	if (iParam1 == Global_46796[3])
	{
		iParam0[0] = 505;
		iParam0[1] = 506;
		iParam0[2] = 507;
		iParam0[3] = 508;
		iParam0[4] = 510;
		iParam0[5] = 509;
		return 6;
	}
	if (iParam1 == Global_46796[4])
	{
		iParam0[0] = 400;
		return 1;
	}
	if (iParam1 == Global_46894[2])
	{
		iParam0[0] = 281;
		iParam0[1] = 282;
		iParam0[2] = 456;
		return 3;
	}
	if (iParam1 == Global_46894[0])
	{
		iParam0[0] = 396;
		iParam0[1] = 462;
		iParam0[2] = 15;
		iParam0[3] = 11;
		iParam0[4] = 461;
		return 5;
	}
	if (iParam1 == Global_46866[2])
	{
		iParam0[0] = 238;
		iParam0[1] = 530;
		iParam0[2] = 294;
		return 3;
	}
	if (iParam1 == Global_46926[0])
	{
		iParam0[0] = 404;
		return 1;
	}
	if (iParam1 == Global_46838[0])
	{
		iParam0[0] = 168;
		iParam0[1] = 176;
		iParam0[2] = 177;
		return 3;
	}
	return 0;
}

var Function_93(int iParam0) //Position: 0x5FC4 / 24516
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

void Function_94(vector3 vParam0) //Position: 0x614A / 24906
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 8[iVar05] + 16))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 8[iVar05] + 16);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 336 + 16);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x61A4 / 24996
{
	var uVar0;
	
	if (Global_6623 || Function_9(0x8000000))
	{
		return;
	}
	uVar0 = Function_39(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_96(int iParam0) //Position: 0x61DE / 25054
{
	int iVar0;
	
	if (Function_36(iParam0, 1) && Function_36(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_97(int iParam0) //Position: 0x6212 / 25106
{
	return Function_98(&iParam0 + 600);
}

int Function_98(int iParam0) //Position: 0x6221 / 25121
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	var uVar11;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_61()));
	}
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_61()));
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	ITERATE_IN_VOLUME(&uVar1, &Global_44085[Global_437899] + 8);
	START_OBJECT_ITERATOR(&uVar1);
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		uVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
		if ((!IS_ACTOR_HORSE(&uVar3) && !IS_ACTOR_HOGTIED(&uVar3)) && IS_ACTOR_ALIVE(&uVar3))
		{
			iVar4 = GET_ACTOR_ENUM(&uVar3);
			if ((iVar4 > 1128 || iVar4 < 1130) && iVar4 == 1247)
			{
				Var5 = Vector(0.0f, 0.0f, 0.0f);
				GET_POSITION(&uVar3, &Var5);
				iVar7 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar8 = (Function_36(iVar7, 1024) && iVar7 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
					iVar9 = SQUAD_GET_SIZE(&iParam0);
					if (iVar9 >= 6)
					{
						if (Function_100(StackVal, &uVar3, Global_54078) < 20.0f && !Function_45(&uVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar8 = true;
						}
					}
					if (!bVar8)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar8 = true;
						}
					}
				}
				if (bVar8)
				{
					SQUAD_JOIN(&uVar3, &uVar0);
				}
				else
				{
					SQUAD_JOIN(&uVar3, &iParam0);
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	if (SQUAD_GET_SIZE(&iParam0) > 4)
	{
		Function_99(&uVar0);
		DESTROY_OBJECT(&uVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 2560);
		Function_255(&(Global_43791[Global_43789]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iVar10 = 0;
		while (iVar10 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar10);
			REFERENCE_ACTOR(&uVar11);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uVar11, &Global_44085[Global_437899] + 8, 1, 1);
			TASK_PRIORITY_SET(&uVar11, false);
			TASK_GO_NEAR_OBJECT(&uVar11, &Global_54076, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(&uVar11))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar11, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(&uVar11, 322, 0, 2, 0);
			iVar10++;
		}
		return 1;
	}
	DESTROY_OBJECT(&uVar0);
	DESTROY_OBJECT(&iParam0);
	return 0;
}

void Function_99(int iParam0) //Position: 0x6478 / 25720
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

float Function_100(int iParam0, struct<2> Param1) //Position: 0x64CF / 25807
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_101(&iParam0);
		Var0 = Function_101(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_101(int iParam0) //Position: 0x6546 / 25926
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_102(int iParam0) //Position: 0x65B2 / 26034
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 9 || iVar0 != 15) || iVar0 != 24) || iVar0 != 420) || iVar0 != 28) || iVar0 != 29) || iVar0 != 30) || iVar0 != 36) || iVar0 != 38) || iVar0 != 39) || iVar0 != 54) || iVar0 != 55) || iVar0 != 56) || iVar0 != 65) || iVar0 != 68) || iVar0 != 404) || iVar0 != 400) || iVar0 != 89) || iVar0 != 95) || iVar0 != 96) || iVar0 != 107) || iVar0 != 139) || iVar0 != 140) || iVar0 != 141) || iVar0 != 144) || iVar0 != 146) || iVar0 != 149) || iVar0 != 152) || iVar0 != 168) || iVar0 != 169) || iVar0 != 176) || iVar0 != 177) || iVar0 != 213) || iVar0 != 509) || iVar0 != 493) || iVar0 != 529) || iVar0 != 237) || iVar0 != 238) || iVar0 != 245) || iVar0 != 266) || iVar0 != 268) || iVar0 != 269) || iVar0 != 276) || iVar0 != 283) || iVar0 != 289) || iVar0 != 294) || iVar0 != 304) || iVar0 != 428) || iVar0 != 435) || iVar0 != 461) || iVar0 != 465) || iVar0 != 455) || iVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x6723 / 26403
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	var uVar8;
	int iVar9;
	int iVar10;
	
	Function_113();
	Function_112();
	GET_POSITION(&iParam0, &Var0);
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar2, "Ammo");
	ITERATE_IN_SPHERE(&uVar2, Var0, 2.0f);
	uVar5 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar3 = &uVar5;
	}
	uVar5 = OBJECT_ITERATOR_NEXT(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar4 = &uVar5;
	}
	DESTROY_ITERATOR(&uVar2);
	Function_58(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(&uVar3) || !IS_OBJECT_VALID(&uVar4))
	{
		SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_111(bParam1, 5.0f, 1);
		Function_190(&iParam0);
		Function_110(Global_43789, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(&uVar3, &Var6);
	uVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, uVar8, 1);
	SET_MOVER_FROZEN(&iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "DLC_give_ammo", 1);
	if (!Function_109(StackVal, &iParam0, Var6))
	{
		iVar9 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar9 != 41 || iVar9 != 42) || iVar9 != 43) || iVar9 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(&Global_54076) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_STAND_STILL(&iParam0, 3.0f, 0, 0);
	Function_104(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_111(bParam1, 5.0f, 1);
	Function_190(&iParam0);
	Function_110(Global_43789, 10.0f);
	return;
}

var Function_104(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6A1D / 27165
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_61(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_105(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x6AAB / 27307
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_108(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_107(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_106(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 1,6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 1,5f, 1, 0);
	return;
}

void Function_106(int iParam0, int iParam1) //Position: 0x6B14 / 27412
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,402189f, 1,415817f, -0,851866f), Vector(6,384388f, -147,5115f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_107(int iParam0, var uParam1) //Position: 0x6BA5 / 27557
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,421349f, 1,41818f, -0,861325f), Vector(-6,658212f, -134,564f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x6C36 / 27702
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,442921f, 1,420794f, -0,871029f), Vector(4,479696f, -143,4034f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

bool Function_109(var uParam0, struct<2> Param1) //Position: 0x6CCC / 27852
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_110(int iParam0, float fParam1) //Position: 0x6D07 / 27911
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", fVar0);
	return;
}

void Function_111(bool bParam0, float fParam1, bool bParam2) //Position: 0x6D4B / 27979
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar0);
	if (fVar1 <= fParam1)
	{
		fVar3 = fParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (fParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(&Global_54076, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, bParam0, (fVar1 - fVar3), 0);
	}
	if (&bParam2)
	{
		bVar5 = FLOOR(fParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_112() //Position: 0x6E8F / 28303
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x6EA1 / 28321
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x6EB6 / 28342
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", 1);
	Function_117(StackVal, Global_54078, 1, &iParam0 + 336, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 336 + 16);
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", &(uVar0[0]), 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", &(uVar0[0]), &(uVar0[1]), 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), 0, 2, 0, 0);
	}
	Function_155("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_36(&iParam0 + 608, 8))
	{
		if (Function_171())
		{
			Function_197(&iParam0 + 608, 8);
		}
		else
		{
			Function_197(&iParam0 + 608, 524288);
		}
	}
	Function_197(&iParam0 + 608, 32);
	*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	Function_197(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_115(&iParam0);
	return;
}

void Function_115(vector3 vParam0) //Position: 0x71BE / 29118
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		iVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			if (!DECOR_CHECK_EXIST(&iVar1, "PreSaved") || (DECOR_CHECK_EXIST(&iVar1, "PreSaved") && DECOR_CHECK_EXIST(&iVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar1));
				}
				uVar2 = ADD_BLIP_FOR_ACTOR(&iVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(&uVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar2, 1);
				if (Global_43789 == Global_46914[0])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 2,5f);
				}
				else if (Global_43789 == Global_46816[1])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 1,75f);
				}
				UNK_0x1E98AFEC(&uVar2, 1);
				if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
				{
					DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
				}
				*(&vParam0 + 8[iVar05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &vParam0 + 8[iVar05] + 24, &iVar1, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_116(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, bVar3, 1) <= 5.0f)
				{
					*(&vParam0 + 8[iVar05] + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(&iVar1, "nUC_NoAmmo"))
				{
					uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
					DECOR_SET_INT(&iVar1, "nUC_NoAmmo", &uVar5);
				}
				Function_197(&vParam0 + 8[iVar05] + 32, 2);
				uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iVar1, Function_61(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uVar6, &iVar1, Function_61(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar7 = ADD_BLIP_FOR_OBJECT(&uVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(&uVar7, 1);
				DECOR_SET_INT(&iVar1, "PauseMapBlip", &uVar7);
				SET_BLIP_NAME(&uVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar7, 1);
			}
			else
			{
				Function_110(Global_43789, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_116(int iParam0) //Position: 0x748C / 29836
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(&iParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_117(struct<2> Param0, bool bParam2, int iParam3, bool bParam4) //Position: 0x7550 / 30032
{
	bool bVar0;
	var uVar1;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	var uVar10;
	int iVar12;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	int iVar19;
	var uVar20;
	
	if (Function_145(StackVal, Param0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	bVar0 = false;
	Global_53524.f_16 = 0;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	if (&bParam2)
	{
		Global_53524.f_24 = Global_43789;
		if (IS_ACTOR_VALID(&iParam3))
		{
			Function_144(&iParam3);
			uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_144(&iParam3), StackVal);
			VNORMALIZE(&uVar1);
			Global_53524.f_12 = UNK_0x9C40E671(&uVar1);
		}
		else
		{
			Global_53524.f_12 = Function_143(&Global_54076);
		}
		Global_53524 = Param0;
		if (IS_PS3())
		{
			Global_53524.f_4 = (StackVal + 0,1f);
		}
		bVar0 = true;
	}
	else if (&bParam4)
	{
		Global_53524.f_24 = Global_43789;
		if (!Function_142(&Global_53524, &Global_53524 + 12, &uVar3))
		{
			GET_VOLUME_CENTER(&uVar3, &Var4);
			if (Function_138(StackVal, Var4, &uVar3, &Var6, &Var8, 1))
			{
				uVar10 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var8, StackVal);
				VNORMALIZE(&uVar10);
				Global_53524.f_12 = UNK_0x9C40E671(&uVar10);
				Global_53524 = Var6;
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_53524 + 76)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_142(&Global_53524, &Global_53524 + 12, &iVar12))
	{
		Global_53524.f_24 = Function_136(StackVal, Param0, 0.0f, 1);
		if (Function_13(Global_53524.f_24))
		{
			iVar12 = &Global_44085[Global_53524.f_249] + 8;
			GET_VOLUME_CENTER(&iVar12, &Var13);
			if (Function_138(StackVal, Var13, &iVar12, &Var15, &Var17, 0))
			{
				iVar19 = Function_135(StackVal, Var15, 1);
				if ((StackVal && ((iVar19 == Global_46746[0] && iVar19 == Global_46746[2]) && iVar19 == Global_46746[1]) != 3) && Global_43787 != 1)
				{
					Global_53524 = Vector(-3515,646f, 19,234f, 4205,955f);
					Global_53524.f_12 = 225,789f;
				}
				else if (Global_53524.f_24 == Global_46914[1])
				{
					Global_53524 = Vector(-66,023f, 116,861f, 1411,445f);
					Global_53524.f_12 = 64,688f;
				}
				else if (Global_53524.f_24 == Global_46796[3])
				{
					Global_53524 = Vector(-4504,957f, 20,121f, 3406,793f);
					Global_53524.f_12 = 324,417f;
				}
				else if (Global_53524.f_24 == Global_46894[1])
				{
					Global_53524 = Vector(-746,495f, 67,416f, 3414,803f);
					Global_53524.f_12 = 316,104f;
				}
				else if (Global_53524.f_24 == Global_46894[3])
				{
					Global_53524 = Vector(451,281f, 78,306f, 3474,125f);
					Global_53524.f_12 = 79,05f;
				}
				else
				{
					uVar20 = Vector(StackVal, StackVal, StackVal) - Vector(Var15, Var17, StackVal);
					VNORMALIZE(&uVar20);
					Global_53524.f_12 = UNK_0x9C40E671(&uVar20);
					Global_53524 = Var15;
				}
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else if (Global_43789 == Global_46926[0])
			{
				Global_53524 = Vector(-737,414f, 178,366f, 782,796f);
				Global_53524.f_12 = 117,832f;
				Global_53524.f_24 = Global_46926[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_53524.f_24 = Global_43789;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_118();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_118() //Position: 0x795D / 31069
{
	Function_131();
	Function_130();
	Function_130();
	Function_129();
	Function_129();
	Function_128();
	Function_128();
	Function_125(0);
	Function_125(0);
	Function_123();
	Function_122();
	Function_121();
	Function_120();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_119();
	return;
}

void Function_119() //Position: 0x79A8 / 31144
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

void Function_120() //Position: 0x7AAE / 31406
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

void Function_121() //Position: 0x7AE1 / 31457
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

void Function_122() //Position: 0x7C74 / 31860
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

void Function_123() //Position: 0x7E2D / 32301
{
	Function_124(&Global_42918, 1, 0);
	return;
}

void Function_124(struct<2317> Param0) //Position: 0x7E3B / 32315
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_87();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
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

struct<8> Function_125(int iParam0) //Position: 0x8059 / 32857
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
					iVar2 = ((Function_127((50 + iVar4)) + Function_127((183 + iVar4))) + Function_127((90 + iVar4)));
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
	Function_126(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x8100 / 33024
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
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (&bParam2)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_127(int iParam0) //Position: 0x839C / 33692
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<8> Function_128() //Position: 0x83DD / 33757
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
		iVar2 = ((Function_127((50 + iVar3) + 15) + Function_127((183 + iVar3) + 15)) + Function_127((90 + iVar3) + 15));
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
	Function_126(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_129() //Position: 0x8466 / 33894
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
			iVar2 = ((Function_127((50 + iVar3) + 8) + Function_127((183 + iVar3) + 8)) + Function_127((90 + iVar3) + 8));
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
	Function_126(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_130() //Position: 0x84FD / 34045
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
		iVar2 = ((Function_127((50 + iVar3)) + Function_127((183 + iVar3))) + Function_127((90 + iVar3)));
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
	Function_126(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_131() //Position: 0x857C / 34172
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_132(int iParam0, float fParam1, int iParam2) //Position: 0x85B9 / 34233
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_70(iParam0, fParam1, 1);
	Function_69(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_60(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

int Function_133(int iParam0) //Position: 0x87C5 / 34757
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x87DF / 34783
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(struct<2> Param0, bool bParam2) //Position: 0x87F5 / 34805
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_136(struct<2> Param0, float fParam2, int iParam3) //Position: 0x8861 / 34913
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_145(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_137(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (!Function_221(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
			{
				iVar4 = 0;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_13(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_137(bool bParam0) //Position: 0x8961 / 35169
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_13(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_44085[bParam09];
		}
		else
		{
			bVar0 = Global_44085[bParam09];
			bVar0 = Global_44085[bVar09];
		}
	}
	return bVar0;
}

bool Function_138(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x89B9 / 35257
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	var uVar13;
	int iVar16;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	var uVar25;
	
	if (Function_145(StackVal, Param0) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) < 0)
	{
		UNK_0xDF93BD7C(&uVar0);
		return 0;
	}
	bVar7 = -1.0f;
	bVar9 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, iVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((bVar7 > 0.0f || bVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &iParam2))
		{
			bVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, iVar1);
			bVar9 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(&uVar0);
	if (bVar9)
	{
		Function_140(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_140(StackVal, Param3) };
		if (!bParam5)
		{
			UNK_0x19D652F9(&uVar8, 100.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -100.0f, &vVar10, &iVar16);
		}
		else
		{
			UNK_0x19D652F9(&uVar8, 10.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -10.0f, &vVar10, &iVar16);
		}
		Function_139(&uVar13);
		Var19 = Function_139(&uVar13);
		Function_139(&iVar16);
		Var21 = Function_139(&iVar16);
		GET_VOLUME_CENTER(&iParam2, &Var23);
		if (!bParam5)
		{
			if (VDIST(Var19, Var23) >= VDIST(Var21, Var23))
			{
				bParam4 = Var19;
			}
			else
			{
				bParam4 = Var21;
			}
		}
		else
		{
			uVar25 = Param3;
			Param3 = Var21;
			if (!IS_POINT_IN_VOLUME(Var19, &iParam2))
			{
				Param3 = Var19;
			}
			bParam4 = Var23;
		}
	}
	return bVar9;
}

struct<8> Function_139(vector3 vParam0) //Position: 0x8B73 / 35699
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_140(vector3 vParam0) //Position: 0x8B95 / 35733
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x8BB3 / 35763
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(float fParam0, var uParam1, int iParam2) //Position: 0x8BC6 / 35782
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_221(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_221(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_221(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_221(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_221(&(Global_43791[Global_46866[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 285,436f;
			fParam0 = Vector(-1402,147f, 10,939f, 4317,528f);
			return 1;
		}
	}
	return 0;
}

var Function_143(int iParam0) //Position: 0x8E14 / 36372
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_144(int iParam0) //Position: 0x8E20 / 36384
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_145(vector3 vParam0) //Position: 0x8E32 / 36402
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x8E4A / 36426
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(&iParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0 + 24) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076))) && !FIRE_IS_ACTOR_ON_FIRE(&iParam0)) && IS_ACTOR_ALIVE(&iParam0)) && !Function_148(&Global_54076, 0, 0))
		{
			DECOR_REMOVE(&iParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iParam0));
		bVar0 = _GET_AMMO_AMOUNT(&Global_54076, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		if (Function_148(&Global_54076, 0, 0) || !IS_ACTOR_ALIVE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_36(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_147(&Global_54076, &iParam0) > 3.0f)
				{
					Function_197(&iParam2, 65536);
					Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				uVar2 = Function_116(&iParam0);
				uVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar2, "", "", "", 4, 0);
				DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_36(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_147(&Global_54076, &iParam0) > 3.0f)
			{
				Function_197(&iParam2, 65536);
				Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
		{
			uVar4 = Function_116(&iParam0);
			uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
			DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar5);
		}
		return 0;
	}
	if (!Function_148(&Global_54076, 0, 0))
	{
		if (bParam1)
		{
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 24, 10, "@GENERIC.USE", "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&iParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
			}
			uVar6 = Function_116(&iParam0);
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iParam0 + 16);
	}
	return 0;
}

float Function_147(var uParam0, int iParam1) //Position: 0x9260 / 37472
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_148(int iParam0, bool bParam1, bool bParam2) //Position: 0x9355 / 37717
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_151(&iParam0))
	{
		return 1;
	}
	if (Function_150(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_149())
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x9419 / 37913
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_150(int iParam0) //Position: 0x9430 / 37936
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_151(int iParam0) //Position: 0x943C / 37948
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x944B / 37963
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x94D6 / 38102
{
	char* cVar0[16];
	
	if (!Function_154())
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

bool Function_154() //Position: 0x9515 / 38165
{
	if (Function_36(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9530 / 38192
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
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x95C5 / 38341
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, 1);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", 1);
	return;
}

void Function_157(bool bParam0) //Position: 0x96AD / 38573
{
	var uVar0;
	var uVar1;
	var uVar5;
	var uVar6;
	var uVar9;
	var uVar11;
	var uVar12;
	var uVar13;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_44085[bParam09] + 32);
	PRINTNL();
	if (Function_35(bParam0))
	{
		if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46894[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_OBJECT_POSITION(&Global_44085[bParam09] + 8, &uVar1);
			uVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0, 2, 0);
			SET_BLIP_NAME(&uVar0, "Status_SafeZone");
			UNK_0xFF3DB575(&uVar0, 1);
			SET_BLIP_PRIORITY(&uVar0, 3);
			uVar5 = Global_43791[bParam0];
			Function_197(&uVar5, 0x8000000);
			Function_197(&uVar5, 0x10000000);
			Global_43791[bParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[bParam09] + 8, &uVar9);
			uVar6 = Function_162(&Global_44085[bParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_193(bParam0);
			uVar12 = Function_200(111, 111, 5);
			Function_161(uVar11, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_160(uVar11, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_158(uVar12);
			uVar13 = Global_43791[bParam0];
			Function_197(&uVar13, 0x1000000);
			Function_197(&uVar13, 0x10000000);
			Global_43791[bParam0] = uVar13;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x986E / 39022
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_159(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_159(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_159(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_159(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_159(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_159(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_159(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_159(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_159(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_159(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_159(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_159(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_159(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_159(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_159(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_159(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_159(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_159(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_159(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_159(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x9BD8 / 39896
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9BFC / 39932
{
	while (&iParam4 > 60)
	{
		iParam4 = (&iParam4 - 60);
		iParam3 = &iParam3 + 1;
	}
	while (&iParam3 > 60)
	{
		iParam3 = (&iParam3 - 60);
		iParam2 = &iParam2 + 1;
	}
	while (&iParam2 > 24)
	{
		iParam2 = (&iParam2 - 24);
		iParam1 = &iParam1 + 1;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
	}
}

void Function_161(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0x9F1B / 40731
{
	switch (iParam0)
	{
		case 0x00000001:
			*(&Global_11014[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000002:
			*(&Global_11120[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000003:
			*(&Global_11146[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000004:
			*(&Global_11222[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000005:
			*(&Global_11284[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000008:
			*(&Global_11544[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000009:
			*(&Global_11646[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000B:
			*(&Global_11726[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000C:
			*(&Global_11836[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000D:
			*(&Global_11946[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000E:
			*(&Global_11988[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000F:
			*(&Global_12048[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000010:
			*(&Global_12150[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000011:
			*(&Global_11398[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000012:
			*(&Global_12392[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000013:
			*(&Global_12422[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000015:
			*(&Global_12488[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000016:
			*(&Global_12644[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000017:
			*(&Global_12714[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000018:
			*(&Global_12760[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
	}
}

var Function_162(var uParam0, int iParam1, int iParam2) //Position: 0xA1BE / 41406
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == iParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&uParam0, iParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0xA217 / 41495
{
	Function_169(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_169(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_169(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_164(&iParam0 + 384);
	return;
}

bool Function_164(struct<2>[] Param0) //Position: 0xA28B / 41611
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_20(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		Function_167(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_20(&(Param0[iVar02]), 4))
		{
			if (!Function_20(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_20(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_20(&(Param0[02]), 8) || iVar1));
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
				Function_167(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_20(&(Param0[iVar02]), 4))
		{
			if (!Function_20(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
	Function_165();
	return 1;
}

void Function_165() //Position: 0xA64D / 42573
{
	if (!Function_9(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_166() //Position: 0xA68D / 42637
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

void Function_167(struct<13> Param0) //Position: 0xA6BB / 42683
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_168() //Position: 0xA6CE / 42702
{
	if (!Function_9(128))
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

var Function_169(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA710 / 42768
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_170(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_167(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_170(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA74E / 42830
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_20(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_167(&(Param0[iVar02]), 4);
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

bool Function_171() //Position: 0xA81D / 43037
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar1, "ZombiePack_foot");
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!DECOR_CHECK_EXIST(&uVar2, "GringoIsDone"))
		{
			uVar3 = ADD_BLIP_FOR_OBJECT(&uVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(&uVar3, "Chest_BlipName");
			DECOR_SET_INT(&uVar2, "ChestBlip_AsInt", &uVar3);
			SET_BLIP_PRIORITY(&uVar3, 1);
			if (Global_43789 == Global_46914[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 2,3f);
			}
			else if (Global_43789 == Global_46926[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 1,5f);
			}
		}
		bVar0 = true;
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return bVar0;
}

void Function_172(var uParam0, var uParam1, struct<82> Param2) //Position: 0xA916 / 43286
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	char* cVar5[32];
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	var uVar23;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &uParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(&uVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(&uVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			uVar14 = GET_OBJECTSET_FROM_OBJECT(&uVar1);
			iVar13 = 0;
			while (iVar13 < (GET_OBJECTSET_SIZE(&uVar14) - 1))
			{
				uVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar13, &uVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(&uVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				uVar17 = STRING_GET_TOKEN((iVar16 - 1));
				fVar18 = TO_FLOAT(STRING_TO_INT(&uVar17));
				if (!Function_36(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, fVar18))))
				{
					Var19 = Vector(0.0f, 0.0f, 0.0f);
					Var21 = Vector(0.0f, 0.0f, 0.0f);
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(&uVar15, &Var19);
					GET_OBJECT_ORIENTATION(&uVar15, &Var21);
					uVar23 = CREATE_GRINGO_IN_LAYOUT(&uParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", Var19, Var21);
					ADD_OBJECT_TO_OBJECTSET(&uVar23, &uVar3);
				}
				iVar13++;
			}
			bVar4 = true;
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(&uVar3);
}

var Function_173(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xAAA0 / 43680
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_174(vector3 vParam0) //Position: 0xAAB5 / 43701
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < (vParam0.z - 1))
	{
		if (Function_36((&vParam0 + 8[iVar15])->f_32, 1))
		{
			if (IS_ACTOR_ALIVE(&vParam0 + 8[iVar15]))
			{
				Var2 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&vParam0 + 8[iVar15] + 8, &Var2);
				if (STREAMING_ARE_BOUNDS_LOADED(Var2, 3.0f))
				{
					if (!Function_45(&vParam0 + 8[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_7(&vParam0 + 8[iVar15] + 32, 1);
						SET_OBJECT_POSITION(&vParam0 + 8[iVar15], Var2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_7(&vParam0 + 608, 1024);
	}
	return;
}

void Function_175(struct<649> Param0) //Position: 0xAB78 / 43896
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_176(&iVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(&iVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (&iVar0 == &Param0 + 8[iVar15])
			{
				uVar3 = &iVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(&uVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_46816[0])
		{
			if (!Function_36(&Param0 + 608, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(&uVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
				{
					if (Function_147(&uVar3, &Global_54076) > 3,5f)
					{
						Function_197(&Param0 + 608, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(&uVar3, 118, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						Param0.f_648 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_36(&Param0 + 608, 2))
		{
			fVar6 = Function_147(&uVar3, &Global_54076);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_36((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
			else if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else if (Function_36(&Param0 + 608, 512))
		{
			if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_147(&uVar3, &Global_54076);
			if (fVar7 < 16.0f && !Function_36((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_36((&Param0 + 8[iVar25])->f_32, 8))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_648 = fVar4;
			}
			else if (!Function_36((&Param0 + 8[iVar25])->f_32, 2))
			{
				if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
					Param0.f_640 = fVar4;
					Param0.f_648 = fVar4;
				}
			}
			else if (fVar4 - Param0.f_648) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
		}
	}
	return;
}

bool Function_176(var uParam0, int iParam1, bool bParam2) //Position: 0xAFF8 / 45048
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	ITERATE_IN_SPHERE(&uVar0, Global_54078, &iParam1);
	bVar1 = false;
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2) && !bVar1)
	{
		iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
		if (IS_ACTOR_RIDING(&iVar3))
		{
			if (&bParam2)
			{
				uParam0 = &iVar3;
			}
		}
		else
		{
			uParam0 = &iVar3;
		}
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			bVar1 = true;
		}
		else
		{
			uParam0 = "";
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return bVar1;
}

void Function_177(int iParam0, int iParam1, bool bParam2) //Position: 0xB08A / 45194
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Global_6623 || Function_9(0x8000000))
	{
		return;
	}
	uVar0 = Function_39(iParam1);
	if (iParam1 == Global_46760[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "spawnresrict_2");
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
			{
				if (!Function_36(&iParam0 + 608, 0x2000000))
				{
					Function_7(&iParam0 + 608, 4194304);
					Function_7(&iParam0 + 608, 8388608);
					Function_7(&iParam0 + 608, 0x1000000);
					Function_7(&iParam0 + 608, 1048576);
					Function_7(&iParam0 + 608, 2097152);
					Function_197(&iParam0 + 608, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_7(&iParam0 + 608, 0x2000000);
		}
	}
	if (!Function_36(&iParam0 + 608, 2097152))
	{
		if (bParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(&iParam0 + 608, 1048576);
			Function_197(&iParam0 + 608, 2097152);
			Function_197(&iParam0 + 608, 4194304);
			Function_197(&iParam0 + 608, 8388608);
			Function_197(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	if (!Function_36(&iParam0 + 608, 1048576))
	{
		if (bParam2 <= 40.0f && bParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(&iParam0 + 608, 1048576);
			Function_197(&iParam0 + 608, 4194304);
			Function_197(&iParam0 + 608, 8388608);
			Function_197(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	iVar2 = Function_178(StackVal, Global_54078, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_36(&iParam0 + 608, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(&iParam0 + 608, 4194304);
		Function_197(&iParam0 + 608, 8388608);
		Function_197(&iParam0 + 608, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_36(&iParam0 + 608, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(&iParam0 + 608, 8388608);
		Function_197(&iParam0 + 608, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_36(&iParam0 + 608, 0x1000000))
	{
		Function_197(&iParam0 + 608, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_178(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB394 / 45972
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_179(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_179(var uParam0, var uParam1, bool bParam2) //Position: 0xB3D0 / 46032
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_46715, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		iVar3 = 0;
		while (iVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, &uVar0);
			if (IS_OBJECT_VALID(&uVar4))
			{
				uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
				if (IS_ACTOR_VALID(&uVar5))
				{
					if (Function_180(&uVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&uVar5))
						{
							if (&bParam2)
							{
								if (Function_45(&uVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return iVar1;
}

bool Function_180(int iParam0) //Position: 0xB4AE / 46254
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_181(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_181(int iParam0, int iParam1) //Position: 0xB4FD / 46333
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xB542 / 46402
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_193(Global_43789);
	fVar1 = Function_191(Global_43789);
	fVar2 = Function_192(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1,5f);
	fVar3 = Function_183(0,33f, Function_141(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_184(1);
	return;
}

float Function_183(int iParam0, int iParam1) //Position: 0xB590 / 46480
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xB5A3 / 46499
{
	if (Function_36(iParam0, 1) && !Function_36(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_185(vector3 vParam0) //Position: 0xB5D0 / 46544
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<5> Var4;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&uVar1))
		{
			SET_MOVER_FROZEN(&uVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&uVar1, 4);
			if (!Function_36(&vParam0 + 608, 0x4000000))
			{
				MEMORY_CLEAR_ALL(&uVar1);
				MEMORY_CONSIDER_AS(&uVar1, &Global_54076, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(&uVar1);
			iVar2 = Vector(0.0f, 0.0f, 0.0f);
			Var4 = Vector(0.0f, 0.0f, 0.0f);
			GET_OBJECT_POSITION(&vParam0 + 8[iVar05] + 8, &iVar2);
			GET_OBJECT_ORIENTATION(&vParam0 + 8[iVar05] + 8, &Var4);
			if (!&bParam1)
			{
				TASK_PRIORITY_SET(&uVar1, true);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar1, &iVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, 1);
				if (!Function_36(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, false);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(&vParam0, &vParam0, 0);
	return;
}

void Function_186(int iParam0, int iParam1, int iParam2) //Position: 0xB6D1 / 46801
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_187(&uVar1, &iParam1, iParam2);
		}
		iVar0++;
	}
	return;
}

void Function_187(var uParam0, var uParam1, int iParam2) //Position: 0xB728 / 46888
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, iParam2);
			}
		}
		iVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xB77A / 46970
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_34(iVar0) || Function_159(iParam0));
}

void Function_189(int iParam0) //Position: 0xB7B9 / 47033
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (!Function_36(&iParam0 + 608, 512))
	{
		fVar0 = Function_191(Global_43789);
		iVar1 = Function_193(Global_43789);
		if (iVar1 == 0 && &iParam0 + 632 >= 120.0f)
		{
			fVar2 = Function_192(iVar1);
			iVar3 = ((fVar0 / fVar2) * 100.0f);
			if (iVar3 <= 120.0f)
			{
				(&iParam0 + 632) = 1000.0f;
				return;
			}
			if (iVar3 == &iParam0 + 632)
			{
				fVar4 = (fVar0 % 10.0f);
				fVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar5));
				UI_REFRESH("ZMeter");
				*(&iParam0 + 632) = iVar3;
			}
		}
	}
	return;
}

void Function_190(int iParam0) //Position: 0xB884 / 47236
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
	if (GET_BLIP_ICON(&uVar0) == 325)
	{
		REMOVE_BLIP(&uVar0);
	}
	uVar1 = DECOR_GET_INT(&iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(&uVar1))
	{
		REMOVE_BLIP(&uVar1);
	}
	DECOR_REMOVE(&iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
	{
		uVar2 = DECOR_GET_INT(&iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uVar2);
		}
		DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(&iParam0 + 24))
	{
		DESTROY_VOLUME(&iParam0 + 24);
	}
	return;
}

var Function_191(bool bParam0) //Position: 0xB95E / 47454
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = &Global_44085[bParam09] + 8;
	if (IS_VOLUME_VALID(&uVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(&uVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(&uVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_192(int iParam0) //Position: 0xB9BD / 47549
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_193(bool bParam0) //Position: 0xBB00 / 47872
{
	if (bParam0 == Global_46760[0])
	{
		return 1;
	}
	if (bParam0 == Global_46760[2])
	{
		return 2;
	}
	if (bParam0 == Global_46760[1])
	{
		return 3;
	}
	if (bParam0 == Global_46796[1])
	{
		return 4;
	}
	if (bParam0 == Global_46796[3])
	{
		return 5;
	}
	if (bParam0 == Global_46816[0])
	{
		return 8;
	}
	if (bParam0 == Global_46816[1])
	{
		return 9;
	}
	if (bParam0 == Global_46838[0])
	{
		return 11;
	}
	if (bParam0 == Global_46850[0])
	{
		return 12;
	}
	if (bParam0 == Global_46850[1])
	{
		return 13;
	}
	if (bParam0 == Global_46850[2])
	{
		return 14;
	}
	if (bParam0 == Global_46866[0])
	{
		return 15;
	}
	if (bParam0 == Global_46866[1])
	{
		return 16;
	}
	if (bParam0 == Global_46866[2])
	{
		return 17;
	}
	if (bParam0 == Global_46894[2])
	{
		return 25;
	}
	if (bParam0 == Global_46894[3])
	{
		return 18;
	}
	if (bParam0 == Global_46894[0])
	{
		return 19;
	}
	if (bParam0 == Global_46914[0])
	{
		return 21;
	}
	if (bParam0 == Global_46926[2])
	{
		return 22;
	}
	if (bParam0 == Global_46926[1])
	{
		return 23;
	}
	if (bParam0 == Global_46926[0])
	{
		return 24;
	}
	if (bParam0 == Global_46838[1])
	{
		return 26;
	}
	if (bParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

void Function_194() //Position: 0xBC86 / 48262
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar0, "ZombiePack_foot");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
		if (IS_BLIP_VALID(&uVar2))
		{
			REMOVE_BLIP(&uVar2);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

var Function_195(bool bParam0, int iParam1) //Position: 0xBCF2 / 48370
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "player_sleep");
		if (&iParam1 == Global_46736[2])
		{
			ITERATE_IN_SPHERE(StackVal, &uVar1, Vector(123,033f, 72,791f, 2669,954f), 10.0f);
		}
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		if (IS_OBJECT_VALID(&iVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(&iVar2);
			if (IS_GRINGO_VALID(&bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(&bVar3, bParam0);
				uVar4 = GET_OBJECT_FROM_GRINGO(&bVar3);
				uVar5 = GET_BLIP_ON_OBJECT(&uVar4);
				if (IS_BLIP_VALID(&uVar5))
				{
					REMOVE_BLIP(&uVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", 1);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, 1);
					if (&iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(&uVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(&uVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return iVar0;
}

void Function_196(bool bParam0, float fParam1) //Position: 0xBE31 / 48689
{
	DECOR_SET_FLOAT(&Global_44085[bParam09] + 8, "ZombieScore", fParam1);
	return;
}

void Function_197(var uParam0, int iParam1) //Position: 0xBE55 / 48725
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xBE66 / 48742
{
	int iVar0;
	
	iVar0 = Function_133(iParam0);
	if (!Function_199(iVar0))
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

bool Function_199(int iParam0) //Position: 0xBEA4 / 48804
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBEBB / 48827
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_201(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(bParam0, bParam1, bParam2, 4294967295);
}

int Function_201(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xBF19 / 48921
{
	var uVar0;
	
	if (!Function_203(bParam2))
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
	uVar0 = Function_204(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_202(uVar0);
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

var Function_202(int iParam0) //Position: 0xC07E / 49278
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

bool Function_203(int iParam0) //Position: 0xC0BC / 49340
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xC0D1 / 49361
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(var uParam0) //Position: 0xC0F1 / 49393
{
	char[] cVar0[4];
	bool bVar1;
	bool bVar2;
	
	uParam0 = uParam0;
	if ((StackVal && Function_208(((Function_198(1, 0) && Function_42(5)) && !Function_198(3, 0)), &Global_54076, Vector(-117,438f, 118,869f, 1376,44f), 30.0f)) && !HUD_IS_FADED())
	{
		if (!DECOR_CHECK_EXIST(&iLocal_178, "bFinishedFalseCutscene"))
		{
			if (!IS_SCRIPT_VALID(&uLocal_632))
			{
				iLocal_634 = 99;
				uLocal_632 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/DLC/ZombiePack/North/Great_Plains/BeechersHope/BeechersHope_False_z", &iLocal_634, 26, 0);
			}
		}
	}
	if (!Function_198(4, 0))
	{
		uLocal_622 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(-99,62f, 119,5f, 1355,52f), 5.0f, "p_gen_bedKing02x", 1);
		if (IS_PHYSINST_VALID(&uLocal_622) && !iLocal_661)
		{
			HIDE_PHYSINST(&uLocal_622);
			iLocal_661 = 1;
		}
		if (!Global_99146)
		{
			if (!IS_OBJECT_VALID(&uLocal_620))
			{
				uLocal_620 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "beechersbed", "p_gen_bedSleptIn03x", Vector(-99,62f, 119,5f, 1355,52f), Vector(180.0f, -61,1f, -180.0f), 1);
			}
		}
		else if (IS_OBJECT_VALID(&uLocal_620))
		{
			DESTROY_OBJECT(&uLocal_620);
		}
	}
	else if (iLocal_661)
	{
		uLocal_622 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(-99,62f, 119,5f, 1355,52f), 5.0f, "p_gen_bedKing02x", 1);
		if (IS_PHYSINST_VALID(&uLocal_622))
		{
			SHOW_PHYSINST(&uLocal_622);
			iLocal_661 = 0;
		}
	}
	if ((Function_198(1, 0) && !Global_6623) && !Function_198(4, 0))
	{
		cVar0 = Function_207(Global_46914[1], "beechersHope", "house01", 2);
		if (IS_DOOR_VALID(&cVar0))
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_206(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
		cVar0 = Function_207(Global_46914[1], "beechersHope", "house01", 1);
		if (IS_DOOR_VALID(&cVar0))
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_206(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
		cVar0 = Function_207(Global_46914[1], "beechersHope", "house01", 3);
		if (IS_DOOR_VALID(&cVar0))
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_206(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
		cVar0 = Function_207(Global_46914[1], "beechersHope", "house01", 5);
		if (IS_DOOR_VALID(&cVar0))
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_206(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
		if (!IS_OBJECT_VALID(&iLocal_178 + 144))
		{
			*(&iLocal_178 + 144) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "debrisBoard01x0", "p_gen_debrisBoard01x", Vector(-112,4363f, 120,9592f, 1366,521f), Vector(-90,42858f, -32,64025f, -0,168901f), 1);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_178 + 144, &Global_54076, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(&iLocal_178 + 144, 0);
		}
		else
		{
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&iLocal_178 + 144), 1);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_178 + 144, &Global_54076, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(&iLocal_178 + 144, 0);
		}
		if (!IS_OBJECT_VALID(&iLocal_178 + 152))
		{
			*(&iLocal_178 + 152) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "debrisBoard06x0", "p_gen_debrisBoard06x", Vector(-101,5621f, 120,9572f, 1350,486f), Vector(85,35818f, -30,85748f, 2,384655f), 1);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_178 + 152, &Global_54076, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(&iLocal_178 + 144, 0);
		}
		else
		{
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&iLocal_178 + 152), 1);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_178 + 152, &Global_54076, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(&iLocal_178 + 144, 0);
		}
	}
	else
	{
		if (IS_OBJECT_VALID(&iLocal_178 + 144))
		{
			DESTROY_OBJECT(&iLocal_178 + 144);
		}
		if (IS_OBJECT_VALID(&iLocal_178 + 152))
		{
			DESTROY_OBJECT(&iLocal_178 + 152);
		}
	}
	if ((Function_198(1, 0) && !Global_6623) && !Function_198(3, 0))
	{
		if (STREAMING_ARE_BOUNDS_LOADED(StackVal, Vector(-98,99f, 120.0f, 1356,51f), 10.0f))
		{
			bVar1 = 1230;
			bVar2 = 1232;
			if (!IS_ACTOR_VALID(&iLocal_624))
			{
				iLocal_624 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "beecherzombieson", bVar2, Vector(-101,007f, 119,49f, 1355,841f), Vector(0.0f, 410.0f, 0.0f));
				HOGTIE_ACTOR(&iLocal_624);
				MEMORY_CONSIDER_AS(&iLocal_624, &Global_54076, 0);
				SET_ACTOR_INVULNERABILITY(&iLocal_624, 1);
				uLocal_628 = CREATE_EVENT_TRAP(Function_61(), 91, &iLocal_624);
				EVENT_TRAP_ON_TARGET(&uLocal_628, &iLocal_624);
			}
			else if ((GET_LAST_ATTACKER(&iLocal_624) != &Global_54076 || GET_LAST_ATTACK_TARGET(&Global_54076) != &iLocal_624) || EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_628))
			{
				UI_SET_TEXT("Death_Explanation", "kill_family_help");
				KILL_ACTOR(&Global_54076);
			}
			if (!IS_ACTOR_VALID(&iLocal_626))
			{
				iLocal_626 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "beecherzombiewife", bVar1, Vector(-98,481f, 120.0f, 1357,344f), Vector(0.0f, 230.0f, 0.0f));
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_626), 1);
				SUSPEND_MOVER(&iLocal_626);
				HOGTIE_ACTOR(&iLocal_626);
				MEMORY_CONSIDER_AS(&iLocal_626, &Global_54076, 0);
				SET_ACTOR_INVULNERABILITY(&iLocal_626, 1);
				uLocal_630 = CREATE_EVENT_TRAP(Function_61(), 91, &iLocal_626);
				EVENT_TRAP_ON_TARGET(&uLocal_630, &iLocal_626);
			}
			else
			{
				Function_144(&iLocal_626);
				if (VDIST(StackVal, Function_144(&iLocal_626), Vector(-98,481f, 120.0f, 1357,344f)) < 0,05f)
				{
					SET_OBJECT_POSITION(StackVal, &iLocal_626, Vector(-98,481f, 120.0f, 1357,344f));
				}
				if ((GET_LAST_ATTACKER(&iLocal_626) != &Global_54076 || GET_LAST_ATTACK_TARGET(&Global_54076) != &iLocal_626) || EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_630))
				{
					UI_SET_TEXT("Death_Explanation", "kill_family_help");
					KILL_ACTOR(&Global_54076);
				}
			}
			if (!IS_OBJECT_VALID(&uLocal_616))
			{
				uLocal_616 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "beecherfood01", "p_gen_food01x", Vector(-100,8367f, 119,5209f, 1355,504f), Vector(0.0f, -85,5f, 0.0f), 1);
				uLocal_618 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "beecherfood02", "p_gen_food02x", Vector(-99,4644f, 120,1007f, 1356,886f), Vector(0.0f, -75.0f, 0.0f), 1);
			}
		}
		else
		{
			if (IS_OBJECT_VALID(&uLocal_616))
			{
				DESTROY_OBJECT(&uLocal_616);
				DESTROY_OBJECT(&uLocal_618);
			}
			if (IS_ACTOR_VALID(&iLocal_624))
			{
				DESTROY_ACTOR(&iLocal_624);
			}
			if (IS_ACTOR_VALID(&iLocal_626))
			{
				DESTROY_ACTOR(&iLocal_626);
			}
		}
	}
	else if (Function_198(3, 0))
	{
		if (IS_OBJECT_VALID(&uLocal_616))
		{
			DESTROY_OBJECT(&uLocal_616);
			DESTROY_OBJECT(&uLocal_618);
		}
		if (IS_ACTOR_VALID(&iLocal_624))
		{
			DESTROY_ACTOR(&iLocal_624);
		}
		if (IS_ACTOR_VALID(&iLocal_626))
		{
			DESTROY_ACTOR(&iLocal_626);
		}
	}
	if (!iLocal_660)
	{
		if (Function_198(1, 0))
		{
			iLocal_660 = 1;
			Function_195(1, 4294967295);
		}
	}
	return;
}

void Function_206(char* cParam0, int iParam1) //Position: 0xC8D2 / 51410
{
	if (!IS_DOOR_VALID(&cParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&cParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&cParam0, "unlockMe"))
	{
		DECOR_REMOVE(&cParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&cParam0))
	{
		SET_DOOR_LOCK(&cParam0, 1);
	}
	return;
}

int Function_207(int iParam0, char* cParam1, bool bParam3) //Position: 0xC92D / 51501
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_13(iParam0))
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

int Function_208(var uParam0, struct<2> Param1, float fParam3) //Position: 0xC9D2 / 51666
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_101(&uParam0);
		if (VDIST(Function_101(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

void Function_209(char* cParam0) //Position: 0xCA5E / 51806
{
	if (!Function_9(128))
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

void Function_210(int iParam0, bool bParam1) //Position: 0xCA9E / 51870
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
		Function_71(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_211(int iParam0) //Position: 0xCB8E / 52110
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_212(bool bParam0) //Position: 0xCBA1 / 52129
{
	Function_213(0, 0.0f, 4, &iLocal_178, &Global_44085[bParam09] + 8, 1);
	return;
}

void Function_213(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0xCBBB / 52155
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
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
	Global_43580.f_12 = uParam0;
	(&Global_43580 + 24) = &uParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = uParam1;
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
		Function_216();
	}
	if (&bParam5)
	{
		Function_214(1048576);
	}
}

void Function_214(int iParam0) //Position: 0xCCC9 / 52425
{
	Function_215(&Global_43580, iParam0);
	return;
}

void Function_215(var uParam0, var uParam1) //Position: 0xCCD7 / 52439
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_216() //Position: 0xCCF6 / 52470
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_214(16384);
	}
	return;
}

void Function_217(var uParam0) //Position: 0xCD12 / 52498
{
	uParam0 = uParam0;
	return;
}

void Function_218() //Position: 0xCD1C / 52508
{
	return;
}

void Function_219(int iParam0) //Position: 0xCD22 / 52514
{
	iParam0 = iParam0;
	return;
}

void Function_220(var uParam0, int iParam1) //Position: 0xCD2C / 52524
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_221(int iParam0, int iParam1) //Position: 0xCD46 / 52550
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_222() //Position: 0xCD63 / 52579
{
	return;
}

void Function_223() //Position: 0xCD69 / 52585
{
	return;
}

void Function_224(int iParam0) //Position: 0xCD6F / 52591
{
	iParam0 = iParam0;
	return;
}

void Function_225(int iParam0, bool bParam1, int iParam2) //Position: 0xCD79 / 52601
{
	if ((!Function_13(bParam1) || Global_6623) || Function_36(&iParam0 + 608, 16))
	{
		return;
	}
	if (bParam1 == Global_46760[0])
	{
		Function_226(&iParam0, bParam1, &Global_11014, &iParam2);
	}
	else if (bParam1 == Global_46760[1])
	{
		Function_226(&iParam0, bParam1, &Global_11146, &iParam2);
	}
	else if (bParam1 == Global_46760[2])
	{
		Function_226(&iParam0, bParam1, &Global_11120, &iParam2);
	}
	else if (bParam1 == Global_46796[1])
	{
		Function_226(&iParam0, bParam1, &Global_11222, &iParam2);
	}
	else if (bParam1 == Global_46796[3])
	{
		Function_226(&iParam0, bParam1, &Global_11284, &iParam2);
	}
	else if (bParam1 == Global_46796[4])
	{
		Function_226(&iParam0, bParam1, &Global_11492, &iParam2);
	}
	else if (bParam1 == Global_46816[0])
	{
		Function_226(&iParam0, bParam1, &Global_11544, &iParam2);
	}
	else if (bParam1 == Global_46816[1])
	{
		Function_226(&iParam0, bParam1, &Global_11646, &iParam2);
	}
	else if (bParam1 == Global_46816[2])
	{
		Function_226(&iParam0, bParam1, &Global_11704, &iParam2);
	}
	else if (bParam1 == Global_46838[1])
	{
		Function_226(&iParam0, bParam1, &Global_11752, &iParam2);
	}
	else if (bParam1 == Global_46838[0])
	{
		Function_226(&iParam0, bParam1, &Global_11726, &iParam2);
	}
	else if (bParam1 == Global_46850[0])
	{
		Function_226(&iParam0, bParam1, &Global_11836, &iParam2);
	}
	else if (bParam1 == Global_46850[1])
	{
		Function_226(&iParam0, bParam1, &Global_11946, &iParam2);
	}
	else if (bParam1 == Global_46850[2])
	{
		Function_226(&iParam0, bParam1, &Global_11988, &iParam2);
	}
	else if (bParam1 == Global_46866[0])
	{
		Function_226(&iParam0, bParam1, &Global_12048, &iParam2);
	}
	else if (bParam1 == Global_46866[1])
	{
		Function_226(&iParam0, bParam1, &Global_12150, &iParam2);
	}
	else if (bParam1 == Global_46866[2])
	{
		Function_226(&iParam0, bParam1, &Global_11398, &iParam2);
	}
	else if (bParam1 == Global_46894[2])
	{
		Function_226(&iParam0, bParam1, &Global_12284, &iParam2);
	}
	else if (bParam1 == Global_46894[1])
	{
		Function_226(&iParam0, bParam1, &Global_12342, &iParam2);
	}
	else if (bParam1 == Global_46894[0])
	{
		Function_226(&iParam0, bParam1, &Global_12422, &iParam2);
	}
	else if (bParam1 == Global_46894[3])
	{
		Function_226(&iParam0, bParam1, &Global_12392, &iParam2);
	}
	else if (bParam1 == Global_46926[0])
	{
		Function_226(&iParam0, bParam1, &Global_12760, &iParam2);
	}
	else if (bParam1 == Global_46926[1])
	{
		Function_226(&iParam0, bParam1, &Global_12714, &iParam2);
	}
	else if (bParam1 == Global_46926[2])
	{
		Function_226(&iParam0, bParam1, &Global_12644, &iParam2);
	}
	else if (bParam1 == Global_46914[0])
	{
		Function_226(&iParam0, bParam1, &Global_12488, &iParam2);
	}
	else if (bParam1 == Global_46914[1])
	{
		Function_226(&iParam0, bParam1, &Global_12482, &iParam2);
	}
	Function_197(&iParam0 + 608, 64);
	return;
}

void Function_226(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0xD07D / 53373
{
	struct<8> Var0;
	var uVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<8> Var28;
	
	Function_7(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_235("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_234(&uParam3, iParam1);
	iVar18 = Function_92(&iVar9, iParam1);
	iVar19 = 0;
	iVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < iVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_34(iParam1);
	iVar22 = 0;
	while (iVar22 < (iVar18 - 1))
	{
		if (iVar22 <= Param2)
		{
			if (!Function_233(&(Param2[iVar222]), 4))
			{
				*(&iParam0 + 8[iVar225] + 8) = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar22, &uVar8);
				bVar23 = true;
				if (iVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(&iParam0 + 8[iVar225] + 8, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(&iParam0 + 8[iVar225] + 8, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					Var24 = Vector(0.0f, 0.0f, 0.0f);
					Var26 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(&iParam0 + 8[iVar225] + 8, &Var24);
					GET_OBJECT_ORIENTATION(&iParam0 + 8[iVar225] + 8, &Var26);
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_235("nSurvivor_") };
					*(&iParam0 + 8[iVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[iVar22], Var24, Var26);
					Function_228(iVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_197(&iParam0 + 8[iVar225] + 32, 1);
						Function_197(&iParam0 + 608, 1024);
					}
					Function_197(&iParam0 + 608, 1);
				}
				else
				{
					iVar20 = (iVar20 - 1);
					Function_227(&(Param2[iVar222]), 4);
				}
			}
		}
		iVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_186(&iParam0, &iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_227(var uParam0, int iParam1) //Position: 0xD289 / 53897
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_228(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0xD29A / 53914
{
	int iVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	struct<5> Var6;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	var uVar21;
	var uVar22;
	
	iVar0 = &iParam1 + 8[iParam05];
	uVar1 = &iParam1 + 8[iParam05] + 8;
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SQUAD_JOIN(&iVar0, &iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(&iVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(&iVar0);
	SET_ACTOR_MAX_HEALTH(&iVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(&iVar0, 0);
	uVar4 = Vector(0.0f, 0.0f, 0.0f);
	Var6 = Vector(0.0f, 0.0f, 0.0f);
	GET_OBJECT_POSITION(&iParam1 + 8[iParam05] + 8, &uVar4);
	GET_OBJECT_ORIENTATION(&iParam1 + 8[iParam05] + 8, &Var6);
	bVar8 = true;
	if (DECOR_CHECK_EXIST(&uVar1, "GiveWeapon"))
	{
		bVar9 = DECOR_GET_INT(&uVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(&iVar0, bVar9, 0f, 1, 1);
		iVar10 = UNK_0xDB679ED9(bVar9);
		if (iVar10 == 40)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 7);
		}
		else if (iVar10 == 39)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 6);
		}
		else if (iVar10 == 41)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 8);
		}
		else if (iVar10 == 42)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 9);
		}
		else if (iVar10 == 43)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 10);
		}
		else if (iVar10 == 44)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0f, 1, 1);
		bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
		DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
		DECOR_SET_INT(&iVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&iVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&iVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iVar0, 1);
	Function_232(&iVar0, 0);
	Function_231(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, 0);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_230(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_230(&iVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 61, RAND_FLOAT_RANGE(0,1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(&iVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(&iVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(&iVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(&uVar1, "nShoot_Vol"))
	{
		bVar12 = DECOR_GET_INT(&uVar1, "nShoot_Vol");
		strcpy(&cVar13, "survVol_", 32);
		stradd(&cVar13, INT_TO_STRING(bVar12), 32);
		uVar21 = FIND_VOLUME_IN_LAYOUT(&uParam2, &cVar13);
		if (IS_VOLUME_VALID(&uVar21))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &uVar21, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_OVERRIDE_SET_POSTURE(&iVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "Gringo") || !bParam3)
	{
		uVar22 = LOCATE_GRINGO_OF_TYPE("", &uVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(&uVar22))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_229(&uVar22, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowSun", 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowRain", 1);
					SNAP_ACTOR_TO_GRINGO(&iVar0, GET_OBJECT_FROM_GRINGO(&uVar22), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(&iVar0, 2);
					TASK_USE_GRINGO(&iVar0, &uVar22, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse", 1);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, 2);
			TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	Function_230(&iVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,75f);
	MEMORY_CONSIDER_AS(&iVar0, &Global_54076, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, &iVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(&uVar1, "Core"))
		{
			*(&iParam1 + 336) = &iVar0;
		}
		else if (Global_21684[&iParam1 + 6247].f_32 < 0.0f)
		{
			Global_21684[&iParam1 + 6247].f_32 = (Global_21684[&iParam1 + 6247].f_32 - 1.0f);
			DECOR_SET_BOOL(&iVar0, "PreSaved", 1);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	}
}

var Function_229(var uParam0, int iParam1) //Position: 0xD981 / 55681
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_230(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xD990 / 55696
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_231(var uParam0, bool bParam1) //Position: 0xD9E1 / 55777
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[7]));
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[5]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[7]), 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[5]), 0);
	}
	return;
}

void Function_232(var uParam0, bool bParam1) //Position: 0xDA30 / 55856
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

bool Function_233(var uParam0, int iParam1) //Position: 0xDA64 / 55908
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_234(int iParam0, int iParam1) //Position: 0xDA81 / 55937
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar8 = GET_OBJECT_NAME(&iVar1);
		if (Function_34(iParam1))
		{
			if (STRING_CONTAINS_STRING(&uVar8, "_def"))
			{
				uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(&uVar8, "_safe"))
		{
			uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
			iVar2++;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return &(uVar3[(RAND_INT_RANGE(0, 100000) % iVar2)]);
}

struct<32> Function_235(char* cParam0) //Position: 0xDB37 / 56119
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_236("0", &cVar8, ""), 4);
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

struct<32> Function_236(char* cParam0) //Position: 0xDBA3 / 56227
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_237() //Position: 0xDBC5 / 56261
{
	ENABLE_CHILD_SECTOR("dlc_beh_fireplace01x");
	return;
}

bool Function_238(int iParam0) //Position: 0xDBE5 / 56293
{
	if (Function_36(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_164(&iParam0 + 384);
}

int Function_239(int iParam0) //Position: 0xDC08 / 56328
{
	if (!Function_13(iParam0))
	{
		return 1;
	}
	return Function_221(&(Global_43791[iParam0]), 4);
}

int Function_240() //Position: 0xDC24 / 56356
{
	if (!Function_164(&iLocal_594))
	{
		return 0;
	}
	return 1;
}

void Function_241(bool bParam0) //Position: 0xDC37 / 56375
{
	Function_242(&uLocal_472, &cLocal_7, "house01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "house01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "house01", 3, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "house01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "house01", 5, &Global_44085[bParam09] + 32, 0, &iLocal_218 + 24, 0, 1);
	Function_242(&uLocal_472, &cLocal_7, "house01", 6, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 3, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 96, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 97, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 94, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 95, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 98, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_242(&uLocal_472, &cLocal_7, "stable01", 99, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	return;
}

var Function_242(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0xDE4E / 56910
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_243(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, &cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_48(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), 1);
	}
	Function_48(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_48(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_48(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_243(struct<4>[] Param0) //Position: 0xDF51 / 57169
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (!IS_DOOR_VALID(&(Param0[iVar04])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_244() //Position: 0xDF82 / 57218
{
	Function_245(&uLocal_9, &uLocal_416, 4, &iLocal_218 + 8, 4294967295, 4);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 16, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 88, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 24, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 32, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 40, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 48, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 56, 4294967295, 258);
	Function_245(&uLocal_9, &uLocal_416, 5, &iLocal_218 + 544, 4294967295, 258);
	return;
}

void Function_245(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xE029 / 57385
{
	if (uParam0 >= (vParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_246(struct<5> Param0) //Position: 0xE116 / 57622
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xE127 / 57639
{
	var uVar0;
	int iVar1;
	
	if (Function_36(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "MoveRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_248(int iParam0, int iParam1, bool bParam2) //Position: 0xE19D / 57757
{
	var uVar0;
	int iVar1;
	
	if (Function_36(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "SpawnRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	if (!Function_34(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[bParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam29] + 8);
		}
	}
	return;
}

var Function_249() //Position: 0xE23B / 57915
{
	return &iLocal_178;
}

void Function_250(int iParam0) //Position: 0xE244 / 57924
{
	cLocal_7 = Function_251(&iLocal_178, "beechershope", iParam0);
	return;
}

int Function_251(int iParam0, var uParam1, int iParam2) //Position: 0xE264 / 57956
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_252() //Position: 0xE287 / 57991
{
	return Function_253();
}

int Function_253() //Position: 0xE290 / 58000
{
	var uVar0;
	var uVar1;
	
	Function_254(3, 3);
	uVar0 = &uVar0;
	iLocal_218 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_218))
	{
		iLocal_218 = CREATE_LAYOUT("BeechersHope_layout");
	}
	*(&iLocal_218 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_region", 4,203895E-45f, Vector(-77,27319f, 127,9266f, 1378,121f), Vector(0.0f, -20,00011f, 0.0f), Vector(103,6128f, 44,78061f, 159,4202f));
	*(&iLocal_218 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nbehv_silo", 2,802597E-45f, Vector(-68,18213f, 124,27f, 1370,456f), Vector(0.0f, 0.0f, 0.0f), Vector(11,06276f, 14,34177f, 10,81342f));
	*(&iLocal_218 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_masterBed", 2,802597E-45f, Vector(-99,12091f, 120,5662f, 1356,6f), Vector(0.0f, 329,1483f, 0.0f), Vector(5,987632f, 3,828812f, 7,375322f));
	*(&iLocal_218 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_room1", 2,802597E-45f, Vector(-106,0983f, 120,2559f, 1367,72f), Vector(0.0f, 238,1161f, 0.0f), Vector(4,562779f, 3,85983f, 6,338804f));
	*(&iLocal_218 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_room2", 2,802597E-45f, Vector(-113,7263f, 119,489f, 1362,7f), Vector(0.0f, 58,87924f, 0.0f), Vector(5,237065f, 3,617656f, 4,34714f));
	*(&iLocal_218 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_livingRoom", 2,802597E-45f, Vector(-103,8061f, 121,3652f, 1362,557f), Vector(0.0f, 148,5571f, 0.0f), Vector(6,798782f, 4,247926f, 6,220602f));
	*(&iLocal_218 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_kitchen", 2,802597E-45f, Vector(-106,5331f, 120,6738f, 1351,999f), Vector(0.0f, 328,8768f, 0.0f), Vector(5,223125f, 4,135811f, 7,184216f));
	*(&iLocal_218 + 88) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_barn_set");
	*(&iLocal_218 + 64[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_barn_01", 2,802597E-45f, Vector(-65,44868f, 120,7917f, 1411,82f), Vector(-0,3864921f, -28,3075f, 0,3628158f), Vector(8,812788f, 11,30865f, 11,38093f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 88, &iLocal_218 + 64[0]);
	*(&iLocal_218 + 64[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_barn_02", 2,802597E-45f, Vector(-61,78377f, 120,7917f, 1404,841f), Vector(-0,3697558f, -25,92993f, 0,3551852f), Vector(6,523752f, 11,30865f, 4,96006f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 88, &iLocal_218 + 64[1]);
	*(&iLocal_218 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_Birds_set");
	*(&iLocal_218 + 96[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder", 4,203895E-45f, Vector(-46,03335f, 91,35687f, 1465,51f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[0]);
	*(&iLocal_218 + 96[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder1", 4,203895E-45f, Vector(-63,51256f, 116,8612f, 1416f), Vector(0.0f, 20.0f, 0.0f), Vector(19,09488f, 19,61436f, 16,02038f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[1]);
	*(&iLocal_218 + 96[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder2", 4,203895E-45f, Vector(-139,694f, 119,1813f, 1343,83f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[2]);
	*(&iLocal_218 + 96[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder3", 4,203895E-45f, Vector(-104,3157f, 134,2322f, 1357,065f), Vector(0.0f, 20.0f, 0.0f), Vector(20,39316f, 19,61436f, 18,87659f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[3]);
	*(&iLocal_218 + 96[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder4", 4,203895E-45f, Vector(-72,64809f, 114,2872f, 1271,352f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[4]);
	*(&iLocal_218 + 96[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder5", 4,203895E-45f, Vector(-115,9406f, 121,4596f, 1292f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[5]);
	*(&iLocal_218 + 96[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder6", 4,203895E-45f, Vector(-148,0001f, 121,767f, 1404f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[6]);
	*(&iLocal_218 + 96[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder7", 4,203895E-45f, Vector(-47,99998f, 114,8317f, 1314,626f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[7]);
	*(&iLocal_218 + 96[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder8", 4,203895E-45f, Vector(-120.0f, 118,4627f, 1439,652f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[8]);
	*(&iLocal_218 + 96[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nCylinder9", 4,203895E-45f, Vector(-105,2942f, 116,13f, 1258,706f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[9]);
	*(&iLocal_218 + 96[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder10", 4,203895E-45f, Vector(-137,745f, 125,24f, 1302,255f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[10]);
	*(&iLocal_218 + 96[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder11", 4,203895E-45f, Vector(-68,49857f, 114,8534f, 1371,32f), Vector(0.0f, 20.0f, 0.0f), Vector(6,634632f, 19,61436f, 7,604219f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[11]);
	*(&iLocal_218 + 96[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder12", 4,203895E-45f, Vector(-16,00005f, 119,8273f, 1408f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[12]);
	*(&iLocal_218 + 96[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder13", 4,203895E-45f, Vector(-26,26308f, 109,4274f, 1228f), Vector(0.0f, 20.0f, 0.0f), Vector(6,066655f, 19,61436f, 4,926733f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[13]);
	*(&iLocal_218 + 96[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder14", 4,203895E-45f, Vector(-85,50955f, 111,3172f, 1238,49f), Vector(0.0f, 20.0f, 0.0f), Vector(6,180057f, 18,79514f, 7,04123f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[14]);
	*(&iLocal_218 + 96[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder15", 4,203895E-45f, Vector(-180f, 130,5098f, 1344.0f), Vector(0.0f, 20.0f, 0.0f), Vector(6,112282f, 17,48868f, 8,409119f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[15]);
	*(&iLocal_218 + 96[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder16", 4,203895E-45f, Vector(-83,99998f, 117,0204f, 1316.0f), Vector(0.0f, 20.0f, 0.0f), Vector(9,957365f, 24,56802f, 5,64477f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 240, &iLocal_218 + 96[16]);
	*(&iLocal_218 + 296) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_snakes_set");
	*(&iLocal_218 + 248[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder25", 4,203895E-45f, Vector(-172f, 122,4784f, 1384f), Vector(0.0f, 20.0f, 0.0f), Vector(5,139093f, 1,794266f, 5,226905f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 296, &iLocal_218 + 248[0]);
	*(&iLocal_218 + 248[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder21", 4,203895E-45f, Vector(-33,46529f, 112,0254f, 1286,535f), Vector(0.0f, 20.0f, 0.0f), Vector(5,139093f, 1,794266f, 5,226905f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 296, &iLocal_218 + 248[1]);
	*(&iLocal_218 + 248[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder22", 4,203895E-45f, Vector(-158,8531f, 127,2829f, 1316.0f), Vector(0.0f, 20.0f, 0.0f), Vector(5,139093f, 1,794266f, 5,226905f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 296, &iLocal_218 + 248[2]);
	*(&iLocal_218 + 248[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder23", 4,203895E-45f, Vector(-32,00002f, 125,1776f, 1449,662f), Vector(0.0f, 20.0f, 0.0f), Vector(5,139093f, 1,794266f, 5,226905f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 296, &iLocal_218 + 248[3]);
	*(&iLocal_218 + 248[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder24", 4,203895E-45f, Vector(-104,615f, 117,3378f, 1423,385f), Vector(0.0f, 20.0f, 0.0f), Vector(5,139093f, 1,794266f, 5,226905f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 296, &iLocal_218 + 248[4]);
	*(&iLocal_218 + 408) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_rabbits_set");
	*(&iLocal_218 + 304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder48", 4,203895E-45f, Vector(-52.0f, 115,8573f, 1392f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[0]);
	*(&iLocal_218 + 304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder37", 4,203895E-45f, Vector(-142,1185f, 119,873f, 1330,118f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[1]);
	*(&iLocal_218 + 304[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder38", 4,203895E-45f, Vector(-68,00003f, 115,4509f, 1312.0f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[2]);
	*(&iLocal_218 + 304[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder39", 4,203895E-45f, Vector(-68.0f, 109,4274f, 1240f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[3]);
	*(&iLocal_218 + 304[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder40", 4,203895E-45f, Vector(-126,9363f, 119,1996f, 1413,063f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[4]);
	*(&iLocal_218 + 304[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder41", 4,203895E-45f, Vector(-168,3213f, 130,5098f, 1359,679f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[5]);
	*(&iLocal_218 + 304[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder42", 4,203895E-45f, Vector(-34,86451f, 114,8534f, 1338,864f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[6]);
	*(&iLocal_218 + 304[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder43", 4,203895E-45f, Vector(-107,7995f, 120,4202f, 1296,201f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[7]);
	*(&iLocal_218 + 304[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder44", 4,203895E-45f, Vector(-76,00006f, 120,1521f, 1456f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[8]);
	*(&iLocal_218 + 304[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder45", 4,203895E-45f, Vector(-4,000122f, 124,4863f, 1408.0f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[9]);
	*(&iLocal_218 + 304[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder46", 4,203895E-45f, Vector(-141,0574f, 119,5849f, 1386,943f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[10]);
	*(&iLocal_218 + 304[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder47", 4,203895E-45f, Vector(-22,53343f, 112,4392f, 1261,466f), Vector(0.0f, 20.0f, 0.0f), Vector(7,05255f, 2,496348f, 5,267528f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 408, &iLocal_218 + 304[11]);
	*(&iLocal_218 + 432) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_cows_set");
	*(&iLocal_218 + 416[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_cows_01", 4,203895E-45f, Vector(-45,05925f, 120,609f, 1422,781f), Vector(0.0f, 38,41506f, 0.0f), Vector(16,29232f, 7,023007f, 13,87195f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 432, &iLocal_218 + 416[0]);
	*(&iLocal_218 + 472) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_chickens_set");
	*(&iLocal_218 + 440[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_chickens_02", 4,203895E-45f, Vector(-80,60326f, 116,8612f, 1388,983f), Vector(0.0f, -19,65128f, 0.0f), Vector(14,88558f, 9,508287f, 13,3716f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 472, &iLocal_218 + 440[0]);
	*(&iLocal_218 + 440[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_chickens_01", 4,203895E-45f, Vector(-74,63905f, 116,8612f, 1429,293f), Vector(0.0f, -27,39087f, 0.0f), Vector(11,25775f, 4,696454f, 6,604669f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 472, &iLocal_218 + 440[1]);
	*(&iLocal_218 + 440[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_chickens_03", 4,203895E-45f, Vector(-56,29144f, 116,8612f, 1397,338f), Vector(0.0f, -27,39087f, 0.0f), Vector(11,25775f, 4,696454f, 6,604669f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 472, &iLocal_218 + 440[2]);
	*(&iLocal_218 + 536) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_raccoons_set");
	*(&iLocal_218 + 480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder70", 4,203895E-45f, Vector(-139,5576f, 119,873f, 1315,027f), Vector(0.0f, 20.0f, 0.0f), Vector(9,443813f, 2,918191f, 11,97561f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 536, &iLocal_218 + 480[0]);
	*(&iLocal_218 + 480[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder71", 4,203895E-45f, Vector(-129,2677f, 118,9682f, 1398,732f), Vector(0.0f, 20.0f, 0.0f), Vector(9,443813f, 2,918191f, 11,97561f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 536, &iLocal_218 + 480[1]);
	*(&iLocal_218 + 480[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder72", 4,203895E-45f, Vector(-40.0f, 114,8534f, 1345,129f), Vector(0.0f, 20.0f, 0.0f), Vector(9,443813f, 2,918191f, 11,97561f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 536, &iLocal_218 + 480[2]);
	*(&iLocal_218 + 480[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder73", 4,203895E-45f, Vector(-59,99997f, 117,5116f, 1448,907f), Vector(0.0f, 20.0f, 0.0f), Vector(9,443813f, 2,918191f, 11,97561f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 536, &iLocal_218 + 480[3]);
	*(&iLocal_218 + 480[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder74", 4,203895E-45f, Vector(-94,64262f, 117,7208f, 1309,357f), Vector(0.0f, 20.0f, 0.0f), Vector(9,443813f, 2,918191f, 11,97561f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 536, &iLocal_218 + 480[4]);
	*(&iLocal_218 + 480[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "Cylinder75", 4,203895E-45f, Vector(-104.0f, 117,6285f, 1435,895f), Vector(0.0f, 20.0f, 0.0f), Vector(9,443813f, 2,918191f, 11,97561f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 536, &iLocal_218 + 480[5]);
	*(&iLocal_218 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_Gazeebo", 4,203895E-45f, Vector(-138,9021f, 122,0557f, 1343,487f), Vector(0.0f, 20.0f, 0.0f), Vector(4,662525f, 5,287941f, 4,494165f));
	*(&iLocal_218 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "nbehv_pigs", 4,203895E-45f, Vector(-68,68354f, 117,6394f, 1420,286f), Vector(0.0f, 151,5752f, 0.0f), Vector(5,022824f, 2,106935f, 2,633704f));
	*(&iLocal_218 + 560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_horseshoepit", 2,802597E-45f, Vector(-128,0414f, 121,6508f, 1359,829f), Vector(0.0f, 20,68785f, 0.0f), Vector(3,484789f, 7,731788f, 16,41608f));
	*(&iLocal_218 + 568) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_poker", 4,203895E-45f, Vector(-138,9021f, 122,0557f, 1343,487f), Vector(0.0f, 20.0f, 0.0f), Vector(4,464867f, 5,063769f, 4,303644f));
	*(&iLocal_218 + 592) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_dogs_set");
	*(&iLocal_218 + 576[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_cows_02", 4,203895E-45f, Vector(-114,8615f, 120,609f, 1388,945f), Vector(0.0f, 57,58054f, 0.0f), Vector(57,39077f, 13,55771f, 48,58187f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 592, &iLocal_218 + 576[0]);
	*(&iLocal_218 + 632) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_horses_set");
	*(&iLocal_218 + 600[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_horses_01", 4,203895E-45f, Vector(-11,71539f, 120,609f, 1324,419f), Vector(0.0f, 99,75596f, 0.0f), Vector(96,33447f, 23,08625f, 45,60031f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 632, &iLocal_218 + 600[0]);
	*(&iLocal_218 + 600[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_horses_02", 4,203895E-45f, Vector(-63,50056f, 120,609f, 1488,672f), Vector(0.0f, 157,4514f, 0.0f), Vector(48,72891f, 18,5713f, 36,68232f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 632, &iLocal_218 + 600[1]);
	*(&iLocal_218 + 600[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_horses_03", 4,203895E-45f, Vector(-4,260359f, 120,609f, 1444,016f), Vector(0.0f, 59,2851f, 0.0f), Vector(61,44287f, 14,64924f, 18,05786f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 632, &iLocal_218 + 600[2]);
	*(&iLocal_218 + 672) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_218, "behv_house_set");
	*(&iLocal_218 + 640[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_house_01", 2,802597E-45f, Vector(-106,9257f, 121,1451f, 1358,415f), Vector(-0,4197603f, -32,73133f, 0,379723f), Vector(17,18523f, 10,05878f, 19,03523f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 672, &iLocal_218 + 640[0]);
	*(&iLocal_218 + 640[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_house_02", 2,802597E-45f, Vector(-106,4989f, 121,8808f, 1366,092f), Vector(-0,4117201f, -31,6991f, 0,3754366f), Vector(14,73208f, 8,622916f, 18,70563f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 672, &iLocal_218 + 640[1]);
	*(&iLocal_218 + 640[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_house_03", 2,802597E-45f, Vector(-111,4712f, 119,0865f, 1345,575f), Vector(-0,4117201f, -31,6991f, 0,3754366f), Vector(9,695052f, 8,622916f, 6,011496f));
	ADD_TO_VOLUME_SET(&iLocal_218 + 672, &iLocal_218 + 640[2]);
	*(&iLocal_218 + 680) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_218, "behv_crows", 4,203895E-45f, Vector(-68,33138f, 125,2768f, 1370,704f), Vector(0.0f, -19,65128f, 0.0f), Vector(12,2071f, 23,80665f, 10,96554f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "behf_report_crime_road", Vector(-111,175f, 117,682f, 1406,401f), Vector(0.0f, 164,848f, 0.0f));
	*(&iLocal_218 + 688) = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", &iLocal_218, 8, 0);
	*(&iLocal_218 + 696[03]) = Vector(-58,57379f, 116,8612f, 1416f);
	*(&iLocal_218 + 696[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "cornDest", Vector(-58,57379f, 116,8612f, 1416f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_218 + 688);
	*(&iLocal_218 + 728) = Vector(-109,3899f, 119,4007f, 1362,701f);
	*(&iLocal_218 + 728 + 12) = Vector(0.0f, 146,0974f, 0.0f);
	*(&iLocal_218 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "behf_interiorPoint_house", Vector(-109,3899f, 119,4007f, 1362,701f), Vector(0.0f, 146,0974f, 0.0f));
	*(&iLocal_218 + 760) = Vector(-65,36214f, 116,9683f, 1411,571f);
	*(&iLocal_218 + 760 + 12) = Vector(0.0f, 59,67083f, 0.0f);
	*(&iLocal_218 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "behf_interiorPoint_barn", Vector(-65,36214f, 116,9683f, 1411,571f), Vector(0.0f, 59,67083f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos1", Vector(-151,07f, 121,474f, 1348,16f), Vector(-0,009f, -97,681f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos2", Vector(-98,324f, 120,133f, 1306,242f), Vector(3,51f, -172,414f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos3", Vector(-4,54f, 124,924f, 1406,104f), Vector(-5,678f, 87,792f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos4", Vector(-83,186f, 122,306f, 1477,686f), Vector(0,709f, 3,346f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos5", Vector(-125,265f, 122,345f, 1313,298f), Vector(-1,65f, -150,202f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos6", Vector(-73,24f, 128,5089f, 1368,69f), Vector(-6,288558f, -174,648f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos7", Vector(-140,25f, 120,466f, 1341,238f), Vector(1,203f, -122,996f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos8", Vector(-103,1647f, 120,4411f, 1371,667f), Vector(-0,02092119f, -66,07418f, 2,634905f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos9", Vector(-79,614f, 117,407f, 1418,148f), Vector(13,415f, -64,102f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_218, "beh_vista_cam_pos10", Vector(-69,35431f, 120,996f, 1409,923f), Vector(6,253f, 43,675f, 0.0f));
	return 1;
}

void Function_254(int iParam0, int iParam1) //Position: 0xFD1B / 64795
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

void Function_255(var uParam0, int iParam1) //Position: 0xFD65 / 64869
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_256() //Position: 0xFD76 / 64886
{
	return;
}

bool Function_257() //Position: 0xFD7C / 64892
{
	return 1;
}

void Function_258() //Position: 0xFD83 / 64899
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	return;
}

bool Function_259() //Position: 0xFD9D / 64925
{
	return Function_260();
}

int Function_260() //Position: 0xFDA6 / 64934
{
	int iVar0;
	
	Function_254(3, 3);
	iVar0 = &iVar0;
	Function_169(&iLocal_178 + 8, "p_gen_debrisBoard01x", 0, 0);
	Function_169(&iLocal_178 + 8, "p_gen_debrisBoard06x", 0, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_ground", 1, 0);
	if (!Function_164(&iLocal_178 + 8))
	{
		return 0;
	}
	iLocal_178 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("BeechersHope_layout");
	}
	*(&iLocal_178 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "volume_ring", 4,203895E-45f, Vector(-39,807f, 118,0408f, 1421,272f), Vector(0.0f, 250,874f, 0.0f), Vector(10,66521f, 3,031578f, 9,346188f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_HorseBreaking", Vector(-39,807f, 116,861f, 1421,272f), Vector(0.0f, 250,874f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "flag_helper", Vector(-38,2962f, 116,861f, 1419,669f), Vector(0.0f, 281,199f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_playerpos", Vector(-36,231f, 116,861f, 1418,899f), Vector(0.0f, 155,044f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_onlooker", Vector(-37,93142f, 116,8612f, 1424,651f), Vector(0.0f, 27,66844f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_onlooker1", Vector(-36f, 116,8612f, 1423,091f), Vector(0.0f, 68,23293f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_onlooker2", Vector(-40,69986f, 116,8612f, 1424,7f), Vector(0.0f, -13,77079f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_onlooker3", Vector(-41,96623f, 116,8612f, 1417,966f), Vector(0.0f, -149,4004f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_BullRiding", Vector(-39,807f, 116,861f, 1421,272f), Vector(0.0f, -110,6603f, 0.0f));
	*(&iLocal_178 + 72) = Vector(-110,2831f, 118,8691f, 1374,114f);
	*(&iLocal_178 + 72 + 12) = Vector(0.0f, -137,9937f, 0.0f);
	*(&iLocal_178 + 96) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_playerHorse", Vector(-110,2831f, 118,8691f, 1374,114f), Vector(0.0f, -137,9937f, 0.0f));
	*(&iLocal_178 + 104) = Vector(-67,48105f, 119,9005f, 1411,475f);
	*(&iLocal_178 + 104 + 12) = Vector(0.0f, -116.0f, 0.0f);
	*(&iLocal_178 + 128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "player_save_01", Vector(-67,48105f, 119,9005f, 1411,475f), Vector(0.0f, -116.0f, 0.0f));
	*(&iLocal_178 + 136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ZP_player_sleep_ground", "ZombiePack_player_sleep_ground", Vector(-68,09084f, 119,9005f, 1411,412f), Vector(0.0f, -114,6849f, 0.0f));
	*(&iLocal_178 + 144) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "debrisBoard01x0", "p_gen_debrisBoard01x", Vector(-112,4363f, 120,9592f, 1366,521f), Vector(-90,42858f, -32,64025f, -0,168901f), 0);
	*(&iLocal_178 + 152) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "debrisBoard06x0", "p_gen_debrisBoard06x", Vector(-101,5621f, 120,9572f, 1350,486f), Vector(85,35818f, -30,85748f, 2,384655f), 0);
	return 1;
}

void Function_261(bool bParam0, bool bParam1) //Position: 0x10202 / 66050
{
	var uVar0;
	
	if (Global_6623 || Function_9(0x8000000))
	{
		return;
	}
	uVar0 = Function_39(bParam0);
	if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46914[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (&bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_262(int iParam0, bool bParam1, bool bParam2) //Position: 0x1029D / 66205
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_7(&iParam0 + 608, 16);
	if (!&bParam2)
	{
		if (!Function_264(bParam1))
		{
			Function_197(&iParam0 + 608, 16);
			return;
		}
	}
	*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_92(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_263(&iParam0 + 384, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (&bParam2)
	{
		Function_169(&iParam0 + 384, "tense_with_guns", 5, 1);
		Function_169(&iParam0 + 384, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		*(&iParam0 + 376) = 1;
	}
	Function_164(&iParam0 + 384);
	if (HUD_IS_FADED())
	{
		Function_41(bParam1, Function_34(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_263(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x103A9 / 66473
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_20(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_167(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_167(&(Param0[iVar02]), 8);
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

bool Function_264(int iParam0) //Position: 0x10485 / 66693
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_268(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_266(0))
		{
			return 0;
		}
		if ((!Function_42(24) || Function_265(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_265(int iParam0) //Position: 0x10500 / 66816
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_266(int iParam0) //Position: 0x10515 / 66837
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_267(iParam0)7].f_12 < 0;
}

int Function_267(int iParam0) //Position: 0x1057B / 66939
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

bool Function_268(int iParam0, int iParam1) //Position: 0x1063D / 67133
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_269() //Position: 0x1065A / 67162
{
	Function_169(&iLocal_594, "p_gen_food01x", 0, 0);
	Function_169(&iLocal_594, "p_gen_food02x", 0, 0);
	Function_169(&iLocal_594, "p_gen_glass01x", 0, 0);
	Function_263(&iLocal_594, 1230, 3, 0);
	Function_263(&iLocal_594, 1232, 3, 0);
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
	return;
}

void Function_270(char* cParam0) //Position: 0x106FF / 67327
{
	if (!Function_9(128))
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

