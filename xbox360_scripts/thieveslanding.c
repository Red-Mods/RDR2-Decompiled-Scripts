//Decompiled with MagicRDR v1.0
//Function Count : 143
//Statics Count : 563
//Natives Count : 179
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<29> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_239 = 0;
	bool bLocal_240 = false;
	bool bLocal_241 = false;
	bool bLocal_242 = false;
	bool bLocal_243 = false;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	var uLocal_246 = 14;
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
	int iLocal_527 = 0;
	var uLocal_528 = 8;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_239 = 0;
	Function_142("Initializing Thieves Landing", 3);
	SET_DUST_LEVEL(0);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_244 = 1000;
		switch (iLocal_239)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_239 = 1;
				}
				bLocal_244 = false;
				break;
			
			case 0x00000001:
				if (Function_141())
				{
					if (Function_140())
					{
						DISABLE_CHILD_SECTOR("thi_gates01x");
						DISABLE_CHILD_SECTOR("thi_gates02x");
					}
					Global_62981 = 0;
					iLocal_239 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
					AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
					AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
				}
				bLocal_244 = false;
				break;
			
			case 0x00000002:
				if (Function_131())
				{
					Function_130(&(Global_29008[iScriptParam_0]), 32);
					iLocal_239 = 3;
				}
				bLocal_244 = false;
				break;
			
			case 0x00000003:
				bLocal_245 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ThievesLandingVol", &iScriptParam_0, 2, 0);
				Function_129(&Global_6614, &Global_7657, iScriptParam_0);
				iLocal_239 = 5;
				bLocal_244 = false;
				break;
			
			case 0x00000005:
				if (Function_128(&Global_6614, &Global_7657, iScriptParam_0))
				{
					iLocal_239 = 4;
					bLocal_244 = false;
				}
				else
				{
					bLocal_244 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_127(&(Global_29008[iScriptParam_0]), 16) && Function_126(Global_29155[iScriptParam_010]))
				{
					iLocal_239 = 6;
				}
				bLocal_244 = false;
				break;
			
			case 0x00000006:
				Function_125(0, &uLocal_246, 30.0f);
				Function_124(0, &uLocal_246, 163,809f, 73,566f, 2190,791f);
				Function_123(0, &uLocal_246, 163,809f, 73,566f, 2190,791f);
				Function_122(0, &uLocal_246, 163,809f, 73,566f, 2190,791f);
				Function_121(0, &uLocal_246, 163,809f, 73,566f, 2190,791f);
				Function_120(0, &uLocal_246, 163,809f, 73,566f, 2190,791f);
				Function_119(0, &uLocal_246, 163,809f, 73,566f, 2190,791f);
				Function_118(0, &uLocal_246, Local_4);
				Function_125(1, &uLocal_246, 40.0f);
				Function_117(1, &uLocal_246, Local_12.f_820);
				Function_123(1, &uLocal_246, 172,154f, 73,83222f, 2231,446f);
				Function_122(1, &uLocal_246, 172,154f, 73,83222f, 2231,446f);
				Function_121(1, &uLocal_246, 172,154f, 73,83222f, 2231,446f);
				Function_120(1, &uLocal_246, 172,154f, 73,83222f, 2231,446f);
				Function_119(1, &uLocal_246, 172,154f, 73,83222f, 2231,446f);
				Function_118(1, &uLocal_246, Local_4);
				Function_125(2, &uLocal_246, 40.0f);
				Function_124(2, &uLocal_246, 155,1374f, 73,782f, 2196,109f);
				Function_123(2, &uLocal_246, 155,1374f, 73,782f, 2196,109f);
				Function_122(2, &uLocal_246, 155,1374f, 73,782f, 2196,109f);
				Function_121(2, &uLocal_246, 155,1374f, 73,782f, 2196,109f);
				Function_120(2, &uLocal_246, 168,639f, 73,754f, 2230,877f);
				Function_119(2, &uLocal_246, 205,134f, 73,533f, 2192,076f);
				Function_118(2, &uLocal_246, Local_4);
				Function_125(3, &uLocal_246, 40.0f);
				Function_124(3, &uLocal_246, 151,681f, 73,958f, 2244,202f);
				Function_123(3, &uLocal_246, 151,681f, 73,958f, 2244,202f);
				Function_122(3, &uLocal_246, 151,681f, 73,958f, 2244,202f);
				Function_121(3, &uLocal_246, 151,681f, 73,958f, 2244,202f);
				Function_120(3, &uLocal_246, 151,681f, 73,958f, 2244,202f);
				Function_119(3, &uLocal_246, 151,681f, 73,958f, 2244,202f);
				Function_118(3, &uLocal_246, Local_4);
				Function_125(4, &uLocal_246, 30.0f);
				Function_124(4, &uLocal_246, 138,3975f, 76,53075f, 2327,367f);
				Function_123(4, &uLocal_246, 138,3975f, 76,53075f, 2327,367f);
				Function_122(4, &uLocal_246, 138,3975f, 76,53075f, 2327,367f);
				Function_121(4, &uLocal_246, 138,3975f, 76,53075f, 2327,367f);
				Function_120(4, &uLocal_246, 146,5062f, 73,78095f, 2238,222f);
				Function_119(4, &uLocal_246, 186,746f, 73,205f, 2223,258f);
				Function_118(4, &uLocal_246, Local_4);
				Function_125(5, &uLocal_246, 40.0f);
				Function_124(5, &uLocal_246, 135,955f, 73,676f, 2319,85f);
				Function_123(5, &uLocal_246, 135,955f, 73,676f, 2319,85f);
				Function_122(5, &uLocal_246, 135,955f, 73,676f, 2319,85f);
				Function_121(5, &uLocal_246, 135,955f, 73,676f, 2319,85f);
				Function_120(5, &uLocal_246, 135,955f, 73,676f, 2319,85f);
				Function_119(5, &uLocal_246, 135,955f, 73,676f, 2319,85f);
				Function_118(5, &uLocal_246, Local_4);
				Function_125(6, &uLocal_246, 40.0f);
				Function_117(6, &uLocal_246, Local_12.f_784);
				Function_123(6, &uLocal_246, 176,031f, 76,483f, 2180,656f);
				Function_122(6, &uLocal_246, 176,031f, 76,483f, 2180,656f);
				Function_121(6, &uLocal_246, 176,031f, 76,483f, 2180,656f);
				Function_120(6, &uLocal_246, 176,031f, 76,483f, 2180,656f);
				Function_116(6, &uLocal_246, Local_12.f_784);
				Function_118(6, &uLocal_246, Local_4);
				Function_125(7, &uLocal_246, 60.0f);
				Function_124(7, &uLocal_246, 127,69f, 73,286f, 2220,064f);
				Function_123(7, &uLocal_246, 127,69f, 73,286f, 2220,064f);
				Function_122(7, &uLocal_246, 127,69f, 73,286f, 2220,064f);
				Function_121(7, &uLocal_246, 127,69f, 73,286f, 2220,064f);
				Function_120(7, &uLocal_246, 142,092f, 76,821f, 2244,598f);
				Function_119(7, &uLocal_246, 209,204f, 73,42f, 2186,115f);
				Function_118(7, &uLocal_246, Local_4);
				Function_125(8, &uLocal_246, 60.0f);
				Function_124(8, &uLocal_246, 168,562f, 73,754f, 2235,864f);
				Function_123(8, &uLocal_246, 127,2727f, 73,286f, 2222,097f);
				Function_122(8, &uLocal_246, 127,2727f, 73,286f, 2222,097f);
				Function_121(8, &uLocal_246, 127,2727f, 73,286f, 2222,097f);
				Function_120(8, &uLocal_246, 166,916f, 73,754f, 2227,444f);
				Function_119(8, &uLocal_246, 168,562f, 73,754f, 2235,864f);
				Function_118(8, &uLocal_246, Local_4);
				Function_125(9, &uLocal_246, 40.0f);
				Function_124(9, &uLocal_246, 95,238f, 73,592f, 2265,981f);
				Function_115(9, &uLocal_246, Local_12.f_832);
				Function_114(9, &uLocal_246, Local_12.f_832);
				Function_113(9, &uLocal_246, Local_12.f_832);
				Function_112(9, &uLocal_246, Local_12.f_832);
				Function_119(9, &uLocal_246, 95,238f, 73,592f, 2265,981f);
				Function_118(9, &uLocal_246, Local_4);
				Function_125(10, &uLocal_246, 30.0f);
				Function_124(10, &uLocal_246, 172,128f, 73,543f, 2181,927f);
				Function_123(10, &uLocal_246, 172,128f, 73,543f, 2181,927f);
				Function_122(10, &uLocal_246, 172,128f, 73,543f, 2181,927f);
				Function_121(10, &uLocal_246, 172,128f, 73,543f, 2181,927f);
				Function_120(10, &uLocal_246, 172,128f, 73,543f, 2181,927f);
				Function_119(10, &uLocal_246, 172,128f, 73,543f, 2181,927f);
				Function_118(10, &uLocal_246, Local_4);
				Function_125(11, &uLocal_246, 60.0f);
				Function_117(11, &uLocal_246, Local_12.f_836);
				Function_115(11, &uLocal_246, Local_12.f_844);
				Function_114(11, &uLocal_246, Local_12.f_828);
				Function_113(11, &uLocal_246, Local_12.f_844);
				Function_112(11, &uLocal_246, Local_12.f_780);
				Function_116(11, &uLocal_246, Local_12.f_780);
				Function_118(11, &uLocal_246, Local_4);
				Function_125(12, &uLocal_246, 40.0f);
				Function_124(12, &uLocal_246, 171,913f, 73,754f, 2223,275f);
				Function_123(12, &uLocal_246, 171,913f, 73,754f, 2223,275f);
				Function_122(12, &uLocal_246, 171,913f, 73,754f, 2223,275f);
				Function_121(12, &uLocal_246, 171,913f, 73,754f, 2223,275f);
				Function_120(12, &uLocal_246, 171,913f, 73,754f, 2223,275f);
				Function_119(12, &uLocal_246, 171,913f, 73,754f, 2223,275f);
				if (Global_25974[2])
				{
					Function_111(&(Global_6614[122]), 2);
				}
				else
				{
					Function_110(&(Global_6614[122]), 2);
				}
				Function_125(13, &uLocal_246, 40.0f);
				Function_124(13, &uLocal_246, 151,353f, 76,958f, 2240,619f);
				Function_123(13, &uLocal_246, 149,36f, 73,81f, 2243,81f);
				Function_122(13, &uLocal_246, 149,36f, 73,81f, 2243,81f);
				Function_121(13, &uLocal_246, 149,36f, 73,81f, 2243,81f);
				Function_120(13, &uLocal_246, 149,36f, 73,81f, 2243,81f);
				Function_119(13, &uLocal_246, 149,36f, 73,81f, 2243,81f);
				Function_118(13, &uLocal_246, Local_4);
				Function_106(&Global_6614, &Global_7657, &uLocal_246, Global_6289, iScriptParam_0);
				if (Function_127(&(Global_29008[iScriptParam_0]), 256) || !Function_105(2))
				{
					iLocal_527 = 1;
				}
				bLocal_240 = Function_104(Global_30668[1], "ThievesLanding", "pawnShop01", 1);
				if (IS_DOOR_VALID(bLocal_240))
				{
					Function_103(StackVal, bLocal_240);
				}
				bLocal_241 = Function_104(Global_30668[1], "ThievesLanding", "tailorsDoctors01", 3);
				if (IS_DOOR_VALID(bLocal_241))
				{
					Function_103(StackVal, bLocal_241);
				}
				bLocal_242 = Function_104(Global_30668[1], "ThievesLanding", "gunsmith01", 1);
				if (IS_DOOR_VALID(bLocal_242))
				{
					Function_103(StackVal, bLocal_242);
				}
				bLocal_243 = Function_104(Global_30668[1], "ThievesLanding", "tailorsDoctors01", 1);
				if (IS_DOOR_VALID(bLocal_243))
				{
					Function_103(StackVal, bLocal_243);
				}
				Function_102(StackVal, FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_pawnshop_set"));
				Function_101(StackVal, 1);
				Function_100(StackVal, 397);
				Function_102(StackVal, FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_doctor_set"));
				Function_101(StackVal, 3);
				Function_100(StackVal, 398);
				Function_102(StackVal, FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_gunsmith_set"));
				Function_101(StackVal, 2);
				Function_100(StackVal, 399);
				Function_102(StackVal, FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_tailor_set"));
				Function_101(StackVal, 4);
				Function_100(StackVal, 520);
				Function_99(1);
				Function_93(2, Local_12.f_816, Local_12.f_656, Local_12.f_772, Function_104(iScriptParam_0, "thievesLanding", "npigFarm01", 2), 0, Local_4.f_28);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "thiv_players_room"));
				}
				else
				{
					LOG_ERROR("THI: Cannot find thiv_players_room to restrict players room");
				}
				Function_130(&(Global_29008[iScriptParam_0]), 8);
				if (Function_127(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_92(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_239 = 10;
				}
				else
				{
					iLocal_239 = 7;
				}
				bLocal_244 = false;
				break;
			
			case 0x00000007:
				Function_91(iScriptParam_0);
				Function_82(&Global_62527, 0, Global_30668[1], "$/content/Frontier/Mini_Games/Poker_THI/Poker_THI", 4294967295, 0, "ThiPoker", 433, 164,503f, 73,349f, 2230,934f, 2,5f, 0, 0);
				Function_81(&Global_62527, 0, 25);
				Function_82(&Global_62527, 2, Global_30668[1], "$/content/Frontier/Mini_Games/BlackJack_THI/BlackJack_THI", 4294967295, 0, "ThiBlackJack", 349, 172,915f, 73,754f, 2224,359f, 2,5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "thiv_blackjack"));
				Function_81(&Global_62527, 2, 40);
				if (Function_80(49) && !Function_80(50))
				{
					Function_82(&Global_62527, 7, Global_30668[1], "$/content/Frontier/Mini_Games/LiarsDice_THI/LiarsDice_THI", 4294967295, 0, "RcmLiarsDice", 426, 167,344f, 73,755f, 2224,521f, 1.0f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "thiv_liarsdice"));
					Function_81(&Global_62527, 7, 200);
				}
				else
				{
					Function_82(&Global_62527, 7, Global_30668[1], "$/content/Frontier/Mini_Games/LiarsDice_THI/LiarsDice_THI", 4294967295, 0, "ThiLiarsDice", 426, 167,344f, 73,755f, 2224,521f, 1.0f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "thiv_liarsdice"));
					Function_81(&Global_62527, 7, 20);
				}
				Function_82(&Global_62527, 8, Global_30668[1], "$/content/Frontier/Mini_Games/FiveFingerFillet_THI/FiveFingerFillet_THI", 4294967295, 0, "ThiFiveFinger", 353, 161,0631f, 73,82803f, 2294,619f, 2,2f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "thiv_fff"));
				Function_81(&Global_62527, 8, 1);
				Function_79(&Global_62527, 8);
				CREATE_PROP_IN_LAYOUT(Local_4, Function_78(), "$/fragments/p_gen_feedBag01x", 128,186f, 73,286f, 2229,634f, 0.0f, 180.0f, 0.0f, 0);
				if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), MAKE_TIME_OF_DAY_EX(21, false, 0, 0)))
				{
					CREATE_PROP_IN_LAYOUT(Local_4, Function_78(), "$/fragments/p_gen_deadPokerPlayer01x", 164,09f, 73,725f, 2224,024f, 0.0f, -122,487f, 0.0f, 0);
				}
				Function_77(iScriptParam_0);
				Function_73(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 70.0f, 8, 70, 0);
				Function_72(&Global_17483[975] + 120, 2, 5.0f, 1, 4294967295);
				Function_73(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 70.0f, 8, 70, 0);
				Function_72(&Global_17483[875] + 120, 2, 5.0f, 1, 4294967295);
				Function_73(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 70.0f, 8, 70, 0);
				Function_72(&Global_17483[1075] + 120, 2, 5.0f, 1, 4294967295);
				Function_73(15, 1, 0, 50, 50, 7, 2050, 0, 2, iScriptParam_0, "$/Content/Ambient/Town/first_time_duel", 31, 0, 200.0f, 2, 60, Function_67(2, 1, 3));
				Function_66(StackVal, &Global_17483[1575] + 120, 4, 1);
				Function_65(iScriptParam_0);
				Function_73(35, 1, 25, 4294967276, 50, 1, 0, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_town_abduction", 63, 2, 70.0f, 8, 110, 0);
				Function_72(&Global_17483[3575] + 120, 2, 3.0f, 64, 4294967295);
				Function_64(&Global_17483[3575] + 120, -3.0f, 2);
				Function_62(iScriptParam_0);
				if (!Global_26003[5])
				{
					CREATE_OBSTACLE_IN_LAYOUT(Local_4, "Dixon_Crossing", 173,56f, 73,482f, 2065,165f, 0.0f, 349.0f, 0.0f, 30.0f, 20.0f, 80.0f);
				}
				iLocal_239 = 8;
				bLocal_244 = false;
				break;
			
			case 0x00000008:
				if (Function_57(iScriptParam_0, &Global_6614, iLocal_527))
				{
					Function_53(StackVal, 0, 0,1f, 4, Local_4, 1);
					Function_49(2, 4294967295, 4294967295, 0, 3);
					Function_47(Local_4);
				}
				else
				{
					Function_53(StackVal, 4, 0.0f, 2, Local_4, 1);
					if (!NET_IS_IN_SESSION())
					{
						Function_46(2);
					}
					Function_45(64);
					Function_49(2, 4294967295, 4294967295, 0, 3);
				}
				Function_130(&(Global_29008[iScriptParam_0]), 512);
				iLocal_239 = 9;
				bLocal_244 = false;
				break;
			
			case 0x00000009:
				if (Global_16524 == 0)
				{
					Function_40(1, 1);
					Global_16524 = 1;
				}
				Function_38(Local_4, iScriptParam_0);
				Function_130(&(Global_29008[iScriptParam_0]), 4);
				Function_37("Finished Initializing Thieves Landing", 5.0f);
				iLocal_239 = 10;
				bLocal_244 = false;
				break;
			
			case 0x0000000A:
				if (!Function_36(Global_62981, 1))
				{
					if (Function_34(&(Global_30668[1]), 0))
					{
						Function_33(&Global_62981, 1);
					}
				}
				if (!Function_36(Global_62981, 2))
				{
					if (Function_31(&(Global_30668[1])))
					{
						Function_33(&Global_62981, 2);
					}
				}
				if (!Function_36(Global_62981, 4))
				{
					if (Function_29(&(Global_30668[1])))
					{
						Function_33(&Global_62981, 4);
					}
				}
				if (!Function_36(Global_62981, 8))
				{
					if (Function_27(&(Global_30668[1])))
					{
						Function_23(&(Global_30668[1]));
						Function_33(&Global_62981, 8);
					}
				}
				if (!Function_36(Global_62981, 64))
				{
					if (Function_21(&(Global_30668[1])))
					{
						Function_33(&Global_62981, 64);
					}
				}
				Function_18(&uLocal_528);
				if (Function_127(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_239 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_244);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(1);
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(1);
	Function_99(0);
	if (Function_140())
	{
		ENABLE_CHILD_SECTOR("thi_gates01x");
		ENABLE_CHILD_SECTOR("thi_gates02x");
	}
	Function_12(&Global_6614, &Global_7657, iScriptParam_0, (iLocal_527 || Global_3380));
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_1();
	Function_45(64);
	Function_92(&(Global_29008[iScriptParam_0]), 32);
	Function_92(&(Global_29008[iScriptParam_0]), 64);
	Function_92(&(Global_29008[iScriptParam_0]), 8);
	Function_92(&(Global_29008[iScriptParam_0]), 512);
	Function_92(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_245))
	{
		TERMINATE_SCRIPT(bLocal_245);
	}
	Function_37("Unloaded Thieves Landing", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x153D / 5437
{
	Global_28842.f_44 = 4294967295;
	return;
}

void Function_2(int iParam0) //Position: 0x1549 / 5449
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x157F / 5503
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x15A1 / 5537
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x15B7 / 5559
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x15CD / 5581
{
	Function_7(&Local_12 + 4);
	RELEASE_LAYOUT_REF(Local_12);
	return;
}

void Function_7(int iParam0) //Position: 0x15DF / 5599
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_8(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x1605 / 5637
{
	if (Function_10(uParam0[iParam13], 4))
	{
		if (Function_10(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_9(uParam0[iParam13], 1);
			Function_9(uParam0[iParam13], 2);
			Function_9(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x1733 / 5939
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x174D / 5965
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x176A / 5994
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1775 / 6005
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_140())
	{
		return;
	}
	if (Function_127(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(iParam2), 12));
		Function_92(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_16(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_16(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_110(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_110(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_127(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_105(2) || Function_127(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2) && !Function_16(uParam0[iVar02], 4))
		{
			Function_13(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_16(uParam0[iVar02], 2) && !Function_16(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_130(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1960 / 6496
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_111(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_16(uParam0[iParam22], 1) && !bParam3)
	{
		Function_111(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0x1AAF / 6831
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

int Function_15(int iParam0) //Position: 0x1ADA / 6874
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

bool Function_16(var uParam0, int iParam1) //Position: 0x1B0E / 6926
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_17(int iParam0) //Position: 0x1B2A / 6954
{
	if (!Function_5(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_18(int iParam0) //Position: 0x1FD8 / 8152
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (*iParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*iParam0)[bVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*iParam0)[bVar04], "UseCase1")))
			{
				Function_33(iParam0[bVar04] + 8, 64);
				if (Function_36(StackVal, 2))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_36(StackVal, 4), "UseCase1")))
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_36(StackVal, 16))
				{
					Function_19(iParam0[bVar04] + 8, 64);
				}
				else if (Function_36(StackVal, 32))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_19(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_19(iParam0[bVar04] + 8, 64);
				}
				if (Function_36(StackVal, 2))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_36(StackVal, 4))
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
			}
			else
			{
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[bVar04])
					{
						if (Function_36(StackVal, 64))
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_36(Function_36(StackVal, 64), 16))
					{
						Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_19(iParam0[bVar04] + 8, 64);
						if (Function_36(StackVal, 1))
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_36(Function_36(StackVal, 64), 16))
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_19(iParam0[bVar04] + 8, 64);
					if (Function_36(StackVal, 1))
					{
						Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_36(StackVal, 64))
					{
						if (Function_36(StackVal, 32))
						{
							Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_36(StackVal, 8))
					{
						Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_19(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_36(StackVal, 64))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_36(StackVal, 8))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_19(iParam0[bVar04] + 8, 64);
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_36(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_19(var uParam0, bool bParam1) //Position: 0x2768 / 10088
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_20(vector3 vParam0) //Position: 0x277B / 10107
{
	if (Function_36(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

bool Function_21(int iParam0) //Position: 0x27A2 / 10146
{
	bool bVar0;
	
	Function_22(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_22(*iParam0), 1.0f, "p_gen_organstool01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make piano stool fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_22(int iParam0) //Position: 0x2821 / 10273
{
	if (iParam0 == Global_30668[1])
	{
		return 154,443f, 73,832f, 2245,542f;
	}
	if (iParam0 == Global_30640[0])
	{
		return -2170,534f, 16,879f, 2589,138f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 721,884f, 78,476f, 1311,799f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_23(int iParam0) //Position: 0x28A3 / 10403
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	Function_26(*iParam0);
	vVar0 = { StackVal, StackVal, Function_26(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain", true);
	}
	Function_25(*iParam0);
	vVar0 = { StackVal, StackVal, Function_25(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain", true);
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		Function_24(*iParam0, iVar4);
		vVar0 = { StackVal, StackVal, Function_24(*iParam0, iVar4) };
		bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar0, 0,25f, 0);
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar0, 0,25f, 0);
		}
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar0, 0,25f, 0);
		}
		if (IS_GRINGO_VALID(bVar3))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain", true);
		}
		iVar4++;
	}
	return;
}

vector3 Function_24(int iParam0, int iParam1) //Position: 0x2AE1 / 10977
{
	if (iParam0 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			return -2192,956f, 16,5768f, 2591,536f;
		}
		if (iParam1 == 1)
		{
			return -2193,327f, 16,5768f, 2593,874f;
		}
		if (iParam1 == 2)
		{
			return -2192,68f, 16,5768f, 2592,817f;
		}
	}
	if (iParam0 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			return 163,185f, 73,837f, 2293,025f;
		}
		if (iParam1 == 1)
		{
			return 163,4155f, 73,837f, 2293,8f;
		}
		if (iParam1 == 2)
		{
			return 163,604f, 73,837f, 2294,628f;
		}
	}
	if (iParam0 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			return -4276,273f, 18,09486f, 4452,201f;
		}
		if (iParam1 == 1)
		{
			return -4275,895f, 18,09486f, 4451,213f;
		}
		if (iParam1 == 2)
		{
			return -4274,775f, 18,09486f, 4452,317f;
		}
	}
	if (iParam0 == Global_30707[3])
	{
		if (iParam1 == 0)
		{
			return 356,5144f, 76,29012f, 3446,935f;
		}
		if (iParam1 == 1)
		{
			return 356,5144f, 76,29012f, 3448,271f;
		}
		if (iParam1 == 2)
		{
			return 357,207f, 76,29012f, 3448,271f;
		}
	}
	if (iParam0 == Global_30723[1])
	{
		if (iParam1 == 0)
		{
			return -463,5462f, 152,3519f, 1598,171f;
		}
		if (iParam1 == 1)
		{
			return -464,753f, 152,3517f, 1598,612f;
		}
		if (iParam1 == 2)
		{
			return -462,8687f, 152,352f, 1597,15f;
		}
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_25(int iParam0) //Position: 0x2CC7 / 11463
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,299f, 16,57026f, 2593,136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,0631f, 73,82803f, 2294,619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,766f, 18,07059f, 4453,27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,6982f, 76,28821f, 3447,546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465,0943f, 152,3517f, 1596,716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_26(int iParam0) //Position: 0x2D99 / 11673
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,388f, 16,57687f, 2592,54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,1002f, 73,83751f, 2294,133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,772f, 18,07059f, 4453,844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,5946f, 76,28807f, 3448,024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464,3469f, 152,3559f, 1596,59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_27(int iParam0) //Position: 0x2E67 / 11879
{
	bool bVar0;
	
	Function_26(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_26(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_25(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_28(iParam0);
	return 1;
}

void Function_28(int iParam0) //Position: 0x2F6F / 12143
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_26(*iParam0);
	vVar0 = { StackVal, StackVal, Function_26(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		bVar4 = GRINGO_GET_USE_COMPONENT_EXT(bVar3, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(bVar4))
		{
			bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, 0);
			while (bVar5 >= 4294967295)
			{
				bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, bVar4);
				bVar7 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar6, bVar3);
				if (IS_PHYSINST_VALID(bVar7))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(bVar7), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(bVar7), 0);
				}
				bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, bVar5 + 1);
			}
		}
	}
	return;
}

bool Function_29(int iParam0) //Position: 0x304E / 12366
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (*iParam0 == Global_30685[0])
		{
			Function_30(*iParam0, iVar1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_30(*iParam0, iVar1), 1.0f, "p_gen_chair06x", 1);
		}
		else
		{
			Function_30(*iParam0, iVar1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_30(*iParam0, iVar1), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make liars dice chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

vector3 Function_30(int iParam0, int iParam1) //Position: 0x3110 / 12560
{
	if (iParam0 == Global_30685[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -4288,696f, 26,72937f, 4381,383f;
				break;
			
			case 0x00000001:
				return -4289,277f, 26,72937f, 4381,477f;
				break;
			
			case 0x00000002:
				return -4289,651f, 26,72937f, 4381,039f;
				break;
			
			case 0x00000003:
				return -4289,435f, 26,72937f, 4380,51f;
				break;
			
			case 0x00000004:
				return -4288,878f, 26,72937f, 4380,39f;
				break;
			
			case 0x00000005:
				return -4288,485f, 26,72937f, 4380,807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 167,5964f, 73,74156f, 2222,775f;
				break;
			
			case 0x00000001:
				return 167,958f, 73,74529f, 2222,327f;
				break;
			
			case 0x00000002:
				return 168,5496f, 73,74591f, 2222,387f;
				break;
			
			case 0x00000003:
				return 168,7889f, 73,74529f, 2222,935f;
				break;
			
			case 0x00000004:
				return 168,4313f, 73,74976f, 2223,425f;
				break;
			
			case 0x00000005:
				return 167,8298f, 73,74976f, 2223,35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -788,6586f, 13,16462f, 3698,422f;
				break;
			
			case 0x00000001:
				return -788,4316f, 13,16762f, 3698,957f;
				break;
			
			case 0x00000002:
				return -788,7964f, 13,165f, 3699,425f;
				break;
			
			case 0x00000003:
				return -789,389f, 13,165f, 3699,35f;
				break;
			
			case 0x00000004:
				return -789,6095f, 13,165f, 3698,805f;
				break;
			
			case 0x00000005:
				return -789,2333f, 13,165f, 3698,335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 856,9058f, 77,51558f, 1278,093f;
				break;
			
			case 0x00000001:
				return 856,6888f, 77,51558f, 1277,556f;
				break;
			
			case 0x00000002:
				return 857,0518f, 77,51558f, 1277,099f;
				break;
			
			case 0x00000003:
				return 857,629f, 77,51558f, 1277,148f;
				break;
			
			case 0x00000004:
				return 857,8614f, 77,51558f, 1277,699f;
				break;
			
			case 0x00000005:
				return 857,4864f, 77,51558f, 1278,173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_31(int iParam0) //Position: 0x33E4 / 13284
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_32(*iParam0, iVar1);
		bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_32(*iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make blackjack stool fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

vector3 Function_32(int iParam0, int iParam1) //Position: 0x3476 / 13430
{
	if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2685,328f, 31,35269f, 4284,425f;
				break;
			
			case 0x00000001:
				return -2686,254f, 31,35269f, 4284,686f;
				break;
			
			case 0x00000002:
				return -2686,982f, 31,35269f, 4284,026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -3640,897f, 42,76801f, 2104,235f;
				break;
			
			case 0x00000001:
				return -3640,023f, 42,76801f, 2104,636f;
				break;
			
			case 0x00000002:
				return -3639,895f, 42,76801f, 2105,61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 719,9783f, 78,4736f, 1312,265f;
				break;
			
			case 0x00000001:
				return 719,0787f, 78,4736f, 1312,605f;
				break;
			
			case 0x00000002:
				return 718,2963f, 78,4736f, 1312,011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 172,2084f, 73,75179f, 2224,902f;
				break;
			
			case 0x00000001:
				return 170,9445f, 73,75179f, 2224,73f;
				break;
			
			case 0x00000002:
				return 170,7396f, 73,74976f, 2223,559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_33(var uParam0, int iParam1) //Position: 0x361E / 13854
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_34(float fParam0, bool bParam1) //Position: 0x362D / 13869
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_35(*fParam0, iVar1, bParam1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_35(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_35(*fParam0, iVar1, 0);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_35(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
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

vector3 Function_35(int iParam0, int iParam1, bool bParam2) //Position: 0x36F0 / 14064
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801,0966f, 92,75807f, 2375,792f;
				break;
			
			case 0x00000001:
				return -801,4974f, 92,75435f, 2375,295f;
				break;
			
			case 0x00000002:
				return -801,2829f, 92,75435f, 2374,737f;
				break;
			
			case 0x00000003:
				return -800,724f, 92,76255f, 2374,656f;
				break;
			
			case 0x00000004:
				return -800,3233f, 92,75678f, 2375,122f;
				break;
			
			case 0x00000005:
				return -800,5463f, 92,75435f, 2375,677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164,353f, 73,75671f, 2230,925f;
				break;
			
			case 0x00000001:
				return 164,5807f, 73,82056f, 2231,472f;
				break;
			
			case 0x00000002:
				return 164,2043f, 73,75299f, 2231,971f;
				break;
			
			case 0x00000003:
				return 163,6548f, 73,76118f, 2231,889f;
				break;
			
			case 0x00000004:
				return 163,4103f, 73,76118f, 2231,366f;
				break;
			
			case 0x00000005:
				return 163,7511f, 73,75671f, 2230,869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157,424f, 16,88292f, 2596,033f;
				break;
			
			case 0x00000001:
				return -2158,012f, 16,94059f, 2595,997f;
				break;
			
			case 0x00000002:
				return -2158,228f, 16,87845f, 2595,416f;
				break;
			
			case 0x00000003:
				return -2157,847f, 16,87845f, 2594,96f;
				break;
			
			case 0x00000004:
				return -2157,261f, 16,87845f, 2595,042f;
				break;
			
			case 0x00000005:
				return -2157,04f, 16,87845f, 2595,596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 748,5359f, 82,6927f, 1267,343f;
					break;
				
				case 0x00000001:
					return 749,138f, 82,6927f, 1266,645f;
					break;
				
				case 0x00000002:
					return 750,045f, 82,6927f, 1266,796f;
					break;
				
				case 0x00000003:
					return 750,0344f, 82,6917f, 1267,552f;
					break;
				
				case 0x00000004:
					return 749,7606f, 82,6927f, 1268,372f;
					break;
				
				case 0x00000005:
					return 748,8501f, 82,6927f, 1268,207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717,6248f, 78,47099f, 1325,972f;
					break;
				
				case 0x00000001:
					return 717,0453f, 78,47099f, 1325,919f;
					break;
				
				case 0x00000002:
					return 716,8008f, 78,47099f, 1325,396f;
					break;
				
				case 0x00000003:
					return 717,1418f, 78,47099f, 1324,928f;
					break;
				
				case 0x00000004:
					return 717,7181f, 78,47099f, 1324,969f;
					break;
				
				case 0x00000005:
					return 717,9684f, 78,47099f, 1325,495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138,6693f, 119,2419f, 1344,049f;
				break;
			
			case 0x00000001:
				return -139,2573f, 119,2419f, 1343,961f;
				break;
			
			case 0x00000002:
				return -139,4945f, 119,2419f, 1343,419f;
				break;
			
			case 0x00000003:
				return -139,1212f, 119,2419f, 1342,946f;
				break;
			
			case 0x00000004:
				return -138,5368f, 119,2419f, 1343,024f;
				break;
			
			case 0x00000005:
				return -138,2953f, 119,2419f, 1343,58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701,487f, 31,151f, 4278,554f;
				break;
			
			case 0x00000001:
				return -2701,713f, 31,151f, 4277,994f;
				break;
			
			case 0x00000002:
				return -2701,347f, 31,151f, 4277,538f;
				break;
			
			case 0x00000003:
				return -2700,726f, 31,151f, 4277,604f;
				break;
			
			case 0x00000004:
				return -2700,508f, 31,151f, 4278,2f;
				break;
			
			case 0x00000005:
				return -2700,919f, 31,151f, 4278,653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795,5794f, 13,16767f, 3699,937f;
				break;
			
			case 0x00000001:
				return -795,8744f, 13,16057f, 3699,083f;
				break;
			
			case 0x00000002:
				return -794,9905f, 13,16057f, 3698,687f;
				break;
			
			case 0x00000003:
				return -794,196f, 13,16057f, 3699,235f;
				break;
			
			case 0x00000004:
				return -794,2787f, 13,16057f, 3700,203f;
				break;
			
			case 0x00000005:
				return -795,169f, 13,16057f, 3700,608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_36(bool bParam0, int iParam1) //Position: 0x3C6A / 15466
{
	return (bParam0 && iParam1) == 0;
}

void Function_37(bool bParam0, float fParam1) //Position: 0x3C77 / 15479
{
	if (!Function_105(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x3CB5 / 15541
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_39(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_140())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x3DAF / 15791
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x3DBC / 15804
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_44(uParam0);
	Function_43(iVar0);
	PRINTNL();
	Function_41(uParam0, iVar0, iParam1);
	return;
}

void Function_41(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3DE1 / 15841
{
	int iVar0;
	
	Function_44(bParam0);
	Function_43(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_42();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_42() //Position: 0x3F5A / 16218
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_43(bool bParam0) //Position: 0x3F66 / 16230
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_44(int iParam0) //Position: 0x3FAC / 16300
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

void Function_45(int iParam0) //Position: 0x3FF2 / 16370
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_46(int iParam0) //Position: 0x4006 / 16390
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 3;
	}
	Global_28842.f_44 = iParam0;
	return;
}

void Function_47(bool bParam0) //Position: 0x4024 / 16420
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_78(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_48(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_48(int iParam0) //Position: 0x410F / 16655
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_49(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x412C / 16684
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = iParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = iParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_50();
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

void Function_50() //Position: 0x4210 / 16912
{
	int iVar0;
	
	Global_26960 = Function_51(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_51(int iParam0) //Position: 0x425E / 16990
{
	if (!Function_52(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_52(bool bParam0) //Position: 0x4276 / 17014
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_53(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x428B / 17035
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = iParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_56();
	}
	if (bParam5)
	{
		Function_54(1048576);
	}
}

void Function_54(int iParam0) //Position: 0x439E / 17310
{
	Function_55(&Global_28842, iParam0);
	return;
}

void Function_55(var uParam0, var uParam1) //Position: 0x43AC / 17324
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_56() //Position: 0x43C7 / 17351
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_54(16384);
	}
	return;
}

bool Function_57(int iParam0, var uParam1, bool bParam2) //Position: 0x43E3 / 17379
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_127(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_58(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_140())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *uParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

int Function_58(var uParam0, bool bParam1) //Position: 0x44A3 / 17571
{
	int iVar0;
	
	iVar0 = Function_60(uParam0);
	if (!Function_59(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_59(int iParam0) //Position: 0x44E0 / 17632
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_60(int iParam0) //Position: 0x44F7 / 17655
{
	if (!Function_61(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_61(int iParam0) //Position: 0x4511 / 17681
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_62(int iParam0) //Position: 0x4527 / 17703
{
	Function_73(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_63(&Global_17483[3375] + 120, 2, 0);
	return;
}

void Function_63(int iParam0, int iParam1, int iParam2) //Position: 0x458A / 17802
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_64(int iParam0, var uParam1, int iParam2) //Position: 0x459E / 17822
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_65(int iParam0) //Position: 0x45B4 / 17844
{
	Function_73(41, 1, 25, 4294967276, 50, 1, 0, 1, 4, iParam0, "$/content/Ambient/Town/event_unforgiven", 63, 2, 65.0f, 8, 100, 0);
	return;
}

void Function_66(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4603 / 17923
{
	iParam0->f_128 = uParam1;
	(iParam0 + 128)->f_4 = uParam2;
	(iParam0 + 128)->f_8 = uParam3;
}

int Function_67(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4621 / 17953
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_71(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_68(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_68(bParam0, bParam1, bParam2, 4294967295);
}

int Function_68(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x467F / 18047
{
	var uVar0;
	
	if (!Function_70(bParam2))
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
	uVar0 = Function_71(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_69(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_69(int iParam0) //Position: 0x47D4 / 18388
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_70(int iParam0) //Position: 0x4812 / 18450
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_71(int iParam0, int iParam1, int iParam2) //Position: 0x4827 / 18471
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_72(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x4847 / 18503
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x486D / 18541
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Function_74(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_74(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x48AF / 18607
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_76(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_75(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_76(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_75(int iParam0, int iParam1) //Position: 0x4C3F / 19519
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_76(int iParam0) //Position: 0x4C60 / 19552
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_77(var uParam0) //Position: 0x4C76 / 19574
{
	Function_73(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, uParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

var Function_78() //Position: 0x4CC8 / 19656
{
	int iVar0;
	
	return iVar0;
}

void Function_79(var uParam0, int iParam1) //Position: 0x4CD0 / 19664
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

bool Function_80(int iParam0) //Position: 0x4CEB / 19691
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_81(var uParam0, int iParam1, float fParam2) //Position: 0x4D00 / 19712
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_82(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, bool bParam13) //Position: 0x4D24 / 19748
{
	if (Function_140() && !bParam12)
	{
		return;
	}
	if (!Function_140() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_67(iParam2, iParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[iParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[iParam140]->f_8 = 4294967295;
	}
	uParam0[iParam140]->f_40 = "";
	uParam0[iParam140]->f_44 = "";
	uParam0[iParam140]->f_48 = bParam13;
	uParam0[iParam140]->f_96 = iParam7;
	uParam0[iParam140]->f_104 = 5;
	uParam0[iParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[iParam140]->f_132 = iParam4;
	uParam0[iParam140]->f_136 = 4294967295;
	uParam0[iParam140]->f_140 = 4294967295;
	uParam0[iParam140]->f_144 = 4294967295;
	strcpy(uParam0[iParam140] + 12, cParam6, 16);
	*(uParam0[iParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[iParam140]->f_64 = iParam11;
	uParam0[iParam140]->f_72 = iParam2;
	if (Global_25974[iParam1] && Function_90(iParam1))
	{
		Function_83(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_83(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x4E70 / 20080
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_89(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_88(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_87(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_86(uVar3);
		vVar7 = { StackVal, StackVal, Function_86(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_86(StackVal);
				vVar4 = { StackVal, StackVal, Function_86(StackVal) };
				if (Function_85(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_84(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_84(bool bParam0) //Position: 0x5053 / 20563
{
	switch (bParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_85(vector3 vParam0, vector3 vParam3) //Position: 0x518A / 20874
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_86(bool bParam0) //Position: 0x51B7 / 20919
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_87(vector3 vParam0) //Position: 0x520E / 21006
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

int Function_88(int iParam0) //Position: 0x525C / 21084
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_89(vector3 vParam0) //Position: 0x5314 / 21268
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_90(int iParam0) //Position: 0x532C / 21292
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

void Function_91(int iParam0) //Position: 0x534F / 21327
{
	Function_73(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_63(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_92(var uParam0, int iParam1) //Position: 0x53B6 / 21430
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_93(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x53CD / 21453
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_98(bParam1, bParam2);
	if (!Function_97(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_96(bParam4, 0);
		}
		else
		{
			Function_95(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_96(bParam5, 0);
		}
		else
		{
			Function_95(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", true);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), false);
			if (DECOR_CHECK_EXIST(bParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(bParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		GET_OBJECT_POSITION(bParam6, &uVar0);
		bVar3[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		bVar3[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(bVar3[0]))
		{
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_94(bVar3[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar6) && !bVar6 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar6);
			}
			GRINGO_ENABLE_SPAWN(bVar3[0], 0);
		}
		if (IS_GRINGO_VALID(bVar3[1]))
		{
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_94(bVar3[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar7) && !bVar7 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar7, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar7, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar7);
			}
			GRINGO_ENABLE_SPAWN(bVar3[1], 0);
		}
		if (Global_16537[iParam021].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(bParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(bParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", true);
		}
	}
	Global_16537[iParam021].f_68 = bParam4;
	Global_16537[iParam021].f_72 = bParam5;
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_56))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_56);
		Global_16537[iParam021].f_56 = "";
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_60))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_60);
		Global_16537[iParam021].f_60 = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iParam021].f_64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iParam021].f_64);
		Global_16537[iParam021].f_64 = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(bParam2, &(Global_16537[iParam021]));
	}
	Global_16537[iParam021].f_12 = GET_OBJECT_HEADING(bParam2);
	GET_OBJECT_POSITION(bParam3, &Global_16537[iParam021] + 16);
	Global_16537[iParam021].f_76 = bParam6;
}

var Function_94(bool bParam0, bool bParam1) //Position: 0x5760 / 22368
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x576D / 22381
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_96(bool bParam0, bool bParam1) //Position: 0x57C1 / 22465
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

bool Function_97(int iParam0) //Position: 0x5812 / 22546
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_98(bool bParam0, bool bParam1) //Position: 0x5828 / 22568
{
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bParam0), "nPlayerUse", "MyRestartFlag", bParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

void Function_99(bool bParam0) //Position: 0x5982 / 22914
{
	if (bParam0)
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Global_34573), "SHOP_SET_UNLAWFUL_TOWN", true);
	}
	else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "SHOP_SET_UNLAWFUL_TOWN"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "SHOP_SET_UNLAWFUL_TOWN");
	}
	return;
}

int Function_100(bool bParam0, int iParam1) //Position: 0x59FC / 23036
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_PERS_CHAR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(bVar0), "Settings", "blipID", iParam1))
		{
			bVar1 = GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0));
			if (IS_BLIP_VALID(bVar1))
			{
				REMOVE_BLIP(bVar1);
			}
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_BLIP_ICON: This Shopkeeper is not set up correctly in the XML data - Missing blipID in Settings");
	}
	return 0;
}

int Function_101(bool bParam0, int iParam1) //Position: 0x5AEB / 23275
{
	bool bVar0;
	
	if (!IS_PERS_CHAR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(bVar0), "ShopSettings", "ShopType", iParam1))
		{
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_TYPE: This Shopkeeper is not set up correctly in the XML data - Missing ShopType in ShopSettings");
	}
	return 0;
}

int Function_102(bool bParam0, bool bParam1) //Position: 0x5BCA / 23498
{
	bool bVar0;
	
	if (!IS_PERS_CHAR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_VOLUME_VALID(bParam1))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar0))
		{
			if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bVar0), "ShopSettings", "ShopVolumeRef", GET_OBJECT_FROM_VOLUME(bParam1)))
			{
				return 1;
			}
			LOG_ERROR("SK_SHOP_REGISTER_VOLUME: This Shopkeeper is not set up correctly in the XML data - Missing ShopVolumeRef in ShopSettings");
		}
	}
	else
	{
		LOG_ERROR("SK_SHOP_REGISTER_VOLUME: called with an invalid volume");
	}
	return 0;
}

void Function_103(bool bParam0, bool bParam1) //Position: 0x5CFF / 23807
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(bParam0, "owner", bParam1);
	return;
}

var Function_104(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x5D1F / 23839
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_5(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_105(int iParam0) //Position: 0x5DBB / 23995
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_106(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x5DD7 / 24023
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_105(2))
	{
		return;
	}
	if (Function_127(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2))
		{
			if (Function_107(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_92(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_130(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_107(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x5E89 / 24201
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_127(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(uParam0, 2))
	{
		return 1;
	}
	if (Function_16(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_109(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_89(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_110(uParam0, 4);
	}
	Function_108(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_108(bool bParam0, bool bParam1) //Position: 0x5FF4 / 24564
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_89(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_89(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_89(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_89(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_89(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_89(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_109(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x6130 / 24880
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_110(var uParam0, int iParam1) //Position: 0x6249 / 25161
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_111(var uParam0, int iParam1) //Position: 0x6260 / 25184
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_112(int iParam0, var uParam1, bool bParam2) //Position: 0x626F / 25199
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 48);
	return;
}

void Function_113(int iParam0, var uParam1, bool bParam2) //Position: 0x62D5 / 25301
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 36);
	return;
}

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x633D / 25405
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 24);
	return;
}

void Function_115(int iParam0, var uParam1, bool bParam2) //Position: 0x63A0 / 25504
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 12);
	return;
}

void Function_116(int iParam0, var uParam1, bool bParam2) //Position: 0x6406 / 25606
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 60);
	return;
}

void Function_117(int iParam0, var uParam1, bool bParam2) //Position: 0x646A / 25706
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020]);
	PRINTVECTOR(*uParam1[bVar020]);
	PRINTNL();
	return;
}

void Function_118(int iParam0, var uParam1, bool bParam2) //Position: 0x64D9 / 25817
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	uParam1[bVar020]->f_72 = bParam2;
	return;
}

void Function_119(int iParam0, var uParam1, vector3 vParam2) //Position: 0x6534 / 25908
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_85(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_120(int iParam0, var uParam1, vector3 vParam2) //Position: 0x659A / 26010
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_85(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_121(int iParam0, var uParam1, vector3 vParam2) //Position: 0x6602 / 26114
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_85(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_122(int iParam0, var uParam1, vector3 vParam2) //Position: 0x666C / 26220
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_85(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_123(int iParam0, var uParam1, vector3 vParam2) //Position: 0x66D1 / 26321
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_85(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_124(int iParam0, var uParam1, vector3 vParam2) //Position: 0x6739 / 26425
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_85(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

void Function_125(int iParam0, var uParam1, int iParam2) //Position: 0x679C / 26524
{
	int iVar0;
	
	iVar0 = iParam0;
	uParam1[iVar020]->f_76 = iParam2;
	return;
}

int Function_126(int iParam0) //Position: 0x67B0 / 26544
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_127(&(Global_29008[iParam0]), 4);
}

bool Function_127(var uParam0, int iParam1) //Position: 0x67CC / 26572
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_128(var uParam0, var uParam1, int iParam2) //Position: 0x67E8 / 26600
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_140())
	{
		return 1;
	}
	if (Function_127(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_17(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_16(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_129(var uParam0, var uParam1, int iParam2) //Position: 0x68B4 / 26804
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_140())
	{
		return;
	}
	if (!Function_127(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_17(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(iParam2), 12));
			Function_130(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_111(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_111(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x698A / 27018
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_131() //Position: 0x6999 / 27033
{
	bool bVar0;
	
	Function_139(3, 3);
	bVar0 = bVar0;
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/factory_foreman", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_back", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_knock_on_door", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_leanrail_tlkpsnt_hrassol_link", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_leanwall_tlkpsnt_hrassol_link", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_137(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	if (!Function_132(&Local_12 + 4))
	{
		return 0;
	}
	Local_12 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(Local_12))
	{
		Local_12 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	*(&Local_12 + 632) = { 124,9729f, 76,74391f, 2235,933f };
	*(&Local_12 + 632 + 12) = { 0.0f, 166,6715f, 0.0f };
	Local_12.f_656 = CREATE_POINT_IN_LAYOUT(Local_12, "player_save_flag_THI", 124,9729f, 76,74391f, 2235,933f, 0.0f, 166,6715f, 0.0f);
	*(&Local_12 + 660) = { 136,0498f, 73,67673f, 2317,337f };
	*(&Local_12 + 660 + 12) = { 0.0f, 93,55386f, 0.0f };
	Local_12.f_684 = CREATE_POINT_IN_LAYOUT(Local_12, "player_shop_flag_GEN", 136,0498f, 73,67673f, 2317,337f, 0.0f, 93,55386f, 0.0f);
	*(&Local_12 + 688) = { 165,9136f, 73,57568f, 2192,765f };
	*(&Local_12 + 688 + 12) = { 0.0f, -123,0706f, 0.0f };
	Local_12.f_712 = CREATE_POINT_IN_LAYOUT(Local_12, "player_shop_flag_GUN", 165,9136f, 73,57568f, 2192,765f, 0.0f, -123,0706f, 0.0f);
	*(&Local_12 + 716) = { 179,1635f, 76,41071f, 2181,879f };
	*(&Local_12 + 716 + 12) = { 0.0f, -124,0029f, 0.0f };
	Local_12.f_740 = CREATE_POINT_IN_LAYOUT(Local_12, "player_shop_flag_DOC", 179,1635f, 76,41071f, 2181,879f, 0.0f, -124,0029f, 0.0f);
	*(&Local_12 + 744) = { 175,666f, 73,4645f, 2185,915f };
	*(&Local_12 + 744 + 12) = { 0.0f, -126,0845f, 0.0f };
	Local_12.f_768 = CREATE_POINT_IN_LAYOUT(Local_12, "player_shop_flag_TAL", 175,666f, 73,4645f, 2185,915f, 0.0f, -126,0845f, 0.0f);
	Local_12.f_772 = CREATE_POINT_IN_LAYOUT(Local_12, "player_purchase_flag_THI", 124,5248f, 76,76834f, 2238,376f, 0.0f, 166,6715f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn", "rand_idle_stand", 103,2619f, 73,28625f, 2348,182f, 0.0f, -18,37911f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall", 99,16253f, 73,28625f, 2342,14f, 0.0f, 27,80631f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table", "Rand_Idle_NearWall_Shoulder_L", 94,69112f, 73,28625f, 2345,365f, 0.0f, 476,4314f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall", "look_out_window_L", 112,6999f, 73,28625f, 2361,683f, 0.0f, 47,89365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground", 122,6798f, 73,28625f, 2343,501f, 0.0f, 92,65137f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground", 119,9363f, 73,28625f, 2340,813f, 0.0f, -181,9192f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall", 118,175f, 73,28747f, 2341,222f, 0.0f, 177,6908f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn4", "Rand_Idle_NearWall", 128,0218f, 73,40476f, 2352,993f, 0.0f, 185,1149f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn5", "Rand_Idle_NearWall", 145,9207f, 73,28773f, 2372,854f, 0.0f, 209,6982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn6", "Rand_Idle_NearWall", 155,8487f, 73,46634f, 2376,893f, 0.0f, 26,72732f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn", "repair_kneel", 109,6413f, 73,3111f, 2359,164f, 0.0f, -218,6753f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn1", "repair_kneel", 110,8482f, 73,28625f, 2369,707f, 0.0f, -58,15013f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn2", "stand_hammer_wall", 121,7901f, 73,28625f, 2378,15f, 0.0f, 90,82857f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn3", "repair_kneel", 141,8578f, 73,28625f, 2366,919f, 0.0f, -60,71556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn4", "repair_kneel", 141,5047f, 73,28625f, 2388,455f, 0.0f, 90,78696f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn5", "repair_kneel", 130,4333f, 73,28625f, 2392,791f, 0.0f, 116,4589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn1", "rand_idle_stand", 122,6969f, 73,41091f, 2346,896f, 0.0f, 96,77221f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn2", "rand_idle_stand", 122,7366f, 73,40178f, 2353,972f, 0.0f, 91,07431f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn3", "rand_idle_stand", 147,5175f, 73,28064f, 2374,788f, 0.0f, 67,15102f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_announce1", "stand_announce", 126,4111f, 73,28625f, 2361,106f, 0.0f, 178,9376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_announce3", "rand_idle_stand", 110,8999f, 73,28446f, 2334,17f, 0.0f, 67,23986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall1", "stand_hammer_wall", 106,5678f, 73,28625f, 2361,159f, 0.0f, 114,0241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall3", "stand_hammer_wall", 129,7742f, 73,28625f, 2363,876f, 0.0f, -90,71701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall4", "stand_hammer_wall", 136,3572f, 73,28625f, 2388,477f, 0.0f, -95,94325f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall5e", "look_out_window_L", 122,313f, 73,28625f, 2390,016f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall6", "stand_hammer_wall", 138,6337f, 73,28625f, 2382,366f, 0.0f, 37,34141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any", "stand_lookdistance_w_any", 146,6764f, 76,74119f, 2346,201f, 0.0f, -129,7471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", 172,5974f, 73,4637f, 2370,526f, 0.0f, -137,664f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table1", "stand_hammer_table", 132,8993f, 73,40009f, 2354,398f, 0.0f, -359,4876f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table2", "repair_kneel", 114,1847f, 73,28625f, 2364,058f, 0.0f, -93,23808f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table3", "repair_kneel", 101,8119f, 73,28625f, 2360,029f, 0.0f, 207,1182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table4", "repair_kneel", 130,3594f, 73,28625f, 2374,866f, 0.0f, -147,32f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table5", "repair_kneel", 138,5067f, 73,28625f, 2380,349f, 0.0f, 115,6076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table6", "repair_kneel", 147,1725f, 73,28625f, 2382,578f, 0.0f, -152,5903f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall7", "stand_hammer_wall", 134,9044f, 73,54241f, 2344,865f, 0.0f, 5,65044f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall8", "stand_hammer_wall", 136,0702f, 73,58056f, 2339,477f, 0.0f, 95,47497f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall9", "stand_hammer_wall", 132,2244f, 73,55187f, 2333,965f, 0.0f, -86,92f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall10", "stand_hammer_wall", 132,6039f, 73,55187f, 2338,582f, 0.0f, 274,2444f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table8", "stand_hammer_table", 139,5221f, 75,37659f, 2337,468f, 0.0f, 27,90876f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table9", "Rand_Idle_Sit_Ground", 129,514f, 75,36185f, 2339,563f, 0.0f, 365,377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn6", "repair_kneel", 129,8123f, 73,55024f, 2329,274f, 0.0f, -85,16898f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn9", "repair_kneel", 133,7885f, 73,62351f, 2341,859f, 0.0f, 5,706647f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn10", "repair_kneel", 134,4044f, 73,55187f, 2333,902f, 0.0f, 91,81328f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn7", "lean_fence_H_talking", 146,392f, 73,56291f, 2330,533f, 0.0f, 116,5848f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn8", "Rand_Idle_NearWall", 147,2202f, 73,67674f, 2317,726f, 0.0f, -84,78227f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn10", "Rand_Idle_NearWall", 145,0678f, 73,67674f, 2310,818f, 0.0f, 3,75836f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn", "rand_idle_stand", 149,8716f, 73,59654f, 2338,909f, 0.0f, -78,05576f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn1", "rand_idle_stand", 163,1858f, 73,55964f, 2337,646f, 0.0f, -86,18456f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn3", "rand_idle_stand", 152,2381f, 73,66331f, 2312,329f, 0.0f, -175,3676f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn11", "repair_kneel", 161,3031f, 73,57859f, 2331,742f, 0.0f, 89,69541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn12", "Rand_Idle_NearWall", 147,2681f, 73,56516f, 2340,306f, 0.0f, 275,847f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn13", "repair_kneel", 153,1657f, 73,59799f, 2334,79f, 0.0f, 180,0599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn14", "repair_kneel", 157,721f, 73,85658f, 2293,901f, 0.0f, 185,1122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall11", "stand_hammer_table", 157,052f, 73,54263f, 2331,817f, 0.0f, -13,07989f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn", "nlean_rail", 146,1787f, 76,53436f, 2325,79f, 0.0f, -84,59093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn11", "look_out_window_L", 158,913f, 73,42699f, 2376,41f, 0.0f, 71,31748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn1", "nlean_rail", 138,7581f, 76,74641f, 2349,171f, 0.0f, 3,735764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn2", "nlean_rail", 125,9068f, 76,48775f, 2330,677f, 0.0f, 182,2475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_peeing_b_any", "stand_peeing_b_any", 80,02197f, 73,53244f, 2300,382f, 0.0f, 39,69128f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn3", "lean_rail_forward", 163,1191f, 73,55384f, 2340,401f, 0.0f, -88,30766f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn4", "lean_rail_forward", 148,5517f, 73,68066f, 2309,117f, 0.0f, -47,8219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn5", "nlean_rail", 146,7918f, 76,74517f, 2349,736f, 0.0f, -85,14004f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn6", "lean_rail_forward", 150,1364f, 73,70547f, 2346,601f, 0.0f, -90,62691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn13", "Rand_Idle_NearWall", 129,3307f, 73,69775f, 2301,194f, 0.0f, 92,15813f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn14", "Rand_Idle_NearWall", 130,4859f, 73,68796f, 2293,559f, 0.0f, 3,729819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn15", "Rand_Idle_NearWall", 134,9162f, 73,67674f, 2311,673f, 0.0f, 6,688671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn4", "rand_idle_stand", 129,1465f, 73,69827f, 2293,931f, 0.0f, 55,72235f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn5", "nlean_rail", 133,3266f, 73,69484f, 2320,677f, 0.0f, 95,61906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee_nospawn", "Pee", 135,813f, 73,28625f, 2324,196f, 0.0f, 206,8083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn9", "lean_rail_forward", 163,5975f, 73,47475f, 2367,703f, 0.0f, 66,37308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn10", "lean_rail_forward", 131,3503f, 73,70515f, 2288,613f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn8", "nlean_rail", 104,1816f, 73,74413f, 2279,425f, 0.0f, 170,4221f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn9", "rand_idle_stand", 106,2985f, 73,66705f, 2279,59f, 0.0f, 553,5125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn6", "rand_idle_stand", 97,97188f, 73,7619f, 2278,514f, 0.0f, 171,6827f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn16", "Rand_Idle_NearWall", 102,744f, 73,77241f, 2278,027f, 0.0f, 170,537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_mid1", "stand_lookdistance_w_any", 114,3716f, 73,60643f, 2265,442f, 0.0f, -51,31233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any3", "look_out_window_L", 110,3297f, 73,76719f, 2279,426f, 0.0f, -18,77471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn7", "Rand_Idle_NearWall", 112,0166f, 73,6276f, 2272,368f, 0.0f, -100,7933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn17", "Rand_Idle_NearWall", 112,2481f, 73,69337f, 2271,047f, 0.0f, -99,55605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn11", "rand_idle_stand", 132,1682f, 73,6768f, 2288,496f, 0.0f, 10,71783f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_tend", "horse_tend", 131,9962f, 73,28625f, 2202,152f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_tend1", "horse_tend", 135,5981f, 73,28625f, 2202,152f, 0.0f, 82,4436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_tend2", "horse_tend", 133,3824f, 73,29127f, 2212,425f, 0.0f, -84,78606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_mid2", "rand_idle_stand", 131,86f, 73,3621f, 2240,092f, 0.0f, 561,9264f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn12", "stand_lookdistance_w_any", 115,4255f, 73,6384f, 2239,399f, 0.0f, 74,76141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn13", "nlean_rail", 148,7087f, 73,82098f, 2232,834f, 0.0f, 59,34599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn14", "nlean_rail", 142,1514f, 73,80496f, 2245,453f, 0.0f, 150,7977f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn15", "lean_rail_whore", 142,5839f, 76,81945f, 2243,469f, 0.0f, 59,66037f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn17", "nlean_rail", 154,3298f, 73,81388f, 2252,261f, 0.0f, -122,2239f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee_nospawn2", "Pee", 172,2254f, 73,28625f, 2174,107f, 0.0f, 180,8495f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee_nospawn3", "Pee", 114,3967f, 73,28625f, 2200,496f, 0.0f, 8,595164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn18", "Rand_Idle_NearWall", 157,6425f, 73,78448f, 2196,301f, 0.0f, 21,76999f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn20", "Rand_Idle_NearWall", 145,4704f, 76,82064f, 2240,03f, 0.0f, 58,17909f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn21", "Rand_Idle_NearWall", 155,5014f, 73,81388f, 2247,832f, 0.0f, -118,4601f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn22", "Rand_Idle_NearWall", 157,755f, 73,81388f, 2243,974f, 0.0f, -120,7321f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn23", "Rand_Idle_NearWall", 180,5959f, 73,63771f, 2227,717f, 0.0f, -118,4006f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn24", "Rand_Idle_NearWall", 172,1167f, 73,75426f, 2240,195f, 0.0f, 149,9878f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn10", "look_out_window_R", 162,4337f, 73,75426f, 2224,253f, 0.0f, 62,93216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn11", "rand_idle_stand", 173,0663f, 73,46745f, 2217,189f, 0.0f, 54,76099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn17", "repair_kneel", 216,054f, 73,41138f, 2188,434f, 0.0f, 409,3009f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn18", "rand_idle_stand", 159,6794f, 72,6578f, 2247,079f, 0.0f, -87,12622f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_announce4", "stand_announce", 148,836f, 76,82731f, 2232,562f, 0.0f, -57,52115f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn18", "nlean_rail", 124,976f, 76,75856f, 2238,798f, 0.0f, -102,9391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_up", "stand_yelling_up", 140,9386f, 73,28625f, 2233,781f, 0.0f, -120,1535f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn19", "lean_rail_whore", 146,7686f, 76,82224f, 2236,193f, 0.0f, 60,10175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn12", "Rand_Idle_NearWall", 154,3668f, 73,78206f, 2199,263f, 0.0f, -150,2802f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn26", "Rand_Idle_NearWall", 158,2312f, 73,78206f, 2197,509f, 0.0f, -155,0991f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn27", "Rand_Idle_NearWall", 161,0387f, 73,78206f, 2196,253f, 0.0f, 203,278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn28", "Rand_Idle_NearWall", 150,2932f, 73,27614f, 2196,279f, 0.0f, 116,2921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn29", "Rand_Idle_NearWall", 162,85f, 73,75478f, 2193,054f, 0.0f, 146,6199f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn30", "Rand_Idle_NearWall", 167,919f, 73,56548f, 2192,654f, 0.0f, -123,617f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn31", "Rand_Idle_NearWall_Shoulder_L", 161,6451f, 73,78206f, 2194,805f, 0.0f, -68,02848f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn32", "Rand_Idle_NearWall", 151,2086f, 73,78206f, 2187,42f, 0.0f, 24,01754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn33", "Rand_Idle_NearWall", 157,8458f, 73,78206f, 2186,092f, 0.0f, -65,44751f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn34", "Rand_Idle_NearWall", 167,0756f, 73,52133f, 2178,41f, 0.0f, 56,39145f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn35", "Rand_Idle_NearWall", 178,1037f, 73,54301f, 2186,599f, 0.0f, -125,4801f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn36", "Rand_Idle_NearWall", 176,0082f, 73,47186f, 2188,105f, 0.0f, 144,8304f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn37", "Rand_Idle_NearWall", 170,6258f, 73,56548f, 2188,695f, 0.0f, -126,2383f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn38", "Rand_Idle_NearWall", 179,1333f, 76,49473f, 2189,062f, 0.0f, -124,531f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn40", "Rand_Idle_NearWall", 211,9012f, 73,65852f, 2170,414f, 0.0f, 84,65209f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn41", "Rand_Idle_NearWall", 209,0799f, 73,46049f, 2186,02f, 0.0f, 52,56473f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn42", "Rand_Idle_NearWall", 210,6349f, 73,43044f, 2191,392f, 0.0f, -128,0166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn43", "Rand_Idle_NearWall", 214,6504f, 73,44994f, 2190,235f, 0.0f, -131,2736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn44", "Rand_Idle_NearWall", 218,8724f, 73,63784f, 2176,317f, 0.0f, -95,7122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn46", "Rand_Idle_NearWall", 187,6161f, 73,20745f, 2220,618f, 0.0f, -119,2397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn47", "Rand_Idle_NearWall", 184,9287f, 73,20745f, 2225,3f, 0.0f, -116,5522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn48", "Rand_Idle_NearWall", 174,526f, 73,49428f, 2217,346f, 0.0f, 60,49486f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn49", "Rand_Idle_NearWall", 176,703f, 73,46745f, 2213,684f, 0.0f, 58,51295f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn50", "Rand_Idle_NearWall", 166,1488f, 73,75426f, 2220,32f, 0.0f, 58,10432f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn51", "Rand_Idle_NearWall", 168,1117f, 73,28625f, 2223,375f, 0.0f, -33,14394f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn52", "Rand_Idle_NearWall", 165,1904f, 73,75426f, 2236,116f, 0.0f, 148,7856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn53", "Rand_Idle_NearWall", 173,7209f, 73,63088f, 2239,716f, 0.0f, -120,6409f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn54", "Rand_Idle_NearWall", 156,518f, 76,83068f, 2246,268f, 0.0f, -119,7563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn20", "nlean_rail", 162,9397f, 73,83677f, 2287,079f, 0.0f, 2,396759f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn22", "stand_lookdistance_w_any", 178,308f, 76,48302f, 2187,849f, 0.0f, -167,4938f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn23", "nlean_rail", 180,0342f, 76,48302f, 2188,844f, 0.0f, -123,1623f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn24", "nlean_rail", 154,3631f, 76,82948f, 2252,071f, 0.0f, 237,6618f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn25", "lean_rail_whore", 144,9005f, 76,82732f, 2247,115f, 0.0f, 148,8906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn26", "lean_rail_whore", 148,3964f, 76,82549f, 2233,379f, 0.0f, 60,65953f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn27", "nlean_rail", 157,9456f, 76,83321f, 2245,976f, 0.0f, -119,7373f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn28", "lean_fence_L_talking", 158,6685f, 76,81478f, 2244,421f, 0.0f, -119,099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn4", "Rand_Idle_Sit_Ground", 198,0423f, 73,15266f, 2195,307f, 0.0f, 49,87036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn5", "Rand_Idle_Sit_Ground", 196,9534f, 73,28625f, 2193,129f, 0.0f, 143,7826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn6", "Rand_Idle_Sit_Ground", 198,3165f, 73,28625f, 2194,158f, 0.0f, 89,74829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn7", "Rand_Idle_Sit_Ground", 189,9721f, 73,28625f, 2194,89f, 0.0f, -34,36646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn12", "nlean_rail", 156,0245f, 73,78206f, 2199,935f, 0.0f, -161,921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn14", "rand_idle_stand", 151,9087f, 73,77082f, 2185,979f, 0.0f, 397,7903f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn16", "look_out_window_R", 168,0098f, 73,56548f, 2194,658f, 0.0f, -124,3027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn17", "rand_idle_stand", 179,3362f, 73,54301f, 2186,124f, 0.0f, -124,0135f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn18", "rand_idle_stand", 180,6332f, 76,48302f, 2184,323f, 0.0f, -122,8769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn19", "rand_idle_stand", 210,454f, 73,63454f, 2176,098f, 0.0f, 146,1605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn21", "rand_idle_stand", 223,3816f, 73,47279f, 2170,998f, 0.0f, -161,8313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn22", "sit_barrel", 210,6463f, 73,41881f, 2183,103f, 0.0f, -132,35f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn23", "rand_idle_stand", 174,9694f, 73,46745f, 2213,82f, 0.0f, 60,6209f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn24", "rand_idle_stand", 162,9935f, 73,75426f, 2222,596f, 0.0f, 59,50672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn25", "rand_idle_stand", 146,3379f, 73,81388f, 2236,853f, 0.0f, 61,42546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn26", "look_out_window_R", 143,2908f, 76,81455f, 2242,425f, 0.0f, 61,20352f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn13", "rand_idle_stand", 144,9732f, 73,81388f, 2237,794f, 0.0f, 61,12049f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn15", "rand_idle_stand", 141,7776f, 73,81388f, 2244,714f, 0.0f, 63,28223f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn16", "rand_idle_stand", 155,6526f, 73,81388f, 2250,707f, 0.0f, -119,5261f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn17", "rand_idle_stand", 157,474f, 76,82356f, 2247,253f, 0.0f, -120,4127f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn18", "rand_idle_stand", 165,4725f, 72,64388f, 2247,119f, 0.0f, -129,0039f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn19", "rand_idle_stand", 176,1605f, 73,63088f, 2238,39f, 0.0f, -106,2054f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn20", "rand_idle_stand", 198,9652f, 73,30279f, 2222,876f, 0.0f, -248,9262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn22", "look_out_window_L", 209,4493f, 73,66834f, 2175,811f, 0.0f, 83,93378f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn24", "Rand_Idle_NearWall", 219,394f, 73,64899f, 2170,657f, 0.0f, 265,3259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn25", "nlean_rail", 180,9642f, 76,48096f, 2183,506f, 0.0f, 237,0177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn26", "rand_idle_stand", 178,7432f, 73,57933f, 2185,224f, 0.0f, 238,1238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn27", "rand_idle_stand", 169,3693f, 73,56548f, 2191,835f, 0.0f, 198,473f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn28", "dealer_and_customer", 172,1274f, 73,56548f, 2185,708f, 0.0f, 204,7478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn29", "rand_idle_stand", 177,8279f, 73,54575f, 2189,23f, 0.0f, 236,4579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn30", "rand_idle_stand", 165,7789f, 73,75471f, 2194,562f, 0.0f, 145,9898f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn31", "look_out_window_L", 161,5329f, 73,78206f, 2197,307f, 0.0f, 202,1866f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer", "dealer_and_customer", 130,6866f, 73,28625f, 2353,961f, 0.0f, 188,6099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer1", "kneel_hammer", 125,683f, 73,55f, 2348,527f, 0.0f, -85,25365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer2", "dealer_and_customer", 141,0156f, 73,31409f, 2323,592f, 0.0f, -275,7468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer4", "dealer_and_customer", 154,1151f, 73,85268f, 2287,329f, 0.0f, 270,6472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer5", "rand_idle_stand", 90,74138f, 74,66713f, 2308,572f, 0.0f, -100,5757f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_776), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer7", "dealer_and_customer", 163,8873f, 73,75426f, 2235,227f, 0.0f, 150,2487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer8", "dealer_and_customer", 160,0556f, 72,64388f, 2255,108f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer9", "dealer_and_customer", 210,839f, 73,42136f, 2189,67f, 0.0f, 55,73087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer10", "dealer_and_customer", 160,4873f, 73,75481f, 2191,298f, 0.0f, -158,8176f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer11", "dealer_and_customer", 179,4895f, 73,72922f, 2223,627f, 0.0f, 150,2913f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve", "bar_drink_serve", 171,0132f, 73,75444f, 2229,289f, 0.0f, -119,699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve1", "Bar_lean_stand", 170,5644f, 73,75444f, 2230,074f, 0.0f, -119,699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve2", "Bar_lean_stand", 169,7218f, 73,75444f, 2231,545f, 0.0f, -119,699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_780), 0);
	Local_12.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleep_doctor", "lie_sleep_on_bed_l", 176,0292f, 76,48578f, 2185,546f, 0.0f, -121,4194f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn34", "rand_idle_stand", 172,0621f, 73,54302f, 2183,253f, 0.0f, -108,9609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bbb", "rand_idle_stand", 177,3621f, 73,2863f, 2191,641f, 0.0f, -143,5755f, 0.0f);
	Local_12.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_12, "yyy", "Rand_Idle_NearWall", 128,8749f, 73,28173f, 2228,78f, 0.0f, -103,9595f, 0.0f);
	Local_12.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_12, "xxx", "stand_lookdistance_w_any", 118,9509f, 73,34741f, 2280,659f, 0.0f, 153,858f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks1", "nsit_docks", 162,9294f, 73,564f, 2332,318f, 0.0f, -86,14869f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks2", "nsit_docks", 162,3817f, 72,28434f, 2352,144f, 0.0f, -59,27157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks3", "nsit_docks", 147,0426f, 72,49009f, 2303,115f, 0.0f, -55,57274f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks4", "nsit_docks", 165,2861f, 72,64388f, 2248,028f, 0.0f, -120,6229f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks5", "nsit_docks", 184,6858f, 73,56883f, 2247,097f, 0.0f, 330,1573f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn58", "Rand_Idle_NearWall", 170,2435f, 73,75426f, 2237,508f, 0.0f, 58,94427f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_800), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn27", "rand_idle_stand", 165,4406f, 73,75738f, 2224,04f, 0.0f, 55,40129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn28", "rand_idle_stand", 161,9366f, 73,75017f, 2230,418f, 0.0f, 58,35014f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", 168,4318f, 73,76094f, 2226,639f, 0.0f, 266,7429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_mid3", "stand_drunk_rowdydrink", 169,4894f, 73,75426f, 2226,749f, 0.0f, 76,24605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn60", "Rand_Idle_NearWall", 149,3802f, 73,83691f, 2237,958f, 0.0f, -120,377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn61", "Rand_Idle_NearWall", 152,0736f, 73,81389f, 2242,438f, 0.0f, 148,9812f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn19", "Rand_Idle_NearWall", 148,323f, 73,71426f, 2347,169f, 0.0f, -84,30215f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn39", "Rand_Idle_NearWall", 122,183f, 73,28625f, 2326,572f, 0.0f, 96,41321f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "whore_and_john", "mex_flirt_stand_link", 149,7026f, 73,82844f, 2241,592f, 0.0f, 49,67746f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "whore_and_john1", "mex_flirt_stand_link", 149,6772f, 73,84079f, 2244,001f, 0.0f, 27,76822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "whore_and_john2", "mex_flirt_stand_link", 144,2717f, 73,81388f, 2242,877f, 0.0f, -29,83286f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "whore_and_john3", "mex_flirt_stand_link", 144,0075f, 76,83716f, 2241,222f, 0.0f, -30,34649f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "whore_and_john4", "mex_flirt_stand_link", 149,1605f, 73,81388f, 2234,522f, 0.0f, -210,0102f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn29", "rand_idle_stand", 168,9241f, 73,56548f, 2188,436f, 0.0f, -124,3425f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn62", "Rand_Idle_NearWall", 164,8631f, 73,56548f, 2192,288f, 0.0f, -33,51538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_12, "thig_cattle_scrap", "Locked_Footlocker", 141,3577f, 76,49444f, 2325,332f, 0.0f, 184,6398f, 0.0f);
	DECOR_SET_BOOL(Local_12.f_804, "scrap", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 102,0871f, 73,28625f, 2345,933f, 0.0f, -66,6981f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table17", "factory_foreman", 101,7579f, 73,28625f, 2347,537f, 0.0f, 304,3614f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand", "rand_idle_stand", 118,7538f, 73,28625f, 2341,647f, 0.0f, 116,1614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L", "rand_idle_stand", 121,4669f, 73,28625f, 2342,886f, 0.0f, 537,7509f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_H_talking", "lean_fence_H_talking", 116,2634f, 73,28625f, 2341,259f, 0.0f, -3,907263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_H_talking1", "lean_fence_H_talking", 105,5503f, 73,28625f, 2351,953f, 0.0f, 120,0867f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel", "repair_kneel", 104,6921f, 73,28625f, 2350,171f, 0.0f, 113,4379f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_peeing_b_any1", "stand_peeing_b_any", 138,2596f, 73,28625f, 2393,823f, 0.0f, -122,7125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any4e", "leaning_stand", 131,5875f, 73,28625f, 2384,887f, 0.0f, 180,5612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", 154,8701f, 73,4667f, 2377,47f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", 124,0531f, 73,28625f, 2393,393f, 0.0f, -16,53536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_check_clipboard", "factory_foreman", 122,962f, 73,44438f, 2354,93f, 0.0f, 124,2605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_check_clipboard1", "factory_foreman", 122,8961f, 76,48626f, 2401,053f, 0.0f, -19,84688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R", "look_out_window_R", 140,7156f, 73,28625f, 2359,224f, 0.0f, 73,24349f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs", "look_distance_binocs", 123,7755f, 76,48626f, 2401,335f, 0.0f, -34,88149f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs1", "look_distance_binocs", 146,9737f, 76,73775f, 2350,274f, 0.0f, 225,8853f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_announce7", "stand_announce", 135,9999f, 73,28625f, 2361,193f, 0.0f, -149,1626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R1", "look_out_window_R", 128,21f, 73,28625f, 2371,165f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs2", "look_distance_binocs", 146,225f, 76,53544f, 2324,571f, 0.0f, -8,881503f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand1", "rand_idle_stand", 127,1303f, 73,41247f, 2353,552f, 0.0f, -174,652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs3", "look_distance_binocs", 133,7941f, 76,74585f, 2350,913f, 0.0f, 179,4245f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand2", "rand_idle_stand", 124,2498f, 73,39103f, 2354,982f, 0.0f, 222,762f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel1", "repair_kneel", 115,5754f, 73,28625f, 2334,591f, 0.0f, -182,059f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table18", "stand_hammer_table", 129,3355f, 75,35422f, 2343,552f, 0.0f, -36,73936f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_check_clipboard2", "stand_check_clipboard", 139,4906f, 75,36517f, 2343,603f, 0.0f, 36,6756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand3", "rand_idle_stand", 149,8012f, 73,59628f, 2338,13f, 0.0f, -94,69578f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R2", "look_out_window_R", 132,9257f, 73,68758f, 2316,721f, 0.0f, 96,14486f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nlean_rail", "nlean_rail", 117,6258f, 73,64547f, 2240,629f, 0.0f, 348,0325f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table", "lean_table", 153,2972f, 73,75396f, 2189,657f, 0.0f, 27,42689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table1", "lean_table", 192,9261f, 73,28625f, 2195,061f, 0.0f, 153,7607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R3", "look_out_window_R", 159,1342f, 73,7813f, 2198,38f, 0.0f, -153,0153f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve3", "bar_drink_serve", 170,1309f, 73,75444f, 2230,839f, 0.0f, -120,255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_808), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L2", "look_out_window_L", 209,8049f, 73,63802f, 2171,682f, 0.0f, 86,40276f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_H_talking2", "lean_fence_H_talking", 204,4074f, 73,46024f, 2190,132f, 0.0f, -130,5307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_812), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L3", "look_out_window_L", 172,7247f, 73,46582f, 2218,187f, 0.0f, 57,57725f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail1", "look_out_window_L", 174,7788f, 73,46717f, 2214,63f, 0.0f, 60,74233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L4", "look_out_window_L", 161,3649f, 73,75426f, 2225,964f, 0.0f, 60,32926f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking", "lean_fence_L_talking", 159,7699f, 73,75426f, 2228,997f, 0.0f, 60,55851f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking1", "lean_fence_H_talking", 179,1047f, 73,63927f, 2230,498f, 0.0f, 52,13071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail2", "stand_lookdistance_w_any", 177,0822f, 73,63087f, 2237,354f, 0.0f, -120,9184f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs4", "look_distance_binocs", 182,13f, 73,56882f, 2247,761f, 0.0f, 169,2248f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L5", "look_out_window_L", 177,4312f, 73,63087f, 2236,735f, 0.0f, -118,4928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking2", "lean_fence_L_talking", 173,2836f, 76,69426f, 2233,045f, 0.0f, 59,15214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking3", "lean_fence_L_talking", 172,8711f, 76,69328f, 2224,43f, 0.0f, 149,0642f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail3", "nlean_rail", 174,9511f, 76,69796f, 2225,769f, 0.0f, 148,884f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail4", "nlean_rail", 173,6953f, 76,69426f, 2232,026f, 0.0f, 58,70247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R4", "look_out_window_R", 173,3275f, 76,69427f, 2224,151f, 0.0f, -27,97389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R5", "look_out_window_R", 165,186f, 76,69427f, 2234,438f, 0.0f, 151,595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L8", "look_out_window_L", 144,667f, 73,81286f, 2239,996f, 0.0f, 58,49026f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking4", "lean_fence_L_talking", 145,806f, 76,8245f, 2238,15f, 0.0f, 59,17937f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", 143,7272f, 76,82088f, 2246,569f, 0.0f, 145,6983f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R6", "look_out_window_R", 147,4457f, 76,82196f, 2235,212f, 0.0f, 60,09358f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R7", "look_out_window_R", 151,1565f, 73,81388f, 2231,672f, 0.0f, -28,19856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking5", "lean_fence_L_talking", 153,1256f, 73,81388f, 2232,829f, 0.0f, -29,73376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R8", "look_out_window_R", 149,0742f, 76,83578f, 2236,598f, 0.0f, 59,11226f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail5", "nlean_rail", 149,0436f, 76,84858f, 2239,234f, 0.0f, -29,42319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking6", "lean_fence_L_talking", 151,353f, 76,83315f, 2240,619f, 0.0f, -28,69592f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking7", "lean_fence_L_talking", 155,2794f, 76,82482f, 2250,429f, 0.0f, -119,0518f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any8", "lean_rail_forward", 177,9397f, 76,49626f, 2187,579f, 0.0f, 145,6753f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking8", "lean_fence_L_talking", 181,6758f, 76,48103f, 2182,197f, 0.0f, -123,1586f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nuse_shelf", "nuse_shelf", 174,9261f, 76,48208f, 2181,924f, 0.0f, 52,80502f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf1", "nuse_shelf", 173,7551f, 73,54302f, 2179,545f, 0.0f, 56,13665f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking9", "lean_fence_L_talking", 180,3415f, 73,52628f, 2184,111f, 0.0f, -122,578f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table2", "lean_table", 168,9315f, 73,56548f, 2186,26f, 0.0f, 234,4648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_H_talking3", "lean_fence_H_talking", 142,2411f, 73,28625f, 2202,388f, 0.0f, 118,8441f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L10", "look_out_window_L", 111,1127f, 73,54504f, 2265,196f, 0.0f, -10,09419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L11", "look_out_window_L", 96,83973f, 73,6824f, 2278,072f, 0.0f, 170,0341f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L12", "look_out_window_L", 133,0539f, 73,68559f, 2318,519f, 0.0f, 92,81506f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking10", "lean_fence_L_talking", 132,6401f, 73,67674f, 2313,29f, 0.0f, 96,25826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L13", "look_out_window_L", 127,5265f, 73,70184f, 2292,825f, 0.0f, 88,84258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_L_talking11", "lean_fence_L_talking", 171,6611f, 73,86037f, 2289,666f, 0.0f, -93,94854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R10", "look_out_window_R", 170,6469f, 73,85049f, 2308,955f, 0.0f, 182,7837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", 139,5279f, 73,67674f, 2314,778f, 0.0f, 85,33865f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_12, "player_sleep_THI", "player_sleep_bed_L", 125,452f, 76,74474f, 2234,143f, 0.0f, -15,91076f, 0.0f);
	Local_12.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_bartender_bar_work", "stand_bartender_bar_work", 172,5178f, 73,75304f, 2230,373f, 0.0f, 59,93721f, 0.0f);
	Local_12.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Locked_Footlocker", "Locked_Footlocker", 123,6983f, 76,7431f, 2232,502f, 0.0f, 164,1285f, 0.0f);
	DECOR_SET_BOOL(Local_12.f_824, "PlayerHouseChest", true);
	Local_12.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_sellPaper", "rand_idle_stand", 140,4631f, 73,89118f, 2288,043f, 0.0f, -8,050385f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_828), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand", "rand_idle_stand", 110,2009f, 73,28625f, 2375,809f, 0.0f, -40,7128f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_peeing_b_any2", "stand_peeing_b_any", 118,4556f, 73,28625f, 2373,049f, 0.0f, -56,7909f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_fence_H_talking5", "lean_fence_H_talking", 120,12f, 73,28625f, 2363,66f, 0.0f, 178,9972f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table19", "stand_check_clipboard", 120,9106f, 73,28625f, 2362,822f, 0.0f, 209,0828f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table20", "repair_kneel", 127,8496f, 73,28625f, 2369,331f, 0.0f, -78,06297f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand1", "rand_idle_stand", 125,942f, 73,28625f, 2399,511f, 0.0f, 22,65241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand2", "rand_idle_stand", 144,7701f, 73,28625f, 2385,279f, 0.0f, 68,13605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_barrel1", "sit_barrel", 145,0119f, 73,28625f, 2383,733f, 0.0f, 248,3877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand", "leaning_stand", 148,7131f, 73,28625f, 2373,364f, 0.0f, 298,466f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_barrel2", "sit_barrel", 139,2356f, 73,28625f, 2368,188f, 0.0f, -99,59726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand1", "leaning_stand", 132,956f, 73,28625f, 2367,358f, 0.0f, 449,2415f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall12", "stand_hammer_wall", 134,4247f, 73,28625f, 2373,165f, 0.0f, 124,003f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_barrel3", "sit_barrel", 141,2113f, 73,28625f, 2361,107f, 0.0f, -28,64318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_announce8", "stand_announce", 116,0116f, 73,28625f, 2359,944f, 0.0f, -221,952f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall", 143,7882f, 74,6247f, 2361,26f, 0.0f, -68,6724f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_Shoulder_L1", "Rand_Idle_NearWall", 146,4267f, 73,69464f, 2351,266f, 0.0f, -171,0705f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", 162,221f, 73,57859f, 2333,569f, 0.0f, 76,78224f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_Shoulder_L2", "rand_idle_stand", 149,3525f, 73,54379f, 2322,121f, 0.0f, 273,9315f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn29", "lean_rail_forward", 156,9072f, 73,67596f, 2313,177f, 0.0f, -137,1587f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn63", "Rand_Idle_NearWall", 140,2798f, 73,99483f, 2300,918f, 0.0f, -90,64076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn64", "Rand_Idle_NearWall", 139,6166f, 73,83677f, 2291,926f, 0.0f, -90,64076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", 152,3097f, 73,91094f, 2294,411f, 0.0f, 24,09706f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_Shoulder_L4", "rand_idle_stand", 172,1371f, 73,8499f, 2296,175f, 0.0f, -85,11501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_fence_low1", "Rand_Idle_NearWall", 105,7711f, 73,28625f, 2336,358f, 0.0f, 31,03665f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn65", "Rand_Idle_NearWall", 88,92159f, 74,67686f, 2313,474f, 0.0f, -98,88564f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nsit_docks", "rand_idle_stand", 90,91752f, 74,68742f, 2305,335f, 0.0f, -51,86886f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer12", "dealer_and_customer", 94,74461f, 73,65334f, 2270,041f, 0.0f, 17,58426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn30", "stand_announce", 130,4486f, 76,48775f, 2330,458f, 0.0f, 196,3248f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn31", "stand_check_clipboard", 131,3583f, 76,48775f, 2330,433f, 0.0f, 160,9111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer1", "kneel_hammer", 127,851f, 73,54774f, 2336,177f, 0.0f, -85,28256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer2", "kneel_hammer", 116,7077f, 73,60715f, 2186,871f, 0.0f, -127,188f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand3", "rand_idle_stand", 116,4561f, 73,60715f, 2188,226f, 0.0f, 77,37262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "dealer_and_customer13", "dealer_and_customer", 163,4729f, 73,47186f, 2181,616f, 0.0f, 237,3963f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any9", "nlean_rail", 178,7865f, 76,49626f, 2186,852f, 0.0f, 232,9871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any10", "nlean_rail", 182,4142f, 76,49626f, 2181,438f, 0.0f, 232,9871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf2", "nuse_shelf", 177,0561f, 73,54302f, 2181,224f, 0.0f, -33,50537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn40", "Rand_Idle_NearWall", 231,7578f, 73,46771f, 2171,93f, 0.0f, 120,2662f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L14", "look_out_window_R", 209,931f, 73,63802f, 2170,018f, 0.0f, 86,40276f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L15", "lean_fence_L_talking", 216,8807f, 73,42861f, 2166,896f, 0.0f, -0,2886877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn66", "Rand_Idle_NearWall", 205,1337f, 73,53309f, 2192,076f, 0.0f, 141,3788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table3", "stand_hammer_table", 191,7751f, 73,28625f, 2194,948f, 0.0f, 153,7607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_sellPaper1", "stand_sellPaper", 153,1894f, 73,28625f, 2230,954f, 0.0f, -352,7992f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail6", "nlean_rail", 200,9729f, 74,6724f, 2146,973f, 0.0f, -197,0324f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail8", "look_out_window_R", 198,0753f, 74,6724f, 2146,109f, 0.0f, -197,0324f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail9", "Rand_Idle_NearWall", 199,2317f, 74,6724f, 2144,64f, 0.0f, -197,0324f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail10", "rand_idle_stand", 196,8126f, 74,6724f, 2145,65f, 0.0f, -165,259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail11", "rand_idle_stand", 207,7888f, 74,6724f, 2148,89f, 0.0f, -218,5038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail12", "Rand_Idle_NearWall", 205,1771f, 74,6724f, 2146,298f, 0.0f, -197,0324f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail13", "lean_fence_H_talking", 207,8127f, 74,71519f, 2144,7f, 0.0f, 70,02953f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail14", "Rand_Idle_NearWall", 209,6645f, 74,6724f, 2141,438f, 0.0f, 164,561f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail15w", "nlean_rail", 207,1199f, 74,6724f, 2139,79f, 0.0f, -15,71482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail16", "Rand_Idle_NearWall", 200,3237f, 74,6724f, 2139,081f, 0.0f, -374,9484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail17", "nsit_docks", 197,2169f, 74,6724f, 2137,329f, 0.0f, -285,7206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail18", "look_out_window_R", 204,582f, 74,6724f, 2138,77f, 0.0f, 51,1644f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_back", "lean_rail_back", 197,059f, 74,69948f, 2140,244f, 0.0f, 77,8905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any", "stand_hammerground_w_any", 209,7606f, 73,12675f, 2129,73f, 0.0f, -12,9102f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any1", "dealer_and_customer", 210,4049f, 73,24629f, 2135,545f, 0.0f, 80,3601f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel_nospawn20", "rand_idle_stand", 160,9302f, 72,6578f, 2245,286f, 0.0f, -158,0489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn32", "nlean_rail", 151,0464f, 76,82288f, 2250,523f, 0.0f, 150,1567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn33", "nlean_rail", 146,4846f, 76,82288f, 2247,962f, 0.0f, 150,1567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_nospawn34", "Rand_Idle_NearWall", 161,3441f, 76,81478f, 2240,339f, 0.0f, -251,9594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R11", "lean_fence_L_talking", 168,5853f, 76,69427f, 2228,946f, 0.0f, 241,4195f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_bartender_bar_work1", "stand_bartender_bar_work", 171,5025f, 73,75304f, 2232,127f, 0.0f, 59,93721f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf3", "nuse_shelf", 173,7383f, 73,75499f, 2230,012f, 0.0f, -120,4371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf4", "nuse_shelf", 172,6671f, 73,75499f, 2231,835f, 0.0f, -120,4371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf5", "nuse_shelf", 171,5793f, 73,75499f, 2233,687f, 0.0f, -120,4371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_sellPaper2", "stand_sellPaper", 117,7909f, 73,28618f, 2304,879f, 0.0f, -246,8532f, 0.0f);
	Local_12.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_12, "fivefingerfillet_spectate1", "fivefingerfillet_spectate", 163,4155f, 73,837f, 2293,8f, 0.0f, 104,893f, 0.0f);
	Local_12.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_12, "drink_player", "drink_player", 168,8123f, 73,75145f, 2233,046f, 0.0f, -119,4111f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_knock_on_door", "stand_knock_on_door", 186,1626f, 73,20493f, 2222,933f, 0.0f, 61,0629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_knock_on_door1", "stand_knock_on_door", 209,9071f, 73,4599f, 2185,199f, 0.0f, -128,3986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_knock_on_door2", "stand_knock_on_door", 96,47626f, 73,7234f, 2276,775f, 0.0f, -10,30002f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", 159,4555f, 73,28625f, 2222,351f, 0.0f, -8,105886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", 160,4522f, 73,28625f, 2222,411f, 0.0f, 50,76703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", 158,7412f, 73,28625f, 2221,704f, 0.0f, -76,29604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", 160,5111f, 73,28625f, 2220,93f, 0.0f, 122,0536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand4", "rand_idle_stand", 159,4312f, 73,28625f, 2220,505f, 0.0f, -158,2855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_attached_link", 147,8268f, 73,7913f, 2237,245f, 0.0f, 239,8045f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_dancing_link", "stand_drunk_dancing_link", 154,1363f, 73,83279f, 2247,271f, 0.0f, 71,45429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_dancing_link1", "stand_drunk_dancing_link", 154,0504f, 73,83279f, 2244,426f, 0.0f, 92,3068f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanRail1", "mex_leanRail_tlkPsnt_hrasSol_link", 156,6943f, 73,87476f, 2287,272f, 0.0f, 0.0f, 0.0f);
	Local_12.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanRail2", "mex_leanRail_tlkPsnt_hrasSol_link", 141,9091f, 76,81902f, 2245,333f, 0.0f, -210,6145f, 0.0f);
	Local_12.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanRail3", "mex_leanRail_tlkPsnt_hrasSol_link", 160,7389f, 73,72762f, 2227,114f, 0.0f, 57,84918f, 0.0f);
	Local_12.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanWall1", "mex_leanWall_tlkPsnt_hrasSol_link", 160,2826f, 73,73942f, 2233,397f, 0.0f, -29,5092f, 0.0f);
	Local_12.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanWall2", "mex_leanWall_tlkPsnt_hrasSol_link", 177,3483f, 73,75426f, 2226,388f, 0.0f, -30,1577f, 0.0f);
	Local_12.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanWall3", "mex_leanWall_tlkPsnt_hrasSol_link", 111,4422f, 73,60525f, 2266,799f, 0.0f, 169,9674f, 0.0f);
	Local_12.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_leanWall4", "mex_leanWall_tlkPsnt_hrasSol_link", 134,3309f, 73,71031f, 2291,9f, 0.0f, -90,69236f, 0.0f);
	Local_12.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_sitGround1", "mex_sitGround_tlkPsnt_hrasSol_link", 171,6622f, 73,34741f, 2221,267f, 0.0f, 145,9678f, 0.0f);
	Local_12.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_12, "harass_sitGround2", "mex_sitGround_tlkPsnt_hrasSol_link", 192,6155f, 73,35395f, 2205,324f, 0.0f, 145,6778f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand2", "leaning_stand", 171,8683f, 73,74987f, 2227,824f, 0.0f, -120,8927f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Bar_lean_stand", "Bar_lean_stand", 168,5915f, 73,75352f, 2234,879f, 0.0f, -50,05231f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve4", "bar_drink_serve", 171,4801f, 73,75544f, 2228,598f, 0.0f, -119,2312f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_896), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand3", "leaning_stand", 169,289f, 73,76756f, 2232,309f, 0.0f, -119,0012f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_12, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", 163,185f, 73,837f, 2293,025f, 0.0f, 113,8694f, 0.0f);
	Local_12.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_12, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", 163,604f, 73,837f, 2294,628f, 0.0f, 96,14646f, 0.0f);
	return 1;
}

bool Function_132(int iParam0) //Position: 0xF4F3 / 62707
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_136();
	iVar1 = 0;
	if (!Function_10(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_135(iParam0[iVar03], 8);
		}
		else if (Function_134())
		{
			iVar1 = 1;
			Function_135(iParam0[iVar03], 8);
		}
		Function_135(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_10(iParam0[iVar03], 4))
		{
			if (!Function_10(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_10(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_10(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_135(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_10(iParam0[iVar03], 4))
		{
			if (!Function_10(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
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
	Function_133();
	return 1;
}

void Function_133() //Position: 0xF86E / 63598
{
	if (!Function_105(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_134() //Position: 0xF8AE / 63662
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_135(var uParam0, int iParam1) //Position: 0xF8D9 / 63705
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_136() //Position: 0xF8EA / 63722
{
	if (!Function_105(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_137(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF92C / 63788
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_138(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_135(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_138(var uParam0, int iParam1, int iParam2) //Position: 0xF964 / 63844
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_135(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_139(int iParam0, int iParam1) //Position: 0xFA28 / 64040
{
	switch (iParam1)
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

bool Function_140() //Position: 0xFA71 / 64113
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_141() //Position: 0xFA7A / 64122
{
	var uVar0;
	
	Function_139(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	CREATE_POINT_IN_LAYOUT(Local_4, "MoveObj1", 115,9999f, 73,28625f, 2344.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "MoveObj2", 115,9999f, 73,28625f, 2346,276f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "MoveObj3", 114,4476f, 73,28625f, 2344,968f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "feedchickens2", 137,9044f, 73,28625f, 2226,084f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "feedchickens3", 146,5031f, 73,28625f, 2201,902f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "feedchickens4", 183,9999f, 73,28625f, 2204.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "feedchickens1", 157,5594f, 73,28625f, 2215,079f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "thif_enDuel5", 145,3168f, 73,28625f, 2229,293f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "thif_enDuel4", 142,8837f, 73,28625f, 2227,011f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "thif_enDuel3", 143,4786f, 73,28625f, 2227,54f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "thif_enDuel2", 144,5947f, 73,28625f, 2228,695f, 0.0f, -86,91833f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "thif_enDuel1", 143,9999f, 73,28625f, 2228.0f, 0.0f, -89,7602f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "thif_playerDuel", 135,9999f, 73,28625f, 2236.0f, 0.0f, 92,19331f, 0.0f);
	*(&Local_4 + 4) = { 115,8303f, 73,29681f, 2230,878f };
	*(&Local_4 + 4 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_PlayerHorse", 115,8303f, 73,29681f, 2230,878f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_142(bool bParam0, var uParam1) //Position: 0xFD1A / 64794
{
	if (!Function_105(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

