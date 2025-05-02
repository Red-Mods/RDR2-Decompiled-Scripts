//Decompiled with MagicRDR v1.0
//Function Count : 95
//Statics Count : 599
//Natives Count : 120
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
	var uLocal_12 = 31;
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
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	bool bLocal_483 = false;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 2;
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
	var uLocal_560 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_480 = 0;
	iLocal_481 = &iScriptParam_0;
	SET_DUST_LEVEL(2);
	Function_94(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	Function_93("Initializing Gaptooth Ridge", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_483 = 1000;
		switch (iLocal_480)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_480 = 1;
				}
				bLocal_483 = false;
				break;
			
			case 0x00000001:
				if (Function_92())
				{
					iLocal_480 = 2;
				}
				bLocal_483 = false;
				break;
			
			case 0x00000002:
				if (Function_83())
				{
					Function_82(&(Global_43791[iLocal_481]), 32);
					Function_79(&iLocal_0);
					iLocal_480 = 3;
				}
				bLocal_483 = false;
				break;
			
			case 0x00000003:
				uLocal_484 = LAUNCH_NEW_SCRIPT_WITH_ARGS("GaptoothRidgeVol", &iLocal_481, 2, 0);
				Function_78(&Global_11482, &Global_13490, iScriptParam_0);
				iLocal_480 = 5;
				bLocal_483 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_11482, &Global_13490, iScriptParam_0))
				{
					iLocal_480 = 4;
					bLocal_483 = false;
				}
				else
				{
					bLocal_483 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_43791[iLocal_481]), 16))
				{
					iLocal_480 = 6;
				}
				bLocal_483 = false;
				break;
			
			case 0x00000006:
				Function_71(&Global_11482, &Global_13490, &uLocal_488, &Global_10994, iScriptParam_0);
				Function_82(&(Global_43791[iLocal_481]), 8);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_70(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_480 = 10;
				}
				else
				{
					iLocal_480 = 7;
				}
				bLocal_483 = false;
				break;
			
			case 0x00000007:
				Function_69(iScriptParam_0);
				if (Function_67(512))
				{
					Function_57(iScriptParam_0);
				}
				Function_56(64);
				iLocal_480 = 8;
				bLocal_483 = false;
				break;
			
			case 0x00000008:
				Function_55(StackVal, 0, Global_46760[0], Vector(-2080,289f, 16,962f, 2603,609f));
				if (!Function_54(&Global_46796))
				{
					Function_50(2, 0,5f, 0, &iLocal_0, &Global_44085[iLocal_4819] + 8, !Function_54(&Global_46796));
					Function_46(0, 8, 4, 0, 2);
					Function_56(64);
				}
				Function_82(&(Global_43791[iLocal_481]), 512);
				iLocal_480 = 9;
				bLocal_483 = false;
				break;
			
			case 0x00000009:
				if (!Function_54(&Global_46796))
				{
					Function_44(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 0;
				Function_82(&(Global_43791[iLocal_481]), 4);
				Function_43("Finished Initializing Gaptooth Ridge", 5.0f);
				iLocal_480 = 10;
				bLocal_483 = false;
				break;
			
			case 0x0000000A:
				if (!Function_54(&Global_46796))
				{
					if (iLocal_534)
					{
						iLocal_534 = 0;
						iLocal_480 = 8;
						bLocal_483 = false;
					}
				}
				else
				{
					iLocal_534 = 1;
				}
				Function_30(&(Global_39874[43]), "TWG", 18, &iLocal_0, 4);
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_486))
					{
						uLocal_486 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_535, 62, 0);
					}
				}
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_480 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_483);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_11482, &Global_13490, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_56(64);
	Function_70(&(Global_43791[iLocal_481]), 32);
	Function_70(&(Global_43791[iLocal_481]), 64);
	Function_70(&(Global_43791[iLocal_481]), 8);
	Function_70(&(Global_43791[iLocal_481]), 512);
	Function_70(&(Global_43791[iLocal_481]), 4);
	if (IS_SCRIPT_VALID(&uLocal_484))
	{
		TERMINATE_SCRIPT(&uLocal_484);
	}
	Function_43("Unloaded Gaptooth Ridge", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x3F0 / 1008
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

void Function_2(int iParam0) //Position: 0x426 / 1062
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x448 / 1096
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x45E / 1118
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x474 / 1140
{
	Function_6(&iLocal_10 + 8);
	RELEASE_LAYOUT_REF(&iLocal_10);
	return;
}

void Function_6(int iParam0) //Position: 0x487 / 1159
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x4AF / 1199
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

void Function_8(struct<13> Param0) //Position: 0x5FA / 1530
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x617 / 1559
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x635 / 1589
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x641 / 1601
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
		Function_70(&(Global_43791[bParam2]), 0x40000000);
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

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x85F / 2143
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

int Function_13(int iParam0) //Position: 0x9C5 / 2501
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

int Function_14(int iParam0) //Position: 0x9F0 / 2544
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

void Function_15(var uParam0, int iParam1) //Position: 0xA24 / 2596
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xA35 / 2613
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xA51 / 2641
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xA6B / 2667
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xA88 / 2696
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0xAA3 / 2723
{
	return (bParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xAB0 / 2736
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

void Function_22(int iParam0) //Position: 0xF5E / 3934
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

bool Function_23(int iParam0) //Position: 0xFC9 / 4041
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

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1047 / 4167
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

bool Function_25(int iParam0) //Position: 0x10F6 / 4342
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x1111 / 4369
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

bool Function_27(bool bParam0) //Position: 0x11C6 / 4550
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_76(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x11E4 / 4580
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x11F3 / 4595
{
	return &Global_21369 + 8;
}

void Function_30(vector3 vParam0) //Position: 0x11FF / 4607
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
				Function_41(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_41(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_40(&vParam0, 63))
			{
				if (Function_39(76) || Function_38(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_36(&cParam1, &vParam0, 3, &uParam3);
						Function_33(&vParam0, 63);
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
			Function_32();
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
			Function_31();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_40(&vParam0, 63))
		{
			if (Function_39(76) || Function_38(76))
			{
				Function_36(&cParam1, &vParam0, 3, &uParam3);
				Function_33(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_36(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_31() //Position: 0x1410 / 5136
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_33(&(Global_39874[33]), bVar0);
		bVar0++;
	}
	return;
}

void Function_32() //Position: 0x1457 / 5207
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_33(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_33(int iParam0, bool bParam1) //Position: 0x14A9 / 5289
{
	if (bParam1 <= 32)
	{
		Function_34(&iParam0, Function_35(bParam1));
	}
	else
	{
		Function_34(&iParam0 + 4, Function_35((bParam1 - 32)));
	}
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x14D4 / 5332
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_35(bool bParam0) //Position: 0x14E5 / 5349
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_36(char* cParam0) //Position: 0x14F1 / 5361
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
		if (bVar5 != 0 || Function_40(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_37(), &cVar1, bParam2, bVar5, 4278716679);
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

var Function_37() //Position: 0x159E / 5534
{
	int iVar0;
	
	return &iVar0;
}

int Function_38(int iParam0) //Position: 0x15A7 / 5543
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_39(int iParam0) //Position: 0x15BC / 5564
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_40(struct<5> Param0) //Position: 0x15D1 / 5585
{
	if (bParam1 <= 32)
	{
		return Function_20(Param0, Function_35(bParam1));
	}
	return Function_20(StackVal, Function_35((bParam1 - 32)));
}

void Function_41(vector3 vParam0) //Position: 0x15FE / 5630
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_42(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_42(var uParam0) //Position: 0x1633 / 5683
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

void Function_43(char* cParam0) //Position: 0x1682 / 5762
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

void Function_44(int iParam0, bool bParam1) //Position: 0x16C2 / 5826
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
		Function_45(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x17B2 / 6066
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x17BF / 6079
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
		Function_47();
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

void Function_47() //Position: 0x18AD / 6317
{
	int iVar0;
	
	Global_41176 = Function_48(StackVal);
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

int Function_48(bool bParam0) //Position: 0x18FB / 6395
{
	if (!Function_49(bParam0))
	{
		return 0;
	}
	return Global_40060[bParam0];
}

bool Function_49(bool bParam0) //Position: 0x1913 / 6419
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1928 / 6440
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
		Function_53();
	}
	if (&bParam5)
	{
		Function_51(1048576);
	}
}

void Function_51(int iParam0) //Position: 0x1A36 / 6710
{
	Function_52(&Global_43580, iParam0);
	return;
}

void Function_52(var uParam0, var uParam1) //Position: 0x1A44 / 6724
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_53() //Position: 0x1A63 / 6755
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_51(16384);
	}
	return;
}

bool Function_54(int[] iParam0) //Position: 0x1A7F / 6783
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

void Function_55(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1AD0 / 6864
{
	if (!Function_49(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

void Function_56(int iParam0) //Position: 0x1B31 / 6961
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_57(int iParam0) //Position: 0x1B44 / 6980
{
	if (Function_66(349) == 0)
	{
		Function_62(53, 2, 760, 0, 770, 2, 2, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 15, 0);
	}
	else
	{
		Function_62(53, 2, 760, 0, 770, 2, 0, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 45, 0);
	}
	Function_61(&Global_27462[5352] + 188, 2, 8.0f, 1, 704);
	Function_60(&Global_27462[5352] + 188, 19,9f, 0,6f);
	Function_59(&Global_27462[5352] + 188, 0.0f, 2);
	Function_58(&Global_27462[5352] + 188, 10.0f);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x1C3C / 7228
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_59(int iParam0, float fParam1, int iParam2) //Position: 0x1C4B / 7243
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_60(int iParam0, float fParam1, int iParam2) //Position: 0x1C63 / 7267
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_61(struct<85> Param0) //Position: 0x1C7B / 7291
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1CA5 / 7333
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_63(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_63(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1CEC / 7404
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
					bVar2 = Function_65(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_64(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_65(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_64(int iParam0, int iParam1) //Position: 0x20AA / 8362
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_65(int iParam0) //Position: 0x20CD / 8397
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_66(int iParam0) //Position: 0x20E4 / 8420
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_67(int iParam0) //Position: 0x2125 / 8485
{
	return Function_68(Global_131807.f_1304, iParam0);
}

int Function_68(var uParam0, int iParam1) //Position: 0x2137 / 8503
{
	return (uParam0 && iParam1) == 0;
}

void Function_69(int iParam0) //Position: 0x2144 / 8516
{
	Function_62(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_61(&Global_27462[1852] + 188, 1, 5.0f, 1, 640);
	Function_58(&Global_27462[1852] + 188, 5.0f);
	Function_60(&Global_27462[552] + 188, 19,9f, 0,7f);
	Function_59(&Global_27462[552] + 188, -4.0f, 2);
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x21D9 / 8665
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_71(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x21F3 / 8691
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
			if (Function_72(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_70(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_82(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_72(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x22AB / 8875
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
		(&iParam1 + 16) = Function_75(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_74(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_73(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_73(int iParam0, struct<2> Param1) //Position: 0x242C / 9260
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_74(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_74(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_74(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_74(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_74(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_74(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_74(vector3 vParam0) //Position: 0x2572 / 9586
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_75(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x258A / 9610
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_37(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

bool Function_76(var uParam0, int iParam1) //Position: 0x26B1 / 9905
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x26CE / 9934
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

void Function_78(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x27B7 / 10167
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

int Function_79(var uParam0) //Position: 0x28A7 / 10407
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

bool Function_80(bool bParam0, bool bParam1) //Position: 0x2A06 / 10758
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_81() //Position: 0x2A27 / 10791
{
	return 0;
}

void Function_82(var uParam0, int iParam1) //Position: 0x2A2E / 10798
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_83() //Position: 0x2A3F / 10815
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_89(&iLocal_10 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_3", 1, 0);
	if (!Function_84(&iLocal_10 + 8))
	{
		return 0;
	}
	iLocal_10 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_10))
	{
		iLocal_10 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&iLocal_10 + 512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint", Vector(-4349,063f, 25,66054f, 2755,295f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint1", Vector(-4314,583f, 5,097f, 3743,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint2", Vector(-3512.0f, 13,42503f, 3144.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint3", Vector(-4013,675f, 21,468f, 2399,785f), Vector(0.0f, 73,49f, 0.0f));
	*(&iLocal_10 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint4", Vector(-3434,18f, 23,592f, 2499,154f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint5", Vector(-4018,102f, 21,094f, 2395,404f), Vector(0.0f, 5,037f, 0.0f));
	*(&iLocal_10 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint6", Vector(-4019,233f, 21,468f, 2398,425f), Vector(0.0f, 215,465f, 0.0f));
	*(&iLocal_10 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtrf_bhint8", Vector(-4016,299f, 21,468f, 2398,219f), Vector(0.0f, 219,242f, 0.0f));
	*(&iLocal_10 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire30", "Campfire02", Vector(-4316.0f, 8,03138f, 3512.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire29", "Campfire03", Vector(-3396f, 33,12941f, 2868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire26", "Campfire01", Vector(-3810,477f, 42,66663f, 3001,018f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire25", "Campfire02", Vector(-3831,993f, 11,16853f, 3182,332f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 600, "MP_ONLY", 1);
	*(&iLocal_10 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire24", "Campfire03", Vector(-4090,07f, 30,11763f, 2754,07f), Vector(0.0f, -15,18934f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "sil_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-4012,576f, 21,031f, 2390,771f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_10 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3554,44f, 15,6855f, 3158,265f), Vector(0.0f, 209,569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 616), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand3", "stand_lookdistance_w_any", Vector(-3552,909f, 15,63719f, 3157,377f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand2", "rand_idle_stand", Vector(-3555,438f, 15,60915f, 3159,332f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3543,762f, 15,3694f, 3162,819f), Vector(0.0f, -210,2364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_10 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3545,373f, 15,49567f, 3162,648f), Vector(0.0f, 34,25905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 624), 0);
	*(&iLocal_10 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3544,541f, 15,49885f, 3161,289f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 632), 0);
	*(&iLocal_10 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_look_distance_binocs2", "look_distance_binocs", Vector(-3545,451f, 15,64982f, 3159,776f), Vector(0.0f, 138,5309f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_tend1", "horse_tend", Vector(-3495,967f, 19,65504f, 3136,116f), Vector(0.0f, -91,20521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3437,098f, 23,592f, 2502,806f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_smoking_stand", "smoking_stand", Vector(-3436,582f, 23,592f, 2501,046f), Vector(0.0f, 128,5334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_sleeping_wall", "sleeping_wall_scripted", Vector(-3447,271f, 23,09f, 2499,005f), Vector(0.0f, -71,2832f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_stand_guntricks1", "stand_guntricks_e_any", Vector(-3437,837f, 23,592f, 2492,929f), Vector(0.0f, -182,7671f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_stand_guntricks2", "stand_guntricks_e_any", Vector(-3437,837f, 23,592f, 2494,971f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-3434,18f, 23,592f, 2495,733f), Vector(0.0f, 102,2661f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_look_distance_b", "look_distance_binocs", Vector(-3404,325f, 23,462f, 2509,804f), Vector(0.0f, -132,933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_look_distance_b1", "look_distance_binocs", Vector(-3428,11f, 24,024f, 2508,341f), Vector(0.0f, -218,5979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_Pee", "Pee", Vector(-3433,225f, 23,594f, 2505,034f), Vector(0.0f, 35,20251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_horse_stay", "horse_stay", Vector(-3429,818f, 23,89949f, 2495,733f), Vector(0.0f, -80,89567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_horse_stay1", "horse_stay", Vector(-3430,55f, 24,05026f, 2493,8f), Vector(0.0f, -80,89567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_horse_stay2", "horse_stay", Vector(-3427,528f, 24,09412f, 2497,654f), Vector(0.0f, -80,89567f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Ham_horse_tend", "horse_tend", Vector(-3431,699f, 24,01186f, 2488,961f), Vector(0.0f, -240,6283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_tend", "horse_tend", Vector(-3499,674f, 16,25382f, 3147,382f), Vector(0.0f, 21,67242f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_stay2", "horse_stay", Vector(-3497,875f, 16,7437f, 3146,125f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_stay1", "horse_stay", Vector(-3496f, 17,07369f, 3146,051f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_horse_stay", "horse_stay", Vector(-3494,914f, 17,262f, 3150,906f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_look_distance_binocs1", "look_distance_binocs", Vector(-3516,268f, 15,515f, 3124,192f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Pee", "Pee", Vector(-3492,114f, 19,66672f, 3136,246f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand1", "rand_idle_stand", Vector(-3520,276f, 11,12099f, 3146,674f), Vector(0.0f, 78,99949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_rand_idle_stand", "rand_idle_stand", Vector(-3509,928f, 13,78963f, 3146,481f), Vector(0.0f, -82,29346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3511,514f, 13,83953f, 3143,129f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", Vector(-3497,143f, 17,32072f, 3150,853f), Vector(0.0f, -105,2133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_lean_rail", "look_distance_binocs", Vector(-3520,693f, 15,672f, 3127,985f), Vector(0.0f, 37,36112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", Vector(-3516,66f, 15,74677f, 3134,089f), Vector(0.0f, 41,5251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_10 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_look_distance_binocs", "look_distance_binocs", Vector(-3503,269f, 15,4507f, 3126,436f), Vector(0.0f, -47,4214f, 0.0f));
	*(&iLocal_10 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3507,42f, 14,41f, 3147,197f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 656), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "sil_rand_idle_stand3", "rand_idle_stand", Vector(-4023,081f, 21,083f, 2397,041f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "sil_rand_idle_stand2", "rand_idle_stand", Vector(-4020,073f, 21,237f, 2393,398f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "sil_rand_idle_stand1", "rand_idle_stand", Vector(-4016,466f, 21,146f, 2392,174f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "sil_rand_idle_stand", "rand_idle_stand", Vector(-4018,865f, 21,126f, 2394,072f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_smoking_stand2", "smoking_stand", Vector(-4012,661f, 21,083f, 2394,79f), Vector(0.0f, -145,0029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "sil_Pee", "Pee", Vector(-4023,667f, 21,581f, 2384,949f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-4030,676f, 20,114f, 2430,51f), Vector(0.0f, -163,9767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-3989,216f, 21,083f, 2403,324f), Vector(0.0f, 196,0233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_stand_lookdistance", "stand_lookdistance_w_any", Vector(-4006,974f, 20,809f, 2415,464f), Vector(0.0f, -163,9767f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Srtch_tand1", "rand_idle_stand", Vector(-4021,151f, 20,963f, 2406,973f), Vector(0.0f, 19,92132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_smoking_stand1", "smoking_stand", Vector(-4023,764f, 21,029f, 2404,943f), Vector(0.0f, -145,0029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_horse_tend1", "horse_tend", Vector(-4008,54f, 21,08242f, 2403,371f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_horse_stay1", "horse_stay", Vector(-4011,225f, 21,08242f, 2403,748f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_horse_stay", "horse_stay", Vector(-4018,831f, 20,98951f, 2406,15f), Vector(0.0f, -343,0331f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_horse_tend", "horse_tend", Vector(-4017,555f, 21,00073f, 2405,466f), Vector(0.0f, -162,3719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_smoking_stand", "smoking_stand", Vector(-4016,168f, 21,46727f, 2403,016f), Vector(0.0f, -145,0029f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_NearWall", "Rand_Idle_NearWall", Vector(-4018,77f, 21,08617f, 2403,276f), Vector(0.0f, -154,2826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_lean_rail", "nlean_rail", Vector(-4022,136f, 21,09104f, 2395,346f), Vector(0.0f, 111,8315f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_look_out_window_L", "look_out_window_L", Vector(-4017,984f, 21,53371f, 2401,449f), Vector(0.0f, -162,0249f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-4018,937f, 21,468f, 2399,804f), Vector(0.0f, 109,2064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Sil_lie_sleep", "lie_sleep_on_bed_l", Vector(-4014,51f, 21,46768f, 2397,119f), Vector(0.0f, 17,92818f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_10 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire23", "Campfire04", Vector(-4057,467f, 20,57743f, 2423,884f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire22", "Campfire05", Vector(-3716f, 22,08629f, 2432.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire21", "Campfire01", Vector(-4153,488f, 29,90032f, 2734,569f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-4344,907f, 25,66f, 2754,942f), Vector(0.0f, 92,61431f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_sleeping_scripted1", "sleeping_scripted", Vector(-4352,348f, 25,73698f, 2756,987f), Vector(0.0f, 152,4998f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_sleeping_scripted", "sleeping_scripted", Vector(-4346,533f, 25,72214f, 2760,332f), Vector(0.0f, 266,5974f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_horse_stay4", "horse_stay", Vector(-4327,33f, 22,86164f, 2739,777f), Vector(0.0f, 359,664f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-4323,297f, 25,25694f, 2767,16f), Vector(0.0f, 164,4313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_horse_stay3", "horse_stay", Vector(-4332,893f, 23,56775f, 2744,058f), Vector(0.0f, 220,287f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_horse_stay1", "horse_stay", Vector(-4334,617f, 23,76846f, 2744,07f), Vector(0.0f, 214,233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "scrg_smoking_stand", "smoking_stand", Vector(-4315,55f, 5,001161f, 3736,073f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "scrg_horse_stay", "horse_stay", Vector(-4304,485f, 5,33743f, 3740,595f), Vector(0.0f, 91,16744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "scrg_horse_stay1", "horse_stay", Vector(-4304,792f, 5,033688f, 3742,499f), Vector(0.0f, 93,17829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "scrg_horse_stay2", "horse_stay", Vector(-4304,333f, 4,743784f, 3753,198f), Vector(0.0f, 58,93742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "scrg_horse_stay3", "horse_stay", Vector(-4305,479f, 4,682098f, 3754,989f), Vector(0.0f, 44,86414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_10 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "scrg_horse_stay4", "horse_stay", Vector(-4307,521f, 4,700052f, 3756,242f), Vector(0.0f, 28,09162f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_10 + 688), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Srtch_tand", "rand_idle_stand", Vector(-4313,591f, 5,043624f, 3731,379f), Vector(0.0f, 19,92132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Srtch_stand_lookdistance", "stand_lookdistance_w_any", Vector(-4313,458f, 4,998623f, 3757,347f), Vector(0.0f, -159,4057f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "nSrtch_Pee", "Pee", Vector(-4302,91f, 4,6f, 3746,519f), Vector(0.0f, -60,70978f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Srtch_horse_tend", "horse_tend", Vector(-4291,733f, 4,015f, 3725,523f), Vector(0.0f, -30,20316f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Srtch_leantalking", "lean_fence_H_talking", Vector(-4319,066f, 4,969989f, 3738,232f), Vector(0.0f, -87,61311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Srtch_stand_guntrick", "stand_guntricks_e_any", Vector(-4312,03f, 5,001168f, 3748,336f), Vector(0.0f, -164,7508f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_stand_guntricks", "stand_guntricks_e_any", Vector(-4346,817f, 25,65767f, 2757,716f), Vector(0.0f, -197,8129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_look_distance_2", "look_distance_binocs", Vector(-4292.0f, 26,16155f, 2740f), Vector(0.0f, -55,24271f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_look_distance_1", "look_distance_binocs", Vector(-4312,805f, 26,48f, 2781,945f), Vector(0.0f, -163,8071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_horse_stay", "horse_stay", Vector(-4348,085f, 25,66132f, 2751,858f), Vector(0.0f, -58,94202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_horse_tend", "horse_tend", Vector(-4348,798f, 25,73481f, 2750,844f), Vector(0.0f, 126,0001f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_Pee", "Pee", Vector(-4324,907f, 23,21055f, 2741,697f), Vector(0.0f, -67,74636f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_stand_rowdydrink", "stand_dnd_rowdydrink", Vector(-4345,435f, 25,648f, 2762,341f), Vector(0.0f, 52,18678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_smoking_stand1", "smoking_stand", Vector(-4345,533f, 25,66132f, 2752,487f), Vector(0.0f, -30,65489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-4351,443f, 25,66132f, 2760,146f), Vector(0.0f, -48,31028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_look_distance_binocs", "look_distance_binocs", Vector(-4340,744f, 27,61138f, 2753,304f), Vector(0.0f, -57,35819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_campfire_talk", "campfire_talk", Vector(-4348,996f, 25,66f, 2757,668f), Vector(0.0f, -21,34858f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Cuev_smoking_stand", "smoking_stand", Vector(-4345,924f, 25,656f, 2759,327f), Vector(0.0f, 81,03186f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_10 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire20", "Campfire02", Vector(-4276.0f, 12,047f, 2900f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire19", "Campfire04", Vector(-4328.0f, 32,17341f, 3064f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire18", "Campfire05", Vector(-4536.0f, 30,091f, 3016f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire16", "Campfire02", Vector(-4260.0f, 7,027458f, 3572.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 720, "MP_ONLY", 1);
	*(&iLocal_10 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire15", "Campfire03", Vector(-4255,67f, 3,01177f, 3761,939f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire14", "Campfire04", Vector(-4504.0f, 3,150441f, 3736f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 736, "MP_ONLY", 1);
	*(&iLocal_10 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire13", "Campfire05", Vector(-4560,422f, 29,20336f, 3058,014f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire12", "Campfire01", Vector(-4489,798f, 32,71708f, 3066,173f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 752, "MP_ONLY", 1);
	*(&iLocal_10 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire11", "Campfire02", Vector(-4430,458f, 25,59995f, 2953,446f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire9", "Campfire05", Vector(-4424.0f, 7,027458f, 3428.0f), Vector(0.0f, 20,57529f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 768, "MP_ONLY", 1);
	*(&iLocal_10 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire8", "Campfire01", Vector(-3896f, 29,11374f, 2468.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire7", "Campfire02", Vector(-4020f, 21,08232f, 2576.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 784, "MP_ONLY", 1);
	*(&iLocal_10 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire6", "Campfire03", Vector(-4188.0f, 16,56464f, 2912f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire5", "Campfire04", Vector(-3968.0f, 9,035286f, 3240f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 800, "MP_ONLY", 1);
	*(&iLocal_10 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire3", "Campfire03", Vector(-3748f, 38,65096f, 2896f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 808, "MP_ONLY", 1);
	*(&iLocal_10 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire2", "Campfire04", Vector(-3804f, 40,65882f, 2796f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "gtr_CampFire1", "Campfire05", Vector(-3857,285f, 44,73392f, 2706,642f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 824, "MP_ONLY", 1);
	*(&iLocal_10 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "silg_treasure_scrap", "Locked_Footlocker", Vector(-4016,413f, 21,46768f, 2396,955f), Vector(0.0f, 109,0013f, 0.0f));
	DECOR_SET_BOOL(&iLocal_10 + 832, "scrap", 1);
	*(&iLocal_10 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage", "Player_Herb_DesertSage", Vector(-3952.0f, 9,047268f, 3836f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", Vector(-4072.0f, 7,008393f, 3804,831f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-4036.0f, 8,031368f, 3740f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-3884.0f, 9,035286f, 3588f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-3708.0f, 20,00255f, 3722,527f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-3774,253f, 17,56825f, 3780.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-3709,885f, 23,09019f, 3576.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-3604f, 33,12941f, 3410,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-3534,479f, 34,13447f, 3535,625f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", Vector(-3564f, 35,14058f, 3470,161f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", Vector(-3658,068f, 16,06274f, 3401,932f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", Vector(-3489,141f, 36,14825f, 3432,11f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", Vector(-3481,672f, 36,44746f, 3318,328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", Vector(-3397,868f, 38,14902f, 3376f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", Vector(-3532f, 38,14902f, 3486,979f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", Vector(-3314,075f, 44,86954f, 3468f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", Vector(-3246,021f, 49,19217f, 3461,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", Vector(-3172,93f, 40,41358f, 3368,436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", Vector(-4268.0f, 3,129975f, 3764.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", Vector(-4255,395f, 4,015678f, 3666,991f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", Vector(-4400.0f, 7,02992f, 3546,233f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", Vector(-4235,268f, 6,018927f, 3604,036f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", Vector(-4100.0f, 8,031364f, 3652.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", Vector(-4007,208f, 9,035286f, 3678,818f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", Vector(-3975,274f, 9,035286f, 3607,208f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", Vector(-4076.0f, 8,031368f, 3505,56f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", Vector(-4256.0f, 12,04707f, 3472.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", Vector(-4404.0f, 7,027458f, 3476.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", Vector(-4471,791f, 6,023648f, 3568,106f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage30", "Player_Herb_DesertSage", Vector(-4764.0f, 3,011771f, 3825,594f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage31", "Player_Herb_DesertSage", Vector(-4809,424f, 3,011765f, 3524,559f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage32", "Player_Herb_DesertSage", Vector(-4908.0f, 3,994267f, 3520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage33", "Player_Herb_DesertSage", Vector(-4516.0f, 11,04314f, 3336.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage34", "Player_Herb_DesertSage", Vector(-4269,605f, 7,027458f, 3334,644f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage35", "Player_Herb_DesertSage", Vector(-4164.0f, 9,035301f, 3396.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage36", "Player_Herb_DesertSage", Vector(-4292,033f, 7,027458f, 3386,503f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage37", "Player_Herb_DesertSage", Vector(-4226,439f, 7,027458f, 3298,602f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage38", "Player_Herb_DesertSage", Vector(-4437,59f, 8,505199f, 3274,462f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage39", "Player_Herb_DesertSage", Vector(-4491,802f, 9,035066f, 3220,199f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage40", "Player_Herb_DesertSage", Vector(-4556,113f, 16,06275f, 3168.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage41", "Player_Herb_DesertSage", Vector(-4565,822f, 29,76156f, 3043,362f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage42", "Player_Herb_DesertSage", Vector(-4420,134f, 34,06581f, 3067,813f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage43", "Player_Herb_DesertSage", Vector(-4294,341f, 36,14112f, 3008f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage44", "Player_Herb_DesertSage", Vector(-4414,286f, 25,59914f, 2990,792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage45", "Player_Herb_DesertSage", Vector(-4403,191f, 22,08621f, 2910,951f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage46", "Player_Herb_DesertSage", Vector(-4382,816f, 22,0862f, 2910,604f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage47", "Player_Herb_DesertSage", Vector(-4060.0f, 8,031368f, 3264f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage48", "Player_Herb_DesertSage", Vector(-4100.0f, 11,04314f, 3196.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage49", "Player_Herb_DesertSage", Vector(-3948.0f, 14,38007f, 3142,053f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage50", "Player_Herb_DesertSage", Vector(-4090,483f, 32,12549f, 3059,999f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage51", "Player_Herb_DesertSage", Vector(-3848f, 43,16864f, 3012f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage52", "Player_Herb_DesertSage", Vector(-3713,901f, 39,15966f, 3045,659f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage53", "Player_Herb_DesertSage", Vector(-3778,651f, 38,40936f, 3011,134f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage54", "Player_Herb_DesertSage", Vector(-3771,132f, 24,91142f, 2916,551f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage55", "Player_Herb_DesertSage", Vector(-3741,274f, 39,65488f, 2852f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage56", "Player_Herb_DesertSage", Vector(-3850,146f, 41,66276f, 2818,583f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage57", "Player_Herb_DesertSage", Vector(-3787,081f, 39,6091f, 2748f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage58", "Player_Herb_DesertSage", Vector(-3745,765f, 44,04614f, 2675,957f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage59", "Player_Herb_DesertSage", Vector(-3684,408f, 45,17479f, 2734,258f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage60", "Player_Herb_DesertSage", Vector(-3724f, 41,16078f, 2767,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage61", "Player_Herb_DesertSage", Vector(-3596,568f, 35,13754f, 2868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage62", "Player_Herb_DesertSage", Vector(-3621,026f, 38,65096f, 2758,974f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage63", "Player_Herb_DesertSage", Vector(-3596,868f, 19,57643f, 2628,868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage64", "Player_Herb_DesertSage", Vector(-3676f, 27,81974f, 2608.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage65", "Player_Herb_DesertSage", Vector(-3849,412f, 27,1059f, 2548.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage66", "Player_Herb_DesertSage", Vector(-3937,188f, 29,12008f, 2589,45f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage67", "Player_Herb_DesertSage", Vector(-4042,042f, 19,07454f, 2513,958f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage68", "Player_Herb_DesertSage", Vector(-3810,401f, 21,08241f, 2482,219f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage69", "Player_Herb_DesertSage", Vector(-3780f, 21,58438f, 2388.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage70", "Player_Herb_DesertSage", Vector(-3773,926f, 26,10201f, 2308.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage71", "Player_Herb_DesertSage", Vector(-3637,146f, 32,62749f, 2284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage72", "Player_Herb_DesertSage", Vector(-3688f, 28,61178f, 2309,697f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage73", "Player_Herb_DesertSage", Vector(-4080f, 27,60781f, 2572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage74", "Player_Herb_DesertSage", Vector(-4138,697f, 24,59602f, 2632f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage75", "Player_Herb_DesertSage", Vector(-4172,763f, 25,54855f, 2642,833f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage76", "Player_Herb_DesertSage", Vector(-4162,929f, 29,45779f, 2711,155f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage77", "Player_Herb_DesertSage", Vector(-3988,466f, 22,60344f, 2719,299f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage78", "Player_Herb_DesertSage", Vector(-4069,154f, 29,094f, 2756.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage79", "Player_Herb_DesertSage", Vector(-4200.0f, 15,52993f, 2867,578f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage80", "Player_Herb_DesertSage", Vector(-4187,933f, 18,57248f, 3024f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage81", "Player_Herb_DesertSage", Vector(-4176.0f, 7,027458f, 3252,478f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage82", "Player_Herb_DesertSage", Vector(-4512.0f, 10,9085f, 3268f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage83", "Player_Herb_DesertSage", Vector(-4308.0f, 30,76601f, 3056f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage84", "Player_Herb_DesertSage", Vector(-4650,549f, 41,28893f, 3426,549f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage85", "Player_Herb_DesertSage", Vector(-4288.0f, 6,023537f, 3584.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage86", "Player_Herb_DesertSage", Vector(-4064.0f, 8,031368f, 3436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage87", "Player_Herb_DesertSage", Vector(-4128.0f, 7,027458f, 3297,254f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage88", "Player_Herb_DesertSage", Vector(-3880.0f, 11,77989f, 3804f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage90", "Player_Herb_DesertSage", Vector(-4522,118f, 3,104359f, 3733,303f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage91", "Player_Herb_DesertSage", Vector(-4269,966f, 5,025835f, 3629,378f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage92", "Player_Herb_DesertSage", Vector(-3568,036f, 35,13725f, 3505,278f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage93", "Player_Herb_DesertSage", Vector(-4092f, 34,69775f, 2891,08f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage94", "Player_Herb_DesertSage", Vector(-3856f, 40,15688f, 2912,489f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage95", "Player_Herb_DesertSage", Vector(-3432f, 10,54121f, 3020f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage96", "Player_Herb_DesertSage", Vector(-4351,688f, 31,55952f, 2960f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage98", "Player_Herb_DesertSage", Vector(-3636,967f, 24,09412f, 3748f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage99", "Player_Herb_DesertSage", Vector(-3712,517f, 27,10588f, 3876f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_DesertSage100", "Player_Herb_DesertSage", Vector(-3745,852f, 23,04988f, 4014,149f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage", "Player_Herb_RedSage", Vector(-3932.0f, 11,12991f, 3866,598f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage1", "Player_Herb_RedSage", Vector(-4108.0f, 7,027443f, 3752.0f), Vector(0.0f, -47,3344f, 0.0f));
	*(&iLocal_10 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage2", "Player_Herb_RedSage", Vector(-3823,903f, 8,950692f, 3773,063f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage4", "Player_Herb_RedSage", Vector(-3873,778f, 10,04307f, 3564,585f), Vector(0.0f, 231,0161f, 0.0f));
	*(&iLocal_10 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage5", "Player_Herb_RedSage", Vector(-3708.0f, 8,031372f, 3533,32f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage6", "Player_Herb_RedSage", Vector(-3753,52f, 8,031372f, 3378,48f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage7", "Player_Herb_RedSage", Vector(-3808.0f, 8,031368f, 3488,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage8", "Player_Herb_RedSage", Vector(-3836.0f, 8,031364f, 3339,555f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage9", "Player_Herb_RedSage", Vector(-3682,142f, 16,06274f, 3372,312f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage10", "Player_Herb_RedSage", Vector(-3716.0f, 8,031372f, 3392f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage11", "Player_Herb_RedSage", Vector(-3836.0f, 8,031372f, 3328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage12", "Player_Herb_RedSage", Vector(-3920.0f, 9,242051f, 3296,819f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage13", "Player_Herb_RedSage", Vector(-4012f, 8,031368f, 3328f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_RedSage14", "Player_Herb_RedSage", Vector(-4088.0f, 9,030048f, 3476f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-3628f, 38,65094f, 2724.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-3632,644f, 22,96937f, 2600f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-3728f, 20,58045f, 2544.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-3869,212f, 42,72093f, 2827,31f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", Vector(-3585,45f, 35,19801f, 2884f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-3601,879f, 44,77793f, 2964f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", Vector(-3680f, 11,04314f, 3128f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", Vector(-3628,368f, 13,02255f, 3189,57f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", Vector(-3816,532f, 15,06214f, 3152.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", Vector(-4069,874f, 33,22112f, 3111,949f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", Vector(-4076,621f, 33,12941f, 3030,53f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", Vector(-4136,493f, 18,17956f, 3042,862f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", Vector(-4019,553f, 25,34963f, 2737,871f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", Vector(-3732.0f, 39,15295f, 2884.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", Vector(-4058,721f, 8,031364f, 3232.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_10 + 1856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "treasure_hunting_3", "treasure_hunting_3", Vector(-4091,036f, 33,90623f, 2932,154f), Vector(0.0f, -25,38655f, 0.0f));
	*(&iLocal_10 + 1864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Locked_Footlocker", "Locked_Footlocker", Vector(-4316,186f, 5,10062f, 3745,366f), Vector(0.0f, -28,64388f, 0.0f));
	*(&iLocal_10 + 1872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_10, "Locked_Footlocker1", "Locked_Footlocker", Vector(-4350,417f, 25,66132f, 2761,992f), Vector(0.0f, -56,73796f, 0.0f));
	return 1;
}

bool Function_84(struct<2>[] Param0) //Position: 0x82BE / 33470
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

void Function_85() //Position: 0x8680 / 34432
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

bool Function_86() //Position: 0x86C0 / 34496
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

void Function_87(struct<13> Param0) //Position: 0x86EE / 34542
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_88() //Position: 0x8701 / 34561
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

var Function_89(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x8743 / 34627
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

var Function_90(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x8781 / 34689
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

void Function_91(int iParam0, int iParam1) //Position: 0x8850 / 34896
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

bool Function_92() //Position: 0x889A / 34970
{
	var uVar0;
	
	Function_91(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&iLocal_0 + 8) = Vector(-3899,251f, 30,91323f, 2935,108f);
	*(&iLocal_0 + 8 + 12) = Vector(0.0f, 129,2136f, 0.0f);
	*(&iLocal_0 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "gtrf_two_crows", Vector(-3899,251f, 30,91323f, 2935,108f), Vector(0.0f, 129,2136f, 0.0f));
	return 1;
}

void Function_93(char* cParam0) //Position: 0x8948 / 35144
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

void Function_94(int iParam0) //Position: 0x8985 / 35205
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

