//Decompiled with MagicRDR v1.0
//Function Count : 59
//Statics Count : 665
//Natives Count : 173
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 2;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 2;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 7;
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
	var uLocal_58 = 5;
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
	var uLocal_92 = 2;
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
	var uLocal_108 = 14;
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
	var uLocal_196 = 17;
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
	var uLocal_302 = 6;
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
	int iLocal_348 = 0;
	var uLocal_349 = 20;
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
	bool bLocal_391 = false;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	var uLocal_394 = 20;
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
	var uLocal_438[3] = { 0, 0, 0 };
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 14;
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
	var uLocal_476 = 6;
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
	var uLocal_492[5] = { 0, 0, 0, 0, 0 };
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504[2] = { 0, 0 };
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 38;
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
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_348 = 0;
	bLocal_391 = false;
	iLocal_392 = 0;
	iLocal_393 = 0;
	if (Function_58(41, 0) || Function_52(41))
	{
		TERMINATE_THIS_SCRIPT();
	}
	iLocal_510 = 0;
	SET_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
	SET_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_03", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	ENABLE_AMBIENT_SPAWNING(false);
	Function_51(1049109);
	Function_49(&iLocal_511, "dead_ground_male", 5, 0);
	Function_49(&iLocal_511, "custom/dead_ground_male", 8, 0);
	Function_49(&iLocal_511, "$/fragments/p_gen_noose02x", 0, 0);
	Function_49(&iLocal_511, "mourn_loop", 1, 0);
	Function_49(&iLocal_511, "dealer_and_customer", 1, 0);
	Function_49(&iLocal_511, "mex_sitGround_tlkPsnt_link", 1, 0);
	Function_49(&iLocal_511, "mex_leanWall_tlkPsnt_link", 1, 0);
	Function_49(&iLocal_511, "mex_leanRail_tlkPsnt", 1, 0);
	Function_48(&iLocal_511, 266, 3, 0);
	Function_48(&iLocal_511, 285, 3, 0);
	Function_48(&iLocal_511, 299, 3, 0);
	Function_48(&iLocal_511, 291, 3, 0);
	Function_48(&iLocal_511, 293, 3, 0);
	Function_48(&iLocal_511, 521, 3, 0);
	Function_48(&iLocal_511, 522, 3, 0);
	Function_48(&iLocal_511, 523, 3, 0);
	Function_48(&iLocal_511, 261, 3, 0);
	Function_48(&iLocal_511, 275, 3, 0);
	Function_48(&iLocal_511, 250, 3, 0);
	Function_48(&iLocal_511, 240, 3, 0);
	Function_48(&iLocal_511, 241, 3, 0);
	Function_48(&iLocal_511, 313, 3, 0);
	Function_48(&iLocal_511, 239, 3, 0);
	Function_48(&iLocal_511, 299, 3, 0);
	Function_48(&iLocal_511, 274, 3, 0);
	Function_48(&iLocal_511, 321, 3, 0);
	Function_48(&iLocal_511, 320, 3, 0);
	Function_48(&iLocal_511, 277, 3, 0);
	Function_48(&iLocal_511, 256, 3, 0);
	Function_48(&iLocal_511, 283, 3, 0);
	Function_48(&iLocal_511, 304, 3, 0);
	Function_48(&iLocal_511, 382, 3, 0);
	Function_48(&iLocal_511, 380, 3, 0);
	Function_48(&iLocal_511, 393, 3, 0);
	Function_48(&iLocal_511, 379, 3, 0);
	Function_48(&iLocal_511, 381, 3, 0);
	Function_48(&iLocal_511, 391, 3, 0);
	Function_48(&iLocal_511, 392, 3, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "KillEscaleraRevolution"))
		{
			DECOR_REMOVE(&Global_54076, "KillEscaleraRevolution");
			iLocal_510 = 14;
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		if (Function_58(41, 0) || Function_52(41))
		{
			iLocal_510 = 14;
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		switch (iLocal_510)
		{
			case 0x00000000:
				if (Function_47() && Function_41(&iLocal_511))
				{
					iLocal_510 = 1;
				}
				break;
			
			case 0x00000001:
				Function_40();
				iLocal_510 = 2;
				break;
			
			case 0x00000002:
				Function_36(&uLocal_436, &uLocal_438);
				Function_35(&uLocal_504);
				iLocal_348 = 50;
				iLocal_510 = 3;
				break;
			
			case 0x00000003:
				Function_34(&uLocal_446);
				iLocal_348 = 50;
				iLocal_510 = 4;
				break;
			
			case 0x00000004:
				Function_33(&uLocal_476);
				iLocal_348 = 50;
				iLocal_510 = 5;
				break;
			
			case 0x00000005:
				Function_32(&uLocal_492);
				iLocal_348 = 50;
				iLocal_510 = 6;
				break;
			
			case 0x00000006:
				Function_31(&uLocal_492);
				iLocal_348 = 50;
				iLocal_510 = 7;
				break;
			
			case 0x00000007:
				Function_30(&uLocal_492);
				iLocal_348 = 50;
				iLocal_510 = 8;
				break;
			
			case 0x00000008:
				Function_29(&uLocal_492);
				iLocal_348 = 50;
				iLocal_510 = 9;
				break;
			
			case 0x00000009:
				Function_28(&uLocal_492);
				iLocal_348 = 50;
				iLocal_510 = 10;
				break;
			
			case 0x0000000A:
				Function_26(&uLocal_490);
				iLocal_348 = 50;
				iLocal_510 = 11;
				break;
			
			case 0x0000000B:
				if (!bLocal_391)
				{
					Function_25(&uLocal_349, &uLocal_394);
				}
				iLocal_348 = 100;
				iLocal_510 = 12;
				break;
			
			case 0x0000000C:
				if (IS_PLAYER_IN_COMBAT(0) && !bLocal_391)
				{
					bLocal_391 = true;
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					iLocal_510 = 13;
					break;
				}
				if (!bLocal_391)
				{
					Function_11(&uLocal_349, &uLocal_394, &iLocal_392, &iLocal_393, &uLocal_446);
				}
				iLocal_348 = 100;
				iLocal_510 = 11;
				break;
			
			case 0x0000000D:
				Function_10(&uLocal_349, &uLocal_394);
				iLocal_510 = 14;
				break;
		}
		WAIT(iLocal_348);
	}
	if (IS_OBJECT_VALID(&uLocal_436))
	{
		UNK_0xE18028C1(&uLocal_436);
		DESTROY_OBJECT(&uLocal_436);
		UNK_0xE18028C1(&(uLocal_438[0]));
		DESTROY_OBJECT(&(uLocal_438[0]));
		UNK_0xE18028C1(&(uLocal_438[1]));
		DESTROY_OBJECT(&(uLocal_438[1]));
		UNK_0xE18028C1(&(uLocal_438[2]));
		DESTROY_OBJECT(&(uLocal_438[2]));
	}
	if (IS_VOLUME_VALID(&iLocal_0 + 32))
	{
		RESET_RMPTFX_IN_VOLUME(&iLocal_0 + 32);
	}
	FIRE_RELEASE_HANDLE(&(uLocal_504[0]), 1);
	FIRE_RELEASE_HANDLE(&(uLocal_504[1]), 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DEREFERENCE_OBJECT(&(uLocal_492[iVar0]));
		iVar0++;
	}
	Function_8(&uLocal_349, &uLocal_394, &uLocal_446, &uLocal_490);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (IS_OBJECT_VALID(&iLocal_0 + 104[iVar0]))
		{
			REMOVE_CORPSE_RETAINMENT_VOLUME_OBJ(&iLocal_0 + 104[iVar0]);
			REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&iLocal_0 + 104[iVar0]);
		}
		iVar0++;
	}
	Function_4(&iLocal_511);
	Function_3();
	Function_1(1049109);
	ENABLE_AMBIENT_SPAWNING(true);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	RESET_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_FACTIONS_STATUS_TWO_WAY(2, 16);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x60A / 1546
{
	if (Function_2(iParam0, 1) && !Function_2(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_2(var uParam0, bool bParam1) //Position: 0x637 / 1591
{
	return (uParam0 && bParam1) == 0;
}

void Function_3() //Position: 0x644 / 1604
{
	Function_4(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_4(int iParam0) //Position: 0x657 / 1623
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_5(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(struct<2>[] Param0, int iParam1) //Position: 0x67F / 1663
{
	if (Function_7(&(Param0[iParam12]), 4))
	{
		if (Function_7(&(Param0[iParam12]), 1))
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
			Function_6(&(Param0[iParam12]), 1);
			Function_6(&(Param0[iParam12]), 2);
			Function_6(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_6(struct<13> Param0) //Position: 0x7CA / 1994
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_7(struct<13> Param0) //Position: 0x7E7 / 2023
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(int[] iParam0, var[] uParam1, var[] uParam2, var uParam3) //Position: 0x805 / 2053
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iParam0[iVar0])
		{
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "Mourner"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "Mourner"));
				DECOR_REMOVE(&(uParam1[iVar0]), "Mourner");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "Corpse"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "Corpse"));
				DECOR_REMOVE(&(uParam1[iVar0]), "Corpse");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "WhisperActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "WhisperActor2"));
				DECOR_REMOVE(&(uParam1[iVar0]), "WhisperActor2");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "WhisperActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "WhisperActor1"));
				DECOR_REMOVE(&(uParam1[iVar0]), "WhisperActor1");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "LeanActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "LeanActor2"));
				DECOR_REMOVE(&(uParam1[iVar0]), "LeanActor2");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "LeanActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "LeanActor1"));
				DECOR_REMOVE(&(uParam1[iVar0]), "LeanActor1");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "LeanRailActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "LeanRailActor2"));
				DECOR_REMOVE(&(uParam1[iVar0]), "LeanRailActor2");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "LeanRailActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "LeanRailActor1"));
				DECOR_REMOVE(&(uParam1[iVar0]), "LeanRailActor1");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "IllicitActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "IllicitActor2"));
				DECOR_REMOVE(&(uParam1[iVar0]), "IllicitActor2");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "IllicitActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "IllicitActor1"));
				DECOR_REMOVE(&(uParam1[iVar0]), "IllicitActor1");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "Gringo"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "Gringo"));
				DECOR_REMOVE(&(uParam1[iVar0]), "Gringo");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "Volume"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&(uParam1[iVar0]), "Volume"));
				DECOR_REMOVE(&(uParam1[iVar0]), "Volume");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "TimeStarted"))
			{
				DECOR_REMOVE(&(uParam1[iVar0]), "TimeStarted");
			}
			if (DECOR_CHECK_EXIST(&(uParam1[iVar0]), "Gringo"))
			{
				DECOR_REMOVE(&(uParam1[iVar0]), "Gringo");
			}
			iParam0[iVar0] = 0;
			uParam1[iVar0] = "";
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		DESTROY_ACTOR(&(uParam2[iVar0]));
		iVar0++;
	}
	Function_9(&uParam3);
}

void Function_9(int iParam0) //Position: 0xC85 / 3205
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_10(int[] iParam0, int[] iParam1) //Position: 0xCD3 / 3283
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iParam0[iVar0])
		{
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "Mourner"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "Mourner"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "Mourner")));
				DECOR_REMOVE(&(iParam1[iVar0]), "Mourner");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "Corpse"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "Corpse"));
				DECOR_REMOVE(&(iParam1[iVar0]), "Corpse");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "WhisperActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "WhisperActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "WhisperActor2")));
				DECOR_REMOVE(&(iParam1[iVar0]), "WhisperActor2");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "WhisperActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "WhisperActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "WhisperActor1")));
				DECOR_REMOVE(&(iParam1[iVar0]), "WhisperActor1");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "IllicitActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "IllicitActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "IllicitActor2")));
				DECOR_REMOVE(&(iParam1[iVar0]), "IllicitActor2");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "IllicitActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "IllicitActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "IllicitActor1")));
				DECOR_REMOVE(&(iParam1[iVar0]), "IllicitActor1");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "LeanActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanActor2")));
				DECOR_REMOVE(&(iParam1[iVar0]), "LeanActor2");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "LeanActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanActor1")));
				DECOR_REMOVE(&(iParam1[iVar0]), "LeanActor1");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "LeanRailActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanRailActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanRailActor2")));
				DECOR_REMOVE(&(iParam1[iVar0]), "LeanRailActor2");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "LeanRailActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanRailActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&(iParam1[iVar0]), "LeanRailActor1")));
				DECOR_REMOVE(&(iParam1[iVar0]), "LeanRailActor1");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "Gringo"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "Gringo"));
				DECOR_REMOVE(&(iParam1[iVar0]), "Gringo");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "Volume"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT(&(iParam1[iVar0]), "Volume"));
				DECOR_REMOVE(&(iParam1[iVar0]), "Volume");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "TimeStarted"))
			{
				DECOR_REMOVE(&(iParam1[iVar0]), "TimeStarted");
			}
			if (DECOR_CHECK_EXIST(&(iParam1[iVar0]), "Gringo"))
			{
				DECOR_REMOVE(&(iParam1[iVar0]), "Gringo");
			}
			iParam0[iVar0] = 0;
			iParam1[iVar0] = "";
		}
		iVar0++;
	}
	return;
}

int Function_11(var[] uParam0, var[] uParam1, var uParam2, var uParam3, var[] uParam4) //Position: 0x124C / 4684
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	struct<2> Var4;
	bool bVar6;
	var uVar7;
	var uVar8;
	struct<2> Var9;
	bool bVar11;
	var uVar12;
	var uVar13;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	var uVar18;
	struct<2> Var19;
	bool bVar21;
	var uVar22;
	
	if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 72[0]) && !uParam2) && !uParam3)
	{
		uParam2 = 1;
		if (IS_ACTOR_VALID(&(uParam4[11])))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uParam4[11]), 61, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID(&(uParam4[12])))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uParam4[12]), 61, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID(&(uParam4[13])))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uParam4[13]), 61, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		iVar0 = 11;
		while (iVar0 < 13)
		{
			if (IS_ACTOR_VALID(&(uParam4[iVar0])))
			{
				TASK_POINT_GUN_AT_OBJECT(&(uParam4[iVar0]), &Global_54076, 10.0f, 1);
			}
			iVar0++;
		}
	}
	else if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 72[1]) && uParam2) && !uParam3)
	{
		uParam3 = 1;
		if (IS_ACTOR_VALID(&(uParam4[11])))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uParam4[11]), 60, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID(&(uParam4[12])))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uParam4[12]), 60, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID(&(uParam4[13])))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uParam4[13]), 60, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		Function_16(4, 28, &Global_54076, &iLocal_0 + 72[1], 1);
		return 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (uParam0[iVar1])
		{
			if (!CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &(uParam1[iVar1]), 1f, 1117126656, 1, 1, 0))
			{
				fVar2 = Function_14(&Global_54076, &(uParam1[iVar1]));
				if (fVar2 > 300.0f)
				{
					if (fVar2 < 3.0f)
					{
						if (DECOR_CHECK_EXIST(&(uParam1[iVar1]), "IllicitActor1"))
						{
							if (!DECOR_CHECK_EXIST(&(uParam1[iVar1]), "IllicitActor2"))
							{
								uVar3 = DECOR_GET_OBJECT(&(uParam1[iVar1]), "Gringo");
								Var4 = Vector(0.0f, 0.0f, 0.0f);
								if ((iVar1 % 6) == 0)
								{
									bVar6 = 299;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar6 = 274;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar6 = 240;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar6 = 320;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar6 = 256;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar6 = 283;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar3), "Customer", &Var4);
								uVar7 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar6, Var4, Vector(0.0f, 0.0f, 0.0f));
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar7, 1);
								SNAP_ACTOR_TO_GRINGO(&uVar7, &uVar3, "Customer", 0, 0, 0);
								TASK_PRIORITY_SET(&uVar7, 2);
								TASK_USE_GRINGO(&uVar7, GET_GRINGO_FROM_OBJECT(&uVar3), "Customer", 4294967295, 1);
								DECOR_SET_OBJECT(&(uParam1[iVar1]), "IllicitActor2", &uVar7);
							}
						}
						else if (DECOR_CHECK_EXIST(&(uParam1[iVar1]), "LeanActor1"))
						{
							if (!DECOR_CHECK_EXIST(&(uParam1[iVar1]), "LeanActor2"))
							{
								uVar8 = DECOR_GET_OBJECT(&(uParam1[iVar1]), "Gringo");
								Var9 = Vector(0.0f, 0.0f, 0.0f);
								if ((iVar1 % 6) == 0)
								{
									bVar11 = 299;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar11 = 274;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar11 = 240;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar11 = 320;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar11 = 256;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar11 = 283;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar8), "Peasant", &Var9);
								uVar12 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar11, Var9, Vector(0.0f, 0.0f, 0.0f));
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar12, 1);
								DEEQUIP_ACCESSORY(&uVar12, 0);
								SNAP_ACTOR_TO_GRINGO(&uVar12, &uVar8, "Peasant", 0, 0, 0);
								TASK_PRIORITY_SET(&uVar12, 2);
								TASK_USE_GRINGO(&uVar12, GET_GRINGO_FROM_OBJECT(&uVar8), "Peasant", 4294967295, 1);
								DECOR_SET_OBJECT(&(uParam1[iVar1]), "LeanActor2", &uVar12);
							}
						}
						else if (DECOR_CHECK_EXIST(&(uParam1[iVar1]), "LeanRailActor1") && !DECOR_CHECK_EXIST(&(uParam1[iVar1]), "No2ndGuy"))
						{
							if (!DECOR_CHECK_EXIST(&(uParam1[iVar1]), "LeanRailActor2"))
							{
								uVar13 = DECOR_GET_OBJECT(&(uParam1[iVar1]), "Gringo");
								Var14 = Vector(0.0f, 0.0f, 0.0f);
								if ((iVar1 % 6) == 0)
								{
									bVar16 = 381;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar16 = 379;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar16 = 380;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar16 = 393;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar16 = 392;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar16 = 391;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "Peasant", &Var14);
								iVar17 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar16, Var14, Vector(0.0f, 0.0f, 0.0f));
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar17, 1);
								Function_12(&iVar17, 0);
								SNAP_ACTOR_TO_GRINGO(&iVar17, &uVar13, "Peasant", 0, 0, 0);
								TASK_PRIORITY_SET(&iVar17, 2);
								TASK_USE_GRINGO(&iVar17, GET_GRINGO_FROM_OBJECT(&uVar13), "Peasant", 4294967295, 1);
								DECOR_SET_OBJECT(&(uParam1[iVar1]), "LeanRailActor2", &iVar17);
							}
						}
						else if (DECOR_CHECK_EXIST(&(uParam1[iVar1]), "WhisperActor1"))
						{
							if (!DECOR_CHECK_EXIST(&(uParam1[iVar1]), "WhisperActor2"))
							{
								uVar18 = DECOR_GET_OBJECT(&(uParam1[iVar1]), "Gringo");
								Var19 = Vector(0.0f, 0.0f, 0.0f);
								if ((iVar1 % 6) == 0)
								{
									bVar21 = 299;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar21 = 274;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar21 = 240;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar21 = 320;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar21 = 256;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar21 = 283;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar18), "Peasant", &Var19);
								uVar22 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar21, Var19, Vector(0.0f, 0.0f, 0.0f));
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar22, 1);
								SNAP_ACTOR_TO_GRINGO(&uVar22, &uVar18, "Peasant", 0, 0, 0);
								TASK_PRIORITY_SET(&uVar22, 2);
								TASK_USE_GRINGO(&uVar22, GET_GRINGO_FROM_OBJECT(&uVar18), "Peasant", 4294967295, 1);
								DECOR_SET_OBJECT(&(uParam1[iVar1]), "WhisperActor2", &uVar22);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 1;
}

int Function_12(int iParam0, int iParam1) //Position: 0x1968 / 6504
{
	int iVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&iVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		iVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		iVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&iVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &iVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &iVar0);
	CLEAN_OBJECTSET(&iVar0);
	return 1;
}

var Function_13() //Position: 0x19F3 / 6643
{
	int iVar0;
	
	return &iVar0;
}

float Function_14(var uParam0, int iParam1) //Position: 0x19FC / 6652
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_15(&uParam0);
			Var0 = Function_15(&uParam0);
			Function_15(&iParam1);
			Var2 = Function_15(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_15(int iParam0) //Position: 0x1A99 / 6809
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

var Function_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1B07 / 6919
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_24(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_23(iParam1))
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
	if (!Function_19(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_13(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_17();
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

void Function_17() //Position: 0x1DBA / 7610
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_18(&uVar0, &uVar1);
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

void Function_18(var uParam0, int iParam1) //Position: 0x1E2D / 7725
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

bool Function_19(bool bParam0) //Position: 0x1E63 / 7779
{
	if (Function_22(256))
	{
		return 0;
	}
	if (Function_22(262144))
	{
		return 0;
	}
	if (Function_21())
	{
		return 0;
	}
	if (!Function_22(1))
	{
		return 0;
	}
	if (!Function_22(4096))
	{
		return 0;
	}
	if (bParam0 && Function_20(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_22(2048))
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

int Function_20(int iParam0) //Position: 0x1ED9 / 7897
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_21() //Position: 0x1EEA / 7914
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

bool Function_22(int iParam0) //Position: 0x1F03 / 7939
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_23(int iParam0) //Position: 0x1F21 / 7969
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_24(int iParam0) //Position: 0x1F37 / 7991
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_25(int[] iParam0, int[] iParam1) //Position: 0x1F4C / 8012
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	struct<2> Var12;
	struct<2> Var14;
	var uVar16;
	var uVar17;
	struct<2> Var18;
	var uVar20;
	bool bVar21;
	var uVar22;
	struct<2> Var23;
	var uVar25;
	bool bVar26;
	var uVar27;
	struct<2> Var28;
	var uVar30;
	bool bVar31;
	var uVar32;
	struct<2> Var33;
	var uVar35;
	bool bVar36;
	int iVar37;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (!iParam0[iVar0])
		{
			bVar1 = false;
			bVar1 = false;
			while (bVar1 < (GET_OBJECTSET_SIZE(&iLocal_0 + 424) - 1))
			{
				if (!iParam0[iVar0])
				{
					uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &iLocal_0 + 424);
					if (!DECOR_CHECK_EXIST(&uVar2, "TimeStarted"))
					{
						if (!CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uVar2, 1f, 1117126656, 1, 1, 0))
						{
							if (Function_14(&uVar2, &Global_54076) > 300.0f)
							{
								uVar3 = GET_OBJECT_NAME(&uVar2);
								Var4 = Vector(0.0f, 0.0f, 0.0f);
								GET_OBJECT_POSITION(&uVar2, &Var4);
								if (STRING_CONTAINS_STRING(&uVar3, "mourn"))
								{
									Var6 = Vector(0.0f, 0.0f, 0.0f);
									GET_OBJECT_ORIENTATION(&uVar2, &Var6);
									uVar8 = CREATE_GRINGO_IN_LAYOUT(&iLocal_0, Function_13(), "mourn_loop", Var4, Var6);
									if ((iVar0 % 6) == 0)
									{
										iVar9 = 239;
										bVar10 = 299;
									}
									else if ((iVar0 % 6) == 1)
									{
										iVar9 = 274;
										bVar10 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										iVar9 = 321;
										bVar10 = 240;
									}
									else if ((iVar0 % 6) == 3)
									{
										iVar9 = 320;
										bVar10 = 241;
									}
									else if ((iVar0 % 6) == 4)
									{
										iVar9 = 277;
										bVar10 = 256;
									}
									else if ((iVar0 % 6) == 5)
									{
										iVar9 = 283;
										bVar10 = 304;
									}
									uVar11 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar10, Var4, Vector(0.0f, 0.0f, 0.0f));
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar11, 1);
									TASK_PRIORITY_SET(&uVar11, 2);
									TASK_USE_GRINGO(&uVar11, GET_GRINGO_FROM_OBJECT(&uVar8), "UseCase1", 4294967295, 1);
									Var12 = Vector(0.0f, 0.0f, 0.0f);
									GET_OBJECT_AXIS(&uVar2, &Var12, 2);
									Var14 = Vector(0.0f, 0.0f, 0.0f);
									Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var12, Var4, StackVal) * Vector(-1,75f, -1,75f, -1,75f), StackVal, StackVal);
									uVar16 = CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, &iLocal_0, Function_13(), iVar9, Var14, Vector(0.0f, IntToFloat(RAND_INT_RANGE(0, 360)), 0.0f), "dead_ground_male");
									CLEAR_AREA_OF_GRASS(Var14, 1,5f);
									uVar17 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_0, Function_13(), 4,203895E-45f, Var4, Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
									ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&uVar17);
									DECOR_SET_OBJECT(&uVar2, "Gringo", &uVar8);
									DECOR_SET_OBJECT(&uVar2, "Mourner", &uVar11);
									DECOR_SET_OBJECT(&uVar2, "Corpse", &uVar16);
									DECOR_SET_OBJECT(&uVar2, "Volume", &uVar17);
									DECOR_SET_FLOAT(&uVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									iParam0[iVar0] = 1;
									iParam1[iVar0] = &uVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(&uVar3, "illicit"))
								{
									Var18 = Vector(0.0f, 0.0f, 0.0f);
									GET_OBJECT_ORIENTATION(&uVar2, &Var18);
									uVar20 = CREATE_GRINGO_IN_LAYOUT(&iLocal_0, Function_13(), "dealer_and_customer", Var4, Var18);
									if ((iVar0 % 6) == 0)
									{
										bVar21 = 239;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar21 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar21 = 321;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar21 = 266;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar21 = 277;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar21 = 304;
									}
									uVar22 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar21, Var4, Vector(0.0f, 0.0f, 0.0f));
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar22, 1);
									SNAP_ACTOR_TO_GRINGO(&uVar22, &uVar20, "UseCase1", 1, 0, 0);
									TASK_PRIORITY_SET(&uVar22, 2);
									TASK_USE_GRINGO(&uVar22, GET_GRINGO_FROM_OBJECT(&uVar20), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(&uVar2, "Gringo", &uVar20);
									DECOR_SET_OBJECT(&uVar2, "IllicitActor1", &uVar22);
									DECOR_SET_FLOAT(&uVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									iParam0[iVar0] = 1;
									iParam1[iVar0] = &uVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(&uVar3, "sitwhisper"))
								{
									Var23 = Vector(0.0f, 0.0f, 0.0f);
									GET_OBJECT_ORIENTATION(&uVar2, &Var23);
									uVar25 = CREATE_GRINGO_IN_LAYOUT(&iLocal_0, Function_13(), "mex_sitGround_tlkPsnt_link", Var4, Var23);
									if ((iVar0 % 6) == 0)
									{
										bVar26 = 239;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar26 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar26 = 321;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar26 = 266;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar26 = 277;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar26 = 304;
									}
									uVar27 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar26, Var4, Vector(0.0f, 0.0f, 0.0f));
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar27, 1);
									SNAP_ACTOR_TO_GRINGO(&uVar27, &uVar25, "UseCase1", 1, 0, 0);
									TASK_PRIORITY_SET(&uVar27, 2);
									TASK_USE_GRINGO(&uVar27, GET_GRINGO_FROM_OBJECT(&uVar25), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(&uVar2, "Gringo", &uVar25);
									DECOR_SET_OBJECT(&uVar2, "WhisperActor1", &uVar27);
									DECOR_SET_FLOAT(&uVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									iParam0[iVar0] = 1;
									iParam1[iVar0] = &uVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(&uVar3, "leanWall"))
								{
									Var28 = Vector(0.0f, 0.0f, 0.0f);
									GET_OBJECT_ORIENTATION(&uVar2, &Var28);
									uVar30 = CREATE_GRINGO_IN_LAYOUT(&iLocal_0, Function_13(), "mex_leanWall_tlkPsnt_link", Var4, Var28);
									if ((iVar0 % 6) == 0)
									{
										bVar31 = 239;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar31 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar31 = 321;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar31 = 266;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar31 = 277;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar31 = 304;
									}
									uVar32 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar31, Var4, Vector(0.0f, 0.0f, 0.0f));
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar32, 1);
									DEEQUIP_ACCESSORY(&uVar32, 0);
									SNAP_ACTOR_TO_GRINGO(&uVar32, &uVar30, "UseCase1", 1, 0, 0);
									TASK_PRIORITY_SET(&uVar32, 2);
									TASK_USE_GRINGO(&uVar32, GET_GRINGO_FROM_OBJECT(&uVar30), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(&uVar2, "Gringo", &uVar30);
									DECOR_SET_OBJECT(&uVar2, "LeanActor1", &uVar32);
									DECOR_SET_FLOAT(&uVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									iParam0[iVar0] = 1;
									iParam1[iVar0] = &uVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(&uVar3, "leanRail"))
								{
									Var33 = Vector(0.0f, 0.0f, 0.0f);
									GET_OBJECT_ORIENTATION(&uVar2, &Var33);
									uVar35 = CREATE_GRINGO_IN_LAYOUT(&iLocal_0, Function_13(), "mex_leanRail_tlkPsnt", Var4, Var33);
									if ((iVar0 % 6) == 0)
									{
										bVar36 = 391;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar36 = 392;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar36 = 393;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar36 = 379;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar36 = 380;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar36 = 382;
									}
									iVar37 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), bVar36, Var4, Vector(0.0f, 0.0f, 0.0f));
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar37, 1);
									Function_12(&iVar37, 0);
									SNAP_ACTOR_TO_GRINGO(&iVar37, &uVar35, "UseCase1", 1, 0, 0);
									TASK_PRIORITY_SET(&iVar37, 2);
									TASK_USE_GRINGO(&iVar37, GET_GRINGO_FROM_OBJECT(&uVar35), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(&uVar2, "Gringo", &uVar35);
									DECOR_SET_OBJECT(&uVar2, "LeanRailActor1", &iVar37);
									DECOR_SET_FLOAT(&uVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									iParam0[iVar0] = 1;
									iParam1[iVar0] = &uVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
							}
						}
					}
				}
				bVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_26(int iParam0) //Position: 0x27B7 / 10167
{
	int iVar0;
	int iVar1;
	
	iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_0, "MarketPatSquad"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 381, (&iLocal_0 + 784[03]), *(&iLocal_0 + 784[03] + 12));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SQUAD_JOIN(&iVar0, &iParam0);
	iVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(0, &iLocal_0 + 1360, 1, 1, 0, 0, 0.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(&iVar0, iVar1, 4294967295);
	Function_12(&iVar0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 379, *(&iLocal_0 + 784[13]), *(&iLocal_0 + 784[13] + 12));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SQUAD_JOIN(&iVar0, &iParam0);
	iVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(0, &iLocal_0 + 1360, 1, 1, 0, 0, -0,75f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(&iVar0, iVar1, 4294967295);
	Function_12(&iVar0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 379, *(&iLocal_0 + 784[23]), *(&iLocal_0 + 784[23] + 12));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SQUAD_JOIN(&iVar0, &iParam0);
	iVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(0, &iLocal_0 + 1360, 1, 1, 0, 0, 0,85f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(&iVar0, iVar1, 4294967295);
	Function_12(&iVar0, 0);
	Function_27(&iParam0, 0);
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x2905 / 10501
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_28(var[] uParam0) //Position: 0x293F / 10559
{
	uParam0[4] = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_0, Function_13(), 3,503246E-43f, *(&iLocal_0 + 232[43]), *(&iLocal_0 + 232[43] + 12), "dead_ground_male");
	REFERENCE_OBJECT(&(uParam0[4]));
	CREATE_DECAL(3, *(&iLocal_0 + 232[43]), 1,2f, 1, 0);
	return;
}

void Function_29(var[] uParam0) //Position: 0x299C / 10652
{
	uParam0[3] = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_0, Function_13(), 3,853571E-43f, *(&iLocal_0 + 232[33]), *(&iLocal_0 + 232[33] + 12), "dead_ground_male");
	REFERENCE_OBJECT(&(uParam0[3]));
	CREATE_DECAL(3, *(&iLocal_0 + 232[33]), 0,8f, 1, 0);
	return;
}

void Function_30(var[] uParam0) //Position: 0x29FA / 10746
{
	uParam0[2] = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_0, Function_13(), 3,657389E-43f, *(&iLocal_0 + 232[23]), *(&iLocal_0 + 232[23] + 12), "dead_ground_male");
	REFERENCE_OBJECT(&(uParam0[2]));
	CREATE_DECAL(3, *(&iLocal_0 + 232[23]), 1.0f, 1, 0);
	return;
}

void Function_31(var[] uParam0) //Position: 0x2A54 / 10836
{
	uParam0[1] = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_0, Function_13(), 3,503246E-43f, *(&iLocal_0 + 232[13]), *(&iLocal_0 + 232[13] + 12), "dead_ground_male");
	REFERENCE_OBJECT(&(uParam0[1]));
	CREATE_DECAL(3, *(&iLocal_0 + 232[13]), 1,2f, 1, 0);
	return;
}

void Function_32(var[] uParam0) //Position: 0x2AB1 / 10929
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		ADD_CORPSE_RETAINMENT_VOLUME_OBJ(&iLocal_0 + 104[iVar0]);
		ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&iLocal_0 + 104[iVar0]);
		Var1 = Vector(0.0f, 0.0f, 0.0f);
		GET_VOLUME_CENTER(&iLocal_0 + 104[iVar0], &Var1);
		CLEAR_AREA_OF_GRASS(Var1, 2.0f);
		iVar0++;
	}
	uParam0[0] = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_0, Function_13(), 3,853571E-43f, *(&iLocal_0 + 232[03]), *(&iLocal_0 + 232[03] + 12), "dead_ground_male");
	REFERENCE_OBJECT(&(uParam0[0]));
	CREATE_DECAL(3, *(&iLocal_0 + 232[03]), 0,8f, 1, 0);
	return;
}

void Function_33(int[] iParam0) //Position: 0x2B57 / 11095
{
	int iVar0;
	
	iParam0[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), 291, *(&iLocal_0 + 1208[03]), Vector(0.0f, 0.0f, 0.0f));
	iParam0[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), 285, *(&iLocal_0 + 1208[13]), Vector(0.0f, 0.0f, 0.0f));
	iParam0[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), 522, *(&iLocal_0 + 1208[23]), Vector(0.0f, 0.0f, 0.0f));
	iParam0[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), 521, *(&iLocal_0 + 1208[33]), Vector(0.0f, 0.0f, 0.0f));
	iParam0[4] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), 523, *(&iLocal_0 + 1208[43]), Vector(0.0f, 0.0f, 0.0f));
	iParam0[5] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_0, Function_13(), 293, *(&iLocal_0 + 1208[53]), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(iParam0[iVar0]), 1);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&(iParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_34(var[] uParam0) //Position: 0x2C4C / 11340
{
	int iVar0;
	
	uParam0[0] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 379, *(&iLocal_0 + 784[33]), *(&iLocal_0 + 784[33] + 12));
	TASK_PRIORITY_SET(&(uParam0[0]), 2);
	TASK_STAND_STILL(&(uParam0[0]), -1.0f, 1, 0);
	uParam0[1] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 391, *(&iLocal_0 + 784[43]), *(&iLocal_0 + 784[43] + 12));
	TASK_PRIORITY_SET(&(uParam0[1]), 2);
	TASK_STAND_STILL(&(uParam0[1]), -1.0f, 1, 0);
	uParam0[2] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 392, *(&iLocal_0 + 784[53]), *(&iLocal_0 + 784[53] + 12));
	TASK_PRIORITY_SET(&(uParam0[2]), 2);
	TASK_STAND_STILL(&(uParam0[2]), -1.0f, 1, 0);
	uParam0[3] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 380, *(&iLocal_0 + 784[93]), *(&iLocal_0 + 784[93] + 12));
	TASK_PRIORITY_SET(&(uParam0[3]), 2);
	TASK_STAND_STILL(&(uParam0[3]), -1.0f, 1, 0);
	uParam0[4] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 381, *(&iLocal_0 + 784[103]), *(&iLocal_0 + 784[103] + 12));
	TASK_PRIORITY_SET(&(uParam0[4]), 2);
	TASK_STAND_STILL(&(uParam0[4]), -1.0f, 1, 0);
	uParam0[5] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 382, *(&iLocal_0 + 784[63]), *(&iLocal_0 + 784[63] + 12));
	TASK_PRIORITY_SET(&(uParam0[5]), 2);
	TASK_STAND_STILL(&(uParam0[5]), -1.0f, 1, 0);
	uParam0[6] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 393, *(&iLocal_0 + 784[73]), *(&iLocal_0 + 784[73] + 12));
	TASK_PRIORITY_SET(&(uParam0[6]), 2);
	TASK_STAND_STILL(&(uParam0[6]), -1.0f, 1, 0);
	uParam0[7] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 392, *(&iLocal_0 + 784[83]), *(&iLocal_0 + 784[83] + 12));
	TASK_PRIORITY_SET(&(uParam0[7]), 2);
	TASK_STAND_STILL(&(uParam0[7]), -1.0f, 1, 0);
	uParam0[8] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 379, *(&iLocal_0 + 784[113]), *(&iLocal_0 + 784[113] + 12));
	TASK_PRIORITY_SET(&(uParam0[8]), 2);
	TASK_STAND_STILL(&(uParam0[8]), -1.0f, 1, 0);
	uParam0[9] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 380, *(&iLocal_0 + 784[123]), *(&iLocal_0 + 784[123] + 12));
	TASK_PRIORITY_SET(&(uParam0[9]), 2);
	TASK_STAND_STILL(&(uParam0[9]), -1.0f, 1, 0);
	uParam0[10] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 382, *(&iLocal_0 + 784[133]), *(&iLocal_0 + 784[133] + 12));
	TASK_PRIORITY_SET(&(uParam0[10]), 2);
	TASK_STAND_STILL(&(uParam0[10]), -1.0f, 1, 0);
	uParam0[11] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 381, *(&iLocal_0 + 784[143]), *(&iLocal_0 + 784[143] + 12));
	TASK_PRIORITY_SET(&(uParam0[11]), 2);
	TASK_STAND_STILL(&(uParam0[11]), -1.0f, 1, 0);
	uParam0[12] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 393, *(&iLocal_0 + 784[153]), *(&iLocal_0 + 784[153] + 12));
	TASK_PRIORITY_SET(&(uParam0[12]), 2);
	TASK_STAND_STILL(&(uParam0[12]), -1.0f, 1, 0);
	uParam0[13] = CREATE_ACTOR_IN_LAYOUT(&iLocal_0, Function_13(), 391, *(&iLocal_0 + 784[163]), *(&iLocal_0 + 784[163] + 12));
	TASK_PRIORITY_SET(&(uParam0[13]), 2);
	TASK_STAND_STILL(&(uParam0[13]), -1.0f, 1, 0);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			Function_12(&(uParam0[iVar0]), 0);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&(uParam0[iVar0]));
			if (RAND_INT_RANGE(0, 10000) > 7500)
			{
				GIVE_WEAPON_TO_ACTOR(&(uParam0[iVar0]), 43, 0f, 1, 1);
			}
			else if (RAND_INT_RANGE(0, 10000) > 5000)
			{
				GIVE_WEAPON_TO_ACTOR(&(uParam0[iVar0]), 42, 0f, 1, 1);
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR(&(uParam0[iVar0]), 41, 0f, 1, 1);
			}
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(uParam0[iVar0]), 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam0[iVar0]), 0);
			if (GET_TASK_STATUS(&(uParam0[iVar0]), 16) != 2 && GET_TASK_STATUS(&(uParam0[iVar0]), 6) != 2)
			{
				TASK_PRIORITY_SET(&(uParam0[iVar0]), 3);
				TASK_WANDER(&(uParam0[iVar0]), -1.0f);
			}
			Function_12(&(uParam0[iVar0]), 0);
		}
		iVar0++;
	}
	return;
}

void Function_35(int[] iParam0) //Position: 0x30EB / 12523
{
	struct<9> Var0;
	
	iParam0[0] = FIRE_CREATE_HANDLE();
	GET_VOLUME_SCALE(&iLocal_0 + 40[0], &vVar0);
	fVar2 = ((vVar0.x + vVar0.z) / 2.0f);
	FIRE_CREATE_IN_VOLUME(&(iParam0[0]), &iLocal_0 + 40[0], FLOOR(fVar2), 1);
	FIRE_SET_DAMAGE_ALLOWED(&(iParam0[0]), 0);
	iParam0[1] = FIRE_CREATE_HANDLE();
	GET_VOLUME_SCALE(&iLocal_0 + 40[1], &vVar0);
	fVar2 = ((vVar0.x + vVar0.z) / 2.0f);
	FIRE_CREATE_IN_VOLUME(&(iParam0[1]), &iLocal_0 + 40[1], FLOOR(fVar2), 1);
	FIRE_SET_DAMAGE_ALLOWED(&(iParam0[1]), 0);
	return;
}

void Function_36(var uParam0, int[] iParam1) //Position: 0x317D / 12669
{
	int iVar0;
	
	uParam0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iLocal_0, "burnAHouse1", "script_fire_rebel05", *(&iLocal_0 + 176));
	UNK_0x6745191B(StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f));
	iParam1[0] = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_13(), "fire_comp_beams", &iLocal_0 + 1368, Vector(0,6f, 0.0f, 0.0f), 1, 0);
	UNK_0x6745191B(StackVal, &(iParam1[0]), Vector(0.0f, 0.0f, 0.0f));
	iParam1[1] = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_13(), "fire_comp_beams", &iLocal_0 + 1376, Vector(0,6f, 0.0f, 0.0f), 1, 0);
	UNK_0x6745191B(StackVal, &(iParam1[1]), Vector(0.0f, 0.0f, 0.0f));
	iParam1[2] = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_13(), "fire_comp_beams", &iLocal_0 + 1384, Vector(0,6f, 0.0f, 0.0f), 1, 0);
	UNK_0x6745191B(StackVal, &(iParam1[2]), Vector(0.0f, 0.0f, 0.0f));
	OPEN_DOOR_DIRECTION(Function_37("escalara", "generalHouse04", 1), 1);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(*(&iLocal_0 + 200), 1.0f, "pot", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		DESTROY_OBJECT(&iVar0);
	}
	return;
}

int Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x32C4 / 12996
{
	return Function_38(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_38(int iParam0, char* cParam1, bool bParam3) //Position: 0x32D8 / 13016
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_39(iParam0))
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

bool Function_39(int iParam0) //Position: 0x337D / 13181
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

vector3 Function_40() //Position: 0x3393 / 13203
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
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_0 = CREATE_LAYOUT("ESC_Revolution_layout");
	(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_0, "v_burningHouseKillFX", 2,802597E-45f, Vector(-4354,347f, 29,69187f, 4404,93f), Vector(0.0f, 0.0f, 0.0f), Vector(17,40064f, 19,38565f, 13,70503f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "FireSpawn_set");
	*(&iLocal_0 + 40[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MarketFire", 2,802597E-45f, Vector(-4260,887f, 18,25354f, 4422,752f), Vector(0.0f, 5,354695f, 0.0f), Vector(18,05478f, 6,831714f, 7,202285f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 40[0]);
	*(&iLocal_0 + 40[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_BlkFire", 2,802597E-45f, Vector(-4291,041f, 20,52724f, 4452,198f), Vector(0.0f, -5,791025f, 0.0f), Vector(3,262385f, 6,041996f, 3,262385f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 40[1]);
	*(&iLocal_0 + 96) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ArmyVols_set");
	*(&iLocal_0 + 72[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_GatesWarn", 2,802597E-45f, Vector(-4382,663f, 38,6398f, 4366,109f), Vector(0.0f, 20,82043f, 0.0f), Vector(19,59856f, 9,414167f, 13,72286f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 72[0]);
	*(&iLocal_0 + 72[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_GatesCrime", 2,802597E-45f, Vector(-4378,137f, 38,67825f, 4364,218f), Vector(0.0f, 20,43596f, 0.0f), Vector(9,237086f, 6,270405f, 8,935928f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 72[1]);
	*(&iLocal_0 + 168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "DeadGuyRetain_set");
	*(&iLocal_0 + 104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain1", 4,203895E-45f, Vector(-4345,692f, 29,79711f, 4369,671f), Vector(0.0f, 20.0f, 0.0f), Vector(3,575107f, 3,575107f, 3,575107f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[0]);
	*(&iLocal_0 + 104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain2", 4,203895E-45f, Vector(-4343,329f, 29,60184f, 4369,259f), Vector(0.0f, 20.0f, 0.0f), Vector(3,895025f, 3,895025f, 3,895025f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[1]);
	*(&iLocal_0 + 104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain3", 4,203895E-45f, Vector(-4341,266f, 26,92565f, 4419,565f), Vector(0.0f, 20.0f, 0.0f), Vector(3,979709f, 3,979709f, 3,979709f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[2]);
	*(&iLocal_0 + 104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain4", 4,203895E-45f, Vector(-4280.0f, 22,06027f, 4404.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,422232f, 3,422232f, 3,422232f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[3]);
	*(&iLocal_0 + 104[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain5", 4,203895E-45f, Vector(-4248,108f, 22,01111f, 4375,941f), Vector(0.0f, 20.0f, 0.0f), Vector(4,867959f, 4,867959f, 4,867959f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[4]);
	*(&iLocal_0 + 104[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain6", 4,203895E-45f, Vector(-4330,085f, 23,30758f, 4437,358f), Vector(0.0f, 20.0f, 0.0f), Vector(3,814618f, 3,814618f, 3,814618f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[5]);
	*(&iLocal_0 + 104[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_retain7", 4,203895E-45f, Vector(-4320.0f, 22,08628f, 4452f), Vector(0.0f, 20.0f, 0.0f), Vector(4,354775f, 4,354775f, 4,354775f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[6]);
	*(&iLocal_0 + 176) = Vector(-4349,924f, 32,588f, 4405,306f);
	*(&iLocal_0 + 176 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 200) = Vector(-4349,537f, 29,29091f, 4405,546f);
	*(&iLocal_0 + 200 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 224) = CREATE_OBJECTSET_IN_LAYOUT("DeadPeopleSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 232[03]) = Vector(-4345,692f, 29,79711f, 4369,671f);
	*(&iLocal_0 + 232[03] + 12) = Vector(0.0f, -131,9727f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DeadGuy_Shot2", Vector(-4345,692f, 29,79711f, 4369,671f), Vector(0.0f, -131,9727f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_0 + 224);
	*(&iLocal_0 + 232[13]) = Vector(-4343,329f, 29,60184f, 4369,259f);
	*(&iLocal_0 + 232[13] + 12) = Vector(0.0f, -170,0992f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DeadGuy_Shot3", Vector(-4343,329f, 29,60184f, 4369,259f), Vector(0.0f, -170,0992f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_0 + 224);
	*(&iLocal_0 + 232[23]) = Vector(-4341,266f, 26,8896f, 4419,565f);
	*(&iLocal_0 + 232[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DeadGuy_Shot4", Vector(-4341,266f, 26,8896f, 4419,565f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_0 + 224);
	*(&iLocal_0 + 232[33]) = Vector(-4320.0f, 22,08628f, 4452f);
	*(&iLocal_0 + 232[33] + 12) = Vector(0.0f, -90,09464f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DeadGuy_Shot5", Vector(-4320.0f, 22,08628f, 4452f), Vector(0.0f, -90,09464f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_0 + 224);
	*(&iLocal_0 + 232[43]) = Vector(-4248,016f, 22,14687f, 4375,824f);
	*(&iLocal_0 + 232[43] + 12) = Vector(0.0f, 50,0588f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DeadGuy_Shot9", Vector(-4248,016f, 22,14687f, 4375,824f), Vector(0.0f, 50,0588f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_0 + 224);
	*(&iLocal_0 + 360) = CREATE_OBJECTSET_IN_LAYOUT("HangingSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 368[03]) = Vector(-4289,735f, 18,17274f, 4427,229f);
	*(&iLocal_0 + 368[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_HangingGround", Vector(-4289,735f, 18,17274f, 4427,229f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_0 + 360);
	*(&iLocal_0 + 368[13]) = Vector(-4289,735f, 22,22264f, 4427,229f);
	*(&iLocal_0 + 368[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_HangingTop", Vector(-4289,735f, 22,22264f, 4427,229f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_0 + 360);
	*(&iLocal_0 + 424) = CREATE_OBJECTSET_IN_LAYOUT("SpawnableEventsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 432[03]) = Vector(-4330,085f, 23,30758f, 4437,358f);
	*(&iLocal_0 + 432[03] + 12) = Vector(0.0f, 162,257f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_mourn1", Vector(-4330,085f, 23,30758f, 4437,358f), Vector(0.0f, 162,257f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_0 + 424);
	*(&iLocal_0 + 432[13]) = Vector(-4280.0f, 22,06027f, 4404.0f);
	*(&iLocal_0 + 432[13] + 12) = Vector(0.0f, -108,7101f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_mourn4", Vector(-4280.0f, 22,06027f, 4404.0f), Vector(0.0f, -108,7101f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_0 + 424);
	*(&iLocal_0 + 432[23]) = Vector(-4283,866f, 22,70337f, 4393,762f);
	*(&iLocal_0 + 432[23] + 12) = Vector(0.0f, -65,24591f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Illicit1", Vector(-4283,866f, 22,70337f, 4393,762f), Vector(0.0f, -65,24591f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_0 + 424);
	*(&iLocal_0 + 432[33]) = Vector(-4280,904f, 26,74273f, 4385,656f);
	*(&iLocal_0 + 432[33] + 12) = Vector(0.0f, -139,8945f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Illicit2", Vector(-4280,904f, 26,74273f, 4385,656f), Vector(0.0f, -139,8945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_0 + 424);
	*(&iLocal_0 + 432[43]) = Vector(-4320,336f, 22,82858f, 4406,641f);
	*(&iLocal_0 + 432[43] + 12) = Vector(0.0f, -23,30747f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Illicit3", Vector(-4320,336f, 22,82858f, 4406,641f), Vector(0.0f, -23,30747f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_0 + 424);
	*(&iLocal_0 + 432[53]) = Vector(-4348,12f, 25,41882f, 4433,625f);
	*(&iLocal_0 + 432[53] + 12) = Vector(0.0f, -127,6161f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Illicit4", Vector(-4348,12f, 25,41882f, 4433,625f), Vector(0.0f, -127,6161f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_0 + 424);
	*(&iLocal_0 + 432[63]) = Vector(-4298,139f, 23,11464f, 4398,215f);
	*(&iLocal_0 + 432[63] + 12) = Vector(0,03796446f, 33,49698f, -0,6712919f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_sitWhisper1", Vector(-4298,139f, 23,11464f, 4398,215f), Vector(0,03796446f, 33,49698f, -0,6712919f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_0 + 424);
	*(&iLocal_0 + 432[73]) = Vector(-4244,182f, 22,13372f, 4372,163f);
	*(&iLocal_0 + 432[73] + 12) = Vector(0.0f, 161,9269f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_sitWhisper2", Vector(-4244,182f, 22,13372f, 4372,163f), Vector(0.0f, 161,9269f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_0 + 424);
	*(&iLocal_0 + 432[83]) = Vector(-4348,534f, 25,51694f, 4438,344f);
	*(&iLocal_0 + 432[83] + 12) = Vector(0.0f, -10,15285f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_sitWhisper3", Vector(-4348,534f, 25,51694f, 4438,344f), Vector(0.0f, -10,15285f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_0 + 424);
	*(&iLocal_0 + 432[93]) = Vector(-4281,87f, 22,51319f, 4390,187f);
	*(&iLocal_0 + 432[93] + 12) = Vector(0.0f, 34,47406f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_sitWhisper4", Vector(-4281,87f, 22,51319f, 4390,187f), Vector(0.0f, 34,47406f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_0 + 424);
	*(&iLocal_0 + 432[103]) = Vector(-4294,103f, 22,92861f, 4400,884f);
	*(&iLocal_0 + 432[103] + 12) = Vector(0.0f, 31,24819f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_LeanWall1", Vector(-4294,103f, 22,92861f, 4400,884f), Vector(0.0f, 31,24819f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_0 + 424);
	*(&iLocal_0 + 432[113]) = Vector(-4281,579f, 22,67204f, 4385,995f);
	*(&iLocal_0 + 432[113] + 12) = Vector(0.0f, 111,8633f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_LeanWall2", Vector(-4281,579f, 22,67204f, 4385,995f), Vector(0.0f, 111,8633f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_0 + 424);
	*(&iLocal_0 + 432[123]) = Vector(-4309,272f, 29,7553f, 4393,054f);
	*(&iLocal_0 + 432[123] + 12) = Vector(0.0f, 209,8055f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_LeanRail1", Vector(-4309,272f, 29,7553f, 4393,054f), Vector(0.0f, 209,8055f, 0.0f));
	DECOR_SET_BOOL(&uVar20, "No2ndGuy", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_0 + 424);
	*(&iLocal_0 + 432[133]) = Vector(-4313,022f, 26,87502f, 4408,517f);
	*(&iLocal_0 + 432[133] + 12) = Vector(0.0f, 226,3538f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_LeanRail2", Vector(-4313,022f, 26,87502f, 4408,517f), Vector(0.0f, 226,3538f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_0 + 424);
	*(&iLocal_0 + 776) = CREATE_OBJECTSET_IN_LAYOUT("ArmySpawnsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 784[03]) = Vector(-4280,034f, 18,07059f, 4451,833f);
	*(&iLocal_0 + 784[03] + 12) = Vector(0.0f, -78,65404f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Market1", Vector(-4280,034f, 18,07059f, 4451,833f), Vector(0.0f, -78,65404f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_0 + 776);
	*(&iLocal_0 + 784[13]) = Vector(-4280,286f, 18,07059f, 4453,558f);
	*(&iLocal_0 + 784[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Market2", Vector(-4280,286f, 18,07059f, 4453,558f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_0 + 776);
	*(&iLocal_0 + 784[23]) = Vector(-4278,01f, 18,07059f, 4451,799f);
	*(&iLocal_0 + 784[23] + 12) = Vector(0.0f, -82,36483f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Market3", Vector(-4278,01f, 18,07059f, 4451,799f), Vector(0.0f, -82,36483f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_0 + 776);
	*(&iLocal_0 + 784[33]) = Vector(-4343,534f, 22,25142f, 4454,376f);
	*(&iLocal_0 + 784[33] + 12) = Vector(0.0f, 146,7909f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_PHouse1", Vector(-4343,534f, 22,25142f, 4454,376f), Vector(0.0f, 146,7909f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_0 + 776);
	*(&iLocal_0 + 784[43]) = Vector(-4344,929f, 22,04174f, 4455,461f);
	*(&iLocal_0 + 784[43] + 12) = Vector(0.0f, -72,11633f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_PHouse2", Vector(-4344,929f, 22,04174f, 4455,461f), Vector(0.0f, -72,11633f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_0 + 776);
	*(&iLocal_0 + 784[53]) = Vector(-4340,331f, 21,8104f, 4458,709f);
	*(&iLocal_0 + 784[53] + 12) = Vector(0.0f, 50,60968f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_PHouse3", Vector(-4340,331f, 21,8104f, 4458,709f), Vector(0.0f, 50,60968f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_0 + 776);
	*(&iLocal_0 + 784[63]) = Vector(-4315,305f, 22,01973f, 4424,717f);
	*(&iLocal_0 + 784[63] + 12) = Vector(0.0f, -113,6209f, 0.0f);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Fount1", Vector(-4315,305f, 22,01973f, 4424,717f), Vector(0.0f, -113,6209f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_0 + 776);
	*(&iLocal_0 + 784[73]) = Vector(-4313,543f, 21,97895f, 4424,892f);
	*(&iLocal_0 + 784[73] + 12) = Vector(0.0f, 92,49562f, 0.0f);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Fount2", Vector(-4313,543f, 21,97895f, 4424,892f), Vector(0.0f, 92,49562f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_0 + 776);
	*(&iLocal_0 + 784[83]) = Vector(-4296,433f, 22,00521f, 4414,997f);
	*(&iLocal_0 + 784[83] + 12) = Vector(0.0f, -197,5029f, 0.0f);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Fount3", Vector(-4296,433f, 22,00521f, 4414,997f), Vector(0.0f, -197,5029f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_0 + 776);
	*(&iLocal_0 + 784[93]) = Vector(-4334,677f, 26,32789f, 4419,263f);
	*(&iLocal_0 + 784[93] + 12) = Vector(0.0f, -236,6034f, 0.0f);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Church1", Vector(-4334,677f, 26,32789f, 4419,263f), Vector(0.0f, -236,6034f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_0 + 776);
	*(&iLocal_0 + 784[103]) = Vector(-4332,959f, 26,32789f, 4420,268f);
	*(&iLocal_0 + 784[103] + 12) = Vector(0.0f, 180,243f, 0.0f);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Church2", Vector(-4332,959f, 26,32789f, 4420,268f), Vector(0.0f, 180,243f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_0 + 776);
	*(&iLocal_0 + 784[113]) = Vector(-4343,749f, 30,11825f, 4381,919f);
	*(&iLocal_0 + 784[113] + 12) = Vector(0.0f, -159,3938f, 0.0f);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Gallery1", Vector(-4343,749f, 30,11825f, 4381,919f), Vector(0.0f, -159,3938f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_0 + 776);
	*(&iLocal_0 + 784[123]) = Vector(-4342,061f, 30,08615f, 4382,198f);
	*(&iLocal_0 + 784[123] + 12) = Vector(0.0f, 125,3282f, 0.0f);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Gallery2", Vector(-4342,061f, 30,08615f, 4382,198f), Vector(0.0f, 125,3282f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_0 + 776);
	*(&iLocal_0 + 784[133]) = Vector(-4342,951f, 30,10941f, 4383,746f);
	*(&iLocal_0 + 784[133] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmySpawn_Gallery3", Vector(-4342,951f, 30,10941f, 4383,746f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_0 + 776);
	*(&iLocal_0 + 784[143]) = Vector(-4376,353f, 38,70368f, 4361,798f);
	*(&iLocal_0 + 784[143] + 12) = Vector(0.0f, 115,8763f, 0.0f);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmyGate1", Vector(-4376,353f, 38,70368f, 4361,798f), Vector(0.0f, 115,8763f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_0 + 776);
	*(&iLocal_0 + 784[153]) = Vector(-4375,399f, 38,70368f, 4365,394f);
	*(&iLocal_0 + 784[153] + 12) = Vector(0.0f, 102,5001f, 0.0f);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmyGate2", Vector(-4375,399f, 38,70368f, 4365,394f), Vector(0.0f, 102,5001f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &iLocal_0 + 776);
	*(&iLocal_0 + 784[163]) = Vector(-4377,025f, 38,65844f, 4363,878f);
	*(&iLocal_0 + 784[163] + 12) = Vector(0,4253767f, 111,1136f, 0,6688941f);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_ArmyGate3", Vector(-4377,025f, 38,65844f, 4363,878f), Vector(0,4253767f, 111,1136f, 0,6688941f));
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &iLocal_0 + 776);
	*(&iLocal_0 + 1200) = CREATE_OBJECTSET_IN_LAYOUT("JailSpawnsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 1208[03]) = Vector(-4354,323f, 30,07391f, 4383,296f);
	*(&iLocal_0 + 1208[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Jail1", Vector(-4354,323f, 30,07391f, 4383,296f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &iLocal_0 + 1200);
	*(&iLocal_0 + 1208[13]) = Vector(-4357,083f, 30,07391f, 4383,173f);
	*(&iLocal_0 + 1208[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Jail2", Vector(-4357,083f, 30,07391f, 4383,173f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &iLocal_0 + 1200);
	*(&iLocal_0 + 1208[23]) = Vector(-4356,064f, 30,07391f, 4383,389f);
	*(&iLocal_0 + 1208[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Jail3", Vector(-4356,064f, 30,07391f, 4383,389f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &iLocal_0 + 1200);
	*(&iLocal_0 + 1208[33]) = Vector(-4357,566f, 30,07158f, 4379,486f);
	*(&iLocal_0 + 1208[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Jail4", Vector(-4357,566f, 30,07158f, 4379,486f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &iLocal_0 + 1200);
	*(&iLocal_0 + 1208[43]) = Vector(-4357,838f, 30,07158f, 4374,739f);
	*(&iLocal_0 + 1208[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar43 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Jail5", Vector(-4357,838f, 30,07158f, 4374,739f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar43, &iLocal_0 + 1200);
	*(&iLocal_0 + 1208[53]) = Vector(-4357,838f, 30,07158f, 4375,912f);
	*(&iLocal_0 + 1208[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar44 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Jail6", Vector(-4357,838f, 30,07158f, 4375,912f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar44, &iLocal_0 + 1200);
	PushArrayP();
	*(&iLocal_0 + 1360) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_0, "MarketPatrol");
	*(&iLocal_0 + 1368) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "debrisBoard07x0", "p_gen_debrisBoard07x", Vector(-4350,555f, 31,29187f, 4403,764f), Vector(-180,7037f, -116,7476f, 88,30596f), 1);
	*(&iLocal_0 + 1376) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "debrisBoard07x1", "p_gen_debrisBoard07x", Vector(-4350,51f, 30,69436f, 4403,703f), Vector(-362,4487f, -101,6998f, 92,64365f), 1);
	*(&iLocal_0 + 1384) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "debrisBoard07x2", "p_gen_debrisBoard07x", Vector(-4350,582f, 30,62117f, 4403,864f), Vector(-180,5333f, -126,4303f, 88,10666f), 1);
	return;
}

bool Function_41(struct<2>[] Param0) //Position: 0x5046 / 20550
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_46();
	iVar1 = 0;
	if (!Function_7(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_45(&(Param0[iVar02]), 8);
		}
		else if (Function_44())
		{
			iVar1 = 1;
			Function_45(&(Param0[iVar02]), 8);
		}
		Function_45(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_7(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_7(&(Param0[02]), 8) || iVar1));
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
				Function_45(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_45(&(Param0[iVar02]), 2);
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
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_45(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_45(&(Param0[iVar02]), 2);
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
	Function_42();
	return 1;
}

void Function_42() //Position: 0x5408 / 21512
{
	if (!Function_43(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_43(int iParam0) //Position: 0x5448 / 21576
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x5464 / 21604
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

void Function_45(struct<13> Param0) //Position: 0x5492 / 21650
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_46() //Position: 0x54A5 / 21669
{
	if (!Function_43(128))
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

int Function_47() //Position: 0x54E7 / 21735
{
	Function_49(&iLocal_0 + 8, "p_gen_debrisBoard07x", 0, 0);
	if (Function_41(&iLocal_0 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_48(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x551B / 21787
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_45(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_45(&(Param0[iVar02]), 8);
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

var Function_49(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x55F7 / 22007
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_50(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_45(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_50(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x5635 / 22069
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_45(&(Param0[iVar02]), 4);
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

void Function_51(int iParam0) //Position: 0x5704 / 22276
{
	int iVar0;
	
	if (Function_2(iParam0, 1) && Function_2(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

int Function_52(int iParam0) //Position: 0x5738 / 22328
{
	int iVar0;
	
	if (!Function_57(iParam0))
	{
		return 0;
	}
	iVar0 = Function_56(iParam0);
	if (!Function_53(Function_56(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x576E / 22382
{
	if (!Function_55(iParam0))
	{
		return 0;
	}
	if (!Function_54(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x5792 / 22418
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x57A7 / 22439
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_56(int iParam0) //Position: 0x57BE / 22462
{
	if (!Function_57(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_57(int iParam0) //Position: 0x57D8 / 22488
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_58(int iParam0, bool bParam1) //Position: 0x57EE / 22510
{
	int iVar0;
	
	iVar0 = Function_56(iParam0);
	if (!Function_55(iVar0))
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

