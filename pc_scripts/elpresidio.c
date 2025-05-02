//Decompiled with MagicRDR v1.0
//Function Count : 81
//Statics Count : 529
//Natives Count : 115
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
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 29;
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
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	vector3 vLocal_226[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	var uLocal_260 = 12;
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
	int iLocal_526 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_224 = 0;
	Function_80("Initializing ElPresidio", 3);
	ALLOW_TUMBLEWEEDS(0);
	if (Function_76(40, 0) && !Function_76(41, 0))
	{
		iVar0 = 0;
		while (iVar0 <= Global_12342)
		{
			Function_75(&(Global_12342[iVar02]), &(Global_14762[iVar03]), 3);
			iVar0++;
		}
		Function_74(&(Global_43791[Global_46894[1]]), 2048);
	}
	while (!IS_EXITFLAG_SET())
	{
		iLocal_225 = 1000;
		switch (iLocal_224)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_224 = 1;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000001:
				if (Function_73())
				{
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, 2);
					if (Function_76(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
					}
					if (Function_76(41, 0))
					{
						Function_72(&Global_12342, &Global_14762, 0, 530, "elp/elp_Gen");
						Function_72(&Global_12342, &Global_14762, 3, 521, "elp/Guard_Brain_elp");
						Function_72(&Global_12342, &Global_14762, 1, 529, "elp/elp_Major");
						Function_72(&Global_12342, &Global_14762, 2, 516, "elp/elp_Cmder");
						Function_71(&(Global_12342[102]), 2);
						Function_72(&Global_12342, &Global_14762, 11, 260, "elp/elp_Blacksmt");
						Function_72(&Global_12342, &Global_14762, 4, 522, "elp/Guard_Brain_elp1");
						Function_72(&Global_12342, &Global_14762, 5, 523, "elp/Guard_Brain_elp2");
						Function_72(&Global_12342, &Global_14762, 6, 531, "elp/Guard_Brain_elp3");
						Function_72(&Global_12342, &Global_14762, 7, 517, "elp/Guard_Brain_elp4");
						Function_72(&Global_12342, &Global_14762, 8, 518, "elp/Guard_Brain_elp5");
						Function_72(&Global_12342, &Global_14762, 9, 521, "elp/Guard_Brain_elp6");
					}
					iLocal_224 = 2;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000002:
				if (Function_62())
				{
					Function_74(&(Global_43791[iScriptParam_0]), 32);
					Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1);
					vLocal_226[03] = { StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1) };
					Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "smoking_stand5"), 1, 0, 0, 0, 0, 1);
					vLocal_226[13] = { StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "smoking_stand5"), 1, 0, 0, 0, 0, 1) };
					Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "smoking_stand4"), 1, 0, 0, 0, 0, 1);
					vLocal_226[23] = { StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
					Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1);
					vLocal_226[33] = { StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1) };
					Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "rand_idle_stand7"), 1, 0, 0, 0, 0, 1);
					vLocal_226[43] = { StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(&iLocal_64, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_64, "rand_idle_stand7"), 1, 0, 0, 0, 0, 1) };
					iLocal_224 = 3;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000003:
				uLocal_258 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ElPresidioVol", &iScriptParam_0, 2, 0);
				Function_60(&Global_12342, &Global_14762, iScriptParam_0);
				iLocal_224 = 5;
				iLocal_225 = 0;
				break;
			
			case 0x00000005:
				if (Function_59(&Global_12342, &Global_14762, iScriptParam_0))
				{
					iLocal_224 = 4;
					iLocal_225 = 0;
				}
				else
				{
					iLocal_225 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_58(&(Global_43791[iScriptParam_0]), 16) && Function_57(Global_44085[iScriptParam_09]))
				{
					iLocal_224 = 6;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000006:
				Function_56(StackVal, 0, &uLocal_260, Vector(-708,815f, 67,513f, 3279,682f));
				Function_55(StackVal, 0, &uLocal_260, Vector(-717,114f, 67,513f, 3292,289f));
				Function_54(StackVal, 0, &uLocal_260, Vector(-708,815f, 67,513f, 3279,682f));
				Function_53(StackVal, 0, &uLocal_260, Vector(-707,428f, 63,247f, 3291,421f));
				Function_52(StackVal, 0, &uLocal_260, Vector(-708,815f, 67,513f, 3279,682f));
				Function_50(StackVal, 0, &uLocal_260, Vector(-722,821f, 67,444f, 3296,769f));
				Function_49(0, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 1, &uLocal_260, Vector(-713,523f, 67,513f, 3285,215f));
				Function_55(StackVal, 1, &uLocal_260, Vector(-723,239f, 82,564f, 3311,303f));
				Function_54(StackVal, 1, &uLocal_260, Vector(-713,523f, 67,513f, 3285,215f));
				Function_53(StackVal, 1, &uLocal_260, Vector(-723,239f, 82,564f, 3311,303f));
				Function_52(StackVal, 1, &uLocal_260, Vector(-713,523f, 67,513f, 3285,215f));
				Function_50(StackVal, 1, &uLocal_260, Vector(-725,956f, 67,513f, 3295,09f));
				Function_49(1, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 2, &uLocal_260, Vector(-724,647f, 67,444f, 3295,881f));
				Function_55(StackVal, 2, &uLocal_260, Vector(-667,545f, 65,615f, 3309,488f));
				Function_54(StackVal, 2, &uLocal_260, Vector(-708,495f, 67,514f, 3282,732f));
				Function_53(StackVal, 2, &uLocal_260, Vector(-722,121f, 75,168f, 3313,103f));
				Function_52(StackVal, 2, &uLocal_260, Vector(-680,707f, 63,247f, 3314,156f));
				Function_50(StackVal, 2, &uLocal_260, Vector(-699,914f, 66,449f, 3312,629f));
				Function_49(2, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 3, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_55(StackVal, 3, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_54(StackVal, 3, &uLocal_260, Vector(-723,107f, 67,518f, 3294,821f));
				Function_53(StackVal, 3, &uLocal_260, Vector(-694,297f, 63,247f, 3302,513f));
				Function_52(StackVal, 3, &uLocal_260, Vector(-699,914f, 66,449f, 3312,629f));
				Function_50(StackVal, 3, &uLocal_260, Vector(-687,773f, 69,633f, 3320,589f));
				Function_49(3, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 4, &uLocal_260, Vector(-699,914f, 66,449f, 3312,629f));
				Function_55(StackVal, 4, &uLocal_260, Vector(-687,773f, 69,633f, 3320,589f));
				Function_54(StackVal, 4, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_53(StackVal, 4, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_52(StackVal, 4, &uLocal_260, Vector(-717,974f, 63,332f, 3297,667f));
				Function_50(StackVal, 4, &uLocal_260, Vector(-723,107f, 67,518f, 3294,821f));
				Function_49(4, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 5, &uLocal_260, Vector(-723,107f, 67,518f, 3294,821f));
				Function_55(StackVal, 5, &uLocal_260, Vector(-717,974f, 63,332f, 3297,667f));
				Function_54(StackVal, 5, &uLocal_260, Vector(-699,914f, 66,449f, 3312,629f));
				Function_53(StackVal, 5, &uLocal_260, Vector(-687,773f, 69,633f, 3320,589f));
				Function_52(StackVal, 5, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_50(StackVal, 5, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_49(5, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 6, &uLocal_260, Vector(-717,974f, 63,332f, 3297,667f));
				Function_55(StackVal, 6, &uLocal_260, Vector(-723,107f, 67,518f, 3294,821f));
				Function_54(StackVal, 6, &uLocal_260, Vector(-717,974f, 63,332f, 3297,667f));
				Function_53(StackVal, 6, &uLocal_260, Vector(-706,122f, 63,471f, 3292,733f));
				Function_52(StackVal, 6, &uLocal_260, Vector(-687,773f, 69,633f, 3320,589f));
				Function_50(StackVal, 6, &uLocal_260, Vector(-665,638f, 73,428f, 3308,527f));
				Function_49(6, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 7, &uLocal_260, Vector(-720,367f, 67,518f, 3296,77f));
				Function_55(StackVal, 7, &uLocal_260, Vector(-719,387f, 75,168f, 3311,7f));
				Function_54(StackVal, 7, &uLocal_260, Vector(-717,593f, 82,548f, 3311,168f));
				Function_53(StackVal, 7, &uLocal_260, Vector(-717,518f, 74,085f, 3324,969f));
				Function_52(StackVal, 7, &uLocal_260, Vector(-736,38f, 77,258f, 3300,231f));
				Function_50(StackVal, 7, &uLocal_260, Vector(-726,041f, 72,947f, 3294,014f));
				Function_49(7, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 8, &uLocal_260, Vector(-736,38f, 77,258f, 3300,231f));
				Function_55(StackVal, 8, &uLocal_260, Vector(-726,041f, 72,947f, 3294,014f));
				Function_54(StackVal, 8, &uLocal_260, Vector(-720,367f, 67,518f, 3296,77f));
				Function_53(StackVal, 8, &uLocal_260, Vector(-719,387f, 75,168f, 3311,7f));
				Function_52(StackVal, 8, &uLocal_260, Vector(-717,593f, 82,548f, 3311,168f));
				Function_50(StackVal, 8, &uLocal_260, Vector(-717,518f, 74,085f, 3324,969f));
				Function_49(8, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 9, &uLocal_260, Vector(-717,593f, 82,548f, 3311,168f));
				Function_55(StackVal, 9, &uLocal_260, Vector(-717,518f, 74,085f, 3324,969f));
				Function_54(StackVal, 9, &uLocal_260, Vector(-736,38f, 77,258f, 3300,231f));
				Function_53(StackVal, 9, &uLocal_260, Vector(-726,041f, 72,947f, 3294,014f));
				Function_52(StackVal, 9, &uLocal_260, Vector(-720,367f, 67,518f, 3296,77f));
				Function_50(StackVal, 9, &uLocal_260, Vector(-719,387f, 75,168f, 3311,7f));
				Function_49(9, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 10, &uLocal_260, Vector(-722,69f, 63,35f, 3294,993f));
				Function_55(StackVal, 10, &uLocal_260, Vector(-722,69f, 63,35f, 3294,993f));
				Function_54(StackVal, 10, &uLocal_260, Vector(-722,69f, 63,35f, 3294,993f));
				Function_53(StackVal, 10, &uLocal_260, Vector(-722,69f, 63,35f, 3294,993f));
				Function_52(StackVal, 10, &uLocal_260, Vector(-722,69f, 63,35f, 3294,993f));
				Function_50(StackVal, 10, &uLocal_260, Vector(-722,69f, 63,35f, 3294,993f));
				Function_49(10, &uLocal_260, &iLocal_64);
				Function_56(StackVal, 11, &uLocal_260, Vector(-712,303f, 67,513f, 3280,132f));
				Function_55(StackVal, 11, &uLocal_260, Vector(-671,651f, 63,247f, 3317,933f));
				Function_54(StackVal, 11, &uLocal_260, Vector(-711,992f, 63,222f, 3285,779f));
				Function_53(StackVal, 11, &uLocal_260, Vector(-671,651f, 63,247f, 3317,933f));
				Function_52(StackVal, 11, &uLocal_260, Vector(-712,303f, 67,513f, 3280,132f));
				Function_50(StackVal, 11, &uLocal_260, Vector(-723,443f, 67,444f, 3294,47f));
				Function_49(11, &uLocal_260, &iLocal_64);
				Function_44(&Global_12342, &Global_14762, &uLocal_260, &Global_10996, iScriptParam_0);
				if (Function_58(&(Global_43791[iScriptParam_0]), 256) || !Function_43(2))
				{
					iLocal_526 = 1;
				}
				Function_42(&iLocal_64 + 632, GET_OBJECT_FROM_PERS_CHAR(&Global_14762[03] + 16));
				Function_74(&(Global_43791[iScriptParam_0]), 8);
				if (Function_58(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_41(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_224 = 10;
				}
				else
				{
					iLocal_224 = 7;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000007:
				iLocal_224 = 8;
				iLocal_225 = 0;
				break;
			
			case 0x00000008:
				Function_37(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				Function_36(64);
				if (Function_35(iScriptParam_0, &Global_12342, iLocal_526))
				{
					Function_31(2, 4294967295, 4294967295, 0, 3);
					Function_28(&iLocal_4);
				}
				else
				{
					Function_31(1, 10, 6, 0, 3);
					Function_28(&iLocal_4);
					Function_27(&Global_14762[03] + 16, 0);
					Function_27(&Global_14762[33] + 16, 0);
					Function_27(&Global_14762[13] + 16, 0);
					Function_27(&Global_14762[23] + 16, 0);
					Function_27(&Global_14762[103] + 16, 0);
					Function_27(&Global_14762[43] + 16, 0);
					Function_27(&Global_14762[53] + 16, 0);
					Function_27(&Global_14762[63] + 16, 0);
					Function_27(&Global_14762[73] + 16, 0);
					Function_27(&Global_14762[83] + 16, 0);
					Function_27(&Global_14762[93] + 16, 0);
				}
				Function_74(&(Global_43791[iScriptParam_0]), 512);
				iLocal_224 = 9;
				iLocal_225 = 0;
				break;
			
			case 0x00000009:
				Function_25(&iLocal_4, iScriptParam_0);
				Function_74(&(Global_43791[iScriptParam_0]), 4);
				Function_24("Finished Initializing ElPresidio", 5.0f);
				iLocal_224 = 10;
				iLocal_225 = 0;
				break;
			
			case 0x0000000A:
				Function_20(&vLocal_226);
				if (Function_58(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_224 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_225);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	if (Function_76(41, 0))
	{
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	}
	Function_11(&Global_12342, &Global_14762, iScriptParam_0, (iLocal_526 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_41(&(Global_43791[iScriptParam_0]), 32);
	Function_41(&(Global_43791[iScriptParam_0]), 64);
	Function_41(&(Global_43791[iScriptParam_0]), 8);
	Function_41(&(Global_43791[iScriptParam_0]), 512);
	Function_41(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_258))
	{
		TERMINATE_SCRIPT(&uLocal_258);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_24("Unloaded ElPresidio", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xE2D / 3629
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xE63 / 3683
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xE85 / 3717
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xE9B / 3739
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xEB1 / 3761
{
	Function_6(&iLocal_64 + 8);
	RELEASE_LAYOUT_REF(&iLocal_64);
	return;
}

void Function_6(int iParam0) //Position: 0xEC4 / 3780
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0xEEC / 3820
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0x1037 / 4151
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x1054 / 4180
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1072 / 4210
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x107E / 4222
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
	strcpy(&cVar0, Function_19(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_58(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_41(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_16(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_16(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_71(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_16(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_71(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_58(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_43(2) || Function_58(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_16(&(Param0[iVar162]), 2) && !Function_16(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_16(&(Param0[iVar162]), 2) && !Function_16(&(Param0[iVar162]), 4))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
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

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x129C / 4764
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_16(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1402 / 5122
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

int Function_14(int iParam0) //Position: 0x142D / 5165
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

void Function_15(var uParam0, int iParam1) //Position: 0x1461 / 5217
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x1472 / 5234
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_17() //Position: 0x148F / 5263
{
	if (Function_18(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_18(var uParam0, int iParam1) //Position: 0x14AA / 5290
{
	return (uParam0 && iParam1) == 0;
}

var Function_19(int iParam0) //Position: 0x14B7 / 5303
{
	if (!Function_4(iParam0))
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

void Function_20(vector3[] vParam0) //Position: 0x1965 / 6501
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (vParam0 - 1))
	{
		if (IS_GRINGO_VALID(&(vParam0[bVar03])) && IS_GRINGO_VALID(&vParam0[bVar03] + 8))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&(vParam0[bVar03]), "UseCase1")))
			{
				Function_23(&vParam0[bVar03] + 16, 64);
				if (Function_18(vParam0[bVar03].f_16, 2))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_18(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_18(vParam0[bVar03].f_16, 16))
				{
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_18(vParam0[bVar03].f_16, 32))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				if (Function_18(vParam0[bVar03].f_16, 2))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_18(vParam0[bVar03].f_16, 4))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
			}
			else
			{
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] == &vParam0[iVar13] + 8)
					{
						if (Function_18(vParam0[iVar13].f_16, 64))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_18(vParam0[bVar03].f_16, 64) && Function_18(vParam0[bVar03].f_16, 16))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_21(&vParam0[bVar03] + 16, 64);
						if (Function_18(vParam0[bVar03].f_16, 1))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_18(vParam0[bVar03].f_16, 64) && Function_18(vParam0[bVar03].f_16, 16))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
					if (Function_18(vParam0[bVar03].f_16, 1))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_18(vParam0[bVar03].f_16, 64))
					{
						if (Function_18(vParam0[bVar03].f_16, 32))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_18(vParam0[bVar03].f_16, 8))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_21(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_18(vParam0[bVar03].f_16, 64))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_18(vParam0[bVar03].f_16, 8))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
					Function_22(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_18(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x2195 / 8597
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_22(struct<17> Param0) //Position: 0x21AB / 8619
{
	if (Function_18(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_23(var uParam0, int iParam1) //Position: 0x21D4 / 8660
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_24(char* cParam0) //Position: 0x21E5 / 8677
{
	if (!Function_43(128))
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

void Function_25(int iParam0, bool bParam1) //Position: 0x2225 / 8741
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

void Function_26(var uParam0, int iParam1) //Position: 0x2315 / 8981
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_27(int iParam0, int iParam1) //Position: 0x2322 / 8994
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

void Function_28(int iParam0) //Position: 0x23AD / 9133
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_30(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_29(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_29(var uParam0) //Position: 0x24A9 / 9385
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_30() //Position: 0x24C6 / 9414
{
	int iVar0;
	
	return &iVar0;
}

void Function_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x24CF / 9423
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

void Function_32() //Position: 0x25BD / 9661
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

int Function_33(int iParam0) //Position: 0x260B / 9739
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_34(int iParam0) //Position: 0x2623 / 9763
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x2638 / 9784
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_58(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_76(49, 0))
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

void Function_36(bool bParam0) //Position: 0x26F6 / 9974
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x2709 / 9993
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
		Function_40();
	}
	if (&bParam5)
	{
		Function_38(1048576);
	}
}

void Function_38(int iParam0) //Position: 0x2817 / 10263
{
	Function_39(&Global_43580, iParam0);
	return;
}

void Function_39(var uParam0, var uParam1) //Position: 0x2825 / 10277
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_40() //Position: 0x2844 / 10308
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_38(16384);
	}
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x2860 / 10336
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x287A / 10362
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)), &iParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_43(int iParam0) //Position: 0x28C7 / 10439
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_44(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x28E3 / 10467
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_43(2))
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
		if (Function_16(&(Param0[iVar02]), 2))
		{
			if (Function_45(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_41(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_74(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_45(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x299B / 10651
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_58(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(&iParam0, 2))
	{
		return 1;
	}
	if (Function_16(&iParam0, 4))
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
		Function_71(&iParam0, 4);
	}
	Function_46(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_46(int iParam0, struct<2> Param1) //Position: 0x2B1C / 11036
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

bool Function_47(vector3 vParam0) //Position: 0x2C62 / 11362
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_48(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2C7A / 11386
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_30(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_49(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2DA1 / 11681
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

void Function_50(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2E00 / 11776
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

bool Function_51(struct<2> Param0, struct<2> Param2) //Position: 0x2E67 / 11879
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_52(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2E93 / 11923
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

void Function_53(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2EFC / 12028
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

void Function_54(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2F67 / 12135
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

void Function_55(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2FCD / 12237
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

void Function_56(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3036 / 12342
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

int Function_57(int iParam0) //Position: 0x309A / 12442
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_58(&(Global_43791[iParam0]), 4);
}

bool Function_58(var uParam0, int iParam1) //Position: 0x30B6 / 12470
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_59(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x30D3 / 12499
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_17())
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
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_16(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_16(&(Param0[iVar02]), 8))
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

void Function_60(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x31BC / 12732
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_19(bParam2), 64);
	if (Function_17())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_58(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_74(&(Global_43791[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_15(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_15(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_61(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x32AC / 12972
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_23(&vVar0 + 16, 1);
	}
	else
	{
		Function_21(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_23(&vVar0 + 16, 2);
	}
	else
	{
		Function_21(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_23(&vVar0 + 16, 4);
	}
	else
	{
		Function_21(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_23(&vVar0 + 16, 8);
	}
	else
	{
		Function_21(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_23(&vVar0 + 16, 16);
	}
	else
	{
		Function_21(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_23(&vVar0 + 16, 32);
	}
	else
	{
		Function_21(&vVar0 + 16, 32);
	}
	Function_21(&vVar0 + 16, 64);
	Function_21(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

bool Function_62() //Position: 0x3379 / 13177
{
	var uVar0;
	
	Function_70(3, 3);
	uVar0 = &uVar0;
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/mex_towerguard", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_68(&iLocal_64 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	if (!Function_63(&iLocal_64 + 8))
	{
		return 0;
	}
	iLocal_64 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_64))
	{
		iLocal_64 = CREATE_LAYOUT("ElPresidio_layout");
	}
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_towerGuard2", "mex_towerGuard", Vector(-717,5929f, 82,54761f, 3311,168f), Vector(0.0f, -95,43549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-720,3671f, 67,51764f, 3296,77f), Vector(0.0f, -309,8027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_gateGuards2", "mex_gateGuards", Vector(-736,3804f, 77,25826f, 3300,231f), Vector(0.0f, 71,27296f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(-676,4285f, 63,24744f, 3299,296f), Vector(0.0f, 100,7092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(-708,4954f, 67,51375f, 3282,732f), Vector(0.0f, 141,8311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(-709,0433f, 67,52305f, 3287,112f), Vector(0.0f, -222,0619f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-706,5253f, 66,75459f, 3279,682f), Vector(0.0f, 42,34697f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "nlean_rail", "nlean_rail", Vector(-713,3747f, 67,49703f, 3293,526f), Vector(0.0f, -128,0872f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs", "look_distance_binocs", Vector(-721,3502f, 69,16821f, 3274,475f), Vector(0.0f, 108,5536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_out_window_R", "look_out_window_R", Vector(-710,0087f, 67,513f, 3278,964f), Vector(0.0f, -40,43299f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand", "smoking_stand", Vector(-716,5546f, 67,50723f, 3299,334f), Vector(0.0f, -111,8011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-687,7731f, 69,63348f, 3320,589f), Vector(0.0f, 150,0506f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-682,194f, 63,38754f, 3292,064f), Vector(0.0f, 151,4445f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-678,7137f, 63,321f, 3296,161f), Vector(0.0f, 96,76859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "lean_rail2", "nlean_rail", Vector(-715,2169f, 67,55249f, 3301,539f), Vector(0.0f, 229,4257f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand1", "smoking_stand", Vector(-703,7432f, 66,36328f, 3281,916f), Vector(0.0f, -167,9729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand2", "smoking_stand", Vector(-681,1483f, 63,247f, 3312,677f), Vector(0.0f, -188,4532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard", "stand_check_clipboard", Vector(-667,545f, 65,615f, 3309,488f), Vector(0.0f, -86,90867f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs1", "look_distance_binocs", Vector(-669,469f, 69,554f, 3310,187f), Vector(0.0f, 120,0851f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs2", "look_distance_binocs", Vector(-665,113f, 69,509f, 3311,136f), Vector(0.0f, -133,429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand", "rand_idle_stand", Vector(-664,575f, 69,43f, 3307,346f), Vector(0.0f, -226,8707f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-666,3836f, 73,42818f, 3309,781f), Vector(0.0f, 104,0507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "repair_kneel", "repair_kneel", Vector(-693,3738f, 63,247f, 3298,784f), Vector(0.0f, 33,26788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_out_window_L", "look_out_window_L", Vector(-720,3563f, 67,513f, 3288,755f), Vector(0.0f, 50,0137f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard1", "stand_check_clipboard", Vector(-717,5f, 70,23735f, 3289,415f), Vector(0.0f, 147,4977f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs3", "look_distance_binocs", Vector(-724,7563f, 78,35497f, 3319,749f), Vector(0.0f, 159,0294f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-717,5178f, 74,08543f, 3324,969f), Vector(0.0f, 164,121f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs4", "look_distance_binocs", Vector(-721,7476f, 79,35668f, 3305,081f), Vector(0.0f, 9,529112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_gateGuards3", "mex_gateGuards", Vector(-712,3604f, 74,16735f, 3324,698f), Vector(0.0f, 139,9103f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand1", "rand_idle_stand", Vector(-697,7014f, 68,73802f, 3287,415f), Vector(0.0f, -19,38494f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_gateGuards5", "mex_gateGuards", Vector(-675,074f, 68,73569f, 3296,858f), Vector(0.0f, -38,26125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "lean_fence_H_talking", "lean_fence_L_talking", Vector(-719,137f, 79,3585f, 3307,064f), Vector(0.0f, 321,2921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "lean_fence_L_talking2", "lean_fence_L_talking", Vector(-723,9261f, 79,39802f, 3307,228f), Vector(0.0f, 47,13749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_64 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_horseshoe", "stand_horseshoe", Vector(-713,3561f, 63,25285f, 3283,6f), Vector(0.0f, 46,04274f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_64 + 480), 1);
	*(&iLocal_64 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "horse_tend", "horse_tend", Vector(-713,0793f, 63,22428f, 3287,888f), Vector(0.0f, -38,79781f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_64 + 488), 1);
	*(&iLocal_64 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "horse_stay", "horse_stay", Vector(-714,4236f, 63,22428f, 3286,903f), Vector(0.0f, -37,24018f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_64 + 496), 1);
	*(&iLocal_64 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard2", "stand_check_clipboard", Vector(-722,121f, 75,168f, 3313,103f), Vector(0.0f, -27,23085f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_64 + 504), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "Pee", "Pee", Vector(-726,3694f, 63,34876f, 3297,085f), Vector(0.0f, 103,9532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sleeping_scripted", "sleeping_scripted", Vector(-724,4138f, 63,46781f, 3296,349f), Vector(0.0f, 55,44757f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_worried_n_any", "stand_worried_n_any", Vector(-722,6904f, 63,34961f, 3294,993f), Vector(0.0f, -118,666f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(-724,2662f, 63,37123f, 3298,342f), Vector(0.0f, -43,0543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_talking_soldiers_link3", "mex_talking_soldiers_link", Vector(-717,9738f, 63,33184f, 3297,667f), Vector(0.0f, -226,7341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-715,2135f, 72,94291f, 3281,964f), Vector(0.0f, 77,05769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-726,0411f, 72,94719f, 3294,013f), Vector(0.0f, 54,14071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sit_cleanrifle1", "sit_cleanrifle", Vector(-719,3867f, 75,16785f, 3311,7f), Vector(0.0f, 146,8785f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_yelling_mid", "stand_yelling_mid", Vector(-719,5087f, 63,35001f, 3297,715f), Vector(0.0f, 55,37082f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_sleepBed_r", "mex_sleepBed_r", Vector(-722,3011f, 67,499f, 3298,616f), Vector(0.0f, -42,57276f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_sleepBed_l", "mex_sleepBed_l", Vector(-719,3489f, 67,499f, 3295,029f), Vector(0.0f, 131,0655f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_sleepBed_r2", "mex_sleepBed_r", Vector(-726,2709f, 67,49874f, 3295,064f), Vector(0.0f, 137,8984f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_sleepBed_r3", "mex_sleepBed_r", Vector(-724,8945f, 67,49874f, 3293,523f), Vector(0.0f, 140,2076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_sleepBed_l2", "mex_sleepBed_l", Vector(-724,3748f, 67,499f, 3293,344f), Vector(0.0f, -36,61475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand2", "rand_idle_stand", Vector(-679,2576f, 63,24734f, 3306,653f), Vector(0.0f, -183,2206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand3", "rand_idle_stand", Vector(-686,592f, 68,84886f, 3290,11f), Vector(0.0f, -19,51385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand4", "rand_idle_stand", Vector(-699,9139f, 66,44852f, 3312,629f), Vector(0.0f, -191,081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs5", "look_distance_binocs", Vector(-665,6379f, 73,42816f, 3308,527f), Vector(0.0f, -98,92401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "look_distance_binocs6", "look_distance_binocs", Vector(-723,239f, 82,56435f, 3311,303f), Vector(0.0f, 104,9122f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "mex_talking_soldiers_link4", "mex_talking_soldiers_link", Vector(-713,8732f, 67,60998f, 3281,132f), Vector(0.0f, -48,07489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(-709,1548f, 67,52305f, 3290,407f), Vector(0.0f, 229,0538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "repair_kneel1", "repair_kneel", Vector(-692,5491f, 63,247f, 3296,923f), Vector(0.0f, 121,5768f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "repair_kneel2", "repair_kneel", Vector(-687,4442f, 63,247f, 3298,384f), Vector(0.0f, 242,9485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "repair_kneel3", "repair_kneel", Vector(-699,7437f, 63,247f, 3302,929f), Vector(0.0f, 180,1734f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard3", "stand_check_clipboard", Vector(-680,707f, 63,24707f, 3314,156f), Vector(0.0f, 46,13166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard4", "stand_check_clipboard", Vector(-709,6506f, 63,24707f, 3287,052f), Vector(0.0f, 83,30362f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard5", "stand_check_clipboard", Vector(-708,9877f, 63,24707f, 3303,349f), Vector(0.0f, 165,8085f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_check_clipboard6", "stand_check_clipboard", Vector(-718,9658f, 67,5125f, 3290,026f), Vector(0.0f, 314,4405f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sit_cleanrifle2", "sit_cleanrifle", Vector(-719,2407f, 82,50834f, 3311,104f), Vector(0.0f, -3,261265f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_64 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "lean_table", "lean_table", Vector(-721,4617f, 79,36691f, 3311,719f), Vector(0.0f, 232,2581f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_64 + 512), 0);
	*(&iLocal_64 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sit_barrel", "sit_barrel", Vector(-695,3147f, 63,24707f, 3299,635f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_64 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sit_barrel1", "sit_barrel", Vector(-696,7335f, 63,24707f, 3304,058f), Vector(0.0f, 87,03288f, 0.0f));
	*(&iLocal_64 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand3", "smoking_stand", Vector(-673,927f, 63,24707f, 3318,569f), Vector(0.0f, 72,97687f, 0.0f));
	*(&iLocal_64 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand5", "rand_idle_stand", Vector(-705,0511f, 63,24707f, 3292,357f), Vector(0.0f, 71,23727f, 0.0f));
	*(&iLocal_64 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand6", "rand_idle_stand", Vector(-706,5574f, 63,24707f, 3293,625f), Vector(0.0f, 22,83271f, 0.0f));
	*(&iLocal_64 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "rand_idle_stand7", "rand_idle_stand", Vector(-706,1927f, 63,24707f, 3292,801f), Vector(0.0f, 42,90367f, 0.0f));
	*(&iLocal_64 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand4", "smoking_stand", Vector(-705,6854f, 63,24707f, 3294,188f), Vector(0.0f, 27,05199f, 0.0f));
	*(&iLocal_64 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand5", "smoking_stand", Vector(-704,7737f, 63,24707f, 3293,252f), Vector(0.0f, 62,48718f, 0.0f));
	*(&iLocal_64 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand6", "smoking_stand", Vector(-698,825f, 66,44852f, 3313,312f), Vector(0.0f, 117,7524f, 0.0f));
	*(&iLocal_64 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "lean_rail3", "nlean_rail", Vector(-699,0483f, 66,44852f, 3312,398f), Vector(0.0f, -31,24462f, 0.0f));
	*(&iLocal_64 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand7", "smoking_stand", Vector(-688,5365f, 69,63348f, 3320,037f), Vector(0.0f, 173,308f, 0.0f));
	*(&iLocal_64 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-688,0103f, 66,44515f, 3318,783f), Vector(0.0f, -392,013f, 0.0f));
	*(&iLocal_64 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "smoking_stand8", "smoking_stand", Vector(-686,1005f, 66,44515f, 3318,783f), Vector(0.0f, 24,025f, 0.0f));
	*(&iLocal_64 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "sleeping_wall_scripted3", "sleeping_wall_scripted", Vector(-716,7067f, 63,33184f, 3295,983f), Vector(0.0f, -130,46f, 0.0f));
	*(&iLocal_64 + 632) = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), &iLocal_64, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_64, "stand_yelling", "stand_yelling_mid", Vector(-707,428f, 63,24707f, 3291,421f), Vector(0.0f, -134,4398f, 0.0f)), &iLocal_64 + 632);
	return 1;
}

bool Function_63(struct<2>[] Param0) //Position: 0x5621 / 22049
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_67();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_66(&(Param0[iVar02]), 8);
		}
		else if (Function_65())
		{
			iVar1 = 1;
			Function_66(&(Param0[iVar02]), 8);
		}
		Function_66(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_66(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_66(&(Param0[iVar02]), 2);
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
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_66(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_66(&(Param0[iVar02]), 2);
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
	Function_64();
	return 1;
}

void Function_64() //Position: 0x59E3 / 23011
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

bool Function_65() //Position: 0x5A23 / 23075
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

void Function_66(struct<13> Param0) //Position: 0x5A51 / 23121
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_67() //Position: 0x5A64 / 23140
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

var Function_68(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x5AA6 / 23206
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_69(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_66(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_69(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x5AE4 / 23268
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_66(&(Param0[iVar02]), 4);
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

void Function_70(int iParam0, int iParam1) //Position: 0x5BB3 / 23475
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

void Function_71(int iParam0, int iParam1) //Position: 0x5BFD / 23549
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

void Function_72(struct<2>[] Param0, vector3[] vParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x5C17 / 23575
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = uParam2;
	vParam1[iVar03] = iParam3;
	if (!STRINGS_ARE_EQUAL(&cParam4, ""))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/", 64);
		stradd(&cVar1, &cParam4, 64);
		*(&vParam1[iVar03] + 8) = GET_ASSET_ID(&cVar1, 1);
	}
	else
	{
		(&vParam1[iVar03] + 8) = "";
	}
	Function_71(&(Param0[iVar02]), 1);
	Function_15(&(Param0[iVar02]), 2);
	Function_71(&(Param0[iVar02]), 8);
	Function_71(&(Param0[iVar02]), 16);
}

bool Function_73() //Position: 0x5CBC / 23740
{
	var uVar0;
	
	Function_70(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("ElPresidio_layout");
	}
	*(&iLocal_4 + 8) = Vector(-722,8911f, 82,45563f, 3309,264f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, -133,0126f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_playerTele", Vector(-722,8911f, 82,45563f, 3309,264f), Vector(0.0f, -133,0126f, 0.0f));
	*(&iLocal_4 + 40) = Vector(-721,9144f, 82,4912f, 3308,142f);
	*(&iLocal_4 + 40 + 12) = Vector(0.0f, -136,666f, 0.0f);
	*(&iLocal_4 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_genTele", Vector(-721,9144f, 82,4912f, 3308,142f), Vector(0.0f, -136,666f, 0.0f));
	*(&iLocal_4 + 72) = Vector(-723,6121f, 82,45563f, 3310,015f);
	*(&iLocal_4 + 72 + 12) = Vector(0.0f, -122,9633f, 0.0f);
	*(&iLocal_4 + 96) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_soldierTele", Vector(-723,6121f, 82,45563f, 3310,015f), Vector(0.0f, -122,9633f, 0.0f));
	*(&iLocal_4 + 104) = Vector(-721,2819f, 82,47678f, 3312,793f);
	*(&iLocal_4 + 104 + 12) = Vector(0.0f, 54,11021f, 0.0f);
	*(&iLocal_4 + 128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_rebTele1", Vector(-721,2819f, 82,47678f, 3312,793f), Vector(0.0f, 54,11021f, 0.0f));
	*(&iLocal_4 + 136) = Vector(-720,6768f, 82,45563f, 3312,059f);
	*(&iLocal_4 + 136 + 12) = Vector(4,116799f, 57,54126f, 5,324008f);
	*(&iLocal_4 + 160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_rebTele2", Vector(-720,6768f, 82,45563f, 3312,059f), Vector(4,116799f, 57,54126f, 5,324008f));
	*(&iLocal_4 + 168) = Vector(-719,9883f, 82,45563f, 3310,954f);
	*(&iLocal_4 + 168 + 12) = Vector(-2,711456f, 53,91066f, -3,620177f);
	*(&iLocal_4 + 192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_rebTele3", Vector(-719,9883f, 82,45563f, 3310,954f), Vector(-2,711456f, 53,91066f, -3,620177f));
	*(&iLocal_4 + 200) = Vector(-719,1819f, 82,45563f, 3310,151f);
	*(&iLocal_4 + 200 + 12) = Vector(-0,4835112f, 52,03443f, -0,6411216f);
	*(&iLocal_4 + 224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "elpf_rebTele4", Vector(-719,1819f, 82,45563f, 3310,151f), Vector(-0,4835112f, 52,03443f, -0,6411216f));
	PushArrayP();
	*(&iLocal_4 + 232) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "elpp_patrolpath");
	return 1;
}

void Function_74(var uParam0, int iParam1) //Position: 0x613A / 24890
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_75(int iParam0, int iParam1, int iParam2) //Position: 0x614B / 24907
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&uVar0, Function_14(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&uVar0, &iParam2, 0, false, 0);
	}
	*(&iParam0 + 8) = &uVar0;
	Function_15(&iParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

bool Function_76(int iParam0, bool bParam1) //Position: 0x61AB / 25003
{
	int iVar0;
	
	iVar0 = Function_78(iParam0);
	if (!Function_77(iVar0))
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

bool Function_77(int iParam0) //Position: 0x61E9 / 25065
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_78(int iParam0) //Position: 0x6200 / 25088
{
	if (!Function_79(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_79(int iParam0) //Position: 0x621A / 25114
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_80(char* cParam0) //Position: 0x6230 / 25136
{
	if (!Function_43(128))
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

