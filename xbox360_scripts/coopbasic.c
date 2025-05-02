//Decompiled with MagicRDR v1.0
//Function Count : 125
//Statics Count : 534
//Natives Count : 167
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	float fLocal_10 = 0.0f;
	struct<105> Local_11 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_169 = 27;
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
	var uLocal_259 = 27;
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
	var uLocal_349 = 27;
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
	var uLocal_439 = 27;
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
	var uLocal_507 = 1;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 5;
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
	int iLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	fLocal_10 = 1.0f;
	iLocal_46 = 255;
	iLocal_47 = 125;
	iLocal_48 = 0;
	iLocal_49 = 0;
	iLocal_50 = 255;
	iLocal_51 = 170;
	iLocal_52 = 75;
	iLocal_53 = 0;
	if (Function_117())
	{
		Function_86(3225419776, 0, 0);
		Function_84(1);
		Function_82(2, 5.0f, 350);
		Function_82(1, 10.0f, 200);
		Function_82(0, 15.0f, 50);
		Function_80(2, 10000, 350);
		Function_80(1, 5000, 200);
		Function_80(0, 1000, 50);
		while (!IS_EXITFLAG_SET())
		{
			if (Function_79(1, 1))
			{
				Function_58(9265);
			}
			else
			{
				Function_57();
				Function_55();
				Function_16(5330, 5073, 3040);
			}
			WAIT(false);
		}
		Function_1();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xAF / 175
{
	Function_12(&Local_54 + 1828);
	Function_12(&Local_54 + 1812);
	if (IS_LAYOUTREF_VALID(Local_54.f_1808))
	{
		DESTROY_LAYOUT(Local_54.f_1808);
	}
	Function_9();
	Function_2();
	return;
}

void Function_2() //Position: 0xDE / 222
{
	Function_3();
	return;
}

void Function_3() //Position: 0xE7 / 231
{
	if (Function_7(4194304))
	{
		Function_4(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_7(8388608))
	{
		Function_4(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_4(int iParam0, bool bParam1, int iParam2) //Position: 0x1F0 / 496
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_6(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_5(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x218 / 536
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x22B / 555
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_7(bool bParam0) //Position: 0x23A / 570
{
	return Function_8(Global_76905.f_132, bParam0);
}

bool Function_8(var uParam0, bool bParam1) //Position: 0x24B / 587
{
	return (uParam0 && bParam1) == 0;
}

void Function_9() //Position: 0x258 / 600
{
	bool bVar0;
	
	bVar0 = Function_10(0);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_10(bool bParam0) //Position: 0x271 / 625
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_11(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && bParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_11(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_11() //Position: 0x2BE / 702
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_12(int iParam0) //Position: 0x2ED / 749
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_13(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x313 / 787
{
	if (Function_15(uParam0[iParam13], 4))
	{
		if (Function_15(uParam0[iParam13], 1))
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
			Function_14(uParam0[iParam13], 1);
			Function_14(uParam0[iParam13], 2);
			Function_14(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x441 / 1089
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(var uParam0, int iParam1) //Position: 0x45B / 1115
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16(int iParam0, int iParam1, int iParam2) //Position: 0x478 / 1144
{
	if (Function_7(0x4000000))
	{
		Function_25();
		Function_4(0x4000000, 0, 1);
	}
	if (Function_7(0x10000000))
	{
		Function_25();
		Function_4(0x10000000, 0, 1);
	}
	if (Function_7(2) != Function_7(0x2000000))
	{
		Function_25();
		Function_4(0x2000000, Function_7(2), 1);
	}
	if (Function_24())
	{
		Function_23(!Function_7(16));
	}
	if (Function_7(16))
	{
		Function_17(&iParam0, &iParam1, &iParam2);
		if (Function_7(8192))
		{
			if (!Function_7(4194304))
			{
				Function_4(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_7(8388608))
			{
				Function_4(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_3();
		}
		Function_4(16384, 1, 1);
	}
	else if (!Function_7(32))
	{
		Function_3();
	}
	Function_4(32768, 0, 1);
	return;
}

void Function_17(var uParam0, var uParam1, int iParam2) //Position: 0x611 / 1553
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_4(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_7(0x40000000);
	bVar3 = !Function_7(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_22(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_20(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_18(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_7(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_18(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_18(bool bParam0, int iParam1, int iParam2) //Position: 0x789 / 1929
{
	var uVar0;
	
	return Function_19(bParam0, iParam1, &uVar0, iParam2);
}

int Function_19(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x79A / 1946
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_20(bool bParam0, int iParam1, bool bParam2) //Position: 0x7FF / 2047
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_79(iParam1, bParam2);
	}
	if (!Function_22(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_21(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_21(int iParam0) //Position: 0x880 / 2176
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
	}
	return "UNKNOWN";
}

bool Function_22(bool bParam0) //Position: 0xB09 / 2825
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

void Function_23(bool bParam0) //Position: 0xBAA / 2986
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_4(16384, 0, 1);
	return;
}

bool Function_24() //Position: 0xBC4 / 3012
{
	return Function_7(32768);
}

void Function_25() //Position: 0xBD1 / 3025
{
	Function_4(32768, 1, 0);
	return;
}

int Function_26() //Position: 0xBE0 / 3040
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 4294966296;
	if (Function_24() && Function_7(4))
	{
		Function_30(&iVar0, &iVar1);
		Function_27(iVar0, iVar1);
	}
	return 1;
}

void Function_27(int iParam0, int iParam1) //Position: 0xC0A / 3082
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4[67];
	
	NET_PLAYER_LIST_SET_HIGHLIGHT((iParam0 - 1));
	bVar0 = true;
	if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE() && iParam0 > 13)
	{
		bVar2 = NET_GET_LOCAL_GAMER_RANK();
		bVar3 = NET_GET_NEAREST_FRIEND_RANK();
		if (bVar2 == 4294967295 && bVar3 == 4294967295)
		{
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 <= ((16 - iParam0) - 4))
			{
				NET_PLAYER_LIST_ADD_ITEM("", Function_29(&iParam1));
				iVar1++;
			}
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_Leaderboard"), Function_29(&iParam1));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("nCOOP_Rank"));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("COOP_SCORE"));
			if (bVar3 <= bVar2)
			{
				UNK_0xD7572C68(&uVar4);
				Function_28(NET_GET_NEAREST_FRIEND_NAME(), Function_29(&iParam1), bVar3, uVar4[13]);
				NET_GET_LOCAL_GAMER_SCORE_INFO(&uVar4);
				Function_28(GET_SLOT_NAME(GET_LOCAL_SLOT()), Function_29(&iParam1), bVar2, uVar4[13]);
			}
			else
			{
				NET_GET_LOCAL_GAMER_SCORE_INFO(&uVar4);
				Function_28(GET_SLOT_NAME(GET_LOCAL_SLOT()), Function_29(&iParam1), bVar2, uVar4[13]);
				UNK_0xD7572C68(&uVar4);
				Function_28(NET_GET_NEAREST_FRIEND_NAME(), Function_29(&iParam1), bVar3, uVar4[13]);
			}
		}
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 <= ((16 - iParam0) - 3))
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_29(&iParam1));
			iVar1++;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_Leaderboard"), Function_29(&iParam1));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_NoFriends"), Function_29(&iParam1));
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
	}
	return;
}

void Function_28(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xD93 / 3475
{
	NET_PLAYER_LIST_ADD_ITEM(cParam0, iParam1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bParam2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(1, bParam3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
}

int Function_29(int iParam0) //Position: 0xDB6 / 3510
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0 + 1;
}

void Function_30(var uParam0, int iParam1) //Position: 0xDC9 / 3529
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (Function_22(bVar0))
		{
			bVar2 = (bVar2 + Function_42(29, bVar0));
			bVar3 = (bVar3 + Function_42(39, bVar0));
			bVar5 = (bVar5 + Function_42(12, bVar0));
			bVar4 = (bVar4 + Function_42(28, bVar0));
			bVar1 = (bVar1 + Function_39(bVar0));
		}
		bVar0++;
	}
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("coop_total"), Function_29(iParam1));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(1, bVar2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(2, bVar3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(3, bVar5);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(4, bVar4);
	*uParam0++;
	if (iLocal_531 <= 2)
	{
		return;
	}
	NET_PLAYER_LIST_ADD_ITEM("", Function_29(iParam1));
	*uParam0++;
	Function_38(iParam1, "coop_time_spent", 0, 0);
	*uParam0++;
	if (iLocal_531 <= 3)
	{
		return;
	}
	if (Function_37(&Global_78578 + 96))
	{
		uVar6 = Function_33(&Global_78578 + 96);
		Function_31(4, uVar6);
	}
	else
	{
		Function_31(4, 0.0f);
	}
	if (iLocal_531 <= 4)
	{
		return;
	}
	return;
}

void Function_31(bool bParam0, int iParam1) //Position: 0xED9 / 3801
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_32(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), 0);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), 0);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), 0);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), 0);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), 0);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_32(var uParam0) //Position: 0x1106 / 4358
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

var Function_33(int iParam0) //Position: 0x1177 / 4471
{
	if (Function_37(iParam0))
	{
		if (Function_36(iParam0))
		{
			return StackVal;
		}
		Function_34();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_34() //Position: 0x1248 / 4680
{
	if (!Function_35())
	{
	}
	return;
}

bool Function_35() //Position: 0x1255 / 4693
{
	return NET_IS_IN_SESSION();
}

bool Function_36(int iParam0) //Position: 0x125E / 4702
{
	return Function_8(*iParam0, 2);
}

bool Function_37(int iParam0) //Position: 0x126B / 4715
{
	return Function_8(*iParam0, 1);
}

void Function_38(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1278 / 4728
{
	if (iParam2 != 0)
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING_BY_HASH(iParam2), Function_29(iParam0));
	}
	else
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(bParam1), Function_29(iParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
	if (bParam3)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
}

int Function_39(int iParam0) //Position: 0x12C7 / 4807
{
	return Function_40(0, iParam0);
}

int Function_40(int iParam0, bool bParam1) //Position: 0x12D3 / 4819
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_41(iParam0);
	}
	if (!Function_22(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_41(int iParam0) //Position: 0x133A / 4922
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_42(int iParam0, bool bParam1) //Position: 0x134A / 4938
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_43(iParam0);
	}
	if (!Function_22(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_43(int iParam0) //Position: 0x13B8 / 5048
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_44(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x13D1 / 5073
{
	bool bVar0;
	int iVar1;
	
	Function_47(bParam1, uParam2, uParam3);
	bVar0 = Function_39(bParam0);
	if (!bParam1)
	{
		Function_18(bParam0, bVar0, 0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(5);
	iVar1 = 0;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, bVar0);
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_42(29, bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_42(39, bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_46(bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_42(28, bParam0));
		iVar1++;
		Function_45(iVar1, bParam0);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, bVar0);
	}
	return 0;
}

void Function_45(bool bParam0, bool bParam1) //Position: 0x1471 / 5233
{
	if (Function_7(4))
	{
		if (Function_20(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

int Function_46(bool bParam0) //Position: 0x14A4 / 5284
{
	return Function_42(12, bParam0);
}

void Function_47(bool bParam0, int iParam1, char* cParam2) //Position: 0x14B1 / 5297
{
	if (bParam0)
	{
		if (Function_24())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_48() //Position: 0x14D2 / 5330
{
	if (!Function_50(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_TOP_TEAM(5);
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_revives");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(6, "mp_plist_defends");
	Function_49();
	return 1;
}

void Function_49() //Position: 0x1570 / 5488
{
	if (Function_7(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_4(8192, 1, 1);
	}
	else if (Function_7(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_4(8192, 1, 1);
	}
	else
	{
		Function_4(8192, 0, 1);
	}
	return;
}

bool Function_50(bool bParam0) //Position: 0x15AD / 5549
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_24() || Function_54(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_24())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_51(Function_24());
	return 1;
}

void Function_51(bool bParam0) //Position: 0x162E / 5678
{
	if (bParam0 || Function_7(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_7(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_7(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_7(1048576) || Function_7(4)) || Function_79(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_4(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_52(int iParam0) //Position: 0x16B7 / 5815
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x16CB / 5835
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_54(bool bParam0, bool bParam1) //Position: 0x1710 / 5904
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_55() //Position: 0x1744 / 5956
{
	if (Function_56(32) && Function_7(16))
	{
		if (iLocal_531 != 12)
		{
			if (!IS_PS3())
			{
				UI_FOCUS("HudGamerList");
			}
		}
		iLocal_531 = 12;
	}
	return;
}

bool Function_56(int iParam0) //Position: 0x177E / 6014
{
	return Function_8(StackVal, iParam0);
}

void Function_57() //Position: 0x1791 / 6033
{
	if (IS_LAYOUTREF_VALID(Local_54.f_1808))
	{
		DESTROY_LAYOUT(Local_54.f_1808);
		Function_12(&Local_54 + 1828);
	}
	UNREGISTER_SCRIPT_WITH_AUDIO();
	return;
}

void Function_58(int iParam0) //Position: 0x17B5 / 6069
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	Function_73(StackVal, StackVal, 9068, *(&Local_54 + 1896), 1, iParam0);
	bVar1 = true;
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = IS_PLAYER_CONTROLLABLE(0);
	}
	iVar2 = (Function_41(8) - 1);
	if (iVar2 >= 3)
	{
		iVar2 = (iVar2 - 4);
	}
	if (Function_71(1) && !Function_71(2))
	{
		Function_70("COOP_new_challenges", 0x41200000, 1, 0, 2, 1, 0);
		Function_68(2);
	}
	GET_CAMERA_CHANNEL_POSITION(&vVar3, 0);
	fVar8 = GET_CURRENT_GAME_TIME();
	fVar9 = GET_LAST_FRAME_TIME();
	iVar0 = 0;
	while (iVar0 <= Local_54.f_1804)
	{
		if (iVar0 == iVar2)
		{
			iVar6 = 15790320;
			iVar7 = 0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(Local_54[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_54[iVar090].f_356);
			}
		}
		else
		{
			iVar6 = 15170838;
			iVar7 = 0;
			if (bVar1)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_54[iVar090].f_356))
				{
					UI_SET_STRING_FORMAT(Function_67(iVar0), UI_GET_STRING("COOP_Select"), UI_GET_STRING(Function_66(Local_54[iVar090].f_324, 0)), 0, 0);
					Local_54[iVar090].f_356 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(Function_67(iVar0), Local_54[iVar090].f_352, 0, 4, 0, false, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Local_54[iVar090].f_356))
				{
					Function_65(&(Local_54[iVar290]));
					Function_65(&Local_54[iVar290] + 48);
					Function_64(8, Local_54[iVar090].f_324 + 1);
					iVar2 = iVar0;
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					PRINT_SMALL_FORMAT(2,5f, "COOP_Selected", Function_66(Local_54[iVar090].f_324, 0), 0, 0, 0, 2, 0, 0);
					RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(Local_54[iVar090].f_328, "HUD_STINGER_TEXT_SELECTION_MASTER"));
					Function_65(&(Local_54[iVar090]));
					Function_65(&Local_54[iVar090] + 48);
					iVar6 = 15790320;
					iVar7 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(Local_54[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_54[iVar090].f_356);
			}
		}
		Function_61(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &(Local_54[iVar090]), vVar3, fVar8, Vector(*(&Local_54[iVar090] + 332), Local_54[iVar090].f_328, fVar9) + Vector(0.0f, 2,6f, 0.0f), 1, 7488, 0, iVar6, iVar0, "", iVar7);
		if (Function_60(Local_54[iVar090].f_352))
		{
			Function_61(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_54[iVar090] + 48, vVar3, fVar8, Vector(*(&Local_54[iVar090] + 332), Local_54[iVar090].f_328, fVar9) + Vector(0.0f, 2,25f, 0.0f), Local_54[iVar090].f_344, 6743, 0, iVar6, iVar0, "", iVar7);
		}
		else
		{
			Function_65(&Local_54[iVar090] + 48);
		}
		iVar0++;
	}
	return;
}

var Function_59(int iParam0, int iParam1) //Position: 0x1A57 / 6743
{
	return GET_WEAPON_DISPLAY_NAME((*&Local_54[iParam190] + 96)[iParam0 + 12]);
}

bool Function_60(bool bParam0) //Position: 0x1A6E / 6766
{
	bool bVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam0))
					{
						return 1;
					}
				}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_61(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1AB3 / 6835
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0,01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2,25f || fVar4 <= 625.0f)
		{
			Function_65(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_10;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && iParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3,14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(cParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0,1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3,14159f * 0,5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3,14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_65(iParam0);
				}
			}
			else if ((iParam0->f_36 - fVar9) <= 0.0f)
			{
				iParam0->f_32 = 0;
				iParam0->f_44 = fParam4;
				if (iParam0->f_36 < fVar9)
				{
					bVar10 = true;
				}
			}
		}
		if (FABS((iParam0->f_36 - fVar9)) > 0,0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0,01f, -0,01f, -0,01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(iParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
		}
	}
}

var Function_62(float fParam0) //Position: 0x1D32 / 7474
{
	return (fParam0 * 57,29578f);
}

int Function_63(var uParam0, int iParam1) //Position: 0x1D40 / 7488
{
	uParam0 = uParam0;
	return Function_66(Local_54[iParam190].f_324, 1);
}

void Function_64(int iParam0, int iParam1) //Position: 0x1D57 / 7511
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_65(int iParam0) //Position: 0x1D80 / 7552
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	return;
}

int Function_66(int iParam0, bool bParam1) //Position: 0x1DA6 / 7590
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0x00000000:
				return "Class_0_desc";
			
			case 0x00000001:
				return "Class_1_desc";
			
			case 0x00000002:
				return "Class_2_desc";
			
			case 0x00000003:
				return "Class_3_desc";
			
			case 0x00000004:
				return "Class_4_desc";
			
			case 0x00000005:
				return "Class_5_desc";
			
			case 0x00000006:
				return "Class_6_desc";
			
			case 0x00000007:
				return "Class_7_desc";
			
			case 0x00000008:
				return "Class_8_desc";
			
			case 0x00000009:
				return "Class_9_desc";
			
			case 0x0000000A:
				return "Class_10_desc";
			
			case 0x0000000B:
				return "Class_11_desc";
			
			case 0x0000000C:
				return "Class_12_desc";
			
			case 0x0000000D:
				return "Class_13_desc";
			
			case 0x0000000E:
				return "Class_14_desc";
			
			case 0x0000000F:
				return "Class_15_desc";
			
			case 0x00000010:
				return "Class_16_desc";
			
			case 0x00000011:
				return "Class_17_desc";
			
			case 0x00000012:
				return "Class_18_desc";
			
			case 0x00000013:
				return "Class_19_desc";
			
			case 0x00000014:
				return "Class_20_desc";
			
			default:
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "Class_0";
		
		case 0x00000001:
			return "Class_1";
		
		case 0x00000002:
			return "Class_2";
		
		case 0x00000003:
			return "Class_3";
		
		case 0x00000004:
			return "Class_4";
		
		case 0x00000005:
			return "Class_5";
		
		case 0x00000006:
			return "Class_6";
		
		case 0x00000007:
			return "Class_7";
		
		case 0x00000008:
			return "Class_8";
		
		case 0x00000009:
			return "Class_9";
		
		case 0x0000000A:
			return "Class_10";
		
		case 0x0000000B:
			return "Class_11";
		
		case 0x0000000C:
			return "Class_12";
		
		case 0x0000000D:
			return "Class_13";
		
		case 0x0000000E:
			return "Class_14";
		
		case 0x0000000F:
			return "Class_15";
		
		case 0x00000010:
			return "Class_16";
		
		case 0x00000011:
			return "Class_17";
		
		case 0x00000012:
			return "Class_18";
		
		case 0x00000013:
			return "Class_19";
		
		case 0x00000014:
			return "Class_20";
		
		default:
	}
	return "Common_Null";
}

var Function_67(int iParam0) //Position: 0x2119 / 8473
{
	switch (iParam0)
	{
		case 0x00000001:
			return "Generic_Dbuffer32_1";
		
		case 0x00000002:
			return "Generic_Dbuffer32_2";
		
		case 0x00000003:
			return "Generic_Dbuffer32_3";
		
		case 0x00000004:
			return "Generic_Dbuffer32_4";
		
		default:
	}
	return "Generic_Dbuffer32_0";
}

void Function_68(int iParam0) //Position: 0x21B0 / 8624
{
	Function_69(&Global_83864 + 1256, iParam0);
	return;
}

void Function_69(var uParam0, int iParam1) //Position: 0x21C2 / 8642
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_70(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x21CF / 8655
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_71(int iParam0) //Position: 0x221A / 8730
{
	return Function_72(Global_83864.f_1256, iParam0);
}

int Function_72(var uParam0, bool bParam1) //Position: 0x222C / 8748
{
	return (uParam0 && bParam1) == 0;
}

void Function_73(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x2239 / 8761
{
	if (!IS_OBJECT_VALID(Local_11.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_11.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_11.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_74(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11) + Vector(0.0f, 2,45f, 0.0f), 1, 8967, 1, 125, 0, 0, 0);
	Function_74(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11 + 48) + Vector(0.0f, 2,15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_74(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x22BC / 8892
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_61(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

var Function_75(int iParam0, var uParam1) //Position: 0x2307 / 8967
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_11.f_96 != iParam0)
	{
		Local_11.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_76() //Position: 0x236C / 9068
{
	int iVar0;
	
	if (VMAG(*(&Local_54 + 1896)) > 3.0f)
	{
		*(&Local_54 + 1896) = { StackVal, StackVal, *(&Global_79349 + 28) };
	}
	iVar0 = CREATE_PROPSET_IN_LAYOUT(Global_83591.f_140, "TalkingStick", "$/tune/refGroups/refGroups/mp_coop", *(&Local_54 + 1896), 0.0f, Local_54.f_1892, 0.0f);
	Function_77(iVar0, 1);
	return iVar0;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x23E5 / 9189
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), bParam1);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
	DESTROY_ITERATOR(bVar1);
	return;
}

var Function_78(var uParam0, var uParam1) //Position: 0x2431 / 9265
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "Coop_summary";
}

bool Function_79(int iParam0, bool bParam1) //Position: 0x244E / 9294
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_80(int iParam0, int iParam1, bool bParam2) //Position: 0x246E / 9326
{
	Function_81(iParam0, (iParam1 + SHIFT_LEFT(bParam2, 20)));
	return;
}

void Function_81(int iParam0, int iParam1) //Position: 0x2483 / 9347
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_82(int iParam0, float fParam1, int iParam2) //Position: 0x24A4 / 9380
{
	Function_83(iParam0, (fParam1 + TO_FLOAT(iParam2 * 1000)));
	return;
}

void Function_83(int iParam0, int iParam1) //Position: 0x24BA / 9402
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_84(int iParam0) //Position: 0x24DB / 9435
{
	Function_85(8, iParam0);
	return;
}

void Function_85(int iParam0, bool bParam1) //Position: 0x24E8 / 9448
{
	if (bParam1)
	{
		Function_6(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_5(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_86(var uParam0, var uParam1, float fParam2) //Position: 0x2510 / 9488
{
	vector3 vVar0[5];
	
	Function_116((180.0f + fParam2), 5.0f);
	vVar0[03] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_116((180.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_116((120.0f + fParam2), 5.0f);
	vVar0[13] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_116((120.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_116((60.0f + fParam2), 5.0f);
	vVar0[23] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_116((60.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_116((0.0f + fParam2), 5.0f);
	vVar0[33] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_116((0.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_116((90.0f + fParam2), 1.0f);
	vVar0[43] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_116((90.0f + fParam2), 1.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_87(&vVar0, 1);
	return;
}

void Function_87(var uParam0, bool bParam1) //Position: 0x25C7 / 9671
{
	bool bVar1;
	bool bVar2;
	
	Local_54.f_1808 = CREATE_LAYOUT("Coop_Lobby");
	Global_83591.f_140 = Local_54.f_1808;
	while (!Function_110(&Local_54 + 1828) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_109();
	bVar1 = Function_8(Global_79962, 128);
	bVar2 = (Function_41(8) - 1);
	if (bVar2 == 4294967295)
	{
		if (bVar1)
		{
			Function_64(8, GET_LOCAL_SLOT() + 5);
		}
		else
		{
			Function_64(8, GET_LOCAL_SLOT() + 1);
		}
	}
	else
	{
		if (bVar1)
		{
			if (bVar2 <= 4)
			{
				bVar2 += 4;
			}
		}
		else if (bVar2 == 8)
		{
			bVar2 = GET_LOCAL_SLOT();
		}
		else if (bVar2 > 4)
		{
			bVar2 = (bVar2 - 4);
		}
		Function_64(8, bVar2 + 1);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	if (bVar1)
	{
		Local_54.f_1804 = 5;
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[090]), *uParam0[03], 4, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[190]), *uParam0[13], 5, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[290]), *uParam0[23], 6, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[390]), *uParam0[33], 7, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[490]), *uParam0[43], 8, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[43]), bParam1);
	}
	else
	{
		Local_54.f_1804 = 4;
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[090]), *uParam0[03], 0, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[190]), *uParam0[13], 1, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[290]), *uParam0[23], 2, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(&(Local_54[390]), *uParam0[33], 3, Local_54.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_88(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x2810 / 10256
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<9> Var9;
	bool bVar19;
	bool bVar20;
	
	*(iParam0 + 96) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97(bParam4, iParam0 + 344) };
	iParam0->f_324 = bParam4;
	if (bParam4 != 8)
	{
		iParam0->f_328 = Function_93(bParam5, &vParam1, fParam6, iParam0 + 96, bParam7);
	}
	else
	{
		iParam0->f_328 = Function_91(bParam5, &vParam1, (fParam6 + 180.0f), bParam7);
		vVar0 = { 0,2f, 1,2f, 0,1f };
		vVar3 = { -10.0f, 0.0f, 0.0f };
		iVar12 = ((SHIFT_LEFT(255, 24) + SHIFT_LEFT(false, 16)) + SHIFT_LEFT(false, 8));
		GET_OBJECT_RELATIVE_POSITION(iParam0->f_328, vVar0, &vVar6);
		GET_OBJECT_RELATIVE_ORIENTATION(iParam0->f_328, vVar3, &vVar9);
	}
}

var Function_89(bool bParam0, var uParam1, int iParam2) //Position: 0x298D / 10637
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000000:
			*uParam1 = { 0,2046675f, 1,532547f, -0,2487722f };
			*iParam2 = { 169,4265f, 0,8832794f, -175,2791f };
			return "p_gen_hat01x";
			break;
		
		case 0x00000005:
		case 0x00000001:
			return "";
		
		case 0x00000007:
		case 0x00000003:
			*uParam1 = { 0,3295048f, 1,381993f, -0,2406348f };
			*iParam2 = { 26,62852f, 177,48f, -6,970736f };
			return "p_gen_hat03x";
		
		case 0x00000006:
		case 0x00000002:
			*uParam1 = { 0,188344f, 1,438419f, 0,1520461f };
			*iParam2 = { -17,79215f, 176,5549f, -0,2478271f };
			return "p_gen_hat02x";
			break;
	}
	return "";
}

float Function_90(float fParam0) //Position: 0x2A79 / 10873
{
	return (fParam0 * 0,01745329f);
}

var Function_91(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2A87 / 10887
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *iParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, iParam1, &uVar0))
		{
			*iParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*iParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0,2f, 0.0f, -0,065f };
	ROTATE_VECTOR_XZ(&vVar6, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_92()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

bool Function_92() //Position: 0x2AF3 / 10995
{
	return "$/fragments/p_gen_dressForm01x";
}

var Function_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2B1A / 11034
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_91(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_96((*uParam3)[iVar12], &iVar2))
		{
			iVar10[iVar2]++;
			if (iVar10[iVar2] == 2)
			{
				iVar10[iVar2] = 3;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_96((*uParam3)[iVar12], &iVar2))
		{
			if (Function_94((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				bVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", bVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*uParam3)[iVar12])), StackVal) + Vector(0.0f, uParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar9, 0);
				if (IS_OBJECT_VALID(bVar9))
				{
					ATTACH_OBJECTS(bVar9, bVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return bVar0;
}

bool Function_94(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2C08 / 11272
{
	if (!Function_95(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				*uParam1 = { 0,08916403f, 0,8989502f, 0,07509536f };
				*uParam2 = { -60,09727f, -101,49f, 47,60939f };
			}
			else
			{
				*uParam1 = { 0,02631292f, 0,8451666f, -0,1088216f };
				*uParam2 = { 81,3988f, -1,648355f, -169,4713f };
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				*uParam1 = { 0,3568475f, 1,28952f, -0,22761f };
				*uParam2 = { -124,3062f, 85,737f, -40,141f };
			}
			else if (iParam3 == 2)
			{
				*uParam1 = { 0,06225565f, 1,28952f, -0,22761f };
				*uParam2 = { -219,3702f, -86,19345f, 135,0233f };
			}
			else
			{
				*uParam1 = { 0,3401467f, 1,258268f, -0,22761f };
				*uParam2 = { -91,1388f, 85,737f, -40,141f };
			}
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			if (bParam0 != 25)
			{
				*uParam1 = { 0,3715671f, 0,8808789f, -0,1146231f };
				*uParam2 = { 57,148f, 27,893f, 5,454f };
			}
			else
			{
				*uParam1 = { 0,4015671f, 0,9808789f, -0,01462308f };
				*uParam2 = { -122,852f, 27,893f, 5,454f };
			}
			return 1;
			break;
	}
	return 0;
}

bool Function_95(int iParam0) //Position: 0x2D9C / 11676
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_96(bool bParam0, int iParam1) //Position: 0x2DAE / 11694
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			*iParam1 = 0;
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*iParam1 = 1;
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*iParam1 = 2;
			return 1;
			break;
	}
	return 0;
}

struct<228> Function_97(int iParam0, var uParam1) //Position: 0x2E0A / 11786
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_104(&Var0);
	Function_101(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			Function_101(&Var0, 1, 9, 10, 1);
			Function_101(&Var0, 2, 0, 6, 1);
			*uParam1 = 2;
			break;
		
		case 0x00000004:
			Function_101(&Var0, 1, 11, 6, 1);
			Function_101(&Var0, 2, 0, 8, 1);
			*uParam1 = 2;
			break;
		
		case 0x00000001:
			Function_101(&Var0, 1, 17, 10, 1);
			Function_101(&Var0, 2, 5, 6, 1);
			Function_101(&Var0, 3, 24, 5, 1);
			*uParam1 = 3;
			break;
		
		case 0x00000005:
			Function_101(&Var0, 1, 18, 10, 1);
			Function_101(&Var0, 2, 5, 8, 1);
			Function_101(&Var0, 3, 24, 5, 1);
			*uParam1 = 3;
			break;
		
		case 0x00000002:
			Function_101(&Var0, 1, 19, 20, 0);
			Function_101(&Var0, 2, 4, 8, 1);
			Function_101(&Var0, 3, 25, 6, 1);
			*uParam1 = 3;
			break;
		
		case 0x00000006:
			Function_101(&Var0, 1, 20, 20, 0);
			Function_101(&Var0, 2, 4, 10, 1);
			Function_101(&Var0, 3, 25, 6, 1);
			*uParam1 = 3;
			break;
		
		case 0x00000003:
			Function_101(&Var0, 1, 6, 10, 1);
			Function_101(&Var0, 2, 8, 8, 1);
			Function_101(&Var0, 3, 23, 5, 1);
			*uParam1 = 3;
			break;
		
		case 0x00000007:
			Function_101(&Var0, 1, 2, 10, 1);
			Function_101(&Var0, 2, 8, 9, 1);
			Function_101(&Var0, 3, 23, 5, 1);
			*uParam1 = 3;
			break;
		
		case 0x00000008:
			Function_98(&Var0, uParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_98(int iParam0, int iParam1) //Position: 0x2F87 / 12167
{
	int iVar0;
	int iVar1[17];
	int iVar19;
	int iVar20;
	
	*iParam1 = 1;
	Function_101(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_100(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_99(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_101(StackVal, iParam0, *iParam1, iVar19, 1);
		}
		iVar0++;
	}
	return;
}

int Function_99(int iParam0, int iParam1) //Position: 0x3027 / 12327
{
	if (Function_100(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_100(int iParam0, int iParam1) //Position: 0x3041 / 12353
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_101(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3054 / 12372
{
	if (!Function_103(iParam1))
	{
		return;
	}
	Function_102(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_102(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3077 / 12407
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

bool Function_103(int iParam0) //Position: 0x30A1 / 12449
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_104(int iParam0) //Position: 0x30B1 / 12465
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_106(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_105(iParam0, 0.0f);
	return;
}

void Function_105(var uParam0, int iParam1) //Position: 0x30DE / 12510
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_106(bool bParam0) //Position: 0x30EA / 12522
{
	Function_102(bParam0, 4294967295, 0, 1);
	return;
}

float Function_107(vector3 vParam0, vector3 vParam3) //Position: 0x30F8 / 12536
{
	var uVar0;
	
	Function_108(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_108(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3112 / 12562
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_109() //Position: 0x3135 / 12597
{
	Local_11.f_96 = 4294967295;
	Local_11.f_100 = 4294967295;
	return;
}

bool Function_110(int iParam0) //Position: 0x3145 / 12613
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_115();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_114(iParam0[iVar03], 8);
		}
		else if (Function_113())
		{
			iVar1 = 1;
			Function_114(iParam0[iVar03], 8);
		}
		Function_114(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_15(iParam0[iVar03], 4))
		{
			if (!Function_15(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_15(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_15(iParam0[03], 8) || iVar1));
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
				Function_114(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_15(iParam0[iVar03], 4))
		{
			if (!Function_15(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
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
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
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
	Function_111();
	return 1;
}

void Function_111() //Position: 0x34C0 / 13504
{
	if (!Function_112(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_112(int iParam0) //Position: 0x3500 / 13568
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_113() //Position: 0x351C / 13596
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

void Function_114(var uParam0, int iParam1) //Position: 0x3547 / 13639
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_115() //Position: 0x3558 / 13656
{
	if (!Function_112(128))
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

vector3 Function_116(float fParam0, float fParam1) //Position: 0x359A / 13722
{
	return (SIN_DEGREE((180.0f + fParam0)) * fParam1), 0.0f, (COS_DEGREE((180.0f + fParam0)) * fParam1);
}

bool Function_117() //Position: 0x35BD / 13757
{
	var uVar0;
	bool bVar3;
	int iVar4;
	
	if (Function_124())
	{
		while (!IS_EXITFLAG_SET())
		{
			Function_122(5330, 5073);
			WAIT(false);
		}
		return 0;
	}
	Function_120(&Local_54 + 1812, "dlc_mpcooppack_mp_coop", 10, 0);
	Function_120(&Local_54 + 1828, Function_92(), 0, 0);
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		bVar3 = Function_89(iVar4, &uVar0, &uVar0);
		if (STRING_LENGTH(bVar3) >= 0)
		{
			Function_120(&Local_54 + 1828, bVar3, 0, 0);
		}
		iVar4++;
	}
	Function_110(&Local_54 + 1828);
	while (!Function_110(&Local_54 + 1812) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_119("nCOOP_help", 4294967295);
	Function_118();
	if (!Function_8(Global_84364, 2147483648))
	{
		Function_6(&Global_84364, 2147483648);
		Function_70("COOP_lobby_help", 0x41200000, 1, 0, 2, 1, 0);
	}
	return 1;
}

void Function_118() //Position: 0x36B8 / 14008
{
	while (!Function_56(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_119(char* cParam0, int iParam1) //Position: 0x36D3 / 14035
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (iParam1 == 4294967295)
	{
		strcpy(&cVar0, cParam0, 32);
		stradd(&cVar0, "_count", 32);
		iParam1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_6286 == 0)
	{
		Global_6286 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_6286 % iParam1)), 32);
	Global_6286++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

var Function_120(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x376A / 14186
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_121(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_114(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_121(var uParam0, int iParam1, int iParam2) //Position: 0x37A2 / 14242
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_114(uParam0[iVar03], 4);
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

void Function_122(var uParam0, var uParam1) //Position: 0x3866 / 14438
{
	Function_16(uParam0, uParam1, 14455);
	return;
}

int Function_123() //Position: 0x3877 / 14455
{
	return 1;
}

bool Function_124() //Position: 0x387E / 14462
{
	return Function_56(2);
}

