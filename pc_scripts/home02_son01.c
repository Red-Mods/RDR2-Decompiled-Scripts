//Decompiled with MagicRDR v1.0
//Function Count : 582
//Statics Count : 1007
//Natives Count : 762
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	bool bLocal_4 = false;
	var uLocal_5 = 0;
	var uLocal_6 = 7;
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
	var uLocal_36 = 1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 3;
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
	float fLocal_68 = 1,401298E-45f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 3;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 4;
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
	var uLocal_96 = 6;
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
	var uLocal_138 = 4;
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
	var uLocal_162 = 8;
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
	var uLocal_182 = 5;
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
	var uLocal_196 = 5;
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
	var uLocal_210 = 7;
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
	var uLocal_228 = 5;
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
	var uLocal_242 = 6;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	float fLocal_247 = 0.0f;
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
	var uLocal_258 = 5;
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
	var uLocal_272 = 10;
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
	var uLocal_344 = 4;
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
	var uLocal_356 = 4;
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
	var uLocal_368 = 2;
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
	char[] cLocal_396[4] = 0;
	var uLocal_397 = 0;
	struct<6> Local_398 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	int iLocal_410 = 8;
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
	int iLocal_444 = 12;
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
	struct<105> Local_502 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<15> Local_641[6];
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
	var uLocal_751 = 5;
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
	var uLocal_781 = 5;
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
	var uLocal_811 = 5;
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
	float fLocal_834 = 0.0f;
	int iLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844[5] = { 0, 0, 0, 0, 0 };
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	bool bLocal_856 = false;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	bool bLocal_860 = false;
	bool bLocal_861 = false;
	int iLocal_862 = 0;
	bool bLocal_863 = false;
	int iLocal_864 = 0;
	bool bLocal_865 = false;
	var uLocal_866 = 0;
	bool bLocal_867 = false;
	var uLocal_868 = 0;
	bool bLocal_869 = false;
	var uLocal_870 = 0;
	bool bLocal_871 = false;
	var uLocal_872 = 0;
	bool bLocal_873 = false;
	var uLocal_874 = 0;
	bool bLocal_875 = false;
	var uLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	bool bLocal_886 = false;
	var uLocal_887 = 0;
	var uLocal_888[3] = { 0, 0, 0 };
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	int iLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	int iLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	int iLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	struct<2> Local_910[3];
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
	struct<2> Local_927 = { 0, 0 } ;
	var uLocal_929 = 0;
	struct<2> Local_930 = { 0, 0 } ;
	var uLocal_932 = 0;
	struct<2> Local_933 = { 0, 0 } ;
	var uLocal_935 = 0;
	struct<2> Local_936 = { 0, 0 } ;
	var uLocal_938 = 0;
	struct<2> Local_939 = { 0, 0 } ;
	var uLocal_941 = 0;
	struct<2> Local_942 = { 0, 0 } ;
	var uLocal_944 = 0;
	struct<2> Local_945 = { 0, 0 } ;
	var uLocal_947 = 0;
	struct<5> Local_948 = { 0, 0, 0, 0, 0 } ;
	var uLocal_953 = 0;
	bool bLocal_954 = false;
	var uLocal_955 = 0;
	bool bLocal_956 = false;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960[2] = { 0, 0 };
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	int iLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	int iLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	int iLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	int iLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	float fLocal_987 = 0.0f;
	int iLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_839 = 0;
	uLocal_840 = "";
	Local_398 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_544 = 99;
	iLocal_545 = 6;
	iLocal_532 = 1000;
	while (Function_272())
	{
		Function_226();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x4A / 74
{
	var uVar0;
	
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_551);
	uVar0 = Vector(-99,05f, 118,72f, 1405,5f);
	TASK_GO_NEAR_COORD(&bLocal_549, &uVar0, 5.0f, 1);
	ACTOR_ENABLE_VARIABLE_MESH(&bLocal_549, 23, false);
	ACTOR_FORCE_WEAPON_RENDER(&bLocal_549, 0, 0);
	if (ACTOR_HAS_WEAPON(&bLocal_549, 22))
	{
		DELETE_WEAPON_FROM_ACTOR(&bLocal_549, 22);
	}
	if (IS_ACTOR_VALID(&bLocal_551))
	{
		TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_873))
	{
		TASK_STAND_STILL(&bLocal_873, -1.0f, 0, 0);
		RELEASE_ACTOR_AS_AMBIENT(&bLocal_873);
	}
	Function_223(12, 0, 1, 1, 1);
	Function_223(13, 0, 0, 1, 1);
	Function_223(11, 0, 0, 1, 1);
	Function_223(14, 0, 0, 1, 1);
	Function_222(&cLocal_396);
	Function_222(&bLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_221();
	Function_192(bLocal_584, 1, 0, 1, 0, 0, 1, 1);
	Function_189();
	Function_185(&iLocal_444);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_547))
	{
		DESTROY_ITERATOR(&uLocal_547);
	}
	RELEASE_LAYOUT_REF(&cLocal_396);
	if (bLocal_583)
	{
		Function_26(Local_398, 1, 1, 1, 0);
	}
	else if (bLocal_584)
	{
		Function_22(Local_398);
	}
	else
	{
		Function_2(Local_398);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x176 / 374
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x197 / 407
{
	(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1B4 / 436
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1D7 / 471
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x1EE / 494
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x290 / 656
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x2B3 / 691
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_9() //Position: 0x2FD / 765
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x316 / 790
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x369 / 873
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x493 / 1171
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x4CD / 1229
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x4E8 / 1256
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x4F5 / 1269
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x515 / 1301
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x52C / 1324
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x547 / 1351
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
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x78E / 1934
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x7BA / 1978
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x7DE / 2014
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x7F3 / 2035
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x811 / 2065
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x8B7 / 2231
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x8F6 / 2294
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB4C / 2892
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_27();
}

void Function_27() //Position: 0xC40 / 3136
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xC72 / 3186
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
	if (!Function_16(iVar0))
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

int Function_29(int iParam0) //Position: 0xCB0 / 3248
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xCCA / 3274
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xCE0 / 3296
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xFDD / 4061
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x1052 / 4178
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x108C / 4236
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1108 / 4360
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x111B / 4379
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

int Function_37(int iParam0) //Position: 0x11BC / 4540
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x11F9 / 4601
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x120F / 4623
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_84(iParam0);
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
						switch (Function_15(iParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x146D / 5229
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x14AB / 5291
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_42(bool bParam0) //Position: 0x14EA / 5354
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x153F / 5439
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x158A / 5514
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

void Function_45() //Position: 0x1690 / 5776
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

void Function_46() //Position: 0x16C3 / 5827
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

void Function_47() //Position: 0x1856 / 6230
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

void Function_48() //Position: 0x1A0F / 6671
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1A1D / 6685
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
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_50();
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
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

bool Function_50() //Position: 0x1C3A / 7226
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1C4F / 7247
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CF6 / 7414
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F92 / 8082
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_54() //Position: 0x25D0 / 9680
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x25D9 / 9689
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25EA / 9706
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x26E1 / 9953
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26FC / 9980
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2763 / 10083
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2775 / 10101
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2787 / 10119
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x28BB / 10427
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x28CA / 10442
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2903 / 10499
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2940 / 10560
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2ADA / 10970
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

int Function_67(bool bParam0) //Position: 0x2D1E / 11550
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2D5F / 11615
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2DE8 / 11752
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2E7F / 11903
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2EFE / 12030
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2F3B / 12091
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x3147 / 12615
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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

bool Function_74(char* cParam0) //Position: 0x31FE / 12798
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3216 / 12822
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x330E / 13070
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3318 / 13080
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3329 / 13097
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x333F / 13119
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x340B / 13323
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3428 / 13352
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3C54 / 15444
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(bool bParam0, int iParam1) //Position: 0x3C8F / 15503
{
	GET_POSITION(&bParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3C9E / 15518
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x417C / 16764
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x4192 / 16786
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x41B1 / 16817
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x41CB / 16843
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

int Function_89(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4235 / 16949
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[bParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[bParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[bParam0] = (Global_54086[bParam0] + TO_FLOAT(bParam1));
	Function_66(bParam0, TO_FLOAT(bParam1), 1);
	Function_65(bParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(bParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[bParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[bParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_90(bParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x445D / 17501
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

void Function_91() //Position: 0x44FB / 17659
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x465D / 18013
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x46DD / 18141
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4A34 / 18996
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

int Function_95(int iParam0) //Position: 0x4ABC / 19132
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4AD6 / 19158
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4B01 / 19201
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4B2F / 19247
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4DCB / 19915
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
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
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F9F / 20383
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5209 / 21001
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
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x5399 / 21401
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x543A / 21562
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x54F8 / 21752
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

var Function_105(int iParam0) //Position: 0x555E / 21854
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

int Function_106(int iParam0, bool bParam1) //Position: 0x55ED / 21997
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x5799 / 22425
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

void Function_108() //Position: 0x57DE / 22494
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x57F4 / 22516
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5834 / 22580
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5874 / 22644
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5883 / 22659
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_113(int iParam0) //Position: 0x5A4B / 23115
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_114() //Position: 0x5AE0 / 23264
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5B05 / 23301
{
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5FD4 / 24532
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
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
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x62FB / 25339
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x639E / 25502
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x659B / 26011
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6746 / 26438
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6818 / 26648
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_167(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_164(Global_46816[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_46816[0]);
			Function_164(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46816[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_46760[0]);
			Function_164(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_46760[1]);
			Function_164(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_46838[0]);
			Function_164(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_46796[5]);
			Function_164(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_164(Global_46816[3]);
			Function_164(Global_46866[0]);
			Function_164(Global_46850[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_46866[0]);
			Function_164(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_46850[0]);
			Function_164(Global_46866[0]);
			Function_164(Global_46866[1]);
			Function_164(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_46850[0]);
			Function_164(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_164(Global_46850[0]);
			Function_164(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_46850[0]);
			Function_164(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_46866[12]);
			Function_164(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_46866[12]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_164(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_164(Global_46866[2]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_46850[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_164(Global_46914[0]);
			Function_164(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_46914[0]);
			Function_164(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_164(Global_46926[0]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_136(&(Global_43791[Global_46914[1]]), 256);
			Function_154(11);
			Function_164(Global_46914[1]);
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_46914[1]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_46914[1]);
			Function_122(11);
			Function_154(12);
			Global_26200[1114].f_40 = 0;
			Function_152(56, 1);
			if (!&bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_122(int iParam0) //Position: 0x7133 / 28979
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_127(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_127(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x72B0 / 29360
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x73BB / 29627
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x73E7 / 29671
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
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

var Function_126(vector3 vParam0) //Position: 0x743E / 29758
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

void Function_127(var uParam0, int iParam1) //Position: 0x748C / 29836
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x74E7 / 29927
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x7688 / 30344
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x768E / 30350
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

void Function_131(bool bParam0, int iParam1) //Position: 0x773D / 30525
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7792 / 30610
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x77A8 / 30632
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x77F9 / 30713
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x7826 / 30758
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7837 / 30775
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7851 / 30801
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7862 / 30818
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x79BE / 31166
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7A49 / 31305
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7A76 / 31350
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7C26 / 31782
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7C7D / 31869
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7CA2 / 31906
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7CF8 / 31992
{
	int iVar0;
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_146(bool bParam0) //Position: 0x7D57 / 32087
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7D63 / 32099
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D7F / 32127
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7DD1 / 32209
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7E01 / 32257
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7E76 / 32374
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7ED3 / 32467
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7F46 / 32582
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7FA1 / 32673
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_129();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8263 / 33379
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_157();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, bParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x8502 / 34050
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

void Function_157() //Position: 0x8571 / 34161
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x85F1 / 34289
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					if (Function_159(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
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
					if (Function_159(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
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
					if (Function_159(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(27) && iVar16)
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
					if (Function_159(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
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
					if (Function_159(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_159(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_159(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
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
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
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
	if (!Function_74(StackVal, vVar2))
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

int Function_159(int iParam0) //Position: 0x9254 / 37460
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x9269 / 37481
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

void Function_161(var uParam0, int iParam1) //Position: 0x92B8 / 37560
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9310 / 37648
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_167(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x9383 / 37763
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9397 / 37783
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_166(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
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
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x9488 / 38024
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
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

bool Function_166(var uParam0, int iParam1) //Position: 0x94E0 / 38112
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x94FD / 38141
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x9557 / 38231
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x9569 / 38249
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_170(struct<185> Param0) //Position: 0x959D / 38301
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9608 / 38408
{
	var uVar0;
	
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
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(bool bParam0, int iParam1, bool bParam2) //Position: 0x96F2 / 38642
{
	int iVar0;
	
	Function_174(bParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, &iParam1);
	Function_173();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_173() //Position: 0x9871 / 39025
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x987D / 39037
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

void Function_175() //Position: 0x98C3 / 39107
{
	Function_176();
	return;
}

void Function_176() //Position: 0x98CC / 39116
{
	Function_185(&bLocal_4 + 8);
	Function_177(&Global_12714, &Global_15312, 0, 0);
	RELEASE_LAYOUT_REF(&bLocal_4);
	return;
}

void Function_177(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x98EA / 39146
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_184(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_184(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_184(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_183(&(Param0[iVar02]), 8);
	}
	Function_183(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_182(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_178(&Param0, &vParam1, uParam2, 0);
	}
}

void Function_178(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9992 / 39314
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_181(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_184(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_184(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_181(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
	}
}

int Function_179(int iParam0) //Position: 0x9AF8 / 39672
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

int Function_180(int iParam0) //Position: 0x9B23 / 39715
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

void Function_181(var uParam0, int iParam1) //Position: 0x9B57 / 39767
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_182(int iParam0) //Position: 0x9B68 / 39784
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

void Function_183(var uParam0, int iParam1) //Position: 0x9C11 / 39953
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_184(var uParam0, int iParam1) //Position: 0x9C2B / 39979
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185(int iParam0) //Position: 0x9C48 / 40008
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_186(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_186(struct<2>[] Param0, int iParam1) //Position: 0x9C70 / 40048
{
	if (Function_188(&(Param0[iParam12]), 4))
	{
		if (Function_188(&(Param0[iParam12]), 1))
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
			Function_187(&(Param0[iParam12]), 1);
			Function_187(&(Param0[iParam12]), 2);
			Function_187(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_187(struct<13> Param0) //Position: 0x9DBB / 40379
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_188(struct<13> Param0) //Position: 0x9DD8 / 40408
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_189() //Position: 0x9DF6 / 40438
{
	if (IS_BLIP_VALID(&bLocal_875))
	{
		REMOVE_BLIP(&bLocal_875);
	}
	if (IS_OBJECT_VALID(&bLocal_886))
	{
		Function_191();
		DESTROY_OBJECT(&bLocal_886);
	}
	if (IS_OBJECT_VALID(&(uLocal_888[0])))
	{
		DESTROY_OBJECT(&(uLocal_888[0]));
	}
	if (IS_OBJECT_VALID(&(uLocal_888[1])))
	{
		DESTROY_OBJECT(&(uLocal_888[1]));
	}
	if (IS_OBJECT_VALID(&(uLocal_888[2])))
	{
		DESTROY_OBJECT(&(uLocal_888[2]));
	}
	if (IS_ACTOR_VALID(&bLocal_954))
	{
		Function_190(&bLocal_954, 0);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_954);
	}
	if (IS_ACTOR_VALID(&bLocal_551))
	{
		TASK_PRIORITY_SET(&bLocal_551, 3);
		TASK_CLEAR(&bLocal_551);
	}
	if (IS_ACTOR_VALID(&bLocal_873))
	{
		TASK_PRIORITY_SET(&bLocal_873, 3);
		TASK_CLEAR(&bLocal_873);
	}
	if (IS_ACTOR_VALID(&bLocal_865))
	{
		TASK_PRIORITY_SET(&bLocal_865, 3);
		TASK_CLEAR(&bLocal_865);
		SET_ACTOR_INVULNERABILITY(&bLocal_865, 0);
	}
	return;
}

int Function_190(bool bParam0, bool bParam1) //Position: 0x9ED3 / 40659
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SK_SHOP_SET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_SET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "ACTIVE_WHEN_STOLEN"))
	{
		if (!bParam1)
		{
			return DECOR_REMOVE(&bParam0, "ACTIVE_WHEN_STOLEN");
		}
	}
	if (bParam1)
	{
		return DECOR_SET_BOOL(&bParam0, "ACTIVE_WHEN_STOLEN", 1);
	}
	return 0;
}

void Function_191() //Position: 0x9FAB / 40875
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_192(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9FD6 / 40918
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_220());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_191();
	CLEAR_PRINTED_OBJECTIVE();
	Function_219();
	Function_217(0);
	Function_216();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_215();
	Function_214();
	Function_191();
	ENABLE_JOURNAL_REPLAY(1);
	Function_213(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_212(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_209(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_208();
	Function_207(1178687);
	Function_205(33039);
	Function_204(0x218003f);
	Function_203(4194560);
	Function_202();
	Function_201();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_198(0, 1, 1);
	}
	else
	{
		Function_198(0, 1, 1);
	}
	Function_197();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_193();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_193() //Position: 0xA1E2 / 41442
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_196() > 3)
		{
			bVar0 *= 2;
		}
		Function_194(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA239 / 41529
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_195(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_195(bool bParam0) //Position: 0xA289 / 41609
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_196() //Position: 0xA2B2 / 41650
{
	return Global_21369.f_248;
}

void Function_197() //Position: 0xA2BD / 41661
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_136(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_198(int iParam0, bool bParam1, int iParam2) //Position: 0xA2E7 / 41703
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_85(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_136(&(Global_43791[Global_43789]), 2097152);
			Function_199(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_136(&(Global_43791[iVar0]), 2097155);
					Function_137(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_199(int iParam0) //Position: 0xA3F3 / 41971
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_200())
			{
				return;
			}
		}
		if (!Function_166(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_200() //Position: 0xA472 / 42098
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_201() //Position: 0xA4DB / 42203
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_202() //Position: 0xA501 / 42241
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_203(int iParam0) //Position: 0xA527 / 42279
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_204(int iParam0) //Position: 0xA544 / 42308
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_205(int iParam0) //Position: 0xA557 / 42327
{
	Function_206(&Global_43580, iParam0);
	return;
}

void Function_206(var uParam0, int iParam1) //Position: 0xA565 / 42341
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_207(bool bParam0) //Position: 0xA584 / 42372
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_208() //Position: 0xA5B1 / 42417
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

void Function_209(int iParam0) //Position: 0xA629 / 42537
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_210(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_210(bool bParam0, bool bParam1, int iParam2) //Position: 0xA75F / 42847
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_211(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_211(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_211(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_211(bool bParam0) //Position: 0xA7AD / 42925
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

void Function_212(int iParam0) //Position: 0xA8A1 / 43169
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

void Function_213(bool bParam0) //Position: 0xA924 / 43300
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_214() //Position: 0xA99B / 43419
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_215() //Position: 0xA9DF / 43487
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_216() //Position: 0xAA23 / 43555
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_217(int iParam0) //Position: 0xAA39 / 43577
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_218())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_218() //Position: 0xAA79 / 43641
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

void Function_219() //Position: 0xAA9E / 43678
{
	Global_15862 = 0.0f;
	return;
}

int Function_220() //Position: 0xAAA8 / 43688
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_221() //Position: 0xAAC5 / 43717
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_222(bool bParam0) //Position: 0xAACE / 43726
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&bParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
	ITERATE_IN_LAYOUT(&uVar0, &bParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_223(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xAB36 / 43830
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (iParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_225(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_224(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_224(bool bParam0) //Position: 0xAE78 / 44664
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

void Function_225(var uParam0) //Position: 0xAEAB / 44715
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_226() //Position: 0xAEC2 / 44738
{
	var uVar0[10];
	int iVar11;
	
	if (Function_271())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Elk Hunt I";
		uVar0[4] = "Stage 03 - Elk Hunt II";
		uVar0[5] = "Stage 04 - Elk Skin";
		uVar0[6] = "Stage 05 - Manzanita Store";
		uVar0[7] = "Stage 06 - Sell Skins";
		uVar0[8] = "Stage 07 - Ride Home";
		uVar0[9] = "Last Stage";
		iVar11 = Function_257(&uLocal_494, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_256(&iVar11, &bLocal_544, &iLocal_545, &iLocal_532))
		{
			Function_249();
			Function_248();
		}
		if (iVar11 == 0)
		{
			Function_249();
			Function_248();
			Function_247(&bLocal_583, 8);
		}
		else if (iVar11 == 1)
		{
			Function_249();
			Function_248();
			Function_242(bLocal_544);
			Function_238(StackVal, 5, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
		}
		else if (iVar11 == 2)
		{
			Function_249();
			Function_248();
			Function_233(&bLocal_585, 4);
		}
		else if (iVar11 == 3)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = true;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar11 == 4)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = 2;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar11 == 5)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = 3;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar11 == 6)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = 4;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar11 == 7)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = 5;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar11 == 8)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = 6;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar11 == 9)
		{
			Function_229();
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&Local_553);
			bLocal_544 = 101;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
	}
	return;
}

void Function_227(int iParam0) //Position: 0xB1D3 / 45523
{
	Function_228(&iParam0, 0.0f);
	return;
}

void Function_228(vector3 vParam0) //Position: 0xB1E0 / 45536
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_229() //Position: 0xB205 / 45573
{
	STREAMING_UNLOAD_BOUNDS();
	Function_231(12, 0, 1);
	if (IS_BLIP_VALID(&bLocal_875))
	{
		REMOVE_BLIP(&bLocal_875);
	}
	if (IS_OBJECT_VALID(&bLocal_886))
	{
		Function_191();
		DESTROY_OBJECT(&bLocal_886);
	}
	if (IS_OBJECT_VALID(&(uLocal_888[0])))
	{
		DESTROY_OBJECT(&(uLocal_888[0]));
	}
	if (IS_OBJECT_VALID(&(uLocal_888[1])))
	{
		DESTROY_OBJECT(&(uLocal_888[1]));
	}
	if (IS_OBJECT_VALID(&(uLocal_888[2])))
	{
		DESTROY_OBJECT(&(uLocal_888[2]));
	}
	if (IS_ACTOR_VALID(&bLocal_954))
	{
		Function_190(&bLocal_954, 0);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_954);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_230(&bLocal_4 + 152);
		DESTROY_OBJECT(&bLocal_4 + 152);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 184))
	{
		Function_230(&bLocal_4 + 184);
		DESTROY_OBJECT(&bLocal_4 + 184);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		Function_230(&bLocal_4 + 248);
		DESTROY_OBJECT(&bLocal_4 + 248);
	}
	return;
}

void Function_230(int iParam0) //Position: 0xB2E7 / 45799
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

void Function_231(int iParam0, bool bParam1, bool bParam2) //Position: 0xB335 / 45877
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			*(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_224(&uVar1);
					}
				}
				Function_232(&uVar0);
			}
		}
	}
	return;
}

void Function_232(bool bParam0) //Position: 0xB444 / 46148
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

void Function_233(bool bParam0, int iParam1) //Position: 0xB477 / 46199
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_234(&iParam1);
	bParam0 = 1;
	return;
}

void Function_234(int iParam0) //Position: 0xB49C / 46236
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_237("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_236(2) || Function_236(8)) || Function_236(9)) || Function_236(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_237("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_237("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_237("");
	}
	else if (iParam0 == 8)
	{
		Function_235();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_235();
	}
	return;
}

void Function_235() //Position: 0xB593 / 46483
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_236(int iParam0) //Position: 0xB59F / 46495
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_237(char* cParam0) //Position: 0xB5D5 / 46549
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_238(int iParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB641 / 46657
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_239(StackVal, Param4, uParam3, &iParam6);
		Function_234(iParam0);
		iParam1 = 1;
		iParam2 = 100;
	}
}

void Function_239(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB682 / 46722
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_241(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_240(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_240(int iParam0) //Position: 0xB704 / 46852
{
	if (!Function_85(iParam0))
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

var Function_241(struct<2> Param0, bool bParam2) //Position: 0xBBB2 / 48050
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

struct<8> Function_242(int iParam0) //Position: 0xBC1E / 48158
{
	Function_243(iParam0 + 1);
	return StackVal, Function_243(iParam0 + 1);
}

struct<8> Function_243(bool bParam0) //Position: 0xBC2B / 48171
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_244(&bLocal_4 + 632[0]);
			return StackVal, Function_244(&bLocal_4 + 632[0]);
			break;
		
		case 0x00000001:
			Function_244(&bLocal_4 + 712[0]);
			return StackVal, Function_244(&bLocal_4 + 712[0]);
			break;
		
		case 0x00000002:
			Function_244(&bLocal_4 + 768[0]);
			return StackVal, Function_244(&bLocal_4 + 768[0]);
			break;
		
		case 0x00000003:
			Function_244(&bLocal_4 + 824[0]);
			return StackVal, Function_244(&bLocal_4 + 824[0]);
			break;
		
		case 0x00000004:
			Function_244(&bLocal_4 + 896[0]);
			return StackVal, Function_244(&bLocal_4 + 896[0]);
			break;
		
		case 0x00000005:
			Function_244(&bLocal_4 + 952[0]);
			return StackVal, Function_244(&bLocal_4 + 952[0]);
			break;
		
		case 0x00000006:
			Function_244(&bLocal_4 + 1016[0]);
			return StackVal, Function_244(&bLocal_4 + 1016[0]);
			break;
		
		default:
			Function_244(&bLocal_4 + 1072[0]);
			return StackVal, Function_244(&bLocal_4 + 1072[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_244(&bLocal_4 + 632[0]);
	return StackVal, Function_244(&bLocal_4 + 632[0]);
}

struct<8> Function_244(bool bParam0) //Position: 0xBD52 / 48466
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_245(int iParam0) //Position: 0xBD7B / 48507
{
	return Function_246(iParam0 + 1);
}

int Function_246(bool bParam0) //Position: 0xBD88 / 48520
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&bLocal_4 + 632[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&bLocal_4 + 712[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&bLocal_4 + 768[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&bLocal_4 + 824[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&bLocal_4 + 896[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&bLocal_4 + 952[0]);
			break;
		
		case 0x00000006:
			return GET_OBJECT_HEADING(&bLocal_4 + 1016[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&bLocal_4 + 1072[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&bLocal_4 + 632[0]);
}

void Function_247(bool bParam0, int iParam1) //Position: 0xBEAF / 48815
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_234(&iParam1);
	bParam0 = 1;
	return;
}

void Function_248() //Position: 0xBED4 / 48852
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_249() //Position: 0xBEE9 / 48873
{
	Function_251();
	Function_250(10, 3);
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xBEF8 / 48888
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_251() //Position: 0xC059 / 49241
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_255())
	{
		Function_254(10, 3);
	}
	else
	{
		Function_252();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_252() //Position: 0xC0A4 / 49316
{
	Function_253(25, 2);
	return;
}

void Function_253(int iParam0, int iParam1) //Position: 0xC0B0 / 49328
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xC2DC / 49884
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_255() //Position: 0xC429 / 50217
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_256(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC491 / 50321
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_237("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_257(struct<17> Param0) //Position: 0xC540 / 50496
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_270(&Var12, &Var0);
	uVar15 = Function_269(uParam1, &Var12);
	Function_268(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_267(&Param0, uVar15);
	Function_265(StackVal, &Param0, Var12.f_12);
	Function_263(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_262(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_259(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_258(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_258(int iParam0, int iParam1, int iParam2) //Position: 0xC634 / 50740
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_259(struct<17> Param0) //Position: 0xC694 / 50836
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_261(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_261(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_258(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_260(Param1.f_64);
	}
	else
	{
		Function_260(Param1.f_64);
	}
	return 0;
}

void Function_260(bool bParam0) //Position: 0xC827 / 51239
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_261(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC865 / 51301
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_262(int iParam0, struct<21> Param1) //Position: 0xC91B / 51483
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_263(vector3 vParam0) //Position: 0xC942 / 51522
{
	switch (Function_264())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_264() //Position: 0xC9EE / 51694
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_265(vector3 vParam0) //Position: 0xCA2A / 51754
{
	switch (Function_266(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_266(bool bParam0) //Position: 0xCAD3 / 51923
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_267(struct<21> Param0) //Position: 0xCBF3 / 52211
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_268(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCDAD / 52653
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_269(int iParam0, struct<13> Param1) //Position: 0xCE49 / 52809
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_270(struct<17> Param0) //Position: 0xCE65 / 52837
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_271() //Position: 0xCEBF / 52927
{
	return Global_47307;
}

bool Function_272() //Position: 0xCEC8 / 52936
{
	if (IS_EXITFLAG_SET())
	{
		Function_242(bLocal_544);
		Function_238(StackVal, 4, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
		return 0;
	}
	Function_581(StackVal, StackVal, StackVal, StackVal, StackVal, Local_398, bLocal_544, iLocal_545, &bLocal_585, &bLocal_583, &bLocal_584);
	if (bLocal_544 == 99 && bLocal_544 == 100)
	{
		if (bLocal_544 < 6)
		{
			if (GET_TIME_ACCELERATION() != 0.0f)
			{
				SET_TIME_ACCELERATION(Global_99471);
			}
		}
		else
		{
			Function_580(8);
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_242(bLocal_544);
			Function_238(StackVal, 1, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
			return 1;
		}
		if (Function_560(&Local_641, &uLocal_587, &uLocal_823, &uLocal_547, iLocal_586))
		{
			if (Function_558(&uLocal_823))
			{
				Function_242(bLocal_544);
				Function_238(StackVal, 5, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
				return 1;
			}
		}
		if (Global_6646 || Global_6647)
		{
			Function_242(bLocal_544);
			Function_238(StackVal, 2, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
			return 1;
		}
		if (Function_557(2048))
		{
			Function_242(bLocal_544);
			Function_238(StackVal, 3, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
			return 1;
		}
		if (iLocal_877)
		{
			Function_237("home02_son01_player_fail");
			Function_242(bLocal_544);
			Function_238(StackVal, 5, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
			return 0;
		}
		if (IS_ACTOR_VALID(&bLocal_873))
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_873)
				{
					Function_556(&bLocal_551, &bLocal_549);
				}
			}
		}
		Function_555();
	}
	switch (bLocal_544)
	{
		case 0x00000063:
			Function_536();
			break;
		
		case 0x00000000:
			Function_528();
			break;
		
		case 0x00000001:
			Function_506();
			break;
		
		case 0x00000002:
			Function_463();
			break;
		
		case 0x00000003:
			Function_445();
			break;
		
		case 0x00000004:
			Function_437();
			break;
		
		case 0x00000005:
			Function_420();
			break;
		
		case 0x00000006:
			Function_357();
			break;
		
		case 0x00000065:
			Function_275();
			break;
		
		case 0x00000064:
			if (Function_274(&bLocal_584))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_273(&bLocal_544, &iLocal_545, &iLocal_532))
			{
				return 0;
			}
			break;
	}
	if (bLocal_583)
	{
		Function_247(&bLocal_583, 8);
		return 0;
	}
	if (bLocal_584 && bLocal_544 == 100)
	{
		Function_242(bLocal_544);
		Function_238(StackVal, 5, &bLocal_584, &bLocal_544, Function_245(bLocal_544), Function_242(bLocal_544), 0);
	}
	if (bLocal_585)
	{
		Function_233(&bLocal_585, 4);
		return 0;
	}
	return 1;
}

bool Function_273(var uParam0, var uParam1, int iParam2) //Position: 0xD11F / 53535
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_274(int iParam0) //Position: 0xD168 / 53608
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_275() //Position: 0xD17C / 53628
{
	Function_356(&cLocal_396);
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_551, true);
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
				MEMORY_PREFER_RIDING(&bLocal_549, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_549, true);
			}
			if (IS_ACTOR_VALID(&bLocal_867))
			{
				TASK_STAND_STILL(&bLocal_867, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_867, 2);
			}
			if (IS_ACTOR_VALID(&bLocal_869))
			{
				TASK_STAND_STILL(&bLocal_869, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_869, 2);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46914[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 1072[0], 1, 1, 1);
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_336())
			{
				if (!iLocal_565[6])
				{
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						Function_341(&bLocal_549, &bLocal_4 + 1072[2], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_551))
					{
						Function_341(&bLocal_551, &bLocal_4 + 1072[4], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_873))
					{
						Function_341(&bLocal_873, &bLocal_4 + 1072[6], 1, 1, 1);
					}
				}
				Function_227(&Local_553);
				iLocal_545 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_279("$/cutscene/son_01_end/son_01_end", &iLocal_532, &Local_398, &bLocal_544, 76918, 76733, 74549, 74247, 73946, 57473, 0, 2, 1, 1, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_227(&Local_553);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_276(&Local_553) < 1.0f)
			{
				if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						ADVANCE_TIME_HOURS(2.0f);
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "default_character_Main/Default/DefaultGait/Idles/StandIdle/Sometimes/CanPlayHatIdle/StreamedHatIdle");
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				else if (!HUD_IS_FADING())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_583 = true;
				}
			}
			break;
	}
	return;
}

float Function_276(vector3 vParam0) //Position: 0xD473 / 54387
{
	if (Function_278(&vParam0))
	{
		if (Function_277(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_277(int iParam0) //Position: 0xD540 / 54592
{
	return Function_14(iParam0, 2);
}

bool Function_278(float fParam0) //Position: 0xD54E / 54606
{
	return Function_14(fParam0, 1);
}

bool Function_279(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD55C / 54620
{
	if (!&bParam15)
	{
		Function_289(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_288(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&iParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_227(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_287())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_286(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_286(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_276(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_276(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_284(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_286(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_283(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_281();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_280(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_288(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_280(var uParam0, bool bParam1) //Position: 0xDBBE / 56254
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
		Function_208();
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

void Function_281() //Position: 0xDC8D / 56461
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_282();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_282() //Position: 0xDCD2 / 56530
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_283(bool bParam0) //Position: 0xDCE4 / 56548
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

void Function_284(var uParam0, int iParam1) //Position: 0xDD01 / 56577
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_285(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_285(int iParam0) //Position: 0xDD93 / 56723
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_286(bool bParam0) //Position: 0xDDC4 / 56772
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", 1);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_287() //Position: 0xDE87 / 56967
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_288(struct<37> Param0) //Position: 0xDEC4 / 57028
{
	return Param0.f_36;
}

void Function_289(var uParam0, int iParam1) //Position: 0xDECF / 57039
{
	Function_290(&uParam0, &iParam1, 0);
	return;
}

void Function_290(var uParam0, bool bParam1, bool bParam2) //Position: 0xDEDF / 57055
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_291(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_291(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_291(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xE057 / 57431
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

int Function_292() //Position: 0xE081 / 57473
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&bLocal_4))
			{
				if (Function_296())
				{
					Function_341(&Global_54076, &bLocal_4 + 632[0], 1, 1, 1);
					Function_341(&bLocal_549, &bLocal_4 + 632[1], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

struct<272> Function_293() //Position: 0xE10C / 57612
{
	var uVar0;
	
	Function_295(4, 1);
	uVar0 = &uVar0;
	bLocal_4 = CREATE_LAYOUT("home02_son01_layout");
	*(&bLocal_4 + 312) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "CutsceneVol_set");
	*(&bLocal_4 + 280[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-60f, 116,4573f, 1388f), Vector(0.0f, 60,51438f, 0.0f), Vector(40,09774f, 15,32191f, 38,18008f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 312, &bLocal_4 + 280[0]);
	*(&bLocal_4 + 280[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-77,5871f, 116,8612f, 1417,23f), Vector(0.0f, 0.0f, 0.0f), Vector(10,10873f, 12,49781f, 8,609169f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 312, &bLocal_4 + 280[1]);
	*(&bLocal_4 + 280[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "HorseRestriction", 2,802597E-45f, Vector(-77,06477f, 116,8612f, 1417,92f), Vector(0.0f, -2,093994f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 312, &bLocal_4 + 280[2]);
	*(&bLocal_4 + 360) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "Boundary01_set");
	*(&bLocal_4 + 320[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_01", 2,802597E-45f, Vector(-616.0f, 171,4841f, 1416f), Vector(0.0f, 28,23818f, 0.0f), Vector(100.0f, 100.0f, 800.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 360, &bLocal_4 + 320[0]);
	*(&bLocal_4 + 320[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_02", 2,802597E-45f, Vector(-816,3707f, 189,6194f, 1584,052f), Vector(0.0f, 27,55332f, 0.0f), Vector(100.0f, 100.0f, 800.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 360, &bLocal_4 + 320[1]);
	*(&bLocal_4 + 320[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_03", 2,802597E-45f, Vector(-852.0f, 190,2063f, 1212.0f), Vector(0.0f, 110,3436f, 0.0f), Vector(100.0f, 100.0f, 600.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 360, &bLocal_4 + 320[2]);
	*(&bLocal_4 + 320[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_04", 2,802597E-45f, Vector(-660.0f, 176,6902f, 1780f), Vector(0.0f, 110,3436f, 0.0f), Vector(100.0f, 100.0f, 600.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 360, &bLocal_4 + 320[3]);
	*(&bLocal_4 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "Boundary02_set");
	*(&bLocal_4 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_01", 2,802597E-45f, Vector(-616.0f, 171,4841f, 1416f), Vector(0.0f, 28,23818f, 0.0f), Vector(100.0f, 100.0f, 800.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 424, &bLocal_4 + 368[0]);
	*(&bLocal_4 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_03", 2,802597E-45f, Vector(-852.0f, 190,2063f, 1212.0f), Vector(0.0f, 110,3436f, 0.0f), Vector(100.0f, 100.0f, 600.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 424, &bLocal_4 + 368[1]);
	*(&bLocal_4 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_02", 2,802597E-45f, Vector(-805,6208f, 151,5189f, 1691,976f), Vector(0.0f, -10,38585f, 0.0f), Vector(100.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 424, &bLocal_4 + 368[2]);
	*(&bLocal_4 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_05", 2,802597E-45f, Vector(-804,9957f, 130,1467f, 1868,116f), Vector(0.0f, 28,97737f, 0.0f), Vector(100.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 424, &bLocal_4 + 368[3]);
	*(&bLocal_4 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_04", 2,802597E-45f, Vector(-632.0f, 156,4309f, 1857,686f), Vector(0.0f, 108,7783f, 0.0f), Vector(100.0f, 100.0f, 600.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 424, &bLocal_4 + 368[4]);
	*(&bLocal_4 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_06", 2,802597E-45f, Vector(-901,0269f, 185,9518f, 1394,38f), Vector(0.0f, 28,23818f, 0.0f), Vector(100.0f, 100.0f, 500.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 424, &bLocal_4 + 368[5]);
	*(&bLocal_4 + 432) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict01", 4,203895E-45f, Vector(-856.0f, 186,7f, 1300.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&bLocal_4 + 440) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict02", 4,203895E-45f, Vector(-659,8f, 175,1f, 1672.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&bLocal_4 + 448) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict03", 4,203895E-45f, Vector(-763,6307f, 144,3996f, 1816,154f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&bLocal_4 + 456) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict04", 4,203895E-45f, Vector(-732.0f, 176,3f, 1416.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&bLocal_4 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict05", 4,203895E-45f, Vector(-600,923f, 177,3287f, 1831,38f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&bLocal_4 + 472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_hunting01", 4,203895E-45f, Vector(-856.0f, 186,7f, 1300.0f), Vector(0.0f, 20.0f, 0.0f), Vector(40.0f, 50.0f, 40.0f));
	*(&bLocal_4 + 480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_hunting02", 4,203895E-45f, Vector(-659,8f, 175,1f, 1672.0f), Vector(0.0f, 20.0f, 0.0f), Vector(40.0f, 50.0f, 40.0f));
	*(&bLocal_4 + 488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_hunting03", 4,203895E-45f, Vector(-763,6307f, 144,3996f, 1816,154f), Vector(0.0f, 20.0f, 0.0f), Vector(40.0f, 50.0f, 40.0f));
	*(&bLocal_4 + 496) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_hunting04", 4,203895E-45f, Vector(-732.0f, 176,3206f, 1416f), Vector(0.0f, 20.0f, 0.0f), Vector(40.0f, 50.0f, 40.0f));
	*(&bLocal_4 + 504) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_objective01", 2,802597E-45f, Vector(-500f, 155,6078f, 1376.0f), Vector(0.0f, -31,14743f, 0.0f), Vector(10.0f, 30.0f, 30.0f));
	*(&bLocal_4 + 512) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_dog_finish01", 2,802597E-45f, Vector(-482,2923f, 154,0598f, 1389,764f), Vector(0.0f, -35,85153f, 0.0f), Vector(10.0f, 30.0f, 30.0f));
	*(&bLocal_4 + 520) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_objective03", 2,802597E-45f, Vector(-78,285f, 116,8612f, 1418,285f), Vector(0.0f, -6,652956f, 0.0f), Vector(10,67592f, 30.0f, 12,38602f));
	*(&bLocal_4 + 528) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_manzanita", 2,802597E-45f, Vector(-453,2839f, 152,7373f, 1617,92f), Vector(0.0f, 0.0f, 0.0f), Vector(250.0f, 100.0f, 250.0f));
	*(&bLocal_4 + 576) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "ManzanitaVolumes_set");
	*(&bLocal_4 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "HorseVolume", 2,802597E-45f, Vector(-424,1354f, 151,1609f, 1586,496f), Vector(0.0f, 23,50725f, 0.0f), Vector(11,42754f, 19,74509f, 9,604965f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 536[0]);
	*(&bLocal_4 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "JackVolume", 2,802597E-45f, Vector(-439,4958f, 152,3514f, 1621,257f), Vector(0.0f, 23,50725f, 0.0f), Vector(3,601024f, 5,43946f, 3,471727f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 536[1]);
	*(&bLocal_4 + 536[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "RufusVolume", 2,802597E-45f, Vector(-439,3225f, 152,3514f, 1621,235f), Vector(0.0f, 14,20942f, 0.0f), Vector(8,373956f, 5,43946f, 8,275108f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 536[2]);
	*(&bLocal_4 + 536[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "ShopVolume", 2,802597E-45f, Vector(-451,9175f, 157,9807f, 1620,605f), Vector(0.0f, 18,35858f, 0.0f), Vector(9,641255f, 15,32468f, 16,55424f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 536[3]);
	*(&bLocal_4 + 584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_dog_scent01a", 2,802597E-45f, Vector(-286,3795f, 131,6425f, 1322,406f), Vector(0.0f, -6,652956f, 0.0f), Vector(37,76464f, 30.0f, 33,77028f));
	*(&bLocal_4 + 592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_dog_scent01b", 2,802597E-45f, Vector(-510,698f, 156,338f, 1368,691f), Vector(0.0f, -37,97134f, 0.0f), Vector(37,76464f, 30.0f, 33,77028f));
	*(&bLocal_4 + 600) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "VolHorseJump", 2,802597E-45f, Vector(-80.0f, 116,8612f, 1416f), Vector(0.0f, -6,652956f, 0.0f), Vector(20,32594f, 30.0f, 19,89235f));
	*(&bLocal_4 + 608) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "HomeVolume", 2,802597E-45f, Vector(-88,66958f, 117,6969f, 1420,484f), Vector(0.0f, 4,701394f, 0.0f), Vector(243,5695f, 142,8223f, 269,9213f));
	*(&bLocal_4 + 616) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "HomeVolume1", 2,802597E-45f, Vector(-67,02754f, 117,6969f, 1263,39f), Vector(0.0f, 19,19381f, 0.0f), Vector(141,2762f, 142,8223f, 65,43433f));
	*(&bLocal_4 + 624) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 632[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart01", Vector(-59,632f, 116,457f, 1387,92f), Vector(0.0f, 309,4207f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[0], &bLocal_4 + 624);
	*(&bLocal_4 + 632[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart01", Vector(-58,17109f, 116,457f, 1388,314f), Vector(0.0f, 290,785f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[1], &bLocal_4 + 624);
	*(&bLocal_4 + 632[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart01", Vector(-77,28787f, 116,8612f, 1418,517f), Vector(0.0f, -459,472f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[2], &bLocal_4 + 624);
	*(&bLocal_4 + 632[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart01", Vector(-76,75131f, 116,8612f, 1416,562f), Vector(0,02966168f, -111,2905f, 1,095516f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[3], &bLocal_4 + 624);
	*(&bLocal_4 + 632[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart01", Vector(-85,845f, 117,275f, 1405,845f), Vector(0.0f, -293,466f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[4], &bLocal_4 + 624);
	*(&bLocal_4 + 632[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "WifeStart01", Vector(-96.0f, 118,8691f, 1368f), Vector(0.0f, 148,3986f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[5], &bLocal_4 + 624);
	*(&bLocal_4 + 632[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "UncleStart01", Vector(-64f, 117,7402f, 1360f), Vector(0.0f, 148,3986f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[6], &bLocal_4 + 624);
	*(&bLocal_4 + 632[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "BookStart01", Vector(-57,12691f, 116,4844f, 1388f), Vector(-90.0f, 0.0f, -90.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 632[7], &bLocal_4 + 624);
	*(&bLocal_4 + 704) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart02", Vector(-489,4322f, 155,8554f, 1392,127f), Vector(0.0f, 54,78261f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 712[0], &bLocal_4 + 704);
	*(&bLocal_4 + 712[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart02", Vector(-485,1745f, 154,9583f, 1382,417f), Vector(0.0f, 47,61708f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 712[1], &bLocal_4 + 704);
	*(&bLocal_4 + 712[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart02", Vector(-488,4922f, 155,5023f, 1387,821f), Vector(0.0f, 46,86918f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 712[2], &bLocal_4 + 704);
	*(&bLocal_4 + 712[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart02", Vector(-488,4149f, 155,2506f, 1379,404f), Vector(0.0f, 62,37252f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 712[3], &bLocal_4 + 704);
	*(&bLocal_4 + 712[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart02", Vector(-499,8856f, 156,1362f, 1376.0f), Vector(0.0f, 54,73191f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 712[4], &bLocal_4 + 704);
	*(&bLocal_4 + 760) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 768[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart03", Vector(-844,0001f, 184,7214f, 1308f), Vector(0.0f, -151,9222f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 768[0], &bLocal_4 + 760);
	*(&bLocal_4 + 768[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart03", Vector(-852.0f, 185,8514f, 1311,999f), Vector(0.0f, 212,991f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 768[1], &bLocal_4 + 760);
	*(&bLocal_4 + 768[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart03", Vector(-848,0001f, 186,0467f, 1308f), Vector(0.0f, 214,3819f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 768[2], &bLocal_4 + 760);
	*(&bLocal_4 + 768[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart03", Vector(-856,0001f, 187,1848f, 1308f), Vector(0.0f, 210,9685f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 768[3], &bLocal_4 + 760);
	*(&bLocal_4 + 768[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart03", Vector(-844.0f, 184,7214f, 1312f), Vector(0.0f, 212,8771f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 768[4], &bLocal_4 + 760);
	*(&bLocal_4 + 816) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 824[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart04", Vector(-767,8907f, 143,8967f, 1822,389f), Vector(0.0f, -65,25877f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[0], &bLocal_4 + 816);
	*(&bLocal_4 + 824[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart04", Vector(-759,896f, 144,4938f, 1820,047f), Vector(0.0f, 103,0233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[1], &bLocal_4 + 816);
	*(&bLocal_4 + 824[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionEnd04", Vector(-759,896f, 144,4938f, 1820,047f), Vector(0.0f, 103,0233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[2], &bLocal_4 + 816);
	*(&bLocal_4 + 824[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart04", Vector(-771,8225f, 143,9494f, 1820,18f), Vector(0.0f, 315,9827f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[3], &bLocal_4 + 816);
	*(&bLocal_4 + 824[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart04", Vector(-758,1589f, 144,8854f, 1817,757f), Vector(0.0f, 199,1062f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[4], &bLocal_4 + 816);
	*(&bLocal_4 + 824[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart04", Vector(-759,693f, 144,9097f, 1812,176f), Vector(0.0f, 149,1774f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[5], &bLocal_4 + 816);
	*(&bLocal_4 + 824[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "ElkStart04", Vector(-763,8279f, 144,099f, 1820,071f), Vector(0.0f, 6,688036f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 824[6], &bLocal_4 + 816);
	*(&bLocal_4 + 888) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 896[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart05", Vector(-759,087f, 181,2669f, 1588,472f), Vector(0.0f, -222,4582f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[0], &bLocal_4 + 888);
	*(&bLocal_4 + 896[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart05", Vector(-758,9849f, 181,2669f, 1591,471f), Vector(0.0f, 142,455f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[1], &bLocal_4 + 888);
	*(&bLocal_4 + 896[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart05", Vector(-763,0898f, 181,5971f, 1590,114f), Vector(0.0f, 267,0839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[2], &bLocal_4 + 888);
	*(&bLocal_4 + 896[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart05", Vector(-767,1053f, 181,9111f, 1591,742f), Vector(0.0f, 274,5515f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[3], &bLocal_4 + 888);
	*(&bLocal_4 + 896[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart05", Vector(-767,0947f, 181,9111f, 1588,717f), Vector(0.0f, 265,1396f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[4], &bLocal_4 + 888);
	*(&bLocal_4 + 944) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 952[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart06", Vector(-423,4149f, 151,0259f, 1612,49f), Vector(0.0f, -248,4809f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 952[0], &bLocal_4 + 944);
	*(&bLocal_4 + 952[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart06", Vector(-423,9886f, 151,0173f, 1615,428f), Vector(0.0f, 142,455f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 952[1], &bLocal_4 + 944);
	*(&bLocal_4 + 952[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart06", Vector(-425,0565f, 151,0259f, 1610,344f), Vector(0.0f, 139,2676f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 952[2], &bLocal_4 + 944);
	*(&bLocal_4 + 952[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart06", Vector(-424,6304f, 151,0436f, 1606,555f), Vector(0.0f, 141,8923f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 952[3], &bLocal_4 + 944);
	*(&bLocal_4 + 952[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart06", Vector(-426,3392f, 151,2673f, 1615,733f), Vector(0.0f, -30,82258f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 952[4], &bLocal_4 + 944);
	*(&bLocal_4 + 952[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "ShopStart06", Vector(-455,618f, 153,6423f, 1620,2f), Vector(0.0f, -30,82258f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 952[5], &bLocal_4 + 944);
	*(&bLocal_4 + 1008) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene07Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1016[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart07", Vector(-425,0798f, 151,269f, 1619,563f), Vector(0.0f, -222,4582f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1016[0], &bLocal_4 + 1008);
	*(&bLocal_4 + 1016[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart07", Vector(-426,8374f, 151,2673f, 1615,933f), Vector(0.0f, 142,455f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1016[1], &bLocal_4 + 1008);
	*(&bLocal_4 + 1016[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart07", Vector(-420,7676f, 151,0259f, 1612,671f), Vector(0.0f, 366,5156f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1016[2], &bLocal_4 + 1008);
	*(&bLocal_4 + 1016[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart07", Vector(-418,2608f, 151,0173f, 1616,032f), Vector(0.0f, 11,5599f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1016[3], &bLocal_4 + 1008);
	*(&bLocal_4 + 1016[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStart07", Vector(-422,0284f, 151,019f, 1616,991f), Vector(0.0f, 6,072476f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1016[4], &bLocal_4 + 1008);
	*(&bLocal_4 + 1064) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1072[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStartLast", Vector(-80,76873f, 116,8612f, 1419,217f), Vector(0.0f, -184,7184f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[0], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerEndLast", Vector(-80,79981f, 116,8612f, 1419,195f), Vector(0.0f, -186,3389f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[1], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStartLast", Vector(-88,26501f, 116,9373f, 1409,319f), Vector(0.0f, 214,9408f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[2], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionEndLast", Vector(-88,27531f, 116,9388f, 1409,355f), Vector(0.0f, 392,05f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[3], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStartLast", Vector(-76,75131f, 116,8612f, 1416,562f), Vector(0.0f, -118,5378f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[4], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseEndLast", Vector(-76,75131f, 116,8612f, 1416,562f), Vector(0.0f, -123,0381f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[5], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStartLast", Vector(-77,28787f, 116,8612f, 1418,517f), Vector(0.0f, 242,1845f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[6], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseEndLast", Vector(-77,28787f, 116,8612f, 1418,517f), Vector(0.0f, 260,0302f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[7], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogStartLast", Vector(-74,16879f, 116,8612f, 1407,398f), Vector(0.0f, -110,2214f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[8], &bLocal_4 + 1064);
	*(&bLocal_4 + 1072[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogEndLast", Vector(-55,14325f, 116,8612f, 1413,572f), Vector(0.0f, 49,29332f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1072[9], &bLocal_4 + 1064);
	*(&bLocal_4 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_hunting01", Vector(-856,0001f, 186,7294f, 1300f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_hunting02", Vector(-659,8233f, 174,6981f, 1672,03f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_hunting03", Vector(-763,6307f, 144,3996f, 1816,154f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_hunting04", Vector(-732.0f, 176,3206f, 1416f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_dog01", Vector(-780.0f, 176,6902f, 1292.0f), Vector(0.0f, 89,56735f, 0.0f));
	*(&bLocal_4 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_dog02", Vector(-692,3898f, 177,6765f, 1635,639f), Vector(0.0f, 194,9541f, 0.0f));
	*(&bLocal_4 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_dog03", Vector(-665,0641f, 171,9918f, 1764,751f), Vector(0.0f, 113,5627f, 0.0f));
	*(&bLocal_4 + 1216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_dog04", Vector(-720.0f, 177,6941f, 1468f), Vector(0.0f, 29,90766f, 0.0f));
	*(&bLocal_4 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective01", Vector(-499,8856f, 156,1362f, 1376.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective02", Vector(-423,9132f, 151,0259f, 1612,689f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective03", Vector(-77,83759f, 116,8612f, 1417,838f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1248) = Vector(-67,99997f, 112,0132f, 1148f);
	*(&bLocal_4 + 1248 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&bLocal_4 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_dog_face", Vector(-67,99997f, 112,0132f, 1148f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1280) = Vector(-75,842f, 117,858f, 1419,23f);
	*(&bLocal_4 + 1280 + 12) = Vector(0.0f, 268,941f, 0.0f);
	*(&bLocal_4 + 1304) = Vector(-75,856f, 117,858f, 1417,472f);
	*(&bLocal_4 + 1304 + 12) = Vector(0.0f, 267.0f, 0.0f);
	*(&bLocal_4 + 1328) = Vector(-88,55602f, 117,5194f, 1403,736f);
	*(&bLocal_4 + 1328 + 12) = Vector(0.0f, 343,5621f, 0.0f);
	*(&bLocal_4 + 1352) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01aSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1360[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01a_01", Vector(-272f, 131,5137f, 1324f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1360[0], &bLocal_4 + 1352);
	*(&bLocal_4 + 1360[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01a_02", Vector(-280.0f, 131,4975f, 1320f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1360[1], &bLocal_4 + 1352);
	*(&bLocal_4 + 1360[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01a_03", Vector(-288.0f, 132,0098f, 1324.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1360[2], &bLocal_4 + 1352);
	*(&bLocal_4 + 1360[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01a_04", Vector(-296.0f, 132,9345f, 1328f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1360[3], &bLocal_4 + 1352);
	*(&bLocal_4 + 1400) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01bSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1408[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01b_01", Vector(-499,8856f, 156,1362f, 1376.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1408[0], &bLocal_4 + 1400);
	*(&bLocal_4 + 1408[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01b_02", Vector(-503,0443f, 155,9924f, 1368,312f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1408[1], &bLocal_4 + 1400);
	*(&bLocal_4 + 1408[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01b_03", Vector(-514,064f, 156,6116f, 1360f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1408[2], &bLocal_4 + 1400);
	*(&bLocal_4 + 1408[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_scent01b_04", Vector(-521,8978f, 157,1542f, 1358,102f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1408[3], &bLocal_4 + 1400);
	*(&bLocal_4 + 1448) = CREATE_OBJECTSET_IN_LAYOUT("ManzanitaPointsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1456[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseWait", Vector(-423,8416f, 151,1687f, 1587,102f), Vector(0.0f, 297,2401f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1456[0], &bLocal_4 + 1448);
	*(&bLocal_4 + 1456[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseWait", Vector(-423,3262f, 151,1825f, 1588,165f), Vector(0.0f, 274,5515f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1456[1], &bLocal_4 + 1448);
	*(&bLocal_4 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "sit_cleanknife", "sit_cleanknife", Vector(-439,6414f, 152,3514f, 1620,573f), Vector(0.0f, -183,5839f, 0.0f));
	*(&bLocal_4 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "dog_sleeping", "dog_sleeping", Vector(-442,6212f, 152,3512f, 1621,41f), Vector(0.0f, -74,68732f, 0.0f));
	PushArrayP();
	*(&bLocal_4 + 1496) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_dog01");
	PushArrayP();
	*(&bLocal_4 + 1504) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_dog01_01");
	PushArrayP();
	*(&bLocal_4 + 1512) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_companion01");
	PushArrayP();
	*(&bLocal_4 + 1520) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "curve1");
	PushArrayP();
	*(&bLocal_4 + 1528) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_flee01");
	PushArrayP();
	*(&bLocal_4 + 1536) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_flee02");
}

struct<8> ´°D¾qâÄ(  C9¹°DÃ~¤Ä"  C7»DÇBDÄNòC1ÎDÌô~Ä"^C.²´DÐ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27) //Position: 0x10C81 / 68737
{
	int iVar71;
	
	Unknown_Function();
}

void Function_295(int iParam0, int iParam1) //Position: 0x10E46 / 69190
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

bool Function_296() //Position: 0x10E90 / 69264
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_313(&iLocal_410))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_551))
		{
			bLocal_551 = Function_306(1, 1, -78,446f, 116,861f, 1419,268f, -469,06f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_549))
		{
			bLocal_549 = Function_297(12, 0, 1, -58,721f, 116,457f, 1388,914f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_549, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_865))
		{
			bLocal_865 = Function_297(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_865, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_297(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x10F4C / 69452
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = &iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_166(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, 1, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_231(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_305(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_300(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &fParam3;
			Var3.f_4 = &fParam4;
			Var3.f_8 = &fParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_299(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_298(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_298(var uParam0, bool bParam1) //Position: 0x1148C / 70796
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_299(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x114AE / 70830
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_300(int iParam0, int iParam1) //Position: 0x1150F / 70927
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_304(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_301(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_301(var uParam0, int iParam1) //Position: 0x1159D / 71069
{
	Function_303(&uParam0);
	Function_302(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_302(int iParam0) //Position: 0x115C9 / 71113
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_303(int iParam0) //Position: 0x115EF / 71151
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

bool Function_304(int iParam0) //Position: 0x116C5 / 71365
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_305(int iParam0, bool bParam1) //Position: 0x116DC / 71388
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&bParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &bParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

var Function_306(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x11782 / 71554
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_312(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_311())
		{
			return "";
		}
	}
	if (!Function_309())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_208();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_244(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_244(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_244(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_244(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_308(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_308(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&fParam2, &fParam3, &fParam4);
				if (!Function_74(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_307(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_307(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x11ADF / 72415
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

var Function_308(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x11B29 / 72489
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_309() //Position: 0x11BC9 / 72649
{
	if (Function_310() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_310() //Position: 0x11BDF / 72671
{
	return Global_21369.f_244;
}

bool Function_311() //Position: 0x11BEA / 72682
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_312(var uParam0, bool bParam1, bool bParam2) //Position: 0x11C0A / 72714
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_313(struct<2>[] Param0) //Position: 0x11C39 / 72761
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_318();
	iVar1 = 0;
	if (!Function_188(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_317(&(Param0[iVar02]), 8);
		}
		else if (Function_316())
		{
			iVar1 = 1;
			Function_317(&(Param0[iVar02]), 8);
		}
		Function_317(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_188(&(Param0[iVar02]), 4))
		{
			if (!Function_188(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_188(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_188(&(Param0[02]), 8) || iVar1));
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
				Function_317(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_188(&(Param0[iVar02]), 4))
		{
			if (!Function_188(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_317(&(Param0[iVar02]), 2);
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
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_317(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_317(&(Param0[iVar02]), 2);
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
	Function_314();
	return 1;
}

void Function_314() //Position: 0x11FFB / 73723
{
	if (!Function_315(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_315(int iParam0) //Position: 0x1203B / 73787
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_316() //Position: 0x12057 / 73815
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

void Function_317(struct<13> Param0) //Position: 0x12085 / 73861
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_318() //Position: 0x12098 / 73880
{
	if (!Function_315(128))
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

int Function_319() //Position: 0x120DA / 73946
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (!Function_288(&Local_398))
			{
				Function_320(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_320(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_320(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_320(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x12138 / 74040
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
		uVar0 = Function_50();
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
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_248();
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
	Function_280(&iParam9, &bParam10);
}

int Function_321() //Position: 0x12207 / 74247
{
	switch (bLocal_544)
	{
		case 0x00000063:
			TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 0);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_549, "son_crouchGetup", 0);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "son_crouchGetup/getup");
			iLocal_883 = 1;
			GET_OBJECT_POSITION(&bLocal_4 + 632[2], &Local_945);
			SET_GAME_CAMERA_DRIFTZ(-2,5f);
			ENABLE_GAME_CAMERA_FOCUS(Local_945, -1.0f, 6, 1, 1, 0);
			SET_DRAW_ACTOR(&bLocal_865, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				Function_341(&bLocal_549, &bLocal_4 + 1072[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				Function_341(&bLocal_551, &bLocal_4 + 1072[5], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 1072[7], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_873, -1.0f, 0, 0);
			}
			SET_DRAW_ACTOR(&bLocal_865, 1);
			Function_341(&Global_54076, &bLocal_4 + 1072[1], 1, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_322() //Position: 0x12335 / 74549
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (!Function_325() && !Function_313(&iLocal_444))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_323(&uLocal_831, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_323(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1237A / 74618
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_324(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_324(int iParam0) //Position: 0x123A4 / 74660
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return &iVar0;
}

bool Function_325() //Position: 0x128F9 / 76025
{
	Function_328(&bLocal_4 + 8, 980, 2, 0);
	Function_328(&bLocal_4 + 8, 1111, 2, 0);
	Function_328(&bLocal_4 + 8, 1109, 2, 0);
	Function_328(&bLocal_4 + 8, 1110, 2, 0);
	Function_328(&bLocal_4 + 8, Global_15312[03], 2, 0);
	Function_326(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanknife", 1, 0);
	Function_326(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	if (Function_313(&bLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_326(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x129D4 / 76244
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_327(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_317(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_327(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x12A12 / 76306
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_317(&(Param0[iVar02]), 4);
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

var Function_328(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12AE1 / 76513
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_317(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_317(&(Param0[iVar02]), 8);
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

int Function_329() //Position: 0x12BBD / 76733
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&bLocal_4))
			{
			}
			else if (Function_296())
			{
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					Function_341(&bLocal_549, &bLocal_4 + 632[1], 1, 1, 1);
					Function_341(&Global_54076, &bLocal_4 + 632[0], 1, 1, 1);
					Function_341(&bLocal_865, &bLocal_4 + 632[4], 1, 1, 1);
					SET_DRAW_ACTOR(&bLocal_865, 0);
					TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
					return 1;
				}
			}
			break;
		
		case 0x00000065:
			SET_DRAW_ACTOR(&bLocal_865, 0);
			Function_323(&uLocal_831, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_330() //Position: 0x12C76 / 76918
{
	switch (bLocal_544)
	{
		case 0x00000063:
			Function_333(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_331(StackVal, &cLocal_396, (&Global_6667[5228] + 88), &bLocal_4 + 280[0], 1, 0, 0, 0, 1, 1);
			Function_323(&uLocal_831, 0, 0, 4294967295, 4294967295);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_869, &bLocal_4 + 280[0], 4, 1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_867, &bLocal_4 + 280[0], 4, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_323(&uLocal_831, 0, 0, 4294967295, 4294967295);
			if (!IS_ACTOR_RIDING(&bLocal_549))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_873);
			}
			Function_333(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_244(&bLocal_4 + 1072[0]);
			Function_331(StackVal, &cLocal_396, Function_244(&bLocal_4 + 1072[0]), &bLocal_4 + 280[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_333(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_331(char* cParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x12D6F / 77167
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &cParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_332(&uVar1, &cParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_332(var uParam0, float fParam1) //Position: 0x1300F / 77839
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_333(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x13091 / 77969
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_248();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
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
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
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
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_335(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_335(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
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
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_334()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_334()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
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
	if (Function_315(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_315(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_334() //Position: 0x13343 / 78659
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
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

struct<8> Function_335(var uParam0) //Position: 0x133D1 / 78801
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

bool Function_336() //Position: 0x133E3 / 78819
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 1072[6], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 1072[8], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[6])
	{
		Function_341(&bLocal_865, &bLocal_4 + 1072[8], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		return 1;
	}
	return 0;
}

void Function_337(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x13534 / 79156
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_307(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_338(var uParam0, bool bParam1) //Position: 0x1356F / 79215
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				ACCESSORIZE_HORSE(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_339(var uParam0, bool bParam1) //Position: 0x135B7 / 79287
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
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_340() //Position: 0x135FE / 79358
{
	(&bLocal_4 + 152) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Horse01"));
	*(&bLocal_4 + 128[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HORSE_01_01", 980, Vector(-72.0f, 116,8612f, 1400f), Vector(0.0f, 120,6227f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 128[02], &bLocal_4 + 152);
	return;
}

void Function_341(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x13663 / 79459
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_342(int iParam0) //Position: 0x13773 / 79731
{
	if (!Function_288(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_198(1, 0, 1);
		}
	}
	return;
}

bool Function_343(bool bParam0) //Position: 0x1378F / 79759
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_344() //Position: 0x137AB / 79787
{
	Function_351(12);
	Function_351(13);
	Function_351(11);
	Function_351(35);
	Function_351(6);
	Function_351(3);
	Function_351(15);
	Function_351(8);
	Function_351(19);
	Function_351(5);
	Function_169(18444);
	Function_349(4);
	Function_348();
	Function_347();
	if (bLocal_544 == 0)
	{
		Function_346(3);
		Function_345(3);
	}
	else if (bLocal_544 == 1)
	{
		Function_346(3);
		Function_345(3);
	}
	else if (bLocal_544 == 2)
	{
		Function_346(3);
		Function_345(3);
	}
	else if (bLocal_544 == 3)
	{
		Function_346(3);
		Function_345(3);
	}
	else if (bLocal_544 == 4)
	{
		Function_346(3);
		Function_345(3);
	}
	else if (bLocal_544 == 5)
	{
		Function_346(3);
		Function_345(3);
	}
	else if (bLocal_544 == 6)
	{
		Function_346(3);
		Function_345(3);
	}
	return;
}

void Function_345(int iParam0) //Position: 0x1386B / 79979
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 3;
	}
	Global_43580.f_60 = iParam0;
	return;
}

void Function_346(int iParam0) //Position: 0x13889 / 80009
{
	if (iParam0 < 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 10;
	}
	Global_43580.f_56 = (iParam0 - Global_43580.f_12);
	return;
}

void Function_347() //Position: 0x138AE / 80046
{
	Global_43580.f_60 = 4294967295;
	return;
}

void Function_348() //Position: 0x138BA / 80058
{
	Global_43580.f_56 = 0;
	return;
}

void Function_349(int iParam0) //Position: 0x138C6 / 80070
{
	Function_350(&Global_43580, iParam0);
	return;
}

void Function_350(var uParam0, int iParam1) //Position: 0x138D4 / 80084
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_351(int iParam0) //Position: 0x138FC / 80124
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_352(bool bParam0) //Position: 0x1391C / 80156
{
	Function_353(0, 0x40400000);
	Function_215();
	Function_214();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_353(float fParam0, float fParam1) //Position: 0x13952 / 80210
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_355();
	Function_354();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_354() //Position: 0x13A63 / 80483
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_355() //Position: 0x13A97 / 80535
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_356(char* cParam0) //Position: 0x13B9D / 80797
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&cParam0);
		if (IS_ITERATOR_VALID(&uVar0))
		{
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				while (IS_OBJECT_VALID(&uVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if ((((((((((((((((((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1109 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1110) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1111) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1118) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1119) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1120) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1116) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1117) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1124) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1125) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1126) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1127) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1121) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1122) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1123) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1061) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1062) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1063) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1068) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1069) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1070) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1071) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1074) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1075) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1076) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1101)
						{
							DESTROY_OBJECT(&uVar1);
						}
					}
					uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
				}
			}
			DESTROY_ITERATOR(&uVar0);
		}
	}
	return;
}

void Function_357() //Position: 0x13E8C / 81548
{
	Function_356(&cLocal_396);
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_417();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_565[5] == 0)
			{
				Function_323(&uLocal_831, 13, 0, 4294967295, 4294967295);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46926[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 1016[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
					Function_415(&bLocal_549, &bLocal_4 + 1016[3], 1, 1, 1);
				}
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_414())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_862 = Function_413();
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (iLocal_565[5] == 0)
				{
					Function_323(&uLocal_831, 13, 0, 4294967295, 4294967295);
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_341(&bLocal_551, &bLocal_4 + 1016[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_873))
						{
							Function_341(&bLocal_873, &bLocal_4 + 1016[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_873))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_873);
							}
						}
					}
				}
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_408(&(Local_641[215]), &bLocal_869, "Uncle", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[315]), &bLocal_867, "Wife", 0, 0x5f5e100, 1);
				Function_403(&(Local_641[415]));
				Function_403(&(Local_641[515]));
				Function_227(&Local_553);
				iLocal_545 = 6;
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[1], Function_246(bLocal_544), 2);
			}
			break;
		
		case 0x00000006:
			if (Function_392(1))
			{
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					GET_OBJECT_POSITION(&bLocal_4 + 952[3], &Local_927);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_927, 2.0f, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				Function_323(&uLocal_831, 13, 0, 4294967295, 4294967295);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_549);
				if (DECOR_GET_BOOL(&cLocal_396, "FindingHorse"))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					DECOR_REMOVE(&cLocal_396, "FindingHorse");
				}
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				if (IS_ACTOR_RIDING(&bLocal_549))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					TASK_CLEAR(&bLocal_549);
					Function_227(&Local_553);
					Function_227(&iLocal_557);
					Function_227(&iLocal_561);
					iLocal_545 = 16;
				}
			}
			else
			{
				if (Function_391(&Global_54076, &bLocal_4 + 1240) < (Function_389(&bLocal_4 + 1240, &bLocal_4 + 952[5]) + 50.0f))
				{
					Function_237("beechers_abandoned");
					bLocal_584 = true;
				}
				if (IS_ACTOR_ALIVE(&bLocal_551))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_551)))
					{
						if (IS_BLIP_VALID(&bLocal_875))
						{
							REMOVE_BLIP(&bLocal_875);
						}
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_551, 334, 0, 2, 0);
						Function_388("Horse_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(&bLocal_875))
					{
						REMOVE_BLIP(&bLocal_875);
					}
					if (!DECOR_GET_BOOL(&cLocal_396, "FindingHorse"))
					{
						Function_388("Horse_find", 0x40f00000, 1, 2, 0, 0, 0, 0);
						DECOR_SET_BOOL(&cLocal_396, "FindingHorse", 1);
					}
				}
			}
			break;
		
		case 0x00000010:
			bLocal_875 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1240, 330, 0f, 2, 0);
			if (IS_BLIP_VALID(&bLocal_875))
			{
			}
			GET_OBJECT_POSITION(&bLocal_4 + 1240, &Local_933);
			GET_OBJECT_ORIENTATION(&bLocal_4 + 1240, &Local_936);
			bLocal_886 = Function_387(StackVal, StackVal, &cLocal_396, "HOME02_SON01GATEWAY02", Local_933, Local_936, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			if (IS_OBJECT_VALID(&bLocal_886))
			{
			}
			GET_OBJECT_POSITION(&bLocal_4 + 1240, &Local_939);
			Function_385(StackVal, Local_939, 0, 48, 1);
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
				Function_231(12, 0, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
				Local_945 = Vector(-2.0f, 0.0f, 0.0f);
				TASK_FOLLOW_OBJECT(&bLocal_549, &Global_54076, &Local_945, 0, 0, 0, 0, 0, 0, 1);
				TASK_PRIORITY_SET(&bLocal_549, true);
			}
			if (IS_ACTOR_VALID(&bLocal_865))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865, &Global_54076, 25.0f, 10.0f, 20.0f);
				Local_910[02] = Vector(-3.0f, 0.0f, 6.0f);
				bLocal_856 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 5.0f, 4);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
				TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				TASK_PRIORITY_SET(&bLocal_865, true);
			}
			if (iLocal_565[5] == 0)
			{
				Function_384();
			}
			Function_227(&Local_553);
			iLocal_545 = 7;
			break;
		
		case 0x00000007:
			if (Function_276(&Local_553) <= 5.0f)
			{
				Function_388("home02_son01_obj12", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				Function_383();
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION(&bLocal_4 + 1240, &Local_945);
			Function_378(StackVal, "$/cutscene/son_01_end/son_01_end", &uLocal_992, Local_945, 89060, 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			Function_377();
			if (Function_368(&iLocal_561, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_584, 0, &cLocal_396, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				if (IS_OBJECT_VALID(&bLocal_886))
				{
					Function_191();
					Function_367(&bLocal_886);
				}
				if (Function_391(&Global_54076, &bLocal_4 + 1240) < (Function_389(&bLocal_4 + 1240, &bLocal_4 + 952[5]) + 75.0f))
				{
					Function_237("beechers_abandoned");
					bLocal_584 = true;
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					bLocal_875 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1240, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&bLocal_875))
					{
					}
				}
				if (!IS_OBJECT_VALID(&bLocal_886))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1240, &Local_933);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1240, &Local_936);
					bLocal_886 = Function_387(StackVal, StackVal, &cLocal_396, "HOME02_SON01GATEWAY02", Local_933, Local_936, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(&bLocal_886))
					{
					}
					GET_OBJECT_POSITION(&bLocal_4 + 1240, &Local_939);
					Function_385(StackVal, Local_939, 0, 48, 1);
				}
				else if (!DECOR_CHECK_EXIST(&cLocal_396, "FinalDistanceRemainder"))
				{
					if (Function_391(&Global_54076, &bLocal_4 + 1240) < (Function_389(&bLocal_4 + 1240, &bLocal_4 + 952[5]) + 25.0f))
					{
						DECOR_SET_BOOL(&cLocal_396, "FinalDistanceRemainder", 1);
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Beechers_return", 7,5f, 0, 2, 1, 0, 0, 0);
					}
				}
				else if (Function_391(&Global_54076, &bLocal_4 + 1240) > (Function_389(&bLocal_4 + 1240, &bLocal_4 + 952[5]) + 0.0f))
				{
					DECOR_REMOVE(&cLocal_396, "FinalDistanceRemainder");
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_B("home02_son01_obj12", 7,5f, 0, 2, 1, 0, 0, 0);
				}
				else if (Function_391(&Global_54076, &bLocal_4 + 1240) < (Function_389(&bLocal_4 + 1240, &bLocal_4 + 952[5]) + 75.0f))
				{
					Function_237("beechers_abandoned");
					bLocal_584 = true;
				}
				Function_358();
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_VOLUME_VALID(&bLocal_4 + 520))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 520))
						{
							if (IS_BLIP_VALID(&bLocal_875))
							{
								REMOVE_BLIP(&bLocal_875);
							}
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							TASK_GO_TO_OBJECT(&Global_54076, &bLocal_4 + 1072[5], 1, 0, 1);
							TASK_GO_TO_OBJECT(&bLocal_549, &bLocal_4 + 1072[7], 1, 0, 1);
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_191();
							Function_367(&bLocal_886);
							Function_227(&Local_553);
							iLocal_545 = 105;
						}
					}
				}
			}
			break;
		
		case 0x00000069:
			GET_OBJECT_POSITION(&bLocal_4 + 1240, &Local_945);
			Function_378(StackVal, "$/cutscene/son_01_end/son_01_end", &uLocal_992, Local_945, 89060, 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (Function_276(&Local_553) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_227(&Local_553);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_565[6] = 1;
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
				Function_227(&Local_553);
				bLocal_544 = 101;
				iLocal_545 = 0;
			}
			break;
	}
	return;
}

int Function_358() //Position: 0x14999 / 84377
{
	Function_366();
	if (iLocal_985)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_985 = 0;
				Function_365("Home02_s1_RidesBakJak", 0);
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_278(&iLocal_976))
		{
			Function_364(&iLocal_976);
		}
	}
	else
	{
		if (iLocal_984)
		{
			iLocal_984 = 0;
		}
		if (!Function_278(&iLocal_976))
		{
			Function_227(&iLocal_976);
		}
		if (Function_276(&iLocal_976) < 4.0f)
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 25.0f))
				{
					switch (iLocal_986)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_363();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_362();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_359();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 3;
								}
							}
							break;
						
						case 0x00000063:
							return 1;
							break;
						
						default:
							iLocal_986 = 99;
							break;
						}
					}
				}
			}
	}
	return 0;
}

void Function_359() //Position: 0x14AC4 / 84676
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v3_AA", "Home02_s1_BakHomeBant_v3_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v3_AB", "Home02_s1_BakHomeBant_v3_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v3_AC", "Home02_s1_BakHomeBant_v3_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v3_AD", "Home02_s1_BakHomeBant_v3_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v3_AE", "Home02_s1_BakHomeBant_v3_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v3_AF", "Home02_s1_BakHomeBant_v3_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v3_AG", "Home02_s1_BakHomeBant_v3_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v3_AH1", "Home02_s1_BakHomeBant_v3_AH1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v3_AH2", "Home02_s1_BakHomeBant_v3_AH2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v3_AI", "Home02_s1_BakHomeBant_v3_AI", 1, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_360(int iParam0) //Position: 0x14D94 / 85396
{
	Function_361(0, &Global_54076, iParam0, 0);
	Function_361(1, &bLocal_549, iParam0, 0);
	return;
}

void Function_361(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x14DB0 / 85424
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

void Function_362() //Position: 0x14DD8 / 85464
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v2_AA", "Home02_s1_BakHomeBant_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v2_AB", "Home02_s1_BakHomeBant_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v2_AC", "Home02_s1_BakHomeBant_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v2_AD", "Home02_s1_BakHomeBant_v2_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v2_AE", "Home02_s1_BakHomeBant_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v2_AF", "Home02_s1_BakHomeBant_v2_AF", 1, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_363() //Position: 0x14F90 / 85904
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v1_AA", "Home02_s1_BakHomeBant_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v1_AB", "Home02_s1_BakHomeBant_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v1_AC", "Home02_s1_BakHomeBant_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v1_AD", "Home02_s1_BakHomeBant_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_BakHomeBant_v1_AE", "Home02_s1_BakHomeBant_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_BakHomeBant_v1_AF", "Home02_s1_BakHomeBant_v1_AF", 1, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_364(vector3 vParam0) //Position: 0x15148 / 86344
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_365(bool bParam0, bool bParam1) //Position: 0x1515F / 86367
{
	if (!iLocal_985 && IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, &bParam0, Function_54(), 0, 0, 1, 3, 1, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else if (!&bParam1)
	{
		SAY_SINGLE_LINE_SCRIPTED(&bLocal_549, &bParam0, &Global_54076, 0, 0, 0, 1, 3);
	}
	else
	{
		SAY_SINGLE_LINE_SCRIPTED(&bLocal_549, &bParam0, &bLocal_865, 0, 1, 0, 1, 3);
	}
	return;
}

void Function_366() //Position: 0x151CA / 86474
{
	if (!Function_278(&iLocal_972))
	{
		Function_227(&iLocal_972);
	}
	else if (Function_276(&iLocal_972) < 4.0f)
	{
		if (!iLocal_985)
		{
			if (!iLocal_884)
			{
				if (GET_ACTOR_VELOCITY(&Global_54076, &Local_945))
				{
					if (VMAG(Local_945) >= 1.0f)
					{
						if (!Function_278(&iLocal_980))
						{
							Function_227(&iLocal_980);
						}
						else if (Function_276(&iLocal_980) <= 2.0f)
						{
							iLocal_884 = 1;
							if (Function_278(&iLocal_976))
							{
								Function_364(&iLocal_976);
							}
							Function_365("Home02_s1_StopsHisHors", 0);
							Function_227(&iLocal_972);
							Function_364(&iLocal_980);
						}
					}
					else if (Function_278(&iLocal_980))
					{
						Function_364(&iLocal_980);
					}
				}
			}
		}
		else if (GET_ACTOR_VELOCITY(&Global_54076, &Local_945))
		{
			if (VMAG(Local_945) <= 1.0f)
			{
				iLocal_884 = 0;
			}
		}
	}
	return;
}

void Function_367(bool bParam0) //Position: 0x152A3 / 86691
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

bool Function_368(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, bool bParam7, char* cParam8, int iParam9, int iParam10) //Position: 0x15339 / 86841
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_376(16))
			{
				if (&bParam7)
				{
					Function_248();
				}
				if (!Function_375())
				{
					Function_388(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_374(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_237(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_376(8))
		{
			if (&bParam7)
			{
				Function_248();
			}
			if (!Function_375())
			{
				Function_388(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_374(8);
			}
			if (IS_LAYOUTREF_VALID(&cParam8))
			{
				Function_373(&cParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_373(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&cParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_376(8))
	{
		Function_372(8);
		if (!Function_371())
		{
			Function_370();
			Function_369();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&cParam8))
			{
				Function_373(&cParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_373(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_369() //Position: 0x154AF / 87215
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

void Function_370() //Position: 0x154DD / 87261
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_371() //Position: 0x154E9 / 87273
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_372(bool bParam0) //Position: 0x15530 / 87344
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_373(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x15597 / 87447
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && iParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_374(bool bParam0) //Position: 0x15652 / 87634
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_375() //Position: 0x156B9 / 87737
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_376(bool bParam0) //Position: 0x156C6 / 87750
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_377() //Position: 0x15710 / 87824
{
	if (Function_392(1))
	{
		if (!IS_ACTOR_IN_VOLUME(&bLocal_549, &bLocal_4 + 608) && !IS_ACTOR_IN_VOLUME(&bLocal_549, &bLocal_4 + 616))
		{
			if (GET_TASK_STATUS(&bLocal_549, 26) != 1)
			{
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &Global_54076, 25.0f, 10.0f, 20.0f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
				Local_945 = Vector(-2.0f, 0.0f, 0.0f);
				TASK_FOLLOW_OBJECT(&bLocal_549, &Global_54076, &Local_945, 0, 0, 0, 0, 0, 0, 1);
				TASK_PRIORITY_SET(&bLocal_549, true);
			}
		}
		else if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
		{
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
			bLocal_856 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(0, &bLocal_4 + 1240, 5.0f, 4, 0, 1);
			TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
			TASK_SEQUENCE_RELEASE(bLocal_856, 1);
			TASK_PRIORITY_SET(&bLocal_549, true);
		}
	}
	else
	{
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
	}
	return;
}

int Function_378(int iParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x157FE / 88062
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_379(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_381()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
	{
		if (!&bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_74(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0))
				{
					uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(&iParam0, 0, &iParam8, &iParam9, &iParam10, &iParam11);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Call_Loc(&iParam4);
				if (StackVal)
				{
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_379(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_381()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_379(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_379(var uParam0, struct<2> Param1, float fParam3) //Position: 0x15ADD / 88797
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_380(&uParam0);
		if (VDIST(Function_380(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_380(var uParam0) //Position: 0x15B69 / 88937
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_381() //Position: 0x15BD5 / 89045
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_382() //Position: 0x15BE4 / 89060
{
	if (IS_ACTOR_VALID(&bLocal_551))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", &bLocal_551);
	}
	if (IS_ACTOR_VALID(&bLocal_873))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", &bLocal_873);
	}
	return 1;
}

void Function_383() //Position: 0x15C41 / 89153
{
	iLocal_984 = 0;
	Function_364(&iLocal_976);
	iLocal_986 = Function_413();
	return;
}

void Function_384() //Position: 0x15C57 / 89175
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_RideHome", "Home02_s1_RideHome", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_385(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x15CA4 / 89252
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_386(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_386(float fParam0) //Position: 0x15D65 / 89445
{
	float fVar0;
	
	if (!IS_OBJECTSET_VALID(&fParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&fParam0) >= 0)
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &fParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&fVar0, &fParam0);
		CLEAN_OBJECTSET(&fParam0);
		if (IS_OBJECT_VALID(&fVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&fVar0));
		}
	}
	return;
}

var Function_387(bool bParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x15DAE / 89518
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&bParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &bParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_388(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x15E99 / 89753
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

float Function_389(int iParam0, int iParam1) //Position: 0x15F2E / 89902
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_390(&iParam0);
			Var0 = Function_390(&iParam0);
			Function_390(&iParam1);
			Var2 = Function_390(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_390(int iParam0) //Position: 0x15FCB / 90059
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

float Function_391(bool bParam0, var uParam1) //Position: 0x16039 / 90169
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_380(&bParam0);
			Var0 = Function_380(&bParam0);
			Function_390(&uParam1);
			Var2 = Function_390(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_392(bool bParam0) //Position: 0x160DB / 90331
{
	if (IS_ACTOR_ALIVE(&bLocal_551))
	{
		if (DECOR_GET_BOOL(&bLocal_873, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_873, 1);
			DECOR_REMOVE(&bLocal_873, "DisallowPlayerRide");
		}
		if (DECOR_GET_BOOL(&bLocal_551, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_551, 1);
			DECOR_REMOVE(&bLocal_551, "DisallowPlayerRide");
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (GET_MOUNT(&Global_54076) == &bLocal_873)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_551)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_551));
				}
				bLocal_873 = &bLocal_551;
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
				TASK_MOUNT(&bLocal_549, &bLocal_873, 0, 1, 2, 2147483647);
				bLocal_551 = GET_MOUNT(&Global_54076);
				Function_393(&bLocal_551, 0);
			}
			if (IS_ACTOR_RIDING(&bLocal_549))
			{
				return 1;
			}
			if (GET_TASK_STATUS(&bLocal_549, 11) != 1)
			{
				TASK_MOUNT(&bLocal_549, &bLocal_873, 0, 1, 2, 2147483647);
			}
		}
		else if (bParam0)
		{
			if (IS_ACTOR_RIDING(&bLocal_549))
			{
				return 1;
			}
			if (GET_TASK_STATUS(&bLocal_549, 11) != 1)
			{
				TASK_MOUNT(&bLocal_549, &bLocal_873, 0, 1, 2, 2147483647);
			}
		}
		else if (IS_ACTOR_RIDING(&bLocal_549))
		{
			TASK_DISMOUNT(&bLocal_549, 1);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_549);
			MEMORY_PREFER_RIDING(&bLocal_549, false);
		}
		else
		{
			return 1;
		}
	}
	if (!DECOR_GET_BOOL(&bLocal_873, "DisallowPlayerRide"))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&bLocal_873, 0);
		DECOR_SET_BOOL(&bLocal_873, "DisallowPlayerRide", 1);
	}
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&bLocal_549))
		{
			return 1;
		}
		if (GET_TASK_STATUS(&bLocal_549, 11) != 1)
		{
			TASK_MOUNT(&bLocal_549, &bLocal_873, 0, 1, 2, 2147483647);
		}
	}
	return 0;
}

void Function_393(int iParam0, int iParam1) //Position: 0x162EF / 90863
{
	Function_394(&iParam1);
	(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_394(bool bParam0) //Position: 0x16304 / 90884
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
	{
		TASK_CLEAR(&Global_21369 + 72);
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (&bParam0 == 0.0f)
		{
			TASK_STAND_STILL(&Global_21369 + 72, &bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	return;
}

void Function_395(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x164D3 / 91347
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (bParam2 != Global_53524.f_48 && !Function_402())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_401(0);
	Function_400();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_398(bParam2);
	}
	Function_397(uParam3, iVar0, iVar1);
	Function_396();
}

void Function_396() //Position: 0x1657C / 91516
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_397(int iParam0, bool bParam1, bool bParam2) //Position: 0x165BD / 91581
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_398(bool bParam0) //Position: 0x16726 / 91942
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_399() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_399() //Position: 0x168BE / 92350
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_400() //Position: 0x16904 / 92420
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_401(bool bParam0) //Position: 0x16928 / 92456
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_402() //Position: 0x16957 / 92503
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_403(struct<69> Param0) //Position: 0x16972 / 92530
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_404(int iParam0, int iParam1) //Position: 0x16A32 / 92722
{
	if (iParam1 != 100000000)
	{
		Function_407(&iParam0, iParam1);
	}
	else
	{
		Function_405(&iParam0, 1);
	}
	return;
}

void Function_405(struct<69> Param0) //Position: 0x16A54 / 92756
{
	Param0.f_68 = 0;
	Function_406(&Param0, 2, &bParam1);
	Function_406(&Param0, 4, &bParam1);
	Function_406(&Param0, 8, &bParam1);
	Function_406(&Param0, 16, &bParam1);
	Function_406(&Param0, 32, &bParam1);
	Function_406(&Param0, 64, &bParam1);
	Function_406(&Param0, 128, &bParam1);
	Function_406(&Param0, 256, &bParam1);
	Function_406(&Param0, 512, &bParam1);
	Function_406(&Param0, 1024, &bParam1);
	return;
}

void Function_406(int iParam0, int iParam1, bool bParam2) //Position: 0x16ACF / 92879
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_407(int iParam0, bool bParam1) //Position: 0x16B0E / 92942
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_408(struct<69> Param0) //Position: 0x16B3B / 92987
{
	if (!Function_412(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_411(&Param0, &bParam2))
	{
		return 0;
	}
	Function_410(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_409(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_409(var uParam0, int iParam1, int iParam2) //Position: 0x16B81 / 93057
{
	if (iParam1 != 100000000)
	{
		Function_406(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_405(&uParam0, &iParam2);
	}
	return;
}

void Function_410(struct<65> Param0) //Position: 0x16BA8 / 93096
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_411(int iParam0, char* cParam1) //Position: 0x16BB5 / 93109
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_412(struct<61> Param0) //Position: 0x16C42 / 93250
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

int Function_413() //Position: 0x16DF5 / 93685
{
	return Global_53524.f_68;
}

bool Function_414() //Position: 0x16E00 / 93696
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 1016[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 1016[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[5])
	{
		Function_341(&bLocal_865, &bLocal_4 + 1016[4], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		return 1;
	}
	return 0;
}

void Function_415(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x16F4F / 94031
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				Function_416(StackVal, StackVal, &uParam0, Var0, &bParam2, &uParam3, &bParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_416(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x1706F / 94319
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_417() //Position: 0x1713E / 94526
{
	if (!Function_278(&iLocal_972))
	{
		Function_227(&iLocal_972);
	}
	else if (Function_276(&iLocal_972) <= 5.0f)
	{
		if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
		{
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				if (ACTORS_IN_RANGE(&bLocal_549, &Global_54076, 20.0f))
				{
					Function_365("Home02_s1_JonThrownOffHors", 0);
					Function_227(&iLocal_972);
				}
			}
		}
		Function_419();
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_418(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				bLocal_871 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_VALID(&bLocal_871))
				{
					if (IS_ACTOR_HUMAN(&bLocal_871))
					{
						if (&bLocal_871 == &bLocal_549)
						{
							if (Function_278(&iLocal_968))
							{
								if (Function_276(&iLocal_968) < 0,25f)
								{
									Function_365("Home02_s1_GunOnJak", 0);
									Function_227(&iLocal_972);
								}
							}
							else
							{
								Function_227(&iLocal_968);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &bLocal_871))
						{
							if (Function_278(&iLocal_968))
							{
								if (Function_276(&iLocal_968) < 0,25f)
								{
									Function_365("Home02_s1_GunOnChar", 0);
									Function_227(&iLocal_972);
								}
							}
							else
							{
								Function_227(&iLocal_968);
							}
						}
						else if (Function_278(&iLocal_968))
						{
							Function_364(&iLocal_968);
						}
					}
					else if (Function_278(&iLocal_968))
					{
						Function_364(&iLocal_968);
					}
				}
				else if (Function_278(&iLocal_968))
				{
					Function_364(&iLocal_968);
				}
			}
			else if (Function_278(&iLocal_968))
			{
				Function_364(&iLocal_968);
			}
		}
		else if (Function_278(&iLocal_968))
		{
			Function_364(&iLocal_968);
		}
	}
	return;
}

bool Function_418(bool bParam0) //Position: 0x172F0 / 94960
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

void Function_419() //Position: 0x17336 / 95030
{
	if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_418(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (Function_276(&iLocal_972) <= 3.0f)
					{
						if (bLocal_544 <= 3)
						{
							Function_365("Home02_s1_ShootsGunRand", 0);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&bLocal_549, 61, &Global_54076, 0, 0, 3, 60, 4294967295, 0, 1);
						}
						Function_227(&iLocal_972);
					}
				}
				else if (!AI_IS_HOSTILE_OR_ENEMY(GET_LAST_ATTACK_TARGET(&Global_54076), &Global_54076))
				{
					if (IS_ACTOR_HUMAN(GET_LAST_ATTACK_TARGET(&Global_54076)))
					{
						Function_365("Home02_s1_ShootsOtherChar", 0);
						Function_227(&iLocal_972);
					}
					else if (SQUAD_IS_VALID(&bLocal_4 + 248))
					{
						if (!SQUAD_GET(GET_LAST_ATTACK_TARGET(&Global_54076)) != &bLocal_4 + 248)
						{
							Function_365("Home02_s1_ShotsWrongAnim", 0);
							Function_227(&iLocal_972);
						}
					}
					else if (SQUAD_IS_VALID(&bLocal_4 + 184))
					{
						if (!SQUAD_GET(GET_LAST_ATTACK_TARGET(&Global_54076)) != &bLocal_4 + 184)
						{
							Function_365("Home02_s1_ShotsWrongAnim", 0);
							Function_227(&iLocal_972);
						}
					}
					else
					{
						Function_365("Home02_s1_ShotsWrongAnim", 0);
						Function_227(&iLocal_972);
					}
				}
			}
		}
	}
	return;
}

void Function_420() //Position: 0x174B7 / 95415
{
	Function_356(&cLocal_396);
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_417();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_565[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46926[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 952[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_431())
			{
				Function_323(&uLocal_831, 3, 0, 4294967295, 4294967295);
				if (!DECOR_CHECK_EXIST(&cLocal_396, "ManzanitaSetup"))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 528))
					{
						DECOR_SET_BOOL(&cLocal_396, "ManzanitaSetup", 1);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[1]);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[1]);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[0]);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[0]);
					}
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_862 = Function_413();
				Function_431();
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (iLocal_565[4] == 0)
				{
					if (Function_67(540) == 0)
					{
						Function_89(540, 3, 0, 0);
					}
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_341(&bLocal_551, &bLocal_4 + 952[2], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_873))
						{
							Function_341(&bLocal_873, &bLocal_4 + 952[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_873))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_873);
							}
						}
					}
				}
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_408(&(Local_641[215]), &bLocal_869, "Uncle", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[315]), &bLocal_867, "Wife", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[415]), &bLocal_954, "ShopKeeper", 0, 0x5f5e100, 1);
				Function_403(&(Local_641[515]));
				uLocal_844[0] = Function_430(Global_46926[1], "nmanzanita", "tradepost01", 1);
				uLocal_844[1] = Function_430(Global_46926[1], "nmanzanita", "tradepost01", 2);
				uLocal_844[2] = Function_430(Global_46926[1], "nmanzanita", "tradepost01", 3);
				uLocal_844[3] = Function_430(Global_46926[1], "nmanzanita", "tradepost01", 4);
				uLocal_844[4] = Function_430(Global_46926[1], "nmanzanita", "tradepost01", 5);
				Function_227(&Local_553);
				iLocal_545 = 6;
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[1], Function_246(bLocal_544), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&bLocal_956))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_956 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_396, "HOME02SON01_CAMERA_FOCUS", &bLocal_865, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&bLocal_956))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&bLocal_956, 0);
						}
					}
				}
				bLocal_875 = ADD_BLIP_FOR_OBJECT(&bLocal_954, 330, 0f, 2, 0);
				if (IS_BLIP_VALID(&bLocal_875))
				{
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 1);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
					Function_231(12, 0, 1);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
					GET_OBJECT_POSITION(&bLocal_4 + 952[3], &Local_927);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_927, 2.0f, 1);
					TASK_DISMOUNT(0, 1);
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1480), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
					SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_549, &bLocal_4 + 536[1], 1, false);
				}
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865);
					GET_OBJECT_POSITION(&bLocal_4 + 952[4], &(Local_910[02]));
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &(Local_910[02]), 1.0f, 1);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_NEAR_OBJECT(0, &bLocal_4 + 1488, 3.0f, 1, 0, 1);
					GET_OBJECT_POSITION(&bLocal_4 + 1488, &Local_945);
					TASK_FACE_COORD(0, &Local_945, 0);
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1488), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_865, true);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_865, 8, "UNALRTD");
					SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_865, &bLocal_4 + 536[2], 1, false);
				}
				SQUAD_GOALS_CLEAR(&bLocal_4 + 152);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_873);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_551);
				TASK_CLEAR(&bLocal_873);
				TASK_CLEAR(&bLocal_551);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_551);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_873);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_551);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_873);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_551);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_873, 11, 0);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_551, 11, 0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_873, &bLocal_4 + 536[0], 1, 2);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_551, &bLocal_4 + 536[0], 1, 2);
				GET_OBJECT_POSITION(&bLocal_4 + 1456[0], &Local_945);
				GET_OBJECT_ORIENTATION(&bLocal_4 + 1456[0], &Local_948);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_551, &Local_945, 1);
				TASK_PRIORITY_SET(&bLocal_551, true);
				GET_OBJECT_POSITION(&bLocal_4 + 1456[1], &Local_945);
				GET_OBJECT_ORIENTATION(&bLocal_4 + 1456[1], &Local_948);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_873, &Local_945, 1);
				TASK_PRIORITY_SET(&bLocal_873, true);
				if (GET_TASK_STATUS(&bLocal_954, 19) != 1)
				{
					GET_OBJECT_POSITION(&bLocal_4 + 952[5], &Local_945);
					uLocal_966 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &Local_945, 5.0f, 1);
					if (IS_GRINGO_VALID(&uLocal_966))
					{
						TASK_USE_GRINGO(&bLocal_954, &uLocal_966, "UseCase1", 4294967295, 1);
					}
				}
				Function_190(&bLocal_954, 1);
				Function_429();
				Function_227(&Local_553);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_276(&Local_553) <= 5.0f)
			{
				Function_388("home02_son01_obj10", 7,5f, 1, 2, 0, 0, 0, 0);
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 536[3]))
				{
					Function_428();
				}
				Function_427(&uLocal_844, 1);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 536[3]))
			{
				Function_323(&uLocal_831, 0, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_323(&uLocal_831, 1, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(&bLocal_954))
			{
				if (!IS_ACTOR_IN_VOLUME(&bLocal_954, &bLocal_4 + 536[3]))
				{
					if (Function_426(&bLocal_954))
					{
						Function_190(&bLocal_954, 0);
					}
				}
				else if (!Function_426(&bLocal_954))
				{
					Function_190(&bLocal_954, 1);
				}
				if (!Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_954, "ShopKeeper_return", "ShopKeeper_abandoned", &bLocal_584, 0, 0, 0, 325, 1))
				{
					if (!Function_423(&bLocal_954))
					{
						Function_237("home02_son01_scare_shopkeeper");
						bLocal_584 = true;
					}
					else if (GET_TASK_STATUS(&bLocal_954, 19) != 1)
					{
						GET_OBJECT_POSITION(&bLocal_4 + 952[5], &Local_945);
						uLocal_966 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &Local_945, 5.0f, 1);
						if (IS_GRINGO_VALID(&uLocal_966))
						{
							TASK_USE_GRINGO(&bLocal_954, &uLocal_966, "UseCase1", 4294967295, 1);
						}
					}
				}
			}
			else
			{
				Function_237("ShopKeeper_abandoned");
				bLocal_584 = true;
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 8.0f))
				{
				}
			}
			if (!Global_93258)
			{
				if (Function_67(540) < 0)
				{
					if (IS_BLIP_VALID(&bLocal_875))
					{
						REMOVE_BLIP(&bLocal_875);
					}
					if (DECOR_GET_BOOL(&cLocal_396, "PlayerShopping"))
					{
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
						ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
						DECOR_SET_BOOL(&cLocal_396, "PlayerShopping", 0);
					}
					Function_227(&Local_553);
					iLocal_545 = 9;
				}
				else
				{
					if (DECOR_GET_BOOL(&cLocal_396, "PlayerShopping"))
					{
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
						ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
						DECOR_SET_BOOL(&cLocal_396, "PlayerShopping", 0);
					}
					if (!IS_BLIP_VALID(&bLocal_875))
					{
						bLocal_875 = ADD_BLIP_FOR_OBJECT(&bLocal_954, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
			}
			else
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				if (!DECOR_GET_BOOL(&cLocal_396, "PlayerShopping"))
				{
					DECOR_SET_BOOL(&cLocal_396, "PlayerShopping", 1);
					SHOP_SET_CURRENT_TAB(1);
					SNAP_ACTOR_TO_GRINGO(&bLocal_549, &bLocal_4 + 1480, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&bLocal_865, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1488), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(&bLocal_865, &bLocal_4 + 1488, "UseCase1", true, 0, 0);
				}
			}
			break;
		
		case 0x00000009:
			if (Function_276(&Local_553) <= 1.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					Function_231(12, 1, 1);
				}
				Function_227(&Local_553);
				iLocal_545 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_388("home02_son01_obj11", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_227(&Local_553);
			Function_227(&iLocal_557);
			Function_227(&iLocal_561);
			iLocal_545 = 11;
			break;
		
		case 0x0000000B:
			Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_549, "Son_return", "Son_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 536[3]))
			{
				Function_323(&uLocal_831, 0, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_323(&uLocal_831, 1, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 6.0f))
				{
					TASK_CLEAR(&bLocal_549);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
					TASK_CLEAR(&bLocal_865);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_384();
					Function_231(12, 0, 1);
					Function_227(&Local_553);
					iLocal_545 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Function_421(&uLocal_844);
			Function_323(&uLocal_831, 1, 0, 4294967295, 4294967295);
			iLocal_565[5] = 1;
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
			Function_227(&Local_553);
			bLocal_544 = 6;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_421(int[] iParam0) //Position: 0x18149 / 98633
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (IS_DOOR_VALID(&(iParam0[iVar0])))
		{
			if (IS_DOOR_LOCKED(&(iParam0[iVar0])))
			{
				Function_422(&(iParam0[iVar0]));
			}
		}
		iVar0++;
	}
	return;
}

void Function_422(int iParam0) //Position: 0x1818E / 98702
{
	if (!IS_DOOR_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "unlockMe"))
	{
		DECOR_REMOVE(&iParam0, "unlockMe");
	}
	if (DECOR_CHECK_EXIST(&iParam0, "lockMe"))
	{
		DECOR_REMOVE(&iParam0, "lockMe");
	}
	return;
}

bool Function_423(bool bParam0) //Position: 0x181E7 / 98791
{
	if (((((AI_IS_AGGROING(&bParam0, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&bParam0, &Global_54076)) || GET_LAST_ATTACKER(&bParam0) != &Global_54076) || IS_ACTOR_HANDSUP(&bParam0)) || IS_AI_ACTOR_ENGAGED_IN_COMBAT(&bParam0)) || FIRE_IS_ACTOR_ON_FIRE(&bParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_424(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x18229 / 98857
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_425(&Global_54076, &iParam3, iParam2))
	{
		Function_237(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_425(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_376(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_388(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_374(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_373(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_373(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_376(2))
	{
		Function_372(2);
		if (!Function_371())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_369();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_224(&iParam3);
				Function_232(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_373(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_373(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_425(var uParam0, var uParam1, bool bParam2) //Position: 0x183E7 / 99303
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

bool Function_426(bool bParam0) //Position: 0x184FC / 99580
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SK_SHOP_GET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_GET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	return DECOR_CHECK_EXIST(&bParam0, "ACTIVE_WHEN_STOLEN");
}

void Function_427(var[] uParam0, var uParam1) //Position: 0x18589 / 99721
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_DOOR_VALID(&(uParam0[iVar0])))
		{
			if (IS_DOOR_LOCKED(&(uParam0[iVar0])))
			{
				Function_161(&(uParam0[iVar0]), &uParam1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_428() //Position: 0x185D1 / 99793
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_WaitOutside", "Home02_s1_WaitOutside", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x18624 / 99876
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_ArriveAtMp", "Home02_s1_ArriveAtMp", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_430(int iParam0, char* cParam1, bool bParam3) //Position: 0x18675 / 99957
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_85(iParam0))
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

bool Function_431() //Position: 0x1871A / 100122
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 952[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 952[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[4])
	{
		Function_341(&bLocal_865, &bLocal_4 + 952[4], 1, 1, 1);
	}
	if (!IS_ACTOR_VALID(&bLocal_954))
	{
		Function_432();
		bLocal_954 = &bLocal_4 + 256[02];
		if (IS_ACTOR_VALID(&bLocal_954))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_954, &bLocal_4 + 536[3], 1, true);
			Function_341(&bLocal_954, &bLocal_4 + 952[5], 1, 1, 1);
		}
	}
	if ((IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152)) && IS_ACTOR_VALID(&bLocal_954))
	{
		return 1;
	}
	return 0;
}

void Function_432() //Position: 0x188C1 / 100545
{
	(&bLocal_4 + 256[02]) = Function_433(StackVal, StackVal, &Global_12714, &Global_15312, 0, Vector(-455,618f, 153,6423f, 1620,2f), Vector(0.0f, -76,40603f, 0.0f), 1);
	return;
}

int Function_433(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7) //Position: 0x188F3 / 100595
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam2;
	uVar1 = Function_434(&uParam0, &uParam1, uVar0, &uParam7, 0, 1);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		LOG_ERROR("CREATE_ACTOR_AS_REGIONAL got NULL when it tried to steal the character");
		return "";
	}
	PRINTSTRING("Spawning Regional Character at ");
	PRINTVECTOR(Param3);
	PRINTNL();
	SET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&uVar1), Param3);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar1), Param5);
	GET_POSITION(&uVar1, &Param3);
	PRINTSTRING("New position is ");
	PRINTVECTOR(Param3);
	PRINTNL();
	return &uVar1;
}

var Function_434(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x189E3 / 100835
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_184(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_184(&(Param0[iVar02]), 2))
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
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_436(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_181(&(Param0[iVar02]), 1);
	Function_435(&vParam1[iVar03] + 16, 1);
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

int Function_435(int iParam0, bool bParam1) //Position: 0x18BAA / 101290
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

var Function_436(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x18C5C / 101468
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_54(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_437() //Position: 0x18D83 / 101763
{
	Function_356(&cLocal_396);
	if (((iLocal_545 < 5 && iLocal_545 > 105) && !iLocal_545 != 104) && !iLocal_545 != 103)
	{
		Function_442();
		Function_417();
		if (!IS_ACTOR_VALID(&bLocal_954) && Function_343(Global_46926[1]))
		{
			Function_432();
			bLocal_954 = &bLocal_4 + 256[02];
			if (IS_ACTOR_VALID(&bLocal_954))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_954, &bLocal_4 + 536[3], 1, true);
				Function_341(&bLocal_954, &bLocal_4 + 952[5], 1, 1, 1);
			}
		}
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_565[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46754[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 896[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_441())
			{
				Function_323(&uLocal_831, 13, 0, 4294967295, 4294967295);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_862 = Function_413();
				iLocal_858 = 0;
				Function_441();
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (iLocal_565[3] == 0)
				{
					if (Function_67(540) == 0)
					{
						Function_89(540, 3, 0, 0);
					}
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_341(&bLocal_551, &bLocal_4 + 896[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (!ACTOR_HAS_WEAPON(&bLocal_549, 22))
						{
							GIVE_WEAPON_TO_ACTOR(&bLocal_549, 22, false, 1, 1);
						}
						if (ACTOR_HAS_WEAPON(&bLocal_549, 39))
						{
							DELETE_WEAPON_FROM_ACTOR(&bLocal_549, 39);
						}
						if (!ACTOR_HAS_WEAPON(&bLocal_549, 42))
						{
							GIVE_WEAPON_TO_ACTOR(&bLocal_549, 42, false, 1, 1);
						}
						if (ACTOR_HAS_WEAPON(&bLocal_549, 42))
						{
							if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(&bLocal_549, 42))
							{
								ACTOR_SET_NEXT_WEAPON(&bLocal_549, 42);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_873))
						{
							Function_341(&bLocal_873, &bLocal_4 + 896[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_873))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_873);
							}
						}
					}
				}
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_408(&(Local_641[215]), &bLocal_869, "Uncle", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[315]), &bLocal_867, "Wife", 0, 0x5f5e100, 1);
				Function_403(&(Local_641[415]));
				Function_403(&(Local_641[515]));
				if (HUD_IS_FADED())
				{
					Function_227(&Local_553);
					iLocal_545 = 5;
				}
				else
				{
					Function_227(&Local_553);
					iLocal_545 = 6;
				}
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[1], Function_246(bLocal_544), 2);
			}
			break;
		
		case 0x00000005:
			if (((IS_ACTOR_VALID(&bLocal_549) && IS_ACTOR_VALID(&bLocal_873)) && IS_ACTOR_VALID(&bLocal_551)) && IS_ACTOR_VALID(&bLocal_865))
			{
				if (((Function_440(&bLocal_549, 1, 0x41700000) && Function_440(&bLocal_873, 1, 0x41700000)) && Function_440(&bLocal_551, 1, 0x41700000)) && Function_440(&bLocal_865, 1, 0x41700000))
				{
					Function_227(&Local_553);
					iLocal_545 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_276(&Local_553) <= 1,5f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_227(&Local_553);
				iLocal_545 = 103;
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_227(&Local_553);
				iLocal_545 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&bLocal_956))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_956 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_396, "HOME02SON01_CAMERA_FOCUS", &bLocal_865, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&bLocal_956))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&bLocal_956, 0);
						}
					}
				}
				bLocal_875 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1232, 330, 0f, 2, 0);
				if (IS_BLIP_VALID(&bLocal_875))
				{
				}
				GET_OBJECT_POSITION(&bLocal_4 + 1232, &Local_933);
				GET_OBJECT_ORIENTATION(&bLocal_4 + 1232, &Local_936);
				bLocal_886 = Function_387(StackVal, StackVal, &cLocal_396, "HOME02_SON01GATEWAY02", Local_933, Local_936, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(&bLocal_886))
				{
				}
				GET_OBJECT_POSITION(&bLocal_4 + 1232, &Local_939);
				Function_385(StackVal, Local_939, 0, 48, 1);
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865, &Global_54076, 60.0f, 10.0f, 50.0f);
					Local_910[02] = Vector(-3.0f, 0.0f, 6.0f);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 5.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_865, true);
				}
				Function_439();
				Function_227(&Local_553);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_276(&Local_553) <= 5.0f)
			{
				Function_164(Global_46926[1]);
				Function_388("home02_son01_obj09", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				if (iLocal_565[3] == 1)
				{
					ACTOR_END_FORCE_HOLSTER(&bLocal_549);
				}
				iLocal_545 = 9;
			}
			break;
		
		case 0x00000009:
			if (!DECOR_CHECK_EXIST(&cLocal_396, "ManzanitaBanter"))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_549))
				{
					DECOR_SET_BOOL(&cLocal_396, "ManzanitaBanter", 1);
					Function_438();
				}
			}
			if (!DECOR_CHECK_EXIST(&cLocal_396, "ManzanitaSetup"))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 528))
				{
					DECOR_SET_BOOL(&cLocal_396, "ManzanitaSetup", 1);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[1]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[1]);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[0]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 536[0]);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&bLocal_4 + 536[0], 15);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&bLocal_4 + 536[1], 15);
				}
			}
			if (Function_368(&iLocal_561, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_584, 0, &cLocal_396, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
					Function_191();
				}
			}
			else if (!IS_BLIP_VALID(&bLocal_875))
			{
				bLocal_875 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1232, 330, 0f, 2, 0);
				GET_OBJECT_POSITION(&bLocal_4 + 1232, &Local_939);
				Function_385(StackVal, Local_939, 0, 48, 1);
				if (IS_BLIP_VALID(&bLocal_875))
				{
				}
			}
			if (!IS_OBJECT_VALID(&bLocal_886))
			{
				GET_OBJECT_POSITION(&bLocal_4 + 1232, &Local_933);
				GET_OBJECT_ORIENTATION(&bLocal_4 + 1232, &Local_936);
				bLocal_886 = Function_387(StackVal, StackVal, &cLocal_396, "HOME02_SON01GATEWAY02", Local_933, Local_936, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(&bLocal_886))
				{
				}
				GET_OBJECT_POSITION(&bLocal_4 + 1232, &Local_939);
				Function_385(StackVal, Local_939, 0, 48, 1);
			}
			if (Function_391(&Global_54076, &bLocal_886) > 15.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 536[3]))
			{
				Function_191();
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				if (IS_OBJECT_VALID(&bLocal_886))
				{
					Function_367(&bLocal_886);
				}
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_551)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_551));
					}
				}
				Function_224(&bLocal_551);
				Function_248();
				Function_227(&Local_553);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
			iLocal_565[4] = 1;
			Function_227(&Local_553);
			bLocal_544 = 5;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_438() //Position: 0x196DD / 104157
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_WayManzBant_v1_AA", "Home02_s1_WayManzBant_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_WayManzBant_v1_AB", "Home02_s1_WayManzBant_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_WayManzBant_v1_AC", "Home02_s1_WayManzBant_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_WayManzBant_v1_AD", "Home02_s1_WayManzBant_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_WayManzBant_v1_AE", "Home02_s1_WayManzBant_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_WayManzBant_v1_AF", "Home02_s1_WayManzBant_v1_AF", 1, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x19895 / 104597
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_TakeMeatMP", "Home02_s1_TakeMeatMP", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_440(bool bParam0, bool bParam1, float fParam2) //Position: 0x198E6 / 104678
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_441() //Position: 0x19988 / 104840
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 896[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 896[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[3])
	{
		Function_341(&bLocal_865, &bLocal_4 + 896[4], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		return 1;
	}
	return 0;
}

void Function_442() //Position: 0x19AD7 / 105175
{
	if (IS_ACTOR_VALID(&bLocal_549))
	{
		switch (iLocal_858)
		{
			case 0x00000000:
				Function_443(0);
				iLocal_858++;
				break;
			
			case 0x00000001:
				Function_231(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, true);
				bLocal_856 = TASK_SEQUENCE_OPEN();
				if (!IS_ACTOR_RIDING(&bLocal_549))
				{
					TASK_MOUNT(false, &bLocal_873, 0, 1, 2, 2147483647);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
				TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				TASK_PRIORITY_SET(&bLocal_549, true);
				Function_227(&iLocal_898);
				iLocal_858++;
				break;
			
			case 0x00000002:
				if (Function_392(1))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &Global_54076, 25.0f, 10.0f, 20.0f);
					MEMORY_PREFER_RIDING(&bLocal_549, true);
					AI_RIDING_SET_ATTRIBUTE(&bLocal_549, 2, 0,15f);
					Local_927 = Vector(3.0f, 0.0f, 1.0f);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, &Global_54076, &Local_927, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
					iLocal_858++;
				}
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_VOLUME_VALID(&bLocal_4 + 528))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 528))
						{
							iLocal_858++;
						}
					}
				}
				break;
			
			case 0x00000004:
				bLocal_856 = TASK_SEQUENCE_OPEN();
				Local_945 = Vector(-2.0f, 0.0f, 0.0f);
				TASK_FOLLOW_OBJECT(0, &Global_54076, &Local_945, 0, 0, 0, 0, 0, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
				TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				TASK_PRIORITY_SET(&bLocal_549, true);
				iLocal_858++;
				break;
			
			case 0x00000005:
				iLocal_858++;
				break;
			}
	}
	return;
}

void Function_443(bool bParam0) //Position: 0x19CA8 / 105640
{
	MEMORY_CLEAR_ALL(&bLocal_549);
	if (&bParam0)
	{
		if (SQUAD_IS_VALID(&bLocal_4 + 184))
		{
			Function_444(&bLocal_4 + 184, &bLocal_549);
		}
		if (SQUAD_IS_VALID(&bLocal_4 + 248))
		{
			Function_444(&bLocal_4 + 248, &bLocal_549);
		}
	}
	return;
}

void Function_444(var uParam0, bool bParam1) //Position: 0x19CE9 / 105705
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_ALIVE(&uVar1))
					{
						MEMORY_CONSIDER_AS_ENEMY(&bParam1, &uVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_445() //Position: 0x19D46 / 105798
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	
	Function_356(&cLocal_396);
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_417();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Local_502 = &bLocal_549;
			*(&Local_502 + 16) = Vector(0.0f, 0.0f, 0.0f);
			*(&Local_502 + 28) = Vector(0.0f, 0.0f, 0.0f);
			Local_502.f_40 = 7.0f;
			*(&Local_502 + 48) = "";
			*(&Local_502 + 56) = { StackVal, Local_553 };
			Local_502.f_72 = 2;
			Local_502.f_92 = 1;
			Local_502.f_96 = 1;
			Local_502.f_80 = 0;
			Local_502.f_84 = 0;
			Local_502.f_104 = iLocal_532;
			if (iLocal_565[2] == 0)
			{
				Function_323(&uLocal_831, 3, 0, 4294967295, 4294967295);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46754[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 824[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_459())
			{
				iLocal_862 = Function_413();
				iLocal_858 = 0;
				iLocal_857 = 0;
				iLocal_859 = 0;
				bLocal_863 = false;
				iLocal_878 = 0;
				iLocal_880 = 0;
				iLocal_879 = 0;
				iLocal_881 = 0;
				iLocal_882 = 0;
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					Function_231(12, 0, 1);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
					AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_549, 1);
				}
				if (iLocal_565[2] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						Function_341(&Global_54076, &bLocal_4 + 824[0], 1, 1, 1);
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_341(&bLocal_551, &bLocal_4 + 824[3], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						Function_341(&bLocal_549, &bLocal_4 + 824[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&bLocal_873))
						{
							Function_341(&bLocal_873, &bLocal_4 + 824[4], 1, 1, 1);
						}
					}
					if (Function_67(540) == 0)
					{
						Function_89(540, 1, 0, 0);
					}
				}
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_549);
				GIVE_WEAPON_TO_ACTOR(&bLocal_549, 22, false, 1, 1);
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_403(&(Local_641[215]));
				Function_403(&(Local_641[315]));
				Function_403(&(Local_641[415]));
				Function_403(&(Local_641[515]));
				if (HUD_IS_FADED())
				{
					Function_227(&Local_553);
					iLocal_545 = 104;
				}
				else
				{
					Function_227(&Local_553);
					iLocal_545 = 104;
				}
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[1], Function_246(bLocal_544), 0);
			}
			break;
		
		case 0x00000068:
			if (Function_458())
			{
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					if (IS_OBJECT_VALID(&uLocal_896))
					{
						if (GET_TASK_STATUS(&bLocal_549, 83) == 2)
						{
							TASK_GO_NEAR_OBJECT(&bLocal_549, &uLocal_896, 2.0f, 1, 0, 1);
						}
						else if (Function_391(&bLocal_549, &uLocal_896) > 3.0f && !IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "skinning"))
						{
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							Function_456(&bLocal_549, 0);
							SET_MOVER_FROZEN(&bLocal_549, 1);
							SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_549, 0);
							SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_549, false);
							if (!IS_ACTOR_RIDING(&Global_54076))
							{
								if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 5.0f))
								{
									Local_945 = Vector(3.0f, 0.0f, 3.0f);
									GET_OBJECT_RELATIVE_POSITION(&bLocal_549, Local_945, &Local_948);
									FIND_GROUND_INTERSECTION(&Local_948, 5.0f, &Local_945, &uLocal_951);
									TELEPORT_ACTOR(&Global_54076, &Local_945, 1, 0, 0);
									Function_453(&Global_54076, &bLocal_549);
								}
								if (ACTORS_IN_RANGE(&bLocal_551, &bLocal_549, 5.0f))
								{
									Local_945 = Vector(-3.0f, 0.0f, -3.0f);
									GET_OBJECT_RELATIVE_POSITION(&bLocal_549, Local_945, &Local_948);
									FIND_GROUND_INTERSECTION(&Local_948, 5.0f, &Local_945, &uLocal_951);
									TELEPORT_ACTOR(&bLocal_551, &Local_945, 1, 0, 0);
									Function_453(&bLocal_551, &Global_54076);
								}
								if (ACTORS_IN_RANGE(&bLocal_873, &bLocal_549, 5.0f))
								{
									Local_945 = Vector(3.0f, 0.0f, -3.0f);
									GET_OBJECT_RELATIVE_POSITION(&bLocal_549, Local_945, &Local_948);
									FIND_GROUND_INTERSECTION(&Local_948, 5.0f, &Local_945, &uLocal_951);
									TELEPORT_ACTOR(&bLocal_873, &Local_945, 1, 0, 0);
									Function_453(&bLocal_873, &bLocal_551);
								}
							}
							else
							{
								if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 5.0f))
								{
									bLocal_871 = GET_MOUNT(&Global_54076);
									Local_945 = Vector(3.0f, 0.0f, 3.0f);
									GET_OBJECT_RELATIVE_POSITION(&bLocal_549, Local_945, &Local_948);
									FIND_GROUND_INTERSECTION(&Local_948, 5.0f, &Local_945, &uLocal_951);
									TELEPORT_ACTOR(&bLocal_871, &Local_945, 1, 0, 0);
									Function_453(&bLocal_871, &bLocal_549);
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_871);
								}
								if (GET_MOUNT(&Global_54076) != &bLocal_551)
								{
									if (ACTORS_IN_RANGE(&bLocal_551, &bLocal_549, 5.0f))
									{
										Local_945 = Vector(-3.0f, 0.0f, -3.0f);
										GET_OBJECT_RELATIVE_POSITION(&bLocal_549, Local_945, &Local_948);
										FIND_GROUND_INTERSECTION(&Local_948, 5.0f, &Local_945, &uLocal_951);
										TELEPORT_ACTOR(&bLocal_551, &Local_945, 1, 0, 0);
										Function_453(&bLocal_551, &Global_54076);
									}
								}
								if (GET_MOUNT(&Global_54076) != &bLocal_873)
								{
									if (ACTORS_IN_RANGE(&bLocal_873, &bLocal_549, 5.0f))
									{
										Local_945 = Vector(3.0f, 0.0f, -3.0f);
										GET_OBJECT_RELATIVE_POSITION(&bLocal_549, Local_945, &Local_948);
										FIND_GROUND_INTERSECTION(&Local_948, 5.0f, &Local_945, &uLocal_951);
										TELEPORT_ACTOR(&bLocal_873, &Local_945, 1, 0, 0);
										Function_453(&bLocal_873, &bLocal_551);
									}
								}
							}
							TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 0);
							fLocal_834 = GET_CURRENT_GAME_TIME();
							DECOR_SET_INT(&bLocal_549, "AnimalSize", 2);
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 0);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_549, "skinning", 0);
							if (!SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "skinning/Son/Skin"))
							{
								LOG_ERROR("Couldn't set node?");
							}
							uLocal_832 = Function_448(&bLocal_4, 0, &bLocal_549, 1, 0, 0);
							UI_PUSH("nCutscenes");
							if (IS_ACTOR_VALID(&Global_54076))
							{
								TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
								TASK_PRIORITY_SET(&Global_54076, true);
							}
							GET_OBJECT_POSITION(&uLocal_896, &uLocal_836);
							DESTROY_OBJECT(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(&uLocal_896)));
							if (HUD_IS_FADED())
							{
								Function_227(&Local_553);
								iLocal_545 = 5;
							}
							else
							{
								Function_227(&Local_553);
								iLocal_545 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_227(&Local_553);
			iLocal_545 = 3;
			break;
		
		case 0x00000003:
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 0);
			if (Function_276(&Local_553) <= 3.0f && !DECOR_CHECK_EXIST(&bLocal_549, "TriggeredCam1"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_832);
				DECOR_SET_BOOL(&bLocal_549, "TriggeredCam1", 1);
			}
			else if (Function_276(&Local_553) <= 33.0f && !DECOR_CHECK_EXIST(&bLocal_549, "TriggeredCam2"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_832);
				DECOR_SET_BOOL(&bLocal_549, "TriggeredCam2", 1);
			}
			fVar0 = 14,75f;
			if (Function_276(&Local_553) < fVar0)
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_834) < 1,5f)
				{
					fLocal_834 = GET_CURRENT_GAME_TIME();
					if (iLocal_839 <= 2)
					{
						if (IS_OBJECT_VALID(&uLocal_840))
						{
							UNK_0xE18028C1(&uLocal_840);
							DESTROY_OBJECT(&uLocal_840);
						}
						GET_ACTOR_AXIS(&bLocal_549, &Var1, 2);
						GET_POSITION(&bLocal_549, &Var3);
						Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var1, Var3, StackVal) * Vector(-0,95f, -0,95f, -0,95f), StackVal, StackVal);
						uLocal_840 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&bLocal_4, "SkinAnimal", "anim_chicken_chop", Var3);
						UNK_0x6745191B(StackVal, &uLocal_840, Vector(0.0f, 0.0f, 0.0f));
						uVar5 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var3, 2,5f, "melee_knife", 1);
						if (IS_PHYSINST_VALID(&uVar5))
						{
							uVar6 = CREATE_OBJECT_LOCATOR(&uVar5, Function_54());
							OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar6, &uVar5, "impact_impale_locator", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							GET_OBJECT_POSITION(&uVar6, &Var7);
							GET_OBJECT_AXIS(&uVar6, &Var9, 0);
							Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var9, Var7, StackVal) * Vector(1,1f, 1,1f, 1,1f), StackVal, StackVal);
							Var11 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Var9, StackVal);
							VNORMALIZE(&Var11);
							if (iLocal_835)
							{
								iLocal_835 = 0;
								CREATE_DECAL_WITH_NORMAL(StackVal, 2, Var7, Var11, Vector(0.0f, 1.0f, 0.0f), 0,21f);
							}
							else
							{
								CREATE_DECAL_WITH_NORMAL(StackVal, StackVal, StackVal, -Vector(Var11, Var7, 2), Vector(0.0f, 1.0f, 0.0f), 0,21f);
							}
							DESTROY_OBJECT(&uVar6);
						}
						UNK_0xD1C91A7F(RAND_FLOAT_RANGE(-1.0f, 1.0f), RAND_FLOAT_RANGE(-1.0f, 1.0f), 1.0f, RAND_FLOAT_RANGE(10.0f, 20.0f));
						iLocal_839++;
					}
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "skinning"))
			{
				if (Function_276(&Local_553) > 10.0f)
				{
					DECOR_SET_INT(&bLocal_549, "AnimalSize", 2);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 0);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_549, "skinning", 0);
					if (!SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "skinning/Son/Skin"))
					{
						LOG_ERROR("Couldn't set node?");
					}
				}
				else
				{
					if (!IS_OBJECT_VALID(&uLocal_842))
					{
						GET_ACTOR_AXIS(&bLocal_549, &Var15, 2);
						GET_POSITION(&bLocal_549, &Var17);
						Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var15, Var17, StackVal) * Vector(-0,95f, -0,95f, -0,95f), StackVal, StackVal);
						Var13 = Vector(0.0f, (GET_HEADING(&bLocal_549) + 90.0f), 0.0f);
						uLocal_842 = CREATE_PROP_IN_LAYOUT(&bLocal_4, Function_54(), "$/fragments/p_gen_carcassElk01x", Var17, Var13, 0);
						SNAP_OBJECT_TO_GROUND(&uLocal_842, 1.0f, false, 1092616192);
					}
					DESTROY_OBJECT(&uLocal_832);
					TASK_CLEAR(&Global_54076);
					UI_POP("nCutscenes");
					AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_549, 0);
					ACTOR_START_FORCE_HOLSTER(&bLocal_549, 0, 0);
					Local_502 = &Local_502;
					Function_227(&Local_553);
					iLocal_545 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_MOVER_FROZEN(&bLocal_549, 0);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_549, 1);
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_549, true);
			Function_227(&Local_553);
			iLocal_545 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_227(&Local_553);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			Function_227(&Local_553);
			iLocal_545 = 106;
			break;
		
		case 0x0000006A:
			if (IS_OBJECT_VALID(&(uLocal_888[0])))
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&(uLocal_888[0])), "UseCase", 1);
			}
			if (IS_OBJECT_VALID(&(uLocal_888[1])))
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&(uLocal_888[1])), "UseCase", 1);
			}
			if (IS_OBJECT_VALID(&(uLocal_888[2])))
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&(uLocal_888[2])), "UseCase", 1);
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "Skin2"))
				{
					DECOR_REMOVE(&Global_54076, "Skin2");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "Skin3"))
				{
					DECOR_REMOVE(&Global_54076, "Skin3");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "Skin4"))
				{
					DECOR_REMOVE(&Global_54076, "Skin4");
				}
			}
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
			if (!ACTOR_HAS_WEAPON(&bLocal_549, 42))
			{
				GIVE_WEAPON_TO_ACTOR(&bLocal_549, 42, false, 1, 1);
			}
			if (ACTOR_HAS_WEAPON(&bLocal_549, 42))
			{
				if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(&bLocal_549, 42))
				{
					ACTOR_SET_NEXT_WEAPON(&bLocal_549, 42);
				}
			}
			Function_106(540, 1);
			Function_106(541, 1);
			Function_89(348, FLOOR((IntToFloat(Function_447(19)) * 0,4f)), 0, 0);
			Function_446();
			iLocal_565[3] = 1;
			Function_227(&Local_553);
			bLocal_544 = 4;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_446() //Position: 0x1A9EF / 109039
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_FinishesCollMeat", "Home02_s1_FinishesCollMeat", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_447(bool bParam0) //Position: 0x1AA4C / 109132
{
	switch (bParam0)
	{
		case 0x00000000:
			LOG_ERROR("GET_ANIMAL_WEIGHT_LBS called with a human actor!");
			return 0;
			break;
		
		case 0x00000001:
			return RAND_INT_RANGE(40, 70);
			break;
		
		case 0x00000002:
			return RAND_INT_RANGE(2, 3);
			break;
		
		case 0x00000003:
			return RAND_INT_RANGE(300, 850);
			break;
		
		case 0x00000005:
			return RAND_INT_RANGE(140, 300);
			break;
		
		case 0x00000004:
			return RAND_INT_RANGE(55, 65);
			break;
		
		case 0x00000006:
			return RAND_INT_RANGE(390, 490);
			break;
		
		case 0x00000007:
			return RAND_INT_RANGE(10, 28);
			break;
		
		case 0x00000008:
			return RAND_INT_RANGE(900, 2000);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			return RAND_INT_RANGE(900, 1000);
			break;
		
		case 0x0000000A:
			return RAND_INT_RANGE(5, 7);
			break;
		
		case 0x0000000B:
			return RAND_INT_RANGE(115, 198);
			break;
		
		case 0x0000000D:
			return RAND_INT_RANGE(20, 50);
			break;
		
		case 0x0000000E:
			return 1;
			break;
		
		case 0x0000000F:
			return RAND_INT_RANGE(110, 300);
			break;
		
		case 0x00000021:
			return RAND_INT_RANGE(35, 55);
			break;
		
		case 0x00000010:
			return RAND_INT_RANGE(55, 80);
			break;
		
		case 0x00000011:
			return RAND_INT_RANGE(2, 3);
			break;
		
		case 0x00000012:
			return RAND_INT_RANGE(7, 14);
			break;
		
		case 0x00000013:
			return RAND_INT_RANGE(325, 1100);
			break;
		
		case 0x00000014:
			return RAND_INT_RANGE(7, 24);
			break;
		
		case 0x00000015:
			return RAND_INT_RANGE(100, 300);
			break;
		
		case 0x00000016:
			return RAND_INT_RANGE(2, 4);
			break;
		
		case 0x00000017:
			return RAND_INT_RANGE(928, 1392);
			break;
		
		case 0x00000018:
			return RAND_INT_RANGE(800, 1000);
			break;
		
		case 0x00000019:
			return RAND_INT_RANGE(2, 6);
			break;
		
		case 0x0000001A:
			return RAND_INT_RANGE(330, 550);
			break;
		
		case 0x0000001B:
			return RAND_INT_RANGE(2, 4);
			break;
		
		case 0x0000001C:
			return RAND_INT_RANGE(10, 18);
			break;
		
		case 0x0000001D:
			return RAND_INT_RANGE(100, 225);
			break;
		
		case 0x0000001E:
			return RAND_INT_RANGE(5, 14);
			break;
		
		case 0x0000001F:
			return RAND_INT_RANGE(4, 6);
			break;
		
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000022:
			return RAND_INT_RANGE(6, 10);
			break;
		
		case 0x00000023:
			return RAND_INT_RANGE(100, 175);
			break;
	}
	return 0;
}

var Function_448(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1ACCE / 109774
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Skinning_High_NoKnife", 3, 1);
	}
	Function_449(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_449(var uParam0, var uParam1) //Position: 0x1AD60 / 109920
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_452(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_451(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_450(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 1);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1,5f, 1, 0);
	return;
}

void Function_450(int iParam0, var uParam1) //Position: 0x1ADD5 / 110037
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,183191f, 0,536072f, -1,508552f), Vector(31,17652f, -176,2945f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,126681f, 1,064484f, -0,637045f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_451(int iParam0, var uParam1) //Position: 0x1AE72 / 110194
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(0,492018f, 0,468582f, -1,210122f), Vector(25,27425f, 142,346f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,026176f, 0,869156f, -0,538683f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_452(int iParam0, var uParam1) //Position: 0x1AF0F / 110351
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,82318f, 1,093231f, -0,813308f), Vector(14,61724f, -134,8103f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,243373f, 1,304413f, -0,23743f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_453(bool bParam0, bool bParam1) //Position: 0x1AFAC / 110508
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&bParam1), &Var0);
	Function_454(StackVal, &bParam0, Var0);
	return;
}

void Function_454(var uParam0, struct<2> Param1) //Position: 0x1AFC8 / 110536
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_455(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_455(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_455(var uParam0, struct<2> Param1) //Position: 0x1B003 / 110595
{
	struct<2> Var0;
	
	Function_335(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_335(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_456(var uParam0, bool bParam1) //Position: 0x1B084 / 110724
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_457(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_457(var uParam0, bool bParam1) //Position: 0x1B0EE / 110830
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

bool Function_458() //Position: 0x1B10F / 110863
{
	switch (bLocal_863)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(&uLocal_896))
			{
				bLocal_863++;
			}
			else
			{
				bLocal_863 = 4;
			}
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) <= 3)
			{
				bLocal_863++;
			}
			break;
		
		case 0x00000002:
			GET_OBJECT_POSITION(&bLocal_4 + 824[6], &Local_930);
			uLocal_958 = LOCATE_GRINGO_OF_TYPE("Skin_Animal", &Local_930, 2.0f, 0);
			if (IS_GRINGO_VALID(&uLocal_958))
			{
				uLocal_896 = GET_OBJECT_FROM_GRINGO(&uLocal_958);
				bLocal_863++;
			}
			break;
		
		case 0x00000003:
			bLocal_863++;
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

bool Function_459() //Position: 0x1B1CD / 111053
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 824[4], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 824[5], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[2])
	{
		Function_341(&bLocal_865, &bLocal_4 + 824[5], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		Function_462();
		if (SQUAD_IS_VALID(&bLocal_4 + 248))
		{
			Function_339(&bLocal_4 + 248, 0);
			Function_461(&bLocal_4 + 248, 1);
			Function_337(&bLocal_4 + 248, 1, 1, 1);
			Function_444(&bLocal_4 + 248, &bLocal_549);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_460(&bLocal_4 + 248);
		}
	}
	if ((IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152)) && SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		return 1;
	}
	return 0;
}

void Function_460(int iParam0) //Position: 0x1B388 / 111496
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_461(var uParam0, bool bParam1) //Position: 0x1B3DF / 111583
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_462() //Position: 0x1B426 / 111654
{
	*(&bLocal_4 + 248) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Elk02"));
	*(&bLocal_4 + 192[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nELK_02_01", 1109, Vector(-771,293f, 144,1899f, 1812,227f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 192[02], &bLocal_4 + 248);
	DECOR_SET_BOOL(&bLocal_4 + 192[02], "Home02_S1_Skin2", 1);
	*(&bLocal_4 + 192[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nELK_02_02", 1110, Vector(-763,4006f, 144,5897f, 1812,298f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 192[12], &bLocal_4 + 248);
	DECOR_SET_BOOL(&bLocal_4 + 192[12], "Home02_S1_Skin3", 1);
	*(&bLocal_4 + 192[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nELK_02_03", 1111, Vector(-763,8279f, 144,099f, 1820,071f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 192[22], &bLocal_4 + 248);
	DECOR_SET_BOOL(&bLocal_4 + 192[22], "Home02_S1_Skin4", 1);
	return;
}

void Function_463() //Position: 0x1B562 / 111970
{
	Function_356(&cLocal_396);
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_499();
		Function_498(&uLocal_888);
		Function_417();
		if (iLocal_545 < 16)
		{
		}
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) == 0)
		{
		}
		else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) == 1)
		{
		}
		else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) == 2)
		{
		}
		else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) == 3)
		{
		}
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			GET_OBJECT_POSITION(&bLocal_4 + 1176, &Local_942);
			STREAMING_LOAD_BOUNDS(Local_942, 50.0f, 1);
			if (iLocal_565[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46754[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 768[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_496())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_862 = Function_413();
				iLocal_858 = 0;
				iLocal_857 = 0;
				iLocal_859 = 0;
				iLocal_878 = 0;
				iLocal_880 = 0;
				iLocal_879 = 0;
				iLocal_881 = 0;
				iLocal_882 = 0;
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (iLocal_565[1] == 0)
				{
					Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_341(&bLocal_551, &bLocal_4 + 768[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_873))
						{
							Function_341(&bLocal_873, &bLocal_4 + 768[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_873))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_873);
							}
						}
					}
					if (Function_67(540) == 0)
					{
						Function_89(540, 1, 0, 0);
					}
				}
				Function_443(1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
				Function_231(12, 0, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, true);
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&bLocal_549));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_549, 13, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_549, 70.0f);
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
				}
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_408(&(Local_641[215]), &bLocal_869, "Uncle", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[315]), &bLocal_867, "Wife", 0, 0x5f5e100, 1);
				Function_403(&(Local_641[415]));
				Function_403(&(Local_641[515]));
				iLocal_986 = 0;
				Function_227(&Local_553);
				iLocal_545 = 6;
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[1], Function_246(bLocal_544), 0);
			}
			break;
		
		case 0x00000006:
			Function_392(1);
			if (!HUD_IS_FADING())
			{
				iLocal_586 = 0;
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865);
				if (!IS_OBJECT_VALID(&bLocal_956))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_956 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_396, "HOME02SON01_CAMERA_FOCUS", &bLocal_865, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&bLocal_956))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&bLocal_956, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
						SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				Function_443(1);
				if (!iLocal_880)
				{
					Function_495();
				}
				else
				{
					Function_494();
				}
				Function_227(&Local_553);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			Function_392(1);
			if (iLocal_880)
			{
				Function_488();
			}
			if (iLocal_565[1] != 0 || iLocal_880)
			{
				Function_388("home02_son01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			Function_227(&Local_553);
			Function_227(&iLocal_557);
			Function_227(&iLocal_561);
			iLocal_545 = 27;
			break;
		
		case 0x0000001B:
			if (ACTOR_HAS_ANIM_SET(&bLocal_549, "Rand_Idle_Sit_Ground"))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 0);
			}
			Function_392(1);
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (DECOR_GET_BOOL(&cLocal_396, "FindingHorse"))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					DECOR_REMOVE(&cLocal_396, "FindingHorse");
				}
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				if (IS_ACTOR_RIDING(&bLocal_549))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (iLocal_565[1] && !iLocal_880)
					{
						Function_388("home02_son01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
					}
					Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
					Function_487();
					Function_227(&Local_553);
					Function_227(&iLocal_557);
					Function_227(&iLocal_561);
					iLocal_545 = 8;
				}
			}
			else
			{
				if (IS_ACTOR_RIDING(&bLocal_549))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 15.0f))
					{
						if (!Function_278(&iLocal_898))
						{
							Function_227(&iLocal_898);
						}
						else if (Function_276(&iLocal_898) < 5.0f)
						{
							Function_365("Home02_s1_NoGetOnHors", 0);
							Function_227(&iLocal_898);
						}
					}
				}
				if (IS_ACTOR_ALIVE(&bLocal_551))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_551)))
					{
						if (IS_BLIP_VALID(&bLocal_875))
						{
							REMOVE_BLIP(&bLocal_875);
						}
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_551, 334, 0, 2, 0);
						Function_388("Horse_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(&bLocal_875))
					{
						REMOVE_BLIP(&bLocal_875);
					}
					if (!DECOR_GET_BOOL(&cLocal_396, "FindingHorse"))
					{
						Function_388("Horse_find", 0x40f00000, 1, 2, 0, 0, 0, 0);
						DECOR_SET_BOOL(&cLocal_396, "FindingHorse", 1);
					}
				}
			}
			break;
		
		case 0x00000008:
			if (Function_368(&iLocal_561, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_584, 0, &cLocal_396, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
						SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_865, "Dog_return", "Dog_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_865) && IS_ACTOR_VALID(&bLocal_549))
			{
				if (!iLocal_880)
				{
					Function_483(&bLocal_4 + 1208, &bLocal_4 + 1176);
					if (Function_480())
					{
						Function_479();
					}
				}
				else
				{
					Function_483(&bLocal_4 + 1216, &bLocal_4 + 1184);
					if (Function_480())
					{
						Function_479();
					}
				}
			}
			if (Function_392(0))
			{
				if (!DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &bLocal_865, 40.0f, 15.0f, 25.0f);
					DECOR_SET_BOOL(&cLocal_396, "CompEmerTele", 1);
				}
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					Local_927 = Vector(3.0f, 0.0f, 10.0f);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, &bLocal_865, &Local_927, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			else if (DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
				DECOR_REMOVE(&cLocal_396, "CompEmerTele");
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_865, "Warn_Fight") || Function_477(&bLocal_4 + 248, 1.0f, 120.0f, 1, 1))
			{
				if (iLocal_878)
				{
				}
				else
				{
					iLocal_878 = 1;
					iLocal_882 = 1;
				}
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				if (DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
					DECOR_REMOVE(&cLocal_396, "CompEmerTele");
				}
				Function_248();
				Function_227(&Local_553);
				iLocal_545 = 9;
			}
			break;
		
		case 0x00000009:
			iLocal_586 = 1;
			Function_323(&uLocal_831, 8, 0, 4294967295, 4294967295);
			TASK_CLEAR(&bLocal_865);
			TASK_CLEAR(&bLocal_549);
			bLocal_856 = TASK_SEQUENCE_OPEN();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) >= 0)
			{
				bLocal_871 = Function_475(&bLocal_4 + 248, &bLocal_549, 1, 0);
				if (IS_ACTOR_ALIVE(&bLocal_871))
				{
					TASK_KILL_CHAR(false, &bLocal_871);
				}
				else if (IS_ACTOR_VALID(&bLocal_871))
				{
					TASK_GO_NEAR_ACTOR(0, &bLocal_871, 5.0f, 4);
				}
			}
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 7.0f, 4);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
			TASK_SEQUENCE_RELEASE(bLocal_856, 1);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &Global_54076, 60.0f, 10.0f, 50.0f);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865, &Global_54076, 60.0f, 10.0f, 50.0f);
			STREAMING_UNLOAD_BOUNDS();
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_865, 2);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_865, 1);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_865, &Global_54076, 5.0f, 4);
			iLocal_857 = 0;
			if (!iLocal_880)
			{
				if (iLocal_882)
				{
					Function_474();
				}
				else
				{
					Function_473();
				}
			}
			else
			{
				Function_472();
			}
			Function_227(&Local_553);
			iLocal_545 = 10;
			break;
		
		case 0x0000000A:
			if (Function_276(&Local_553) <= 5.0f)
			{
				Function_388("home02_son01_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 11;
			}
			else if (Function_276(&Local_553) <= 2.0f)
			{
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					bLocal_856 = TASK_SEQUENCE_OPEN();
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) >= 0)
					{
						bLocal_871 = Function_475(&bLocal_4 + 248, &bLocal_549, 1, 0);
						if (IS_ACTOR_ALIVE(&bLocal_871))
						{
							TASK_KILL_CHAR(false, &bLocal_871);
						}
						else if (IS_ACTOR_VALID(&bLocal_871))
						{
							TASK_GO_NEAR_ACTOR(0, &bLocal_871, 5.0f, 4);
						}
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 7.0f, 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_392(0))
			{
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					bLocal_856 = TASK_SEQUENCE_OPEN();
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) >= 0)
					{
						bLocal_871 = Function_475(&bLocal_4 + 248, &bLocal_549, 1, 0);
						if (IS_ACTOR_ALIVE(&bLocal_871))
						{
							TASK_KILL_CHAR(false, &bLocal_871);
						}
						else if (IS_ACTOR_VALID(&bLocal_871))
						{
							TASK_GO_NEAR_ACTOR(0, &bLocal_871, 5.0f, 4);
						}
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 7.0f, 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				}
			}
			if (!iLocal_880)
			{
				Function_469(0, 1);
			}
			else
			{
				Function_469(1, 1);
			}
			if (SQUAD_IS_VALID(&bLocal_4 + 248))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) <= 3)
				{
					if ((IS_OBJECT_VALID(&(uLocal_888[0])) || IS_OBJECT_VALID(&(uLocal_888[1]))) || IS_OBJECT_VALID(&(uLocal_888[2])))
					{
						Function_248();
						Function_227(&Local_553);
						iLocal_545 = 12;
					}
				}
				else if (iLocal_879)
				{
					Function_323(&uLocal_831, 43, 0, 4294967295, 4294967295);
					if (!Function_477(&bLocal_4 + 248, 1.0f, 120.0f, 1, 1) && !Function_468(&Global_54076, &bLocal_4 + 248, 90.0f))
					{
						if (iLocal_880)
						{
							Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
							iLocal_878 = 0;
							TASK_CLEAR(&bLocal_865);
							iLocal_857 = 0;
							Function_467(&bLocal_4 + 248);
							Function_248();
							Function_227(&Local_553);
							iLocal_545 = 20;
						}
						else
						{
							Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
							STREAMING_UNLOAD_BOUNDS();
							TASK_CLEAR(&bLocal_865);
							iLocal_857 = 0;
							iLocal_880 = 1;
							iLocal_879 = 0;
							iLocal_878 = 0;
							Function_488();
							if (DECOR_CHECK_EXIST(&Global_54076, "Skin2"))
							{
								DECOR_REMOVE(&Global_54076, "Skin2");
							}
							if (DECOR_CHECK_EXIST(&Global_54076, "Skin3"))
							{
								DECOR_REMOVE(&Global_54076, "Skin3");
							}
							if (DECOR_CHECK_EXIST(&Global_54076, "Skin4"))
							{
								DECOR_REMOVE(&Global_54076, "Skin4");
							}
							Function_467(&bLocal_4 + 248);
							Function_248();
							Function_227(&Local_553);
							iLocal_545 = 6;
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) != 0 || (!Function_477(&bLocal_4 + 248, 1.0f, 120.0f, 1, 1) && !Function_468(&Global_54076, &bLocal_4 + 248, (90.0f + 10.0f))))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 248) == 0)
				{
				}
				Function_467(&bLocal_4 + 248);
				Function_323(&uLocal_831, 3, 0, 4294967295, 4294967295);
				Function_248();
				Function_227(&Local_553);
				iLocal_545 = 13;
			}
			break;
		
		case 0x0000000D:
			if ((IS_OBJECT_VALID(&(uLocal_888[0])) || IS_OBJECT_VALID(&(uLocal_888[1]))) || IS_OBJECT_VALID(&(uLocal_888[2])))
			{
				uLocal_896 = Function_466(&uLocal_888, &Global_54076);
				if (IS_OBJECT_VALID(&uLocal_896))
				{
					Function_443(0);
					GET_OBJECT_POSITION(&uLocal_896, &Local_930);
					PRINTVECTOR(Local_930);
					PRINTNL();
					Local_927 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(1.0f, 0.0f, -2.0f), Local_930, StackVal);
					PRINTVECTOR(Local_927);
					PRINTNL();
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
					Function_231(12, 1, 1);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_927, 10.0f, 4);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_DISMOUNT(0, 1);
					TASK_GO_NEAR_COORD(0, &Local_927, 1,5f, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
					iLocal_881 = 1;
					iLocal_878 = 0;
					Function_227(&Local_553);
					iLocal_545 = 14;
				}
				else if (Function_276(&Local_553) <= 10.0f)
				{
					LOG_ERROR("HOME02_SON01 - NO valid oCurrentGringo location was found!!!");
					Function_227(&Local_553);
					Function_465();
					iLocal_545 = 21;
				}
			}
			break;
		
		case 0x0000000E:
			iLocal_586 = 0;
			Function_465();
			Function_227(&Local_553);
			iLocal_545 = 15;
			break;
		
		case 0x0000000F:
			if (Function_276(&Local_553) <= 5.0f)
			{
				if (Function_391(&bLocal_549, &uLocal_896) < 20.0f)
				{
					Function_464();
				}
				Function_388("home02_son01_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 16;
			}
			break;
		
		case 0x00000010:
			Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_549, "Son_return", "Son_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			Function_231(12, 1, 1);
			if ((GET_TASK_STATUS(&bLocal_549, 22) != 1 || GET_TASK_STATUS(&bLocal_549, 0) == 1) || Function_276(&Local_553) <= 10.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, (6.0f + 3.0f)))
					{
						if (IS_BLIP_VALID(&bLocal_875))
						{
							REMOVE_BLIP(&bLocal_875);
						}
						Function_231(12, 0, 1);
						Function_227(&Local_553);
						iLocal_545 = 106;
					}
				}
			}
			break;
		
		case 0x00000014:
			if (Function_276(&Local_553) <= 5.0f)
			{
				iLocal_586 = 0;
				iLocal_877 = 1;
				Function_227(&Local_553);
				iLocal_545 = 106;
			}
			break;
		
		case 0x00000015:
			iLocal_586 = 0;
			Function_443(0);
			Function_227(&Local_553);
			iLocal_545 = 22;
			break;
		
		case 0x00000016:
			if (Function_276(&Local_553) <= 5.0f)
			{
				Function_227(&Local_553);
				iLocal_545 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_276(&Local_553) <= 0,5f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_227(&Local_553);
				iLocal_545 = 93;
			}
			break;
		
		case 0x0000005D:
			if (HUD_IS_FADED())
			{
				Function_229();
				iLocal_565[2] = 0;
				Function_227(&Local_553);
				bLocal_544 = 3;
				iLocal_545 = 0;
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			bLocal_861 = false;
			while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 248))
			{
				bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 248, bLocal_861);
				if (IS_ACTOR_ALIVE(&bLocal_871))
				{
					SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_871, &bLocal_549, 0);
					SET_ACTOR_PERMANENT(&bLocal_871, 1);
				}
				bLocal_861++;
			}
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
			iLocal_565[2] = 1;
			Function_227(&Local_553);
			bLocal_544 = 3;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_464() //Position: 0x1C7B4 / 116660
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_DeadAnimBant_v1_AA", "Home02_s1_DeadAnimBant_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_DeadAnimBant_v1_AB", "Home02_s1_DeadAnimBant_v1_AB", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_DeadAnimBant_v1_AC", "Home02_s1_DeadAnimBant_v1_AC", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x1C8A3 / 116899
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_CollectElkMeatBoy", "Home02_s1_CollectElkMeatBoy", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_466(var[] uParam0, var uParam1) //Position: 0x1C902 / 116994
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = -1.0f;
	if (IS_ACTOR_VALID(&uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (IS_OBJECT_VALID(&(uParam0[iVar0])))
			{
				fVar3 = Function_391(&uParam1, &(uParam0[iVar0]));
				if (fVar3 > fVar2 || iVar1 != 4294967295)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 >= 4294967295)
	{
		return &(uParam0[iVar1]);
	}
	return "";
}

void Function_467(int iParam0) //Position: 0x1C973 / 117107
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

bool Function_468(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C9C7 / 117191
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (SQUAD_IS_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (Function_425(&bParam0, &iVar1, bParam2))
					{
						return 1;
					}
				}
				bVar0++;
			}
		}
	}
	return 0;
}

void Function_469(bool bParam0, bool bParam1) //Position: 0x1CA23 / 117283
{
	if (!Function_278(&iLocal_972))
	{
		Function_227(&iLocal_972);
	}
	else
	{
		if (fLocal_987 < 7.0f || fLocal_987 > 3.0f)
		{
			fLocal_987 = RAND_FLOAT_RANGE(3.0f, 7.0f);
		}
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_276(&iLocal_972) < fLocal_987)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 25.0f))
				{
					if (bParam0 && bParam1)
					{
						if (Function_471())
						{
							Function_470("Home02_s1_JonEncoJak", 1);
						}
						else
						{
							Function_365("Home02_s1_JackEncoJon", 1);
						}
					}
					else if (bParam0)
					{
						Function_365("Home02_s1_JackEncoJon", 1);
					}
					else if (bParam1)
					{
						Function_470("Home02_s1_JonEncoJak", 1);
					}
					Function_227(&iLocal_972);
					fLocal_987 = RAND_FLOAT_RANGE(3.0f, 7.0f);
				}
			}
		}
	}
	return;
}

void Function_470(bool bParam0, bool bParam1) //Position: 0x1CB16 / 117526
{
	if (!iLocal_985 && IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&Global_54076, &bParam0, Function_54(), 0, 0, 1, 4, 1, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else if (!&bParam1)
	{
		SAY_SINGLE_LINE_SCRIPTED(&Global_54076, &bParam0, &bLocal_549, 0, 0, 0, 1, 3);
	}
	else
	{
		SAY_SINGLE_LINE_SCRIPTED(&Global_54076, &bParam0, &bLocal_865, 0, 1, 0, 1, 3);
	}
	return;
}

bool Function_471() //Position: 0x1CB81 / 117633
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_472() //Position: 0x1CB94 / 117652
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_MissedElk1stTime", "Home02_s1_MissedElk1stTime", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x1CBF1 / 117745
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_dogSpotsElk3", "Home02_s1_dogSpotsElk3", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x1CC46 / 117830
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_SpotsElkb4Dogdoes", "Home02_s1_SpotsElkb4Dogdoes", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_475(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1CCA5 / 117925
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_476(&uVar4, &bParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

var Function_476(var uParam0, int iParam1) //Position: 0x1CD70 / 118128
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

bool Function_477(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1CE65 / 118373
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (Function_478(&uVar1, &fParam1, &fParam2, &iParam3, &iParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_478(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1CEC1 / 118465
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_479() //Position: 0x1CEE1 / 118497
{
	if (!Function_278(&iLocal_972))
	{
		Function_227(&iLocal_972);
	}
	else
	{
		if (fLocal_987 < 7.0f || fLocal_987 > 3.0f)
		{
			fLocal_987 = RAND_FLOAT_RANGE(3.0f, 7.0f);
		}
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_276(&iLocal_972) < fLocal_987)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_865, 25.0f))
				{
					if (Function_471())
					{
						bLocal_861 = RAND_INT_RANGE(1, 3);
						switch (bLocal_861)
						{
							case 0x00000001:
								Function_470("Home02_s1_ShoutsEncAtDog", 1);
								break;
							
							case 0x00000002:
								Function_470("Home02_s1_ShoutsEncAtDog2", 1);
								break;
							
							case 0x00000003:
								Function_470("Home02_s1_ShoutsEncoAtDog3", 1);
								break;
						}
					}
					else
					{
						bLocal_861 = RAND_INT_RANGE(1, 2);
						switch (bLocal_861)
						{
							case 0x00000001:
								Function_365("Home02_s1_JakShatsEncoDog1", 1);
								break;
							
							case 0x00000002:
								Function_365("Home02_s1_JakShoutsDog2", 1);
								break;
							}
					}
					Function_227(&iLocal_972);
					fLocal_987 = RAND_FLOAT_RANGE(3.0f, 7.0f);
				}
			}
		}
	}
	return;
}

bool Function_480() //Position: 0x1D03A / 118842
{
	Function_366();
	if (iLocal_985)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_985 = 0;
				Function_365("Home02_s1_RidesBakJak", 0);
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_278(&iLocal_976))
		{
			Function_364(&iLocal_976);
		}
	}
	else
	{
		if (iLocal_984)
		{
			iLocal_984 = 0;
		}
		if (!Function_278(&iLocal_976))
		{
			Function_227(&iLocal_976);
		}
		if (Function_276(&iLocal_976) < 4.0f)
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 15.0f))
				{
					switch (iLocal_986)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_482();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								if (iLocal_880)
								{
									Function_481();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_986 = 99;
									}
								}
								else
								{
									return 1;
								}
							}
							break;
						
						case 0x00000063:
							return 1;
							break;
						
						default:
							return 1;
							break;
						}
					}
				}
			}
	}
	return 0;
}

void Function_481() //Position: 0x1D14D / 119117
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_2ndElkBant_v2_AA", "Home02_s1_2ndElkBant_v2_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_2ndElkBant_v2_AB1", "Home02_s1_2ndElkBant_v2_AB1", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_2ndElkBant_v2_AB2", "Home02_s1_2ndElkBant_v2_AB2", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_2ndElkBant_v2_AC", "Home02_s1_2ndElkBant_v2_AC", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_2ndElkBant_v2_AD", "Home02_s1_2ndElkBant_v2_AD", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x1D2BA / 119482
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_2ndElkBant_v1_AA", "Home02_s1_2ndElkBant_v1_AA", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_2ndElkBant_v1_AB", "Home02_s1_2ndElkBant_v1_AB", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_2ndElkBant_v1_AC", "Home02_s1_2ndElkBant_v1_AC", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_4440", "", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_2ndElkBant_v1_AD", "Home02_s1_2ndElkBant_v1_AD", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_2ndElkBant_v1_AE", "Home02_s1_2ndElkBant_v1_AE", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483(var uParam0, int iParam1) //Position: 0x1D442 / 119874
{
	if (IS_ACTOR_VALID(&bLocal_865))
	{
		switch (iLocal_857)
		{
			case 0x00000000:
				GET_OBJECT_POSITION(&uParam0, &(Local_910[02]));
				STREAMING_LOAD_BOUNDS(Local_910[02], 50.0f, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_865, 1);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_865, 2);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
				iLocal_857++;
				break;
			
			case 0x00000001:
				if (!Function_484(&bLocal_865, &Global_54076, 60.0f) || !IS_ACTOR_RIDING(&Global_54076))
				{
					if (!GET_TASK_STATUS(&bLocal_865, 22) != 1)
					{
						TASK_FACE_ACTOR(&bLocal_865, &Global_54076, 1, 3212836864);
					}
				}
				else if (GET_TASK_STATUS(&bLocal_865, 0) != 1)
				{
					GET_OBJECT_POSITION(&uParam0, &(Local_910[02]));
					GET_OBJECT_POSITION(&iParam1, &uLocal_924);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &(Local_910[02]), 6.0f, 3);
					TASK_FACE_COORD(0, &uLocal_924, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_865, true);
				}
				if (GET_TASK_STATUS(&bLocal_865, 6) == 1)
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_865, "Warn_Fight"))
					{
						TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_865, 8, "HUNT");
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_865, "Dog_Main/Warn/Warn_Fight");
					}
				}
				break;
			}
	}
	return;
}

bool Function_484(bool bParam0, var uParam1, float fParam2) //Position: 0x1D5B7 / 120247
{
	float fVar0;
	
	fVar0 = Function_485(&bParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_485(var uParam0, int iParam1) //Position: 0x1D5D6 / 120278
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_486(&uVar0, &uVar2);
	return iVar4;
}

var Function_486(struct<2> Param0) //Position: 0x1D5F7 / 120311
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_487() //Position: 0x1D616 / 120342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JakShoutsDog2", "Home02_s1_JakShoutsDog2", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x1D66D / 120429
{
	if (SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		if (!DECOR_GET_BOOL(&bLocal_4 + 248, "ElkSquadTeleported2"))
		{
			Function_492(&bLocal_4 + 248, &bLocal_4 + 1184, 1, 6.0f, 3.0f, 1);
			bLocal_861 = false;
			while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 248))
			{
				bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 248, bLocal_861);
				if (IS_ACTOR_ALIVE(&bLocal_871))
				{
					Function_83(&bLocal_871, &Local_945);
					if (FIND_GROUND_INTERSECTION(&Local_945, 20.0f, &Local_948, &uLocal_951))
					{
						TELEPORT_ACTOR(&bLocal_871, &Local_948, 1, 1, 1);
					}
				}
				bLocal_861++;
			}
			SQUAD_GOALS_CLEAR(&bLocal_4 + 248);
			Function_491(&bLocal_4 + 248);
			Function_490(&bLocal_4 + 248);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 456, -1.0f);
			Function_489(&bLocal_4 + 248, &bLocal_4 + 456, 2, 0);
			DECOR_SET_BOOL(&bLocal_4 + 248, "ElkSquadTeleported2", 1);
		}
	}
	return;
}

void Function_489(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1D772 / 120690
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
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_490(int iParam0) //Position: 0x1D7CA / 120778
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_491(bool bParam0) //Position: 0x1D819 / 120857
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

void Function_492(var uParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x1D84E / 120910
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<5> Var7;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_244(&bParam1);
			Var3 = Function_244(&bParam1);
			Function_493(&bParam1);
			Var7 = Function_493(&bParam1);
			Var5 = Var3;
			Var5.f_4 = (StackVal + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						Var5 = Var3;
						Var5.f_8 = (StackVal + fParam3);
					}
					if (bParam5)
					{
						Var7.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_416(StackVal, StackVal, &uVar2, Var5, 1, 1, 1);
					iVar1++;
					Var5 = (Var5 + fParam3);
				}
				bVar0++;
			}
		}
	}
}

struct<8> Function_493(var uParam0) //Position: 0x1D908 / 121096
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

void Function_494() //Position: 0x1D931 / 121137
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_Miss2ndGoAfter", "Home02_s1_Miss2ndGoAfter", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x1D98A / 121226
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_SearchMoreElk", "Home02_s1_SearchMoreElk", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_496() //Position: 0x1D9E1 / 121313
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 768[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 768[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[1])
	{
		Function_341(&bLocal_865, &bLocal_4 + 768[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		Function_462();
		if (SQUAD_IS_VALID(&bLocal_4 + 248))
		{
			Function_339(&bLocal_4 + 248, 0);
			Function_461(&bLocal_4 + 248, 1);
			Function_337(&bLocal_4 + 248, 1, 1, 1);
			Function_444(&bLocal_4 + 248, &bLocal_549);
			Function_497(&bLocal_4 + 248, "NonActiveGringo", 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 448, -1.0f);
		}
	}
	if ((IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152)) && SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		return 1;
	}
	return 0;
}

void Function_497(bool bParam0, var uParam1, int iParam2) //Position: 0x1DBB4 / 121780
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				DECOR_SET_BOOL(&uVar1, &uParam1, iParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_498(var[] uParam0) //Position: 0x1DC02 / 121858
{
	if (!IS_OBJECT_VALID(&(uParam0[0])))
	{
		uParam0[0] = DECOR_GET_OBJECT(&Global_54076, "Skin2");
		if (IS_OBJECT_VALID(&(uParam0[0])))
		{
		}
	}
	if (!IS_OBJECT_VALID(&(uParam0[1])))
	{
		uParam0[1] = DECOR_GET_OBJECT(&Global_54076, "Skin3");
		if (IS_OBJECT_VALID(&(uParam0[1])))
		{
		}
	}
	if (!IS_OBJECT_VALID(&(uParam0[2])))
	{
		uParam0[2] = DECOR_GET_OBJECT(&Global_54076, "Skin4");
		if (IS_OBJECT_VALID(&(uParam0[2])))
		{
		}
	}
	return;
}

void Function_499() //Position: 0x1DC9B / 122011
{
	if (SQUAD_IS_VALID(&bLocal_4 + 248))
	{
		Function_505(&bLocal_4 + 248);
		switch (iLocal_859)
		{
			case 0x00000000:
				iLocal_859++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&bLocal_4 + 248);
				Function_491(&bLocal_4 + 248);
				Function_490(&bLocal_4 + 248);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 448, -1.0f);
				bLocal_861 = false;
				while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 248))
				{
					bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 248, bLocal_861);
					if (IS_ACTOR_ALIVE(&bLocal_871))
					{
						SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_871, &bLocal_549, 0);
						SET_ACTOR_PERMANENT(&bLocal_871, 1);
					}
					bLocal_861++;
				}
				iLocal_859++;
				break;
			
			case 0x00000002:
				if (iLocal_878)
				{
					iLocal_859++;
				}
				break;
			
			case 0x00000003:
				SQUAD_GOALS_CLEAR(&bLocal_4 + 248);
				Function_491(&bLocal_4 + 248);
				Function_490(&bLocal_4 + 248);
				Function_503(&bLocal_4 + 248, &bLocal_4 + 368);
				Function_502(&bLocal_4 + 248, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				bLocal_861 = false;
				while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 248))
				{
					bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 248, bLocal_861);
					if (IS_ACTOR_ALIVE(&bLocal_871))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_871)))
						{
							SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_871), "H2S1_ElkBlip");
						}
					}
					bLocal_861++;
				}
				if (!iLocal_880)
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 448, -1.0f);
					Function_489(&bLocal_4 + 248, &bLocal_4 + 448, 2, 0);
				}
				else
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 456, -1.0f);
					Function_489(&bLocal_4 + 248, &bLocal_4 + 456, 2, 0);
				}
				Function_227(&iLocal_906);
				iLocal_859++;
				break;
			
			case 0x00000004:
				if (((IS_ACTOR_SHOOTING(&Global_54076) || IS_ACTOR_SHOOTING(&bLocal_549)) || Function_468(&Global_54076, &bLocal_4 + 248, 50.0f)) || Function_468(&bLocal_549, &bLocal_4 + 248, 50.0f))
				{
					Function_227(&iLocal_906);
					iLocal_859++;
				}
				break;
			
			case 0x00000005:
				if (iLocal_881)
				{
					iLocal_859++;
				}
				else if (!iLocal_878)
				{
					iLocal_859 = 2;
				}
				if (Function_276(&iLocal_906) <= 1.0f)
				{
					iLocal_879 = 1;
					if (!iLocal_880)
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1528, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1536, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1544, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1552, 2);
						Function_77(&bLocal_860, Function_500(4));
						Function_77(&bLocal_860, Function_500(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_860, &bLocal_4 + 1544, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_490(&bLocal_4 + 248);
						SQUAD_GOALS_CLEAR(&bLocal_4 + 248);
						Function_491(&bLocal_4 + 248);
						SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 1, 0);
					}
					else
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1528, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1536, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1544, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1552, 2);
						Function_77(&bLocal_860, Function_500(4));
						Function_77(&bLocal_860, Function_500(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_860, &bLocal_4 + 1552, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_490(&bLocal_4 + 248);
						SQUAD_GOALS_CLEAR(&bLocal_4 + 248);
						Function_491(&bLocal_4 + 248);
						SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 248, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 1, 0);
					}
					Function_227(&iLocal_906);
					iLocal_859++;
				}
				break;
			
			case 0x00000006:
				if (iLocal_881)
				{
					iLocal_859++;
				}
				else if (!iLocal_878)
				{
					iLocal_859 = 2;
				}
				break;
			
			case 0x00000007:
				iLocal_859++;
				break;
			}
	}
	return;
}

bool Function_500(int iParam0) //Position: 0x1E078 / 123000
{
	return Function_501(2, iParam0);
}

int Function_501(int iParam0, bool bParam1) //Position: 0x1E084 / 123012
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < bParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

void Function_502(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1E0B1 / 123057
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
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

void Function_503(var uParam0, int[] iParam1) //Position: 0x1E1C1 / 123329
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_504(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_504(int iParam0, int iParam1) //Position: 0x1E20A / 123402
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_505(var uParam0) //Position: 0x1E268 / 123496
{
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (!Function_278(&iLocal_988))
		{
			Function_227(&iLocal_988);
		}
		else if (Function_276(&iLocal_988) < 2.0f)
		{
			bLocal_861 = false;
			while (bLocal_861 <= SQUAD_GET_SIZE(&uParam0))
			{
				bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_861);
				if (IS_ACTOR_ALIVE(&bLocal_871))
				{
					if (!IS_ACTOR_ON_GROUND(&bLocal_871))
					{
						Function_83(&bLocal_871, &Local_945);
						if (FIND_GROUND_INTERSECTION(&Local_945, 20.0f, &Local_948, &uLocal_951))
						{
							if (!WOULD_ACTOR_BE_VISIBLE(1110, &Local_948, 3212836864))
							{
								TELEPORT_ACTOR(&bLocal_871, &Local_948, 0, 1, 1);
							}
						}
					}
				}
				bLocal_861++;
			}
			Function_227(&iLocal_988);
		}
	}
	return;
}

void Function_506() //Position: 0x1E315 / 123669
{
	Function_356(&cLocal_396);
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_527();
		Function_417();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			GET_OBJECT_POSITION(&bLocal_4 + 1160, &Local_942);
			STREAMING_LOAD_BOUNDS(Local_942, 50.0f, 1);
			if (iLocal_565[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_546 = Global_46754[1];
				if (!Function_343(bLocal_546))
				{
					Function_342(&Local_398);
				}
				Function_341(&Global_54076, &bLocal_4 + 712[0], 1, 1, 1);
				Function_383();
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_227(&Local_553);
				iLocal_545 = 1;
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_525())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_862 = Function_413();
				iLocal_858 = 0;
				iLocal_857 = 0;
				iLocal_859 = 0;
				iLocal_878 = 0;
				iLocal_880 = 0;
				iLocal_879 = 0;
				iLocal_881 = 0;
				iLocal_882 = 0;
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (iLocal_565[0] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_341(&bLocal_551, &bLocal_4 + 712[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_873))
						{
							Function_341(&bLocal_873, &bLocal_4 + 712[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_873))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_873);
							}
						}
					}
				}
				Function_231(12, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 0);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, 2);
				AI_RIDING_SET_ATTRIBUTE(&bLocal_549, 2, 0,15f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&bLocal_549));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_549, 13, true);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_549, 30.0f);
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_408(&(Local_641[215]), &bLocal_869, "Uncle", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[315]), &bLocal_867, "Wife", 0, 0x5f5e100, 1);
				Function_403(&(Local_641[415]));
				Function_403(&(Local_641[515]));
				Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
				Function_227(&Local_553);
				iLocal_545 = 6;
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[1], Function_246(bLocal_544), 2);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_586 = 0;
				if (!IS_OBJECT_VALID(&bLocal_956))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_956 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_396, "HOME02SON01_CAMERA_FOCUS", &bLocal_865, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&bLocal_956))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&bLocal_956, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
						SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				if (!iLocal_880)
				{
					Function_470("Home02_s1_PiksUpScent", 0);
				}
				else
				{
					Function_470("Home02s1_PiksUpScent", 0);
				}
				Function_227(&Local_553);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_276(&Local_553) <= 5.0f)
			{
				if (iLocal_880)
				{
					Function_524();
				}
				TASK_CLEAR(&bLocal_865);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
				if (iLocal_565[0] != 0 || iLocal_880)
				{
					Function_388("home02_son01_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				if (iLocal_880)
				{
					Function_523();
				}
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_368(&iLocal_561, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_584, 0, &cLocal_396, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
						SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_865, "Dog_return", "Dog_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_865) && IS_ACTOR_VALID(&bLocal_549))
			{
				if (!iLocal_880)
				{
					Function_517();
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_479();
				}
			}
			if (!iLocal_880)
			{
				Function_483(&bLocal_4 + 1192, &bLocal_4 + 1160);
			}
			else
			{
				Function_483(&bLocal_4 + 1200, &bLocal_4 + 1168);
			}
			if (Function_392(0))
			{
				if (!DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &bLocal_865, 40.0f, 15.0f, 25.0f);
					DECOR_SET_BOOL(&cLocal_396, "CompEmerTele", 1);
				}
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					Local_927 = Vector(3.0f, 0.0f, 10.0f);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, &bLocal_865, &Local_927, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			else if (DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
				DECOR_REMOVE(&cLocal_396, "CompEmerTele");
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_865, "Warn_Fight") || Function_477(&bLocal_4 + 184, 1.0f, 120.0f, 1, 1))
			{
				if (iLocal_878)
				{
				}
				else
				{
					iLocal_878 = 1;
					iLocal_882 = 1;
				}
				Function_323(&uLocal_831, 8, 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
				Function_248();
				Function_227(&Local_553);
				iLocal_545 = 9;
			}
			break;
		
		case 0x00000009:
			iLocal_586 = 1;
			if (!iLocal_880)
			{
				if (iLocal_882)
				{
					Function_516();
				}
				else
				{
					Function_515();
				}
			}
			else
			{
				Function_514();
			}
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_865, 2);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_865, 1);
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
			DECOR_REMOVE(&cLocal_396, "CompEmerTele");
			Local_910[02] = Vector(-3.0f, 0.0f, 6.0f);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865, &Global_54076, 60.0f, 10.0f, 50.0f);
			bLocal_856 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 5.0f, 0, 0);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 5.0f, 4);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
			TASK_SEQUENCE_RELEASE(bLocal_856, 1);
			TASK_PRIORITY_SET(&bLocal_865, true);
			iLocal_857 = 0;
			Function_227(&Local_553);
			iLocal_545 = 10;
			break;
		
		case 0x0000000A:
			if (Function_276(&Local_553) <= 5.0f)
			{
				Function_388("home02_son01_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				if (!iLocal_880)
				{
					MEMORY_ALLOW_SHOOTING(&bLocal_549, false);
					ACTOR_START_FORCE_HOLSTER(&bLocal_549, 1, 0);
					Function_513();
				}
				else
				{
					Function_512();
				}
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_392(0))
			{
				if (GET_TASK_STATUS(&bLocal_549, 67) != 1)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_549, &Global_54076, 7.0f, 4);
				}
			}
			if (!iLocal_880)
			{
				if (iLocal_879)
				{
					Function_469(1, 0);
				}
			}
			else
			{
				Function_469(1, 1);
			}
			if (SQUAD_IS_VALID(&bLocal_4 + 184))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 184) <= 1)
				{
					MEMORY_ALLOW_SHOOTING(&bLocal_549, true);
					ACTOR_END_FORCE_HOLSTER(&bLocal_549);
					Function_323(&uLocal_831, 3, 0, 4294967295, 4294967295);
					Function_248();
					Function_467(&bLocal_4 + 184);
					Function_227(&Local_553);
					iLocal_545 = 12;
				}
				else if (iLocal_879)
				{
					Function_323(&uLocal_831, 27, 0, 4294967295, 4294967295);
					if (!Function_477(&bLocal_4 + 184, 1.0f, 120.0f, 1, 1) && !Function_468(&Global_54076, &bLocal_4 + 184, 90.0f))
					{
						if (iLocal_880)
						{
							Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
							iLocal_878 = 0;
							MEMORY_ALLOW_SHOOTING(&bLocal_549, true);
							ACTOR_END_FORCE_HOLSTER(&bLocal_549);
							Function_467(&bLocal_4 + 184);
							Function_248();
							Function_227(&Local_553);
							iLocal_545 = 18;
						}
						else
						{
							Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
							STREAMING_UNLOAD_BOUNDS();
							iLocal_880 = 1;
							iLocal_879 = 0;
							iLocal_878 = 0;
							Function_511();
							Function_524();
							MEMORY_ALLOW_SHOOTING(&bLocal_549, true);
							ACTOR_END_FORCE_HOLSTER(&bLocal_549);
							iLocal_857 = 0;
							Function_467(&bLocal_4 + 184);
							Function_248();
							Function_227(&Local_553);
							iLocal_545 = 6;
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (!IS_OBJECT_VALID(&(uLocal_888[0])))
			{
				uLocal_888[0] = DECOR_GET_OBJECT(&Global_54076, "Skin1");
				if (IS_OBJECT_VALID(&(uLocal_888[0])))
				{
					uLocal_896 = &uLocal_888[0];
					GET_OBJECT_POSITION(&(uLocal_888[0]), &Local_930);
					PRINTVECTOR(Local_930);
					PRINTNL();
					Local_927 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(1.0f, 0.0f, -2.0f), Local_930, StackVal);
					PRINTVECTOR(Local_927);
					PRINTNL();
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_865);
					Function_443(0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_927, 7.0f, 4);
					TASK_DRAW_HOLSTER_WEAPON(0, 0);
					TASK_DISMOUNT(0, 1);
					TASK_GO_NEAR_COORD(0, &Local_927, 3.0f, 1);
					TASK_FACE_COORD(0, &Local_930, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
					Function_227(&Local_553);
					iLocal_545 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			iLocal_881 = 1;
			iLocal_878 = 0;
			iLocal_586 = 0;
			if (IS_OBJECT_VALID(&uLocal_896))
			{
				ADD_BLIP_FOR_OBJECT(&uLocal_896, 330, 0f, 2, 0);
			}
			Function_388("home02_son01_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_510();
			Function_227(&Local_553);
			iLocal_545 = 14;
			break;
		
		case 0x0000000E:
			if (GET_TASK_STATUS(&bLocal_549, 6) == 1)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/pre");
				}
			}
			else if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			if (Function_276(&Local_553) <= 5.0f)
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&uLocal_896), "UseCase", 1);
				Function_509();
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_549, "Son_return", "Son_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			if (GET_TASK_STATUS(&bLocal_549, 6) == 1)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/pre");
				}
			}
			else if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (Function_508(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&Global_54076))), "skin_animal"))
				{
					Function_248();
					Function_282();
					Function_227(&Local_553);
					iLocal_545 = 16;
				}
			}
			break;
		
		case 0x00000010:
			if (Function_276(&Local_553) <= 2.0f)
			{
				Function_227(&Local_553);
				iLocal_545 = 17;
			}
			break;
		
		case 0x00000011:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
				}
				Function_507();
				Function_227(&Local_553);
				iLocal_545 = 18;
			}
			break;
		
		case 0x00000012:
			Function_392(1);
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			if (Function_276(&Local_553) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&bLocal_4 + 184))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 184) == 1)
					{
						iLocal_877 = 1;
					}
				}
				Function_227(&Local_553);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
			TASK_CLEAR(&bLocal_865);
			if (DECOR_CHECK_EXIST(&Global_54076, "Skin1"))
			{
				DECOR_REMOVE(&Global_54076, "Skin1");
			}
			bLocal_861 = false;
			while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 184))
			{
				bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 184, bLocal_861);
				if (IS_ACTOR_ALIVE(&bLocal_871))
				{
					SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_871, &bLocal_549, 1);
					SET_ACTOR_PERMANENT(&bLocal_871, 0);
				}
				bLocal_861++;
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			STREAMING_UNLOAD_BOUNDS();
			iLocal_565[1] = 1;
			Function_227(&Local_553);
			bLocal_544 = 2;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_507() //Position: 0x1F392 / 127890
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_FinishCuttin", "Home02_s1_FinishCuttin", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_508(char* cParam0) //Position: 0x1F3E7 / 127975
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_509() //Position: 0x1F414 / 128020
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_TalkApprochElk_v1_AA", "Home02_s1_TalkApprochElk_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_TalkApprochElk_v1_AB", "Home02_s1_TalkApprochElk_v1_AB", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_2470", "", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_TalkApprochElk_v1_AC", "Home02_s1_TalkApprochElk_v1_AC", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_TalkApprochElk_v1_AD", "Home02_s1_TalkApprochElk_v1_AD", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510() //Position: 0x1F579 / 128377
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_CollectMeat", "Home02_s1_CollectMeat", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1F5CC / 128460
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JonMisses1stElk", "Home02_s1_JonMisses1stElk", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1F627 / 128551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_RidesAfter2_v1_AA", "Home02_s1_RidesAfter2_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_RidesAfter2_v1_AB", "Home02_s1_RidesAfter2_v1_AB", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1F6CB / 128715
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_RidesOff1stElk_v1_AA", "Home02_s1_RidesOff1stElk_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_RidesOff1stElk_v1_AB", "Home02_s1_RidesOff1stElk_v1_AB", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1F77B / 128891
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_FoundAnother", "Home02_s1_FoundAnother", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1F7D0 / 128976
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_DogSignals", "Home02_s1_DogSignals", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1F821 / 129057
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_SpotsElkB4Dog", "Home02_s1_SpotsElkB4Dog", 1, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_517() //Position: 0x1F878 / 129144
{
	Function_366();
	if (iLocal_985)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_985 = 0;
				Function_365("Home02_s1_RidesBakJak", 0);
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_278(&iLocal_976))
		{
			Function_364(&iLocal_976);
		}
	}
	else
	{
		if (iLocal_984)
		{
			iLocal_984 = 0;
		}
		if (!Function_278(&iLocal_976))
		{
			Function_227(&iLocal_976);
		}
		if (Function_276(&iLocal_976) < 4.0f)
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 12.0f))
				{
					switch (iLocal_986)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_522();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_521();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_520();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 3;
								}
							}
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_984 = 1;
								Function_519();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 5;
								}
							}
							break;
						
						case 0x00000063:
							return 1;
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_518();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_986 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return 0;
}

void Function_518() //Position: 0x1F9D4 / 129492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjFollowDog_v1_AA", "Home02_s1_JjFollowDog_v1_AA", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjFollowDog_v1_AB", "Home02_s1_JjFollowDog_v1_AB", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1FA78 / 129656
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v4_AA1", "Home02_s1_JjElkBanter_v4_AA1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v4_AA2", "Home02_s1_JjElkBanter_v4_AA2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v4_AB1", "Home02_s1_JjElkBanter_v4_AB1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v4_AB2", "Home02_s1_JjElkBanter_v4_AB2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v4_AC", "Home02_s1_JjElkBanter_v4_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v4_AD", "Home02_s1_JjElkBanter_v4_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v4_AE", "Home02_s1_JjElkBanter_v4_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v4_AF", "Home02_s1_JjElkBanter_v4_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v4_AG", "Home02_s1_JjElkBanter_v4_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v4_AH", "Home02_s1_JjElkBanter_v4_AH", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_520() //Position: 0x1FD4C / 130380
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v3_AA", "Home02_s1_JjElkBanter_v3_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v3_AB", "Home02_s1_JjElkBanter_v3_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v3_AC", "Home02_s1_JjElkBanter_v3_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v3_AD", "Home02_s1_JjElkBanter_v3_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v3_AE", "Home02_s1_JjElkBanter_v3_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v3_AF", "Home02_s1_JjElkBanter_v3_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v3_AG", "Home02_s1_JjElkBanter_v3_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v3_AH", "Home02_s1_JjElkBanter_v3_AH", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_521() //Position: 0x1FF8E / 130958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v2_AA", "Home02_s1_JjElkBanter_v2_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v2_AB", "Home02_s1_JjElkBanter_v2_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v2_AC1", "Home02_s1_JjElkBanter_v2_AC1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v2_AC2", "Home02_s1_JjElkBanter_v2_AC2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v2_AD", "Home02_s1_JjElkBanter_v2_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v2_AE", "Home02_s1_JjElkBanter_v2_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_JjElkBanter_v2_AF", "Home02_s1_JjElkBanter_v2_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v2_AG1", "Home02_s1_JjElkBanter_v2_AG1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_JjElkBanter_v2_AG2", "Home02_s1_JjElkBanter_v2_AG2", 1, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x20239 / 131641
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_TalkToElk_v1_AA", "Home02_s1_TalkToElk_v1_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_TalkToElk_v1_AB", "Home02_s1_TalkToElk_v1_AB", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x202D5 / 131797
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_HuntOtherBant_v1_AA", "Home02_s1_HuntOtherBant_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_HuntOtherBant_v1_AB", "Home02_s1_HuntOtherBant_v1_AB", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_HuntOtherBant_v1_AC", "Home02_s1_HuntOtherBant_v1_AC", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_HuntOtherBant_v1_AD", "Home02_s1_HuntOtherBant_v1_AD", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s1_HuntOtherBant_v1_AE", "Home02_s1_HuntOtherBant_v1_AE", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x2045C / 132188
{
	if (SQUAD_IS_VALID(&bLocal_4 + 184))
	{
		if (!DECOR_GET_BOOL(&bLocal_4 + 184, "ElkSquadTeleported1"))
		{
			Function_492(&bLocal_4 + 184, &bLocal_4 + 1168, 1, 6.0f, 3.0f, 1);
			bLocal_861 = false;
			while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 184))
			{
				bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 184, bLocal_861);
				if (IS_ACTOR_ALIVE(&bLocal_871))
				{
					Function_83(&bLocal_871, &Local_945);
					if (FIND_GROUND_INTERSECTION(&Local_945, 20.0f, &Local_948, &uLocal_951))
					{
						TELEPORT_ACTOR(&bLocal_871, &Local_948, 1, 1, 1);
					}
				}
				bLocal_861++;
			}
			SQUAD_GOALS_CLEAR(&bLocal_4 + 184);
			Function_491(&bLocal_4 + 184);
			Function_490(&bLocal_4 + 184);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 440, -1.0f);
			Function_489(&bLocal_4 + 184, &bLocal_4 + 440, 2, 0);
			DECOR_SET_BOOL(&bLocal_4 + 184, "ElkSquadTeleported1", 1);
		}
	}
	return;
}

bool Function_525() //Position: 0x20561 / 132449
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 712[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 712[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	else if (!iLocal_565[0])
	{
		Function_341(&bLocal_865, &bLocal_4 + 712[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 184))
	{
		Function_526();
		if (SQUAD_IS_VALID(&bLocal_4 + 184))
		{
			Function_339(&bLocal_4 + 184, 0);
			Function_461(&bLocal_4 + 184, 1);
			Function_337(&bLocal_4 + 184, 1, 1, 1);
			Function_444(&bLocal_4 + 184, &bLocal_549);
			Function_497(&bLocal_4 + 184, "NonActiveGringo", 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 432, -1.0f);
		}
	}
	if ((IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152)) && SQUAD_IS_VALID(&bLocal_4 + 184))
	{
		return 1;
	}
	return 0;
}

void Function_526() //Position: 0x20734 / 132916
{
	(&bLocal_4 + 184) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Elk01"));
	*(&bLocal_4 + 160[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nELK_01_01", 1111, Vector(-851,9999f, 186,7455f, 1300f), Vector(0.0f, 54,73498f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 160[02], &bLocal_4 + 184);
	DECOR_SET_BOOL(&bLocal_4 + 160[02], "Home02_S1_Skin1", 1);
	return;
}

void Function_527() //Position: 0x207B4 / 133044
{
	Function_505(&bLocal_4 + 184);
	if (SQUAD_IS_VALID(&bLocal_4 + 184))
	{
		switch (iLocal_859)
		{
			case 0x00000000:
				iLocal_859++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&bLocal_4 + 184);
				Function_491(&bLocal_4 + 184);
				Function_490(&bLocal_4 + 184);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 432, -1.0f);
				Function_489(&bLocal_4 + 184, &bLocal_4 + 432, 2, 0);
				bLocal_861 = false;
				while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 184))
				{
					bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 184, bLocal_861);
					if (IS_ACTOR_ALIVE(&bLocal_871))
					{
						SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_871, &bLocal_549, 0);
						SET_ACTOR_PERMANENT(&bLocal_871, 1);
					}
					bLocal_861++;
				}
				iLocal_859++;
				break;
			
			case 0x00000002:
				if (iLocal_878)
				{
					iLocal_859++;
				}
				break;
			
			case 0x00000003:
				SQUAD_GOALS_CLEAR(&bLocal_4 + 184);
				Function_491(&bLocal_4 + 184);
				Function_490(&bLocal_4 + 184);
				Function_503(&bLocal_4 + 184, &bLocal_4 + 320);
				Function_502(&bLocal_4 + 184, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				bLocal_861 = false;
				while (bLocal_861 <= SQUAD_GET_SIZE(&bLocal_4 + 184))
				{
					bLocal_871 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_4 + 184, bLocal_861);
					if (IS_ACTOR_ALIVE(&bLocal_871))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_871)))
						{
							SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_871), "H2S1_ElkBlip");
						}
					}
					bLocal_861++;
				}
				if (!iLocal_880)
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 432, -1.0f);
					Function_489(&bLocal_4 + 184, &bLocal_4 + 432, 2, 0);
				}
				else
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 440, -1.0f);
					Function_489(&bLocal_4 + 184, &bLocal_4 + 440, 2, 0);
				}
				Function_227(&iLocal_906);
				iLocal_859++;
				break;
			
			case 0x00000004:
				if ((IS_ACTOR_SHOOTING(&Global_54076) || IS_ACTOR_SHOOTING(&bLocal_549)) || Function_468(&Global_54076, &bLocal_4 + 184, 50.0f))
				{
					Function_227(&iLocal_906);
					iLocal_859++;
				}
				break;
			
			case 0x00000005:
				if (iLocal_881)
				{
					iLocal_859++;
				}
				else if (!iLocal_878)
				{
					iLocal_859 = 2;
				}
				if (Function_276(&iLocal_906) <= 1.0f)
				{
					iLocal_879 = 1;
					if (!iLocal_880)
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1528, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1536, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1544, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1552, 2);
						Function_77(&bLocal_860, Function_500(4));
						Function_77(&bLocal_860, Function_500(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_860, &bLocal_4 + 1528, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_490(&bLocal_4 + 184);
						SQUAD_GOALS_CLEAR(&bLocal_4 + 184);
						Function_491(&bLocal_4 + 184);
						SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 1, 0);
					}
					else
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1528, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1536, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1544, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, &bLocal_4 + 1552, 2);
						Function_77(&bLocal_860, Function_500(4));
						Function_77(&bLocal_860, Function_500(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_860, &bLocal_4 + 1536, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_490(&bLocal_4 + 184);
						SQUAD_GOALS_CLEAR(&bLocal_4 + 184);
						Function_491(&bLocal_4 + 184);
						SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 184, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 1, 0);
					}
					Function_227(&iLocal_906);
					iLocal_859++;
				}
				break;
			
			case 0x00000006:
				if (iLocal_881)
				{
					iLocal_859++;
				}
				else if (!iLocal_878)
				{
					iLocal_859 = 2;
				}
				break;
			
			case 0x00000007:
				iLocal_859++;
				break;
			}
	}
	return;
}

void Function_528() //Position: 0x20B8F / 134031
{
	Function_356(&cLocal_396);
	Function_532();
	if (((iLocal_545 < 5 && iLocal_545 > 105) && !iLocal_545 != 104) && !iLocal_545 != 103)
	{
		Function_417();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_352(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			iLocal_864 = 0;
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_551, true);
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
				MEMORY_PREFER_RIDING(&bLocal_549, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				TASK_PRIORITY_SET(&bLocal_549, true);
			}
			if (IS_ACTOR_VALID(&bLocal_867))
			{
				TASK_STAND_STILL(&bLocal_867, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_867, 2);
			}
			if (IS_ACTOR_VALID(&bLocal_869))
			{
				TASK_STAND_STILL(&bLocal_869, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_869, 2);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_344();
			bLocal_546 = Global_46914[1];
			if (!Function_343(bLocal_546))
			{
				Function_342(&Local_398);
			}
			Function_341(&Global_54076, &bLocal_4 + 632[0], 1, 1, 1);
			Function_227(&Local_553);
			iLocal_545 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_546) || bLocal_546 != 4294967295))
				{
					Function_227(&Local_553);
					iLocal_545 = 2;
				}
			}
			else
			{
				Function_227(&Local_553);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_531())
			{
				iLocal_862 = Function_413();
				iLocal_858 = 0;
				iLocal_857 = 0;
				iLocal_859 = 0;
				iLocal_878 = 0;
				iLocal_880 = 0;
				iLocal_879 = 0;
				iLocal_881 = 0;
				Function_323(&uLocal_831, 3, 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				}
				if (Function_288(&Local_398))
				{
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						Function_341(&bLocal_549, &bLocal_4 + 632[1], 0, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_GRINGO_VALID(&(uLocal_960[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_960[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_551, &(uLocal_960[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_551, true);
					}
					else
					{
						Function_341(&bLocal_551, &bLocal_4 + 632[2], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_873))
				{
					if (IS_GRINGO_VALID(&(uLocal_960[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_873, GET_OBJECT_FROM_GRINGO(&(uLocal_960[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_873, &(uLocal_960[1]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_873, true);
					}
					else
					{
						Function_341(&bLocal_873, &bLocal_4 + 632[3], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					Function_341(&bLocal_865, &bLocal_4 + 632[4], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_865, true);
				}
				Function_231(12, 0, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
				MEMORY_PREFER_RIDING(&bLocal_549, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_873);
				Function_227(&iLocal_898);
				iLocal_586 = 0;
				Function_408(&(Local_641[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
				Function_408(&(Local_641[115]), &bLocal_865, "Dog", 0, 0x5f5e100, 1);
				Function_404(&(Local_641[115]), 1024);
				Function_408(&(Local_641[215]), &bLocal_869, "Uncle", 0, 0x5f5e100, 1);
				Function_408(&(Local_641[315]), &bLocal_867, "Wife", 0, 0x5f5e100, 1);
				Function_403(&(Local_641[415]));
				Function_403(&(Local_641[515]));
				Function_227(&Local_553);
				iLocal_545 = 4;
				Function_243(bLocal_544);
				Function_395(StackVal, Function_243(bLocal_544), bLocal_544, Global_46754[0], Function_246(bLocal_544), 0);
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				GET_OBJECT_POSITION(&bLocal_4 + 632[2], &Local_945);
				SET_GAME_CAMERA_DRIFTZ(-2,5f);
				ENABLE_GAME_CAMERA_FOCUS(Local_945, -1.0f, 6, 1, 1, 0);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!iLocal_883)
			{
				TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "son_crouchGetup"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_549, 0);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_549, "son_crouchGetup", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_549, "son_crouchGetup/getup");
				}
				iLocal_883 = 1;
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					SET_ACTOR_HEALTH(&bLocal_551, GET_ACTOR_MAX_HEALTH(&bLocal_551));
				}
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				if (iLocal_862 > 1)
				{
					Function_341(&bLocal_549, &bLocal_4 + 632[1], 0, 1, 1);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_865))
			{
				SET_ACTOR_HEALTH(&bLocal_865, GET_ACTOR_MAX_HEALTH(&bLocal_865));
				if (iLocal_862 > 1)
				{
					Function_341(&bLocal_865, &bLocal_4 + 632[4], 1, 1, 1);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_867))
			{
				SET_ACTOR_HEALTH(&bLocal_867, 50.0f);
			}
			if (IS_ACTOR_VALID(&bLocal_869))
			{
				SET_ACTOR_HEALTH(&bLocal_869, 50.0f);
			}
			Function_227(&Local_553);
			iLocal_545 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_867))
			{
				TASK_CLEAR(&bLocal_867);
			}
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_549, true);
			if (IS_ACTOR_VALID(&bLocal_869))
			{
				TASK_CLEAR(&bLocal_869);
			}
			Function_227(&Local_553);
			iLocal_545 = 104;
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_227(&Local_553);
			iLocal_545 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_227(&Local_553);
				iLocal_545 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_530())
			{
				Function_392(1);
			}
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (!IS_BLIP_VALID(&bLocal_875))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_551, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				DECOR_REMOVE(&bLocal_865, "Frank");
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
				bLocal_856 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
				TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				TASK_PRIORITY_SET(&bLocal_865, true);
				Function_227(&Local_553);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_530())
			{
				Function_392(1);
			}
			if (Function_276(&Local_553) <= 5.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_549);
				Function_388("home02_son01_obj00", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_551, "Horse_return", "Horse_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			if (Function_530())
			{
				if (Function_392(1))
				{
					if (!IS_ACTOR_RIDING(&Global_54076))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 15.0f))
						{
							if (Function_276(&iLocal_898) < 10.0f)
							{
								Function_365("Home02_s1_NoGetOnHors", 0);
								Function_227(&iLocal_898);
							}
						}
					}
					if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
					{
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, 2);
						AI_RIDING_SET_ATTRIBUTE(&bLocal_549, 2, 0,15f);
						bLocal_856 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &bLocal_4 + 1328, 3.0f, 4);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 7.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
						TASK_SEQUENCE_RELEASE(bLocal_856, 1);
						TASK_PRIORITY_SET(&bLocal_549, true);
						FORCE_LOOK_AT_ACTOR(&bLocal_549, &Global_54076, 3212836864);
						Function_227(&iLocal_898);
					}
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (IS_ACTOR_RIDING(&bLocal_549))
				{
					if (IS_BLIP_VALID(&bLocal_875))
					{
						REMOVE_BLIP(&bLocal_875);
					}
					STOP_FORCE_LOOK_AT_COORD(&bLocal_549);
					TASK_CLEAR(&bLocal_549);
					Function_248();
					Function_227(&Local_553);
					iLocal_545 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(&bLocal_956))
			{
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					bLocal_956 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_396, "HOME02SON01_CAMERA_FOCUS", &bLocal_865, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
					if (IS_OBJECT_VALID(&bLocal_956))
					{
						SET_CAMERA_FOCUS_PROMPT_ENABLED(&bLocal_956, 0);
					}
				}
			}
			if (!IS_BLIP_VALID(&bLocal_875))
			{
				if (IS_ACTOR_VALID(&bLocal_865))
				{
					bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
					SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
					if (IS_BLIP_VALID(&bLocal_875))
					{
					}
				}
			}
			bLocal_856 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, &bLocal_865, 0, 3212836864);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bLocal_865, &bLocal_4 + 1504, 8.0f, 1, 3.0f);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
			TASK_SEQUENCE_RELEASE(bLocal_856, 1);
			TASK_PRIORITY_SET(&bLocal_549, true);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
			GET_OBJECT_POSITION(&bLocal_4 + 1272, &(Local_910[02]));
			bLocal_856 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(0, &(Local_910[02]), 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &bLocal_4 + 1504, 3, 0, 0, 1, false);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
			TASK_SEQUENCE_RELEASE(bLocal_856, 1);
			TASK_PRIORITY_SET(&bLocal_865, true);
			Function_323(&uLocal_831, 11, 0, 4294967295, 4294967295);
			Function_383();
			Function_529();
			Function_227(&Local_553);
			iLocal_545 = 10;
			break;
		
		case 0x0000000A:
			if (Function_276(&Local_553) <= 5.0f)
			{
				DECOR_SET_BOOL(&bLocal_865, "Frank", 1);
				Function_388("home02_son01_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(&Local_553);
				Function_227(&iLocal_557);
				Function_227(&iLocal_561);
				iLocal_545 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_368(&iLocal_561, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_584, 0, &cLocal_396, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
						SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_865, "Dog_return", "Dog_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			}
			if (Function_392(1))
			{
				if (IS_VOLUME_VALID(&bLocal_4 + 600))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_549, &bLocal_4 + 600))
					{
						HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&bLocal_873, 1);
						DESTROY_VOLUME(&bLocal_4 + 600);
					}
				}
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bLocal_865, &bLocal_4 + 1504, 8.0f, 1, 3.0f);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_865) && IS_ACTOR_VALID(&bLocal_549))
			{
				if (Function_517())
				{
					Function_479();
				}
			}
			if (!Function_484(&bLocal_865, &Global_54076, 60.0f) || !IS_ACTOR_RIDING(&Global_54076))
			{
				if (!GET_TASK_STATUS(&bLocal_865, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_865, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_865, 0) != 1)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_865);
				bLocal_856 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &bLocal_4 + 1504, 3, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
				TASK_SEQUENCE_RELEASE(bLocal_856, 1);
				TASK_PRIORITY_SET(&bLocal_865, true);
			}
			if (GET_TASK_STATUS(&bLocal_865, 6) == 1)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_865, 20.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_470("Home02_s1_ShoutsEncAtDog", 0);
					}
					Function_248();
					Function_227(&Local_553);
					iLocal_545 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			TASK_CLEAR(&bLocal_549);
			TASK_CLEAR(&bLocal_865);
			Function_323(&uLocal_831, 12, 0, 4294967295, 4294967295);
			Function_227(&Local_553);
			iLocal_545 = 13;
			break;
		
		case 0x0000000D:
			if (Function_368(&iLocal_561, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_584, 0, &cLocal_396, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_875))
				{
					REMOVE_BLIP(&bLocal_875);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_875))
				{
					if (IS_ACTOR_VALID(&bLocal_865))
					{
						bLocal_875 = ADD_BLIP_FOR_ACTOR(&bLocal_865, 325, 0, 2, 0);
						SET_BLIP_NAME(&bLocal_875, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&bLocal_875))
						{
						}
					}
				}
				Function_424(&iLocal_561, 60.0f, 200.0f, &bLocal_865, "Dog_return", "Dog_abandoned", &bLocal_584, 0, 0, 0, 325, 1);
			}
			if (Function_392(1))
			{
				if (!DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &bLocal_865, 40.0f, 15.0f, 25.0f);
					DECOR_SET_BOOL(&cLocal_396, "CompEmerTele", 1);
				}
				if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&bLocal_873, 0);
					Local_927 = Vector(5.0f, 0.0f, 8.0f);
					bLocal_856 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, &bLocal_865, &Local_927, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_856);
					TASK_SEQUENCE_RELEASE(bLocal_856, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			else if (DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
				DECOR_REMOVE(&cLocal_396, "CompEmerTele");
			}
			if (IS_ACTOR_VALID(&bLocal_865) && IS_ACTOR_VALID(&bLocal_549))
			{
				if (Function_517())
				{
					Function_479();
				}
			}
			if (IS_VOLUME_VALID(&bLocal_4 + 584))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_865, &bLocal_4 + 584))
				{
					Function_227(&iLocal_902);
					DESTROY_VOLUME(&bLocal_4 + 584);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_865, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&bLocal_4 + 592))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_865, &bLocal_4 + 592))
				{
					Function_227(&iLocal_902);
					DESTROY_VOLUME(&bLocal_4 + 592);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_865, 8, "SNIFF");
				}
			}
			if (Function_278(&iLocal_902))
			{
				if (Function_276(&iLocal_902) < 5.0f)
				{
					Function_364(&iLocal_902);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_865);
				}
			}
			if (!Function_484(&bLocal_865, &Global_54076, 60.0f) || !IS_ACTOR_RIDING(&Global_54076))
			{
				if (!GET_TASK_STATUS(&bLocal_865, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_865, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_865, 0) != 1)
			{
				bLocal_856 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(&bLocal_4 + 584))
				{
					TASK_GO_NEAR_OBJECT(0, &bLocal_4 + 1360[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&bLocal_4 + 592))
				{
					TASK_GO_NEAR_OBJECT(0, &bLocal_4 + 1408[0], 3.0f, 3, 1, 1);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_865, bLocal_856);
				TASK_SEQUENCE_RELEASE(bLocal_856, 1);
			}
			if (GET_TASK_STATUS(&bLocal_865, 6) == 1)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_865, 20.0f))
				{
					TASK_GO_NEAR_OBJECT(&bLocal_865, &bLocal_4 + 1192, 5.0f, 4, 1, 1);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_865, 8, "SNIFF");
					Function_248();
					Function_227(&Local_553);
					if (DECOR_CHECK_EXIST(&cLocal_396, "CompEmerTele"))
					{
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
						DECOR_REMOVE(&cLocal_396, "CompEmerTele");
					}
					iLocal_545 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_565[0] = 1;
			Function_227(&Local_553);
			bLocal_544 = true;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_529() //Position: 0x21BF2 / 138226
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s1_GoHunt", "Home02_s1_GoHunt", 1, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_530() //Position: 0x21C3B / 138299
{
	if (GET_TASK_STATUS(&bLocal_549, 6) == 1)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_549, "son_crouchgetup"))
		{
			return 0;
		}
		return 1;
	}
	return 1;
	return 0;
}

bool Function_531() //Position: 0x21C76 / 138358
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		Function_340();
		if (SQUAD_IS_VALID(&bLocal_4 + 152))
		{
			Function_339(&bLocal_4 + 152, 0);
			Function_338(&bLocal_4 + 152, 3);
			Function_337(&bLocal_4 + 152, 0, 0, 0);
			bLocal_873 = &bLocal_4 + 128[02];
			if (IS_ACTOR_VALID(&bLocal_873))
			{
				Function_341(&bLocal_873, &bLocal_4 + 632[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_873);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_873);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_865))
	{
		Function_341(&bLocal_865, &bLocal_4 + 632[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_865))
		{
			SET_ACTOR_FACTION(&bLocal_865, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_865, false);
			SET_CRIPPLE_ENABLE(&bLocal_865, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_865, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_865, 1);
			Function_307(&bLocal_865, 0, 0, 0, 1, 0, 1);
			DECOR_SET_BOOL(&bLocal_865, "Frank", 0);
			TASK_STAND_STILL(&bLocal_865, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_865, true);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_865) && SQUAD_IS_VALID(&bLocal_4 + 152))
	{
		GET_OBJECT_POSITION(&bLocal_4 + 632[7], &Local_945);
		GET_OBJECT_ORIENTATION(&bLocal_4 + 632[7], &Local_948);
		CREATE_PROP_IN_LAYOUT(&cLocal_396, "bookReading01x", "p_gen_bookReading01x", Local_945, Local_948, 1);
		return 1;
	}
	return 0;
}

void Function_532() //Position: 0x21E03 / 138755
{
	switch (iLocal_864)
	{
		case 0x00000000:
			iLocal_864++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(&(uLocal_960[0])))
			{
				uLocal_960[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &bLocal_4 + 1280, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(&(uLocal_960[0])))
			{
				iLocal_864++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(&(uLocal_960[1])))
			{
				uLocal_960[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &bLocal_4 + 1304, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(&(uLocal_960[1])))
			{
				iLocal_864++;
			}
			break;
		
		case 0x00000003:
			Function_244(GET_OBJECT_FROM_GRINGO(&(uLocal_960[0])));
			Function_533(StackVal, Function_244(GET_OBJECT_FROM_GRINGO(&(uLocal_960[0]))), 0, 0);
			Function_244(GET_OBJECT_FROM_GRINGO(&(uLocal_960[1])));
			Function_533(StackVal, Function_244(GET_OBJECT_FROM_GRINGO(&(uLocal_960[1]))), 0, 0);
			iLocal_864++;
			break;
		
		case 0x00000004:
			if (bLocal_544 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_GRINGO_VALID(&(uLocal_960[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_960[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_551, &(uLocal_960[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_551, true);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_873))
				{
					if (IS_GRINGO_VALID(&(uLocal_960[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_873, GET_OBJECT_FROM_GRINGO(&(uLocal_960[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_873, &(uLocal_960[1]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_873, true);
					}
				}
			}
			else if (bLocal_544 == 101)
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_GRINGO_VALID(&(uLocal_960[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_960[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_551, &(uLocal_960[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_551, true);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_873))
				{
					if (IS_GRINGO_VALID(&(uLocal_960[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_873, GET_OBJECT_FROM_GRINGO(&(uLocal_960[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_873, &(uLocal_960[1]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_873, true);
					}
				}
			}
			iLocal_864++;
			break;
		
		case 0x00000005:
			iLocal_864++;
			break;
	}
	return;
}

int Function_533(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x22089 / 139401
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_535(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_534(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_534(&(uVar0[1]), "UseCase1"));
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

var Function_534(var uParam0, int iParam1) //Position: 0x22206 / 139782
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_535(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x22215 / 139797
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_13())
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

void Function_536() //Position: 0x2235F / 140127
{
	switch (iLocal_545)
	{
		case 0x00000006:
			Function_547(&Local_398, 1);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			cLocal_396 = CREATE_LAYOUT("home02_son01_DynamicLayout");
			Function_546();
			iLocal_545 = 7;
			break;
		
		case 0x00000007:
			if (Function_544())
			{
				if (!IS_LAYOUTREF_VALID(&bLocal_4))
				{
				}
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			Function_341(&Global_54076, &bLocal_4 + 632[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				TASK_CLEAR(&bLocal_549);
				TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_549, true);
				Function_341(&bLocal_549, &bLocal_4 + 632[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				TASK_CLEAR(&bLocal_551);
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_551, true);
				Function_341(&bLocal_551, &bLocal_4 + 632[2], 1, 1, 1);
			}
			iLocal_545 = 9;
			break;
		
		case 0x00000009:
			if (Function_279("$/cutscene/son_01/son_01", &iLocal_532, &Local_398, &bLocal_544, 76918, 76733, 74549, 74247, 73946, 57473, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_545 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&bLocal_4))
			{
				uLocal_547 = CREATE_OBJECT_ITERATOR(&bLocal_4);
			}
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 280[2]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 280[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&bLocal_4 + 280[2], 15);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_231(12, 1, 1);
			SET_CRIPPLE_ENABLE(&bLocal_549, 0);
			SET_ACTOR_FACTION(&bLocal_549, 20);
			TASK_PRIORITY_SET(&bLocal_549, true);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_549, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_549, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			if (!iLocal_885)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&bLocal_549, 23, true);
				ACTOR_FORCE_WEAPON_RENDER(&bLocal_549, 0, 1);
				if (!ACTOR_HAS_WEAPON(&bLocal_549, 22))
				{
					GIVE_WEAPON_TO_ACTOR(&bLocal_549, 22, false, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON(&bLocal_549, 42))
				{
					GIVE_WEAPON_TO_ACTOR(&bLocal_549, 42, false, 1, 1);
				}
				if (ACTOR_HAS_WEAPON(&bLocal_549, 42))
				{
					if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(&bLocal_549, 42))
					{
						ACTOR_SET_NEXT_WEAPON(&bLocal_549, 42);
					}
				}
				MAKE_ACTOR_READY_FOR_ACTION(&bLocal_549, 1);
				iLocal_885 = 1;
			}
			RESET_ACTOR_GAITS(&bLocal_551, 0);
			TASK_PRIORITY_SET(&bLocal_551, true);
			TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_551, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_551, GET_ACTOR_MAX_HEALTH(&bLocal_551));
			SET_ALLOW_RIDE_BY_AI(&bLocal_551, 0);
			Function_543(&iLocal_898);
			Function_543(&iLocal_902);
			Function_543(&iLocal_906);
			Function_541(&uLocal_587, &cLocal_396);
			Function_543(&Local_553);
			Function_543(&iLocal_557);
			Function_543(&iLocal_561);
			bLocal_544 = false;
			iLocal_545 = 0;
			Function_538(&Local_398, &bLocal_544, &iLocal_545);
			Function_537(StackVal, StackVal, StackVal, StackVal, Function_293(), Local_398);
			switch (bLocal_544)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					break;
				
				case 0x00000005:
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_537(struct<41> Param0) //Position: 0x226C0 / 140992
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_544 = false;
			break;
		
		case 0x00000002:
			bLocal_544 = true;
			break;
		
		case 0x00000003:
			bLocal_544 = 2;
			break;
		
		case 0x00000004:
			bLocal_544 = 3;
			break;
		
		case 0x00000005:
			bLocal_544 = 4;
			break;
		
		case 0x00000006:
			bLocal_544 = 5;
			break;
		
		case 0x00000007:
			bLocal_544 = 6;
			break;
		
		case 0x00000008:
			bLocal_544 = 7;
			break;
		
		case 0x00000009:
			bLocal_544 = 8;
			break;
		
		case 0x0000000A:
			bLocal_544 = 101;
			break;
	}
}

void Function_538(int iParam0, var uParam1, int iParam2) //Position: 0x22755 / 141141
{
	if (Function_288(&iParam0))
	{
		uParam1 = Function_540(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_539();
	}
	return;
}

void Function_539() //Position: 0x22791 / 141201
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

var Function_540(int iParam0) //Position: 0x227E2 / 141282
{
	if (Function_288(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_541(struct<2>[] Param0) //Position: 0x227FB / 141307
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_542(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_542(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_542(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_542(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_542(struct<13> Param0) //Position: 0x22ED4 / 143060
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_543(float fParam0) //Position: 0x22FA3 / 143267
{
	if (!Function_278(&fParam0))
	{
		Function_228(&fParam0, 0.0f);
	}
	return;
}

bool Function_544() //Position: 0x22FBA / 143290
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_545(0))
		{
			return 0;
		}
		if (!Function_325())
		{
			return 0;
		}
		if (!Function_313(&iLocal_444))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_549))
		{
			bLocal_549 = Function_297(12, 0, 1, -58,721f, 116,457f, 1388,914f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_549, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_867))
		{
			bLocal_867 = Function_297(11, 0, 1, -96.0f, 118,869f, 1368.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_867, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_869))
		{
			bLocal_869 = Function_297(13, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_869, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_865))
		{
			bLocal_865 = Function_297(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_865, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_551))
		{
			bLocal_551 = Function_306(1, 1, -77,288f, 116,861f, 1418,517f, -459,472f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_551, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_545(bool bParam0) //Position: 0x23110 / 143632
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_546() //Position: 0x23140 / 143680
{
	Function_326(&iLocal_444, "custom/son_crouchGetup", 8, 0);
	Function_326(&iLocal_444, "son_crouchGetup", 5, 0);
	Function_326(&iLocal_444, "custom/rand_idle_sit_ground", 8, 0);
	Function_326(&iLocal_444, "rand_idle_sit_ground", 5, 0);
	Function_326(&iLocal_444, "home02son01", 10, 0);
	Function_326(&iLocal_444, "p_gen_bookReading01x", 0, 0);
	Function_326(&iLocal_444, "custom/dog_sit", 8, 0);
	Function_326(&iLocal_444, "skinning", 5, 0);
	Function_326(&iLocal_444, "$/fragments/p_gen_carcassElk01x", 0, 0);
	Function_326(&iLocal_444, "custom/skinning", 8, 0);
	Function_326(&iLocal_444, "BeechersHope", 12, 0);
	Function_326(&iLocal_444, "ManzanitaPost", 12, 0);
	return;
}

void Function_547(int iParam0, bool bParam1) //Position: 0x232AD / 144045
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_553(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_288(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_288(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_221();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_248();
	Function_282();
	Function_237("");
	Function_552(0);
	Function_551();
	Function_215();
	Function_214();
	ENABLE_JOURNAL_REPLAY(0);
	Function_550();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_306(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_353(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_549(13);
	Function_549(14);
	Function_549(25);
	Function_549(24);
	Function_549(12);
	Function_549(27);
	Function_549(26);
	Function_549(15);
	Function_548();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_548() //Position: 0x236ED / 145133
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_549(int iParam0) //Position: 0x23772 / 145266
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_550() //Position: 0x23792 / 145298
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_551() //Position: 0x237D8 / 145368
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_552(int iParam0) //Position: 0x237EE / 145390
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_218())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_553(int iParam0, int iParam1) //Position: 0x23827 / 145447
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_554(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_554(struct<113> Param0) //Position: 0x238AE / 145582
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_555() //Position: 0x2390C / 145676
{
	return;
}

void Function_556(int iParam0, int iParam1) //Position: 0x23912 / 145682
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
				{
					iParam0 = &iVar0;
					Function_393(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_393(&iParam0, 0);
			}
		}
	}
	else
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (!&iParam0 != &iVar0)
			{
				if (IS_ACTOR_VALID(&iParam1))
				{
					if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
						}
						iParam0 = &iVar0;
						Function_393(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_393(&iParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_557(int iParam0) //Position: 0x239F6 / 145910
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_558(struct<25> Param0) //Position: 0x23A14 / 145940
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_559(&Param0, 1);
			return 1;
		}
	}
	Function_559(&Param0, 0);
	return 0;
}

void Function_559(struct<25> Param0) //Position: 0x23AA0 / 146080
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_560(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x23ACB / 146123
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_559(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_579(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_578(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_578(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_564(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_559(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_563(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_562(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_563(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_561(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_237(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_562(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_559(&Param2, 0);
	return 0;
}

void Function_561(char* cParam0) //Position: 0x23EE1 / 147169
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_562(struct<25> Param0) //Position: 0x23FD5 / 147413
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_563(bool bParam0) //Position: 0x2404E / 147534
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_564(struct<57> Param0) //Position: 0x24072 / 147570
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_575(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_568(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_575(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_565(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_575(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_565(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_565(int iParam0, bool bParam1) //Position: 0x241E3 / 147939
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_567(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_566(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_567(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_566(256);
			}
		}
	}
	return bParam1;
}

bool Function_566(int iParam0) //Position: 0x2431F / 148255
{
	return 2 | iParam0;
}

int Function_567(int iParam0) //Position: 0x24329 / 148265
{
	return 4 | iParam0;
}

int Function_568(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x24333 / 148275
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_574(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_566(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_569(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_566(16);
		}
	}
	return 0;
}

int Function_569(int iParam0, vector3 vParam1) //Position: 0x243EE / 148462
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_573(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_572(iVar0, 3, 1, bParam3))
			{
				if (!Function_578(&iParam0, 8, 1))
				{
					return Function_571(64, 1024, bParam2);
				}
			}
			return Function_570(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_572(iVar0, 2, 1, bParam3))
			{
				if (!Function_578(&iParam0, 32, 1))
				{
					return Function_571(64, 1024, bParam2);
				}
			}
			return Function_570(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_572(iVar0, 1, 1, bParam3))
			{
				if (!Function_578(&iParam0, 64, 1))
				{
					return Function_571(64, 1024, bParam2);
				}
			}
			return Function_570(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_572(iVar0, 3, 1, bParam3))
			{
				if (!Function_578(&iParam0, 128, 1))
				{
					return Function_571(64, 1024, bParam2);
				}
			}
			return Function_570(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_572(iVar0, 1, 1, bParam3))
			{
				if (!Function_578(&iParam0, 1024, 1))
				{
					return Function_571(64, 1024, bParam2);
				}
			}
			return Function_570(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_572(iVar0, 1, 1, bParam3))
			{
				if (!Function_578(&iParam0, 1024, 1))
				{
					return Function_571(64, 1024, bParam2);
				}
			}
			return Function_570(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_570(int iParam0, int iParam1, bool bParam2) //Position: 0x245B6 / 148918
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_571(int iParam0, int iParam1, bool bParam2) //Position: 0x245CB / 148939
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_572(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x245E0 / 148960
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_573(int iParam0) //Position: 0x245FD / 148989
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_574(var uParam0, vector3 vParam1) //Position: 0x24670 / 149104
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_573(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_572(iVar0, 3, 1, bParam2))
			{
				if (!Function_578(&uParam0, 8, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000009:
			if (Function_572(iVar0, 3, 1, bParam2))
			{
				if (!Function_578(&uParam0, 8, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x0000006E:
			if (Function_572(iVar0, 2, 1, bParam2))
			{
				if (!Function_578(&uParam0, 16, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x0000005B:
			if (Function_572(iVar0, 2, 1, bParam2))
			{
				if (!Function_578(&uParam0, 32, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000031:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&uParam0, 64, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000007:
			if (Function_572(iVar0, 3, 1, bParam2))
			{
				if (!Function_578(&uParam0, 128, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000008:
			if (Function_572(iVar0, 2, 1, bParam2))
			{
				if (!Function_578(&uParam0, 256, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000014:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&uParam0, 512, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000018:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&uParam0, 512, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000057:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&uParam0, 1024, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000058:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&uParam0, 1024, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_575(struct<65> Param0) //Position: 0x24899 / 149657
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_574(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_578(&Param0, 2, 1))
					{
						return Function_567(8);
					}
					return Function_566(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_578(&Param0, 4, 1))
					{
						return Function_567(16);
					}
					return Function_566(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_569(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_578(&Param0, 2, 1))
						{
							return Function_567(128);
						}
						return Function_566(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_578(&Param0, 4, 1))
						{
							return Function_567(256);
						}
						return Function_566(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_569(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_578(&Param0, 2, 1))
					{
						return Function_567(8);
					}
					return Function_566(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_578(&Param0, 4, 1))
					{
						return Function_567(16);
					}
					return Function_566(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_577(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_578(&Param0, 2, 1))
					{
						return Function_567(8);
					}
					return Function_566(8);
				}
				if (!Function_578(&Param0, 4, 1))
				{
					return Function_567(16);
				}
				return Function_566(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_569(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_576(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_566(128);
							}
							if (!Function_578(&Param0, 2, 1))
							{
								return Function_567(8);
							}
							return Function_566(8);
						}
						if (iParam4 == 2)
						{
							if (Function_576(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_566(256);
							}
							if (!Function_578(&Param0, 4, 1))
							{
								return Function_567(16);
							}
							return Function_566(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_576(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x24B7F / 150399
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_577(int iParam0, vector3 vParam1) //Position: 0x24C4D / 150605
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_573(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_572(iVar0, 2, 1, bParam2))
			{
				if (!Function_578(&iParam0, 16, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x0000005B:
			if (Function_572(iVar0, 2, 1, bParam2))
			{
				if (!Function_578(&iParam0, 32, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000057:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&iParam0, 1024, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		case 0x00000058:
			if (Function_572(iVar0, 1, 1, bParam2))
			{
				if (!Function_578(&iParam0, 1024, 1))
				{
					return Function_567(64);
				}
			}
			return Function_566(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_578(struct<69> Param0) //Position: 0x24D6F / 150895
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_579(int iParam0) //Position: 0x24D99 / 150937
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_580(bool bParam0) //Position: 0x24DCF / 150991
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_99472 && bParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_99472 && bParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_99471);
	}
	return;
}

void Function_581(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x24E02 / 151042
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

