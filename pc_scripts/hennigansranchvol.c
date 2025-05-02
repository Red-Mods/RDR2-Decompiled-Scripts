//Decompiled with MagicRDR v1.0
//Function Count : 68
//Statics Count : 829
//Natives Count : 127
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
	var uLocal_12 = 11;
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
	var uLocal_38 = 1;
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
	var uLocal_50 = 1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 1;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 1;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 7;
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
	var uLocal_88 = 2;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 3;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 3;
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
	var uLocal_134 = 8;
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
	var uLocal_154 = 3;
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
	var uLocal_166 = 3;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 2;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 7;
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
	var uLocal_206 = 1;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 1;
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
	var uLocal_224 = 2;
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
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	var uLocal_376 = 0;
	bool bLocal_377 = false;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 18;
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
	char[] cLocal_494[4] = 0;
	var uLocal_495 = 0;
	struct<4> Local_496[39];
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
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_374 = 0;
	iLocal_375 = &iScriptParam_0;
	Function_67("Initializing Hennigan's Ranch Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_377 = 500;
		uLocal_378 = Function_66();
		switch (iLocal_374)
		{
			case 0x00000000:
				if (Function_64())
				{
					cLocal_494 = Function_63(&iLocal_0, "hennigansRanch", iScriptParam_0);
					iLocal_374 = 1;
				}
				bLocal_377 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_494))
				{
					iLocal_374 = 2;
				}
				bLocal_377 = false;
				break;
			
			case 0x00000002:
				Function_62(&uLocal_380);
				Function_61(&uLocal_380, &uLocal_384, 4, &iLocal_0 + 32, 4294967295, 4);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 144, 4294967295, 65802);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 944, 4294967295, 65800);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 216, 4294967295, 65802);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 168, 4294967295, 65802);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 192, 4294967295, 65802);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 344, 4294967295, 2314);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 240, 4294967295, 65802);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 816, 4294967295, 16650);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 864, 4294967295, 16648);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 448, 4294967295, 131338);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 376, 4294967295, 33034);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 8, 4294967295, 0x1000008);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 928, 4294967295, 0x1000008);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 936, 4294967295, 0x1000008);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 16, 4294967295, 16650);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 24, 4294967295, 16650);
				Function_61(&uLocal_380, &uLocal_384, 5, &iLocal_0 + 272, 4294967295, 65794);
				iLocal_812 = Function_59(&Local_496, &cLocal_494, "store01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 344, 0, 0);
				if (iLocal_812 <= 0 && iLocal_812 > Local_496)
				{
					Function_58(&(Local_496[iLocal_8124]), 33);
				}
				iLocal_811 = Function_59(&Local_496, &cLocal_494, "store01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 344, 1, 0);
				if (iLocal_811 <= 0 && iLocal_811 > Local_496)
				{
					Function_58(&(Local_496[iLocal_8114]), 33);
				}
				Function_59(&Local_496, &cLocal_494, "ncottage01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 168, 0, 0);
				Function_59(&Local_496, &cLocal_494, "ncottage01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 168, 0, 0);
				iLocal_813 = Function_59(&Local_496, &cLocal_494, "stockade01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 888, 0, 0);
				if (iLocal_813 <= 0 && iLocal_813 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8134]), 1);
				}
				iLocal_810 = Function_59(&Local_496, &cLocal_494, "ncottage02", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 1);
				if (!Global_6623)
				{
					if (iLocal_810 <= 0 && iLocal_810 > Local_496)
					{
						OPEN_DOOR_DIRECTION(&(Local_496[iLocal_8104]), 1);
					}
				}
				Function_59(&Local_496, &cLocal_494, "ncottage02", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "ncottage03", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "blacksmith01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 6, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 7, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 840, 0, 0);
				Function_59(&Local_496, &cLocal_494, "trainStation01", 8, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "stockade01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "stockade01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "stable03", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "stable03", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "stable03", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "barn01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "barn01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "barn01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "barn01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "barn01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_814 = Function_59(&Local_496, &cLocal_494, "stable01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_815 = Function_59(&Local_496, &cLocal_494, "stable01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_816 = Function_59(&Local_496, &cLocal_494, "stable01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_817 = Function_59(&Local_496, &cLocal_494, "stable01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_818 = Function_59(&Local_496, &cLocal_494, "stable02", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_819 = Function_59(&Local_496, &cLocal_494, "stable02", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_820 = Function_59(&Local_496, &cLocal_494, "stable02", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_821 = Function_59(&Local_496, &cLocal_494, "stable02", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_822 = Function_59(&Local_496, &cLocal_494, "stable02", 7, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_823 = Function_59(&Local_496, &cLocal_494, "stable02", 8, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_824 = Function_59(&Local_496, &cLocal_494, "stable02", 9, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_825 = Function_59(&Local_496, &cLocal_494, "stable02", 10, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_826 = Function_59(&Local_496, &cLocal_494, "stable02", 11, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				if (iLocal_814 <= 0 && iLocal_814 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8144]), 1);
				}
				if (iLocal_815 <= 0 && iLocal_815 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8154]), 1);
				}
				if (iLocal_816 <= 0 && iLocal_816 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8164]), 1);
				}
				if (iLocal_817 <= 0 && iLocal_817 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8174]), 1);
				}
				if (iLocal_818 <= 0 && iLocal_818 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8184]), 1);
				}
				if (iLocal_819 <= 0 && iLocal_819 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8194]), 1);
				}
				if (iLocal_820 <= 0 && iLocal_820 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8204]), 1);
				}
				if (iLocal_821 <= 0 && iLocal_821 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8214]), 1);
				}
				if (iLocal_822 <= 0 && iLocal_822 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8224]), 1);
				}
				if (iLocal_823 <= 0 && iLocal_823 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8234]), 1);
				}
				if (iLocal_824 <= 0 && iLocal_824 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8244]), 1);
				}
				if (iLocal_825 <= 0 && iLocal_825 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8254]), 1);
				}
				if (iLocal_826 <= 0 && iLocal_826 > Local_496)
				{
					Function_57(&(Local_496[iLocal_8264]), 1);
				}
				Function_59(&Local_496, &cLocal_494, "stable02", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&Local_496, &cLocal_494, "stable02", 6, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_374 = 3;
				bLocal_377 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_375]), 16);
				Function_55("Finished Initializing Hennigan's Ranch Volumes", 5.0f);
				iLocal_374 = 4;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_380, &uLocal_384, &uLocal_378, iScriptParam_0);
				Function_12(&Local_496, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_377);
	}
	Function_4(&uLocal_380, &uLocal_384);
	Function_3(&Local_496);
	Function_2();
	Function_1(&(Global_43791[iLocal_375]), 16);
	Function_55("Unloaded Hennigan's Ranch Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xB4F / 2895
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xB69 / 2921
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0xB75 / 2933
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0xBDA / 3034
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0xC37 / 3127
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

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0xD21 / 3361
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

void Function_7() //Position: 0xEA0 / 3744
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0xEAC / 3756
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

void Function_9(int iParam0) //Position: 0xEF6 / 3830
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

void Function_10(struct<17> Param0) //Position: 0xF3C / 3900
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0xF59 / 3929
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0xF77 / 3959
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
							if (IS_ACTOR_IN_VOLUME(Function_66(), &Param0[iVar04] + 16))
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
							if (IS_ACTOR_IN_VOLUME(Function_66(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_66(), &Param0[iVar04] + 16))
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

void Function_13(struct<13> Param0) //Position: 0x1398 / 5016
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0x13AB / 5035
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x13C8 / 5064
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0x13DA / 5082
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

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x1464 / 5220
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

void Function_18(int iParam0) //Position: 0x18BC / 6332
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

float Function_19(int iParam0) //Position: 0x19AD / 6573
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x19EA / 6634
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1A23 / 6691
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

var Function_22(int iParam0) //Position: 0x1A8D / 6797
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1AE5 / 6885
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

void Function_24(bool bParam0) //Position: 0x1D0D / 7437
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1DAB / 7595
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_20(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_20(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x23E9 / 9193
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x23F2 / 9202
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2403 / 9219
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

struct<32> Function_29(char* cParam0) //Position: 0x24FA / 9466
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2515 / 9493
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x257C / 9596
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x258E / 9614
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

int Function_33(int iParam0) //Position: 0x26C2 / 9922
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x26D1 / 9937
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x286B / 10347
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

void Function_36(var uParam0, int iParam1) //Position: 0x2AAF / 10927
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x2ABC / 10940
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2AE6 / 10982
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2B03 / 11011
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
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
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
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
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

void Function_40() //Position: 0x2DB6 / 11702
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

void Function_41(var uParam0, int iParam1) //Position: 0x2E29 / 11817
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

bool Function_42(bool bParam0) //Position: 0x2E5F / 11871
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

int Function_43(int iParam0) //Position: 0x2ED5 / 11989
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2EE6 / 12006
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

bool Function_45(int iParam0) //Position: 0x2EFF / 12031
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2F15 / 12053
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2F2A / 12074
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2F48 / 12104
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

bool Function_49(int iParam0) //Position: 0x2FF7 / 12279
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x300D / 12301
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x3020 / 12320
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

void Function_52(int iParam0, int iParam1) //Position: 0x309A / 12442
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x30C3 / 12483
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

bool Function_54(int iParam0) //Position: 0x30E3 / 12515
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x30FF / 12543
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

void Function_56(var uParam0, int iParam1) //Position: 0x313F / 12607
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x3150 / 12624
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

void Function_58(vector3 vParam0) //Position: 0x31AB / 12715
{
	Function_13(&vParam0, 2);
	vParam0.z = bParam1;
	return;
}

var Function_59(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x31BF / 12735
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_60(&Param0);
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

var Function_60(struct<4>[] Param0) //Position: 0x32B3 / 12979
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

void Function_61(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x32E4 / 13028
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

void Function_62(struct<5> Param0) //Position: 0x33D1 / 13265
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_63(int iParam0, var uParam1, int iParam2) //Position: 0x33E2 / 13282
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_64() //Position: 0x3405 / 13317
{
	var uVar0;
	
	Function_65(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_pop_corr01", 2,802597E-45f, Vector(-907,295f, 91,39155f, 2439,918f), Vector(-0,188446f, 20,26217f, 0,03837547f), Vector(22,06822f, 9,190167f, 6,534943f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_weth01", 2,802597E-45f, Vector(-833,9625f, 104,2782f, 2455,697f), Vector(0.0f, 10,1206f, 0.0f), Vector(5,189783f, 3,347464f, 4,886743f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_weth02", 2,802597E-45f, Vector(-848,5569f, 96,51233f, 2463,539f), Vector(0.0f, 19,23773f, 0.0f), Vector(4,969315f, 3,347464f, 5,209871f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_region", 4,203895E-45f, Vector(-865,0332f, 104,5656f, 2419,329f), Vector(0.0f, 20.0f, 0.0f), Vector(108,1694f, 16,82273f, 104,4921f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_women", 2,802597E-45f, Vector(-773,1002f, 92,65476f, 2383,807f), Vector(0.0f, 54,52087f, 0.0f), Vector(13,92711f, 13,27901f, 15,71011f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_mainHouse_set");
	*(&iLocal_0 + 48[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_ding01", 2,802597E-45f, Vector(-787,9187f, 94,90556f, 2394,663f), Vector(0.0f, 56,05423f, 0.0f), Vector(6,233358f, 2,980766f, 9,392708f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[0]);
	*(&iLocal_0 + 48[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_parl01", 2,802597E-45f, Vector(-791,4916f, 94,90692f, 2399,942f), Vector(0.0f, 56,05423f, 0.0f), Vector(6,233358f, 2,980766f, 9,392708f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[1]);
	*(&iLocal_0 + 48[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_entr01", 2,802597E-45f, Vector(-782,7989f, 94,73243f, 2404,145f), Vector(0.0f, 56,05423f, 0.0f), Vector(9,163671f, 2,980766f, 6,331867f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[2]);
	*(&iLocal_0 + 48[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_kich01", 2,802597E-45f, Vector(-779,3077f, 94,5662f, 2392,901f), Vector(0.0f, 55,16335f, 0.0f), Vector(4,715626f, 2,980766f, 13,87618f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[3]);
	*(&iLocal_0 + 48[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_entr02", 2,802597E-45f, Vector(-782,7838f, 97,74265f, 2402,892f), Vector(0.0f, -35,10406f, 0.0f), Vector(6,432983f, 3,131083f, 11,29899f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[4]);
	*(&iLocal_0 + 48[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bedr01", 2,802597E-45f, Vector(-789,7974f, 98,00316f, 2399,699f), Vector(0.0f, 55,51827f, 0.0f), Vector(8,400698f, 2,434886f, 4,321394f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[5]);
	*(&iLocal_0 + 48[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bedr02", 2,802597E-45f, Vector(-781,4969f, 97,71693f, 2394,169f), Vector(0.0f, 56,30006f, 0.0f), Vector(7,767199f, 2,369404f, 4,363895f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[6]);
	*(&iLocal_0 + 48[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bedr03", 2,802597E-45f, Vector(-778,9072f, 97,94008f, 2397,139f), Vector(0,1030367f, 54,97228f, 0,03594554f), Vector(11,27106f, 2,490943f, 8,0997f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[7]);
	*(&iLocal_0 + 48[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_terr01", 2,802597E-45f, Vector(-789,3182f, 94,59753f, 2407,05f), Vector(0.0f, 55,1356f, 0.0f), Vector(2,464414f, 2,502242f, 13,11122f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[8]);
	*(&iLocal_0 + 48[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_terr02", 2,802597E-45f, Vector(-777,9434f, 94,71134f, 2405,11f), Vector(0.0f, 56,48388f, 0.0f), Vector(13,77267f, 2,394925f, 2,705867f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[9]);
	*(&iLocal_0 + 48[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bedr04", 2,802597E-45f, Vector(-784,3458f, 98,36203f, 2391,056f), Vector(0,08203235f, -35,14056f, -0,4878395f), Vector(3,280089f, 2,383869f, 7,496467f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 48[10]);
	*(&iLocal_0 + 168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_house01_set");
	*(&iLocal_0 + 152[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_cott02", 2,802597E-45f, Vector(-829,8432f, 94,06009f, 2358,384f), Vector(0.0f, -95,18021f, 0.0f), Vector(4,287017f, 3,133786f, 9,239021f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 152[0]);
	*(&iLocal_0 + 192) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_house02_set");
	*(&iLocal_0 + 176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bunk03", 2,802597E-45f, Vector(-817,6978f, 94,05641f, 2360,956f), Vector(0.0f, 74,88929f, 0.0f), Vector(6,053952f, 2,492213f, 9,891749f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 176[0]);
	*(&iLocal_0 + 216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_house03_set");
	*(&iLocal_0 + 200[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bunk02", 2,802597E-45f, Vector(-802,3254f, 94,14056f, 2375,87f), Vector(0.0f, 57,55003f, 0.0f), Vector(9,808082f, 2,856664f, 6,88935f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 200[0]);
	*(&iLocal_0 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_house04_set");
	*(&iLocal_0 + 224[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_bunk01", 2,802597E-45f, Vector(-808,9023f, 93,90993f, 2386,919f), Vector(0.0f, -34,29591f, 0.0f), Vector(6,053952f, 2,492213f, 10,10525f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 224[0]);
	*(&iLocal_0 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_cell01", 2,802597E-45f, Vector(-827,1763f, 95,11025f, 2435,198f), Vector(0.0f, -15,11292f, 0.0f), Vector(3,506161f, 2,655614f, 3,41665f));
	*(&iLocal_0 + 272) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_playerHouse_set");
	*(&iLocal_0 + 256[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_cott01", 2,802597E-45f, Vector(-840,0419f, 93,84976f, 2368,513f), Vector(0.0f, 20,00927f, 0.0f), Vector(4,239078f, 2,695265f, 9,117325f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 272, &iLocal_0 + 256[0]);
	*(&iLocal_0 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_genStore_set");
	*(&iLocal_0 + 280[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop01", 2,802597E-45f, Vector(-827,2114f, 93,35832f, 2391,726f), Vector(0.0f, -9,75f, 0.0f), Vector(10,90003f, 4,500954f, 10,29797f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[0]);
	*(&iLocal_0 + 280[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop02", 2,802597E-45f, Vector(-831,4028f, 93,35832f, 2395,013f), Vector(0.0f, -9,75f, 0.0f), Vector(4,031376f, 4,500954f, 4,111689f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[1]);
	*(&iLocal_0 + 280[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop03", 2,802597E-45f, Vector(-824,4351f, 93,35832f, 2396,257f), Vector(0.0f, -9,75f, 0.0f), Vector(4,117599f, 4,500954f, 4,111689f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[2]);
	*(&iLocal_0 + 280[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop04", 2,802597E-45f, Vector(-829,3714f, 93,35832f, 2395,348f), Vector(0.0f, 34,76101f, 0.0f), Vector(2,963443f, 3,308627f, 3,02248f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[3]);
	*(&iLocal_0 + 280[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop05", 2,802597E-45f, Vector(-826,4714f, 93,35832f, 2395,865f), Vector(0.0f, 35,02987f, 0.0f), Vector(2,963443f, 3,308627f, 3,02248f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[4]);
	*(&iLocal_0 + 280[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop06", 2,802597E-45f, Vector(-821,3082f, 94,14738f, 2388,923f), Vector(-0,1333685f, -10,03256f, -0,2557848f), Vector(0,5196779f, 1,61964f, 0,874405f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[5]);
	*(&iLocal_0 + 280[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_shop07", 2,802597E-45f, Vector(-832,1039f, 94,12175f, 2388,402f), Vector(0.0f, -10,03256f, 0.0f), Vector(0,5196779f, 1,617693f, 0,9369411f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[6]);
	*(&iLocal_0 + 376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_Stockade_set");
	*(&iLocal_0 + 352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_stoc01", 2,802597E-45f, Vector(-823,336f, 96,18947f, 2431,508f), Vector(0.0f, -15,11292f, 0.0f), Vector(11,89836f, 5,583457f, 11,72979f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 352[0]);
	*(&iLocal_0 + 352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_offc01", 2,802597E-45f, Vector(-825,292f, 95,06285f, 2427,988f), Vector(0.0f, -15,11292f, 0.0f), Vector(5,457095f, 2,333913f, 4,905727f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 352[1]);
	*(&iLocal_0 + 408) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_blacksmith_set");
	*(&iLocal_0 + 384[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blackSmith", 2,802597E-45f, Vector(-861,6597f, 94,62007f, 2380,274f), Vector(0.0f, -19,17433f, 0.0f), Vector(11,14826f, 8,686522f, 10,62593f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 408, &iLocal_0 + 384[0]);
	*(&iLocal_0 + 384[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blackSmithWin", 2,802597E-45f, Vector(-863,2651f, 92,84383f, 2384,848f), Vector(0.0f, -20,07252f, 0.0f), Vector(9,717596f, 3,410117f, 0,3403007f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 408, &iLocal_0 + 384[1]);
	*(&iLocal_0 + 448) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_barn_set");
	*(&iLocal_0 + 416[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_barn02", 2,802597E-45f, Vector(-844,946f, 97,02397f, 2461,003f), Vector(0.0f, 20,82956f, 0.0f), Vector(15,21839f, 3,888079f, 20,09989f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 416[0]);
	*(&iLocal_0 + 416[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_barn03", 2,802597E-45f, Vector(-844,946f, 102,8268f, 2461,003f), Vector(0.0f, 20,82956f, 0.0f), Vector(15,21839f, 6,371006f, 21,28212f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 416[1]);
	*(&iLocal_0 + 416[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_barn01", 2,802597E-45f, Vector(-844,946f, 91,88769f, 2461,003f), Vector(0.0f, 20,82956f, 0.0f), Vector(15,21839f, 3,888079f, 20,09989f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 416[2]);
	*(&iLocal_0 + 488) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_birds_set");
	*(&iLocal_0 + 456[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "flyingBirds1", 4,203895E-45f, Vector(-834,2458f, 95,63454f, 2418,397f), Vector(0.0f, 20.0f, 0.0f), Vector(93,99681f, 14,87926f, 64,42979f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 488, &iLocal_0 + 456[0]);
	*(&iLocal_0 + 456[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "flyingBirds2", 4,203895E-45f, Vector(-957,0374f, 95,20286f, 2409,412f), Vector(0.0f, 20.0f, 0.0f), Vector(37,00534f, 14,70886f, 32,78499f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 488, &iLocal_0 + 456[1]);
	*(&iLocal_0 + 456[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "flyingBirds4", 4,203895E-45f, Vector(-868,6245f, 88,70197f, 2345,522f), Vector(0.0f, 20.0f, 0.0f), Vector(19,98622f, 15,45483f, 22,63047f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 488, &iLocal_0 + 456[2]);
	*(&iLocal_0 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_dogs_set");
	*(&iLocal_0 + 496[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs3", 2,802597E-45f, Vector(-785,9968f, 91,98063f, 2400,114f), Vector(0.0f, 0.0f, 0.0f), Vector(34,3271f, 18,23282f, 34,3271f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 496[0]);
	*(&iLocal_0 + 496[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs2", 2,802597E-45f, Vector(-823,3627f, 91,98063f, 2412,487f), Vector(0.0f, 0.0f, 0.0f), Vector(34,3271f, 18,23282f, 34,3271f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 496[1]);
	*(&iLocal_0 + 496[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs1", 2,802597E-45f, Vector(-859,9617f, 91,98063f, 2412,811f), Vector(0.0f, 0.0f, 0.0f), Vector(34,3271f, 18,23282f, 29,3928f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 496[2]);
	*(&iLocal_0 + 608) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "Henv_Townpop_set");
	*(&iLocal_0 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_workerpop02", 2,802597E-45f, Vector(-888,9214f, 93,28342f, 2360,243f), Vector(0.0f, 29,48648f, 0.0f), Vector(48,36207f, 10,20538f, 38,2534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[0]);
	*(&iLocal_0 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_workerpop01", 2,802597E-45f, Vector(-895,3943f, 92,65089f, 2391,865f), Vector(0.0f, 12,81889f, 0.0f), Vector(55,92949f, 8,492499f, 35,07158f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[1]);
	*(&iLocal_0 + 536[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_workerpop03", 2,802597E-45f, Vector(-892,9852f, 93,36188f, 2455,063f), Vector(0.0f, 19,09838f, 0.0f), Vector(71,12991f, 11,73028f, 43,84187f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[2]);
	*(&iLocal_0 + 536[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "stable04", 2,802597E-45f, Vector(-862,531f, 92,27802f, 2457,24f), Vector(0.0f, 20,44771f, 0.0f), Vector(7,987236f, 4,9609f, 35,5173f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[3]);
	*(&iLocal_0 + 536[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "townPOP9", 2,802597E-45f, Vector(-866,601f, 92,6058f, 2424,438f), Vector(0.0f, 37,8405f, 0.0f), Vector(5,832854f, 10,95257f, 58,36314f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[4]);
	*(&iLocal_0 + 536[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "townPOP6", 2,802597E-45f, Vector(-837,4179f, 90,49345f, 2443,137f), Vector(0.0f, -37,76136f, 0.0f), Vector(27,57806f, 12,55932f, 7,271214f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[5]);
	*(&iLocal_0 + 536[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "townPOP5", 2,802597E-45f, Vector(-840,0947f, 95,69423f, 2419,526f), Vector(0.0f, -14,44196f, 0.0f), Vector(33,78256f, 12,69004f, 4,365254f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[6]);
	*(&iLocal_0 + 536[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "townPOP4", 2,802597E-45f, Vector(-854,9111f, 93,87077f, 2403,279f), Vector(0.0f, 0.0f, 0.0f), Vector(50,49413f, 10,0469f, 4,828262f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 536[7]);
	*(&iLocal_0 + 648) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "hen_cows_set");
	*(&iLocal_0 + 616[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_cattlepop01", 4,203895E-45f, Vector(-913,4301f, 91,15893f, 2468,895f), Vector(0.0f, 20.0f, 0.0f), Vector(22,03595f, 3,397101f, 21,82662f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 616[0]);
	*(&iLocal_0 + 616[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cows4", 4,203895E-45f, Vector(-874,6694f, 90,35291f, 2466,637f), Vector(0.0f, 41,05971f, 0.0f), Vector(9,076875f, 3,411866f, 15,36574f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 616[1]);
	*(&iLocal_0 + 616[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cows3", 4,203895E-45f, Vector(-877,7629f, 90,35291f, 2448.0f), Vector(0.0f, 20.0f, 0.0f), Vector(6,649864f, 3,411866f, 6,868708f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 616[2]);
	*(&iLocal_0 + 656) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_nightPop", 4,203895E-45f, Vector(-820,5867f, 92,98473f, 2375,798f), Vector(0.0f, 20.0f, 0.0f), Vector(26,00859f, 9,795838f, 26,00859f));
	*(&iLocal_0 + 696) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "henv_horses_set");
	*(&iLocal_0 + 664[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_horsepop01", 4,203895E-45f, Vector(-891,3127f, 91,90538f, 2365,967f), Vector(0.0f, 20.0f, 0.0f), Vector(9,649468f, 3,212526f, 9,793543f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 696, &iLocal_0 + 664[0]);
	*(&iLocal_0 + 664[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cows2", 4,203895E-45f, Vector(-919,7874f, 91,35687f, 2383,749f), Vector(0.0f, 55,03067f, 0.0f), Vector(17,78707f, 4,646078f, 26,16555f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 696, &iLocal_0 + 664[1]);
	*(&iLocal_0 + 664[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cows1", 4,203895E-45f, Vector(-913,5728f, 91,35687f, 2356,5f), Vector(0.0f, 30,46546f, 0.0f), Vector(32,49294f, 0,7796803f, 9,014298f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 696, &iLocal_0 + 664[2]);
	*(&iLocal_0 + 728) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "Henv_TrnPlatform_set");
	*(&iLocal_0 + 704[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box", 2,802597E-45f, Vector(-959,0334f, 92,48853f, 2415,089f), Vector(0.0f, 20,30423f, 0.0f), Vector(15,52501f, 5,481997f, 6,859567f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 704[0]);
	*(&iLocal_0 + 704[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box1", 2,802597E-45f, Vector(-959,1414f, 92,90108f, 2429,122f), Vector(0.0f, 19,67866f, 0.0f), Vector(5,476338f, 6,218257f, 21,84757f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 704[1]);
	*(&iLocal_0 + 736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Henv_HorseShoePit", 2,802597E-45f, Vector(-820,5627f, 93,98839f, 2349,395f), Vector(0.0f, 268,9332f, 0.0f), Vector(4,158921f, 5,764499f, 16,75021f));
	*(&iLocal_0 + 808) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "henv_pop_chickens_set");
	*(&iLocal_0 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder_pop", 4,203895E-45f, Vector(-882,4127f, 90,35291f, 2435,568f), Vector(0.0f, 20.0f, 0.0f), Vector(7,493746f, 3,032098f, 5,24432f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[0]);
	*(&iLocal_0 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder1_pop", 4,203895E-45f, Vector(-869,7514f, 90,87122f, 2417,751f), Vector(0.0f, 20.0f, 0.0f), Vector(7,534854f, 7,534854f, 7,534854f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[1]);
	*(&iLocal_0 + 744[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder2_pop", 4,203895E-45f, Vector(-810,3448f, 92,36078f, 2416.0f), Vector(0.0f, 20.0f, 0.0f), Vector(7,534854f, 7,534854f, 7,534854f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[2]);
	*(&iLocal_0 + 744[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder3_pop", 4,203895E-45f, Vector(-850,4661f, 90,35291f, 2438,934f), Vector(0.0f, 20.0f, 0.0f), Vector(7,534854f, 7,534854f, 7,534854f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[3]);
	*(&iLocal_0 + 744[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder4_pop", 4,203895E-45f, Vector(-784.0f, 93,36469f, 2376.0f), Vector(0.0f, 20.0f, 0.0f), Vector(7,534854f, 7,534854f, 7,534854f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[4]);
	*(&iLocal_0 + 744[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder6_pop", 4,203895E-45f, Vector(-904.0f, 90,35291f, 2424.0f), Vector(0.0f, 20.0f, 0.0f), Vector(7,534854f, 7,534854f, 7,534854f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[5]);
	*(&iLocal_0 + 744[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinderchickens", 4,203895E-45f, Vector(-845,451f, 92,16456f, 2389,844f), Vector(0.0f, 20.0f, 0.0f), Vector(6,468651f, 6,468651f, 6,468651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 744[6]);
	*(&iLocal_0 + 816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_trainstation_int", 2,802597E-45f, Vector(-952,1673f, 93,58117f, 2424,891f), Vector(0,2293412f, 19,13329f, 0,5711275f), Vector(10,33063f, 6,654235f, 16,43773f));
	*(&iLocal_0 + 840) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "henv_null_set");
	*(&iLocal_0 + 824[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_null1", 2,802597E-45f, Vector(-954,4357f, 93,58052f, 2427,771f), Vector(0,2293412f, 19,13329f, 0,5711275f), Vector(3,366404f, 9,480227f, 8,121138f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 840, &iLocal_0 + 824[0]);
	*(&iLocal_0 + 864) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "henv_trainstation_set");
	*(&iLocal_0 + 848[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_trainstation_01", 2,802597E-45f, Vector(-955,2867f, 91,35066f, 2424,773f), Vector(0.0f, 19,98809f, 0.0f), Vector(16,49911f, 6,719215f, 28,12355f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 848[0]);
	*(&iLocal_0 + 872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Henv_poker", 2,802597E-45f, Vector(-801,4831f, 92,36066f, 2374,898f), Vector(0.0f, -32,478f, 0.0f), Vector(6,336149f, 6,336149f, 6,336149f));
	*(&iLocal_0 + 880) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_lawGuys", 2,802597E-45f, Vector(-821,0326f, 95,18906f, 2430,047f), Vector(0.0f, -14,68973f, 0.0f), Vector(4,261597f, 3,14055f, 5,783895f));
	*(&iLocal_0 + 888) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_jailCell", 2,802597E-45f, Vector(-820,8108f, 94,98416f, 2435,933f), Vector(0.0f, -14,8283f, 0.0f), Vector(4,17979f, 3,735707f, 3,873466f));
	*(&iLocal_0 + 920) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "henv_chickenCoop_set");
	*(&iLocal_0 + 896[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Boxchickens", 2,802597E-45f, Vector(-879,557f, 92,20952f, 2429,656f), Vector(0.0f, -338,3949f, 0.0f), Vector(5,210891f, 3,243308f, 4,876128f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 920, &iLocal_0 + 896[0]);
	*(&iLocal_0 + 896[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Boxchickens1", 2,802597E-45f, Vector(-889,2878f, 92,29076f, 2433,418f), Vector(0.0f, 21,60508f, 0.0f), Vector(5,34036f, 3,322412f, 5,117258f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 920, &iLocal_0 + 896[1]);
	*(&iLocal_0 + 928) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_pop_corr02", 2,802597E-45f, Vector(-889,3197f, 92,94892f, 2398,636f), Vector(0.0f, 29,48218f, 0.0f), Vector(37,02348f, 7,523148f, 7,522303f));
	*(&iLocal_0 + 936) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_pop_corr03", 2,802597E-45f, Vector(-872,8254f, 93,54313f, 2351,379f), Vector(0.0f, 29,48218f, 0.0f), Vector(7,51993f, 7,523148f, 36,94432f));
	*(&iLocal_0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "henv_mainHouseCrime", 2,802597E-45f, Vector(-784,2532f, 93,33296f, 2400,242f), Vector(0.0f, 55,46248f, 0.0f), Vector(28,45781f, 18,68317f, 24,66519f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_report_crime", Vector(-821,611f, 93,296f, 2419,131f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_clear_bounty", Vector(-951,2153f, 90,55292f, 2429,154f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 952) = Vector(-817,0843f, 93,80626f, 2426,47f);
	*(&iLocal_0 + 952 + 12) = Vector(0.0f, 166,6764f, 0.0f);
	*(&iLocal_0 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_merc_giver", Vector(-817,0843f, 93,80626f, 2426,47f), Vector(0.0f, 166,6764f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_jail_sit", Vector(-819,6454f, 93,80083f, 2436,405f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_jail_leave_start", Vector(-823,64f, 93,809f, 2427,128f), Vector(0.0f, 349,277f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_jail_leave_end", Vector(-821,8317f, 93,365f, 2421,105f), Vector(0.0f, 348,823f, 0.0f));
	*(&iLocal_0 + 984) = Vector(-951,873f, 90,203f, 2403,878f);
	*(&iLocal_0 + 984 + 12) = Vector(0.0f, 18,952f, 0.0f);
	*(&iLocal_0 + 1008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel1", Vector(-951,873f, 90,203f, 2403,878f), Vector(0.0f, 18,952f, 0.0f));
	*(&iLocal_0 + 1016) = Vector(-954,643f, 90,203f, 2395,419f);
	*(&iLocal_0 + 1016 + 12) = Vector(0.0f, -165,5798f, 0.0f);
	*(&iLocal_0 + 1040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel1", Vector(-954,643f, 90,203f, 2395,419f), Vector(0.0f, -165,5798f, 0.0f));
	*(&iLocal_0 + 1048) = Vector(-878,864f, 90,29f, 2415,872f);
	*(&iLocal_0 + 1048 + 12) = Vector(0.0f, 279,78f, 0.0f);
	*(&iLocal_0 + 1072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel2", Vector(-878,864f, 90,29f, 2415,872f), Vector(0.0f, 279,78f, 0.0f));
	*(&iLocal_0 + 1080) = Vector(-870,42f, 90,615f, 2414.0f);
	*(&iLocal_0 + 1080 + 12) = Vector(0.0f, 464,5006f, 0.0f);
	*(&iLocal_0 + 1104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel2", Vector(-870,42f, 90,615f, 2414.0f), Vector(0.0f, 464,5006f, 0.0f));
	*(&iLocal_0 + 1112) = Vector(-855,173f, 90,371f, 2500,748f);
	*(&iLocal_0 + 1112 + 12) = Vector(0.0f, 278,868f, 0.0f);
	*(&iLocal_0 + 1136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel3", Vector(-855,173f, 90,371f, 2500,748f), Vector(0.0f, 278,868f, 0.0f));
	*(&iLocal_0 + 1144) = Vector(-848,19f, 90,353f, 2499,662f);
	*(&iLocal_0 + 1144 + 12) = Vector(0.0f, 102,7046f, 0.0f);
	*(&iLocal_0 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel3", Vector(-848,19f, 90,353f, 2499,662f), Vector(0.0f, 102,7046f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_cell_leave_end", Vector(-823,6021f, 93,809f, 2427,414f), Vector(0.0f, 348,933f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_cell_leave_cop", Vector(-819,889f, 93,809f, 2432,188f), Vector(0.0f, 180.0f, 0.0f));
	*(&iLocal_0 + 1176) = Vector(-803,0267f, 92,56953f, 2377,659f);
	*(&iLocal_0 + 1176 + 12) = Vector(0.0f, 55,64222f, 0.0f);
	*(&iLocal_0 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_interiorPoint_house2", Vector(-803,0267f, 92,56953f, 2377,659f), Vector(0.0f, 55,64222f, 0.0f));
	*(&iLocal_0 + 1208) = Vector(-830,6995f, 92,54638f, 2359,302f);
	*(&iLocal_0 + 1208 + 12) = Vector(0.0f, 176,8916f, 0.0f);
	*(&iLocal_0 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_interiorPoint_doctor", Vector(-830,6995f, 92,54638f, 2359,302f), Vector(0.0f, 176,8916f, 0.0f));
	*(&iLocal_0 + 1240) = Vector(-840,4033f, 92,36072f, 2369,53f);
	*(&iLocal_0 + 1240 + 12) = Vector(0.0f, 199,4039f, 0.0f);
	*(&iLocal_0 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_interiorPoint_house4", Vector(-840,4033f, 92,36072f, 2369,53f), Vector(0.0f, 199,4039f, 0.0f));
	*(&iLocal_0 + 1272) = Vector(-826,7836f, 92,17664f, 2392,269f);
	*(&iLocal_0 + 1272 + 12) = Vector(0.0f, 164,427f, 0.0f);
	*(&iLocal_0 + 1296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_interiorPoint_store", Vector(-826,7836f, 92,17664f, 2392,269f), Vector(0.0f, 164,427f, 0.0f));
	*(&iLocal_0 + 1304) = Vector(-819,083f, 92,357f, 2399,914f);
	*(&iLocal_0 + 1304 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store", Vector(-819,083f, 92,357f, 2399,914f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1336) = Vector(-817,877f, 92,264f, 2402,042f);
	*(&iLocal_0 + 1336 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store", Vector(-817,877f, 92,264f, 2402,042f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1368) = Vector(-816,149f, 95,328f, 2404,801f);
	*(&iLocal_0 + 1368 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store", Vector(-816,149f, 95,328f, 2404,801f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1400) = Vector(-815,611f, 95,177f, 2399,953f);
	*(&iLocal_0 + 1400 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store", Vector(-815,611f, 95,177f, 2399,953f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1432) = Vector(-949,0801f, 90,5529f, 2426,847f);
	*(&iLocal_0 + 1432 + 12) = Vector(0.0f, 290,1824f, 0.0f);
	*(&iLocal_0 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_interiorPoint_train", Vector(-949,0801f, 90,5529f, 2426,847f), Vector(0.0f, 290,1824f, 0.0f));
	*(&iLocal_0 + 1464) = Vector(-846,0206f, 90,39368f, 2457,682f);
	*(&iLocal_0 + 1464 + 12) = Vector(0.0f, 378,6604f, 0.0f);
	*(&iLocal_0 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "henf_interiorPoint_barn", Vector(-846,0206f, 90,39368f, 2457,682f), Vector(0.0f, 378,6604f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos1", Vector(-880,775f, 102,63f, 2542,3f), Vector(-1,472f, -10,877f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos2", Vector(-956,891f, 99,782f, 2525,1f), Vector(-3,509f, -38,539f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos3", Vector(-1003,491f, 95,121f, 2473,324f), Vector(-2,071f, -66,598f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos4", Vector(-1023,822f, 100,955f, 2414,574f), Vector(-1,346f, -87,311f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos5", Vector(-686,591f, 97,079f, 2496,371f), Vector(-2,199f, 93,689f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos6", Vector(-977,44f, 91,853f, 2463,873f), Vector(8,019f, 112,862f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos7", Vector(-814,197f, 93,422f, 2421,178f), Vector(7,629f, -53,496f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos8", Vector(-805,925f, 94,654f, 2351,136f), Vector(0,712f, 173,182f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos9", Vector(-915,972f, 91,729f, 2439,091f), Vector(2,45f, 68,281f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hen_vista_cam_pos10", Vector(-754,379f, 94,442f, 2449,734f), Vector(0,745f, 76,759f, 0.0f));
	return 1;
}

void Function_65(int iParam0, int iParam1) //Position: 0x5A3C / 23100
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

var Function_66() //Position: 0x5A86 / 23174
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_67(char* cParam0) //Position: 0x5A9B / 23195
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

