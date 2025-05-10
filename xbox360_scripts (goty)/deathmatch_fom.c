//Decompiled with MagicRDR v1.0
//Function Count : 283
//Statics Count : 594
//Natives Count : 252
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
	int iLocal_10 = 0;
	float fLocal_11 = 0.0f;
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_146 = 11;
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
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	float fLocal_217 = 0.0f;
	var uLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 16;
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
	float fLocal_247 = 0.0f;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 16;
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
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 51;
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
	int iLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 5;
	var uLocal_568 = -1;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = -1;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = -1;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = -1;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = -1;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_214 = 31;
	iLocal_215 = 33;
	iLocal_216 = 1;
	fLocal_217 = 2.0f;
	iLocal_219 = 0;
	iLocal_220 = 0;
	fLocal_247 = 60.0f;
	iLocal_294 = 0;
	iLocal_295 = 0;
	iLocal_296 = 0;
	iLocal_297 = 0;
	iLocal_298 = 0;
	iLocal_299 = 0;
	iLocal_300 = 0;
	iLocal_301 = 0;
	Function_272();
	if (Function_271())
	{
		Function_270();
	}
	else
	{
		if (Function_134())
		{
			Function_133(1);
		}
		else
		{
			Function_132(1);
		}
		Function_131();
		bVar0 = CREATE_WORLD_SECTOR(Local_48, "fortMercer");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 25;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_130(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_129(64, 0);
					Function_127();
					iVar1 = 25;
				}
			}
			Function_115(&iLocal_565, 0.15f, 0.7f, 12, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_102(&uLocal_303);
			Function_27();
			Function_24();
			WAIT(0);
		}
	}
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_fom_ffa02x", 0);
	DISABLE_CHILD_SECTOR("mp_fom_ffa02x");
	Function_19(0, 60, 0);
	Function_17(&uLocal_303);
	Function_16();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x12F / 303
{
	Function_2(uLocal_302);
	return;
}

int Function_2(bool bParam0) //Position: 0x13C / 316
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x152 / 338
{
	Function_12(&iLocal_39);
	Function_5();
	Function_4();
	return;
}

void Function_4() //Position: 0x163 / 355
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_5() //Position: 0x1A2 / 418
{
	Function_6();
	return;
}

void Function_6() //Position: 0x1AB / 427
{
	if (Function_10(4194304))
	{
		Function_7(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_10(8388608))
	{
		Function_7(8388608, 0, 1);
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x2B4 / 692
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_9(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_8(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x2DC / 732
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x2EF / 751
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_10(int iParam0) //Position: 0x2FE / 766
{
	return Function_11(Global_76905.f_132, iParam0);
}

bool Function_11(var uParam0, int iParam1) //Position: 0x30F / 783
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(int iParam0) //Position: 0x31C / 796
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

void Function_13(var uParam0, int iParam1) //Position: 0x342 / 834
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

void Function_14(var uParam0, int iParam1) //Position: 0x470 / 1136
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x48A / 1162
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x4A7 / 1191
{
	Function_12(&Local_48 + 4);
	RELEASE_LAYOUT_REF(Local_48);
	return;
}

void Function_17(int iParam0) //Position: 0x4B9 / 1209
{
	Function_129(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x4CA / 1226
{
	if (iParam0->f_1040 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_1040, 0);
		iParam0->f_1040 = "";
	}
	return;
}

void Function_19(int iParam0, int iParam1, int iParam2) //Position: 0x4EA / 1258
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_20(Global_16524, bVar0, 1);
	}
	return;
}

void Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0x5D0 / 1488
{
	int iVar0;
	
	Function_23(iParam0);
	Function_22(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_21();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_21() //Position: 0x749 / 1865
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_22(bool bParam0) //Position: 0x755 / 1877
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

void Function_23(int iParam0) //Position: 0x79B / 1947
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

void Function_24() //Position: 0x7E1 / 2017
{
	Function_25(2);
	return;
}

void Function_25(int iParam0) //Position: 0x7EB / 2027
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_26(iParam0);
		}
	}
	return;
}

void Function_26(var uParam0) //Position: 0x81D / 2077
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_27() //Position: 0x82C / 2092
{
	Function_100();
	if (Function_99(1, 1))
	{
		Function_83(StackVal, StackVal, 8186, vLocal_43, 1, 8078);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_78(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_75())
		{
			Function_54(5935, 5559);
		}
		else
		{
			Function_54(4093, 2253);
		}
		Function_28();
	}
	return;
}

void Function_28() //Position: 0x88B / 2187
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_29(&Local_12);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x8A7 / 2215
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

int Function_30(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x8CD / 2253
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_45(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_44(bParam0);
	bVar2 = Function_43(bParam0);
	bVar3 = Function_40(bParam0);
	iVar4 = Function_39((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_37(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), false, false);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_35(38, bParam0));
		bVar0++;
		Function_31(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x9B2 / 2482
{
	if (Function_10(4))
	{
		if (Function_32(bParam1, 1024, 1))
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

bool Function_32(bool bParam0, int iParam1, bool bParam2) //Position: 0x9E5 / 2533
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_99(iParam1, bParam2);
	}
	if (!Function_34(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_33(iParam1), 64);
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

var Function_33(int iParam0) //Position: 0xA66 / 2662
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_34(bool bParam0) //Position: 0xD7F / 3455
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

int Function_35(int iParam0, bool bParam1) //Position: 0xE20 / 3616
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_36(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_36(int iParam0) //Position: 0xE8E / 3726
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_37(bool bParam0, int iParam1, int iParam2) //Position: 0xEA7 / 3751
{
	var uVar0;
	
	return Function_38(bParam0, iParam1, &uVar0, iParam2);
}

int Function_38(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xEB8 / 3768
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

var Function_39(int iParam0, int iParam1, int iParam2) //Position: 0xF1D / 3869
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_40(bool bParam0) //Position: 0xF32 / 3890
{
	return Function_41(0, bParam0);
}

int Function_41(int iParam0, bool bParam1) //Position: 0xF3E / 3902
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_42(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_42(int iParam0) //Position: 0xFA5 / 4005
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_43(bool bParam0) //Position: 0xFB5 / 4021
{
	return Function_35(12, bParam0);
}

int Function_44(int iParam0) //Position: 0xFC2 / 4034
{
	return Function_35(11, iParam0);
}

void Function_45(bool bParam0, int iParam1, char* cParam2) //Position: 0xFCF / 4047
{
	if (bParam0)
	{
		if (Function_46())
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

bool Function_46() //Position: 0xFF0 / 4080
{
	return Function_10(32768);
}

int Function_47() //Position: 0xFFD / 4093
{
	if (!Function_49(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_48();
	return 1;
}

void Function_48() //Position: 0x1091 / 4241
{
	if (Function_10(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_7(8192, 1, 1);
	}
	else if (Function_10(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_7(8192, 1, 1);
	}
	else
	{
		Function_7(8192, 0, 1);
	}
	return;
}

bool Function_49(bool bParam0) //Position: 0x10CE / 4302
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_46() || Function_53(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_46())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_50(Function_46());
	return 1;
}

void Function_50(bool bParam0) //Position: 0x114F / 4431
{
	if (bParam0 || Function_10(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_10(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_10(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_10(1048576) || Function_10(4)) || Function_99(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_7(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_51(int iParam0) //Position: 0x11D8 / 4568
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x11EC / 4588
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

int Function_53(bool bParam0, bool bParam1) //Position: 0x1231 / 4657
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

void Function_54(int iParam0, int iParam1) //Position: 0x1265 / 4709
{
	Function_55(iParam0, iParam1, 5552);
	return;
}

void Function_55(var uParam0, var uParam1, int iParam2) //Position: 0x1276 / 4726
{
	if (Function_10(0x4000000))
	{
		Function_58();
		Function_7(0x4000000, 0, 1);
	}
	if (Function_10(0x10000000))
	{
		Function_58();
		Function_7(0x10000000, 0, 1);
	}
	if (Function_10(2) != Function_10(0x2000000))
	{
		Function_58();
		Function_7(0x2000000, Function_10(2), 1);
	}
	if (Function_46())
	{
		Function_57(!Function_10(16));
	}
	if (Function_10(16))
	{
		Function_56(&uParam0, &uParam1, &iParam2);
		if (Function_10(8192))
		{
			if (!Function_10(4194304))
			{
				Function_7(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_10(8388608))
			{
				Function_7(8388608, 1, 1);
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
			Function_6();
		}
		Function_7(16384, 1, 1);
	}
	else if (!Function_10(32))
	{
		Function_6();
	}
	Function_7(32768, 0, 1);
	return;
}

void Function_56(var uParam0, var uParam1, int iParam2) //Position: 0x140F / 5135
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_7(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_10(0x40000000);
	bVar3 = !Function_10(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_34(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_32(bVar1, 2048, 1))
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
				if (Function_37(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_10(4))
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
			if (Function_37(bVar1, (4294966296 - bVar1), 1))
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

void Function_57(bool bParam0) //Position: 0x1587 / 5511
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_7(16384, 0, 1);
	return;
}

void Function_58() //Position: 0x15A1 / 5537
{
	Function_7(32768, 1, 0);
	return;
}

int Function_59() //Position: 0x15B0 / 5552
{
	return 1;
}

int Function_60(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x15B7 / 5559
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_45(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_44(bParam0);
	bVar2 = Function_43(bParam0);
	bVar3 = Function_40(bParam0);
	iVar4 = Function_39((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_37(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), false, false);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_35(38, bParam0));
		bVar0++;
		Function_31(bVar0, bParam0);
	}
	if (Function_61(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_61(bool bParam0) //Position: 0x16AC / 5804
{
	if (Function_63(bParam0, 1, 0) != 4294967295 && Function_62() != 4294967295)
	{
		return 0;
	}
	return Function_63(bParam0, 1, 0) != Function_62();
}

int Function_62() //Position: 0x16D4 / 5844
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_63(GET_LOCAL_SLOT(), 1, 0);
}

int Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16EB / 5867
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_34(bParam0))
			{
				if (!Function_32(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_64() //Position: 0x172F / 5935
{
	if (!Function_49(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_65();
	Function_48();
	return 1;
}

void Function_65() //Position: 0x17C6 / 6086
{
	if (Function_75())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_74())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_66(0, 0);
		Function_66(1, 0);
	}
	return;
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x17F1 / 6129
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_62())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_73(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_67(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_67(int iParam0, int iParam1, bool bParam2) //Position: 0x1890 / 6288
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_46())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_69(iParam1, 0) };
				break;
			
			default:
				break;
		}
		if (iParam0 == 2)
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 5);
		}
		else
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 2);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(iParam0);
		if (Function_68())
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			if (iParam0 == 1)
			{
			}
			else if (iParam0 == 2)
			{
			}
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bParam2);
	return;
}

bool Function_68() //Position: 0x1983 / 6531
{
	return (Function_10(4096) || Function_10(4));
}

struct<16> Function_69(var uParam0, var uParam1) //Position: 0x1994 / 6548
{
	return StackVal, StackVal, StackVal, Function_70(Function_71(uParam0), uParam1);
}

struct<16> Function_70(bool bParam0, bool bParam1) //Position: 0x19A6 / 6566
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_71(int iParam0) //Position: 0x19DB / 6619
{
	if (!Function_72())
	{
		return 0;
	}
	return StackVal;
}

bool Function_72() //Position: 0x19F4 / 6644
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_73(int iParam0) //Position: 0x1A01 / 6657
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_74() //Position: 0x1A1D / 6685
{
	return Function_62() == 4294967295;
}

bool Function_75() //Position: 0x1A28 / 6696
{
	return Function_76(2);
}

int Function_76(int iParam0) //Position: 0x1A32 / 6706
{
	return Function_77(&Global_79349, iParam0);
}

int Function_77(var uParam0, int iParam1) //Position: 0x1A41 / 6721
{
	return Function_11(uParam0->f_44, iParam1);
}

void Function_78(vector3 vParam0, float fParam3) //Position: 0x1A50 / 6736
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_82(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_82(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_79(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_79(bool bParam0) //Position: 0x1B03 / 6915
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return "";
	}
	return Function_80(bVar0);
}

int Function_80(bool bParam0) //Position: 0x1B3E / 6974
{
	bool bVar0;
	
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam0), "cannon"))
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 523, 0f, 2, 0);
		}
		else
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 524, 0f, 2, 0);
		}
	}
	Function_81(bVar0);
	return bVar0;
}

void Function_81(bool bParam0) //Position: 0x1B8C / 7052
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_82() //Position: 0x1B9F / 7071
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_83(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1BCE / 7118
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_84(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7977, 1, 125, 0, 0, 0);
	Function_84(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_84(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1C51 / 7249
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_85(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_85(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1C9C / 7324
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
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_29(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_11;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && uParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3.14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0.1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3.14159f * 0.5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3.14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_29(iParam0);
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
		if (FABS((iParam0->f_36 - fVar9)) > 0.0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0.01f, -0.01f, -0.01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(uParam14);
			Call_Loc(uParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(uParam14);
				Call_Loc(uParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_86(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, fVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, fVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_86(float fParam0) //Position: 0x1F1B / 7963
{
	return (fParam0 * 57.29578f);
}

var Function_87(int iParam0, var uParam1) //Position: 0x1F29 / 7977
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_88(int iParam0, var uParam1) //Position: 0x1F8E / 8078
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_89() //Position: 0x1FFA / 8186
{
	int iVar0;
	
	iVar0 = Function_95(Global_83591.f_140, &vLocal_43, 0.0f, &Global_83591 + 276, 1);
	Function_90(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_90(bool bParam0, int iParam1) //Position: 0x2027 / 8231
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(bParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_94(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_93((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_93((*iParam1)[iVar202], &iVar21))
		{
			if (Function_91((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(bVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(bVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(bVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return bVar12;
}

bool Function_91(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x2136 / 8502
{
	float fVar0;
	
	if (!Function_92(bParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		bParam3 = true;
	}
	fVar0 = (((TO_FLOAT(bParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
		case default:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-30.0f + RAND_FLOAT_RANGE(-15.0f, 15.0f)), 0.0f, 90.0f };
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*uParam1 = { fVar0, 0.315f, 0.006f };
			*uParam2 = { (-10.0f + RAND_FLOAT_RANGE(-7.5f, 7.5f)), -68.0f, (90.0f + RAND_FLOAT_RANGE(-3.0f, 3.0f)) };
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-60.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)), 0.0f, -90.0f };
			return 1;
			break;
	}
	return 0;
}

bool Function_92(int iParam0) //Position: 0x225D / 8797
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_93(bool bParam0, int iParam1) //Position: 0x226F / 8815
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

var Function_94() //Position: 0x22CB / 8907
{
	int iVar0;
	
	return iVar0;
}

var Function_95(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x22D3 / 8915
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_97(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_93((*uParam3)[iVar12], &iVar2))
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
		if (Function_93((*uParam3)[iVar12], &iVar2))
		{
			if (Function_96((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_96(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x23C1 / 9153
{
	if (!Function_92(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.08916403f, 0.8989502f, 0.07509536f };
				*uParam2 = { -60.09727f, -101.49f, 47.60939f };
			}
			else
			{
				*uParam1 = { 0.02631292f, 0.8451666f, -0.1088216f };
				*uParam2 = { 81.3988f, -1.648355f, -169.4713f };
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.3568475f, 1.28952f, -0.22761f };
				*uParam2 = { -124.3062f, 85.737f, -40.141f };
			}
			else if (iParam3 == 2)
			{
				*uParam1 = { 0.06225565f, 1.28952f, -0.22761f };
				*uParam2 = { -219.3702f, -86.19345f, 135.0233f };
			}
			else
			{
				*uParam1 = { 0.3401467f, 1.258268f, -0.22761f };
				*uParam2 = { -91.1388f, 85.737f, -40.141f };
			}
			return 1;
			break;
		
		case 0x00000030:
			*uParam1 = { 0.4015671f, 0.9808789f, -0.01462308f };
			*uParam2 = { -122.852f, 27.893f, 5.454f };
			return 1;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0.3715671f, 0.8808789f, -0.1146231f };
			*uParam2 = { 57.148f, 27.893f, 5.454f };
			return 1;
			break;
	}
	return 0;
}

var Function_97(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2552 / 9554
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
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_98()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_98() //Position: 0x25BE / 9662
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_99(bool bParam0, bool bParam1) //Position: 0x25E5 / 9701
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_100() //Position: 0x2605 / 9733
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_101("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_101("TDM_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_4();
	}
	return;
}

void Function_101(char* cParam0, int iParam1) //Position: 0x2675 / 9845
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

int Function_102(int iParam0) //Position: 0x270C / 9996
{
	int iVar0;
	
	if (!Function_113(*iParam0) || (Function_130(64) && Function_109()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_113(*iParam0))
		{
		}
		if (Function_130(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_113(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 1040);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_1036)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_106(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_11((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_8(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_11((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_1036)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_1036)
				{
					if (!Function_11((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_11((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_105((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_104((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_1036)
			{
				iParam0->f_1044 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_1044) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_18(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_103(3, iParam0->f_1036))
			{
				if (iParam0->f_1036 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_1036);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_11((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_11((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_9(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_11((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_11((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_11((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
							}
						}
						else if (StackVal || !IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_OPENING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
						{
							CLOSE_DOOR((iParam0 + 12[StackVal5])->f_12, 1.0f);
						}
					}
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int Function_103(int iParam0, bool bParam1) //Position: 0x2A93 / 10899
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x2AA5 / 10917
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

void Function_105(bool bParam0, bool bParam1) //Position: 0x2AF9 / 11001
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

int Function_106(var uParam0, var uParam1, int iParam2) //Position: 0x2B4A / 11082
{
	return Function_107(Global_29006, uParam0, uParam1, iParam2);
}

int Function_107(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2B5C / 11100
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_108(iParam0))
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

bool Function_108(int iParam0) //Position: 0x2BF8 / 11256
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_109() //Position: 0x2C0E / 11278
{
	return !Function_110();
}

bool Function_110() //Position: 0x2C18 / 11288
{
	if (Function_112())
	{
		return (Function_111() != 1 || Function_111() != 0);
	}
	return 0;
}

int Function_111() //Position: 0x2C31 / 11313
{
	return Global_79349.f_16;
}

bool Function_112() //Position: 0x2C3D / 11325
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_113(int iParam0) //Position: 0x2C46 / 11334
{
	if (!Function_108(iParam0))
	{
		return 1;
	}
	return Function_114(&(Global_29008[iParam0]), 4);
}

int Function_114(var uParam0, bool bParam1) //Position: 0x2C62 / 11362
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_115(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2C7E / 11390
{
	float fVar0;
	
	if (Function_126())
	{
		if (Function_125(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_121(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_119((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_116((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_119((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_116((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_116(int iParam0, var uParam1, int iParam2) //Position: 0x2D21 / 11553
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_118(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_117(iParam2);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x2D46 / 11590
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_118(int iParam0) //Position: 0x2D5B / 11611
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_119(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2D70 / 11632
{
	int iVar0;
	bool bVar1;
	
	Function_23(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_120(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_20(StackVal, bVar1, bParam4);
		}
	}
}

void Function_120(int iParam0, int iParam1) //Position: 0x2DE2 / 11746
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_23(iParam0);
	Function_22(iVar0);
	PRINTNL();
	Function_20(iParam0, iVar0, iParam1);
	return;
}

float Function_121(int iParam0) //Position: 0x2E07 / 11783
{
	return -Function_122(iParam0);
}

float Function_122(int iParam0) //Position: 0x2E13 / 11795
{
	if (Function_125(iParam0))
	{
		if (Function_124(iParam0))
		{
			return StackVal;
		}
		Function_123();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_123() //Position: 0x2EE4 / 12004
{
	if (!Function_126())
	{
	}
	return;
}

bool Function_124(int iParam0) //Position: 0x2EF1 / 12017
{
	return Function_11(*iParam0, 2);
}

bool Function_125(int iParam0) //Position: 0x2EFE / 12030
{
	return Function_11(*iParam0, 1);
}

bool Function_126() //Position: 0x2F0B / 12043
{
	return NET_IS_IN_SESSION();
}

void Function_127() //Position: 0x2F14 / 12052
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_94());
	Function_128(bVar0, "bottle", Local_48.f_300);
	Function_128(bVar0, "mug0", Local_48.f_300);
	Function_128(bVar0, "glass", Local_48.f_300);
	Function_128(bVar0, "crate14", Local_48.f_300);
	Function_128(bVar0, "crate03", Local_48.f_300);
	Function_128(bVar0, "package", Local_48.f_300);
	Function_128(bVar0, "nlantern05", Local_48.f_300);
	Function_128(bVar0, "blanket", Local_48.f_300);
	Function_128(bVar0, "c_tes_blanket", Local_48.f_300);
	Function_128(bVar0, "p_gen_bucket02x", Local_48.f_300);
	Function_128(bVar0, "p_gen_bucket03x", Local_48.f_300);
	Function_128(bVar0, "p_gen_basin01x", Local_48.f_300);
	Function_128(bVar0, "p_gen_can01x", Local_48.f_300);
	Function_128(bVar0, "p_gen_can02x", Local_48.f_300);
	Function_128(bVar0, "jar0", Local_48.f_300);
	Function_128(bVar0, "book", Local_48.f_300);
	Function_128(bVar0, "spittoon", Local_48.f_300);
	Function_128(bVar0, "milkcan", Local_48.f_300);
	Function_128(bVar0, "jug0", Local_48.f_300);
	Function_128(bVar0, "broom", Local_48.f_300);
	Function_128(bVar0, "cratebreak", Local_48.f_300);
	Function_128(bVar0, "potclay", Local_48.f_300);
	Function_128(bVar0, "fom_gallows01_flag", Local_48.f_300);
	Function_128(bVar0, "fom_leftwing01_flag", Local_48.f_300);
	Function_128(bVar0, "rope", Local_48.f_300);
	Function_128(bVar0, "nlantern07", Local_48.f_300);
	Function_128(bVar0, "i_gen_blanket09x", Local_48.f_300);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x317E / 12670
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, bParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

void Function_129(int iParam0, bool bParam1) //Position: 0x31D7 / 12759
{
	if (bParam1)
	{
		Function_9(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_8(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x31FF / 12799
{
	return Function_11(StackVal, iParam0);
}

void Function_131() //Position: 0x3212 / 12818
{
	bool bVar0;
	vector3 vVar1;
	
	vVar1 = { -2645.675f, 67.455f, 3423.185f };
	bVar0 = LOCATE_PHYSINST_OF_TYPE(vVar1, 10.0f, "p_fom_crankSlatCombined01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar0));
	}
	return;
}

void Function_132(bool bParam0) //Position: 0x3267 / 12903
{
	Function_129(16, bParam0);
	return;
}

void Function_133(var uParam0) //Position: 0x3274 / 12916
{
	Function_129(8, uParam0);
	return;
}

bool Function_134() //Position: 0x3281 / 12929
{
	Function_269(&iLocal_565, 0, 9, 30, 0, 0, 1);
	Function_269(&iLocal_565, 1, 9, 30, 2, 2, 1);
	Function_269(&iLocal_565, 2, 11, 0, 1, 2, 2);
	Function_269(&iLocal_565, 3, 11, 0, 1, 1, 0);
	Function_269(&iLocal_565, 4, 23, 0, 1, 0, 1);
	Function_266(&iLocal_565);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_263();
	ENABLE_CHILD_SECTOR("mp_fom_ffa02x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_fom_ffa02x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_256(&Global_83591 + 276, 0);
	Function_254(&Global_83591, 1, 22, 1, 1);
	Function_254(&Global_83591, 2, 5, 10, 1);
	Function_254(&Global_83591, 3, 9, 10, 1);
	Function_254(&Global_83591, 4, 17, 15, 1);
	Function_249(&Global_83591, 1, 23, 5, 1);
	Function_249(&Global_83591, 2, 6, 10, 1);
	Function_249(&Global_83591, 3, 18, 15, 1);
	Function_249(&Global_83591, 4, 10, 10, 1);
	Function_248(&Global_83591);
	Function_247(&Global_83591 + 276, 4);
	Function_246(0, 6);
	Function_246(1, 1);
	if (!Function_241(&uLocal_303))
	{
		return 0;
	}
	Function_233();
	Function_135();
	return 1;
}

void Function_135() //Position: 0x339D / 13213
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 13323);
	uLocal_302 = Function_136("DLCPVP");
	return;
}

var Function_136(bool bParam0) //Position: 0x33BB / 13243
{
	bool bVar0;
	
	bVar0 = Function_137();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_137() //Position: 0x33CF / 13263
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_138(var uParam0) //Position: 0x340B / 13323
{
	struct<33> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 11);
	if (Var0.f_28)
	{
	}
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	bVar12 = GET_LOCAL_SLOT();
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			bVar11 = Function_76(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_232())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_111())
							{
								case 0x00000002:
									break;
								
								case 0x00000011:
									break;
								
								case 0x00000009:
									break;
								
								case 0x00000007:
									break;
								
								case 0x00000008:
									break;
							}
							Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_225(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_141(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_110() || Function_139(4096))
						{
							if (Function_99(131072, 1))
							{
							}
							if (Function_32(Var0, 131072, 1))
							{
							}
						}
					}
				}
				else if (Var0.f_32 >= 0)
				{
					if (bVar11)
					{
					}
				}
			}
			else if (Var0 == bVar12)
			{
				Global_56092[231] = 0;
				if (bVar11)
				{
					if (IS_SLOT_VALID(StackVal))
					{
						Global_56352[231] = StackVal;
					}
				}
			}
			if (bVar11 && !Function_139(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_139(int iParam0) //Position: 0x356F / 13679
{
	return Function_140(Global_79336, iParam0);
}

bool Function_140(var uParam0, bool bParam1) //Position: 0x357E / 13694
{
	return (uParam0 && bParam1) == 0;
}

void Function_141(struct<29> Param0) //Position: 0x358B / 13707
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_146(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_146(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_145(), 29, 1);
					Global_83823[29] = 1;
					Function_142(6002);
					Function_142(6005);
					Function_142(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_142(6001);
				Function_142(6004);
			}
			break;
	}
}

void Function_142(int iParam0) //Position: 0x366C / 13932
{
	Function_143(iParam0, 1);
	return;
}

void Function_143(int iParam0, bool bParam1) //Position: 0x3678 / 13944
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_9(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_144((iVar0 % 32)));
	}
	else
	{
		Function_8(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_144((iVar0 % 32)));
	}
	return;
}

int Function_144(bool bParam0) //Position: 0x36CE / 14030
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_145() //Position: 0x36DA / 14042
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_146(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x36EF / 14063
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_147(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_147(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x371B / 14107
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_224(uParam0, uParam2, uParam3);
			}
			Function_148(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_148(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_148(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_148(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x3798 / 14232
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_223(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		bVar1 = Global_50170[*uParam022].f_28;
		if (bVar1 > bParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_221(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_166(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_155(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_154(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_149(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_149(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3866 / 14438
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_152(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_151(iParam0, 4))
	{
		Function_150(Function_153(iParam0), 0);
	}
}

void Function_150(var uParam0, int iParam1) //Position: 0x391D / 14621
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

bool Function_151(int iParam0, int iParam1) //Position: 0x3942 / 14658
{
	return Function_11(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_152(int iParam0) //Position: 0x3956 / 14678
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_153(int iParam0) //Position: 0x398A / 14730
{
	return Global_50170[iParam022].f_24;
}

var Function_154(int iParam0, int iParam1) //Position: 0x3999 / 14745
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_155(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x39AC / 14764
{
	Function_163(*uParam0);
	Function_156(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_156(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3A51 / 14929
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_162(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_153(iParam0));
	if ((bParam3 && Function_151(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_153(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_161(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_160(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_159(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_158(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &Var7, 0, 2, Function_151(iParam0, 4));
			if (!bParam3)
			{
				Function_157(iParam0, 4);
			}
		}
	}
}

void Function_157(int iParam0, int iParam1) //Position: 0x3B0E / 15118
{
	Function_9(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_158(int iParam0) //Position: 0x3B22 / 15138
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_159(int iParam0) //Position: 0x3B42 / 15170
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_160(int iParam0) //Position: 0x3B70 / 15216
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_161(int iParam0) //Position: 0x3BA0 / 15264
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_162(int iParam0) //Position: 0x3BD1 / 15313
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_163(int iParam0) //Position: 0x3D4F / 15695
{
	Function_164(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3D65 / 15717
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_165();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_165() //Position: 0x3DDA / 15834
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_166(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3E27 / 15911
{
	struct<4> Var0;
	
	Function_220(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_152(*uParam0) };
	Function_215(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_214(*uParam0, 4);
	Function_167();
}

void Function_167() //Position: 0x3E85 / 16005
{
	if (!Function_112())
	{
		if (!Function_213(1, 3, 1, 1))
		{
			Function_201(1);
			Function_200(1, 8);
		}
	}
	else
	{
		Function_168(0);
	}
	return;
}

void Function_168(bool bParam0) //Position: 0x3EAE / 16046
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_198(2);
	if (bParam0)
	{
		Function_198(1);
	}
	else
	{
		Function_196(1);
	}
	Function_169();
	return;
}

void Function_169() //Position: 0x3F37 / 16183
{
	Function_194();
	Function_193();
	Function_193();
	Function_192();
	Function_192();
	Function_191();
	Function_191();
	Function_176(0);
	Function_176(0);
	if (!Function_112())
	{
		Function_174();
		Function_173();
		Function_172();
		Function_171();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_170();
	return;
}

void Function_170() //Position: 0x3F89 / 16265
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_171() //Position: 0x4091 / 16529
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
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
	Global_83815 = fVar0;
	return;
}

void Function_172() //Position: 0x40C4 / 16580
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_173() //Position: 0x4252 / 16978
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_174() //Position: 0x4406 / 17414
{
	Function_175(&Global_28260, 1, 0);
	return;
}

void Function_175(int iParam0, bool bParam1, int iParam2) //Position: 0x4414 / 17428
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_145();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_176(int iParam0) //Position: 0x4605 / 17925
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
					iVar2 = ((Function_190((50 + iVar4)) + Function_190((183 + iVar4))) + Function_190((90 + iVar4)));
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
	Function_177(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_177(int iParam0, bool bParam1, bool bParam2) //Position: 0x46AB / 18091
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_189(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_188(iParam0);
	if (bParam2)
	{
		Function_178(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_178(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4946 / 18758
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_187(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_186(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_186(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_184(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_182(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_179(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_94(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_179(int iParam0) //Position: 0x4F73 / 20339
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_180(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4F84 / 20356
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_181(char* cParam0, bool bParam1) //Position: 0x5079 / 20601
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_182(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5092 / 20626
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_103(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_183(Function_103(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_183(int iParam0, int iParam1) //Position: 0x50F7 / 20727
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5109 / 20745
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_185(iParam0) != 19 || Function_185(iParam0) != 17) || Function_185(iParam0) != 10) || Function_185(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_185(int iParam0) //Position: 0x5239 / 21049
{
	return Global_35278[iParam020].f_48;
}

float Function_186(int iParam0) //Position: 0x5248 / 21064
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_187(int iParam0) //Position: 0x5281 / 21121
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_188(int iParam0) //Position: 0x52BE / 21182
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_189(int iParam0, bool bParam1, bool bParam2) //Position: 0x5458 / 21592
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

int Function_190(bool bParam0) //Position: 0x569C / 22172
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_191() //Position: 0x56DD / 22237
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
		iVar2 = ((Function_190((50 + iVar3) + 15) + Function_190((183 + iVar3) + 15)) + Function_190((90 + iVar3) + 15));
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
	Function_177(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_192() //Position: 0x5766 / 22374
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
			iVar2 = ((Function_190((50 + iVar3) + 8) + Function_190((183 + iVar3) + 8)) + Function_190((90 + iVar3) + 8));
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
	Function_177(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_193() //Position: 0x57FD / 22525
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
		iVar2 = ((Function_190((50 + iVar3)) + Function_190((183 + iVar3))) + Function_190((90 + iVar3)));
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
	Function_177(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_194() //Position: 0x587C / 22652
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_195(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_177(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0x58B5 / 22709
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_189(iParam0, bParam1, 1);
	Function_188(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_178(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_196(int iParam0) //Position: 0x5ABF / 23231
{
	Function_197(&Global_79338, iParam0);
	return;
}

void Function_197(var uParam0, int iParam1) //Position: 0x5ACE / 23246
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_198(int iParam0) //Position: 0x5ADB / 23259
{
	Function_199(&Global_79338, iParam0);
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0x5AEA / 23274
{
	Function_9(uParam0, iParam1);
	return;
}

void Function_200(var uParam0, int iParam1) //Position: 0x5AF7 / 23287
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_112())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_201(bool bParam0) //Position: 0x5B39 / 23353
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_202();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_169();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_8(&Global_63095, 1);
		Function_8(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_202() //Position: 0x5B8A / 23434
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_212())
	{
		Function_209(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_209(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_204(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_204(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_203(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_203(vector3 vParam0) //Position: 0x5C45 / 23621
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_204(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5C5D / 23645
{
	int iVar0;
	
	iVar0 = Function_207(uParam2, uParam3);
	if (Function_206(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_9(&Global_63095, 1);
			Function_8(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_9(&Global_63095, 2);
			Function_8(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_9(&Global_63095, 2);
		Function_8(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_205();
	return StackVal, StackVal, Function_205();
}

vector3 Function_205() //Position: 0x5D44 / 23876
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_206(int iParam0) //Position: 0x5D4D / 23885
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_207(bool bParam0, bool bParam1) //Position: 0x5D63 / 23907
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_208(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_208(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_206(bVar0) && !bParam1)
	{
		bVar0 = Function_207(bParam0, 1);
	}
	return bVar0;
}

float Function_208(vector3 vParam0, vector3 vParam3) //Position: 0x5E2A / 24106
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_209(var uParam0, int iParam1) //Position: 0x5E47 / 24135
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_211(Global_34573, &vVar4);
	if (!Function_210(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_210(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_9(&Global_63095, 2);
	Function_8(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_203(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_210(int iParam0) //Position: 0x666C / 26220
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || !Function_11(uVar0, 0x10000000));
}

void Function_211(bool bParam0, int iParam1) //Position: 0x66A7 / 26279
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_212() //Position: 0x66B4 / 26292
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_213(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x66CF / 26319
{
	uParam0 = uParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && uParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_214(int iParam0, int iParam1) //Position: 0x6773 / 26483
{
	Function_8(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_215(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6787 / 26503
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_82();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_219(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_218(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_217(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_216(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_219(), iVar1 + 1);
	return;
}

struct<16> Function_216(int iParam0) //Position: 0x67F9 / 26617
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_217(int iParam0) //Position: 0x681A / 26650
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_218(int iParam0) //Position: 0x683B / 26683
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_219() //Position: 0x685C / 26716
{
	return "CQueue_Count";
}

void Function_220(bool bParam0, bool bParam1) //Position: 0x6871 / 26737
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_165();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

void Function_221(var uParam0, bool bParam1, bool bParam2) //Position: 0x69BD / 27069
{
	Function_220(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), 1.0f, 0, 0);
	Function_222(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_215(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_167();
	return;
}

void Function_222(int iParam0, int iParam1) //Position: 0x6A22 / 27170
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_162(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_153(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_161(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_158(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_153(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_223(int iParam0) //Position: 0x6AA4 / 27300
{
	return Global_50170[iParam022].f_12;
}

void Function_224(var uParam0, bool bParam1, bool bParam2) //Position: 0x6AB3 / 27315
{
	Function_163(*uParam0);
	if (!Function_151(*uParam0, 2))
	{
		Function_156(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_157(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_225(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x6AF0 / 27376
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_223(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_61(Param3) && Param3.f_12 != 29)
						{
							if (Function_140(Param3.f_40, 1048576))
							{
								Global_50170[23022].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[23022].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_227(230, 150, Function_228(), 4294967295);
					Function_142(6007);
					Function_142(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_226(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_149(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_226(var uParam0, bool bParam1, int iParam2) //Position: 0x6BB2 / 27570
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_227(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6BCA / 27594
{
	Function_220(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(iParam0), 1.0f, 0, 0);
	Function_222(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_142(iParam3);
	}
	Function_215(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_167();
}

bool Function_228() //Position: 0x6C30 / 27696
{
	return "MP_TrickShot_Icon_128";
}

void Function_229(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6C4E / 27726
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_223(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_230(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_231(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_142(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_226(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_149(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_223(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_227(231, 100, Function_231(), 4294967295);
					Function_142(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_226(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_149(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_230(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6D76 / 28022
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_152(uParam0) };
	Function_215(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_226(&uParam5, uParam8, uParam9);
	Function_149(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_156(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_142(iParam12);
	}
	Function_214(uParam0, 4);
	Function_167();
}

var Function_231() //Position: 0x6DEC / 28140
{
	return "MP_Revenge_Icon_128";
}

bool Function_232() //Position: 0x6E08 / 28168
{
	if (Function_139(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_233() //Position: 0x6E32 / 28210
{
	Function_237(Local_48);
	Function_235(Local_48.f_660);
	if (Function_75())
	{
		Function_234("FTR_SONG_04", "FTR_SONG_02", 0, 58, 58, 1);
	}
	else
	{
		Function_234("FTR_SONG_02", "FTR_SONG_04", 0, 58, 58, 1);
	}
	return;
}

void Function_234(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x6E96 / 28310
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = iParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = iParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = iParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_235(bool bParam0) //Position: 0x6F26 / 28454
{
	DECOR_SET_OBJECT(Function_236(), "LobbyGringoSet", bParam0);
	return;
}

var Function_236() //Position: 0x6F46 / 28486
{
	return Global_83591.f_140;
}

void Function_237(var uParam0) //Position: 0x6F52 / 28498
{
	if (Function_240())
	{
		Function_247(&Global_83591 + 276, 2);
	}
	Function_239(uParam0);
	Global_83591.f_4 = 2;
	Function_238();
	vLocal_43 = { StackVal, StackVal, Function_238() };
	return;
}

vector3 Function_238() //Position: 0x6F7C / 28540
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_236();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(bVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

void Function_239(var uParam0) //Position: 0x6FC4 / 28612
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_240() //Position: 0x6FD2 / 28626
{
	return Function_11(Global_79962, 1024);
}

bool Function_241(bool bParam0) //Position: 0x6FE2 / 28642
{
	if (!Function_245(bParam0, Global_30679[1]))
	{
		return 0;
	}
	Function_244(bParam0, "fortMercer", "guardTowerProps01", 7);
	Function_244(bParam0, "fortMercer", "guardTowerProps01", 8);
	Function_244(bParam0, "fortMercer", "corral", 1);
	Function_244(bParam0, "fortMercer", "corral", 2);
	Function_242(bParam0, "fortMercer", "corral", 3, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "corral", 4, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "corral", 5, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "corral", 6, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "corral", 7, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "corral", 9, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps02", 8, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps02", 9, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps02", 10, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps02", 11, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps02", 12, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 1, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 2, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 12, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 13, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 22, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 14, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 16, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 17, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 23, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 15, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 6, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 5, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 21, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 10, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 7, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 8, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "nrightwing", 9, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps01", 4, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "guardTowerProps01", 3, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 12, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 11, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 25, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 9, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 10, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 16, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 21, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 8, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 7, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 18, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 23, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 17, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 14, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 4, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 3, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 2, 1, 0, 1, 1);
	Function_242(bParam0, "fortMercer", "leftwing", 1, 1, 0, 1, 1);
	return 1;
}

int Function_242(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x7754 / 30548
{
	int iVar0;
	
	iVar0 = iParam0->f_1036;
	if (!Function_243(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_9(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_9(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_9(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_9(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_243(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x77C5 / 30661
{
	if (iParam0->f_1036 > 51)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_10365] = uParam1;
	(iParam0 + 12[iParam0->f_10365])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_10365])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_10365])->f_16 = 0;
	iParam0->f_1036++;
	return 1;
}

int Function_244(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x7821 / 30753
{
	int iVar0;
	
	iVar0 = iParam0->f_1036;
	if (!Function_243(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_9(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_245(int iParam0, int iParam1) //Position: 0x7853 / 30803
{
	int iVar0;
	
	if (!Function_108(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_1036 = 0;
	iParam0->f_4 = 0;
	iParam0->f_1040 = "";
	iVar0 = 0;
	while (iVar0 <= 51)
	{
		(*iParam0 + 12)[iVar05] = "";
		(iParam0 + 12[iVar05])->f_4 = "";
		(iParam0 + 12[iVar05])->f_8 = 0;
		(iParam0 + 12[iVar05])->f_16 = 0;
		(iParam0 + 12[iVar05])->f_12 = "";
		iVar0++;
	}
	return 1;
}

void Function_246(int iParam0, int iParam1) //Position: 0x78C9 / 30921
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0x78D7 / 30935
{
	(iParam0 + 228)->f_220 = 0;
	Function_9(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_248(int iParam0) //Position: 0x78EF / 30959
{
	iParam0->f_844 = 0;
	return;
}

void Function_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x78FB / 30971
{
	Function_250(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_250(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7913 / 30995
{
	Function_251(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_251(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x792A / 31018
{
	if (!Function_253(iParam1))
	{
		return;
	}
	Function_252(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_252(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x794D / 31053
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

bool Function_253(int iParam0) //Position: 0x7977 / 31095
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_254(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7987 / 31111
{
	Function_255(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_255(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x799F / 31135
{
	Function_251(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_256(int iParam0, bool bParam1) //Position: 0x79B4 / 31156
{
	Function_260(iParam0);
	Function_260(iParam0 + 228);
	if (bParam1)
	{
		Function_257(iParam0);
	}
	return;
}

void Function_257(int iParam0) //Position: 0x79D0 / 31184
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_258(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_258(var uParam0, int iParam1) //Position: 0x79F0 / 31216
{
	Function_259(uParam0, iParam1, 0);
	return;
}

void Function_259(int iParam0, int iParam1, int iParam2) //Position: 0x79FE / 31230
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_260(int iParam0) //Position: 0x7A0F / 31247
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_262(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_261(iParam0, 0.0f);
	return;
}

void Function_261(var uParam0, int iParam1) //Position: 0x7A3C / 31292
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_262(var uParam0) //Position: 0x7A48 / 31304
{
	Function_252(uParam0, 4294967295, 0, 1);
	return;
}

void Function_263() //Position: 0x7A56 / 31318
{
	var uVar0;
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
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	
	Function_265(4, 1);
	uVar0 = uVar0;
	Local_48 = CREATE_LAYOUT("Deathmatch_FOM_layout");
	bVar1 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "Interiors_set");
	bVar2 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Stable", 2, -2676.083f, 68.75586f, 3476.745f, 0.0f, 60.76321f, 0.0f, 11.70256f, 3.121711f, 16.88825f);
	ADD_TO_VOLUME_SET(bVar1, bVar2);
	bVar3 = CREATE_VOLUME_IN_LAYOUT(Local_48, "nWheelroom", 2, -2647.24f, 68.75586f, 3424.545f, 0.0f, 45.8163f, 0.0f, 6.722599f, 3.121711f, 21.27543f);
	ADD_TO_VOLUME_SET(bVar1, bVar3);
	bVar4 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "DiningRoom_set");
	bVar5 = CREATE_VOLUME_IN_LAYOUT(Local_48, "DiningArea", 2, -2650.16f, 68.75586f, 3450.664f, 0.0f, 59.4441f, 0.0f, 15.5082f, 3.121711f, 18.65032f);
	ADD_TO_VOLUME_SET(bVar4, bVar5);
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Local_48, "OutsideDining", 2, -2652.748f, 68.75586f, 3461.8f, 0.0f, 59.4441f, 0.0f, 9.114953f, 2.666249f, 12.2376f);
	ADD_TO_VOLUME_SET(bVar4, bVar6);
	bVar7 = CREATE_VOLUME_IN_LAYOUT(Local_48, "OutsideDining1", 2, -2642.851f, 68.32344f, 3441.302f, 0.0f, 59.4441f, 0.0f, 9.114953f, 2.666249f, 5.242026f);
	ADD_TO_VOLUME_SET(bVar1, bVar4);
	ADD_TO_VOLUME_SET(bVar4, bVar7);
	bVar8 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "StoveRoom_set");
	bVar9 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Stairway", 2, -2669.029f, 68.75586f, 3472.087f, 0.0f, 60.08697f, 0.0f, 1.983419f, 3.121711f, 12.39668f);
	ADD_TO_VOLUME_SET(bVar8, bVar9);
	bVar10 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Inside", 2, -2657.991f, 68.75586f, 3471.817f, 0.0f, 60.08697f, 0.0f, 12.64969f, 3.121711f, 12.31075f);
	ADD_TO_VOLUME_SET(bVar8, bVar10);
	bVar11 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Outside", 2, -2655.625f, 68.75586f, 3461.301f, 0.0f, 60.08697f, 0.0f, 7.958254f, 3.121711f, 5.618546f);
	ADD_TO_VOLUME_SET(bVar1, bVar8);
	ADD_TO_VOLUME_SET(bVar8, bVar11);
	bVar12 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "LowerCenterRoom_set");
	bVar13 = CREATE_VOLUME_IN_LAYOUT(Local_48, "LowerCenterRoom1", 2, -2681.497f, 68.75586f, 3458.396f, 0.0f, 61.68252f, 0.0f, 12.91652f, 3.121711f, 11.23363f);
	ADD_TO_VOLUME_SET(bVar12, bVar13);
	bVar14 = CREATE_VOLUME_IN_LAYOUT(Local_48, "nLongHall1", 2, -2681.466f, 68.75586f, 3462.352f, 0.0f, -118.7087f, 0.0f, 6.805562f, 3.121711f, 14.96912f);
	ADD_TO_VOLUME_SET(bVar1, bVar12);
	ADD_TO_VOLUME_SET(bVar12, bVar14);
	bVar15 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "LowerJail_set");
	bVar16 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Jail", 2, -2698.216f, 68.75586f, 3444.807f, 0.0f, 65.104f, 0.0f, 11.11774f, 3.121711f, 18.03422f);
	ADD_TO_VOLUME_SET(bVar15, bVar16);
	bVar17 = CREATE_VOLUME_IN_LAYOUT(Local_48, "OutsideJail", 2, -2695.105f, 68.29696f, 3438.917f, 0.0f, 65.104f, 0.0f, 2.428887f, 2.628382f, 10.363f);
	ADD_TO_VOLUME_SET(bVar1, bVar15);
	ADD_TO_VOLUME_SET(bVar15, bVar17);
	bVar18 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "LowerAdjacentJail_set");
	bVar19 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Room", 2, -2695.841f, 68.75586f, 3437.706f, 0.0f, 64.43568f, 0.0f, 11.14017f, 3.121711f, 20.11778f);
	ADD_TO_VOLUME_SET(bVar18, bVar19);
	bVar20 = CREATE_VOLUME_IN_LAYOUT(Local_48, "nCourtyard", 3, -2696.249f, 67.26275f, 3431.025f, 0.0f, 47.70912f, 0.0f, 4.476199f, 1.452609f, 10.71597f);
	ADD_TO_VOLUME_SET(bVar1, bVar18);
	ADD_TO_VOLUME_SET(bVar18, bVar20);
	bVar21 = CREATE_VOLUME_IN_LAYOUT(Local_48, "InsideGateRight", 2, -2688.466f, 68.75586f, 3425.296f, 0.0f, 55.81521f, 0.0f, 14.64942f, 3.121711f, 19.75355f);
	ADD_TO_VOLUME_SET(bVar1, bVar21);
	bVar22 = CREATE_VOLUME_SET_IN_LAYOUT(Local_48, "InsideGateRightLower_set");
	bVar23 = CREATE_VOLUME_IN_LAYOUT(Local_48, "Hallway", 2, -2674.262f, 68.75586f, 3411.412f, 0.0f, 46.53292f, 0.0f, 27.57583f, 3.121711f, 2.942706f);
	ADD_TO_VOLUME_SET(bVar22, bVar23);
	bVar24 = CREATE_VOLUME_IN_LAYOUT(Local_48, "MainRoomExtra", 2, -2655.913f, 68.75586f, 3416.27f, 0.0f, 44.23304f, 0.0f, 6.69265f, 3.121711f, 7.771435f);
	ADD_TO_VOLUME_SET(bVar1, bVar22);
	ADD_TO_VOLUME_SET(bVar22, bVar24);
	bVar25 = CREATE_VOLUME_IN_LAYOUT(Local_48, "MainRoomExtra1", 2, -2661.312f, 68.75586f, 3417.455f, 0.0f, 40.3164f, 0.0f, 6.69265f, 3.121711f, 3.056471f);
	ADD_TO_VOLUME_SET(bVar1, bVar22);
	ADD_TO_VOLUME_SET(bVar22, bVar25);
	bVar26 = CREATE_VOLUME_IN_LAYOUT(Local_48, "MainRoom", 2, -2666.974f, 68.75586f, 3411.602f, 0.0f, 44.23304f, 0.0f, 16.36631f, 3.121711f, 14.19216f);
	ADD_TO_VOLUME_SET(bVar1, bVar22);
	ADD_TO_VOLUME_SET(bVar22, bVar26);
	bVar27 = CREATE_VOLUME_IN_LAYOUT(Local_48, "BackCornerLower", 2, -2717.499f, 68.75586f, 3463.094f, 0.0f, 45.7558f, 0.0f, 36.61662f, 3.121711f, 8.771934f);
	ADD_TO_VOLUME_SET(bVar1, bVar27);
	bVar28 = CREATE_VOLUME_IN_LAYOUT(Local_48, "LongHall", 2, -2676.595f, 68.75586f, 3463.307f, 0.0f, -28.60031f, 0.0f, 5.77331f, 3.121711f, 17.01859f);
	ADD_TO_VOLUME_SET(bVar1, bVar28);
	bVar29 = CREATE_VOLUME_IN_LAYOUT(Local_48, "AABossRoom", 2, -2702.106f, 68.75586f, 3463.928f, 0.0f, 45.7558f, 0.0f, 15.20833f, 3.121711f, 14.13456f);
	ADD_TO_VOLUME_SET(bVar1, bVar29);
	bVar30 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SniperTower", 2, -2698.431f, 73.14509f, 3426.549f, 0.0f, 65.37897f, 0.0f, 7.906983f, 3.121711f, 8.135425f);
	ADD_TO_VOLUME_SET(bVar1, bVar30);
	bVar31 = CREATE_VOLUME_IN_LAYOUT(Local_48, "TopRoomRight", 2, -2679.702f, 73.14509f, 3422.962f, -1.224612f, 45.65364f, -2.410956f, 7.906983f, 3.121711f, 11.89626f);
	ADD_TO_VOLUME_SET(bVar1, bVar31);
	bVar32 = CREATE_VOLUME_IN_LAYOUT(Local_48, "TopRoomRight1", 2, -2672.447f, 73.18578f, 3415.54f, -1.741538f, 45.65364f, -2.410956f, 11.51573f, 3.121711f, 11.89626f);
	ADD_TO_VOLUME_SET(bVar1, bVar32);
	bVar33 = CREATE_VOLUME_IN_LAYOUT(Local_48, "TopRoomRight2", 2, -2670.01f, 72.97704f, 3412.037f, 0.1961055f, 45.69614f, 0.0791542f, 19.89993f, 2.772138f, 10.00094f);
	ADD_TO_VOLUME_SET(bVar1, bVar33);
	bVar34 = CREATE_VOLUME_IN_LAYOUT(Local_48, "TopRoomLeft", 2, -2650.377f, 72.85979f, 3452.314f, 0.2635599f, 58.68769f, 0.1639839f, 17.08458f, 2.772138f, 16.53961f);
	ADD_TO_VOLUME_SET(bVar1, bVar34);
	bVar35 = CREATE_VOLUME_IN_LAYOUT(Local_48, "TopRoomCenter", 2, -2669.083f, 72.84749f, 3465.814f, 0.2816511f, 60.90094f, 0.1849135f, 12.19338f, 2.772138f, 16.53961f);
	ADD_TO_VOLUME_SET(bVar1, bVar35);
	Local_48.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_48, "playablespace", 2, -2689.023f, 71.65488f, 3456.174f, 0.0f, -14.26893f, 0.0f, 144.5115f, 81.21339f, 204.7556f);
	Local_48.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_0", 3, -2731.284f, 71.08147f, 3473.158f, 0.0f, 58.14867f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_1", 3, -2667.904f, 67.17664f, 3475.849f, 0.0f, -45.2824f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_124, bVar2);
	Local_48.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_2", 3, -2690.012f, 67.45486f, 3444.122f, 0.0f, -83.21124f, 0.0f, 0.6219181f, 0.7464926f, 0.6219181f);
	Function_264(Local_48.f_128, bVar15);
	Local_48.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_3", 3, -2629.947f, 72.65486f, 3430.634f, 0.0f, -79.94481f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_4", 3, -2653.268f, 67.45825f, 3469.809f, 0.0f, -77.64598f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_136, bVar8);
	Local_48.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_5", 3, -2667.264f, 75.36194f, 3403.951f, 0.0f, 343.0302f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_140, bVar33);
	Local_48.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_6", 3, -2679.938f, 72.82552f, 3504.353f, 0.0f, 182.144f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_7", 3, -2702.086f, 67.45387f, 3456.857f, 0.0f, 1.124683f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_8", 3, -2657.999f, 71.64233f, 3452.712f, 0.0f, 100.1829f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_152, bVar34);
	Local_48.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_9", 3, -2687.549f, 67.56481f, 3461.035f, 0.0f, 104.3695f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_156, bVar12);
	Local_48.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_10", 3, -2663.655f, 71.66587f, 3405.962f, 0.0f, -45.10052f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_11", 3, -2663.99f, 71.65143f, 3466.426f, 0.0f, -87.2681f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_164, bVar35);
	Local_48.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_12", 3, -2699.771f, 67.62444f, 3425.822f, 0.0f, 66.06485f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_168, bVar18);
	Local_48.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_13", 3, -2710.823f, 71.63664f, 3466.897f, 0.0f, 132.5547f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_14", 3, -2699.968f, 75.64647f, 3424.532f, 0.0f, -11.8592f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_15", 3, -2684.284f, 67.43633f, 3430.568f, 0.0f, -93.30106f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_180, bVar21);
	Local_48.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_16", 3, -2705.436f, 67.45518f, 3445.944f, 0.0f, 148.4225f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_184, bVar15);
	Local_48.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_17", 3, -2678.796f, 71.65486f, 3423.998f, 0.0f, 36.66985f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_188, bVar31);
	Local_48.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_18", 3, -2641.654f, 67.46555f, 3430.565f, 0.0f, -132.6625f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_192, bVar3);
	Local_48.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_19", 3, -2708.281f, 67.51769f, 3448.546f, 0.0f, 9.195329f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_20", 3, -2682.374f, 75.19974f, 3421.513f, 0.0f, 90.89454f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_21", 3, -2644.05f, 67.72003f, 3447.935f, 0.0f, 192.5648f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_204, bVar4);
	Local_48.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_22", 3, -2647.889f, 67.46101f, 3457.917f, 0.0f, -212.153f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_208, bVar4);
	Local_48.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_23", 3, -2658.669f, 71.63731f, 3476.398f, 0.0f, 145.1752f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_24", 3, -2689.753f, 67.44294f, 3436.642f, 0.0f, 227.4412f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_216, bVar18);
	Local_48.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_25", 3, -2656.0f, 67.26273f, 3414.142f, 0.0f, -68.15402f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_26", 3, -2678.532f, 67.45486f, 3460.843f, 0.0f, 187.5197f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_224, bVar12);
	Local_48.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_27", 3, -2675.288f, 71.65485f, 3419.414f, 0.0f, 135.7372f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_228, bVar32);
	Local_48.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_28", 3, -2694.798f, 67.40742f, 3438.595f, 0.0f, 63.07874f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_232, bVar18);
	Local_48.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_29", 3, -2683.149f, 67.26276f, 3506.158f, 0.0f, 248.0147f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_30", 3, -2672.01f, 67.37302f, 3409.659f, 0.0f, -44.52126f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_240, bVar22);
	Local_48.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_31", 3, -2731.162f, 67.25236f, 3472.625f, 0.0f, 78.7781f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_244, bVar27);
	Local_48.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_32", 3, -2695.221f, 71.65485f, 3426.641f, 0.0f, -81.93935f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_248, bVar30);
	Local_48.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_33", 3, -2657.824f, 67.26274f, 3476.89f, 0.0f, -166.831f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_252, bVar8);
	Local_48.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_34", 3, -2700.136f, 68.03918f, 3467.528f, 0.0f, 175.677f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_256, bVar29);
	Local_48.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_35", 3, -2648.554f, 71.64233f, 3450.383f, 0.0f, 283.5081f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_260, bVar34);
	Local_48.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_36", 3, -2674.293f, 71.65143f, 3461.398f, 0.0f, 2.296944f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_264, bVar35);
	Local_48.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_37", 3, -2663.831f, 67.26273f, 3418.903f, 0.0f, -180.2993f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_268, bVar22);
	Local_48.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_38", 3, -2653.459f, 67.31102f, 3408.701f, 0.0f, -315.1862f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_39", 3, -2691.01f, 67.2818f, 3515.428f, 0.0f, -237.944f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_40", 3, -2674.714f, 67.45486f, 3463.655f, 0.0f, 148.744f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Function_264(Local_48.f_280, bVar28);
	Local_48.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_41", 3, -2636.0f, 67.26276f, 3416.0f, 0.0f, -402.4866f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_42", 3, -2672.0f, 67.26273f, 3508.0f, 0.0f, -423.2642f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_43", 3, -2676.0f, 67.26274f, 3524.0f, 0.0f, -492.8581f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_44", 3, -2628.0f, 67.26276f, 3396.0f, 0.0f, -402.4866f, 0.0f, 0.7939996f, 0.9530433f, 0.7939996f);
	Local_48.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_48, "v_clear_vol", 2, -2678.236f, 75.4193f, 3449.987f, 0.0f, 47.87524f, 0.0f, 132.3644f, 36.03788f, 95.54613f);
	*(&Local_48 + 304) = { -2670.213f, 74.837f, 3471.576f };
	*(&Local_48 + 304 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_48.f_328 = CREATE_POINT_IN_LAYOUT(Local_48, "Showdown_A", -2670.213f, 74.837f, 3471.576f, 0.0f, 0.0f, 0.0f);
	*(&Local_48 + 332) = { -2666.362f, 75.5f, 3464.424f };
	*(&Local_48 + 332 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_48.f_356 = CREATE_POINT_IN_LAYOUT(Local_48, "Showdown_B", -2666.362f, 75.5f, 3464.424f, 0.0f, 0.0f, 0.0f);
	*(&Local_48 + 360) = { -2698.497f, 67.26274f, 3485.503f };
	*(&Local_48 + 360 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_48.f_384 = CREATE_POINT_IN_LAYOUT(Local_48, "StandoffCenter", -2698.497f, 67.26274f, 3485.503f, 0.0f, 0.0f, 0.0f);
	Local_48.f_388 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_48, 8, 0);
	*(&Local_48 + 392[06]) = { -2685.135f, 71.65488f, 3448.134f };
	*(&Local_48 + 392[06] + 12) = { 0.0f, -116.7043f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_D1", -2685.135f, 71.65488f, 3448.134f, 0.0f, -116.7043f, 0.0f);
	DECOR_SET_INT(bVar36, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_48.f_388);
	*(&Local_48 + 392[16]) = { -2709.719f, 67.26274f, 3478.449f };
	*(&Local_48 + 392[16] + 12) = { 0.0f, -130.0284f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_B1", -2709.719f, 67.26274f, 3478.449f, 0.0f, -130.0284f, 0.0f);
	DECOR_SET_INT(bVar37, "type", true);
	DECOR_SET_INT(bVar37, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_48.f_388);
	*(&Local_48 + 392[26]) = { -2653.955f, 71.65488f, 3465.189f };
	*(&Local_48 + 392[26] + 12) = { 0.0f, -90.51729f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_B2", -2653.955f, 71.65488f, 3465.189f, 0.0f, -90.51729f, 0.0f);
	DECOR_SET_INT(bVar38, "type", true);
	DECOR_SET_INT(bVar38, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_48.f_388);
	*(&Local_48 + 392[36]) = { -2672.189f, 67.26275f, 3485.272f };
	*(&Local_48 + 392[36] + 12) = { 0.0f, -118.3199f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_R1", -2672.189f, 67.26275f, 3485.272f, 0.0f, -118.3199f, 0.0f);
	DECOR_SET_INT(bVar39, "type", true);
	DECOR_SET_INT(bVar39, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_48.f_388);
	*(&Local_48 + 392[46]) = { -2676.119f, 71.65485f, 3423.751f };
	*(&Local_48 + 392[46] + 12) = { 0.0f, -132.3933f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_R2", -2676.119f, 71.65485f, 3423.751f, 0.0f, -132.3933f, 0.0f);
	DECOR_SET_INT(bVar40, "type", true);
	DECOR_SET_INT(bVar40, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_48.f_388);
	*(&Local_48 + 392[56]) = { -2709.113f, 67.26275f, 3496.0f };
	*(&Local_48 + 392[56] + 12) = { 0.0f, 135.1512f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_P1", -2709.113f, 67.26275f, 3496.0f, 0.0f, 135.1512f, 0.0f);
	DECOR_SET_INT(bVar41, "type", true);
	DECOR_SET_INT(bVar41, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_48.f_388);
	*(&Local_48 + 392[66]) = { -2644.882f, 67.46555f, 3423.045f };
	*(&Local_48 + 392[66] + 12) = { 0.0f, -50.24187f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_P2", -2644.882f, 67.46555f, 3423.045f, 0.0f, -50.24187f, 0.0f);
	DECOR_SET_INT(bVar42, "type", true);
	DECOR_SET_INT(bVar42, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_48.f_388);
	*(&Local_48 + 392[76]) = { -2686.803f, 67.26274f, 3468.706f };
	*(&Local_48 + 392[76] + 12) = { 0.0f, 59.31582f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_P3", -2686.803f, 67.26274f, 3468.706f, 0.0f, 59.31582f, 0.0f);
	DECOR_SET_INT(bVar43, "type", true);
	DECOR_SET_INT(bVar43, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_48.f_388);
	*(&Local_48 + 392[86]) = { -2665.677f, 67.25487f, 3459.253f };
	*(&Local_48 + 392[86] + 12) = { 0.0f, 149.2785f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_P4", -2665.677f, 67.25487f, 3459.253f, 0.0f, 149.2785f, 0.0f);
	DECOR_SET_INT(bVar44, "type", true);
	DECOR_SET_INT(bVar44, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_48.f_388);
	*(&Local_48 + 392[96]) = { -2714.029f, 67.26274f, 3486.595f };
	*(&Local_48 + 392[96] + 12) = { 0.0f, 42.29153f, 0.0f };
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_A1", -2714.029f, 67.26274f, 3486.595f, 0.0f, 42.29153f, 0.0f);
	DECOR_SET_INT(bVar45, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_48.f_388);
	*(&Local_48 + 392[106]) = { -2652.095f, 67.26276f, 3439.534f };
	*(&Local_48 + 392[106] + 12) = { 0.0f, 149.4355f, 0.0f };
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_48, "npickup_A2", -2652.095f, 67.26276f, 3439.534f, 0.0f, 149.4355f, 0.0f);
	DECOR_SET_INT(bVar46, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_48.f_388);
	Local_48.f_660 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), Local_48, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -2677.207f, 71.65078f, 3458.951f, 0.0f, 38.50379f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -2678.162f, 71.65559f, 3456.26f, 0.0f, -172.5233f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -2680.414f, 71.656f, 3455.539f, 0.0f, 217.448f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -2680.825f, 71.656f, 3457.71f, 0.0f, -110.541f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -2679.491f, 71.656f, 3456.943f, 0.0f, 200.3873f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2683.506f, 71.656f, 3456.548f, 0.0f, -356.4494f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -2690.426f, 71.656f, 3449.951f, 0.0f, -128.9054f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "rand_idle_stand1", "rand_idle_stand", -2687.525f, 71.656f, 3445.884f, 0.0f, -97.63017f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "smoking_stand_loose", "smoking_stand_loose", -2682.497f, 71.656f, 3452.463f, 0.0f, 123.9893f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "smoking_stand", "smoking_stand", -2684.622f, 71.656f, 3443.94f, 0.0f, 119f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "smoking_stand1", "smoking_stand", -2675.869f, 71.656f, 3456.347f, 0.0f, 89.10627f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_yelling_mid", "stand_yelling_mid", -2682.705f, 71.656f, 3441.249f, 0.0f, 67.81016f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_yelling_mid1", "stand_yelling_mid", -2685.001f, 71.656f, 3440.205f, 0.0f, -117.2839f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -2683.525f, 71.656f, 3444.613f, 0.0f, 193.7507f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -2686.874f, 71.656f, 3454.84f, 0.0f, 109.5341f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "smoking_stand_loose1", "smoking_stand_loose", -2689.134f, 71.656f, 3447.523f, 0.0f, 259.774f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "smoking_stand2", "smoking_stand", -2687.314f, 71.656f, 3448.208f, 0.0f, -26.37167f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "nlean_rail", "nlean_rail", -2679.968f, 71.656f, 3453.318f, 0.0f, -26.87442f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "lean_rail1", "nlean_rail", -2684.778f, 71.656f, 3447.965f, 0.0f, -116.1825f, 0.0f), Local_48.f_660);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "lean_rail2", "nlean_rail", -2689.35f, 71.656f, 3454.408f, 0.0f, -207.6119f, 0.0f), Local_48.f_660);
	return;
}

void Function_264(bool bParam0, bool bParam1) //Position: 0x9B40 / 39744
{
	DECOR_SET_OBJECT(bParam0, "IntSpawn", bParam1);
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0x9B59 / 39769
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

void Function_266(int iParam0) //Position: 0x9BA2 / 39842
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_268("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_267(StackVal, 0);
	return;
}

void Function_267(var uParam0, int iParam1) //Position: 0x9C14 / 39956
{
	Function_23(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_120(StackVal, iParam1);
	}
	return;
}

bool Function_268(char* cParam0) //Position: 0x9C45 / 40005
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_269(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9C64 / 40036
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_270() //Position: 0x9CA6 / 40102
{
	while (!IS_EXITFLAG_SET())
	{
		Function_100();
		if (Function_75())
		{
			Function_54(5935, 5559);
		}
		else
		{
			Function_54(4093, 2253);
		}
		WAIT(0);
	}
	return;
}

bool Function_271() //Position: 0x9CD8 / 40152
{
	return Function_130(2);
}

void Function_272() //Position: 0x9CE2 / 40162
{
	if (Function_271())
	{
		return;
	}
	Function_282();
	Function_280(&iLocal_39, Function_98(), 0, 0);
	while (!Function_274(&iLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_100();
	Function_273();
	return;
}

void Function_273() //Position: 0x9D16 / 40214
{
	while (!Function_130(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_274(int iParam0) //Position: 0x9D31 / 40241
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_279();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_278(iParam0[iVar03], 8);
		}
		else if (Function_277())
		{
			iVar1 = 1;
			Function_278(iParam0[iVar03], 8);
		}
		Function_278(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_15(iParam0[03], 8) || iVar1));
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
				Function_278(iParam0[iVar03], 1);
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
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
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
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
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
	Function_275();
	return 1;
}

void Function_275() //Position: 0xA0AC / 41132
{
	if (!Function_276(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_276(int iParam0) //Position: 0xA0EC / 41196
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_277() //Position: 0xA108 / 41224
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

void Function_278(var uParam0, int iParam1) //Position: 0xA133 / 41267
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_279() //Position: 0xA144 / 41284
{
	if (!Function_276(128))
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

var Function_280(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA186 / 41350
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_281(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_278(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_281(var uParam0, int iParam1, int iParam2) //Position: 0xA1BE / 41406
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_278(uParam0[iVar03], 4);
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

void Function_282() //Position: 0xA282 / 41602
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

