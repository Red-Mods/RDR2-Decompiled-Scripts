//Decompiled with MagicRDR v1.0
//Function Count : 96
//Statics Count : 574
//Natives Count : 124
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 3;
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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 30;
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
	int iLocal_454 = 0;
	bool bLocal_455 = false;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 2;
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
	int iLocal_509 = 0;
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
	var uLocal_535 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_454 = 0;
	Function_95(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_94("Initializing GreatPlains", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_455 = 1000;
		switch (iLocal_454)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_454 = 1;
				}
				bLocal_455 = false;
				break;
			
			case 0x00000001:
				if (Function_92())
				{
					iLocal_454 = 2;
				}
				bLocal_455 = false;
				break;
			
			case 0x00000002:
				if (Function_83())
				{
					Function_82(&(Global_43791[iScriptParam_0]), 32);
					iLocal_454 = 3;
					Function_79(&iLocal_0);
				}
				bLocal_455 = false;
				break;
			
			case 0x00000003:
				uLocal_457 = LAUNCH_NEW_SCRIPT_WITH_ARGS("GreatPlainsVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_12634, &Global_15194, iScriptParam_0);
				iLocal_454 = 5;
				bLocal_455 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_12634, &Global_15194, iScriptParam_0))
				{
					iLocal_454 = 4;
					bLocal_455 = false;
				}
				else
				{
					bLocal_455 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_43791[iScriptParam_0]), 16))
				{
					iLocal_454 = 6;
				}
				bLocal_455 = false;
				break;
			
			case 0x00000006:
				Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, &uLocal_463, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, &uLocal_463, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_69(&Global_12634, &Global_15194, &uLocal_463, &Global_10996, iScriptParam_0);
				Function_82(&(Global_43791[iScriptParam_0]), 8);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_68(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_454 = 10;
				}
				else
				{
					iLocal_454 = 7;
				}
				bLocal_455 = false;
				break;
			
			case 0x00000007:
				Function_66(iScriptParam_0);
				if (Function_65(320) <= 20)
				{
					Function_61(21, 2, 25, 4294967276, 50, 1, 1024, 0, 4, iScriptParam_0, "$/content/Ambient/Roaming/event_last_buffalo", 63, 2, 130.0f, 8, 15, 0);
					Function_60(&Global_27462[2152] + 188, 2, 20.0f, 1, 752);
					Function_59(&Global_27462[2152] + 188, -10.0f, 4);
					Function_58(&Global_27462[2152] + 188, 20.0f);
					uLocal_456 = uLocal_456;
				}
				iLocal_454 = 8;
				bLocal_455 = false;
				break;
			
			case 0x00000008:
				Function_57(StackVal, 0, Global_46914[0], Vector(772,1412f, 79,45659f, 1241,604f));
				if (!Function_56(&Global_46914))
				{
					Function_52(3, 0,5f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_56(&Global_46914));
					Function_51(64);
					Function_47(0, 8, 4, 0, 3);
				}
				Function_82(&(Global_43791[iScriptParam_0]), 512);
				iLocal_454 = 9;
				bLocal_455 = false;
				break;
			
			case 0x00000009:
				if (!Function_56(&Global_46914))
				{
					Function_45(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 2;
				Function_82(&(Global_43791[iScriptParam_0]), 4);
				Function_44("Finished Initializing GreatPlains", 5.0f);
				iLocal_454 = 10;
				bLocal_455 = false;
				break;
			
			case 0x0000000A:
				if (!Function_56(&Global_46914))
				{
					if (iLocal_509)
					{
						iLocal_509 = 0;
						iLocal_454 = 8;
						bLocal_455 = false;
					}
				}
				else
				{
					iLocal_509 = 1;
				}
				Function_31(&(Global_39874[23]), "BWG", 34, &iLocal_0, 2);
				if (Function_30())
				{
					if (!IS_SCRIPT_VALID(&uLocal_461))
					{
						uLocal_461 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/Roaming/event_last_buffalo", &uLocal_510, 62, 0);
					}
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_459))
					{
						uLocal_459 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_510, 62, 0);
					}
				}
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_454 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_455);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_12634, &Global_15194, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_68(&(Global_43791[iScriptParam_0]), 32);
	Function_68(&(Global_43791[iScriptParam_0]), 64);
	Function_68(&(Global_43791[iScriptParam_0]), 8);
	Function_68(&(Global_43791[iScriptParam_0]), 512);
	Function_68(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_457))
	{
		TERMINATE_SCRIPT(&uLocal_457);
	}
	Function_44("Unloaded GreatPlains", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x576 / 1398
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

void Function_2(int iParam0) //Position: 0x5AC / 1452
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x5CE / 1486
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x5E4 / 1508
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x5FA / 1530
{
	Function_6(&iLocal_26 + 8);
	RELEASE_LAYOUT_REF(&iLocal_26);
	return;
}

void Function_6(int iParam0) //Position: 0x60D / 1549
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x635 / 1589
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

void Function_8(struct<13> Param0) //Position: 0x780 / 1920
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x79D / 1949
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x7BB / 1979
{
	Function_6(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x7CE / 1998
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
	strcpy(&cVar0, Function_21(bParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_76(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_68(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_18(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_18(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_17(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_18(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_17(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_76(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_76(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_18(&(Param0[iVar162]), 2) && !Function_18(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_18(&(Param0[iVar162]), 2) && !Function_18(&(Param0[iVar162]), 4))
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
			Function_82(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9EC / 2540
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
		if (!Function_18(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xB52 / 2898
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

int Function_14(int iParam0) //Position: 0xB7D / 2941
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

void Function_15(var uParam0, int iParam1) //Position: 0xBB1 / 2993
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xBC2 / 3010
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xBDE / 3038
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xBF8 / 3064
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC15 / 3093
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0xC30 / 3120
{
	return (bParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xC3D / 3133
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

void Function_22(int iParam0) //Position: 0x10EB / 4331
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_44085[iParam09] == Global_46722[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_23(int iParam0) //Position: 0x1156 / 4438
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
	{
		return 0;
	}
	if (Global_99472 != 32 || Global_99472 != 1)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6647)
	{
		return 0;
	}
	if (Function_28())
	{
		return 0;
	}
	if (&iParam0 == 0)
	{
		if (Function_26(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_25(0))
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Function_24(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_40000.f_80 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_24(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x11D4 / 4564
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

bool Function_25(int iParam0) //Position: 0x1283 / 4739
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x129E / 4766
{
	if (&iParam0 == 1)
	{
		if (Global_6629 == 1)
		{
			return 0;
		}
	}
	if (Global_6629 == 0)
	{
		return 0;
	}
	if (Global_43789 == Global_46760[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46914[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46816[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46796[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46850[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46926[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46866[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46894[1])
	{
		if (!Function_27(Global_46894[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0x1353 / 4947
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_76(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x1371 / 4977
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x1380 / 4992
{
	return &Global_21369 + 8;
}

bool Function_30() //Position: 0x138C / 5004
{
	if (IS_SCRIPT_VALID(&Global_6615))
	{
		return 0;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 0;
	}
	if (Global_27462[2152].f_408 == 1)
	{
		return 0;
	}
	if (Function_65(320) > 20)
	{
		return 0;
	}
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_27462[2152] + 376))
	{
		return 0;
	}
	if ((Global_43790 != 3 || Global_43790 != 4) || Global_43790 != 5)
	{
		return 0;
	}
	if (Function_24(0, 0, 1, 1))
	{
		return 0;
	}
	return 1;
}

void Function_31(vector3 vParam0) //Position: 0x1400 / 5120
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (vParam0.z)
	{
		if (iParam4 == 1)
		{
			if (VDIST(StackVal, Global_54078, Vector(-1804,95f, 23,088f, 2810,314f)) < 250.0f)
			{
				Function_42(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_42(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_41(&vParam0, 63))
			{
				if (Function_40(76) || Function_39(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_37(&cParam1, &vParam0, 3, &uParam3);
						Function_34(&vParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(StackVal, Global_54078, Vector(-1804,95f, 23,088f, 2810,314f)) < 200.0f)
		{
			return;
		}
		if (Global_39874[13] == 0)
		{
			Function_33();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 200.0f)
		{
			return;
		}
		if (Global_39874[33] == 0)
		{
			Function_32();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_41(&vParam0, 63))
		{
			if (Function_40(76) || Function_39(76))
			{
				Function_37(&cParam1, &vParam0, 3, &uParam3);
				Function_34(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_37(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_32() //Position: 0x1611 / 5649
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_34(&(Global_39874[33]), bVar0);
		bVar0++;
	}
	return;
}

void Function_33() //Position: 0x1658 / 5720
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_34(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x16AA / 5802
{
	if (bParam1 <= 32)
	{
		Function_35(&iParam0, Function_36(bParam1));
	}
	else
	{
		Function_35(&iParam0 + 4, Function_36((bParam1 - 32)));
	}
	return;
}

void Function_35(var uParam0, int iParam1) //Position: 0x16D5 / 5845
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_36(bool bParam0) //Position: 0x16E6 / 5862
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_37(char* cParam0) //Position: 0x16F2 / 5874
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(&iParam1 + 16))
	{
		*(&iParam1 + 16) = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", &uParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, &cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_41(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_38(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(&uVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(&uVar0, &iParam1 + 16);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

var Function_38() //Position: 0x179F / 6047
{
	int iVar0;
	
	return &iVar0;
}

int Function_39(int iParam0) //Position: 0x17A8 / 6056
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_40(int iParam0) //Position: 0x17BD / 6077
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_41(struct<5> Param0) //Position: 0x17D2 / 6098
{
	if (bParam1 <= 32)
	{
		return Function_20(Param0, Function_36(bParam1));
	}
	return Function_20(StackVal, Function_36((bParam1 - 32)));
}

void Function_42(vector3 vParam0) //Position: 0x17FF / 6143
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_43(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_43(var uParam0) //Position: 0x1834 / 6196
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

void Function_44(char* cParam0) //Position: 0x1883 / 6275
{
	if (!Function_16(128))
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

void Function_45(int iParam0, bool bParam1) //Position: 0x18C3 / 6339
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
		Function_46(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_46(var uParam0, int iParam1) //Position: 0x19B3 / 6579
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_47(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x19C0 / 6592
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
		Function_48();
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

void Function_48() //Position: 0x1AAE / 6830
{
	int iVar0;
	
	Global_41176 = Function_49(StackVal);
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

int Function_49(int iParam0) //Position: 0x1AFC / 6908
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_50(int iParam0) //Position: 0x1B14 / 6932
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_51(bool bParam0) //Position: 0x1B29 / 6953
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_52(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1B3C / 6972
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
		Function_55();
	}
	if (&bParam5)
	{
		Function_53(1048576);
	}
}

void Function_53(int iParam0) //Position: 0x1C4A / 7242
{
	Function_54(&Global_43580, iParam0);
	return;
}

void Function_54(var uParam0, var uParam1) //Position: 0x1C58 / 7256
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_55() //Position: 0x1C77 / 7287
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_53(16384);
	}
	return;
}

bool Function_56(int[] iParam0) //Position: 0x1C93 / 7315
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_4(iParam0[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_43791[iParam0[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_57(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1CE4 / 7396
{
	if (!Function_50(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

void Function_58(int iParam0, int iParam1) //Position: 0x1D45 / 7493
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_59(int iParam0, float fParam1, int iParam2) //Position: 0x1D54 / 7508
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_60(struct<85> Param0) //Position: 0x1D6C / 7532
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1D96 / 7574
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_62(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &iParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_62(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1DDD / 7645
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052][0] = iParam2;
	Global_27462[iParam052][1] = iParam3;
	Global_27462[iParam052][2] = iParam4;
	(*&Global_27462[iParam052] + 32)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_27462[iParam052] + 32)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_27462[iParam052] + 32)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_27462[iParam052] + 64)[0] = (Global_27462[iParam052][0] - (*&Global_27462[iParam052] + 32)[0]);
	(*&Global_27462[iParam052] + 64)[1] = (Global_27462[iParam052][1] - (*&Global_27462[iParam052] + 32)[1]);
	(*&Global_27462[iParam052] + 64)[2] = (Global_27462[iParam052][2] - (*&Global_27462[iParam052] + 32)[2]);
	Global_27462[iParam052].f_140 = uParam1;
	Global_27462[iParam052].f_188 = uParam5;
	(&Global_27462[iParam052] + 188)->f_4 = iParam6;
	(&Global_27462[iParam052] + 188)->f_8 = &bParam13;
	Global_27462[iParam052].f_144 = uParam7;
	Global_27462[iParam052].f_148 = uParam8;
	Global_27462[iParam052].f_156 = 4294967295;
	Global_27462[iParam052].f_152 = &uParam15;
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&cParam9, 4);
	Global_27462[iParam052].f_168 = uParam10;
	Global_27462[iParam052].f_172 = uParam11;
	Global_27462[iParam052].f_136 = &uParam12;
	(&Global_27462[iParam052] + 188)->f_156 = 0;
	strcpy(&Global_27462[iParam052] + 188 + 36, "", 8);
	(&Global_27462[iParam052] + 188 + 36)->f_16 = 50.0f;
	(&Global_27462[iParam052] + 188 + 36)->f_20 = 4294967295;
	(&Global_27462[iParam052] + 188)->f_84 = 1;
	(&Global_27462[iParam052] + 188 + 84)->f_4 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_8 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_12 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_16 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_24 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_32 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_28 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_36 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_40 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_44 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_52 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_48 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_56 = 0.0f;
	(&Global_27462[iParam052] + 188)->f_148 = 0;
	if (!Function_19())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
		if (!Global_6606)
		{
			if (Global_6665)
			{
				bVar2 = false;
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_64(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_63(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_64(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_63(int iParam0, int iParam1) //Position: 0x219B / 8603
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_64(int iParam0) //Position: 0x21BE / 8638
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_65(int iParam0) //Position: 0x21D5 / 8661
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_66(int iParam0) //Position: 0x2216 / 8726
{
	Function_61(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_60(&Global_27462[1852] + 188, 1, 5.0f, 1, 640);
	Function_58(&Global_27462[1852] + 188, 5.0f);
	Function_67(&Global_27462[552] + 188, 19,9f, 0,7f);
	Function_59(&Global_27462[552] + 188, -4.0f, 2);
	return;
}

void Function_67(int iParam0, var uParam1, int iParam2) //Position: 0x22AB / 8875
{
	(&iParam0 + 84)->f_44 = uParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_68(var uParam0, int iParam1) //Position: 0x22C3 / 8899
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_69(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x22DD / 8925
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_76(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_70(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_68(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_82(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_70(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2395 / 9109
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
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
		(&iParam1 + 16) = Function_73(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_72(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_71(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_71(int iParam0, struct<2> Param1) //Position: 0x2516 / 9494
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_72(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_72(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_72(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_72(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_72(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_72(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_72(vector3 vParam0) //Position: 0x265C / 9820
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_73(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2674 / 9844
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_38(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_74(float fParam0, struct<11>[] Param1, float fParam2, struct<2> Param3, struct<2> Param5, struct<2> Param7, struct<2> Param9, struct<2> Param11, struct<2> Param13) //Position: 0x279B / 10139
{
	bool bVar0;
	
	bVar0 = fParam0;
	if (Function_75(StackVal, StackVal, Param3, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param3);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param5, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param7, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param7);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param9, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param9);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param11, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param11);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, Param13, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param13);
		PRINTNL();
	}
	if (!IS_LAYOUTREF_VALID(&fParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param3;
	*(&Param1[bVar011] + 12) = Param5;
	*(&Param1[bVar011] + 24) = Param7;
	*(&Param1[bVar011] + 36) = Param9;
	*(&Param1[bVar011] + 48) = Param11;
	*(&Param1[bVar011] + 60) = Param13;
	*(&Param1[bVar011] + 72) = &fParam2;
}

bool Function_75(struct<2> Param0, struct<2> Param2) //Position: 0x2A4C / 10828
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x2A78 / 10872
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2A95 / 10901
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
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_18(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_18(&(Param0[iVar02]), 8))
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

void Function_78(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2B7E / 11134
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_76(&(Global_43791[iParam2]), 0x40000000))
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

int Function_79(var uParam0) //Position: 0x2C6E / 11374
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[32];
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar5 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar5, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar5, "nCampfire0");
		iVar0 = START_OBJECT_ITERATOR(&uVar5);
		while (IS_OBJECT_VALID(&iVar0))
		{
			bVar6 = RAND_INT_RANGE(1, 10000) > 2750;
			bVar7 = (((bVar6 || DECOR_CHECK_EXIST(&iVar0, "guero")) || DECOR_CHECK_EXIST(&iVar0, "always")) || Global_6611);
			bVar8 = false;
			bVar9 = (Function_81() && !Function_80(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_81()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
			{
			}
			else if (bVar8 && !bVar9)
			{
				cVar10 = GET_GRINGO_FROM_OBJECT(&iVar0);
				if (IS_GRINGO_VALID(&cVar10))
				{
					GRINGO_ALLOW_ACTIVATION(&cVar10, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(&iVar0, &Var1);
				GET_OBJECT_ORIENTATION(&iVar0, &uVar3);
				strcpy(&cVar11, "p", 32);
				stradd(&cVar11, GET_OBJECT_NAME(&iVar0), 32);
				CREATE_POINT_IN_LAYOUT(StackVal, &uParam0, &cVar11, Var1, Vector(0.0f, 0.0f, 0.0f));
				DESTROY_OBJECT(&iVar0);
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&uVar5);
		}
		DESTROY_ITERATOR(&uVar5);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_80(bool bParam0, bool bParam1) //Position: 0x2DCD / 11725
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_81() //Position: 0x2DEE / 11758
{
	return 0;
}

void Function_82(var uParam0, int iParam1) //Position: 0x2DF5 / 11765
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_83() //Position: 0x2E06 / 11782
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_8", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire06", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/player_herb_goldencurrant", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/player_herb_prairiepoppy", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_89(&iLocal_26 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (!Function_84(&iLocal_26 + 8))
	{
		return 0;
	}
	iLocal_26 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_26))
	{
		iLocal_26 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&iLocal_26 + 496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "f_bhint", Vector(150,9443f, 128,8552f, 1388.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "f_bhint1", Vector(357,1578f, 79,43221f, 1985,98f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Locked_Footlocker", "Locked_Footlocker", Vector(160,808f, 129,4933f, 1392,071f), Vector(0.0f, -165,0192f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Locked_Footlocker1", "Locked_Footlocker", Vector(467,636f, 75,51f, 1920,058f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Locked_Footlocker2", "Locked_Footlocker", Vector(816,225f, 77,302f, 1714,051f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Locked_Footlocker3", "Locked_Footlocker", Vector(229,21f, 102,348f, 950,713f), Vector(0.0f, 76,22884f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Locked_Footlocker4", "Locked_Footlocker", Vector(30,60843f, 135,5277f, 1486,061f), Vector(0.0f, 139,0777f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_26 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "treasure_hunting_8", "treasure_hunting_8", Vector(146,9445f, 128,5542f, 1387,368f), Vector(0.0f, -2,976609f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(157,088f, 128,6531f, 1412,838f), Vector(0.0f, -119,0785f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(145,9573f, 129,7917f, 1403,865f), Vector(0.0f, 114,7033f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(149,7698f, 129,4657f, 1400,383f), Vector(0.0f, -57,51074f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_Pee", "Pee", Vector(149,4602f, 128,2654f, 1383,105f), Vector(0.0f, -301,9947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_rand_idle_stand2", "rand_idle_stand", Vector(152,4598f, 129,316f, 1399,699f), Vector(0.0f, 105,5583f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(149,0702f, 129,0827f, 1396,536f), Vector(0.0f, -138,0183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_horse_tend6", "horse_tend", Vector(151,546f, 129,495f, 1404,585f), Vector(0.0f, -139,3574f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_horse_tend7", "horse_tend", Vector(149,989f, 128,875f, 1392,185f), Vector(0.0f, -117,0606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_horse_tend8w", "horse_tend", Vector(151,0038f, 128,875f, 1390,909f), Vector(0.0f, -118,8501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_smoking_stand2", "smoking_stand", Vector(158,876f, 129,474f, 1395,151f), Vector(0.0f, 77,17844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(148,7914f, 127,7514f, 1379,212f), Vector(0.0f, -299,6739f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_horse_stay", "horse_stay", Vector(155,281f, 129,15f, 1403,048f), Vector(0.0f, 60,28025f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "BkTR_look_distance_binocs", "look_distance_binocs", Vector(138,424f, 127,959f, 1391,745f), Vector(0.0f, 5,710794f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_26 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(146,8251f, 128,8514f, 1392,798f), Vector(0.0f, 88,73585f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 520), 0);
	*(&iLocal_26 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire010", "Campfire05", Vector(697,4047f, 100,3921f, 1633,405f), Vector(0.0f, 186,3506f, 0.0f));
	DECOR_SET_BOOL(&iLocal_26 + 528, "MP_ONLY", 1);
	*(&iLocal_26 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire011", "Campfire05", Vector(124.0f, 121,4745f, 1528f), Vector(0.0f, -22,92498f, 0.0f));
	DECOR_SET_BOOL(&iLocal_26 + 536, "MP_ONLY", 1);
	*(&iLocal_26 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire013", "Campfire05", Vector(48,00003f, 100,9112f, 1836f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire014", "Campfire03", Vector(88,00003f, 125,4902f, 1576,387f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad1", "Campfire01_bad", Vector(212f, 115,4509f, 1544.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad10", "Campfire01_bad", Vector(104.0f, 107,4196f, 1048.0f), Vector(0.0f, 181,8817f, 0.0f));
	*(&iLocal_26 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad11", "Campfire01_bad", Vector(223,6124f, 101,9845f, 1883,817f), Vector(0.0f, 92,0954f, 0.0f));
	*(&iLocal_26 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad12", "Campfire01_bad", Vector(316.0f, 113,4431f, 1344f), Vector(0.0f, 100,1395f, 0.0f));
	*(&iLocal_26 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad2", "Campfire01_bad", Vector(366,315f, 115,451f, 1313,685f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad3", "Campfire01_bad", Vector(331,9999f, 100,3922f, 1028f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad4", "Campfire01_bad", Vector(524,2903f, 96,36452f, 933,6621f), Vector(0.0f, 386,3335f, 0.0f));
	*(&iLocal_26 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad6", "Campfire01_bad", Vector(376f, 109,4274f, 1724,479f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad7", "Campfire01_bad", Vector(264.0f, 101,3961f, 968,0002f), Vector(0.0f, -94,60612f, 0.0f));
	*(&iLocal_26 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad8", "Campfire01_bad", Vector(656,164f, 90,43034f, 1031,825f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire021", "Campfire05", Vector(404.0f, 108,4235f, 1654,104f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire022", "Campfire03", Vector(168,0292f, 119,3628f, 1544,018f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire024", "Campfire03", Vector(609,7366f, 93,37498f, 1076f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_26 + 656, "MP_ONLY", 1);
	*(&iLocal_26 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire025", "Campfire03", Vector(526,9951f, 95,37256f, 1035,995f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire026", "Campfire02", Vector(61,89545f, 109,4274f, 1120,972f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_26 + 672, "MP_ONLY", 1);
	*(&iLocal_26 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire027", "Campfire02", Vector(874,3532f, 82,32153f, 1500,083f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_26 + 680, "MP_ONLY", 1);
	*(&iLocal_26 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire029", "Campfire06", Vector(202,384f, 110,4314f, 1095,905f), Vector(0.0f, 169,7201f, 0.0f));
	DECOR_SET_BOOL(&iLocal_26 + 688, "MP_ONLY", 1);
	*(&iLocal_26 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire030", "Campfire02", Vector(407,9999f, 102,4f, 1164.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire032", "Campfire06", Vector(-44,00024f, 117,7183f, 1596f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire033", "Campfire06", Vector(33,6366f, 117,4587f, 1620.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad", "Campfire03_bad", Vector(753,1762f, 93,36462f, 1582,798f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad1", "Campfire03_bad", Vector(778,547f, 83,48665f, 1963,869f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad10", "Campfire03_bad", Vector(316f, 101,3961f, 966,3281f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad12", "Campfire03_bad", Vector(297,1872f, 106,4156f, 1160f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad13", "Campfire03_bad", Vector(809,5115f, 77,30188f, 1717,511f), Vector(0.0f, 184,6639f, 0.0f));
	*(&iLocal_26 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad2", "Campfire03_bad", Vector(701,194f, 84,54114f, 1975,863f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad3", "Campfire03_bad", Vector(664.0f, 85,33325f, 1964,967f), Vector(0.0f, 94,86598f, 0.0f));
	*(&iLocal_26 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad4", "Campfire03_bad", Vector(621,7342f, 86,33717f, 1961,646f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad6", "Campfire03_bad", Vector(411,9999f, 107,4196f, 1720.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad8", "Campfire03_bad", Vector(485,7573f, 98,38434f, 977,7575f), Vector(0.0f, -74,91268f, 0.0f));
	*(&iLocal_26 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire03_bad9", "Campfire03_bad", Vector(555,5664f, 94,36865f, 994,2076f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire04", "Campfire04", Vector(264,5958f, 107,4196f, 1087,714f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire06", "Campfire04", Vector(302,5833f, 97,38037f, 1860,252f), Vector(0.0f, -146,5471f, 0.0f));
	*(&iLocal_26 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire07", "Campfire04", Vector(260,1869f, 116,4403f, 1716,668f), Vector(0.0f, 68,69151f, 0.0f));
	*(&iLocal_26 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire09", "Campfire04", Vector(427,9999f, 102,4f, 1048f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant", "Player_Herb_goldenCurrant", Vector(695,1923f, 90,55561f, 1076f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant1", "Player_Herb_goldenCurrant", Vector(560.0f, 94,36865f, 1012f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant10", "Player_Herb_goldenCurrant", Vector(-204.0f, 129,5059f, 1304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant11", "Player_Herb_goldenCurrant", Vector(-36.0f, 112,0246f, 1284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant12", "Player_Herb_goldenCurrant", Vector(31,99994f, 118,4627f, 1324.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant14", "Player_Herb_goldenCurrant", Vector(-10,17844f, 126,9068f, 1437,727f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant15", "Player_Herb_goldenCurrant", Vector(-92.0f, 119,2099f, 1474,262f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant16", "Player_Herb_goldenCurrant", Vector(20,94169f, 130,5098f, 1452,534f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant17", "Player_Herb_goldenCurrant", Vector(95,99994f, 127,498f, 1416f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant18", "Player_Herb_goldenCurrant", Vector(136.0f, 129,5059f, 1440f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant19", "Player_Herb_goldenCurrant", Vector(-20,00006f, 123,4811f, 1520,009f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant2", "Player_Herb_goldenCurrant", Vector(467,9999f, 98,56538f, 1058,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant20", "Player_Herb_goldenCurrant", Vector(99,99988f, 122,6617f, 1501,576f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant21", "Player_Herb_goldenCurrant", Vector(28.0f, 124,3337f, 1572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant22", "Player_Herb_goldenCurrant", Vector(80,00003f, 124,834f, 1596.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant23", "Player_Herb_goldenCurrant", Vector(8.0f, 116,4548f, 1636f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant24", "Player_Herb_goldenCurrant", Vector(120f, 123,8186f, 1664.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant25", "Player_Herb_goldenCurrant", Vector(8.0f, 115,2069f, 1704f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant26", "Player_Herb_goldenCurrant", Vector(80.0f, 117,9192f, 1748.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant27", "Player_Herb_goldenCurrant", Vector(49,58045f, 99,23539f, 1856.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant28", "Player_Herb_goldenCurrant", Vector(112f, 84,60585f, 1929,137f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant29", "Player_Herb_goldenCurrant", Vector(178,3197f, 88,87658f, 1971,804f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant3", "Player_Herb_goldenCurrant", Vector(256f, 101,3961f, 1012f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant30", "Player_Herb_goldenCurrant", Vector(204f, 91,35681f, 1936.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant31", "Player_Herb_goldenCurrant", Vector(228f, 105,4117f, 1852.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant32", "Player_Herb_goldenCurrant", Vector(380f, 97,38037f, 1820.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant33", "Player_Herb_goldenCurrant", Vector(411,801f, 94,91784f, 1867,155f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant34", "Player_Herb_goldenCurrant", Vector(528,3188f, 97,83836f, 1845,436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant35", "Player_Herb_goldenCurrant", Vector(616.0f, 86,33722f, 1956f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant36", "Player_Herb_goldenCurrant", Vector(733,7625f, 85,77563f, 1913,762f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant37", "Player_Herb_goldenCurrant", Vector(656,0001f, 99,38818f, 1832.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant38", "Player_Herb_goldenCurrant", Vector(624.0f, 107,4196f, 1744.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant4", "Player_Herb_goldenCurrant", Vector(123,8889f, 110,9025f, 1011,628f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant40", "Player_Herb_goldenCurrant", Vector(574,8133f, 101,0377f, 1796,16f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant41", "Player_Herb_goldenCurrant", Vector(747,9999f, 89,349f, 1884.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant42", "Player_Herb_goldenCurrant", Vector(535,9999f, 108,4235f, 1725,181f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant43", "Player_Herb_goldenCurrant", Vector(736,0001f, 95,3725f, 1636.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant44", "Player_Herb_goldenCurrant", Vector(660.0f, 102,949f, 1776.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant45", "Player_Herb_goldenCurrant", Vector(432f, 110,4313f, 1652,316f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant46", "Player_Herb_goldenCurrant", Vector(616.0f, 102,883f, 1632.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant47", "Player_Herb_goldenCurrant", Vector(839,9999f, 86,18433f, 1608.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant48", "Player_Herb_goldenCurrant", Vector(799,9999f, 77,30188f, 1720.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant49", "Player_Herb_goldenCurrant", Vector(599,9999f, 107,4196f, 1736.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant5", "Player_Herb_goldenCurrant", Vector(128.0f, 111,4353f, 1088.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant50", "Player_Herb_goldenCurrant", Vector(588.0f, 102,4792f, 1651,33f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant6", "Player_Herb_goldenCurrant", Vector(240,0001f, 108,4235f, 1080.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant7", "Player_Herb_goldenCurrant", Vector(-41,29242f, 111,261f, 1197,522f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant8", "Player_Herb_goldenCurrant", Vector(50,69914f, 111,0679f, 1212,378f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_goldenCurrant9", "Player_Herb_goldenCurrant", Vector(-104f, 113,2009f, 1240.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy", "Player_Herb_prairiePoppy", Vector(152,8835f, 108,4235f, 1171,232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy1", "Player_Herb_prairiePoppy", Vector(288.0f, 107,363f, 1176f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy10", "Player_Herb_prairiePoppy", Vector(100,0052f, 121,8024f, 1347,977f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy11", "Player_Herb_prairiePoppy", Vector(99,65958f, 124,3904f, 1376,273f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy12", "Player_Herb_prairiePoppy", Vector(166,9878f, 129,4901f, 1388,083f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy13", "Player_Herb_prairiePoppy", Vector(235,9999f, 124,7943f, 1332f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy14", "Player_Herb_prairiePoppy", Vector(281,4927f, 119,3126f, 1350,6f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy15", "Player_Herb_prairiePoppy", Vector(227,9546f, 125,0979f, 1361,898f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy16", "Player_Herb_prairiePoppy", Vector(153,7697f, 128,0826f, 1438,607f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy17", "Player_Herb_prairiePoppy", Vector(217,1763f, 124,4003f, 1413,258f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy18", "Player_Herb_prairiePoppy", Vector(117,3568f, 125,5178f, 1474,203f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy19", "Player_Herb_prairiePoppy", Vector(240,9872f, 118,4365f, 1471,016f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy2", "Player_Herb_prairiePoppy", Vector(360.0f, 103,381f, 1160f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy20", "Player_Herb_prairiePoppy", Vector(337,9934f, 116,4312f, 1469,902f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy21", "Player_Herb_prairiePoppy", Vector(309,7348f, 115,2243f, 1474,274f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy22", "Player_Herb_prairiePoppy", Vector(415,5941f, 106,8482f, 1523,904f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy23", "Player_Herb_prairiePoppy", Vector(376,0001f, 110,4313f, 1528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy24", "Player_Herb_prairiePoppy", Vector(343,8192f, 111,4151f, 1524.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy25", "Player_Herb_prairiePoppy", Vector(287,9999f, 113,4431f, 1520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy26", "Player_Herb_prairiePoppy", Vector(247,9999f, 114,447f, 1524.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy27", "Player_Herb_prairiePoppy", Vector(248f, 114,42f, 1544.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy28", "Player_Herb_prairiePoppy", Vector(132.0f, 121,4745f, 1536f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy29", "Player_Herb_prairiePoppy", Vector(144.0f, 123,4824f, 1592,555f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy3", "Player_Herb_prairiePoppy", Vector(427,9999f, 107,4196f, 1288f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy30", "Player_Herb_prairiePoppy", Vector(128,8151f, 124,4632f, 1636f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy31", "Player_Herb_prairiePoppy", Vector(240f, 115,4509f, 1585,015f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy32", "Player_Herb_prairiePoppy", Vector(271,9999f, 115,4509f, 1616,957f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy33", "Player_Herb_prairiePoppy", Vector(348,0647f, 110,468f, 1682,394f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy34", "Player_Herb_prairiePoppy", Vector(416f, 108,4235f, 1624,415f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy35", "Player_Herb_prairiePoppy", Vector(419,9999f, 108,3964f, 1593,715f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy36", "Player_Herb_prairiePoppy", Vector(256,9475f, 117,0458f, 1464,641f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy37", "Player_Herb_prairiePoppy", Vector(227,9999f, 124,4671f, 1412f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy38", "Player_Herb_prairiePoppy", Vector(343,9999f, 118,4272f, 1304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy39", "Player_Herb_prairiePoppy", Vector(423,9999f, 108,4087f, 1276.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy4", "Player_Herb_prairiePoppy", Vector(359,3031f, 116,448f, 1304.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy40", "Player_Herb_prairiePoppy", Vector(344,8217f, 113,2369f, 1395,043f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy41", "Player_Herb_prairiePoppy", Vector(223,2836f, 120,2737f, 1452,303f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy42", "Player_Herb_prairiePoppy", Vector(315,9999f, 113,4431f, 1504.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy43", "Player_Herb_prairiePoppy", Vector(443,0988f, 107,2659f, 1570,524f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy44", "Player_Herb_prairiePoppy", Vector(426,5165f, 109,3572f, 1618,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy45", "Player_Herb_prairiePoppy", Vector(300f, 118,4304f, 1620.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy46", "Player_Herb_prairiePoppy", Vector(279,6821f, 116,2279f, 1695,576f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy47", "Player_Herb_prairiePoppy", Vector(175,9876f, 118,7702f, 1556,077f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy48", "Player_Herb_prairiePoppy", Vector(370,0059f, 108,4235f, 1710,173f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy49", "Player_Herb_prairiePoppy", Vector(333,5171f, 98,36597f, 1796.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy5", "Player_Herb_prairiePoppy", Vector(454,1075f, 104,3669f, 1374,861f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy50", "Player_Herb_prairiePoppy", Vector(225,4733f, 109,4706f, 1801,168f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy6", "Player_Herb_prairiePoppy", Vector(431,9182f, 111,4168f, 1424,007f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy7", "Player_Herb_prairiePoppy", Vector(204,0399f, 125,4902f, 1309,547f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy8", "Player_Herb_prairiePoppy", Vector(203,9303f, 117,4588f, 1235,954f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Player_Herb_prairiePoppy9", "Player_Herb_prairiePoppy", Vector(141,0508f, 121,4022f, 1317,086f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Pee3", "Pee", Vector(362,1963f, 78,70888f, 1984,005f), Vector(0.0f, -43,27293f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(356,695f, 73,3355f, 1980,807f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_rand_idle_stand", "rand_idle_stand", Vector(338,2788f, 74,5917f, 1942,472f), Vector(0.0f, -164,8241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_rand_idle_stand2", "rand_idle_stand", Vector(359,0939f, 78,39108f, 1991,795f), Vector(0.0f, -161,0478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_rand_idle_stand3", "rand_idle_stand", Vector(351,7272f, 76,34866f, 1986,588f), Vector(0.0f, 68,45935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_sit_docks3", "nsit_docks", Vector(361,7251f, 73,50711f, 1973,968f), Vector(0.0f, -118,1669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(353,6501f, 73,88201f, 1976,827f), Vector(0.0f, -126,9591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(352,9845f, 76,39187f, 1984,406f), Vector(0.0f, 52,31681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_sit_ground_smoke", "sit_ground_smoke", Vector(357,5717f, 76,19849f, 1981,747f), Vector(0.0f, -29,00372f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_sit_ground_smoke2", "sit_ground_smoke", Vector(335,3785f, 74,60016f, 1940,426f), Vector(0.0f, -21,86767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_sit_ground_smoke3", "sit_ground_smoke", Vector(369,985f, 73,58916f, 1944,503f), Vector(0.0f, -25,18101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(354,8198f, 79,43221f, 1982,737f), Vector(0.0f, 62,95712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(346,8859f, 74,00498f, 1984,04f), Vector(0.0f, 129,3219f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_stand_yelling_down", "stand_yelling_down", Vector(355,6973f, 79,401f, 1982,143f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_dealer_and_customer2", "dealer_and_customer", Vector(355,8004f, 76,38882f, 1980,956f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_26 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_look_out_window_L", "look_out_window_L", Vector(330,4944f, 74,60293f, 1937,513f), Vector(0.0f, 107,1152f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1640), 0);
	*(&iLocal_26 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(331,1541f, 74,39916f, 1933,66f), Vector(0.0f, 66,63307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1648), 0);
	*(&iLocal_26 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_lean_fence_L_talking", "lean_fence_L_talking", Vector(334,3096f, 74,59482f, 1942,392f), Vector(0.0f, 153,1973f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1656), 0);
	*(&iLocal_26 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(371,9703f, 73,48869f, 1937,603f), Vector(0.0f, -27,3343f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1664), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_sit_docks4", "nsit_docks", Vector(375,2437f, 73,48671f, 1938,945f), Vector(0.0f, -116,2048f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_Sit_Ground_Drink2", "Sit_Ground_Drink", Vector(367,3382f, 73,4931f, 1936,028f), Vector(0.0f, -113,1597f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_26 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_horse_stay", "horse_stay", Vector(383,6137f, 73,36394f, 1917,677f), Vector(0.0f, -128,7536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1672), 0);
	*(&iLocal_26 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_horse_stay1", "horse_stay", Vector(382,3799f, 73,32485f, 1919,193f), Vector(0.0f, -113,8612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1680), 0);
	*(&iLocal_26 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_lean_fence_back", "lean_fence_back", Vector(377,7558f, 73,47366f, 1924,431f), Vector(0.0f, -117,9854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_26 + 1688), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "wrk_rand_idle_stand4", "rand_idle_stand", Vector(371,8394f, 73,46868f, 1936,036f), Vector(0.0f, -23,76552f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Locked_Footlocker5", "Locked_Footlocker", Vector(689,8721f, 78,78927f, 1034,879f), Vector(0.0f, 321,2147f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_26 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad13", "Campfire01_bad", Vector(388.0f, 98,04259f, 968,0001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_26 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_26, "Campfire01_bad14", "Campfire01_bad", Vector(800.0f, 90,02673f, 1612.0f), Vector(0.0f, -76,12924f, 0.0f));
	return 1;
}

bool Function_84(struct<2>[] Param0) //Position: 0x73D5 / 29653
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_88();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
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
				Function_87(&(Param0[iVar02]), 1);
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

void Function_85() //Position: 0x7797 / 30615
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_86() //Position: 0x77D7 / 30679
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

void Function_87(struct<13> Param0) //Position: 0x7805 / 30725
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_88() //Position: 0x7818 / 30744
{
	if (!Function_16(128))
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

var Function_89(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x785A / 30810
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

var Function_90(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x7898 / 30872
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
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

void Function_91(int iParam0, int iParam1) //Position: 0x7967 / 31079
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

bool Function_92() //Position: 0x79B1 / 31153
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	Function_89(&iLocal_0 + 8, "p_uti_cover2x1x", 0, 0);
	Function_89(&iLocal_0 + 8, "p_uti_cover1x2x", 0, 0);
	Function_89(&iLocal_0 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_84(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&iLocal_0 + 64) = Vector(630,629f, 98,168f, 1815,987f);
	*(&iLocal_0 + 64 + 12) = Vector(0.0f, -107,0722f, 0.0f);
	*(&iLocal_0 + 88) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "Temp_CarPos", Vector(630,629f, 98,168f, 1815,987f), Vector(0.0f, -107,0722f, 0.0f));
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x0", "p_uti_cover2x1x", Vector(204,0001f, 123,4465f, 1639,79f), Vector(-177,334f, -108,671f, 177,5641f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x1", "p_uti_cover2x1x", Vector(238,4106f, 117,4588f, 1638,411f), Vector(-179,1112f, -163,7204f, 179,8408f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x2", "p_uti_cover2x1x", Vector(183,1441f, 124,4862f, 1647,144f), Vector(-175,7983f, -101,7259f, 175,9756f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x3", "p_uti_cover2x1x", Vector(140,4274f, 121,4745f, 1671,573f), Vector(-181,8654f, -62,77824f, 181,7489f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x4", "p_uti_cover2x1x", Vector(214,0656f, 123,2074f, 1651,26f), Vector(-178,8936f, -140,4584f, 179,3855f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x5", "p_uti_cover2x1x", Vector(127,9999f, 121,1553f, 1681,523f), Vector(-183,723f, -76,74288f, 183,714f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x6", "p_uti_cover2x1x", Vector(122,7811f, 123,4847f, 1671,714f), Vector(-183,723f, -76,74288f, 183,714f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x7", "p_uti_cover2x1x", Vector(110,9311f, 117,4152f, 1710,931f), Vector(-358,6223f, -51,73307f, 359,0082f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x8", "p_uti_cover2x1x", Vector(102,1142f, 117,0503f, 1708,001f), Vector(-357,9777f, -65,04119f, 358,2564f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x9", "p_uti_cover2x1x", Vector(27,02832f, 115,3725f, 1706,619f), Vector(-357,9777f, -65,04119f, 358,2564f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x10", "p_uti_cover2x1x", Vector(17,18051f, 115,5175f, 1716,66f), Vector(-357,9777f, -65,04119f, 358,2564f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x11", "p_uti_cover2x1x", Vector(-5,595703f, 113,9409f, 1690,402f), Vector(-184,2235f, -78,33517f, 184,2265f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x12", "p_uti_cover2x1x", Vector(-0,61668f, 116,3239f, 1720,784f), Vector(-355,7089f, -78,52127f, 355,8843f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x13", "p_uti_cover2x1x", Vector(4,000046f, 114,5231f, 1682,438f), Vector(-182,2104f, -67,28971f, 182,1291f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x14", "p_uti_cover2x1x", Vector(174,6896f, 125,4902f, 1638,69f), Vector(-159,3823f, -92,42357f, 159,4892f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x15", "p_uti_cover2x1x", Vector(196,7614f, 124,4862f, 1664.0f), Vector(-178,8384f, -137,2664f, 179,3017f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x16", "p_uti_cover2x1x", Vector(219,1994f, 120,7291f, 1630,848f), Vector(-178,8945f, -140,5174f, 179,387f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x17", "p_uti_cover2x1x", Vector(210,1214f, 121,4745f, 1624.0f), Vector(-178,159f, -117,6124f, 178,4585f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x18", "p_uti_cover2x1x", Vector(611,8726f, 99,22272f, 1804,307f), Vector(66,32018f, 76,14228f, 66,93644f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x19", "p_uti_cover2x1x", Vector(611,6384f, 97,28822f, 1821,858f), Vector(-44,67248f, -110,6125f, 44,03279f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x20", "p_uti_cover2x1x", Vector(623,4265f, 99,05706f, 1808,646f), Vector(-24,61025f, -116,6806f, 23,7426f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x21", "p_uti_cover2x1x", Vector(634,2639f, 99,41155f, 1806,225f), Vector(-60,33696f, 98,28915f, -62,91229f), 1);
	*(&iLocal_0 + 96) = Function_93(StackVal, StackVal, &iLocal_0, "cover1x2x0", "p_uti_cover1x2x", Vector(621,9322f, 97,37455f, 1823,587f), Vector(8,674876f, -9,379588f, -0,5916787f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover2x1x22", "p_uti_cover2x1x", Vector(634,5735f, 97,88709f, 1824,994f), Vector(-23,33749f, -108,0665f, 26,44703f), 1);
	Function_93(StackVal, StackVal, &iLocal_0, "cover1x1x0", "p_uti_cover1x1x", Vector(617,8123f, 99,60641f, 1803,961f), Vector(18,33718f, 51,66286f, 16,92836f), 1);
	return 1;
}

var Function_93(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x81BA / 33210
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_94(char* cParam0) //Position: 0x81E8 / 33256
{
	if (!Function_16(128))
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

void Function_95(int iParam0) //Position: 0x8225 / 33317
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_44085[iParam09] == Global_46722[0])
	{
		STREAMING_REQUEST_ACTOR(1177, 1, false);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_REQUEST_ACTOR(1179, 1, false);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_REQUEST_ACTOR(1178, 1, false);
	}
	return;
}

