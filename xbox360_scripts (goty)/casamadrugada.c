//Decompiled with MagicRDR v1.0
//Function Count : 116
//Statics Count : 536
//Natives Count : 155
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<29> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	bool bLocal_251 = false;
	var uLocal_252 = 14;
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
	int iLocal_533 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_249 = 0;
	ALLOW_TUMBLEWEEDS(0);
	Function_115("Initializing CasaMadrugada", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_250 = 1000;
		switch (iLocal_249)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_249 = 1;
				}
				iLocal_250 = 0;
				break;
			
			case 0x00000001:
				if (Function_114())
				{
					Global_62981 = 0;
					iLocal_249 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
				}
				iLocal_250 = 0;
				break;
			
			case 0x00000002:
				if (Function_105())
				{
					Function_104(&(Global_29008[iScriptParam_0]), 32);
					iLocal_249 = 3;
				}
				iLocal_250 = 0;
				break;
			
			case 0x00000003:
				bLocal_251 = LAUNCH_NEW_SCRIPT_WITH_ARGS("CasaMadrugadaVol", &iScriptParam_0, 2, 0);
				Function_103(&Global_6933, &Global_8129, iScriptParam_0);
				iLocal_249 = 5;
				iLocal_250 = 0;
				break;
			
			case 0x00000005:
				if (Function_102(&Global_6933, &Global_8129, iScriptParam_0))
				{
					iLocal_249 = 4;
					iLocal_250 = 0;
				}
				else
				{
					iLocal_250 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_101(&(Global_29008[iScriptParam_0]), 16) && Function_100(Global_29155[iScriptParam_010]))
				{
					iLocal_249 = 6;
				}
				iLocal_250 = 0;
				break;
			
			case 0x00000006:
				if (!Function_101(&(Global_29008[iScriptParam_0]), 256) && Function_99(2))
				{
					Function_98(0, &uLocal_252, -786.8682f, 13.17285f, 3694.873f);
					Function_97(0, &uLocal_252, -794.588f, 13.184f, 3694.352f);
					Function_96(0, &uLocal_252, -794.588f, 13.184f, 3694.352f);
					Function_95(0, &uLocal_252, -794.588f, 13.184f, 3694.352f);
					Function_94(0, &uLocal_252, -794.588f, 13.184f, 3694.352f);
					Function_93(0, &uLocal_252, -794.588f, 13.184f, 3694.352f);
					Function_92(0, &uLocal_252, Local_12);
					Function_98(1, &uLocal_252, -768.35f, 14.055f, 3749.934f);
					Function_97(1, &uLocal_252, -826.342f, 13.051f, 3747.089f);
					Function_96(1, &uLocal_252, -826.342f, 13.051f, 3747.089f);
					Function_95(1, &uLocal_252, -826.342f, 13.051f, 3747.089f);
					Function_94(1, &uLocal_252, -797.062f, 13.171f, 3694.872f);
					Function_93(1, &uLocal_252, -788.5248f, 13.20358f, 3693.256f);
					Function_92(1, &uLocal_252, Local_12);
					Function_98(2, &uLocal_252, -808.064f, 13.051f, 3776.004f);
					Function_97(2, &uLocal_252, -808.064f, 13.051f, 3776.004f);
					Function_96(2, &uLocal_252, -808.064f, 13.051f, 3776.004f);
					Function_95(2, &uLocal_252, -808.064f, 13.051f, 3776.004f);
					Function_94(2, &uLocal_252, -795.678f, 13.213f, 3696.258f);
					Function_93(2, &uLocal_252, -791.942f, 13.163f, 3689.718f);
					Function_92(2, &uLocal_252, Local_12);
					Function_98(10, &uLocal_252, -792.003f, 13.165f, 3702.806f);
					Function_97(10, &uLocal_252, -806.9908f, 13.19484f, 3693.934f);
					Function_96(10, &uLocal_252, -806.9908f, 13.19484f, 3693.934f);
					Function_95(10, &uLocal_252, -799.117f, 13.214f, 3704.794f);
					Function_94(10, &uLocal_252, -807.515f, 13.165f, 3696.357f);
					Function_93(10, &uLocal_252, -812.164f, 16.702f, 3712.19f);
					Function_92(10, &uLocal_252, Local_12);
					Function_98(3, &uLocal_252, -815.222f, 16.645f, 3699.205f);
					Function_97(3, &uLocal_252, -815.222f, 16.645f, 3699.205f);
					Function_96(3, &uLocal_252, -800.343f, 13.195f, 3695.726f);
					Function_95(3, &uLocal_252, -799.117f, 13.214f, 3704.794f);
					Function_94(3, &uLocal_252, -807.47f, 13.168f, 3694.621f);
					Function_93(3, &uLocal_252, -820.203f, 16.769f, 3709.885f);
					Function_92(3, &uLocal_252, Local_12);
					Function_98(4, &uLocal_252, -809.411f, 16.665f, 3705.222f);
					Function_97(4, &uLocal_252, -809.4114f, 16.66483f, 3705.222f);
					Function_96(4, &uLocal_252, -814.024f, 16.665f, 3713.905f);
					Function_95(4, &uLocal_252, -792.906f, 13.188f, 3697.834f);
					Function_94(4, &uLocal_252, -809.411f, 16.665f, 3705.222f);
					Function_93(4, &uLocal_252, -809.411f, 16.665f, 3705.222f);
					Function_92(4, &uLocal_252, Local_12);
					Function_98(5, &uLocal_252, -811.452f, 16.669f, 3693.501f);
					Function_97(5, &uLocal_252, -811.452f, 16.669f, 3693.501f);
					Function_96(5, &uLocal_252, -796.148f, 13.196f, 3695.799f);
					Function_95(5, &uLocal_252, -819.808f, 13.209f, 3738.526f);
					Function_94(5, &uLocal_252, -811.452f, 16.669f, 3693.501f);
					Function_93(5, &uLocal_252, -800.343f, 13.195f, 3695.726f);
					Function_92(5, &uLocal_252, Local_12);
					Function_98(6, &uLocal_252, -812.064f, 13.133f, 3697.763f);
					Function_97(6, &uLocal_252, -812.064f, 13.133f, 3697.763f);
					Function_96(6, &uLocal_252, -812.064f, 13.133f, 3697.763f);
					Function_95(6, &uLocal_252, -796.315f, 13.17f, 3689.777f);
					Function_94(6, &uLocal_252, -807.5838f, 13.16464f, 3704.585f);
					Function_93(6, &uLocal_252, -812.064f, 13.133f, 3697.763f);
					Function_92(6, &uLocal_252, Local_12);
					Function_98(7, &uLocal_252, -815.453f, 13.148f, 3702.745f);
					Function_97(7, &uLocal_252, -815.453f, 13.148f, 3702.745f);
					Function_96(7, &uLocal_252, -815.453f, 13.148f, 3702.745f);
					Function_95(7, &uLocal_252, -828.671f, 13.165f, 3712.736f);
					Function_94(7, &uLocal_252, -815.453f, 13.148f, 3702.745f);
					Function_93(7, &uLocal_252, -815.453f, 13.148f, 3702.745f);
					Function_92(7, &uLocal_252, Local_12);
					Function_98(8, &uLocal_252, -818.5184f, 13.20006f, 3709.336f);
					Function_97(8, &uLocal_252, -818.5184f, 13.20006f, 3709.336f);
					Function_96(8, &uLocal_252, -792.11f, 13.163f, 3709.14f);
					Function_95(8, &uLocal_252, -780.1166f, 13.03314f, 3696.272f);
					Function_94(8, &uLocal_252, -819.09f, 13.165f, 3715.537f);
					Function_93(8, &uLocal_252, -818.5184f, 13.20006f, 3709.336f);
					Function_92(8, &uLocal_252, Local_12);
					Function_98(9, &uLocal_252, -805.415f, 16.665f, 3697.317f);
					Function_97(9, &uLocal_252, -805.415f, 16.665f, 3697.317f);
					Function_96(9, &uLocal_252, -801.96f, 16.73f, 3701.59f);
					Function_95(9, &uLocal_252, -797.0615f, 13.03292f, 3727.115f);
					Function_94(9, &uLocal_252, -801.96f, 16.73f, 3701.59f);
					Function_93(9, &uLocal_252, -811.293f, 16.685f, 3711.247f);
					Function_92(9, &uLocal_252, Local_12);
					Function_98(11, &uLocal_252, -820.015f, 13.165f, 3715.255f);
					Function_97(11, &uLocal_252, -792.7556f, 13.05098f, 3730.498f);
					Function_96(11, &uLocal_252, -791.768f, 13.169f, 3685.52f);
					Function_95(11, &uLocal_252, -789.3539f, 13.16464f, 3706.811f);
					Function_94(11, &uLocal_252, -792.7556f, 13.05098f, 3730.498f);
					Function_93(11, &uLocal_252, -823.643f, 16.665f, 3709.448f);
					Function_92(11, &uLocal_252, Local_12);
					Function_98(12, &uLocal_252, -806.6476f, 16.66514f, 3688.365f);
					Function_97(12, &uLocal_252, -793.916f, 13.178f, 3688.014f);
					Function_96(12, &uLocal_252, -815.9912f, 13.2092f, 3735.653f);
					Function_95(12, &uLocal_252, -792.7556f, 13.05098f, 3730.498f);
					Function_94(12, &uLocal_252, -820.446f, 13.211f, 3721.602f);
					Function_93(12, &uLocal_252, -784.958f, 13.252f, 3697.156f);
					Function_92(12, &uLocal_252, Local_12);
					Function_98(13, &uLocal_252, -791.7902f, 13.16862f, 3685.779f);
					Function_97(13, &uLocal_252, -820.015f, 13.165f, 3715.255f);
					Function_96(13, &uLocal_252, -792.218f, 13.136f, 3714.992f);
					Function_95(13, &uLocal_252, -808.1292f, 16.66519f, 3689.384f);
					Function_94(13, &uLocal_252, -823.643f, 16.665f, 3709.448f);
					Function_93(13, &uLocal_252, -753.161f, 13.091f, 3741.224f);
					Function_92(13, &uLocal_252, Local_12);
					iLocal_533 = 0;
				}
				else
				{
					iLocal_533 = 1;
				}
				Function_88(&Global_6933, &Global_8129, &uLocal_252, Global_6289, iScriptParam_0);
				if (Function_101(&(Global_29008[iScriptParam_0]), 256) || !Function_99(2))
				{
					iLocal_533 = 1;
				}
				Function_87(1);
				Function_80(7, Local_12.f_768, Local_12.f_680, Local_12.f_708, Function_86(iScriptParam_0, "casaMadrugada", "whorehouse01", 7), Function_86(iScriptParam_0, "casaMadrugada", "whorehouse01", 8), Local_4.f_28);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_12, "casv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "casv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "casv_players_room"));
				}
				else
				{
					LOG_ERROR("CAS: Cannot find casv_players_room to restrict players room");
				}
				Function_79(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 792));
				Function_79(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 740));
				Function_79(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 744));
				Function_79(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 748));
				Function_79(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 772));
				Function_79(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 776));
				Function_104(&(Global_29008[iScriptParam_0]), 8);
				if (Function_101(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_78(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_249 = 10;
				}
				else
				{
					iLocal_249 = 7;
				}
				iLocal_250 = 0;
				break;
			
			case 0x00000007:
				if (Function_77())
				{
					Function_63(&Global_62527, 7, Global_30707[2], "$/content/Mexico/Mini_Games/LiarsDice_CAS/LiarsDice_CAS", 4294967295, 0, "CasLiarsDiceHC", 426, -789.579f, 13.165f, 3699.865f, 2.5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "casv_liarsdice"));
					Function_62(&Global_62527, 7, 10);
				}
				else
				{
					Function_63(&Global_62527, 7, Global_30707[2], "$/content/Mexico/Mini_Games/LiarsDice_CAS/LiarsDice_CAS", 4294967295, 0, "CasLiarsDice", 426, -789.579f, 13.165f, 3699.865f, 2.5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "casv_liarsdice"));
					Function_62(&Global_62527, 7, 20);
				}
				if (Function_77())
				{
					Function_63(&Global_62527, 0, Global_30707[2], "$/content/Mexico/Mini_Games/Poker_CAS/Poker_CAS", 4294967295, 0, "CasPokerHC", 433, -795.247f, 13.165f, 3699.644f, 2.5f, 0, 0);
					Function_62(&Global_62527, 0, 25);
				}
				else
				{
					Function_63(&Global_62527, 0, Global_30707[2], "$/content/Mexico/Mini_Games/Poker_CAS/Poker_CAS", 4294967295, 0, "CasPoker", 433, -795.247f, 13.165f, 3699.644f, 2.5f, 0, 0);
					Function_62(&Global_62527, 0, 50);
				}
				switch (Global_30619)
				{
					case 0x00000000:
						Function_61(iScriptParam_0);
						break;
					
					case 0x00000001:
						Function_61(iScriptParam_0);
						break;
					
					case 0x00000002:
						Function_61(iScriptParam_0);
						break;
					
					case 0x00000003:
						break;
				}
				Function_60(iScriptParam_0);
				Function_58(iScriptParam_0);
				Function_57(iScriptParam_0);
				Function_56(iScriptParam_0);
				Function_53(iScriptParam_0);
				Function_52(iScriptParam_0);
				Function_48(9, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_notoriety", 63, 2, 65.0f, 8, 70, 0);
				Function_47(&Global_17483[975] + 120, 2, 5.0f, 1, 4294967295);
				Function_48(8, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_lowhonor", 63, 2, 65.0f, 8, 70, 0);
				Function_47(&Global_17483[875] + 120, 2, 5.0f, 1, 4294967295);
				Function_48(10, 1, 25, 4294967276, 50, 1, 2048, 1, 4, iScriptParam_0, "$/content/Ambient/Town/beat_duel_rude", 63, 2, 65.0f, 8, 70, 0);
				Function_47(&Global_17483[1075] + 120, 2, 5.0f, 1, 4294967295);
				iLocal_249 = 8;
				iLocal_250 = 0;
				break;
			
			case 0x00000008:
				Function_46(64);
				if (Function_41(iScriptParam_0, &Global_6933, iLocal_533))
				{
					Function_37(StackVal, 0, 0.1f, 4, Local_4, 1);
				}
				else
				{
					switch (Global_30619)
					{
						case 0x00000000:
							Function_37(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000001:
							Function_37(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000002:
							Function_37(StackVal, 0, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000003:
							Function_37(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
						}
				}
				Function_33(2, 4294967295, 4294967295, 0, 3);
				Function_30(Local_4);
				Function_104(&(Global_29008[iScriptParam_0]), 512);
				iLocal_249 = 9;
				iLocal_250 = 0;
				break;
			
			case 0x00000009:
				Function_28(Local_4, iScriptParam_0);
				Function_104(&(Global_29008[iScriptParam_0]), 4);
				Function_27("Finished Initializing CasaMadrugada", 5.0f);
				iLocal_249 = 10;
				iLocal_250 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_26(Global_62981, 1))
				{
					if (Function_24(&(Global_30707[2]), 0))
					{
						Function_23(&Global_62981, 1);
					}
				}
				if (!Function_26(Global_62981, 4))
				{
					if (Function_21(&(Global_30707[2])))
					{
						Function_23(&Global_62981, 4);
					}
				}
				if (Function_101(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_249 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_250);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	Function_11(&Global_6933, &Global_8129, iScriptParam_0, (iLocal_533 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_87(0);
	Function_78(&(Global_29008[iScriptParam_0]), 32);
	Function_78(&(Global_29008[iScriptParam_0]), 64);
	Function_78(&(Global_29008[iScriptParam_0]), 8);
	Function_78(&(Global_29008[iScriptParam_0]), 512);
	Function_78(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_251))
	{
		TERMINATE_SCRIPT(bLocal_251);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_27("Unloaded CasaMadrugada", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x118A / 4490
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

void Function_2(int iParam0) //Position: 0x11C0 / 4544
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x11E2 / 4578
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x11F8 / 4600
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x120E / 4622
{
	Function_6(&Local_12 + 4);
	RELEASE_LAYOUT_REF(Local_12);
	return;
}

void Function_6(int iParam0) //Position: 0x1220 / 4640
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

void Function_7(var uParam0, int iParam1) //Position: 0x1246 / 4678
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

void Function_8(var uParam0, int iParam1) //Position: 0x1374 / 4980
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x138E / 5006
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x13AB / 5035
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x13B6 / 5046
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
	if (Function_101(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_78(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_101(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_99(2) || Function_101(&(Global_29008[iParam2]), 256))
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
			Function_104(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x15B6 / 5558
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

int Function_13(int iParam0) //Position: 0x1705 / 5893
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

int Function_14(int iParam0) //Position: 0x1730 / 5936
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

void Function_15(var uParam0, int iParam1) //Position: 0x1764 / 5988
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x1773 / 6003
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x178A / 6026
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x17A6 / 6054
{
	if (Function_26(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x17C1 / 6081
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

bool Function_20() //Position: 0x1C6F / 7279
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_21(int iParam0) //Position: 0x1C78 / 7288
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (*iParam0 == Global_30685[0])
		{
			Function_22(*iParam0, iVar1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_22(*iParam0, iVar1), 1.0f, "p_gen_chair06x", 1);
		}
		else
		{
			Function_22(*iParam0, iVar1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_22(*iParam0, iVar1), 1.0f, "p_gen_chair05x", 1);
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

vector3 Function_22(int iParam0, int iParam1) //Position: 0x1D3A / 7482
{
	if (iParam0 == Global_30685[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -4288.696f, 26.72937f, 4381.383f;
				break;
			
			case 0x00000001:
				return -4289.277f, 26.72937f, 4381.477f;
				break;
			
			case 0x00000002:
				return -4289.651f, 26.72937f, 4381.039f;
				break;
			
			case 0x00000003:
				return -4289.435f, 26.72937f, 4380.51f;
				break;
			
			case 0x00000004:
				return -4288.878f, 26.72937f, 4380.39f;
				break;
			
			case 0x00000005:
				return -4288.485f, 26.72937f, 4380.807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 167.5964f, 73.74156f, 2222.775f;
				break;
			
			case 0x00000001:
				return 167.958f, 73.74529f, 2222.327f;
				break;
			
			case 0x00000002:
				return 168.5496f, 73.74591f, 2222.387f;
				break;
			
			case 0x00000003:
				return 168.7889f, 73.74529f, 2222.935f;
				break;
			
			case 0x00000004:
				return 168.4313f, 73.74976f, 2223.425f;
				break;
			
			case 0x00000005:
				return 167.8298f, 73.74976f, 2223.35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -788.6586f, 13.16462f, 3698.422f;
				break;
			
			case 0x00000001:
				return -788.4316f, 13.16762f, 3698.957f;
				break;
			
			case 0x00000002:
				return -788.7964f, 13.165f, 3699.425f;
				break;
			
			case 0x00000003:
				return -789.389f, 13.165f, 3699.35f;
				break;
			
			case 0x00000004:
				return -789.6095f, 13.165f, 3698.805f;
				break;
			
			case 0x00000005:
				return -789.2333f, 13.165f, 3698.335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 856.9058f, 77.51558f, 1278.093f;
				break;
			
			case 0x00000001:
				return 856.6888f, 77.51558f, 1277.556f;
				break;
			
			case 0x00000002:
				return 857.0518f, 77.51558f, 1277.099f;
				break;
			
			case 0x00000003:
				return 857.629f, 77.51558f, 1277.148f;
				break;
			
			case 0x00000004:
				return 857.8614f, 77.51558f, 1277.699f;
				break;
			
			case 0x00000005:
				return 857.4864f, 77.51558f, 1278.173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_23(var uParam0, int iParam1) //Position: 0x200E / 8206
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_24(float fParam0, bool bParam1) //Position: 0x201D / 8221
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_25(*fParam0, iVar1, bParam1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_25(*fParam0, iVar1, 0);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
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

vector3 Function_25(int iParam0, int iParam1, bool bParam2) //Position: 0x20E0 / 8416
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801.0966f, 92.75807f, 2375.792f;
				break;
			
			case 0x00000001:
				return -801.4974f, 92.75435f, 2375.295f;
				break;
			
			case 0x00000002:
				return -801.2829f, 92.75435f, 2374.737f;
				break;
			
			case 0x00000003:
				return -800.724f, 92.76255f, 2374.656f;
				break;
			
			case 0x00000004:
				return -800.3233f, 92.75678f, 2375.122f;
				break;
			
			case 0x00000005:
				return -800.5463f, 92.75435f, 2375.677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164.353f, 73.75671f, 2230.925f;
				break;
			
			case 0x00000001:
				return 164.5807f, 73.82056f, 2231.472f;
				break;
			
			case 0x00000002:
				return 164.2043f, 73.75299f, 2231.971f;
				break;
			
			case 0x00000003:
				return 163.6548f, 73.76118f, 2231.889f;
				break;
			
			case 0x00000004:
				return 163.4103f, 73.76118f, 2231.366f;
				break;
			
			case 0x00000005:
				return 163.7511f, 73.75671f, 2230.869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157.424f, 16.88292f, 2596.033f;
				break;
			
			case 0x00000001:
				return -2158.012f, 16.94059f, 2595.997f;
				break;
			
			case 0x00000002:
				return -2158.228f, 16.87845f, 2595.416f;
				break;
			
			case 0x00000003:
				return -2157.847f, 16.87845f, 2594.96f;
				break;
			
			case 0x00000004:
				return -2157.261f, 16.87845f, 2595.042f;
				break;
			
			case 0x00000005:
				return -2157.04f, 16.87845f, 2595.596f;
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
					return 748.5359f, 82.6927f, 1267.343f;
					break;
				
				case 0x00000001:
					return 749.138f, 82.6927f, 1266.645f;
					break;
				
				case 0x00000002:
					return 750.045f, 82.6927f, 1266.796f;
					break;
				
				case 0x00000003:
					return 750.0344f, 82.6917f, 1267.552f;
					break;
				
				case 0x00000004:
					return 749.7606f, 82.6927f, 1268.372f;
					break;
				
				case 0x00000005:
					return 748.8501f, 82.6927f, 1268.207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717.6248f, 78.47099f, 1325.972f;
					break;
				
				case 0x00000001:
					return 717.0453f, 78.47099f, 1325.919f;
					break;
				
				case 0x00000002:
					return 716.8008f, 78.47099f, 1325.396f;
					break;
				
				case 0x00000003:
					return 717.1418f, 78.47099f, 1324.928f;
					break;
				
				case 0x00000004:
					return 717.7181f, 78.47099f, 1324.969f;
					break;
				
				case 0x00000005:
					return 717.9684f, 78.47099f, 1325.495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138.6693f, 119.2419f, 1344.049f;
				break;
			
			case 0x00000001:
				return -139.2573f, 119.2419f, 1343.961f;
				break;
			
			case 0x00000002:
				return -139.4945f, 119.2419f, 1343.419f;
				break;
			
			case 0x00000003:
				return -139.1212f, 119.2419f, 1342.946f;
				break;
			
			case 0x00000004:
				return -138.5368f, 119.2419f, 1343.024f;
				break;
			
			case 0x00000005:
				return -138.2953f, 119.2419f, 1343.58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701.487f, 31.151f, 4278.554f;
				break;
			
			case 0x00000001:
				return -2701.713f, 31.151f, 4277.994f;
				break;
			
			case 0x00000002:
				return -2701.347f, 31.151f, 4277.538f;
				break;
			
			case 0x00000003:
				return -2700.726f, 31.151f, 4277.604f;
				break;
			
			case 0x00000004:
				return -2700.508f, 31.151f, 4278.2f;
				break;
			
			case 0x00000005:
				return -2700.919f, 31.151f, 4278.653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795.5794f, 13.16767f, 3699.937f;
				break;
			
			case 0x00000001:
				return -795.8744f, 13.16057f, 3699.083f;
				break;
			
			case 0x00000002:
				return -794.9905f, 13.16057f, 3698.687f;
				break;
			
			case 0x00000003:
				return -794.196f, 13.16057f, 3699.235f;
				break;
			
			case 0x00000004:
				return -794.2787f, 13.16057f, 3700.203f;
				break;
			
			case 0x00000005:
				return -795.169f, 13.16057f, 3700.608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_26(var uParam0, int iParam1) //Position: 0x265A / 9818
{
	return (uParam0 && iParam1) == 0;
}

void Function_27(bool bParam0, float fParam1) //Position: 0x2667 / 9831
{
	if (!Function_99(128))
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

void Function_28(bool bParam0, bool bParam1) //Position: 0x26A5 / 9893
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

void Function_29(var uParam0, int iParam1) //Position: 0x279F / 10143
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_30(bool bParam0) //Position: 0x27AC / 10156
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_32(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_31(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_31(var uParam0) //Position: 0x2897 / 10391
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_32() //Position: 0x28B4 / 10420
{
	int iVar0;
	
	return iVar0;
}

void Function_33(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x28BC / 10428
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
		Function_34();
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

void Function_34() //Position: 0x29A0 / 10656
{
	int iVar0;
	
	Global_26960 = Function_35(StackVal);
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

int Function_35(int iParam0) //Position: 0x29EE / 10734
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_36(bool bParam0) //Position: 0x2A06 / 10758
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_37(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A1B / 10779
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
		Function_40();
	}
	if (bParam5)
	{
		Function_38(1048576);
	}
}

void Function_38(int iParam0) //Position: 0x2B2E / 11054
{
	Function_39(&Global_28842, iParam0);
	return;
}

void Function_39(var uParam0, var uParam1) //Position: 0x2B3C / 11068
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_40() //Position: 0x2B57 / 11095
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_38(16384);
	}
	return;
}

bool Function_41(int iParam0, var uParam1, bool bParam2) //Position: 0x2B73 / 11123
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_101(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_42(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_20())
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

int Function_42(var uParam0, bool bParam1) //Position: 0x2C33 / 11315
{
	int iVar0;
	
	iVar0 = Function_44(uParam0);
	if (!Function_43(iVar0))
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

bool Function_43(int iParam0) //Position: 0x2C70 / 11376
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_44(int iParam0) //Position: 0x2C87 / 11399
{
	if (!Function_45(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_45(int iParam0) //Position: 0x2CA1 / 11425
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_46(int iParam0) //Position: 0x2CB7 / 11447
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_47(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x2CCA / 11466
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2CF0 / 11504
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_49(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_49(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x2D32 / 11570
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
		iVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
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
					bVar2 = Function_51(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_50(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_51(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_50(int iParam0, int iParam1) //Position: 0x30DA / 12506
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_51(int iParam0) //Position: 0x30FB / 12539
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_52(int iParam0) //Position: 0x3111 / 12561
{
	Function_48(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_53(int iParam0) //Position: 0x315A / 12634
{
	if (!Function_55())
	{
		Function_48(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_47(&Global_17483[3975] + 120, 1, 4.5f, 64, 4294967295);
		Function_54(&Global_17483[3975] + 120, -4.5f, 2);
	}
	return;
}

void Function_54(int iParam0, float fParam1, int iParam2) //Position: 0x31DB / 12763
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

bool Function_55() //Position: 0x31F1 / 12785
{
	int iVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		iVar0 = GET_ACTOR_ENUM(Global_34573);
		if (iVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_56(int iParam0) //Position: 0x3216 / 12822
{
	Function_48(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_47(&Global_17483[4075] + 120, 1, 4.5f, 64, 4294967295);
	Function_54(&Global_17483[4075] + 120, -4.5f, 2);
	return;
}

void Function_57(int iParam0) //Position: 0x3291 / 12945
{
	Function_48(41, 1, 25, 4294967276, 50, 1, 0, 1, 4, iParam0, "$/content/Ambient/Town/event_unforgiven", 63, 2, 65.0f, 8, 100, 0);
	return;
}

void Function_58(int iParam0) //Position: 0x32E0 / 13024
{
	Function_48(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_59(&Global_17483[3375] + 120, 2, 0);
	return;
}

void Function_59(int iParam0, int iParam1, int iParam2) //Position: 0x3343 / 13123
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_60(int iParam0) //Position: 0x3357 / 13143
{
	Function_48(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_59(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_61(int iParam0) //Position: 0x33BE / 13246
{
	Function_48(27, 1, 150, 4294967271, 150, 1, 0, 0, 4, iParam0, "$/content/Ambient/MexicanRevolution/mexican_rev_rally", 63, 2, 50.0f, 2, 60, 0);
	return;
}

void Function_62(var uParam0, int iParam1, float fParam2) //Position: 0x341B / 13339
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_63(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, bool bParam13) //Position: 0x343F / 13375
{
	if (Function_20() && !bParam12)
	{
		return;
	}
	if (!Function_20() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_72(iParam2, iParam1, 4);
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
	if (Global_25974[iParam1] && Function_71(iParam1))
	{
		Function_64(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_64(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x358B / 13707
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
	if (Function_70(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_69(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_68(StackVal, StackVal, vParam2);
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
		Function_67(uVar3);
		vVar7 = { StackVal, StackVal, Function_67(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_67(StackVal);
				vVar4 = { StackVal, StackVal, Function_67(StackVal) };
				if (Function_66(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_65(iParam1), 0.0f, 2, iVar2);
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

int Function_65(bool bParam0) //Position: 0x376E / 14190
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

bool Function_66(vector3 vParam0, vector3 vParam3) //Position: 0x38A5 / 14501
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_67(int iParam0) //Position: 0x38D2 / 14546
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_68(vector3 vParam0) //Position: 0x3929 / 14633
{
	bool bVar0;
	
	bVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
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

int Function_69(int iParam0) //Position: 0x3977 / 14711
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

bool Function_70(vector3 vParam0) //Position: 0x3A2F / 14895
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_71(int iParam0) //Position: 0x3A47 / 14919
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_72(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3A6A / 14954
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_76(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_73(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_73(bParam0, bParam1, bParam2, 4294967295);
}

int Function_73(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3AC8 / 15048
{
	var uVar0;
	
	if (!Function_75(bParam2))
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
	uVar0 = Function_76(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_74(uVar0);
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

int Function_74(int iParam0) //Position: 0x3C1D / 15389
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

bool Function_75(int iParam0) //Position: 0x3C5B / 15451
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_76(int iParam0, int iParam1, bool bParam2) //Position: 0x3C70 / 15472
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_77() //Position: 0x3C90 / 15504
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_78(var uParam0, int iParam1) //Position: 0x3CBB / 15547
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_79(var uParam0, bool bParam1) //Position: 0x3CD2 / 15570
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

void Function_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x3D1A / 15642
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_85(bParam1, bParam2);
	if (!Function_84(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_83(bParam4, 0);
		}
		else
		{
			Function_82(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_83(bParam5, 0);
		}
		else
		{
			Function_82(bParam5, 1);
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
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_81(bVar3[0], "UseCase1"));
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
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_81(bVar3[1], "UseCase1"));
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

var Function_81(bool bParam0, bool bParam1) //Position: 0x40B0 / 16560
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_82(bool bParam0, bool bParam1) //Position: 0x40BD / 16573
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

void Function_83(bool bParam0, bool bParam1) //Position: 0x4111 / 16657
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

bool Function_84(int iParam0) //Position: 0x4162 / 16738
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0, bool bParam1) //Position: 0x4178 / 16760
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

var Function_86(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x42D2 / 17106
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

void Function_87(bool bParam0) //Position: 0x436E / 17262
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

void Function_88(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x43E8 / 17384
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_99(2))
	{
		return;
	}
	if (Function_101(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_89(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_78(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_104(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_89(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x449A / 17562
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_101(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_91(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_70(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(iParam0, 4);
	}
	Function_90(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_90(bool bParam0, bool bParam1) //Position: 0x4605 / 17925
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_70(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_70(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_70(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_70(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_70(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_70(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_91(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x4741 / 18241
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_32(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_92(int iParam0, var uParam1, bool bParam2) //Position: 0x485A / 18522
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

void Function_93(int iParam0, var uParam1, vector3 vParam2) //Position: 0x48B5 / 18613
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_66(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_94(int iParam0, var uParam1, vector3 vParam2) //Position: 0x491B / 18715
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_66(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_95(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4983 / 18819
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_66(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_96(int iParam0, var uParam1, vector3 vParam2) //Position: 0x49ED / 18925
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_66(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_97(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4A52 / 19026
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_66(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_98(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4ABA / 19130
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_66(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_99(int iParam0) //Position: 0x4B1D / 19229
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_100(int iParam0) //Position: 0x4B39 / 19257
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_101(&(Global_29008[iParam0]), 4);
}

bool Function_101(var uParam0, int iParam1) //Position: 0x4B55 / 19285
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_102(var uParam0, var uParam1, int iParam2) //Position: 0x4B71 / 19313
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
	if (Function_101(&(Global_29008[iParam2]), 0x40000000))
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

void Function_103(var uParam0, var uParam1, int iParam2) //Position: 0x4C52 / 19538
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
	if (!Function_101(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_104(&(Global_29008[iParam2]), 0x40000000);
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

void Function_104(var uParam0, int iParam1) //Position: 0x4D3A / 19770
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_105() //Position: 0x4D49 / 19785
{
	bool bVar0;
	
	Function_113(3, 3);
	bVar0 = bVar0;
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_whore", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/prostitute_bed", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_adjuststocking_w_whore", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/bar_drink_serve", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_link", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_dancing_link", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/chop_wood", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_bartender_bar_work", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/drink_player", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_111(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	if (!Function_106(&Local_12 + 4))
	{
		return 0;
	}
	Local_12 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (!IS_LAYOUTREF_VALID(Local_12))
	{
		Local_12 = CREATE_LAYOUT("CasaMadrugada_layout");
	}
	*(&Local_12 + 656) = { -809.4519f, 16.66464f, 3705.648f };
	*(&Local_12 + 656 + 12) = { 0.0f, -134.5835f, 0.0f };
	Local_12.f_680 = CREATE_POINT_IN_LAYOUT(Local_12, "player_save_flag_CAS", -809.4519f, 16.66464f, 3705.648f, 0.0f, -134.5835f, 0.0f);
	*(&Local_12 + 684) = { -808.0638f, 16.66464f, 3706.94f };
	*(&Local_12 + 684 + 12) = { 0.0f, 46.01444f, 0.0f };
	Local_12.f_708 = CREATE_POINT_IN_LAYOUT(Local_12, "player_purchase_flag_CAS", -808.0638f, 16.66464f, 3706.94f, 0.0f, 46.01444f, 0.0f);
	*(&Local_12 + 712) = { -815.263f, 16.665f, 3704.426f };
	*(&Local_12 + 712 + 12) = { 0.0f, 46.01444f, 0.0f };
	Local_12.f_736 = CREATE_POINT_IN_LAYOUT(Local_12, "player_purchase_flag_CAS1", -815.263f, 16.665f, 3704.426f, 0.0f, 46.01444f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link64", "mex_flirt_stand_link", -798.9713f, 13.11084f, 3704.736f, 0.0f, -347.2005f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted", "sleeping_wall_scripted", -784.4613f, 13.05098f, 3716.99f, 0.0f, 45.52002f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -808.721f, 13.05098f, 3741.778f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -806.8731f, 13.20941f, 3740.572f, 0.0f, 44.50387f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_whore", "lean_rail_whore", -814.0237f, 16.66464f, 3713.905f, 0.0f, -495.8834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand", "smoking_stand", -823.1275f, 16.66507f, 3705.004f, 0.0f, -25.20816f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link65", "mex_flirt_stand_link", -786.0313f, 13.11425f, 3707.521f, 0.0f, 89.53207f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link1", "mex_flirt_stand_link", -787.9437f, 13.16588f, 3701.774f, 0.0f, 93.36678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -796.7607f, 13.11101f, 3705.602f, 0.0f, -94.76331f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -790.7928f, 13.16464f, 3695.978f, 0.0f, 160.2729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunkdancing_woman", "stand_drunk_rowdydrink", -800.8853f, 13.16497f, 3694.83f, 0.0f, -78.11233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_whore1", "lean_rail_whore", -806.5536f, 16.66766f, 3706.323f, 0.0f, -139.3453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_whore2", "lean_rail_whore", -811.3497f, 16.6664f, 3711.183f, 0.0f, 221.6967f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee", "Pee", -824.7227f, 13.05098f, 3756.134f, 0.0f, 190.3324f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee1", "Pee", -832.6101f, 13.05098f, 3706.155f, 0.0f, 21.70144f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_740 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any", "stand_hammerground_w_any", -826.3416f, 13.05098f, 3747.089f, 0.0f, -245.8698f, 0.0f), Local_12.f_740);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke4", "sit_ground_smoke", -819.0344f, 13.05098f, 3747.392f, 0.0f, 0.0f, 0.0f), Local_12.f_740);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_fence_low2", "sit_fence_low", -823.4095f, 13.05098f, 3751.541f, 0.0f, 46.0511f, 0.0f), Local_12.f_740);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand70", "smoking_stand", -823.6781f, 13.05187f, 3746.589f, 0.0f, 60.9567f, 0.0f), Local_12.f_740);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", -825.16f, 13.05098f, 3752.141f, 0.0f, -174.4326f, 0.0f), Local_12.f_740);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke9", "sit_ground_smoke", -822.1619f, 13.09346f, 3745.919f, 0.0f, -34.38533f, 0.0f), Local_12.f_740);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_table", "stand_hammer_table", -826.077f, 13.034f, 3749.3f, 0.0f, -138.4202f, 0.0f), Local_12.f_740);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_fence_low", "sit_fence_low", -823.5158f, 13.04673f, 3722.416f, 0.0f, -135.41f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -823.429f, 16.66464f, 3703.097f, 0.0f, -167.1398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -824.0f, 13.05098f, 3742.036f, 0.0f, -194.8316f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -810.2053f, 13.04969f, 3739.601f, 0.0f, -103.5132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink5", "stand_drunk_rowdydrink", -819.2557f, 16.66465f, 3708.258f, 0.0f, -130.016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_throwbottle2", "stand_drunk_throwbottle", -821.2933f, 13.05883f, 3742.707f, 0.0f, -214.711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand2", "smoking_stand", -821.4617f, 13.11086f, 3721.16f, 0.0f, 13.85231f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand3", "smoking_stand", -814.311f, 13.53179f, 3779.522f, 0.0f, 10.39614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -814.9534f, 13.53455f, 3779.946f, 0.0f, 43.79168f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -811.1107f, 13.55089f, 3785.776f, 0.0f, 135.4093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", -810.4875f, 13.53158f, 3786.518f, 0.0f, 90.98701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand4", "smoking_stand", -800.8079f, 13.16227f, 3693.637f, 0.0f, -114.9996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -820.0147f, 13.11315f, 3715.255f, 0.0f, 134.3029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke3", "Rand_Idle_Sit_Ground", -842.3299f, 13.05098f, 3729.6f, 0.0f, -23.15889f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand5", "smoking_stand", -843.065f, 13.05098f, 3726.925f, 0.0f, 237.8243f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand6", "smoking_stand", -833.7081f, 13.05098f, 3736.207f, 0.0f, -41.27139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Prostitute_bed1", "Prostitute_bed", -815.722f, 13.14799f, 3703.024f, 0.0f, 46.01797f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Prostitute_bed2", "Prostitute_bed", -806.8588f, 13.16465f, 3694.253f, 0.0f, 43.6377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Prostitute_bed3", "Prostitute_bed", -805.5912f, 16.66452f, 3698.938f, 0.0f, 133.1909f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Prostitute_bed5", "Prostitute_bed", -822.9219f, 13.13343f, 3708.329f, 0.0f, -44.97831f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Prostitute_bed6", "Prostitute_bed", -809.6495f, 16.66465f, 3691.811f, 0.0f, 43.45522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_horseshoe", "stand_horseshoe", -830.7405f, 13.05098f, 3741.9f, 0.0f, 134.5845f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link17", "mex_flirt_stand_link", -822.816f, 16.66464f, 3708.664f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link37", "mex_flirt_stand_link", -821.444f, 16.66465f, 3704.611f, 0.0f, -76.50036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link38", "mex_flirt_stand_link", -797.0615f, 13.03292f, 3727.115f, 0.0f, -11.92086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link4", "mex_flirt_stand_link", -791.2941f, 13.05098f, 3722.177f, 0.0f, 9.820838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand8", "smoking_stand", -816.5524f, 13.11046f, 3713.981f, 0.0f, -99.30985f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l", "mex_sleepBed_l", -807.4429f, 16.66452f, 3700.414f, 0.0f, -42.53862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r", "mex_sleepBed_r", -784.2705f, 13.16464f, 3692.981f, 0.0f, -44.23887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l1", "mex_sleepBed_l", -787.2595f, 13.11535f, 3694.804f, 0.0f, 45.74263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l2", "mex_sleepBed_l", -788.7697f, 13.13287f, 3693.003f, 0.0f, 44.07854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r1", "mex_sleepBed_r", -791.2982f, 13.12779f, 3690.627f, 0.0f, -138.0761f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l3", "mex_sleepBed_l", -792.016f, 13.1087f, 3689.794f, 0.0f, 45.98722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l4", "mex_sleepBed_l", -794.0886f, 13.11087f, 3687.985f, 0.0f, 39.92428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l5", "mex_sleepBed_l", -791.7665f, 13.12753f, 3685.529f, 0.0f, -47.74477f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_kneelvomit_n_any", "stand_kneelvomit_n_any", -837.8294f, 13.05098f, 3730.975f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_kneelvomit_n_any1", "stand_kneelvomit_n_any", -781.7925f, 13.05098f, 3704.0f, 0.0f, -27.01057f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_kneelvomit_n_any2", "stand_kneelvomit_n_any", -778.5369f, 13.05474f, 3705.266f, 0.0f, -172.4109f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink9", "stand_drunk_rowdydrink", -783.4716f, 13.10076f, 3703.881f, 0.0f, 96.98547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink10", "stand_drunk_rowdydrink", -780.0f, 13.05098f, 3702.158f, 0.0f, -151.4423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_throwbottle4", "stand_drunk_throwbottle", -777.0222f, 13.03702f, 3700.0f, 0.0f, 160.8476f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link5", "mex_flirt_stand_link", -819.1003f, 16.66465f, 3705.893f, 0.0f, 177.3645f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link7", "mex_flirt_stand_link", -804.2177f, 16.66464f, 3700.746f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link8", "mex_flirt_stand_link", -805.5372f, 13.15068f, 3695.135f, 0.0f, 137.3307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link9", "mex_flirt_stand_link", -814.892f, 13.16465f, 3700.126f, 0.0f, -110.7206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_744 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any", "stand_guntricks_e_any", -799.6317f, 13.10965f, 3701.837f, 0.0f, 76.55304f, 0.0f), Local_12.f_744);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any2", "stand_guntricks_e_any", -795.1436f, 13.11595f, 3708.656f, 0.0f, 160.5508f, 0.0f), Local_12.f_744);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink11", "stand_drunk_rowdydrink", -828.0f, 13.04855f, 3717.348f, 0.0f, -28.50132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", -813.0558f, 16.66441f, 3700.454f, 0.0f, -132.811f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_whore4", "lean_rail_whore", -814.5765f, 16.66464f, 3714.418f, 0.0f, -496.3514f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_kneelvomit_n_any3", "stand_kneelvomit_n_any", -811.5275f, 13.12227f, 3730.629f, 0.0f, -155.2017f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link26", "mex_flirt_stand_link", -838.4948f, 13.05098f, 3725.93f, 0.0f, -87.14256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke7", "Rand_Idle_Sit_Ground", -795.7993f, 13.09998f, 3704.404f, 0.0f, 134.5416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link31", "mex_flirt_stand_link", -793.5636f, 13.11487f, 3709.492f, 0.0f, 180.1981f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l8", "mex_sleepBed_l", -815.2219f, 16.64507f, 3699.205f, 0.0f, -224.1283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand11", "smoking_stand", -820.755f, 13.05098f, 3750.443f, 0.0f, -18.271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link32", "mex_flirt_stand_link", -810.8887f, 13.10962f, 3711.107f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link10", "mex_flirt_stand_link", -807.5838f, 13.11155f, 3704.585f, 0.0f, -145.0233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link33", "mex_flirt_stand_link", -805.8397f, 16.66477f, 3705.466f, 0.0f, -39.54983f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_l10", "mex_sleepBed_l", -813.5138f, 13.12426f, 3699.623f, 0.0f, -46.43394f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand12", "smoking_stand", -817.1055f, 13.0988f, 3735.664f, 0.0f, -1.415389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke8", "Rand_Idle_Sit_Ground", -818.4448f, 13.13828f, 3736.836f, 0.0f, 58.31172f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted2", "sleeping_wall_scripted", -815.3773f, 13.11621f, 3737.073f, 0.0f, -85.25128f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link34", "mex_flirt_stand_link", -812.9553f, 13.05252f, 3737.205f, 0.0f, -45.49263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link49", "mex_flirt_stand_link", -817.2917f, 13.11268f, 3739.624f, 0.0f, -261.183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", -819.0333f, 13.09615f, 3735.386f, 0.0f, -125.4483f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any3", "stand_guntricks_e_any", -818.8584f, 13.08984f, 3737.59f, 0.0f, 9.913409f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink12", "stand_drunk_rowdydrink", -822.4501f, 13.05098f, 3736.0f, 0.0f, -99.8985f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink13", "stand_drunk_rowdydrink", -802.222f, 13.1113f, 3702.417f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_horseshoe1", "stand_horseshoe", -785.7069f, 13.05098f, 3749.038f, 0.0f, 41.91398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -812.8537f, 13.56627f, 3786.74f, 0.0f, -31.24563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -806.6642f, 13.60363f, 3779.412f, 0.0f, -83.94334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", -798.7903f, 13.54906f, 3781.134f, 0.0f, -83.40726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", -821.4899f, 13.52526f, 3783.064f, 0.0f, -84.72837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall7", "Rand_Idle_NearWall", -822.8912f, 13.56098f, 3784.609f, 0.0f, -46.63389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall8", "Rand_Idle_NearWall", -810.0308f, 13.60363f, 3784.418f, 0.0f, -45.2575f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground6", "Rand_Idle_Sit_Ground", -792.5906f, 13.56102f, 3774.996f, 0.0f, 77.86096f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand14", "smoking_stand", -796.5763f, 13.53179f, 3774.891f, 0.0f, -24.17122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r2", "mex_sleepBed_r", -809.7695f, 16.66465f, 3691.628f, 0.0f, 45.1656f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall9", "Rand_Idle_NearWall", -797.5237f, 13.55041f, 3776.324f, 0.0f, 225.3208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_748 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand50", "rand_idle_stand", -824.691f, 13.11084f, 3718.615f, 0.0f, -9.158113f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand51", "rand_idle_stand", -792.7556f, 13.05098f, 3730.498f, 0.0f, -104.4572f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_nospawn", "smoking_stand_nospawn", -791.6711f, 13.05098f, 3729.723f, 0.0f, -146.2553f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -791.4022f, 13.10535f, 3731.027f, 0.0f, -86.81573f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -789.3539f, 13.11265f, 3706.811f, 0.0f, -199.0093f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand55", "rand_idle_stand", -823.6431f, 16.66467f, 3709.448f, 0.0f, 1.503125f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand52", "rand_idle_stand", -822.6042f, 13.11084f, 3716.352f, 0.0f, 176.5468f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand53", "rand_idle_stand", -821.6242f, 13.11084f, 3716.559f, 0.0f, 220.8584f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", -790.3304f, 13.11265f, 3708.368f, 0.0f, -199.0093f, 0.0f), Local_12.f_748);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand54", "rand_idle_stand", -828.046f, 16.66467f, 3708.893f, 0.0f, -75.33441f, 0.0f), Local_12.f_748);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_adjuststocking_w_whore4", "stand_adjuststocking_w_whore", -807.4703f, 13.16322f, 3694.621f, 0.0f, 225.6231f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand16", "smoking_stand", -800.6797f, 13.11162f, 3702.854f, 0.0f, 33.18119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand17", "smoking_stand", -816.9847f, 13.15602f, 3705.418f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink14", "stand_drunk_rowdydrink", -815.3252f, 13.15263f, 3705.392f, 0.0f, 20.42323f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink15", "stand_drunk_rowdydrink", -810.8188f, 13.16702f, 3699.433f, 0.0f, 172.9763f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink16", "stand_drunk_rowdydrink", -807.5151f, 13.15206f, 3696.357f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink17", "stand_drunk_rowdydrink", -804.8492f, 16.67485f, 3697.985f, 0.0f, 150.6357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand18", "smoking_stand", -806.4613f, 16.66452f, 3701.834f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand19", "smoking_stand", -812.4797f, 16.66452f, 3692.51f, 0.0f, -93.80099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink18", "stand_drunk_rowdydrink", -813.8199f, 16.66175f, 3694.803f, 0.0f, -49.55317f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink19", "stand_drunk_rowdydrink", -818.1127f, 16.65711f, 3702.102f, 0.0f, -18.39827f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand20", "smoking_stand", -819.2537f, 16.66452f, 3699.858f, 0.0f, -118.5145f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link58", "mex_flirt_stand_link", -817.9089f, 16.6641f, 3713.474f, 0.0f, -145.6384f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link59", "mex_flirt_stand_link", -814.5538f, 16.66454f, 3711.36f, 0.0f, 227.6614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link60", "mex_flirt_stand_link", -816.5477f, 16.66455f, 3709.07f, 0.0f, 64.13387f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link35", "mex_flirt_stand_link", -820.2027f, 16.66891f, 3709.885f, 0.0f, -101.4191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_adjuststocking_w_whore", "stand_adjuststocking_w_whore", -815.7085f, 16.66464f, 3698.896f, 0.0f, 133.841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link36", "mex_flirt_stand_link", -817.7526f, 16.67883f, 3697.71f, 0.0f, -84.47811f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link61", "mex_flirt_stand_link", -817.129f, 16.66452f, 3701.307f, 0.0f, -322.234f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link19", "mex_flirt_stand_link", -808.2471f, 16.66452f, 3692.147f, 0.0f, -205.9111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link62", "mex_flirt_stand_link", -811.452f, 16.66947f, 3693.501f, 0.0f, -316.7266f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link18", "mex_flirt_stand_link", -806.7678f, 16.6644f, 3696.066f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link11", "mex_flirt_stand_link", -814.0446f, 16.6645f, 3703.412f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_752), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground7", "Rand_Idle_Sit_Ground", -814.3098f, 16.66445f, 3701.388f, 0.0f, 217.524f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link63", "mex_flirt_stand_link", -803.5862f, 16.66452f, 3697.29f, 0.0f, 42.7423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_adjuststocking_w_whore8", "stand_adjuststocking_w_whore", -807.1155f, 16.66792f, 3700.721f, 0.0f, 136.7812f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_drink", "lean_rail_drink", -812.1641f, 16.66525f, 3712.19f, 0.0f, -137.1838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_drink1", "lean_rail_drink", -802.1868f, 16.66863f, 3702.117f, 0.0f, -133.217f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link20", "mex_flirt_stand_link", -807.4917f, 13.16331f, 3698.97f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link39", "mex_flirt_stand_link", -804.5997f, 13.1246f, 3697.033f, 0.0f, -185.0295f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link21", "mex_flirt_stand_link", -807.6855f, 13.20722f, 3701.54f, 0.0f, 84.90507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link40", "mex_flirt_stand_link", -809.4669f, 13.16465f, 3700.721f, 0.0f, 197.879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link41", "mex_flirt_stand_link", -810.2599f, 13.12648f, 3703.267f, 0.0f, -140.1386f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link22", "mex_flirt_stand_link", -818.1828f, 13.16214f, 3703.815f, 0.0f, -101.7282f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_adjuststocking_w_whore10", "stand_adjuststocking_w_whore", -816.0388f, 13.16465f, 3702.927f, 0.0f, 224.1174f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_adjuststocking_w_whore11", "stand_adjuststocking_w_whore", -822.4019f, 13.16465f, 3708.682f, 0.0f, -224.2745f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link23", "mex_flirt_stand_link", -820.5656f, 13.17282f, 3712.127f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link42", "mex_flirt_stand_link", -820.0342f, 13.13795f, 3710.692f, 0.0f, -100.5733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", -817.3033f, 13.09408f, 3710.529f, 0.0f, 105.1442f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link12", "mex_flirt_stand_link", -818.5184f, 13.13967f, 3709.336f, 0.0f, 95.6059f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link43", "mex_flirt_stand_link", -833.6385f, 13.11084f, 3715.139f, 0.0f, 140.9501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand24", "rand_idle_stand", -792.2183f, 13.05033f, 3714.992f, 0.0f, 137.4352f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand22", "smoking_stand", -790.8454f, 13.09902f, 3713.307f, 0.0f, -140.4913f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_drink2", "lean_rail_drink", -804.9147f, 16.6658f, 3691.386f, 0.0f, -45.34135f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_whore5", "lean_rail_whore", -808.231f, 16.6689f, 3688.113f, 0.0f, 43.51617f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand20", "rand_idle_stand", -806.6476f, 16.66514f, 3688.365f, 0.0f, -70.00545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted4", "sleeping_wall_scripted", -808.1292f, 16.66519f, 3689.384f, 0.0f, -47.23259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", -806.6957f, 16.66515f, 3691.339f, 0.0f, -45.20524f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand22", "rand_idle_stand", -815.9912f, 13.11098f, 3735.653f, 0.0f, -41.92613f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any4", "stand_pocketwatch_e_any", -803.9536f, 13.63123f, 3787.22f, 0.0f, -31.15587f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any5", "stand_pocketwatch_e_any", -803.771f, 13.59627f, 3771.971f, 0.0f, 53.80722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted5", "sleeping_wall_scripted", -793.3409f, 13.53111f, 3773.42f, 0.0f, 136.3716f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted6", "sleeping_wall_scripted", -814.2081f, 13.58187f, 3783.231f, 0.0f, 136.2906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any5", "stand_guntricks_e_any", -825.7863f, 16.66424f, 3705.866f, 0.0f, -126.1402f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand25", "rand_idle_stand", -820.0043f, 13.05486f, 3745.558f, 0.0f, -11.43797f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand26", "rand_idle_stand", -812.3839f, 13.11829f, 3708.808f, 0.0f, -129.6718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yawning_n_any", "stand_yawning_n_any", -783.0179f, 13.16492f, 3694.403f, 0.0f, -148.7298f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yawning_n_any1", "stand_yawning_n_any", -785.5421f, 13.1793f, 3691.75f, 0.0f, 141.8488f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee2", "Pee", -784.8695f, 13.00898f, 3701.333f, 0.0f, 65.35993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall10", "Rand_Idle_NearWall", -779.508f, 13.05098f, 3696.524f, 0.0f, 134.915f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_tend2", "horse_tend", -836.924f, 13.05098f, 3736.569f, 0.0f, -44.03599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_756), 1);
	Local_12.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_tend3", "horse_tend", -834.2196f, 13.05098f, 3739.688f, 0.0f, -45.10152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_760), 1);
	Local_12.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_12, "horse_tend4", "horse_tend", -789.7804f, 13.05098f, 3752.149f, 0.0f, -132.2463f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_764), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r3", "mex_sleepBed_r", -821.2569f, 13.08385f, 3706.667f, 0.0f, 135.7847f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve", "bar_drink_serve", -796.3875f, 13.16669f, 3695.576f, 0.0f, -43.08977f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve1", "Bar_lean_stand", -795.9691f, 13.16576f, 3695.985f, 0.0f, -43.08977f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "bar_drink_serve3", "bar_drink_serve", -797.2322f, 13.16574f, 3694.668f, 0.0f, -46.21058f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table", "lean_table", -792.0028f, 13.16464f, 3702.806f, 0.0f, -226.5094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_L", "look_out_window_L", -794.5992f, 13.16735f, 3703.027f, 0.0f, 133.485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table1", "lean_table", -827.7014f, 13.034f, 3743.492f, 0.0f, 134.9267f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee3", "Pee", -786.8605f, 13.36909f, 3768.203f, 0.0f, -137.356f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_link", -817.2579f, 16.69228f, 3700.541f, 0.0f, -46.51249f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_12, "player_sleep_CAS", "player_sleep_bed_L", -809.668f, 16.66483f, 3705.151f, 0.0f, -45.16735f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link2", "mex_flirt_sit_stool_link", -809.91f, 16.67154f, 3691.976f, 0.0f, 46.73872f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link44", "stand_drunk_dancing_link", -800.3425f, 13.16518f, 3695.726f, 0.0f, -58.22062f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link66", "mex_flirt_stand_link", -813.2617f, 16.66464f, 3695.909f, 0.0f, -22.46006f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link3", "mex_flirt_sit_stool_link", -812.0645f, 13.13336f, 3697.763f, 0.0f, 130.5172f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Prostitute_bed7", "Prostitute_bed", -814.1857f, 13.18901f, 3699.47f, 0.0f, -47.2863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_stirringpot_w_any", "stand_stirringpot_w_any", -798.0518f, 13.17015f, 3690.425f, 0.0f, 58.63639f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_chopveggies_w_any", "stand_chopveggies_w_any", -796.2065f, 13.17783f, 3690.168f, 0.0f, -42.25528f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link4", "mex_flirt_sit_stool_link", -816.0577f, 13.11105f, 3703.469f, 0.0f, 46.90324f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link45", "mex_flirt_stand_link", -816.3439f, 13.10492f, 3707.073f, 0.0f, 48.70354f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link24", "mex_flirt_stand_link", -815.7791f, 13.14022f, 3707.844f, 0.0f, -48.35913f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link5", "mex_flirt_sit_stool_link", -820.7476f, 13.1245f, 3706.879f, 0.0f, 136.731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link25", "mex_flirt_stand_link", -781.0241f, 13.05098f, 3696.077f, 0.0f, 177.664f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_sit_stool_link6", "mex_flirt_sit_stool_link", -807.801f, 16.66452f, 3700.375f, 0.0f, -44.97259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link27", "mex_flirt_stand_link", -805.4154f, 16.66452f, 3697.317f, 0.0f, -115.7508f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r5", "mex_sleepBed_r", -815.8522f, 13.0617f, 3702.727f, 0.0f, 49.66564f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nlean_rail", "nlean_rail", -818.0214f, 16.6704f, 3715.282f, 0.0f, 137.9091f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_772 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs", "look_distance_binocs", -784.0673f, 13.02603f, 3726.56f, 0.0f, -113.3598f, 0.0f), Local_12.f_772);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand63", "rand_idle_stand", -780.2827f, 12.94526f, 3736.797f, 0.0f, 0.0f, 0.0f), Local_12.f_772);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any6", "stand_pocketwatch_e_any", -778.8552f, 12.90862f, 3735.636f, 0.0f, 43.13345f, 0.0f), Local_12.f_772);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand80", "smoking_stand", -783.6508f, 13.00989f, 3741.02f, 0.0f, 0.0f, 0.0f), Local_12.f_772);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand62", "rand_idle_stand", -791.2656f, 13.01066f, 3727.799f, 0.0f, -134.8514f, 0.0f), Local_12.f_772);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand61", "rand_idle_stand", -784.9583f, 13.16806f, 3697.156f, 0.0f, -134.5118f, 0.0f), Local_12.f_772);
	Local_12.f_776 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_guntricks_e_any45", "stand_guntricks_e_any", -745.6708f, 13.20158f, 3734.108f, 0.0f, 149.8586f, 0.0f), Local_12.f_776);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", -753.1614f, 13.09131f, 3741.224f, 0.0f, -119.0337f, 0.0f), Local_12.f_776);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand10", "rand_idle_stand", -751.9778f, 13.16721f, 3743.596f, 0.0f, 0.0f, 0.0f), Local_12.f_776);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_sleepBed_r6", "mex_sleepBed_r", -806.9908f, 13.04911f, 3693.934f, 0.0f, 46.58624f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nchop_wood", "nchop_wood", -768.35f, 14.0549f, 3749.934f, 0.0f, 118.2569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_780), 1);
	Local_12.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand25", "smoking_stand", -768.2448f, 14.0549f, 3751f, 0.0f, 186.8718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_784), 1);
	Local_12.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_out_window_R", "look_out_window_R", -770.0327f, 14.0549f, 3751.258f, 0.0f, 126.4042f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_788), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link13", "mex_flirt_stand_link", -818.208f, 13.16452f, 3715.14f, 0.0f, -170.1304f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link46", "mex_flirt_stand_link", -819.2087f, 13.16452f, 3715.483f, 0.0f, 187.6881f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link47", "mex_flirt_stand_link", -792.0587f, 13.10895f, 3709.46f, 0.0f, -189.92f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_792 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_bartender_bar_work", "stand_bartender_bar_work", -794.5876f, 13.16519f, 3694.352f, 0.0f, -225.4789f, 0.0f), Local_12.f_792);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "nuse_shelf", "nuse_shelf", -792.3839f, 13.16651f, 3694.633f, 0.0f, -46.33226f, 0.0f), Local_12.f_792);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf1", "nuse_shelf", -795.3474f, 13.17218f, 3691.662f, 0.0f, -46.33226f, 0.0f), Local_12.f_792);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "use_shelf2", "nuse_shelf", -793.8457f, 13.15827f, 3693.236f, 0.0f, -46.33226f, 0.0f), Local_12.f_792);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand2", "leaning_stand", -792.9347f, 13.16574f, 3693.883f, 0.0f, -44.08652f, 0.0f), Local_12.f_792);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand1", "leaning_stand", -794.4186f, 13.16574f, 3692.432f, 0.0f, -44.08652f, 0.0f), Local_12.f_792);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand3", "leaning_stand", -794.8012f, 13.16574f, 3697.136f, 0.0f, -31.92894f, 0.0f), Local_12.f_792);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand26", "smoking_stand", -820.2253f, 13.11086f, 3721.484f, 0.0f, -104.3165f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall_nospawn", -810.2733f, 16.66441f, 3699.63f, 0.0f, -315.0395f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall_nospawn", -812.8969f, 16.66441f, 3702.221f, 0.0f, -315.0395f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand27", "smoking_stand", -816.0274f, 13.0988f, 3738.696f, 0.0f, -140.1924f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand28", "smoking_stand", -815.4815f, 13.0988f, 3737.732f, 0.0f, -97.7478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink21", "stand_drunk_rowdydrink", -801.6171f, 13.1113f, 3703.073f, 0.0f, -189.3123f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink22", "stand_drunk_rowdydrink", -799.4937f, 13.1113f, 3702.687f, 0.0f, -189.3123f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_12, "knl_watertrough", "knl_watertrough", -789.2448f, 13.05097f, 3754.817f, 0.0f, 42.584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_796), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any7", "stand_pocketwatch_e_any", -801.5388f, 13.54906f, 3784.01f, 0.0f, -169.6598f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand29", "smoking_stand", -795.5189f, 13.53179f, 3774.072f, 0.0f, 94.65035f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand30", "smoking_stand", -796.9933f, 13.59406f, 3773.508f, 0.0f, -117.6008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand31", "smoking_stand", -802.7503f, 13.59406f, 3769.549f, 0.0f, -83.13165f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand32", "smoking_stand", -800.014f, 13.11162f, 3700.825f, 0.0f, 157.3736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_12, "drink_player", "drink_player", -795.515f, 13.16775f, 3696.417f, 0.0f, -44.32381f, 0.0f);
	Local_12.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Locked_Footlocker", "Locked_Footlocker", -813.7915f, 16.66464f, 3708.446f, 0.0f, -45.25312f, 0.0f);
	DECOR_SET_BOOL(Local_12.f_804, "PlayerHouseChest", true);
	DECOR_SET_BOOL(Local_12.f_804, "scrap", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink23", "stand_drunk_rowdydrink", -791.8537f, 13.16515f, 3700.779f, 0.0f, 10.78339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link28", "mex_flirt_stand_link", -807.9788f, 13.10962f, 3706.566f, 0.0f, -89.52911f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link29", "mex_flirt_stand_link", -798.2959f, 13.10962f, 3703.502f, 0.0f, -156.804f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link30", "mex_flirt_stand_link", -794.5205f, 13.10962f, 3707.089f, 0.0f, -257.0035f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink24", "stand_drunk_rowdydrink", -815.2469f, 16.66454f, 3712.958f, 0.0f, 70.30784f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_808), 1);
	Local_12.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink25", "stand_drunk_rowdydrink", -819.4444f, 16.66454f, 3712.227f, 0.0f, -16.40136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_812), 1);
	Local_12.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink26", "stand_drunk_rowdydrink", -818.886f, 16.66454f, 3713.132f, 0.0f, -71.83122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_816), 1);
	Local_12.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink27", "stand_drunk_rowdydrink", -793.2356f, 13.11487f, 3708.18f, 0.0f, 122.3791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_820), 1);
	Local_12.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink28", "stand_drunk_rowdydrink", -796.6321f, 13.11487f, 3707.277f, 0.0f, 172.5255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_824), 1);
	Local_12.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink29", "stand_drunk_rowdydrink", -789.4683f, 13.11084f, 3712.045f, 0.0f, 88.37279f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_828), 1);
	Local_12.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink30", "stand_drunk_rowdydrink", -789.4284f, 13.11084f, 3710.641f, 0.0f, 132.4895f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_832), 1);
	Local_12.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink31", "stand_drunk_rowdydrink", -804.5413f, 13.1009f, 3704.19f, 0.0f, 172.5255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_836), 1);
	Local_12.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel", "repair_kneel", -814.3336f, 13.05097f, 3728.416f, 0.0f, 44.59594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_840), 1);
	Local_12.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel1", "repair_kneel", -822.6083f, 13.05097f, 3724.36f, 0.0f, 44.59594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_844), 1);
	Local_12.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table2", "lean_table", -809.879f, 13.05098f, 3727.07f, 0.0f, -202.1715f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_848), 1);
	Local_12.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_12, "knl_watertrough1", "knl_watertrough", -813.5269f, 13.05098f, 3715.738f, 0.0f, 223.291f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_852), 1);
	Local_12.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_12, "knl_watertrough2", "knl_watertrough", -807.5786f, 13.05098f, 3710.463f, 0.0f, 223.291f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_856), 1);
	Local_12.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall", "stand_hammer_wall", -805.3109f, 13.05098f, 3730.489f, 0.0f, -178.7119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_860), 1);
	Local_12.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel2", "repair_kneel", -807.0389f, 13.05097f, 3737.643f, 0.0f, -134.6423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_864), 1);
	Local_12.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_barrel", "sit_barrel", -806.5542f, 13.05098f, 3728.01f, 0.0f, -178.9501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_868), 1);
	Local_12.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table3", "lean_table", -806.0385f, 13.05098f, 3713.954f, 0.0f, -285.6767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_872), 1);
	Local_12.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted7", "sleeping_wall_scripted", -802.4534f, 13.05098f, 3722.581f, 0.0f, -18.76607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_876), 1);
	Local_12.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted8", "sleeping_wall_scripted", -800.6075f, 13.05098f, 3724.483f, 0.0f, -41.03999f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_880), 1);
	Local_12.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_wall_scripted9", "sleeping_wall_scripted", -801.3068f, 13.05098f, 3727.918f, 0.0f, -50.06787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_884), 1);
	Local_12.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_barrel1", "sit_barrel", -788.2455f, 13.03054f, 3727.917f, 0.0f, -349.7947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_888), 1);
	Local_12.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand", "rand_idle_stand", -786.9204f, 13.03939f, 3727.962f, 0.0f, -189.1086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_892), 1);
	Local_12.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand23", "rand_idle_stand", -787.6658f, 13.05098f, 3727.19f, 0.0f, -168.0072f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_896), 1);
	Local_12.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall1", "stand_hammer_wall", -791.3873f, 13.02221f, 3733.766f, 0.0f, -294.4543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_900), 1);
	Local_12.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel3", "repair_kneel", -793.0188f, 12.93192f, 3749.936f, 0.0f, -133.6652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_904), 1);
	Local_12.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel4", "repair_kneel", -787.6237f, 13.05098f, 3758.369f, 0.0f, -116.084f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_908), 1);
	Local_12.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall2", "stand_hammer_wall", -784.1396f, 13.09419f, 3763.084f, 0.0f, -497.4629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_912), 1);
	Local_12.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall3", "stand_hammer_wall", -785.1576f, 13.06069f, 3760.949f, 0.0f, -390.3687f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_916), 1);
	Local_12.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_barrel2", "sit_barrel", -782.6583f, 13.0878f, 3760.89f, 0.0f, -163.1886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_920), 1);
	Local_12.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall4", "stand_hammer_wall", -787.5849f, 13.05098f, 3752.306f, 0.0f, -317.9287f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_924), 1);
	Local_12.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel5", "repair_kneel", -801.5622f, 13.05098f, 3739.104f, 0.0f, 45.65297f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_928), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link48", "mex_flirt_stand_link", -792.2535f, 13.16017f, 3696.859f, 0.0f, -181.3318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link50", "mex_flirt_stand_link", -792.1039f, 13.16017f, 3699.494f, 0.0f, 188.3305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link52", "mex_flirt_stand_link", -795.412f, 13.16017f, 3702.495f, 0.0f, -417.2525f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link53", "mex_flirt_stand_link", -798.7386f, 13.16017f, 3699.046f, 0.0f, -760.618f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link55", "mex_flirt_stand_link", -798.8843f, 13.16017f, 3691.635f, 0.0f, -886.0712f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link15", "mex_flirt_stand_link", -830.5178f, 13.11366f, 3710.126f, 0.0f, -158.5605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "mex_flirt_stand_link56", "mex_flirt_stand_link", -832.5757f, 13.11084f, 3712.945f, 0.0f, 193.3396f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_12, "nbar_stand", "Bar_lean_stand", -796.8418f, 13.16574f, 3695.086f, 0.0f, -46.08844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_932), 0);
	Local_12.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_12, "ooo", "npreaching", -788.6112f, 13.03229f, 3730.068f, 0.0f, 50.8871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_936), 0);
	Local_12.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_12, "ppp", "npreaching", -791.2759f, 13.11084f, 3711.519f, 0.0f, -21.85451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_940), 0);
	Local_12.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_12, "qqq", "npreaching", -825.5682f, 16.66465f, 3707.854f, 0.0f, -84.08395f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_944), 0);
	return 1;
}

bool Function_106(int iParam0) //Position: 0xB94E / 47438
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_110();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_109(iParam0[iVar03], 8);
		}
		else if (Function_108())
		{
			iVar1 = 1;
			Function_109(iParam0[iVar03], 8);
		}
		Function_109(iParam0[iVar03], 16);
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
				Function_109(iParam0[iVar03], 1);
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
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_109(iParam0[iVar03], 2);
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
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_109(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_109(iParam0[iVar03], 2);
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
	Function_107();
	return 1;
}

void Function_107() //Position: 0xBCC9 / 48329
{
	if (!Function_99(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_108() //Position: 0xBD09 / 48393
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

void Function_109(var uParam0, int iParam1) //Position: 0xBD34 / 48436
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_110() //Position: 0xBD45 / 48453
{
	if (!Function_99(128))
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

var Function_111(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBD87 / 48519
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_112(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_109(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_112(var uParam0, int iParam1, int iParam2) //Position: 0xBDBF / 48575
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_109(uParam0[iVar03], 4);
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

void Function_113(int iParam0, int iParam1) //Position: 0xBE83 / 48771
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

bool Function_114() //Position: 0xBECC / 48844
{
	var uVar0;
	
	Function_113(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("CasaMadrugada_layout");
	}
	*(&Local_4 + 4) = { -805.9355f, 13.1009f, 3708.502f };
	*(&Local_4 + 4 + 12) = { 0.0f, -135.8845f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -805.9355f, 13.1009f, 3708.502f, 0.0f, -135.8845f, 0.0f);
	return 1;
}

void Function_115(bool bParam0, var uParam1) //Position: 0xBF70 / 49008
{
	if (!Function_99(128))
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

