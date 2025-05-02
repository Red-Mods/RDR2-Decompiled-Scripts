//Decompiled with MagicRDR v1.0
//Function Count : 72
//Statics Count : 534
//Natives Count : 101
//Parameters Count : 2

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
	int iLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 15;
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
	int iLocal_522 = 0;
	bool bLocal_523 = false;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	int iLocal_526 = 0;
	bool bLocal_527 = false;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_522 = 0;
	bLocal_523 = false;
	iLocal_526 = 0;
	bVar0 = Function_71(&(Global_43791[iScriptParam_0]));
	Function_70("Initializing WotS", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_527 = 1000;
		switch (iLocal_526)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_526 = 1;
				}
				bLocal_527 = false;
				break;
			
			case 0x00000001:
				if (Function_68())
				{
					iLocal_526 = 2;
				}
				bLocal_527 = false;
				break;
			
			case 0x00000002:
				if (Function_59())
				{
					Function_58(&(Global_43791[iScriptParam_0]), 32);
					iLocal_526 = 3;
				}
				bLocal_527 = false;
				break;
			
			case 0x00000003:
				uLocal_528 = LAUNCH_NEW_SCRIPT_WITH_ARGS("WreckSerendipityVol", &iScriptParam_0, 2, 0);
				iLocal_526 = 5;
				bLocal_527 = false;
				break;
			
			case 0x00000005:
				iLocal_526 = 4;
				bLocal_527 = false;
				break;
			
			case 0x00000004:
				if (Function_57(&(Global_43791[iScriptParam_0]), 16) && Function_56(Global_44085[iScriptParam_09]))
				{
					iLocal_526 = 6;
				}
				bLocal_527 = false;
				break;
			
			case 0x00000006:
				bVar0 = false;
				Function_58(&(Global_43791[iScriptParam_0]), 8);
				if (Function_57(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_55(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_526 = 10;
				}
				else
				{
					iLocal_526 = 7;
				}
				bLocal_527 = false;
				break;
			
			case 0x00000007:
				iLocal_526 = 8;
				bLocal_527 = false;
				break;
			
			case 0x00000008:
				Function_54(64);
				Function_50(2, 4294967295, 4294967295, 0, 3);
				Function_58(&(Global_43791[iScriptParam_0]), 512);
				iLocal_526 = 9;
				bLocal_527 = false;
				break;
			
			case 0x00000009:
				Function_48(&iLocal_0, iScriptParam_0);
				Function_58(&(Global_43791[iScriptParam_0]), 4);
				Function_46("Finished Initializing WotS", 5.0f);
				iLocal_526 = 10;
				bLocal_527 = false;
				if (bVar0 && !Function_45(Global_46914[3]))
				{
				}
				else
				{
					if (bVar0)
					{
						if (Function_45(Global_46914[3]))
						{
							Function_44();
							Function_43("AA_GhostTown", 0, -1.0f, 1, 0, 0);
						}
					}
					bVar0 = false;
				}
				Function_39(&(Global_43791[iScriptParam_0]));
				Function_20(Global_46914[3]);
				break;
			
			case 0x0000000A:
				Function_13();
				if (bVar0)
				{
					bLocal_527 = 100;
				}
				if (Function_57(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_526 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_527);
	}
	Function_12();
	Function_7();
	Function_3(iScriptParam_0);
	Function_55(&(Global_43791[iScriptParam_0]), 32);
	Function_55(&(Global_43791[iScriptParam_0]), 64);
	Function_55(&(Global_43791[iScriptParam_0]), 8);
	Function_55(&(Global_43791[iScriptParam_0]), 512);
	Function_55(&(Global_43791[iScriptParam_0]), 4);
	if (bVar0)
	{
	}
	Function_1();
	if (IS_SCRIPT_VALID(&uLocal_530))
	{
		TERMINATE_SCRIPT(&uLocal_530);
	}
	if (IS_SCRIPT_VALID(&uLocal_528))
	{
		TERMINATE_SCRIPT(&uLocal_528);
	}
	Function_46("Unloaded Wreck of the Serendipity.", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x31E / 798
{
	if (IS_OBJECTSET_VALID(&uLocal_524))
	{
		Function_2(&uLocal_524);
		DESTROY_OBJECTSET(&uLocal_524);
	}
	return;
}

void Function_2(var uParam0) //Position: 0x33C / 828
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

void Function_3(int iParam0) //Position: 0x38B / 907
{
	int iVar0;
	
	if (!Function_6(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_4(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_4(int iParam0) //Position: 0x3C1 / 961
{
	if (!Function_5(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_5(int iParam0) //Position: 0x3E3 / 995
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_6(int iParam0) //Position: 0x3F9 / 1017
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_7() //Position: 0x40F / 1039
{
	Function_8(&iLocal_458 + 8);
	RELEASE_LAYOUT_REF(&iLocal_458);
	return;
}

void Function_8(int iParam0) //Position: 0x424 / 1060
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_9(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_9(struct<2>[] Param0, int iParam1) //Position: 0x44C / 1100
{
	if (Function_11(&(Param0[iParam12]), 4))
	{
		if (Function_11(&(Param0[iParam12]), 1))
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
			Function_10(&(Param0[iParam12]), 1);
			Function_10(&(Param0[iParam12]), 2);
			Function_10(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_10(struct<13> Param0) //Position: 0x597 / 1431
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_11(struct<13> Param0) //Position: 0x5B4 / 1460
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12() //Position: 0x5D2 / 1490
{
	Function_8(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_13() //Position: 0x5E5 / 1509
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_523)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_524) - 1))
		{
			iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_524);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_18(&Global_54076, &iVar1) > 100.0f)
			{
				Function_17(&iVar1);
				Var3 = Function_17(&iVar1);
				if (!Function_16(iLocal_522, bVar2))
				{
					Function_15(&iLocal_522, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_14(&iLocal_522, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x673 / 1651
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x689 / 1673
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x69A / 1690
{
	return (uParam0 && iParam1) == 0;
}

struct<8> Function_17(int iParam0) //Position: 0x6A7 / 1703
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_18(var uParam0, int iParam1) //Position: 0x6D0 / 1744
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_19(&uParam0);
			Var0 = Function_19(&uParam0);
			Function_19(&iParam1);
			Var2 = Function_19(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_19(int iParam0) //Position: 0x76D / 1901
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

void Function_20(int iParam0) //Position: 0x7DB / 2011
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_57(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_58(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_25(473, 1, 0, 0);
		iVar0 = Function_24(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_25(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_25(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_25(476, 1, 0, 0);
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
		Function_23(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_23(7, 30);
	}
	if (Function_22(473) <= Function_21(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_21(int iParam0) //Position: 0x8CC / 2252
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_22(int iParam0) //Position: 0x909 / 2313
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_23(int iParam0, int iParam1) //Position: 0x942 / 2370
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

var Function_24(int iParam0) //Position: 0x9AC / 2476
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_6(iParam0))
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

int Function_25(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xA04 / 2564
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
	Function_38(iParam0, TO_FLOAT(bParam1), 1);
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_26(iParam0);
	return 1;
}

void Function_26(bool bParam0) //Position: 0xC2C / 3116
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

void Function_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xCCA / 3274
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_21(390))), 32);
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
					bVar19 = (Function_22(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_22(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_35(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_32(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_28(), &Var9);
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

var Function_28() //Position: 0x1308 / 4872
{
	int iVar0;
	
	return &iVar0;
}

var Function_29(int iParam0) //Position: 0x1311 / 4881
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1322 / 4898
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0) //Position: 0x1419 / 5145
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1434 / 5172
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_34(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_33(Function_34(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x149B / 5275
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_34(int iParam0, bool bParam1) //Position: 0x14AD / 5293
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_35(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x14BF / 5311
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
	if (((Function_36(iParam0) != 19 || Function_36(iParam0) != 17) || Function_36(iParam0) != 10) || Function_36(iParam0) != 9)
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

int Function_36(int iParam0) //Position: 0x15F3 / 5619
{
	return Global_55480[iParam016].f_96;
}

void Function_37(int iParam0) //Position: 0x1602 / 5634
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

int Function_38(int iParam0, float fParam1, bool bParam2) //Position: 0x179C / 6044
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

int Function_39(var uParam0) //Position: 0x19E0 / 6624
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_57(&uParam0, 2048))
	{
		return 0;
	}
	uLocal_524 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_523 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_17(&iVar1);
		Var2 = Function_17(&iVar1);
		Function_42(&iVar1);
		Var4 = Function_42(&iVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_524);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

struct<32> Function_40(char* cParam0) //Position: 0x1B0A / 6922
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41("0", &cVar8, ""), 4);
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

struct<32> Function_41(char* cParam0) //Position: 0x1B76 / 7030
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<8> Function_42(bool bParam0) //Position: 0x1B98 / 7064
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_43(char* cParam0) //Position: 0x1BC1 / 7105
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

void Function_44() //Position: 0x1C4E / 7246
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		Global_99485[iVar019].f_76 = 0;
		strcpy(&Global_99485[iVar019] + 84, "", 32);
		Global_99485[iVar019].f_72 = 1.0f;
		(&Global_99485[iVar019] + 64) = "";
		strcpy(&(Global_99485[iVar019]), "", 32);
		Global_99485[iVar019].f_80 = 0;
		Global_99485[iVar019].f_148 = 0;
		iVar0++;
	}
	return;
}

bool Function_45(int iParam0) //Position: 0x1CC0 / 7360
{
	if (!Function_6(iParam0))
	{
		return 0;
	}
	return Function_57(&(Global_43791[iParam0]), 2048);
}

void Function_46(char* cParam0) //Position: 0x1CDE / 7390
{
	if (!Function_47(128))
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

bool Function_47(int iParam0) //Position: 0x1D1E / 7454
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_48(int iParam0, bool bParam1) //Position: 0x1D3A / 7482
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
		Function_49(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x1E2A / 7722
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_50(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1E37 / 7735
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
		Function_51();
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

void Function_51() //Position: 0x1F25 / 7973
{
	int iVar0;
	
	Global_41176 = Function_52(StackVal);
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

int Function_52(int iParam0) //Position: 0x1F73 / 8051
{
	if (!Function_53(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_53(int iParam0) //Position: 0x1F8B / 8075
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_54(int iParam0) //Position: 0x1FA0 / 8096
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x1FB3 / 8115
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

int Function_56(int iParam0) //Position: 0x1FCD / 8141
{
	if (!Function_6(iParam0))
	{
		return 1;
	}
	return Function_57(&(Global_43791[iParam0]), 4);
}

bool Function_57(var uParam0, int iParam1) //Position: 0x1FE9 / 8169
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_58(var uParam0, int iParam1) //Position: 0x2006 / 8198
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_59() //Position: 0x2017 / 8215
{
	int iVar0;
	
	Function_67(3, 3);
	iVar0 = &iVar0;
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_65(&iLocal_458 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (!Function_60(&iLocal_458 + 8))
	{
		return 0;
	}
	iLocal_458 = FIND_NAMED_LAYOUT("WreckSerendipity_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_458))
	{
		iLocal_458 = CREATE_LAYOUT("WreckSerendipity_layout");
	}
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "dealer_and_customer", "dealer_and_customer", Vector(354,635f, 73,48884f, 1954,173f), Vector(0.0f, -183,4713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Pee", "Pee", Vector(352,6351f, 73,48754f, 1966,528f), Vector(0.0f, 153,3772f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Pee1", "Pee", Vector(333,9339f, 74,63037f, 1955,042f), Vector(0.0f, -113,9692f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Pee3", "Pee", Vector(362,1963f, 78,70888f, 1984,005f), Vector(0.0f, -43,27293f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(356,695f, 73,3355f, 1980,807f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(363,685f, 78,22058f, 1988,836f), Vector(0.0f, -131,002f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(361,81f, 73,49126f, 1945,766f), Vector(0.0f, 68,75826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(337,9365f, 74,69586f, 1948,573f), Vector(0.0f, -29,85284f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "rand_idle_stand", "rand_idle_stand", Vector(338,2788f, 74,59718f, 1942,472f), Vector(0.0f, -164,8241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "rand_idle_stand1", "rand_idle_stand", Vector(351,7368f, 73,51026f, 1961,27f), Vector(0.0f, -153,2844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "rand_idle_stand2", "rand_idle_stand", Vector(359,0939f, 78,41655f, 1991,795f), Vector(0.0f, -161,0478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "rand_idle_stand3", "rand_idle_stand", Vector(351,7272f, 76,37608f, 1986,588f), Vector(0.0f, 68,45935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "nsit_docks", "nsit_docks", Vector(362,9535f, 73,49775f, 1944,367f), Vector(0.0f, -116,2048f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_docks2", "nsit_docks", Vector(358,1055f, 73,51682f, 1947,029f), Vector(0.0f, 62,71283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_docks3", "nsit_docks", Vector(361,5993f, 73,51353f, 1974,203f), Vector(0.0f, -118,1669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(353,0802f, 73,92802f, 1977,584f), Vector(0.0f, -63,59391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(352,9845f, 76,43525f, 1984,406f), Vector(0.0f, 52,31681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(341,3909f, 74,68107f, 1950,141f), Vector(0.0f, -29,60669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", Vector(350,2228f, 73,50451f, 1963,835f), Vector(0.0f, -27,04769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_ground_smoke", "sit_ground_smoke", Vector(357,5717f, 76,21391f, 1981,747f), Vector(0.0f, -29,00372f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_ground_smoke1", "sit_ground_smoke", Vector(357,9307f, 79,30289f, 1980,97f), Vector(0.0f, -168,4821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_ground_smoke2", "sit_ground_smoke", Vector(335,3785f, 74,60644f, 1940,426f), Vector(0.0f, -21,86767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_ground_smoke3", "sit_ground_smoke", Vector(369,985f, 73,60038f, 1944,503f), Vector(0.0f, -25,18101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "smoking_stand", "smoking_stand", Vector(353,5407f, 73,50629f, 1956,611f), Vector(0.0f, 125,3635f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "smoking_stand1", "smoking_stand", Vector(334,0739f, 74,63643f, 1949,386f), Vector(0.0f, 123,4706f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "smoking_stand2", "smoking_stand", Vector(374,6213f, 76,9418f, 1994,595f), Vector(0.0f, -44,4191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "smoking_stand3", "smoking_stand", Vector(365,6466f, 75,12769f, 1987,063f), Vector(0.0f, -36,65416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "smoking_stand4", "smoking_stand", Vector(353,3409f, 73,00873f, 1989,625f), Vector(0.0f, -317,8609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(354,8198f, 79,44684f, 1982,737f), Vector(0.0f, 62,95712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(346,8859f, 74,01875f, 1984,04f), Vector(0.0f, 129,3219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(339,8805f, 74,67838f, 1949,598f), Vector(0.0f, 156,1538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "stand_yelling_down", "stand_yelling_down", Vector(355,6973f, 79,40739f, 1982,143f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "dealer_and_customer1", "dealer_and_customer", Vector(358,5869f, 78,8562f, 1986,106f), Vector(0.0f, -152,8077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "dealer_and_customer2", "dealer_and_customer", Vector(355,8004f, 76,43654f, 1980,956f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "look_out_window_L", "look_out_window_L", Vector(330,4191f, 74,60296f, 1937,536f), Vector(0.0f, 107,1152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(331,1541f, 74,41691f, 1933,66f), Vector(0.0f, 66,63307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "lean_fence_L_talking", "lean_fence_L_talking", Vector(334,3096f, 74,60679f, 1942,392f), Vector(0.0f, 153,1973f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(371,9703f, 73,50294f, 1937,603f), Vector(0.0f, -27,3343f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "sit_docks4", "nsit_docks", Vector(375,2437f, 73,48671f, 1938,945f), Vector(0.0f, -116,2048f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "Sit_Ground_Drink2", "Sit_Ground_Drink", Vector(367,3382f, 73,51371f, 1936,028f), Vector(0.0f, -113,1597f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "lean_fence_back", "lean_fence_back", Vector(377,7558f, 73,52457f, 1924,431f), Vector(0.0f, -117,9854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_458, "rand_idle_stand4", "rand_idle_stand", Vector(371,8394f, 73,54734f, 1936,036f), Vector(0.0f, -23,76552f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_60(struct<2>[] Param0) //Position: 0x323F / 12863
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_64();
	iVar1 = 0;
	if (!Function_11(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_63(&(Param0[iVar02]), 8);
		}
		else if (Function_62())
		{
			iVar1 = 1;
			Function_63(&(Param0[iVar02]), 8);
		}
		Function_63(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_11(&(Param0[iVar02]), 4))
		{
			if (!Function_11(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_11(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_11(&(Param0[02]), 8) || iVar1));
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
				Function_63(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_11(&(Param0[iVar02]), 4))
		{
			if (!Function_11(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_63(&(Param0[iVar02]), 2);
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
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_63(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_63(&(Param0[iVar02]), 2);
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
	Function_61();
	return 1;
}

void Function_61() //Position: 0x3601 / 13825
{
	if (!Function_47(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_62() //Position: 0x3641 / 13889
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

void Function_63(struct<13> Param0) //Position: 0x366F / 13935
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_64() //Position: 0x3682 / 13954
{
	if (!Function_47(128))
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

var Function_65(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x36C4 / 14020
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_66(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_63(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_66(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x3702 / 14082
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_11(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_63(&(Param0[iVar02]), 4);
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

void Function_67(int iParam0, int iParam1) //Position: 0x37D1 / 14289
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

bool Function_68() //Position: 0x381B / 14363
{
	var uVar0;
	
	Function_67(3, 3);
	uVar0 = &uVar0;
	Function_65(&iLocal_0 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_60(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("WreckSerendipity_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("WreckSerendipity_layout");
	}
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "serv_fteGateway", 2,802597E-45f, Vector(381,3844f, 73,89673f, 1918,055f), Vector(0.0f, -116,8491f, 0.0f), Vector(1,809752f, 1,895603f, 1,489211f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave01_01_volume", 2,802597E-45f, Vector(369,0461f, 72,76907f, 1990,021f), Vector(5,77427f, -39,13773f, -9,102025f), Vector(7,222366f, 3,174353f, 2,714623f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave01_02_volume", 2,802597E-45f, Vector(358,5017f, 77,20467f, 1981,612f), Vector(4,817313f, -39,7764f, -7,504075f), Vector(5,131279f, 2,254162f, 1,511121f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave01_03_volume", 2,802597E-45f, Vector(370,8049f, 75,93214f, 1991,772f), Vector(5,269572f, -40,22292f, -8,128338f), Vector(5,165073f, 3,376552f, 2,402716f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave01_04_volume", 2,802597E-45f, Vector(369,1449f, 79,0653f, 1990,682f), Vector(5,235663f, -39,14638f, -8,258895f), Vector(2,121002f, 2,825132f, 1,825967f));
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave02_01_volume", 2,802597E-45f, Vector(370,223f, 75,72918f, 1991,275f), Vector(5,269572f, -40,22292f, -8,128338f), Vector(7,63935f, 2,734087f, 1,541851f));
	*(&iLocal_0 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave02_02_volume", 2,802597E-45f, Vector(359,8776f, 80,21672f, 1982,945f), Vector(3,731726f, -39,88539f, -5,807691f), Vector(6,483201f, 3,224558f, 1,752705f));
	*(&iLocal_0 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave02_03_volume", 2,802597E-45f, Vector(364,6038f, 79,72445f, 1986,947f), Vector(5,235663f, -39,14638f, -8,258895f), Vector(5,129038f, 2,825132f, 1,825967f));
	*(&iLocal_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave02_04_volume", 2,802597E-45f, Vector(363,7725f, 76,40098f, 1985,945f), Vector(4,859982f, -38,86846f, -7,716203f), Vector(6,23106f, 2,234058f, 1,617672f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave03_01_volume", 2,802597E-45f, Vector(357,6213f, 80,76938f, 1982,68f), Vector(2,708181f, 46,5673f, 0.0f), Vector(3,842283f, 3,313471f, 3,229902f));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave03_02_volume", 2,802597E-45f, Vector(355,3372f, 77,62464f, 1980,292f), Vector(6,16082f, 49,56707f, -0,2579204f), Vector(3,842283f, 2,483483f, 2,596164f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave03_03_volume", 2,802597E-45f, Vector(346,894f, 76,0659f, 1976,21f), Vector(173,6432f, -48,27009f, -177,8257f), Vector(4,014162f, 2,489162f, 2,156245f));
	*(&iLocal_0 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave03_04_volume", 2,802597E-45f, Vector(364,6685f, 79,51928f, 1986,833f), Vector(5,502387f, -39,77302f, -6,104938f), Vector(3,842283f, 2,483483f, 1,680425f));
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_frontArmyInside", 2,802597E-45f, Vector(354,6598f, 73,53264f, 1952,88f), Vector(0.0f, -26,18401f, 0.0f), Vector(7,374529f, 4,802721f, 9,179728f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_armyOut", 2,802597E-45f, Vector(367,5521f, 74,74449f, 1919,367f), Vector(2,019544f, -28,09787f, -1,427215f), Vector(17,21668f, 10,33241f, 11,37183f));
	*(&iLocal_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave04_01_volume1", 2,802597E-45f, Vector(352,3378f, 74,18173f, 1988,004f), Vector(2,868367f, 49,5234f, 0,215327f), Vector(3,131414f, 3,384139f, 4,805599f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave04_02_volume2", 2,802597E-45f, Vector(362,9832f, 75,96631f, 1996,585f), Vector(2,868367f, 49,5234f, 0,215327f), Vector(1,911655f, 3,057883f, 3,177613f));
	*(&iLocal_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave04_03_volume3", 2,802597E-45f, Vector(378,2547f, 74,11359f, 2006,649f), Vector(2,868367f, 49,5234f, 0,215327f), Vector(6,777835f, 3,057883f, 7,978582f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave04_04_volume4", 2,802597E-45f, Vector(372,3968f, 78,03742f, 2000,41f), Vector(2,868367f, 49,5234f, 0,215327f), Vector(7,616277f, 3,057883f, 8,434227f));
	*(&iLocal_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_wave04_05_volume5", 2,802597E-45f, Vector(359,0937f, 80,01684f, 1987,861f), Vector(2,868367f, 49,5234f, 0,215327f), Vector(7,440507f, 3,057883f, 4,082039f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_armyGuyVolume", 2,802597E-45f, Vector(382,8296f, 74,44317f, 1914,091f), Vector(0.0f, -27,67019f, 0.0f), Vector(4,720865f, 2,712977f, 3,516565f));
	*(&iLocal_0 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_armyGuyVolume1", 2,802597E-45f, Vector(326,9892f, 75,18179f, 1938,161f), Vector(0.0f, -27,67019f, 0.0f), Vector(4,720865f, 2,712977f, 3,516565f));
	*(&iLocal_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_armyGuyVolume2", 2,802597E-45f, Vector(337,385f, 75,51839f, 1946,909f), Vector(0.0f, -27,67019f, 0.0f), Vector(6,302911f, 2,240261f, 4,695028f));
	*(&iLocal_0 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_battleDefend", 2,802597E-45f, Vector(353,6256f, 71,53215f, 1954,597f), Vector(0.0f, -26,87849f, 0.0f), Vector(22,30267f, 13,10049f, 31,45668f));
	*(&iLocal_0 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_armyGuysRaid", 2,802597E-45f, Vector(365,7249f, 75,82236f, 1993,314f), Vector(6.0f, 49,991f, 0.0f), Vector(13,52193f, 9,604784f, 53,89392f));
	*(&iLocal_0 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_stayOutVolume", 2,802597E-45f, Vector(369,0173f, 75,60808f, 1942,629f), Vector(0.0f, -26,64459f, 0.0f), Vector(8,804386f, 5,389972f, 5,858354f));
	*(&iLocal_0 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_CoverVolume", 2,802597E-45f, Vector(366,2262f, 74,1117f, 1942,925f), Vector(0.0f, -28,30649f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	*(&iLocal_0 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_SER_VoltureSpawn", 2,802597E-45f, Vector(369,7945f, 91,72117f, 1996,438f), Vector(3,867035f, -40,93152f, -5,890596f), Vector(11,26994f, 4,418915f, 9,146477f));
	*(&iLocal_0 + 256) = Vector(342,1106f, 78,40516f, 1909,851f);
	*(&iLocal_0 + 256 + 12) = Vector(-1,337137f, -123,3311f, 1,78734f);
	*(&iLocal_0 + 280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "serf_teleport", Vector(342,1106f, 78,40516f, 1909,851f), Vector(-1,337137f, -123,3311f, 1,78734f));
	*(&iLocal_0 + 288) = Vector(383,1488f, 73,48019f, 1915,583f);
	*(&iLocal_0 + 288 + 12) = Vector(0.0f, 97,46603f, 0.0f);
	*(&iLocal_0 + 312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn1", Vector(383,1488f, 73,48019f, 1915,583f), Vector(0.0f, 97,46603f, 0.0f));
	*(&iLocal_0 + 320) = Vector(381,9163f, 73,68359f, 1914,084f);
	*(&iLocal_0 + 320 + 12) = Vector(0.0f, 158,4674f, 0.0f);
	*(&iLocal_0 + 344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn2", Vector(381,9163f, 73,68359f, 1914,084f), Vector(0.0f, 158,4674f, 0.0f));
	*(&iLocal_0 + 352) = Vector(383,6812f, 73,29027f, 1917,788f);
	*(&iLocal_0 + 352 + 12) = Vector(0.0f, 85,33881f, 0.0f);
	*(&iLocal_0 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn3", Vector(383,6812f, 73,29027f, 1917,788f), Vector(0.0f, 85,33881f, 0.0f));
	*(&iLocal_0 + 384) = Vector(326,2454f, 74,39557f, 1937,776f);
	*(&iLocal_0 + 384 + 12) = Vector(0.0f, -120,4543f, 0.0f);
	*(&iLocal_0 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn4", Vector(326,2454f, 74,39557f, 1937,776f), Vector(0.0f, -120,4543f, 0.0f));
	*(&iLocal_0 + 416) = Vector(328,0443f, 74,12612f, 1938,272f);
	*(&iLocal_0 + 416 + 12) = Vector(0.0f, -107,8311f, 0.0f);
	*(&iLocal_0 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn5", Vector(328,0443f, 74,12612f, 1938,272f), Vector(0.0f, -107,8311f, 0.0f));
	*(&iLocal_0 + 448) = Vector(335,9885f, 74,60045f, 1947,672f);
	*(&iLocal_0 + 448 + 12) = Vector(0.0f, 232,9473f, 0.0f);
	*(&iLocal_0 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn6", Vector(335,9885f, 74,60045f, 1947,672f), Vector(0.0f, 232,9473f, 0.0f));
	*(&iLocal_0 + 480) = Vector(339,5692f, 74,73612f, 1946,6f);
	*(&iLocal_0 + 480 + 12) = Vector(0.0f, 234,3701f, 0.0f);
	*(&iLocal_0 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn7", Vector(339,5692f, 74,73612f, 1946,6f), Vector(0.0f, 234,3701f, 0.0f));
	*(&iLocal_0 + 512) = Vector(366,2724f, 73,48085f, 1942,84f);
	*(&iLocal_0 + 512 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Cover1Spot", Vector(366,2724f, 73,48085f, 1942,84f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 544) = Vector(381,6037f, 73,30737f, 1918,245f);
	*(&iLocal_0 + 544 + 12) = Vector(0.0f, 67,67715f, 0.0f);
	*(&iLocal_0 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Army1", Vector(381,6037f, 73,30737f, 1918,245f), Vector(0.0f, 67,67715f, 0.0f));
	*(&iLocal_0 + 576) = Vector(368,3727f, 71,73695f, 1989,205f);
	*(&iLocal_0 + 576 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave01_01", Vector(368,3727f, 71,73695f, 1989,205f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 608) = Vector(358,6013f, 76,19056f, 1981,798f);
	*(&iLocal_0 + 608 + 12) = Vector(0.0f, -53,37406f, 0.0f);
	*(&iLocal_0 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave01_02", Vector(358,6013f, 76,19056f, 1981,798f), Vector(0.0f, -53,37406f, 0.0f));
	*(&iLocal_0 + 640) = Vector(371,201f, 74,4006f, 1992,067f);
	*(&iLocal_0 + 640 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave01_03", Vector(371,201f, 74,4006f, 1992,067f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 672) = Vector(368,9348f, 77,69176f, 1990,682f);
	*(&iLocal_0 + 672 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave01_04", Vector(368,9348f, 77,69176f, 1990,682f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 704) = Vector(369,7798f, 74,17868f, 1996,924f);
	*(&iLocal_0 + 704 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave02_01", Vector(369,7798f, 74,17868f, 1996,924f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 736) = Vector(356,2594f, 78,67737f, 1990,361f);
	*(&iLocal_0 + 736 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave02_02", Vector(356,2594f, 78,67737f, 1990,361f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 768) = Vector(368,4907f, 77,18343f, 1999,804f);
	*(&iLocal_0 + 768 + 12) = Vector(0.0f, 92,98814f, 0.0f);
	*(&iLocal_0 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave02_03", Vector(368,4907f, 77,18343f, 1999,804f), Vector(0.0f, 92,98814f, 0.0f));
	*(&iLocal_0 + 800) = Vector(361,5674f, 75,31189f, 1987,549f);
	*(&iLocal_0 + 800 + 12) = Vector(0.0f, -67,33755f, 0.0f);
	*(&iLocal_0 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave02_04", Vector(361,5674f, 75,31189f, 1987,549f), Vector(0.0f, -67,33755f, 0.0f));
	*(&iLocal_0 + 832) = Vector(354,2866f, 79,35274f, 1986,668f);
	*(&iLocal_0 + 832 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave03_01", Vector(354,2866f, 79,35274f, 1986,668f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 864) = Vector(351,9842f, 76,45283f, 1987,307f);
	*(&iLocal_0 + 864 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave03_02", Vector(351,9842f, 76,45283f, 1987,307f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 896) = Vector(346,2249f, 74,2135f, 1982,753f);
	*(&iLocal_0 + 896 + 12) = Vector(0.0f, 46,39677f, 0.0f);
	*(&iLocal_0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave03_03", Vector(346,2249f, 74,2135f, 1982,753f), Vector(0.0f, 46,39677f, 0.0f));
	*(&iLocal_0 + 928) = Vector(367,5039f, 77,15009f, 2000,852f);
	*(&iLocal_0 + 928 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave03_04", Vector(367,5039f, 77,15009f, 2000,852f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 960) = Vector(354,9929f, 78,93938f, 1988,493f);
	*(&iLocal_0 + 960 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_throwerSpawn1", Vector(354,9929f, 78,93938f, 1988,493f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 992) = Vector(353,1621f, 72,92008f, 1988,594f);
	*(&iLocal_0 + 992 + 12) = Vector(0.0f, -313,5688f, 0.0f);
	*(&iLocal_0 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_finalGuy01", Vector(353,1621f, 72,92008f, 1988,594f), Vector(0.0f, -313,5688f, 0.0f));
	*(&iLocal_0 + 1024) = Vector(364,6204f, 74,67107f, 1994,666f);
	*(&iLocal_0 + 1024 + 12) = Vector(0.0f, -219,3395f, 0.0f);
	*(&iLocal_0 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_finalGuy02", Vector(364,6204f, 74,67107f, 1994,666f), Vector(0.0f, -219,3395f, 0.0f));
	*(&iLocal_0 + 1056) = Vector(381,5958f, 72,56422f, 2006,524f);
	*(&iLocal_0 + 1056 + 12) = Vector(0.0f, -592,0921f, 0.0f);
	*(&iLocal_0 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_finalGuy03", Vector(381,5958f, 72,56422f, 2006,524f), Vector(0.0f, -592,0921f, 0.0f));
	*(&iLocal_0 + 1088) = Vector(372,9387f, 76,64568f, 2001,704f);
	*(&iLocal_0 + 1088 + 12) = Vector(0.0f, -471,6721f, 0.0f);
	*(&iLocal_0 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_finalGuy04", Vector(372,9387f, 76,64568f, 2001,704f), Vector(0.0f, -471,6721f, 0.0f));
	*(&iLocal_0 + 1120) = Vector(358,8818f, 78,77789f, 1987,273f);
	*(&iLocal_0 + 1120 + 12) = Vector(0.0f, -866,5748f, 0.0f);
	*(&iLocal_0 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_finalGuy05", Vector(358,8818f, 78,77789f, 1987,273f), Vector(0.0f, -866,5748f, 0.0f));
	*(&iLocal_0 + 1152) = Vector(372,3757f, 73,58804f, 1943,048f);
	*(&iLocal_0 + 1152 + 12) = Vector(0.0f, 61,22559f, 0.0f);
	*(&iLocal_0 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_amoFootLocker", Vector(372,3757f, 73,58804f, 1943,048f), Vector(0.0f, 61,22559f, 0.0f));
	*(&iLocal_0 + 1184) = Vector(359,4891f, 73,48854f, 1949,504f);
	*(&iLocal_0 + 1184 + 12) = Vector(0.0f, -181,6368f, 0.0f);
	*(&iLocal_0 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_01", Vector(359,4891f, 73,48854f, 1949,504f), Vector(0.0f, -181,6368f, 0.0f));
	*(&iLocal_0 + 1216) = Vector(356,0711f, 73,49027f, 1951,346f);
	*(&iLocal_0 + 1216 + 12) = Vector(0.0f, -181,6368f, 0.0f);
	*(&iLocal_0 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_02", Vector(356,0711f, 73,49027f, 1951,346f), Vector(0.0f, -181,6368f, 0.0f));
	*(&iLocal_0 + 1248) = Vector(357,6504f, 73,42057f, 1952,052f);
	*(&iLocal_0 + 1248 + 12) = Vector(0.0f, -181,6368f, 0.0f);
	*(&iLocal_0 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_03", Vector(357,6504f, 73,42057f, 1952,052f), Vector(0.0f, -181,6368f, 0.0f));
	*(&iLocal_0 + 1280) = Vector(345,9885f, 73,94094f, 1950,099f);
	*(&iLocal_0 + 1280 + 12) = Vector(0.0f, -114,4222f, 0.0f);
	*(&iLocal_0 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_04", Vector(345,9885f, 73,94094f, 1950,099f), Vector(0.0f, -114,4222f, 0.0f));
	*(&iLocal_0 + 1312) = Vector(351,4046f, 73,94094f, 1962,924f);
	*(&iLocal_0 + 1312 + 12) = Vector(0.0f, -146,6611f, 0.0f);
	*(&iLocal_0 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_05", Vector(351,4046f, 73,94094f, 1962,924f), Vector(0.0f, -146,6611f, 0.0f));
	*(&iLocal_0 + 1344) = Vector(349,4418f, 74,02776f, 1954,098f);
	*(&iLocal_0 + 1344 + 12) = Vector(0.0f, -146,6611f, 0.0f);
	*(&iLocal_0 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_06", Vector(349,4418f, 74,02776f, 1954,098f), Vector(0.0f, -146,6611f, 0.0f));
	*(&iLocal_0 + 1376) = Vector(352,9106f, 74,02776f, 1955,399f);
	*(&iLocal_0 + 1376 + 12) = Vector(0.0f, -146,6611f, 0.0f);
	*(&iLocal_0 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_armySpawn_dest_07", Vector(352,9106f, 74,02776f, 1955,399f), Vector(0.0f, -146,6611f, 0.0f));
	*(&iLocal_0 + 1408) = Vector(365,4543f, 73,4912f, 1941,518f);
	*(&iLocal_0 + 1408 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_deadSniperLocation", Vector(365,4543f, 73,4912f, 1941,518f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1440) = Vector(366,0441f, 74,75908f, 1990,655f);
	*(&iLocal_0 + 1440 + 12) = Vector(-48,75263f, 95,34057f, -48,87616f);
	*(&iLocal_0 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_treasurePosition01", Vector(366,0441f, 74,75908f, 1990,655f), Vector(-48,75263f, 95,34057f, -48,87616f));
	*(&iLocal_0 + 1472) = Vector(355,7756f, 79,19026f, 1985,049f);
	*(&iLocal_0 + 1472 + 12) = Vector(0.0f, -129,7912f, 0.0f);
	*(&iLocal_0 + 1496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_treasurePosition02", Vector(355,7756f, 79,19026f, 1985,049f), Vector(0.0f, -129,7912f, 0.0f));
	*(&iLocal_0 + 1504) = Vector(372,169f, 77,10278f, 1995,465f);
	*(&iLocal_0 + 1504 + 12) = Vector(-5,420354f, -219,4093f, -8,500571f);
	*(&iLocal_0 + 1528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_treasurePosition03", Vector(372,169f, 77,10278f, 1995,465f), Vector(-5,420354f, -219,4093f, -8,500571f));
	*(&iLocal_0 + 1536) = Vector(379,9999f, 73,56125f, 1916.0f);
	*(&iLocal_0 + 1536 + 12) = Vector(0.0f, -44,06441f, 0.0f);
	*(&iLocal_0 + 1560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_retreatPoint", Vector(379,9999f, 73,56125f, 1916.0f), Vector(0.0f, -44,06441f, 0.0f));
	*(&iLocal_0 + 1568) = Vector(368,9042f, 73,58549f, 1944,217f);
	*(&iLocal_0 + 1568 + 12) = Vector(0.0f, -31,43598f, 0.0f);
	*(&iLocal_0 + 1592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_amoFootLocker01", Vector(368,9042f, 73,58549f, 1944,217f), Vector(0.0f, -31,43598f, 0.0f));
	*(&iLocal_0 + 1600) = Vector(356,4168f, 73,48362f, 1979,343f);
	*(&iLocal_0 + 1600 + 12) = Vector(0.0f, 148,4223f, 0.0f);
	*(&iLocal_0 + 1624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid01", Vector(356,4168f, 73,48362f, 1979,343f), Vector(0.0f, 148,4223f, 0.0f));
	*(&iLocal_0 + 1632) = Vector(370,6174f, 73,64816f, 2001,876f);
	*(&iLocal_0 + 1632 + 12) = Vector(0.0f, 225,5512f, 0.0f);
	*(&iLocal_0 + 1656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid02", Vector(370,6174f, 73,64816f, 2001,876f), Vector(0.0f, 225,5512f, 0.0f));
	*(&iLocal_0 + 1664) = Vector(359,561f, 75,32771f, 1993,457f);
	*(&iLocal_0 + 1664 + 12) = Vector(0.0f, 225,5512f, 0.0f);
	*(&iLocal_0 + 1688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid03", Vector(359,561f, 75,32771f, 1993,457f), Vector(0.0f, 225,5512f, 0.0f));
	*(&iLocal_0 + 1696) = Vector(373,7929f, 73,20841f, 2004,874f);
	*(&iLocal_0 + 1696 + 12) = Vector(0.0f, 225,5512f, 0.0f);
	*(&iLocal_0 + 1720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid04", Vector(373,7929f, 73,20841f, 2004,874f), Vector(0.0f, 225,5512f, 0.0f));
	*(&iLocal_0 + 1728) = Vector(375,2634f, 76,26759f, 2000,713f);
	*(&iLocal_0 + 1728 + 12) = Vector(0.0f, 94,84293f, 0.0f);
	*(&iLocal_0 + 1752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid05", Vector(375,2634f, 76,26759f, 2000,713f), Vector(0.0f, 94,84293f, 0.0f));
	*(&iLocal_0 + 1760) = Vector(362,0303f, 78,00477f, 1995,136f);
	*(&iLocal_0 + 1760 + 12) = Vector(0.0f, 15,82706f, 0.0f);
	*(&iLocal_0 + 1784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid06", Vector(362,0303f, 78,00477f, 1995,136f), Vector(0.0f, 15,82706f, 0.0f));
	*(&iLocal_0 + 1792) = Vector(367,208f, 77,92383f, 1990,033f);
	*(&iLocal_0 + 1792 + 12) = Vector(0.0f, 74,69331f, 0.0f);
	*(&iLocal_0 + 1816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wave04_raid07", Vector(367,208f, 77,92383f, 1990,033f), Vector(0.0f, 74,69331f, 0.0f));
	*(&iLocal_0 + 1824) = Function_69(StackVal, StackVal, &iLocal_0, "cover1x1x0", "p_uti_cover1x1x", Vector(363,1493f, 73,48016f, 1943,905f), Vector(0.0f, -26,54478f, 0.0f), 1);
	return 1;
}

var Function_69(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7) //Position: 0x529B / 21147
{
	uParam0 = &uParam0;
	uParam1 = &uParam1;
	uParam2 = &uParam2;
	Param3 = Param3;
	Param5 = Param5;
	uParam7 = uParam7;
	return "";
}

void Function_70(char* cParam0) //Position: 0x52C9 / 21193
{
	if (!Function_47(128))
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

int Function_71(int iParam0) //Position: 0x5306 / 21254
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
	if (Function_57(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

