//Decompiled with MagicRDR v1.0
//Function Count : 141
//Statics Count : 589
//Natives Count : 166
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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	float fLocal_14 = 0.0f;
	struct<117> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_177 = 27;
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
	var uLocal_277 = 27;
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
	var uLocal_377 = 27;
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
	var uLocal_477 = 27;
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
	var uLocal_553 = 1;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 5;
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
	struct<9> Local_585 = { 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_13 = 0;
	fLocal_14 = 1.0f;
	SET_TIME_OF_DAY(&Global_99483);
	SET_TIME_ACCELERATION(0.0f);
	Global_131396 = 1;
	if (Function_133())
	{
		Local_47.f_2136 = 180.0f;
		*(&Local_47 + 2140) = Vector(633,242f, 92,778f, 1066,765f);
		Function_98(3225419776, 0, 0);
		Function_96(1);
		if (Function_95(Global_124890, 128))
		{
			Function_93(2, 7400, 1200);
			Function_93(1, 6200, 900);
			Function_93(0, 5400, 600);
			Function_91(2, 9.0f, 500);
			Function_91(1, 12.0f, 250);
			Function_91(0, 30.0f, 100);
		}
		else
		{
			Function_93(2, 3700, 1120);
			Function_93(1, 3000, 820);
			Function_93(0, 2500, 520);
			Function_91(2, 8.0f, 500);
			Function_91(1, 10.0f, 250);
			Function_91(0, 12.0f, 100);
		}
		while (!IS_EXITFLAG_SET())
		{
			if (Function_90(1, 1))
			{
				Function_67(10468);
			}
			else
			{
				Function_66();
				Function_64();
				Function_15(6236, 5977, 3348);
			}
			WAIT(false);
		}
		Function_1();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x11B / 283
{
	Function_11(&Local_47 + 2048);
	Function_11(&Local_47 + 2024);
	if (IS_LAYOUTREF_VALID(&Local_47 + 2016))
	{
		DESTROY_LAYOUT(&Local_47 + 2016);
	}
	Function_8();
	Function_2();
	return;
}

void Function_2() //Position: 0x14C / 332
{
	Function_3();
	return;
}

void Function_3() //Position: 0x155 / 341
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

void Function_4(int iParam0, bool bParam1, int iParam2) //Position: 0x25E / 606
{
	iParam2 = &iParam2;
	if (bParam1)
	{
		Function_6(&Global_120031 + 260, iParam0);
	}
	else
	{
		Function_5(&Global_120031 + 260, iParam0);
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x28A / 650
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2A0 / 672
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_7(int iParam0) //Position: 0x2B1 / 689
{
	return Function_95(Global_120031.f_260, iParam0);
}

void Function_8() //Position: 0x2C3 / 707
{
	int iVar0;
	
	iVar0 = Function_9(0);
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_OBJECT(&iVar0);
	}
	return;
}

int Function_9(int iParam0) //Position: 0x2DF / 735
{
	var uVar0;
	
	uVar0 = FIND_OBJECT_IN_LAYOUT(Function_10(), "EndgameScore");
	if (!IS_OBJECT_VALID(&uVar0) && iParam0)
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, Function_10(), "EndgameScore", *(&Global_124175 + 56), Vector(0.0f, 0.0f, 0.0f));
	}
	return &uVar0;
}

var Function_10() //Position: 0x332 / 818
{
	if (!IS_LAYOUTREF_VALID(&Global_124161))
	{
		Global_124161 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return &Global_124161;
}

void Function_11(int iParam0) //Position: 0x364 / 868
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_12(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_12(struct<2>[] Param0, int iParam1) //Position: 0x38C / 908
{
	if (Function_14(&(Param0[iParam12]), 4))
	{
		if (Function_14(&(Param0[iParam12]), 1))
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
			Function_13(&(Param0[iParam12]), 1);
			Function_13(&(Param0[iParam12]), 2);
			Function_13(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_13(struct<13> Param0) //Position: 0x4D7 / 1239
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_14(struct<13> Param0) //Position: 0x4F4 / 1268
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_15(int iParam0, int iParam1, int iParam2) //Position: 0x512 / 1298
{
	if (Function_7(0x4000000))
	{
		Function_24();
		Function_4(0x4000000, 0, 1);
	}
	if (Function_7(0x10000000))
	{
		Function_24();
		Function_4(0x10000000, 0, 1);
	}
	if (Function_7(2) != Function_7(0x2000000))
	{
		Function_24();
		Function_4(0x2000000, Function_7(2), 1);
	}
	if (Function_23())
	{
		Function_22(!Function_7(16));
	}
	if (Function_7(16))
	{
		Function_16(&iParam0, &iParam1, &iParam2);
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

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x6AB / 1707
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_4(131072, 0, 0);
	Call_Loc(&uParam0);
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
			if (!Function_21(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_19(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(&uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_17(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_17(bVar1, (4294966296 - bVar1), 1))
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
	Call_Loc(&iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0x826 / 2086
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, &iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x838 / 2104
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	uParam2 = 1;
	if (&bParam3)
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0x8A0 / 2208
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_90(iParam1, &bParam2);
	}
	if (!Function_21(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_20(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_120101[bParam088].f_192 && iParam1);
	if (&bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_20(int iParam0) //Position: 0x923 / 2339
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

bool Function_21(bool bParam0) //Position: 0xC3C / 3132
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_123163 + 96)[bParam0] > Global_123163.f_92)
	{
		(*&Global_123163 + 96)[bParam0] = Global_123163.f_92;
		(&Global_123163 + 96[bParam0])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_120101, bParam0);
	}
	return StackVal;
}

void Function_22(bool bParam0) //Position: 0xCDD / 3293
{
	NET_PLAYER_LIST_RESET();
	if (&bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_4(16384, 0, 1);
	return;
}

bool Function_23() //Position: 0xCF8 / 3320
{
	return Function_7(32768);
}

void Function_24() //Position: 0xD05 / 3333
{
	Function_4(32768, 1, 0);
	return;
}

int Function_25() //Position: 0xD14 / 3348
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 4294966296;
	if (Function_23() && Function_7(4))
	{
		Function_26(&iVar0, &iVar1);
	}
	return 1;
}

void Function_26(var uParam0, int iParam1) //Position: 0xD37 / 3383
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	char* cVar11[32];
	var uVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (Function_21(bVar0))
		{
			bVar2 = (bVar2 + Function_51(29, bVar0));
			bVar3 = (bVar3 + Function_51(39, bVar0));
			bVar5 = (bVar5 + Function_51(12, bVar0));
			bVar4 = (bVar4 + Function_51(28, bVar0));
			bVar1 = (bVar1 + Function_48(bVar0));
		}
		bVar0++;
	}
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("coop_total"), Function_47(&iParam1));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(1, bVar2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(2, bVar3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(3, bVar5);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(4, bVar4);
	uParam0++;
	if (vLocal_585.x <= 2)
	{
		return;
	}
	NET_PLAYER_LIST_ADD_ITEM("", Function_47(&iParam1));
	uParam0++;
	Function_46(&iParam1, "coop_time_spent", 0, 0);
	uParam0++;
	if (vLocal_585.x <= 3)
	{
		return;
	}
	if (Function_45(&Global_123099 + 172))
	{
		uVar19 = Function_41(&Global_123099 + 172);
		Function_39(1, uVar19);
		if (Function_37() >= 4294967295)
		{
			iVar6 = Function_36(uVar19);
			if (iVar6 >= 4294967295)
			{
				Function_34(iVar6, &uVar19, &bVar10);
			}
		}
	}
	else
	{
		Function_39(1, 0.0f);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar10);
	bVar0 = false;
	while (bVar0 <= iVar7)
	{
		if (bVar0 < vLocal_585.z)
		{
			Function_32(bVar0, &iVar9, &bVar8);
			Function_46(&iParam1, "", iVar9, 0);
			uParam0++;
			if (bVar0 > vLocal_585.z || vLocal_585.x <= 6)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar8);
			}
		}
		bVar0++;
	}
	Function_46(&iParam1, "COOP_grandTotal", 0, 0);
	uParam0++;
	Function_31(&bVar8, &iVar6, &uVar20);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, I2STR(bVar8));
	switch (iVar6)
	{
		case 0x00000002:
			iVar21 = "COOP_victory_gold";
			break;
		
		case 0x00000001:
			if (Function_37() >= 4294967295)
			{
				iVar21 = "COOP_victory_Silver";
			}
			else
			{
				iVar21 = "XP_COOP_Consolation";
			}
			break;
		
		case 0x00000000:
			if (Function_37() >= 4294967295)
			{
				iVar21 = "COOP_victory_Bronze";
			}
			else
			{
				iVar21 = "XP_COOP_Consolation";
			}
			break;
		
		case 0xFFFFFFFF:
		default:
			iVar21 = "coop_nothing_earned";
			break;
	}
	Function_46(&iParam1, &iVar21, 0, 0);
	uParam0++;
	if (iVar6 >= 4294967295)
	{
		Function_27(iVar6, &uVar22, &bVar10, uVar20);
	}
	else
	{
		bVar10 = false;
	}
	strcpy(&cVar11, "<space>   ", 32);
	stradd(&cVar11, I2STR(bVar10), 32);
	stradd(&cVar11, " <MP_XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar11);
	return;
}

void Function_27(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1028 / 4136
{
	bool bVar0;
	
	uParam1 = Function_30(uParam0);
	uParam2 = Function_28(uParam1, 32, 20);
	uParam1 = Function_28(uParam1, 20, 0);
	if (&bParam3)
	{
		bVar0 = (TO_FLOAT(uParam2) * 0,3f);
		bVar0 = (bVar0 / 5.0f);
		uParam2 = ROUND(bVar0);
		uParam2 *= 5;
	}
}

var Function_28(var uParam0, int iParam1, int iParam2) //Position: 0x1083 / 4227
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_29((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_29(bool bParam0) //Position: 0x10A2 / 4258
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_30(int iParam0) //Position: 0x10AE / 4270
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_131396 + 256 + 12)[iParam0];
}

int Function_31(var uParam0, int iParam1, int iParam2) //Position: 0x10CF / 4303
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_9(0);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	if (!(DECOR_GET_INT_VERBOSE(&uVar0, "total", &uParam0) && DECOR_GET_INT_VERBOSE(&uVar0, "medal", &iVar1)))
	{
		return 0;
	}
	iParam2 = DECOR_GET_BOOL(&uVar0, "casual");
	iParam1 = iVar1;
	return 1;
}

int Function_32(int iParam0, var uParam1, int iParam2) //Position: 0x112A / 4394
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = Function_9(0);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	iVar1 = Function_33(iParam0, 1);
	uVar2 = Function_33(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(&uVar0, &iVar1, &iParam2) && DECOR_GET_INT_VERBOSE(&uVar0, &uVar2, &uParam1)))
	{
		return 0;
	}
	return 1;
}

int Function_33(int iParam0, bool bParam1) //Position: 0x1173 / 4467
{
	int iVar0;
	
	if (bParam1)
	{
		strcpy(&iVar0, "v", 4);
	}
	else
	{
		strcpy(&iVar0, "n", 4);
	}
	straddi(&iVar0, iParam0, 4);
	return &iVar0;
}

void Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x119A / 4506
{
	float fVar0;
	
	fVar0 = Function_35(iParam0);
	iParam2 = FLOOR((fVar0 / 1000.0f));
	uParam1 = (60.0f * (fVar0 - (IntToFloat(iParam2) * 1000.0f)));
	return;
}

var Function_35(int iParam0) //Position: 0x11CE / 4558
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_131396 + 256 + 60)[iParam0];
}

var Function_36(float fParam0) //Position: 0x11EF / 4591
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_34(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_37() //Position: 0x121C / 4636
{
	if (!Function_38())
	{
		return 4294967295;
	}
	return Global_123099.f_188;
}

bool Function_38() //Position: 0x1231 / 4657
{
	return UNK_0xA80C6DE6(&Global_123099);
}

void Function_39(bool bParam0, int iParam1) //Position: 0x123E / 4670
{
	struct<13> Var0;
	
	Function_40(iParam1);
	Var0 = { StackVal, Function_40(iParam1) };
	bVar2 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar2 / 10)), I2STR((bVar2 % 10)), 0);
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

struct<8> Function_40(int iParam0) //Position: 0x146B / 5227
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = iParam0;
	Var0 = FLOOR((bVar2 / 3600.0f));
	while (bVar2 <= 3600.0f)
	{
		bVar2 = (bVar2 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar2 / 60.0f));
	while (bVar2 <= 60.0f)
	{
		bVar2 = (bVar2 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar2);
	Var0.f_12 = (StackVal - IntToFloat(bVar2));
	return StackVal, Var0;
}

var Function_41(vector3 vParam0) //Position: 0x14DA / 5338
{
	if (Function_45(&vParam0))
	{
		if (Function_44(&vParam0))
		{
			return vParam0.z;
		}
		Function_42();
		return (NET_GET_NET_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_42() //Position: 0x15B0 / 5552
{
	if (!Function_43())
	{
	}
	return;
}

bool Function_43() //Position: 0x15BD / 5565
{
	return NET_IS_IN_SESSION();
}

bool Function_44(int iParam0) //Position: 0x15C6 / 5574
{
	return Function_95(iParam0, 2);
}

bool Function_45(int iParam0) //Position: 0x15D4 / 5588
{
	return Function_95(iParam0, 1);
}

void Function_46(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x15E2 / 5602
{
	if (&iParam2 != 0)
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING_BY_HASH(&iParam2), Function_47(&iParam0));
	}
	else
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&iParam1), Function_47(&iParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
	if (&bParam3)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
}

var Function_47(int iParam0) //Position: 0x1637 / 5687
{
	iParam0 = (iParam0 - 1);
	return iParam0 + 1;
}

int Function_48(int iParam0) //Position: 0x164D / 5709
{
	return Function_49(0, iParam0);
}

int Function_49(int iParam0, bool bParam1) //Position: 0x1659 / 5721
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_50(iParam0);
	}
	if (!Function_21(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_120101[bParam188] + 200)[iParam0];
}

int Function_50(int iParam0) //Position: 0x16C0 / 5824
{
	return (*&Global_122919 + 200)[iParam0];
}

int Function_51(int iParam0, bool bParam1) //Position: 0x16D0 / 5840
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_52(iParam0);
	}
	if (!Function_21(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_120101[bParam188] + 376)[iParam0];
}

int Function_52(int iParam0) //Position: 0x173F / 5951
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_122919 + 376)[iParam0];
}

int Function_53(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1759 / 5977
{
	bool bVar0;
	int iVar1;
	
	Function_56(bParam1, uParam2, &uParam3);
	bVar0 = Function_48(bParam0);
	if (!bParam1)
	{
		Function_17(bParam0, bVar0, 0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(5);
	iVar1 = 0;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, bVar0);
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_51(29, bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_51(39, bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_55(bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_51(28, bParam0));
		iVar1++;
		Function_54(iVar1, bParam0);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, bVar0);
	}
	return 0;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x17FA / 6138
{
	if (Function_7(4))
	{
		if (Function_19(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(cParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

int Function_55(bool bParam0) //Position: 0x182D / 6189
{
	return Function_51(12, bParam0);
}

void Function_56(bool bParam0, int iParam1, var uParam2) //Position: 0x183A / 6202
{
	if (bParam0)
	{
		if (Function_23())
		{
			NET_PLAYER_LIST_ADD_ITEM(&uParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_57() //Position: 0x185C / 6236
{
	if (!Function_59(1))
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
	Function_58();
	return 1;
}

void Function_58() //Position: 0x18FA / 6394
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

bool Function_59(bool bParam0) //Position: 0x1937 / 6455
{
	char* cVar0[64];
	
	if (&bParam0)
	{
		if (Function_23() || Function_63(&Global_120031 + 128, &Global_124175))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_120031 + 128, StackVal, StackVal, StackVal, Global_124175, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_23())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_60(Function_23());
	return 1;
}

void Function_60(bool bParam0) //Position: 0x19B9 / 6585
{
	if (bParam0 || Function_7(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_120031);
	}
	if (bParam0 || Function_7(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_120031.f_256);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_7(65536));
		if ((Global_120031.f_256 <= 0 && !bParam0) && ((Function_7(1048576) || Function_7(4)) || Function_90(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_4(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_61(int iParam0) //Position: 0x1A44 / 6724
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_124175, &iParam0);
}

struct<64> Function_62(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, bool bParam26) //Position: 0x1A59 / 6745
{
	char* cVar0[64];
	
	if (&bParam26)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 76) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 76), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_63(int iParam0, int iParam1) //Position: 0x1A9F / 6815
{
	if (IS_STRING_VALID(&iParam0) != IS_STRING_VALID(&iParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(&iParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(&iParam0, &iParam1))
	{
		return 1;
	}
	return 0;
}

void Function_64() //Position: 0x1AD8 / 6872
{
	if (Function_65(32) && Function_7(16))
	{
		if (vLocal_585.x != 12)
		{
			if (!IS_PS3())
			{
				UI_FOCUS("HudGamerList");
			}
		}
		vLocal_585 = 12;
	}
	return;
}

bool Function_65(int iParam0) //Position: 0x1B12 / 6930
{
	return Function_95(StackVal, iParam0);
}

void Function_66() //Position: 0x1B26 / 6950
{
	if (IS_LAYOUTREF_VALID(&Local_47 + 2016))
	{
		DESTROY_LAYOUT(&Local_47 + 2016);
		Function_11(&Local_47 + 2048);
	}
	UNREGISTER_SCRIPT_WITH_AUDIO();
	return;
}

void Function_67(int iParam0) //Position: 0x1B4C / 6988
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
	Function_84(StackVal, 10252, *(&Local_47 + 2140), 1, &iParam0);
	bVar1 = true;
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = IS_PLAYER_CONTROLLABLE(0);
	}
	iVar2 = (Function_50(8) - 1);
	if (iVar2 >= 3)
	{
		iVar2 = (iVar2 - 4);
	}
	if (Function_82(1) && !Function_82(2))
	{
		Function_79("COOP_new_challenges", 0x41200000, 1, 0, 2, 1, 0);
		Function_77(2);
	}
	GET_CAMERA_CHANNEL_POSITION(&Var3, 0);
	fVar7 = GET_CURRENT_GAME_TIME();
	fVar8 = GET_LAST_FRAME_TIME();
	iVar0 = 0;
	while (iVar0 <= Local_47.f_2008)
	{
		if (iVar0 == iVar2)
		{
			iVar5 = 15790320;
			iVar6 = 0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_47[iVar050] + 392))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Local_47[iVar050] + 392);
			}
		}
		else
		{
			iVar5 = 15170838;
			iVar6 = 0;
			if (bVar1)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&Local_47[iVar050] + 392))
				{
					UI_SET_STRING_FORMAT(Function_76(iVar0), UI_GET_STRING("COOP_Select"), UI_GET_STRING(Function_75(Local_47[iVar050].f_344, 0)), 0, 0);
					*(&Local_47[iVar050] + 392) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(Function_76(iVar0), &Local_47[iVar050] + 384, 0, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Local_47[iVar050] + 392))
				{
					Function_74(&(Local_47[iVar250]));
					Function_74(&Local_47[iVar250] + 56);
					Function_73(8, Local_47[iVar050].f_344 + 1);
					iVar2 = iVar0;
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					PRINT_SMALL_FORMAT(2,5f, "COOP_Selected", Function_75(Local_47[iVar050].f_344, 0), 0, 0, 0, 2, 0, 0);
					RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(&Local_47[iVar050] + 352, "HUD_STINGER_TEXT_SELECTION_MASTER"));
					Function_74(&(Local_47[iVar050]));
					Function_74(&Local_47[iVar050] + 56);
					iVar5 = 15790320;
					iVar6 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_47[iVar050] + 392))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Local_47[iVar050] + 392);
			}
		}
		Function_70(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &(Local_47[iVar050]), Vector(fVar8, fVar7, Var3) + Vector(Vector(0.0f, 2,725f, 0.0f), *(&Local_47[iVar050] + 360), &Local_47[iVar050] + 352), 1, 8494, 0, iVar5, iVar0, "", iVar6);
		if (Function_69(&Local_47[iVar050] + 384))
		{
			Function_70(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_47[iVar050] + 56, Vector(fVar8, fVar7, Var3) + Vector(Vector(0.0f, 2,25f, 0.0f), *(&Local_47[iVar050] + 360), &Local_47[iVar050] + 352), Local_47[iVar050].f_372, 7691, 0, iVar5, iVar0, "", iVar6);
		}
		else
		{
			Function_74(&Local_47[iVar050] + 56);
		}
		iVar0++;
	}
	return;
}

var Function_68(int iParam0, int iParam1) //Position: 0x1E0B / 7691
{
	return GET_WEAPON_DISPLAY_NAME((*&Local_47[iParam150] + 112)[iParam0 + 1]);
}

bool Function_69(float fParam0) //Position: 0x1E22 / 7714
{
	bool bVar0;
	float fVar1;
	
	if (IS_VOLUME_VALID(&fParam0))
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				fVar1 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(&fVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&fVar1, &fParam0))
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

void Function_70(struct<53> Param0) //Position: 0x1E6C / 7788
{
	float fVar0;
	struct<2> Var1;
	float fVar3;
	float fVar4;
	struct<2> Var5;
	float fVar7;
	bool bVar8;
	struct<2> Var9;
	bool bVar11;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam3 - Param0.f_52);
		Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0,01f), 0.0f), Param6, StackVal);
		fVar3 = VDIST2(Param1, Var1);
		if (fVar3 > 2,25f || fVar3 <= 625.0f)
		{
			Function_74(&Param0);
			return;
		}
		Param1 = Vector(StackVal, StackVal, StackVal) - Vector(Var1, Param1, StackVal);
		fVar4 = fLocal_14;
		if (iParam8 == 1)
		{
			fVar4 = -1.0f;
		}
		else if (Param0.f_48 != 0 && iParam10)
		{
			fVar4 = 14.0f;
		}
		Var5 = Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 28), Param1, StackVal), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
		*(&Param0 + 28) = Var5;
		fVar7 = (UNK_0xADF7D54B(&Var5) + 3,14159f);
		bVar8 = false;
		if (Param0.f_40 == 0)
		{
			if (fVar0 <= fVar4 && fVar4 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(&uParam5, "HUD_STINGER_TEXT_MASTER"));
				Param0.f_40 = 1;
			}
			fVar7 = (fVar7 + (SIN_DEGREE((100.0f * fVar0)) * 0,1f));
			bVar8 = true;
		}
		else
		{
			Param0.f_44 = (Param0.f_44 + (17.0f * fParam4));
			if (Param0.f_40 == 1)
			{
				if (FABS((Param0.f_44 - fVar7)) <= (3,14159f * 0,5f))
				{
					Param0.f_40 = 2;
					Param0.f_44 = (Param0.f_44 - 3,14159f);
					Param0.f_48++;
					if (Param0.f_48 > iParam8)
					{
						Param0.f_48 = 0;
					}
					Function_74(&Param0);
				}
			}
			else if ((Param0.f_44 - fVar7) <= 0.0f)
			{
				Param0.f_40 = 0;
				Param0.f_52 = fParam3;
				if (Param0.f_44 < fVar7)
				{
					bVar8 = true;
				}
			}
		}
		if (FABS((Param0.f_44 - fVar7)) > 0,0001f)
		{
			return;
		}
		if (bVar8)
		{
			Param0.f_44 = fVar7;
		}
		Var9 = Vector(0,01f, -0,01f, -0,01f);
		ROTATE_VECTOR_XZ(&Var9, Param0.f_44, 1);
		if (!IS_OBJECT_VALID(&Param0))
		{
			Stack.Push(&uParam5);
			Stack.Push(&iParam13);
			Stack.Push(Param0.f_48);
			Stack.Push(&iParam12);
			Call_Loc(&iParam9);
			Param0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, StackVal, Var1, Vector(0.0f, Param0.f_44, 0.0f), iParam11);
			if (&iParam14 >= 4294967295)
			{
				Stack.Push(&uParam5);
				Stack.Push("");
				Stack.Push(Param0.f_48);
				Stack.Push(&iParam12);
				Call_Loc(&iParam9);
				*(&Param0 + 8) = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var9, Var1, StackVal), Vector(0.0f, Param0.f_44, 0.0f), &iParam14);
			}
		}
		else
		{
			bVar11 = Function_71(Param0.f_44);
			SET_OBJECT_POSITION(&Param0, Var1);
			if (!SET_OBJECT_ORIENTATION(StackVal, &Param0, Vector(0.0f, bVar11, 0.0f)))
			{
			}
			if (&iParam14 >= 4294967295)
			{
				SET_OBJECT_POSITION(Vector(StackVal, StackVal, StackVal) + Vector(Var9, Var1, &Param0 + 8));
				if (!SET_OBJECT_ORIENTATION(StackVal, &Param0 + 8, Vector(0.0f, bVar11, 0.0f)))
				{
				}
			}
		}
	}
}

var Function_71(float fParam0) //Position: 0x2120 / 8480
{
	return (fParam0 * 57,29578f);
}

int Function_72(var uParam0, int iParam1) //Position: 0x212E / 8494
{
	uParam0 = uParam0;
	return Function_75(Local_47[iParam150].f_344, 1);
}

void Function_73(int iParam0, int iParam1) //Position: 0x2145 / 8517
{
	(*&Global_122919 + 200)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_120101[GET_LOCAL_SLOT()88] + 200)[iParam0] = iParam1;
	}
	return;
}

void Function_74(int iParam0) //Position: 0x216E / 8558
{
	if (IS_OBJECT_VALID(&iParam0))
	{
		DESTROY_OBJECT(&iParam0);
	}
	if (IS_OBJECT_VALID(&iParam0 + 8))
	{
		DESTROY_OBJECT(&iParam0 + 8);
	}
	return;
}

int Function_75(int iParam0, bool bParam1) //Position: 0x219A / 8602
{
	if (&bParam1)
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

var Function_76(int iParam0) //Position: 0x250E / 9486
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

void Function_77(int iParam0) //Position: 0x25A5 / 9637
{
	Function_78(&Global_131807 + 1308, iParam0);
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x25B7 / 9655
{
	Function_6(&uParam0, iParam1);
	return;
}

void Function_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x25C5 / 9669
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_80(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_80(int iParam0) //Position: 0x2650 / 9808
{
	char* cVar0[16];
	
	if (!Function_81())
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

bool Function_81() //Position: 0x268F / 9871
{
	if (Function_95(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_82(int iParam0) //Position: 0x26AA / 9898
{
	return Function_83(Global_131807.f_1308, iParam0);
}

int Function_83(var uParam0, int iParam1) //Position: 0x26BC / 9916
{
	return (uParam0 && iParam1) == 0;
}

void Function_84(var uParam0, struct<2> Param1, var uParam3, var uParam4) //Position: 0x26C9 / 9929
{
	if (!IS_OBJECT_VALID(&Local_15 + 120))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(&uParam0);
		(&Local_15 + 120) = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(&Local_15 + 120, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_85(StackVal, StackVal, StackVal, Vector(&Local_15, StackVal, StackVal) + Vector(Vector(0.0f, 2,45f, 0.0f), Param1, &Local_15 + 120), 1, 10151, 1, 125, 0, 0, 0);
	Function_85(StackVal, StackVal, StackVal, Vector(&Local_15 + 56, StackVal, StackVal) + Vector(Vector(0.0f, 2,15f, 0.0f), Param1, &Local_15 + 120), uParam3, &uParam4, 1, 180, 180, 180, 0);
}

void Function_85(var uParam0, var uParam1, struct<2> Param2, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) //Position: 0x2755 / 10069
{
	struct<2> Var0;
	var uVar2;
	
	if (GET_CAMERA_CHANNEL_POSITION(&Var0, 0))
	{
		uVar2 = (&iParam9 + (SHIFT_LEFT(&iParam7, 16) + SHIFT_LEFT(&iParam8, 8)));
		Function_70(StackVal, StackVal, &uParam0, Var0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), &uParam1, Param2, uParam4, &uParam5, iParam6, uVar2, &iParam10, "", 0);
	}
}

var Function_86(int iParam0, var uParam1) //Position: 0x27A7 / 10151
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_15.f_112 != iParam0)
	{
		Local_15.f_112 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_87() //Position: 0x280C / 10252
{
	int iVar0;
	
	if (VMAG(*(&Local_47 + 2140)) > 3.0f)
	{
		*(&Local_47 + 2140) = *(&Global_124175 + 56);
	}
	iVar0 = CREATE_PROPSET_IN_LAYOUT(StackVal, &Global_131396 + 256, "TalkingStick", "$/tune/refGroups/refGroups/mp_coop", *(&Local_47 + 2140), Vector(0.0f, Local_47.f_2136, 0.0f));
	Function_88(&iVar0, 1);
	return &iVar0;
}

void Function_88(var uParam0, bool bParam1) //Position: 0x288A / 10378
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
	uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
	ITERATE_IN_LAYOUT(&uVar1, &uVar0);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&iVar2))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&iVar2), bParam1);
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uParam0));
	DESTROY_ITERATOR(&uVar1);
	return;
}

var Function_89(var uParam0, var uParam1) //Position: 0x28E4 / 10468
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return "WW_summary";
}

bool Function_90(int iParam0, bool bParam1) //Position: 0x28FF / 10495
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_91(int iParam0, float fParam1, int iParam2) //Position: 0x2920 / 10528
{
	Function_92(iParam0, (fParam1 + TO_FLOAT(iParam2 * 1000)));
	return;
}

void Function_92(int iParam0, int iParam1) //Position: 0x2936 / 10550
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_131396 + 256 + 60)[iParam0] = iParam1;
	return;
}

void Function_93(int iParam0, int iParam1, bool bParam2) //Position: 0x2958 / 10584
{
	Function_94(iParam0, (iParam1 + SHIFT_LEFT(bParam2, 20)));
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x296D / 10605
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_131396 + 256 + 12)[iParam0] = iParam1;
	return;
}

bool Function_95(var uParam0, int iParam1) //Position: 0x298F / 10639
{
	return (uParam0 && iParam1) == 0;
}

void Function_96(int iParam0) //Position: 0x299C / 10652
{
	Function_97(8, iParam0);
	return;
}

void Function_97(int iParam0, bool bParam1) //Position: 0x29A9 / 10665
{
	if (bParam1)
	{
		Function_6(&Global_131396 + 256 + 8, iParam0);
	}
	else
	{
		Function_5(&Global_131396 + 256 + 8, iParam0);
	}
	return;
}

void Function_98(var uParam0, var uParam1, float fParam2) //Position: 0x29D3 / 10707
{
	struct<2> Var0[5];
	
	Function_132((180.0f + &fParam2), 5.0f);
	Var0[02] = Vector(StackVal, StackVal, StackVal) + Vector(Vector(&uParam0, 0.0f, &uParam1), Vector(StackVal, StackVal, StackVal) + Vector(Function_132((180.0f + &fParam2), 5.0f), *(&Global_124175 + 56), StackVal), StackVal);
	Function_132((120.0f + &fParam2), 5.0f);
	Var0[12] = Vector(StackVal, StackVal, StackVal) + Vector(Vector(&uParam0, 0.0f, &uParam1), Vector(StackVal, StackVal, StackVal) + Vector(Function_132((120.0f + &fParam2), 5.0f), *(&Global_124175 + 56), StackVal), StackVal);
	Function_132((60.0f + &fParam2), 5.0f);
	Var0[22] = Vector(StackVal, StackVal, StackVal) + Vector(Vector(&uParam0, 0.0f, &uParam1), Vector(StackVal, StackVal, StackVal) + Vector(Function_132((60.0f + &fParam2), 5.0f), *(&Global_124175 + 56), StackVal), StackVal);
	Function_132((0.0f + &fParam2), 5.0f);
	Var0[32] = Vector(StackVal, StackVal, StackVal) + Vector(Vector(&uParam0, 0.0f, &uParam1), Vector(StackVal, StackVal, StackVal) + Vector(Function_132((0.0f + &fParam2), 5.0f), *(&Global_124175 + 56), StackVal), StackVal);
	Function_132((90.0f + &fParam2), 1.0f);
	Var0[42] = Vector(StackVal, StackVal, StackVal) + Vector(Vector(&uParam0, 0.0f, &uParam1), Vector(StackVal, StackVal, StackVal) + Vector(Function_132((90.0f + &fParam2), 1.0f), *(&Global_124175 + 56), StackVal), StackVal);
	Function_99(&Var0, 1);
	return;
}

void Function_99(struct<2>[] Param0) //Position: 0x2A99 / 10905
{
	bool bVar1;
	bool bVar2;
	
	*(&Local_47 + 2016) = CREATE_LAYOUT("Coop_Lobby");
	*(&Global_131396 + 256) = &Local_47 + 2016;
	while (!Function_126(&Local_47 + 2048) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_125();
	bVar1 = Function_95(Global_124890, 128);
	bVar2 = (Function_50(8) - 1);
	if (bVar2 == 4294967295)
	{
		if (bVar1)
		{
			Function_73(8, GET_LOCAL_SLOT() + 5);
		}
		else
		{
			Function_73(8, GET_LOCAL_SLOT() + 1);
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
		Function_73(8, bVar2 + 1);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	if (bVar1)
	{
		Local_47.f_2008 = 5;
		Function_100(StackVal, StackVal, StackVal, &(Local_47[050]), Param0[02], Function_123(4, &Local_47 + 2016, *(&Global_124175 + 56), Param0[02]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[150]), Param0[12], Function_123(5, &Local_47 + 2016, *(&Global_124175 + 56), Param0[12]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[250]), Param0[22], Function_123(6, &Local_47 + 2016, *(&Global_124175 + 56), Param0[22]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[350]), Param0[32], Function_123(7, &Local_47 + 2016, *(&Global_124175 + 56), Param0[32]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[450]), Param0[42], Function_123(8, &Local_47 + 2016, *(&Global_124175 + 56), Param0[42]), &bParam1);
	}
	else
	{
		Local_47.f_2008 = 4;
		Function_100(StackVal, StackVal, StackVal, &(Local_47[050]), Param0[02], Function_123(0, &Local_47 + 2016, *(&Global_124175 + 56), Param0[02]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[150]), Param0[12], Function_123(1, &Local_47 + 2016, *(&Global_124175 + 56), Param0[12]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[250]), Param0[22], Function_123(2, &Local_47 + 2016, *(&Global_124175 + 56), Param0[22]), &bParam1);
		Function_100(StackVal, StackVal, StackVal, &(Local_47[350]), Param0[32], Function_123(3, &Local_47 + 2016, *(&Global_124175 + 56), Param0[32]), &bParam1);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_100(struct<345> Param0) //Position: 0x2D0A / 11530
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<9> Var6;
	
	*(&Param0 + 112) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_109(bParam3, &Param0 + 372) };
	Param0.f_344 = bParam3;
	if (bParam3 != 8)
	{
		*(&Param0 + 352) = Function_105(&uParam4, &Param1, fParam5, &Param0 + 112, &bParam6);
	}
	else
	{
		*(&Param0 + 352) = Function_103(&uParam4, &Param1, (fParam5 + 180.0f), &bParam6);
		Var0 = Vector(0,2f, 1,2f, 0,1f);
		Var2 = Vector(-10.0f, 0.0f, 0.0f);
		iVar8 = ((SHIFT_LEFT(255, 24) + SHIFT_LEFT(false, 16)) + SHIFT_LEFT(false, 8));
		GET_OBJECT_RELATIVE_POSITION(&Param0 + 352, Var0, &Var4);
		GET_OBJECT_RELATIVE_ORIENTATION(&Param0 + 352, Var2, &vVar6);
		CREATE_MP_TEXT(StackVal, &Param0 + 352, "", "Custom_deco", Var4, Vector(Function_102(vVar6.x), Function_102(vVar6.y), Function_102(vVar6.z)), iVar8);
	}
	*(&Param0 + 360) = Param1;
	Param0.f_52 = GET_CURRENT_GAME_TIME();
	(&Param0 + 56)->f_52 = (GET_CURRENT_GAME_TIME() + (0,1f * TO_FLOAT(bParam3)));
	*(&Param0 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam4, "", 3, *(&Param0 + 360), Vector(0.0f, 0.0f, 0.0f), Vector(2,5f, 3.0f, 2,5f));
	uVar13 = Function_101(bParam3, &Var9, &Var11);
	if (STRING_LENGTH(&uVar13) >= 0)
	{
		uVar14 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, fParam5, 0.0f), Var11, Vector("", &uParam4, StackVal) + Vector(*(&Param0 + 360), Var9, &uVar13)), true);
		if (IS_OBJECT_VALID(&uVar14))
		{
			ATTACH_OBJECTS(&uVar14, &Param0 + 352, "", Var9, Var11, 4294967295);
		}
	}
}

var Function_101(bool bParam0, float fParam1, int iParam2) //Position: 0x2EAD / 11949
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000000:
			fParam1 = Vector(0,2046675f, 1,532547f, -0,2487722f);
			iParam2 = Vector(169,4265f, 0,8832794f, -175,2791f);
			return "p_gen_hat01x";
			break;
		
		case 0x00000005:
		case 0x00000001:
			return "";
		
		case 0x00000007:
		case 0x00000003:
			fParam1 = Vector(0,3295048f, 1,381993f, -0,2406348f);
			iParam2 = Vector(26,62852f, 177,48f, -6,970736f);
			return "p_gen_hat03x";
		
		case 0x00000006:
		case 0x00000002:
			fParam1 = Vector(0,188344f, 1,438419f, 0,1520461f);
			iParam2 = Vector(-17,79215f, 176,5549f, -0,2478271f);
			return "p_gen_hat02x";
			break;
	}
	return "";
}

float Function_102(float fParam0) //Position: 0x2F9F / 12191
{
	return (fParam0 * 0,01745329f);
}

var Function_103(var uParam0, struct<2> Param1, bool bParam3) //Position: 0x2FAD / 12205
{
	var uVar0;
	struct<2> Var2;
	struct<2> Var4;
	
	Var2 = Param1;
	if (&bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&Var2, 2.0f, &Param1, &uVar0))
		{
			Param1 = Var2;
		}
	}
	else
	{
		Param1 = Var2;
	}
	Var4 = Vector(0,2f, 0.0f, -0,065f);
	ROTATE_VECTOR_XZ(&Var4, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", &uParam0, StackVal) + Vector(Var4, Param1, Function_104()), Vector(0.0f, (bParam2 + 180.0f), 0.0f), true);
}

var Function_104() //Position: 0x301E / 12318
{
	return "$/fragments/p_gen_dressForm01x";
}

var Function_105(float fParam0, struct<2> Param1, var[] uParam3, float fParam4) //Position: 0x3045 / 12357
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	var uVar7;
	int iVar8[3];
	
	uVar0 = Function_103(&fParam0, &Param1, fParam2, &fParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_108(uParam3[iVar1], &iVar2))
		{
			iVar8[iVar2]++;
			if (iVar8[iVar2] == 2)
			{
				iVar8[iVar2] = 3;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_108(uParam3[iVar1], &iVar2))
		{
			if (Function_106(uParam3[iVar1], &Var3, &Var5, (iVar8[iVar2] - 1)))
			{
				uVar7 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, fParam2, 0.0f), Var5, Vector("", &uVar0, StackVal) + Vector(Param1, Var3, GET_WEAPON_FRAGMENT_NAME(uParam3[iVar1]))), true);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar7, 0);
				if (IS_OBJECT_VALID(&uVar7))
				{
					ATTACH_OBJECTS(&uVar7, &uVar0, "", Var3, Var5, 4294967295);
				}
				iVar8[iVar2] = (iVar8[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return &uVar0;
}

bool Function_106(bool bParam0, float fParam1, int iParam2, int iParam3) //Position: 0x3144 / 12612
{
	if (!Function_107(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				fParam1 = Vector(0,08916403f, 0,8989502f, 0,07509536f);
				iParam2 = Vector(-60,09727f, -101,49f, 47,60939f);
			}
			else
			{
				fParam1 = Vector(0,02631292f, 0,8451666f, -0,1088216f);
				iParam2 = Vector(81,3988f, -1,648355f, -169,4713f);
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				fParam1 = Vector(0,3568475f, 1,28952f, -0,22761f);
				iParam2 = Vector(-124,3062f, 85,737f, -40,141f);
			}
			else if (iParam3 == 2)
			{
				fParam1 = Vector(0,06225565f, 1,28952f, -0,22761f);
				iParam2 = Vector(-219,3702f, -86,19345f, 135,0233f);
			}
			else
			{
				fParam1 = Vector(0,3401467f, 1,258268f, -0,22761f);
				iParam2 = Vector(-91,1388f, 85,737f, -40,141f);
			}
			return 1;
			break;
		
		case 0x00000030:
			fParam1 = Vector(0,4015671f, 0,9808789f, -0,01462308f);
			iParam2 = Vector(-122,852f, 27,893f, 5,454f);
			return 1;
			break;
		
		case 0x0000002F:
			fParam1 = Vector(0,3715671f, 0,8808789f, -0,1146231f);
			iParam2 = Vector(57,148f, 27,893f, 5,454f);
			return 1;
			break;
	}
	return 0;
}

bool Function_107(int iParam0) //Position: 0x32E3 / 13027
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_108(bool bParam0, int iParam1) //Position: 0x32F5 / 13045
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			iParam1 = 0;
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			iParam1 = 1;
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			iParam1 = 2;
			return 1;
			break;
	}
	return 0;
}

struct<116> Function_109(int iParam0, int iParam1) //Position: 0x3354 / 13140
{
	struct<29> Var0;
	
	Var0 = 27;
	Function_120(&Var0);
	Function_117(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 9, 10, 1);
				Function_117(&Var0, 2, 0, 6, 1);
				iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 11, 6, 1);
				Function_117(&Var0, 2, 0, 8, 1);
				iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 17, 10, 1);
				Function_117(&Var0, 2, 5, 6, 1);
				Function_117(&Var0, 3, 24, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 18, 10, 1);
				Function_117(&Var0, 2, 5, 8, 1);
				Function_117(&Var0, 3, 24, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 19, 20, 0);
				Function_117(&Var0, 2, 4, 8, 1);
				Function_117(&Var0, 3, 25, 6, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 20, 20, 0);
				Function_117(&Var0, 2, 4, 10, 1);
				Function_117(&Var0, 3, 25, 6, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 6, 10, 1);
				Function_117(&Var0, 2, 8, 8, 1);
				Function_117(&Var0, 3, 23, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_116(iParam0, &Var0, &iParam1))
			{
				Function_117(&Var0, 1, 2, 10, 1);
				Function_117(&Var0, 2, 8, 9, 1);
				Function_117(&Var0, 3, 23, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_110(&Var0, &iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_110(int iParam0, int iParam1) //Position: 0x354A / 13642
{
	int iVar0;
	int iVar1[17];
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	char* cVar24[32];
	struct<5> Var32;
	
	iParam1 = 1;
	Function_117(&iParam0, iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_131807.f_1316)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_115(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_114(&Global_131396 + 520, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			iParam1++;
			Function_117(StackVal, &iParam0, iParam1, iVar19, 1);
		}
		iVar0++;
	}
	if (DECOR_GET_INT_VERBOSE(Function_10(), "DLCFM_Weapon", &iVar21))
	{
		iVar23 = 0;
		while (iVar23 <= iVar21)
		{
			strcpy(&cVar24, "DLCFM_Weapon_", 32);
			straddi(&cVar24, iVar23, 32);
			if (DECOR_GET_INT_VERBOSE(Function_10(), &cVar24, &uVar22))
			{
				Function_111(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_115(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				iParam1++;
				Function_117(&iParam0, iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

void Function_111(var uParam0, struct<5> Param1) //Position: 0x3692 / 13970
{
	Param1 = Function_28(uParam0, Function_112(), 0);
	Param1.f_4 = Function_28(uParam0, Function_112() + 8, Function_112());
	return;
}

int Function_112() //Position: 0x36B7 / 14007
{
	return Function_113(39);
}

int Function_113(int iParam0) //Position: 0x36C2 / 14018
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int Function_114(int iParam0, int iParam1) //Position: 0x36F0 / 14064
{
	if (Function_115(iParam1, 1))
	{
		return (*&iParam0 + 464)[iParam1];
	}
	return 0;
}

bool Function_115(int iParam0, int iParam1) //Position: 0x370B / 14091
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

bool Function_116(int iParam0, var uParam1, int iParam2) //Position: 0x371F / 14111
{
	if (Function_95(Global_124175.f_72, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_117(&uParam1, 1, 10, 5, 1);
				Function_117(&uParam1, 2, 7, 4, 1);
				Function_117(&uParam1, 3, 18, 2, 1);
				iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_117(&uParam1, 1, 17, 6, 1);
				Function_117(&uParam1, 2, 6, 4, 1);
				Function_117(&uParam1, 3, 24, 6, 1);
				iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_117(&uParam1, 1, 13, 8, 1);
				Function_117(&uParam1, 2, 16, 9, 1);
				Function_117(&uParam1, 3, 2, 3, 1);
				iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_117(&uParam1, 1, 3, 6, 1);
				Function_117(&uParam1, 2, 15, 12, 1);
				Function_117(&uParam1, 3, 24, 3, 1);
				iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_117(int[] iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x380F / 14351
{
	if (!Function_119(iParam1))
	{
		return;
	}
	Function_118(&(iParam0[iParam1]), bParam2, iParam3, &bParam4);
}

void Function_118(struct<5> Param0) //Position: 0x3834 / 14388
{
	Param0 = bParam1;
	if (&bParam3)
	{
		Param0.f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		Param0.f_4 = iParam2;
	}
}

bool Function_119(int iParam0) //Position: 0x3862 / 14434
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_120(struct<225> Param0) //Position: 0x3872 / 14450
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_122(&(Param0[iVar0]));
		iVar0++;
	}
	Param0.f_224 = 0;
	Function_121(&Param0, 0.0f);
	return;
}

void Function_121(struct<229> Param0) //Position: 0x38A2 / 14498
{
	Param0.f_228 = iParam1;
	return;
}

void Function_122(int iParam0) //Position: 0x38AF / 14511
{
	Function_118(&iParam0, 4294967295, 0, 1);
	return;
}

float Function_123(struct<2> Param0, struct<2> Param2) //Position: 0x38BE / 14526
{
	var uVar0;
	
	Function_124(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_124(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x38D8 / 14552
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_125() //Position: 0x38FC / 14588
{
	Local_15.f_112 = 4294967295;
	Local_15.f_116 = 4294967295;
	return;
}

bool Function_126(struct<2>[] Param0) //Position: 0x390C / 14604
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_131();
	iVar1 = 0;
	if (!Function_14(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_130(&(Param0[iVar02]), 8);
		}
		else if (Function_129())
		{
			iVar1 = 1;
			Function_130(&(Param0[iVar02]), 8);
		}
		Function_130(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_14(&(Param0[iVar02]), 4))
		{
			if (!Function_14(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_14(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_14(&(Param0[02]), 8) || iVar1));
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
				Function_130(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_14(&(Param0[iVar02]), 4))
		{
			if (!Function_14(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_130(&(Param0[iVar02]), 2);
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
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_130(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_130(&(Param0[iVar02]), 2);
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
	Function_127();
	return 1;
}

void Function_127() //Position: 0x3CCE / 15566
{
	if (!Function_128(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_128(int iParam0) //Position: 0x3D0E / 15630
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_129() //Position: 0x3D2A / 15658
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

void Function_130(struct<13> Param0) //Position: 0x3D58 / 15704
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_131() //Position: 0x3D6B / 15723
{
	if (!Function_128(128))
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

struct<8> Function_132(float fParam0, float fParam1) //Position: 0x3DAD / 15789
{
	return StackVal, Vector((SIN_DEGREE((180.0f + fParam0)) * fParam1), 0.0f, (COS_DEGREE((180.0f + fParam0)) * fParam1));
}

bool Function_133() //Position: 0x3DD1 / 15825
{
	var uVar0;
	var uVar2;
	int iVar3;
	
	if (Function_140())
	{
		while (!IS_EXITFLAG_SET())
		{
			Function_138(6236, 5977);
			WAIT(false);
		}
		return 0;
	}
	if (Function_95(Global_124175.f_72, 4194304))
	{
		Function_136(&Local_47 + 2024, "dlc_zombiepack_mp_gy", 10, 0);
	}
	else
	{
		Function_136(&Local_47 + 2024, "dlc_mpcooppack_mp_coop", 10, 0);
	}
	Function_136(&Local_47 + 2048, Function_104(), 0, 0);
	iVar3 = 0;
	while (iVar3 <= 5)
	{
		uVar2 = Function_101(iVar3, &uVar0, &uVar0);
		if (STRING_LENGTH(&uVar2) >= 0)
		{
			Function_136(&Local_47 + 2048, &uVar2, 0, 0);
		}
		iVar3++;
	}
	Function_126(&Local_47 + 2048);
	while (!Function_126(&Local_47 + 2024) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_135("nCOOP_help", 4294967295);
	Function_134();
	if (!Function_95(Global_132499, 2147483648))
	{
		Function_6(&Global_132499, 2147483648);
		Function_79("COOP_lobby_help", 0x41200000, 1, 0, 2, 1, 0);
	}
	return 1;
}

void Function_134() //Position: 0x3F05 / 16133
{
	while (!Function_65(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_135(char* cParam0) //Position: 0x3F20 / 16160
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (&Param1 == 4294967295)
	{
		strcpy(&cVar0, &cParam0, 32);
		stradd(&cVar0, "_count", 32);
		Param1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_10991 == 0)
	{
		Global_10991 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, &cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_10991 % &Param1)), 32);
	Global_10991++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

var Function_136(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x3FBC / 16316
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_137(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_130(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_137(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x3FFA / 16378
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_14(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_130(&(Param0[iVar02]), 4);
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

void Function_138(var uParam0, var uParam1) //Position: 0x40CA / 16586
{
	Function_15(&uParam0, &uParam1, 16605);
	return;
}

int Function_139() //Position: 0x40DD / 16605
{
	return 1;
}

bool Function_140() //Position: 0x40E4 / 16612
{
	return Function_65(2);
}

