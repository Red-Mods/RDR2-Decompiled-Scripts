//Decompiled with MagicRDR v1.0
//Function Count : 82
//Statics Count : 764
//Natives Count : 130
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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 39;
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
	var uLocal_194 = 5;
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
	var uLocal_262 = 3;
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
	var uLocal_284 = 1;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 1;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 4;
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
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 1;
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
	bool bLocal_428 = false;
	int iLocal_429 = 0;
	struct<11> Local_430[15];
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_428 = false;
	iLocal_400 = 0;
	if ((!Function_81(49, 0) && !Function_75(49)) && Global_6606)
	{
		iLocal_429 = 1;
		Function_74(&(Global_43791[iScriptParam_0]), 2048);
	}
	else
	{
		iLocal_429 = 0;
	}
	if (Function_73(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_72(0x4000000);
	}
	Function_71("Initializing BeechersHope", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_401 = 1000;
		switch (iLocal_400)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_400 = 1;
				}
				iLocal_401 = 0;
				break;
			
			case 0x00000001:
				if (Function_70())
				{
					Global_98961 = 0;
					iLocal_400 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
				}
				iLocal_401 = 0;
				break;
			
			case 0x00000002:
				if (Function_61())
				{
					Function_74(&(Global_43791[iScriptParam_0]), 32);
					iLocal_400 = 3;
				}
				iLocal_401 = 0;
				break;
			
			case 0x00000003:
				uLocal_402 = LAUNCH_NEW_SCRIPT_WITH_ARGS("BeechersHopeVol", &iScriptParam_0, 2, 0);
				Function_60(&Global_12482, &Global_14968, iScriptParam_0);
				iLocal_400 = 5;
				iLocal_401 = 0;
				break;
			
			case 0x00000005:
				if (Function_59(&Global_12482, &Global_14968, iScriptParam_0))
				{
					iLocal_400 = 4;
					iLocal_401 = 0;
				}
				else
				{
					iLocal_401 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_58(&(Global_43791[iScriptParam_0]), 16) && Function_57(Global_44085[iScriptParam_09]))
				{
					iLocal_400 = 6;
				}
				iLocal_401 = 0;
				break;
			
			case 0x00000006:
				if (IS_PERS_CHAR_VALID(&(Global_15402[1214])))
				{
					if (Function_81(53, 0) && (!Function_81(56, 0) || !Function_81(51, 0)))
					{
						Function_56(StackVal, 12, &Local_430, Vector(-104,413f, 119,521f, 1367,917f));
						Function_55(StackVal, 12, &Local_430, Vector(-104,413f, 119,521f, 1367,917f));
						Function_54(StackVal, 12, &Local_430, Vector(-104,413f, 119,521f, 1367,917f));
						Function_53(StackVal, 12, &Local_430, Vector(-104,413f, 119,521f, 1367,917f));
						Function_52(StackVal, 12, &Local_430, Vector(-104,413f, 119,521f, 1367,917f));
						Function_50(StackVal, 12, &Local_430, Vector(-104,826f, 119,489f, 1368,328f));
						Function_49(&(Global_15402[1214]), &(Local_430[1211]));
					}
					else
					{
						Function_56(StackVal, 12, &Local_430, Vector(-108,119f, 119,477f, 1357,974f));
						Function_55(StackVal, 12, &Local_430, Vector(-116,552f, 118,869f, 1346,602f));
						Function_54(StackVal, 12, &Local_430, Vector(-108,119f, 119,477f, 1357,974f));
						Function_53(StackVal, 12, &Local_430, Vector(-116,552f, 118,869f, 1346,602f));
						Function_52(StackVal, 12, &Local_430, Vector(-108,119f, 119,477f, 1357,974f));
						Function_50(StackVal, 12, &Local_430, Vector(-104,826f, 119,489f, 1368,328f));
						Function_49(&(Global_15402[1214]), &(Local_430[1211]));
					}
				}
				Function_45(&Global_12482, &Global_14968, &uLocal_404, &Global_10996, iScriptParam_0);
				if (Function_58(&(Global_43791[iScriptParam_0]), 256) || !Function_73(2))
				{
					iLocal_429 = 1;
				}
				Function_40(11, &iLocal_16 + 1256, &iLocal_16 + 696, 0, 0, 0, &iLocal_4 + 40);
				if (Function_81(49, 0))
				{
					if (Global_26200[1114].f_40 == 6)
					{
						Global_26200[1114].f_40 = 3;
					}
				}
				Function_40(12, &iLocal_16 + 1520, &iLocal_16 + 664, 0, 0, 0, &iLocal_4 + 40);
				Function_74(&(Global_43791[iScriptParam_0]), 8);
				if (Function_58(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_39(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_400 = 10;
				}
				else
				{
					iLocal_400 = 7;
				}
				iLocal_401 = 0;
				break;
			
			case 0x00000007:
				iLocal_400 = 8;
				iLocal_401 = 0;
				break;
			
			case 0x00000008:
				Function_35(2, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				Function_31(2, 4294967295, 4294967295, 0, 3);
				Function_30(64);
				Function_27(&iLocal_4);
				Function_74(&(Global_43791[iScriptParam_0]), 512);
				iLocal_401 = 0;
				iLocal_400 = 9;
				break;
			
			case 0x00000009:
				Function_25(&iLocal_4, iScriptParam_0);
				Function_74(&(Global_43791[iScriptParam_0]), 4);
				Function_24("Finished Initializing BeechersHope", 5.0f);
				iLocal_401 = 0;
				iLocal_400 = 10;
				break;
			
			case 0x0000000A:
				if (!Function_23(Global_98961, 1))
				{
					if (Function_21(&(Global_46914[1]), 0))
					{
						Function_20(&Global_98961, 1);
					}
				}
				if (!bLocal_428)
				{
					if (!Function_81(48, 0))
					{
						bLocal_428 = Function_17(StackVal, Vector(-75,95f, 116,86f, 1418,33f), 0, 0);
					}
				}
				if (Function_58(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_400 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_401);
	}
	if ((!Function_81(49, 0) && !Function_75(49)) && Global_6606)
	{
		Function_74(&(Global_43791[iScriptParam_0]), 2048);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	Function_7(&Global_12482, &Global_14968, iScriptParam_0, (iLocal_429 || Global_6623));
	Function_6();
	Function_1();
	Function_39(&(Global_43791[iScriptParam_0]), 32);
	Function_39(&(Global_43791[iScriptParam_0]), 64);
	Function_39(&(Global_43791[iScriptParam_0]), 8);
	Function_39(&(Global_43791[iScriptParam_0]), 512);
	Function_39(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_402))
	{
		TERMINATE_SCRIPT(&uLocal_402);
	}
	Function_24("Unloaded BeechersHope", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x5BC / 1468
{
	Function_2(&iLocal_16 + 8);
	RELEASE_LAYOUT_REF(&iLocal_16);
	return;
}

void Function_2(int iParam0) //Position: 0x5CF / 1487
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

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x5F7 / 1527
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

void Function_4(struct<13> Param0) //Position: 0x742 / 1858
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x75F / 1887
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x77D / 1917
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_7(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x789 / 1929
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
	strcpy(&cVar0, Function_15(bParam2), 64);
	if (Function_14())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_58(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_39(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_58(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_73(2) || Function_58(&(Global_43791[bParam2]), 256))
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
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_74(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_8(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9A7 / 2471
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_11(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_10(Global_43790), Function_9(Global_43790), false, 0);
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
		ADD_TIME(&Param0[iParam22] + 8, Function_10(Global_43790), Function_9(Global_43790), false, 0);
	}
}

int Function_9(int iParam0) //Position: 0xB0D / 2829
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

int Function_10(int iParam0) //Position: 0xB38 / 2872
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

void Function_11(var uParam0, int iParam1) //Position: 0xB6C / 2924
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0xB7D / 2941
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xB97 / 2967
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_14() //Position: 0xBB4 / 2996
{
	if (Function_23(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_15(int iParam0) //Position: 0xBCF / 3023
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

bool Function_16(int iParam0) //Position: 0x107D / 4221
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_17(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x1093 / 4243
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_19(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_18(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_18(&(uVar0[1]), "UseCase1"));
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

var Function_18(int iParam0, int iParam1) //Position: 0x1210 / 4624
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&iParam0, &iParam1);
}

void Function_19(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x121F / 4639
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &iParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &iParam0);
		if (!Function_14())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &iParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &iParam0, 2.0f, 0);
		}
	}
}

void Function_20(var uParam0, int iParam1) //Position: 0x1369 / 4969
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_21(int iParam0, bool bParam1) //Position: 0x137A / 4986
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_22(iParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_22(iParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_22(iParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_22(iParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(&uVar0))
		{
			if (!IS_PROP_FIXED(&uVar0))
			{
				SET_PROP_FIXED(&uVar0, 1);
			}
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

struct<8> Function_22(int iParam0, int iParam1, bool bParam2) //Position: 0x144F / 5199
{
	if (iParam0 == Global_46816[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_23(var uParam0, int iParam1) //Position: 0x19FB / 6651
{
	return (uParam0 && iParam1) == 0;
}

void Function_24(char* cParam0) //Position: 0x1A08 / 6664
{
	if (!Function_73(128))
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

void Function_25(int iParam0, bool bParam1) //Position: 0x1A48 / 6728
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
		Function_26(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x1B38 / 6968
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_27(int iParam0) //Position: 0x1B45 / 6981
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_29(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_28(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_28(var uParam0) //Position: 0x1C41 / 7233
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_29() //Position: 0x1C5E / 7262
{
	int iVar0;
	
	return &iVar0;
}

void Function_30(int iParam0) //Position: 0x1C67 / 7271
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_31(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1C7A / 7290
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
		Function_32();
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

void Function_32() //Position: 0x1D68 / 7528
{
	int iVar0;
	
	Global_41176 = Function_33(StackVal);
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

int Function_33(int iParam0) //Position: 0x1DB6 / 7606
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_34(bool bParam0) //Position: 0x1DCE / 7630
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_35(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1DE3 / 7651
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
	*(&Global_43580 + 24) = &uParam3;
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
		Function_38();
	}
	if (&bParam5)
	{
		Function_36(1048576);
	}
}

void Function_36(int iParam0) //Position: 0x1EF1 / 7921
{
	Function_37(&Global_43580, iParam0);
	return;
}

void Function_37(var uParam0, var uParam1) //Position: 0x1EFF / 7935
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_38() //Position: 0x1F1E / 7966
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_36(16384);
	}
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x1F3A / 7994
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_40(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1F54 / 8020
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_44(&uParam1, &uParam2);
	if (!Function_43(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&iParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_42(&iParam4, 0);
		}
		else
		{
			Function_41(&iParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_42(&iParam5, 0);
		}
		else
		{
			Function_41(&iParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		*(&Global_26200[iParam014] + 104) = &uParam1;
		if (Global_26200[iParam014].f_40 != 3 || !Global_6606)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), true);
			DECOR_SET_BOOL(&uParam1, "SavingAtBedAllowed", 1);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), false);
			if (DECOR_CHECK_EXIST(&uParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(&uParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(&iParam6))
	{
		GET_OBJECT_POSITION(&iParam6, &uVar0);
		uVar2[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		uVar2[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(&(uVar2[0])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_18(&(uVar2[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[0]), 0);
		}
		if (IS_GRINGO_VALID(&(uVar2[1])))
		{
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_18(&(uVar2[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar6) && !&iVar6 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar6);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[1]), 0);
		}
		if (Global_26200[iParam014].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(&iParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(&iParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(&iParam6, "PlayerHouse_NoHorse", 1);
		}
	}
	*(&Global_26200[iParam014] + 80) = &iParam4;
	*(&Global_26200[iParam014] + 88) = &iParam5;
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 56))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 56);
		(&Global_26200[iParam014] + 56) = "";
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 64))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 64);
		(&Global_26200[iParam014] + 64) = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iParam014] + 72))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iParam014] + 72);
		(&Global_26200[iParam014] + 72) = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(&uParam2, &(Global_26200[iParam014]));
	}
	Global_26200[iParam014].f_12 = GET_OBJECT_HEADING(&uParam2);
	GET_OBJECT_POSITION(&iParam3, &Global_26200[iParam014] + 16);
	*(&Global_26200[iParam014] + 96) = &iParam6;
}

void Function_41(var uParam0, int iParam1) //Position: 0x2324 / 8996
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

void Function_42(var uParam0, int iParam1) //Position: 0x237F / 9087
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

bool Function_43(int iParam0) //Position: 0x23D7 / 9175
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_44(var uParam0, int iParam1) //Position: 0x23ED / 9197
{
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(&uParam0), "nPlayerUse", "MyRestartFlag", &iParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

void Function_45(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x254B / 9547
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_73(2))
	{
		return;
	}
	if (Function_58(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_13(&(Param0[iVar02]), 2))
		{
			if (Function_46(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_39(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_74(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_46(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2603 / 9731
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_58(&(Global_43791[iParam5]), 256))
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
		(&iParam1 + 16) = Function_48(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_47(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_12(&iParam0, 4);
	}
	Function_49(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

bool Function_47(vector3 vParam0) //Position: 0x2784 / 10116
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_48(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x279C / 10140
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_29(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

int Function_49(int iParam0, struct<2> Param1) //Position: 0x28C3 / 10435
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_47(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_47(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_47(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_47(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_47(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_47(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_50(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2A09 / 10761
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_51(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_51(struct<2> Param0, struct<2> Param2) //Position: 0x2A70 / 10864
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_52(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2A9C / 10908
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_51(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_53(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2B05 / 11013
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_51(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_54(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2B70 / 11120
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_51(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_55(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2BD6 / 11222
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_51(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_56(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2C3F / 11327
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_51(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_57(int iParam0) //Position: 0x2CA3 / 11427
{
	if (!Function_16(iParam0))
	{
		return 1;
	}
	return Function_58(&(Global_43791[iParam0]), 4);
}

bool Function_58(var uParam0, int iParam1) //Position: 0x2CBF / 11455
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_59(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2CDC / 11484
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
	if (Function_58(&(Global_43791[iParam2]), 0x40000000))
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

void Function_60(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2DC5 / 11717
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
	if (!Function_58(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_74(&(Global_43791[iParam2]), 0x40000000);
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

bool Function_61() //Position: 0x2EB5 / 11957
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
	
	Function_69(3, 3);
	uVar0 = &uVar0;
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/cow_knl", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_begging", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/pet_dog", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_cleanwindow_w_any", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_hay_bale", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_67(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_dusting", 1, 0);
	if (!Function_62(&iLocal_16 + 8))
	{
		return 0;
	}
	iLocal_16 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_16))
	{
		iLocal_16 = CREATE_LAYOUT("BeechersHope_layout");
	}
	*(&iLocal_16 + 640) = Vector(-107,2321f, 119,5577f, 1366,284f);
	*(&iLocal_16 + 640 + 12) = Vector(0.0f, 55,70536f, 0.0f);
	*(&iLocal_16 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_save_flag_JACK", Vector(-107,2321f, 119,5577f, 1366,284f), Vector(0.0f, 55,70536f, 0.0f));
	*(&iLocal_16 + 672) = Vector(-100,4297f, 119,5743f, 1354,821f);
	*(&iLocal_16 + 672 + 12) = Vector(0.0f, 58,4006f, 0.0f);
	*(&iLocal_16 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_save_flag_BEH", Vector(-100,4297f, 119,5743f, 1354,821f), Vector(0.0f, 58,4006f, 0.0f));
	*(&iLocal_16 + 704) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", &iLocal_16, 8, 0);
	*(&iLocal_16 + 712[03]) = Vector(-105,4197f, 119,5033f, 1373,529f);
	*(&iLocal_16 + 712[03] + 12) = Vector(0.0f, 179,3702f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep1_1", Vector(-105,4197f, 119,5033f, 1373,529f), Vector(0.0f, 179,3702f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_16 + 704);
	*(&iLocal_16 + 712[13]) = Vector(-108,0978f, 119,5118f, 1371,784f);
	*(&iLocal_16 + 712[13] + 12) = Vector(0.0f, 139,5811f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep2_1", Vector(-108,0978f, 119,5118f, 1371,784f), Vector(0.0f, 139,5811f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_16 + 704);
	*(&iLocal_16 + 712[23]) = Vector(-111,8172f, 119,5901f, 1370,219f);
	*(&iLocal_16 + 712[23] + 12) = Vector(-170,5704f, 63,91483f, -180,1553f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep3_1", Vector(-111,8172f, 119,5901f, 1370,219f), Vector(-170,5704f, 63,91483f, -180,1553f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_16 + 704);
	*(&iLocal_16 + 712[33]) = Vector(-114,1426f, 119,5033f, 1368,287f);
	*(&iLocal_16 + 712[33] + 12) = Vector(0.0f, -182,395f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep4_1", Vector(-114,1426f, 119,5033f, 1368,287f), Vector(0.0f, -182,395f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_16 + 704);
	*(&iLocal_16 + 712[43]) = Vector(-103,9247f, 119,5118f, 1370,959f);
	*(&iLocal_16 + 712[43] + 12) = Vector(0.0f, 50,88084f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "done_1", Vector(-103,9247f, 119,5118f, 1370,959f), Vector(0.0f, 50,88084f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_16 + 704);
	*(&iLocal_16 + 840) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", &iLocal_16, 8, 0);
	*(&iLocal_16 + 848[03]) = Vector(-110,1809f, 119,5033f, 1355,216f);
	*(&iLocal_16 + 848[03] + 12) = Vector(0.0f, 199,9467f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep1_2", Vector(-110,1809f, 119,5033f, 1355,216f), Vector(0.0f, 199,9467f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_16 + 840);
	*(&iLocal_16 + 848[13]) = Vector(-112,2184f, 119,5118f, 1358,335f);
	*(&iLocal_16 + 848[13] + 12) = Vector(0.0f, -76,55879f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep2_2", Vector(-112,2184f, 119,5118f, 1358,335f), Vector(0.0f, -76,55879f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_16 + 840);
	*(&iLocal_16 + 848[23]) = Vector(-108,4821f, 119,5033f, 1360,458f);
	*(&iLocal_16 + 848[23] + 12) = Vector(0.0f, -142,6832f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep3_2", Vector(-108,4821f, 119,5033f, 1360,458f), Vector(0.0f, -142,6832f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_16 + 840);
	*(&iLocal_16 + 848[33]) = Vector(-106,9941f, 119,5033f, 1358,121f);
	*(&iLocal_16 + 848[33] + 12) = Vector(0.0f, -81,75877f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sweep4_2", Vector(-106,9941f, 119,5033f, 1358,121f), Vector(0.0f, -81,75877f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_16 + 840);
	*(&iLocal_16 + 848[43]) = Vector(-108,4515f, 119,4611f, 1353,988f);
	*(&iLocal_16 + 848[43] + 12) = Vector(0,02209556f, -118,8418f, -0,1335062f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "done_2", Vector(-108,4515f, 119,4611f, 1353,988f), Vector(0,02209556f, -118,8418f, -0,1335062f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_16 + 840);
	*(&iLocal_16 + 976) = CREATE_OBJECTSET_IN_LAYOUT("dustgrp3Set", &iLocal_16, 8, 0);
	*(&iLocal_16 + 984[03]) = Vector(1,273794f, -2,993408f, -2,225903f);
	*(&iLocal_16 + 984[03] + 12) = Vector(0.0f, 101,8641f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nFlag_up_3", Vector(1,273794f, -2,993408f, -2,225903f), Vector(0.0f, 101,8641f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "up");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_16 + 976);
	*(&iLocal_16 + 984[13]) = Vector(6,963618f, -3,006767f, 2,015471f);
	*(&iLocal_16 + 984[13] + 12) = Vector(0.0f, 152,1741f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag_mid_3", Vector(6,963618f, -3,006767f, 2,015471f), Vector(0.0f, 152,1741f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "mid");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_16 + 976);
	*(&iLocal_16 + 984[23]) = Vector(9,50996f, -2,944557f, -0,4558564f);
	*(&iLocal_16 + 984[23] + 12) = Vector(0.0f, 152,1741f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag_low_3", Vector(9,50996f, -2,944557f, -0,4558564f), Vector(0.0f, 152,1741f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "low");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_16 + 976);
	*(&iLocal_16 + 1064) = CREATE_OBJECTSET_IN_LAYOUT("haygrp5Set", &iLocal_16, 8, 0);
	*(&iLocal_16 + 1072[03]) = Vector(-43,91641f, 116,3913f, 1424,329f);
	*(&iLocal_16 + 1072[03] + 12) = Vector(0.0f, -75,76684f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nputdown_5", Vector(-43,91641f, 116,3913f, 1424,329f), Vector(0.0f, -75,76684f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_16 + 1064);
	DECOR_SET_INT(&uVar14, "FlagSetNum", 5);
	*(&iLocal_16 + 1104) = CREATE_OBJECTSET_IN_LAYOUT("corngrp6Set", &iLocal_16, 8, 0);
	*(&iLocal_16 + 1112[03]) = Vector(-72,68994f, 117,9034f, 1372,789f);
	*(&iLocal_16 + 1112[03] + 12) = Vector(0.0f, -73,22466f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nputdown_6", Vector(-72,68994f, 117,9034f, 1372,789f), Vector(0.0f, -73,22466f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_16 + 1104);
	DECOR_SET_INT(&uVar15, "FlagSetNum", 6);
	*(&iLocal_16 + 1144) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrp7Set", &iLocal_16, 8, 0);
	*(&iLocal_16 + 1152[03]) = Vector(-66,1328f, 116,8612f, 1419,525f);
	*(&iLocal_16 + 1152[03] + 12) = Vector(0.0f, -28,12998f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pour01_7", Vector(-66,1328f, 116,8612f, 1419,525f), Vector(0.0f, -28,12998f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_16 + 1144);
	DECOR_SET_INT(&uVar16, "FlagSetNum", 7);
	*(&iLocal_16 + 1152[13]) = Vector(-56,61061f, 116,8612f, 1405,268f);
	*(&iLocal_16 + 1152[13] + 12) = Vector(0.0f, 130,9747f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pour02_7", Vector(-56,61061f, 116,8612f, 1405,268f), Vector(0.0f, 130,9747f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_16 + 1144);
	DECOR_SET_INT(&uVar17, "FlagSetNum", 7);
	*(&iLocal_16 + 1152[23]) = Vector(-72,68713f, 116,8611f, 1413,265f);
	*(&iLocal_16 + 1152[23] + 12) = Vector(0.0f, 244,0819f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pour03_7", Vector(-72,68713f, 116,8611f, 1413,265f), Vector(0.0f, 244,0819f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_16 + 1144);
	DECOR_SET_INT(&uVar18, "FlagSetNum", 7);
	*(&iLocal_16 + 1152[33]) = Vector(-58,56321f, 116,8612f, 1411,939f);
	*(&iLocal_16 + 1152[33] + 12) = Vector(0.0f, -34,14276f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "drop_7", Vector(-58,56321f, 116,8612f, 1411,939f), Vector(0.0f, -34,14276f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_16 + 1144);
	DECOR_SET_INT(&uVar19, "FlagSetNum", 7);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_horseshoe", "stand_horseshoe", Vector(-68,081f, 116,862f, 1401,589f), Vector(0.0f, -112,5008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Pee", "Pee", Vector(-47,30545f, 116,0642f, 1403,5f), Vector(0.0f, -143,124f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel", "repair_kneel", Vector(-62,85281f, 116,88f, 1420,207f), Vector(0.0f, -26,97176f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_smoke1", "sit_ground_smoke", Vector(-68,3712f, 117,8994f, 1375,234f), Vector(0.0f, 177,5229f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-70,73973f, 116,8612f, 1410,74f), Vector(0.0f, 24,8673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-124,2164f, 118,8691f, 1360,034f), Vector(0.0f, 122,5013f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_smoke2", "sit_ground_smoke", Vector(-134,6759f, 118,8691f, 1344,804f), Vector(0.0f, -95,58513f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_wall", "stand_hammer_wall", Vector(-68,88495f, 116,8612f, 1407,315f), Vector(0.0f, -119,7389f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand4", "smoking_stand", Vector(-56,22635f, 116,8503f, 1404f), Vector(0.0f, 112,4391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand5", "smoking_stand", Vector(-99,54283f, 119,5089f, 1364,756f), Vector(0.0f, 244,8431f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_table", "stand_hammer_table", Vector(-70,29629f, 116,955f, 1413,849f), Vector(0.0f, -251,781f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_docks2", "nsit_docks", Vector(-65,8644f, 120,0907f, 1414,059f), Vector(0.0f, -381,1815f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-33,25951f, 109,3224f, 1231,643f), Vector(0.0f, -170,6252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel1", "repair_kneel", Vector(-39,47673f, 116,8544f, 1404,335f), Vector(0.0f, -191,9064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "repair_kneel2", "repair_kneel", Vector(-71,53109f, 117,893f, 1371,573f), Vector(0.0f, -77,70592f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-106,5684f, 119,4729f, 1374,202f), Vector(0.0f, 144,8407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "horse_tend1", "horse_tend", Vector(-61,121f, 116,862f, 1409,782f), Vector(0.0f, 154,0079f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "horse_tend3", "horse_tend", Vector(-114,9358f, 118,8691f, 1352f), Vector(0.0f, 48,57609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl", "cow_knl", Vector(-36,66331f, 116,7444f, 1431,112f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl1", "cow_knl", Vector(-40,53645f, 116,5308f, 1427,849f), Vector(0.0f, -22,36959f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl2", "cow_knl", Vector(-36,43493f, 116,7302f, 1426,232f), Vector(0.0f, -40,66824f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl3", "cow_knl", Vector(-35,03898f, 116,812f, 1431,223f), Vector(0.0f, -16,64305f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl4", "cow_knl", Vector(-37,28973f, 116,6848f, 1427,886f), Vector(0.0f, -110,3049f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl5", "cow_knl", Vector(-33,80853f, 116,809f, 1425,674f), Vector(0.0f, -110,1721f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl6", "cow_knl", Vector(-37,8181f, 116,6578f, 1429,349f), Vector(0.0f, -44,75875f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "cow_knl7", "cow_knl", Vector(-34,00191f, 116,8029f, 1427,975f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Drink", Vector(-30,42544f, 109,4274f, 1234,323f), Vector(0.0f, 90,44947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-35,28805f, 109,3499f, 1234,094f), Vector(0.0f, -103,2497f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-31,28155f, 109,4274f, 1232,223f), Vector(0.0f, 164,4735f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-31,12493f, 109,6657f, 1237,315f), Vector(0.0f, -285,5465f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "campfire_talk", "campfire_talk", Vector(-34,17603f, 109,4274f, 1236,422f), Vector(0.0f, -140,1742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nsit_docks", "nsit_docks", Vector(-72,96541f, 126,6906f, 1368,62f), Vector(0.0f, 57,12511f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_wife", "look_out_window_L", Vector(-96,10863f, 119,489f, 1355,567f), Vector(0.0f, -123,7328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_sleep_BEH", "player_sleep_bed_L", Vector(-97,59983f, 119,506f, 1356,074f), Vector(0.0f, 147,1008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1256), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L_talking1f", "look_out_window_R", Vector(-115,3381f, 119,4791f, 1370,451f), Vector(0.0f, 144,8407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_docks3", "look_out_window_L", Vector(-68,90897f, 119,9008f, 1410,369f), Vector(0.0f, -298,0027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nuse_shelf", "nuse_shelf", Vector(-103,8778f, 119,4992f, 1350,666f), Vector(0.0f, -65,56792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1264), 0);
	*(&iLocal_16 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "kneel_hammer", "kneel_hammer", Vector(-110,5367f, 119,0837f, 1345,096f), Vector(0.0f, 328,9553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1272), 0);
	*(&iLocal_16 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "use_shelf1", "nuse_shelf", Vector(-111,8043f, 119,0837f, 1344,289f), Vector(0.0f, -32,36226f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1280), 0);
	*(&iLocal_16 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-114,1781f, 119,0837f, 1345,989f), Vector(0.0f, 146,1789f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1288), 0);
	*(&iLocal_16 + 1296) = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sleep_uncle", "lie_sleep_on_bed_l", Vector(-113,7102f, 119,5028f, 1361,113f), Vector(0.0f, 60,53054f, 0.0f)), &iLocal_16 + 1296);
	*(&iLocal_16 + 1304) = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-113,3007f, 119,0837f, 1344,679f), Vector(0.0f, 179,1369f, 0.0f)), &iLocal_16 + 1304);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sleep_jack", "lie_sleep_on_bed_l", Vector(-104,4134f, 119,5213f, 1367,917f), Vector(0.0f, -29,91541f, 0.0f)), &iLocal_16 + 1304);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", Vector(-101,8226f, 119,5891f, 1361,562f), Vector(0.0f, 80,84962f, 0.0f)), &iLocal_16 + 1304);
	*(&iLocal_16 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fake_horseshoe1", "fake_horseshoe", Vector(-129,444f, 118,9213f, 1354,36f), Vector(0.0f, 105,6435f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1312), 0);
	*(&iLocal_16 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Locked_Footlocker", "Locked_Footlocker", Vector(-98,43189f, 119,521f, 1353,811f), Vector(0.0f, 148,9373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1320), 0);
	DECOR_SET_BOOL(&iLocal_16 + 1320, "PlayerHouseChest", 1);
	*(&iLocal_16 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fake_horseshoe2", "fake_horseshoe", Vector(-125,614f, 118,863f, 1365,313f), Vector(0.0f, 21,74f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1328), 0);
	*(&iLocal_16 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_wall1", "stand_hammer_wall", Vector(-116,9523f, 118,833f, 1345,114f), Vector(0.0f, -123,4636f, 0.0f));
	*(&iLocal_16 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping", "dog_sleeping", Vector(-105,1306f, 119,4894f, 1369,151f), Vector(0.0f, 10,65152f, 0.0f));
	*(&iLocal_16 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging", "dog_begging", Vector(-118,6403f, 118,8691f, 1373,118f), Vector(0.0f, -102,6573f, 0.0f));
	*(&iLocal_16 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging1", "dog_begging", Vector(-100,9568f, 118,8691f, 1347,297f), Vector(0.0f, -165,343f, 0.0f));
	*(&iLocal_16 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_table", "lean_table", Vector(-108,1174f, 119,5028f, 1357,445f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_16 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_table1", "lean_table", Vector(-109,4603f, 119,5028f, 1356,463f), Vector(0.0f, -55,72653f, 0.0f));
	*(&iLocal_16 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging2", "dog_begging", Vector(-119,7795f, 118,8691f, 1347,713f), Vector(0.0f, -64,84069f, 0.0f));
	*(&iLocal_16 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping1", "dog_sleeping", Vector(-120,834f, 118,8691f, 1345,187f), Vector(0.0f, -124,8037f, 0.0f));
	*(&iLocal_16 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sitting", "dog_sitting", Vector(-121,8695f, 118,8691f, 1347,471f), Vector(0.0f, -76,92809f, 0.0f));
	*(&iLocal_16 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sitting1", "dog_sitting", Vector(-75,28917f, 116,8612f, 1406,281f), Vector(0.0f, -76,92809f, 0.0f));
	*(&iLocal_16 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping2", "dog_sleeping", Vector(-73,05419f, 116,8612f, 1404,079f), Vector(0.0f, -152,1074f, 0.0f));
	*(&iLocal_16 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pet_dog", "pet_dog", Vector(-119,0552f, 118,8691f, 1349,283f), Vector(0.0f, -23,58746f, 0.0f));
	*(&iLocal_16 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pet_dog1", "pet_dog", Vector(-118,3628f, 118,8691f, 1374,42f), Vector(0.0f, -52,3928f, 0.0f));
	*(&iLocal_16 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pet_dog2", "pet_dog", Vector(-74,32178f, 116,8612f, 1404,78f), Vector(0.0f, -122,4743f, 0.0f));
	*(&iLocal_16 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sitting2", "dog_sitting", Vector(-99,43192f, 118,7265f, 1346,955f), Vector(0.0f, -203,4876f, 0.0f));
	*(&iLocal_16 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pet_dog3", "pet_dog", Vector(-97,72821f, 118,2989f, 1347,766f), Vector(0.0f, 138,3672f, 0.0f));
	*(&iLocal_16 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Locked_Footlocker1", "Locked_Footlocker", Vector(-110,9382f, 122,7085f, 1357,436f), Vector(0.0f, -55,68401f, 0.0f));
	DECOR_SET_INT(&iLocal_16 + 1464, "Give_AvatarItem", 3);
	*(&iLocal_16 + 1472) = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_cleanwindow_w_any", "stand_cleanwindow_w_any", Vector(-108,8618f, 119,4979f, 1369,334f), Vector(0.0f, -31,46099f, 0.0f)), &iLocal_16 + 1472);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_cleanwindow_w_any1", "stand_cleanwindow_w_any", Vector(-107,6191f, 119,4979f, 1370,094f), Vector(0.0f, -31,46099f, 0.0f)), &iLocal_16 + 1472);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_cleanwindow_w_any2", "stand_cleanwindow_w_any", Vector(-103,4612f, 119,4979f, 1370,084f), Vector(0.0f, 57,97958f, 0.0f)), &iLocal_16 + 1472);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_cleanwindow_w_any3", "stand_cleanwindow_w_any", Vector(-100,2437f, 119,4979f, 1364,939f), Vector(0.0f, 57,97958f, 0.0f)), &iLocal_16 + 1472);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_stirringpot_w_any", "stand_stirringpot_w_any", Vector(-107,766f, 119,4992f, 1351,867f), Vector(0.0f, -374,9603f, 0.0f)), &iLocal_16 + 1472);
	*(&iLocal_16 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_bucket7", "Multistage_bucket", Vector(-58,56321f, 116,8612f, 1411,939f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1480), 0);
	DECOR_SET_INT(&iLocal_16 + 1480, "FlagSetNum", 7);
	*(&iLocal_16 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_hay_bale6", "Multistage_hay_bale", Vector(-74,75643f, 116,7162f, 1427,312f), Vector(0.0f, -327,5011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1488), 0);
	DECOR_SET_INT(&iLocal_16 + 1488, "FlagSetNum", 6);
	*(&iLocal_16 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_sweeping1", "Multistage_sweeping", Vector(-103,9247f, 119,4873f, 1370,959f), Vector(0.0f, -122,2566f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1496), 0);
	DECOR_SET_INT(&iLocal_16 + 1496, "FlagSetNum", true);
	*(&iLocal_16 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_sweeping2", "Multistage_sweeping", Vector(-108,4515f, 119,4911f, 1353,988f), Vector(0.0f, 58,7788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1504), 0);
	DECOR_SET_INT(&iLocal_16 + 1504, "FlagSetNum", 2);
	*(&iLocal_16 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_dusting3", "Multistage_dusting", Vector(-111,2221f, 119,4896f, 1359,888f), Vector(0.0f, 100,8621f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_16 + 1512), 0);
	DECOR_SET_INT(&iLocal_16 + 1512, "FlagSetNum", 3);
	*(&iLocal_16 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_sleep_JACK", "player_sleep_bed_L", Vector(-104,6258f, 119,5213f, 1368,267f), Vector(0.0f, -31,28675f, 0.0f));
	*(&iLocal_16 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "wife_bed", "lie_sleep_on_bed_l", Vector(-99,25463f, 119,547f, 1358,703f), Vector(0.0f, -30,35554f, 0.0f));
	return 1;
}

bool Function_62(struct<2>[] Param0) //Position: 0x5D26 / 23846
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_66();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_65(&(Param0[iVar02]), 8);
		}
		else if (Function_64())
		{
			iVar1 = 1;
			Function_65(&(Param0[iVar02]), 8);
		}
		Function_65(&(Param0[iVar02]), 16);
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
				Function_65(&(Param0[iVar02]), 1);
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
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_65(&(Param0[iVar02]), 2);
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
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_65(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_65(&(Param0[iVar02]), 2);
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
	Function_63();
	return 1;
}

void Function_63() //Position: 0x60E8 / 24808
{
	if (!Function_73(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_64() //Position: 0x6128 / 24872
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

void Function_65(struct<13> Param0) //Position: 0x6156 / 24918
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_66() //Position: 0x6169 / 24937
{
	if (!Function_73(128))
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

var Function_67(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x61AB / 25003
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_68(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_65(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_68(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x61E9 / 25065
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_65(&(Param0[iVar02]), 4);
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

void Function_69(int iParam0, int iParam1) //Position: 0x62B8 / 25272
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

bool Function_70() //Position: 0x6302 / 25346
{
	var uVar0;
	
	Function_69(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("BeechersHope_layout");
	}
	*(&iLocal_4 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_ring", 4,203895E-45f, Vector(-39,807f, 118,0408f, 1421,272f), Vector(0.0f, 250,874f, 0.0f), Vector(10,66521f, 3,031578f, 9,346188f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_HorseBreaking", Vector(-39,807f, 116,861f, 1421,272f), Vector(0.0f, 250,874f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag_helper", Vector(-38,2962f, 116,861f, 1419,669f), Vector(0.0f, 281,199f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerpos", Vector(-36,231f, 116,861f, 1418,899f), Vector(0.0f, 155,044f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker", Vector(-37,93142f, 116,8612f, 1424,651f), Vector(0.0f, 27,66844f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker1", Vector(-36f, 116,8612f, 1423,091f), Vector(0.0f, 68,23293f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker2", Vector(-40,69986f, 116,8612f, 1424,7f), Vector(0.0f, -13,77079f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_onlooker3", Vector(-41,96623f, 116,8612f, 1417,966f), Vector(0.0f, -149,4004f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_BullRiding", Vector(-39,807f, 116,861f, 1421,272f), Vector(0.0f, -110,6603f, 0.0f));
	*(&iLocal_4 + 16) = Vector(-110,2831f, 118,8691f, 1374,114f);
	*(&iLocal_4 + 16 + 12) = Vector(0.0f, -137,9937f, 0.0f);
	*(&iLocal_4 + 40) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-110,2831f, 118,8691f, 1374,114f), Vector(0.0f, -137,9937f, 0.0f));
	return 1;
}

void Function_71(char* cParam0) //Position: 0x655B / 25947
{
	if (!Function_73(128))
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

void Function_72(int iParam0) //Position: 0x6598 / 26008
{
	int iVar0;
	
	if (Function_23(iParam0, 1) && Function_23(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_73(int iParam0) //Position: 0x65CC / 26060
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_74(var uParam0, int iParam1) //Position: 0x65E8 / 26088
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_75(int iParam0) //Position: 0x65F9 / 26105
{
	int iVar0;
	
	if (!Function_80(iParam0))
	{
		return 0;
	}
	iVar0 = Function_79(iParam0);
	if (!Function_76(Function_79(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_76(int iParam0) //Position: 0x662F / 26159
{
	if (!Function_78(iParam0))
	{
		return 0;
	}
	if (!Function_77(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x6653 / 26195
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_78(int iParam0) //Position: 0x6668 / 26216
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_79(int iParam0) //Position: 0x667F / 26239
{
	if (!Function_80(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_80(int iParam0) //Position: 0x6699 / 26265
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0, bool bParam1) //Position: 0x66AF / 26287
{
	int iVar0;
	
	iVar0 = Function_79(iParam0);
	if (!Function_78(iVar0))
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

