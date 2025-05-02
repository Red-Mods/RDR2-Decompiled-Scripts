//Decompiled with MagicRDR v1.0
//Function Count : 111
//Statics Count : 615
//Natives Count : 147
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 30;
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
	int iLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 1;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 7;
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
	var uLocal_379 = 6;
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
	var uLocal_395 = 13;
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
	var uLocal_427 = 15;
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
	var uLocal_605 = 1;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_110(&cVar0, 3);
	Function_109();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_0 = 1;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000001:
				if (Function_107())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_98())
				{
					Function_97();
					Function_96(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_93())
				{
					Function_96(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_92(&uLocal_3);
				Function_90(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_89())
				{
					Function_81();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_80(iScriptParam_0);
				Function_79();
				Function_96(&(Global_43791[iScriptParam_0]), 8);
				if (Function_78(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_77(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_76(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_75(iScriptParam_0))
				{
					Function_69(iScriptParam_0);
					Function_68(64);
				}
				Function_96(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_75(iScriptParam_0))
				{
					Function_66(Function_67(), iScriptParam_0);
				}
				Function_65(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_64(&cVar0, 5.0f);
				Function_96(&(Global_43791[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_75(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_24(&uLocal_3, &uLocal_605, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_78(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(bLocal_1);
	}
	Function_22();
	Function_16();
	Function_8(&uLocal_3, &uLocal_605);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_68(64);
	Function_77(&(Global_43791[iScriptParam_0]), 32);
	Function_77(&(Global_43791[iScriptParam_0]), 64);
	Function_77(&(Global_43791[iScriptParam_0]), 512);
	Function_77(&(Global_43791[iScriptParam_0]), 16);
	Function_77(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_64(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	return;
}

void Function_2(int iParam0) //Position: 0x2EC / 748
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x322 / 802
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x344 / 836
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35A / 858
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x370 / 880
{
	Function_7();
	return;
}

void Function_7() //Position: 0x379 / 889
{
	RELEASE_LAYOUT_REF(&iLocal_353);
	return;
}

void Function_8(var uParam0, vector3[] vParam1) //Position: 0x386 / 902
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_15(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_14(&(vParam1[iVar03]), 4);
		}
		if (Function_15(&(vParam1[iVar03]), 8))
		{
			Function_9(0, 0, 30);
			Function_14(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_9(bool bParam0, int iParam1, int iParam2) //Position: 0x3E3 / 995
{
	bool bVar0;
	
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, &iParam1, &iParam2);
		Function_10(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_10(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4CD / 1229
{
	int iVar0;
	
	Function_13(bParam0);
	Function_12(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_11();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
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

void Function_11() //Position: 0x64C / 1612
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_12(int iParam0) //Position: 0x658 / 1624
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

void Function_13(int iParam0) //Position: 0x6A2 / 1698
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

void Function_14(struct<17> Param0) //Position: 0x6E8 / 1768
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_15(struct<17> Param0) //Position: 0x705 / 1797
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x723 / 1827
{
	Function_17();
	return;
}

void Function_17() //Position: 0x72C / 1836
{
	Function_18(&iLocal_17 + 8);
	RELEASE_LAYOUT_REF(&iLocal_17);
	return;
}

void Function_18(int iParam0) //Position: 0x73F / 1855
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_19(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_19(struct<2>[] Param0, int iParam1) //Position: 0x767 / 1895
{
	if (Function_21(&(Param0[iParam12]), 4))
	{
		if (Function_21(&(Param0[iParam12]), 1))
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
			Function_20(&(Param0[iParam12]), 1);
			Function_20(&(Param0[iParam12]), 2);
			Function_20(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_20(struct<13> Param0) //Position: 0x8B2 / 2226
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_21(struct<13> Param0) //Position: 0x8CF / 2255
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8ED / 2285
{
	Function_23();
	return;
}

void Function_23() //Position: 0x8F6 / 2294
{
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_24(vector3 vParam0) //Position: 0x902 / 2306
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_61(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_25(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_25(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x98C / 2444
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(&vParam0))
	{
		return 0;
	}
	Function_77(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_58(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_57(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_9(0, 0, 0);
						}
						else
						{
							Function_9(0, 0, 30);
						}
						Function_14(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_57(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_14(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_56(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_55(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 16))
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
								Function_57(&vParam0, 16);
								Function_47(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 16))
					{
						Function_14(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_15(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_57(&vParam0, 2);
			}
			else
			{
				Function_14(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_78(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_15(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_46(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_57(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_45(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_26(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_26(int iParam0) //Position: 0xDE4 / 3556
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_78(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_96(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_31(473, 1, 0, 0);
		iVar0 = Function_30(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_31(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_31(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_31(476, 1, 0, 0);
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
		Function_29(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_29(7, 30);
	}
	if (Function_28(473) <= Function_27(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_27(int iParam0) //Position: 0xED5 / 3797
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_28(int iParam0) //Position: 0xF12 / 3858
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, int iParam1) //Position: 0xF4B / 3915
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

var Function_30(int iParam0) //Position: 0xFB5 / 4021
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x100D / 4109
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
	Function_44(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_32(iParam0);
	return 1;
}

void Function_32(bool bParam0) //Position: 0x1235 / 4661
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x12D3 / 4819
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_27(390))), 32);
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
					bVar19 = (Function_28(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_28(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_38(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_34(), &Var9);
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

var Function_34() //Position: 0x1911 / 6417
{
	int iVar0;
	
	return &iVar0;
}

var Function_35(int iParam0) //Position: 0x191A / 6426
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x192B / 6443
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0) //Position: 0x1A22 / 6690
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A3D / 6717
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1AA4 / 6820
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1AB6 / 6838
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AC8 / 6856
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x1BFC / 7164
{
	return Global_55480[iParam016].f_96;
}

void Function_43(int iParam0) //Position: 0x1C0B / 7179
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x1DA5 / 7589
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

void Function_45(var uParam0, int iParam1) //Position: 0x1FE9 / 8169
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(int iParam0, var uParam1, int iParam2) //Position: 0x1FF6 / 8182
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_47(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2020 / 8224
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_54(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_53(iParam1))
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
	if (!Function_50(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_48();
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

void Function_48() //Position: 0x22D3 / 8915
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_49(&uVar0, &uVar1);
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

void Function_49(var uParam0, int iParam1) //Position: 0x2346 / 9030
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

bool Function_50(bool bParam0) //Position: 0x237C / 9084
{
	if (Function_55(256))
	{
		return 0;
	}
	if (Function_55(262144))
	{
		return 0;
	}
	if (Function_52())
	{
		return 0;
	}
	if (!Function_55(1))
	{
		return 0;
	}
	if (!Function_55(4096))
	{
		return 0;
	}
	if (bParam0 && Function_51(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_55(2048))
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

int Function_51(int iParam0) //Position: 0x23F2 / 9202
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_52() //Position: 0x2403 / 9219
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

bool Function_53(int iParam0) //Position: 0x241C / 9244
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x2432 / 9266
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2447 / 9287
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2465 / 9317
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

void Function_57(struct<17> Param0) //Position: 0x2514 / 9492
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2527 / 9511
{
	int iVar0;
	bool bVar1;
	
	Function_13(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_59(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_10(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x25A1 / 9633
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_13(iParam0);
	Function_12(&uVar0);
	PRINTNL();
	Function_10(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x25CA / 9674
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

bool Function_61(int iParam0) //Position: 0x25EA / 9706
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2606 / 9734
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(int iParam0) //Position: 0x261B / 9755
{
	iParam0 = iParam0;
	return;
}

void Function_64(char* cParam0) //Position: 0x2625 / 9765
{
	if (!Function_61(128))
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

void Function_65(int iParam0) //Position: 0x2665 / 9829
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_46736[0] || iParam0 != Global_46736[1]) || iParam0 != Global_46736[2]) || iParam0 != Global_46736[3])
	{
		Global_43787 = 0;
	}
	else if ((iParam0 != Global_46746[0] || iParam0 != Global_46746[2]) || iParam0 != Global_46746[1])
	{
		Global_43787 = 1;
	}
	else if (iParam0 != Global_46754[1] || iParam0 != Global_46754[0])
	{
		Global_43787 = 2;
	}
	return;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x26F7 / 9975
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

var Function_67() //Position: 0x27E7 / 10215
{
	return &iLocal_7;
}

void Function_68(int iParam0) //Position: 0x27F0 / 10224
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_69(bool bParam0) //Position: 0x2803 / 10243
{
	Function_70(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_74(&Global_46838));
	return;
}

void Function_70(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x2827 / 10279
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
	(&Global_43580 + 24) = &uParam3;
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
		Function_73();
	}
	if (&bParam5)
	{
		Function_71(1048576);
	}
}

void Function_71(int iParam0) //Position: 0x2935 / 10549
{
	Function_72(&Global_43580, iParam0);
	return;
}

void Function_72(var uParam0, var uParam1) //Position: 0x2943 / 10563
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_73() //Position: 0x2962 / 10594
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_71(16384);
	}
	return;
}

bool Function_74(int[] iParam0) //Position: 0x297E / 10622
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_5(iParam0[iVar0]))
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

bool Function_75(int iParam0) //Position: 0x29CF / 10703
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_46736[0])
	{
		return Function_74(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_74(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_74(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_74(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_74(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_74(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_74(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_74(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_74(&Global_46914);
	}
	return 0;
}

void Function_76(int iParam0) //Position: 0x2AAC / 10924
{
	iParam0 = iParam0;
	return;
}

void Function_77(var uParam0, int iParam1) //Position: 0x2AB6 / 10934
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_78(int iParam0, int iParam1) //Position: 0x2AD0 / 10960
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_79() //Position: 0x2AED / 10989
{
	return;
}

void Function_80(var uParam0) //Position: 0x2AF3 / 10995
{
	uParam0 = uParam0;
	return;
}

void Function_81() //Position: 0x2AFD / 11005
{
	Function_82(Global_46736[3]);
	Global_43787 = 0;
	return;
}

void Function_82(int iParam0) //Position: 0x2B10 / 11024
{
	int iVar0;
	
	iVar0 = Function_84(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_83(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_83(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_83(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_83(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_83(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_83(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_83(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_83(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_83(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x2D51 / 11601
{
	return (uParam0 && iParam1) == 0;
}

int Function_84(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2D5E / 11614
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_88(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_85(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_85(bParam0, bParam1, bParam2, 4294967295);
}

int Function_85(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2DBC / 11708
{
	var uVar0;
	
	if (!Function_87(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_88(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_86(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_86(int iParam0) //Position: 0x2F20 / 12064
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_87(int iParam0) //Position: 0x2F5E / 12126
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_88(int iParam0, int iParam1, bool bParam2) //Position: 0x2F73 / 12147
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_89() //Position: 0x2F93 / 12179
{
	return 1;
}

void Function_90(bool bParam0) //Position: 0x2F9A / 12186
{
	Function_91(&uLocal_3, &uLocal_605, 2, &Global_44085[bParam09] + 8, 4294967295, 0);
	return;
}

void Function_91(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2FB5 / 12213
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
	uParam4 = uParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &uParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_92(struct<5> Param0) //Position: 0x30A2 / 12450
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_93() //Position: 0x30B3 / 12467
{
	return Function_94();
}

int Function_94() //Position: 0x30BC / 12476
{
	var uVar0;
	
	Function_95(3, 3);
	uVar0 = &uVar0;
	iLocal_353 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_353))
	{
		iLocal_353 = CREATE_LAYOUT("RioBravo_layout");
	}
	*(&iLocal_353 + 24) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_353, "riov_flk_BIRD_set");
	*(&iLocal_353 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "birds", 2,802597E-45f, Vector(-2936,324f, 50,52718f, 3478,539f), Vector(0.0f, 0.0f, 0.0f), Vector(2009,946f, 220,2406f, 1271,405f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 24, &iLocal_353 + 8[0]);
	*(&iLocal_353 + 96) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_353, "riov_flk_SOUTH_set");
	*(&iLocal_353 + 32[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs1", 4,203895E-45f, Vector(-3743,686f, 16,8916f, 3916,521f), Vector(0.0f, 20.0f, 0.0f), Vector(105,5447f, 154,5452f, 127,4068f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[0]);
	*(&iLocal_353 + 32[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs2", 4,203895E-45f, Vector(-3506,154f, 30,11765f, 3982,611f), Vector(0.0f, 20.0f, 0.0f), Vector(142,0115f, 121,3969f, 90,83942f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[1]);
	*(&iLocal_353 + 32[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs3", 4,203895E-45f, Vector(-3362,548f, 57,9931f, 3815,707f), Vector(0.0f, 20.0f, 0.0f), Vector(101,16f, 155,6165f, 93,06902f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[2]);
	*(&iLocal_353 + 32[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs4", 4,203895E-45f, Vector(-3133,079f, 44,66625f, 3831,112f), Vector(0.0f, 10,86343f, 0.0f), Vector(139,1676f, 133,4854f, 41,1269f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[3]);
	*(&iLocal_353 + 32[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs5", 4,203895E-45f, Vector(-2952,329f, 37,14508f, 3688,871f), Vector(0.0f, 20.0f, 0.0f), Vector(118,3164f, 118,3164f, 118,3164f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[4]);
	*(&iLocal_353 + 32[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs6", 4,203895E-45f, Vector(-2762,144f, 29,45689f, 3700,321f), Vector(0.0f, 2,40104f, 0.0f), Vector(69,76539f, 141,8443f, 55,03979f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[5]);
	*(&iLocal_353 + 32[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_wolfs7", 4,203895E-45f, Vector(-2506,896f, 15,99935f, 3744,206f), Vector(0.0f, -11,53117f, 0.0f), Vector(185,0573f, 90,62341f, 67,17472f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 96, &iLocal_353 + 32[6]);
	*(&iLocal_353 + 160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_353, "riov_flk_NORTH_set");
	*(&iLocal_353 + 104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_coyote1", 4,203895E-45f, Vector(-2543,914f, 28,1098f, 3241,62f), Vector(0.0f, 20.0f, 0.0f), Vector(167,0734f, 167,0734f, 119,6312f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 160, &iLocal_353 + 104[0]);
	*(&iLocal_353 + 104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_coyote2", 4,203895E-45f, Vector(-2835,932f, 43,16861f, 3294,67f), Vector(0.0f, 20.0f, 0.0f), Vector(141,1532f, 167,0734f, 75,033f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 160, &iLocal_353 + 104[1]);
	*(&iLocal_353 + 104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_coyote3", 4,203895E-45f, Vector(-3068,626f, 38,24369f, 3231,372f), Vector(0.0f, 4,810986f, 0.0f), Vector(125,0495f, 167,0734f, 94,41615f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 160, &iLocal_353 + 104[2]);
	*(&iLocal_353 + 104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_coyote4", 4,203895E-45f, Vector(-3350,161f, 36,14117f, 3274,167f), Vector(0.0f, 20.0f, 0.0f), Vector(150,0992f, 167,0734f, 136,9624f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 160, &iLocal_353 + 104[3]);
	*(&iLocal_353 + 104[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_coyote5", 4,203895E-45f, Vector(-3649,194f, 26,09475f, 3335,014f), Vector(0.0f, 20.0f, 0.0f), Vector(143,9794f, 167,0734f, 141,4556f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 160, &iLocal_353 + 104[4]);
	*(&iLocal_353 + 104[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_coyote7", 4,203895E-45f, Vector(-3762,593f, 9,663376f, 3614,673f), Vector(0.0f, 20.0f, 0.0f), Vector(116,0434f, 167,0734f, 142,3679f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 160, &iLocal_353 + 104[5]);
	*(&iLocal_353 + 280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_353, "riov_flk_CENTER_set");
	*(&iLocal_353 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar14", 4,203895E-45f, Vector(-2187,696f, 64,25098f, 3575,605f), Vector(0.0f, 20.0f, 0.0f), Vector(27,86323f, 157,1503f, 42,22984f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[0]);
	*(&iLocal_353 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar13", 4,203895E-45f, Vector(-2320,311f, 70,27448f, 3561,265f), Vector(0.0f, 20.0f, 0.0f), Vector(95,70407f, 144,6171f, 97,58847f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[1]);
	*(&iLocal_353 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar12", 4,203895E-45f, Vector(-2480,455f, 82,55096f, 3444,212f), Vector(0.0f, 20.0f, 0.0f), Vector(122,6014f, 122,6014f, 91,0615f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[2]);
	*(&iLocal_353 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar11", 4,203895E-45f, Vector(-2485,426f, 64,84901f, 3595,959f), Vector(0.0f, 20.0f, 0.0f), Vector(73,32108f, 113,1796f, 56,82574f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[3]);
	*(&iLocal_353 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar10", 4,203895E-45f, Vector(-2701,399f, 49,12183f, 3584,517f), Vector(0.0f, 8,018439f, 0.0f), Vector(155,7843f, 116,0861f, 55,75488f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[4]);
	*(&iLocal_353 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar9", 4,203895E-45f, Vector(-2851,949f, 60,09787f, 3466,981f), Vector(0.0f, 20.0f, 0.0f), Vector(93,83244f, 99,31574f, 91,00473f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[5]);
	*(&iLocal_353 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar8", 4,203895E-45f, Vector(-3028,939f, 50,63153f, 3528,086f), Vector(0.0f, 20.0f, 0.0f), Vector(91,15942f, 100,0843f, 57,18759f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[6]);
	*(&iLocal_353 + 168[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar7", 4,203895E-45f, Vector(-3175,788f, 40,15686f, 3598,743f), Vector(1,624279f, 44,85572f, 0,887722f), Vector(76,40627f, 125,5066f, 97,42728f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[7]);
	*(&iLocal_353 + 168[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar6", 4,203895E-45f, Vector(-3370,746f, 26,10194f, 3588,201f), Vector(0.0f, 20.0f, 0.0f), Vector(97,32235f, 97,32235f, 97,32235f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[8]);
	*(&iLocal_353 + 168[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar5", 4,203895E-45f, Vector(-3542,015f, 29,66954f, 3709,699f), Vector(0.0f, 20.0f, 0.0f), Vector(104,6366f, 184,9402f, 129,9607f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[9]);
	*(&iLocal_353 + 168[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar4", 4,203895E-45f, Vector(-3531,635f, 38,14902f, 3508,3f), Vector(0.0f, 20.0f, 0.0f), Vector(96,00407f, 101,9702f, 67,79285f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[10]);
	*(&iLocal_353 + 168[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar3", 4,203895E-45f, Vector(-3246,255f, 44,17255f, 3452,389f), Vector(0.0f, 20.0f, 0.0f), Vector(81,35522f, 104,0305f, 68,30022f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[11]);
	*(&iLocal_353 + 168[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_cougar2", 4,203895E-45f, Vector(-3068,657f, 60,23529f, 3405,431f), Vector(0.0f, 20.0f, 0.0f), Vector(98,48691f, 98,48691f, 71,01986f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 280, &iLocal_353 + 168[12]);
	*(&iLocal_353 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "riov_fomFTEStart", 4,203895E-45f, Vector(-2677,207f, 71,65489f, 3442,786f), Vector(0.0f, 3,664182f, 0.0f), Vector(350,7747f, 219,6455f, 257,9375f));
	*(&iLocal_353 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_353, "riov_aquaticWildlife_set");
	*(&iLocal_353 + 296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "Cylinder", 4,203895E-45f, Vector(-3218,068f, 11,0468f, 3847,991f), Vector(0.0f, 20.0f, 0.0f), Vector(213,1174f, 120,1759f, 120,1759f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[0]);
	*(&iLocal_353 + 296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder1", 4,203895E-45f, Vector(-2941,48f, 11,0468f, 3792,045f), Vector(0.0f, 20.0f, 0.0f), Vector(171,9794f, 120,1759f, 99,91642f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[1]);
	*(&iLocal_353 + 296[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder2", 4,203895E-45f, Vector(-2686,061f, 11,0468f, 3747,897f), Vector(0.0f, -28,28134f, 0.0f), Vector(171,9794f, 120,1759f, 94,77378f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[2]);
	*(&iLocal_353 + 296[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder3", 4,203895E-45f, Vector(-2384,365f, 11,0468f, 3823,475f), Vector(0.0f, 21,16579f, 0.0f), Vector(132,1029f, 120,1759f, 109,5332f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[3]);
	*(&iLocal_353 + 296[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder4", 4,203895E-45f, Vector(-2514,742f, 11,0468f, 3798,418f), Vector(0.0f, 21,16579f, 0.0f), Vector(79,56471f, 88,09631f, 80,29457f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[4]);
	*(&iLocal_353 + 296[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder5", 4,203895E-45f, Vector(-2257,712f, 11,0468f, 3725,557f), Vector(0.0f, 21,16579f, 0.0f), Vector(70,058f, 77,5702f, 70,70065f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[5]);
	*(&iLocal_353 + 296[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder6", 4,203895E-45f, Vector(-2098,511f, 11,0468f, 3594,111f), Vector(0.0f, 21,16579f, 0.0f), Vector(187,9939f, 77,5702f, 55,92756f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[6]);
	*(&iLocal_353 + 296[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder7", 4,203895E-45f, Vector(-1629,272f, 11,0468f, 3561,406f), Vector(0.0f, 21,16579f, 0.0f), Vector(104,9413f, 77,5702f, 51,65447f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[7]);
	*(&iLocal_353 + 296[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder8", 4,203895E-45f, Vector(-1794,395f, 11,0468f, 3580,832f), Vector(0.0f, -18,15128f, 0.0f), Vector(104,9413f, 77,5702f, 51,65447f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[8]);
	*(&iLocal_353 + 296[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "nCylinder9", 4,203895E-45f, Vector(-1908,039f, 11,0468f, 3551,692f), Vector(0.0f, 0,5567674f, 0.0f), Vector(104,9413f, 77,5702f, 63,30935f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[9]);
	*(&iLocal_353 + 296[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "Cylinder10", 4,203895E-45f, Vector(-3993,832f, 11,0468f, 3886,646f), Vector(0.0f, 52,62321f, 0.0f), Vector(83,51431f, 120,1759f, 168,2393f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[10]);
	*(&iLocal_353 + 296[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "Cylinder11", 4,203895E-45f, Vector(-3755,156f, 11,0468f, 4020,613f), Vector(0.0f, 78,40577f, 0.0f), Vector(65,93489f, 120,1759f, 168,2393f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[11]);
	*(&iLocal_353 + 296[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "Cylinder12", 4,203895E-45f, Vector(-3461,047f, 11,0468f, 3982,886f), Vector(0.0f, 114,7503f, 0.0f), Vector(54,94436f, 120,1759f, 101,3502f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[12]);
	*(&iLocal_353 + 296[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "Cylinder13", 4,203895E-45f, Vector(-3602,673f, 11,0468f, 4017,808f), Vector(0.0f, 94,9091f, 0.0f), Vector(54,94436f, 120,1759f, 101,3502f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[13]);
	*(&iLocal_353 + 296[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_353, "Cylinder14", 4,203895E-45f, Vector(-3234,876f, 0.0f, 3981,952f), Vector(165,0756f, 61,89607f, 173,9577f), Vector(59,65659f, 82,87489f, 163,6885f));
	ADD_TO_VOLUME_SET(&iLocal_353 + 424, &iLocal_353 + 296[14]);
	*(&iLocal_353 + 432) = Vector(-3491,979f, 29,20257f, 3781,121f);
	*(&iLocal_353 + 432 + 12) = Vector(0.0f, 176,8638f, 0.0f);
	*(&iLocal_353 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingTree_rio1", Vector(-3491,979f, 29,20257f, 3781,121f), Vector(0.0f, 176,8638f, 0.0f));
	*(&iLocal_353 + 464) = Vector(-3496.0f, 29,15734f, 3782,336f);
	*(&iLocal_353 + 464 + 12) = Vector(0.0f, -93,25693f, 0.0f);
	*(&iLocal_353 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingHorses_rio1", Vector(-3496.0f, 29,15734f, 3782,336f), Vector(0.0f, -93,25693f, 0.0f));
	*(&iLocal_353 + 496) = Vector(-3488,353f, 29,22202f, 3784,775f);
	*(&iLocal_353 + 496 + 12) = Vector(0.0f, 91,63598f, 0.0f);
	*(&iLocal_353 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard1_rio1", Vector(-3488,353f, 29,22202f, 3784,775f), Vector(0.0f, 91,63598f, 0.0f));
	*(&iLocal_353 + 528) = Vector(-3485,45f, 29,29042f, 3782,769f);
	*(&iLocal_353 + 528 + 12) = Vector(0.0f, 106,103f, 0.0f);
	*(&iLocal_353 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard2_rio1", Vector(-3485,45f, 29,29042f, 3782,769f), Vector(0.0f, 106,103f, 0.0f));
	*(&iLocal_353 + 560) = Vector(-3486,898f, 29,29042f, 3781,429f);
	*(&iLocal_353 + 560 + 12) = Vector(0.0f, 137,6902f, 0.0f);
	*(&iLocal_353 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard3_rio1", Vector(-3486,898f, 29,29042f, 3781,429f), Vector(0.0f, 137,6902f, 0.0f));
	*(&iLocal_353 + 592) = Vector(-3491,979f, 29,22202f, 3784,775f);
	*(&iLocal_353 + 592 + 12) = Vector(0.0f, -85,94526f, 0.0f);
	*(&iLocal_353 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingguy_rio1", Vector(-3491,979f, 29,22202f, 3784,775f), Vector(0.0f, -85,94526f, 0.0f));
	*(&iLocal_353 + 624) = Vector(-3329,551f, 42,9619f, 3262,086f);
	*(&iLocal_353 + 624 + 12) = Vector(0.0f, 160,6098f, 0.0f);
	*(&iLocal_353 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingTree_rio2", Vector(-3329,551f, 42,9619f, 3262,086f), Vector(0.0f, 160,6098f, 0.0f));
	*(&iLocal_353 + 656) = Vector(-3348f, 39,27028f, 3260f);
	*(&iLocal_353 + 656 + 12) = Vector(0.0f, -50,21075f, 0.0f);
	*(&iLocal_353 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingHorses_rio2", Vector(-3348f, 39,27028f, 3260f), Vector(0.0f, -50,21075f, 0.0f));
	*(&iLocal_353 + 688) = Vector(-3333,033f, 43,0371f, 3262,948f);
	*(&iLocal_353 + 688 + 12) = Vector(0.0f, -129,0054f, 0.0f);
	*(&iLocal_353 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard1_rio2", Vector(-3333,033f, 43,0371f, 3262,948f), Vector(0.0f, -129,0054f, 0.0f));
	*(&iLocal_353 + 720) = Vector(-3336f, 42,26438f, 3269,568f);
	*(&iLocal_353 + 720 + 12) = Vector(0.0f, -36,00678f, 0.0f);
	*(&iLocal_353 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard2_rio2", Vector(-3336f, 42,26438f, 3269,568f), Vector(0.0f, -36,00678f, 0.0f));
	*(&iLocal_353 + 752) = Vector(-3344f, 39,2618f, 3260f);
	*(&iLocal_353 + 752 + 12) = Vector(0.0f, -118,137f, 0.0f);
	*(&iLocal_353 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard3_rio2", Vector(-3344f, 39,2618f, 3260f), Vector(0.0f, -118,137f, 0.0f));
	*(&iLocal_353 + 784) = Vector(-3329,979f, 42,79713f, 3265,775f);
	*(&iLocal_353 + 784 + 12) = Vector(0.0f, 48,33434f, 0.0f);
	*(&iLocal_353 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingguy_rio2", Vector(-3329,979f, 42,79713f, 3265,775f), Vector(0.0f, 48,33434f, 0.0f));
	*(&iLocal_353 + 816) = Vector(-2375,709f, 80,88108f, 3428,962f);
	*(&iLocal_353 + 816 + 12) = Vector(0.0f, 161,6762f, 0.0f);
	*(&iLocal_353 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingTree_rio3", Vector(-2375,709f, 80,88108f, 3428,962f), Vector(0.0f, 161,6762f, 0.0f));
	*(&iLocal_353 + 848) = Vector(-2370,019f, 81,33321f, 3430,07f);
	*(&iLocal_353 + 848 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_353 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingHorses_rio3", Vector(-2370,019f, 81,33321f, 3430,07f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_353 + 880) = Vector(-2373,481f, 81,02461f, 3430,985f);
	*(&iLocal_353 + 880 + 12) = Vector(0.0f, 123,5192f, 0.0f);
	*(&iLocal_353 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard1_rio3", Vector(-2373,481f, 81,02461f, 3430,985f), Vector(0.0f, 123,5192f, 0.0f));
	*(&iLocal_353 + 912) = Vector(-2380.0f, 81,39855f, 3436.0f);
	*(&iLocal_353 + 912 + 12) = Vector(0.0f, -47,29213f, 0.0f);
	*(&iLocal_353 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard2_rio3", Vector(-2380.0f, 81,39855f, 3436.0f), Vector(0.0f, -47,29213f, 0.0f));
	*(&iLocal_353 + 944) = Vector(-2378,847f, 81,56503f, 3438,408f);
	*(&iLocal_353 + 944 + 12) = Vector(0.0f, -23,36502f, 0.0f);
	*(&iLocal_353 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingGuard3_rio3", Vector(-2378,847f, 81,56503f, 3438,408f), Vector(0.0f, -23,36502f, 0.0f));
	*(&iLocal_353 + 976) = Vector(-2376,083f, 80,94261f, 3432,821f);
	*(&iLocal_353 + 976 + 12) = Vector(0.0f, -59,15118f, 0.0f);
	*(&iLocal_353 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_353, "hangingguy_rio3", Vector(-2376,083f, 80,94261f, 3432,821f), Vector(0.0f, -59,15118f, 0.0f));
	return 1;
}

void Function_95(int iParam0, int iParam1) //Position: 0x47D3 / 18387
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

void Function_96(var uParam0, int iParam1) //Position: 0x481D / 18461
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_97() //Position: 0x482E / 18478
{
	return;
}

bool Function_98() //Position: 0x4834 / 18484
{
	return Function_99();
}

int Function_99() //Position: 0x483D / 18493
{
	int iVar0;
	
	Function_95(3, 3);
	iVar0 = &iVar0;
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_105(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	if (!Function_100(&iLocal_17 + 8))
	{
		return 0;
	}
	iLocal_17 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_17))
	{
		iLocal_17 = CREATE_LAYOUT("RioBravo_layout");
	}
	*(&iLocal_17 + 496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint", Vector(-3160f, 44,41193f, 3292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint1", Vector(-3119,047f, 47,93179f, 3283,574f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint3", Vector(-2000.0f, 42,88177f, 3572.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint4", Vector(-3512f, 13,42503f, 3144.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint5", Vector(-1948,986f, 30,338f, 3468,504f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint6", Vector(-2400,747f, 9,362f, 3965,143f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint7", Vector(-2832,009f, 20,221f, 3076,099f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint8", Vector(-2830,891f, 20,21f, 3077,916f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint9", Vector(-2827,172f, 20,218f, 3076,897f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "riof_bhint10", Vector(-3125,57f, 52,958f, 3331,625f), Vector(0.0f, 328,684f, 0.0f));
	*(&iLocal_17 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage", "Player_Herb_RedSage", Vector(-2128.0f, 78,30591f, 3568f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage1", "Player_Herb_RedSage", Vector(-2060,095f, 65,44154f, 3567,905f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage2", "Player_Herb_RedSage", Vector(-2204.0f, 81,87195f, 3536.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage3", "Player_Herb_RedSage", Vector(-2196.0f, 72,28235f, 3622,289f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stay6", "horse_stay", Vector(-3159,17f, 40,74809f, 3357,375f), Vector(0.0f, -161,252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stay5", "horse_stay", Vector(-3161,255f, 40,81056f, 3357,217f), Vector(0.0f, 1,104314f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stay4", "horse_stay", Vector(-3162,257f, 40,88935f, 3355,897f), Vector(0.0f, -33,70702f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_rand_idle_stand1", "rand_idle_stand", Vector(-3163,328f, 48,60288f, 3338,12f), Vector(0.0f, 24,23989f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-3170,379f, 48,039f, 3335,295f), Vector(0.0f, -116,8604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_Sit_Ground7", "sit_ground_smoke", Vector(-3184,32f, 47,07455f, 3334,734f), Vector(0.0f, 171,0371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Sit_Ground4", "stand_lookdistance_w_any", Vector(-2341,574f, 8,03136f, 3929,239f), Vector(0.0f, -273,3786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Sit_Ground3", "rand_idle_stand", Vector(-2342,725f, 8,031624f, 3925,27f), Vector(0.0f, -206,3736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-2343,372f, 8,031362f, 3929,253f), Vector(0.0f, -329,1709f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2341,646f, 8,031359f, 3927,058f), Vector(0.0f, -247,171f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_look_distance_binocs2", "look_distance_binocs", Vector(-2385,283f, 13,65843f, 3944,406f), Vector(0.0f, -11,7156f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Ground_Campfire_Tend4", "sit_ground_smoke", Vector(-2392,38f, 9,035279f, 3975,027f), Vector(0.0f, -256,7545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Ground_Campfire_Tend3", "Sit_Ground_Only", Vector(-2393,851f, 9,03528f, 3974,437f), Vector(0.0f, -232,1839f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Ground_Campfire_Tend2", "Sit_Ground_Drink", Vector(-2395,36f, 9,035281f, 3973,386f), Vector(0.0f, -181,9568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-2396,675f, 9,035282f, 3975,035f), Vector(0.0f, -108,9257f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_horse_stay7", "horse_stay", Vector(-2418,596f, 8,455927f, 3947,523f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_horse_stay6", "horse_stay", Vector(-2417,423f, 8,40713f, 3948,75f), Vector(0.0f, -126,3067f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_horse_tend5", "horse_tend", Vector(-2420,452f, 8,474426f, 3946,628f), Vector(0.0f, -178,6461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_horse_stay5", "horse_stay", Vector(-2392,424f, 9,035282f, 3972,488f), Vector(0.0f, -77,91962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_horse_stay", "horse_stay", Vector(-2390,601f, 9,035286f, 3974,18f), Vector(0.0f, -77,91962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_horse_tend", "horse_tend", Vector(-2393,498f, 9,035286f, 3970,294f), Vector(0.0f, -178,2487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_rand_idle_stand", "rand_idle_stand", Vector(-2410,299f, 8,794f, 3970,471f), Vector(0.0f, 74,69887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_look_distance_binocs1", "look_distance_binocs", Vector(-2406,953f, 8,885f, 3972,906f), Vector(0.0f, -179,8559f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "pasted__Ram_Pee", "Pee", Vector(-2427,78f, 8,031357f, 3952,751f), Vector(0.0f, -220,2258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_look_distance_binocs", "look_distance_binocs", Vector(-2379,605f, 13,45116f, 3959,745f), Vector(0.0f, -145,4083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-2403,277f, 8,82728f, 3971,173f), Vector(0.0f, -235,7263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_stand_guntricks", "stand_guntricks_e_any", Vector(-2397,134f, 9,035282f, 3973,341f), Vector(0.0f, -125,0145f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_smoking_stand", "smoking_stand", Vector(-2401,506f, 8,984141f, 3972f), Vector(0.0f, 108,3262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2344,619f, 8,11066f, 3926,381f), Vector(0.0f, -160,6333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_Sit_Ground6", "Rand_Idle_Sit_Ground", Vector(-3157,05f, 49,874f, 3335,208f), Vector(0.0f, 199,8863f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_play_harmonica2", "sit_ground_play_harmonica", Vector(-2826,924f, 20,222f, 3075,662f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_peeing3", "stand_peeing_b_any", Vector(-2839,318f, 19,804f, 3087,875f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 608), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2828,607f, 20,079f, 3076,498f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_play_harmonica1", "sit_ground_play_harmonica", Vector(-2830,344f, 20,079f, 3077,056f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2825,495f, 20,078f, 3065,822f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-3554,44f, 15,6855f, 3158,265f), Vector(0.0f, 209,569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 616), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand3", "stand_lookdistance_w_any", Vector(-3552,909f, 15,63719f, 3157,377f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-2011,576f, 45,81986f, 3593,491f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-1996.0f, 40,42086f, 3556.0f), Vector(0.0f, 28,35921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_look_distance_binocs2", "look_distance_binocs", Vector(-1998,833f, 50,1581f, 3599,239f), Vector(0.0f, 180,5422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-1983,027f, 48,83636f, 3599,454f), Vector(0.0f, -152,7213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_horse_tend", "horse_tend", Vector(-2000,002f, 42,62162f, 3569,909f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_horse_stay2", "horse_stay", Vector(-2000.0f, 41,35714f, 3561,477f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_horse_stay1", "horse_stay", Vector(-2000.0f, 41,78054f, 3563,465f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_horse_stay", "horse_stay", Vector(-1999,953f, 42,07273f, 3565,992f), Vector(0.0f, -81,13202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_rand_idle_stand", "rand_idle_stand", Vector(-1997,602f, 43,169f, 3578,858f), Vector(0.0f, 34,43791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_look_distance_binocs1", "look_distance_binocs", Vector(-2013,013f, 45,82755f, 3597,033f), Vector(0.0f, 205,1078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_stand_announce", "stand_announce", Vector(-1978,738f, 49,22998f, 3593,193f), Vector(0.0f, -32,34185f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1971,158f, 52,98363f, 3597,076f), Vector(0.0f, -118,8713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_Pee", "Pee", Vector(-2005,785f, 45,09604f, 3597,083f), Vector(0.0f, -149,6704f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_look_distance_binocs", "look_distance_binocs", Vector(-1992,156f, 42,48289f, 3572,075f), Vector(0.0f, -64,38241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_sleeping_scripted", "sleeping_scripted", Vector(-1997,227f, 43,229f, 3575,407f), Vector(0.0f, 29,99957f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-2002,435f, 43,169f, 3577,113f), Vector(0.0f, -68,14408f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_smoking_stand", "smoking_stand", Vector(-1994,3f, 44,10772f, 3587,234f), Vector(0.0f, 27,99556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-1998,269f, 43,07348f, 3575,167f), Vector(0.0f, -245,3799f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DlR_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1999,387f, 43,169f, 3577,917f), Vector(0.0f, 0,6212928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand2", "rand_idle_stand", Vector(-3555,438f, 15,60915f, 3159,332f), Vector(0.0f, 171,8535f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3543,762f, 15,3694f, 3162,819f), Vector(0.0f, -210,2364f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-3545,373f, 15,49567f, 3162,648f), Vector(0.0f, 34,25905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 624), 0);
	*(&iLocal_17 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3544,541f, 15,49885f, 3161,289f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 632), 0);
	*(&iLocal_17 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_look_distance_binocs2", "look_distance_binocs", Vector(-3545,451f, 15,64982f, 3159,776f), Vector(0.0f, 138,5309f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 640), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_tend1", "horse_tend", Vector(-3495,967f, 19,65504f, 3136,116f), Vector(0.0f, -91,20521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_tend", "horse_tend", Vector(-3499,674f, 16,25382f, 3147,382f), Vector(0.0f, 21,67242f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_stay2", "horse_stay", Vector(-3497,875f, 16,7437f, 3146,125f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_stay1", "horse_stay", Vector(-3496f, 17,07369f, 3146,051f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_horse_stay", "horse_stay", Vector(-3494,914f, 17,262f, 3150,906f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_look_distance_binocs1", "look_distance_binocs", Vector(-3516,268f, 15,515f, 3124,192f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Pee", "Pee", Vector(-3492,114f, 19,66672f, 3136,246f), Vector(0.0f, -26,90434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand1", "rand_idle_stand", Vector(-3520,276f, 11,12099f, 3146,674f), Vector(0.0f, 78,99949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_rand_idle_stand", "rand_idle_stand", Vector(-3509,928f, 13,78963f, 3146,481f), Vector(0.0f, -82,29346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3511,514f, 13,83953f, 3143,129f), Vector(0.0f, -161,3654f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", Vector(-3497,143f, 17,32072f, 3150,853f), Vector(0.0f, -105,2133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_lean_rail", "look_distance_binocs", Vector(-3520,693f, 15,672f, 3127,985f), Vector(0.0f, 37,36112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", Vector(-3516,66f, 15,74677f, 3134,089f), Vector(0.0f, 41,5251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_look_distance_binocs", "look_distance_binocs", Vector(-3503,269f, 15,4507f, 3126,436f), Vector(0.0f, -47,4214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3507,42f, 14,41f, 3147,197f), Vector(0.0f, 71,79088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_horse_stay", "horse_stay", Vector(-2809,631f, 20,06283f, 3078,922f), Vector(0.0f, 262,5791f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 648), 0);
	*(&iLocal_17 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_horse_stay1", "horse_stay", Vector(-2825,325f, 20,078f, 3061,285f), Vector(0.0f, 291,1736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 656), 0);
	*(&iLocal_17 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_horse_stay2", "horse_stay", Vector(-2842,107f, 20,07843f, 3077,05f), Vector(0.0f, -62,75959f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 664), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_horse_stay3", "horse_stay", Vector(-2839,699f, 19,8962f, 3083,606f), Vector(0.0f, -92,17142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_horse_stay4", "horse_stay", Vector(-2833,166f, 20,082f, 3098,089f), Vector(0.0f, -92,17142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_horse_stay5", "horse_stay", Vector(-2832,59f, 20,078f, 3061,418f), Vector(0.0f, 291,1736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 672), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_guntricks2", "stand_guntricks_e_any", Vector(-2831,572f, 20,078f, 3071,561f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_smoking_stand1", "smoking_stand", Vector(-2819,144f, 20,898f, 3097,647f), Vector(0.0f, 8,869471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2860,124f, 18,071f, 3052,454f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-2839,148f, 19,074f, 3047,189f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-2816,013f, 19,074f, 3054,258f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-2794,852f, 19,075f, 3074,642f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-2807,877f, 20,397f, 3089,516f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-2877,226f, 18,9f, 3088,852f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_peeing2", "stand_peeing_b_any", Vector(-2856,467f, 18,07058f, 3083,134f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 680), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_guntricks1", "stand_guntricks_e_any", Vector(-2820,465f, 20,07843f, 3077,348f), Vector(0.0f, -216,9882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_guntricks", "stand_guntricks_e_any", Vector(-2822,097f, 20,07843f, 3079,603f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-2832,129f, 20,19984f, 3075,018f), Vector(0.0f, -91,55288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_lookdistance_binocs", "look_distance_binocs", Vector(-2810,723f, 20,06739f, 3080,786f), Vector(0.0f, -93,60166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", Vector(-2827,709f, 20,21305f, 3073,477f), Vector(0.0f, -93,82076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_lean_fence_L_talking", "lean_fence_L_talking", Vector(-2815,689f, 20,069f, 3080,324f), Vector(0.0f, -86,0629f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_look_out_window_R", "look_out_window_R", Vector(-2827,741f, 20,22371f, 3077,974f), Vector(0.0f, -183,1475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-2834,184f, 20,0484f, 3078,272f), Vector(0.0f, -269,9485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "mrc_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2808,104f, 19,074f, 3061,17f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-3159,587f, 49,208f, 3337,611f), Vector(0.0f, 125,8836f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_horse_stay5", "horse_stay", Vector(-1931,363f, 31,714f, 3457,895f), Vector(0.0f, -90,69595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_horse_stay4", "horse_stay", Vector(-1922,429f, 33,198f, 3457,79f), Vector(0.0f, -119,5589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_guntricks1", "stand_guntricks_e_any", Vector(-1935,254f, 31,071f, 3465,635f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_smoking_stand2", "smoking_stand", Vector(-1946,722f, 30,068f, 3464,956f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-1954,085f, 30,043f, 3461,345f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-1913,139f, 35,528f, 3465,48f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-1931,168f, 31,081f, 3472,563f), Vector(0.0f, -10,50106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_smoking_stand1", "smoking_stand", Vector(-1947,871f, 30,049f, 3454,507f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_play_harmonica4", "sit_ground_play_harmonica", Vector(-1949,729f, 30,338f, 3468,748f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_play_harmonica3", "sit_ground_play_harmonica", Vector(-1944,537f, 30,174f, 3462,752f), Vector(0.0f, -28,36382f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_guntricks", "stand_guntricks_e_any", Vector(-1940,999f, 30,465f, 3466,823f), Vector(0.0f, -37,21741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1938,157f, 40,077f, 3411,248f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_peeing4", "stand_peeing_b_any", Vector(-1938,611f, 31,35f, 3445,034f), Vector(0.0f, 88,69489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 688), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1928,01f, 31,471f, 3470,586f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1905,697f, 37,586f, 3460,313f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1973,683f, 23,404f, 3452,104f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1966,768f, 24,473f, 3444,756f), Vector(0.0f, 12,70308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_horse_stay3", "horse_stay", Vector(-1928,781f, 32,027f, 3459,594f), Vector(0.0f, -90,69595f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_horse_stay2", "horse_stay", Vector(-1919,589f, 33,631f, 3452,771f), Vector(0.0f, -119,5589f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-1945,132f, 30,25158f, 3468,703f), Vector(0.0f, -76,99028f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_smoking_stand", "smoking_stand", Vector(-1944,187f, 30,25158f, 3467,699f), Vector(0.0f, -120,1609f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_sleeping_scripted", "sleeping_scripted", Vector(-1948,295f, 30,42581f, 3469,483f), Vector(0.0f, -56,70472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_lookdistance_b2", "look_distance_binocs", Vector(-1937,952f, 30,59689f, 3471,31f), Vector(0.0f, -168,9819f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_lookdistance_b1", "look_distance_binocs", Vector(-1955,76f, 29,60071f, 3464,03f), Vector(0.0f, 93,37398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_look_out", "look_out_window_L", Vector(-1946,82f, 30,33619f, 3470,723f), Vector(0.0f, -173,4546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", Vector(-1944,898f, 30,25158f, 3469,718f), Vector(0.0f, -89,65778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "del_Pee", "Pee", Vector(-1949,664f, 30,068f, 3463,846f), Vector(0.0f, -239,1129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3126,541f, 55,26898f, 3325,715f), Vector(0.0f, 208,3396f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_drunk_throwbottle2", "stand_drunk_throwbottle", Vector(-3120f, 48,05134f, 3285,886f), Vector(0.0f, -85,74197f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-3116,289f, 48,02755f, 3283,983f), Vector(0.0f, -165,7704f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-3116,299f, 48,0468f, 3286,97f), Vector(0.0f, 4,880137f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stay3", "horse_stay", Vector(-3122,469f, 44,295f, 3276,393f), Vector(0.0f, -62,41935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stay2", "horse_stay", Vector(-3116,799f, 44,8482f, 3275,256f), Vector(0.0f, -84,97229f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stay1", "horse_stay", Vector(-3148,185f, 45,21606f, 3285,917f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_horse_stayf", "horse_stay", Vector(-3145,843f, 44,94708f, 3284,708f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3164,408f, 48,90765f, 3306,279f), Vector(0.0f, -107,4971f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_yawning_n_any", "stand_yawning_n_any", Vector(-3147,888f, 52,50456f, 3331,406f), Vector(0.0f, -25,10501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3162,687f, 43,39395f, 3284,156f), Vector(0.0f, -116,8604f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_rand_idle_stand", "rand_idle_stand", Vector(-3161,706f, 44,13537f, 3285,432f), Vector(0.0f, -34,07877f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_Pee", "Pee", Vector(-3181,828f, 44,61724f, 3291,591f), Vector(0.0f, -145,4428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_smoking_stand", "smoking_stand", Vector(-3161,215f, 48,66968f, 3305,215f), Vector(0.0f, -193,7699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3160,971f, 49,1858f, 3307,668f), Vector(0.0f, 64,33193f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-3118,486f, 48,08616f, 3286,486f), Vector(0.0f, -57,33881f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Rep_look_distance_binocs6", "look_distance_binocs", Vector(-3116,516f, 47,90384f, 3282,219f), Vector(0.0f, -15,7782f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_look_distance_binocs5", "look_distance_binocs", Vector(-3165,171f, 47,88364f, 3339,91f), Vector(0.0f, 172,8329f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3208,021f, 48,54655f, 3325,991f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_lookdistance_w_any6", "stand_lookdistance_w_any", Vector(-3151,599f, 55,1331f, 3326,926f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-3153,294f, 44,676f, 3283,202f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-3235,002f, 43,37407f, 3289,337f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-3239,588f, 45,36124f, 3323,61f), Vector(0.0f, 60,81117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_lookdistance_binocs1", "look_distance_binocs", Vector(-3093,237f, 54,06651f, 3295,742f), Vector(0.0f, 50,78083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_lookdistance_binocs", "look_distance_binocs", Vector(-3199,912f, 49,23763f, 3294,363f), Vector(0.0f, 50,78083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_17 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage10", "Player_Herb_RedSage", Vector(-2584f, 18,96817f, 3836,951f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage12", "Player_Herb_RedSage", Vector(-2653,214f, 71,27073f, 3674,935f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage13", "Player_Herb_RedSage", Vector(-2752f, 64,25098f, 3660.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage14", "Player_Herb_RedSage", Vector(-2860,954f, 84,32941f, 3656.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage15", "Player_Herb_RedSage", Vector(-2772,946f, 78,30584f, 3622,849f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage16", "Player_Herb_RedSage", Vector(-2650,237f, 81,31765f, 3614,626f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage17", "Player_Herb_RedSage", Vector(-2579,453f, 75,2982f, 3571,804f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage18", "Player_Herb_RedSage", Vector(-2528.0f, 73,28625f, 3516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage19", "Player_Herb_RedSage", Vector(-2398,533f, 88,00005f, 3578,744f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage54", "Player_Herb_RedSage", Vector(-3720.0f, 19,47223f, 4068f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage20", "Player_Herb_RedSage", Vector(-2480.0f, 77,30194f, 3512.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage21", "Player_Herb_RedSage", Vector(-2376.0f, 90,35297f, 3484.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage22", "Player_Herb_RedSage", Vector(-2544.0f, 72,28235f, 3524.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage23", "Player_Herb_RedSage", Vector(-2575,155f, 69,27057f, 3386,922f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage24", "Player_Herb_RedSage", Vector(-2340.0f, 91,34657f, 3470,586f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage25", "Player_Herb_RedSage", Vector(-2406,008f, 88,34509f, 3540f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage26", "Player_Herb_RedSage", Vector(-2568.0f, 70,27451f, 3372.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage27", "Player_Herb_RedSage", Vector(-2380.0f, 78,16766f, 3413,836f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage28", "Player_Herb_RedSage", Vector(-2523,415f, 63,24707f, 3292.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage29", "Player_Herb_RedSage", Vector(-2618,338f, 60,23529f, 3261,621f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage30", "Player_Herb_RedSage", Vector(-2584.0f, 72,2552f, 3344.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage31", "Player_Herb_RedSage", Vector(-2640,04f, 70,66639f, 3343,903f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage32", "Player_Herb_RedSage", Vector(-2623,346f, 61,2392f, 3252,757f), Vector(0.0f, -100,696f, 0.0f));
	*(&iLocal_17 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage33", "Player_Herb_RedSage", Vector(-2608.0f, 58,22832f, 3220,38f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage45", "Player_Herb_RedSage", Vector(-3088.0f, 43,16861f, 3793,174f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage47", "Player_Herb_RedSage", Vector(-3261,243f, 37,4289f, 3796,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage48", "Player_Herb_RedSage", Vector(-3312.0f, 28,1098f, 3874,001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage49", "Player_Herb_RedSage", Vector(-3354,739f, 31,10819f, 3872f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage50", "Player_Herb_RedSage", Vector(-3479,23f, 29,11372f, 3790,93f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage53", "Player_Herb_RedSage", Vector(-3552.0f, 31,12157f, 4032f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage55", "Player_Herb_RedSage", Vector(-3780.0f, 12,04705f, 3864f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage56", "Player_Herb_RedSage", Vector(-3784,537f, 20,34153f, 3820f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage58", "Player_Herb_RedSage", Vector(-3884.0f, 15,05882f, 3868f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage59", "Player_Herb_RedSage", Vector(-3740.0f, 16,88192f, 3676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage60", "Player_Herb_RedSage", Vector(-3720.0f, 19,02363f, 3664f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage63", "Player_Herb_RedSage", Vector(-3600.0f, 28,1098f, 3548f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage65", "Player_Herb_RedSage", Vector(-3304.0f, 37,14508f, 3639,991f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage69", "Player_Herb_RedSage", Vector(-3159,258f, 46,17721f, 3395,738f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage72", "Player_Herb_RedSage", Vector(-3428f, 39,15937f, 3437,872f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage73", "Player_Herb_RedSage", Vector(-3370,748f, 39,15295f, 3353,252f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage76", "Player_Herb_RedSage", Vector(-3592.0f, 33,12939f, 3440f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage77", "Player_Herb_RedSage", Vector(-3736,011f, 8,031368f, 3367,968f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage78", "Player_Herb_RedSage", Vector(-3760.0f, 8,031368f, 3500,001f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage80", "Player_Herb_RedSage", Vector(-3700,347f, 8,047106f, 3547,551f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage81", "Player_Herb_RedSage", Vector(-3692.0f, 14,05489f, 3268f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage82", "Player_Herb_RedSage", Vector(-3566,34f, 14,0549f, 3256f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage84", "Player_Herb_RedSage", Vector(-3412f, 43,16864f, 3300f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage85", "Player_Herb_RedSage", Vector(-3278,227f, 42,16839f, 3394,21f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage86", "Player_Herb_RedSage", Vector(-3252f, 44,17255f, 3416f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage89", "Player_Herb_RedSage", Vector(-3244f, 38,06852f, 3156f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage90", "Player_Herb_RedSage", Vector(-3176f, 39,1916f, 3176f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage97", "Player_Herb_RedSage", Vector(-3384f, 17,06667f, 3149,725f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_RedSage98", "Player_Herb_RedSage", Vector(-3552f, 14,0549f, 3244f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-3360f, 17,06667f, 3160f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-3564,983f, 14,99426f, 3196,983f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-3480f, 36,41875f, 3330,627f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-3290,742f, 47,18433f, 3289,645f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-2971,6f, 20,96024f, 3082,742f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", Vector(-2208.0f, 81,29002f, 3552.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", Vector(-2176.0f, 78,30591f, 3564f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage", "Player_Herb_DesertSage", Vector(-3788.0f, 8,031364f, 3344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", Vector(-3564f, 37,14511f, 3396f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-3436f, 35,13725f, 3360f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", Vector(-3541,646f, 38,14902f, 3470,473f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-3413,799f, 34,9981f, 3570,201f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-3508.0f, 25,09804f, 3628f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-3604.0f, 28,1098f, 3656,467f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-3750,897f, 17,9346f, 3692f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-3820.0f, 9,024844f, 3792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-3761,782f, 21,08235f, 3824f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", Vector(-3861,371f, 14,15964f, 3828f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", Vector(-3908.0f, 12,17647f, 3879,762f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", Vector(-3612.0f, 29,11754f, 3912f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", Vector(-3576.0f, 46,08669f, 3796f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", Vector(-3477,363f, 30,11763f, 3828f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", Vector(-3562,483f, 31,12157f, 3997,31f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", Vector(-3872.0f, 13,92223f, 3932f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", Vector(-3777,49f, 21,30838f, 4002,51f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", Vector(-3456.0f, 29,23476f, 3956f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", Vector(-3277,899f, 40,15022f, 3530,462f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", Vector(-3248.0f, 39,15292f, 3708f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "rep_rand_idle_stand2", "rand_idle_stand", Vector(-3159,823f, 43,95999f, 3285,607f), Vector(0.0f, 48,95183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_100(struct<2>[] Param0) //Position: 0xA1F7 / 41463
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_104();
	iVar1 = 0;
	if (!Function_21(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_103(&(Param0[iVar02]), 8);
		}
		else if (Function_102())
		{
			iVar1 = 1;
			Function_103(&(Param0[iVar02]), 8);
		}
		Function_103(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_21(&(Param0[iVar02]), 4))
		{
			if (!Function_21(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_21(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_21(&(Param0[02]), 8) || iVar1));
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
				Function_103(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_21(&(Param0[iVar02]), 4))
		{
			if (!Function_21(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_103(&(Param0[iVar02]), 2);
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
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_103(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_103(&(Param0[iVar02]), 2);
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
	Function_101();
	return 1;
}

void Function_101() //Position: 0xA5B9 / 42425
{
	if (!Function_61(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_102() //Position: 0xA5F9 / 42489
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

void Function_103(struct<13> Param0) //Position: 0xA627 / 42535
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_104() //Position: 0xA63A / 42554
{
	if (!Function_61(128))
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

var Function_105(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA67C / 42620
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_106(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_103(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_106(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA6BA / 42682
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_21(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_103(&(Param0[iVar02]), 4);
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

bool Function_107() //Position: 0xA789 / 42889
{
	return Function_108();
}

int Function_108() //Position: 0xA792 / 42898
{
	var uVar0;
	
	Function_95(3, 3);
	uVar0 = &uVar0;
	iLocal_7 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("RioBravo_layout");
	}
	*(&iLocal_7 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_7, "riov_fom_TL", 2,802597E-45f, Vector(-2698,75f, 67,26273f, 3594,622f), Vector(0.0f, 46,90526f, 0.0f), Vector(233,9071f, 51,19311f, 162,187f));
	*(&iLocal_7 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_7, "riov_fom_TR", 2,802597E-45f, Vector(-2816,708f, 67,26276f, 3471,476f), Vector(0.0f, -43,06648f, 0.0f), Vector(182,4189f, 56,81593f, 216,5262f));
	*(&iLocal_7 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_7, "riov_fom_BL", 2,802597E-45f, Vector(-2552,932f, 70,78741f, 3466,534f), Vector(0.0f, 47,35273f, 0.0f), Vector(164,3603f, 46,83172f, 200,9831f));
	*(&iLocal_7 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_7, "riov_fom_BR", 2,802597E-45f, Vector(-2689,511f, 69,99854f, 3324,288f), Vector(0.0f, 47,24931f, 0.0f), Vector(182,6157f, 58,32756f, 197,6764f));
	return 1;
}

void Function_109() //Position: 0xA8E6 / 43238
{
	ALLOW_TUMBLEWEEDS(0);
	return;
}

void Function_110(char* cParam0) //Position: 0xA8F0 / 43248
{
	if (!Function_61(128))
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

