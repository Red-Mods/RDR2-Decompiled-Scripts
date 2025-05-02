//Decompiled with MagicRDR v1.0
//Function Count : 247
//Statics Count : 554
//Natives Count : 521
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
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
	int iLocal_14 = 0;
	var uLocal_15 = 12;
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
	var uLocal_113 = 20;
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
	int iLocal_201 = 0;
	int iLocal_202 = 0;
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
	var uLocal_218 = 6;
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
	int iLocal_247 = 0;
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
	var uLocal_267 = 11;
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
	var uLocal_303 = 11;
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
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
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
	bool bLocal_348 = false;
	var uLocal_349 = 0;
	struct<2> Local_350 = { 0, 0 } ;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	bool bLocal_354 = false;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 18;
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
	var uLocal_433[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	int iLocal_449[7] = { 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_473[7] = { 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_491 = false;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	bool bLocal_497 = false;
	int iLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	int iLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	int iLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	bool bLocal_530 = false;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	float fLocal_539 = 0.0f;
	float fLocal_540 = 0.0f;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	int iLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_14 = 0;
	iLocal_201 = 0;
	iLocal_202 = 0;
	iLocal_247 = 0;
	iLocal_334 = 16;
	iLocal_335 = 0;
	Local_350 = Vector(-2784,264f, 43,169f, 2396,683f);
	bLocal_354 = false;
	bLocal_497 = false;
	iLocal_520 = 0;
	iLocal_521 = 0;
	bLocal_530 = false;
	iLocal_531 = 0;
	iLocal_532 = 0;
	iLocal_533 = 0;
	iLocal_536 = 0;
	iLocal_537 = 0;
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			iVar0 = 0;
			iLocal_336 = 1000;
			Global_116927[206].f_44 = 0.0f;
			Function_246(&uLocal_359, 339, 3, 0);
			Function_246(&uLocal_359, 1212, 3, 0);
			Function_246(&uLocal_359, 111, 3, 0);
			Function_246(&uLocal_359, 55, 3, 0);
			Function_246(&uLocal_359, 53, 3, 0);
			Function_246(&uLocal_359, 89, 3, 0);
			Function_246(&uLocal_359, 153, 3, 0);
			Function_246(&uLocal_359, 79, 3, 0);
			Function_246(&uLocal_359, 1204, 3, 0);
			Function_246(&uLocal_359, 1206, 3, 0);
			Function_246(&uLocal_359, 1207, 3, 0);
			Function_244(&uLocal_359, "$/content/scripting/gringo/simpleGringo/stand_wring_hands", 1, 0);
			Function_244(&uLocal_359, "/content/DLC/ZombiePack/Gringos/z_dlc_z_beat_door", 1, 0);
			Function_244(&uLocal_359, "$/content/scripting/gringo/simpleGringo/stand_knock_on_door", 1, 0);
			Function_244(&uLocal_359, "fema_emo_thanks", 5, 0);
			Function_244(&uLocal_359, "ptl_base", 5, 0);
			Function_244(&uLocal_359, "custom/fema_emo_thanks", 8, 0);
			Function_244(&uLocal_359, "$/fragments/p_pos_missing01x", 0, 0);
			Function_243();
			Function_242(&iLocal_498);
			while (!IS_EXITFLAG_SET())
			{
				if (iVar0 >= 0)
				{
					if (IS_ACTOR_VALID(&uLocal_493))
					{
						if (IS_ACTOR_DEAD(&uLocal_493))
						{
							LOG_ERROR("Companion is now dead! Failing!");
							iVar0 = 8;
						}
					}
					else
					{
						LOG_ERROR("Companion is now invalid! Failing!");
						iVar0 = 8;
					}
				}
				switch (iVar0)
				{
					case 0x00000000:
						if (Function_237(&uLocal_359))
						{
							if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
							{
								if (IS_LAYOUTREF_VALID(&uLocal_355))
								{
									uLocal_493 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_355, "nMillicent", 339, *(&Global_99725[2043] + 184), Vector(0.0f, Global_99725[2043].f_208, 0.0f));
									TASK_PRIORITY_SET(&uLocal_493, true);
									uLocal_465 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_355, "StayOutVol", 2, *(&Global_99725[ScriptParam_043] + 184), Vector(0.0f, 0.0f, 0.0f), Vector(60.0f, 20.0f, 60.0f));
									if (IS_OBJECT_VALID(&uLocal_465))
									{
										ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_465);
										ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_465);
									}
									uLocal_467 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_355, "clearZombies", 2,802597E-45f, Vector(-2832,546f, 50,331f, 2416,157f), Vector(0.0f, 111,587f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
									uLocal_528 = CREATE_OBJECTSET_IN_LAYOUT("objClearZombies", &uLocal_355, 15, 1);
									LOCATE_ACTORS_IN_VOLUME(&uLocal_467, &uLocal_528, 0, 1);
									if (IS_OBJECTSET_VALID(&uLocal_528))
									{
										bVar1 = false;
										while (bVar1 <= GET_OBJECTSET_SIZE(&uLocal_528))
										{
											uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_528);
											if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
											{
												if (GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar2)) != 339)
												{
													if (Function_236(GET_ACTOR_FROM_OBJECT(&uVar2)))
													{
													}
													DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(&uVar2));
												}
											}
											bVar1++;
										}
									}
									uLocal_495 = Function_235(Global_46760[10], "pleasanceHouse", "house01", 1);
									if (IS_DOOR_VALID(&uLocal_495))
									{
										CLOSE_DOOR_FAST(&uLocal_495);
										Function_234(&uLocal_495, 0);
										SET_DOOR_AUTO_CLOSE(&uLocal_495, 0);
										SET_DOOR_LOCK_VISIBLE(&uLocal_495, 0);
									}
									uLocal_489 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_355, "survivorIdle", "$/content/scripting/gringo/simpleGringo/stand_knock_on_door", Vector(-2831,146f, 50,332f, 2414,824f), Vector(0.0f, 293,242f, 0.0f));
									SNAP_ACTOR_TO_GRINGO(&uLocal_493, &uLocal_489, "UseCase1", true, 0, 0);
									TASK_USE_GRINGO(&uLocal_493, GET_GRINGO_FROM_OBJECT(&uLocal_489), "UseCase1", 4294967295, 1);
									SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, &uLocal_493, 3);
									AI_IGNORE_ACTOR(&uLocal_493);
									SET_ACTOR_PROOF(&uLocal_493, 16);
									SET_ACTOR_PROOF(&uLocal_493, 8);
									DECOR_SET_BOOL(&uLocal_493, "CanBeLasso", false);
									DECOR_SET_BOOL(&uLocal_493, "ActionArea_DisableHogtie", true);
									SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uLocal_493, 0.0f);
									SET_ACTOR_FACTION(&uLocal_493, 20);
									Function_225();
									iVar0 = 1;
								}
								else
								{
									uLocal_355 = CREATE_LAYOUT("RCM_Missing2_Layout");
								}
							}
						}
						break;
					
					case 0x00000001:
						if ((Global_6647 || Global_6646) || Global_6648)
						{
							Function_224(&Global_99725[ScriptParam_043] + 228, 128);
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_216();
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							break;
						}
						bLocal_354 = true;
						if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
						{
							if (bLocal_354)
							{
								if (!Function_212(&Global_54076, 1, 1))
								{
									if (Function_209(&Global_99725[ScriptParam_043] + 288, 0, 1, 0, 1, 0))
									{
										GATEWAY_DISABLE(&Global_99725[ScriptParam_043] + 288, 1);
										iVar0 = 3;
										break;
									}
								}
							}
						}
						Function_203(&(Global_99725[2043]), 20, 0x41f00000, 0x42200000, 0);
						if (Function_202())
						{
							AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
							iVar0 = 5;
							break;
						}
						break;
					
					case 0x00000003:
						if (Function_181("$/cutscene/missing_persons_2_cs/missing_persons_2_cs", &iLocal_336, 47221, 47163, 47123, 46802, 46761, 46745, 1, 1, 2, 2, 0))
						{
							bLocal_530 = true;
							iLocal_536 = 0;
							AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
							iVar0 = 5;
						}
						break;
					
					case 0x00000005:
						if (!HUD_IS_FADING() && !HUD_IS_FADED())
						{
							Function_180("Missing2a_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iLocal_357 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
							iLocal_358 = 0;
							while (iLocal_358 <= iLocal_357)
							{
								SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, iLocal_358), 4, 0);
								iLocal_358++;
							}
							APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "missing2a_OBJ", 0, 3, false);
							Function_179(Global_99725[ScriptParam_043].f_224, 0);
							REMOVE_BLIP(&Global_99725[2043] + 272);
							REMOVE_BLIP(&Global_99725[2043] + 280);
							Function_224(&Global_99725[2043] + 228, 2048);
							Function_178(&uLocal_493, 0);
							iVar3 = 0;
							while (iVar3 <= 7)
							{
								if (IS_ACTOR_VALID(&(uLocal_433[iVar3])))
								{
									ADD_BLIP_FOR_ACTOR(&(uLocal_433[iVar3]), 322, 0, 2, 0);
									DESTROY_OBJECT(&(uLocal_473[iVar3]));
									TASK_CLEAR(&(uLocal_433[iVar3]));
									Function_176(&(uLocal_433[iVar3]), 4294967295, 1);
								}
								iVar3++;
							}
							uLocal_541 = &Global_99725[ScriptParam_043] + 136;
							*(&Global_99725[ScriptParam_043] + 136) = GET_ASSET_ID("$/cutscene/missing_persons_2_pt_b_cs/missing_persons_2_pt_b_cs", 9);
							iVar0 = 6;
						}
						break;
					
					case 0x00000006:
						if (IS_ACTOR_VALID(&uLocal_493))
						{
							if (!bLocal_497)
							{
								iLocal_518 = 0;
								while (iLocal_518 < 6)
								{
									if (IS_ACTOR_VALID(&(uLocal_433[iLocal_518])))
									{
										if (!IS_ACTOR_DEAD(&(uLocal_433[iLocal_518])))
										{
											iLocal_519++;
										}
									}
									if (iLocal_518 == 6)
									{
										if (iLocal_519 == 0)
										{
											bLocal_497 = true;
											Function_180("Missing2b_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
											iLocal_357 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
											iLocal_358 = 0;
											while (iLocal_358 <= iLocal_357)
											{
												SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, iLocal_358), 4, 0);
												iLocal_358++;
											}
											APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "missing2b_OBJ", 0, 3, false);
											Function_179(Global_99725[ScriptParam_043].f_224, 0);
											uLocal_526 = ADD_BLIP_FOR_ACTOR(&uLocal_493, 549, 0, 2, 0);
											SET_BLIP_NAME(&uLocal_526, "MISSING");
											SET_BLIP_COLOR(&uLocal_526, 0,34f, 0,58f, 0,74f, 1.0f);
											CLEAR_ACTOR_PROOF(&uLocal_493, 16);
											CLEAR_ACTOR_PROOF(&uLocal_493, 8);
											FIRE_STOP_FLAMES_IN_VOLUME(&uLocal_465);
											SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uLocal_493, 1.0f);
											AI_GET_NAV_FAILSAFE_MOVEMENT_ENABLED(&uLocal_493);
											AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
											AUDIO_MUSIC_SET_MOOD("SUSPENSE_DARK", 0, 4294967295, 4294967295);
											iVar0 = 7;
											Function_175(21, 1);
											Global_116927[206].f_44 = 1.0f;
											break;
										}
										else
										{
											iLocal_519 = 0;
										}
									}
									iLocal_518++;
								}
							}
							else if (!iLocal_520)
							{
								if ((GET_TASK_STATUS(&uLocal_493, 22) != 0 || GET_TASK_STATUS(&uLocal_493, 22) != 1) || GET_TASK_STATUS(&uLocal_493, 22) != 4)
								{
									RESET_ANIM_SET_FOR_ACTOR(&uLocal_493, 1);
									SET_ANIM_SET_FOR_ACTOR(&uLocal_493, "fema_emo_thanks", 0);
									SET_ACTION_NODE_FOR_ACTOR(&uLocal_493, "fema_emo_thanks");
									Function_242(&uLocal_522);
									iLocal_520 = 1;
									iVar0 = 7;
									AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
									AUDIO_MUSIC_SET_MOOD("SUSPENSE_DARK", 0, 4294967295, 4294967295);
									iLocal_534 = 0;
									Function_174(&iLocal_514);
								}
							}
						}
						if (bLocal_530)
						{
							Function_173();
						}
						Function_203(&(Global_99725[2043]), 20, 0x41f00000, 0x42200000, 0);
						break;
					
					case 0x00000007:
						if (Function_181("$/cutscene/missing_persons_2_pt_b_cs/missing_persons_2_pt_b_cs", &iLocal_336, 40571, 47163, 38463, 38170, 36872, 46745, 1, 1, 2, 2, 0))
						{
							iVar0 = 12;
						}
						break;
					
					case 0x0000000C:
						if (!HUD_IS_FADING() && !HUD_IS_FADED())
						{
							if (!IS_OBJECT_VALID(&bLocal_491))
							{
								bLocal_491 = Function_147(StackVal, StackVal, Global_46838[1], "fortMercer_layout", Vector(-2651,921f, 68,3f, 3424,928f), Vector(-0,4054303f, 580,7257f, -3,193105f), 1);
							}
							if (IS_ACTOR_VALID(&uLocal_493))
							{
								if (IS_ACTOR_ALIVE(&uLocal_493))
								{
									if (IS_ACTOR_RIDING(&uLocal_493))
									{
										if (IS_BLIP_VALID(&uLocal_526))
										{
											REMOVE_BLIP(&uLocal_526);
										}
									}
									else if (!IS_BLIP_VALID(&uLocal_526))
									{
										uLocal_526 = ADD_BLIP_FOR_ACTOR(&uLocal_493, 549, 0, 2, 0);
										SET_BLIP_NAME(&uLocal_526, "MISSING");
										SET_BLIP_COLOR(&uLocal_526, 0,34f, 0,58f, 0,74f, 1.0f);
									}
									if (!iLocal_535)
									{
										if (!ACTORS_IN_RANGE(&Global_54076, &uLocal_493, 150.0f))
										{
											Function_180("Missing2c_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
											iLocal_535 = 1;
										}
									}
									else if (ACTORS_IN_RANGE(&Global_54076, &uLocal_493, 100.0f))
									{
										Function_180("Missing2b_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
										iLocal_535 = 0;
									}
									else if (!ACTORS_IN_RANGE(&Global_54076, &uLocal_493, 250.0f))
									{
										DESTROY_ACTOR(&uLocal_493);
										iVar0 = 8;
									}
									if (!DECOR_CHECK_EXIST(&Global_54076, "Missing3_ShutUp") && iLocal_521)
									{
										Function_118(&uLocal_493);
									}
									if (!iLocal_521)
									{
										if (Function_115(&iLocal_547) < 2.0f)
										{
											TASK_FOLLOW_OBJECT_AT_DISTANCE(&uLocal_493, &Global_54076, 5.0f, 4);
											iLocal_521 = 1;
										}
									}
									if (Function_115(&iLocal_498) < 3.0f)
									{
										Function_174(&iLocal_498);
									}
									if (Function_114(21))
									{
										iVar0 = 13;
									}
								}
							}
						}
						break;
					
					case 0x00000008:
						Function_175(21, 0);
						Function_113(20, 1);
						if (Function_112(21))
						{
							Function_110(&(Global_99725[2143]), 21, 0, 1, 1);
						}
						if (bLocal_530)
						{
							SET_FORCE_PLAYER_AIM_MODE(0, 0);
						}
						if (IS_OBJECT_VALID(&bLocal_491))
						{
							DESTROY_OBJECT(&bLocal_491);
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_224(&Global_99725[ScriptParam_043] + 228, 128);
						ACTOR_DATA_GRAVITY_LIMIT(0);
						Function_216();
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						break;
					
					case 0x0000000D:
						Function_1(20, 0, 0, 0);
						Function_224(&Global_99725[ScriptParam_043] + 228, 128);
						ACTOR_DATA_GRAVITY_LIMIT(0);
						Function_216();
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						break;
				}
				WAIT(false);
			}
			break;
	}
	Function_216();
	return;
}

void Function_1(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEE1 / 3809
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	char* cVar9[32];
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (!Function_109())
	{
		if (!Function_108(Global_119934, 2097152))
		{
			Function_103(&Global_54076, 2097152, 1, 0);
		}
	}
	iVar0 = iParam0;
	if (iVar0 + 1 <= 77)
	{
		if (Global_99725[iVar0 + 143].f_248)
		{
			bVar2 = (GET_DAY(GET_TIME_OF_DAY()) + GET_DAY(&Global_99725[iVar0 + 143] + 240));
			bVar3 = (GET_HOUR(GET_TIME_OF_DAY()) + GET_HOUR(&Global_99725[iVar0 + 143] + 240));
			iVar4 = (GET_MINUTE(GET_TIME_OF_DAY()) + GET_MINUTE(&Global_99725[iVar0 + 143] + 240));
			iVar5 = (GET_SECOND(GET_TIME_OF_DAY()) + GET_SECOND(&Global_99725[iVar0 + 143] + 240));
			uVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, iVar4, iVar5);
		}
		else
		{
			uVar1 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_102(&uVar1);
		PRINTNL();
		*(&Global_99725[iVar0 + 143] + 240) = &uVar1;
	}
	Global_116927[iParam06] = 6;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 168);
	Global_116927[iParam06].f_36 = TO_FLOAT(GET_ACTOR_ENUM(&Global_54076));
	if (IS_BLIP_VALID(&Global_99725[iParam043] + 272))
	{
		REMOVE_BLIP(&Global_99725[iParam043] + 272);
	}
	if (IS_BLIP_VALID(&Global_99725[iParam043] + 280))
	{
		REMOVE_BLIP(&Global_99725[iParam043] + 280);
	}
	if (IS_OBJECT_VALID(&Global_99725[iParam043] + 288))
	{
		DESTROY_OBJECT(&Global_99725[iParam043] + 288);
	}
	Function_101(&Global_99725[iParam043] + 228, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_100();
	}
	iVar6 = &Global_99725[iParam043] + 36;
	iVar7 = &Global_99725[iParam043] + 36;
	bVar8 = true;
	while (&Global_99725[iVar643] + 36 != iVar7 && bVar8)
	{
		if (!(Global_116927[iVar66] != 6 || Global_116927[iVar66] != 0))
		{
			bVar8 = false;
		}
		iVar6++;
	}
	if (&bParam3)
	{
		bVar8 = true;
	}
	if (bVar8)
	{
		if (!&bParam3)
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
			{
				CLEAR_JOURNAL_ENTRY(Global_99725[iParam043].f_224);
				REMOVE_JOURNAL_ENTRY(Global_99725[iParam043].f_224, false);
				PREPEND_JOURNAL_ENTRY(Global_99725[iParam043].f_224, true);
				memcpy(&cVar9, StackVal, StackVal, StackVal, *(&Global_99725[iParam043] + 4), 8);
				if (Global_116927[iParam06].f_24 == 1)
				{
					stradd(&cVar9, "_COMPLETE1", 32);
				}
				else if (Global_116927[iParam06].f_24 == 2)
				{
					stradd(&cVar9, "_COMPLETE2", 32);
				}
				else
				{
					stradd(&cVar9, "n_COMPLETE", 32);
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[iParam043].f_224, &cVar9, 0, 2, false);
				SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(16))
			{
				AWARD_ACHIEVEMENT(16);
			}
		}
		else
		{
			DEACTIVATE_JOURNAL_ENTRY(Global_99725[iParam043].f_224, 1);
			SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_InactiveJournal");
		}
	}
	else
	{
		if (&bParam1)
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_JOURNAL_MASTER");
		}
		bParam1 = 0;
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		Function_60(Global_99725[iParam043].f_224);
	}
	if (&Global_99717 + 16 == iParam0)
	{
		Global_99717.f_28 = 0;
		Global_99717.f_24 = 999.0f;
		*(&Global_99717 + 16) = 4294967295;
	}
	Function_48(0);
	Global_116927[iParam06].f_40 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	if (&bParam2)
	{
		if (!Function_47(0, 0, 1, 1))
		{
			Function_5(1);
			Function_4(&bParam1, 7);
		}
		else
		{
			Function_3();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 1);
	if (IS_ACTOR_VALID(&Global_99725[iParam043] + 312))
	{
		Function_2(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Global_99725[iParam043] + 312, 1, 1, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23);
	}
	else
	{
		PRINTSTRING("SET_RCM_ACTOR_CALL_OVER_ENABLE called with invalid actor.");
		PRINTNL();
	}
}

void Function_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x135B / 4955
{
	uParam3 = 2;
	uParam4 = 20.0f;
	uParam5 = 7.0f;
	uParam6 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x0000000F:
			uParam1 = 0;
			uParam2 = 1;
			uParam3 = 3;
			uParam5 = 2,5f;
			uParam4 = 8.0f;
			break;
		
		case 0x00000015:
			uParam1 = 0;
			uParam2 = 0;
			break;
		
		case 0x00000017:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x0000001C:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x00000020:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000023:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000026:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000027:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x0000002B:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000031:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000036:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000039:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x0000003C:
			uParam1 = 0;
			uParam2 = 1;
			uParam3 = 3;
			uParam5 = 3.0f;
			uParam4 = 8.0f;
			break;
		
		case 0x00000040:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x00000044:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x00000048:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		default:
			uParam1 = 0;
			uParam2 = 1;
			break;
	}
}

void Function_3() //Position: 0x14FC / 5372
{
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x1502 / 5378
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_5(bool bParam0) //Position: 0x1541 / 5441
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_36();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_6();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_101(&Global_99144, 1);
		Function_101(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_6() //Position: 0x1596 / 5526
{
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_31();
	Function_31();
	Function_14(0);
	Function_14(0);
	Function_11();
	Function_10();
	Function_9();
	Function_8();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_7();
	return;
}

void Function_7() //Position: 0x15E1 / 5601
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_8() //Position: 0x16E7 / 5863
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_131716 = fVar0;
	return;
}

void Function_9() //Position: 0x171A / 5914
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_10() //Position: 0x18AD / 6317
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_11() //Position: 0x1A66 / 6758
{
	Function_12(&Global_42918, 1, 0);
	return;
}

void Function_12(struct<2317> Param0) //Position: 0x1A74 / 6772
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_13();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_13() //Position: 0x1C91 / 7313
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_14(int iParam0) //Position: 0x1CA6 / 7334
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_30((50 + iVar4)) + Function_30((183 + iVar4))) + Function_30((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_15(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D4D / 7501
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_29(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_28(iParam0);
	if (&bParam2)
	{
		Function_16(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_16(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1FE9 / 8169
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
					bVar19 = (Function_26(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_26(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_24(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_21(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_18(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_17(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_17() //Position: 0x2627 / 9767
{
	int iVar0;
	
	return &iVar0;
}

var Function_18(int iParam0) //Position: 0x2630 / 9776
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_19(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2641 / 9793
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_20(char* cParam0) //Position: 0x2738 / 10040
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_21(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2753 / 10067
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_23(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_22(Function_23(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_22(int iParam0, int iParam1) //Position: 0x27BA / 10170
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_23(int iParam0, bool bParam1) //Position: 0x27CC / 10188
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_24(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x27DE / 10206
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
	if (((Function_25(iParam0) != 19 || Function_25(iParam0) != 17) || Function_25(iParam0) != 10) || Function_25(iParam0) != 9)
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

int Function_25(int iParam0) //Position: 0x2912 / 10514
{
	return Global_55480[iParam016].f_96;
}

float Function_26(int iParam0) //Position: 0x2921 / 10529
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_27(int iParam0) //Position: 0x295A / 10586
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_28(int iParam0) //Position: 0x2997 / 10647
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

int Function_29(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B31 / 11057
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_30(bool bParam0) //Position: 0x2D75 / 11637
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_31() //Position: 0x2DB6 / 11702
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_30((50 + iVar3) + 15) + Function_30((183 + iVar3) + 15)) + Function_30((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_15(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_32() //Position: 0x2E3F / 11839
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_30((50 + iVar3) + 8) + Function_30((183 + iVar3) + 8)) + Function_30((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_15(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_33() //Position: 0x2ED6 / 11990
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_30((50 + iVar3)) + Function_30((183 + iVar3))) + Function_30((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_15(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_34() //Position: 0x2F55 / 12117
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_35(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_15(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_35(int iParam0, bool bParam1, int iParam2) //Position: 0x2F92 / 12178
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_29(iParam0, bParam1, 1);
	Function_28(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_16(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_36() //Position: 0x319E / 12702
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_109())
	{
		Function_43(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_43(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_38(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_38(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_37(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_37(char* cParam0) //Position: 0x3255 / 12885
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_38(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x326D / 12909
{
	int iVar0;
	
	iVar0 = Function_41(&uParam2, &uParam3);
	if (Function_40(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_224(&Global_99144, 1);
			Function_101(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_224(&Global_99144, 2);
			Function_101(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_224(&Global_99144, 2);
		Function_101(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_39();
	return StackVal, Function_39();
}

struct<8> Function_39() //Position: 0x3365 / 13157
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_40(int iParam0) //Position: 0x336F / 13167
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_41(bool bParam0, bool bParam1) //Position: 0x3385 / 13189
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_42(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_42(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_40(iVar0) && !&bParam1)
	{
		iVar0 = Function_41(&bParam0, 1);
	}
	return iVar0;
}

float Function_42(struct<2> Param0, struct<2> Param2) //Position: 0x3451 / 13393
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_43(float fParam0, int iParam1) //Position: 0x346E / 13422
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_46(&Global_54076, &Var3);
	if (!Function_44(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_44(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_224(&Global_99144, 2);
	Function_101(&Global_99144, 1);
	iParam1 = 0;
	if (Function_37(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_44(int iParam0) //Position: 0x3C9A / 15514
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_45(uVar0, 0x1000000) || Function_45(uVar0, 0x2000000)) || Function_45(uVar0, 0x4000000)) || !Function_45(uVar0, 0x10000000));
}

bool Function_45(var uParam0, int iParam1) //Position: 0x3CD5 / 15573
{
	return (uParam0 && iParam1) == 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x3CE2 / 15586
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_47(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3CF1 / 15601
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

void Function_48(int iParam0) //Position: 0x3DA0 / 15776
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_57(1, 0))
	{
		Function_56("ZOMBIE_STORY_1_OBJ");
		if (!Function_114(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_114(4) && !Function_54(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_114(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_56("ZOMBIE_STORY_2Nigel_OBJ");
		Function_56("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_114(8) && !Function_114(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_114(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_114(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_114(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_114(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_51(&Global_6667[228] + 184, 2) || ((((((Function_114(14) && Function_114(18)) && Function_114(37)) && Function_114(7)) && Function_114(11)) && Function_114(5)) && Function_114(21)))
	{
		Function_56("ZOMBIE_STORY_3_OBJ");
		if (!Function_57(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_57(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_56("ZOMBIE_STORY_4_OBJ");
		if (!Function_114(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_51(&Global_6667[328] + 184, 2) || ((Function_114(27) && Function_114(1)) && Function_114(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_56("ZOMBIE_STORY_5_OBJ");
		if (!Function_57(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_57(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_114(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[243].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[443].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[343].f_224);
		bVar1 = false;
		if (Function_114(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[243] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[243].f_224, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_114(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_114(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[443] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_49(Global_46948)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[443].f_224, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_49(Global_46948) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater3_OBJ", 4, 0);
			}
			if (Function_49(Global_46948) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_30(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_30(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_114(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_114(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_114(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[643].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[743].f_224);
		if (Function_114(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[643].f_224, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_114(6) && Function_49(Global_46949) < 0) && Function_49(Global_46951) < 0) && Function_49(Global_46952) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[643].f_224, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[743].f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_114(11))
	{
		if (Function_114(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_99725[843].f_224);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_30(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_30(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_30(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_30(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_30(491) <= 5 && Function_30(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_114(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_114(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[1043].f_224, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(&bVar0))
	{
		Function_180(&bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_49(int iParam0) //Position: 0x46D3 / 18131
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_50(int iParam0) //Position: 0x46ED / 18157
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_51(int iParam0, int iParam1) //Position: 0x4704 / 18180
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_52() //Position: 0x4721 / 18209
{
	return STRING_TO_HASH(Function_53());
}

var Function_53() //Position: 0x472D / 18221
{
	return "ZOMBIE_STORY";
}

bool Function_54(int iParam0) //Position: 0x4742 / 18242
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_55(iParam0)7].f_12 < 0;
}

int Function_55(int iParam0) //Position: 0x47A8 / 18344
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

void Function_56(int iParam0) //Position: 0x486A / 18538
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_52(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_53(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_52(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_52(), &iParam0, 0, 3, false);
	Function_179(Function_52(), 0);
	return;
}

bool Function_57(int iParam0, bool bParam1) //Position: 0x48B3 / 18611
{
	int iVar0;
	
	iVar0 = Function_58(iParam0);
	if (!Function_50(iVar0))
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

var Function_58(int iParam0) //Position: 0x48F1 / 18673
{
	if (!Function_59(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_59(int iParam0) //Position: 0x490B / 18699
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_60(bool bParam0) //Position: 0x4921 / 18721
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (iVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_99(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_42833)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_42265)
			{
				if (Function_98(iVar6) && !Function_96(iVar6))
				{
					if (bParam0 == Global_42265[iVar69].f_64)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_95();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_94(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_90();
				TARGET_JOURNAL_ENTRY(bParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (&Global_99725[iVar143] + 36 == iVar2)
			{
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 272))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 272);
				}
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 280))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 280);
				}
				if (!Function_45(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_79(&(Global_99725[iVar143]), iVar3))
					{
						Function_224(&Global_99725[iVar143] + 228, 64);
						Function_72(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_61(&(Global_99725[iVar143]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
				{
					DESTROY_OBJECT(&Global_99725[iVar143] + 288);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_61(struct<229> Param0) //Position: 0x4ADB / 19163
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_45(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_17(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_62(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_62(struct<217> Param0) //Position: 0x4BAB / 19371
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_17(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_71(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_17(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_63(&uVar1, 0);
	return;
}

int Function_63(var uParam0, int iParam1) //Position: 0x4C69 / 19561
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_67(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_64(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_64(int iParam0, var uParam1, struct<2> Param2) //Position: 0x4DD3 / 19923
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_65(char* cParam0) //Position: 0x4E7B / 20091
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("0", &cVar8, ""), 4);
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

struct<32> Function_66(char* cParam0) //Position: 0x4EE7 / 20199
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_67(int iParam0) //Position: 0x4F09 / 20233
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_70(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_68(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_70(iVar0);
						}
					}
					else if (Function_68(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_70(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_70(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_68(int iParam0, struct<2> Param1) //Position: 0x5077 / 20599
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_69(&iParam0);
		Var0 = Function_69(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_69(int iParam0) //Position: 0x50EE / 20718
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_70(int iParam0) //Position: 0x515A / 20826
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_71(int iParam0) //Position: 0x51C2 / 20930
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_72(struct<153> Param0) //Position: 0x51D8 / 20952
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if ((((StackVal && Function_77(Function_78(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_76(iParam1)) || Global_116927[iParam16].f_20 != 1) || Function_45(Global_99725[iParam143].f_228, 64))
	{
		if (((Param0.f_152 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar2 = 0,5f;
			fVar6 = 70.0f;
			vVar4 = *(&Param0 + 196);
			vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(&Param0 + 272, fVar6);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
		else if (iParam1 == 13)
		{
			fVar2 = 0,5f;
			fVar7 = 30.0f;
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(&Param0 + 272, fVar7);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(&Param0 + 328))
		{
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 0);
			if (((((((((((Param0.f_152 == 312 && Param0.f_152 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(&Param0 + 272, 3.0f);
			}
			*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(&Param0 + 280, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
			}
			UNK_0xFF3DB575(&Param0 + 280, 1);
			if (Param0.f_152 == 312 && Param0.f_152 == 311)
			{
				SET_BLIP_PRIORITY(&Param0 + 280, 3);
			}
			if (Function_45(Global_116927[iParam16].f_32, 1))
			{
				SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam143].f_216 && !Function_75())
				{
					Function_73("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, fVar2);
			}
			Global_116927[iParam16].f_20 = 1;
		}
		if (IS_BLIP_VALID(&Param0 + 272))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(&Param0 + 272, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(&Param0 + 272, 1, 0, (7,5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(&Param0 + 272, 1, 0, 7,5f);
				}
			}
			else
			{
				SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			}
			if (Function_45(Global_116927[iParam16].f_32, 1))
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam143].f_216 && !Function_75())
				{
					Function_73("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			}
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
		SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
		SET_BLIP_PRIORITY(&Param0 + 272, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(&Param0 + 272, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(&Param0 + 272, 0,34f, 0,58f, 0,74f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 0,34f, 0,58f, 0,74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(&Param0 + 272, 0,79f, 0,69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 0,79f, 0,69f, 0.0f, 1.0f);
	}
	return;
}

void Function_73(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x56EE / 22254
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_74(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_74(int iParam0) //Position: 0x5779 / 22393
{
	char* cVar0[16];
	
	if (!Function_109())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_75() //Position: 0x57B8 / 22456
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

int Function_76(int iParam0) //Position: 0x57E5 / 22501
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_77(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5811 / 22545
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_78(int iParam0) //Position: 0x5832 / 22578
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_79(struct<249> Param0) //Position: 0x5847 / 22599
{
	if (Function_45(Global_99725[iParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_78(iParam1))
	{
		Function_224(&Global_99725[iParam143] + 228, 64);
		return 1;
	}
	if ((Function_89(iParam1) || Function_114(iParam1)) || Function_88(iParam1))
	{
		return 0;
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			return 0;
		}
	}
	if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return 0;
	}
	if (Function_71(Param0.f_216))
	{
		if (Function_87(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_85(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_84(&Param0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(&Param0 + 312))
			{
				return 0;
			}
		}
	}
	if (!Function_80(&Param0, iParam1))
	{
		return 0;
	}
	Function_224(&Global_99725[iParam143] + 228, 64);
	return 1;
}

bool Function_80(struct<265> Param0) //Position: 0x5977 / 22903
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_51(&Param0 + 260, 4))
		{
			if (!Function_83(iParam1))
			{
				return 0;
			}
		}
		if (Function_51(&Param0 + 260, 1))
		{
			if (!Function_114(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_51(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_58(Param0.f_264);
			if (Function_81(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_51(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_81(Param0.f_252))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_51(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_51(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_51(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_51(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_51(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_51(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x5AD8 / 23256
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	if (!Function_82(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_82(int iParam0) //Position: 0x5AFC / 23292
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_83(int iParam0) //Position: 0x5B11 / 23313
{
	return Global_116927[iParam06].f_16;
}

bool Function_84(struct<237> Param0) //Position: 0x5B21 / 23329
{
	if (!Param0.f_236)
	{
		if (Function_109())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_85(int iParam0) //Position: 0x5BF0 / 23536
{
	if (!Function_86(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_45(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_108(Global_119935, 0x8000000))
			{
				Function_103(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_86(int iParam0) //Position: 0x5C4B / 23627
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_87(var uParam0, int iParam1) //Position: 0x5C67 / 23655
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x5C84 / 23684
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_89(int iParam0) //Position: 0x5C99 / 23705
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_90() //Position: 0x5CAE / 23726
{
	if (Function_93(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_92(Global_42827);
			(&Global_42827 + 8) = Function_91(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_92(Global_42827);
			*(&Global_42827 + 8) = Function_91(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_91(int iParam0, int iParam1) //Position: 0x5D2E / 23854
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_57(6, 0) || Function_57(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_114(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_57(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_114(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_114(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_114(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_114(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_57(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_114(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_114(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_114(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_114(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_114(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_114(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_114(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_57(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_114(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_57(6, 0) && Function_114(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_114(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_57(9, 0) && Function_114(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_114(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_57(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_37(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_37(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_37(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_92(int iParam0) //Position: 0x6991 / 27025
{
	int iVar0;
	int iVar1;
	
	if (!Function_93(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_93(int iParam0) //Position: 0x69E0 / 27104
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_94(int iParam0) //Position: 0x69F6 / 27126
{
	if (Global_42827 == iParam0)
	{
		return 1;
	}
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_96(iParam0))
	{
		return 0;
	}
	if (!Function_98(iParam0))
	{
		return 0;
	}
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_95() //Position: 0x6A5F / 27231
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_96(int iParam0) //Position: 0x6A84 / 27268
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_97(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_97(int iParam0, int iParam1) //Position: 0x6AD5 / 27349
{
	int iVar0;
	
	if (!Function_93(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_98(int iParam0) //Position: 0x6B02 / 27394
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_97(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_99(bool bParam0) //Position: 0x6B54 / 27476
{
	int iVar0;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_95();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_100() //Position: 0x6B8E / 27534
{
	bool bVar0;
	
	bVar0 = Function_30(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_101(int iParam0, int iParam1) //Position: 0x6BEC / 27628
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_102(int iParam0) //Position: 0x6C02 / 27650
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

void Function_103(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6C4C / 27724
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_105(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_104(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_104(char* cParam0) //Position: 0x6CC1 / 27841
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_105(int iParam0, var uParam1, int iParam2) //Position: 0x6CFB / 27899
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_107(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_106(uVar0))
		{
			case 0x00000002:
				if (!Function_108(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_106(char* cParam0) //Position: 0x6D77 / 28023
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_107(int iParam0) //Position: 0x6E18 / 28184
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_101(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool Function_108(int iParam0, int iParam1) //Position: 0x6E55 / 28245
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_109() //Position: 0x6E68 / 28264
{
	if (Function_45(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_110(struct<229> Param0) //Position: 0x6E83 / 28291
{
	int iVar0;
	
	iVar0 = 0;
	uParam2 = &uParam2;
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if ((!Function_45(Global_99725[iParam143].f_228, 64) || Function_114(iParam1)) || Function_88(iParam1))
		{
			if (((((iParam1 != 2 || iParam1 != 6) || iParam1 != 8) || iParam1 != 24) && !Function_114(iParam1)) && !Function_88(iParam1))
			{
			}
			else
			{
				if (IS_BLIP_VALID(&Param0 + 272))
				{
					REMOVE_BLIP(&Param0 + 272);
				}
				if (IS_BLIP_VALID(&Param0 + 280))
				{
					REMOVE_BLIP(&Param0 + 280);
				}
			}
		}
	}
	else
	{
		if (Function_45(Global_99725[iParam143].f_228, 64))
		{
			Function_72(&Param0, iParam1);
		}
		if (!(Function_114(iParam1) || Function_88(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
	}
	if (IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_45(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_101(&Param0 + 228, 32);
	}
	if (IS_OBJECT_VALID(&Param0 + 328))
	{
		RELEASE_OBJECT_REF(&Param0 + 328);
	}
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		DESTROY_VOLUME(&Param0 + 336);
	}
	if (&bParam4)
	{
		Function_111(&Param0);
	}
	Function_101(&Param0 + 228, 256);
	switch (Global_116927[iParam16])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_116927[iParam16] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(&Param0 + 296) && uParam3)
	{
		TERMINATE_SCRIPT(&Param0 + 296);
	}
	switch (Param0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(&Param0 + 312))
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param0 + 312);
				AI_CONVERSE_ENABLE(&Param0 + 312);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
				{
					DESTROY_OBJECT(SQUAD_GET(&Param0 + 312));
				}
				RELEASE_ACTOR(&Param0 + 312);
			}
			break;
		
		default:
			break;
	}
}

void Function_111(struct<229> Param0) //Position: 0x70CA / 28874
{
	if (Function_45(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_101(&Param0 + 228, 1);
	}
	if (Function_45(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
		Function_101(&Param0 + 228, 8);
	}
	if (Function_45(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_101(&Param0 + 228, 2);
	}
	if (Function_45(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_101(&Param0 + 228, 4);
	}
	return;
}

bool Function_112(int iParam0) //Position: 0x7159 / 29017
{
	if (Global_116927[iParam06] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_113(int iParam0, bool bParam1) //Position: 0x716E / 29038
{
	char* cVar0[32];
	
	Global_116927[iParam06] = 7;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[iParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (&bParam1)
	{
		switch (Global_43787)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_43787);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_108(Global_119934, 8192))
	{
		Function_103(&Global_54076, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_114(int iParam0) //Position: 0x72F7 / 29431
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

float Function_115(vector3 vParam0) //Position: 0x730C / 29452
{
	if (Function_117(&vParam0))
	{
		if (Function_116(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_116(int iParam0) //Position: 0x73D9 / 29657
{
	return Function_45(iParam0, 2);
}

bool Function_117(int iParam0) //Position: 0x73E7 / 29671
{
	return Function_45(iParam0, 1);
}

void Function_118(int iParam0) //Position: 0x73F5 / 29685
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	bool bVar11;
	bool bVar12;
	
	Function_242(&iVar9);
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (IS_ACTOR_VALID(&iParam0))
			{
				iVar0 = Function_146(&iParam0);
			}
			if (!IS_OBJECT_VALID(&uLocal_543))
			{
				uLocal_543 = CREATE_EVENT_TRAP("DismountTrap", 19, &uLocal_355);
				EVENT_TRAP_ON_PERPETRATOR(&uLocal_543, &Global_54076);
			}
			else if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_543))
			{
				bVar11 = true;
				EVENT_TRAP_CLEAR_EVENTS(&uLocal_543);
				EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_543);
			}
			if (!IS_OBJECT_VALID(&uLocal_545))
			{
				uLocal_545 = CREATE_EVENT_TRAP("HijackTrap", 20, &uLocal_355);
				EVENT_TRAP_ON_TARGET(&uLocal_545, &Global_54076);
			}
			else if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_545))
			{
				bVar12 = true;
				EVENT_TRAP_CLEAR_EVENTS(&uLocal_545);
				EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_545);
			}
			if (IS_ACTOR_RIDING(&iParam0))
			{
				if (((iVar0 == 11 && iVar0 == 9) && iVar0 == 13) && iVar0 == 14)
				{
					Function_178(&iParam0, 11);
					iVar0 = 11;
				}
			}
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					fLocal_540 = Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184));
					TASK_PRIORITY_SET(&iParam0, true);
					Function_178(&iParam0, 1);
					break;
				
				case 0x00000001:
					TASK_CLEAR(&iParam0);
					if (IS_VOLUME_VALID(&uLocal_469))
					{
						DESTROY_VOLUME(&uLocal_469);
					}
					Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("mpDefend") };
					Function_145(&iParam0);
					uLocal_469 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_355, &Var1, 2, Function_145(&iParam0), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
					SET_ACTOR_STAY_WITHIN_VOLUME(&iParam0, &uLocal_469, 4, false);
					TASK_PRIORITY_SET(&iParam0, true);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iParam0, 0,1f);
					if (IS_OBJECT_VALID(&uLocal_471))
					{
						DESTROY_OBJECT(&uLocal_471);
					}
					Function_145(&iParam0);
					Function_144(&iParam0);
					uLocal_471 = CREATE_GRINGO_IN_LAYOUT(&uLocal_355, "wringingGringo", "stand_wring_hands", Function_145(&iParam0), Function_144(&iParam0));
					TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&uLocal_471), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(&iParam0, &uLocal_471, "UseCase1", false, 0, 0);
					Function_178(&iParam0, 2);
					break;
				
				case 0x00000002:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (Function_142())
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
						if (IS_VOLUME_VALID(&uLocal_469))
						{
							DESTROY_VOLUME(&uLocal_469);
						}
						if (IS_OBJECT_VALID(&uLocal_471))
						{
							DESTROY_OBJECT(&uLocal_471);
						}
						Function_178(&iParam0, 5);
					}
					break;
				
				case 0x00000003:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (Function_68(StackVal, &iParam0, *(&Global_99725[2143] + 184)) < 50.0f)
					{
						TASK_CLEAR(&iParam0);
						if (IS_VOLUME_VALID(&uLocal_469))
						{
							DESTROY_VOLUME(&uLocal_469);
						}
						Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("mpDefend") };
						Function_145(&iParam0);
						uLocal_469 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_355, &Var1, 2, Function_145(&iParam0), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
						SET_ACTOR_STAY_WITHIN_VOLUME(&iParam0, &uLocal_469, 4, false);
						TASK_PRIORITY_SET(&iParam0, true);
						if (IS_OBJECT_VALID(&uLocal_471))
						{
							DESTROY_OBJECT(&uLocal_471);
						}
						Function_145(&iParam0);
						Function_144(&iParam0);
						uLocal_471 = CREATE_GRINGO_IN_LAYOUT(&uLocal_355, "wringingGringo", "stand_wring_hands", Function_145(&iParam0), Function_144(&iParam0));
						TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&uLocal_471), "UseCase1", 4294967295, 1);
						SNAP_ACTOR_TO_GRINGO(&iParam0, &uLocal_471, "UseCase1", false, 0, 0);
						if (!ACTORS_IN_RANGE(&Global_54076, &iParam0, 15.0f))
						{
							Function_141();
						}
						Function_178(&iParam0, 4);
					}
					else
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
						TASK_PRIORITY_SET(&iParam0, true);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iParam0, 0,1f);
						TASK_GO_TO_COORD_AND_STAY(&iParam0, &Global_99725[2143] + 184, 4, 296,5f);
						Function_178(&iParam0, 8);
					}
					break;
				
				case 0x00000004:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (IS_ACTOR_RIDING(&iParam0) || IS_ACTOR_RIDING_VEHICLE(&iParam0))
					{
						Function_178(&iParam0, 13);
					}
					else if (ACTORS_IN_RANGE(&Global_54076, &iParam0, 15.0f))
					{
						if (IS_OBJECT_VALID(&uLocal_471))
						{
							DESTROY_OBJECT(&uLocal_471);
						}
						if (IS_OBJECT_VALID(&uLocal_471))
						{
							DESTROY_OBJECT(&uLocal_471);
						}
						Function_178(&iParam0, 5);
					}
					break;
				
				case 0x00000008:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (GET_TASK_STATUS(&iParam0, 66) != 1)
					{
						TASK_GO_TO_COORD_AND_STAY(&iParam0, &Global_99725[2143] + 184, 4, 296,5f);
					}
					break;
				
				case 0x00000005:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &Global_54076, 5.0f, 4);
					TASK_PRIORITY_SET(&iParam0, true);
					Function_178(&iParam0, 6);
					break;
				
				case 0x00000006:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (Function_68(StackVal, &iParam0, *(&Global_99725[2143] + 184)) > 50.0f)
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
						TASK_PRIORITY_SET(&iParam0, true);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iParam0, 0,1f);
						TASK_GO_TO_COORD_AND_STAY(&iParam0, &Global_99725[2143] + 184, 4, 296,5f);
						Function_178(&iParam0, 8);
					}
					else if (IS_ACTOR_RIDING(&Global_54076))
					{
						SET_ALLOW_RIDE_BY_AI(GET_MOUNT(&Global_54076), 1);
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						if (IS_ACTOR_MALE(&iParam0))
						{
							SET_ANIM_SET_FOR_ACTOR(&iParam0, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(&iParam0, "fema_ride_passenger", 0);
							AI_SET_ALLOWED_MOUNT_DIRECTIONS(&iParam0, 79);
						}
						SET_MOUNTS_AS_PASSENGER(&iParam0, 1);
						TASK_MOUNT(&iParam0, GET_MOUNT(&Global_54076), 0, 1, 4, 2147483647);
						TASK_PRIORITY_SET(&iParam0, true);
						if (!iLocal_533)
						{
							Function_140();
							iLocal_533 = 1;
						}
						Function_178(&iParam0, 9);
					}
					else if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
					{
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iParam0, GET_VEHICLE(&Global_54076), 1, 4, 0);
						TASK_PRIORITY_SET(&iParam0, true);
						Function_178(&iParam0, 10);
					}
					else if (!ACTORS_IN_RANGE(&Global_54076, &iParam0, 25.0f))
					{
						Function_178(&iParam0, 3);
					}
					break;
				
				case 0x00000009:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (!IS_ACTOR_RIDING(&Global_54076) || !ACTORS_IN_RANGE(&Global_54076, &iParam0, 25.0f))
					{
						Function_178(&iParam0, 3);
					}
					else if (IS_ACTOR_RIDING(&iParam0))
					{
						TASK_CLEAR(&iParam0);
						ACTOR_START_FORCE_HOLSTER(&iParam0, 1, 0);
						MEMORY_ALLOW_SHOOTING(&iParam0, false);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
						Function_178(&iParam0, 11);
					}
					break;
				
				case 0x0000000A:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (!IS_ACTOR_DRIVING_VEHICLE(&Global_54076) || !ACTORS_IN_RANGE(&Global_54076, &iParam0, 25.0f))
					{
						Function_178(&iParam0, 3);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(&iParam0))
					{
						TASK_CLEAR(&iParam0);
						ACTOR_START_FORCE_HOLSTER(&iParam0, 1, 0);
						MEMORY_ALLOW_SHOOTING(&iParam0, false);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
						Function_178(&iParam0, 12);
					}
					break;
				
				case 0x0000000B:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (bVar12)
					{
						Function_139();
						Function_178(&iParam0, 13);
					}
					else if (bVar11)
					{
						Function_138();
						Function_178(&iParam0, 13);
					}
					else if (!IS_ACTOR_RIDING(&Global_54076) || !IS_ACTOR_RIDING(&iParam0))
					{
						Function_139();
						Function_178(&iParam0, 13);
					}
					break;
				
				case 0x0000000C:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (!IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
					{
						Function_138();
						Function_178(&iParam0, 13);
					}
					break;
				
				case 0x0000000D:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (IS_ACTOR_RIDING(&iParam0))
					{
						TASK_DISMOUNT(&iParam0, 1);
						TASK_PRIORITY_SET(&iParam0, true);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(&iParam0))
					{
						TASK_VEHICLE_LEAVE(&iParam0);
						TASK_PRIORITY_SET(&iParam0, true);
					}
					Function_178(&iParam0, 14);
					break;
				
				case 0x0000000E:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (IS_ACTOR_RIDING(&iParam0))
					{
						if (GET_TASK_STATUS(&iParam0, 12) != 1)
						{
							TASK_DISMOUNT(&iParam0, 1);
							TASK_PRIORITY_SET(&iParam0, true);
						}
					}
					if (!IS_ACTOR_RIDING_VEHICLE(&iParam0) && !IS_ACTOR_RIDING(&iParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						Function_178(&iParam0, 3);
					}
					break;
				
				default:
					if (Function_115(&iLocal_498) < 3.0f)
					{
						Function_174(&iVar9);
					}
					Function_178(&iParam0, 3);
					break;
			}
			Function_136(&iParam0);
			Function_135(&iParam0);
			Function_119(iVar0, &iParam0);
		}
	}
	return;
}

void Function_119(int iParam0, int iParam1) //Position: 0x7CD4 / 31956
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	if (!Function_117(&iLocal_502))
	{
		Function_133(&iLocal_502, 10.0f);
	}
	else if (Function_132(&iLocal_502, 3.0f))
	{
		uVar0 = GET_LAST_ATTACK_TARGET(&Global_54076);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar0)) > 1.0f)
			{
				if (ACTORS_IN_RANGE(&iParam1, &uVar0, 10.0f) || ACTORS_IN_RANGE(&iParam1, &Global_54076, 6.0f))
				{
					if (GET_ACTOR_HEALTH(&uVar0) > 1.0f)
					{
						if (GET_ACTOR_FACTION(&uVar0) == 32)
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam1, "MINOR_SHOCK", "", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
							Function_174(&iLocal_502);
						}
						else if (IS_ACTOR_HUMAN(&uVar0))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam1, "MAJOR_SHOCK", "", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
							Function_174(&iLocal_502);
						}
					}
				}
			}
		}
		if (iLocal_538 > 1)
		{
			if (Function_132(&iLocal_502, 10.0f))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam1, "MAJOR_SHOCK", "", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
				Function_174(&iLocal_502);
			}
		}
		else if ((iParam0 != 11 || iParam0 != 12) || iParam0 != 6)
		{
			if ((iParam0 != 11 || iParam0 != 12) || iParam0 != 6)
			{
				if (!iLocal_531)
				{
					if (Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184)) < fLocal_540)
					{
						fLocal_540 = Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184));
						Function_174(&iLocal_506);
						iLocal_531 = 1;
					}
					else
					{
						fLocal_540 = Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184));
					}
				}
				else if (Function_132(&iLocal_506, 7.0f))
				{
					if (Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184)) < fLocal_540)
					{
						if ((Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184)) - fLocal_540) < 25.0f)
						{
							fLocal_540 = Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184));
							bVar1 = true;
							Function_131(&iLocal_506);
							iLocal_531 = 0;
						}
					}
					else
					{
						fLocal_540 = Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184));
						Function_131(&iLocal_506);
						iLocal_531 = 0;
					}
				}
			}
			else if (iLocal_531)
			{
				fLocal_540 = Function_68(StackVal, &Global_54076, *(&Global_99725[2143] + 184));
				Function_131(&iLocal_506);
				iLocal_531 = 0;
			}
			if (iParam0 == 11)
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (!Function_117(&iLocal_510))
					{
						if (Function_130(GET_MOUNT(&Global_54076), 0) > 2.0f)
						{
							Function_174(&iLocal_510);
						}
					}
					else if (Function_132(&iLocal_510, 5.0f))
					{
						if (Function_130(GET_MOUNT(&Global_54076), 0) > 2.0f)
						{
							bVar2 = true;
						}
						Function_131(&iLocal_510);
					}
				}
			}
			else if (Function_117(&iLocal_510))
			{
				Function_131(&iLocal_510);
			}
			if (!iLocal_532)
			{
				if (Function_68(StackVal, &iParam1, *(&Global_99725[2143] + 184)) > 50.0f)
				{
					bVar3 = true;
				}
			}
			if (bVar3)
			{
				Function_129();
				iLocal_532 = 1;
				Function_174(&iLocal_502);
			}
			else if (bVar2)
			{
				Function_128();
				Function_174(&iLocal_502);
			}
			else if (bVar1)
			{
				Function_127();
				Function_174(&iLocal_502);
			}
			else if (Function_132(&iLocal_502, 15.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (iLocal_537)
					{
						case 0x00000000:
							Function_126();
							iLocal_537++;
							break;
						
						case 0x00000001:
							Function_125();
							iLocal_537++;
							break;
						
						case 0x00000002:
							Function_124();
							iLocal_537++;
							break;
						
						case 0x00000003:
							Function_120();
							iLocal_537++;
							break;
					}
					Function_174(&iLocal_502);
				}
				else
				{
					Function_174(&iLocal_502);
				}
			}
		}
	}
	return;
}

void Function_120() //Position: 0x8080 / 32896
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v4_AA", "RCMMill_bak2Fort_bant_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v4_AB", "RCMMill_bak2Fort_bant_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v4_AC1", "RCMMill_bak2Fort_bant_v4_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v4_AC2", "RCMMill_bak2Fort_bant_v4_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v4_AD", "RCMMill_bak2Fort_bant_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v4_AE", "RCMMill_bak2Fort_bant_v4_AE", true, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_121(int iParam0) //Position: 0x823C / 33340
{
	Function_122(0, &Global_54076, iParam0, 0);
	Function_122(1, &uLocal_493, iParam0, 0);
	return;
}

void Function_122(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x8258 / 33368
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_45(uParam2, Function_123(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

int Function_123(bool bParam0) //Position: 0x8280 / 33408
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_124() //Position: 0x828C / 33420
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v3_AA", "RCMMill_bak2Fort_bant_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v3_AB", "RCMMill_bak2Fort_bant_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v3_AC", "RCMMill_bak2Fort_bant_v3_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v3_AD", "RCMMill_bak2Fort_bant_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v3_AE1", "RCMMill_bak2Fort_bant_v3_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v3_AE2", "RCMMill_bak2Fort_bant_v3_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v3_AF", "RCMMill_bak2Fort_bant_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v3_AG", "RCMMill_bak2Fort_bant_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v3_AH1", "RCMMill_bak2Fort_bant_v3_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v3_AH2", "RCMMill_bak2Fort_bant_v3_AH2", true, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_125() //Position: 0x8560 / 34144
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v2_AA", "RCMMill_bak2Fort_bant_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v2_AB", "RCMMill_bak2Fort_bant_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v2_AC", "RCMMill_bak2Fort_bant_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v2_AD1", "RCMMill_bak2Fort_bant_v2_AD1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v2_AD2", "RCMMill_bak2Fort_bant_v2_AD2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v2_AE", "RCMMill_bak2Fort_bant_v2_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v2_AF", "RCMMill_bak2Fort_bant_v2_AF", true, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_126() //Position: 0x8761 / 34657
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v1_AA", "RCMMill_bak2Fort_bant_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v1_AB", "RCMMill_bak2Fort_bant_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v1_AC1", "RCMMill_bak2Fort_bant_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bak2Fort_bant_v1_AC2", "RCMMill_bak2Fort_bant_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_bak2Fort_bant_v1_AD", "RCMMill_bak2Fort_bant_v1_AD", true, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_127() //Position: 0x88D8 / 35032
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_RidinWrongWay", "RCMMill_RidinWrongWay", false, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_128() //Position: 0x892B / 35115
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_JonStopsHors", "RCMMill_JonStopsHors", false, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_129() //Position: 0x897C / 35196
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_ArriveFort", "RCMMill_ArriveFort", true, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_130(bool bParam0, bool bParam1) //Position: 0x89C9 / 35273
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&bParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_131(vector3 vParam0) //Position: 0x89EA / 35306
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_132(int iParam0, float fParam1) //Position: 0x8A01 / 35329
{
	if (Function_117(&iParam0))
	{
		if (Function_115(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_133(int iParam0, float fParam1) //Position: 0x8A1F / 35359
{
	if (!Function_117(&iParam0))
	{
		Function_134(&iParam0, fParam1);
	}
	return;
}

void Function_134(vector3 vParam0) //Position: 0x8A37 / 35383
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_224(&vParam0, 1);
	Function_101(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_135(int iParam0) //Position: 0x8A5C / 35420
{
	var uVar0;
	bool bVar1;
	
	if (!Function_117(&iLocal_514))
	{
		Function_174(&iLocal_514);
	}
	else if (Function_132(&iLocal_514, 5.0f))
	{
		uVar0 = GET_LAST_ATTACK_TARGET(&Global_54076);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar0)) > 1.0f)
			{
				if (GET_ACTOR_FACTION(&uVar0) == 32)
				{
					bVar1 = true;
				}
			}
		}
		uVar0 = GET_LAST_ATTACKER(&Global_54076);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 1.0f)
			{
				if (GET_ACTOR_FACTION(&uVar0) == 32)
				{
					bVar1 = true;
				}
			}
		}
		uVar0 = GET_LAST_ATTACKER(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&iParam0)) > 1.0f)
			{
				if (GET_ACTOR_FACTION(&uVar0) == 32)
				{
					bVar1 = true;
				}
			}
		}
		if (iLocal_534)
		{
			if (!bVar1 && iLocal_538 >= 0)
			{
				AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_DARK", 0, 4294967295, 4294967295);
				iLocal_534 = 0;
				Function_174(&iLocal_514);
			}
		}
		else if (iLocal_538 <= 3 || bVar1)
		{
			AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
			iLocal_534 = 0;
			Function_174(&iLocal_514);
		}
	}
	return;
}

void Function_136(int iParam0) //Position: 0x8BCB / 35787
{
	struct<8> Var0;
	var uVar8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("zombieCountVol") };
	Function_145(&iParam0);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_355, &Var0, 2, Function_145(&iParam0), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	if (IS_VOLUME_VALID(&uVar8))
	{
		iLocal_538 = Function_137(&uVar8);
		DESTROY_VOLUME(&uVar8);
	}
	return;
}

int Function_137(int iParam0) //Position: 0x8C29 / 35881
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!IS_VOLUME_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_17(), &Global_46715, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&iParam0, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			iVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar0);
			if (IS_OBJECT_VALID(&iVar4))
			{
				iVar5 = GET_ACTOR_FROM_OBJECT(&iVar4);
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (IS_ACTOR_ALIVE(&iVar5))
					{
						if (GET_DRAW_ACTOR(&iVar5))
						{
							if (Function_236(&iVar5))
							{
								if (!IS_ACTOR_HORSE(&iVar5))
								{
									iVar1++;
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return iVar1;
}

void Function_138() //Position: 0x8CF0 / 36080
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_JonGetsOffhorse", "RCMMill_JonGetsOffhorse", false, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_139() //Position: 0x8D47 / 36167
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_bothThrownHors", "RCMMill_bothThrownHors", false, 1, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_140() //Position: 0x8D9C / 36252
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "RCMMill_getOnBak", "RCMMill_getOnBak", true, 2, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_141() //Position: 0x8DE5 / 36325
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "RCMMill_JonDeserts", "RCMMill_JonDeserts", false, 2, 1, 0, 1);
		Function_121(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_142() //Position: 0x8E32 / 36402
{
	if (bLocal_497)
	{
		SET_DRAW_OBJECT(&uLocal_495, 1);
		Function_143(&uLocal_495, 0);
		OPEN_DOOR_DIRECTION(&uLocal_495, 0);
		return 1;
	}
	return 0;
}

void Function_143(var uParam0, int iParam1) //Position: 0x8E59 / 36441
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

struct<8> Function_144(int iParam0) //Position: 0x8EB1 / 36529
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_145(int iParam0) //Position: 0x8EDA / 36570
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_146(int iParam0) //Position: 0x8EEC / 36588
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "mp_rcm_state");
}

var Function_147(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4, char* cParam6) //Position: 0x8F0A / 36618
{
	char[] cVar0[4];
	char* cVar1[64];
	var uVar17;
	
	if (Function_148(uParam0))
	{
		cVar0 = FIND_NAMED_LAYOUT(&uParam1);
		if (IS_LAYOUTREF_VALID(&cVar0))
		{
			if (&cParam6 == 4294967295)
			{
				cParam6 = Global_39906.f_40 + 1;
				if (&cParam6 == 6)
				{
					cParam6 = 7;
				}
			}
			if (&cParam6 < 16)
			{
				strcpy(&cVar1, "$/fragments/p_pos_missing", 64);
				if (&cParam6 <= 10)
				{
					stradd(&cVar1, "0", 64);
				}
				stradd(&cVar1, INT_TO_STRING(&cParam6), 64);
				stradd(&cVar1, "x", 64);
				uVar17 = CREATE_PROP_IN_LAYOUT(&cVar0, "mpNextPoster", &cVar1, Param2, Param4, false);
				if (!IS_OBJECT_VALID(&uVar17))
				{
					return "";
				}
				SET_PROP_AI_OBSTACLE_ENABLED(&uVar17, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(&uVar17, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar17, 0);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uVar17), true);
				return &uVar17;
			}
		}
	}
	return "";
}

bool Function_148(int iParam0) //Position: 0x8FEC / 36844
{
	if (!Function_71(iParam0))
	{
		return 1;
	}
	return Function_87(&(Global_43791[iParam0]), 4);
}

int Function_149() //Position: 0x9008 / 36872
{
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_150(1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1);
	DESTROY_VOLUME(&bLocal_348);
	return 1;
}

void Function_150(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x9029 / 36905
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_13();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_154(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_153();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_151(&iParam9, &bParam10);
}

void Function_151(var uParam0, bool bParam1) //Position: 0x90F8 / 37112
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_152();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_152() //Position: 0x91C7 / 37319
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_153() //Position: 0x923F / 37439
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_154(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x9254 / 37460
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
	Function_29(iParam0, TO_FLOAT(bParam1), 1);
	Function_28(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_16(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_155(iParam0);
	return 1;
}

void Function_155(int iParam0) //Position: 0x947C / 38012
{
	switch (iParam0)
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

int Function_156() //Position: 0x951A / 38170
{
	var uVar0;
	
	Function_142();
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2823,847f, 50,111f, 2417,65f), 214,687f, 1, 1, true);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 0);
	Function_157();
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_493, Vector(-2823,649f, 50,111f, 2416,789f), 218,993f, 1, 1, true);
	uVar0 = Vector(-2823,027f, 49,887f, 2420,853f);
	TASK_GO_NEAR_COORD(&uLocal_493, &uVar0, 2.0f, 1);
	ACTOR_POP_NEXT_GAIT(&uLocal_493, 1, 0);
	Function_242(&iLocal_547);
	return 1;
}

void Function_157() //Position: 0x95AE / 38318
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	uVar1 = &Global_21369 + 72;
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (IS_ACTOR_ALIVE(&uVar0))
		{
			uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar0);
			if (IS_ACTOR_VALID(&uVar2))
			{
				FREE_FROM_HOGTIE(&uVar2);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				FREE_FROM_HOGTIE(GET_ATTACHED_HOGTIE_VICTIM(&uVar0));
			}
		}
	}
	if (IS_ACTOR_VALID(&uVar1))
	{
		if (IS_ACTOR_ALIVE(&uVar1))
		{
			uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				FREE_FROM_HOGTIE(&uVar2);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				FREE_FROM_HOGTIE(GET_ATTACHED_HOGTIE_VICTIM(&uVar0));
			}
		}
	}
	return;
}

int Function_158() //Position: 0x963F / 38463
{
	if (!iLocal_353)
	{
		Function_164();
		Function_159(StackVal, Local_350, &bLocal_348);
		DESTROY_OBJECT(&uLocal_489);
		iLocal_353 = 1;
	}
	return 1;
}

void Function_159(vector3 vParam0) //Position: 0x9667 / 38503
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	vVar3 = vParam0;
	Function_161(0, 0x40400000);
	if (!Function_37(StackVal, vParam0))
	{
		iVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		iVar1 = &Global_21369 + 72;
		iVar2 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_VOLUME_VALID(&iParam2))
			{
				if (IS_ACTOR_IN_VOLUME(&iVar1, &iParam2))
				{
					TELEPORT_ACTOR(&iVar1, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 1,5f);
					vVar3.f_8 = (vParam0.z + 1,5f);
				}
			}
			else if (Function_160(&iVar1, &Global_54076) > 4.0f)
			{
				TELEPORT_ACTOR(&iVar1, &vVar3, 1, 1, 1);
				vVar3 = (vParam0.x + 1,5f);
				vVar3.f_8 = (vParam0.z + 1,5f);
			}
			TASK_CLEAR(&iVar1);
			TASK_STAND_STILL(&iVar1, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&iVar1, true);
		}
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (&iVar0 != &iVar1)
			{
				if (IS_VOLUME_VALID(&iParam2))
				{
					if (IS_ACTOR_IN_VOLUME(&iVar0, &iParam2))
					{
						TELEPORT_ACTOR(&iVar0, &vVar3, 1, 1, 1);
						vVar3 = (vParam0.x + 2,5f);
						vVar3.f_8 = (vParam0.z + 2,5f);
					}
				}
				else if (Function_160(&iVar0, &Global_54076) > 4.0f)
				{
					TELEPORT_ACTOR(&iVar0, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 2,5f);
					vVar3.f_8 = (vParam0.z + 2,5f);
				}
				TASK_CLEAR(&iVar0);
				TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iVar0, true);
			}
		}
		if (IS_ACTOR_VALID(&iVar2))
		{
			if (IS_VOLUME_VALID(&iParam2))
			{
				if (IS_ACTOR_IN_VOLUME(&iVar2, &iParam2))
				{
					TELEPORT_ACTOR(&iVar2, &vVar3, 1, 1, 1);
				}
			}
			else if (Function_160(&iVar2, &Global_54076) > 8.0f)
			{
				TELEPORT_ACTOR(&iVar2, &vVar3, 1, 1, 1);
			}
		}
	}
	return;
}

float Function_160(int iParam0, int iParam1) //Position: 0x9810 / 38928
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_161(float fParam0, float fParam1) //Position: 0x9905 / 39173
{
	(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_163();
	Function_162();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_162() //Position: 0x9A16 / 39446
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_163() //Position: 0x9A4A / 39498
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_164() //Position: 0x9B50 / 39760
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_166(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0), Var1, Var3, Var5, Var7);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_165(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_165(char* cParam0) //Position: 0x9BE6 / 39910
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

void Function_166(char* cParam0) //Position: 0x9D0F / 40207
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_PROP: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam3.x, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam3.y, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam3.z, 3, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.x, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.y, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.z, 3, 2), 64);
	stradd(&cVar0, ">>", 64);
}

int Function_167() //Position: 0x9E7B / 40571
{
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	bLocal_348 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_355, "tempcutscenevol", 2, *(&Global_99725[2043] + 184), Vector(0.0f, 0.0f, 0.0f), Vector(40.0f, 20.0f, 40.0f));
	SET_DRAW_OBJECT(&uLocal_495, 0);
	Function_157();
	Function_170(0, 0, 1, 1, 0, 1, 1, &bLocal_348, 1, 1, 1, 1, 0x3f800000, 0);
	Global_119938 = 0;
	Function_168(StackVal, &uLocal_355, *(&Global_99725[2043] + 196), &bLocal_348, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

void Function_168(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, bool bParam9) //Position: 0x9F2B / 40747
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &fParam5;
	Var2.f_4 = &fParam6;
	Var2.f_8 = &fParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_169(&uVar1, &uParam0);
			}
		}
		if (!Function_37(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_169(var uParam0, float fParam1) //Position: 0xA1CB / 41419
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_170(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xA24D / 41549
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_153();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_13();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, false);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, true);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_145(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_17(), 2, Function_145(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_154(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_109())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_172()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_172()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_86(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_171(0x4000000);
	}
	if (Function_86(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_171(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_171(int iParam0) //Position: 0xA4FF / 42239
{
	int iVar0;
	
	if (Function_45(iParam0, 1) && Function_45(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_172() //Position: 0xA533 / 42291
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_173() //Position: 0xA5C1 / 42433
{
	switch (iLocal_536)
	{
		case 0x00000000:
			if (!IS_PLAYER_WEAPON_ZOOMED(&Global_54076) || !IS_PLAYER_DEADEYE(0))
			{
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				SET_PLAYER_DEADEYE_MODE(0, 1);
			}
			else
			{
				fLocal_539 = GET_CURRENT_GAME_TIME();
				iLocal_536++;
			}
			break;
		
		case 0x00000001:
			if ((GET_CURRENT_GAME_TIME() - fLocal_539) < 1.0f)
			{
				if (!IS_PLAYER_DEADEYE(0) || IS_ACTOR_SHOOTING(&Global_54076))
				{
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
					bLocal_530 = false;
				}
			}
			break;
	}
	return;
}

void Function_174(int iParam0) //Position: 0xA632 / 42546
{
	Function_134(&iParam0, 0.0f);
	return;
}

void Function_175(int iParam0, int iParam1) //Position: 0xA63F / 42559
{
	if (Function_89(iParam0))
	{
		LOG_ERROR("SET_QUEST_SCRIPT_ACTIVATED: invalid quest!!");
		return;
	}
	Global_116927[iParam06].f_16 = &iParam1;
	return;
}

void Function_176(var uParam0, int iParam1, bool bParam2) //Position: 0xA68C / 42636
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_177(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_177(var uParam0, int iParam1, bool bParam2) //Position: 0xA749 / 42825
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&uParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&uParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_17(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_39();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_17(), Var2, Function_39());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_17(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_39();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_17(), Var0, Function_39());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&uParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(&uParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&uParam0, "WakeUpFast", true);
	}
	return;
}

void Function_178(int iParam0, bool bParam1) //Position: 0xA915 / 43285
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "mp_rcm_state", bParam1);
	return;
}

void Function_179(bool bParam0, bool bParam1) //Position: 0xA936 / 43318
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

void Function_180(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xA95B / 43355
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_74(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xA9F0 / 43504
{
	var uVar0;
	var uVar6;
	bool bVar7;
	
	if (!DECOR_CHECK_EXIST(&Global_54076, "RCM_Cutscene_HideActors"))
	{
		Function_195();
		Function_194();
		DECOR_SET_BOOL(&Global_54076, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar7 = Function_182(&iParam0, &iParam1, &uVar0, &uVar6, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7, 0, &iParam8, &iParam9, &iParam10, &iParam11, &iParam12, 1);
	if (bVar7)
	{
		DECOR_REMOVE(&Global_54076, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_182(var uParam0, int iParam1, struct<41> Param2) //Position: 0xAAA9 / 43689
{
	if (!&bParam15)
	{
		Function_191(&iParam1, &uParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_190(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &uParam11, &uParam12, &uParam13, &uParam14);
				Call_Loc(uParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_174(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_189())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_188(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_174(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_188(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_115(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_115(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&uParam5);
					if (StackVal)
					{
						Function_186(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_188(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_174(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&uParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_185(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_183();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&uParam8);
				if (StackVal)
				{
					Function_151(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&uParam9);
				if (StackVal)
				{
					Call_Loc(&uParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_190(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_183() //Position: 0xB10B / 45323
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_184();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_184() //Position: 0xB150 / 45392
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_185(bool bParam0) //Position: 0xB162 / 45410
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0xB17F / 45439
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_17(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_187(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_187(int iParam0) //Position: 0xB211 / 45585
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_188(bool bParam0) //Position: 0xB242 / 45634
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_189() //Position: 0xB305 / 45829
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_190(struct<37> Param0) //Position: 0xB342 / 45890
{
	return Param0.f_36;
}

void Function_191(var uParam0, int iParam1) //Position: 0xB34D / 45901
{
	Function_192(&uParam0, &iParam1, 0);
	return;
}

void Function_192(var uParam0, bool bParam1, bool bParam2) //Position: 0xB35D / 45917
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_193(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_154(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_193(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_154(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_193(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xB4D5 / 46293
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

int Function_194() //Position: 0xB4FF / 46335
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (IS_LAYOUTREF_VALID(&Global_99717))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar0, &Global_99717);
		}
	}
	if (IS_ACTOR_VALID(&uVar1))
	{
		if (IS_LAYOUTREF_VALID(&Global_99717))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar1, &Global_99717);
		}
	}
	return 1;
}

void Function_195() //Position: 0xB55A / 46426
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	var uVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	
	uVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_17(), &Global_99717, 15, 0);
	Var3 = Global_54078;
	uVar5 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_17(), 2, Var3, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	LOCATE_ACTORS_IN_VOLUME(&uVar5, &uVar2, 0, 1);
	bVar6 = false;
	while (bVar6 < (GET_OBJECTSET_SIZE(&uVar2) - 1))
	{
		uVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uVar2));
		if (IS_ACTOR_VALID(&uVar0))
		{
			bVar7 = false;
			while (bVar7 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar7);
				if (GET_ACTOR_ENUM(&uVar1) == GET_ACTOR_ENUM(&uVar0))
				{
					if (IS_ACTOR_DRAFTED(&uVar0))
					{
						uVar8 = GET_ACTOR_DRAFTED_TO(&uVar0);
						if (IS_ACTOR_VALID(&uVar8))
						{
							if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&uVar8))), "cutscene layout"))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar0), &uVar0);
							}
						}
					}
					else if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&uVar0))), "cutscene layout"))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar0), &uVar0);
					}
				}
				bVar7++;
			}
		}
		bVar6++;
	}
	DISBAND_OBJECTSET(&uVar2);
	DESTROY_OBJECTSET(&uVar2);
	DESTROY_VOLUME(&uVar5);
	return;
}

int Function_196() //Position: 0xB699 / 46745
{
	HUD_FADE_IN(1.0f, 1065353216);
	return 1;
}

int Function_197() //Position: 0xB6A9 / 46761
{
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_150(1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	DESTROY_VOLUME(&bLocal_348);
	return 1;
}

int Function_198() //Position: 0xB6D2 / 46802
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2825,849f, 50,111f, 2415,196f), 99,717f, 1, 1, true);
	ACTOR_END_FORCE_HOLSTER(&Global_54076);
	_ADD_AMMO_OF_TYPE(&Global_54076, 7, 6.0f, 1, 0);
	ACTOR_ADD_WEAPON_AMMO(&Global_54076, 4, 6.0f);
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "ptl_base", 1);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(&Global_54076, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 4, 0);
	RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
	Function_157();
	uLocal_489 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_355, "survivorIdle", "$/content/scripting/gringo/simpleGringo/stand_knock_on_door", Vector(-2830,513f, 50,332f, 2417,278f), Vector(0.0f, 281,272f, 0.0f));
	SNAP_ACTOR_TO_GRINGO(&uLocal_493, &uLocal_489, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&uLocal_493, GET_GRINGO_FROM_OBJECT(&uLocal_489), "UseCase1", 4294967295, 1);
	return 1;
}

int Function_199() //Position: 0xB813 / 47123
{
	if (!iLocal_353)
	{
		Function_164();
		Function_159(StackVal, Local_350, &bLocal_348);
		DESTROY_OBJECT(&uLocal_489);
		iLocal_353 = 1;
	}
	return 1;
}

int Function_200() //Position: 0xB83B / 47163
{
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(&Global_54076, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 4, 0);
	return 1;
}

int Function_201() //Position: 0xB875 / 47221
{
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_09", &(uLocal_433[0]));
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_07", &(uLocal_433[1]));
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_02", &(uLocal_433[2]));
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_05", &(uLocal_433[3]));
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_02", &(uLocal_433[4]));
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_03", &(uLocal_433[5]));
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_02", &(uLocal_433[6]));
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	if (GET_PLAYER_DEADEYE_POINTS(0) > 50.0f)
	{
		ADD_PLAYER_DEADEYE_POINTS(0, 50.0f, 1);
	}
	bLocal_348 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_355, "tempcutscenevol", 2, (&Global_99725[2043] + 184), Vector(0.0f, 0.0f, 0.0f), Vector(40.0f, 20.0f, 40.0f));
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	Function_170(0, 0, 1, 1, 0, 1, 1, &bLocal_348, 1, 1, 1, 1, 0x3f800000, 0);
	Global_119938 = 0;
	Function_168(StackVal, &uLocal_355, *(&Global_99725[2043] + 196), &bLocal_348, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

bool Function_202() //Position: 0xB9FE / 47614
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (IS_ACTOR_VALID(&(uLocal_433[iVar0])))
		{
			if (GET_LAST_ATTACKER(&(uLocal_433[iVar0])) == &Global_54076)
			{
				return 1;
			}
		}
		return 1;
		iVar0++;
	}
	return 0;
}

int Function_203(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4) //Position: 0xBA3E / 47678
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28))
		{
			if (UNK_0x214AFB8C(&iParam0 + 136))
			{
				bVar0 = VDIST(Global_54078, *(&iParam0 + 184));
				if (&Global_99717 + 16 == fParam1)
				{
					uVar1 = Global_99717.f_28;
					uVar2 = Function_205(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &uVar1, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
					Global_99717.f_28 = uVar1;
					Global_99717.f_24 = bVar0;
					if (bVar0 < &fParam3)
					{
						*(&Global_99717 + 16) = 4294967295;
						Global_99717.f_24 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > &fParam2)
				{
					if (&Global_99717 + 16 != 4294967295 || (&Global_99717 + 16 == fParam1 && bVar0 > Global_99717.f_24))
					{
						iVar3 = Global_99717.f_28;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(&Global_54076) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_204(&iParam0));
							}
						}
						if (IS_ACTORSET_VALID(&iParam4))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(&iParam4))
							{
								uVar5 = GET_ACTOR_FROM_ACTORSET(&iParam4, bVar4);
								if (IS_ACTOR_VALID(&uVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar5), &uVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_205(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &iVar3, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
						Global_99717.f_28 = iVar3;
						*(&Global_99717 + 16) = fParam1;
						Global_99717.f_24 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

int Function_204(struct<257> Param0) //Position: 0xBBC9 / 48073
{
	if (Param0.f_256 != 4294967295)
	{
		if (Global_116927[Param0.f_2566].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_204(&(Global_99725[Param0.f_25643]));
	}
	return 0;
}

int Function_205(var uParam0, int iParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0xBC05 / 48133
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_207(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_208()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && iParam1 == 0)
		{
			if (iParam1 != 5)
			{
				iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_37(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_206();
					CUTSCENE_MANAGER_RESUME_LOADING();
					iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				iParam1 = 0;
				break;
		}
	}
	else if ((!Function_207(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_208()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		iParam1 = 0;
	}
	else if (!Function_207(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_206() //Position: 0xBE6D / 48749
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_165(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

bool Function_207(var uParam0, struct<2> Param1, float fParam3) //Position: 0xBEC1 / 48833
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_69(&uParam0);
		if (VDIST(Function_69(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_208() //Position: 0xBF4D / 48973
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

bool Function_209(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xBF5C / 48988
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &uParam1, &uParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_211(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_130(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_130(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_210(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_210(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_210(vector3 vParam0) //Position: 0xC1A0 / 49568
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_37(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_37(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_211(var uParam0, bool bParam1) //Position: 0xC216 / 49686
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_130(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

bool Function_212(int iParam0, bool bParam1, bool bParam2) //Position: 0xC280 / 49792
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_215(&iParam0))
	{
		return 1;
	}
	if (Function_214(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_213())
	{
		return 1;
	}
	return 0;
}

bool Function_213() //Position: 0xC344 / 49988
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_214(int iParam0) //Position: 0xC35B / 50011
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_215(bool bParam0) //Position: 0xC367 / 50023
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

void Function_216() //Position: 0xC376 / 50038
{
	int iVar0;
	
	*(&Global_99725[2043] + 136) = &uLocal_541;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (IS_ACTOR_VALID(&(uLocal_433[iVar0])))
		{
			Function_223(&(uLocal_433[iVar0]));
		}
		iVar0++;
	}
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	ABORT_SCRIPTED_CONVERSATION(1);
	if (IS_LAYOUTREF_VALID(&uLocal_355))
	{
		RELEASE_LAYOUT_REF(&uLocal_355);
	}
	if (IS_ACTOR_VALID(&uLocal_493))
	{
		Function_223(&uLocal_493);
		CLEAR_ACTOR_PROOF(&uLocal_493, 16);
		CLEAR_ACTOR_PROOF(&uLocal_493, 8);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uLocal_493, 1.0f);
		SET_ACTOR_FACTION(&uLocal_493, 3);
	}
	if (IS_OBJECT_VALID(&uLocal_543))
	{
		DESTROY_OBJECT(&uLocal_543);
	}
	if (IS_OBJECT_VALID(&uLocal_545))
	{
		DESTROY_OBJECT(&uLocal_545);
	}
	if ((!Function_88(20) && !Function_114(20)) && !Function_114(21))
	{
		Function_222(20);
		if (IS_OBJECT_VALID(&bLocal_491))
		{
			DESTROY_OBJECT(&bLocal_491);
		}
	}
	if (bLocal_530)
	{
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
	}
	Global_116927[206].f_44 = 0.0f;
	if (!Function_114(21))
	{
		Function_222(21);
		Function_175(21, 0);
	}
	else if (IS_ACTOR_VALID(&uLocal_493))
	{
		DESTROY_ACTOR(&uLocal_493);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "debugRCMMissing2"))
	{
		DECOR_REMOVE(&Global_54076, "debugRCMMissing2");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "Missing3_ShutUp"))
	{
		DECOR_REMOVE(&Global_54076, "Missing3_ShutUp");
	}
	if (IS_BLIP_VALID(&Global_99725[2143] + 272))
	{
		REMOVE_BLIP(&Global_99725[2143] + 272);
	}
	if (IS_BLIP_VALID(&Global_99725[2143] + 280))
	{
		REMOVE_BLIP(&Global_99725[2143] + 280);
	}
	Function_101(&Global_99725[2043] + 228, 2048);
	Function_218(&uLocal_359);
	Function_217(0, 0, 0);
	return;
}

int Function_217(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC55E / 50526
{
	if (&bParam2)
	{
		if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			return 0;
		}
	}
	if (&bParam0)
	{
		CAMERA_RESET(0);
	}
	if (&bParam1)
	{
		Function_185(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return 1;
}

void Function_218(int iParam0) //Position: 0xC590 / 50576
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_219(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_219(struct<2>[] Param0, int iParam1) //Position: 0xC5B8 / 50616
{
	if (Function_221(&(Param0[iParam12]), 4))
	{
		if (Function_221(&(Param0[iParam12]), 1))
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
			Function_220(&(Param0[iParam12]), 1);
			Function_220(&(Param0[iParam12]), 2);
			Function_220(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_220(struct<13> Param0) //Position: 0xC703 / 50947
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_221(struct<13> Param0) //Position: 0xC720 / 50976
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_222(int iParam0) //Position: 0xC73E / 51006
{
	char* cVar0[32];
	
	Global_116927[iParam06] = 7;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[iParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_43787)
	{
		case 0x00000000:
			strcpy(&cVar0, "FTR", 32);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "MEX", 32);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NOR", 32);
			break;
		
		default:
			PRINTSTRING("Unknown territory");
			PRINTINT(Global_43787);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

void Function_223(var uParam0) //Position: 0xC8A7 / 51367
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xC8DA / 51418
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_225() //Position: 0xC8EB / 51435
{
	bool bVar0;
	char* cVar1[24];
	
	bVar0 = false;
	while (bVar0 <= 7)
	{
		strcpy(&cVar1, "zombie", 24);
		stradd(&cVar1, INT_TO_STRING(bVar0), 24);
		Function_233(iLocal_449[bVar0]);
		Function_232(iLocal_449[bVar0]);
		uLocal_433[bVar0] = CREATE_ACTOR_IN_LAYOUT(&uLocal_355, &cVar1, iLocal_449[bVar0], Function_233(iLocal_449[bVar0]), Function_232(iLocal_449[bVar0]));
		if (!Function_236(&(uLocal_433[bVar0])))
		{
			Function_226(&(uLocal_433[bVar0]), 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
		}
		MEMORY_CONSIDER_AS(&(uLocal_433[bVar0]), &Global_54076, 3);
		stradd(&cVar1, "gringo", 24);
		Function_233(iLocal_449[bVar0]);
		Function_232(iLocal_449[bVar0]);
		uLocal_473[bVar0] = CREATE_GRINGO_IN_LAYOUT(&uLocal_355, &cVar1, "/content/DLC/ZombiePack/Gringos/z_dlc_z_beat_door", Function_233(iLocal_449[bVar0]), Function_232(iLocal_449[bVar0]));
		SNAP_ACTOR_TO_GRINGO(&(uLocal_433[bVar0]), &(uLocal_473[bVar0]), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&(uLocal_433[bVar0]), GET_GRINGO_FROM_OBJECT(&(uLocal_473[bVar0])), "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(&(uLocal_433[bVar0]), true);
		bVar0++;
	}
	return;
}

void Function_226(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xCA2F / 51759
{
	var uVar0;
	
	if (Function_231(&uParam0) && !Function_230(&uParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&uParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(false, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(&uParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&uParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	}
	Function_228(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", true);
	Function_227(&uParam0);
	SET_ACTOR_ALLOW_DISARM(&uParam0, false);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	SET_CRIPPLE_FLAG(&uParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&uParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&uParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&uParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&uParam0, "FastZombie", true);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&uParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&uParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2020.0f, 1);
	}
	Function_176(&uParam0, &uParam4, &uParam5);
}

void Function_227(int iParam0) //Position: 0xCCCC / 52428
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

void Function_228(int iParam0) //Position: 0xCD03 / 52483
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_229(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_229(var uParam0, bool bParam1) //Position: 0xD0C1 / 53441
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_230(var uParam0, int iParam1) //Position: 0xD0E4 / 53476
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_231(int iParam0) //Position: 0xD129 / 53545
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_232(int iParam0) //Position: 0xD14A / 53578
{
	switch (iParam0)
	{
		case 0x000004BC:
			return StackVal, Vector(0.0f, 104,762f, 0.0f);
			break;
		
		case 0x0000006F:
			return StackVal, Vector(0.0f, 104,762f, 0.0f);
			break;
		
		case 0x00000037:
			return StackVal, Vector(0.0f, 104,762f, 0.0f);
			break;
		
		case 0x00000035:
			return StackVal, Vector(0.0f, 104,762f, 0.0f);
			break;
		
		case 0x00000059:
			return StackVal, Vector(0.0f, 394,16f, 0.0f);
			break;
		
		case 0x00000099:
			return StackVal, Vector(0.0f, 382,82f, 0.0f);
			break;
		
		case 0x0000004F:
			return StackVal, Vector(0.0f, 104,762f, 0.0f);
			break;
	}
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_233(int iParam0) //Position: 0xD1D9 / 53721
{
	switch (iParam0)
	{
		case 0x000004BC:
			return StackVal, Vector(-2828,6f, 50,35f, 2416,9f);
			break;
		
		case 0x0000006F:
			return StackVal, Vector(-2829.0f, 50,34f, 2415,1f);
			break;
		
		case 0x00000037:
			return StackVal, Vector(-2829,5f, 50,34f, 2414,3f);
			break;
		
		case 0x00000035:
			return StackVal, Vector(-2829.0f, 50,35f, 2415,85f);
			break;
		
		case 0x00000059:
			return StackVal, Vector(-2830,56f, 50,13f, 2419,8f);
			break;
		
		case 0x00000099:
			return StackVal, Vector(-2829,52f, 50,12f, 2419,8f);
			break;
		
		case 0x0000004F:
			return StackVal, Vector(-2828,5f, 50,36f, 2417,72f);
			break;
	}
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_234(var uParam0, int iParam1) //Position: 0xD2A0 / 53920
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

var Function_235(int iParam0, var uParam1, char* cParam2) //Position: 0xD2FB / 54011
{
	var uVar0;
	char* cVar1[8];
	char* cVar3[32];
	var uVar11;
	
	if (!Function_71(iParam0))
	{
		return "";
	}
	uVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), &uParam1);
	if (!IS_WORLD_SECTOR_LOADED(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
		return "";
	}
	strcpy(&cVar1, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar1, "0", 8);
	}
	straddi(&cVar1, iParam3, 8);
	memcpy(&cVar3, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar3, "_", 32);
	stradd(&cVar3, &cParam2, 32);
	stradd(&cVar3, "*", 32);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uVar0, &cVar3, &cVar1);
	DESTROY_OBJECT(&uVar0);
	if (!IS_OBJECT_VALID(&uVar11))
	{
		PRINTSTRING("Door not found:");
		PRINTSTRING(&cVar3);
		PRINTSTRING(" door");
		PRINTSTRING(&cVar1);
		PRINTNL();
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar11);
}

bool Function_236(int iParam0) //Position: 0xD3DB / 54235
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_230(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_237(struct<2>[] Param0) //Position: 0xD42A / 54314
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_241();
	iVar1 = 0;
	if (!Function_221(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_240(&(Param0[iVar02]), 8);
		}
		else if (Function_239())
		{
			iVar1 = 1;
			Function_240(&(Param0[iVar02]), 8);
		}
		Function_240(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_221(&(Param0[iVar02]), 4))
		{
			if (!Function_221(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_221(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_221(&(Param0[02]), 8) || iVar1));
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
				Function_240(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_221(&(Param0[iVar02]), 4))
		{
			if (!Function_221(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_240(&(Param0[iVar02]), 2);
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
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_240(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_240(&(Param0[iVar02]), 2);
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
	Function_238();
	return 1;
}

void Function_238() //Position: 0xD7EC / 55276
{
	if (!Function_86(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_239() //Position: 0xD82C / 55340
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

void Function_240(struct<13> Param0) //Position: 0xD85A / 55386
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_241() //Position: 0xD86D / 55405
{
	if (!Function_86(128))
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

void Function_242(int iParam0) //Position: 0xD8AF / 55471
{
	if (!Function_117(&iParam0))
	{
		Function_134(&iParam0, 0.0f);
	}
	return;
}

void Function_243() //Position: 0xD8C6 / 55494
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		switch (iVar0)
		{
			case 0x00000000:
				iLocal_449[iVar0] = 1212;
				break;
			
			case 0x00000001:
				iLocal_449[iVar0] = 111;
				break;
			
			case 0x00000002:
				iLocal_449[iVar0] = 55;
				break;
			
			case 0x00000003:
				iLocal_449[iVar0] = 53;
				break;
			
			case 0x00000004:
				iLocal_449[iVar0] = 89;
				break;
			
			case 0x00000005:
				iLocal_449[iVar0] = 153;
				break;
			
			case 0x00000006:
				iLocal_449[iVar0] = 79;
				break;
		}
		iVar0++;
	}
	return;
}

var Function_244(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xD964 / 55652
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_245(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_240(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_245(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xD9A2 / 55714
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_221(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_240(&(Param0[iVar02]), 4);
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

var Function_246(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xDA71 / 55921
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_221(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_240(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_240(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

