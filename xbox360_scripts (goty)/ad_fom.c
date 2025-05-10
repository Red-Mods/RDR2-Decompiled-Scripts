//Decompiled with MagicRDR v1.0
//Function Count : 230
//Statics Count : 523
//Natives Count : 239
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
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
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
	var uLocal_28 = 11;
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
	var uLocal_50 = 11;
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
	float fLocal_68 = 0.0f;
	struct<105> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_185 = 9;
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
	var uLocal_196 = 9;
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
	var uLocal_207 = 9;
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
	var uLocal_218 = 9;
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
	var uLocal_229 = 12;
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
	var uLocal_257 = 51;
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
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	var uLocal_520 = 0;
	int iLocal_521 = 0;
	var uLocal_522 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_10 = 0;
	iLocal_12 = 0;
	fLocal_68 = 1.0f;
	iLocal_146 = 4294967295;
	iLocal_147 = 4294967295;
	iLocal_148 = 0;
	iLocal_149 = 0;
	iLocal_516 = 0;
	iLocal_517 = 0;
	iLocal_518 = 0;
	iLocal_519 = 0;
	iLocal_521 = 0;
	Function_218();
	ENABLE_CHILD_SECTOR("dlc_fom_atkdef01x");
	if (Function_217())
	{
		Function_216();
	}
	else
	{
		if (Function_157())
		{
			Function_156(1);
			Function_155(64, 1);
		}
		else
		{
			Function_154(1);
		}
		DECOR_SET_INT(Function_153(), "AD_Instance", 2);
		iVar0 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_152(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_151(64, 0);
					Function_149();
					iVar0 = 10;
				}
			}
			Function_136(&uLocal_254);
			Function_36();
			Function_26();
			WAIT(0);
		}
	}
	iLocal_516 = 0;
	Function_24(&uLocal_254);
	Function_22(512);
	Function_18();
	Function_17(Global_83864.f_1284, 0, 1);
	Function_16();
	Function_3();
	Function_1(&uLocal_522, 1, 0, 4294967295, 4294967295);
	DISABLE_CHILD_SECTOR("dlc_fom_atkdef01x");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x109 / 265
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_2(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_2(int iParam0) //Position: 0x12D / 301
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_3() //Position: 0x680 / 1664
{
	Function_12(&iLocal_127);
	Function_5();
	Function_4();
	return;
}

void Function_4() //Position: 0x691 / 1681
{
	if (iLocal_148)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_148 = 0;
	}
	return;
}

void Function_5() //Position: 0x6D0 / 1744
{
	Function_6();
	return;
}

void Function_6() //Position: 0x6D9 / 1753
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x7E2 / 2018
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

void Function_8(var uParam0, int iParam1) //Position: 0x80A / 2058
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x81D / 2077
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_10(int iParam0) //Position: 0x82C / 2092
{
	return Function_11(Global_76905.f_132, iParam0);
}

bool Function_11(var uParam0, int iParam1) //Position: 0x83D / 2109
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(int iParam0) //Position: 0x84A / 2122
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

void Function_13(var uParam0, int iParam1) //Position: 0x870 / 2160
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

void Function_14(var uParam0, int iParam1) //Position: 0x99E / 2462
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x9B8 / 2488
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x9D5 / 2517
{
	Function_12(&Local_150 + 4);
	RELEASE_LAYOUT_REF(Local_150);
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x9E7 / 2535
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_9(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_9(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_18() //Position: 0xA14 / 2580
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0xA20 / 2592
{
	if (!Function_20(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_20(int iParam0) //Position: 0xA4D / 2637
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0xA64 / 2660
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0xA7E / 2686
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0xAB7 / 2743
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_24(int iParam0) //Position: 0xAC4 / 2756
{
	Function_151(64, 0);
	Function_25(iParam0);
	return;
}

void Function_25(int iParam0) //Position: 0xAD5 / 2773
{
	if (iParam0->f_1040 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_1040, 0);
		iParam0->f_1040 = "";
	}
	return;
}

void Function_26() //Position: 0xAF5 / 2805
{
	if (iLocal_521 >= Function_35(3))
	{
		Function_34();
		iLocal_516 = 0;
		iLocal_518 = 0;
		iLocal_519 = 0;
		if (IS_ACTOR_VALID(uLocal_520))
		{
			DESTROY_ACTOR(uLocal_520);
		}
	}
	switch (Function_35(3))
	{
		case 0xFFFFFFFF:
			if (iLocal_521 != Function_35(3))
			{
				Function_1(&uLocal_522, 6, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000000:
			if (iLocal_521 != Function_35(3))
			{
				Function_1(&uLocal_522, 34, 0, 4294967295, 4294967295);
			}
		
		case 0x00000001:
		case 0x00000002:
			Function_28();
			break;
		
		case 0x00000003:
			if (!iLocal_516)
			{
				Function_27();
				iLocal_516 = 1;
			}
			break;
		
		case 0x00000004:
			if (iLocal_521 != Function_35(3))
			{
				Function_1(&uLocal_522, 46, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000006:
		case 0x00000007:
			if (iLocal_521 != Function_35(3))
			{
				Function_1(&uLocal_522, 1, 0, 4294967295, 4294967295);
			}
			break;
	}
	iLocal_521 = Function_35(3);
	return;
}

void Function_27() //Position: 0xBD5 / 3029
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_517)
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(Local_150.f_392, "shootBabyShoot");
		uVar1 = FIND_OBJECT_IN_OBJECT(Local_150.f_396, "shootBabyShoot");
		uVar2 = GET_GRINGO_FROM_OBJECT(uVar0);
		uVar3 = GET_GRINGO_FROM_OBJECT(uVar1);
		if (IS_GRINGO_VALID(uVar2))
		{
			GRINGO_ALLOW_ACTIVATION(uVar2, 1);
		}
		if (IS_GRINGO_VALID(uVar3))
		{
			GRINGO_ALLOW_ACTIVATION(uVar3, 1);
		}
		iLocal_517 = 0;
	}
	return;
}

void Function_28() //Position: 0xC4B / 3147
{
	if (!iLocal_518)
	{
		if (Function_32())
		{
			Function_29("AD_CannonHelp", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_518 = 1;
		}
		else
		{
			iLocal_518 = 0;
		}
	}
	return;
}

void Function_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xC86 / 3206
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_30(Global_6269) };
		}
		PRINT_HELP_B(uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, &Var0, uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uVar4, uParam6);
	}
}

struct<16> Function_30(int iParam0) //Position: 0xD01 / 3329
{
	char* cVar0[16];
	
	if (!Function_31())
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

bool Function_31() //Position: 0xD40 / 3392
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_32() //Position: 0xD5B / 3419
{
	if (!IS_ACTOR_VALID(Function_33()))
	{
		return 0;
	}
	return (IS_ACTOR_IN_VOLUME(Function_33(), Local_150.f_372) || IS_ACTOR_IN_VOLUME(Function_33(), Local_150.f_376));
}

var Function_33() //Position: 0xD84 / 3460
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_34() //Position: 0xD99 / 3481
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!iLocal_517)
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(Local_150.f_392, "shootBabyShoot");
		uVar1 = FIND_OBJECT_IN_OBJECT(Local_150.f_396, "shootBabyShoot");
		uVar2 = GET_GRINGO_FROM_OBJECT(uVar0);
		uVar3 = GET_GRINGO_FROM_OBJECT(uVar1);
		if (IS_GRINGO_VALID(uVar2))
		{
			GRINGO_ALLOW_ACTIVATION(uVar2, 0);
			GRINGO_DEACTIVATE(uVar2);
		}
		if (IS_GRINGO_VALID(uVar3))
		{
			GRINGO_ALLOW_ACTIVATION(uVar3, 0);
			GRINGO_DEACTIVATE(uVar3);
		}
		iLocal_517 = 1;
	}
	return;
}

int Function_35(int iParam0) //Position: 0xE1C / 3612
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_36() //Position: 0xE3C / 3644
{
	Function_134();
	if (Function_133(1, 1))
	{
		Function_102();
	}
	else
	{
		if (!iLocal_149)
		{
			iLocal_149 = 1;
			Function_97(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_94();
		if (Local_123)
		{
			Function_77(9301, 9276, 7616);
		}
		else
		{
			Function_44(6002, 4012);
		}
		if (!Function_42())
		{
			if (Function_41(1))
			{
				Stack.Push(0);
				Stack.Push(Function_153());
				Stack.Push(0);
				Stack.Push(Function_153());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_143);
				Function_40(StackVal, StackVal);
			}
			else if (Function_41(2))
			{
				Stack.Push(0);
				Stack.Push(Function_153());
				Stack.Push(0);
				Stack.Push(Function_153());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_144);
				Function_40(StackVal, StackVal);
			}
			else if (Function_41(4))
			{
				Stack.Push(0);
				Stack.Push(Function_153());
				Stack.Push(0);
				Stack.Push(Function_153());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_145);
				Function_40(StackVal, StackVal);
			}
		}
		Function_39();
		Function_37();
	}
	return;
}

void Function_37() //Position: 0xEEC / 3820
{
	if (IS_OBJECT_VALID(Local_96.f_104))
	{
		DESTROY_OBJECT(Local_96.f_104);
		Function_38(&Local_96);
	}
	return;
}

void Function_38(int iParam0) //Position: 0xF08 / 3848
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

void Function_39() //Position: 0xF2E / 3886
{
	if (IS_OBJECT_VALID(Local_69.f_104))
	{
		DESTROY_OBJECT(Local_69.f_104);
		Function_38(&Local_69);
	}
	return;
}

void Function_40(int iParam0, int iParam1) //Position: 0xF4A / 3914
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_41(bool bParam0) //Position: 0xF6B / 3947
{
	return Function_11((&Global_83591 + 140)->f_56, bParam0);
}

bool Function_42() //Position: 0xF7E / 3966
{
	return IS_OBJECT_VALID(Function_43());
}

int Function_43() //Position: 0xF8A / 3978
{
	return Function_35(0);
}

void Function_44(int iParam0, int iParam1) //Position: 0xF94 / 3988
{
	Function_77(iParam0, iParam1, 4005);
	return;
}

int Function_45() //Position: 0xFA5 / 4005
{
	return 1;
}

int Function_46(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xFAC / 4012
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	Function_64(bParam1, uParam2, uParam3);
	bVar0 = false;
	iVar1 = Function_63(bParam0);
	iVar2 = Function_60(bParam0);
	bVar3 = Function_59(bParam0);
	iVar4 = Function_58((bVar3 / CEIL(25.0f)), iVar1, iVar2);
	iVar5 = Function_56(4, bParam0);
	if (!bParam1)
	{
		Function_54(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, iVar5);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, iVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, iVar2);
		bVar0++;
		Function_53(bVar0, bParam0);
	}
	if (Function_47(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_47(bool bParam0) //Position: 0x10A4 / 4260
{
	if (Function_49(bParam0, 1, 0) != 4294967295 && Function_48() != 4294967295)
	{
		return 0;
	}
	return Function_49(bParam0, 1, 0) != Function_48();
}

int Function_48() //Position: 0x10CC / 4300
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_49(GET_LOCAL_SLOT(), 1, 0);
}

int Function_49(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10E3 / 4323
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_52(bParam0))
			{
				if (!Function_50(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_50(bool bParam0, int iParam1, bool bParam2) //Position: 0x1127 / 4391
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_133(iParam1, bParam2);
	}
	if (!Function_52(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_51(iParam1), 64);
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

var Function_51(int iParam0) //Position: 0x11A8 / 4520
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

bool Function_52(bool bParam0) //Position: 0x14C1 / 5313
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

void Function_53(bool bParam0, bool bParam1) //Position: 0x1562 / 5474
{
	if (Function_10(4))
	{
		if (Function_50(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

bool Function_54(bool bParam0, int iParam1, int iParam2) //Position: 0x1595 / 5525
{
	var uVar0;
	
	return Function_55(bParam0, iParam1, &uVar0, iParam2);
}

int Function_55(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x15A6 / 5542
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

int Function_56(int iParam0, bool bParam1) //Position: 0x160B / 5643
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_57(iParam0);
	}
	if (!Function_52(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_57(int iParam0) //Position: 0x1672 / 5746
{
	return (*&Global_78480 + 132)[iParam0];
}

var Function_58(int iParam0, int iParam1, int iParam2) //Position: 0x1682 / 5762
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_59(int iParam0) //Position: 0x1697 / 5783
{
	return Function_56(0, iParam0);
}

int Function_60(bool bParam0) //Position: 0x16A3 / 5795
{
	return Function_61(12, bParam0);
}

int Function_61(int iParam0, bool bParam1) //Position: 0x16B0 / 5808
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_62(iParam0);
	}
	if (!Function_52(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_62(int iParam0) //Position: 0x171E / 5918
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_63(int iParam0) //Position: 0x1737 / 5943
{
	return Function_61(11, iParam0);
}

void Function_64(bool bParam0, int iParam1, char* cParam2) //Position: 0x1744 / 5956
{
	if (bParam0)
	{
		if (Function_65())
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

bool Function_65() //Position: 0x1765 / 5989
{
	return Function_10(32768);
}

int Function_66() //Position: 0x1772 / 6002
{
	if (!Function_72(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "AD_LB_PtsCapped");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	if (Function_71())
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(4);
	}
	Function_68(0);
	Function_68(1);
	Function_67();
	return 1;
}

void Function_67() //Position: 0x181F / 6175
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

void Function_68(int iParam0) //Position: 0x185C / 6236
{
	int iVar0;
	
	if (iParam0 == Function_48())
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	if (Function_69() > 0)
	{
		if (Function_69() == iParam0)
		{
			NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 1, UI_GET_STRING("AD_Team_Won"));
		}
		else
		{
			NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 0, UI_GET_STRING("AD_Team_lost"));
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 0, "--");
	}
	return;
}

int Function_69() //Position: 0x18C2 / 6338
{
	if (!Function_70())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_70() //Position: 0x18D7 / 6359
{
	return UNK_0xA80C6DE6(&Global_78578);
}

bool Function_71() //Position: 0x18E4 / 6372
{
	return Function_48() == 4294967295;
}

bool Function_72(bool bParam0) //Position: 0x18EF / 6383
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_65() || Function_76(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_65())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_73(Function_65());
	return 1;
}

void Function_73(bool bParam0) //Position: 0x1970 / 6512
{
	if (bParam0 || Function_10(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_10(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_10(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_10(1048576) || Function_10(4)) || Function_133(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_7(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_74(var uParam0) //Position: 0x19F9 / 6649
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1A0D / 6669
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

int Function_76(int iParam0, int iParam1) //Position: 0x1A52 / 6738
{
	if (IS_STRING_VALID(iParam0) != IS_STRING_VALID(iParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(iParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void Function_77(int iParam0, int iParam1, int iParam2) //Position: 0x1A86 / 6790
{
	if (Function_10(0x4000000))
	{
		Function_80();
		Function_7(0x4000000, 0, 1);
	}
	if (Function_10(0x10000000))
	{
		Function_80();
		Function_7(0x10000000, 0, 1);
	}
	if (Function_10(2) != Function_10(0x2000000))
	{
		Function_80();
		Function_7(0x2000000, Function_10(2), 1);
	}
	if (Function_65())
	{
		Function_79(!Function_10(16));
	}
	if (Function_10(16))
	{
		Function_78(&iParam0, &iParam1, &iParam2);
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

void Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x1C1F / 7199
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
			if (!Function_52(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_50(bVar1, 2048, 1))
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
				if (Function_54(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_54(bVar1, (4294966296 - bVar1), 1))
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

void Function_79(bool bParam0) //Position: 0x1D97 / 7575
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_7(16384, 0, 1);
	return;
}

void Function_80() //Position: 0x1DB1 / 7601
{
	Function_7(32768, 1, 0);
	return;
}

int Function_81() //Position: 0x1DC0 / 7616
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<8> Var3;
	char* cVar11[64];
	int iVar27;
	float fVar28[2];
	var uVar31[2];
	float fVar34;
	float fVar35;
	bool bVar36;
	bool bVar37;
	char* cVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	
	if (Function_65())
	{
		bVar1 = Function_35(3) != 7;
		iVar2 = 0;
		iVar27 = Function_48();
		if (StackVal == 1)
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_88(&iVar2));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(4, "");
			return 1;
		}
		cVar38 = Function_153();
		if (!IS_LAYOUTREF_VALID(cVar38))
		{
			return 1;
		}
		bVar0 = true;
		while (bVar0 < Local_123.f_12)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("AD_T0", I2STR(bVar0)) };
			bVar36 = DECOR_GET_FLOAT_VERBOSE(cVar38, &Var3, &fVar34);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("AD_T1", I2STR(bVar0)) };
			bVar37 = DECOR_GET_FLOAT_VERBOSE(cVar38, &Var3, &fVar35);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(&Global_79349, "_Goal_", I2STR(bVar0)) };
			if (bVar36 || bVar37)
			{
				cVar11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("<0xFFFFFF>", UI_GET_STRING(&Var3), "</0x>") };
			}
			else
			{
				strcpy(&cVar11, UI_GET_STRING(&Var3), 64);
			}
			NET_PLAYER_LIST_ADD_ITEM(&cVar11, Function_88(&iVar2));
			if (StackVal || bVar0 > Local_123.f_12 <= 2)
			{
				if (bVar36)
				{
					fVar28[0] = (fVar28[0] + fVar34);
					uVar31[0]++;
					Function_83(0, fVar34, iVar27 != 0);
				}
				else
				{
					Function_82(0, iVar27 != 0, "<SKULL>", 0);
				}
			}
			if (StackVal || bVar0 > Local_123.f_12 <= 2)
			{
				if (bVar1)
				{
					if (bVar37)
					{
						fVar28[1] = (fVar28[1] + fVar35);
						uVar31[1]++;
						Function_83(1, fVar35, iVar27 != 1);
					}
					else
					{
						Function_82(1, iVar27 != 1, "<SKULL>", 0);
					}
				}
				else
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "<QUESTION_MARK>");
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			}
			bVar0++;
		}
		if (StackVal <= 3)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM("", Function_88(&iVar2));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_PointsCaptured"), Function_88(&iVar2));
		if (StackVal <= 4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			return 1;
		}
		if (iVar27 == 0)
		{
			iVar39 = "AD_PointsCapBlue";
			bVar41 = "AD_PointsBlue";
			iVar40 = "AD_PointsCapRed";
			bVar42 = "AD_PointsRed";
		}
		else
		{
			iVar39 = "AD_PointsCapRed";
			bVar41 = "AD_PointsRed";
			iVar40 = "AD_PointsCapBlue";
			bVar42 = "AD_PointsBlue";
		}
		UI_SET_STRING(iVar39, I2STR(uVar31[0]));
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING(bVar41));
		if (bVar1)
		{
			if (StackVal <= 5)
			{
				return 1;
			}
			UI_SET_STRING(iVar40, I2STR(uVar31[1]));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING(bVar42));
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--");
		}
		if (StackVal <= 6)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_TimeElapsed"), Function_88(&iVar2));
		if (StackVal <= 7)
		{
			return 1;
		}
		Function_83(0, fVar28[0], iVar27 != 0);
		if (bVar1)
		{
			if (StackVal <= 8)
			{
				return 1;
			}
			Function_83(1, fVar28[1], iVar27 != 1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--:--");
		}
		if (StackVal <= 9)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_LivesLost"), Function_88(&iVar2));
		if (StackVal <= 10)
		{
			return 1;
		}
		Function_82(0, iVar27 != 0, I2STR(DECOR_GET_INT(cVar38, "AD_L0")), 0);
		if (bVar1)
		{
			if (StackVal <= 11)
			{
				return 1;
			}
			Function_82(1, iVar27 != 1, I2STR(DECOR_GET_INT(bVar38, "AD_L1")), 0);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--");
		}
		if (bVar1)
		{
			if (StackVal <= 12)
			{
				return 1;
			}
			NET_PLAYER_LIST_ADD_ITEM("", Function_88(&iVar2));
			bVar43 = Function_69();
			if (bVar43 > 0)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar43, UI_GET_STRING("nAD_Winner"));
			}
			else if (bVar43 == 4294967291)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("AD_Tie"));
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("AD_Tie"));
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			}
		}
	}
	return 1;
}

void Function_82(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x224F / 8783
{
	struct<16> Var0;
	
	if (bParam3)
	{
		if (bParam1)
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("<blue>", UI_GET_STRING(bParam2), "</blue>") };
		}
		else
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("<red>", UI_GET_STRING(bParam2), "</red>") };
		}
	}
	else if (bParam1)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("<blue>", bParam2, "</blue>") };
	}
	else
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("<red>", bParam2, "</red>") };
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, &Var0);
}

void Function_83(bool bParam0, float fParam1, bool bParam2) //Position: 0x22ED / 8941
{
	struct<9> Var0;
	
	vVar0 = { StackVal, StackVal, StackVal, Function_84(fParam1) };
	if (fParam1 < 0.0f)
	{
		if (vVar0.z <= 10)
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(I2STR(vVar0.y), ":0", I2STR(vVar0.z)), 4);
		}
		else
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(I2STR(vVar0.y), ":", I2STR(vVar0.z)), 4);
		}
		Function_82(bParam0, bParam2, &uVar4, 0);
	}
	else
	{
		Function_82(bParam0, bParam2, "--:--", 0);
	}
	return;
}

struct<16> Function_84(var uParam0) //Position: 0x2363 / 9059
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = uParam0;
	Var0 = FLOOR((iVar4 / 3600.0f));
	while (iVar4 <= 3600.0f)
	{
		iVar4 = (iVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((iVar4 / 60.0f));
	while (iVar4 <= 60.0f)
	{
		iVar4 = (iVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(iVar4);
	Var0.f_12 = (StackVal - IntToFloat(iVar4));
	return StackVal, StackVal, StackVal, Var0;
}

struct<64> Function_85(char* cParam0, char* cParam1, bool bParam2) //Position: 0x23D4 / 9172
{
	char* cVar0[64];
	
	strcpy(&cVar0, cParam0, 64);
	stradd(&cVar0, cParam1, 64);
	stradd(&cVar0, bParam2, 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_86(char* cParam0, char* cParam1, bool bParam2) //Position: 0x23F3 / 9203
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_87(char* cParam0, bool bParam1) //Position: 0x2412 / 9234
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_88(int iParam0) //Position: 0x242B / 9259
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0;
}

int Function_89(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x243C / 9276
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	uParam3 = uParam3;
	return 0;
}

int Function_90() //Position: 0x2455 / 9301
{
	struct<4> Var0;
	
	Function_7(131072, 1, 0);
	if (Function_35(3) == 6)
	{
		if (Function_65())
		{
			NET_PLAYER_LIST_SET_TITLE("AD_SwitchingSides");
		}
	}
	else if (!Function_72(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	Var0 = { StackVal, StackVal, StackVal, Function_91(0, 0) };
	if (Function_48() == 0)
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_91(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	else
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_91(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	NET_PLAYER_LIST_SET_HEADER(2, "GENERIC_DBUFFER64_0");
	NET_PLAYER_LIST_SET_HEADER(3, "GENERIC_DBUFFER64_1");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	Function_7(8192, 1, 1);
	return 1;
}

struct<16> Function_91(int iParam0, int iParam1) //Position: 0x2626 / 9766
{
	return StackVal, StackVal, StackVal, Function_92(Function_93(iParam0), iParam1);
}

struct<16> Function_92(bool bParam0, bool bParam1) //Position: 0x2638 / 9784
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

int Function_93(int iParam0) //Position: 0x266D / 9837
{
	if (!Function_70())
	{
		return 0;
	}
	return StackVal;
}

void Function_94() //Position: 0x2686 / 9862
{
	if (UI_ISACTIVE("LobbyNew_Toggle"))
	{
		if (Function_96(4, 1, 1))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
			Local_123 = !Local_123;
			if (Local_123)
			{
				UI_UNFOCUS("HudGamerList");
				UI_SET_TEXT("LobbyNew_Toggle", "mp_aa_stats_toggle_scoreboard");
			}
			else
			{
				UI_SET_TEXT("LobbyNew_Toggle", "Lobby_toggle");
				if (!IS_PS3())
				{
					UI_FOCUS("HudGamerList");
				}
			}
			Function_80();
		}
	}
	if (Function_152(512) && !Local_123)
	{
		return;
	}
	if (Function_152(32) && Function_10(16))
	{
		Local_123 = 1;
		if (StackVal && StackVal >= 0.0f > 13)
		{
			Function_80();
			if (StackVal == 0)
			{
				Local_123.f_12 = 1;
				Function_151(512, 0);
			}
			UI_UNFOCUS("HudGamerList");
			Local_123.f_4 = StackVal + 1;
			if (Function_35(3) == 6)
			{
				switch (StackVal)
				{
					case 0x00000004:
					case 0x00000007:
					case 0x0000000A:
						Local_123.f_4 = StackVal + 1;
						break;
					}
			}
			if (StackVal == 13)
			{
				Function_151(512, 1);
			}
			else if (StackVal == 3)
			{
				if (Local_123.f_12 <= Function_35(4))
				{
					Local_123.f_12++;
					Local_123.f_4 = 2;
				}
			}
			PLAY_SOUND_FRONTEND(Function_95(StackVal, &Local_123 + 8));
		}
		else
		{
			Local_123.f_8 = (StackVal - GET_UNWARPED_REALTIME_SECONDS());
		}
	}
	else if (Local_123)
	{
		Local_123.f_8 = 0.0f;
		Local_123 = 0;
		Local_123.f_4 = 0;
	}
	return;
}

var Function_95(int iParam0, int iParam1) //Position: 0x285D / 10333
{
	switch (iParam0)
	{
		case 0x00000001:
			*iParam1 = 0.5f;
			return "";
		
		case 0x00000002:
			if (Function_35(3) == 6)
			{
				*iParam1 = 0.65f;
			}
			else
			{
				*iParam1 = 0.8f;
			}
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000003:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x00000004:
			*iParam1 = 0.5f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000005:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000006:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x00000007:
			*iParam1 = 0.5f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000008:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000009:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000A:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000B:
			*iParam1 = 1.2f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000C:
			if (Function_35(3) == 6)
			{
				*iParam1 = 4.0f;
				return "";
			}
			*iParam1 = 2.0f;
			switch (Function_69())
			{
				case 0xFFFFFFFB:
					return "HUD_MP_AWARDS_FAIL_MASTER";
				
				case 0x00000000:
				case 0x00000001:
					return "HUD_MP_AWARDS_GOLD_MASTER";
				
				default:
			}
			return "";
			break;
	}
	*iParam1 = 2.0f;
	return "";
}

bool Function_96(int iParam0, int iParam1, int iParam2) //Position: 0x2AB7 / 10935
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(uVar0, iParam0, iParam1, iParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(uVar0, 15, iParam1, iParam2) || IS_BUTTON_PRESSED(uVar0, 13, iParam1, iParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(uVar0, 14, iParam1, iParam2) || IS_BUTTON_PRESSED(uVar0, 12, iParam1, iParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_97(vector3 vParam0, float fParam3) //Position: 0x2B34 / 11060
{
	char* cVar0;
	char* cVar1;
	int iVar2;
	int iVar3;
	
	cVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_101(), 4294967295, 0);
	cVar1 = CREATE_VOLUME_IN_LAYOUT(Function_101(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	iVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(cVar0, cVar1, "p_gen_gatlingGun01x", 1);
	iVar2 = (iVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(cVar0, cVar1, "p_gen_cannon02x", 1));
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		Function_98(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, cVar0));
		iVar3++;
	}
	DESTROY_OBJECTSET(cVar0);
	DESTROY_VOLUME(cVar1);
}

int Function_98(int iParam0) //Position: 0x2BE7 / 11239
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(iParam0))
	{
		return "";
	}
	iVar0 = FIND_OBJECT_IN_OBJECT(iParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(iVar0))
	{
		return "";
	}
	return Function_99(iVar0);
}

int Function_99(int iParam0) //Position: 0x2C22 / 11298
{
	int iVar0;
	
	iVar0 = GET_BLIP_ON_OBJECT(iParam0);
	if (!IS_BLIP_VALID(iVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(iParam0), "cannon"))
		{
			iVar0 = ADD_BLIP_FOR_OBJECT(iParam0, 523, 0f, 2, 0);
		}
		else
		{
			iVar0 = ADD_BLIP_FOR_OBJECT(iParam0, 524, 0f, 2, 0);
		}
	}
	Function_100(iVar0);
	return iVar0;
}

void Function_100(var uParam0) //Position: 0x2C70 / 11376
{
	SET_BLIP_COLOR(uParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_101() //Position: 0x2C83 / 11395
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_102() //Position: 0x2CB2 / 11442
{
	int iVar0;
	char* cVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	var uVar11;
	
	if (!IS_OBJECT_VALID(Local_69.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_69.f_104 = Function_129();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_69.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (!IS_OBJECT_VALID(Local_96.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_96.f_104 = Function_116();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_96.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (iLocal_146 == 4294967295)
	{
		iLocal_146 = 0;
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if ((*&Global_83591 + 276)[iVar02] != 4294967295)
			{
				iLocal_146 = iVar0;
			}
			iVar0++;
		}
		iLocal_146 = (iLocal_146 - 1);
	}
	if (iLocal_147 == 4294967295)
	{
		cVar1 = Function_115();
		iLocal_147 = (DECOR_GET_INT(cVar1, "AD_WeaponCount") - 1);
	}
	if (GET_CAMERA_CHANNEL_POSITION(&vVar2, 0))
	{
		Function_114(0.0f, 0.0f, 2.5f, 150.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_114(0.0f, 0.0f, 2.5f, 150.0f), vLocal_140, StackVal) };
		iVar8 = (SHIFT_LEFT(125, 16) + SHIFT_LEFT(0, 8));
		iVar9 = (SHIFT_LEFT(180, 16) + SHIFT_LEFT(180, 8)) + 180;
		fVar10 = GET_CURRENT_GAME_TIME();
		uVar11 = GET_LAST_FRAME_TIME();
		Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69, vVar2, fVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 12831, 1, iVar8, 0, 0, 0);
		Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69 + 48, vVar2, fVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_146, 12152, 0, iVar9, 0, 0, 0);
		Function_114(0.0f, 0.0f, -2.5f, 150.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_114(0.0f, 0.0f, -2.5f, 150.0f), vLocal_140, StackVal) };
		Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96, vVar2, fVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 12119, 1, iVar8, 0, 0, 0);
		Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96 + 48, vVar2, fVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_147, 11923, 0, iVar9, 0, 0, 0);
	}
	return;
}

var Function_103(int iParam0, var uParam1) //Position: 0x2E93 / 11923
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	
	uParam1 = uParam1;
	bVar0 = Function_115();
	strcpy(&cVar1, "AD_WeaponData_", 32);
	straddi(&cVar1, iParam0 + 1, 32);
	Function_104(DECOR_GET_INT(bVar0, &cVar1), &iVar9);
	return GET_WEAPON_DISPLAY_NAME(iVar9);
}

void Function_104(int iParam0, int iParam1) //Position: 0x2ED0 / 11984
{
	*iParam1 = Function_105(iParam0, Function_107(), 0);
	iParam1->f_4 = Function_105(iParam0, Function_107() + 8, Function_107());
	return;
}

var Function_105(var uParam0, int iParam1, int iParam2) //Position: 0x2EF3 / 12019
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_106((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_106(int iParam0) //Position: 0x2F12 / 12050
{
	return SHIFT_LEFT(1, iParam0);
}

int Function_107() //Position: 0x2F1E / 12062
{
	return Function_108(39);
}

int Function_108(int iParam0) //Position: 0x2F29 / 12073
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

var Function_109(var uParam0, var uParam1) //Position: 0x2F57 / 12119
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_fom_SUMMARY_D";
}

var Function_110(int iParam0, var uParam1) //Position: 0x2F78 / 12152
{
	uParam1 = uParam1;
	return GET_WEAPON_DISPLAY_NAME((*&Global_83591 + 276)[iParam0 + 22]);
}

void Function_111(int iParam0, vector3 vParam1, float fParam4, float fParam5, char* cParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2F92 / 12178
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	var uVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_38(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_68;
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
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(cParam6, "HUD_STINGER_TEXT_MASTER"));
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
					Function_38(iParam0);
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
			Stack.Push(cParam6);
			Stack.Push(iParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(cParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(iParam14);
				Call_Loc(iParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			uVar14 = Function_112(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, uVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, uVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_112(float fParam0) //Position: 0x3211 / 12817
{
	return (fParam0 * 57.29578f);
}

var Function_113(var uParam0, var uParam1) //Position: 0x321F / 12831
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_fom_SUMMARY_A";
}

vector3 Function_114(vector3 vParam0, float fParam3) //Position: 0x3240 / 12864
{
	ROTATE_VECTOR_XZ(&vParam0, fParam3, 0);
	return StackVal, StackVal, vParam0;
}

var Function_115() //Position: 0x3254 / 12884
{
	int iVar0;
	
	iVar0 = FIND_OBJECT_IN_LAYOUT(Function_153(), "AD_WeaponThingy");
	if (!IS_OBJECT_VALID(iVar0))
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(Function_153(), "AD_WeaponThingy", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return iVar0;
}

var Function_116() //Position: 0x32A4 / 12964
{
	struct<2> Var0[27];
	bool bVar57;
	int iVar58;
	int iVar59;
	char* cVar60[32];
	vector3 vVar68;
	int iVar71;
	
	Function_125(&Var0);
	bVar57 = Function_115();
	iVar59 = DECOR_GET_INT(bVar57, "AD_WeaponCount");
	iVar58 = 0;
	while (iVar58 <= iVar59)
	{
		strcpy(&cVar60, "AD_WeaponData_", 32);
		straddi(&cVar60, iVar58, 32);
		Function_104(DECOR_GET_INT(bVar57, &cVar60), &(Var0[iVar582]));
		iVar58++;
	}
	Function_114(0.0f, 0.0f, -2.5f, 150.0f);
	vVar68 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_114(0.0f, 0.0f, -2.5f, 150.0f), vLocal_140, StackVal) };
	iVar71 = Function_119(Global_83591.f_140, &vVar68, (150.0f + 180.0f), &Var0, 1);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar71, 0);
	Function_118(iVar71);
	Function_117("p_gen_floursackstack01x", iVar71, 1.056f, 0.0f, 0.464f, 0.0f, -180.0f, 0.0f);
	Function_117("p_gen_floursackstack02x", iVar71, 1.046f, 0.0f, 1.265f, 0.0f, 30.0f, 0.0f);
	Function_117("p_gen_floursackstack02x", iVar71, -2.233f, 0.0f, 0.384f, 0.0f, -30.0f, 0.0f);
	return iVar71;
}

void Function_117(char* cParam0, int iParam1, vector3 vParam2, vector3 vParam5) //Position: 0x33E8 / 13288
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_RELATIVE_POSITION(iParam1, vParam2, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam1, vParam5, &vVar3);
	SNAP_OBJECT_TO_GROUND(CREATE_PROP_IN_LAYOUT(iParam1, "", cParam0, vVar0, vVar3, 1), 3.0f, 0, 1092616192);
}

void Function_118(int iParam0) //Position: 0x3426 / 13350
{
	vector3 vVar0;
	
	GET_OBJECT_RELATIVE_POSITION(iParam0, 0.0f, 3.0f, 1.2f, &vVar0);
	CREATE_POINT_LIGHT_IN_LAYOUT(iParam0, "", vVar0, 0.75f, 0.75f, 0.75f, 4.0f);
	return;
}

var Function_119(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4) //Position: 0x3458 / 13400
{
	char* cVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10[3];
	
	cVar0 = Function_123(uParam0, uParam1, fParam2, iParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_122((*iParam3)[iVar12], &iVar2))
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
		if (Function_122((*iParam3)[iVar12], &iVar2))
		{
			if (Function_120((*iParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				iVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", cVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*iParam3)[iVar12])), StackVal) + Vector(0.0f, fParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(iVar9, 0);
				if (IS_OBJECT_VALID(iVar9))
				{
					ATTACH_OBJECTS(iVar9, cVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return cVar0;
}

bool Function_120(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x3546 / 13638
{
	if (!Function_121(iParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(iParam0))
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

bool Function_121(int iParam0) //Position: 0x36D7 / 14039
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_122(int iParam0, int iParam1) //Position: 0x36E9 / 14057
{
	switch (UNK_0xDB679ED9(iParam0))
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

var Function_123(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x3745 / 14149
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *uParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, uParam1, &uVar0))
		{
			*uParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*uParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, fParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *uParam1, Function_124()), 0.0f, (fParam2 + 180.0f), 0.0f, 1);
}

var Function_124() //Position: 0x37B1 / 14257
{
	return "$/fragments/p_gen_dressForm01x";
}

void Function_125(int iParam0) //Position: 0x37D8 / 14296
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_127(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_126(iParam0, 0.0f);
	return;
}

void Function_126(var uParam0, int iParam1) //Position: 0x3805 / 14341
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_127(int iParam0) //Position: 0x3811 / 14353
{
	Function_128(iParam0, 4294967295, 0, 1);
	return;
}

void Function_128(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x381F / 14367
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

var Function_129() //Position: 0x3849 / 14409
{
	vector3 vVar0;
	int iVar3;
	
	Function_114(0.0f, 0.0f, 2.5f, 150.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_114(0.0f, 0.0f, 2.5f, 150.0f), vLocal_140, StackVal) };
	iVar3 = Function_119(Global_83591.f_140, &vVar0, 150.0f, &Global_83591 + 276, 1);
	Function_118(iVar3);
	Function_130(iVar3, &Global_83591 + 276 + 228);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar3, 0);
	return iVar3;
}

var Function_130(int iParam0, int iParam1) //Position: 0x38A0 / 14496
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	int iVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(iParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	iVar12 = CREATE_PROP_IN_LAYOUT(iParam0, Function_132(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_122((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_122((*iParam1)[iVar202], &iVar21))
		{
			if (Function_131((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(iVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(iVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(iVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return iVar12;
}

bool Function_131(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4) //Position: 0x39AF / 14767
{
	float fVar0;
	
	if (!Function_121(iParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		iParam3 = 1;
	}
	fVar0 = (((TO_FLOAT(iParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(iParam0))
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

var Function_132() //Position: 0x3AD6 / 15062
{
	int iVar0;
	
	return iVar0;
}

bool Function_133(bool bParam0, bool bParam1) //Position: 0x3ADE / 15070
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_134() //Position: 0x3AFE / 15102
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_148)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				Function_135("AD_help", 4294967295);
				iLocal_148 = 1;
			}
		}
	}
	else
	{
		Function_4();
	}
	return;
}

void Function_135(char* cParam0, int iParam1) //Position: 0x3B42 / 15170
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

int Function_136(int iParam0) //Position: 0x3BD9 / 15321
{
	int iVar0;
	
	if (!Function_147(*iParam0) || (Function_152(64) && Function_143()))
	{
		iParam0->f_4 = 0;
		Function_25(iParam0);
		if (!Function_147(*iParam0))
		{
		}
		if (Function_152(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_147(*iParam0))
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
						(iParam0 + 12[Function_140(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
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
								Function_139((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_138((iParam0 + 12[StackVal5])->f_12, 1);
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
				Function_25(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_137(3, iParam0->f_1036))
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

int Function_137(int iParam0, int iParam1) //Position: 0x3F60 / 16224
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_138(char* cParam0, int iParam1) //Position: 0x3F72 / 16242
{
	if (!IS_DOOR_VALID(cParam0))
	{
		return;
	}
	DECOR_SET_BOOL(cParam0, "lockMe", iParam1);
	if (DECOR_CHECK_EXIST(cParam0, "unlockMe"))
	{
		DECOR_REMOVE(cParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(cParam0))
	{
		SET_DOOR_LOCK(cParam0, 1);
	}
	return;
}

void Function_139(char* cParam0, int iParam1) //Position: 0x3FC6 / 16326
{
	if (!IS_DOOR_VALID(cParam0))
	{
		return;
	}
	DECOR_SET_BOOL(cParam0, "unlockMe", iParam1);
	if (DECOR_CHECK_EXIST(cParam0, "lockMe"))
	{
		DECOR_REMOVE(cParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(cParam0))
	{
		SET_DOOR_LOCK(cParam0, 0);
	}
	return;
}

int Function_140(var uParam0, var uParam1, int iParam2) //Position: 0x401C / 16412
{
	return Function_141(Global_29006, uParam0, uParam1, iParam2);
}

int Function_141(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x402E / 16430
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_142(iParam0))
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
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(uVar10);
}

bool Function_142(int iParam0) //Position: 0x40CA / 16586
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_143() //Position: 0x40E0 / 16608
{
	return !Function_144();
}

bool Function_144() //Position: 0x40EA / 16618
{
	if (Function_146())
	{
		return (Function_145() != 1 || Function_145() != 0);
	}
	return 0;
}

int Function_145() //Position: 0x4103 / 16643
{
	return Global_79349.f_16;
}

bool Function_146() //Position: 0x410F / 16655
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_147(int iParam0) //Position: 0x4118 / 16664
{
	if (!Function_142(iParam0))
	{
		return 1;
	}
	return Function_148(&(Global_29008[iParam0]), 4);
}

int Function_148(int iParam0, int iParam1) //Position: 0x4134 / 16692
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_149() //Position: 0x4150 / 16720
{
	char* cVar0;
	
	cVar0 = CREATE_LAYOUT(Function_132());
	Function_150(cVar0, "bottle", Local_150.f_384);
	Function_150(cVar0, "mug0", Local_150.f_384);
	Function_150(cVar0, "glass", Local_150.f_384);
	Function_150(cVar0, "crate14", Local_150.f_384);
	Function_150(cVar0, "crate03", Local_150.f_384);
	Function_150(cVar0, "package", Local_150.f_384);
	Function_150(cVar0, "nlantern05", Local_150.f_384);
	Function_150(cVar0, "blanket", Local_150.f_384);
	Function_150(cVar0, "c_tes_blanket", Local_150.f_384);
	Function_150(cVar0, "p_gen_bucket02x", Local_150.f_384);
	Function_150(cVar0, "p_gen_bucket03x", Local_150.f_384);
	Function_150(cVar0, "p_gen_basin01x", Local_150.f_384);
	Function_150(cVar0, "p_gen_can01x", Local_150.f_384);
	Function_150(cVar0, "p_gen_can02x", Local_150.f_384);
	Function_150(cVar0, "jar0", Local_150.f_384);
	Function_150(cVar0, "book", Local_150.f_384);
	Function_150(cVar0, "spittoon", Local_150.f_384);
	Function_150(cVar0, "milkcan", Local_150.f_384);
	Function_150(cVar0, "jug0", Local_150.f_384);
	Function_150(cVar0, "broom", Local_150.f_384);
	Function_150(cVar0, "cratebreak", Local_150.f_384);
	Function_150(cVar0, "potclay", Local_150.f_384);
	Function_150(cVar0, "fom_gallows01_flag", Local_150.f_384);
	Function_150(cVar0, "fom_leftwing01_flag", Local_150.f_384);
	Function_150(cVar0, "rope", Local_150.f_384);
	Function_150(cVar0, "nlantern07", Local_150.f_384);
	Function_150(cVar0, "i_gen_blanket09x", Local_150.f_384);
	DESTROY_LAYOUT(cVar0);
	return;
}

void Function_150(int iParam0, char* cParam1, char* cParam2) //Position: 0x43BA / 17338
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_132(), iParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(iVar1, cParam2, cParam1, 1);
	uVar2 = CREATE_OBJECT_ITERATOR(iParam0);
	ITERATE_IN_SET(uVar2, iVar1);
	iVar3 = START_OBJECT_ITERATOR(uVar2);
	while (IS_OBJECT_VALID(iVar3))
	{
		DESTROY_OBJECT(iVar3);
		iVar0++;
		iVar3 = OBJECT_ITERATOR_NEXT(uVar2);
	}
	DESTROY_OBJECTSET(iVar1);
	DESTROY_ITERATOR(uVar2);
	return;
}

void Function_151(int iParam0, bool bParam1) //Position: 0x4413 / 17427
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

bool Function_152(int iParam0) //Position: 0x443B / 17467
{
	return Function_11(StackVal, iParam0);
}

var Function_153() //Position: 0x444E / 17486
{
	return Global_83591.f_140;
}

void Function_154(bool bParam0) //Position: 0x445A / 17498
{
	Function_151(16, bParam0);
	return;
}

void Function_155(int iParam0, bool bParam1) //Position: 0x4467 / 17511
{
	if (bParam1)
	{
		Function_9(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_8(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

void Function_156(var uParam0) //Position: 0x448F / 17551
{
	Function_151(8, uParam0);
	return;
}

bool Function_157() //Position: 0x449C / 17564
{
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, 0, 0));
	Function_210(0, 0);
	NET_OBJECT_REPLICATION_MODE_START(17, 4);
	Function_200();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_183(Local_150, 22336, 21876, 21273, 40, 25);
	Function_182("FTR_SONG_06", "FTR_SONG_03", 0, 58, 58, 1);
	Function_181(Local_150.f_388);
	Function_177(&Global_83591 + 276, 0);
	Function_175(&Global_83591, 1, 22, 1, 1);
	Function_175(&Global_83591, 2, 6, 10, 1);
	Function_175(&Global_83591, 3, 10, 10, 1);
	Function_175(&Global_83591, 4, 20, 2, 1);
	Function_175(&Global_83591, 5, 24, 1, 1);
	Function_175(&Global_83591, 6, 15, 10, 1);
	Function_173(22, 1, 1);
	Function_173(12, 2, 1);
	Function_173(5, 10, 1);
	Function_173(20, 1, 1);
	Function_173(16, 10, 1);
	Function_169(&Global_83591, 1, 19, 5, 1);
	Function_169(&Global_83591, 2, 2, 10, 1);
	Function_169(&Global_83591, 3, 17, 10, 1);
	Function_169(&Global_83591, 4, 11, 10, 1);
	Function_168(&Global_83591);
	Function_167(&Global_83591 + 276, 4);
	Function_165(512);
	Function_164(Global_83864.f_1284);
	Function_19(979);
	Function_17(Global_83864.f_1284, 0, 1);
	iLocal_516 = 0;
	Function_34();
	AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	Function_163(-2791.07f, 77.902f, 3626.006f, 7.0f);
	Function_163(-2801.41f, 78.306f, 3625.804f, 7.0f);
	Function_163(-2703.602f, 83.64f, 3593.002f, 7.0f);
	if (!Function_158(&uLocal_254))
	{
		return 0;
	}
	return 1;
}

bool Function_158(bool bParam0) //Position: 0x464A / 17994
{
	if (!Function_162(bParam0, Global_30679[1]))
	{
		return 0;
	}
	Function_161(bParam0, "fortMercer", "guardTowerProps01", 7);
	Function_161(bParam0, "fortMercer", "guardTowerProps01", 8);
	Function_161(bParam0, "fortMercer", "corral", 1);
	Function_161(bParam0, "fortMercer", "corral", 2);
	Function_159(bParam0, "fortMercer", "corral", 3, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "corral", 4, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "corral", 5, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "corral", 6, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "corral", 7, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "corral", 9, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps02", 8, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps02", 9, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps02", 10, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps02", 11, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps02", 12, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 1, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 2, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 12, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 13, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 22, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 14, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 16, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 17, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 23, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 15, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 6, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 5, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 21, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 10, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 7, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 8, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "nrightwing", 9, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps01", 4, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "guardTowerProps01", 3, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 12, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 11, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 25, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 9, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 10, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 16, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 21, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 8, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 7, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 18, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 23, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 17, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 14, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 4, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 3, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 2, 1, 0, 1, 1);
	Function_159(bParam0, "fortMercer", "leftwing", 1, 1, 0, 1, 1);
	return 1;
}

int Function_159(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4DBC / 19900
{
	int iVar0;
	
	iVar0 = iParam0->f_1036;
	if (!Function_160(iParam0, uParam1, uParam2, iParam3))
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

bool Function_160(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4E2D / 20013
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

int Function_161(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x4E89 / 20105
{
	int iVar0;
	
	iVar0 = iParam0->f_1036;
	if (!Function_160(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_9(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_162(int iParam0, int iParam1) //Position: 0x4EBB / 20155
{
	int iVar0;
	
	if (!Function_142(iParam1))
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

void Function_163(vector3 vParam0, float fParam3) //Position: 0x4F31 / 20273
{
	CLEAR_AREA_OF_TREE_TYPE(vParam0, fParam3, "");
	CLEAR_AREA_OF_BREAKABLE_TREES(vParam0, fParam3);
	CLEAR_AREA_OF_GRASS(vParam0, fParam3);
}

void Function_164(int iParam0) //Position: 0x4F5A / 20314
{
	if (!Function_20(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), 64);
	return;
}

void Function_165(int iParam0) //Position: 0x4F89 / 20361
{
	Function_166(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_166(var uParam0, int iParam1) //Position: 0x4FE2 / 20450
{
	Function_9(uParam0, iParam1);
	return;
}

void Function_167(int iParam0, int iParam1) //Position: 0x4FEF / 20463
{
	(iParam0 + 228)->f_220 = 0;
	Function_9(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_168(int iParam0) //Position: 0x5007 / 20487
{
	iParam0->f_844 = 0;
	return;
}

void Function_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5013 / 20499
{
	Function_170(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_170(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x502B / 20523
{
	Function_171(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_171(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5042 / 20546
{
	if (!Function_172(iParam1))
	{
		return;
	}
	Function_128(uParam0[iParam12], bParam2, iParam3, bParam4);
}

bool Function_172(int iParam0) //Position: 0x5065 / 20581
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_173(bool bParam0, int iParam1, bool bParam2) //Position: 0x5075 / 20597
{
	bool bVar0;
	int iVar1;
	char* cVar2[32];
	struct<2> Var10;
	
	bVar0 = Function_115();
	iVar1 = DECOR_GET_INT(bVar0, "AD_WeaponCount");
	DECOR_SET_INT(bVar0, "AD_WeaponCount", iVar1 + 1);
	strcpy(&cVar2, "AD_WeaponData_", 32);
	straddi(&cVar2, iVar1, 32);
	Var10 = bParam0;
	Var10.f_4 = iParam1;
	if (bParam2)
	{
		Var10.f_4 = (StackVal * CEIL(GET_WEAPON_MAX_AMMO(bParam0)));
	}
	DECOR_SET_INT(StackVal, bVar0, Function_174(&cVar2, Var10, 0));
	return;
}

var Function_174(struct<5> Param0) //Position: 0x50FE / 20734
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_107())) || SHIFT_LEFT(iParam2, Function_107() + 8));
}

void Function_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x511C / 20764
{
	Function_176(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x5134 / 20788
{
	Function_171(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_177(int iParam0, bool bParam1) //Position: 0x5149 / 20809
{
	Function_125(iParam0);
	Function_125(iParam0 + 228);
	if (bParam1)
	{
		Function_178(iParam0);
	}
	return;
}

void Function_178(int iParam0) //Position: 0x5165 / 20837
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_179(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x5185 / 20869
{
	Function_180(uParam0, iParam1, 0);
	return;
}

void Function_180(int iParam0, int iParam1, int iParam2) //Position: 0x5193 / 20883
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_181(bool bParam0) //Position: 0x51A4 / 20900
{
	DECOR_SET_OBJECT(Function_153(), "LobbyGringoSet", bParam0);
	return;
}

void Function_182(char* cParam0, char* cParam1, char* cParam2, var uParam3, var uParam4, var uParam5) //Position: 0x51C4 / 20932
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], cParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_183(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) //Position: 0x5254 / 21076
{
	uLocal_143 = uParam1;
	uLocal_144 = uParam2;
	uLocal_145 = uParam3;
	(&Global_83591 + 140)->f_56 = 0;
	Function_40(0, 0);
	Function_40(1, iParam4);
	Function_40(2, iParam5);
	if (Function_186())
	{
		Function_167(&Global_83591 + 276, 2);
	}
	Function_185(uParam0);
	Global_83591.f_4 = 2;
	Global_83591.f_16 = (4.0f * 60.0f);
	Function_184();
	vLocal_140 = { StackVal, StackVal, Function_184() };
}

vector3 Function_184() //Position: 0x52B3 / 21171
{
	char* cVar0;
	vector3 vVar1;
	int iVar4;
	
	cVar0 = Function_153();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(cVar0))
	{
		iVar4 = FIND_OBJECT_IN_LAYOUT(cVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(iVar4))
		{
			GET_OBJECT_POSITION(iVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

void Function_185(var uParam0) //Position: 0x52FB / 21243
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_186() //Position: 0x5309 / 21257
{
	return Function_11(Global_79962, 1024);
}

var Function_187(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5319 / 21273
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_132(), 3, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_FOMHalfTime", 3, 1);
	}
	Function_188(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_188(var uParam0, char* cParam1) //Position: 0x5395 / 21397
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_191(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_190(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_189(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 5.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 5.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 5.0f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 5.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 2, 6);
	return;
}

void Function_189(int iParam0) //Position: 0x5432 / 21554
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2678.966f, 86.32801f, 3463.786f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.720833f, 2.533098f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_190(int iParam0) //Position: 0x549C / 21660
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2651.583f, 77.52175f, 3423.237f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.614461f, 2.447262f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_191(bool bParam0) //Position: 0x5506 / 21766
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2618.19f, 92.28223f, 3385.311f);
	SET_CAMERASHOT_DIRECTION(*bParam0, 0.60362f, 0.401077f, -0.689043f, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_192(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5574 / 21876
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_132(), 2, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_fom_defend", 2, 1);
	}
	Function_193(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_193(var uParam0, char* cParam1) //Position: 0x55EF / 21999
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_195(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_194(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 18.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	return;
}

void Function_194(int iParam0) //Position: 0x566C / 22124
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2682.59f, 92.62081f, 3588.667f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.226931f, 1.519287f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_195(bool bParam0) //Position: 0x56D6 / 22230
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2661.923f, 80.52804f, 3401.773f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0.27967f, 2.684248f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_196(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5740 / 22336
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_132(), 2, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_fom_attack", 2, 1);
	}
	Function_197(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_197(var uParam0, char* cParam1) //Position: 0x57BB / 22459
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_199(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_198(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 18.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	return;
}

void Function_198(int iParam0) //Position: 0x5838 / 22584
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2678.058f, 96.58057f, 3618.929f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.224111f, 0.371059f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_199(var uParam0) //Position: 0x58A2 / 22690
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2856.428f, 96.96767f, 3661.077f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.149384f, -0.015627f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_200() //Position: 0x590C / 22796
{
	var uVar0;
	
	Function_209(4, 1);
	uVar0 = uVar0;
	Local_150 = CREATE_LAYOUT("AD_Fom_layout");
	Local_150.f_180 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_1_set");
	(*&Local_150 + 140)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_1", 3, -2931.26f, 56.2196f, 3515.75f, 0.0f, -51.09547f, 3.0f, 5.0f, 4.0f, 5.0f);
	Function_207((*&Local_150 + 140)[0], 2);
	Function_205((*&Local_150 + 140)[0], 1);
	Function_203((*&Local_150 + 140)[0], 30.0f);
	Function_201((*&Local_150 + 140)[0], 180.0f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[0]);
	(*&Local_150 + 140)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_0", 2, -3021.654f, 47.40216f, 3658.568f, 0.0f, -198.2252f, 0.0f, 4.0f, 2.0f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[1]);
	(*&Local_150 + 140)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_1", 2, -3132.849f, 50.19608f, 3447.75f, 0.0f, 72.22797f, 0.0f, 4.0f, 2.0f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[2]);
	(*&Local_150 + 140)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_2", 2, -3135.26f, 46.89743f, 3551.75f, 0.0f, 93.00981f, 0.0f, 4.0f, 2.0f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[3]);
	(*&Local_150 + 140)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_3", 2, -3089.015f, 45.82221f, 3617.994f, 0.0f, 131.89f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[4]);
	(*&Local_150 + 140)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_0", 2, -2673.117f, 66.67222f, 3547.79f, 0.0f, 276.4491f, 0.0f, 4.0f, 2.0f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[5]);
	(*&Local_150 + 140)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_1", 2, -2668.221f, 67.26276f, 3524.515f, 0.0f, 287.6332f, 0.0f, 4.0f, 2.0f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[6]);
	(*&Local_150 + 140)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_2", 2, -2725.628f, 67.26276f, 3457.382f, 0.0f, 211.2512f, 0.0f, 4.0f, 2.0f, 2.835943f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[7]);
	(*&Local_150 + 140)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_3", 2, -2721.459f, 66.12339f, 3427.75f, 0.0f, -40.72321f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_180, (*&Local_150 + 140)[8]);
	Local_150.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_2_set");
	(*&Local_150 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_2", 3, -2804.227f, 78.30585f, 3624.0f, 0.0f, -32.84923f, 0.0f, 6.483787f, 6.483787f, 6.483787f);
	Function_207((*&Local_150 + 184)[0], 2);
	Function_205((*&Local_150 + 184)[0], 1);
	Function_203((*&Local_150 + 184)[0], 30.0f);
	Function_201((*&Local_150 + 184)[0], 180.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[0]);
	(*&Local_150 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_0", 2, -2987.31f, 54.69839f, 3540.391f, 0.0f, -268.5935f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[1]);
	(*&Local_150 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_1", 2, -2993.005f, 59.84929f, 3483.814f, 0.0f, 84.25915f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[2]);
	(*&Local_150 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_2", 2, -3001.486f, 57.2248f, 3521.256f, 0.0f, 86.35674f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[3]);
	(*&Local_150 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_3", 2, -2984.0f, 54.21176f, 3579.189f, 0.0f, 99.90614f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[4]);
	(*&Local_150 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_0", 2, -2678.299f, 67.26274f, 3495.087f, 0.0f, -123.3357f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[5]);
	(*&Local_150 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_1", 2, -2708.0f, 67.26273f, 3492.0f, 0.0f, 66.05737f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[6]);
	(*&Local_150 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_2", 2, -2662.767f, 67.26273f, 3484.0f, 0.0f, 0.0f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[7]);
	(*&Local_150 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_3", 2, -2708.429f, 67.26274f, 3438.023f, 0.0f, -23.22066f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_224, (*&Local_150 + 184)[8]);
	Local_150.f_268 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_3_set");
	(*&Local_150 + 228)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_3", 3, -2701.936f, 83.71224f, 3593.937f, 0.0f, 214.4653f, 0.0f, 4.0f, 4.0f, 4.0f);
	Function_207((*&Local_150 + 228)[0], 2);
	Function_205((*&Local_150 + 228)[0], 1);
	Function_203((*&Local_150 + 228)[0], 30.0f);
	Function_201((*&Local_150 + 228)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[0]);
	(*&Local_150 + 228)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_0", 2, -2813.184f, 66.5508f, 3674.816f, 0.0f, 165.305f, 0.0f, 4.0f, 4.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[1]);
	(*&Local_150 + 228)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_1", 2, -2792.465f, 67.39028f, 3672.0f, 0.0f, -179.6255f, 0.0f, 4.0f, 4.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[2]);
	(*&Local_150 + 228)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_2", 2, -2802.957f, 65.25487f, 3676.0f, 0.0f, -188.5191f, 0.0f, 4.0f, 5.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[3]);
	(*&Local_150 + 228)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_3", 2, -2832f, 68.78485f, 3668.0f, 0.0f, 138.1255f, 0.0f, 4.0f, 3.672856f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[4]);
	(*&Local_150 + 228)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_0", 2, -2681.119f, 71.65823f, 3456.173f, 0.0f, -116.4856f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[5]);
	(*&Local_150 + 228)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_1", 2, -2710.347f, 67.26274f, 3465.653f, 0.0f, 27.63875f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[6]);
	(*&Local_150 + 228)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_2", 2, -2718.942f, 67.26273f, 3482.732f, 0.0f, 78.82481f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[7]);
	(*&Local_150 + 228)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_3", 2, -2734.162f, 67.26273f, 3467.113f, 0.0f, 0.0f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 228)[8]);
	Local_150.f_312 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_4_set");
	(*&Local_150 + 272)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_4", 3, -2697.559f, 67.26273f, 3484.567f, 0.0f, 20.0f, 0.0f, 5.0f, 4.0f, 5.0f);
	Function_207((*&Local_150 + 272)[0], 2);
	Function_205((*&Local_150 + 272)[0], 1);
	Function_203((*&Local_150 + 272)[0], 30.0f);
	Function_201((*&Local_150 + 272)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[0]);
	(*&Local_150 + 272)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_0", 2, -2772f, 66.79419f, 3659.11f, 0.0f, 202.0154f, 0.0f, 4.0f, 4.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[1]);
	(*&Local_150 + 272)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_1", 2, -2672f, 69.89949f, 3649.494f, 0.0f, 179.2194f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[2]);
	(*&Local_150 + 272)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_2", 2, -2657.139f, 70.12791f, 3658.86f, 0.0f, 191.8107f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[3]);
	(*&Local_150 + 272)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_3", 2, -2605.284f, 78.30585f, 3642.716f, 0.0f, -178.2768f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[4]);
	(*&Local_150 + 272)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_0", 2, -2701.17f, 67.45506f, 3441.861f, 0.0f, 51.25409f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[5]);
	(*&Local_150 + 272)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_1", 2, -2663.9f, 67.45486f, 3462.983f, 0.0f, -209.7199f, 0.0f, 4.481159f, 2.0f, 1.556084f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[6]);
	(*&Local_150 + 272)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_2", 2, -2656.455f, 67.46478f, 3452.052f, 0.0f, -105.6897f, 0.0f, 4.0f, 2.0f, 2.969416f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[7]);
	(*&Local_150 + 272)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_3", 2, -2706.188f, 67.26274f, 3451.658f, 0.0f, 66.04317f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_312, (*&Local_150 + 272)[8]);
	Local_150.f_368 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_5_set");
	(*&Local_150 + 316)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_5", 3, -2664.0f, 67.26273f, 3436.0f, 0.0f, 20.0f, 0.0f, 7.542039f, 6.033631f, 7.542039f);
	Function_207((*&Local_150 + 316)[0], 3);
	Function_205((*&Local_150 + 316)[0], 1);
	Function_203((*&Local_150 + 316)[0], 30.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[0]);
	(*&Local_150 + 316)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn5_0", 2, -2696f, 84.12622f, 3612.0f, 0.0f, 177.6327f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[1]);
	(*&Local_150 + 316)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn5_1", 2, -2582.464f, 62.96125f, 3298.294f, 0.0f, 47.48846f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[2]);
	(*&Local_150 + 316)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn5_2", 2, -2590.618f, 61.516f, 3292.938f, 0.0f, 39.2184f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[3]);
	(*&Local_150 + 316)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn5_3", 2, -2707.037f, 83.32547f, 3608.0f, 0.0f, 177.6327f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[4]);
	(*&Local_150 + 316)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn5_4", 2, -2608.0f, 78.52834f, 3636.0f, 0.0f, 182.1232f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[5]);
	(*&Local_150 + 316)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn5_5", 2, -2648f, 79.59617f, 3624.89f, 0.0f, 175.9197f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[6]);
	(*&Local_150 + 316)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn5_0", 2, -2666.983f, 67.45486f, 3405.657f, 0.0f, 0.0f, 0.0f, 3.529859f, 2.0f, 3.085915f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[7]);
	(*&Local_150 + 316)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn5_1", 2, -2641.472f, 67.455f, 3429.921f, 0.0f, -138.3829f, 0.0f, 2.500223f, 2.0f, 3.21986f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[8]);
	(*&Local_150 + 316)[9] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn5_2", 2, -2647.094f, 67.45486f, 3457.573f, 0.0f, -123.023f, 0.0f, 2.573789f, 2.0f, 1.593648f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[9]);
	(*&Local_150 + 316)[10] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn5_3", 2, -2669.146f, 71.65486f, 3409.024f, 0.0f, 0.0f, 0.0f, 2.37839f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[10]);
	(*&Local_150 + 316)[11] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn5_4", 2, -2697.094f, 67.455f, 3427.605f, 0.0f, -26.74827f, 0.0f, 2.916173f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_368, (*&Local_150 + 316)[11]);
	Local_150.f_372 = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cannon1_Volume", 3, -2700.0f, 83.32543f, 3589.631f, 0.0f, 20.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	Local_150.f_376 = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cannon2_Volume", 3, -2708f, 83.32544f, 3589.509f, 0.0f, 20.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	Local_150.f_380 = CREATE_VOLUME_IN_LAYOUT(Local_150, "AD_fom_volume", 2, -2820.0f, 62.24313f, 3496.0f, 0.0f, 0.0f, 0.0f, 500.0f, 100.0f, 500.0f);
	Local_150.f_384 = CREATE_VOLUME_IN_LAYOUT(Local_150, "v_clear_vol", 2, -2678.236f, 75.4193f, 3449.987f, 0.0f, 47.87524f, 0.0f, 132.3644f, 36.03788f, 95.54613f);
	Local_150.f_388 = CREATE_OBJECTSET_IN_LAYOUT(Function_132(), Local_150, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -2677.207f, 71.65078f, 3458.951f, 0.0f, 38.50379f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -2678.162f, 71.65559f, 3456.26f, 0.0f, -172.5233f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -2680.414f, 71.656f, 3455.539f, 0.0f, 217.448f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -2680.825f, 71.656f, 3457.71f, 0.0f, -110.541f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -2679.491f, 71.656f, 3456.943f, 0.0f, 200.3873f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2683.506f, 71.656f, 3456.548f, 0.0f, -356.4494f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -2690.426f, 71.656f, 3449.951f, 0.0f, -128.9054f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "rand_idle_stand1", "rand_idle_stand", -2687.525f, 71.656f, 3445.884f, 0.0f, -97.63017f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand_loose", "smoking_stand_loose", -2682.497f, 71.656f, 3452.463f, 0.0f, 123.9893f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand", "smoking_stand", -2684.622f, 71.656f, 3443.94f, 0.0f, 119f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand1", "smoking_stand", -2675.869f, 71.656f, 3456.347f, 0.0f, 89.10627f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_yelling_mid", "stand_yelling_mid", -2682.705f, 71.656f, 3441.249f, 0.0f, 67.81016f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_yelling_mid1", "stand_yelling_mid", -2685.001f, 71.656f, 3440.205f, 0.0f, -117.2839f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -2683.525f, 71.656f, 3444.613f, 0.0f, 193.7507f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -2686.874f, 71.656f, 3454.84f, 0.0f, 109.5341f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand_loose1", "smoking_stand_loose", -2689.134f, 71.656f, 3447.523f, 0.0f, 259.774f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand2", "smoking_stand", -2687.314f, 71.656f, 3448.208f, 0.0f, -26.37167f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "nlean_rail", "nlean_rail", -2679.968f, 71.656f, 3453.318f, 0.0f, -26.87442f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "lean_rail1", "nlean_rail", -2684.778f, 71.656f, 3447.965f, 0.0f, -116.1825f, 0.0f), Local_150.f_388);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "lean_rail2", "nlean_rail", -2689.35f, 71.656f, 3454.408f, 0.0f, -207.6119f, 0.0f), Local_150.f_388);
	Local_150.f_392 = CREATE_PROP_IN_LAYOUT(Local_150, "cannon02x0", "p_gen_cannon02x", -2700.0f, 83.32543f, 3588.776f, 0.0f, 0.0f, 0.0f, 1);
	Local_150.f_396 = CREATE_PROP_IN_LAYOUT(Local_150, "cannon02x1", "p_gen_cannon02x", -2708f, 83.32544f, 3588.746f, 0.0f, -7.350865f, 0.0f, 1);
	Local_150.f_400 = CREATE_PROP_IN_LAYOUT(Local_150, "gatlingGun01x0", "p_gen_gatlingGun01x", -2678.375f, 72.83732f, 3503.615f, 0.0f, 168.1845f, 0.0f, 1);
	Local_150.f_404 = CREATE_PROP_IN_LAYOUT(Local_150, "gatlingGun01x1", "p_gen_gatlingGun01x", -2662.784f, 74.82836f, 3474.721f, 0.0f, 187.1356f, 0.0f, 1);
	Local_150.f_408 = CREATE_PROP_IN_LAYOUT(Local_150, "gatlingGun01x2", "p_gen_gatlingGun01x", -2634.057f, 72.65486f, 3425.39f, 0.0f, -52.53933f, 0.0f, 1);
	Local_150.f_412 = CREATE_PROP_IN_LAYOUT(Local_150, "gatlingGun01x3", "p_gen_gatlingGun01x", -2730.513f, 71.47397f, 3472.771f, 0.0f, -225.4822f, 0.0f, 1);
	return;
}

void Function_201(int iParam0, float fParam1) //Position: 0x7009 / 28681
{
	DECOR_SET_FLOAT(uParam0, Function_202(), fParam1);
	return;
}

var Function_202() //Position: 0x701A / 28698
{
	return "ADTimerBonus";
}

void Function_203(int iParam0, float fParam1) //Position: 0x702F / 28719
{
	DECOR_SET_FLOAT(uParam0, Function_204(), fParam1);
	return;
}

var Function_204() //Position: 0x7040 / 28736
{
	return "ADTimer";
}

void Function_205(bool bParam0, int iParam1) //Position: 0x7050 / 28752
{
	DECOR_SET_INT(uParam0, Function_206(), iParam1);
	return;
}

var Function_206() //Position: 0x7061 / 28769
{
	return "ADObjective";
}

void Function_207(bool bParam0, int iParam1) //Position: 0x7075 / 28789
{
	DECOR_SET_INT(uParam0, Function_208(), iParam1);
	return;
}

var Function_208() //Position: 0x7086 / 28806
{
	return "ADReward";
}

void Function_209(int iParam0, int iParam1) //Position: 0x7097 / 28823
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

void Function_210(var uParam0, int iParam1) //Position: 0x70E0 / 28896
{
	Function_215(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_211(StackVal, iParam1);
	}
	return;
}

void Function_211(int iParam0, int iParam1) //Position: 0x7111 / 28945
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_215(iParam0);
	Function_214(uVar0);
	PRINTNL();
	Function_212(iParam0, uVar0, iParam1);
	return;
}

void Function_212(int iParam0, int iParam1, bool bParam2) //Position: 0x7136 / 28982
{
	int iVar0;
	
	Function_215(iParam0);
	Function_214(iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, iParam1);
	Function_213();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_213() //Position: 0x72AF / 29359
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_214(int iParam0) //Position: 0x72BB / 29371
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_215(int iParam0) //Position: 0x7301 / 29441
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

void Function_216() //Position: 0x7347 / 29511
{
	while (!IS_EXITFLAG_SET())
	{
		Function_134();
		Function_44(6002, 4012);
		WAIT(0);
	}
	return;
}

bool Function_217() //Position: 0x7367 / 29543
{
	return Function_152(2);
}

void Function_218() //Position: 0x7371 / 29553
{
	if (Function_217())
	{
		return;
	}
	Function_229();
	Function_228();
	Function_226(&iLocal_127, Function_124(), 0, 0);
	Function_226(&iLocal_127, "p_gen_floursackstack01x", 0, 0);
	Function_226(&iLocal_127, "p_gen_floursackstack02x", 0, 0);
	Function_226(&iLocal_127, "dlc_mpmodepack_atkdef", 10, 0);
	while (!Function_220(&iLocal_127))
	{
		WAIT(0);
	}
	fLocal_68 = 1.5f;
	Function_134();
	Function_219();
	return;
}

void Function_219() //Position: 0x7411 / 29713
{
	while (!Function_152(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_220(int iParam0) //Position: 0x742C / 29740
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_225();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_224(iParam0[iVar03], 8);
		}
		else if (Function_223())
		{
			iVar1 = 1;
			Function_224(iParam0[iVar03], 8);
		}
		Function_224(iParam0[iVar03], 16);
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
				Function_224(iParam0[iVar03], 1);
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
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
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
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
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
	Function_221();
	return 1;
}

void Function_221() //Position: 0x77A7 / 30631
{
	if (!Function_222(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_222(int iParam0) //Position: 0x77E7 / 30695
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_223() //Position: 0x7803 / 30723
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

void Function_224(var uParam0, int iParam1) //Position: 0x782E / 30766
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_225() //Position: 0x783F / 30783
{
	if (!Function_222(128))
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

var Function_226(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7881 / 30849
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_227(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_224(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_227(var uParam0, int iParam1, int iParam2) //Position: 0x78B9 / 30905
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_224(uParam0[iVar03], 4);
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

void Function_228() //Position: 0x797D / 31101
{
	Local_96.f_96 = 4294967295;
	Local_96.f_100 = 4294967295;
	return;
}

void Function_229() //Position: 0x798D / 31117
{
	Local_69.f_96 = 4294967295;
	Local_69.f_100 = 4294967295;
	return;
}

