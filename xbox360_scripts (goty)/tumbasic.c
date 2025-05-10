//Decompiled with MagicRDR v1.0
//Function Count : 141
//Statics Count : 519
//Natives Count : 172
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_154 = 27;
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
	var uLocal_244 = 27;
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
	var uLocal_334 = 27;
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
	var uLocal_424 = 27;
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
	var uLocal_492 = 1;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 5;
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
	struct<9> Local_516 = { 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0[5];
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_140(4, 4);
	Global_83591 = 1;
	if (Function_132())
	{
		Function_130(1);
		Local_39.f_1892 = 90.0f;
		vVar0[03] = { -4194.01f, 22.8491f, 3781.97f };
		vVar0[13] = { -4198.34f, 21.6212f, 3779.47f };
		vVar0[23] = { -4198.34f, 22.2575f, 3774.47f };
		vVar0[33] = { -4194.01f, 22.4139f, 3771.97f };
		vVar0[43] = { -4195.01f, 22.6061f, 3776.97f };
		Function_97(&vVar0, 0);
		if (Function_96(Global_79962, 128))
		{
			Function_95(2, 8800, 1200);
			Function_95(1, 7300, 900);
			Function_95(0, 6400, 600);
			Function_93(2, 10.0f, 500);
			Function_93(1, 15.0f, 250);
			Function_93(0, 20.0f, 100);
			NET_CREATE_FRIEND_SCORE_READER(92);
		}
		else
		{
			Function_95(2, 3700, 1120);
			Function_95(1, 3000, 820);
			Function_95(0, 2500, 520);
			Function_93(2, 9.0f, 500);
			Function_93(1, 12.0f, 250);
			Function_93(0, 15.0f, 100);
			NET_CREATE_FRIEND_SCORE_READER(39);
		}
		while (!IS_EXITFLAG_SET())
		{
			if (Function_92(1, 1))
			{
				Function_69(10692);
			}
			else
			{
				Function_68();
				Function_66();
				Function_15(6619, 6362, 3371);
			}
			WAIT(false);
		}
		Function_1();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x177 / 375
{
	Function_11(&Local_39 + 1828);
	Function_11(&Local_39 + 1812);
	if (IS_LAYOUTREF_VALID(Local_39.f_1808))
	{
		DESTROY_LAYOUT(Local_39.f_1808);
	}
	Function_8();
	Function_2();
	return;
}

void Function_2() //Position: 0x1A6 / 422
{
	Function_3();
	return;
}

void Function_3() //Position: 0x1AF / 431
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

void Function_4(int iParam0, bool bParam1, int iParam2) //Position: 0x2B8 / 696
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

void Function_5(var uParam0, int iParam1) //Position: 0x2E0 / 736
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2F3 / 755
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_7(int iParam0) //Position: 0x302 / 770
{
	return Function_96(Global_76905.f_132, iParam0);
}

void Function_8() //Position: 0x313 / 787
{
	bool bVar0;
	
	bVar0 = Function_9(0);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_9(bool bParam0) //Position: 0x32C / 812
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_10(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && bParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_10(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_10() //Position: 0x379 / 889
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_11(int iParam0) //Position: 0x3A8 / 936
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_12(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x3CE / 974
{
	if (Function_14(uParam0[iParam13], 4))
	{
		if (Function_14(uParam0[iParam13], 1))
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
			Function_13(uParam0[iParam13], 1);
			Function_13(uParam0[iParam13], 2);
			Function_13(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x4FC / 1276
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_14(var uParam0, int iParam1) //Position: 0x516 / 1302
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_15(int iParam0, int iParam1, int iParam2) //Position: 0x533 / 1331
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

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x6CC / 1740
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
				Call_Loc(*uParam1);
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
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0x844 / 2116
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x855 / 2133
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0x8BA / 2234
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_92(iParam1, bParam2);
	}
	if (!Function_21(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_20(iParam1), 64);
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

var Function_20(int iParam0) //Position: 0x93B / 2363
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

bool Function_21(bool bParam0) //Position: 0xC54 / 3156
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

void Function_22(bool bParam0) //Position: 0xCF5 / 3317
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_4(16384, 0, 1);
	return;
}

bool Function_23() //Position: 0xD0F / 3343
{
	return Function_7(32768);
}

void Function_24() //Position: 0xD1C / 3356
{
	Function_4(32768, 1, 0);
	return;
}

int Function_25() //Position: 0xD2B / 3371
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 4294966296;
	if (Function_23() && Function_7(4))
	{
		Function_29(&iVar0, &iVar1);
		Function_26(iVar0, iVar1);
	}
	return 1;
}

void Function_26(int iParam0, int iParam1) //Position: 0xD55 / 3413
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
				NET_PLAYER_LIST_ADD_ITEM("", Function_28(&iParam1));
				iVar1++;
			}
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_Leaderboard"), Function_28(&iParam1));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("nCOOP_Rank"));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("COOP_SCORE"));
			if (bVar3 <= bVar2)
			{
				UNK_0xD7572C68(&uVar4);
				Function_27(NET_GET_NEAREST_FRIEND_NAME(), Function_28(&iParam1), bVar3, uVar4[13]);
				NET_GET_LOCAL_GAMER_SCORE_INFO(&uVar4);
				Function_27(GET_SLOT_NAME(GET_LOCAL_SLOT()), Function_28(&iParam1), bVar2, uVar4[13]);
			}
			else
			{
				NET_GET_LOCAL_GAMER_SCORE_INFO(&uVar4);
				Function_27(GET_SLOT_NAME(GET_LOCAL_SLOT()), Function_28(&iParam1), bVar2, uVar4[13]);
				UNK_0xD7572C68(&uVar4);
				Function_27(NET_GET_NEAREST_FRIEND_NAME(), Function_28(&iParam1), bVar3, uVar4[13]);
			}
		}
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 <= ((16 - iParam0) - 3))
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_28(&iParam1));
			iVar1++;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_Leaderboard"), Function_28(&iParam1));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_NoFriends"), Function_28(&iParam1));
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
	}
	return;
}

void Function_27(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xEDE / 3806
{
	NET_PLAYER_LIST_ADD_ITEM(bParam0, iParam1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bParam2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(true, bParam3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
}

int Function_28(int iParam0) //Position: 0xF01 / 3841
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0 + 1;
}

void Function_29(var uParam0, bool bParam1) //Position: 0xF14 / 3860
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
	bool bVar21;
	var uVar22;
	
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (Function_21(bVar0))
		{
			bVar2 = (bVar2 + Function_53(29, bVar0));
			bVar3 = (bVar3 + Function_53(39, bVar0));
			bVar5 = (bVar5 + Function_53(12, bVar0));
			bVar4 = (bVar4 + Function_53(28, bVar0));
			bVar1 = (bVar1 + Function_50(bVar0));
		}
		bVar0++;
	}
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("coop_total"), Function_28(bParam1));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(true, bVar2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(2, bVar3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(3, bVar5);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(4, bVar4);
	*uParam0++;
	if (vLocal_516.x <= 2)
	{
		return;
	}
	NET_PLAYER_LIST_ADD_ITEM("", Function_28(bParam1));
	*uParam0++;
	Function_49(bParam1, "coop_time_spent", 0, 0);
	*uParam0++;
	if (vLocal_516.x <= 3)
	{
		return;
	}
	if (Function_48(&Global_78578 + 96))
	{
		uVar19 = Function_44(&Global_78578 + 96);
		Function_42(1, uVar19);
		if (Function_40() >= 4294967295)
		{
			iVar6 = Function_39(uVar19);
			if (iVar6 >= 4294967295)
			{
				Function_37(iVar6, &uVar19, &bVar10);
			}
		}
	}
	else
	{
		Function_42(1, 0.0f);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar10);
	bVar0 = false;
	while (bVar0 <= iVar7)
	{
		if (bVar0 < vLocal_516.z)
		{
			Function_35(bVar0, &iVar9, &bVar8);
			Function_49(bParam1, "", iVar9, 0);
			*uParam0++;
			if (bVar0 > vLocal_516.z || vLocal_516.x <= 6)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar8);
			}
		}
		bVar0++;
	}
	Function_49(bParam1, "COOP_grandTotal", 0, 0);
	*uParam0++;
	Function_34(&bVar8, &iVar6, &uVar20);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, I2STR(bVar8));
	switch (iVar6)
	{
		case 0x00000002:
			bVar21 = "COOP_victory_gold";
			break;
		
		case 0x00000001:
			if (Function_40() >= 4294967295)
			{
				bVar21 = "COOP_victory_Silver";
			}
			else
			{
				bVar21 = "XP_COOP_Consolation";
			}
			break;
		
		case 0x00000000:
			if (Function_40() >= 4294967295)
			{
				bVar21 = "COOP_victory_Bronze";
			}
			else
			{
				bVar21 = "XP_COOP_Consolation";
			}
			break;
		
		case 0xFFFFFFFF:
		default:
			bVar21 = "coop_nothing_earned";
			break;
	}
	Function_49(bParam1, bVar21, 0, 0);
	*uParam0++;
	if (iVar6 >= 4294967295)
	{
		Function_30(iVar6, &uVar22, &bVar10, uVar20);
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

void Function_30(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x11EC / 4588
{
	bool bVar0;
	
	*uParam1 = Function_33(uParam0);
	*uParam2 = Function_31(*uParam1, 32, 20);
	*uParam1 = Function_31(*uParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

var Function_31(var uParam0, int iParam1, bool bParam2) //Position: 0x123D / 4669
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_32((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

var Function_32(bool bParam0) //Position: 0x125C / 4700
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_33(int iParam0) //Position: 0x1268 / 4712
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1288 / 4744
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_9(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (!(DECOR_GET_INT_VERBOSE(bVar0, "total", iParam0) && DECOR_GET_INT_VERBOSE(bVar0, "medal", &iVar1)))
	{
		return 0;
	}
	*iParam2 = DECOR_GET_BOOL(bVar0, "casual");
	*uParam1 = iVar1;
	return 1;
}

int Function_35(int iParam0, int iParam1, int iParam2) //Position: 0x12DB / 4827
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_9(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_36(iParam0, 1);
	uVar2 = Function_36(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_36(int iParam0, bool bParam1) //Position: 0x131C / 4892
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
	return iVar0;
}

void Function_37(int iParam0, var uParam1, int iParam2) //Position: 0x1342 / 4930
{
	float fVar0;
	
	fVar0 = Function_38(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*uParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_38(int iParam0) //Position: 0x1373 / 4979
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_39(float fParam0) //Position: 0x1393 / 5011
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_37(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_40() //Position: 0x13C0 / 5056
{
	if (!Function_41())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_41() //Position: 0x13D5 / 5077
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_42(bool bParam0, int iParam1) //Position: 0x13E2 / 5090
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_43(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_43(var uParam0) //Position: 0x160F / 5647
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

var Function_44(int iParam0) //Position: 0x1680 / 5760
{
	if (Function_48(iParam0))
	{
		if (Function_47(iParam0))
		{
			return StackVal;
		}
		Function_45();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_45() //Position: 0x1751 / 5969
{
	if (!Function_46())
	{
	}
	return;
}

bool Function_46() //Position: 0x175E / 5982
{
	return NET_IS_IN_SESSION();
}

bool Function_47(int iParam0) //Position: 0x1767 / 5991
{
	return Function_96(*iParam0, 2);
}

bool Function_48(int iParam0) //Position: 0x1774 / 6004
{
	return Function_96(*iParam0, 1);
}

void Function_49(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1781 / 6017
{
	if (iParam2 != 0)
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING_BY_HASH(iParam2), Function_28(bParam0));
	}
	else
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(bParam1), Function_28(bParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
	if (bParam3)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
}

int Function_50(int iParam0) //Position: 0x17D0 / 6096
{
	return Function_51(0, iParam0);
}

int Function_51(int iParam0, bool bParam1) //Position: 0x17DC / 6108
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_52(iParam0);
	}
	if (!Function_21(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_52(int iParam0) //Position: 0x1843 / 6211
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_53(int iParam0, bool bParam1) //Position: 0x1853 / 6227
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_54(iParam0);
	}
	if (!Function_21(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_54(int iParam0) //Position: 0x18C1 / 6337
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_55(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x18DA / 6362
{
	bool bVar0;
	bool bVar1;
	
	Function_58(bParam1, uParam2, uParam3);
	bVar0 = Function_50(bParam0);
	if (!bParam1)
	{
		Function_17(bParam0, bVar0, 0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(5);
	bVar1 = false;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_53(29, bParam0));
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_53(39, bParam0));
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_57(bParam0));
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_53(28, bParam0));
		bVar1++;
		Function_56(bVar1, bParam0);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
	}
	return 0;
}

void Function_56(bool bParam0, bool bParam1) //Position: 0x197A / 6522
{
	if (Function_7(4))
	{
		if (Function_19(bParam1, 1024, 1))
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

int Function_57(bool bParam0) //Position: 0x19AD / 6573
{
	return Function_53(12, bParam0);
}

void Function_58(bool bParam0, int iParam1, bool bParam2) //Position: 0x19BA / 6586
{
	if (bParam0)
	{
		if (Function_23())
		{
			NET_PLAYER_LIST_ADD_ITEM(bParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_59() //Position: 0x19DB / 6619
{
	if (!Function_61(1))
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
	Function_60();
	return 1;
}

void Function_60() //Position: 0x1A79 / 6777
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

bool Function_61(bool bParam0) //Position: 0x1AB6 / 6838
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_23() || Function_65(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
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
	Function_62(Function_23());
	return 1;
}

void Function_62(bool bParam0) //Position: 0x1B37 / 6967
{
	if (bParam0 || Function_7(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_7(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_7(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_7(1048576) || Function_7(4)) || Function_92(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_4(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_63(int iParam0) //Position: 0x1BC0 / 7104
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1BD4 / 7124
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

int Function_65(bool bParam0, bool bParam1) //Position: 0x1C19 / 7193
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

void Function_66() //Position: 0x1C4D / 7245
{
	if (Function_67(32) && Function_7(16))
	{
		if (vLocal_516.x != 12)
		{
			if (!IS_PS3())
			{
				UI_FOCUS("HudGamerList");
			}
		}
		vLocal_516 = 12;
	}
	return;
}

bool Function_67(int iParam0) //Position: 0x1C87 / 7303
{
	return Function_96(StackVal, iParam0);
}

void Function_68() //Position: 0x1C9A / 7322
{
	if (IS_LAYOUTREF_VALID(Local_39.f_1808))
	{
		DESTROY_LAYOUT(Local_39.f_1808);
		Function_11(&Local_39 + 1828);
	}
	UNREGISTER_SCRIPT_WITH_AUDIO();
	return;
}

void Function_69(int iParam0) //Position: 0x1CBE / 7358
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	Function_86(StackVal, StackVal, 10495, *(&Local_39 + 1896), 1, iParam0);
	bVar1 = true;
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = IS_PLAYER_CONTROLLABLE(0);
	}
	iVar2 = (Function_52(8) - 1);
	if (iVar2 >= 3)
	{
		iVar2 = (iVar2 - 4);
	}
	if (Function_84(1) && !Function_84(2))
	{
		Function_81("COOP_new_challenges", 0x41200000, 1, 0, 2, 1, 0);
		Function_79(2);
	}
	GET_CAMERA_CHANNEL_POSITION(&vVar3, 0);
	fVar8 = GET_CURRENT_GAME_TIME();
	fVar9 = GET_LAST_FRAME_TIME();
	iVar0 = 0;
	while (iVar0 <= Local_39.f_1804)
	{
		if (iVar0 == iVar2)
		{
			iVar6 = 15790320;
			iVar7 = 0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(Local_39[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_39[iVar090].f_356);
			}
		}
		else
		{
			iVar6 = 15170838;
			iVar7 = 0;
			if (bVar1)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_39[iVar090].f_356))
				{
					UI_SET_STRING_FORMAT(Function_78(iVar0), UI_GET_STRING("COOP_Select"), UI_GET_STRING(Function_77(Local_39[iVar090].f_324, 0)), false, false);
					Local_39[iVar090].f_356 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(Function_78(iVar0), Local_39[iVar090].f_352, 0, 4, 0, false, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Local_39[iVar090].f_356))
				{
					Function_76(&(Local_39[iVar290]));
					Function_76(&Local_39[iVar290] + 48);
					Function_75(8, Local_39[iVar090].f_324 + 1);
					iVar2 = iVar0;
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					PRINT_SMALL_FORMAT(2.5f, "COOP_Selected", Function_77(Local_39[iVar090].f_324, 0), false, 0, false, 2, 0, 0);
					RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(Local_39[iVar090].f_328, "HUD_STINGER_TEXT_SELECTION_MASTER"));
					Function_76(&(Local_39[iVar090]));
					Function_76(&Local_39[iVar090] + 48);
					iVar6 = 15790320;
					iVar7 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(Local_39[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_39[iVar090].f_356);
			}
		}
		Function_72(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &(Local_39[iVar090]), vVar3, fVar8, Vector(*(&Local_39[iVar090] + 332), Local_39[iVar090].f_328, fVar9) + Vector(0.0f, 2.725f, 0.0f), 1, 8777, 0, iVar6, iVar0, "", iVar7);
		if (Function_71(Local_39[iVar090].f_352))
		{
			Function_72(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_39[iVar090] + 48, vVar3, fVar8, Vector(*(&Local_39[iVar090] + 332), Local_39[iVar090].f_328, fVar9) + Vector(0.0f, 2.25f, 0.0f), Local_39[iVar090].f_344, 8032, 0, iVar6, iVar0, "", iVar7);
		}
		else
		{
			Function_76(&Local_39[iVar090] + 48);
		}
		iVar0++;
	}
	return;
}

var Function_70(int iParam0, int iParam1) //Position: 0x1F60 / 8032
{
	return GET_WEAPON_DISPLAY_NAME((*&Local_39[iParam190] + 96)[iParam0 + 12]);
}

bool Function_71(bool bParam0) //Position: 0x1F77 / 8055
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

void Function_72(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1FBC / 8124
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
			Function_76(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_11;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && iParam12)
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
					Function_76(iParam0);
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
			Stack.Push(iParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(iParam14);
				Call_Loc(iParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_73(iParam0->f_36);
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

var Function_73(float fParam0) //Position: 0x223B / 8763
{
	return (fParam0 * 57.29578f);
}

int Function_74(var uParam0, int iParam1) //Position: 0x2249 / 8777
{
	uParam0 = uParam0;
	return Function_77(Local_39[iParam190].f_324, 1);
}

void Function_75(int iParam0, int iParam1) //Position: 0x2260 / 8800
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_76(int iParam0) //Position: 0x2289 / 8841
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

int Function_77(int iParam0, bool bParam1) //Position: 0x22AF / 8879
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

var Function_78(int iParam0) //Position: 0x2622 / 9762
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

void Function_79(int iParam0) //Position: 0x26B9 / 9913
{
	Function_80(&Global_83864 + 1256, iParam0);
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x26CB / 9931
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_81(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x26D8 / 9944
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_82(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_82(int iParam0) //Position: 0x2753 / 10067
{
	char* cVar0[16];
	
	if (!Function_83())
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

bool Function_83() //Position: 0x2792 / 10130
{
	if (Function_96(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_84(int iParam0) //Position: 0x27AD / 10157
{
	return Function_85(Global_83864.f_1256, iParam0);
}

int Function_85(var uParam0, bool bParam1) //Position: 0x27BF / 10175
{
	return (uParam0 && bParam1) == 0;
}

void Function_86(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x27CC / 10188
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_87(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 10394, 1, 125, 0, 0, 0);
	Function_87(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_87(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x284F / 10319
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_72(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

var Function_88(int iParam0, var uParam1) //Position: 0x289A / 10394
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_89() //Position: 0x28FF / 10495
{
	int iVar0;
	
	if (VMAG(*(&Local_39 + 1896)) > 3.0f)
	{
		*(&Local_39 + 1896) = { StackVal, StackVal, *(&Global_79349 + 28) };
	}
	iVar0 = CREATE_PROPSET_IN_LAYOUT(Global_83591.f_140, "TalkingStick", "$/tune/refGroups/refGroups/mp_coop", *(&Local_39 + 1896), 0.0f, Local_39.f_1892, 0.0f);
	Function_90(iVar0, 1);
	return iVar0;
}

void Function_90(bool bParam0, int iParam1) //Position: 0x2978 / 10616
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
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), iParam1);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
	DESTROY_ITERATOR(bVar1);
	return;
}

var Function_91(var uParam0, var uParam1) //Position: 0x29C4 / 10692
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return "TUM_summary";
}

bool Function_92(int iParam0, bool bParam1) //Position: 0x29E0 / 10720
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_93(int iParam0, float fParam1, int iParam2) //Position: 0x2A00 / 10752
{
	Function_94(iParam0, (fParam1 + TO_FLOAT(iParam2 * 1000)));
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x2A16 / 10774
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_95(int iParam0, int iParam1, bool bParam2) //Position: 0x2A37 / 10807
{
	Function_140(iParam0, (iParam1 + SHIFT_LEFT(bParam2, 20)));
	return;
}

bool Function_96(var uParam0, int iParam1) //Position: 0x2A4C / 10828
{
	return (uParam0 && iParam1) == 0;
}

void Function_97(var uParam0, bool bParam1) //Position: 0x2A59 / 10841
{
	bool bVar1;
	bool bVar2;
	
	Local_39.f_1808 = CREATE_LAYOUT("Coop_Lobby");
	Global_83591.f_140 = Local_39.f_1808;
	while (!Function_124(&Local_39 + 1828) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_123();
	bVar1 = Function_96(Global_79962, 128);
	bVar2 = (Function_52(8) - 1);
	if (bVar2 == 4294967295)
	{
		if (bVar1)
		{
			Function_75(8, GET_LOCAL_SLOT() + 5);
		}
		else
		{
			Function_75(8, GET_LOCAL_SLOT() + 1);
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
		Function_75(8, bVar2 + 1);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	if (bVar1)
	{
		Local_39.f_1804 = 5;
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[090]), *uParam0[03], 4, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[190]), *uParam0[13], 5, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[290]), *uParam0[23], 6, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[390]), *uParam0[33], 7, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[490]), *uParam0[43], 8, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[43]), bParam1);
	}
	else
	{
		Local_39.f_1804 = 4;
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[090]), *uParam0[03], 0, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[190]), *uParam0[13], 1, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[290]), *uParam0[23], 2, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_39[390]), *uParam0[33], 3, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_98(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x2CA2 / 11426
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<9> Var9;
	bool bVar19;
	bool bVar20;
	
	*(iParam0 + 96) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(bParam4, iParam0 + 344) };
	iParam0->f_324 = bParam4;
	if (bParam4 != 8)
	{
		iParam0->f_328 = Function_103(bParam5, &vParam1, fParam6, iParam0 + 96, bParam7);
	}
	else
	{
		iParam0->f_328 = Function_101(bParam5, &vParam1, (fParam6 + 180.0f), bParam7);
		vVar0 = { 0.2f, 1.2f, 0.1f };
		vVar3 = { -10.0f, 0.0f, 0.0f };
		iVar12 = ((SHIFT_LEFT(255, 24) + SHIFT_LEFT(false, 16)) + SHIFT_LEFT(false, 8));
		GET_OBJECT_RELATIVE_POSITION(iParam0->f_328, vVar0, &vVar6);
		GET_OBJECT_RELATIVE_ORIENTATION(iParam0->f_328, vVar3, &vVar9);
		CREATE_MP_TEXT(iParam0->f_328, "", "Custom_deco", vVar6, Function_100(vVar9.x), Function_100(vVar9.y), Function_100(vVar9.z), iVar12);
	}
	*(iParam0 + 332) = { StackVal, StackVal, vParam1 };
	iParam0->f_44 = GET_CURRENT_GAME_TIME();
	(iParam0 + 48)->f_44 = (GET_CURRENT_GAME_TIME() + (0.1f * TO_FLOAT(bParam4)));
	iParam0->f_352 = CREATE_VOLUME_IN_LAYOUT(bParam5, "", 3, *(iParam0 + 332), 0.0f, 0.0f, 0.0f, 2.5f, 3.0f, 2.5f);
	bVar19 = Function_99(bParam4, &vVar13, &vVar16);
	if (STRING_LENGTH(bVar19) >= 0)
	{
		bVar20 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar16, Vector("", bParam5, StackVal) + Vector(*(iParam0 + 332), vVar13, bVar19), StackVal) + Vector(0.0f, fParam6, 0.0f), 1);
		if (IS_OBJECT_VALID(bVar20))
		{
			ATTACH_OBJECTS(bVar20, iParam0->f_328, "", vVar13, vVar16, 4294967295);
		}
	}
}

var Function_99(bool bParam0, var uParam1, int iParam2) //Position: 0x2E1F / 11807
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000000:
			*uParam1 = { 0.2046675f, 1.532547f, -0.2487722f };
			*iParam2 = { 169.4265f, 0.8832794f, -175.2791f };
			return "p_gen_hat01x";
			break;
		
		case 0x00000005:
		case 0x00000001:
			return "";
		
		case 0x00000007:
		case 0x00000003:
			*uParam1 = { 0.3295048f, 1.381993f, -0.2406348f };
			*iParam2 = { 26.62852f, 177.48f, -6.970736f };
			return "p_gen_hat03x";
		
		case 0x00000006:
		case 0x00000002:
			*uParam1 = { 0.188344f, 1.438419f, 0.1520461f };
			*iParam2 = { -17.79215f, 176.5549f, -0.2478271f };
			return "p_gen_hat02x";
			break;
	}
	return "";
}

float Function_100(float fParam0) //Position: 0x2F0B / 12043
{
	return (fParam0 * 0.01745329f);
}

var Function_101(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2F19 / 12057
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_102()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

bool Function_102() //Position: 0x2F85 / 12165
{
	return "$/fragments/p_gen_dressForm01x";
}

var Function_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2FAC / 12204
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_101(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_106((*uParam3)[iVar12], &iVar2))
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
		if (Function_106((*uParam3)[iVar12], &iVar2))
		{
			if (Function_104((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_104(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x309A / 12442
{
	if (!Function_105(bParam0))
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

bool Function_105(int iParam0) //Position: 0x322B / 12843
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_106(bool bParam0, int iParam1) //Position: 0x323D / 12861
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

struct<228> Function_107(int iParam0, int iParam1) //Position: 0x3299 / 12953
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_118(&Var0);
	Function_115(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 9, 10, 1);
				Function_115(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 11, 6, 1);
				Function_115(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 17, 10, 1);
				Function_115(&Var0, 2, 5, 6, 1);
				Function_115(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 18, 10, 1);
				Function_115(&Var0, 2, 5, 8, 1);
				Function_115(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 19, 20, 0);
				Function_115(&Var0, 2, 4, 8, 1);
				Function_115(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 20, 20, 0);
				Function_115(&Var0, 2, 4, 10, 1);
				Function_115(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 6, 10, 1);
				Function_115(&Var0, 2, 8, 8, 1);
				Function_115(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 2, 10, 1);
				Function_115(&Var0, 2, 8, 9, 1);
				Function_115(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_108(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_108(int iParam0, int iParam1) //Position: 0x347E / 13438
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
	
	*iParam1 = 1;
	Function_115(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_113(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_112(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_115(StackVal, iParam0, *iParam1, iVar19, 1);
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
				Function_109(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_113(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_115(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

void Function_109(var uParam0, var uParam1) //Position: 0x35BB / 13755
{
	*uParam1 = Function_31(uParam0, Function_110(), 0);
	uParam1->f_4 = Function_31(uParam0, Function_110() + 8, Function_110());
	return;
}

bool Function_110() //Position: 0x35DE / 13790
{
	return Function_111(39);
}

int Function_111(bool bParam0) //Position: 0x35E9 / 13801
{
	int iVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		iVar0++;
	}
	return iVar0;
}

int Function_112(int iParam0, int iParam1) //Position: 0x3617 / 13847
{
	if (Function_113(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_113(int iParam0, int iParam1) //Position: 0x3631 / 13873
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

bool Function_114(int iParam0, var uParam1, int iParam2) //Position: 0x3644 / 13892
{
	if (Function_96(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_115(uParam1, 1, 10, 5, 1);
				Function_115(uParam1, 2, 7, 4, 1);
				Function_115(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_115(uParam1, 1, 17, 6, 1);
				Function_115(uParam1, 2, 6, 4, 1);
				Function_115(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_115(uParam1, 1, 13, 8, 1);
				Function_115(uParam1, 2, 16, 9, 1);
				Function_115(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_115(uParam1, 1, 3, 6, 1);
				Function_115(uParam1, 2, 15, 12, 1);
				Function_115(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_115(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3724 / 14116
{
	if (!Function_117(iParam1))
	{
		return;
	}
	Function_116(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_116(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3747 / 14151
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

bool Function_117(int iParam0) //Position: 0x3771 / 14193
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_118(int iParam0) //Position: 0x3781 / 14209
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_120(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_119(iParam0, 0.0f);
	return;
}

void Function_119(var uParam0, int iParam1) //Position: 0x37AE / 14254
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_120(bool bParam0) //Position: 0x37BA / 14266
{
	Function_116(bParam0, 4294967295, 0, 1);
	return;
}

float Function_121(vector3 vParam0, vector3 vParam3) //Position: 0x37C8 / 14280
{
	var uVar0;
	
	Function_122(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x37E2 / 14306
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_123() //Position: 0x3805 / 14341
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

bool Function_124(int iParam0) //Position: 0x3815 / 14357
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_129();
	iVar1 = 0;
	if (!Function_14(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_128(iParam0[iVar03], 8);
		}
		else if (Function_127())
		{
			iVar1 = 1;
			Function_128(iParam0[iVar03], 8);
		}
		Function_128(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_14(iParam0[iVar03], 4))
		{
			if (!Function_14(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_14(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_14(iParam0[03], 8) || iVar1));
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
				Function_128(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_14(iParam0[iVar03], 4))
		{
			if (!Function_14(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
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
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
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
	Function_125();
	return 1;
}

void Function_125() //Position: 0x3B90 / 15248
{
	if (!Function_126(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_126(int iParam0) //Position: 0x3BD0 / 15312
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_127() //Position: 0x3BEC / 15340
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

void Function_128(var uParam0, int iParam1) //Position: 0x3C17 / 15383
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_129() //Position: 0x3C28 / 15400
{
	if (!Function_126(128))
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

void Function_130(int iParam0) //Position: 0x3C6A / 15466
{
	Function_131(8, iParam0);
	return;
}

void Function_131(int iParam0, bool bParam1) //Position: 0x3C77 / 15479
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

bool Function_132() //Position: 0x3C9F / 15519
{
	var uVar0;
	bool bVar3;
	int iVar4;
	
	if (Function_139())
	{
		while (!IS_EXITFLAG_SET())
		{
			Function_137(6619, 6362);
			WAIT(false);
		}
		return 0;
	}
	if (Function_96(Global_79349.f_44, 4194304))
	{
		Function_135(&Local_39 + 1812, "dlc_zombiepack_mp_gy", 10, 0);
	}
	else
	{
		Function_135(&Local_39 + 1812, "dlc_mpcooppack_mp_coop", 10, 0);
	}
	Function_135(&Local_39 + 1828, Function_102(), 0, 0);
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		bVar3 = Function_99(iVar4, &uVar0, &uVar0);
		if (STRING_LENGTH(bVar3) >= 0)
		{
			Function_135(&Local_39 + 1828, bVar3, 0, 0);
		}
		iVar4++;
	}
	Function_124(&Local_39 + 1828);
	while (!Function_124(&Local_39 + 1812) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_134("nCOOP_help", 4294967295);
	Function_133();
	if (!Function_96(Global_84364, 2147483648))
	{
		Function_6(&Global_84364, 2147483648);
		Function_81("COOP_lobby_help", 0x41200000, 1, 0, 2, 1, 0);
	}
	return 1;
}

void Function_133() //Position: 0x3DD0 / 15824
{
	while (!Function_67(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_134(char* cParam0, int iParam1) //Position: 0x3DEB / 15851
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

var Function_135(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3E82 / 16002
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_136(iParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_128(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_136(var uParam0, int iParam1, int iParam2) //Position: 0x3EBA / 16058
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_14(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_128(uParam0[iVar03], 4);
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

void Function_137(var uParam0, var uParam1) //Position: 0x3F7E / 16254
{
	Function_15(uParam0, uParam1, 16271);
	return;
}

int Function_138() //Position: 0x3F8F / 16271
{
	return 1;
}

bool Function_139() //Position: 0x3F96 / 16278
{
	return Function_67(2);
}

void Function_140(int iParam0, int iParam1) //Position: 0x3FA0 / 16288
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

