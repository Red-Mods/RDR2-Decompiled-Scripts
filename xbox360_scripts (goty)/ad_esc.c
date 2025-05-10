//Decompiled with MagicRDR v1.0
//Function Count : 213
//Statics Count : 463
//Natives Count : 228
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
	struct<105> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_188 = 8;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 8;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 8;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 8;
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
	var uLocal_298 = 31;
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
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	var uLocal_462 = 0;
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
	iLocal_460 = 4294967295;
	iLocal_461 = 0;
	Function_201();
	if (Function_200())
	{
		Function_199();
	}
	else
	{
		if (Function_143())
		{
			Function_142(1);
		}
		else
		{
			Function_141(1);
		}
		DECOR_SET_INT(Function_140(), "AD_Instance", 4);
		iVar0 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_139(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_138(64, 0);
					iVar0 = 10;
				}
			}
			Function_125(&uLocal_295);
			Function_25();
			Function_20();
			WAIT(0);
		}
	}
	Function_18(&uLocal_295);
	DISABLE_CHILD_SECTOR("dlc_esc_strhld01x");
	DISABLE_CHILD_SECTOR("dlc_esc_postReleaseFix01");
	Function_17();
	Function_4();
	Function_3();
	Function_1(&uLocal_462, 1, 0, 4294967295, 4294967295);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xE7 / 231
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_2(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_2(int iParam0) //Position: 0x10B / 267
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

void Function_3() //Position: 0x65E / 1630
{
	FIRE_STOP_ALL_FIRES();
	FIRE_RELEASE_HANDLE(uLocal_289, 1);
	FIRE_RELEASE_HANDLE(uLocal_290, 1);
	FIRE_RELEASE_HANDLE(uLocal_291, 1);
	FIRE_RELEASE_HANDLE(uLocal_292, 1);
	FIRE_RELEASE_HANDLE(uLocal_293, 1);
	FIRE_RELEASE_HANDLE(uLocal_294, 1);
	return;
}

void Function_4() //Position: 0x691 / 1681
{
	Function_13(&iLocal_127);
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x6A2 / 1698
{
	if (iLocal_148)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_148 = 0;
	}
	return;
}

void Function_6() //Position: 0x6E1 / 1761
{
	Function_7();
	return;
}

void Function_7() //Position: 0x6EA / 1770
{
	if (Function_11(4194304))
	{
		Function_8(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_11(8388608))
	{
		Function_8(8388608, 0, 1);
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

void Function_8(int iParam0, bool bParam1, int iParam2) //Position: 0x7F3 / 2035
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_9(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x81B / 2075
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x82E / 2094
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_11(int iParam0) //Position: 0x83D / 2109
{
	return Function_12(Global_76905.f_132, iParam0);
}

bool Function_12(var uParam0, int iParam1) //Position: 0x84E / 2126
{
	return (uParam0 && iParam1) == 0;
}

void Function_13(int iParam0) //Position: 0x85B / 2139
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_14(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x881 / 2177
{
	if (Function_16(uParam0[iParam13], 4))
	{
		if (Function_16(uParam0[iParam13], 1))
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
			Function_15(uParam0[iParam13], 1);
			Function_15(uParam0[iParam13], 2);
			Function_15(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x9AF / 2479
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x9C9 / 2505
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x9E6 / 2534
{
	Function_13(&Local_150 + 4);
	RELEASE_LAYOUT_REF(Local_150);
	return;
}

void Function_18(int iParam0) //Position: 0x9F8 / 2552
{
	Function_138(64, 0);
	Function_19(iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0xA09 / 2569
{
	if (iParam0->f_640 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_640, 0);
		iParam0->f_640 = "";
	}
	return;
}

void Function_20() //Position: 0xA29 / 2601
{
	if (iLocal_461 >= Function_24(3))
	{
		Function_3();
		Function_22();
		Function_21();
		iLocal_460 = 4294967295;
	}
	if (iLocal_461 != Function_24(3))
	{
		switch (Function_24(3))
		{
			case 0xFFFFFFFF:
				Function_1(&uLocal_462, 6, 0, 4294967295, 4294967295);
				break;
			
			case 0x00000000:
				Function_1(&uLocal_462, 34, 0, 4294967295, 4294967295);
				break;
			
			case 0x00000001:
				Function_1(&uLocal_462, 34, 0, 4294967295, 4294967295);
				break;
			
			case 0x00000003:
				Function_1(&uLocal_462, 40, 0, 4294967295, 4294967295);
				break;
			
			case 0x00000006:
			case 0x00000007:
				Function_1(&uLocal_462, 1, 0, 4294967295, 4294967295);
				break;
		}
		iLocal_461 = Function_24(3);
	}
	return;
}

void Function_21() //Position: 0xAC8 / 2760
{
	FIRE_CREATE_IN_VOLUME(uLocal_289, Local_150.f_312, 10, 1);
	FIRE_CREATE_IN_VOLUME(uLocal_290, Local_150.f_316, 10, 1);
	FIRE_CREATE_IN_VOLUME(uLocal_291, Local_150.f_320, 10, 1);
	FIRE_CREATE_IN_VOLUME(uLocal_292, Local_150.f_324, 10, 1);
	FIRE_CREATE_IN_VOLUME(uLocal_294, Local_150.f_332, 10, 1);
	return;
}

void Function_22() //Position: 0xB19 / 2841
{
	uLocal_289 = FIRE_CREATE_HANDLE();
	uLocal_290 = FIRE_CREATE_HANDLE();
	uLocal_291 = FIRE_CREATE_HANDLE();
	uLocal_292 = FIRE_CREATE_HANDLE();
	uLocal_293 = FIRE_CREATE_HANDLE();
	uLocal_294 = FIRE_CREATE_HANDLE();
	Function_23(&uLocal_289, &Local_150 + 312);
	Function_23(&uLocal_290, &Local_150 + 316);
	Function_23(&uLocal_291, &Local_150 + 320);
	Function_23(&uLocal_292, &Local_150 + 324);
	Function_23(&uLocal_293, &Local_150 + 328);
	Function_23(&uLocal_294, &Local_150 + 332);
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0xB85 / 2949
{
	FIRE_SET_CONTROL_VOLUME(*uParam0, *iParam1);
	FIRE_SET_EXPIRE_ALLOWED(*uParam0, 0);
	FIRE_SET_GROW_ALLOWED(*uParam0, 1);
	FIRE_SET_DAMAGE_ALLOWED(*uParam0, 1);
	FIRE_SET_TARGET_FILL_PERCENT(*uParam0, 0.9f);
	FIRE_SET_GROW_RATE(*uParam0, 10.0f);
	FIRE_SET_MAX_FLAMES(*uParam0, 10);
	return;
}

int Function_24(int iParam0) //Position: 0xBC7 / 3015
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_25() //Position: 0xBE7 / 3047
{
	Function_123();
	if (Function_122(1, 1))
	{
		Function_91();
	}
	else
	{
		if (!iLocal_149)
		{
			iLocal_149 = 1;
			Function_86(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_83();
		if (Local_123)
		{
			Function_66(8704, 8679, 7019);
		}
		else
		{
			Function_33(5405, 3415);
		}
		if (!Function_31())
		{
			if (Function_30(1))
			{
				Stack.Push(0);
				Stack.Push(Function_140());
				Stack.Push(0);
				Stack.Push(Function_140());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_143);
				Function_29(StackVal, StackVal);
			}
			else if (Function_30(2))
			{
				Stack.Push(0);
				Stack.Push(Function_140());
				Stack.Push(0);
				Stack.Push(Function_140());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_144);
				Function_29(StackVal, StackVal);
			}
			else if (Function_30(4))
			{
				Stack.Push(0);
				Stack.Push(Function_140());
				Stack.Push(0);
				Stack.Push(Function_140());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_145);
				Function_29(StackVal, StackVal);
			}
		}
		Function_28();
		Function_26();
	}
	return;
}

void Function_26() //Position: 0xC97 / 3223
{
	if (IS_OBJECT_VALID(Local_96.f_104))
	{
		DESTROY_OBJECT(Local_96.f_104);
		Function_27(&Local_96);
	}
	return;
}

void Function_27(int iParam0) //Position: 0xCB3 / 3251
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

void Function_28() //Position: 0xCD9 / 3289
{
	if (IS_OBJECT_VALID(Local_69.f_104))
	{
		DESTROY_OBJECT(Local_69.f_104);
		Function_27(&Local_69);
	}
	return;
}

void Function_29(int iParam0, int iParam1) //Position: 0xCF5 / 3317
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_30(bool bParam0) //Position: 0xD16 / 3350
{
	return Function_12((&Global_83591 + 140)->f_56, bParam0);
}

bool Function_31() //Position: 0xD29 / 3369
{
	return IS_OBJECT_VALID(Function_32());
}

int Function_32() //Position: 0xD35 / 3381
{
	return Function_24(0);
}

void Function_33(int iParam0, int iParam1) //Position: 0xD3F / 3391
{
	Function_66(iParam0, iParam1, 3408);
	return;
}

int Function_34() //Position: 0xD50 / 3408
{
	return 1;
}

int Function_35(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD57 / 3415
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	Function_53(bParam1, uParam2, uParam3);
	bVar0 = false;
	iVar1 = Function_52(bParam0);
	iVar2 = Function_49(bParam0);
	bVar3 = Function_48(bParam0);
	iVar4 = Function_47((bVar3 / CEIL(25.0f)), iVar1, iVar2);
	iVar5 = Function_45(4, bParam0);
	if (!bParam1)
	{
		Function_43(bParam0, iVar4, 0);
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
		Function_42(bVar0, bParam0);
	}
	if (Function_36(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_36(bool bParam0) //Position: 0xE4F / 3663
{
	if (Function_38(bParam0, 1, 0) != 4294967295 && Function_37() != 4294967295)
	{
		return 0;
	}
	return Function_38(bParam0, 1, 0) != Function_37();
}

int Function_37() //Position: 0xE77 / 3703
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_38(GET_LOCAL_SLOT(), 1, 0);
}

int Function_38(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE8E / 3726
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_41(bParam0))
			{
				if (!Function_39(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_39(bool bParam0, int iParam1, bool bParam2) //Position: 0xED2 / 3794
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_122(iParam1, bParam2);
	}
	if (!Function_41(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_40(iParam1), 64);
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

var Function_40(int iParam0) //Position: 0xF53 / 3923
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

bool Function_41(bool bParam0) //Position: 0x126C / 4716
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

void Function_42(bool bParam0, bool bParam1) //Position: 0x130D / 4877
{
	if (Function_11(4))
	{
		if (Function_39(bParam1, 1024, 1))
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

bool Function_43(bool bParam0, int iParam1, int iParam2) //Position: 0x1340 / 4928
{
	var uVar0;
	
	return Function_44(bParam0, iParam1, &uVar0, iParam2);
}

int Function_44(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1351 / 4945
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

int Function_45(int iParam0, bool bParam1) //Position: 0x13B6 / 5046
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_46(iParam0);
	}
	if (!Function_41(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_46(int iParam0) //Position: 0x141D / 5149
{
	return (*&Global_78480 + 132)[iParam0];
}

var Function_47(int iParam0, int iParam1, int iParam2) //Position: 0x142D / 5165
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_48(int iParam0) //Position: 0x1442 / 5186
{
	return Function_45(0, iParam0);
}

int Function_49(bool bParam0) //Position: 0x144E / 5198
{
	return Function_50(12, bParam0);
}

int Function_50(int iParam0, bool bParam1) //Position: 0x145B / 5211
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_51(iParam0);
	}
	if (!Function_41(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_51(int iParam0) //Position: 0x14C9 / 5321
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_52(int iParam0) //Position: 0x14E2 / 5346
{
	return Function_50(11, iParam0);
}

void Function_53(bool bParam0, int iParam1, char* cParam2) //Position: 0x14EF / 5359
{
	if (bParam0)
	{
		if (Function_54())
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

bool Function_54() //Position: 0x1510 / 5392
{
	return Function_11(32768);
}

int Function_55() //Position: 0x151D / 5405
{
	if (!Function_61(1))
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
	if (Function_60())
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(4);
	}
	Function_57(0);
	Function_57(1);
	Function_56();
	return 1;
}

void Function_56() //Position: 0x15CA / 5578
{
	if (Function_11(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_8(8192, 1, 1);
	}
	else if (Function_11(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_8(8192, 1, 1);
	}
	else
	{
		Function_8(8192, 0, 1);
	}
	return;
}

void Function_57(int iParam0) //Position: 0x1607 / 5639
{
	int iVar0;
	
	if (iParam0 == Function_37())
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	if (Function_58() > 0)
	{
		if (Function_58() == iParam0)
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

int Function_58() //Position: 0x166D / 5741
{
	if (!Function_59())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_59() //Position: 0x1682 / 5762
{
	return UNK_0xA80C6DE6(&Global_78578);
}

bool Function_60() //Position: 0x168F / 5775
{
	return Function_37() == 4294967295;
}

bool Function_61(bool bParam0) //Position: 0x169A / 5786
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_54() || Function_65(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_54())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_62(Function_54());
	return 1;
}

void Function_62(bool bParam0) //Position: 0x171B / 5915
{
	if (bParam0 || Function_11(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_11(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_11(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_11(1048576) || Function_11(4)) || Function_122(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_8(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_63(var uParam0) //Position: 0x17A4 / 6052
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x17B8 / 6072
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

int Function_65(int iParam0, int iParam1) //Position: 0x17FD / 6141
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

void Function_66(int iParam0, int iParam1, int iParam2) //Position: 0x1831 / 6193
{
	if (Function_11(0x4000000))
	{
		Function_69();
		Function_8(0x4000000, 0, 1);
	}
	if (Function_11(0x10000000))
	{
		Function_69();
		Function_8(0x10000000, 0, 1);
	}
	if (Function_11(2) != Function_11(0x2000000))
	{
		Function_69();
		Function_8(0x2000000, Function_11(2), 1);
	}
	if (Function_54())
	{
		Function_68(!Function_11(16));
	}
	if (Function_11(16))
	{
		Function_67(&iParam0, &iParam1, &iParam2);
		if (Function_11(8192))
		{
			if (!Function_11(4194304))
			{
				Function_8(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_11(8388608))
			{
				Function_8(8388608, 1, 1);
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
			Function_7();
		}
		Function_8(16384, 1, 1);
	}
	else if (!Function_11(32))
	{
		Function_7();
	}
	Function_8(32768, 0, 1);
	return;
}

void Function_67(var uParam0, var uParam1, int iParam2) //Position: 0x19CA / 6602
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	Function_8(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_11(0x40000000);
	bVar3 = !Function_11(131072);
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (IS_SLOT_VALID(iVar1))
		{
			iVar0 = 0;
			if (!Function_41(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_39(bVar1, 2048, 1))
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
				if (Function_43(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_11(4))
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
			if (Function_43(bVar1, (4294966296 - bVar1), 1))
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

void Function_68(bool bParam0) //Position: 0x1B42 / 6978
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_8(16384, 0, 1);
	return;
}

void Function_69() //Position: 0x1B5C / 7004
{
	Function_8(32768, 1, 0);
	return;
}

int Function_70() //Position: 0x1B6B / 7019
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
	
	if (Function_54())
	{
		bVar1 = Function_24(3) != 7;
		iVar2 = 0;
		iVar27 = Function_37();
		if (StackVal == 1)
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_77(&iVar2));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(4, "");
			return 1;
		}
		cVar38 = Function_140();
		if (!IS_LAYOUTREF_VALID(cVar38))
		{
			return 1;
		}
		bVar0 = true;
		while (bVar0 < Local_123.f_12)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("AD_T0", I2STR(bVar0)) };
			bVar36 = DECOR_GET_FLOAT_VERBOSE(cVar38, &Var3, &fVar34);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("AD_T1", I2STR(bVar0)) };
			bVar37 = DECOR_GET_FLOAT_VERBOSE(cVar38, &Var3, &fVar35);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(&Global_79349, "_Goal_", I2STR(bVar0)) };
			if (bVar36 || bVar37)
			{
				cVar11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<0xFFFFFF>", UI_GET_STRING(&Var3), "</0x>") };
			}
			else
			{
				strcpy(&cVar11, UI_GET_STRING(&Var3), 64);
			}
			NET_PLAYER_LIST_ADD_ITEM(&cVar11, Function_77(&iVar2));
			if (StackVal || bVar0 > Local_123.f_12 <= 2)
			{
				if (bVar36)
				{
					fVar28[0] = (fVar28[0] + fVar34);
					uVar31[0]++;
					Function_72(0, fVar34, iVar27 != 0);
				}
				else
				{
					Function_71(0, iVar27 != 0, "<SKULL>", 0);
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
						Function_72(1, fVar35, iVar27 != 1);
					}
					else
					{
						Function_71(1, iVar27 != 1, "<SKULL>", 0);
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
		NET_PLAYER_LIST_ADD_ITEM("", Function_77(&iVar2));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_PointsCaptured"), Function_77(&iVar2));
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
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_TimeElapsed"), Function_77(&iVar2));
		if (StackVal <= 7)
		{
			return 1;
		}
		Function_72(0, fVar28[0], iVar27 != 0);
		if (bVar1)
		{
			if (StackVal <= 8)
			{
				return 1;
			}
			Function_72(1, fVar28[1], iVar27 != 1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--:--");
		}
		if (StackVal <= 9)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_LivesLost"), Function_77(&iVar2));
		if (StackVal <= 10)
		{
			return 1;
		}
		Function_71(0, iVar27 != 0, I2STR(DECOR_GET_INT(cVar38, "AD_L0")), 0);
		if (bVar1)
		{
			if (StackVal <= 11)
			{
				return 1;
			}
			Function_71(1, iVar27 != 1, I2STR(DECOR_GET_INT(bVar38, "AD_L1")), 0);
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
			NET_PLAYER_LIST_ADD_ITEM("", Function_77(&iVar2));
			bVar43 = Function_58();
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

void Function_71(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1FFA / 8186
{
	struct<16> Var0;
	
	if (bParam3)
	{
		if (bParam1)
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<blue>", UI_GET_STRING(bParam2), "</blue>") };
		}
		else
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<red>", UI_GET_STRING(bParam2), "</red>") };
		}
	}
	else if (bParam1)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<blue>", bParam2, "</blue>") };
	}
	else
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<red>", bParam2, "</red>") };
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, &Var0);
}

void Function_72(bool bParam0, float fParam1, bool bParam2) //Position: 0x2098 / 8344
{
	struct<9> Var0;
	
	vVar0 = { StackVal, StackVal, StackVal, Function_73(fParam1) };
	if (fParam1 < 0.0f)
	{
		if (vVar0.z <= 10)
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(I2STR(vVar0.y), ":0", I2STR(vVar0.z)), 4);
		}
		else
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(I2STR(vVar0.y), ":", I2STR(vVar0.z)), 4);
		}
		Function_71(bParam0, bParam2, &uVar4, 0);
	}
	else
	{
		Function_71(bParam0, bParam2, "--:--", 0);
	}
	return;
}

struct<16> Function_73(var uParam0) //Position: 0x210E / 8462
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

struct<64> Function_74(char* cParam0, char* cParam1, bool bParam2) //Position: 0x217F / 8575
{
	char* cVar0[64];
	
	strcpy(&cVar0, cParam0, 64);
	stradd(&cVar0, cParam1, 64);
	stradd(&cVar0, bParam2, 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_75(char* cParam0, char* cParam1, bool bParam2) //Position: 0x219E / 8606
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_76(char* cParam0, bool bParam1) //Position: 0x21BD / 8637
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_77(int iParam0) //Position: 0x21D6 / 8662
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0;
}

int Function_78(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x21E7 / 8679
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	uParam3 = uParam3;
	return 0;
}

int Function_79() //Position: 0x2200 / 8704
{
	struct<4> Var0;
	
	Function_8(131072, 1, 0);
	if (Function_24(3) == 6)
	{
		if (Function_54())
		{
			NET_PLAYER_LIST_SET_TITLE("AD_SwitchingSides");
		}
	}
	else if (!Function_61(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	Var0 = { StackVal, StackVal, StackVal, Function_80(0, 0) };
	if (Function_37() == 0)
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_80(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	else
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_80(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	NET_PLAYER_LIST_SET_HEADER(2, "GENERIC_DBUFFER64_0");
	NET_PLAYER_LIST_SET_HEADER(3, "GENERIC_DBUFFER64_1");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	Function_8(8192, 1, 1);
	return 1;
}

struct<16> Function_80(int iParam0, int iParam1) //Position: 0x23D1 / 9169
{
	return StackVal, StackVal, StackVal, Function_81(Function_82(iParam0), iParam1);
}

struct<16> Function_81(bool bParam0, bool bParam1) //Position: 0x23E3 / 9187
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

int Function_82(int iParam0) //Position: 0x2418 / 9240
{
	if (!Function_59())
	{
		return 0;
	}
	return StackVal;
}

void Function_83() //Position: 0x2431 / 9265
{
	if (UI_ISACTIVE("LobbyNew_Toggle"))
	{
		if (Function_85(4, 1, 1))
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
			Function_69();
		}
	}
	if (Function_139(512) && !Local_123)
	{
		return;
	}
	if (Function_139(32) && Function_11(16))
	{
		Local_123 = 1;
		if (StackVal && StackVal >= 0.0f > 13)
		{
			Function_69();
			if (StackVal == 0)
			{
				Local_123.f_12 = 1;
				Function_138(512, 0);
			}
			UI_UNFOCUS("HudGamerList");
			Local_123.f_4 = StackVal + 1;
			if (Function_24(3) == 6)
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
				Function_138(512, 1);
			}
			else if (StackVal == 3)
			{
				if (Local_123.f_12 <= Function_24(4))
				{
					Local_123.f_12++;
					Local_123.f_4 = 2;
				}
			}
			PLAY_SOUND_FRONTEND(Function_84(StackVal, &Local_123 + 8));
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

var Function_84(int iParam0, int iParam1) //Position: 0x2608 / 9736
{
	switch (iParam0)
	{
		case 0x00000001:
			*iParam1 = 0.5f;
			return "";
		
		case 0x00000002:
			if (Function_24(3) == 6)
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
			if (Function_24(3) == 6)
			{
				*iParam1 = 4.0f;
				return "";
			}
			*iParam1 = 2.0f;
			switch (Function_58())
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

bool Function_85(int iParam0, int iParam1, int iParam2) //Position: 0x2862 / 10338
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

void Function_86(vector3 vParam0, float fParam3) //Position: 0x28DF / 10463
{
	char* cVar0;
	char* cVar1;
	int iVar2;
	int iVar3;
	
	cVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_90(), 4294967295, 0);
	cVar1 = CREATE_VOLUME_IN_LAYOUT(Function_90(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	iVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(cVar0, cVar1, "p_gen_gatlingGun01x", 1);
	iVar2 = (iVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(cVar0, cVar1, "p_gen_cannon02x", 1));
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		Function_87(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, cVar0));
		iVar3++;
	}
	DESTROY_OBJECTSET(cVar0);
	DESTROY_VOLUME(cVar1);
}

int Function_87(int iParam0) //Position: 0x2992 / 10642
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
	return Function_88(iVar0);
}

int Function_88(int iParam0) //Position: 0x29CD / 10701
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
	Function_89(iVar0);
	return iVar0;
}

void Function_89(var uParam0) //Position: 0x2A1B / 10779
{
	SET_BLIP_COLOR(uParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_90() //Position: 0x2A2E / 10798
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_91() //Position: 0x2A5D / 10845
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
		Local_69.f_104 = Function_118();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_69.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (!IS_OBJECT_VALID(Local_96.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_96.f_104 = Function_105();
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
		cVar1 = Function_104();
		iLocal_147 = (DECOR_GET_INT(cVar1, "AD_WeaponCount") - 1);
	}
	if (GET_CAMERA_CHANNEL_POSITION(&vVar2, 0))
	{
		Function_103(0.0f, 0.0f, 2.5f, 0.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, 2.5f, 0.0f), vLocal_140, StackVal) };
		iVar8 = (SHIFT_LEFT(125, 16) + SHIFT_LEFT(0, 8));
		iVar9 = (SHIFT_LEFT(180, 16) + SHIFT_LEFT(180, 8)) + 180;
		fVar10 = GET_CURRENT_GAME_TIME();
		uVar11 = GET_LAST_FRAME_TIME();
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69, vVar2, fVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 12226, 1, iVar8, 0, 0, 0);
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69 + 48, vVar2, fVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_146, 11547, 0, iVar9, 0, 0, 0);
		Function_103(0.0f, 0.0f, -2.5f, 0.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, -2.5f, 0.0f), vLocal_140, StackVal) };
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96, vVar2, fVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 11514, 1, iVar8, 0, 0, 0);
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96 + 48, vVar2, fVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_147, 11318, 0, iVar9, 0, 0, 0);
	}
	return;
}

var Function_92(int iParam0, var uParam1) //Position: 0x2C36 / 11318
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	
	uParam1 = uParam1;
	bVar0 = Function_104();
	strcpy(&cVar1, "AD_WeaponData_", 32);
	straddi(&cVar1, iParam0 + 1, 32);
	Function_93(DECOR_GET_INT(bVar0, &cVar1), &iVar9);
	return GET_WEAPON_DISPLAY_NAME(iVar9);
}

void Function_93(int iParam0, int iParam1) //Position: 0x2C73 / 11379
{
	*iParam1 = Function_94(iParam0, Function_96(), 0);
	iParam1->f_4 = Function_94(iParam0, Function_96() + 8, Function_96());
	return;
}

var Function_94(var uParam0, int iParam1, int iParam2) //Position: 0x2C96 / 11414
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_95((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_95(int iParam0) //Position: 0x2CB5 / 11445
{
	return SHIFT_LEFT(1, iParam0);
}

int Function_96() //Position: 0x2CC1 / 11457
{
	return Function_97(39);
}

int Function_97(int iParam0) //Position: 0x2CCC / 11468
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

var Function_98(var uParam0, var uParam1) //Position: 0x2CFA / 11514
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_ESC_SUMMARY_D";
}

var Function_99(int iParam0, var uParam1) //Position: 0x2D1B / 11547
{
	uParam1 = uParam1;
	return GET_WEAPON_DISPLAY_NAME((*&Global_83591 + 276)[iParam0 + 22]);
}

void Function_100(int iParam0, vector3 vParam1, float fParam4, float fParam5, char* cParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2D35 / 11573
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
			Function_27(iParam0);
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
					Function_27(iParam0);
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
			uVar14 = Function_101(iParam0->f_36);
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

var Function_101(float fParam0) //Position: 0x2FB4 / 12212
{
	return (fParam0 * 57.29578f);
}

var Function_102(var uParam0, var uParam1) //Position: 0x2FC2 / 12226
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_ESC_SUMMARY_A";
}

vector3 Function_103(vector3 vParam0, float fParam3) //Position: 0x2FE3 / 12259
{
	ROTATE_VECTOR_XZ(&vParam0, fParam3, 0);
	return StackVal, StackVal, vParam0;
}

var Function_104() //Position: 0x2FF7 / 12279
{
	int iVar0;
	
	iVar0 = FIND_OBJECT_IN_LAYOUT(Function_140(), "AD_WeaponThingy");
	if (!IS_OBJECT_VALID(iVar0))
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(Function_140(), "AD_WeaponThingy", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return iVar0;
}

var Function_105() //Position: 0x3047 / 12359
{
	struct<2> Var0[27];
	bool bVar57;
	int iVar58;
	int iVar59;
	char* cVar60[32];
	vector3 vVar68;
	int iVar71;
	
	Function_114(&Var0);
	bVar57 = Function_104();
	iVar59 = DECOR_GET_INT(bVar57, "AD_WeaponCount");
	iVar58 = 0;
	while (iVar58 <= iVar59)
	{
		strcpy(&cVar60, "AD_WeaponData_", 32);
		straddi(&cVar60, iVar58, 32);
		Function_93(DECOR_GET_INT(bVar57, &cVar60), &(Var0[iVar582]));
		iVar58++;
	}
	Function_103(0.0f, 0.0f, -2.5f, 0.0f);
	vVar68 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, -2.5f, 0.0f), vLocal_140, StackVal) };
	iVar71 = Function_108(Global_83591.f_140, &vVar68, (0.0f + 180.0f), &Var0, 1);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar71, 0);
	Function_107(iVar71);
	Function_106("p_gen_floursackstack01x", iVar71, 1.056f, 0.0f, 0.464f, 0.0f, -180.0f, 0.0f);
	Function_106("p_gen_floursackstack02x", iVar71, 1.046f, 0.0f, 1.265f, 0.0f, 30.0f, 0.0f);
	Function_106("p_gen_floursackstack02x", iVar71, -2.233f, 0.0f, 0.384f, 0.0f, -30.0f, 0.0f);
	return iVar71;
}

void Function_106(char* cParam0, int iParam1, vector3 vParam2, vector3 vParam5) //Position: 0x3183 / 12675
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_RELATIVE_POSITION(iParam1, vParam2, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam1, vParam5, &vVar3);
	SNAP_OBJECT_TO_GROUND(CREATE_PROP_IN_LAYOUT(iParam1, "", cParam0, vVar0, vVar3, 1), 3.0f, 0, 1092616192);
}

void Function_107(int iParam0) //Position: 0x31C1 / 12737
{
	vector3 vVar0;
	
	GET_OBJECT_RELATIVE_POSITION(iParam0, 0.0f, 3.0f, 1.2f, &vVar0);
	CREATE_POINT_LIGHT_IN_LAYOUT(iParam0, "", vVar0, 0.75f, 0.75f, 0.75f, 4.0f);
	return;
}

var Function_108(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4) //Position: 0x31F3 / 12787
{
	char* cVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10[3];
	
	cVar0 = Function_112(uParam0, uParam1, fParam2, iParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_111((*iParam3)[iVar12], &iVar2))
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
		if (Function_111((*iParam3)[iVar12], &iVar2))
		{
			if (Function_109((*iParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_109(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x32E1 / 13025
{
	if (!Function_110(iParam0))
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

bool Function_110(int iParam0) //Position: 0x3472 / 13426
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_111(int iParam0, int iParam1) //Position: 0x3484 / 13444
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

var Function_112(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x34E0 / 13536
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *uParam1, Function_113()), 0.0f, (fParam2 + 180.0f), 0.0f, 1);
}

var Function_113() //Position: 0x354C / 13644
{
	return "$/fragments/p_gen_dressForm01x";
}

void Function_114(int iParam0) //Position: 0x3573 / 13683
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_116(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_115(iParam0, 0.0f);
	return;
}

void Function_115(var uParam0, int iParam1) //Position: 0x35A0 / 13728
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_116(int iParam0) //Position: 0x35AC / 13740
{
	Function_117(iParam0, 4294967295, 0, 1);
	return;
}

void Function_117(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x35BA / 13754
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

var Function_118() //Position: 0x35E4 / 13796
{
	vector3 vVar0;
	int iVar3;
	
	Function_103(0.0f, 0.0f, 2.5f, 0.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, 2.5f, 0.0f), vLocal_140, StackVal) };
	iVar3 = Function_108(Global_83591.f_140, &vVar0, 0.0f, &Global_83591 + 276, 1);
	Function_107(iVar3);
	Function_119(iVar3, &Global_83591 + 276 + 228);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar3, 0);
	return iVar3;
}

var Function_119(int iParam0, int iParam1) //Position: 0x3633 / 13875
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
	iVar12 = CREATE_PROP_IN_LAYOUT(iParam0, Function_121(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_111((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_111((*iParam1)[iVar202], &iVar21))
		{
			if (Function_120((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_120(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4) //Position: 0x3742 / 14146
{
	float fVar0;
	
	if (!Function_110(iParam0))
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

var Function_121() //Position: 0x3869 / 14441
{
	int iVar0;
	
	return iVar0;
}

bool Function_122(bool bParam0, bool bParam1) //Position: 0x3871 / 14449
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_123() //Position: 0x3891 / 14481
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_148)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				Function_124("AD_help", 4294967295);
				iLocal_148 = 1;
			}
		}
	}
	else
	{
		Function_5();
	}
	return;
}

void Function_124(char* cParam0, int iParam1) //Position: 0x38D5 / 14549
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

int Function_125(int iParam0) //Position: 0x396C / 14700
{
	int iVar0;
	
	if (!Function_136(*iParam0) || (Function_139(64) && Function_132()))
	{
		iParam0->f_4 = 0;
		Function_19(iParam0);
		if (!Function_136(*iParam0))
		{
		}
		if (Function_139(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_136(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 640);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_636)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_129(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_12((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_9(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_12((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_636)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_636)
				{
					if (!Function_12((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_12((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_128((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_127((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_636)
			{
				iParam0->f_644 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_644) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_19(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_126(3, iParam0->f_636))
			{
				if (iParam0->f_636 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_636);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_12((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_12((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_10(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_12((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_12((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_12((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_126(int iParam0, int iParam1) //Position: 0x3CF3 / 15603
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_127(char* cParam0, int iParam1) //Position: 0x3D05 / 15621
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

void Function_128(char* cParam0, int iParam1) //Position: 0x3D59 / 15705
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

int Function_129(var uParam0, var uParam1, int iParam2) //Position: 0x3DAA / 15786
{
	return Function_130(Global_29006, uParam0, uParam1, iParam2);
}

int Function_130(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x3DBC / 15804
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_131(iParam0))
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

bool Function_131(int iParam0) //Position: 0x3E58 / 15960
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_132() //Position: 0x3E6E / 15982
{
	return !Function_133();
}

bool Function_133() //Position: 0x3E78 / 15992
{
	if (Function_135())
	{
		return (Function_134() != 1 || Function_134() != 0);
	}
	return 0;
}

int Function_134() //Position: 0x3E91 / 16017
{
	return Global_79349.f_16;
}

bool Function_135() //Position: 0x3E9D / 16029
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_136(int iParam0) //Position: 0x3EA6 / 16038
{
	if (!Function_131(iParam0))
	{
		return 1;
	}
	return Function_137(&(Global_29008[iParam0]), 4);
}

int Function_137(var uParam0, int iParam1) //Position: 0x3EC2 / 16066
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_138(int iParam0, bool bParam1) //Position: 0x3EDE / 16094
{
	if (bParam1)
	{
		Function_10(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_9(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_139(int iParam0) //Position: 0x3F06 / 16134
{
	return Function_12(StackVal, iParam0);
}

var Function_140() //Position: 0x3F19 / 16153
{
	return Global_83591.f_140;
}

void Function_141(bool bParam0) //Position: 0x3F25 / 16165
{
	Function_138(16, bParam0);
	return;
}

void Function_142(var uParam0) //Position: 0x3F32 / 16178
{
	Function_138(8, uParam0);
	return;
}

bool Function_143() //Position: 0x3F3F / 16191
{
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(20, 0, 0));
	Function_193(3, 0);
	ENABLE_CHILD_SECTOR("dlc_esc_postReleaseFix01");
	ENABLE_CHILD_SECTOR("dlc_esc_strhld01x");
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_181();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_165(Local_150, 19713, 19253, 18804, 50, 20);
	Function_164(Local_150.f_552);
	Function_163("MEX_SONG_04", "MEX_SONG_06", 0, 58, 58, 1);
	Function_159(&Global_83591 + 276, 0);
	Function_157(&Global_83591, 1, 22, 1, 1);
	Function_157(&Global_83591, 2, 0, 10, 1);
	Function_157(&Global_83591, 3, 9, 10, 1);
	Function_157(&Global_83591, 4, 15, 10, 1);
	Function_157(&Global_83591, 5, 24, 1, 1);
	Function_155(22, 1, 1);
	Function_155(8, 4, 1);
	Function_155(5, 10, 1);
	Function_155(15, 10, 1);
	Function_151(&Global_83591, 1, 22, 5, 1);
	Function_151(&Global_83591, 2, 1, 10, 1);
	Function_151(&Global_83591, 3, 17, 10, 1);
	Function_151(&Global_83591, 4, 11, 10, 1);
	Function_150(&Global_83591);
	Function_149(&Global_83591 + 276, 4);
	if (!Function_144(&uLocal_295))
	{
		return 0;
	}
	Function_3();
	Function_22();
	Function_21();
	iLocal_460 = 4294967295;
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	return 1;
}

bool Function_144(int iParam0) //Position: 0x40BD / 16573
{
	if (!Function_148(iParam0, Global_30685[0]))
	{
		return 0;
	}
	Function_147(iParam0, "escalara", "villa01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villa01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villa01", 4, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "blacksmith01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "ncantina01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "ncantina01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "ncantina01", 3, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "doctor01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "gunsmith01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "gunsmith01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "church01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "church01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "generalhouse03", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "generalhouse03", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "whorehouse01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "whorehouse01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villaPost01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villaPost01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villaPost01", 3, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villaPost01", 4, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villaPost01", 5, 1, 0, 1, 1);
	Function_147(iParam0, "escalara", "villaPost01", 6, 1, 0, 1, 1);
	Function_145(iParam0, "escalara", "villawall04", 1);
	Function_145(iParam0, "escalara", "villawall04", 2);
	Function_145(iParam0, "escalara", "villawall02", 3);
	Function_145(iParam0, "escalara", "villawall02", 4);
	Function_145(iParam0, "escalara", "bullring01", 1);
	Function_145(iParam0, "escalara", "bullring01", 2);
	Function_145(iParam0, "escalara", "bullring01", 3);
	Function_145(iParam0, "escalara", "bullring01", 4);
	return 1;
}

int Function_145(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x44D5 / 17621
{
	int iVar0;
	
	iVar0 = iParam0->f_636;
	if (!Function_146(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_10(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_146(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4507 / 17671
{
	if (iParam0->f_636 > 31)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_6365] = uParam1;
	(iParam0 + 12[iParam0->f_6365])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_6365])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_6365])->f_16 = 0;
	iParam0->f_636++;
	return 1;
}

int Function_147(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4563 / 17763
{
	int iVar0;
	
	iVar0 = iParam0->f_636;
	if (!Function_146(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_10(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_10(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_10(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_10(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_148(int iParam0, int iParam1) //Position: 0x45D4 / 17876
{
	int iVar0;
	
	if (!Function_131(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_636 = 0;
	iParam0->f_4 = 0;
	iParam0->f_640 = "";
	iVar0 = 0;
	while (iVar0 <= 31)
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

void Function_149(int iParam0, int iParam1) //Position: 0x464A / 17994
{
	(iParam0 + 228)->f_220 = 0;
	Function_10(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_150(int iParam0) //Position: 0x4662 / 18018
{
	iParam0->f_844 = 0;
	return;
}

void Function_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x466E / 18030
{
	Function_152(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_152(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4686 / 18054
{
	Function_153(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_153(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x469D / 18077
{
	if (!Function_154(iParam1))
	{
		return;
	}
	Function_117(uParam0[iParam12], bParam2, iParam3, bParam4);
}

bool Function_154(int iParam0) //Position: 0x46C0 / 18112
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_155(bool bParam0, int iParam1, bool bParam2) //Position: 0x46D0 / 18128
{
	bool bVar0;
	int iVar1;
	char* cVar2[32];
	struct<2> Var10;
	
	bVar0 = Function_104();
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
	DECOR_SET_INT(StackVal, bVar0, Function_156(&cVar2, Var10, 0));
	return;
}

var Function_156(struct<5> Param0) //Position: 0x4759 / 18265
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_96())) || SHIFT_LEFT(iParam2, Function_96() + 8));
}

void Function_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x4777 / 18295
{
	Function_158(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x478F / 18319
{
	Function_153(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_159(int iParam0, bool bParam1) //Position: 0x47A4 / 18340
{
	Function_114(iParam0);
	Function_114(iParam0 + 228);
	if (bParam1)
	{
		Function_160(iParam0);
	}
	return;
}

void Function_160(int iParam0) //Position: 0x47C0 / 18368
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_161(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_161(var uParam0, int iParam1) //Position: 0x47E0 / 18400
{
	Function_162(uParam0, iParam1, 0);
	return;
}

void Function_162(int iParam0, int iParam1, bool bParam2) //Position: 0x47EE / 18414
{
	(*iParam0 + 456)[iParam1] = bParam2;
	return;
}

void Function_163(char* cParam0, char* cParam1, char* cParam2, var uParam3, var uParam4, var uParam5) //Position: 0x47FF / 18431
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

void Function_164(bool bParam0) //Position: 0x488F / 18575
{
	DECOR_SET_OBJECT(Function_140(), "LobbyGringoSet", bParam0);
	return;
}

void Function_165(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) //Position: 0x48AF / 18607
{
	uLocal_143 = uParam1;
	uLocal_144 = uParam2;
	uLocal_145 = uParam3;
	(&Global_83591 + 140)->f_56 = 0;
	Function_29(0, 0);
	Function_29(1, iParam4);
	Function_29(2, iParam5);
	if (Function_168())
	{
		Function_149(&Global_83591 + 276, 2);
	}
	Function_167(uParam0);
	Global_83591.f_4 = 2;
	Global_83591.f_16 = (4.0f * 60.0f);
	Function_166();
	vLocal_140 = { StackVal, StackVal, Function_166() };
}

vector3 Function_166() //Position: 0x490E / 18702
{
	char* cVar0;
	vector3 vVar1;
	int iVar4;
	
	cVar0 = Function_140();
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

void Function_167(var uParam0) //Position: 0x4956 / 18774
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_168() //Position: 0x4964 / 18788
{
	return Function_12(Global_79962, 1024);
}

var Function_169(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4974 / 18804
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_121(), 2, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_ESCHalfTime", 2, 1);
	}
	Function_170(&iVar0, uParam2);
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

void Function_170(var uParam0, char* cParam1) //Position: 0x49F0 / 18928
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_172(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_171(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 30.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_171(int iParam0) //Position: 0x4A59 / 19033
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4334.834f, 57.07439f, 4344.72f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.753089f, 0.629305f, -0.191915f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_172(bool bParam0) //Position: 0x4AC7 / 19143
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4285.884f, 25.73199f, 4475.872f);
	SET_CAMERASHOT_DIRECTION(*bParam0, 0.140375f, 0.270276f, 0.952494f, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_173(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4B35 / 19253
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_121(), 2, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_esc_defend", 2, 1);
	}
	Function_174(&iVar0, uParam2);
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

void Function_174(var uParam0, char* cParam1) //Position: 0x4BB0 / 19376
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_176(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_175(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 18.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	return;
}

void Function_175(int iParam0) //Position: 0x4C2D / 19501
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4333.284f, 30.49991f, 4482.04f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.019874f, -0.48448f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_176(bool bParam0) //Position: 0x4C97 / 19607
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4378.17f, 50.73492f, 4338.861f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0.172158f, -2.181002f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_177(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4D01 / 19713
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_121(), 2, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_esc_attack", 2, 1);
	}
	Function_178(&iVar0, uParam2);
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

void Function_178(var uParam0, char* cParam1) //Position: 0x4D7C / 19836
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_180(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_179(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 18.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	return;
}

void Function_179(int iParam0) //Position: 0x4DF9 / 19961
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4338.544f, 49.40908f, 4376.305f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.239831f, 0.561184f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_180(var uParam0) //Position: 0x4E63 / 20067
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4274.862f, 22.23943f, 4459.941f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.166966f, 0.600658f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_181() //Position: 0x4ECD / 20173
{
	var uVar0;
	
	Function_192(4, 1);
	uVar0 = uVar0;
	Local_150 = CREATE_LAYOUT("ad_esc_layout");
	Local_150.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_1_set");
	(*&Local_150 + 152)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_1", 3, -4280.526f, 18.07059f, 4446.27f, 0.0f, 3.670166f, 0.0f, 5.287561f, 3.587694f, 5.287561f);
	Function_190((*&Local_150 + 152)[0], 1);
	Function_188((*&Local_150 + 152)[0], 1);
	Function_186((*&Local_150 + 152)[0], 30.0f);
	Function_184((*&Local_150 + 152)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[0]);
	(*&Local_150 + 152)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_0", 2, -4332.745f, 19.157f, 4509.699f, 0.0f, 132.7449f, 0.0f, 4.034817f, 1.695847f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[1]);
	(*&Local_150 + 152)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_1", 2, -4331.272f, 19.24602f, 4482.936f, 0.0f, 232.3935f, 0.0f, 4.034817f, 2.295225f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[2]);
	(*&Local_150 + 152)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_2", 2, -4326.978f, 22.08632f, 4465.748f, 0.0f, 126.0985f, 0.0f, 3.075855f, 2.0f, 4.402436f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[3]);
	(*&Local_150 + 152)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_3", 2, -4382.719f, 20.02346f, 4470.411f, 0.0f, 95.84446f, 0.0f, 4.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[4]);
	(*&Local_150 + 152)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_0", 2, -4244.66f, 18.066f, 4401.893f, 0.0f, -33.55565f, 0.0f, 4.034817f, 2.850379f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[5]);
	(*&Local_150 + 152)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_1", 2, -4261.87f, 21.86772f, 4387.75f, 0.0f, -27.01192f, 0.0f, 4.907676f, 2.850379f, 6.503081f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[6]);
	(*&Local_150 + 152)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_2", 2, -4305.818f, 23.08073f, 4402.15f, 0.0f, 35.22327f, 0.0f, 3.075922f, 2.0f, 3.518194f);
	ADD_TO_VOLUME_SET(Local_150.f_188, (*&Local_150 + 152)[7]);
	Local_150.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_2_set");
	(*&Local_150 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_2", 3, -4300.0f, 22.38286f, 4404f, 0.0f, 24.02501f, 0.0f, 6.0f, 3.0f, 6.0f);
	Function_190((*&Local_150 + 192)[0], 2);
	Function_188((*&Local_150 + 192)[0], 1);
	Function_186((*&Local_150 + 192)[0], 30.0f);
	Function_184((*&Local_150 + 192)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[0]);
	(*&Local_150 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_0", 2, -4325.975f, 22.08743f, 4465.093f, 0.0f, 123.9964f, 0.0f, 2.831577f, 2.850379f, 4.233443f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[1]);
	(*&Local_150 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_1", 2, -4276.0f, 18.07058f, 4434.272f, 0.0f, -133.996f, 0.0f, 2.75209f, 1.959785f, 3.446486f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[2]);
	(*&Local_150 + 192)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_2", 2, -4349.503f, 25.45203f, 4435.035f, 0.0f, 85.09f, 0.0f, 5.495297f, 2.0f, 3.335939f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[3]);
	(*&Local_150 + 192)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_3", 2, -4289.384f, 18.07059f, 4462.358f, 0.0f, 212.6399f, 0.0f, 4.800588f, 2.0f, 3.192577f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[4]);
	(*&Local_150 + 192)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_0", 2, -4344.0f, 30.11766f, 4376f, 0.0f, -1.368581f, 0.0f, 4.034817f, 1.662314f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[5]);
	(*&Local_150 + 192)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_1", 2, -4360.91f, 30.14475f, 4391.152f, 0.0f, 17.39601f, 0.0f, 4.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[6]);
	(*&Local_150 + 192)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_2", 2, -4324.175f, 30.203f, 4380.707f, 0.0f, -2.692666f, 0.0f, 4.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 192)[7]);
	Local_150.f_268 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_3_set");
	(*&Local_150 + 232)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_3", 3, -4337.26f, 30.15885f, 4383.872f, 0.0f, 3.670166f, 0.0f, 2.0f, 2.0f, 2.0f);
	Function_190((*&Local_150 + 232)[0], 2);
	Function_188((*&Local_150 + 232)[0], 2);
	Function_186((*&Local_150 + 232)[0], 10.0f);
	Function_184((*&Local_150 + 232)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[0]);
	(*&Local_150 + 232)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_0", 2, -4295.087f, 29.75748f, 4391.978f, 0.0f, 121.2601f, 0.0f, 1.997f, 2.85f, 5.053f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[1]);
	(*&Local_150 + 232)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_1", 2, -4356.08f, 32.52172f, 4439.668f, 0.0f, 125.7098f, 0.0f, 1.505195f, 2.212681f, 3.841065f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[2]);
	(*&Local_150 + 232)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_2", 2, -4298.835f, 22.54597f, 4401.365f, 0.0f, -148.7199f, 0.0f, 5.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[3]);
	(*&Local_150 + 232)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_3", 2, -4321.388f, 22.53305f, 4421.79f, 0.0f, -93.66535f, 0.0f, 5.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[4]);
	(*&Local_150 + 232)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_0", 2, -4344.016f, 39.21354f, 4353.805f, 0.0f, -359.2122f, 0.0f, 4.860213f, 2.850379f, 3.579323f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[5]);
	(*&Local_150 + 232)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_1", 2, -4368.051f, 38.70333f, 4360.001f, 0.0f, -419.4202f, 0.0f, 5.825756f, 5.358659f, 4.036811f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[6]);
	(*&Local_150 + 232)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_2", 2, -4321.065f, 39.21355f, 4343.824f, 0.0f, 0.0f, 0.0f, 5.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_268, (*&Local_150 + 232)[7]);
	Local_150.f_308 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_4_set");
	(*&Local_150 + 272)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_4", 3, -4351.893f, 42.01784f, 4344.131f, 0.0f, 214.4653f, 0.0f, 5.46934f, 2.0f, 5.415314f);
	Function_190((*&Local_150 + 272)[0], 3);
	Function_188((*&Local_150 + 272)[0], 1);
	Function_182((*&Local_150 + 272)[0], 10);
	Function_186((*&Local_150 + 272)[0], 30.0f);
	Function_184((*&Local_150 + 272)[0], 0.0f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[0]);
	(*&Local_150 + 272)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_0", 2, -4391.679f, 33.88326f, 4415.13f, 0.0f, -145.3239f, 0.0f, 5.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[1]);
	(*&Local_150 + 272)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_1", 2, -4352.0f, 30.11765f, 4388.779f, 0.0f, -168.5181f, 0.0f, 5.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[2]);
	(*&Local_150 + 272)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_2", 2, -4414.385f, 36.32196f, 4349.308f, 0.0f, 53.33556f, 0.0f, 4.213419f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[3]);
	(*&Local_150 + 272)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_3", 2, -4430.916f, 36.38089f, 4377.487f, 0.0f, 116.6402f, 0.0f, 4.0f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[4]);
	(*&Local_150 + 272)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_0", 2, -4360.382f, 40.53178f, 4316.396f, 0.0f, -91.18832f, 0.0f, 2.847913f, 2.109982f, 3.963856f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[5]);
	(*&Local_150 + 272)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_1", 2, -4319.979f, 39.42982f, 4327.85f, 0.0f, 1.841592f, 0.0f, 4.275907f, 1.960935f, 3.70979f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[6]);
	(*&Local_150 + 272)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_2", 2, -4338.551f, 42.049f, 4326.343f, 0.0f, -90.1245f, 0.0f, 3.0f, 2.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_150.f_308, (*&Local_150 + 272)[7]);
	Local_150.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_150, "ChurchVolume", 2, -4328.79f, 32.96156f, 4410.31f, 0.0f, -22.16461f, 0.0f, 12.88624f, 5.030529f, 14.04761f);
	Local_150.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_150, "HouseVolume", 2, -4329.856f, 26.80027f, 4459.244f, 0.0f, 32.72274f, 0.0f, 7.033906f, 3.808511f, 11.19611f);
	Local_150.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_150, "PuebloVolume", 2, -4354.399f, 32.52689f, 4405.422f, 0.0f, 0.0f, 0.0f, 9.075691f, 3.38309f, 9.38241f);
	Local_150.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_150, "ShackVolume", 2, -4266.934f, 23.82235f, 4398.035f, 0.0f, 0.0f, 0.0f, 15.55664f, 6.1471f, 8.560083f);
	Local_150.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_150, "AmmoVolume", 2, -4333.316f, 33.83182f, 4374.112f, 0.0f, 4.265482f, 0.0f, 10.71485f, 4.260043f, 15.0624f);
	Local_150.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_150, "StairsVolume", 2, -4305.831f, 25.56963f, 4396.241f, 0.0f, 32.23867f, 0.0f, 3.637997f, 5.795322f, 7.288901f);
	*(&Local_150 + 336) = { -4335.532f, 34.01273f, 4379.233f };
	*(&Local_150 + 336 + 12) = { 0.0f, 35.1762f, 0.0f };
	*(&Local_150 + 360) = { -4331.399f, 34.01273f, 4376.502f };
	*(&Local_150 + 360 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 384) = { -4334.922f, 34.01273f, 4375.125f };
	*(&Local_150 + 384 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 408) = { -4331.744f, 34.01273f, 4372.347f };
	*(&Local_150 + 408 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 432) = { -4335.853f, 33.94464f, 4369.428f };
	*(&Local_150 + 432 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 456) = { -4331.286f, 34.01273f, 4368.111f };
	*(&Local_150 + 456 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 480) = { -4334.02f, 34.01273f, 4367.418f };
	*(&Local_150 + 480 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 504) = { -4334.399f, 34.01273f, 4372.435f };
	*(&Local_150 + 504 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 528) = { -4332.945f, 34.01273f, 4378.544f };
	*(&Local_150 + 528 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_150.f_552 = CREATE_OBJECTSET_IN_LAYOUT(Function_121(), Local_150, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -4361.4f, 30.13115f, 4393.455f, 0.0f, 206.7822f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -4356.525f, 30.06641f, 4391.271f, 0.0f, 139.7325f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -4358.668f, 30.09315f, 4392.72f, 0.0f, -308.7896f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -4359.596f, 29.29251f, 4408.955f, 0.0f, 74.99266f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -4354.202f, 34.67133f, 4380.124f, 0.0f, -117.2347f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Sit_Ground_Drink", "Sit_Ground_Drink", -4349.469f, 30.09648f, 4386.873f, 0.0f, 180.3056f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "sit_ground_smoke", "sit_ground_smoke", -4366.846f, 30.28511f, 4392.694f, 0.0f, -166.4392f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -4354.429f, 30.10313f, 4386.709f, 0.0f, 207.5786f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand", "smoking_stand", -4354.27f, 34.65978f, 4384.24f, 0.0f, 216.4554f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand1", "smoking_stand", -4348.983f, 29.32404f, 4402.456f, 0.0f, 0.0f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand2", "smoking_stand", -4358.622f, 29.3126f, 4411.92f, 0.0f, 175.8041f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "opium_pipe", "opium_pipe", -4357.344f, 34.66417f, 4384.367f, 0.0f, 166.3204f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -4358.89f, 30.13058f, 4390.013f, 0.0f, -167.647f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "knl_watertrough", "knl_watertrough", -4347.639f, 30.12677f, 4383.07f, 0.0f, 93.04971f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -4357.73f, 30.10422f, 4386.202f, 0.0f, 181.8209f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Rand_Idle_NearWall_Shoulder_R1", "Rand_Idle_NearWall_Shoulder_R", -4351.457f, 29.32363f, 4410.468f, 0.0f, -180.0033f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "lean_fence_L", "lean_fence_L", -4346.644f, 29.31974f, 4402.457f, 0.0f, 270.1563f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "repair_kneel1", "repair_kneel", -4366.417f, 31.0971f, 4407.937f, 0.0f, 133.2904f, 0.0f), Local_150.f_552);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "sit_ground_smoke1", "sit_ground_smoke", -4361.014f, 29.31027f, 4405.179f, 0.0f, 4.99003f, 0.0f), Local_150.f_552);
	return;
}

void Function_182(bool bParam0, int iParam1) //Position: 0x61C2 / 25026
{
	DECOR_SET_INT(uParam0, Function_183(), iParam1);
	return;
}

var Function_183() //Position: 0x61D3 / 25043
{
	return "ADLives";
}

void Function_184(int iParam0, float fParam1) //Position: 0x61E3 / 25059
{
	DECOR_SET_FLOAT(uParam0, Function_185(), fParam1);
	return;
}

var Function_185() //Position: 0x61F4 / 25076
{
	return "ADTimerBonus";
}

void Function_186(int iParam0, float fParam1) //Position: 0x6209 / 25097
{
	DECOR_SET_FLOAT(uParam0, Function_187(), fParam1);
	return;
}

var Function_187() //Position: 0x621A / 25114
{
	return "ADTimer";
}

void Function_188(bool bParam0, int iParam1) //Position: 0x622A / 25130
{
	DECOR_SET_INT(uParam0, Function_189(), iParam1);
	return;
}

var Function_189() //Position: 0x623B / 25147
{
	return "ADObjective";
}

void Function_190(bool bParam0, int iParam1) //Position: 0x624F / 25167
{
	DECOR_SET_INT(uParam0, Function_191(), iParam1);
	return;
}

var Function_191() //Position: 0x6260 / 25184
{
	return "ADReward";
}

void Function_192(int iParam0, int iParam1) //Position: 0x6271 / 25201
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

void Function_193(var uParam0, int iParam1) //Position: 0x62BA / 25274
{
	Function_198(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_194(StackVal, iParam1);
	}
	return;
}

void Function_194(int iParam0, int iParam1) //Position: 0x62EB / 25323
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_198(iParam0);
	Function_197(uVar0);
	PRINTNL();
	Function_195(iParam0, uVar0, iParam1);
	return;
}

void Function_195(int iParam0, int iParam1, bool bParam2) //Position: 0x6310 / 25360
{
	int iVar0;
	
	Function_198(iParam0);
	Function_197(iParam1);
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
	Function_196();
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

void Function_196() //Position: 0x6489 / 25737
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_197(int iParam0) //Position: 0x6495 / 25749
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

void Function_198(int iParam0) //Position: 0x64DB / 25819
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

void Function_199() //Position: 0x6521 / 25889
{
	while (!IS_EXITFLAG_SET())
	{
		Function_123();
		Function_33(5405, 3415);
		WAIT(0);
	}
	return;
}

bool Function_200() //Position: 0x6541 / 25921
{
	return Function_139(2);
}

void Function_201() //Position: 0x654B / 25931
{
	if (Function_200())
	{
		return;
	}
	Function_212();
	Function_211();
	Function_209(&iLocal_127, Function_113(), 0, 0);
	Function_209(&iLocal_127, "p_gen_floursackstack01x", 0, 0);
	Function_209(&iLocal_127, "p_gen_floursackstack02x", 0, 0);
	Function_209(&iLocal_127, "dlc_mpmodepack_atkdef", 10, 0);
	while (!Function_203(&iLocal_127))
	{
		WAIT(0);
	}
	fLocal_68 = 1.5f;
	Function_123();
	Function_202();
	return;
}

void Function_202() //Position: 0x65EB / 26091
{
	while (!Function_139(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_203(int iParam0) //Position: 0x6606 / 26118
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_208();
	iVar1 = 0;
	if (!Function_16(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_207(iParam0[iVar03], 8);
		}
		else if (Function_206())
		{
			iVar1 = 1;
			Function_207(iParam0[iVar03], 8);
		}
		Function_207(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_16(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_16(iParam0[03], 8) || iVar1));
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
				Function_207(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_207(iParam0[iVar03], 2);
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
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_207(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_207(iParam0[iVar03], 2);
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
	Function_204();
	return 1;
}

void Function_204() //Position: 0x6981 / 27009
{
	if (!Function_205(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_205(int iParam0) //Position: 0x69C1 / 27073
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_206() //Position: 0x69DD / 27101
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

void Function_207(var uParam0, int iParam1) //Position: 0x6A08 / 27144
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_208() //Position: 0x6A19 / 27161
{
	if (!Function_205(128))
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

var Function_209(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6A5B / 27227
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_210(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_207(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_210(var uParam0, int iParam1, int iParam2) //Position: 0x6A93 / 27283
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_16(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_207(uParam0[iVar03], 4);
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

void Function_211() //Position: 0x6B57 / 27479
{
	Local_96.f_96 = 4294967295;
	Local_96.f_100 = 4294967295;
	return;
}

void Function_212() //Position: 0x6B67 / 27495
{
	Local_69.f_96 = 4294967295;
	Local_69.f_100 = 4294967295;
	return;
}

