//Decompiled with MagicRDR v1.0
//Function Count : 78
//Statics Count : 587
//Natives Count : 113
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
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 36;
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
	int iLocal_534 = 0;
	bool bLocal_535 = false;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 2;
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
	int iLocal_584 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_534 = 0;
	Function_77(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_76("Initializing RioBravo", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_535 = 1000;
		switch (iLocal_534)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_534 = 1;
				}
				bLocal_535 = false;
				break;
			
			case 0x00000001:
				if (Function_75())
				{
					iLocal_534 = 2;
				}
				bLocal_535 = false;
				break;
			
			case 0x00000002:
				if (Function_66())
				{
					Function_65(&(Global_43791[iScriptParam_0]), 32);
					iLocal_534 = 3;
					Function_62(&iLocal_0);
				}
				bLocal_535 = false;
				break;
			
			case 0x00000003:
				uLocal_536 = LAUNCH_NEW_SCRIPT_WITH_ARGS("RioBravoVol", &iScriptParam_0, 2, 0);
				Function_61(&Global_11826, &Global_13998, iScriptParam_0);
				iLocal_534 = 5;
				bLocal_535 = false;
				break;
			
			case 0x00000005:
				if (Function_60(&Global_11826, &Global_13998, iScriptParam_0))
				{
					iLocal_534 = 4;
					bLocal_535 = false;
				}
				else
				{
					bLocal_535 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_59(&(Global_43791[iScriptParam_0]), 16))
				{
					iLocal_534 = 6;
				}
				bLocal_535 = false;
				break;
			
			case 0x00000006:
				Function_57(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, &uLocal_538, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_57(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, &uLocal_538, &iLocal_0, Vector(-3679,491f, 42,8246f, 2107,083f), Vector(-3680,329f, 42,74f, 2115,949f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3661,467f, 42,165f, 2152,03f), Vector(-3640,249f, 42,74f, 2104,202f), Vector(-3677,26f, 42,74f, 2107,369f));
				Function_51(&Global_11826, &Global_13998, &uLocal_538, &Global_10996, iScriptParam_0);
				Function_65(&(Global_43791[iScriptParam_0]), 8);
				if (Function_59(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_50(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_534 = 10;
				}
				else
				{
					iLocal_534 = 7;
				}
				bLocal_535 = false;
				break;
			
			case 0x00000007:
				Function_49(iScriptParam_0);
				if (Function_47(512))
				{
					Function_37(iScriptParam_0);
				}
				if (!Global_39324[0])
				{
					CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Ramita_Baya", Vector(-2396,204f, 13,939f, 3881,411f), Vector(0.0f, 20.0f, 0.0f), Vector(30.0f, 20.0f, 80.0f));
				}
				if (!Global_39324[9])
				{
					CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Frontera_Bridge", Vector(-3554,509f, 20,54f, 4149,415f), Vector(0.0f, 31.0f, 0.0f), Vector(30.0f, 40.0f, 100.0f));
				}
				Function_36(64);
				iLocal_534 = 8;
				bLocal_535 = false;
				break;
			
			case 0x00000008:
				Function_35(StackVal, 0, Global_46760[0], Vector(-2080,289f, 16,962f, 2603,609f));
				if (!Function_34(&Global_46838))
				{
					Function_30(1, 0,5f, 0, &iLocal_0, &Global_44085[iScriptParam_09] + 8, !Function_34(&Global_46838));
					Function_26(0, 8, 4, 0, 2);
					Function_36(64);
				}
				Function_65(&(Global_43791[iScriptParam_0]), 512);
				iLocal_534 = 9;
				bLocal_535 = false;
				break;
			
			case 0x00000009:
				if (!Function_34(&Global_46838))
				{
					Function_24(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 0;
				Function_65(&(Global_43791[iScriptParam_0]), 4);
				Function_23("Finished Initializing RioBravo", 5.0f);
				iLocal_534 = 10;
				bLocal_535 = false;
				break;
			
			case 0x0000000A:
				if (!Function_34(&Global_46838))
				{
					if (iLocal_584)
					{
						iLocal_584 = 0;
						iLocal_534 = 8;
						bLocal_535 = false;
					}
				}
				else
				{
					iLocal_584 = 1;
				}
				if (Function_59(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_534 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_535);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_11826, &Global_13998, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_36(64);
	Function_50(&(Global_43791[iScriptParam_0]), 32);
	Function_50(&(Global_43791[iScriptParam_0]), 64);
	Function_50(&(Global_43791[iScriptParam_0]), 8);
	Function_50(&(Global_43791[iScriptParam_0]), 512);
	Function_50(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_536))
	{
		TERMINATE_SCRIPT(&uLocal_536);
	}
	Function_23("Unloaded RioBravo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x4C2 / 1218
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

void Function_2(int iParam0) //Position: 0x4F8 / 1272
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x51A / 1306
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x530 / 1328
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x546 / 1350
{
	Function_6(&iLocal_10 + 8);
	RELEASE_LAYOUT_REF(&iLocal_10);
	return;
}

void Function_6(int iParam0) //Position: 0x559 / 1369
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x581 / 1409
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

void Function_8(struct<13> Param0) //Position: 0x6CC / 1740
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x6E9 / 1769
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x707 / 1799
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x713 / 1811
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
	if (Function_59(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_50(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_59(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_59(&(Global_43791[bParam2]), 256))
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
			Function_65(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x931 / 2353
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xA97 / 2711
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

int Function_14(int iParam0) //Position: 0xAC2 / 2754
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

void Function_15(var uParam0, int iParam1) //Position: 0xAF6 / 2806
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xB07 / 2823
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xB23 / 2851
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xB3D / 2877
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xB5A / 2906
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(var uParam0, int iParam1) //Position: 0xB75 / 2933
{
	return (uParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xB82 / 2946
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

void Function_22(int iParam0) //Position: 0x1030 / 4144
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

void Function_23(char* cParam0) //Position: 0x109B / 4251
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

void Function_24(int iParam0, bool bParam1) //Position: 0x10DB / 4315
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
		Function_25(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x11CB / 4555
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_26(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x11D8 / 4568
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
		Function_27();
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

void Function_27() //Position: 0x12C6 / 4806
{
	int iVar0;
	
	Global_41176 = Function_28(StackVal);
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

int Function_28(bool bParam0) //Position: 0x1314 / 4884
{
	if (!Function_29(bParam0))
	{
		return 0;
	}
	return Global_40060[bParam0];
}

bool Function_29(bool bParam0) //Position: 0x132C / 4908
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_30(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1341 / 4929
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
		Function_33();
	}
	if (&bParam5)
	{
		Function_31(1048576);
	}
}

void Function_31(int iParam0) //Position: 0x144F / 5199
{
	Function_32(&Global_43580, iParam0);
	return;
}

void Function_32(var uParam0, var uParam1) //Position: 0x145D / 5213
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_33() //Position: 0x147C / 5244
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_31(16384);
	}
	return;
}

bool Function_34(int[] iParam0) //Position: 0x1498 / 5272
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

void Function_35(int iParam0, var uParam1, struct<2> Param2) //Position: 0x14E9 / 5353
{
	if (!Function_29(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

void Function_36(int iParam0) //Position: 0x154A / 5450
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_37(int iParam0) //Position: 0x155D / 5469
{
	if (Function_46(349) == 0)
	{
		Function_42(53, 2, 760, 0, 770, 2, 2, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 15, 0);
	}
	else
	{
		Function_42(53, 2, 760, 0, 770, 2, 0, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 45, 0);
	}
	Function_41(&Global_27462[5352] + 188, 2, 8.0f, 1, 704);
	Function_40(&Global_27462[5352] + 188, 19,9f, 0,6f);
	Function_39(&Global_27462[5352] + 188, 0.0f, 2);
	Function_38(&Global_27462[5352] + 188, 10.0f);
	return;
}

void Function_38(int iParam0, int iParam1) //Position: 0x1655 / 5717
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_39(int iParam0, float fParam1, int iParam2) //Position: 0x1664 / 5732
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_40(int iParam0, float fParam1, int iParam2) //Position: 0x167C / 5756
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_41(struct<85> Param0) //Position: 0x1694 / 5780
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x16BE / 5822
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_43(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_43(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1705 / 5893
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
		cVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
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
					bVar2 = Function_45(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_44(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_45(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_44(int iParam0, int iParam1) //Position: 0x1AC3 / 6851
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_45(int iParam0) //Position: 0x1AE6 / 6886
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_46(int iParam0) //Position: 0x1AFD / 6909
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_47(int iParam0) //Position: 0x1B3E / 6974
{
	return Function_48(Global_131807.f_1304, iParam0);
}

int Function_48(var uParam0, int iParam1) //Position: 0x1B50 / 6992
{
	return (uParam0 && iParam1) == 0;
}

void Function_49(int iParam0) //Position: 0x1B5D / 7005
{
	Function_42(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_41(&Global_27462[1852] + 188, 1, 5.0f, 1, 640);
	Function_38(&Global_27462[1852] + 188, 5.0f);
	Function_40(&Global_27462[552] + 188, 19,9f, 0,7f);
	Function_39(&Global_27462[552] + 188, -4.0f, 2);
	return;
}

void Function_50(var uParam0, int iParam1) //Position: 0x1BF2 / 7154
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_51(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1C0C / 7180
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_59(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_52(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_50(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_65(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_52(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x1CC4 / 7364
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_59(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, false))
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
		(&iParam1 + 16) = Function_55(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_54(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_53(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_53(int iParam0, struct<2> Param1) //Position: 0x1E45 / 7749
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_54(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_54(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_54(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_54(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_54(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_54(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_54(vector3 vParam0) //Position: 0x1F8B / 8075
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_55(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x1FA3 / 8099
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_56(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

var Function_56() //Position: 0x20CA / 8394
{
	float fVar0;
	
	return &fVar0;
}

void Function_57(float fParam0, struct<11>[] Param1, float fParam2, struct<2> Param3, struct<2> Param5, struct<2> Param7, struct<2> Param9, struct<2> Param11, struct<2> Param13) //Position: 0x20D3 / 8403
{
	bool bVar0;
	
	bVar0 = fParam0;
	if (Function_58(StackVal, StackVal, Param3, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param3);
		PRINTNL();
	}
	if (Function_58(StackVal, StackVal, Param5, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	if (Function_58(StackVal, StackVal, Param7, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param7);
		PRINTNL();
	}
	if (Function_58(StackVal, StackVal, Param9, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param9);
		PRINTNL();
	}
	if (Function_58(StackVal, StackVal, Param11, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(Param11);
		PRINTNL();
	}
	if (Function_58(StackVal, StackVal, Param13, Vector(0.0f, 0.0f, 0.0f)))
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

bool Function_58(struct<2> Param0, struct<2> Param2) //Position: 0x2384 / 9092
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_59(var uParam0, int iParam1) //Position: 0x23B0 / 9136
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_60(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x23CD / 9165
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
	if (Function_59(&(Global_43791[iParam2]), 0x40000000))
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

void Function_61(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x24B6 / 9398
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
	if (!Function_59(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_65(&(Global_43791[iParam2]), 0x40000000);
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

int Function_62(var uParam0) //Position: 0x25A6 / 9638
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
			bVar6 = RAND_INT_RANGE(true, 10000) > 2750;
			bVar7 = (((bVar6 || DECOR_CHECK_EXIST(&iVar0, "guero")) || DECOR_CHECK_EXIST(&iVar0, "always")) || Global_6611);
			bVar8 = false;
			bVar9 = (Function_64() && !Function_63(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_64()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
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

bool Function_63(bool bParam0, bool bParam1) //Position: 0x2705 / 9989
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_64() //Position: 0x2726 / 10022
{
	return 0;
}

void Function_65(var uParam0, int iParam1) //Position: 0x272D / 10029
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_66() //Position: 0x273E / 10046
{
	int iVar0;
	
	Function_74(3, 3);
	iVar0 = &iVar0;
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_72(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	if (!Function_67(&iLocal_10 + 8))
	{
		return 0;
	}
	iLocal_10 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_10))
	{
		iLocal_10 = CREATE_LAYOUT("RioBravo_layout");
	}
	*(&iLocal_10 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint", Vector(-3160f, 44,41193f, 3292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint1", Vector(-3119,047f, 47,93179f, 3283,574f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint3", Vector(-2000.0f, 42,88177f, 3572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint4", Vector(-3512f, 13,42503f, 3144.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint5", Vector(-1948,986f, 30,338f, 3468,504f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint6", Vector(-2400,747f, 9,362f, 3965,143f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint7", Vector(-2832,009f, 20,221f, 3076,099f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint8", Vector(-2830,891f, 20,21f, 3077,916f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint9", Vector(-2827,172f, 20,218f, 3076,897f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "riof_bhint10", Vector(-3125,57f, 52,958f, 3331,625f), Vector(0.0f, 328,684f, 0.0f));
	*(&iLocal_10 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi44", "Campfire05", Vector(-2412.0f, 87,34119f, 3584.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi45", "Campfire02", Vector(-2572.0f, 74,29016f, 3584.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 680, "MP_ONLY", true);
	*(&iLocal_10 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi46", "Campfire03", Vector(-2572.0f, 71,27844f, 3356.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 688, "MP_ONLY", true);
	*(&iLocal_10 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi47", "Campfire03", Vector(-2768,054f, 52,20392f, 3217,685f), Vector(0.0f, 8,063955f, 0.0f));
	*(&iLocal_10 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi50", "Campfire03", Vector(-2969,647f, 65,25488f, 3431,97f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 704, "MP_ONLY", true);
	*(&iLocal_10 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi51", "Campfire02", Vector(-2776,919f, 65,25488f, 3337,131f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi52", "Campfire05", Vector(-2946,151f, 63,24704f, 3464.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi53", "Campfire02", Vector(-2952.0f, 57,34185f, 3556.0f), Vector(0.0f, -15,48365f, 0.0f));
	*(&iLocal_10 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi54", "Campfire03", Vector(-3148,866f, 46,17646f, 3401,957f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi55", "Campfire05", Vector(-3009,556f, 41,16077f, 3208,908f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi56", "Campfire02", Vector(-3068.0f, 38,14902f, 3088.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi57", "Campfire03", Vector(-3492,942f, 35,17012f, 3266,903f), Vector(0.0f, 40,60546f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 760, "MP_ONLY", true);
	*(&iLocal_10 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "cs_campfire_poi58", "Campfire05", Vector(-3298,114f, 37,14511f, 3195,066f), Vector(0.0f, 29,4516f, 0.0f));
	*(&iLocal_10 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire03", "Campfire03", Vector(-3434,625f, 28,1262f, 3950,98f), Vector(0.0f, 180,9081f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 776, "MP_ONLY", true);
	*(&iLocal_10 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire01", "Campfire05", Vector(-3433,697f, 30,11824f, 4052,614f), Vector(0.0f, 223,8402f, 0.0f));
	*(&iLocal_10 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire02", "Campfire02", Vector(-3528,167f, 30,47762f, 4067,276f), Vector(0.0f, -112,4932f, 0.0f));
	*(&iLocal_10 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire08", "Campfire03", Vector(-3740,026f, 19,07451f, 3702,391f), Vector(0.0f, 51,89199f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 800, "MP_ONLY", true);
	*(&iLocal_10 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire09", "Campfire05", Vector(-3649,542f, 16,07597f, 3386,271f), Vector(0.0f, 142,2877f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 808, "MP_ONLY", true);
	*(&iLocal_10 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire011", "Campfire05", Vector(-3676.0f, 16,06274f, 3340.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 816, "MP_ONLY", true);
	*(&iLocal_10 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire012", "Campfire02", Vector(-3444f, 39,15295f, 3324f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 824, "MP_ONLY", true);
	*(&iLocal_10 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire013", "Campfire05", Vector(-2340f, 16,06272f, 3792.0f), Vector(0.0f, -30,82856f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 832, "MP_ONLY", true);
	*(&iLocal_10 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire014", "Campfire01", Vector(-2396.0f, 13,59437f, 3924f), Vector(0.0f, 377,9132f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 840, "MP_ONLY", true);
	*(&iLocal_10 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire015", "Campfire05", Vector(-2503,747f, 71,9996f, 3732,213f), Vector(0.0f, 318,8498f, 0.0f));
	*(&iLocal_10 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire016", "Campfire05", Vector(-2874,909f, 36,10474f, 3731,685f), Vector(0.0f, 51,39213f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 856, "MP_ONLY", true);
	*(&iLocal_10 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Campfire04", "Campfire04", Vector(-2910,835f, 37,14508f, 3123,243f), Vector(0.0f, 84,71133f, 0.0f));
	*(&iLocal_10 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage", "Player_Herb_RedSage", Vector(-2128.0f, 78,30591f, 3568f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage1", "Player_Herb_RedSage", Vector(-2060,095f, 65,44154f, 3567,905f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage2", "Player_Herb_RedSage", Vector(-2204.0f, 81,87195f, 3536.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage3", "Player_Herb_RedSage", Vector(-2196.0f, 72,28235f, 3622,289f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage4", "Player_Herb_RedSage", Vector(-2320.0f, 72,28235f, 3668,269f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_LockedFootlocker", "Locked_Footlocker", Vector(-3121,093f, 75,29359f, 3316,776f), Vector(0.0f, -98,96357f, 0.0f));
	DECOR_SET_INT(&iLocal_10 + 912, "GringoDollarAmt", 15);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stay6", "horse_stay", Vector(-3159,17f, 40,74809f, 3357,375f), Vector(0.0f, -161,252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stay5", "horse_stay", Vector(-3161,255f, 40,81056f, 3357,217f), Vector(0.0f, 1,104314f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stay4", "horse_stay", Vector(-3162,257f, 40,88935f, 3355,897f), Vector(0.0f, -33,70702f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_rand_idle_stand1", "rand_idle_stand", Vector(-3163,328f, 48,60288f, 3338,12f), Vector(0.0f, 24,23989f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-3170,379f, 48,039f, 3335,295f), Vector(0.0f, -116,8604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_Sit_Ground7", "sit_ground_smoke", Vector(-3184,32f, 47,07455f, 3334,734f), Vector(0.0f, 171,0371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Sit_Ground4", "stand_lookdistance_w_any", Vector(-2341,574f, 8,03136f, 3929,239f), Vector(0.0f, -273,3786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Sit_Ground3", "rand_idle_stand", Vector(-2342,725f, 8,031624f, 3925,27f), Vector(0.0f, -206,3736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-2343,372f, 8,031362f, 3929,253f), Vector(0.0f, -329,1709f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2341,646f, 8,031359f, 3927,058f), Vector(0.0f, -247,171f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_look_distance_binocs2", "look_distance_binocs", Vector(-2385,283f, 13,65843f, 3944,406f), Vector(0.0f, -11,7156f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Ground_Campfire_Tend4", "sit_ground_smoke", Vector(-2392,38f, 9,035279f, 3975,027f), Vector(0.0f, -256,7545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Ground_Campfire_Tend3", "Sit_Ground_Only", Vector(-2393,851f, 9,03528f, 3974,437f), Vector(0.0f, -232,1839f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Ground_Campfire_Tend2", "Sit_Ground_Drink", Vector(-2395,36f, 9,035281f, 3973,386f), Vector(0.0f, -181,9568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-2396,675f, 9,035282f, 3975,035f), Vector(0.0f, -108,9257f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_horse_stay7", "horse_stay", Vector(-2418,596f, 8,455927f, 3947,523f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_horse_stay6", "horse_stay", Vector(-2417,423f, 8,40713f, 3948,75f), Vector(0.0f, -126,3067f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_horse_tend5", "horse_tend", Vector(-2420,452f, 8,474426f, 3946,628f), Vector(0.0f, -178,6461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_horse_stay5", "horse_stay", Vector(-2392,424f, 9,035282f, 3972,488f), Vector(0.0f, -77,91962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_horse_stay", "horse_stay", Vector(-2390,601f, 9,035286f, 3974,18f), Vector(0.0f, -77,91962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_horse_tend", "horse_tend", Vector(-2393,498f, 9,035286f, 3970,294f), Vector(0.0f, -178,2487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_rand_idle_stand", "rand_idle_stand", Vector(-2410,299f, 8,794f, 3970,471f), Vector(0.0f, 74,69887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_look_distance_binocs1", "look_distance_binocs", Vector(-2406,953f, 8,885f, 3972,906f), Vector(0.0f, -179,8559f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "pasted__Ram_Pee", "Pee", Vector(-2427,78f, 8,031357f, 3952,751f), Vector(0.0f, -220,2258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_look_distance_binocs", "look_distance_binocs", Vector(-2379,605f, 13,45116f, 3959,745f), Vector(0.0f, -145,4083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-2403,277f, 8,82728f, 3971,173f), Vector(0.0f, -235,7263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_stand_guntricks", "stand_guntricks_e_any", Vector(-2397,134f, 9,035282f, 3973,341f), Vector(0.0f, -125,0145f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_smoking_stand", "smoking_stand", Vector(-2401,506f, 8,984141f, 3972f), Vector(0.0f, 108,3262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2344,619f, 8,11066f, 3926,381f), Vector(0.0f, -160,6333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_Sit_Ground6", "Rand_Idle_Sit_Ground", Vector(-3157,05f, 49,874f, 3335,208f), Vector(0.0f, 199,8863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_play_harmonica2", "sit_ground_play_harmonica", Vector(-2826,924f, 20,222f, 3075,662f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_peeing3", "stand_peeing_b_any", Vector(-2839,318f, 19,804f, 3087,875f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 920), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2828,607f, 20,079f, 3076,498f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_play_harmonica1", "sit_ground_play_harmonica", Vector(-2830,344f, 20,079f, 3077,056f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2825,495f, 20,078f, 3065,822f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3554,44f, 15,6855f, 3158,265f), Vector(0.0f, 209,569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 928), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand3", "stand_lookdistance_w_any", Vector(-3552,909f, 15,63719f, 3157,377f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-2011,576f, 45,81986f, 3593,491f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DIR_LockedFootlocker", "Locked_Footlocker", Vector(-1987,543f, 48,60604f, 3602,282f), Vector(0.0f, -147,3852f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	DECOR_SET_INT(&iVar0, "GringoDollarAmt", 10);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-1996.0f, 40,42086f, 3556.0f), Vector(0.0f, 28,35921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_look_distance_binocs2", "look_distance_binocs", Vector(-1998,833f, 50,1581f, 3599,239f), Vector(0.0f, 180,5422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-1983,027f, 48,83636f, 3599,454f), Vector(0.0f, -152,7213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_horse_tend", "horse_tend", Vector(-2000,002f, 42,62162f, 3569,909f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_horse_stay2", "horse_stay", Vector(-2000.0f, 41,35714f, 3561,477f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_horse_stay1", "horse_stay", Vector(-2000.0f, 41,78054f, 3563,465f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_horse_stay", "horse_stay", Vector(-1999,953f, 42,07273f, 3565,992f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_rand_idle_stand", "rand_idle_stand", Vector(-1997,602f, 43,169f, 3578,858f), Vector(0.0f, 34,43791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_look_distance_binocs1", "look_distance_binocs", Vector(-2013,013f, 45,82755f, 3597,033f), Vector(0.0f, 205,1078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_stand_announce", "stand_announce", Vector(-1978,738f, 49,22998f, 3593,193f), Vector(0.0f, -32,34185f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1971,158f, 52,98363f, 3597,076f), Vector(0.0f, -118,8713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_Pee", "Pee", Vector(-2005,785f, 45,09604f, 3597,083f), Vector(0.0f, -149,6704f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_look_distance_binocs", "look_distance_binocs", Vector(-1992,156f, 42,48289f, 3572,075f), Vector(0.0f, -64,38241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_sleeping_scripted", "sleeping_scripted", Vector(-1997,227f, 43,229f, 3575,407f), Vector(0.0f, 29,99957f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-2002,435f, 43,169f, 3577,113f), Vector(0.0f, -68,14408f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_smoking_stand", "smoking_stand", Vector(-1994,3f, 44,10772f, 3587,234f), Vector(0.0f, 27,99556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-1998,269f, 43,07348f, 3575,167f), Vector(0.0f, -245,3799f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "DlR_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1999,387f, 43,169f, 3577,917f), Vector(0.0f, 0,6212928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand2", "rand_idle_stand", Vector(-3555,438f, 15,60915f, 3159,332f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3543,762f, 15,3694f, 3162,819f), Vector(0.0f, -210,2364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3545,373f, 15,49567f, 3162,648f), Vector(0.0f, 34,25905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 936), 0);
	*(&iLocal_10 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3544,541f, 15,49885f, 3161,289f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 944), 0);
	*(&iLocal_10 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_look_distance_binocs2", "look_distance_binocs", Vector(-3545,451f, 15,64982f, 3159,776f), Vector(0.0f, 138,5309f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 952), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_tend1", "horse_tend", Vector(-3495,967f, 19,65504f, 3136,116f), Vector(0.0f, -91,20521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_tend", "horse_tend", Vector(-3499,674f, 16,25382f, 3147,382f), Vector(0.0f, 21,67242f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_stay2", "horse_stay", Vector(-3497,875f, 16,7437f, 3146,125f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_stay1", "horse_stay", Vector(-3496f, 17,07369f, 3146,051f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_stay", "horse_stay", Vector(-3494,914f, 17,262f, 3150,906f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_look_distance_binocs1", "look_distance_binocs", Vector(-3516,268f, 15,515f, 3124,192f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Pee", "Pee", Vector(-3492,114f, 19,66672f, 3136,246f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand1", "rand_idle_stand", Vector(-3520,276f, 11,12099f, 3146,674f), Vector(0.0f, 78,99949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand", "rand_idle_stand", Vector(-3509,928f, 13,78963f, 3146,481f), Vector(0.0f, -82,29346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3511,514f, 13,83953f, 3143,129f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", Vector(-3497,143f, 17,32072f, 3150,853f), Vector(0.0f, -105,2133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_lean_rail", "look_distance_binocs", Vector(-3520,693f, 15,672f, 3127,985f), Vector(0.0f, 37,36112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", Vector(-3516,66f, 15,74677f, 3134,089f), Vector(0.0f, 41,5251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_look_distance_binocs", "look_distance_binocs", Vector(-3503,269f, 15,4507f, 3126,436f), Vector(0.0f, -47,4214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3507,42f, 14,41f, 3147,197f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_horse_stay", "horse_stay", Vector(-2809,631f, 20,06283f, 3078,922f), Vector(0.0f, 262,5791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 960), 0);
	*(&iLocal_10 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_horse_stay1", "horse_stay", Vector(-2825,325f, 20,078f, 3061,285f), Vector(0.0f, 291,1736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 968), 0);
	*(&iLocal_10 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_horse_stay2", "horse_stay", Vector(-2842,107f, 20,07843f, 3077,05f), Vector(0.0f, -62,75959f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 976), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_horse_stay3", "horse_stay", Vector(-2839,699f, 19,8962f, 3083,606f), Vector(0.0f, -92,17142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_horse_stay4", "horse_stay", Vector(-2833,166f, 20,082f, 3098,089f), Vector(0.0f, -92,17142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_horse_stay5", "horse_stay", Vector(-2832,59f, 20,078f, 3061,418f), Vector(0.0f, 291,1736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 984), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_guntricks2", "stand_guntricks_e_any", Vector(-2831,572f, 20,078f, 3071,561f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_smoking_stand1", "smoking_stand", Vector(-2819,144f, 20,898f, 3097,647f), Vector(0.0f, 8,869471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2860,124f, 18,071f, 3052,454f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-2839,148f, 19,074f, 3047,189f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-2816,013f, 19,074f, 3054,258f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-2794,852f, 19,075f, 3074,642f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-2807,877f, 20,397f, 3089,516f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-2877,226f, 18,9f, 3088,852f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_peeing2", "stand_peeing_b_any", Vector(-2856,467f, 18,07058f, 3083,134f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 992), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_guntricks1", "stand_guntricks_e_any", Vector(-2820,465f, 20,07843f, 3077,348f), Vector(0.0f, -216,9882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_guntricks", "stand_guntricks_e_any", Vector(-2822,097f, 20,07843f, 3079,603f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-2832,129f, 20,19984f, 3075,018f), Vector(0.0f, -91,55288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_lookdistance_binocs", "look_distance_binocs", Vector(-2810,723f, 20,06739f, 3080,786f), Vector(0.0f, -93,60166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", Vector(-2827,709f, 20,21305f, 3073,477f), Vector(0.0f, -93,82076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_lean_fence_L_talking", "lean_fence_L_talking", Vector(-2815,689f, 20,069f, 3080,324f), Vector(0.0f, -86,0629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_look_out_window_R", "look_out_window_R", Vector(-2827,741f, 20,22371f, 3077,974f), Vector(0.0f, -183,1475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-2834,184f, 20,0484f, 3078,272f), Vector(0.0f, -269,9485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "mrc_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2808,104f, 19,074f, 3061,17f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-3159,587f, 49,208f, 3337,611f), Vector(0.0f, 125,8836f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_horse_stay5", "horse_stay", Vector(-1931,363f, 31,714f, 3457,895f), Vector(0.0f, -90,69595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_horse_stay4", "horse_stay", Vector(-1922,429f, 33,198f, 3457,79f), Vector(0.0f, -119,5589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_guntricks1", "stand_guntricks_e_any", Vector(-1935,254f, 31,071f, 3465,635f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_smoking_stand2", "smoking_stand", Vector(-1946,722f, 30,068f, 3464,956f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-1954,085f, 30,043f, 3461,345f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-1913,139f, 35,528f, 3465,48f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-1931,168f, 31,081f, 3472,563f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_smoking_stand1", "smoking_stand", Vector(-1947,871f, 30,049f, 3454,507f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_play_harmonica4", "sit_ground_play_harmonica", Vector(-1949,729f, 30,338f, 3468,748f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_play_harmonica3", "sit_ground_play_harmonica", Vector(-1944,537f, 30,174f, 3462,752f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_guntricks", "stand_guntricks_e_any", Vector(-1940,999f, 30,465f, 3466,823f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1938,157f, 40,077f, 3411,248f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_peeing4", "stand_peeing_b_any", Vector(-1938,611f, 31,35f, 3445,034f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 1000), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1928,01f, 31,471f, 3470,586f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1905,697f, 37,586f, 3460,313f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1973,683f, 23,404f, 3452,104f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1966,768f, 24,473f, 3444,756f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_horse_stay3", "horse_stay", Vector(-1928,781f, 32,027f, 3459,594f), Vector(0.0f, -90,69595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_horse_stay2", "horse_stay", Vector(-1919,589f, 33,631f, 3452,771f), Vector(0.0f, -119,5589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-1945,132f, 30,25158f, 3468,703f), Vector(0.0f, -76,99028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_smoking_stand", "smoking_stand", Vector(-1944,187f, 30,25158f, 3467,699f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_sleeping_scripted", "sleeping_scripted", Vector(-1948,295f, 30,42581f, 3469,483f), Vector(0.0f, -56,70472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_lookdistance_b2", "look_distance_binocs", Vector(-1937,952f, 30,59689f, 3471,31f), Vector(0.0f, -168,9819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_lookdistance_b1", "look_distance_binocs", Vector(-1955,76f, 29,60071f, 3464,03f), Vector(0.0f, 93,37398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_look_out", "look_out_window_L", Vector(-1946,82f, 30,33619f, 3470,723f), Vector(0.0f, -173,4546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", Vector(-1944,898f, 30,25158f, 3469,718f), Vector(0.0f, -89,65778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "del_Pee", "Pee", Vector(-1949,664f, 30,068f, 3463,846f), Vector(0.0f, -239,1129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3126,541f, 55,26898f, 3325,715f), Vector(0.0f, 208,3396f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_drunk_throwbottle2", "stand_drunk_throwbottle", Vector(-3120f, 48,05134f, 3285,886f), Vector(0.0f, -85,74197f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-3116,289f, 48,02755f, 3283,983f), Vector(0.0f, -165,7704f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-3116,299f, 48,0468f, 3286,97f), Vector(0.0f, 4,880137f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stay3", "horse_stay", Vector(-3122,469f, 44,295f, 3276,393f), Vector(0.0f, -62,41935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stay2", "horse_stay", Vector(-3116,799f, 44,8482f, 3275,256f), Vector(0.0f, -84,97229f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stay1", "horse_stay", Vector(-3148,185f, 45,21606f, 3285,917f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_horse_stayf", "horse_stay", Vector(-3145,843f, 44,94708f, 3284,708f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3164,408f, 48,90765f, 3306,279f), Vector(0.0f, -107,4971f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_yawning_n_any", "stand_yawning_n_any", Vector(-3147,888f, 52,50456f, 3331,406f), Vector(0.0f, -25,10501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3162,687f, 43,39395f, 3284,156f), Vector(0.0f, -116,8604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_rand_idle_stand", "rand_idle_stand", Vector(-3161,706f, 44,13537f, 3285,432f), Vector(0.0f, -34,07877f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_Pee", "Pee", Vector(-3181,828f, 44,61724f, 3291,591f), Vector(0.0f, -145,4428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_smoking_stand", "smoking_stand", Vector(-3161,215f, 48,66968f, 3305,215f), Vector(0.0f, -193,7699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3160,971f, 49,1858f, 3307,668f), Vector(0.0f, 64,33193f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-3118,486f, 48,08616f, 3286,486f), Vector(0.0f, -57,33881f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Rep_look_distance_binocs6", "look_distance_binocs", Vector(-3116,516f, 47,90384f, 3282,219f), Vector(0.0f, -15,7782f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_look_distance_binocs5", "look_distance_binocs", Vector(-3165,171f, 47,88364f, 3339,91f), Vector(0.0f, 172,8329f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3208,021f, 48,54655f, 3325,991f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_lookdistance_w_any6", "stand_lookdistance_w_any", Vector(-3151,599f, 55,1331f, 3326,926f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-3153,294f, 44,676f, 3283,202f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-3235,002f, 43,37407f, 3289,337f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-3239,588f, 45,36124f, 3323,61f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_lookdistance_binocs1", "look_distance_binocs", Vector(-3093,237f, 54,06651f, 3295,742f), Vector(0.0f, 50,78083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_lookdistance_binocs", "look_distance_binocs", Vector(-3199,912f, 49,23763f, 3294,363f), Vector(0.0f, 50,78083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_10 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage5", "Player_Herb_RedSage", Vector(-2305,475f, 79,4324f, 3579,02f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage6", "Player_Herb_RedSage", Vector(-2312,041f, 85,33324f, 3522,133f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage7", "Player_Herb_RedSage", Vector(-2356,613f, 75,97663f, 3395,387f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage8", "Player_Herb_RedSage", Vector(-2328,49f, 23,83016f, 3758,703f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage9", "Player_Herb_RedSage", Vector(-2340,607f, 15,78902f, 3803,609f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage10", "Player_Herb_RedSage", Vector(-2584f, 18,96817f, 3836,951f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage12", "Player_Herb_RedSage", Vector(-2653,214f, 71,27073f, 3674,935f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage13", "Player_Herb_RedSage", Vector(-2752f, 64,25098f, 3660.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage14", "Player_Herb_RedSage", Vector(-2860,954f, 84,32941f, 3656.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage15", "Player_Herb_RedSage", Vector(-2772,946f, 78,30584f, 3622,849f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage16", "Player_Herb_RedSage", Vector(-2650,237f, 81,31765f, 3614,626f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage17", "Player_Herb_RedSage", Vector(-2579,453f, 75,2982f, 3571,804f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage18", "Player_Herb_RedSage", Vector(-2528.0f, 73,28625f, 3516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage19", "Player_Herb_RedSage", Vector(-2398,533f, 88,00005f, 3578,744f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage54", "Player_Herb_RedSage", Vector(-3720.0f, 19,47223f, 4068f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage20", "Player_Herb_RedSage", Vector(-2480.0f, 77,30194f, 3512.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage21", "Player_Herb_RedSage", Vector(-2376.0f, 90,35297f, 3484.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage22", "Player_Herb_RedSage", Vector(-2544.0f, 72,28235f, 3524.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage23", "Player_Herb_RedSage", Vector(-2575,155f, 69,27057f, 3386,922f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage24", "Player_Herb_RedSage", Vector(-2340.0f, 91,34657f, 3470,586f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage25", "Player_Herb_RedSage", Vector(-2406,008f, 88,34509f, 3540f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage26", "Player_Herb_RedSage", Vector(-2568.0f, 70,27451f, 3372.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage27", "Player_Herb_RedSage", Vector(-2380.0f, 78,16766f, 3413,836f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage28", "Player_Herb_RedSage", Vector(-2523,415f, 63,24707f, 3292.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage29", "Player_Herb_RedSage", Vector(-2618,338f, 60,23529f, 3261,621f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage30", "Player_Herb_RedSage", Vector(-2584.0f, 72,2552f, 3344.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage31", "Player_Herb_RedSage", Vector(-2640,04f, 70,66639f, 3343,903f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage32", "Player_Herb_RedSage", Vector(-2623,346f, 61,2392f, 3252,757f), Vector(0.0f, -100,696f, 0.0f));
	*(&iLocal_10 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage33", "Player_Herb_RedSage", Vector(-2608.0f, 58,22832f, 3220,38f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage34", "Player_Herb_RedSage", Vector(-2567,059f, 76,3085f, 3620,357f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage35", "Player_Herb_RedSage", Vector(-2744.0f, 65,33836f, 3440.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage36", "Player_Herb_RedSage", Vector(-2668.0f, 68,70806f, 3370,733f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage37", "Player_Herb_RedSage", Vector(-2747,472f, 64,25887f, 3360.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage38", "Player_Herb_RedSage", Vector(-2618,21f, 72,28235f, 3336.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage39", "Player_Herb_RedSage", Vector(-2776.0f, 60,23529f, 3540.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage40", "Player_Herb_RedSage", Vector(-2932.0f, 56,2196f, 3516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage41", "Player_Herb_RedSage", Vector(-2944.0f, 65,34352f, 3442,838f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage42", "Player_Herb_RedSage", Vector(-3007,288f, 64,25098f, 3432,222f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage43", "Player_Herb_RedSage", Vector(-3105,468f, 49,17103f, 3513,909f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage44", "Player_Herb_RedSage", Vector(-3060.0f, 46,18036f, 3596.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage45", "Player_Herb_RedSage", Vector(-3088.0f, 43,16861f, 3793,174f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage46", "Player_Herb_RedSage", Vector(-3100.0f, 44,6666f, 3712f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage47", "Player_Herb_RedSage", Vector(-3261,243f, 37,4289f, 3796,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage48", "Player_Herb_RedSage", Vector(-3312.0f, 28,1098f, 3874,001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage49", "Player_Herb_RedSage", Vector(-3354,739f, 31,10819f, 3872f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage50", "Player_Herb_RedSage", Vector(-3479,23f, 29,11372f, 3790,93f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage51", "Player_Herb_RedSage", Vector(-3456.0f, 29,22464f, 3997,027f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage52", "Player_Herb_RedSage", Vector(-3517,215f, 30,6639f, 4050,653f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage53", "Player_Herb_RedSage", Vector(-3552.0f, 31,12157f, 4032f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage55", "Player_Herb_RedSage", Vector(-3780.0f, 12,04705f, 3864f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage56", "Player_Herb_RedSage", Vector(-3784,537f, 20,34153f, 3820f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage57", "Player_Herb_RedSage", Vector(-3680.0f, 38,12937f, 3776f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage58", "Player_Herb_RedSage", Vector(-3884.0f, 15,05882f, 3868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage59", "Player_Herb_RedSage", Vector(-3740.0f, 16,88192f, 3676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage60", "Player_Herb_RedSage", Vector(-3720.0f, 19,02363f, 3664f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage61", "Player_Herb_RedSage", Vector(-3633,163f, 26,13289f, 3667,891f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage62", "Player_Herb_RedSage", Vector(-3488f, 30,11765f, 3557,893f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage63", "Player_Herb_RedSage", Vector(-3600.0f, 28,1098f, 3548f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage64", "Player_Herb_RedSage", Vector(-3368.0f, 33,12941f, 3612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage65", "Player_Herb_RedSage", Vector(-3304.0f, 37,14508f, 3639,991f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage66", "Player_Herb_RedSage", Vector(-3324.0f, 40,68421f, 3760f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage67", "Player_Herb_RedSage", Vector(-3212f, 40,15686f, 3554,35f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage68", "Player_Herb_RedSage", Vector(-3266,841f, 47,18433f, 3448f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage69", "Player_Herb_RedSage", Vector(-3159,258f, 46,17721f, 3395,738f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage70", "Player_Herb_RedSage", Vector(-3102,988f, 54,21176f, 3458,58f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage71", "Player_Herb_RedSage", Vector(-3284f, 45,18009f, 3437,367f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage72", "Player_Herb_RedSage", Vector(-3428f, 39,15937f, 3437,872f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage73", "Player_Herb_RedSage", Vector(-3370,748f, 39,15295f, 3353,252f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage74", "Player_Herb_RedSage", Vector(-3250,005f, 42,1647f, 3364f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage75", "Player_Herb_RedSage", Vector(-3408f, 37,14053f, 3344,301f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage76", "Player_Herb_RedSage", Vector(-3592.0f, 33,12939f, 3440f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage77", "Player_Herb_RedSage", Vector(-3736,011f, 8,031368f, 3367,968f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage78", "Player_Herb_RedSage", Vector(-3760.0f, 8,031368f, 3500,001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage79", "Player_Herb_RedSage", Vector(-3696.0f, 8,031367f, 3427,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage80", "Player_Herb_RedSage", Vector(-3700,347f, 8,047106f, 3547,551f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage81", "Player_Herb_RedSage", Vector(-3692.0f, 14,05489f, 3268f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage82", "Player_Herb_RedSage", Vector(-3566,34f, 14,0549f, 3256f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage83", "Player_Herb_RedSage", Vector(-3368f, 36,95808f, 3240f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage84", "Player_Herb_RedSage", Vector(-3412f, 43,16864f, 3300f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage85", "Player_Herb_RedSage", Vector(-3278,227f, 42,16839f, 3394,21f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage86", "Player_Herb_RedSage", Vector(-3252f, 44,17255f, 3416f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage87", "Player_Herb_RedSage", Vector(-3023,994f, 42,12013f, 3277,905f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage88", "Player_Herb_RedSage", Vector(-3064.0f, 39,15292f, 3232.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage89", "Player_Herb_RedSage", Vector(-3244f, 38,06852f, 3156f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage90", "Player_Herb_RedSage", Vector(-3176f, 39,1916f, 3176f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage91", "Player_Herb_RedSage", Vector(-3116f, 39,30048f, 3144f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage92", "Player_Herb_RedSage", Vector(-2956.0f, 39,15292f, 3157,642f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage93", "Player_Herb_RedSage", Vector(-2852.0f, 45,17645f, 3212.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage94", "Player_Herb_RedSage", Vector(-2685,033f, 56,52071f, 3228,655f), Vector(0.0f, 163,1573f, 0.0f));
	*(&iLocal_10 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage95", "Player_Herb_RedSage", Vector(-2740.0f, 66,25882f, 3313,721f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage96", "Player_Herb_RedSage", Vector(-2932.0f, 57,57935f, 3392.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage97", "Player_Herb_RedSage", Vector(-3384f, 17,06667f, 3149,725f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage98", "Player_Herb_RedSage", Vector(-3552f, 14,0549f, 3244f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage99", "Player_Herb_RedSage", Vector(-2668.0f, 47,1843f, 3170,333f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-3360f, 17,06667f, 3160f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-3564,983f, 14,99426f, 3196,983f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-3480f, 36,41875f, 3330,627f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-3290,742f, 47,18433f, 3289,645f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", Vector(-3089,406f, 58,04325f, 3314,362f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-2971,6f, 20,96024f, 3082,742f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", Vector(-2783,719f, 37,38314f, 3134,997f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", Vector(-2688.0f, 54,21176f, 3264.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", Vector(-2680.0f, 44,17255f, 3152.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", Vector(-3028.0f, 40,15686f, 3200.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", Vector(-3020.0f, 61,2392f, 3392.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", Vector(-3082,824f, 52,20392f, 3390,854f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", Vector(-2868.0f, 45,15871f, 3192.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", Vector(-3144,361f, 22,33671f, 3087,783f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", Vector(-3288f, 34,39495f, 3128f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", Vector(-3572f, 16,10337f, 3164f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", Vector(-3639,497f, 14,0549f, 3232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", Vector(-2429,105f, 72,28235f, 3386,798f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", Vector(-2323,266f, 91,35687f, 3464f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", Vector(-2208.0f, 81,29002f, 3552.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", Vector(-2176.0f, 78,30591f, 3564f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage", "Player_Herb_DesertSage", Vector(-3788.0f, 8,031364f, 3344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", Vector(-3564f, 37,14511f, 3396f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-3436f, 35,13725f, 3360f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", Vector(-3541,646f, 38,14902f, 3470,473f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-3413,799f, 34,9981f, 3570,201f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-3508.0f, 25,09804f, 3628f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-3604.0f, 28,1098f, 3656,467f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-3750,897f, 17,9346f, 3692f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-3820.0f, 9,024844f, 3792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-3761,782f, 21,08235f, 3824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", Vector(-3861,371f, 14,15964f, 3828f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", Vector(-3908.0f, 12,17647f, 3879,762f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", Vector(-3612.0f, 29,11754f, 3912f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", Vector(-3576.0f, 46,08669f, 3796f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", Vector(-3477,363f, 30,11763f, 3828f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", Vector(-3562,483f, 31,12157f, 3997,31f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", Vector(-3872.0f, 13,92223f, 3932f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", Vector(-3777,49f, 21,30838f, 4002,51f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", Vector(-3456.0f, 29,23476f, 3956f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", Vector(-3277,899f, 40,15022f, 3530,462f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 2088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", Vector(-3248.0f, 39,15292f, 3708f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "rep_rand_idle_stand2", "rand_idle_stand", Vector(-3159,823f, 43,95999f, 3285,607f), Vector(0.0f, 48,95183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_67(struct<2>[] Param0) //Position: 0x9C34 / 39988
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_71();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_70(&(Param0[iVar02]), 8);
		}
		else if (Function_69())
		{
			iVar1 = 1;
			Function_70(&(Param0[iVar02]), 8);
		}
		Function_70(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_70(&(Param0[iVar02]), 1);
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
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_70(&(Param0[iVar02]), 2);
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
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_70(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_70(&(Param0[iVar02]), 2);
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
	Function_68();
	return 1;
}

void Function_68() //Position: 0x9FF6 / 40950
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

bool Function_69() //Position: 0xA036 / 41014
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

void Function_70(struct<13> Param0) //Position: 0xA064 / 41060
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_71() //Position: 0xA077 / 41079
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

var Function_72(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA0B9 / 41145
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_73(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_70(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_73(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA0F7 / 41207
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_70(&(Param0[iVar02]), 4);
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

void Function_74(int iParam0, int iParam1) //Position: 0xA1C6 / 41414
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

bool Function_75() //Position: 0xA210 / 41488
{
	var uVar0;
	
	Function_74(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("RioBravo_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_fom_TL", 2,802597E-45f, Vector(-2698,75f, 67,26273f, 3594,622f), Vector(0.0f, 46,90526f, 0.0f), Vector(233,9071f, 51,19311f, 162,187f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_fom_TR", 2,802597E-45f, Vector(-2816,708f, 67,26276f, 3471,476f), Vector(0.0f, -43,06648f, 0.0f), Vector(182,4189f, 56,81593f, 216,5262f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_fom_BL", 2,802597E-45f, Vector(-2552,932f, 70,78741f, 3466,534f), Vector(0.0f, 47,35273f, 0.0f), Vector(164,3603f, 46,83172f, 200,9831f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_fom_BR", 2,802597E-45f, Vector(-2689,511f, 69,99854f, 3324,288f), Vector(0.0f, 47,24931f, 0.0f), Vector(182,6157f, 58,32756f, 197,6764f));
	return 1;
}

void Function_76(char* cParam0) //Position: 0xA364 / 41828
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

void Function_77(int iParam0) //Position: 0xA3A1 / 41889
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
		STREAMING_REQUEST_ACTOR(1177, true, false);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_REQUEST_ACTOR(1179, true, false);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_REQUEST_ACTOR(1178, true, false);
	}
	return;
}

