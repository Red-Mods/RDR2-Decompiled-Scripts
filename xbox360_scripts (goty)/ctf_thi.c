//Decompiled with MagicRDR v1.0
//Function Count : 256
//Statics Count : 559
//Natives Count : 238
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_216 = 14;
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
	int iLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 5;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = -1;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = -1;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = -1;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 44;
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
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_245();
	if (Function_244())
	{
		Function_243();
	}
	else
	{
		if (Function_101())
		{
			Function_100(1);
		}
		else
		{
			Function_99(1);
		}
		Function_98(0, 15);
		bVar0 = CREATE_WORLD_SECTOR(Local_51, "thievesLanding");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_97(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_96(64, 0);
					iVar1 = 10;
				}
			}
			Function_83(&uLocal_332);
			Function_22();
			Function_19();
			WAIT(0);
		}
	}
	Function_17(&uLocal_332);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_thi_base01x", 0);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_thi_ffa01x", 0);
	DISABLE_CHILD_SECTOR("mp_thi_ffa01x");
	DISABLE_CHILD_SECTOR("mp_thi_base01x");
	Function_8();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xFE / 254
{
	Function_2(uLocal_302);
	return;
}

int Function_2(bool bParam0) //Position: 0x10B / 267
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x121 / 289
{
	Function_4(&Local_51 + 4);
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_4(int iParam0) //Position: 0x133 / 307
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x159 / 345
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x287 / 647
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x2A1 / 673
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x2BE / 702
{
	Function_16();
	Function_4(&bLocal_39);
	Function_9();
	return;
}

void Function_9() //Position: 0x2CF / 719
{
	Function_10();
	return;
}

void Function_10() //Position: 0x2D8 / 728
{
	if (Function_14(4194304))
	{
		Function_11(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_14(8388608))
	{
		Function_11(8388608, 0, 1);
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

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x3E1 / 993
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_12(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x409 / 1033
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x41C / 1052
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_14(bool bParam0) //Position: 0x42B / 1067
{
	return Function_15(Global_76905.f_132, bParam0);
}

bool Function_15(var uParam0, bool bParam1) //Position: 0x43C / 1084
{
	return (uParam0 && bParam1) == 0;
}

void Function_16() //Position: 0x449 / 1097
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_17(int iParam0) //Position: 0x488 / 1160
{
	Function_96(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x499 / 1177
{
	if (iParam0->f_900 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_900, 0);
		iParam0->f_900 = "";
	}
	return;
}

void Function_19() //Position: 0x4B9 / 1209
{
	Function_20(2);
	return;
}

void Function_20(int iParam0) //Position: 0x4C3 / 1219
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
			Function_21(iParam0);
		}
	}
	return;
}

void Function_21(var uParam0) //Position: 0x4F5 / 1269
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_22() //Position: 0x504 / 1284
{
	Function_81();
	if (Function_80(1, 1))
	{
		Function_64(StackVal, StackVal, 6575, vLocal_48, 1, 6462);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_59(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_25(4499, 3489);
		Function_23();
	}
	return;
}

void Function_23() //Position: 0x54F / 1359
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_24(&Local_12);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x56B / 1387
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

void Function_25(int iParam0, int iParam1) //Position: 0x591 / 1425
{
	Function_26(iParam0, iParam1, 3482);
	return;
}

void Function_26(var uParam0, var uParam1, int iParam2) //Position: 0x5A2 / 1442
{
	if (Function_14(0x4000000))
	{
		Function_35();
		Function_11(0x4000000, 0, 1);
	}
	if (Function_14(0x10000000))
	{
		Function_35();
		Function_11(0x10000000, 0, 1);
	}
	if (Function_14(2) != Function_14(0x2000000))
	{
		Function_35();
		Function_11(0x2000000, Function_14(2), 1);
	}
	if (Function_34())
	{
		Function_33(!Function_14(16));
	}
	if (Function_14(16))
	{
		Function_27(&uParam0, &uParam1, &iParam2);
		if (Function_14(8192))
		{
			if (!Function_14(4194304))
			{
				Function_11(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_14(8388608))
			{
				Function_11(8388608, 1, 1);
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
			Function_10();
		}
		Function_11(16384, 1, 1);
	}
	else if (!Function_14(32))
	{
		Function_10();
	}
	Function_11(32768, 0, 1);
	return;
}

void Function_27(var uParam0, var uParam1, int iParam2) //Position: 0x73B / 1851
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_11(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_14(0x40000000);
	bVar3 = !Function_14(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_32(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_30(bVar1, 2048, 1))
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
				if (Function_28(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_14(4))
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
			if (Function_28(bVar1, (4294966296 - bVar1), 1))
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

bool Function_28(bool bParam0, int iParam1, int iParam2) //Position: 0x8B3 / 2227
{
	var uVar0;
	
	return Function_29(bParam0, iParam1, &uVar0, iParam2);
}

int Function_29(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8C4 / 2244
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

bool Function_30(bool bParam0, int iParam1, bool bParam2) //Position: 0x929 / 2345
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_80(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_31(iParam1), 64);
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

var Function_31(int iParam0) //Position: 0x9AA / 2474
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

bool Function_32(bool bParam0) //Position: 0xCC3 / 3267
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

void Function_33(bool bParam0) //Position: 0xD64 / 3428
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_34() //Position: 0xD7E / 3454
{
	return Function_14(32768);
}

void Function_35() //Position: 0xD8B / 3467
{
	Function_11(32768, 1, 0);
	return;
}

int Function_36() //Position: 0xD9A / 3482
{
	return 1;
}

int Function_37(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xDA1 / 3489
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_51(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_50(bParam0);
	bVar2 = Function_49(bParam0);
	bVar3 = Function_46(bParam0);
	iVar4 = Function_45(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_28(bParam0, iVar4, 0);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_43(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_40(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_39(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	if (Function_34() && Function_38())
	{
	}
	return 0;
}

var Function_38() //Position: 0xE62 / 3682
{
	return (Function_14(4096) || Function_14(4));
}

void Function_39(bool bParam0, bool bParam1) //Position: 0xE73 / 3699
{
	if (Function_14(4))
	{
		if (Function_30(bParam1, 1024, 1))
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

bool Function_40(bool bParam0, int iParam1, bool bParam2) //Position: 0xEA6 / 3750
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_42(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_41(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_128 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_41(int iParam0) //Position: 0xF27 / 3879
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
			break;
		
		case 0x00000002:
			return "nFRD_SPOON";
			break;
		
		case 0x00000004:
			return "FRD_IN_VOL";
			break;
		
		case 0x00000008:
			return "MP_TRANSIENT_BIT_FRD_IN_SPOONHOLDER_POSSE";
			break;
		
		case 0x00100000:
			return "IN_AIR";
			break;
		
		case 0x00200000:
			return "MOUNTED";
			break;
		
		case 0x00400000:
			return "KILLED BY BLINDFIRE";
			break;
		
		case 0x00800000:
			return "KILLED IN COVER";
			break;
	}
	return "UNKNOWN";
}

var Function_42(int iParam0, bool bParam1) //Position: 0x1019 / 4121
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_43(int iParam0, bool bParam1) //Position: 0x1039 / 4153
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_44(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_44(int iParam0) //Position: 0x10A7 / 4263
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_45(int iParam0, int iParam1, int iParam2) //Position: 0x10C0 / 4288
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_46(int iParam0) //Position: 0x10D5 / 4309
{
	return Function_47(0, iParam0);
}

int Function_47(int iParam0, bool bParam1) //Position: 0x10E1 / 4321
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_48(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_48(int iParam0) //Position: 0x1148 / 4424
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_49(bool bParam0) //Position: 0x1158 / 4440
{
	return Function_43(12, bParam0);
}

int Function_50(int iParam0) //Position: 0x1165 / 4453
{
	return Function_43(11, iParam0);
}

void Function_51(bool bParam0, int iParam1, char* cParam2) //Position: 0x1172 / 4466
{
	if (bParam0)
	{
		if (Function_34())
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

int Function_52() //Position: 0x1193 / 4499
{
	if (!Function_54(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_53();
	return 1;
}

void Function_53() //Position: 0x122C / 4652
{
	if (Function_14(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_11(8192, 1, 1);
	}
	else if (Function_14(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_11(8192, 1, 1);
	}
	else
	{
		Function_11(8192, 0, 1);
	}
	return;
}

bool Function_54(bool bParam0) //Position: 0x1269 / 4713
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_34() || Function_58(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_34())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_55(Function_34());
	return 1;
}

void Function_55(bool bParam0) //Position: 0x12EA / 4842
{
	if (bParam0 || Function_14(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_14(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_14(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_14(1048576) || Function_14(4)) || Function_80(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_56(int iParam0) //Position: 0x1373 / 4979
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_57(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1387 / 4999
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

int Function_58(bool bParam0, bool bParam1) //Position: 0x13CC / 5068
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

void Function_59(vector3 vParam0, float fParam3) //Position: 0x1400 / 5120
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_63(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_63(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_60(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_60(bool bParam0) //Position: 0x14B3 / 5299
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
	return Function_61(bVar0);
}

int Function_61(bool bParam0) //Position: 0x14EE / 5358
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
	Function_62(bVar0);
	return bVar0;
}

void Function_62(bool bParam0) //Position: 0x153C / 5436
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_63() //Position: 0x154F / 5455
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_64(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x157E / 5502
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_65(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 6361, 1, 125, 0, 0, 0);
	Function_65(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_65(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1601 / 5633
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_66(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_66(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x164C / 5708
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
			Function_24(iParam0);
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
					Function_24(iParam0);
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
			fVar14 = Function_67(iParam0->f_36);
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

var Function_67(float fParam0) //Position: 0x18CB / 6347
{
	return (fParam0 * 57.29578f);
}

var Function_68(int iParam0, var uParam1) //Position: 0x18D9 / 6361
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_69(int iParam0, var uParam1) //Position: 0x193E / 6462
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_mul_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_70() //Position: 0x19AF / 6575
{
	int iVar0;
	
	iVar0 = Function_76(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_71(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_71(bool bParam0, int iParam1) //Position: 0x19DC / 6620
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_75(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_74((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_74((*iParam1)[iVar202], &iVar21))
		{
			if (Function_72((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_72(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1AEB / 6891
{
	float fVar0;
	
	if (!Function_73(bParam0))
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

bool Function_73(int iParam0) //Position: 0x1C12 / 7186
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_74(bool bParam0, int iParam1) //Position: 0x1C24 / 7204
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

var Function_75() //Position: 0x1C80 / 7296
{
	int iVar0;
	
	return iVar0;
}

var Function_76(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1C88 / 7304
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_78(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_74((*uParam3)[iVar12], &iVar2))
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
		if (Function_74((*uParam3)[iVar12], &iVar2))
		{
			if (Function_77((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_77(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1D76 / 7542
{
	if (!Function_73(bParam0))
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

var Function_78(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F07 / 7943
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_79()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_79() //Position: 0x1F73 / 8051
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_80(bool bParam0, bool bParam1) //Position: 0x1F9A / 8090
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_81() //Position: 0x1FBA / 8122
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000009:
						Function_82("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_82("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_82("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_16();
	}
	return;
}

void Function_82(char* cParam0, int iParam1) //Position: 0x204F / 8271
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

int Function_83(int iParam0) //Position: 0x20E6 / 8422
{
	int iVar0;
	
	if (!Function_94(*iParam0) || (Function_97(64) && Function_90()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_94(*iParam0))
		{
		}
		if (Function_97(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_94(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 900);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_896)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_87(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_12(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_896)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_896)
				{
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_86((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_85((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_896)
			{
				iParam0->f_904 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_904) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_18(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_84(3, iParam0->f_896))
			{
				if (iParam0->f_896 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_896);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_13(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_15((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_15((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_15((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_84(int iParam0, bool bParam1) //Position: 0x246D / 9325
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_85(bool bParam0, bool bParam1) //Position: 0x247F / 9343
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

void Function_86(bool bParam0, bool bParam1) //Position: 0x24D3 / 9427
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

int Function_87(var uParam0, var uParam1, int iParam2) //Position: 0x2524 / 9508
{
	return Function_88(Global_29006, uParam0, uParam1, iParam2);
}

int Function_88(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2536 / 9526
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_89(iParam0))
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

bool Function_89(int iParam0) //Position: 0x25D2 / 9682
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_90() //Position: 0x25E8 / 9704
{
	return !Function_91();
}

bool Function_91() //Position: 0x25F2 / 9714
{
	if (Function_93())
	{
		return (Function_92() != 1 || Function_92() != 0);
	}
	return 0;
}

int Function_92() //Position: 0x260B / 9739
{
	return Global_79349.f_16;
}

bool Function_93() //Position: 0x2617 / 9751
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_94(int iParam0) //Position: 0x2620 / 9760
{
	if (!Function_89(iParam0))
	{
		return 1;
	}
	return Function_95(&(Global_29008[iParam0]), 4);
}

int Function_95(var uParam0, int iParam1) //Position: 0x263C / 9788
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_96(int iParam0, bool bParam1) //Position: 0x2658 / 9816
{
	if (bParam1)
	{
		Function_13(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_12(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_97(int iParam0) //Position: 0x2680 / 9856
{
	return Function_15(StackVal, iParam0);
}

void Function_98(int iParam0, int iParam1) //Position: 0x2693 / 9875
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_99(bool bParam0) //Position: 0x26B4 / 9908
{
	Function_96(16, bParam0);
	return;
}

void Function_100(var uParam0) //Position: 0x26C1 / 9921
{
	Function_96(8, uParam0);
	return;
}

bool Function_101() //Position: 0x26CE / 9934
{
	Function_242(&iLocal_303, 0, 9, 30, 0, 0, 1);
	Function_242(&iLocal_303, 1, 9, 30, 2, 2, 1);
	Function_242(&iLocal_303, 2, 11, 0, 1, 2, 2);
	Function_242(&iLocal_303, 3, 11, 0, 1, 1, 0);
	Function_242(&iLocal_303, 4, 23, 0, 1, 0, 1);
	Function_234(&iLocal_303);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_232();
	ENABLE_CHILD_SECTOR("mp_thi_base01x");
	ENABLE_CHILD_SECTOR("mp_thi_ffa01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_thi_base01x", 1);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_thi_ffa01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_228(Local_51))
	{
		return 0;
	}
	Function_227("FTR_SONG_09", "FTR_SONG_03", 0, 58, 58, 1);
	Function_225(Local_51.f_1000);
	Function_218(&Global_83591 + 276, 0);
	Function_216(&Global_83591, 1, 22, 1, 1);
	Function_216(&Global_83591, 2, 1, 10, 1);
	Function_216(&Global_83591, 3, 17, 15, 1);
	Function_216(&Global_83591, 4, 12, 10, 1);
	Function_211(&Global_83591, 1, 2, 10, 1);
	Function_211(&Global_83591, 2, 18, 10, 1);
	Function_211(&Global_83591, 3, 13, 10, 1);
	Function_211(&Global_83591, 4, 23, 4, 1);
	Function_210(&Global_83591);
	Function_209(&Global_83591 + 276, 4);
	if (!Function_205(&uLocal_332))
	{
		return 0;
	}
	Function_102();
	return 1;
}

void Function_102() //Position: 0x283D / 10301
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 10411);
	uLocal_302 = Function_103("DLCPVP");
	return;
}

var Function_103(bool bParam0) //Position: 0x285B / 10331
{
	bool bVar0;
	
	bVar0 = Function_104();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_104() //Position: 0x286F / 10351
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_105(var uParam0) //Position: 0x28AB / 10411
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
			bVar11 = Function_203(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_202())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_92())
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
							Function_199(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_192(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_91() || Function_106(4096))
						{
							if (Function_80(131072, 1))
							{
							}
							if (Function_30(Var0, 131072, 1))
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
			if (bVar11 && !Function_106(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_106(int iParam0) //Position: 0x2A0F / 10767
{
	return Function_107(Global_79336, iParam0);
}

bool Function_107(var uParam0, bool bParam1) //Position: 0x2A1E / 10782
{
	return (uParam0 && bParam1) == 0;
}

void Function_108(struct<29> Param0) //Position: 0x2A2B / 10795
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_113(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_113(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_112(), 29, 1);
					Global_83823[29] = 1;
					Function_109(6002);
					Function_109(6005);
					Function_109(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_109(6001);
				Function_109(6004);
			}
			break;
	}
}

void Function_109(int iParam0) //Position: 0x2B0C / 11020
{
	Function_110(iParam0, 1);
	return;
}

void Function_110(int iParam0, bool bParam1) //Position: 0x2B18 / 11032
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_111((iVar0 % 32)));
	}
	else
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_111((iVar0 % 32)));
	}
	return;
}

int Function_111(bool bParam0) //Position: 0x2B6E / 11118
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_112() //Position: 0x2B7A / 11130
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_113(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x2B8F / 11151
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_114(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_114(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x2BBB / 11195
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_191(uParam0, uParam2, uParam3);
			}
			Function_115(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_115(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_115(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_115(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x2C38 / 11320
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_190(*uParam0);
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
					Function_188(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_133(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_122(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_121(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_116(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_116(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2D06 / 11526
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_119(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_120(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_118(iParam0, 4))
	{
		Function_117(Function_120(iParam0), 0);
	}
}

void Function_117(var uParam0, int iParam1) //Position: 0x2DBD / 11709
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

bool Function_118(int iParam0, bool bParam1) //Position: 0x2DE2 / 11746
{
	return Function_15(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_119(int iParam0) //Position: 0x2DF6 / 11766
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_120(int iParam0) //Position: 0x2E2A / 11818
{
	return Global_50170[iParam022].f_24;
}

var Function_121(int iParam0, int iParam1) //Position: 0x2E39 / 11833
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_122(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2E4C / 11852
{
	Function_130(*uParam0);
	Function_123(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_123(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2EF1 / 12017
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_129(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_120(iParam0));
	if ((bParam3 && Function_118(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_120(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_127(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_125(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_120(iParam0), &Var7, 0, 2, Function_118(iParam0, 4));
			if (!bParam3)
			{
				Function_124(iParam0, 4);
			}
		}
	}
}

void Function_124(int iParam0, int iParam1) //Position: 0x2FAE / 12206
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_125(int iParam0) //Position: 0x2FC2 / 12226
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_126(int iParam0) //Position: 0x2FE2 / 12258
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_127(int iParam0) //Position: 0x3010 / 12304
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_128(int iParam0) //Position: 0x3040 / 12352
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_129(int iParam0) //Position: 0x3071 / 12401
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

void Function_130(int iParam0) //Position: 0x31EF / 12783
{
	Function_131(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_131(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3205 / 12805
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_132();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_132() //Position: 0x327A / 12922
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_133(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x32C7 / 12999
{
	struct<4> Var0;
	
	Function_187(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_119(*uParam0) };
	Function_182(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_181(*uParam0, 4);
	Function_134();
}

void Function_134() //Position: 0x3325 / 13093
{
	if (!Function_93())
	{
		if (!Function_180(1, 3, 1, 1))
		{
			Function_168(1);
			Function_167(1, 8);
		}
	}
	else
	{
		Function_135(0);
	}
	return;
}

void Function_135(bool bParam0) //Position: 0x334E / 13134
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_165(2);
	if (bParam0)
	{
		Function_165(1);
	}
	else
	{
		Function_163(1);
	}
	Function_136();
	return;
}

void Function_136() //Position: 0x33D7 / 13271
{
	Function_161();
	Function_160();
	Function_160();
	Function_159();
	Function_159();
	Function_158();
	Function_158();
	Function_143(0);
	Function_143(0);
	if (!Function_93())
	{
		Function_141();
		Function_140();
		Function_139();
		Function_138();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_137();
	return;
}

void Function_137() //Position: 0x3429 / 13353
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

void Function_138() //Position: 0x352F / 13615
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

void Function_139() //Position: 0x3562 / 13666
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

void Function_140() //Position: 0x36F0 / 14064
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

void Function_141() //Position: 0x38A4 / 14500
{
	Function_142(&Global_28260, 1, 0);
	return;
}

void Function_142(int iParam0, bool bParam1, int iParam2) //Position: 0x38B2 / 14514
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
	
	bVar0 = Function_112();
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

struct<8> Function_143(int iParam0) //Position: 0x3AA3 / 15011
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
					iVar2 = ((Function_157((50 + iVar4)) + Function_157((183 + iVar4))) + Function_157((90 + iVar4)));
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
	Function_144(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_144(int iParam0, bool bParam1, bool bParam2) //Position: 0x3B49 / 15177
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
		Function_156(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_155(iParam0);
	if (bParam2)
	{
		Function_145(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_145(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3DE4 / 15844
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_154(390))), 32);
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
					bVar19 = (Function_153(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_153(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_151(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_149(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_147(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_146(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_75(), &Var9);
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

var Function_146(int iParam0) //Position: 0x4412 / 17426
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_147(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4423 / 17443
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_148("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_148("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_148("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_148(char* cParam0, bool bParam1) //Position: 0x4518 / 17688
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_149(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4531 / 17713
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_84(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_150(Function_84(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_150(int iParam0, int iParam1) //Position: 0x4596 / 17814
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_151(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x45A8 / 17832
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
	if (((Function_152(iParam0) != 19 || Function_152(iParam0) != 17) || Function_152(iParam0) != 10) || Function_152(iParam0) != 9)
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

int Function_152(int iParam0) //Position: 0x46D8 / 18136
{
	return Global_35278[iParam020].f_48;
}

float Function_153(int iParam0) //Position: 0x46E7 / 18151
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_154(int iParam0) //Position: 0x4720 / 18208
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_155(int iParam0) //Position: 0x475D / 18269
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

int Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x48F7 / 18679
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

int Function_157(bool bParam0) //Position: 0x4B3B / 19259
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_158() //Position: 0x4B7C / 19324
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
		iVar2 = ((Function_157((50 + iVar3) + 15) + Function_157((183 + iVar3) + 15)) + Function_157((90 + iVar3) + 15));
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
	Function_144(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_159() //Position: 0x4C05 / 19461
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
			iVar2 = ((Function_157((50 + iVar3) + 8) + Function_157((183 + iVar3) + 8)) + Function_157((90 + iVar3) + 8));
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
	Function_144(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_160() //Position: 0x4C9C / 19612
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
		iVar2 = ((Function_157((50 + iVar3)) + Function_157((183 + iVar3))) + Function_157((90 + iVar3)));
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
	Function_144(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_161() //Position: 0x4D1B / 19739
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_162(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_144(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_162(int iParam0, bool bParam1, int iParam2) //Position: 0x4D54 / 19796
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
	Function_156(iParam0, bParam1, 1);
	Function_155(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_145(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_163(int iParam0) //Position: 0x4F5E / 20318
{
	Function_164(&Global_79338, iParam0);
	return;
}

void Function_164(var uParam0, int iParam1) //Position: 0x4F6D / 20333
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_165(int iParam0) //Position: 0x4F7A / 20346
{
	Function_166(&Global_79338, iParam0);
	return;
}

void Function_166(var uParam0, int iParam1) //Position: 0x4F89 / 20361
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_167(var uParam0, int iParam1) //Position: 0x4F96 / 20374
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_93())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_168(bool bParam0) //Position: 0x4FD8 / 20440
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_169();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_136();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_169() //Position: 0x5029 / 20521
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_179())
	{
		Function_176(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_176(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_171(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_171(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_170(StackVal, StackVal, vVar0))
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

bool Function_170(vector3 vParam0) //Position: 0x50E4 / 20708
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_171(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x50FC / 20732
{
	int iVar0;
	
	iVar0 = Function_174(uParam2, uParam3);
	if (Function_173(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_13(&Global_63095, 1);
			Function_12(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_13(&Global_63095, 2);
			Function_12(&Global_63095, 1);
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
		Function_13(&Global_63095, 2);
		Function_12(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_172();
	return StackVal, StackVal, Function_172();
}

vector3 Function_172() //Position: 0x51E3 / 20963
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_173(int iParam0) //Position: 0x51EC / 20972
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_174(bool bParam0, bool bParam1) //Position: 0x5202 / 20994
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
				fVar2 = Function_175(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_175(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_173(bVar0) && !bParam1)
	{
		bVar0 = Function_174(bParam0, 1);
	}
	return bVar0;
}

float Function_175(vector3 vParam0, vector3 vParam3) //Position: 0x52C9 / 21193
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_176(var uParam0, int iParam1) //Position: 0x52E6 / 21222
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_178(Global_34573, &vVar4);
	if (!Function_177(Global_30640[0]))
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
	if (!Function_177(Global_30640[2]))
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
	if (!Function_177(Global_30640[1]))
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
	if (!Function_177(Global_30658[1]))
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
	if (!Function_177(Global_30658[3]))
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
	if (!Function_177(Global_30658[2]))
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
	if (!Function_177(Global_30658[4]))
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
	if (!Function_177(Global_30668[0]))
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
	if (!Function_177(Global_30668[1]))
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
	if (!Function_177(Global_30668[2]))
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
	if (!Function_177(Global_30679[0]))
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
	if (!Function_177(Global_30685[0]))
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
	if (!Function_177(Global_30685[1]))
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
	if (!Function_177(Global_30685[2]))
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
	if (!Function_177(Global_30693[0]))
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
	if (!Function_177(Global_30693[1]))
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
	if (!Function_177(Global_30693[2]))
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
	if (!Function_177(Global_30707[2]))
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
	if (!Function_177(Global_30707[3]))
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
	if (!Function_177(Global_30707[0]))
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
	if (!Function_177(Global_30717[0]))
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
	if (!Function_177(Global_30723[2]))
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
	if (!Function_177(Global_30723[1]))
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
	if (!Function_177(Global_30723[0]))
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
	if (!Function_177(Global_30679[1]))
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
	if (!Function_177(Global_30707[1]))
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
	Function_13(&Global_63095, 2);
	Function_12(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_170(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_177(int iParam0) //Position: 0x5B0B / 23307
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_178(bool bParam0, int iParam1) //Position: 0x5B46 / 23366
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_179() //Position: 0x5B53 / 23379
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_180(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5B6E / 23406
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

void Function_181(int iParam0, int iParam1) //Position: 0x5C12 / 23570
{
	Function_12(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5C26 / 23590
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_63();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_186(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_185(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_184(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_183(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_186(), iVar1 + 1);
	return;
}

struct<16> Function_183(int iParam0) //Position: 0x5C98 / 23704
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_184(int iParam0) //Position: 0x5CB9 / 23737
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_185(int iParam0) //Position: 0x5CDA / 23770
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_186() //Position: 0x5CFB / 23803
{
	return "CQueue_Count";
}

void Function_187(bool bParam0, bool bParam1) //Position: 0x5D10 / 23824
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_132();
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

void Function_188(var uParam0, bool bParam1, bool bParam2) //Position: 0x5E5C / 24156
{
	Function_187(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_120(*uParam0), 1.0f, 0, 0);
	Function_189(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_182(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_134();
	return;
}

void Function_189(int iParam0, int iParam1) //Position: 0x5EC1 / 24257
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_129(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_120(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_125(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_120(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_120(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_190(int iParam0) //Position: 0x5F43 / 24387
{
	return Global_50170[iParam022].f_12;
}

void Function_191(var uParam0, bool bParam1, bool bParam2) //Position: 0x5F52 / 24402
{
	Function_130(*uParam0);
	if (!Function_118(*uParam0, 2))
	{
		Function_123(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_124(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_192(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x5F8F / 24463
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_190(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_196(Param3) && Param3.f_12 != 29)
						{
							if (Function_107(Param3.f_40, 1048576))
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
					Function_194(230, 150, Function_195(), 4294967295);
					Function_109(6007);
					Function_109(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_193(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_116(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_193(var uParam0, bool bParam1, int iParam2) //Position: 0x6051 / 24657
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_194(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6069 / 24681
{
	Function_187(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), 1.0f, 0, 0);
	Function_189(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_109(iParam3);
	}
	Function_182(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_134();
}

bool Function_195() //Position: 0x60CF / 24783
{
	return "MP_TrickShot_Icon_128";
}

bool Function_196(bool bParam0) //Position: 0x60ED / 24813
{
	if (Function_198(bParam0, 1, 0) != 4294967295 && Function_197() != 4294967295)
	{
		return 0;
	}
	return Function_198(bParam0, 1, 0) != Function_197();
}

int Function_197() //Position: 0x6115 / 24853
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_198(GET_LOCAL_SLOT(), 1, 0);
}

int Function_198(bool bParam0, bool bParam1, bool bParam2) //Position: 0x612C / 24876
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_32(bParam0))
			{
				if (!Function_30(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

void Function_199(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6170 / 24944
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_190(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_200(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_201(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_109(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_193(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_116(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_190(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_194(231, 100, Function_201(), 4294967295);
					Function_109(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_193(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_116(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6298 / 25240
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_119(uParam0) };
	Function_182(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_193(&uParam5, uParam8, uParam9);
	Function_116(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_123(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_109(iParam12);
	}
	Function_181(uParam0, 4);
	Function_134();
}

var Function_201() //Position: 0x630E / 25358
{
	return "MP_Revenge_Icon_128";
}

bool Function_202() //Position: 0x632A / 25386
{
	if (Function_106(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int Function_203(int iParam0) //Position: 0x6354 / 25428
{
	return Function_204(&Global_79349, iParam0);
}

int Function_204(var uParam0, bool bParam1) //Position: 0x6363 / 25443
{
	return Function_15(uParam0->f_44, bParam1);
}

bool Function_205(bool bParam0) //Position: 0x6372 / 25458
{
	if (!Function_208(bParam0, Global_30668[1]))
	{
		return 0;
	}
	Function_206(bParam0, "ThievesLanding", "warehouse01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "warehouse01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "warehouse01", 3, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "workShed02", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "workShed01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "workShed01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "pawnShop01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "pawnShop01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "pawnShop01", 3, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "npigFarm01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "gunsmith01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "gunsmith01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "nbrothel01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "nbrothel01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "nbrothel01", 4, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "nbrothel01", 5, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "saloon01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "saloon01", 3, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "saloon01", 4, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "saloon01", 5, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "stable01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "stable01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "stable01", 3, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "stable01", 4, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "stable01", 5, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "blacksmith01", 3, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "gunsmith01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "gunsmith01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "tailorsDoctors01", 1, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "tailorsDoctors01", 2, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "tailorsDoctors01", 3, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "tailorsDoctors01", 4, 1, 0, 1, 1);
	Function_206(bParam0, "ThievesLanding", "tailorsDoctors01", 5, 1, 0, 1, 1);
	return 1;
}

int Function_206(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x68DF / 26847
{
	int iVar0;
	
	iVar0 = iParam0->f_896;
	if (!Function_207(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_13(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_13(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_13(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_13(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_207(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6950 / 26960
{
	if (iParam0->f_896 > 44)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_8965] = uParam1;
	(iParam0 + 12[iParam0->f_8965])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_8965])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_8965])->f_16 = 0;
	iParam0->f_896++;
	return 1;
}

bool Function_208(int iParam0, int iParam1) //Position: 0x69AC / 27052
{
	int iVar0;
	
	if (!Function_89(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_896 = 0;
	iParam0->f_4 = 0;
	iParam0->f_900 = "";
	iVar0 = 0;
	while (iVar0 <= 44)
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

void Function_209(int iParam0, int iParam1) //Position: 0x6A22 / 27170
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_210(int iParam0) //Position: 0x6A3A / 27194
{
	iParam0->f_844 = 0;
	return;
}

void Function_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6A46 / 27206
{
	Function_212(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_212(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6A5E / 27230
{
	Function_213(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_213(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6A75 / 27253
{
	if (!Function_215(iParam1))
	{
		return;
	}
	Function_214(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_214(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6A98 / 27288
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

bool Function_215(int iParam0) //Position: 0x6AC2 / 27330
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6AD2 / 27346
{
	Function_217(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_217(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6AEA / 27370
{
	Function_213(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_218(int iParam0, bool bParam1) //Position: 0x6AFF / 27391
{
	Function_222(iParam0);
	Function_222(iParam0 + 228);
	if (bParam1)
	{
		Function_219(iParam0);
	}
	return;
}

void Function_219(int iParam0) //Position: 0x6B1B / 27419
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_220(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_220(var uParam0, int iParam1) //Position: 0x6B3B / 27451
{
	Function_221(uParam0, iParam1, 0);
	return;
}

void Function_221(int iParam0, int iParam1, int iParam2) //Position: 0x6B49 / 27465
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_222(int iParam0) //Position: 0x6B5A / 27482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_224(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_223(iParam0, 0.0f);
	return;
}

void Function_223(var uParam0, int iParam1) //Position: 0x6B87 / 27527
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_224(int iParam0) //Position: 0x6B93 / 27539
{
	Function_214(iParam0, 4294967295, 0, 1);
	return;
}

void Function_225(bool bParam0) //Position: 0x6BA1 / 27553
{
	DECOR_SET_OBJECT(Function_226(), "LobbyGringoSet", bParam0);
	return;
}

var Function_226() //Position: 0x6BC1 / 27585
{
	return Global_83591.f_140;
}

void Function_227(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x6BCD / 27597
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

bool Function_228(int iParam0) //Position: 0x6C5D / 27741
{
	Function_231(iParam0);
	if (Function_230())
	{
		Function_209(&Global_83591 + 276, 2);
	}
	Function_229();
	vLocal_48 = { StackVal, StackVal, Function_229() };
	return 1;
}

vector3 Function_229() //Position: 0x6C81 / 27777
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_226();
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

bool Function_230() //Position: 0x6CC9 / 27849
{
	return Function_15(Global_79962, 1024);
}

void Function_231(var uParam0) //Position: 0x6CD9 / 27865
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_232() //Position: 0x6CE7 / 27879
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
	
	Function_233(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_FFA_THI_layout");
	Local_51.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 3, 174.7f, 73.96872f, 2261.723f, 0.0f, 75.16293f, 0.0f, 198.1995f, 39.9726f, 111.5278f);
	Local_51.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_51, "CapVols_set");
	(*&Local_51 + 96)[0] = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_4", 3, 163.068f, 73.23682f, 2319.043f, 0.0f, 185.0819f, 0.0f, 1.228096f, 1.029977f, 1.228096f);
	ADD_TO_VOLUME_SET(Local_51.f_120, (*&Local_51 + 96)[0]);
	(*&Local_51 + 96)[1] = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_3", 3, 184.4262f, 74.5394f, 2248.412f, 0.0f, -122.6424f, 0.0f, 1.068015f, 1.068015f, 1.068015f);
	ADD_TO_VOLUME_SET(Local_51.f_120, (*&Local_51 + 96)[1]);
	(*&Local_51 + 96)[2] = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_2", 3, 201.7287f, 73.28625f, 2162.271f, 0.0f, -39.30064f, 0.0f, 1.094941f, 1.094941f, 1.094941f);
	ADD_TO_VOLUME_SET(Local_51.f_120, (*&Local_51 + 96)[2]);
	(*&Local_51 + 96)[3] = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_1", 3, 122.3111f, 72.57352f, 2256.726f, 0.0f, 74.64097f, 0.0f, 1.708999f, 1.708999f, 1.708999f);
	ADD_TO_VOLUME_SET(Local_51.f_120, (*&Local_51 + 96)[3]);
	(*&Local_51 + 96)[4] = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_0", 3, 121.955f, 73.28625f, 2374.045f, 0.0f, 92.14281f, 0.0f, 1.093217f, 1.093217f, 1.093217f);
	ADD_TO_VOLUME_SET(Local_51.f_120, (*&Local_51 + 96)[4]);
	Local_51.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_0", 3, 124.7039f, 73.28625f, 2392.0f, 0.0f, 140.6321f, 0.0f, 1.784259f, 5.228127f, 1.784259f);
	Local_51.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_1", 3, 150.4786f, 73.28625f, 2381.521f, 0.0f, -120.8779f, 0.0f, 1.887448f, 5.530484f, 1.887448f);
	Local_51.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_2", 3, 110.3128f, 73.28625f, 2366.313f, 0.0f, 148.782f, 0.0f, 2.218738f, 2.850933f, 2.218738f);
	Local_51.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_3", 3, 134.0483f, 73.28625f, 2328.976f, 0.0f, -359.9187f, 0.0f, 1.009939f, 1.768974f, 1.009939f);
	Local_51.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_4", 3, 161.9707f, 73.95249f, 2186.638f, 0.0f, -126.4059f, 0.0f, 0.9564332f, 0.7496312f, 0.9564332f);
	Local_51.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_5", 3, 143.9838f, 73.67674f, 2319.867f, 0.0f, -84.77216f, 0.0f, 1.188074f, 1.113582f, 1.188074f);
	Local_51.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_6", 3, 168.738f, 74.41642f, 2235.799f, 0.0f, -117.4491f, 0.0f, 0.9564332f, 0.7496312f, 0.9564332f);
	Local_51.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_7", 3, 84.22247f, 73.28625f, 2291.777f, 0.0f, 100.4313f, 0.0f, 1.684196f, 3.050434f, 1.684196f);
	Local_51.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_8", 3, 134.6642f, 74.80881f, 2308.095f, 0.0f, 275.7021f, 0.0f, 0.8092422f, 1.267242f, 0.8092422f);
	Local_51.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_9", 3, 126.5778f, 73.28625f, 2226.261f, 0.0f, 264.5372f, 0.0f, 0.9251665f, 1.157072f, 0.9251665f);
	Local_51.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_10", 3, 114.6747f, 73.28625f, 2201.904f, 0.0f, 4.941021f, 0.0f, 1.351386f, 1.986529f, 1.351386f);
	Local_51.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_11", 3, 167.0998f, 73.75426f, 2225.684f, 0.0f, -8.664166f, 0.0f, 1.551377f, 1.215935f, 1.551377f);
	Local_51.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_12", 3, 179.4874f, 74.71432f, 2224.808f, 0.0f, -119.5481f, 0.0f, 1.331925f, 1.043933f, 1.331925f);
	Local_51.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_13", 3, 209.9623f, 73.63368f, 2188.664f, 0.0f, 238.9993f, 0.0f, 0.4747873f, 0.5401447f, 0.4747873f);
	Local_51.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_14", 3, 120.043f, 73.28625f, 2190.177f, 0.0f, 413.3689f, 0.0f, 1.107186f, 1.068132f, 1.107186f);
	Local_51.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_15", 3, 93.5334f, 73.65821f, 2271.916f, 0.0f, -190.3604f, 0.0f, 1.226203f, 1.68419f, 1.226203f);
	Local_51.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_16", 3, 166.3211f, 73.03658f, 2141.483f, 0.0f, -1.000416f, 0.0f, 2.378693f, 1.978027f, 2.378693f);
	Local_51.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_17", 3, 174.8945f, 73.28625f, 2184.233f, 0.0f, 51.97043f, 0.0f, 1.146452f, 0.8996829f, 1.146452f);
	Local_51.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_18", 3, 156.2234f, 73.28625f, 2193.466f, 0.0f, -285.6407f, 0.0f, 1.443755f, 1.255031f, 1.443755f);
	Local_51.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_19", 3, 151.7895f, 73.60223f, 2244.21f, 0.0f, -120.8664f, 0.0f, 1.443755f, 0.9543339f, 1.443755f);
	Local_51.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_20", 3, 132.6836f, 73.28625f, 2383.165f, 0.0f, 208.9608f, 0.0f, 1.784259f, 5.228127f, 1.784259f);
	Local_51.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_21", 3, 145.3247f, 77.43814f, 2342.959f, 0.0f, 7.500056f, 0.0f, 1.037405f, 0.6841821f, 1.037405f);
	Local_51.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_22", 3, 137.7253f, 73.28625f, 2348.505f, 0.0f, 186.3098f, 0.0f, 1.238919f, 1.591931f, 1.238919f);
	Local_51.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_23", 3, 125.49f, 77.04848f, 2327.739f, 0.0f, 4.253277f, 0.0f, 1.238919f, 1.591931f, 1.238919f);
	Local_51.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_24", 3, 137.019f, 73.97295f, 2323.572f, 0.0f, 276.1303f, 0.0f, 0.7887231f, 1.083311f, 0.7887231f);
	Local_51.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_25", 3, 80.27327f, 73.63403f, 2308.813f, 0.0f, 0.7198818f, 0.0f, 1.238919f, 1.591931f, 1.238919f);
	Local_51.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_26", 3, 73.77852f, 73.4857f, 2290.221f, 0.0f, 154.0093f, 0.0f, 1.684196f, 3.050434f, 1.684196f);
	Local_51.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_27", 3, 123.6223f, 76.99026f, 2235.324f, 0.0f, 395.6266f, 0.0f, 0.945959f, 0.5440089f, 0.945959f);
	Local_51.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_28", 3, 108.187f, 74.1738f, 2188.84f, 0.0f, 138.9538f, 0.0f, 1.364786f, 1.706887f, 1.364786f);
	Local_51.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_29", 3, 127.6908f, 77.1893f, 2350.384f, 0.0f, 93.6208f, 0.0f, 0.7652326f, 0.5046808f, 0.7652326f);
	Local_51.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_30", 3, 167.9385f, 74.09052f, 2185.662f, 0.0f, -124.5918f, 0.0f, 0.825253f, 0.6468151f, 0.825253f);
	Local_51.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_31", 3, 114.7582f, 73.28625f, 2197.454f, 0.0f, 413.3689f, 0.0f, 1.107186f, 1.068132f, 1.107186f);
	Local_51.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_32", 3, 138.2253f, 73.93047f, 2353.351f, 0.0f, 4.684768f, 0.0f, 1.091885f, 0.946762f, 1.091885f);
	Local_51.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_33", 3, 98.70446f, 74.52679f, 2345.58f, 0.0f, 210.1325f, 0.0f, 0.6678761f, 0.3214595f, 0.6678761f);
	Local_51.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_51, "SpawnVol_34", 3, 112.4637f, 73.28625f, 2340.192f, 0.0f, 328.7405f, 0.0f, 1.700147f, 0.8183082f, 1.700147f);
	*(&Local_51 + 264) = { 157.8222f, 73.03625f, 2212.888f };
	*(&Local_51 + 264 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_288 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", 157.8222f, 73.03625f, 2212.888f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 292) = { 157.8222f, 73.03625f, 2204.771f };
	*(&Local_51 + 292 + 12) = { 0.0f, -177.2333f, 0.0f };
	Local_51.f_316 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", 157.8222f, 73.03625f, 2204.771f, 0.0f, -177.2333f, 0.0f);
	*(&Local_51 + 320) = { 134.6928f, 73.03625f, 2231.328f };
	*(&Local_51 + 320 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_344 = CREATE_POINT_IN_LAYOUT(Local_51, "StandoffCenter", 134.6928f, 73.03625f, 2231.328f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", 169.6436f, 73.46362f, 2368.393f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", 162.362f, 73.44794f, 2342.236f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", 139.36f, 76.48241f, 2327.638f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_3", 170.1964f, 73.82655f, 2308.547f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 348) = { 133.624f, 73.70025f, 2290.235f };
	*(&Local_51 + 348 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_372 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_4", 133.624f, 73.70025f, 2290.235f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 376) = { 81.31339f, 73.09513f, 2331.549f };
	*(&Local_51 + 376 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_400 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_5", 81.31339f, 73.09513f, 2331.549f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 404) = { 97.83012f, 72.09862f, 2248.414f };
	*(&Local_51 + 404 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_428 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_6", 97.83012f, 72.09862f, 2248.414f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 432) = { 114.428f, 73.28625f, 2212.91f };
	*(&Local_51 + 432 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_456 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_7", 114.428f, 73.28625f, 2212.91f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 460) = { 148.0421f, 76.82865f, 2234.729f };
	*(&Local_51 + 460 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_484 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_8", 148.0421f, 76.82865f, 2234.729f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 488) = { 163.7868f, 73.03625f, 2207.305f };
	*(&Local_51 + 488 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_512 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_9", 163.7868f, 73.03625f, 2207.305f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 516) = { 202.7747f, 72.20032f, 2211.169f };
	*(&Local_51 + 516 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_540 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_10", 202.7747f, 72.20032f, 2211.169f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 544) = { 174.7278f, 76.47504f, 2182.954f };
	*(&Local_51 + 544 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_568 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_11", 174.7278f, 76.47504f, 2182.954f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 572) = { 126.4802f, 73.28625f, 2181.52f };
	*(&Local_51 + 572 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_596 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_12", 126.4802f, 73.28625f, 2181.52f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 600) = { 150.0705f, 73.28625f, 2150.219f };
	*(&Local_51 + 600 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_624 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_13", 150.0705f, 73.28625f, 2150.219f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 628) = { 210.6713f, 73.0864f, 2130.83f };
	*(&Local_51 + 628 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_652 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_14", 210.6713f, 73.0864f, 2130.83f, 0.0f, 0.0f, 0.0f);
	Local_51.f_656 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_51, 8, 0);
	*(&Local_51 + 660[06]) = { 171.7308f, 73.28625f, 2174.169f };
	*(&Local_51 + 660[06] + 12) = { 0.0f, 145.6991f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_P4", 171.7308f, 73.28625f, 2174.169f, 0.0f, 145.6991f, 0.0f);
	DECOR_SET_INT(bVar1, "type", true);
	DECOR_SET_INT(bVar1, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_51.f_656);
	*(&Local_51 + 660[16]) = { 153.4442f, 73.28625f, 2231.136f };
	*(&Local_51 + 660[16] + 12) = { 0.0f, 146.4302f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_P3", 153.4442f, 73.28625f, 2231.136f, 0.0f, 146.4302f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_51.f_656);
	*(&Local_51 + 660[26]) = { 105.021f, 73.7637f, 2278.43f };
	*(&Local_51 + 660[26] + 12) = { 0.0f, 350.3677f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_P2", 105.021f, 73.7637f, 2278.43f, 0.0f, 350.3677f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_51.f_656);
	*(&Local_51 + 660[36]) = { 134.5146f, 73.28625f, 2373.254f };
	*(&Local_51 + 660[36] + 12) = { 0.0f, 127.0066f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_P1", 134.5146f, 73.28625f, 2373.254f, 0.0f, 127.0066f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_51.f_656);
	*(&Local_51 + 660[46]) = { 141.7375f, 73.28625f, 2204.466f };
	*(&Local_51 + 660[46] + 12) = { 0.0f, -64.26431f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_R2", 141.7375f, 73.28625f, 2204.466f, 0.0f, -64.26431f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_51.f_656);
	*(&Local_51 + 660[56]) = { 96.5005f, 73.30395f, 2316.09f };
	*(&Local_51 + 660[56] + 12) = { 0.0f, 232.5728f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_R1", 96.5005f, 73.30395f, 2316.09f, 0.0f, 232.5728f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_51.f_656);
	*(&Local_51 + 660[66]) = { 171.1225f, 73.75224f, 2232.765f };
	*(&Local_51 + 660[66] + 12) = { 0.0f, 58.74747f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_B2", 171.1225f, 73.75224f, 2232.765f, 0.0f, 58.74747f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_51.f_656);
	*(&Local_51 + 660[76]) = { 125.8f, 76.74304f, 2350.339f };
	*(&Local_51 + 660[76] + 12) = { 0.0f, 95.99455f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_B1", 125.8f, 76.74304f, 2350.339f, 0.0f, 95.99455f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_51.f_656);
	*(&Local_51 + 660[86]) = { 211.7966f, 73.02281f, 2197.98f };
	*(&Local_51 + 660[86] + 12) = { 3.460341f, -40.56599f, -5.312159f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_T1", 211.7966f, 73.02281f, 2197.98f, 3.460341f, -40.56599f, -5.312159f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_51.f_656);
	*(&Local_51 + 660[96]) = { 161.7131f, 73.56151f, 2334.929f };
	*(&Local_51 + 660[96] + 12) = { 0.0f, -88.37233f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_T2", 161.7131f, 73.56151f, 2334.929f, 0.0f, -88.37233f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_51.f_656);
	*(&Local_51 + 660[106]) = { 117.6906f, 73.28625f, 2306.691f };
	*(&Local_51 + 660[106] + 12) = { 0.0f, 265.162f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_A1", 117.6906f, 73.28625f, 2306.691f, 0.0f, 265.162f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_51.f_656);
	*(&Local_51 + 660[116]) = { 140.2182f, 73.28625f, 2215.782f };
	*(&Local_51 + 660[116] + 12) = { 0.0f, 157.8742f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_A2", 140.2182f, 73.28625f, 2215.782f, 0.0f, 157.8742f, 0.0f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_51.f_656);
	*(&Local_51 + 660[126]) = { 129.4818f, 73.31057f, 2235.766f };
	*(&Local_51 + 660[126] + 12) = { 0.0f, 77.1329f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D1", 129.4818f, 73.31057f, 2235.766f, 0.0f, 77.1329f, 0.0f);
	DECOR_SET_INT(bVar13, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_51.f_656);
	*(&Local_51 + 660[136]) = { 145.0052f, 73.84028f, 2287.651f };
	*(&Local_51 + 660[136] + 12) = { 0.0f, 2.73595f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D2", 145.0052f, 73.84028f, 2287.651f, 0.0f, 2.73595f, 0.0f);
	DECOR_SET_INT(bVar14, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_51.f_656);
	Local_51.f_1000 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Local_51, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", 123.9999f, 73.27858f, 2288.0f, 0.0f, -587.0725f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", 116.177f, 73.03625f, 2286.766f, 0.0f, -140.1224f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rand_idle_stand1", "rand_idle_stand", 114.4141f, 73.2918f, 2281.345f, 0.0f, -123.195f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand_loose", "smoking_stand_loose", 115.4587f, 73.03625f, 2292.843f, 0.0f, -18.45409f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand", "smoking_stand", 121.7041f, 73.28625f, 2288.0f, 0.0f, 34.33467f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand1", "smoking_stand", 111.059f, 73.27353f, 2286.913f, 0.0f, 317.0076f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_yelling_mid", "stand_yelling_mid", 117.2285f, 73.03625f, 2289.598f, 0.0f, 75.54937f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_yelling_mid1", "stand_yelling_mid", 114.8177f, 73.03625f, 2288.814f, 0.0f, 249.5374f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", 118.8498f, 73.03625f, 2285.377f, 0.0f, 109.53f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", 127.0803f, 73.68026f, 2292.083f, 0.0f, -383.7064f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand_loose1", "smoking_stand_loose", 120.8364f, 73.2682f, 2296.0f, 0.0f, 740.361f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand2", "smoking_stand", 119.9999f, 73.27641f, 2292.0f, 0.0f, 160.2793f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rand_idle_stand", "rand_idle_stand", 120.1228f, 73.28625f, 2299.892f, 0.0f, 400.9427f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rand_idle_stand2", "rand_idle_stand", 107.9999f, 73.28625f, 2290.847f, 0.0f, -58.18366f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "opium_pipe", "opium_pipe", 116.0154f, 73.03625f, 2297.179f, 0.0f, -309.8781f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "opium_pipe1", "opium_pipe", 120.9565f, 73.3217f, 2282.611f, 0.0f, -218.8363f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rand_idle_stand4", "rand_idle_stand", 117.4428f, 73.03625f, 2295.236f, 0.0f, 63.11293f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rand_idle_stand3", "rand_idle_stand", 113.3429f, 73.03625f, 2290.687f, 0.0f, -96.11961f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "opium_pipe2", "opium_pipe", 113.6776f, 73.03625f, 2293.765f, 0.0f, -73.89915f, 0.0f), Local_51.f_1000);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "opium_pipe3", "opium_pipe", 123.4053f, 73.28757f, 2298.444f, 0.0f, 92.21465f, 0.0f), Local_51.f_1000);
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0x8883 / 34947
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

void Function_234(int iParam0) //Position: 0x88CC / 35020
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_241("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_235(StackVal, 0);
	return;
}

void Function_235(var uParam0, int iParam1) //Position: 0x893E / 35134
{
	Function_240(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_236(StackVal, iParam1);
	}
	return;
}

void Function_236(int iParam0, int iParam1) //Position: 0x896F / 35183
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_240(iParam0);
	Function_239(iVar0);
	PRINTNL();
	Function_237(iParam0, iVar0, iParam1);
	return;
}

void Function_237(int iParam0, bool bParam1, bool bParam2) //Position: 0x8994 / 35220
{
	int iVar0;
	
	Function_240(iParam0);
	Function_239(bParam1);
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
	Function_238();
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

void Function_238() //Position: 0x8B0D / 35597
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_239(bool bParam0) //Position: 0x8B19 / 35609
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

void Function_240(int iParam0) //Position: 0x8B5F / 35679
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

bool Function_241(char* cParam0) //Position: 0x8BA5 / 35749
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8BC4 / 35780
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_243() //Position: 0x8C06 / 35846
{
	while (!IS_EXITFLAG_SET())
	{
		Function_25(4499, 3489);
		WAIT(0);
	}
	return;
}

bool Function_244() //Position: 0x8C23 / 35875
{
	return Function_97(2);
}

void Function_245() //Position: 0x8C2D / 35885
{
	if (Function_244())
	{
		return;
	}
	Function_255();
	Function_253(&bLocal_39, "MP_CTF", 10, 0);
	Function_253(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_247(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_81();
	Function_246();
	return;
}

void Function_246() //Position: 0x8C91 / 35985
{
	while (!Function_97(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_247(int iParam0) //Position: 0x8CAC / 36012
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_252();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_251(iParam0[iVar03], 8);
		}
		else if (Function_250())
		{
			iVar1 = 1;
			Function_251(iParam0[iVar03], 8);
		}
		Function_251(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_7(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_251(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
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
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
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
	Function_248();
	return 1;
}

void Function_248() //Position: 0x9027 / 36903
{
	if (!Function_249(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_249(int iParam0) //Position: 0x9067 / 36967
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_250() //Position: 0x9083 / 36995
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

void Function_251(var uParam0, int iParam1) //Position: 0x90AE / 37038
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_252() //Position: 0x90BF / 37055
{
	if (!Function_249(128))
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

var Function_253(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9101 / 37121
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_254(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_251(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_254(var uParam0, int iParam1, int iParam2) //Position: 0x9139 / 37177
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_251(uParam0[iVar03], 4);
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

void Function_255() //Position: 0x91FD / 37373
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

