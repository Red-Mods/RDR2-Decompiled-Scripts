//Decompiled with MagicRDR v1.0
//Function Count : 74
//Statics Count : 898
//Natives Count : 126
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 12;
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
	var uLocal_42 = 17;
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
	var uLocal_80 = 6;
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
	var uLocal_96 = 5;
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
	var uLocal_110 = 4;
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
	var uLocal_124 = 3;
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
	var uLocal_144 = 3;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 2;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 3;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 1;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 4;
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
	var uLocal_194 = 2;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 2;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 2;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 1;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 2;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 2;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 1;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 3;
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
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 20;
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
	char[] cLocal_560[4] = 0;
	var uLocal_561 = 0;
	struct<4> Local_562[40];
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
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_430 = 0;
	Function_73("Initializing Escalera Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_431 = 500;
		uLocal_432 = Function_72();
		switch (iLocal_430)
		{
			case 0x00000000:
				if (Function_70())
				{
					cLocal_560 = Function_69(&iLocal_0, "escalara", iScriptParam_0);
					iLocal_430 = 1;
				}
				iLocal_431 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_560))
				{
					iLocal_430 = 2;
				}
				iLocal_431 = 0;
				break;
			
			case 0x00000002:
				Function_68(&uLocal_434);
				Function_67(&uLocal_434, &uLocal_438, 4, &iLocal_0 + 488, 4294967295, 4);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 840, 4294967295, 524554);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 8, 4294967295, 0x1000108);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 896, 4294967295, 0x200010a);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 16, 4294967295, 65802);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 24, 4294967295, 65802);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 32, 4294967295, 65794);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 976, 4294967295, 8458);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 704, 4294967295, 778);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 40, 4294967295, 1290);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 944, 4294967295, 4362);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 48, 4294967295, 4194570);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 832, 4294967295, 65802);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 872, 4294967295, 266);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 1008, 4294967295, 778);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 1072, 4294967295, 65802);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 1032, 4294967295, 0x400010a);
				Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 544, 4294967295, 0x1000000);
				Function_65(&Local_562, &cLocal_560, "generalhouse03", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 32, 0, 1);
				Function_65(&Local_562, &cLocal_560, "generalhouse03", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 32, 0, 1);
				Function_65(&Local_562, &cLocal_560, "villa01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "villa01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "blacksmith01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "ncantina01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "ncantina01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "ncantina01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "doctor01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "gunsmith01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "gunsmith01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "church01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "church01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "whorehouse01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "whorehouse01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "villaPost01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "villaPost01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "villaPost01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "bullRing01", 1, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_65(&Local_562, &cLocal_560, "bullRing01", 3, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				iLocal_884 = Function_65(&Local_562, &cLocal_560, "villaPost01", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
				if (iLocal_884 <= 0 && iLocal_884 > Local_562)
				{
					Function_64(&(Local_562[iLocal_8844]), 1);
				}
				iLocal_885 = Function_65(&Local_562, &cLocal_560, "villaPost01", 5, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
				if (iLocal_885 <= 0 && iLocal_885 > Local_562)
				{
					Function_64(&(Local_562[iLocal_8854]), 1);
				}
				iLocal_886 = Function_65(&Local_562, &cLocal_560, "villaPost01", 6, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
				if (iLocal_886 <= 0 && iLocal_886 > Local_562)
				{
					Function_64(&(Local_562[iLocal_8864]), 1);
				}
				iLocal_887 = Function_65(&Local_562, &cLocal_560, "doctor01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 976, 1, 0);
				if (iLocal_887 <= 0 && iLocal_887 > Local_562)
				{
					Function_63(&(Local_562[iLocal_8874]), 33);
				}
				iLocal_888 = Function_65(&Local_562, &cLocal_560, "gunsmith01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 944, 1, 0);
				if (iLocal_888 <= 0 && iLocal_888 > Local_562)
				{
					Function_63(&(Local_562[iLocal_8884]), 33);
				}
				iLocal_889 = Function_65(&Local_562, &cLocal_560, "gunsmith01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 944, 0, 0);
				if (iLocal_889 <= 0 && iLocal_889 > Local_562)
				{
					Function_63(&(Local_562[iLocal_8894]), 33);
				}
				if (Function_59(36, 0) && !Function_59(41, 0))
				{
					Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 528, 4294967295, 0x4000018a);
					Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 160, 4294967295, 136);
				}
				else
				{
					Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 528, 4294967295, 0x4000010a);
					Function_67(&uLocal_434, &uLocal_438, 5, &iLocal_0 + 160, 4294967295, 8);
				}
				if (!Function_59(26, 0))
				{
					iLocal_890 = Function_65(&Local_562, &cLocal_560, "villaWall04", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_890 <= 0 && iLocal_890 > Local_562)
					{
						Function_63(&(Local_562[iLocal_8904]), 63);
					}
					iLocal_891 = Function_65(&Local_562, &cLocal_560, "villaWall04", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_891 <= 0 && iLocal_891 > Local_562)
					{
						Function_63(&(Local_562[iLocal_8914]), 63);
					}
					iLocal_892 = Function_65(&Local_562, &cLocal_560, "villaWall02", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_892 <= 0 && iLocal_892 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8924]), 1);
					}
					iLocal_893 = Function_65(&Local_562, &cLocal_560, "villaWall02", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_893 <= 0 && iLocal_893 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8934]), 1);
					}
					iLocal_894 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_894 <= 0 && iLocal_894 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8944]), 1);
					}
					iLocal_895 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_895 <= 0 && iLocal_895 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8954]), 1);
					}
				}
				else if ((Function_59(29, 0) && !Function_59(35, 0)) && !Function_59(33, 0))
				{
					iLocal_890 = Function_65(&Local_562, &cLocal_560, "villaWall04", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_890 <= 0 && iLocal_890 > Local_562)
					{
						Function_63(&(Local_562[iLocal_8904]), 63);
					}
					iLocal_891 = Function_65(&Local_562, &cLocal_560, "villaWall04", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_891 <= 0 && iLocal_891 > Local_562)
					{
						Function_63(&(Local_562[iLocal_8914]), 63);
					}
					iLocal_892 = Function_65(&Local_562, &cLocal_560, "villaWall02", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_892 <= 0 && iLocal_892 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8924]), 1);
					}
					iLocal_893 = Function_65(&Local_562, &cLocal_560, "villaWall02", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_893 <= 0 && iLocal_893 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8934]), 1);
					}
					iLocal_894 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_894 <= 0 && iLocal_894 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8944]), 1);
					}
					iLocal_895 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_895 <= 0 && iLocal_895 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8954]), 1);
					}
				}
				else if (((Function_59(29, 0) && Function_59(35, 0)) && Function_59(33, 0)) && !Function_59(36, 0))
				{
					iLocal_890 = Function_65(&Local_562, &cLocal_560, "villaWall04", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_890 <= 0 && iLocal_890 > Local_562)
					{
						Function_57(&(Local_562[iLocal_8904]), 1);
					}
					iLocal_891 = Function_65(&Local_562, &cLocal_560, "villaWall04", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_891 <= 0 && iLocal_891 > Local_562)
					{
						Function_57(&(Local_562[iLocal_8914]), 1);
					}
					iLocal_892 = Function_65(&Local_562, &cLocal_560, "villaWall02", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_892 <= 0 && iLocal_892 > Local_562)
					{
						Function_57(&(Local_562[iLocal_8924]), 1);
					}
					iLocal_893 = Function_65(&Local_562, &cLocal_560, "villaWall02", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_893 <= 0 && iLocal_893 > Local_562)
					{
						Function_57(&(Local_562[iLocal_8934]), 1);
					}
					iLocal_894 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_894 <= 0 && iLocal_893 > Local_562)
					{
						Function_57(&(Local_562[iLocal_8944]), 1);
					}
					iLocal_895 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_895 <= 0 && iLocal_893 > Local_562)
					{
						Function_57(&(Local_562[iLocal_8954]), 1);
					}
				}
				else if (Function_59(36, 0))
				{
					iLocal_890 = Function_65(&Local_562, &cLocal_560, "villaWall04", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_890 <= 0 && iLocal_890 > Local_562)
					{
						Function_63(&(Local_562[iLocal_8904]), 63);
					}
					iLocal_891 = Function_65(&Local_562, &cLocal_560, "villaWall04", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_891 <= 0 && iLocal_891 > Local_562)
					{
						Function_63(&(Local_562[iLocal_8914]), 63);
					}
					iLocal_892 = Function_65(&Local_562, &cLocal_560, "villaWall02", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_892 <= 0 && iLocal_892 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8924]), 1);
					}
					iLocal_893 = Function_65(&Local_562, &cLocal_560, "villaWall02", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_893 <= 0 && iLocal_893 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8934]), 1);
					}
					iLocal_894 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_894 <= 0 && iLocal_894 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8944]), 1);
					}
					iLocal_895 = Function_65(&Local_562, &cLocal_560, "villaPost01props01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
					if (iLocal_895 <= 0 && iLocal_895 > Local_562)
					{
						Function_58(&(Local_562[iLocal_8954]), 1);
					}
				}
				iLocal_430 = 3;
				iLocal_431 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iScriptParam_0]), 16);
				Function_55("Finished Initializing Escalera Volumes", 5.0f);
				iLocal_430 = 4;
				iLocal_431 = 0;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_434, &uLocal_438, &uLocal_432, iScriptParam_0);
				Function_12(&Local_562, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_431 = 0;
				break;
		}
		WAIT(iLocal_431);
	}
	Function_4(&uLocal_434, &uLocal_438);
	Function_3(&Local_562);
	Function_2();
	Function_1(&(Global_43791[iScriptParam_0]), 16);
	Function_55("Unloaded Escalera Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xFAE / 4014
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xFC8 / 4040
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0xFD4 / 4052
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x1039 / 4153
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_11(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(&(vParam1[iVar03]), 4);
		}
		if (Function_11(&(vParam1[iVar03]), 8))
		{
			Function_5(0, 0, 30);
			Function_10(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x1096 / 4246
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
		Function_6(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0x1180 / 4480
{
	int iVar0;
	
	Function_9(iParam0);
	Function_8(&iParam1);
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
	Function_7();
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

void Function_7() //Position: 0x12FF / 4863
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x130B / 4875
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

void Function_9(int iParam0) //Position: 0x1355 / 4949
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

void Function_10(struct<17> Param0) //Position: 0x139B / 5019
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0x13B8 / 5048
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0x13D6 / 5078
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
	while (iVar0 < Function_15((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_14(&(Param0[iVar04]), 16384);
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
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_72(), &Param0[iVar04] + 16))
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
								Function_13(&(Param0[iVar04]), 1);
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
							Function_13(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_14(&(Param0[iVar04]), 1);
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
					Function_13(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(&(Param0[iVar04]), 1);
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
					Function_14(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_72(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_72(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_14(&(Param0[iVar04]), 32768);
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

void Function_13(struct<13> Param0) //Position: 0x17F7 / 6135
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0x180A / 6154
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x1827 / 6183
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0x1839 / 6201
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x18C3 / 6339
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_51(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_50(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_50(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_47(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 16))
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
								Function_50(&vParam0, 16);
								Function_39(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 16))
					{
						Function_10(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_38(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_37(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_50(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_18(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x1D1B / 7451
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_38(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_23(476, 1, 0, 0);
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
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x1E0C / 7692
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x1E49 / 7753
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1E82 / 7810
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

var Function_22(int iParam0) //Position: 0x1EEC / 7916
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1F44 / 8004
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_24(iParam0);
	return 1;
}

void Function_24(bool bParam0) //Position: 0x216C / 8556
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

void Function_25(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x220A / 8714
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					fVar19 = (Function_20(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_20(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_26(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x2848 / 10312
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x2851 / 10321
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2862 / 10338
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x2959 / 10585
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2974 / 10612
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x29DB / 10715
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29ED / 10733
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x2B21 / 11041
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x2B30 / 11056
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2CCA / 11466
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

void Function_36(var uParam0, int iParam1) //Position: 0x2F0E / 12046
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x2F1B / 12059
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2F45 / 12101
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2F62 / 12130
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
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
	if (!Function_42(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_40();
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

void Function_40() //Position: 0x3215 / 12821
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_41(&uVar0, &uVar1);
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

void Function_41(var uParam0, int iParam1) //Position: 0x3288 / 12936
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

bool Function_42(bool bParam0) //Position: 0x32BE / 12990
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_47(2048))
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

int Function_43(int iParam0) //Position: 0x3334 / 13108
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x3345 / 13125
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

bool Function_45(int iParam0) //Position: 0x335E / 13150
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x3374 / 13172
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x3389 / 13193
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x33A7 / 13223
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

bool Function_49(int iParam0) //Position: 0x3456 / 13398
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x346C / 13420
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x347F / 13439
{
	int iVar0;
	int iVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x34F9 / 13561
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x3522 / 13602
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

bool Function_54(int iParam0) //Position: 0x3542 / 13634
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x355E / 13662
{
	if (!Function_54(128))
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

void Function_56(var uParam0, int iParam1) //Position: 0x359E / 13726
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x35AF / 13743
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x3607 / 13831
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

bool Function_59(int iParam0, bool bParam1) //Position: 0x3662 / 13922
{
	int iVar0;
	
	iVar0 = Function_61(iParam0);
	if (!Function_60(iVar0))
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

bool Function_60(int iParam0) //Position: 0x36A0 / 13984
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_61(int iParam0) //Position: 0x36B7 / 14007
{
	if (!Function_62(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_62(int iParam0) //Position: 0x36D1 / 14033
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_63(vector3 vParam0) //Position: 0x36E7 / 14055
{
	Function_13(&vParam0, 2);
	vParam0.z = iParam1;
	return;
}

void Function_64(var uParam0, bool bParam1) //Position: 0x36FB / 14075
{
	if (&bParam1)
	{
		Function_13(&uParam0, 2049);
	}
	else
	{
		Function_14(&uParam0, 2048);
	}
	return;
}

int Function_65(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x371C / 14108
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_66(&Param0);
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
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_13(&(Param0[iVar04]), 1);
	}
	Function_13(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_13(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_13(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_66(struct<4>[] Param0) //Position: 0x3810 / 14352
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

void Function_67(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x3841 / 14401
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

void Function_68(struct<5> Param0) //Position: 0x392E / 14638
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_69(int iParam0, var uParam1, int iParam2) //Position: 0x393F / 14655
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_70() //Position: 0x3962 / 14690
{
	var uVar0;
	
	Function_71(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Escalera_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Escalera_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_stable", 2,802597E-45f, Vector(-4267,259f, 19,39853f, 4447,987f), Vector(0.0f, 34,82648f, 0.0f), Vector(13,38025f, 4,941638f, 10,51609f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_shack_sm", 2,802597E-45f, Vector(-4244,821f, 23,43998f, 4371,434f), Vector(0.0f, 20,70693f, 0.0f), Vector(9,31706f, 4,580968f, 5,333848f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_shack_med", 2,802597E-45f, Vector(-4267,038f, 22,43778f, 4397,988f), Vector(0.0f, -1,951884f, 0.0f), Vector(13,13086f, 5,630255f, 7,289723f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_house_player", 2,802597E-45f, Vector(-4329,898f, 24,60545f, 4459,245f), Vector(0.0f, 32,09788f, 0.0f), Vector(7,477418f, 6,46971f, 11,22011f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_whorehouse", 2,802597E-45f, Vector(-4312,049f, 31,9447f, 4377,159f), Vector(0.0f, 28,98291f, 0.0f), Vector(8,206093f, 6,170606f, 10,8731f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_church", 2,802597E-45f, Vector(-4329,144f, 28,11459f, 4409,81f), Vector(0.0f, -22,46498f, 0.0f), Vector(11,47036f, 5,412824f, 11,58299f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_mansion_grnds_set");
	*(&iLocal_0 + 56[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds", 2,802597E-45f, Vector(-4349,006f, 43,22042f, 4356,615f), Vector(0.0f, 4,235481f, 0.0f), Vector(49,18926f, 10,66269f, 12,30656f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[0]);
	*(&iLocal_0 + 56[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds2", 2,802597E-45f, Vector(-4350,99f, 46,27676f, 4341,108f), Vector(0.0f, -0,6092508f, 0.0f), Vector(33,2895f, 4,269508f, 5,596886f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[1]);
	*(&iLocal_0 + 56[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds4", 4,203895E-45f, Vector(-4354,73f, 44,75412f, 4346,337f), Vector(0.0f, -1,165959f, 0.0f), Vector(12,78028f, 2,993473f, 9,040867f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[2]);
	*(&iLocal_0 + 56[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds5", 2,802597E-45f, Vector(-4332,224f, 45,29765f, 4344,691f), Vector(0.0f, 0.0f, 0.0f), Vector(15,68796f, 3,135142f, 3,132881f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[3]);
	*(&iLocal_0 + 56[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds6", 2,802597E-45f, Vector(-4358,441f, 43,99646f, 4318,179f), Vector(0.0f, 0.0f, 0.0f), Vector(17,7116f, 7,332778f, 6,184252f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[4]);
	*(&iLocal_0 + 56[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds7", 2,802597E-45f, Vector(-4356,008f, 42,63873f, 4311,824f), Vector(0.0f, 0.0f, 0.0f), Vector(22,44259f, 7,445648f, 5,463752f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[5]);
	*(&iLocal_0 + 56[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds8", 2,802597E-45f, Vector(-4365,019f, 39,04513f, 4306,357f), Vector(0.0f, 0.0f, 0.0f), Vector(3,942281f, 5,389917f, 8,954739f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[6]);
	*(&iLocal_0 + 56[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds9", 2,802597E-45f, Vector(-4350,344f, 41,52211f, 4315,165f), Vector(0.0f, 0.0f, 0.0f), Vector(34,77551f, 9,832869f, 14,03065f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[7]);
	*(&iLocal_0 + 56[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds16", 2,802597E-45f, Vector(-4366,493f, 44,13532f, 4331,217f), Vector(0.0f, 0.0f, 0.0f), Vector(2,322235f, 4,733295f, 18,53592f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[8]);
	*(&iLocal_0 + 56[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds17", 2,802597E-45f, Vector(-4360,075f, 44,29683f, 4324f), Vector(0.0f, 0.0f, 0.0f), Vector(13,46099f, 4,75444f, 3,932355f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[9]);
	*(&iLocal_0 + 56[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds18", 2,802597E-45f, Vector(-4379,275f, 42,63437f, 4361,915f), Vector(0.0f, 24,2056f, 0.0f), Vector(8,466811f, 10,66269f, 11,60019f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[10]);
	*(&iLocal_0 + 56[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_grounds19", 2,802597E-45f, Vector(-4372,069f, 36,94319f, 4274,356f), Vector(0.0f, 0.0f, 0.0f), Vector(8,448764f, 9,832869f, 14,03065f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 56[11]);
	*(&iLocal_0 + 312) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_streets_set");
	*(&iLocal_0 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street3", 2,802597E-45f, Vector(-4300,426f, 24,12488f, 4411,384f), Vector(0.0f, -53,43549f, 0.0f), Vector(13,90111f, 6,550866f, 18,99853f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[0]);
	*(&iLocal_0 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street5", 2,802597E-45f, Vector(-4281,004f, 20,15587f, 4439,794f), Vector(0.0f, -50,79865f, 0.0f), Vector(8,004083f, 4,591478f, 20,15537f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[1]);
	*(&iLocal_0 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street11", 2,802597E-45f, Vector(-4312,493f, 26,83917f, 4387,229f), Vector(0.0f, 29,33883f, 0.0f), Vector(62,81261f, 4,963216f, 4,256499f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[2]);
	*(&iLocal_0 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street12", 2,802597E-45f, Vector(-4288,432f, 18,07058f, 4447,857f), Vector(0.0f, -5,254051f, 0.0f), Vector(15,64275f, 6,516308f, 5,033622f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[3]);
	*(&iLocal_0 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street16", 4,203895E-45f, Vector(-4298,151f, 20,09574f, 4449,944f), Vector(0.0f, 8,499175f, 0.0f), Vector(5,989166f, 2,895216f, 9,844782f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[4]);
	*(&iLocal_0 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_town_night_01", 4,203895E-45f, Vector(-4347,473f, 25,74602f, 4435,072f), Vector(0.0f, 20.0f, 0.0f), Vector(4,647288f, 2,226583f, 4,362153f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[5]);
	*(&iLocal_0 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_town_night_03", 4,203895E-45f, Vector(-4272,096f, 22,94232f, 4396,237f), Vector(0.0f, 69,98267f, 0.0f), Vector(5,696298f, 5,696298f, 12,27775f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[6]);
	*(&iLocal_0 + 168[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_town_night_04", 4,203895E-45f, Vector(-4246,09f, 23,90442f, 4372,063f), Vector(0.0f, 20.0f, 0.0f), Vector(5,696298f, 5,696298f, 5,696298f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[7]);
	*(&iLocal_0 + 168[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street17", 2,802597E-45f, Vector(-4312,898f, 28,14938f, 4405,233f), Vector(0.0f, 36,53682f, 0.0f), Vector(8,284896f, 2,978309f, 5,853208f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[8]);
	*(&iLocal_0 + 168[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street23", 2,802597E-45f, Vector(-4295,242f, 31,32895f, 4392,286f), Vector(0.0f, 30,79081f, 0.0f), Vector(9,564462f, 3,377842f, 2,477308f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[9]);
	*(&iLocal_0 + 168[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street22", 2,802597E-45f, Vector(-4300,958f, 31,14355f, 4390,278f), Vector(0.0f, 29,76625f, 0.0f), Vector(1,680597f, 3,43404f, 6,623867f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[10]);
	*(&iLocal_0 + 168[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street21", 2,802597E-45f, Vector(-4306,933f, 31,5274f, 4390,891f), Vector(0.0f, 29,77303f, 0.0f), Vector(9,253347f, 3,800457f, 2,020292f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[11]);
	*(&iLocal_0 + 168[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street20", 2,802597E-45f, Vector(-4314,939f, 32,09445f, 4384,506f), Vector(0.0f, 29,88078f, 0.0f), Vector(1,998773f, 4,833694f, 16,57427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[12]);
	*(&iLocal_0 + 168[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street19", 2,802597E-45f, Vector(-4299,384f, 32,85699f, 4375,634f), Vector(0.0f, 30,4637f, 0.0f), Vector(2,6044f, 3,800457f, 4,174544f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[13]);
	*(&iLocal_0 + 168[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street18", 2,802597E-45f, Vector(-4282,218f, 23,47477f, 4388,37f), Vector(0.0f, 30,26113f, 0.0f), Vector(7,513713f, 4,570604f, 3,453721f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[14]);
	*(&iLocal_0 + 168[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street24", 2,802597E-45f, Vector(-4353,481f, 30,8873f, 4411,096f), Vector(0.0f, 4,061805f, 0.0f), Vector(6,902004f, 3,6254f, 1,936845f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[15]);
	*(&iLocal_0 + 168[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_street25", 2,802597E-45f, Vector(-4349,073f, 30,8873f, 4408,313f), Vector(0.0f, 1,24426f, 0.0f), Vector(1,997512f, 3,6254f, 7,090909f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 168[16]);
	*(&iLocal_0 + 376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_chickens_set");
	*(&iLocal_0 + 320[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_trap_chicks01", 4,203895E-45f, Vector(-4277,403f, 19,44716f, 4460,196f), Vector(0.0f, 41,07115f, 0.0f), Vector(4,195096f, 4,289063f, 4,704233f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 320[0]);
	*(&iLocal_0 + 320[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_trap_chicks02", 4,203895E-45f, Vector(-4328,883f, 24,94934f, 4434,323f), Vector(0.0f, 32,40672f, 0.0f), Vector(9,175081f, 5,252069f, 6,240525f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 320[1]);
	*(&iLocal_0 + 320[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_trap_chicks03", 4,203895E-45f, Vector(-4281,38f, 16,71091f, 4435,388f), Vector(0.0f, 41,07115f, 0.0f), Vector(18,5116f, 4,289063f, 9,975072f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 320[2]);
	*(&iLocal_0 + 320[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_trap_chicks05", 4,203895E-45f, Vector(-4287,458f, 23,03888f, 4405,496f), Vector(0.0f, 92,11543f, 0.0f), Vector(4,615218f, 4,289063f, 8,439607f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 320[3]);
	*(&iLocal_0 + 320[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_trap_chicks06", 4,203895E-45f, Vector(-4341,462f, 28,26401f, 4408.0f), Vector(0.0f, 189,7346f, 0.0f), Vector(3,660419f, 2,795264f, 7,556119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 320[4]);
	*(&iLocal_0 + 320[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_trap_chicks07", 4,203895E-45f, Vector(-4369,184f, 32,2837f, 4410,078f), Vector(0.0f, 20.0f, 0.0f), Vector(5,883089f, 2,941675f, 6,369331f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 320[5]);
	*(&iLocal_0 + 432) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_goats_set");
	*(&iLocal_0 + 384[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_goats1", 4,203895E-45f, Vector(-4323,684f, 25,03005f, 4445,524f), Vector(0.0f, 37,59151f, 0.0f), Vector(7,967511f, 4,992918f, 10,29833f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 384[0]);
	*(&iLocal_0 + 384[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_goats2", 4,203895E-45f, Vector(-4269,027f, 22,82394f, 4396,511f), Vector(0.0f, 20.0f, 0.0f), Vector(12,09985f, 4,071661f, 11,57585f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 384[1]);
	*(&iLocal_0 + 384[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_goats3", 4,203895E-45f, Vector(-4275,722f, 27,46273f, 4369,616f), Vector(0.0f, 34,95853f, 0.0f), Vector(10,06355f, 4,071661f, 4,031206f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 384[2]);
	*(&iLocal_0 + 384[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_goats4", 4,203895E-45f, Vector(-4347,318f, 25,26793f, 4446,708f), Vector(0.0f, -16,98521f, 0.0f), Vector(5,078985f, 3,815647f, 7,742615f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 384[3]);
	*(&iLocal_0 + 384[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_goats5", 4,203895E-45f, Vector(-4260,016f, 18,4535f, 4441,755f), Vector(0.0f, 33,24678f, 0.0f), Vector(2,045762f, 4,111716f, 4,04452f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 384[4]);
	*(&iLocal_0 + 480) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_birds_set");
	*(&iLocal_0 + 440[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds_04", 4,203895E-45f, Vector(-4280.0f, 13,80741f, 4441,861f), Vector(0.0f, 20.0f, 0.0f), Vector(35,65415f, 17,92159f, 35,65415f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 480, &iLocal_0 + 440[0]);
	*(&iLocal_0 + 440[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds_01", 4,203895E-45f, Vector(-4344,307f, 27,94712f, 4325,537f), Vector(0.0f, 6,992178f, 0.0f), Vector(92,66156f, 25,98933f, 91,99322f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 480, &iLocal_0 + 440[1]);
	*(&iLocal_0 + 440[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds_02", 4,203895E-45f, Vector(-4341,872f, 21,61056f, 4448,801f), Vector(0.0f, 20.0f, 0.0f), Vector(35,65415f, 17,92159f, 35,65415f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 480, &iLocal_0 + 440[2]);
	*(&iLocal_0 + 440[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds_03", 4,203895E-45f, Vector(-4292,764f, 17,07368f, 4403,691f), Vector(0.0f, 20.0f, 0.0f), Vector(35,65415f, 17,92159f, 21,65944f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 480, &iLocal_0 + 440[3]);
	*(&iLocal_0 + 488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_region", 4,203895E-45f, Vector(-4336,111f, 35,37071f, 4369,008f), Vector(0.0f, 30.0f, 0.0f), Vector(90.0f, 50.0f, 130.0f));
	*(&iLocal_0 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_mansion_set");
	*(&iLocal_0 + 496[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion1", 2,802597E-45f, Vector(-4359,139f, 43,68315f, 4330,115f), Vector(0.0f, 0.0f, 0.0f), Vector(10,69277f, 5,527383f, 6,583543f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 496[0]);
	*(&iLocal_0 + 496[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion2", 2,802597E-45f, Vector(-4343,664f, 44,93644f, 4326,755f), Vector(0.0f, 0.0f, 0.0f), Vector(18,07751f, 5,940547f, 7,214034f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 496[1]);
	*(&iLocal_0 + 496[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion3", 2,802597E-45f, Vector(-4343,662f, 44,17587f, 4333,805f), Vector(0.0f, 0.0f, 0.0f), Vector(4,186317f, 3,789164f, 6,328987f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 496[2]);
	*(&iLocal_0 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_duelStayOut", 2,802597E-45f, Vector(-4296,827f, 22,38285f, 4406,034f), Vector(0.0f, -29,6633f, 0.0f), Vector(13,73523f, 7,425228f, 9,432426f));
	*(&iLocal_0 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_herd", 2,802597E-45f, Vector(-4361,514f, 38,9896f, 4279,007f), Vector(0.0f, 0.0f, 0.0f), Vector(22,55995f, 17,79327f, 35,00778f));
	*(&iLocal_0 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_coral", 4,203895E-45f, Vector(-4336,917f, 36,58512f, 4282,47f), Vector(0.0f, -2,697187f, 0.0f), Vector(11,97169f, 3,265406f, 9,67456f));
	*(&iLocal_0 + 560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_stable", 2,802597E-45f, Vector(-4315,892f, 34,94909f, 4296,187f), Vector(0.0f, 0.0f, 0.0f), Vector(11,33789f, 4,081092f, 7,739824f));
	*(&iLocal_0 + 568) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_mansion_stands", 2,802597E-45f, Vector(-4335,935f, 38,55129f, 4302,379f), Vector(0.0f, 0.0f, 0.0f), Vector(17,82498f, 5,286415f, 7,478785f));
	*(&iLocal_0 + 608) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_mansion_animals_set");
	*(&iLocal_0 + 576[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_animals1", 4,203895E-45f, Vector(-4391,885f, 38,89531f, 4332,65f), Vector(0.0f, 20.0f, 0.0f), Vector(24,63327f, 11,28139f, 17,43324f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 576[0]);
	*(&iLocal_0 + 576[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_animals2", 4,203895E-45f, Vector(-4324,474f, 43,85611f, 4315,548f), Vector(0.0f, 20.0f, 0.0f), Vector(8,668767f, 6,247503f, 8,668767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 576[1]);
	*(&iLocal_0 + 576[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_animals3", 2,802597E-45f, Vector(-4319,76f, 41,84449f, 4337,45f), Vector(0.0f, 0.0f, 0.0f), Vector(7,832994f, 5,935623f, 28,37858f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 576[2]);
	*(&iLocal_0 + 640) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_cell_set");
	*(&iLocal_0 + 616[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cell_01", 2,802597E-45f, Vector(-4358,013f, 32,0137f, 4379,383f), Vector(0.0f, 5,489073f, 0.0f), Vector(2,48468f, 4,629098f, 11,9451f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 640, &iLocal_0 + 616[0]);
	*(&iLocal_0 + 616[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cell_02", 2,802597E-45f, Vector(-4355,033f, 31,80708f, 4383,049f), Vector(0.0f, 4,218038f, 0.0f), Vector(3,734768f, 5,013413f, 3,701885f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 640, &iLocal_0 + 616[1]);
	*(&iLocal_0 + 680) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_jail_set");
	*(&iLocal_0 + 648[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_jail_01", 2,802597E-45f, Vector(-4354,156f, 31,61466f, 4372,506f), Vector(0.0f, 4,245905f, 0.0f), Vector(6,012289f, 5,51573f, 4,305815f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 680, &iLocal_0 + 648[0]);
	*(&iLocal_0 + 648[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_jail_02", 2,802597E-45f, Vector(-4355,086f, 31,61466f, 4377,382f), Vector(0.0f, 4,70227f, 0.0f), Vector(2,877953f, 5,51573f, 7,090989f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 680, &iLocal_0 + 648[1]);
	*(&iLocal_0 + 648[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_jail_03", 2,802597E-45f, Vector(-4356,977f, 31,61466f, 4371,952f), Vector(0.0f, 4,245905f, 0.0f), Vector(6,012289f, 5,51573f, 2,603951f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 680, &iLocal_0 + 648[2]);
	*(&iLocal_0 + 704) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_cantina_set");
	*(&iLocal_0 + 688[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cantina10", 2,802597E-45f, Vector(-4292,751f, 27,66521f, 4386,064f), Vector(0.0f, 30,67461f, 0.0f), Vector(17,87438f, 4,006684f, 11,32041f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 688[0]);
	*(&iLocal_0 + 712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nescv_null", 4,203895E-45f, Vector(-4332,404f, 30,11765f, 4367,112f), Vector(0.0f, 20.0f, 0.0f), Vector(85,66031f, 24,80309f, 120,4857f));
	*(&iLocal_0 + 720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_merchant", 2,802597E-45f, Vector(-4296,51f, 18,78425f, 4435,539f), Vector(0.0f, -51,13494f, 0.0f), Vector(4,913551f, 7,797821f, 4,27949f));
	*(&iLocal_0 + 768) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_cantina_exterior_set");
	*(&iLocal_0 + 728[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cantina_exterior_01", 2,802597E-45f, Vector(-4292,179f, 28,12161f, 4395,584f), Vector(0.0f, 29,41659f, 0.0f), Vector(9,193122f, 3,84573f, 4,632034f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 728[0]);
	*(&iLocal_0 + 728[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cantina_exterior_02", 2,802597E-45f, Vector(-4289,889f, 31,43037f, 4384,39f), Vector(0.0f, 30,0945f, 0.0f), Vector(10,19531f, 3,84573f, 10,24821f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 728[1]);
	*(&iLocal_0 + 728[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cantina_exterior_03", 2,802597E-45f, Vector(-4282,726f, 28,12301f, 4382,462f), Vector(0.0f, -59,63307f, 0.0f), Vector(13,16091f, 3,399215f, 2,644361f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 728[2]);
	*(&iLocal_0 + 728[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_cantina_exterior_04", 2,802597E-45f, Vector(-4283,965f, 28,12161f, 4389,187f), Vector(0.0f, -149,8622f, 0.0f), Vector(10,90695f, 3,84573f, 2,386087f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 728[3]);
	*(&iLocal_0 + 800) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_slums_set");
	*(&iLocal_0 + 776[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_slums_01", 2,802597E-45f, Vector(-4356,618f, 32,63358f, 4442,609f), Vector(0.0f, -55,18805f, 0.0f), Vector(6,489566f, 10,31759f, 11,9451f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 800, &iLocal_0 + 776[0]);
	*(&iLocal_0 + 776[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_slums_02", 2,802597E-45f, Vector(-4353,41f, 26,24759f, 4432,738f), Vector(0.0f, -0,2525224f, 0.0f), Vector(11,28116f, 22,04029f, 16,67489f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 800, &iLocal_0 + 776[1]);
	*(&iLocal_0 + 832) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_gaurdsbooth_set");
	*(&iLocal_0 + 808[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_gaurdsbooth_01", 2,802597E-45f, Vector(-4357,071f, 38,28051f, 4372,089f), Vector(0.0f, 4,828046f, 0.0f), Vector(6,068132f, 8,775215f, 25,35933f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 832, &iLocal_0 + 808[0]);
	*(&iLocal_0 + 808[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_gaurdsbooth_02", 2,802597E-45f, Vector(-4335,112f, 32,21043f, 4382,789f), Vector(0.0f, 2,475469f, 0.0f), Vector(15,27985f, 4,689213f, 2,747173f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 832, &iLocal_0 + 808[1]);
	*(&iLocal_0 + 840) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_blacksmith", 2,802597E-45f, Vector(-4287,325f, 19,06578f, 4455,266f), Vector(0.0f, -94,70093f, 0.0f), Vector(7,177554f, 4,21707f, 9,070653f));
	*(&iLocal_0 + 872) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_gaurdstower_set");
	*(&iLocal_0 + 848[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_gaurdstower_01", 2,802597E-45f, Vector(-4322,529f, 44,37113f, 4360,316f), Vector(0.0f, -0,4297826f, 0.0f), Vector(7,417058f, 10,08406f, 7,546127f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 872, &iLocal_0 + 848[0]);
	*(&iLocal_0 + 848[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_gaurdstower_02", 2,802597E-45f, Vector(-4357,541f, 42,92591f, 4365,904f), Vector(0.0f, 3,906137f, 0.0f), Vector(6,820062f, 8,819748f, 7,220263f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 872, &iLocal_0 + 848[1]);
	*(&iLocal_0 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_market_set");
	*(&iLocal_0 + 880[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_market_02", 2,802597E-45f, Vector(-4287,953f, 18,21172f, 4432,596f), Vector(0.0f, -51,13494f, 0.0f), Vector(10,04956f, 8,331608f, 20,9527f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 896, &iLocal_0 + 880[0]);
	*(&iLocal_0 + 904) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_fff", 2,802597E-45f, Vector(-4275,621f, 18,148f, 4453,366f), Vector(0.0f, 35,29165f, 0.0f), Vector(5,042478f, 8,401946f, 6,854197f));
	*(&iLocal_0 + 912) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_liarsdice", 4,203895E-45f, Vector(-4289,072f, 27,53466f, 4380,791f), Vector(0.0f, 20.0f, 0.0f), Vector(2,706349f, 1,64002f, 2,634037f));
	*(&iLocal_0 + 920) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_toughGuys", 4,203895E-45f, Vector(-4291,468f, 28,09845f, 4388,521f), Vector(0.0f, 20.0f, 0.0f), Vector(2,775224f, 1,491449f, 2,572878f));
	*(&iLocal_0 + 944) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_gunsmith_set");
	*(&iLocal_0 + 928[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_gunsmith_01", 2,802597E-45f, Vector(-4317,001f, 28,50505f, 4399,281f), Vector(0.0f, 36,11814f, 0.0f), Vector(8,288177f, 4,520738f, 7,242889f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 928[0]);
	*(&iLocal_0 + 976) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_doctor_office_set");
	*(&iLocal_0 + 952[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_doctor_01", 2,802597E-45f, Vector(-4314,157f, 23,61385f, 4417,431f), Vector(0.0f, 36,5887f, 0.0f), Vector(7,234996f, 5,746381f, 7,099365f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 976, &iLocal_0 + 952[0]);
	*(&iLocal_0 + 952[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_doctor_02", 2,802597E-45f, Vector(-4311,881f, 24,66318f, 4414,003f), Vector(0.0f, 36,5887f, 0.0f), Vector(0,2927533f, 1,599172f, 2,976604f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 976, &iLocal_0 + 952[1]);
	*(&iLocal_0 + 1008) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_bar_set");
	*(&iLocal_0 + 984[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_building_02", 2,802597E-45f, Vector(-4293,287f, 25,59168f, 4386,154f), Vector(0.0f, 29,38348f, 0.0f), Vector(20,33139f, 18,05088f, 12,52254f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1008, &iLocal_0 + 984[0]);
	*(&iLocal_0 + 984[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_building_04", 2,802597E-45f, Vector(-4308,29f, 27,71786f, 4378,653f), Vector(0.0f, 29,38348f, 0.0f), Vector(16,46486f, 18,05088f, 21,004f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1008, &iLocal_0 + 984[1]);
	*(&iLocal_0 + 1032) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_bunkhouse_set");
	*(&iLocal_0 + 1016[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_bunkhouse_01", 2,802597E-45f, Vector(-4354,29f, 28,85424f, 4405,618f), Vector(0.0f, 0.0f, 0.0f), Vector(9,428194f, 10,65013f, 9,415748f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1032, &iLocal_0 + 1016[0]);
	*(&iLocal_0 + 1072) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "escv_house_set");
	*(&iLocal_0 + 1040[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_house_08", 2,802597E-45f, Vector(-4329,215f, 42,47079f, 4334,165f), Vector(0.0f, -0,3231021f, 0.0f), Vector(10,98457f, 18,05088f, 18,57778f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1072, &iLocal_0 + 1040[0]);
	*(&iLocal_0 + 1040[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_house_09", 2,802597E-45f, Vector(-4343,546f, 43,32122f, 4329,931f), Vector(0.0f, -0,3231021f, 0.0f), Vector(21,46405f, 18,05088f, 18,57778f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1072, &iLocal_0 + 1040[1]);
	*(&iLocal_0 + 1040[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "escv_house_010", 2,802597E-45f, Vector(-4355,264f, 43,32122f, 4331,595f), Vector(0.0f, -0,3231021f, 0.0f), Vector(21,46405f, 18,05088f, 12,15581f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1072, &iLocal_0 + 1040[2]);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_report_crime", Vector(-4349,156f, 30,1f, 4387,117f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esvf_jail_leave_start", Vector(-4345,331f, 30,159f, 4376,899f), Vector(0.0f, 180.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esvf_jail_leave_end", Vector(-4342,732f, 30,118f, 4381,589f), Vector(0.0f, 198,3f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esvf_jail_sit", Vector(-4355,349f, 30,16f, 4384,089f), Vector(0.0f, 360,8713f, 0.0f));
	*(&iLocal_0 + 1080) = Vector(-4336,354f, 30,189f, 4382,037f);
	*(&iLocal_0 + 1080 + 12) = Vector(0.0f, 6,343981f, 0.0f);
	*(&iLocal_0 + 1104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_merc_giver", Vector(-4336,354f, 30,189f, 4382,037f), Vector(0.0f, 6,343981f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esvf_lawspawn_cam", Vector(-4347,416f, 30,83f, 4370,966f), Vector(-0,95f, 0,134f, 0,281f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esvf_law_spawn", Vector(-4352,477f, 30,159f, 4371,556f), Vector(0.0f, 271,122f, 0.0f));
	*(&iLocal_0 + 1112) = Vector(-4291,712f, 22,019f, 4411,935f);
	*(&iLocal_0 + 1112 + 12) = Vector(0.0f, 32,379f, 0.0f);
	*(&iLocal_0 + 1136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_playerDuel1", Vector(-4291,712f, 22,019f, 4411,935f), Vector(0.0f, 32,379f, 0.0f));
	*(&iLocal_0 + 1144) = Vector(-4295,746f, 22,211f, 4404,816f);
	*(&iLocal_0 + 1144 + 12) = Vector(0.0f, 206,075f, 0.0f);
	*(&iLocal_0 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_enDuel1", Vector(-4295,746f, 22,211f, 4404,816f), Vector(0.0f, 206,075f, 0.0f));
	*(&iLocal_0 + 1176) = Vector(-4367,358f, 30,354f, 4395,463f);
	*(&iLocal_0 + 1176 + 12) = Vector(0.0f, 283,026f, 0.0f);
	*(&iLocal_0 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_playerDuel2", Vector(-4367,358f, 30,354f, 4395,463f), Vector(0.0f, 283,026f, 0.0f));
	*(&iLocal_0 + 1208) = Vector(-4359,254f, 30,098f, 4392,85f);
	*(&iLocal_0 + 1208 + 12) = Vector(0.0f, 99,893f, 0.0f);
	*(&iLocal_0 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_enDuel2", Vector(-4359,254f, 30,098f, 4392,85f), Vector(0.0f, 99,893f, 0.0f));
	*(&iLocal_0 + 1240) = Vector(-4371,927f, 38,944f, 4310,245f);
	*(&iLocal_0 + 1240 + 12) = Vector(0.0f, 183,848f, 0.0f);
	*(&iLocal_0 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_playerDuel3", Vector(-4371,927f, 38,944f, 4310,245f), Vector(0.0f, 183,848f, 0.0f));
	*(&iLocal_0 + 1272) = Vector(-4371,883f, 39,214f, 4318,49f);
	*(&iLocal_0 + 1272 + 12) = Vector(0.0f, 4,124742f, 0.0f);
	*(&iLocal_0 + 1296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_enDuel3", Vector(-4371,883f, 39,214f, 4318,49f), Vector(0.0f, 4,124742f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esvf_jail_leave_end1", Vector(-4355,299f, 30,159f, 4372,061f), Vector(0.0f, 198,3f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_cell_leave_cop", Vector(-4356,091f, 30,159f, 4380,156f), Vector(0.0f, 187,798f, 0.0f));
	*(&iLocal_0 + 1304) = Vector(-4287,021f, 18,02942f, 4455,931f);
	*(&iLocal_0 + 1304 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_blacksmith", Vector(-4287,021f, 18,02942f, 4455,931f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1336) = Vector(-4329,538f, 22,12138f, 4459,181f);
	*(&iLocal_0 + 1336 + 12) = Vector(0.0f, -57,35551f, 0.0f);
	*(&iLocal_0 + 1360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_house", Vector(-4329,538f, 22,12138f, 4459,181f), Vector(0.0f, -57,35551f, 0.0f));
	*(&iLocal_0 + 1368) = Vector(-4312,378f, 23,02092f, 4417,454f);
	*(&iLocal_0 + 1368 + 12) = Vector(0.0f, -50,66671f, 0.0f);
	*(&iLocal_0 + 1392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_store", Vector(-4312,378f, 23,02092f, 4417,454f), Vector(0.0f, -50,66671f, 0.0f));
	*(&iLocal_0 + 1400) = Vector(-4307,957f, 22,35f, 4409,908f);
	*(&iLocal_0 + 1400 + 12) = Vector(0.0f, 101,7534f, 0.0f);
	*(&iLocal_0 + 1424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store", Vector(-4307,957f, 22,35f, 4409,908f), Vector(0.0f, 101,7534f, 0.0f));
	*(&iLocal_0 + 1432) = Vector(-4306,119f, 22,257f, 4408,294f);
	*(&iLocal_0 + 1432 + 12) = Vector(0.0f, 101,7534f, 0.0f);
	*(&iLocal_0 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store", Vector(-4306,119f, 22,257f, 4408,294f), Vector(0.0f, 101,7534f, 0.0f));
	*(&iLocal_0 + 1464) = Vector(-4308,626f, 25,17f, 4406,501f);
	*(&iLocal_0 + 1464 + 12) = Vector(0.0f, 101,7534f, 0.0f);
	*(&iLocal_0 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store", Vector(-4308,626f, 25,17f, 4406,501f), Vector(0.0f, 101,7534f, 0.0f));
	*(&iLocal_0 + 1496) = Vector(-4303,77f, 25,321f, 4406,04f);
	*(&iLocal_0 + 1496 + 12) = Vector(0.0f, 101,7534f, 0.0f);
	*(&iLocal_0 + 1520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store", Vector(-4303,77f, 25,321f, 4406,04f), Vector(0.0f, 101,7534f, 0.0f));
	*(&iLocal_0 + 1528) = Vector(-4314,573f, 26,86858f, 4399,444f);
	*(&iLocal_0 + 1528 + 12) = Vector(0.0f, -147,7705f, 0.0f);
	*(&iLocal_0 + 1552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_gunsmith", Vector(-4314,573f, 26,86858f, 4399,444f), Vector(0.0f, -147,7705f, 0.0f));
	*(&iLocal_0 + 1560) = Vector(-4329,218f, 27,33505f, 4408,665f);
	*(&iLocal_0 + 1560 + 12) = Vector(0.0f, 157,8708f, 0.0f);
	*(&iLocal_0 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_church", Vector(-4329,218f, 27,33505f, 4408,665f), Vector(0.0f, 157,8708f, 0.0f));
	*(&iLocal_0 + 1592) = Vector(-4296,162f, 26,67004f, 4390,679f);
	*(&iLocal_0 + 1592 + 12) = Vector(0.0f, -150,5799f, 0.0f);
	*(&iLocal_0 + 1616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_saloon", Vector(-4296,162f, 26,67004f, 4390,679f), Vector(0.0f, -150,5799f, 0.0f));
	*(&iLocal_0 + 1624) = Vector(-4343,611f, 42,02343f, 4325,88f);
	*(&iLocal_0 + 1624 + 12) = Vector(0.0f, 179,1484f, 0.0f);
	*(&iLocal_0 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_house1", Vector(-4343,611f, 42,02343f, 4325,88f), Vector(0.0f, 179,1484f, 0.0f));
	*(&iLocal_0 + 1656) = Vector(-4285,002f, 18,07688f, 4432,889f);
	*(&iLocal_0 + 1656 + 12) = Vector(0.0f, -148,0607f, 0.0f);
	*(&iLocal_0 + 1680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "escf_interiorPoint_market", Vector(-4285,002f, 18,07688f, 4432,889f), Vector(0.0f, -148,0607f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos1", Vector(-4294,873f, 58,897f, 4236,993f), Vector(-4,485f, 155,662f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos2", Vector(-4215,654f, 23,309f, 4441,264f), Vector(0,972f, 61,641f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos3", Vector(-4285,062f, 21,63f, 4487,494f), Vector(6,788f, 30,347f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos4", Vector(-4431,528f, 43,843f, 4411,876f), Vector(2,328f, -63,601f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos5", Vector(-4323,916f, 23,52f, 4459,042f), Vector(8,121f, -0,358f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos6", Vector(-4280,561f, 23,926f, 4407,822f), Vector(6,732f, 95,602f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos7", Vector(-4304,535f, 23,597f, 4428,917f), Vector(12,852f, 6,99f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos8", Vector(-4306,232f, 19,087f, 4443,632f), Vector(7,16f, -75,767f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos9", Vector(-4372,777f, 40,612f, 4362,268f), Vector(8,792f, -44,57f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "esc_vista_cam_pos10", Vector(-4362,492f, 34,985f, 4284,378f), Vector(13,266f, -141,983f, 0.0f));
	*(&iLocal_0 + 1688) = Vector(-4303,891f, 22,923f, 4402,163f);
	*(&iLocal_0 + 1688 + 12) = Vector(0.0f, -50,66671f, 0.0f);
	*(&iLocal_0 + 1712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store", Vector(-4303,891f, 22,923f, 4402,163f), Vector(0.0f, -50,66671f, 0.0f));
	return 1;
}

void Function_71(int iParam0, int iParam1) //Position: 0x6788 / 26504
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

var Function_72() //Position: 0x67D2 / 26578
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_73(char* cParam0) //Position: 0x67E7 / 26599
{
	if (!Function_54(128))
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

