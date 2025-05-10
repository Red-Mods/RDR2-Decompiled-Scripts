//Decompiled with MagicRDR v1.0
//Function Count : 109
//Statics Count : 543
//Natives Count : 166
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<33> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_154 = 2;
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
	var uLocal_168 = 15;
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
	int iLocal_315 = 0;
	bool bLocal_316 = false;
	bool bLocal_317 = false;
	bool bLocal_318 = false;
	var uLocal_319 = 11;
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
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	int iLocal_540 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_315 = 0;
	Function_108("Initializing ManzanitaPost", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_317 = 1000;
		switch (iLocal_315)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_315 = 1;
				}
				bLocal_317 = false;
				break;
			
			case 0x00000001:
				if (Function_107())
				{
					Global_62981 = 0;
					iLocal_315 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 10, 2);
					AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
					AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
					CREATE_POINT_LIGHT_IN_LAYOUT(Local_4, Function_106(), -697.212f, 93.806f, 1448.455f, 0.9f, 0.6f, 0.0f, 5.0f);
					CREATE_POINT_LIGHT_IN_LAYOUT(Local_4, Function_106(), -688.916f, 93.769f, 1453.96f, 0.9f, 0.6f, 0.0f, 5.0f);
				}
				bLocal_317 = false;
				break;
			
			case 0x00000002:
				if (Function_97())
				{
					Function_96(&(Global_29008[iScriptParam_0]), 32);
					iLocal_315 = 3;
				}
				bLocal_317 = false;
				break;
			
			case 0x00000003:
				bLocal_318 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ManzanitaPostVol", &iScriptParam_0, 2, 0);
				Function_95(&Global_7148, &Global_8447, iScriptParam_0);
				iLocal_315 = 5;
				bLocal_317 = false;
				break;
			
			case 0x00000005:
				if (Function_94(&Global_7148, &Global_8447, iScriptParam_0))
				{
					iLocal_315 = 4;
					bLocal_317 = false;
				}
				else
				{
					bLocal_317 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_93(&(Global_29008[iScriptParam_0]), 16) && Function_92(Global_29155[iScriptParam_010]))
				{
					iLocal_315 = 6;
				}
				bLocal_317 = false;
				break;
			
			case 0x00000006:
				Function_91(0, &uLocal_319, -455.949f, 153.642f, 1622.078f);
				Function_90(0, &uLocal_319, -455.949f, 153.642f, 1622.078f);
				Function_89(0, &uLocal_319, -455.949f, 153.642f, 1622.078f);
				Function_88(0, &uLocal_319, -455.949f, 153.642f, 1622.078f);
				Function_87(0, &uLocal_319, -455.949f, 153.642f, 1622.078f);
				Function_86(0, &uLocal_319, -455.949f, 153.642f, 1622.078f);
				Function_85(0, &uLocal_319, Local_4);
				Function_91(1, &uLocal_319, -448.2578f, 153.6423f, 1627.731f);
				Function_90(1, &uLocal_319, -446.574f, 152.346f, 1646.275f);
				Function_89(1, &uLocal_319, -459.953f, 149.459f, 1561.889f);
				Function_88(1, &uLocal_319, -446.574f, 152.346f, 1646.275f);
				Function_87(1, &uLocal_319, -437.631f, 153.342f, 1666.013f);
				Function_86(1, &uLocal_319, -437.631f, 153.342f, 1666.013f);
				Function_85(1, &uLocal_319, Local_4);
				Function_91(2, &uLocal_319, -452.074f, 153.474f, 1631.432f);
				Function_90(2, &uLocal_319, -412.185f, 152.261f, 1603.835f);
				Function_89(2, &uLocal_319, -412.185f, 152.261f, 1603.835f);
				Function_88(2, &uLocal_319, -412.185f, 152.261f, 1603.835f);
				Function_87(2, &uLocal_319, -445.101f, 152.347f, 1645.452f);
				Function_86(2, &uLocal_319, -452.074f, 153.474f, 1631.432f);
				Function_85(2, &uLocal_319, Local_4);
				Function_91(3, &uLocal_319, -462.632f, 152.352f, 1593.147f);
				Function_90(3, &uLocal_319, -455.476f, 153.356f, 1608.949f);
				Function_89(3, &uLocal_319, -455.476f, 153.356f, 1608.949f);
				Function_88(3, &uLocal_319, -455.476f, 153.356f, 1608.949f);
				Function_87(3, &uLocal_319, -461.241f, 149.459f, 1562.406f);
				Function_86(3, &uLocal_319, -473.56f, 152.347f, 1591.056f);
				Function_85(3, &uLocal_319, Local_4);
				Function_91(4, &uLocal_319, -465.779f, 152.352f, 1593.718f);
				Function_90(4, &uLocal_319, -439.308f, 152.348f, 1644.212f);
				Function_89(4, &uLocal_319, -447.111f, 152.347f, 1643.379f);
				Function_88(4, &uLocal_319, -439.308f, 152.348f, 1644.212f);
				Function_87(4, &uLocal_319, -465.779f, 152.352f, 1593.718f);
				Function_86(4, &uLocal_319, -473.419f, 152.37f, 1589.005f);
				Function_85(4, &uLocal_319, Local_4);
				Function_91(5, &uLocal_319, -461.582f, 152.361f, 1583.649f);
				Function_90(5, &uLocal_319, -444.593f, 152.35f, 1639.272f);
				Function_89(5, &uLocal_319, -463.1508f, 152.3521f, 1595.154f);
				Function_88(5, &uLocal_319, -444.593f, 152.35f, 1639.272f);
				Function_87(5, &uLocal_319, -459.778f, 152.3525f, 1586.68f);
				Function_86(5, &uLocal_319, -461.582f, 152.361f, 1583.649f);
				Function_85(5, &uLocal_319, Local_4);
				Function_91(6, &uLocal_319, -462.391f, 149.459f, 1560.881f);
				Function_90(6, &uLocal_319, -448.694f, 152.347f, 1640.205f);
				Function_89(6, &uLocal_319, -462.391f, 149.459f, 1560.881f);
				Function_88(6, &uLocal_319, -448.694f, 152.347f, 1640.205f);
				Function_87(6, &uLocal_319, -462.391f, 149.459f, 1560.881f);
				Function_86(6, &uLocal_319, -460.0324f, 152.5537f, 1584.717f);
				Function_85(6, &uLocal_319, Local_4);
				Function_91(7, &uLocal_319, -462.4196f, 149.4585f, 1559.729f);
				Function_90(7, &uLocal_319, -404.3477f, 154.7072f, 1611.336f);
				Function_89(7, &uLocal_319, -437.096f, 152.593f, 1624.446f);
				Function_88(7, &uLocal_319, -404.3477f, 154.7072f, 1611.336f);
				Function_87(7, &uLocal_319, -462.4196f, 149.4585f, 1559.729f);
				Function_86(7, &uLocal_319, -468.58f, 149.521f, 1556.178f);
				Function_85(7, &uLocal_319, Local_4);
				Function_91(8, &uLocal_319, -461.497f, 149.459f, 1564.401f);
				Function_90(8, &uLocal_319, -443.811f, 152.352f, 1614.669f);
				Function_89(8, &uLocal_319, -461.497f, 149.459f, 1564.401f);
				Function_88(8, &uLocal_319, -443.811f, 152.352f, 1614.669f);
				Function_87(8, &uLocal_319, -461.497f, 149.459f, 1564.401f);
				Function_86(8, &uLocal_319, -469.4194f, 149.6297f, 1557.313f);
				Function_85(8, &uLocal_319, Local_4);
				Function_91(9, &uLocal_319, -451.811f, 149.471f, 1559.002f);
				Function_90(9, &uLocal_319, -437.1096f, 153.5043f, 1607.202f);
				Function_89(9, &uLocal_319, -463.48f, 149.459f, 1563.787f);
				Function_88(9, &uLocal_319, -410.661f, 151.997f, 1594.701f);
				Function_87(9, &uLocal_319, -463.48f, 149.459f, 1563.787f);
				Function_86(9, &uLocal_319, -451.811f, 149.471f, 1559.002f);
				Function_85(9, &uLocal_319, Local_4);
				Function_91(10, &uLocal_319, -411.461f, 151.984f, 1598.108f);
				Function_90(10, &uLocal_319, -411.461f, 151.984f, 1598.108f);
				Function_89(10, &uLocal_319, -460.936f, 149.459f, 1555.77f);
				Function_88(10, &uLocal_319, -411.461f, 151.984f, 1598.108f);
				Function_87(10, &uLocal_319, -460.936f, 149.459f, 1555.77f);
				Function_86(10, &uLocal_319, -456.733f, 149.475f, 1567.765f);
				Function_85(10, &uLocal_319, Local_4);
				Function_81(&Global_7148, &Global_8447, &uLocal_319, Global_6289, iScriptParam_0);
				if (Function_93(&(Global_29008[iScriptParam_0]), 256) || !Function_80(2))
				{
					iLocal_540 = 1;
				}
				bLocal_316 = Function_79(Global_30723[1], "ManzanitaPost", "tradepost01", 3);
				if (IS_DOOR_VALID(bLocal_316))
				{
					Function_78(StackVal, bLocal_316);
				}
				Function_77(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1068));
				Function_77(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1072));
				Function_77(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1076));
				Function_77(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_13 + 1108));
				Function_76(StackVal, FIND_VOLUME_IN_LAYOUT(Local_13, "mtpv_store_set"));
				Function_75(StackVal, 1);
				Function_74(StackVal, 397);
				Function_68(10, Local_13.f_1084, Local_13.f_1036, Local_13.f_1064, Function_79(iScriptParam_0, "nmanzanita", "cabin01", 99), 0, Local_4.f_32);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_13, "mtpv_Players_House")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "mtpv_Players_House"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "mtpv_Players_House"));
				}
				else
				{
					LOG_ERROR("MTP: Cannot find mtpv_Players_House to restrict players room");
				}
				Function_96(&(Global_29008[iScriptParam_0]), 8);
				if (Function_93(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_67(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_315 = 10;
				}
				else
				{
					iLocal_315 = 7;
				}
				bLocal_317 = false;
				break;
			
			case 0x00000007:
				Function_58(16, 1, 0, 50, 50, 7, 2, 0, 2, iScriptParam_0, "$/Content/Ambient/Town/first_time_manzanita", 63, 0, 350.0f, 2, 60, Function_62(1, 1, 3));
				Function_57(StackVal, &Global_17483[1675] + 120, 4, 1);
				Function_56(iScriptParam_0);
				Function_55(iScriptParam_0);
				Function_54(iScriptParam_0);
				Function_52(iScriptParam_0);
				Function_43(&Global_62527, 8, Global_30723[1], "$/content/North/Mini_Games/FiveFingerFillet_MTP/FiveFingerFillet_MTP", 4294967295, 0, "MTP5Finger", 353, -464.88f, 152.352f, 1596.61f, 2.5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "mtpv_fff"));
				Function_42(&Global_62527, 8, 1);
				Function_41(&Global_62527, 8);
				iLocal_315 = 8;
				bLocal_317 = false;
				break;
			
			case 0x00000008:
				Function_37(StackVal, 3, 1.0f, 4, Local_4, 1);
				Function_36(64);
				Function_32(0, 8, 4, 7, 2);
				Function_30(Local_4);
				Function_96(&(Global_29008[iScriptParam_0]), 512);
				bLocal_317 = false;
				iLocal_315 = 9;
				break;
			
			case 0x00000009:
				Function_28(Local_4, iScriptParam_0);
				Function_96(&(Global_29008[iScriptParam_0]), 4);
				Function_27("Finished Initializing ManzanitaPost", 5.0f);
				bLocal_317 = false;
				iLocal_315 = 10;
				break;
			
			case 0x0000000A:
				if (!Function_26(Global_62981, 8))
				{
					if (Function_22(&(Global_30723[1])))
					{
						Function_21(&Global_62981, 8);
					}
				}
				if (Function_93(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_315 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_317);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 10);
	Function_11(&Global_7148, &Global_8447, iScriptParam_0, (iLocal_540 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_67(&(Global_29008[iScriptParam_0]), 32);
	Function_67(&(Global_29008[iScriptParam_0]), 64);
	Function_67(&(Global_29008[iScriptParam_0]), 8);
	Function_67(&(Global_29008[iScriptParam_0]), 512);
	Function_67(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_318))
	{
		TERMINATE_SCRIPT(bLocal_318);
	}
	Function_27("Unloaded ManzanitaPost", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xDD9 / 3545
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xE0F / 3599
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xE31 / 3633
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xE47 / 3655
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xE5D / 3677
{
	Function_6(&Local_13 + 4);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_6(int iParam0) //Position: 0xE6F / 3695
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0xE95 / 3733
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0xFC3 / 4035
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0xFDD / 4061
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xFFA / 4090
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1005 / 4101
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	strcpy(&cVar0, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_93(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_67(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_17(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_17(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_16(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_16(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_93(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_80(2) || Function_93(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
		{
			Function_12(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
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
		bVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(bVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(bVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar21));
				CLEAN_OBJECTSET(bVar21);
			}
			DESTROY_OBJECTSET(bVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_96(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1205 / 4613
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_17(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1354 / 4948
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

int Function_14(int iParam0) //Position: 0x137F / 4991
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

void Function_15(var uParam0, int iParam1) //Position: 0x13B3 / 5043
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x13C2 / 5058
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x13D9 / 5081
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x13F5 / 5109
{
	if (Function_26(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x1410 / 5136
{
	if (!Function_4(iParam0))
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

bool Function_20() //Position: 0x18BE / 6334
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(var uParam0, int iParam1) //Position: 0x18C7 / 6343
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_22(int iParam0) //Position: 0x18D6 / 6358
{
	bool bVar0;
	
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
	Function_24(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_23(iParam0);
	return 1;
}

void Function_23(int iParam0) //Position: 0x19DE / 6622
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	Function_25(*iParam0);
	vVar0 = { StackVal, StackVal, Function_25(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		bVar4 = GRINGO_GET_USE_COMPONENT_EXT(bVar3, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(bVar4))
		{
			iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, 0);
			while (iVar5 >= 4294967295)
			{
				iVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, bVar4);
				bVar7 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar6, bVar3);
				if (IS_PHYSINST_VALID(bVar7))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(bVar7), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(bVar7), 0);
				}
				iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, iVar5 + 1);
			}
		}
	}
	return;
}

vector3 Function_24(int iParam0) //Position: 0x1ABD / 6845
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.299f, 16.57026f, 2593.136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.0631f, 73.82803f, 2294.619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.766f, 18.07059f, 4453.27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.6982f, 76.28821f, 3447.546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465.0943f, 152.3517f, 1596.716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_25(int iParam0) //Position: 0x1B8F / 7055
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.388f, 16.57687f, 2592.54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.1002f, 73.83751f, 2294.133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.772f, 18.07059f, 4453.844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.5946f, 76.28807f, 3448.024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464.3469f, 152.3559f, 1596.59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1C5D / 7261
{
	return (uParam0 && iParam1) == 0;
}

void Function_27(bool bParam0, float fParam1) //Position: 0x1C6A / 7274
{
	if (!Function_80(128))
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

void Function_28(bool bParam0, bool bParam1) //Position: 0x1CA8 / 7336
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
		Function_29(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1DA2 / 7586
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_30(bool bParam0) //Position: 0x1DAF / 7599
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_106(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_31(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_31(int iParam0) //Position: 0x1E9A / 7834
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_32(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1EB7 / 7863
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
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_33();
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

void Function_33() //Position: 0x1F9B / 8091
{
	int iVar0;
	
	Global_26960 = Function_34(StackVal);
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

int Function_34(int iParam0) //Position: 0x1FE9 / 8169
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_35(int iParam0) //Position: 0x2001 / 8193
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_36(bool bParam0) //Position: 0x2016 / 8214
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2029 / 8233
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
	Global_28842.f_32 = uParam1;
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
		Function_40();
	}
	if (bParam5)
	{
		Function_38(1048576);
	}
}

void Function_38(int iParam0) //Position: 0x213C / 8508
{
	Function_39(&Global_28842, iParam0);
	return;
}

void Function_39(var uParam0, var uParam1) //Position: 0x214A / 8522
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_40() //Position: 0x2165 / 8549
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_38(16384);
	}
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x2181 / 8577
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_42(var uParam0, int iParam1, float fParam2) //Position: 0x219C / 8604
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_43(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x21C0 / 8640
{
	if (Function_20() && !bParam12)
	{
		return;
	}
	if (!Function_20() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[bParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[bParam1]);
	}
	uParam0[bParam140]->f_4 = Function_62(bParam2, bParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[bParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[bParam140]->f_8 = 4294967295;
	}
	uParam0[bParam140]->f_40 = "";
	uParam0[bParam140]->f_44 = "";
	uParam0[bParam140]->f_48 = iParam13;
	uParam0[bParam140]->f_96 = iParam7;
	uParam0[bParam140]->f_104 = 5;
	uParam0[bParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[bParam140]->f_132 = iParam4;
	uParam0[bParam140]->f_136 = 4294967295;
	uParam0[bParam140]->f_140 = 4294967295;
	uParam0[bParam140]->f_144 = 4294967295;
	strcpy(uParam0[bParam140] + 12, cParam6, 16);
	*(uParam0[bParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[bParam140]->f_64 = iParam11;
	uParam0[bParam140]->f_72 = bParam2;
	if (Global_25974[bParam1] && Function_51(bParam1))
	{
		Function_44(StackVal, StackVal, bParam2, (1 + bParam1), vParam8, 63);
	}
	uParam0[bParam140]->f_140 = 1;
	uParam0[bParam140]->f_128 |= 8192;
}

int Function_44(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x230C / 8972
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_50(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_49(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_48(StackVal, StackVal, vParam2);
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
		Function_47(uVar3);
		vVar7 = { StackVal, StackVal, Function_47(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_47(StackVal);
				vVar4 = { StackVal, StackVal, Function_47(StackVal) };
				if (Function_46(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_45(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_45(bool bParam0) //Position: 0x24EF / 9455
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

bool Function_46(vector3 vParam0, vector3 vParam3) //Position: 0x2626 / 9766
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_47(bool bParam0) //Position: 0x2653 / 9811
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
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

var Function_48(vector3 vParam0) //Position: 0x26AA / 9898
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

int Function_49(int iParam0) //Position: 0x26F8 / 9976
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

bool Function_50(vector3 vParam0) //Position: 0x27B0 / 10160
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_51(int iParam0) //Position: 0x27C8 / 10184
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

void Function_52(int iParam0) //Position: 0x27EB / 10219
{
	Function_58(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_53(&Global_17483[3375] + 120, 2, 0);
	return;
}

void Function_53(int iParam0, int iParam1, int iParam2) //Position: 0x284E / 10318
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_54(int iParam0) //Position: 0x2862 / 10338
{
	Function_58(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_53(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_55(int iParam0) //Position: 0x28C9 / 10441
{
	Function_58(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_56(int iParam0) //Position: 0x2912 / 10514
{
	Function_58(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_57(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2964 / 10596
{
	iParam0->f_128 = uParam1;
	(iParam0 + 128)->f_4 = uParam2;
	(iParam0 + 128)->f_8 = uParam3;
}

void Function_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2982 / 10626
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_59(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, uParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_59(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x29C4 / 10692
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0.5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0.5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0.5f));
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
	if (!Function_18())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, false, false);
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
					bVar2 = Function_61(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_60(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_61(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_60(int iParam0, int iParam1) //Position: 0x2D6C / 11628
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_61(int iParam0) //Position: 0x2D8D / 11661
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

int Function_62(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2DA3 / 11683
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_66(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_63(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_63(bParam0, bParam1, bParam2, 4294967295);
}

int Function_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2E01 / 11777
{
	var uVar0;
	
	if (!Function_65(bParam2))
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
	uVar0 = Function_66(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_64(uVar0);
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

int Function_64(int iParam0) //Position: 0x2F56 / 12118
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

bool Function_65(int iParam0) //Position: 0x2F94 / 12180
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_66(int iParam0, int iParam1, int iParam2) //Position: 0x2FA9 / 12201
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_67(var uParam0, int iParam1) //Position: 0x2FC9 / 12233
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x2FE0 / 12256
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_73(bParam1, bParam2);
	if (!Function_72(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_71(bParam4, 0);
		}
		else
		{
			Function_70(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_71(bParam5, 0);
		}
		else
		{
			Function_70(bParam5, 1);
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
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_69(bVar3[0], "UseCase1"));
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
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_69(bVar3[1], "UseCase1"));
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

var Function_69(bool bParam0, bool bParam1) //Position: 0x3373 / 13171
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_70(bool bParam0, bool bParam1) //Position: 0x3380 / 13184
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

void Function_71(bool bParam0, bool bParam1) //Position: 0x33D4 / 13268
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

bool Function_72(int iParam0) //Position: 0x3425 / 13349
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_73(bool bParam0, bool bParam1) //Position: 0x343B / 13371
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

int Function_74(bool bParam0, int iParam1) //Position: 0x3595 / 13717
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

int Function_75(bool bParam0, int iParam1) //Position: 0x3684 / 13956
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

int Function_76(bool bParam0, bool bParam1) //Position: 0x3763 / 14179
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

void Function_77(var uParam0, bool bParam1) //Position: 0x3898 / 14488
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_78(bool bParam0, bool bParam1) //Position: 0x38E0 / 14560
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(bParam0, "owner", bParam1);
	return;
}

var Function_79(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x3900 / 14592
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_4(iParam0))
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

bool Function_80(int iParam0) //Position: 0x399C / 14748
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_81(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x39B8 / 14776
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_80(2))
	{
		return;
	}
	if (Function_93(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_82(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_67(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_96(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_82(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x3A6A / 14954
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_93(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(iParam0, 2))
	{
		return 1;
	}
	if (Function_17(iParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, 0))
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
		uParam1->f_8 = Function_84(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_50(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(iParam0, 4);
	}
	Function_83(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x3BD5 / 15317
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_50(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_50(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_50(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_50(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_50(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_50(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_84(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x3D11 / 15633
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_106(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

void Function_85(int iParam0, var uParam1, bool bParam2) //Position: 0x3E2A / 15914
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

void Function_86(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3E85 / 16005
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_46(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_87(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3EEB / 16107
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_46(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_88(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3F53 / 16211
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_46(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_89(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3FBD / 16317
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_46(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_90(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4028 / 16424
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_46(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_91(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4090 / 16528
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_46(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_92(int iParam0) //Position: 0x40F3 / 16627
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_93(&(Global_29008[iParam0]), 4);
}

bool Function_93(var uParam0, int iParam1) //Position: 0x410F / 16655
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_94(var uParam0, var uParam1, int iParam2) //Position: 0x412B / 16683
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_20())
	{
		return 1;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_93(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
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

void Function_95(var uParam0, var uParam1, int iParam2) //Position: 0x420C / 16908
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_93(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_96(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_96(var uParam0, int iParam1) //Position: 0x42F4 / 17140
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_97() //Position: 0x4303 / 17155
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	
	Function_105(3, 3);
	bVar0 = bVar0;
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanknife", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_sitting_nosun_norain", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping_nosun_norain", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_peeing", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_begging", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_embroidery_e_any", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_103(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	if (!Function_98(&Local_13 + 4))
	{
		return 0;
	}
	Local_13 = FIND_NAMED_LAYOUT("ManzanitaPost_layout");
	if (!IS_LAYOUTREF_VALID(Local_13))
	{
		Local_13 = CREATE_LAYOUT("ManzanitaPost_layout");
	}
	Local_13.f_560 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", Local_13, 8, 0);
	*(&Local_13 + 564[06]) = { -452.5478f, 153.3997f, 1607.365f };
	*(&Local_13 + 564[06] + 12) = { 0.0f, -260.1784f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_13, "pour2", -452.5478f, 153.3997f, 1607.365f, 0.0f, -260.1784f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_13.f_560);
	*(&Local_13 + 564[16]) = { -442.5407f, 152.3502f, 1631.036f };
	*(&Local_13 + 564[16] + 12) = { 0.0f, -123.177f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_13, "drop2", -442.5407f, 152.3502f, 1631.036f, 0.0f, -123.177f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_13.f_560);
	Local_13.f_616 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_13, 8, 0);
	*(&Local_13 + 620[06]) = { -456.1563f, 153.643f, 1619.154f };
	*(&Local_13 + 620[06] + 12) = { 0.0f, -50.07809f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag44", -456.1563f, 153.643f, 1619.154f, 0.0f, -50.07809f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_13.f_616);
	*(&Local_13 + 620[16]) = { -455.0947f, 153.642f, 1621.985f };
	*(&Local_13 + 620[16] + 12) = { 0.0f, 323.8815f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag1", -455.0947f, 153.642f, 1621.985f, 0.0f, 323.8815f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_13.f_616);
	*(&Local_13 + 620[26]) = { -453.578f, 153.642f, 1625.001f };
	*(&Local_13 + 620[26] + 12) = { 0.0f, 65.81509f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag2", -453.578f, 153.642f, 1625.001f, 0.0f, 65.81509f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_13.f_616);
	*(&Local_13 + 620[36]) = { -453.168f, 153.643f, 1621.892f };
	*(&Local_13 + 620[36] + 12) = { 0.0f, 378.9476f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag3", -453.168f, 153.643f, 1621.892f, 0.0f, 378.9476f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_13.f_616);
	*(&Local_13 + 620[46]) = { -449.705f, 153.642f, 1627.892f };
	*(&Local_13 + 620[46] + 12) = { 0.0f, 446.4536f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag4", -449.705f, 153.642f, 1627.892f, 0.0f, 446.4536f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_13.f_616);
	*(&Local_13 + 620[56]) = { -448.093f, 153.643f, 1627.031f };
	*(&Local_13 + 620[56] + 12) = { 0.0f, 492.0889f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag5", -448.093f, 153.643f, 1627.031f, 0.0f, 492.0889f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_13.f_616);
	*(&Local_13 + 620[66]) = { -449.419f, 153.643f, 1624.528f };
	*(&Local_13 + 620[66] + 12) = { 0.0f, 83.83551f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag6", -449.419f, 153.643f, 1624.528f, 0.0f, 83.83551f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_13.f_616);
	*(&Local_13 + 620[76]) = { -450.882f, 153.643f, 1620.995f };
	*(&Local_13 + 620[76] + 12) = { 0.0f, 358.1332f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag7", -450.882f, 153.643f, 1620.995f, 0.0f, 358.1332f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_13.f_616);
	*(&Local_13 + 620[86]) = { -449.5082f, 153.643f, 1622.307f };
	*(&Local_13 + 620[86] + 12) = { 0.0f, 359.5456f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag8", -449.5082f, 153.643f, 1622.307f, 0.0f, 359.5456f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_13.f_616);
	*(&Local_13 + 620[96]) = { -451.011f, 153.643f, 1617.428f };
	*(&Local_13 + 620[96] + 12) = { 0.0f, 87.18411f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag9", -451.011f, 153.643f, 1617.428f, 0.0f, 87.18411f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_13.f_616);
	*(&Local_13 + 620[106]) = { -450.934f, 153.643f, 1613.469f };
	*(&Local_13 + 620[106] + 12) = { 0.0f, 181.5617f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag10", -450.934f, 153.643f, 1613.469f, 0.0f, 181.5617f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_13.f_616);
	*(&Local_13 + 620[116]) = { -453.23f, 153.69f, 1614.675f };
	*(&Local_13 + 620[116] + 12) = { 0.0f, 165.9542f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag11", -453.23f, 153.69f, 1614.675f, 0.0f, 165.9542f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_13.f_616);
	*(&Local_13 + 620[126]) = { -457.668f, 153.643f, 1615.681f };
	*(&Local_13 + 620[126] + 12) = { 0.0f, 187.6034f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag12", -457.668f, 153.643f, 1615.681f, 0.0f, 187.6034f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_13.f_616);
	*(&Local_13 + 620[136]) = { -461.361f, 153.643f, 1616.722f };
	*(&Local_13 + 620[136] + 12) = { 0.0f, 176.8521f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag13", -461.361f, 153.643f, 1616.722f, 0.0f, 176.8521f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_13.f_616);
	*(&Local_13 + 620[146]) = { -448.296f, 153.642f, 1627.836f };
	*(&Local_13 + 620[146] + 12) = { 0.0f, 203.677f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag14", -448.296f, 153.642f, 1627.836f, 0.0f, 203.677f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_13.f_616);
	*(&Local_13 + 984) = { -448.2052f, 153.6423f, 1621.561f };
	*(&Local_13 + 984 + 12) = { 0.0f, -75.39217f, 0.0f };
	Local_13.f_1008 = CREATE_POINT_IN_LAYOUT(Local_13, "player_shop_flag_GEN", -448.2052f, 153.6423f, 1621.561f, 0.0f, -75.39217f, 0.0f);
	*(&Local_13 + 1012) = { -442.8723f, 153.7947f, 1669.459f };
	*(&Local_13 + 1012 + 12) = { 0.0f, -36.67345f, 0.0f };
	Local_13.f_1036 = CREATE_POINT_IN_LAYOUT(Local_13, "player_save_flag_MTP", -442.8723f, 153.7947f, 1669.459f, 0.0f, -36.67345f, 0.0f);
	*(&Local_13 + 1040) = { -440.8558f, 153.5406f, 1666.612f };
	*(&Local_13 + 1040 + 12) = { 0.0f, -35.27298f, 0.0f };
	Local_13.f_1064 = CREATE_POINT_IN_LAYOUT(Local_13, "player_purchase_flag_MTP", -440.8558f, 153.5406f, 1666.612f, 0.0f, -35.27298f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_bucket", "Multistage_bucket", -462.1409f, 153.3525f, 1611.207f, 0.0f, -125.1834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -459.9532f, 149.4585f, 1561.889f, 0.0f, 13.19862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_announce", "stand_announce", -416.2707f, 152.0026f, 1601.502f, 0.0f, 125.61f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -459.8463f, 149.4585f, 1565.049f, 0.0f, -354.0893f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -461.2959f, 152.3523f, 1591.514f, 0.0f, -211.0874f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", -460.9363f, 149.4585f, 1555.77f, 0.0f, -185.2899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", -461.7334f, 152.3524f, 1588.257f, 0.0f, -191.8179f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -458.2216f, 152.3524f, 1592.276f, 0.0f, -273.1395f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -466.1032f, 152.3522f, 1590.397f, 0.0f, 246.4254f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_guntricks_e_any", "stand_guntricks_e_any", -468.1964f, 149.4585f, 1562.297f, 0.0f, 246.0368f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -449.123f, 148.4325f, 1548.121f, 0.0f, -0.05513339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn2", "smoking_stand_nospawn", -461.4967f, 149.4585f, 1564.401f, 0.0f, -13.85528f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn4", "smoking_stand_nospawn", -458.7669f, 152.3523f, 1593.473f, 0.0f, -261.6133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn6", "smoking_stand_nospawn", -434.0815f, 152.79f, 1621.101f, 0.0f, 56.15094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn7", "smoking_stand_nospawn", -410.988f, 152.0356f, 1592.481f, 0.0f, -119.7902f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_grandPa", "lie_sleep_on_bed_r", -452.0739f, 153.4744f, 1631.432f, 0.0f, 18.95132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1068 = CREATE_OBJECTSET_IN_LAYOUT(Function_106(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_sweeping", "Multistage_sweeping", -448.2578f, 153.6423f, 1627.849f, 0.0f, 15.8413f, 0.0f), Local_13.f_1068);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_13.f_1068)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall", "stand_hammer_wall", -437.1265f, 153.5043f, 1607.222f, 0.0f, 120.0099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "nuse_shelf", "nuse_shelf", -449.4108f, 153.643f, 1617.507f, 0.0f, 287.9146f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "use_shelf1", "nuse_shelf", -460.4286f, 153.643f, 1615.165f, 0.0f, 17.97539f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn9", "smoking_stand_nospawn", -445.9973f, 153.679f, 1616.922f, 0.0f, 24.17162f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking", "lean_fence_L_talking", -444.7703f, 153.2616f, 1633.877f, 0.0f, -165.3139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pee", "Pee", -470.4628f, 153.6592f, 1619.805f, 0.0f, 64.41236f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -463.3304f, 153.6527f, 1615.456f, 0.0f, 108.6642f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking1", "lean_fence_L_talking", -417.3629f, 151.981f, 1602.125f, 0.0f, 106.8246f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand", "smoking_stand", -445.616f, 152.3474f, 1642.978f, 0.0f, -233.1524f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -410.6606f, 151.997f, 1594.701f, 0.0f, -130.5263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -462.6324f, 152.3521f, 1593.147f, 0.0f, -192.5572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1072 = CREATE_OBJECTSET_IN_LAYOUT(Function_106(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard", "stand_check_clipboard", -448.5985f, 153.6164f, 1626.065f, 0.0f, 70.10171f, 0.0f), Local_13.f_1072);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_13.f_1072)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard1", "stand_check_clipboard", -450.3533f, 153.6544f, 1619.079f, 0.0f, -37.12104f, 0.0f), Local_13.f_1072);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_13.f_1072)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard2", "stand_check_clipboard", -454.9886f, 153.712f, 1622.02f, 0.0f, 48.9295f, 0.0f), Local_13.f_1072);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_13.f_1072)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard3", "stand_check_clipboard", -458.1244f, 153.6399f, 1615.224f, 0.0f, 53.55996f, 0.0f), Local_13.f_1072);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_13.f_1072)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nlean_rail", "nlean_rail", -450.6583f, 153.2753f, 1635.898f, 0.0f, 104.668f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail1", "nlean_rail", -444.3425f, 153.2879f, 1630.637f, 0.0f, -67.20634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -410.9013f, 151.9952f, 1607.521f, 0.0f, -161.4946f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nsit_docks", "nsit_docks", -405.4461f, 154.6343f, 1612.14f, 0.0f, -72.48959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -420.1948f, 152.4629f, 1655.096f, 0.0f, 213.3387f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1076 = CREATE_OBJECTSET_IN_LAYOUT(Function_106(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "skin_scraper1", "skin_scraper", -434.4794f, 152.349f, 1641.24f, 0.0f, -21.40638f, 0.0f), Local_13.f_1076);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_13.f_1076)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "skin_scraper", "skin_scraper", -437.1036f, 152.5303f, 1634.07f, 0.0f, 103.4843f, 0.0f), Local_13.f_1076);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_13.f_1076)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Campfire_Tend2", "Sit_Ground_Campfire_Tend", -447.1107f, 152.3468f, 1643.379f, 0.0f, -201.0855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -468.9283f, 152.3521f, 1589.258f, 0.0f, -102.1921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand1", "smoking_stand", -454.8755f, 153.3557f, 1606.73f, 0.0f, 189.3744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke", "sit_ground_smoke", -454.6824f, 149.4585f, 1557.282f, 0.0f, 136.9088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand2", "smoking_stand", -440.0928f, 153.3415f, 1667.247f, 0.0f, 16.43336f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand3", "smoking_stand", -408.1328f, 151.9963f, 1602.398f, 0.0f, -87.2506f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -406.7569f, 151.9909f, 1605.909f, 0.0f, -153.9074f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table", "stand_hammer_table", -457.4655f, 153.3579f, 1606.031f, 0.0f, -164.6332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -473.56f, 152.3472f, 1591.056f, 0.0f, -192.0127f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -473.4189f, 152.3701f, 1589.005f, 0.0f, -14.10636f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand1", "rand_idle_stand", -459.7059f, 152.3525f, 1588.754f, 0.0f, -197.5577f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", -461.5822f, 152.3611f, 1583.649f, 0.0f, 88.64276f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -454.6555f, 149.4585f, 1560.61f, 0.0f, 60.39952f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", -459.8169f, 152.3665f, 1583.556f, 0.0f, -88.47569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_guntricks_e_any1", "stand_guntricks_e_any", -462.4196f, 149.4585f, 1559.729f, 0.0f, -118.2966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_no_table", "sit_no_table", -438.9066f, 152.3818f, 1621.612f, 0.0f, -86.36549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Drink", "Sit_Ground_Drink", -468.9798f, 149.4585f, 1559.522f, 0.0f, -98.14437f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -463.9873f, 152.3523f, 1591.785f, 0.0f, -160.5356f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_r2", "lie_sleep_on_bed_r", -468.5805f, 149.5208f, 1556.178f, 0.0f, -41.88407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", -469.7071f, 149.4597f, 1557.398f, 0.0f, 137.6603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammerground_w_any", "stand_hammerground_w_any", -440.1285f, 153.668f, 1608.727f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l3", "lie_sleep_on_bed_l", -451.811f, 149.4708f, 1559.002f, 0.0f, -3.798198f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_sellPaper", "stand_sellPaper", -412.2684f, 152.0363f, 1598.35f, 0.0f, -266.8094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lie_sleep_on_bed_l4", "lie_sleep_on_bed_l", -456.7327f, 149.4752f, 1567.765f, 0.0f, -61.64766f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_13, "player_sleep_MTP", "player_sleep_bed_R", -445.8252f, 153.5015f, 1671.3f, 0.0f, 53.38073f, 0.0f);
	Local_13.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker", "Locked_Footlocker", -440.5854f, 153.5015f, 1670.476f, 0.0f, 54.29902f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_1088, "PlayerHouseChest", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand4", "smoking_stand", -436.0515f, 152.63f, 1621.181f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand", "rand_idle_stand", -442.4321f, 152.3474f, 1644.395f, 0.0f, -178.1945f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "fivefingerfillet_spectate2", "fivefingerfillet_spectate", -463.5462f, 152.3519f, 1598.171f, 0.0f, 38.81675f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "use_shelf2", "nuse_shelf", -451.6537f, 153.643f, 1612.983f, 0.0f, 379.0972f, 0.0f);
	Local_13.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_table", "lean_table", -450.4998f, 153.643f, 1615.213f, 0.0f, -72.67769f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_13, "use_shelf3", "nuse_shelf", -456.4213f, 153.643f, 1614.634f, 0.0f, 379.0972f, 0.0f);
	Local_13.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", -452.6484f, 153.6451f, 1628.632f, 0.0f, -190.907f, 0.0f);
	Local_13.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_table1", "lean_table", -450.2936f, 153.6423f, 1624.704f, 0.0f, 108.4065f, 0.0f);
	Local_13.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_L", "look_out_window_L", -445.1767f, 153.6423f, 1619.694f, 0.0f, -71.39623f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_rail2", "nlean_rail", -444.1862f, 153.6423f, 1622.052f, 0.0f, -67.20634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -411.8651f, 151.997f, 1593.836f, 0.0f, 338.7438f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1108 = CREATE_OBJECTSET_IN_LAYOUT(Function_106(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_announce10", "stand_announce", -410.5049f, 151.997f, 1593.359f, 0.0f, 141.1104f, 0.0f), Local_13.f_1108);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_13.f_1108)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_announce2", "stand_announce", -408.2245f, 151.997f, 1599.509f, 0.0f, 141.1104f, 0.0f), Local_13.f_1108);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_13.f_1108)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard10", "stand_check_clipboard", -409.4391f, 151.9843f, 1597.628f, 0.0f, 113.7952f, 0.0f), Local_13.f_1108);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_13.f_1108)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_check_clipboard11", "stand_check_clipboard", -412.4676f, 152.2611f, 1604.859f, 0.0f, 198.7511f, 0.0f), Local_13.f_1108);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_13.f_1108)), 0);
	Local_13.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand5", "smoking_stand", -445.1013f, 152.3468f, 1645.452f, 0.0f, 63.90519f, 0.0f);
	Local_13.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_cleanknife", "sit_cleanknife", -442.6447f, 153.3415f, 1664.753f, 0.0f, -216.4481f, 0.0f);
	Local_13.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain", "dog_sitting_nosun_norain", -440.0685f, 153.3459f, 1664.678f, 0.0f, -27.45122f, 0.0f);
	Local_13.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain", "dog_sleeping_nosun_norain", -438.7783f, 153.3572f, 1667.334f, 0.0f, -141.8282f, 0.0f);
	Local_13.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_peeing", "dog_peeing", -443.2755f, 153.2498f, 1661.958f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging", "dog_begging", -436.2619f, 153.3488f, 1669.269f, 0.0f, 10.37688f, 0.0f);
	Local_13.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_peeing1", "dog_peeing", -433.3273f, 152.3761f, 1643.377f, 0.0f, -45.58448f, 0.0f);
	Local_13.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain1", "dog_sleeping_nosun_norain", -441.2228f, 152.3542f, 1638.416f, 0.0f, -141.8282f, 0.0f);
	Local_13.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_peeing2", "dog_peeing", -442.5812f, 152.3761f, 1636.6f, 0.0f, -66.10598f, 0.0f);
	Local_13.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging1", "dog_begging", -438.5992f, 152.5514f, 1625.365f, 0.0f, -17.66698f, 0.0f);
	Local_13.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_peeing3", "dog_peeing", -435.5265f, 152.7129f, 1624.947f, 0.0f, 6.06516f, 0.0f);
	Local_13.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain2", "dog_sleeping_nosun_norain", -445.8478f, 152.3542f, 1613.405f, 0.0f, -141.8282f, 0.0f);
	Local_13.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging2", "dog_begging", -439.7459f, 153.6289f, 1610.004f, 0.0f, 156.8025f, 0.0f);
	Local_13.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting_nosun_norain1", "dog_sitting_nosun_norain", -453.5348f, 153.3649f, 1608.518f, 0.0f, 150.4019f, 0.0f);
	Local_13.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain3", "dog_sleeping_nosun_norain", -456.9132f, 152.3646f, 1585.292f, 0.0f, -243.6771f, 0.0f);
	Local_13.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging3", "dog_begging", -467.8965f, 152.3872f, 1600.456f, 0.0f, 324.0213f, 0.0f);
	Local_13.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_peeing4", "dog_peeing", -459.7479f, 152.3851f, 1593.538f, 0.0f, 6.06516f, 0.0f);
	Local_13.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping_nosun_norain4", "dog_sleeping_nosun_norain", -455.6593f, 149.4729f, 1564.71f, 0.0f, -204.3772f, 0.0f);
	Local_13.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_peeing5", "dog_peeing", -448.7225f, 149.4146f, 1557.173f, 0.0f, 35.3625f, 0.0f);
	Local_13.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging4", "dog_begging", -464.4003f, 149.4313f, 1556.434f, 0.0f, 550.6816f, 0.0f);
	Local_13.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -458.3015f, 152.3525f, 1588.673f, 0.0f, -202.4089f, 0.0f);
	Local_13.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_embroidery_e_any", "sit_embroidery_e_any", -441.7943f, 153.3415f, 1665.747f, 0.0f, -33.8605f, 0.0f);
	Local_13.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", -464.753f, 152.3517f, 1598.612f, 0.0f, 4.575131f, 0.0f);
	Local_13.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", -462.8687f, 152.352f, 1597.15f, 0.0f, -290.5611f, 0.0f);
	return 1;
}

bool Function_98(int iParam0) //Position: 0x79F3 / 31219
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_102();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_101(iParam0[iVar03], 8);
		}
		else if (Function_100())
		{
			iVar1 = 1;
			Function_101(iParam0[iVar03], 8);
		}
		Function_101(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_101(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
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
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
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
	Function_99();
	return 1;
}

void Function_99() //Position: 0x7D6E / 32110
{
	if (!Function_80(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_100() //Position: 0x7DAE / 32174
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

void Function_101(var uParam0, int iParam1) //Position: 0x7DD9 / 32217
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_102() //Position: 0x7DEA / 32234
{
	if (!Function_80(128))
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

var Function_103(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7E2C / 32300
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_104(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_101(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_104(var uParam0, int iParam1, int iParam2) //Position: 0x7E64 / 32356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_101(uParam0[iVar03], 4);
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

void Function_105(int iParam0, int iParam1) //Position: 0x7F28 / 32552
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

var Function_106() //Position: 0x7F71 / 32625
{
	int iVar0;
	
	return iVar0;
}

bool Function_107() //Position: 0x7F79 / 32633
{
	var uVar0;
	
	Function_105(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("ManzanitaPost_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("ManzanitaPost_layout");
	}
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "mtpv_wolf_trigger", 3, -648.4926f, 87.459f, 1488.032f, 0.0f, -31.57944f, 0.0f, 11.27725f, 3.0f, 20.08958f);
	*(&Local_4 + 8) = { -444.8913f, 153.2378f, 1663.379f };
	*(&Local_4 + 8 + 12) = { 0.0f, -79.87083f, 0.0f };
	Local_4.f_32 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -444.8913f, 153.2378f, 1663.379f, 0.0f, -79.87083f, 0.0f);
	return 1;
}

void Function_108(bool bParam0, var uParam1) //Position: 0x8061 / 32865
{
	if (!Function_80(128))
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

