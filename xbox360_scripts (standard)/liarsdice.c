//Decompiled with MagicRDR v1.0
//Function Count : 421
//Statics Count : 720
//Natives Count : 425
//Parameters Count : 33

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	bool bLocal_4 = false;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	float fLocal_8 = 0.0f;
	int iLocal_9 = 0;
	float fLocal_10 = 0.0f;
	float fLocal_11 = 0.0f;
	float fLocal_12 = 0.0f;
	float fLocal_13 = 0.0f;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = false;
	var uLocal_45 = 0;
	bool bLocal_46 = false;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = false;
	float fLocal_50 = 0.0f;
	float fLocal_51 = 0.0f;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0.0f;
	float fLocal_58 = 0.0f;
	float fLocal_59 = 0.0f;
	float fLocal_60 = 0.0f;
	var uLocal_61 = 1;
	var uLocal_62 = 0;
	bool bLocal_63 = false;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	struct<33> Local_68 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_101 = false;
	int iLocal_102 = 0;
	bool bLocal_103 = false;
	int iLocal_104 = 0;
	struct<59> Local_105 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_174 = 5;
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
	var uLocal_191 = 5;
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
	var uLocal_207 = 5;
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
	var uLocal_233 = 5;
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
	var uLocal_250 = 5;
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
	var uLocal_266 = 5;
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
	var uLocal_292 = 5;
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
	var uLocal_309 = 5;
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
	var uLocal_325 = 5;
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
	var uLocal_351 = 5;
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
	var uLocal_368 = 5;
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
	var uLocal_384 = 5;
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
	var uLocal_410 = 5;
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
	var uLocal_427 = 5;
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
	var uLocal_443 = 5;
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
	var uLocal_460 = 6;
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
	bool bLocal_487 = true;
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
	bool bLocal_515 = false;
	float fLocal_516 = 0.0f;
	bool bLocal_517 = false;
	bool bLocal_518 = false;
	struct<9> Local_519[16];
	var uLocal_664[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_681 = { 0.0f, 0.0f, 0.0f };
	var uLocal_684 = 0;
	bool bLocal_685 = false;
	bool bLocal_686 = false;
	struct<33> ScriptParam_0 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	char* cVar1[64];
	char* cVar17[64];
	bool bVar33;
	
	iLocal_0 = 0;
	iLocal_5 = 31;
	iLocal_6 = 33;
	iLocal_7 = 1;
	fLocal_8 = 2.0f;
	iLocal_15 = 1000;
	fLocal_23 = 5.0f;
	fLocal_24 = 1.0f;
	bLocal_27 = false;
	iLocal_28 = 0;
	bLocal_44 = false;
	bLocal_46 = false;
	iLocal_47 = 0;
	fLocal_50 = 0,2f;
	fLocal_51 = 0,2f;
	iLocal_52 = 0;
	iLocal_53 = 0;
	bLocal_63 = false;
	iLocal_104 = 4;
	Local_68 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_399();
	bVar0 = false;
	while (bVar0 <= 6)
	{
		strcpy(&cVar1, "Seat ", 64);
		stradd(&cVar1, I2STR(bVar0), 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": isOccupied", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iPlayerIndex", 64);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 6)
	{
		strcpy(&cVar1, "Player ", 64);
		stradd(&cVar1, I2STR(bVar0), 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, "n: iSeatId", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iCurrentBet", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iChips", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iRaiseAmount", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iPotSnapShot", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iTotalInPot", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iBidAmount", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iBidType", 64);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		strcpy(&cVar1, "Dice Pile (", 64);
		stradd(&cVar1, I2STR(bVar0), 64);
		stradd(&cVar1, ") #", 64);
		bVar33 = false;
		while (bVar33 <= 5)
		{
			cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
			stradd(&cVar17, I2STR(bVar33), 64);
			bVar33++;
		}
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ".iHandSize", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ".generation", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ".Localgeneration", 64);
		bVar0++;
	}
	while (Function_232())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_68 };
		Function_207();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x29D / 669
{
	int iVar0;
	
	Function_205();
	if (iLocal_25)
	{
		Function_204(4, 1);
	}
	iVar0 = 0;
	while (iVar0 <= Local_105.f_1420)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_68 + 4)[iVar0]))
		{
			DEREFERENCE_ACTOR((*&Local_68 + 4)[iVar0]);
			SET_DRAW_ACTOR((*&Local_68 + 4)[iVar0], true);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_68 + 4)[iVar0]);
		}
		iVar0++;
	}
	UI_EXIT("Dice");
	UI_EXIT("Scores");
	if (Function_203())
	{
		Function_202();
	}
	SET_DRAW_ACTOR(GET_PLAYER_ACTOR(0), true);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(true);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(Function_201());
	Function_196();
	Function_195();
	RELEASE_LAYOUT_REF(bLocal_26);
	if (Function_203())
	{
		if (!(bLocal_4 || iLocal_3) || iLocal_9 != 2)
		{
			Function_191();
		}
		else
		{
			Function_187(Function_201(), 1);
		}
	}
	else
	{
		Function_185(1);
		Function_184(1);
		Function_184(4);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(Function_201(), 1);
		if (iLocal_3)
		{
			Function_48(Local_68, 1, 1, 1, 0);
		}
		else if (bLocal_4)
		{
			Function_44(Local_68);
			if (!Function_43(Global_76846, 512))
			{
				Function_37(Function_201(), 512, 1, 0);
			}
		}
		else
		{
			Function_19(Local_68);
		}
	}
	SET_ACTOR_INVULNERABILITY(Function_201(), false);
	AI_STOP_IGNORING_ACTORS();
	Function_15();
	Function_14(Function_201());
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_14);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_14);
	Function_2();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x413 / 1043
{
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_4();
	Function_3(uLocal_684);
	return;
}

int Function_3(bool bParam0) //Position: 0x426 / 1062
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_4() //Position: 0x43C / 1084
{
	struct<17> Var0;
	
	Function_6();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_5(&Var0);
	return;
}

void Function_5(int iParam0) //Position: 0x45E / 1118
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_6() //Position: 0x46E / 1134
{
	Function_7();
	return;
}

void Function_7() //Position: 0x477 / 1143
{
	Function_8(4294967286);
	return;
}

void Function_8(bool bParam0) //Position: 0x483 / 1155
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_13(&uVar0);
		Function_12(&vVar1);
		vVar1.z = uVar0;
		Function_5(&vVar1);
	}
	Function_11(&uVar0, bParam0);
	Function_10(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_9(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x4C0 / 1216
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_10(int iParam0) //Position: 0x4D3 / 1235
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x4E2 / 1250
{
	*uParam0 = iParam1;
	return;
}

void Function_12(int iParam0) //Position: 0x4ED / 1261
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_13(int iParam0) //Position: 0x4FD / 1277
{
	*iParam0 = Global_78480.f_120;
	return;
}

void Function_14(bool bParam0) //Position: 0x50C / 1292
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

void Function_15() //Position: 0x531 / 1329
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_201(), true);
	Function_18(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_201()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_17();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	Function_16();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_16() //Position: 0x5B3 / 1459
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_17() //Position: 0x5C8 / 1480
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_18(int iParam0) //Position: 0x5DC / 1500
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0x5EF / 1519
{
	Function_27(iParam0);
	Function_26();
	Function_23(2);
	Function_21((15 - Function_22(105)));
	Function_20(12);
	return;
}

void Function_20(bool bParam0) //Position: 0x610 / 1552
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_21(int iParam0) //Position: 0x62B / 1579
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_22(105)), 0);
	return;
}

int Function_22(int iParam0) //Position: 0x64C / 1612
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_23(bool bParam0) //Position: 0x662 / 1634
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_25(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_25(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_25(Global_12976.f_24);
	PRINTNL();
	Function_24(bParam0);
	return;
}

void Function_24(int iParam0) //Position: 0x6FE / 1790
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_22(90)), 0);
	return;
}

void Function_25(bool bParam0) //Position: 0x71F / 1823
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

void Function_26() //Position: 0x765 / 1893
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_27(bool bParam0) //Position: 0x77E / 1918
{
	int iVar0;
	
	if (!Function_35(bParam0))
	{
		Function_33();
		return;
	}
	iVar0 = Function_32(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_28("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_28(char* cParam0, bool bParam1) //Position: 0x7D1 / 2001
{
	struct<4> Var0;
	
	if (!Function_35(bParam1))
	{
		return;
	}
	switch (Function_32(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_29(Function_30(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_32(bParam1), Function_30(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_29(int iParam0) //Position: 0x8F5 / 2293
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_30(bool bParam0) //Position: 0x91A / 2330
{
	if (!Function_31(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_31(int iParam0) //Position: 0x93A / 2362
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_32(bool bParam0) //Position: 0x951 / 2385
{
	if (!Function_31(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_33() //Position: 0x96C / 2412
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_34(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_34(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBB3 / 2995
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_35(int iParam0) //Position: 0xBDC / 3036
{
	if (!Function_31(iParam0))
	{
		return 0;
	}
	if (!Function_36(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_36(int iParam0) //Position: 0xC00 / 3072
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_37(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC15 / 3093
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_39(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_38(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_38(char* cParam0, int iParam1) //Position: 0xC81 / 3201
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_39(bool bParam0, var uParam1, int iParam2) //Position: 0xCB8 / 3256
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_41(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_40(uVar0))
		{
			case 0x00000002:
				if (!Function_43(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_40(char* cParam0) //Position: 0xD30 / 3376
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

int Function_41(int iParam0) //Position: 0xDD1 / 3537
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_42(&iVar1, 2147483648);
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

void Function_42(int iParam0, int iParam1) //Position: 0xE0E / 3598
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_43(var uParam0, int iParam1) //Position: 0xE21 / 3617
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_44(int iParam0) //Position: 0xE34 / 3636
{
	Function_45(iParam0);
	Function_23(2);
	Function_20(12);
	Function_21((15 - Function_22(105)));
	return;
}

void Function_45(bool bParam0) //Position: 0xE52 / 3666
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_35(bParam0))
	{
		return;
	}
	iVar0 = Function_32(bParam0);
	if (StackVal == 2)
	{
		Function_28("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_46(int iParam0) //Position: 0xEF8 / 3832
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_47(char* cParam0) //Position: 0xF22 / 3874
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_48(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1178 / 4472
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_20(12);
	Function_23(2);
	Function_21((15 - Function_22(105)));
	if (Function_32(bParam0) == 1)
	{
		iVar2 = Function_30(bParam0);
		Function_179(&(Global_3422[iVar240]));
		Function_178(4194304);
		if (bParam3)
		{
			Function_130(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_124(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_130(iVar2, &uVar0, 0);
		}
		bVar1 = Function_123();
		if (bParam1)
		{
			Function_107(iVar2, bParam0, bVar1);
			Function_106();
		}
	}
	Function_54(bParam0, bParam1, uParam2, bVar1);
	if (Function_32(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_53(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_32(bParam0) == 1)
		{
			iVar2 = Function_30(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_49();
}

void Function_49() //Position: 0x1265 / 4709
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_50(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x1295 / 4757
{
	int iVar0;
	
	iVar0 = Function_51(iParam0);
	if (!Function_31(iVar0))
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

int Function_51(int iParam0) //Position: 0x12D2 / 4818
{
	if (!Function_52(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_52(int iParam0) //Position: 0x12EC / 4844
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1) //Position: 0x1302 / 4866
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_37(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_37(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_37(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_37(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_37(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_37(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_53(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_53(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_53(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_53(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_53(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_53(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_54(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15F9 / 5625
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_35(bParam0))
	{
		Function_33();
		return;
	}
	iVar0 = Function_32(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_30(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_102();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_28("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_96(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_30(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_58(1);
			Function_56(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_55(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_55(int iParam0, int iParam1) //Position: 0x180B / 6155
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_56(bool bParam0, int iParam1) //Position: 0x1845 / 6213
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_57())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_57() //Position: 0x1887 / 6279
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_58(bool bParam0) //Position: 0x1890 / 6288
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_88();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_59();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_42(&Global_63095, 1);
		Function_42(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_59() //Position: 0x18E1 / 6369
{
	Function_86();
	Function_85();
	Function_85();
	Function_84();
	Function_84();
	Function_83();
	Function_83();
	Function_66();
	Function_66();
	if (!Function_57())
	{
		Function_64();
		Function_63();
		Function_62();
		Function_61();
	}
	Function_60();
	return;
}

void Function_60() //Position: 0x1914 / 6420
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

void Function_61() //Position: 0x1A1A / 6682
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

void Function_62() //Position: 0x1A4D / 6733
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
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_63() //Position: 0x1BDB / 7131
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
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_64() //Position: 0x1D8F / 7567
{
	Function_65(&Global_28260, 1, 0);
	return;
}

void Function_65(int iParam0, bool bParam1, var uParam2) //Position: 0x1D9D / 7581
{
	bool bVar0;
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
	void fVar13;
	
	bVar0 = Function_201();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

struct<8> Function_66() //Position: 0x1F8E / 8078
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
				iVar2 = ((Function_82((50 + iVar4)) + Function_82((183 + iVar4))) + Function_82((90 + iVar4)));
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
	Function_67(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x2029 / 8233
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
		Function_81(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_80(iParam0);
	if (bParam2)
	{
		Function_68(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x22C4 / 8900
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_79(390))), 32);
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
					bVar19 = (Function_78(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_78(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_76(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_73(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_70(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_69(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_69() //Position: 0x28F1 / 10481
{
	int iVar0;
	
	return iVar0;
}

var Function_70(int iParam0) //Position: 0x28F9 / 10489
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_71(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x290A / 10506
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_72(char* cParam0, char* cParam1) //Position: 0x29FF / 10751
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_73(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A18 / 10776
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_75(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_74(Function_75(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

bool Function_74(int iParam0, int iParam1) //Position: 0x2A7D / 10877
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_75(int iParam0, bool bParam1) //Position: 0x2A8F / 10895
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_76(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AA1 / 10913
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
	if (((Function_77(iParam0) != 19 || Function_77(iParam0) != 17) || Function_77(iParam0) != 10) || Function_77(iParam0) != 9)
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

int Function_77(int iParam0) //Position: 0x2BD1 / 11217
{
	return Global_35278[iParam020].f_48;
}

float Function_78(int iParam0) //Position: 0x2BE0 / 11232
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_79(int iParam0) //Position: 0x2C19 / 11289
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_80(int iParam0) //Position: 0x2C56 / 11350
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

int Function_81(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DF0 / 11760
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

int Function_82(bool bParam0) //Position: 0x300A / 12298
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_83() //Position: 0x304B / 12363
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
		iVar2 = ((Function_82((50 + iVar3) + 15) + Function_82((183 + iVar3) + 15)) + Function_82((90 + iVar3) + 15));
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
	Function_67(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_84() //Position: 0x30D4 / 12500
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
			iVar2 = ((Function_82((50 + iVar3) + 8) + Function_82((183 + iVar3) + 8)) + Function_82((90 + iVar3) + 8));
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
	Function_67(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_85() //Position: 0x316B / 12651
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
		iVar2 = ((Function_82((50 + iVar3)) + Function_82((183 + iVar3))) + Function_82((90 + iVar3)));
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
	Function_67(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_86() //Position: 0x31EA / 12778
{
	Function_87(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_67(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_87(int iParam0, bool bParam1, int iParam2) //Position: 0x3210 / 12816
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
	Function_81(iParam0, bParam1, 1);
	Function_80(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_68(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_88() //Position: 0x341A / 13338
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_90(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_90(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_89(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

bool Function_89(vector3 vParam0) //Position: 0x34BB / 13499
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_90(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x34D3 / 13523
{
	int iVar0;
	
	iVar0 = Function_94(uParam2, uParam3);
	if (Function_93(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_92(&Global_63095, 1);
			Function_42(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_92(&Global_63095, 2);
			Function_42(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_92(&Global_63095, 2);
		Function_42(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_91();
	return StackVal, StackVal, Function_91();
}

vector3 Function_91() //Position: 0x35BA / 13754
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_92(int iParam0, int iParam1) //Position: 0x35C3 / 13763
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_93(int iParam0) //Position: 0x35D2 / 13778
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_94(bool bParam0, bool bParam1) //Position: 0x35E8 / 13800
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
				fVar2 = Function_95(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_95(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_93(bVar0) && !bParam1)
	{
		bVar0 = Function_94(bParam0, 1);
	}
	return bVar0;
}

float Function_95(vector3 vParam0, vector3 vParam3) //Position: 0x36AF / 13999
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_96(bool bParam0) //Position: 0x36CC / 14028
{
	int iVar0;
	int iVar1;
	
	if (!Function_31(bParam0))
	{
		return;
	}
	switch (Function_32(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_30(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_101(12, 1, 0, 0);
				Function_100(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_101(13, 1, 0, 0);
				Function_100(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_101(14, 1, 0, 0);
				Function_100(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_101(15, 1, 0, 0);
				Function_100(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_101(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_30(bParam0))
			{
				case 0x00000000:
					if (Function_99(bParam0) == 1)
					{
						iVar0 = Function_98(bParam0);
						if (Function_97(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_100(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_100(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_100(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_100(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_100(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_100(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_100(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_100(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_100(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_100(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_100(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_100(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_100(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_100(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_100(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_100(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_100(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_100(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_100(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_100(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_101(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_101(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_101(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_98(bParam0) == 0)
			{
				if (Function_99(bParam0) == 1)
				{
					Function_101(458, 1, 0, 0);
					iVar0 = Function_30(bParam0);
					if (Function_97(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_100(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_100(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_100(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_100(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_100(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_100(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_100(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_100(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_99(bParam0) == 1)
			{
				Function_101(400, 1, 0, 0);
			}
			switch (Function_30(bParam0))
			{
				case 0x00000001:
					Function_101(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_100(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_100(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_100(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_101(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_100(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_100(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_97(int iParam0) //Position: 0x3BA8 / 15272
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_98(bool bParam0) //Position: 0x3BBE / 15294
{
	if (!Function_31(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_99(bool bParam0) //Position: 0x3BDD / 15325
{
	if (!Function_31(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_100(int iParam0, bool bParam1) //Position: 0x3BF7 / 15351
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_101(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3C5E / 15454
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_81(iParam0, TO_FLOAT(bParam1), 1);
	Function_80(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_68(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_102() //Position: 0x3E7E / 15998
{
	int iVar0;
	int iVar1;
	
	if (!Function_52(Global_6269))
	{
		return;
	}
	iVar0 = Function_82(24);
	iVar1 = Function_51(Global_6269);
	if (!Function_52(iVar0) && Function_105(iVar1) < 0)
	{
		Function_67(24, Global_6269, 0);
		Function_103(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_105(Function_51(iVar0)))
	{
		Function_67(24, Global_6269, 0);
		Function_103(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_103(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3EFE / 16126
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_104(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_104(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4251 / 16977
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_105(int iParam0) //Position: 0x42D4 / 17108
{
	if (!Function_35(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_106() //Position: 0x42EE / 17134
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_107(int iParam0, int iParam1, bool bParam2) //Position: 0x431C / 17180
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_122(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_82(42) - Global_34165.f_116);
				bVar1 = (Function_82(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_79(49)) - Global_34165.f_124);
				bVar3 = (Function_82(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_82(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_121(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_108(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_46(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_108(int iParam0, bool bParam1, bool bParam2) //Position: 0x45B8 / 17848
{
	int iVar0;
	bool bVar1;
	
	if (Function_120(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_82(3);
	Function_117();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_115(3, bVar1);
		if (!bParam2)
		{
			if (!Function_43(Global_76848, 4))
			{
				Function_37(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_101(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_78(3));
	iVar0 = Function_82(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_110(4, Function_114(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_110(4, Function_114(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_110(4, Function_114(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_110(4, Function_114(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_110(4, Function_114(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_109(int iParam0, int iParam1) //Position: 0x477B / 18299
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_110(int iParam0, char* cParam1, bool bParam2) //Position: 0x49D9 / 18905
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_103(iParam0, cParam1, 0, 1);
	iVar1 = Function_111();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_111() //Position: 0x4B5E / 19294
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_112();
	return 0;
}

void Function_112() //Position: 0x4BFD / 19453
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_113(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x4CAC / 19628
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_114(int iParam0) //Position: 0x4D0A / 19722
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_115(int iParam0, bool bParam1) //Position: 0x4D99 / 19865
{
	bool bVar0;
	int iVar1;
	
	Function_101(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_116(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_111();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_116(int iParam0, int iParam1) //Position: 0x4F36 / 20278
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_117() //Position: 0x4F77 / 20343
{
	Function_119(3, 0.0f);
	Function_118(3, 10000.0f);
	return;
}

int Function_118(int iParam0, int iParam1) //Position: 0x4F8D / 20365
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_119(int iParam0, int iParam1) //Position: 0x4FCD / 20429
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_120(int iParam0) //Position: 0x500D / 20493
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_121(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x501C / 20508
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_122(int iParam0) //Position: 0x51E4 / 20964
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_123() //Position: 0x5279 / 21113
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_124(int iParam0) //Position: 0x529E / 21150
{
	if (!Function_52(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_108(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_108(25, 1, 0);
			Function_129(1, 1);
			break;
		
		case 0x00000015:
			Function_129(50, 1);
			Function_108(250, 1, 0);
			Function_125(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_108(75, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_129(50, 1);
			Function_108(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_129(5, 1);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_108(75, 1, 0);
			Function_125(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_129(5, 1);
			Function_108(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_125(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_129(25, 1);
			Function_108(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_129(10, 1);
			Function_108(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_108(50, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_108(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_125(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_129(20, 1);
			Function_108(75, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_129(25, 1);
			Function_108(150, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_129(10, 1);
			Function_108(150, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_108(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_125(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_125(100, 1, 0);
			Function_129(5, 1);
			break;
		
		case 0x0000000F:
			Function_129(3, 1);
			Function_108(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_125(125, 1, 0);
			Function_108(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_129(50, 1);
			Function_108(100, 1, 0);
			Function_125(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_129(50, 1);
			Function_108(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_129(75, 1);
			Function_108(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_108(75, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_108(250, 1, 0);
			Function_125(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_108(75, 1, 0);
			Function_125(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_108(200, 1, 0);
			Function_125(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_108(75, 1, 0);
			Function_125(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_108(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_129(50, 1);
			Function_108(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_129(100, 1);
			Function_108(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_108(200, 1, 0);
			Function_125(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_108(300, 1, 0);
			Function_125(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_108(300, 1, 0);
			Function_125(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_108(300, 1, 0);
			Function_125(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_108(500, 1, 0);
			Function_125(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_108(150, 1, 0);
			Function_125(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_125(25, 1, 0);
			Function_129(100, 1);
			break;
		
		case 0x0000002A:
			Function_108(150, 1, 0);
			Function_125(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_125(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_125(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_125(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_125(150, 1, 0);
			Function_129(100, 1);
			break;
		
		case 0x00000035:
			Function_125(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_125(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_125(150, 1, 0);
			Function_129(100, 1);
			break;
		
		case 0x00000032:
			Function_125(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_125(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_125(int iParam0, bool bParam1, bool bParam2) //Position: 0x5759 / 22361
{
	int iVar0;
	bool bVar1;
	
	if (Function_120(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_82(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_115(1, bVar1);
			if (!bParam2)
			{
				if (!Function_43(Global_76848, 1))
				{
					Function_37(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_128(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_43(Global_76848, 2))
				{
					Function_37(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_101(1, bVar1, 0, 0);
	}
	else
	{
		Function_127(1, (4294967295 * bVar1), 0);
	}
	if (Function_82(1) <= 4294962296)
	{
		Function_67(1, 4294962296, 0);
	}
	else if (Function_82(1) >= 5000)
	{
		Function_67(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_78(1));
	iVar0 = Function_82(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_110(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_110(2, Function_126(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_110(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_110(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_110(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_110(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_110(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_110(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_110(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_110(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_110(2, Function_126(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_110(2, Function_126(Global_12976.f_152), 0);
			}
			break;
	}
	Function_109(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_126(int iParam0) //Position: 0x5A6E / 23150
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_127(int iParam0, bool bParam1, int iParam2) //Position: 0x5B11 / 23313
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_80(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_68(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_128(int iParam0, bool bParam1) //Position: 0x5D0C / 23820
{
	bool bVar0;
	int iVar1;
	
	Function_127(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_116(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_111();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_129(bool bParam0, bool bParam1) //Position: 0x5EA8 / 24232
{
	bool bVar0;
	
	bVar0 = Function_82(0);
	if ((Function_82(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_101(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_82(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_101(597, bParam0, 0, 0);
	}
	if ((Function_82(597) + Function_82(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_130(int iParam0, var uParam1, bool bParam2) //Position: 0x5F73 / 24435
{
	struct<4> Var0;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_176(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_173(Global_30640[0]);
			Function_173(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_171(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_173(Global_30668[0]);
			Function_162(0);
			Function_160(2, 1);
			Function_160(0, 1);
			Function_160(1, 1);
			break;
		
		case 0x00000003:
			Function_173(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_173(Global_30668[0]);
			Function_173(Global_30640[0]);
			Function_158(0, 1);
			Function_158(15, 1);
			Function_158(9, 1);
			Function_158(12, 1);
			Function_158(16, 1);
			Function_160(3, 1);
			break;
		
		case 0x00000005:
			Function_173(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_171(21, bParam2, 4);
			Function_173(Global_30668[0]);
			Function_160(39, 1);
			break;
		
		case 0x00000007:
			Function_173(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_173(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_157(4))
					{
						Function_147(4, 0, 0, 1);
					}
				}
			}
			Function_173(Global_30640[0]);
			Function_173(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_173(Global_30640[0]);
			Function_173(Global_30668[2]);
			Function_146(&(Global_29008[Global_30668[2]]), 32768);
			Function_145(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_171(9, bParam2, 4);
			Function_173(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_173(Global_30640[0]);
			Function_173(Global_30658[0]);
			Function_146(&(Global_29008[Global_30658[0]]), 32768);
			Function_145(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_173(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_173(Global_30640[0]);
			Function_173(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_173(Global_30640[1]);
			Function_173(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_173(Global_30679[0]);
			Function_173(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_173(Global_30658[5]);
			Function_173(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_171(21, bParam2, 4);
			Function_173(Global_30640[4]);
			Function_173(Global_30658[4]);
			Function_144(&Global_76847, 0x2000000);
			Function_144(&Global_76847, 0x4000000);
			Function_144(&Global_76847, 4096);
			Function_144(&Global_76847, 8);
			Function_144(&Global_76847, 8388608);
			Function_144(&Global_76847, 524288);
			Function_144(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_173(Global_30640[4]);
			Function_173(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_145(&(Global_29008[Global_30640[4]]), 256);
			Function_173(Global_30640[4]);
			Function_173(Global_30658[0]);
			Function_146(&(Global_29008[Global_30658[0]]), 32768);
			Function_145(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_173(Global_30640[0]);
			Function_173(Global_30640[5]);
			Function_171(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_173(Global_30658[3]);
			Function_146(&(Global_29008[Global_30658[3]]), 32768);
			Function_145(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_171(9, bParam2, 4);
			Function_173(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_146(&(Global_29008[Global_30679[1]]), 32768);
			Function_173(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_171(12, bParam2, 4);
			Function_145(&(Global_29008[Global_30679[1]]), 256);
			Function_173(Global_30668[3]);
			Function_173(Global_30693[0]);
			Function_173(Global_30685[0]);
			Function_162(4);
			Function_158(13, 1);
			Function_158(1, 1);
			Function_158(18, 1);
			Function_160(34, 1);
			Function_160(44, 1);
			Function_160(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_171(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_173(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_173(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_173(Global_30693[0]);
			Function_173(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_173(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_173(Global_30685[0]);
			Function_173(Global_30693[0]);
			Function_173(Global_30693[1]);
			Function_173(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_171(23, bParam2, 3);
			Function_158(23, 1);
			Function_173(Global_30685[0]);
			Function_173(Global_30685[2]);
			Function_146(&(Global_29008[Global_30685[2]]), 32768);
			Function_145(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_171(19, bParam2, 4);
			Function_173(Global_30685[0]);
			Function_173(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_171(24, bParam2, 3);
			Function_158(24, 1);
			Function_173(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_173(Global_30685[0]);
			Function_173(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_173(Global_30693[12]);
			Function_173(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_173(Global_30693[12]);
			Function_173(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_171(25, bParam2, 10);
			Function_173(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_173(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_173(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_171(13, bParam2, 4);
			Function_173(Global_30693[2]);
			Function_173(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_157(8))
				{
					Function_147(8, 0, 0, 1);
				}
			}
			Function_173(Global_30685[0]);
			Function_162(9);
			Function_158(7, 1);
			Function_158(11, 1);
			Function_158(3, 1);
			Function_158(20, 1);
			Function_160(57, 1);
			break;
		
		case 0x0000002A:
			Function_171(2, bParam2, 4);
			Function_173(Global_30717[0]);
			Function_173(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_173(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_173(Global_30717[0]);
			Function_173(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_173(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_173(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_173(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_171(17, bParam2, 4);
			Function_173(Global_30723[0]);
			Function_173(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_142(15))
				{
					Function_137(15, 0, 1);
				}
			}
			Function_145(&(Global_29008[Global_30717[1]]), 256);
			Function_162(11);
			Function_173(Global_30717[1]);
			Function_173(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_173(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_173(Global_30717[1]);
			Function_173(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_173(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_173(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_173(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_173(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_173(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_173(Global_30717[1]);
			Function_131(11);
			Function_162(12);
			Global_16537[1121].f_40 = 0;
			Function_160(56, 1);
			if (!bParam2)
			{
				if (!Function_157(9))
				{
					Function_147(9, 0, 0, 0);
				}
				if (!Function_157(10))
				{
					Function_147(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_131(int iParam0) //Position: 0x6863 / 26723
{
	bool bVar0;
	
	if (!Function_93(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_136(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_136(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_132(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_132(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x69D2 / 27090
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_134(Function_135(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_134(Function_135(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_134(StackVal);
				vVar1 = { StackVal, StackVal, Function_134(StackVal) };
				if (Function_133(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_133(vector3 vParam0, vector3 vParam3) //Position: 0x6AD8 / 27352
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_134(int iParam0) //Position: 0x6B05 / 27397
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

var Function_135(vector3 vParam0) //Position: 0x6B5C / 27484
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6BAA / 27562
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

void Function_137(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6BFE / 27646
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_142(bParam0))
	{
		if (!Function_157(bParam0))
		{
			Function_147(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_101(457, 1, 0, 0);
		Function_140(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_139(0, 0, 1, 1))
			{
				Function_58(1);
				Function_56(1, 0);
			}
			else
			{
				Function_138();
			}
		}
	}
	return;
}

void Function_138() //Position: 0x6D9C / 28060
{
	return;
}

bool Function_139(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6DA2 / 28066
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_140(bool bParam0, int iParam1) //Position: 0x6E46 / 28230
{
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_141(int iParam0) //Position: 0x6E9B / 28315
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_142(int iParam0) //Position: 0x6EB1 / 28337
{
	if (!Function_141(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_143(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_143(int iParam0, int iParam1) //Position: 0x6F02 / 28418
{
	int iVar0;
	
	if (!Function_141(iParam0))
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

void Function_144(var uParam0, int iParam1) //Position: 0x6F2F / 28463
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_145(var uParam0, int iParam1) //Position: 0x6F3E / 28478
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x6F55 / 28501
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6F64 / 28516
{
	struct<8> Var0;
	
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_156(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_157(bParam0))
	{
		Function_101(456, 1, 0, 0);
		Function_140(bParam0, 2);
		if (bParam2)
		{
			if (!Function_139(0, 0, 1, 1))
			{
				Function_58(1);
				Function_56(1, 5);
			}
			else
			{
				Function_138();
			}
		}
		Function_150(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_149() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_149() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_148(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_43(Global_76846, 2))
		{
			Function_37(Global_34573, 2, 1, 0);
		}
	}
}

void Function_148(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x70AE / 28846
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_149() //Position: 0x70F9 / 28921
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_150(bool bParam0) //Position: 0x7126 / 28966
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_154(bParam0, Function_155(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_154(bParam0, Function_155(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_153(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_152(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_151(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_151(int iParam0) //Position: 0x72D6 / 29398
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_141(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_152(bool bParam0, bool bParam1) //Position: 0x732D / 29485
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

var Function_153(int iParam0) //Position: 0x7352 / 29522
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_141(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_154(bool bParam0, int iParam1) //Position: 0x73A8 / 29608
{
	int iVar0;
	
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_155(bool bParam0) //Position: 0x7407 / 29703
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_156(int iParam0) //Position: 0x7413 / 29715
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_157(int iParam0) //Position: 0x742F / 29743
{
	if (!Function_141(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_143(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0, int iParam1) //Position: 0x7481 / 29825
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_159(iParam0, iParam1);
	Function_37(Global_34573, 1, 4, 1);
	return 1;
}

int Function_159(int iParam0, int iParam1) //Position: 0x74F4 / 29940
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_160(int iParam0, int iParam1) //Position: 0x7550 / 30032
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_161(iParam0, iParam1);
	Function_37(Global_34573, 1, 4, 1);
	return 1;
}

int Function_161(int iParam0, int iParam1) //Position: 0x75C1 / 30145
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_162(int iParam0) //Position: 0x761B / 30235
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_93(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_170(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_170(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_101(468, 1, 0, 0);
			Function_100(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_148("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_132(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_147(14, 1, 0, 0);
				Function_163(14, 1, 0, 0, 0);
			}
			if (!Function_139(0, 0, 1, 1))
			{
				Function_58(1);
				Function_56(1, 6);
			}
			else
			{
				Function_138();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_148("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_101(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_100(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x78C7 / 30919
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_156(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_143(bParam0, 2))
	{
		Function_101(456, 1, 0, 0);
		Function_140(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_148(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_154(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_140(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_139(0, 0, 1, 1))
			{
				Function_58(1);
				Function_56(1, 0);
			}
			else
			{
				Function_138();
			}
		}
		Function_150(bParam0);
		if (StackVal && !Function_169(((((!Function_149() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_169((((Function_149() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_43(Global_76846, 2))
		{
			Function_37(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_165();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_164(3, bParam1);
				break;
			
			case 0x00000005:
				Function_164(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_164(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_164(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_164(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_164(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_100(2, 24);
				break;
			
			case 0x00000003:
				Function_100(2, 25);
				break;
			
			case 0x0000000F:
				Function_100(2, 26);
				break;
			
			case 0x0000000D:
				Function_100(2, 27);
				break;
			
			case 0x0000000E:
				Function_100(2, 28);
				break;
			}
	}
}

void Function_164(int iParam0, bool bParam1) //Position: 0x7B56 / 31574
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_165() //Position: 0x7BB5 / 31669
{
	if (Function_141(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_168(Global_28180);
			Global_28180.f_8 = Function_166(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_168(Global_28180);
			Global_28180.f_8 = Function_166(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_166(int iParam0, int iParam1) //Position: 0x7C30 / 31792
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_50(6, 0) || Function_50(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_167(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_50(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_167(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_167(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_167(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_167(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_50(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_167(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_167(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_167(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_167(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_167(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_167(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_167(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_50(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_167(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_50(6, 0) && Function_167(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_167(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_50(9, 0) && Function_167(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_167(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_50(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_89(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_89(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_89(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_167(int iParam0) //Position: 0x882B / 34859
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_168(int iParam0) //Position: 0x8840 / 34880
{
	int iVar0;
	int iVar1;
	
	if (!Function_141(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_169(bool bParam0, int iParam1) //Position: 0x888F / 34959
{
	return (bParam0 && iParam1) == 0;
}

void Function_170(bool bParam0, bool bParam1) //Position: 0x889C / 34972
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

void Function_171(bool bParam0, bool bParam1, int iParam2) //Position: 0x88ED / 35053
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_172(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_176(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_172(int iParam0, int iParam1) //Position: 0x895B / 35163
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_173(int iParam0) //Position: 0x896E / 35182
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_175(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_146(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_101(473, 1, 0, 0);
		iVar0 = Function_174(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_101(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_101(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_101(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_100(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_100(7, 30);
	}
	if (Function_78(473) <= Function_79(473))
	{
		if (!Function_57())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_174(int iParam0) //Position: 0x8A6D / 35437
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_97(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_175(var uParam0, int iParam1) //Position: 0x8AC5 / 35525
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_176(bool bParam0, bool bParam1, int iParam2) //Position: 0x8AE1 / 35553
{
	if (!Function_177(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_201(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_201(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_201(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_177(int iParam0) //Position: 0x8B38 / 35640
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_178(int iParam0) //Position: 0x8B4A / 35658
{
	int iVar0;
	
	if (Function_169(iParam0, 1) && Function_169(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_179(int iParam0) //Position: 0x8B7E / 35710
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_180(4, 0, 0);
		}
	}
	return;
}

void Function_180(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8BE5 / 35813
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
	else if (StackVal || StackVal != 12 != 20)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_181(Global_16524, bVar0, 1);
	}
	return;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8CC2 / 36034
{
	int iVar0;
	
	Function_183(bParam0);
	Function_25(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, bParam1);
	Function_182();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_182() //Position: 0x8E3B / 36411
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_183(int iParam0) //Position: 0x8E47 / 36423
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

void Function_184(int iParam0) //Position: 0x8E8D / 36493
{
	if (Function_169(iParam0, 1) && !Function_169(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0) //Position: 0x8EBA / 36538
{
	Function_186(&Global_28842, iParam0);
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0x8EC8 / 36552
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_187(bool bParam0, int iParam1) //Position: 0x8EE3 / 36579
{
	struct<5> Var0;
	
	Function_190(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_188(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

bool Function_188(int iParam0) //Position: 0x8F39 / 36665
{
	return Function_189(Global_78617.f_52, iParam0);
}

int Function_189(var uParam0, int iParam1) //Position: 0x8F4A / 36682
{
	return (uParam0 && iParam1) == 0;
}

void Function_190(int iParam0, bool bParam1) //Position: 0x8F57 / 36695
{
	if (bParam1)
	{
		Function_92(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_42(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

int Function_191() //Position: 0x8F92 / 36754
{
	if (Function_194(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_192(16);
	return 1;
}

void Function_192(int iParam0) //Position: 0x8FB0 / 36784
{
	Function_193(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_193(var uParam0, int iParam1) //Position: 0x8FE9 / 36841
{
	Function_42(uParam0, iParam1);
	return;
}

bool Function_194(var uParam0) //Position: 0x8FF6 / 36854
{
	return Function_189(Global_79336, uParam0);
}

void Function_195() //Position: 0x9005 / 36869
{
	return;
}

void Function_196() //Position: 0x900B / 36875
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_197(&bLocal_487);
	return;
}

void Function_197(int iParam0) //Position: 0x901A / 36890
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_198(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0x9040 / 36928
{
	if (Function_200(uParam0[iParam13], 4))
	{
		if (Function_200(uParam0[iParam13], 1))
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
			Function_199(uParam0[iParam13], 1);
			Function_199(uParam0[iParam13], 2);
			Function_199(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0x916E / 37230
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_200(int iParam0, int iParam1) //Position: 0x9188 / 37256
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_201() //Position: 0x91A5 / 37285
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_202() //Position: 0x91BA / 37306
{
	FLASH_SET_INT("numberSystem", "nshowTimer", false);
	return;
}

bool Function_203() //Position: 0x91E0 / 37344
{
	return Local_68.f_52;
}

void Function_204(bool bParam0, bool bParam1) //Position: 0x91EA / 37354
{
	switch (bParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, true);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, false);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, false);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, false);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, true);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, false);
			}
			break;
	}
	return;
}

void Function_205() //Position: 0x935D / 37725
{
	Function_206(9);
	Function_206(8);
	Function_206(7);
	Function_206(6);
	Function_206(5);
	Function_206(4);
	Function_206(3);
	Function_206(2);
	Function_206(1);
	Function_206(0);
	return;
}

int Function_206(bool bParam0) //Position: 0x9397 / 37783
{
	UI_HIDE_PROMPT(bParam0);
	return 1;
}

void Function_207() //Position: 0x93A3 / 37795
{
	int iVar0[3];
	int iVar4;
	
	if (Function_230(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_216(&uLocal_16, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_210();
			Function_209(0);
		}
		else if (iVar4 == 1)
		{
			Function_210();
			Function_209(1);
		}
		else if (iVar4 == 2)
		{
			Function_210();
			Function_209(2);
		}
	}
	else
	{
		Function_208(10, 3);
	}
	return;
}

void Function_208(int iParam0, int iParam1) //Position: 0x9431 / 37937
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_209(int iParam0) //Position: 0x9568 / 38248
{
	iLocal_1 = 3;
	iLocal_2 = 0;
	iLocal_9 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: PASS", 0, 0, false, 0);
			break;
		
		case 0x00000001:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: FAIL", 0, 0, false, 0);
			break;
		
		case 0x00000002:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: CANCEL", 0, 0, false, 0);
			break;
		
		default:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: <SOME OTHER REASON>", 0, 0, false, 0);
			break;
	}
	return;
}

void Function_210() //Position: 0x965A / 38490
{
	Function_211();
	Function_208(10, 3);
	return;
}

void Function_211() //Position: 0x9669 / 38505
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_215())
	{
		Function_214(10, 3);
	}
	else
	{
		Function_212();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_201(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_201());
	UI_POP("nDebugMenu");
	return;
}

void Function_212() //Position: 0x96B4 / 38580
{
	Function_213(25, 2);
	return;
}

void Function_213(int iParam0, int iParam1) //Position: 0x96C0 / 38592
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_214(int iParam0, int iParam1) //Position: 0x98BE / 39102
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_215() //Position: 0x99F5 / 39413
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_169(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_216(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9A5C / 39516
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_229(&Var15, &Var0);
	uVar20 = Function_228(*uParam1, &Var15);
	Function_227(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_226(uParam0, uVar20);
	Function_224(StackVal, uParam0, Var15.f_12);
	Function_222(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_221(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_218(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_217(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_217(int iParam0, int iParam1, int iParam2) //Position: 0x9B23 / 39715
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_218(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x9B7F / 39807
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_220(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_220(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_217(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_219(bParam1->f_32);
	}
	else
	{
		Function_219(bParam1->f_32);
	}
	return 0;
}

void Function_219(bool bParam0) //Position: 0x9D05 / 40197
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_220(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x9D3F / 40255
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_221(int iParam0, var uParam1, int iParam2) //Position: 0x9DED / 40429
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_222(var uParam0, int iParam1, int iParam2) //Position: 0x9E11 / 40465
{
	switch (Function_223())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_223() //Position: 0x9EAD / 40621
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_224(var uParam0, int iParam1, int iParam2) //Position: 0x9EE9 / 40681
{
	switch (Function_225(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_225(int iParam0) //Position: 0x9F81 / 40833
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_201()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_169(*iParam0, 0x40000000))
		{
			Function_92(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_169(*iParam0, 0x40000000))
		{
			Function_92(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_42(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_201()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_169(*iParam0, 0x20000000))
		{
			Function_92(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_169(*iParam0, 0x20000000))
		{
			Function_92(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_42(iParam0, 0x20000000);
	return 0;
}

var Function_226(var uParam0, int iParam1) //Position: 0xA0CC / 41164
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_227(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA21B / 41499
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_228(int iParam0, int iParam1) //Position: 0xA2AE / 41646
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_229(var uParam0, int iParam1) //Position: 0xA2C8 / 41672
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1,6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_230(int iParam0) //Position: 0xA316 / 41750
{
	if (!Function_231(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_231(int iParam0) //Position: 0xA32A / 41770
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_232() //Position: 0xA34E / 41806
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(Function_201()))
	{
		Function_398();
		return 0;
	}
	bLocal_515 = (GET_CURRENT_GAME_TIME() - fLocal_516);
	if (bLocal_515 < 0,033333f)
	{
		bLocal_515 = 0,0333333f;
	}
	fLocal_516 = GET_CURRENT_GAME_TIME();
	Function_87(432, bLocal_515, 0);
	if (Function_203())
	{
		Function_396(3);
		Function_395();
		Function_392(uLocal_684, &Local_105);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_68 + 4)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_68 + 4)[iVar0]) == Function_201())
			{
				Function_398();
				return 0;
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_398();
		return 0;
	}
	iLocal_3 = 0;
	bLocal_4 = false;
	switch (iLocal_1)
	{
		case 0x00000063:
			Function_390(&Local_105);
			iLocal_1 = 0;
			break;
		
		case 0x00000000:
			Function_377();
			break;
		
		case 0x00000001:
			Function_261();
			break;
		
		case 0x00000003:
			Function_252();
			break;
		
		case 0x00000065:
			iLocal_3 = 1;
			break;
		
		case 0x00000029:
			if (Function_243(&uLocal_64, &iLocal_29))
			{
				Function_209(0);
			}
			break;
		
		default:
			return 0;
	}
	if (iLocal_3)
	{
		Function_233();
		return 0;
	}
	if (bLocal_4)
	{
		Function_398();
		return 0;
	}
	return 1;
}

void Function_233() //Position: 0xA466 / 42086
{
	if (Global_29006 == Global_30707[2])
	{
		Function_242(7, Global_30707[2]);
	}
	if (Function_241(50) && Local_68 != Function_236(Global_30668[1], 7, 4))
	{
		Function_234(64, 1, 0);
	}
	iLocal_3 = 1;
	Function_1();
	return;
}

int Function_234(bool bParam0, bool bParam1, int iParam2) //Position: 0xA4A7 / 42151
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_235(bParam0), Function_201()) == 0)
		{
			ADD_ITEM(Function_235(bParam0), Function_201(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_235(bParam0), Function_201(), iParam2);
	return 1;
}

var Function_235(bool bParam0) //Position: 0xA4F2 / 42226
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

int Function_236(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA5E3 / 42467
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_240(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_237(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_237(bParam0, bParam1, bParam2, 4294967295);
}

int Function_237(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA641 / 42561
{
	var uVar0;
	
	if (!Function_239(bParam2))
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
	uVar0 = Function_240(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_238(uVar0);
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

int Function_238(int iParam0) //Position: 0xA796 / 42902
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

bool Function_239(int iParam0) //Position: 0xA7D4 / 42964
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_240(int iParam0, int iParam1, int iParam2) //Position: 0xA7E9 / 42985
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_241(int iParam0) //Position: 0xA809 / 43017
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_242(int iParam0, int iParam1) //Position: 0xA81E / 43038
{
	if (!Function_156(3))
	{
		return;
	}
	if (Function_57())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3())
				{
					Function_163(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_163(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_163(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_163(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_163(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_163(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_163(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_157(2) && !Function_142(2))
				{
					Function_163(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_243(var uParam0, int iParam1) //Position: 0xA92C / 43308
{
	*uParam0 = { StackVal, StackVal, StackVal, *uParam0 };
	switch (iLocal_2)
	{
		case 0x00000000:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			else
			{
				Function_16();
				Function_206(6);
				Function_206(5);
				Function_206(4);
				Function_206(3);
				Function_206(2);
				Function_206(1);
				Function_206(0);
				Function_148("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_250(iParam1);
				iLocal_2 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_244(iParam1, 10,5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_244(var uParam0, int iParam1) //Position: 0xA9CD / 43469
{
	if (Function_246(uParam0, iParam1))
	{
		Function_245(uParam0);
		return 1;
	}
	return 0;
}

void Function_245(int iParam0) //Position: 0xA9E5 / 43493
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_246(int iParam0, float fParam1) //Position: 0xA9F9 / 43513
{
	if (Function_249(iParam0))
	{
		if (Function_247(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_247(int iParam0) //Position: 0xAA15 / 43541
{
	if (Function_249(iParam0))
	{
		if (Function_248(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_248(int iParam0) //Position: 0xAADD / 43741
{
	return Function_169(*iParam0, 2);
}

bool Function_249(int iParam0) //Position: 0xAAEA / 43754
{
	return Function_169(*iParam0, 1);
}

void Function_250(int iParam0) //Position: 0xAAF7 / 43767
{
	Function_251(iParam0, 0.0f);
	return;
}

void Function_251(var uParam0, float fParam1) //Position: 0xAB03 / 43779
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_92(uParam0, 1);
	Function_42(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_252() //Position: 0xAB24 / 43812
{
	int iVar0;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (iLocal_9 == 1)
			{
				if (Global_29004 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 2)
				{
					AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
			}
			UI_EXIT("Dice");
			UI_EXIT("Scores");
			Function_205();
			Function_16();
			if (iLocal_9 != 0 && !Function_260(Function_32(Local_68), Function_30(Local_68)))
			{
				Function_101(410, 1, 0, 0);
				Function_100(6, 13);
			}
			iLocal_2 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_105 + 1420)[Local_105.f_15043])
			{
				Function_259(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_49));
				Function_255(&Local_105, Function_257(1));
			}
			if (Function_203())
			{
				EQUIP_ACCESSORY(Function_201(), 0, 1);
				EQUIP_ACCESSORY(Function_201(), 1, 1);
				iLocal_2 = 9;
			}
			else
			{
				iLocal_2 = 7;
			}
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_105.f_1420)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					RESET_ANIM_SET_FOR_ACTOR(Local_105[StackVal59], 1);
					SET_ANIM_SET_FOR_ACTOR(Local_105[StackVal59], "liars_dice_ambient", 0);
					while (!ACTOR_HAS_ANIM_SET(Local_105[StackVal59], "liars_dice_ambient") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					SET_ACTION_NODE_FOR_ACTOR(Local_105[StackVal59], "liars_dice/fake_liars_dice/check_lift");
					SET_AUTO_CONVERSATION_LOOK(Local_105[StackVal59], 1);
					TASK_PRIORITY_SET(Local_105[StackVal59], 2);
				}
				Function_254(GET_GRINGO_FROM_OBJECT(StackVal));
				iVar0++;
			}
			Function_253(&Local_105);
			iLocal_2 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "liars_dice/stand"))
			{
				iLocal_2 = 9;
			}
			break;
		
		case 0x00000009:
			if (iLocal_9 == 0)
			{
				iLocal_3 = 1;
			}
			else if (iLocal_9 == 1)
			{
				bLocal_4 = true;
			}
			else if (iLocal_9 == 2)
			{
				Function_1();
			}
			break;
	}
	return;
}

void Function_253(int iParam0) //Position: 0xADD4 / 44500
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = StackVal;
			if (IS_OBJECT_VALID(iParam0[iVar159]->f_88))
			{
				DESTROY_OBJECT(iParam0[iVar159]->f_88);
			}
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (IS_OBJECT_VALID((*iParam0[iVar159] + 36)[iVar2]))
				{
					DESTROY_OBJECT((*iParam0[iVar159] + 36)[iVar2]);
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_254(bool bParam0) //Position: 0xAE51 / 44625
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (bVar1 >= 4294967295)
	{
		bVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			SHOW_PHYSINST(bVar3);
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
	}
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0xAEC0 / 44736
{
	(*iParam0 + 1420)[iParam0[iParam159]->f_643] = 0;
	(iParam0 + 1420[iParam0[iParam159]->f_643])->f_4 = 4294967295;
	if (IS_ACTOR_VALID((*iParam0)[iParam159]))
	{
		GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(StackVal));
		if (iParam0[iParam159]->f_60 == 3)
		{
			DESTROY_ACTOR((*iParam0)[iParam159]);
		}
		else
		{
			TASK_CLEAR((*iParam0)[iParam159]);
			if (!IS_ACTOR_PLAYER((*iParam0)[iParam159]))
			{
				TASK_FLEE_ACTOR((*iParam0)[iParam159], GET_PLAYER_ACTOR(0), 100.0f, -1.0f, 0, 0, 0);
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS((*iParam0)[iParam159], 1);
			ACTOR_END_FORCE_HOLSTER((*iParam0)[iParam159]);
		}
	}
	(*iParam0)[iParam159] = "";
	iParam0[iParam159]->f_64 = 4294967295;
	Function_256(iParam0[iParam159] + 36, 5);
	DESTROY_OBJECT(iParam0[iParam159]->f_88);
	iParam0[iParam159]->f_68 = 1000;
	strcpy(iParam0[iParam159] + 4, "", 32);
	iParam0->f_1496 = (iParam0->f_1496 - 1);
	return;
}

void Function_256(var uParam0, int iParam1) //Position: 0xAFB0 / 44976
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_OBJECT_VALID((*uParam0)[iVar0]))
		{
			DESTROY_OBJECT((*uParam0)[iVar0]);
			(*uParam0)[iVar0] = "";
		}
		iVar0++;
	}
	return;
}

int Function_257(int iParam0) //Position: 0xAFE6 / 45030
{
	return Function_258(Local_105.f_1504, iParam0);
}

int Function_258(int iParam0, int iParam1) //Position: 0xAFF6 / 45046
{
	int iVar0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
		SCRIPT_BREAKPOINT("Invalid Seat Index!");
	}
	iVar0 = StackVal;
	if (iParam1 && (iVar0 > 0 || iVar0 <= 6))
	{
		SCRIPT_BREAKPOINT("Was going to return invalid PlayerIndex in PLAYER_IN_SEAT");
	}
	return iVar0;
}

void Function_259(var uParam0, bool bParam1) //Position: 0xB07E / 45182
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = 0,6f;
		fVar13 = 1.0f;
		fVar14 = 1,3f;
		fVar15 = 0,4f;
		fVar16 = 1,2f;
		fVar17 = -0,4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

bool Function_260(int iParam0, int iParam1) //Position: 0xB1F1 / 45553
{
	int iVar0;
	
	if (!Function_239(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_32(iVar0) != iParam0 && Function_30(iVar0) != iParam1)
		{
			if (Function_99(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_261() //Position: 0xB236 / 45622
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<16> Var4;
	bool bVar20;
	var uVar21;
	bool bVar33;
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	bool bVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	bool bVar51;
	bool bVar52;
	
	if (bLocal_46)
	{
		Function_251(&iLocal_29, (Function_247(&iLocal_29) + 0,2f));
	}
	bVar2 = "";
	if ((*&Local_105 + 1420)[Local_105.f_15003])
	{
		bVar2 = Local_105[Function_376(1)59];
	}
	else if (Function_203())
	{
		if (!iLocal_48)
		{
			iLocal_48 = 1;
			Function_375(27, 1);
			Function_205();
		}
	}
	Function_372(&Local_105);
	if (!Function_203())
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			if ((iLocal_101 == 0 && iLocal_101 == 10) && iLocal_101 == 15)
			{
				if (IS_BUTTON_PRESSED(Function_371(), 3, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_102 = iLocal_101;
					Function_375(26, 0);
					bLocal_44 = true;
				}
			}
		}
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		if ((IS_BUTTON_PRESSED(Function_371(), 6, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) && iLocal_101 == 10)
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			Function_370(&uLocal_61);
		}
	}
	switch (iLocal_101)
	{
		case 0x0000001A:
			if (HUD_IS_FADED())
			{
				iVar0 = 0;
				while (iVar0 <= Local_105.f_1420)
				{
					if ((*&Local_105 + 1420)[iVar03])
					{
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Local_105[StackVal59]);
					}
					iVar0++;
				}
				Function_16();
				Function_369();
				Function_375(iLocal_102, 0);
			}
			break;
		
		case 0x00000000:
			iLocal_104 = 0;
			if (bLocal_44)
			{
				Function_16();
				Function_369();
				SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_257(1)59], "liars_dice/idle");
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_44 = false;
			}
			if (Function_364(&uLocal_61, 0))
			{
				Function_148("LiarsDice_AnteHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			AUDIO_RESET_SPEECH_HISTORY();
			UI_EXIT("Dice");
			UI_ENTER("Scores");
			UI_EXIT("nScores.s1");
			UI_EXIT("nScores.s2");
			UI_LABEL_SET_TEXT("nScores.s0", "LiarsDice_CashLabel");
			UI_LABEL_SET_VALUE("nScores.s0", Function_363());
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_AnteOrQuitValue", Function_361(Local_68.f_48), "", "", "", 0, 2, 0, 0, 0);
			}
			iLocal_48 = 0;
			if (IS_BUTTON_PRESSED(Function_371(), 7, 1, 0))
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Function_360(Local_68.f_48, 0);
				UI_LABEL_SET_VALUE("nScores.s0", Function_363());
				SAY_SINGLE_LINE_CONTEXT(Local_105[Function_257(1)59], 479, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				Function_375(1, 0);
				if (Function_203())
				{
					Function_358(&bLocal_49);
				}
			}
			break;
		
		case 0x0000000D:
			Function_357(bLocal_103);
			Function_375(14, 0);
			break;
		
		case 0x0000000E:
			memcpy(&uVar21, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72("ACKNOWLEDGE: ", I2STR(bLocal_103)), 6);
			if (Function_343(bLocal_103, 0, 0x3f800000))
			{
				Function_375(bLocal_103, 0);
			}
			break;
		
		case 0x00000001:
			iLocal_104 = 3;
			if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_44)
			{
				Function_16();
				Function_375(2, 1);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING(bVar2, "liars_dice/idle") || bLocal_44)
			{
				UI_EXIT("Scores");
				Function_375(3, 1);
			}
			break;
		
		case 0x00000003:
			Function_358(&bLocal_49);
			Local_105.f_1512 = 0;
			Local_105.f_1516 = 1;
			UI_LABEL_SET_VALUE("NumberOfDice", false);
			UI_LABEL_SET_VALUE("DiceNumber", true);
			Local_105.f_1520 = 4294967295;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					if (Local_105[Function_258(iVar0, 1)59].f_60 == 3)
					{
						Function_255(&Local_105, Function_258(iVar0, 1));
					}
					else
					{
						Local_105[Function_258(iVar0, 1)59].f_96 = 1;
						Local_105[Function_258(iVar0, 1)59].f_100 = 1;
					}
				}
				iVar0++;
			}
			Function_375(4, 0);
			break;
		
		case 0x00000004:
			iLocal_47 = 0;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					iVar3 = Function_258(iVar0, 1);
					if (Function_342(&Local_105, iVar3))
					{
						if (!Function_203() || iVar3 != Function_257(1))
						{
							Function_340(&Local_105, iVar3);
						}
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/cup_shuffle_pre");
					}
					else if (iVar3 == Function_257(1))
					{
						Function_338(&vLocal_519[Function_339(&Local_105, Function_257(1))9] + 28);
					}
				}
				iVar0++;
			}
			if (Function_364(&uLocal_61, 1))
			{
				Function_148("LiarsDice_ShuffleHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_375(5, 0);
			break;
		
		case 0x00000005:
			if (!Function_203())
			{
				Function_375(6, 0);
			}
			else if (Function_337())
			{
				Function_335();
				Function_375(6, 1);
			}
			break;
		
		case 0x00000006:
			Function_334(&Local_105);
			if (Function_333(&Local_105) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_375(7, 1);
			}
			else if (bLocal_44)
			{
				Function_331(&Local_105);
				Function_375(7, 1);
			}
			break;
		
		case 0x00000007:
			if (Function_203())
			{
				NET_OBJECT_REPLICATION_MODE_START(17, 0);
			}
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					iVar3 = Function_258(iVar0, 1);
					bVar1 = false;
					while (bVar1 <= Function_330(&Local_105, iVar3))
					{
						if (!IS_OBJECT_VALID(bVar33))
						{
							bVar33 = CREATE_OBJECT_LOCATOR(Local_105[iVar359].f_88, Function_69());
						}
						switch (bVar1)
						{
							case 0x00000000:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_105[iVar359].f_88, "die01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000001:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_105[iVar359].f_88, "die02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000002:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_105[iVar359].f_88, "die03", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000003:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_105[iVar359].f_88, "die04", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000004:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_105[iVar359].f_88, "die05", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000005:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_105[iVar359].f_88, "die06", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
						}
						GET_OBJECT_POSITION(bVar33, &vVar34);
						GET_OBJECT_ORIENTATION(bVar33, &vVar37);
						if (Function_203() && iVar3 == Function_257(1))
						{
						}
						else
						{
							(*&Local_105[iVar359] + 36)[bVar1] = CREATE_PROP_IN_LAYOUT(bLocal_26, Function_69(), "$/fragments/p_gen_dice01x", vVar34, vVar37, 0);
						}
						Function_327(Function_329(&Local_105, iVar3, bVar1), &Local_105[iVar359] + 36[bVar1]);
						bVar1++;
					}
				}
				iVar0++;
			}
			if (Function_203())
			{
				NET_OBJECT_REPLICATION_MODE_END(17);
			}
			REMOVE_ALL_OBJECT_ATTACHMENTS(Local_105[Function_376(1)59].f_88);
			Function_375(8, 0);
			break;
		
		case 0x00000008:
			iVar3 = Function_376(1);
			iVar40 = Local_105[iVar359].f_60;
			if (uLocal_45 && iVar40 == 2)
			{
				iVar40 = 1;
			}
			iLocal_104 = 1;
			if (Function_342(&Local_105, iVar3))
			{
				switch (iVar40)
				{
					case 0x00000001:
						if (GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1) >= 0,1f && Local_105.f_1524 != 0.0f)
						{
							if (iLocal_28 || bLocal_44)
							{
								Function_325(&bLocal_49, bVar2, Local_105[Function_257(1)59], 1);
							}
							else
							{
								Function_325(&bLocal_49, bVar2, Local_105[Function_257(1)59], 0);
							}
						}
						Local_105[iVar359].f_100 = Local_105.f_1516;
						Local_105[iVar359].f_96 = Local_105.f_1512;
						if (Function_203())
						{
							Function_324();
						}
						Function_250(&iLocal_32);
						Function_250(&iLocal_29);
						Function_375(10, 0);
						break;
					
					case 0x00000000:
						if (GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1) >= 0,1f && Local_105.f_1524 != 0.0f)
						{
							if (iLocal_28 || bLocal_44)
							{
								Function_325(&bLocal_49, bVar2, Local_105[Function_257(1)59], 1);
							}
							else
							{
								Function_325(&bLocal_49, bVar2, Local_105[Function_257(1)59], 0);
							}
						}
						Function_375(11, 0);
						break;
					
					case 0x00000002:
						if (GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1) >= 0,1f && Local_105.f_1524 != 0.0f)
						{
							if (iLocal_28)
							{
								Function_325(&bLocal_49, bVar2, Local_105[Function_257(1)59], 1);
							}
							else
							{
								Function_325(&bLocal_49, bVar2, Local_105[Function_257(1)59], 0);
							}
						}
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(Function_376(1), &Local_105) };
						PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
						Function_375(12, 0);
						break;
					
					case 0x00000003:
						NET_LOG(false, "nLiarsDice", "Encountered Linkdead player", 0, 0, false, 0);
						Function_375(12, 0);
						break;
				}
			}
			else
			{
				Function_375(9, 0);
			}
			Function_319(&Local_105);
			break;
		
		case 0x00000009:
			Local_105.f_1500 = Function_318(&Local_105 + 1420, Local_105.f_1500);
			Function_205();
			Function_375(8, 0);
			Function_319(&Local_105);
			break;
		
		case 0x0000000C:
			iVar3 = Function_376(1);
			Function_317(&Local_105);
			if (Local_105[iVar359].f_60 == 3)
			{
				if (Function_316(&Local_105))
				{
					Function_315(&Local_105, &vLocal_681 + 8, &vLocal_681 + 4);
					vLocal_681.x = 6;
				}
				else
				{
					vLocal_681.x = 5;
				}
			}
			if (vLocal_681.x != 0)
			{
				switch (vLocal_681.x)
				{
					case 0x00000001:
					case 0x00000006:
						if (Function_364(&uLocal_61, 4))
						{
							Function_148("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						Local_105[iVar359].f_96 = vLocal_681.z;
						Local_105[iVar359].f_100 = vLocal_681.y;
						Function_314(&Local_105, iVar3, vLocal_681.x != 6);
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/verbal_bid");
						Function_375(16, 0);
						break;
					
					case 0x00000002:
					case 0x00000005:
						if (Function_364(&uLocal_61, 5))
						{
							Function_148("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						iLocal_47 = 0;
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iVar3, &Local_105) };
						if (vLocal_681.x == 2)
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_AutoCallOutBluff", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
						}
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/verbal_callout");
						Function_375(17, 0);
						break;
					
					case 0x00000003:
						if (Function_364(&uLocal_61, 6))
						{
							Function_148("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iVar3, &Local_105) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Call_SpotOn", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
						iLocal_47 = 1;
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/verbal_bid");
						Function_375(17, 0);
						break;
					
					default:
						break;
				}
				Function_250(&iLocal_29);
				vLocal_681.x = 0;
			}
			Function_319(&Local_105);
			break;
		
		case 0x0000000A:
			Function_312();
			iLocal_104 = 2;
			if (bLocal_44)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_44 = false;
			}
			bVar20 = (Local_105.f_1512 != Function_311(&Local_105) && Local_105.f_1516 != 6);
			if (bVar20 && Function_364(&uLocal_61, 9))
			{
				Function_148("LiarsDice_MaxBidHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_364(&uLocal_61, 2))
			{
				Function_148("LiarsDice_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_310(&Local_105, Function_376(1)))
			{
				if (Function_364(&uLocal_61, 6))
				{
					Function_148("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			if (!Function_203())
			{
				bVar41 = RAND_INT_RANGE(false, true);
				switch (bVar41)
				{
					case 0x00000000:
						iVar42 = Function_318(&Local_105 + 1420, Local_105.f_1500);
						break;
					
					case 0x00000001:
						iVar42 = Function_309(&Local_105 + 1420, Local_105.f_1500);
						break;
				}
				if (!iVar42 != 4294967295 && !iVar42 != Local_105.f_1500)
				{
					bVar43 = RAND_INT_RANGE(false, (100 * CEIL(Function_247(&iLocal_32))));
					if (bVar43 > 30 && Function_247(&iLocal_29) < 4.0f)
					{
						if (IS_ACTION_NODE_PLAYING(Local_105[Function_258(iVar42, 1)59], "liars_dice/cup_idle"))
						{
							if (!bLocal_44)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_258(iVar42, 1)59], "liars_dice/check_lift");
							}
							Function_250(&iLocal_29);
						}
					}
					else if (Function_247(&iLocal_29) < 1.0f)
					{
						if (IS_ACTION_NODE_PLAYING(Local_105[Function_258(iVar42, 1)59], "liars_dice/check_idle"))
						{
							if (!bLocal_44)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_258(iVar42, 1)59], "liars_dice/check_close");
							}
							Function_250(&iLocal_29);
						}
					}
				}
			}
			if (!bVar20)
			{
				Function_306(&Local_105);
				Function_317(&Local_105);
			}
			else
			{
				Function_305(&Local_105);
			}
			if (!HUD_IS_SHOWING_HELP_TEXT() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_247(&iLocal_35) < 8.0f)
				{
					if (Local_105.f_1512 == 0)
					{
						Function_304("LiarsDice_EnterFirstBid", -1.0f, 1, 2, 0, 0, 0);
					}
					else if (bVar20)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_MaxBid", Function_361(Local_105.f_1512), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else if (Local_105.f_1512 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid_Single", Function_361(Local_105.f_1512), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid", Function_361(Local_105.f_1512), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			Function_299(&Local_105, bVar20);
			if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_49) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_49) != 1)
			{
				Function_298(&bLocal_49, &Local_105, Function_257(1), 0);
			}
			if (GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1) < 0,1f)
			{
				if (!IS_ACTION_NODE_PLAYING(bVar2, "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bVar2, "liars_dice/check_sweep");
					fLocal_57 = 0.0f;
					fLocal_60 = -1.0f;
				}
				Function_297(&bLocal_49, &Local_105, Function_376(1), 1);
				Function_375(15, 0);
				Function_296(1);
			}
			else
			{
				Function_296(0);
			}
			break;
		
		case 0x0000000F:
			Function_312();
			if ((GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1) != 0.0f && Local_105.f_1524 != 0.0f) || bLocal_44)
			{
				Function_375(10, 0);
				Function_295(&bLocal_49, &Local_105, Function_376(1), 1, 0.0f);
				Function_294();
				SET_ACTION_NODE_FOR_ACTOR(bVar2, "liars_dice/cup_idle");
			}
			else
			{
				Function_297(&bLocal_49, &Local_105, Function_376(1), 1);
			}
			Function_293(&Local_105, bVar2);
			bVar20 = (Local_105.f_1512 != Function_311(&Local_105) && Local_105.f_1516 != 6);
			if (!bVar20)
			{
				Function_306(&Local_105);
				Function_317(&Local_105);
			}
			else
			{
				Function_305(&Local_105);
			}
			Function_299(&Local_105, bVar20);
			break;
		
		case 0x00000010:
			if ((Function_247(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				Function_16();
				Function_375(9, 1);
			}
			else
			{
				Function_317(&Local_105);
			}
			Function_319(&Local_105);
			break;
		
		case 0x0000000B:
			Function_250(&iLocal_29);
			if (Function_290(&Local_105, Function_376(1)))
			{
				if (Function_364(&uLocal_61, 4))
				{
					Function_148("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_375(16, 0);
			}
			else
			{
				if (Function_364(&uLocal_61, 5))
				{
					Function_148("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_375(17, 0);
			}
			Function_319(&Local_105);
			break;
		
		case 0x00000011:
			iLocal_104 = 3;
			if ((Function_247(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_364(&uLocal_61, 7))
				{
					Function_148("LiarsDice_RevealHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				if (IS_ACTION_NODE_PLAYING(Local_105[Function_257(1)59], "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_257(1)59], "liars_dice/cup_idle");
				}
				Function_205();
				Function_358(&bLocal_49);
				if (!bLocal_44)
				{
					iVar0 = 0;
					while (iVar0 <= 6)
					{
						if ((*&Local_105 + 1420)[iVar03])
						{
							if (Function_342(&Local_105, Function_258(iVar0, 1)))
							{
								if (Function_203() && Local_105[Function_258(iVar0, 1)59].f_60 == 1)
								{
									Function_289(Function_258(iVar0, 1));
								}
								SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_258(iVar0, 1)59], "liars_dice/cup_reveal");
							}
						}
						iVar0++;
					}
				}
				Function_250(&iLocal_29);
				iLocal_54 = Local_105.f_1500;
				bLocal_63 = false;
				Function_375(18, 1);
			}
			else
			{
				Function_305(&Local_105);
				Function_319(&Local_105);
			}
			break;
		
		case 0x00000012:
			if (((IS_ACTION_NODE_PLAYING(Local_105[Function_376(1)59], "liars_dice/idle") && Function_247(&iLocal_29) < 2.0f) && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				Function_288(&bLocal_49, &Local_105, Function_376(1), 1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				bVar44 = Function_287(&(vLocal_519[Function_339(&Local_105, Function_376(1))9]), Local_105.f_1516);
				bLocal_63 = (bLocal_63 + bVar44);
				if (Function_376(1) == Function_257(1))
				{
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_None", Function_285(), Function_303(Local_105.f_1516), I2STR(bLocal_63), 0, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_Single", Function_285(), Function_361(bVar44), Function_303(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show", Function_285(), Function_361(bVar44), Function_303(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(Function_376(1), &Local_105) };
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_None", &Var4, Function_303(Local_105.f_1516), I2STR(bLocal_63), 0, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_Single", &Var4, Function_361(bVar44), Function_303(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show", &Var4, Function_361(bVar44), Function_303(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
				}
				Function_250(&iLocal_29);
				Function_375(19, 0);
			}
			else
			{
				Function_305(&Local_105);
			}
			break;
		
		case 0x00000013:
			if ((Function_247(&iLocal_29) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				Local_105.f_1500 = Function_284(&Local_105, Local_105.f_1500);
				if (Local_105.f_1500 != iLocal_54 || (bLocal_63 <= Local_105.f_1512 && !iLocal_47))
				{
					Local_105.f_1500 = iLocal_54;
					Function_375(20, 1);
				}
				else
				{
					Function_375(18, 0);
				}
			}
			else
			{
				Function_305(&Local_105);
			}
			break;
		
		case 0x00000014:
			Function_358(&bLocal_49);
			bVar45 = Function_283(&Local_105, Local_105.f_1516);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (iLocal_47)
			{
				if (bVar45 == Local_105.f_1512)
				{
					iVar46 = Local_105[Function_376(1)59].f_64;
					iLocal_55 = StackVal;
					if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn_Single", Function_361(bVar45), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn", Function_361(bVar45), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_250(&iLocal_29);
					Function_375(21, 1);
				}
				else
				{
					iLocal_55 = Local_105.f_1520;
					if (bVar45 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_None", Function_303(Local_105.f_1516), false, 0, 0, 0, 2, 0, 0, 0);
					}
					else if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_Single", Function_361(bVar45), Function_303(Local_105.f_1516), 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn", Function_361(bVar45), Function_303(Local_105.f_1516), 0, 0, 0, 2, 0, 0, 0);
					}
					Function_250(&iLocal_29);
					Function_375(22, 1);
				}
			}
			else
			{
				iLocal_55 = Local_105.f_1520;
				if (bVar45 <= Local_105.f_1512)
				{
					if (bVar45 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_None", Function_303(Local_105.f_1516), "", "", "", 0, 2, 0, 0, 0);
					}
					else if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_Single", Function_361(bVar45), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong", Function_361(bVar45), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_250(&iLocal_29);
					Function_375(21, 1);
				}
				else
				{
					if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight_Single", Function_361(Local_105.f_1512), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight", Function_361(Local_105.f_1512), Function_303(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_250(&iLocal_29);
					Function_375(22, 1);
				}
			}
			break;
		
		case 0x00000015:
			if ((Function_247(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_364(&uLocal_61, 8))
				{
					Function_148("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iLocal_55, &Local_105) };
				if (iLocal_47)
				{
					if (Function_330(&Local_105, iLocal_55) >= 1)
					{
						if (iLocal_55 == Function_257(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_55 == Function_257(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
					}
				}
				else if (Function_330(&Local_105, iLocal_55) >= 1)
				{
					if (iLocal_55 == Function_257(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_55 == Function_257(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
				}
				Function_375(23, 0);
			}
			else
			{
				Function_305(&Local_105);
			}
			break;
		
		case 0x00000016:
			if ((Function_247(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_364(&uLocal_61, 8))
				{
					Function_148("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				iLocal_55 = Function_376(1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iLocal_55, &Local_105) };
				if (iLocal_47)
				{
					if (Function_330(&Local_105, Function_376(1)) >= 1)
					{
						if (iLocal_55 == Function_257(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_55 == Function_257(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
					}
					iLocal_47 = 0;
				}
				else if (Function_330(&Local_105, Function_376(1)) >= 1)
				{
					if (iLocal_55 == Function_257(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_55 == Function_257(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
				}
				Function_375(23, 0);
			}
			else
			{
				Function_305(&Local_105);
			}
			break;
		
		case 0x00000017:
			Function_282(&bLocal_49, Local_105[iLocal_5559]);
			Function_280(&Local_105, iLocal_55);
			if (Function_330(&Local_105, Function_376(1)) >= 0)
			{
				if (!HUD_IS_FADED())
				{
					if (iLocal_55 == Function_257(1))
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 480, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_279())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 277, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[Function_257(1)59], 481, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			else if (iLocal_55 == Function_257(1))
			{
				if (!HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 482, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			else
			{
				if (!HUD_IS_FADED())
				{
					if (Function_279())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 279, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[Function_257(1)59], 483, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_241(50) && Local_68 != Function_236(Global_30668[1], 7, 4))
				{
					Function_234(64, 1, 0);
				}
			}
			Function_375(25, 0);
			break;
		
		case 0x00000019:
			if (!Function_203() || Function_277(Function_339(&Local_105, iLocal_55)))
			{
				Function_335();
				Function_250(&iLocal_29);
				iLocal_56 = Function_330(&Local_105, iLocal_55);
				bLocal_517 = ATTACH_OBJECTS((*&Local_105[iLocal_5559] + 36)[iLocal_56], GET_OBJECT_FROM_ACTOR(Local_105[iLocal_5559]), "hip_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				SET_ACTION_NODE_FOR_ACTOR(Local_105[iLocal_5559], "liars_dice/dice_toss");
				Function_375(24, 0);
			}
			break;
		
		case 0x00000018:
			if (IS_ACTION_NODE_PLAYING(Local_105[iLocal_5559], "liars_dice/idle") || bLocal_44)
			{
				if (IS_ATTACHMENT_VALID(bLocal_517))
				{
					REMOVE_OBJECT_ATTACHMENT(bLocal_517);
					SET_OBJECT_POSITION((*&Local_105[iLocal_5559] + 36)[iLocal_56], *(&Local_105[iLocal_5559] + 104[iLocal_563]));
					SET_OBJECT_ORIENTATION((*&Local_105[iLocal_5559] + 36)[iLocal_56], *(&Local_105[iLocal_5559] + 168[iLocal_563]));
					bVar47 = RAND_INT_RANGE(true, 6);
					Function_327(bVar47, &Local_105[iLocal_5559] + 36[iLocal_56]);
				}
				if (iLocal_47)
				{
					if (iLocal_55 == Local_105.f_1520)
					{
						iLocal_47 = 0;
					}
					else
					{
						iVar48 = Local_105[iLocal_5559].f_64;
						iVar49 = iLocal_55;
						iLocal_55 = Function_258(Function_284(&Local_105, iVar48), 1);
						Function_375(21, 0);
					}
				}
				else if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_44)
				{
					if (!Function_203())
					{
						if (Function_273(&(Local_105[Function_257(1)59])) && Function_272(&Local_105) < 1)
						{
							Local_105.f_1500 = Local_105[iLocal_5559].f_64;
							Function_375(3, 0);
						}
						else
						{
							Function_375(27, 0);
						}
					}
					else if (Function_272(&Local_105) >= 1)
					{
						Local_105.f_1500 = Local_105[iLocal_5559].f_64;
						Function_375(3, 1);
					}
					else
					{
						Function_375(27, 1);
					}
				}
			}
			break;
		
		case 0x0000001B:
			if (Function_272(&Local_105) == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if ((*&Local_105 + 1420)[iVar03])
					{
						if (Function_342(&Local_105, Function_258(iVar0, 1)))
						{
							iVar50 = Function_258(iVar0, 1);
						}
					}
					iVar0++;
				}
				Function_282(&bLocal_49, Local_105[iVar5059]);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iVar50, &Local_105) };
				if (iVar50 == Function_257(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner", &Var4, false, 0, 0, 0, 2, 0, 0, 0);
				}
				if (!HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(Local_105[iVar5059], 278, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (!Function_203())
				{
					if (iVar50 == Function_257(1))
					{
						bLocal_27 = true;
						Function_129((Local_68.f_48 * Function_271(&Local_105)), 1);
						PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
						bVar51 = Function_330(&Local_105, Function_257(1));
						PRINTSTRING("Player has won and he has a die count of ");
						PRINTINT(bVar51);
						PRINTNL();
						if (bVar51 == 5)
						{
							Function_101(431, 1, 0, 0);
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(10))
							{
								AWARD_ACHIEVEMENT(10);
							}
						}
						if (!HUD_IS_FADED())
						{
							SAY_SINGLE_LINE_CONTEXT(Local_105[Function_257(1)59], 484, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						Function_101(429, ((Local_68.f_48 * Function_271(&Local_105)) - Local_68.f_48), 0, 0);
						Function_101(450, ((Local_68.f_48 * Function_271(&Local_105)) - Local_68.f_48), 0, 0);
						if ((Function_82(597) + Function_82(450)) >= 10000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
							{
								AWARD_ACHIEVEMENT(24);
							}
						}
					}
					else
					{
						Function_101(430, 1, 0, 0);
						Function_127(429, Local_68.f_48, 0);
						Function_127(450, Local_68.f_48, 0);
						bVar52 = DECOR_GET_INT(Local_105[iVar5059], "iAdditionalMoney");
						DECOR_SET_INT(Local_105[iVar5059], "iAdditionalMoney", (bVar52 + (Local_68.f_48 * Function_270(&Local_105))));
					}
				}
				Function_250(&iLocal_29);
			}
			else
			{
				Function_101(430, 1, 0, 0);
				Function_127(429, Local_68.f_48, 0);
				Function_127(450, Local_68.f_48, 0);
				Local_105.f_1508 = 0;
			}
			Function_269(&Local_105);
			Function_375(29, 1);
			break;
		
		case 0x0000001D:
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					Function_268(&Local_105, Function_258(iVar0, 1), 5);
				}
				iVar0++;
			}
			Function_375(30, 0);
			break;
		
		case 0x0000001E:
			if (!Function_203() || Function_337())
			{
				Function_335();
				Function_375(28, 0);
			}
			break;
		
		case 0x0000001C:
			if ((Function_247(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_203())
				{
					Function_209(0);
				}
				else
				{
					Function_282(&bLocal_49, Function_201());
					Local_105.f_1500 = Local_105.f_1504;
					Function_375(0, 1);
				}
			}
			break;
		
		case 0x0000001F:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_201()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_201()), "bQuitMinigame"))
				{
					if (bLocal_27)
					{
						Function_209(0);
					}
					else
					{
						Function_209(1);
					}
				}
				else
				{
					Function_375(iLocal_102, 0);
				}
				UI_EXIT("Liarsdice_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_201()), "bQuitMinigame");
			}
			break;
	}
	Function_267(&Local_105);
	Function_266(&Local_105, Function_257(1));
	if (!Function_203())
	{
		if ((IS_BUTTON_RELEASED(Function_371(), 5, 1, true) && !HUD_IS_FADING()) && !HUD_IS_FADED())
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_201()), "bQuitMinigame"))
			{
				UI_ENTER("Liarsdice_Quit_Confirmation_Popup");
			}
			iLocal_102 = iLocal_101;
			iLocal_101 = 31;
		}
	}
	Function_205();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_104)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_262(2, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_262(1, 3, "LiarsDice_Ante", 1, 0, 0, 0, 0);
				Function_262(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_262(4, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_262(3, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
				Function_262(1, 6, "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_262(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_262(3, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_262(1, 6, "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_262(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				if (!IS_BUTTON_DOWN(Function_371(), 1, 1, false))
				{
					Function_262(8, 17, "LiarsDice_LookAround", 1, 0, 0, 0, 0);
				}
				Function_262(7, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
				if (!bVar20)
				{
					Function_262(5, 12, "LiarsDice_DieAmount", 1, 0, 0, 0, 0);
					Function_262(4, 16, "LiarsDice_DieType", 1, 0, 0, 0, 0);
				}
				if (Local_105.f_1520 != 4294967295)
				{
					Function_262(3, 3, "LiarsDice_CallBluff", 1, 0, 0, 0, 0);
					Function_262(2, 4, "LiarsDice_SpotOn", 1, 0, 0, 0, 0);
				}
				if (!bVar20)
				{
					Function_262(1, 1, "LiarsDice_Bid", 1, 0, 0, 0, 0);
				}
				Function_262(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			}
	}
	return;
}

int Function_262(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xD77E / 55166
{
	if (!Function_265(iParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_264(iParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_263(iParam0, iParam2);
}

int Function_263(var uParam0, int iParam1) //Position: 0xD7B8 / 55224
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xD7C6 / 55238
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_265(var uParam0, int iParam1) //Position: 0xD800 / 55296
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_266(var uParam0, int iParam1) //Position: 0xD80E / 55310
{
	if (iParam1 >= 4294967295)
	{
		SET_CURRENT_MINIGAME_INT("_pxxChipsAmount", uParam0[iParam159]->f_68);
	}
	return;
}

void Function_267(int iParam0) //Position: 0xD838 / 55352
{
	SET_CURRENT_MINIGAME_INT("_pxxPotAmount", iParam0->f_1508);
	return;
}

void Function_268(int iParam0, int iParam1, int iParam2) //Position: 0xD857 / 55383
{
	int iVar0;
	
	if (!Function_203() || iParam0[iParam159]->f_60 != 1)
	{
		iVar0 = Function_339(iParam0, iParam1);
		vLocal_519[iVar09].f_24 = iParam2;
		Function_338(&vLocal_519[iVar09] + 28);
	}
	return;
}

void Function_269(int iParam0) //Position: 0xD88F / 55439
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1420)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			Function_256(iParam0[StackVal59] + 36, 5);
		}
		iVar0++;
	}
	return;
}

int Function_270(int iParam0) //Position: 0xD8CC / 55500
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_273(iParam0[Function_258(iVar0, 1)59]))
			{
				if ((iParam0[Function_258(iVar0, 1)59])->f_68 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_271(int iParam0) //Position: 0xD91B / 55579
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_272(int iParam0) //Position: 0xD94A / 55626
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_342(iParam0, Function_258(iVar0, 1)))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_273(int iParam0) //Position: 0xD987 / 55687
{
	return Function_274(iParam0) < 0;
}

int Function_274(int iParam0) //Position: 0xD994 / 55700
{
	return vLocal_519[Function_275(iParam0)9].f_24;
}

int Function_275(int iParam0) //Position: 0xD9A6 / 55718
{
	if (Function_203())
	{
		return Function_276(*iParam0);
	}
	return iParam0->f_64;
}

int Function_276(bool bParam0) //Position: 0xD9BD / 55741
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		return GET_LOCAL_SLOT();
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return GET_ACTOR_SLOT(bParam0);
	}
	if (DECOR_GET_INT_VERBOSE(bParam0, "FakeSlot", &iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

bool Function_277(int iParam0) //Position: 0xD9FF / 55807
{
	return Function_278(&(uLocal_664[iParam0]), &vLocal_519[iParam09] + 28);
}

bool Function_278(var uParam0, bool bParam1) //Position: 0xDA18 / 55832
{
	return *uParam0 == *bParam1;
}

bool Function_279() //Position: 0xDA25 / 55845
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

void Function_280(var uParam0, int iParam1) //Position: 0xDA40 / 55872
{
	if (uParam0[iParam159]->f_60 == 2)
	{
		return;
	}
	Function_281(uParam0, iParam1, 4294967295);
	return;
}

void Function_281(int iParam0, int iParam1, int iParam2) //Position: 0xDA5B / 55899
{
	int iVar0;
	
	iVar0 = Function_339(iParam0, iParam1);
	vLocal_519[iVar09].f_24 = (vLocal_519[iVar09].f_24 + iParam2);
	Function_338(&vLocal_519[iVar09] + 28);
	return;
}

void Function_282(bool bParam0, bool bParam1) //Position: 0xDA8B / 55947
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(-1,1f, -1,1f, -1,1f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1,1f);
	vVar9 = { StackVal, StackVal, vVar0 };
	vVar9.f_4 = (vVar9.y + 1,05f);
	SET_CAMERA_POSITION(*bParam0, vVar6);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar9, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 1;
	return;
}

var Function_283(int iParam0, int iParam1) //Position: 0xDB16 / 56086
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = (iVar1 + Function_287(&(vLocal_519[Function_339(iParam0, Function_258(iVar0, 1))9]), iParam1));
		}
		iVar0++;
	}
	return iVar1;
}

int Function_284(int iParam0, int iParam1) //Position: 0xDB59 / 56153
{
	int iVar0;
	
	iVar0 = Function_318(iParam0 + 1420, iParam1);
	while (!Function_342(iParam0, Function_258(iVar0, 1)) && iVar0 == iParam1)
	{
		iVar0 = Function_318(iParam0 + 1420, iVar0);
	}
	if (iParam1 == iVar0)
	{
		return 4294967295;
	}
	return iVar0;
}

var Function_285() //Position: 0xDB9D / 56221
{
	if (!Function_203())
	{
		UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	}
	else
	{
		UI_SET_STRING("Generic_Dbuffer32_0", Function_286(GET_LOCAL_SLOT(), 1));
	}
	return "Generic_DBuffer32_0";
}

var Function_286(var uParam0, int iParam1) //Position: 0xDC09 / 56329
{
	return NET_GET_GAMER_HEX_COLOR(uParam0, iParam1);
}

bool Function_287(var uParam0, int iParam1) //Position: 0xDC16 / 56342
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0->f_24)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_288(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDC47 / 56391
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;
	
	iVar9 = iParam1[iParam259]->f_64;
	GET_OBJECT_POSITION(StackVal, &vVar0);
	GET_OBJECT_AXIS(StackVal, &vVar3, 2);
	GET_OBJECT_AXIS(StackVal, &vVar6, 0);
	if (ACTOR_HAS_ANIM_SET((*iParam1)[iParam259], "liars_dice"))
	{
		fVar10 = -0,26f;
		fVar11 = 1.0f;
		fVar12 = 0,83f;
		fVar13 = 0,08f;
	}
	else if (ACTOR_HAS_ANIM_SET((*iParam1)[iParam259], "liars_dice_gped"))
	{
		fVar10 = -0,26f;
		fVar11 = 1.0f;
		fVar12 = 0,63f;
		fVar13 = 0,07f;
	}
	else if (ACTOR_HAS_ANIM_SET((*iParam1)[iParam259], "liars_dice_hillb"))
	{
		fVar10 = -0,13f;
		fVar11 = 1.0f;
		fVar12 = 0,93f;
		fVar13 = 0,06f;
	}
	else
	{
		fVar10 = -0,26f;
		fVar11 = 1.0f;
		fVar12 = 0,83f;
		fVar13 = 0,08f;
	}
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
	vVar14.f_4 = (vVar14.y + fVar11);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar14, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal) };
	GET_OBJECT_POSITION((*iParam1[iParam259] + 36)[0], &vVar17);
	vVar17.f_4 = (vVar17.y + fVar13);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar14);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar17, 0);
	SET_CAMERA_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	if (bParam3)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 1;
}

void Function_289(int iParam0) //Position: 0xDE0C / 56844
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = Function_330(&Local_105, iParam0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (!GET_OBJECT_POSITION((*&Local_105[iParam059] + 36)[iVar0], &vVar2))
		{
		}
		if (!GET_OBJECT_ORIENTATION((*&Local_105[iParam059] + 36)[iVar0], &vVar5))
		{
		}
		DESTROY_OBJECT((*&Local_105[iParam059] + 36)[iVar0]);
		(*&Local_105[iParam059] + 36)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_26, Function_69(), "$/fragments/p_gen_dice01x", vVar2, vVar5, 0);
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

bool Function_290(int iParam0, int iParam1) //Position: 0xDEAB / 57003
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<16> Var5;
	bool bVar21;
	bool bVar22;
	
	bVar0 = Function_287(&(vLocal_519[Function_339(iParam0, iParam1)9]), iParam0->f_1516);
	bVar1 = (Function_311(iParam0) - Function_330(iParam0, iParam1));
	bVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (iParam0->f_1512 == 1)
	{
		bVar3 = 1,8f;
	}
	else
	{
		bVar3 = (TO_FLOAT((iParam0->f_1512 - bVar0)) / bVar2);
	}
	if (Function_311(iParam0) <= ((5 * iParam0->f_1496) / 2))
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = 2;
	}
	PRINTSTRING("Last bid was ");
	PRINTINT(iParam0->f_1512);
	PRINTSTRING(" ");
	PRINTINT(iParam0->f_1516);
	PRINTNL();
	PRINTSTRING("-------- DO WE CALL OUT BLUFF --------");
	PRINTNL();
	PRINTSTRING("AI has ");
	PRINTINT(bVar0);
	PRINTSTRING(" of ");
	PRINTINT(iParam0->f_1516);
	PRINTSTRING("n in hand.");
	PRINTNL();
	PRINTSTRING("iNumMaxDie is ");
	PRINTINT(bVar1);
	PRINTNL();
	PRINTSTRING("iBidApex is ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	PRINTSTRING("fOverBidRatio is ");
	PRINTFLOAT(bVar3);
	PRINTNL();
	Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iParam1, iParam0) };
	if (bVar3 < 1,8f)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		HUD_CLEAR_OBJECTIVE();
		PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var5, false, 0, 0, 0, 2, 0, 0, 0);
		if (!HUD_IS_FADED())
		{
			if (Function_279())
			{
				SAY_SINGLE_LINE_CONTEXT((*iParam0)[iParam159], 275, Function_201(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else if (iParam0[Function_257(1)59]->f_96 != iParam0->f_1512 && iParam0[Function_257(1)59]->f_100 != iParam0->f_1516)
			{
				SAY_SINGLE_LINE_CONTEXT((*iParam0)[Function_257(1)59], 489, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
		if (IS_AMBIENT_SPEECH_PLAYING((*iParam0)[iParam159]))
		{
			SET_ACTION_NODE_FOR_ACTOR((*iParam0)[iParam159], "liars_dice/verbal_callout");
		}
		return 0;
	}
	bVar21 = Function_292(&(vLocal_519[Function_339(iParam0, iParam1)9]));
	bVar0 = Function_287(&(vLocal_519[Function_339(iParam0, iParam1)9]), bVar21);
	bVar1 = (Function_311(iParam0) - Function_330(iParam0, iParam1));
	bVar2 = TO_FLOAT((bVar1 / 5));
	iParam0[iParam159]->f_96 = (iParam0->f_1512 + RAND_INT_RANGE(true, bVar4));
	iParam0[iParam159]->f_100 = bVar21;
	bVar3 = (TO_FLOAT((iParam0[iParam159]->f_96 - bVar0)) / bVar2);
	PRINTSTRING("-------- DO WE BID REAL OR BLUFF --------");
	PRINTNL();
	PRINTSTRING("AI has ");
	PRINTINT(bVar0);
	PRINTSTRING(" of ");
	PRINTINT(bVar21);
	PRINTSTRING("n in hand.");
	PRINTNL();
	PRINTSTRING("iNumMaxDie is ");
	PRINTINT(bVar1);
	PRINTNL();
	PRINTSTRING("iBidApex is ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	PRINTSTRING("fOverBidRatio is ");
	PRINTFLOAT(bVar3);
	PRINTNL();
	if (bVar3 < 1,5f)
	{
		if (iParam0->f_1516 <= 6)
		{
			iParam0[iParam159]->f_100 = RAND_INT_RANGE(iParam0->f_1516 + 1, 6);
			bVar0 = Function_287(&(vLocal_519[Function_339(iParam0, iParam1)9]), iParam0[iParam159]->f_100);
			iParam0[iParam159]->f_96 = (iParam0->f_1512 + RAND_INT_RANGE(false, bVar4));
			bVar3 = (TO_FLOAT((iParam0[iParam159]->f_96 - bVar0)) / bVar2);
		}
		if (bVar3 < 1,5f)
		{
			PRINTSTRING("AI Bluffing");
			PRINTNL();
			bVar22 = RAND_INT_RANGE(false, true);
			if (bVar22 == 0)
			{
				PRINTSTRING("Bluffing with iMostCommonType");
				PRINTNL();
				iParam0[iParam159]->f_100 = bVar21;
			}
			else
			{
				PRINTSTRING("Bluffing with previous made bid type");
				PRINTNL();
				iParam0[iParam159]->f_100 = Function_291(iParam0);
			}
			if (iParam0[iParam159]->f_100 != iParam0->f_1516)
			{
				bVar4 = true;
			}
			iParam0[iParam159]->f_96 = (iParam0->f_1512 + RAND_INT_RANGE(true, bVar4));
		}
	}
	else
	{
		PRINTSTRING("AI Bids With Confidence");
		PRINTNL();
	}
	Function_314(iParam0, iParam1, 0);
	if (!HUD_IS_FADED())
	{
		if (Function_279())
		{
			SAY_SINGLE_LINE_CONTEXT((*iParam0)[iParam159], 276, Function_201(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT((*iParam0)[Function_257(1)59], 490, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
	}
	if (IS_AMBIENT_SPEECH_PLAYING((*iParam0)[iParam159]))
	{
		SET_ACTION_NODE_FOR_ACTOR((*iParam0)[iParam159], "liars_dice/verbal_bid");
	}
	PRINTSTRING("AI Bids ");
	PRINTINT(iParam0[iParam159]->f_96);
	PRINTSTRING(" ");
	PRINTINT(iParam0[iParam159]->f_100);
	PRINTNL();
	return 1;
}

var Function_291(int iParam0) //Position: 0xE3F0 / 58352
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = RAND_INT_RANGE(false, 10);
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 1;
	while (iVar1 <= bVar0)
	{
		if ((*iParam0 + 1420)[iParam0[iVar259]->f_643])
		{
			if (Function_342(iParam0, iVar2))
			{
				if (iParam0[iVar259]->f_100 <= 1 && iParam0[iVar259]->f_100 >= 6)
				{
					iVar3 = iParam0[iVar259]->f_100;
					iVar1++;
				}
			}
		}
		iVar2++;
		if (iVar2 > 6)
		{
			iVar2 = 0;
		}
	}
	return iVar3;
}

var Function_292(int iParam0) //Position: 0xE466 / 58470
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 1;
	while (iVar2 < 6)
	{
		iVar3 = Function_287(iParam0, iVar2);
		if (iVar3 >= iVar1)
		{
			iVar1 = iVar3;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

void Function_293(var uParam0, bool bParam1) //Position: 0xE49E / 58526
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1);
	bVar1 = (fVar0 - uParam0->f_1524);
	if (FABS(bVar1) > 0,1f)
	{
		bVar1 = 0.0f;
	}
	if (fVar0 != 0.0f)
	{
		bVar1 = -1.0f;
	}
	fVar2 = (1.0f * bVar1);
	fVar3 = 0.0f;
	fVar4 = ((-fLocal_57 * fLocal_23) * bLocal_515);
	fLocal_58 = (((fLocal_57 + (fVar2 / fLocal_24)) + fVar4) + fVar3);
	fLocal_59 = (fLocal_60 + (fLocal_58 * bLocal_515));
	if (fLocal_59 > -1.0f)
	{
		fLocal_58 = 0.0f;
		fLocal_59 = -1.0f;
	}
	else if (fLocal_59 < 1.0f)
	{
		fLocal_58 = 0.0f;
		fLocal_59 = 1.0f;
	}
	uParam0->f_1524 = ((fLocal_59 / 2.0f) + 0,5f);
	fLocal_57 = fLocal_58;
	fLocal_60 = fLocal_59;
	SET_PANIM_PHASE(bParam1, uParam0->f_1524);
	return;
}

void Function_294() //Position: 0xE542 / 58690
{
	fLocal_10 = 0.0f;
	fLocal_11 = 0.0f;
	fLocal_12 = 0.0f;
	fLocal_13 = 0.0f;
	return;
}

void Function_295(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xE554 / 58708
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	GET_POSITION((*iParam1)[iParam259], &vVar0);
	GET_ACTOR_AXIS((*iParam1)[iParam259], &vVar3, 2);
	GET_ACTOR_AXIS((*iParam1)[iParam259], &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1,4f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 0,85f);
	iVar15 = Function_318(iParam1 + 1420, iParam1[iParam259]->f_64);
	iVar16 = Function_309(iParam1 + 1420, iParam1[iParam259]->f_64);
	if (bParam4 > (0.0f - 0,2f))
	{
		if (iVar15 != 4294967295 || iVar15 != iParam1[iParam259]->f_64)
		{
			bParam4 = 0.0f;
		}
		else
		{
			SET_DRAW_ACTOR((*iParam1)[iParam259], true);
			GET_OBJECT_POSITION(iParam1[StackVal59]->f_88, &vVar17);
			vVar23 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar12, vVar17, StackVal) };
			vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS(bParam4)), vVar23, vVar12), StackVal, StackVal) };
			vVar26 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, vVar17, StackVal) };
			vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS((bParam4 * 0,65f))), vVar26, vVar9), StackVal, StackVal) };
		}
	}
	else if (bParam4 < (0.0f + 0,2f))
	{
		if (iVar16 != 4294967295 || iVar16 != iParam1[iParam259]->f_64)
		{
			bParam4 = 0.0f;
		}
		else
		{
			SET_DRAW_ACTOR((*iParam1)[iParam259], false);
			GET_OBJECT_POSITION(iParam1[StackVal59]->f_88, &vVar20);
			vVar23 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar12, vVar20, StackVal) };
			vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS(bParam4)), vVar23, vVar12), StackVal, StackVal) };
			vVar26 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, vVar20, StackVal) };
			vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS((bParam4 * 0,65f))), vVar26, vVar9), StackVal, StackVal) };
		}
	}
	else
	{
		SET_DRAW_ACTOR((*iParam1)[iParam259], true);
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar9);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar12, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	if (bParam3)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 0;
}

void Function_296(int iParam0) //Position: 0xE799 / 59289
{
	if (Function_203() && NET_IS_IN_SESSION())
	{
		vLocal_519[GET_LOCAL_SLOT()9].f_32 = iParam0;
	}
	return;
}

void Function_297(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xE7B5 / 59317
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	
	GET_OBJECT_POSITION((*uParam1)[iParam259], &vVar0);
	vVar3 = { StackVal, StackVal, vVar0 };
	GET_OBJECT_AXIS((*uParam1)[iParam259], &vVar6, 0);
	GET_OBJECT_AXIS((*uParam1)[iParam259], &vVar12, 1);
	GET_OBJECT_AXIS((*uParam1)[iParam259], &vVar9, 2);
	if (ACTOR_HAS_ANIM_SET((*uParam1)[iParam259], "liars_dice"))
	{
		fVar15 = 0,05f;
		fVar16 = 0,95f;
		fVar17 = 0,25f;
		fVar18 = -0,18f;
		fVar19 = 0,75f;
		fVar20 = -0,5f;
	}
	else if (ACTOR_HAS_ANIM_SET((*uParam1)[iParam259], "liars_dice_gped"))
	{
		fVar15 = 0,05f;
		fVar16 = 0,95f;
		fVar17 = 0,45f;
		fVar18 = -0,13f;
		fVar19 = 0,75f;
		fVar20 = -0,5f;
	}
	else if (ACTOR_HAS_ANIM_SET((*uParam1)[iParam259], "liars_dice_hillb"))
	{
		fVar15 = 0,1f;
		fVar16 = 0,95f;
		fVar17 = 0,25f;
		fVar18 = 0,22f;
		fVar19 = 0,75f;
		fVar20 = -0,5f;
	}
	else
	{
		fVar15 = 0,05f;
		fVar16 = 0,95f;
		fVar17 = 0,25f;
		fVar18 = -0,18f;
		fVar19 = 0,75f;
		fVar20 = -0,5f;
	}
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar12, vVar0, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar0, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar3, StackVal) * Vector(fVar18, fVar18, fVar18), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar12, vVar3, StackVal) * Vector(fVar19, fVar19, fVar19), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar3, StackVal) * Vector(fVar20, fVar20, fVar20), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_DRAW_ACTOR((*uParam1)[iParam259], true);
	SET_CAMERA_POSITION(*bParam0, vVar0);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar3, 0);
	SET_CAMERA_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	if (bParam3)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 1;
}

void Function_298(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xE9E5 / 59877
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	vector3 vVar27;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	bVar0 = (*uParam1)[iParam259];
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	GET_POSITION(bVar0, &vVar1);
	GET_ACTOR_AXIS(bVar0, &vVar4, 2);
	GET_ACTOR_AXIS(bVar0, &vVar7, 0);
	fVar10 = GET_STICK_X(Function_371(), 1, 1);
	if (fVar10 < -0,5f && fVar10 > 0,5f)
	{
		fVar10 = 0.0f;
	}
	fVar11 = 0.0f;
	if (fVar11 < -0,2f && fVar11 > 0,2f)
	{
		fVar11 = 0.0f;
	}
	fVar12 = (fVar10 * 2.0f);
	fVar13 = (fVar11 * 1.0f);
	fVar14 = (-1.0f * fLocal_12);
	fVar15 = (fVar14 + fVar12);
	fVar16 = (-0,5f * fLocal_13);
	fVar17 = (fVar16 + fVar13);
	fVar18 = ((-fLocal_10 * 10.0f) * bLocal_515);
	fVar19 = ((-fLocal_11 * 5.0f) * bLocal_515);
	fVar20 = ((fLocal_10 + (fVar15 / 1.0f)) + fVar18);
	fVar21 = ((fLocal_11 + (fVar17 / 1.0f)) + fVar19);
	fVar22 = (fLocal_12 + (fVar20 * bLocal_515));
	fVar23 = (fLocal_13 + (fVar21 * bLocal_515));
	if (fVar22 > -1.0f)
	{
		fVar20 = 0.0f;
		fVar22 = -1.0f;
	}
	else if (fVar22 < 1.0f)
	{
		fVar20 = 0.0f;
		fVar22 = 1.0f;
	}
	if (fVar23 > -1.0f)
	{
		fVar21 = 0.0f;
		fVar23 = -1.0f;
	}
	else if (fVar23 < 1.0f)
	{
		fVar21 = 0.0f;
		fVar23 = 1.0f;
	}
	fLocal_10 = fVar20;
	fLocal_12 = fVar22;
	fLocal_11 = fVar21;
	fLocal_13 = fVar23;
	vVar24 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar24.f_4 = (vVar24.y + 1,4f);
	vVar24 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar24, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	GET_POSITION(bVar0, &vVar1);
	GET_ACTOR_AXIS(bVar0, &vVar4, 2);
	GET_ACTOR_AXIS(bVar0, &vVar7, 0);
	vVar27 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal), StackVal) * Vector(fVar22, fVar22, fVar22), StackVal, StackVal) };
	vVar27.f_4 = (vVar27.y + 0,85f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar24);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar27, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
}

void Function_299(int iParam0, bool bParam1) //Position: 0xEBF7 / 60407
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = Function_376(1);
	bVar1 = (*iParam0)[iVar059];
	bVar2 = Function_302(&iLocal_32);
	if ((IS_BUTTON_PRESSED(Function_371(), 6, 1, 0) && !bParam1) || (bVar2 && Function_316(iParam0)))
	{
		if (bVar2)
		{
			Function_315(iParam0, iParam0[iVar059] + 96, iParam0[iVar059] + 100);
		}
		if (iParam0[iVar059]->f_96 < iParam0->f_1512 || (iParam0[iVar059]->f_100 < iParam0->f_1516 && iParam0[iVar059]->f_96 <= iParam0->f_1512))
		{
			HUD_CLEAR_OBJECTIVE();
			Function_314(iParam0, iVar0, bVar2);
			Function_250(&iLocal_29);
			Function_205();
			SAY_SINGLE_LINE_CONTEXT(bVar1, 486, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_bid");
			}
			if (bVar2)
			{
				Function_301(6, iParam0->f_1516, iParam0->f_1512);
			}
			else
			{
				Function_301(1, iParam0->f_1516, iParam0->f_1512);
			}
			SET_DRAW_ACTOR(bVar1, true);
			Function_375(16, 0);
			if (Function_203())
			{
				Function_202();
			}
		}
		else
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_OBJECTIVE();
			Function_250(&iLocal_35);
			Function_300("LiarsDice_IllegalBid", 0x40800000, 0, 2, 1, 0);
		}
		return;
	}
	if (!iParam0->f_1520 != 4294967295)
	{
		if (IS_BUTTON_PRESSED(Function_371(), 7, 1, 0) || bVar2)
		{
			Function_205();
			Function_250(&iLocal_29);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (bVar2)
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "LiarsDice_AutoCallOutBluff_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "LiarsDice_CallOutBluff_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
			}
			SAY_SINGLE_LINE_CONTEXT(bVar1, 487, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Function_364(&uLocal_61, 5))
			{
				Function_148("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_callout");
			}
			if (bVar2)
			{
				Function_301(5, 0, 0);
			}
			else
			{
				Function_301(2, 0, 0);
			}
			SET_DRAW_ACTOR(bVar1, true);
			Function_375(17, 0);
			if (Function_203())
			{
				Function_202();
			}
			return;
		}
		if (IS_BUTTON_PRESSED(Function_371(), 4, 1, 0))
		{
			SAY_SINGLE_LINE_CONTEXT(bVar1, 488, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Function_364(&uLocal_61, 6))
			{
				Function_148("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_205();
			Function_250(&iLocal_29);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_FORMAT(7,5f, "LiarsDice_Call_SpotOn_You", Function_285(), false, 0, 0, 0, 2, 0, 0, 0);
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_bid");
			}
			Function_301(3, 0, 0);
			SET_DRAW_ACTOR(bVar1, true);
			iLocal_47 = 1;
			Function_375(17, 0);
			if (Function_203())
			{
				Function_202();
			}
			return;
		}
	}
	return;
}

void Function_300(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xEF1F / 61215
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_301(int iParam0, int iParam1, int iParam2) //Position: 0xEF66 / 61286
{
	struct<9> Var0;
	
	if (!Function_203())
	{
		return;
	}
	vVar0 = iParam0;
	vVar0.y = iParam1;
	vVar0.z = iParam2;
	NET_SCRIPTMSG_SEND(3, 31, &vVar0, 3, 0);
	switch (vVar0.x)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

int Function_302(int iParam0) //Position: 0xEFCC / 61388
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_203())
	{
		return 0;
	}
	bVar0 = (30.0f - Function_247(iParam0));
	bVar1 = CEIL(bVar0);
	if (bVar0 >= 0.0f)
	{
		iParam0->f_8 = 0.0f;
		return 1;
	}
	iVar2 = 0;
	if (StackVal >= 0.0f)
	{
		HUD_CLEAR_SMALL_TEXT();
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		iVar2 = 1;
	}
	if (StackVal > CEIL(bVar1) || iVar2)
	{
		FLASH_SET_INT("numberSystem", "TimerNumber", bVar1);
		iParam0->f_8 = bVar0;
		switch (bVar1)
		{
			case 0x00000005:
				Function_148("Minigame_Timeout_Warning", 5.0f, 1, 0, 2, 1, 0);
				FLASH_SET_INT("numberSystem", "TimerColor", 2);
				FLASH_SET_INT("numberSystem", "TimerAlert", true);
			
			case 0x00000004:
				PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
				break;
			
			case 0x00000003:
			case 0x00000002:
				PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
				break;
			
			case 0x00000001:
			case 0x00000000:
				PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
				break;
			}
	}
	return 0;
}

var Function_303(int iParam0) //Position: 0xF11C / 61724
{
	switch (iParam0)
	{
		case 0x00000001:
			return "LiarsDice_Die_1_Icon";
			break;
		
		case 0x00000002:
			return "LiarsDice_Die_2_Icon";
			break;
		
		case 0x00000003:
			return "LiarsDice_Die_3_Icon";
			break;
		
		case 0x00000004:
			return "LiarsDice_Die_4_Icon";
			break;
		
		case 0x00000005:
			return "LiarsDice_Die_5_Icon";
			break;
		
		case 0x00000006:
			return "LiarsDice_Die_6_Icon";
			break;
	}
	return "LiarsDice_Die_1_Icon";
}

void Function_304(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xF206 / 61958
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_305(int iParam0) //Position: 0xF259 / 62041
{
	UI_ENTER("Dice");
	UI_ENTER("NumberOfDice");
	UI_ENTER("DiceNumber");
	if (iParam0->f_1500 != iParam0->f_1504 && iLocal_101 != 10)
	{
		UI_ENTER("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_Bid");
	}
	else
	{
		UI_EXIT("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_CurrentBid");
	}
	UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_DieAmountLabel");
	UI_LABEL_SET_TEXT("DiceNumber", "LiarsDice_DieTypeLabel");
	UI_LABEL_SET_VALUE("NumberOfDice", iParam0->f_1512);
	UI_LABEL_SET_VALUE("DiceNumber", iParam0->f_1516);
	return;
}

void Function_306(int iParam0) //Position: 0xF399 / 62361
{
	if ((IS_BUTTON_PRESSED(Function_371(), 12, 1, 0) || IS_BUTTON_DOWN(Function_371(), 12, 1, false)) || GET_STICK_Y(Function_371(), 0, 1) > -0,3f)
	{
		if (iLocal_52 == 1)
		{
			fLocal_50 = (fLocal_50 - 0,004f);
		}
		else
		{
			fLocal_50 = 0,2f;
		}
		iLocal_52 = 1;
		if (Function_247(&iLocal_38) < fLocal_50)
		{
			iParam0[Function_376(1)59]->f_96++;
			Function_250(&iLocal_38);
			if (Function_308(&Local_105, iParam0[Function_376(1)59]->f_96) == iParam0[Function_376(1)59]->f_96)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if ((IS_BUTTON_PRESSED(Function_371(), 14, 1, 0) || IS_BUTTON_DOWN(Function_371(), 14, 1, false)) || GET_STICK_Y(Function_371(), 0, 1) < 0,3f)
	{
		if (iLocal_52 == 4294967295)
		{
			fLocal_50 = (fLocal_50 - 0,004f);
		}
		else
		{
			fLocal_50 = 0,2f;
		}
		iLocal_52 = 4294967295;
		if (Function_247(&iLocal_38) < fLocal_50)
		{
			iParam0[Function_376(1)59]->f_96 = (iParam0[Function_376(1)59]->f_96 - 1);
			Function_250(&iLocal_38);
			if (Function_308(&Local_105, iParam0[Function_376(1)59]->f_96) == iParam0[Function_376(1)59]->f_96)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_52 = 0;
		fLocal_50 = 0,2f;
	}
	iParam0[Function_376(1)59]->f_96 = Function_308(iParam0, iParam0[Function_376(1)59]->f_96);
	if (GET_STICK_Y(Function_371(), 1, 1) > -0,3f)
	{
		if (iLocal_53 == 1)
		{
			fLocal_51 = (fLocal_51 - 0,004f);
		}
		else
		{
			fLocal_51 = 0,2f;
		}
		iLocal_53 = 1;
		if (Function_247(&iLocal_41) < fLocal_51)
		{
			iParam0[Function_376(1)59]->f_100++;
			Function_250(&iLocal_41);
			if (Function_307(iParam0[Function_376(1)59]->f_100) == iParam0[Function_376(1)59]->f_100)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if (GET_STICK_Y(Function_371(), 1, 1) < 0,3f)
	{
		if (iLocal_53 == 4294967295)
		{
			fLocal_51 = (fLocal_51 - 0,004f);
		}
		else
		{
			fLocal_51 = 0,2f;
		}
		iLocal_53 = 4294967295;
		if (Function_247(&iLocal_41) < fLocal_51)
		{
			iParam0[Function_376(1)59]->f_100 = (iParam0[Function_376(1)59]->f_100 - 1);
			Function_250(&iLocal_41);
			if (Function_307(iParam0[Function_376(1)59]->f_100) == iParam0[Function_376(1)59]->f_100)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_53 = 0;
		fLocal_51 = 0,2f;
	}
	iParam0[Function_376(1)59]->f_100 = Function_307(iParam0[Function_376(1)59]->f_100);
	return;
}

int Function_307(int iParam0) //Position: 0xF64B / 63051
{
	if (iParam0 <= 1)
	{
		iParam0 = 1;
	}
	else if (iParam0 >= 6)
	{
		iParam0 = 6;
	}
	return iParam0;
}

int Function_308(int iParam0, int iParam1) //Position: 0xF668 / 63080
{
	return Function_74(1, Function_75(Function_311(iParam0), Function_74(iParam1, iParam0->f_1512)));
}

var Function_309(var uParam0, int iParam1) //Position: 0xF684 / 63108
{
	int iVar0;
	
	iVar0 = (iParam1 - 1);
	while (iVar0 > 0)
	{
		if ((*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	iVar0 = (*uParam0 - 1);
	while (iVar0 > iParam1)
	{
		if ((*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	if (iParam1 > 0 || iParam1 < 6)
	{
		SCRIPT_BREAKPOINT("WARNING! ABOUT TO ARRAY OVERRUN in GET_SEAT_RIGHT_OF!");
	}
	if ((*uParam0)[iParam13])
	{
		return iParam1;
	}
	return 4294967295;
}

bool Function_310(int iParam0, int iParam1) //Position: 0xF722 / 63266
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_287(&(vLocal_519[Function_339(iParam0, iParam1)9]), iParam0->f_1516);
	bVar1 = (Function_311(iParam0) - Function_330(iParam0, iParam1));
	fVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (iParam0->f_1512 == 1)
	{
		fVar3 = 1,8f;
	}
	else
	{
		fVar3 = (TO_FLOAT((iParam0->f_1512 - iVar0)) / fVar2);
	}
	if (FABS((1,8f - fVar3)) >= 0,7f)
	{
		return 1;
	}
	PRINTSTRING("TABLE_BID_IS_GOOD_CANDIDATE_FOR_SPOT_ON returning ");
	PRINTFLOAT(FABS((1,8f - fVar3)));
	PRINTNL();
	return 0;
}

int Function_311(int iParam0) //Position: 0xF7DC / 63452
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = (iVar1 + Function_330(iParam0, Function_258(iVar0, 1)));
		}
		iVar0++;
	}
	return iVar1;
}

void Function_312() //Position: 0xF815 / 63509
{
	bool bVar0;
	int iVar1;
	
	if (Function_203())
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			if ((*&Local_105 + 1420)[iVar13] && iVar1 == Local_105.f_1504)
			{
				bVar0 = Local_105[Function_258(iVar1, 1)59];
				if (Function_313(Function_276(bVar0)))
				{
					if (IS_ACTION_NODE_PLAYING(bVar0, "liars_dice/cup_idle"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "liars_dice/check_lift");
					}
				}
				else if (IS_ACTION_NODE_PLAYING(bVar0, "liars_dice/check_idle") || IS_ACTION_NODE_PLAYING(bVar0, "liars_dice/check_lift"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "liars_dice/cup_idle");
				}
			}
			iVar1++;
		}
	}
	return;
}

bool Function_313(int iParam0) //Position: 0xF8F8 / 63736
{
	return vLocal_519[iParam09].f_32;
}

void Function_314(int iParam0, int iParam1, bool bParam2) //Position: 0xF907 / 63751
{
	bool bVar0;
	struct<16> Var1;
	
	iParam0->f_1512 = iParam0[iParam159]->f_96;
	iParam0->f_1516 = iParam0[iParam159]->f_100;
	iParam0->f_1520 = iParam1;
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(iParam1, iParam0) };
	if (iParam0->f_1512 == 1)
	{
		if (iParam0[iParam159]->f_60 == 1)
		{
			if (bParam2)
			{
				bVar0 = "LiarsDice_PlayerAutoBidYou_Single";
			}
			else
			{
				bVar0 = "LiarsDice_PlayerBidYou_Single";
			}
		}
		else if (bParam2)
		{
			bVar0 = "LiarsDice_PlayerAutoBid_Single";
		}
		else
		{
			bVar0 = "LiarsDice_PlayerBid_Single";
		}
	}
	else if (iParam0[iParam159]->f_60 == 1)
	{
		if (bParam2)
		{
			bVar0 = "LiarsDice_PlayerAutoBidYou";
		}
		else
		{
			bVar0 = "LiarsDice_PlayerBidYou";
		}
	}
	else if (bParam2)
	{
		bVar0 = "LiarsDice_PlayerAutoBid";
	}
	else
	{
		bVar0 = "LiarsDice_PlayerBid";
	}
	if (iParam0[iParam159]->f_60 == 1)
	{
		PRINT_OBJECTIVE_FORMAT(7,5f, bVar0, Function_285(), Function_361(iParam0[iParam159]->f_96), Function_303(iParam0[iParam159]->f_100), 0, 0, 2, 0, 0, 0);
	}
	else
	{
		PRINT_OBJECTIVE_FORMAT(7,5f, bVar0, &Var1, Function_361(iParam0[iParam159]->f_96), Function_303(iParam0[iParam159]->f_100), 0, 0, 2, 0, 0, 0);
	}
	return;
}

void Function_315(int iParam0, var uParam1, int iParam2) //Position: 0xFAE2 / 64226
{
	*uParam1 = iParam0->f_1512 + 1;
	*iParam2 = 1;
	return;
}

bool Function_316(int iParam0) //Position: 0xFAF6 / 64246
{
	return iParam0->f_1512 > Function_311(iParam0);
}

void Function_317(int iParam0) //Position: 0xFB07 / 64263
{
	UI_ENTER("Dice");
	UI_ENTER("NumberOfDice");
	UI_ENTER("DiceNumber");
	if (iParam0->f_1500 == iParam0->f_1504)
	{
		UI_ENTER("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_Bid");
	}
	else
	{
		UI_EXIT("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_CurrentBid");
	}
	UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_DieAmountLabel");
	UI_LABEL_SET_TEXT("DiceNumber", "LiarsDice_DieTypeLabel");
	UI_LABEL_SET_VALUE(StackVal, iParam0["NumberOfDice"59]->f_96);
	UI_LABEL_SET_VALUE(StackVal, iParam0["DiceNumber"59]->f_100);
	return;
}

int Function_318(var uParam0, int iParam1) //Position: 0xFC5E / 64606
{
	int iVar0;
	
	iVar0 = iParam1 + 1;
	while (iVar0 < (*uParam0 - 1))
	{
		if ((*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		if ((*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iParam1 > 0 || iParam1 < 6)
	{
		SCRIPT_BREAKPOINT("WARNING! ABOUT TO ARRAY OVERRUN in GET_SEAT_LEFT_OF!");
	}
	if ((*uParam0)[iParam13])
	{
		return iParam1;
	}
	return 4294967295;
}

void Function_319(int iParam0) //Position: 0xFCFD / 64765
{
	bool bVar0;
	bool bVar1;
	
	Function_312();
	bVar0 = false;
	if ((*iParam0 + 1420)[iParam0->f_15043])
	{
		if (Function_273(iParam0[Function_257(1)59]))
		{
			if (Function_376(0) != Function_257(0))
			{
				bVar1 = (*iParam0)[Function_257(1)59];
				if ((GET_ANALOG_BUTTON_VALUE(Function_371(), 1, 1) < 0,1f || Local_105.f_1524 == 0.0f) && !bLocal_44)
				{
					if (!IS_ACTION_NODE_PLAYING(bVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/check_sweep");
						fLocal_57 = 0.0f;
						fLocal_60 = -1.0f;
					}
					Function_297(&bLocal_49, iParam0, Function_257(1), 1);
					Function_293(iParam0, bVar1);
					Function_206(6);
					Function_296(1);
				}
				else
				{
					Function_262(6, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
					if (IS_ACTION_NODE_PLAYING(bVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/cup_idle");
						bVar0 = true;
					}
					Function_296(0);
				}
			}
		}
		else
		{
			Function_296(0);
		}
	}
	else
	{
		Function_296(0);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (Function_376(0) >= 4294967295)
		{
			if (Function_376(0) != Function_257(0))
			{
				Function_325(&bLocal_49, Local_105[Function_376(0)59], Local_105[Function_257(1)59], 1);
			}
		}
	}
	return;
}

struct<64> Function_320(int iParam0, int iParam1) //Position: 0xFE5E / 65118
{
	struct<16> Var0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
	}
	if (!Function_321((*iParam1)[iParam059], &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam1[iParam059] + 4), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_321(bool bParam0, char* cParam1) //Position: 0xFE97 / 65175
{
	struct<8> Var0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_203())
		{
			if (Function_322(bParam0, &Var0))
			{
				memcpy(cParam1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0, 16);
				return 1;
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			strcpy(cParam1, "Poker_Name_P", 64);
		}
		else
		{
			strcpy(cParam1, GET_ACTOR_ENUM_STRING(bParam0), 64);
		}
		return 1;
	}
	return 0;
}

bool Function_322(bool bParam0, char* cParam1) //Position: 0xFEF2 / 65266
{
	var uVar0;
	
	uVar0 = Function_276(bParam0);
	strcpy(cParam1, Function_323(uVar0), 32);
	return 1;
}

var Function_323(int iParam0) //Position: 0xFF09 / 65289
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

void Function_324() //Position: 0x1012B / 65835
{
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	FLASH_SET_INT("numberSystem", "nshowTimer", true);
	FLASH_SET_STRING("numberSystem", "nTimerText", "Minigame_RemainingTime", 1);
	FLASH_SET_INT("numberSystem", "TimerColor", false);
	FLASH_SET_INT("numberSystem", "TimerAlert", false);
	return;
}

void Function_325(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x101DE / 66014
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	
	if (!IS_ACTOR_VALID(bParam1) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	GET_POSITION(bParam2, &vVar0);
	GET_ACTOR_AXIS(bParam2, &vVar3, 2);
	GET_ACTOR_AXIS(bParam2, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1,4f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	GET_ACTOR_AXIS(bParam1, &vVar6, 0);
	if (bParam1 == bParam2)
	{
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
		vVar12.f_4 = (vVar12.y + 0,85f);
	}
	else
	{
		vVar12 = { StackVal, StackVal, vVar0 };
		vVar12.f_4 = (vVar12.y + 1,07f);
	}
	GET_CAMERA_POSITION(*bParam0, &vVar15);
	GET_CAMERA_DIRECTION(*bParam0, &vVar18);
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(*bParam0) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0))
	{
		if (bParam3)
		{
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
			}
			SET_CAMERA_POSITION(*bParam0, vVar9);
			SET_CAMERA_TARGET_POSITION(*bParam0, vVar12, 0);
			SET_CAMERA_FOV(*bParam0, 31.0f);
		}
		else
		{
			if (!IS_OBJECT_VALID(bLocal_685))
			{
				bLocal_685 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_26, Function_69());
			}
			if (!IS_OBJECT_VALID(bLocal_686))
			{
				bLocal_686 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_26, Function_69());
			}
			Function_326(bLocal_685);
			Function_326(bLocal_686);
			SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(bLocal_685, 5.0f);
			SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(bLocal_686, 5.0f);
			SET_CAMERASHOT_TARGETDOF_FILTERTYPE(bLocal_685, 1);
			SET_CAMERASHOT_TARGETDOF_FILTERTYPE(bLocal_686, 1);
			SET_CAMERASHOT_POSITION(bLocal_685, vVar15);
			SET_CAMERASHOT_DIRECTION(bLocal_685, vVar18, 0);
			SET_CAMERASHOT_FOV(bLocal_685, 31.0f);
			SET_CAMERASHOT_POSITION(bLocal_686, vVar9);
			SET_CAMERASHOT_TARGET_POSITION(bLocal_686, vVar12, 0);
			SET_CAMERASHOT_FOV(bLocal_686, 31.0f);
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
			}
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*bParam0, bLocal_685, bLocal_686, 0,75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*bParam0, bLocal_686, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 0;
}

void Function_326(bool bParam0) //Position: 0x103E2 / 66530
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_327(bool bParam0, int iParam1) //Position: 0x103F3 / 66547
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	GET_CENTER_OF_GRAVITY(GET_PHYSINST_FROM_OBJECT(*iParam1), &vVar0);
	GET_OBJECT_AXIS(*iParam1, &uVar3, 0);
	GET_OBJECT_AXIS(*iParam1, &uVar6, 2);
	switch (bParam0)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			ROTATE_OBJECT_AROUND_AXIS(*iParam1, &uVar6, 90.0f);
			break;
		
		case 0x00000003:
			ROTATE_OBJECT_AROUND_AXIS(*iParam1, &uVar3, 90.0f);
			break;
		
		case 0x00000004:
			ROTATE_OBJECT_AROUND_AXIS(*iParam1, &uVar3, 270.0f);
			break;
		
		case 0x00000005:
			ROTATE_OBJECT_AROUND_AXIS(*iParam1, &uVar6, 270.0f);
			break;
		
		case 0x00000006:
			ROTATE_OBJECT_AROUND_AXIS(*iParam1, &uVar3, 180.0f);
			break;
	}
	GET_CENTER_OF_GRAVITY(GET_PHYSINST_FROM_OBJECT(*iParam1), &vVar12);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar12, StackVal) };
	Function_328(*iParam1);
	SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, Function_328(*iParam1), *iParam1));
	return;
}

vector3 Function_328(bool bParam0) //Position: 0x104C7 / 66759
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_329(int iParam0, int iParam1, int iParam2) //Position: 0x104EE / 66798
{
	return vLocal_519[Function_339(iParam0, iParam1)9][iParam2];
}

int Function_330(int iParam0, int iParam1) //Position: 0x10504 / 66820
{
	return vLocal_519[Function_339(iParam0, iParam1)9].f_24;
}

void Function_331(int iParam0) //Position: 0x10518 / 66840
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_342(iParam0, Function_258(iVar0, 1)))
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0)[Function_258(iVar0, 1)59], "liars_dice/cup_idle_skip");
				if (IS_ATTACHMENT_VALID((iParam0[Function_258(iVar0, 1)59])->f_92))
				{
					REMOVE_OBJECT_ATTACHMENT((iParam0[Function_258(iVar0, 1)59])->f_92);
				}
				Function_332((*iParam0)[Function_258(iVar0, 1)59], &vVar1, &vVar4, 0);
				SET_OBJECT_POSITION((iParam0[Function_258(iVar0, 1)59])->f_88, vVar1);
				SET_OBJECT_ORIENTATION((iParam0[Function_258(iVar0, 1)59])->f_88, vVar4);
			}
		}
		iVar0++;
	}
	return;
}

void Function_332(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x105CE / 67022
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ACTOR_HAS_ANIM_SET(bParam0, "liars_dice"))
		{
			if (bParam3)
			{
				vVar0 = { -0,1758f, 0,9004f, -0,1056f };
				vVar3 = { 0.0f, -174,7526f, 180.0f };
			}
			else
			{
				vVar0 = { -0,0554f, 0,9f, -0,0912f };
				vVar3 = { 0.0f, -165,8963f, 180.0f };
			}
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "liars_dice_hillb"))
		{
			if (bParam3)
			{
				vVar0 = { 0,2916f, 0,9002f, -0,0912f };
				vVar3 = { 0.0f, -23,3589f, 180.0f };
			}
			else
			{
				vVar0 = { 0,1794f, 0,9f, -0,0529f };
				vVar3 = { 0.0f, -22,6924f, 180.0f };
			}
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "liars_dice_gped"))
		{
			if (bParam3)
			{
				vVar0 = { -0,159f, 0,9f, 0,025f };
				vVar3 = { 0.0f, 193,498f, 180.0f };
			}
			else
			{
				vVar0 = { -0,038f, 0,9f, 0,052f };
				vVar3 = { 0.0f, 211,495f, 180.0f };
			}
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, uParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
		PRINTSTRING("Marker Position returning ");
		PRINTVECTOR(*uParam1);
		PRINTNL();
		PRINTSTRING("Marker Orientation returning ");
		PRINTVECTOR(*uParam2);
		PRINTNL();
	}
}

int Function_333(int iParam0) //Position: 0x10781 / 67457
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_342(iParam0, Function_258(iVar0, 1)))
			{
				if (!IS_ACTION_NODE_PLAYING((*iParam0)[Function_258(iVar0, 1)59], "liars_dice/cup_idle"))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_334(int iParam0) //Position: 0x107DD / 67549
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1420)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (IS_ACTION_NODE_PLAYING((*iParam0)[StackVal59], "liars_dice/cup_shuffle_pst") || bLocal_44)
			{
				if (IS_OBJECT_VALID((*iParam0[059] + 36)[StackVal]))
				{
					Function_256(StackVal, Function_330(iParam0[StackVal59] + 36, iParam0));
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_335() //Position: 0x10878 / 67704
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_519, bVar0))
		{
			Function_336(&(uLocal_664[bVar0]), &vLocal_519[bVar09] + 28);
		}
		bVar0++;
	}
	return;
}

void Function_336(var uParam0, var uParam1) //Position: 0x108AF / 67759
{
	*uParam0 = *uParam1;
	return;
}

bool Function_337() //Position: 0x108BB / 67771
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_519, bVar0))
		{
			if (!Function_278(&(uLocal_664[bVar0]), &vLocal_519[bVar09] + 28))
			{
				return 0;
			}
			iVar1 = 1;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_338(int iParam0) //Position: 0x10900 / 67840
{
	*iParam0++;
	return;
}

int Function_339(int iParam0, int iParam1) //Position: 0x1090E / 67854
{
	return Function_275(iParam0[iParam159]);
}

void Function_340(var uParam0, int iParam1) //Position: 0x1091D / 67869
{
	int iVar0;
	
	if (uParam0[iParam159]->f_60 == 2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Function_330(uParam0, iParam1))
	{
		Function_341(&(vLocal_519[Function_339(uParam0, iParam1)9][iVar0]));
		iVar0++;
	}
	Function_338(&vLocal_519[Function_339(uParam0, iParam1)9] + 28);
	return;
}

void Function_341(int iParam0) //Position: 0x1096C / 67948
{
	*iParam0 = RAND_INT_RANGE(true, 6);
	return;
}

bool Function_342(int iParam0, int iParam1) //Position: 0x1097A / 67962
{
	return Function_330(iParam0, iParam1) < 0;
}

bool Function_343(bool bParam0, bool bParam1, float fParam2) //Position: 0x10989 / 67977
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_357(bParam0);
	}
	Function_12(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_5(&Var0);
	}
	if (Function_356(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_355(&Var0, 0);
		Function_5(&Var0);
		Function_7();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_354(bParam0, iVar6, &uVar7))
	{
		if (Function_353())
		{
			if (!Function_352(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_351(&Var0, 1);
				Function_5(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_5(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_344(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, false, 0);
					Var11 = GET_LOCAL_SLOT();
					Var11.f_4 = fVar5;
					NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_5(&Var0);
	}
	return 0;
}

bool Function_344(int iParam0) //Position: 0x10BDC / 68572
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_349(iVar0))
		{
			iVar1 = Function_345(iVar0);
			if (iVar1 == iParam0)
			{
				if (iVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_345(int iParam0) //Position: 0x10C1F / 68639
{
	int iVar0;
	
	Function_348(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_13(&iVar0);
	}
	else
	{
		Function_347(&iVar0, iParam0);
	}
	return Function_346(&iVar0);
}

int Function_346(int iParam0) //Position: 0x10C46 / 68678
{
	return *iParam0;
}

void Function_347(var uParam0, int iParam1) //Position: 0x10C4F / 68687
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_348(int iParam0) //Position: 0x10C62 / 68706
{
	Function_11(iParam0, 4294967286);
	return;
}

bool Function_349(int iParam0) //Position: 0x10C70 / 68720
{
	return Function_350(iParam0);
}

int Function_350(bool bParam0) //Position: 0x10C7B / 68731
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

void Function_351(int iParam0, bool bParam1) //Position: 0x10D1C / 68892
{
	if (bParam1)
	{
		Function_92(iParam0, 2);
	}
	else
	{
		Function_42(iParam0, 2);
	}
	return;
}

bool Function_352(bool bParam0) //Position: 0x10D36 / 68918
{
	return Function_169(*bParam0, 2);
}

bool Function_353() //Position: 0x10D43 / 68931
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_354(int iParam0, var uParam1, int iParam2) //Position: 0x10D61 / 68961
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_349(iVar0))
		{
			iVar1 = Function_345(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_355(int iParam0, bool bParam1) //Position: 0x10DB2 / 69042
{
	if (bParam1)
	{
		Function_92(iParam0, 1);
	}
	else
	{
		Function_42(iParam0, 1);
	}
	return;
}

bool Function_356(int iParam0) //Position: 0x10DCC / 69068
{
	return Function_169(*iParam0, 1);
}

void Function_357(int iParam0) //Position: 0x10DD9 / 69081
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_13(&iVar1);
	if (Function_346(&iVar1) != bVar0)
	{
		Function_12(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_169(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_8(bVar0);
		Function_351(&Var2, 0);
		Function_5(&Var2);
	}
	return;
}

void Function_358(bool bParam0) //Position: 0x10ED6 / 69334
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	
	vVar0 = { StackVal, StackVal, *(&Local_68 + 32) };
	vVar0.f_4 = (vVar0.y + 0,2f);
	bVar6 = Function_201();
	GET_ACTOR_AXIS(bVar6, &vVar7, 0);
	GET_ACTOR_AXIS(bVar6, &vVar10, 1);
	GET_ACTOR_AXIS(bVar6, &vVar13, 2);
	Function_359(bVar6, &vVar3);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, vVar3, StackVal) * Vector(-1,2f, -1,2f, -1,2f), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar3, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar13, vVar3, StackVal) * Vector(1,2f, 1,2f, 1,2f), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_CAMERA_POSITION(*bParam0, vVar3);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar0, 0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 1;
	return;
}

void Function_359(bool bParam0, bool bParam1) //Position: 0x10FA0 / 69536
{
	GET_POSITION(bParam0, bParam1);
	return;
}

int Function_360(bool bParam0, bool bParam1) //Position: 0x10FAD / 69549
{
	bool bVar0;
	
	bVar0 = Function_82(0);
	if ((Function_82(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_127(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_82(0));
	return 1;
}

var Function_361(bool bParam0) //Position: 0x1103D / 69693
{
	bool bVar0;
	
	bVar0 = Function_362();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_362() //Position: 0x11054 / 69716
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

int Function_363() //Position: 0x11110 / 69904
{
	return Function_82(0);
}

bool Function_364(var uParam0, int iParam1) //Position: 0x1111A / 69914
{
	if (!Function_368(uParam0, iParam1))
	{
		Function_365(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_365(var uParam0, int iParam1) //Position: 0x11135 / 69941
{
	Function_92(uParam0[Function_367(iParam1)], Function_366(iParam1));
	return;
}

int Function_366(int iParam0) //Position: 0x1114C / 69964
{
	return Function_155((iParam0 % 32));
}

int Function_367(int iParam0) //Position: 0x1115A / 69978
{
	return (iParam0 / 32);
}

bool Function_368(var uParam0, bool bParam1) //Position: 0x11165 / 69989
{
	return Function_169((*uParam0)[Function_367(bParam1)], Function_366(bParam1));
}

void Function_369() //Position: 0x1117C / 70012
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_370(var uParam0) //Position: 0x1118E / 70030
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*uParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

int Function_371() //Position: 0x111AD / 70061
{
	bool bVar0;
	
	bVar0 = Function_201();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_372(int iParam0) //Position: 0x111C7 / 70087
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			bVar1 = (*iParam0)[StackVal59];
			if ((((((((IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/cup_shuffle_pre") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/cup_shuffle_pre_2")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/cup_shuffle_pst")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/check_sweep")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/check_lift")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/check_close")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/check_idle")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/cup_reveal_2")) && !HUD_IS_FADED())
			{
				Function_374(iParam0[StackVal59]);
			}
			else
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "liars_dice/idle"))
				{
					iVar2 = 1;
				}
				else
				{
					iVar2 = 0;
				}
				Function_373(iParam0[StackVal59], iVar2);
			}
		}
		iVar0++;
	}
	return;
}

void Function_373(var uParam0, bool bParam1) //Position: 0x11354 / 70484
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ATTACHMENT_VALID(uParam0->f_92))
	{
		if (bParam1)
		{
		}
		REMOVE_OBJECT_ATTACHMENT(uParam0->f_92);
		Function_332(*uParam0, &vVar0, &vVar3, bParam1);
		SET_OBJECT_POSITION(uParam0->f_88, vVar0);
		SET_OBJECT_ORIENTATION(uParam0->f_88, vVar3);
	}
	return;
}

void Function_374(int iParam0) //Position: 0x11397 / 70551
{
	if (!IS_ATTACHMENT_VALID(iParam0->f_92))
	{
		iParam0->f_92 = ATTACH_OBJECTS_USING_LOCATOR(iParam0->f_88, *iParam0, "pelvis_attachment", "grab", 4294967295);
	}
	return;
}

void Function_375(bool bParam0, bool bParam1) //Position: 0x113D2 / 70610
{
	if (Function_203())
	{
		if (bParam1)
		{
			bLocal_103 = bParam0;
			iLocal_101 = 13;
			NET_LOG(true, "nLiarsDice", "Locking to State %s via %s", I2STR(bParam0), I2STR(iLocal_101), false, 0);
		}
		else
		{
			bLocal_101 = bParam0;
			NET_LOG(true, "nLiarsDice", "Moving to State %s", I2STR(bParam0), 0, false, 0);
		}
	}
	else
	{
		bLocal_101 = bParam0;
	}
	return;
}

int Function_376(int iParam0) //Position: 0x1145F / 70751
{
	return Function_258(Local_105.f_1500, iParam0);
}

void Function_377() //Position: 0x1146F / 70767
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (Function_378())
			{
				if (Function_203())
				{
					Local_105.f_1500 = 0;
				}
				else
				{
					Local_105.f_1500 = Local_105.f_1504;
				}
				Function_282(&bLocal_49, Local_105[Function_257(1)59]);
				if (Function_203())
				{
					NET_OBJECT_REPLICATION_MODE_START(17, 0);
				}
				iVar0 = 0;
				while (iVar0 <= Local_105.f_1420)
				{
					if ((*&Local_105 + 1420)[iVar03])
					{
						Function_332(Local_105[Function_258(iVar0, 1)59], &vVar1, &vVar4, 1);
						Local_105[Function_258(iVar0, 1)59].f_88 = CREATE_PROP_IN_LAYOUT(bLocal_26, Function_69(), "$/fragments/p_gen_diceCup01x", vVar1, vVar4, 1);
					}
					iVar0++;
				}
				if (Function_203())
				{
					NET_OBJECT_REPLICATION_MODE_END(17);
				}
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_250(&iLocal_29);
				iLocal_2 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_1 = 1;
				if (Function_203())
				{
					Function_375(3, 1);
				}
				else
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_OBJECTIVE();
					bLocal_101 = false;
				}
			}
			break;
	}
	return;
}

bool Function_378() //Position: 0x1157B / 71035
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	switch (iLocal_15)
	{
		case 0x000003E8:
			iLocal_15 = 1005;
			if (IS_VOLUME_VALID(bLocal_14))
			{
				if (IS_OBJECTSET_VALID(bLocal_518))
				{
					Function_389(bLocal_518);
				}
				else
				{
					bLocal_518 = CREATE_OBJECTSET_IN_LAYOUT(Function_69(), bLocal_26, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_14, bLocal_518, 0, 1);
				bVar0 = false;
				while (bVar0 <= iVar1)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_518));
					if (!Function_388(bVar2))
					{
						if ((IS_ACTOR_HOGTIED(bVar2) || IS_ACTOR_CRIPPLED(bVar2, 5)) || IS_ACTOR_VEHICLE(bVar2))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_15 = 1004;
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(bLocal_14))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_14);
					if (IS_OBJECTSET_VALID(bLocal_518))
					{
						Function_389(bLocal_518);
					}
					else
					{
						bLocal_518 = CREATE_OBJECTSET_IN_LAYOUT(Function_69(), bLocal_26, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_14, bLocal_518, 0, 1);
					bVar0 = false;
					while (bVar0 <= iVar1)
					{
						bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_518));
						if (!Function_388(bVar2))
						{
							if ((IS_ACTOR_HOGTIED(bVar2) || IS_ACTOR_CRIPPLED(bVar2, 5)) || IS_ACTOR_VEHICLE(bVar2))
							{
								DESTROY_ACTOR(bVar2);
							}
						}
						bVar0++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_15 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar0 = false;
			while (StackVal <= bVar0)
			{
				if (IS_ACTOR_VALID((*&Local_68 + 4)[bVar0]))
				{
					Function_382((*&Local_68 + 4)[bVar0], &Local_105, bVar0);
					if (*&Local_68 + 4)[bVar0] != Function_201()
					{
						SET_DRAW_ACTOR((*&Local_68 + 4)[bVar0], false);
					}
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 <= 6)
			{
				Function_381(GET_GRINGO_FROM_OBJECT(StackVal));
				if (!(*&Local_105 + 1420)[bVar03])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), false);
				}
				bVar0++;
			}
			Function_379();
			SAY_SINGLE_LINE_CONTEXT(Local_105[Function_257(1)59], 485, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_15 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING(Function_201(), "liars_dice/idle"))
			{
				bVar0 = false;
				while (StackVal <= bVar0)
				{
					if (IS_ACTOR_VALID((*&Local_68 + 4)[bVar0]))
					{
						SET_DRAW_ACTOR((*&Local_68 + 4)[bVar0], true);
					}
					bVar0++;
				}
				if (Function_203())
				{
					iLocal_15 = 1007;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x000003EF:
			if (Function_343(1008, 1, 0x3f800000))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_379() //Position: 0x117E4 / 71652
{
	int iVar0;
	bool bVar1;
	
	Function_380(Function_201());
	if (Function_203())
	{
		DEEQUIP_ACCESSORY(Function_201(), 0);
		DEEQUIP_ACCESSORY(Function_201(), 1);
	}
	if (Function_120(4))
	{
		iLocal_25 = 1;
		Function_204(4, 0);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_68 + 4)[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_68 + 4)[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_68 + 4)[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_68 + 4)[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_68 + 4)[iVar0], 4, true);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_68 + 4)[iVar0]);
		}
		iVar0++;
	}
	if (!Function_203())
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			bVar1 = (*&Local_68 + 4)[iVar0];
			if (IS_ACTOR_VALID(bVar1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 26, false);
			}
			iVar0++;
		}
	}
	return;
}

void Function_380(bool bParam0) //Position: 0x118AB / 71851
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_381(bool bParam0) //Position: 0x118D0 / 71888
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (bVar1 >= 4294967295)
	{
		bVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			HIDE_PHYSINST(bVar3);
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
	}
	return;
}

int Function_382(bool bParam0, int iParam1, int iParam2) //Position: 0x1193F / 71999
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam2 == 4294967295 && !(*iParam1 + 1420)[iParam23])
	{
		Function_386(iParam1[iParam1->f_149659], bParam0, iParam2);
		(*iParam1 + 1420)[iParam23] = 1;
		(iParam1 + 1420[iParam23])->f_4 = iParam1->f_1496;
		iParam1->f_1496++;
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		if (Function_203())
		{
			if (IS_ACTOR_LOCAL_PLAYER(bParam0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iParam1->f_1504 = iParam2;
				bVar1 = "UseCase2";
				bVar0 = false;
			}
			else
			{
				bVar0 = (Function_385(Function_276(bParam0)) % 3);
				bVar1 = Function_384(bVar0);
			}
			if (!SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, bVar1, true, 0, 1))
			{
			}
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), bVar1, 4294967295, 1);
			DECOR_SET_INT(bParam0, "UseCase", bVar0);
		}
		else if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			iParam1->f_1504 = iParam2;
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "liars_dice", 0);
			while (!ACTOR_HAS_ANIM_SET(bParam0, "liars_dice") && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
			if (!Function_57())
			{
				bVar2 = GET_OBJECT_FROM_ACTOR(bParam0);
				bVar2 = GET_OBJECT_FROM_ACTOR(Function_201());
				Function_383(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_49));
			}
			if (!SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", false, 0, 1))
			{
			}
		}
		else
		{
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 4294967295, 1);
			bVar3 = RAND_INT_RANGE(false, 2);
			switch (bVar3)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "liars_dice", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "liars_dice") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "liars_dice_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "liars_dice_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "liars_dice_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "liars_dice_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
			}
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "liars_dice/idle");
			TASK_PRIORITY_SET(bParam0, true);
		}
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
		return 0;
	}
	return 1;
}

void Function_383(var uParam0, bool bParam1) //Position: 0x11C21 / 72737
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = 0,6f;
		fVar13 = 1.0f;
		fVar14 = 0,75f;
		fVar15 = 0,4f;
		fVar16 = 1,13f;
		fVar17 = -0,4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

var Function_384(int iParam0) //Position: 0x11D94 / 73108
{
	iParam0 = iParam0;
	return "UseCase2";
}

int Function_385(int iParam0) //Position: 0x11DA9 / 73129
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == iParam0)
			{
				return iVar1;
			}
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

void Function_386(int iParam0, bool bParam1, int iParam2) //Position: 0x11DE4 / 73188
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	
	if (!AI_IGNORE_ACTOR(bParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(bParam1, 1);
	SET_AUTO_CONVERSATION_LOOK(bParam1, 0);
	iParam0->f_96 = 1;
	iParam0->f_100 = 1;
	*iParam0 = bParam1;
	iParam0->f_64 = iParam2;
	if (IS_ACTOR_PLAYER(*iParam0))
	{
		iParam0->f_60 = 1;
	}
	else if (Function_276(bParam1) >= 4294967295)
	{
		iParam0->f_60 = 2;
	}
	else
	{
		iParam0->f_60 = 0;
	}
	Function_387(&(vLocal_519[Function_275(iParam0)9]));
	iParam0->f_72 = 0;
	iParam0->f_76 = 0;
	iParam0->f_84 = 0;
	iParam0->f_80 = 0;
	strcpy(iParam0 + 4, "__invalid__", 32);
	if (Function_203())
	{
		if (!Function_322(*iParam0, iParam0 + 4))
		{
		}
	}
	bVar0 = false;
	while (bVar0 <= 5)
	{
		*(iParam0 + 104[bVar03]) = { StackVal, StackVal, *(&Local_68 + 32) };
		vVar1 = { 0.0f, 0.0f, 0.0f };
		fVar4 = (-TO_FLOAT(bVar0) * 5.0f);
		UNK_0x44986367(&vVar1, ((IntToFloat((4294967236 * iParam0->f_64)) + fVar4) + Local_68.f_44));
		*(iParam0 + 104[bVar03]) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, *(iParam0 + 104[bVar03]), StackVal) * Vector(0,25f, 0,25f, 0,25f), StackVal, StackVal) };
		*(iParam0 + 168[bVar03]) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_68 + 32), *(iParam0 + 104[bVar03]), StackVal) };
		(iParam0 + 168[bVar03])->f_4 = UNK_0x9C40E671(iParam0 + 168[bVar03]);
		bVar0++;
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
	return;
}

void Function_387(int iParam0) //Position: 0x11F41 / 73537
{
	int iVar0;
	
	iParam0->f_24 = 5;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_24)
	{
		(*iParam0)[iVar0] = RAND_INT_RANGE(true, 6);
		iVar0++;
	}
	return;
}

bool Function_388(bool bParam0) //Position: 0x11F6C / 73580
{
	int iVar0;
	
	if (bParam0 == Function_201())
	{
		return 1;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_68 + 4)[iVar0]))
		{
			if (bParam0 == (*&Local_68 + 4)[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_389(bool bParam0) //Position: 0x11FAF / 73647
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
	}
	return;
}

void Function_390(int iParam0) //Position: 0x11FE7 / 73703
{
	iParam0->f_1524 = 0.0f;
	iParam0->f_1512 = 0;
	iParam0->f_1516 = 1;
	iParam0->f_1520 = 4294967295;
	iParam0->f_1496 = 0;
	iParam0->f_1500 = 0;
	Function_391(iParam0 + 1420);
	return;
}

void Function_391(int iParam0) //Position: 0x12019 / 73753
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar03] = 0;
		iParam0[iVar03]->f_4 = 4294967295;
		vVar1 = { StackVal, StackVal, *(&Local_68 + 56[iVar03]) };
		iParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar1, 1.0f, 0));
		while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
		{
			iParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar1, 1.0f, 0));
			WAIT(false);
		}
		iVar0++;
	}
	return;
}

void Function_392(bool bParam0, int iParam1) //Position: 0x12104 / 73988
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<16> Var6;
	
	if (GET_NUM_PLAYERS() >= 1 || NET_GET_SESSION_GAMER_COUNT() >= 1)
	{
		if (iLocal_1 < 1)
		{
			NET_LOG(true, "Net Minigame", "Quit because I believed I was alone. NUM_PLAYERS=%s, GAMER_COUNT=%s", I2STR(GET_NUM_PLAYERS()), I2STR(NET_GET_SESSION_GAMER_COUNT()), false, 0);
			iLocal_1 = 41;
			iLocal_2 = 0;
		}
	}
	else
	{
		bVar0 = "";
		iVar1 = Function_394(bParam0, &bVar0);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (iVar1 == 69)
			{
				if (DECOR_GET_INT_VERBOSE(bVar0, "Slot", &bVar2))
				{
					NET_LOG(true, "Net Minigame", "Slot #%s has caught by eGamerRemoved!", I2STR(bVar2), 0, false, 0);
					if (GET_LOCAL_SLOT() != bVar2)
					{
						bVar5 = false;
						bVar4 = false;
						while (bVar4 > 6 && !bVar5)
						{
							if (IS_ACTOR_VALID((*iParam1)[bVar459]))
							{
								bVar3 = Function_276((*iParam1)[bVar459]);
								if (bVar3 == bVar2)
								{
									Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(bVar4, iParam1) };
									NET_LOG(true, "Net Minigame", "MARKED PLAYER '%s' AS LINKDEAD. WAS PLAYER #%s", &Var6, I2STR(bVar4), false, 0);
									PRINT_HELP_FORMAT(10.0f, "Poker_Player_LeftSession", &Var6, "", "", "", 2, 0, 0);
									iParam1[bVar459]->f_60 = 3;
									bVar5 = true;
								}
							}
							bVar4++;
						}
						if (!bVar5)
						{
							NET_LOG(true, "Net Minigame", "Player %s left the game, but we didn't know about them! (may be okay?)", I2STR(bVar3), 0, false, 0);
						}
					}
				}
			}
			iVar1 = Function_394(bParam0, &bVar0);
		}
	}
	Function_393(bParam0);
	return;
}

void Function_393(bool bParam0) //Position: 0x12359 / 74585
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

int Function_394(bool bParam0, bool bParam1) //Position: 0x1236C / 74604
{
	bool bVar0;
	
	*bParam1 = "";
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		*bParam1 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		bVar0 = GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(*bParam1));
		REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, bParam0);
		return bVar0;
	}
	return 0;
}

void Function_395() //Position: 0x123AB / 74667
{
	Function_396(4);
	return;
}

void Function_396(int iParam0) //Position: 0x123B5 / 74677
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
			Function_397(iParam0);
		}
	}
	return;
}

void Function_397(int iParam0) //Position: 0x123E7 / 74727
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_398() //Position: 0x123F6 / 74742
{
	bLocal_4 = true;
	Function_1();
	return;
}

void Function_399() //Position: 0x12402 / 74754
{
	int iVar0;
	
	HUD_ENABLE(false);
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(8);
	Function_419();
	bLocal_26 = CREATE_LAYOUT("LiarsDiceDynamic");
	Function_418();
	Function_409();
	Function_408(&iLocal_29);
	Function_408(&iLocal_32);
	Function_408(&iLocal_35);
	Function_408(&iLocal_38);
	Function_408(&iLocal_41);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_516 = GET_CURRENT_GAME_TIME();
	bLocal_49 = CREATE_CAMERA_IN_LAYOUT(bLocal_26, "LiarsDiceCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(bLocal_49, "nliarsdice");
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_49);
	iLocal_1 = 99;
	if (Function_203())
	{
		Function_402();
	}
	Function_400(&uLocal_61);
	if (Function_260(4, 7) || iLocal_0)
	{
		Function_370(&uLocal_61);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_68 + 4)[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_68 + 4)[iVar0], 1);
			REFERENCE_ACTOR((*&Local_68 + 4)[iVar0]);
			CLEAR_LAST_HIT((*&Local_68 + 4)[iVar0]);
		}
		iVar0++;
	}
	bLocal_14 = CREATE_VOLUME_IN_LAYOUT(bLocal_26, "LiarsDice_StayOutvol", 2, *(&Local_68 + 32), 0.0f, 0.0f, 0.0f, 2,75f, 2.0f, 2,75f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_14);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_14);
	return;
}

void Function_400(int iParam0) //Position: 0x1252F / 75055
{
	Function_401(iParam0);
	return;
}

void Function_401(var uParam0) //Position: 0x1253A / 75066
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_402() //Position: 0x12559 / 75097
{
	Function_406(1);
	uLocal_684 = Function_404("LiarsDiceEvents");
	vLocal_681.x = 0;
	NET_SCRIPTMSG_REGISTER_HANDLER(31, 75153);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&vLocal_519, 145);
	return;
}

void Function_403(int iParam0) //Position: 0x12591 / 75153
{
	vector3 vVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 3);
	switch (vVar0.x)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000005:
			break;
	}
	if (vLocal_681.x != 0)
	{
		LOG_ERROR("Received Player Action despite already having one!");
	}
	vLocal_681 = { StackVal, StackVal, vVar0 };
	return;
}

var Function_404(bool bParam0) //Position: 0x12625 / 75301
{
	bool bVar0;
	
	bVar0 = Function_405();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_405() //Position: 0x12639 / 75321
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_406(bool bParam0) //Position: 0x12675 / 75381
{
	struct<17> Var0;
	
	Function_12(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	if (bParam0)
	{
		Function_92(&Var0, 4);
	}
	Function_5(&Var0);
	Function_6();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 75456);
	return;
}

void Function_407(int iParam0) //Position: 0x126C0 / 75456
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_12(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, 0);
		return;
	}
	Function_13(&iVar7);
	if (Function_356(&Var2))
	{
	}
	bVar8 = Function_346(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_355(&Var2, 1);
	Function_5(&Var2);
	return;
}

void Function_408(var uParam0) //Position: 0x127C3 / 75715
{
	if (!Function_249(uParam0))
	{
		Function_251(uParam0, 0.0f);
	}
	return;
}

void Function_409() //Position: 0x127D8 / 75736
{
	Function_416(&bLocal_487, "liars_dice", 5, 0);
	Function_416(&bLocal_487, "liars_dice_gped", 5, 0);
	Function_416(&bLocal_487, "liars_dice_hillb", 5, 0);
	Function_416(&bLocal_487, "$/fragments/p_gen_diceCup01x", 0, 1);
	Function_416(&bLocal_487, "$/fragments/p_gen_dice01x", 0, 1);
	Function_416(&bLocal_487, "liars_dice", 1, 0);
	Function_416(&bLocal_487, "fake_liars_dice", 1, 0);
	Function_416(&bLocal_487, "nminigames", 10, 0);
	while (!Function_410(&bLocal_487) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	UI_PUSH("Minigame");
	if (!Function_203())
	{
		while (!UNK_0x9D20BDC4("numberSystem") && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	return;
}

bool Function_410(int iParam0) //Position: 0x1290C / 76044
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_415();
	iVar1 = 0;
	if (!Function_200(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_414(iParam0[iVar03], 8);
		}
		else if (Function_413())
		{
			iVar1 = 1;
			Function_414(iParam0[iVar03], 8);
		}
		Function_414(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_200(iParam0[iVar03], 4))
		{
			if (!Function_200(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_200(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_200(iParam0[03], 8) || iVar1));
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
				Function_414(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_200(iParam0[iVar03], 4))
		{
			if (!Function_200(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_414(iParam0[iVar03], 2);
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
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_414(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_414(iParam0[iVar03], 2);
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
	Function_411();
	return 1;
}

void Function_411() //Position: 0x12C87 / 76935
{
	if (!Function_412(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_412(int iParam0) //Position: 0x12CC7 / 76999
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_413() //Position: 0x12CE3 / 77027
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

void Function_414(var uParam0, int iParam1) //Position: 0x12D0E / 77070
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_415() //Position: 0x12D1F / 77087
{
	if (!Function_412(128))
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

var Function_416(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x12D61 / 77153
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_417(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_414(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_417(var uParam0, int iParam1, int iParam2) //Position: 0x12D99 / 77209
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_200(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_414(uParam0[iVar03], 4);
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

void Function_418() //Position: 0x12E5D / 77405
{
	return;
}

void Function_419() //Position: 0x12E63 / 77411
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_16();
	Function_420();
	if (!Global_3384)
	{
		Global_3384 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_420() //Position: 0x12E93 / 77459
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

