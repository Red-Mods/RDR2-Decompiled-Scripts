//Decompiled with MagicRDR v1.0
//Function Count : 427
//Statics Count : 720
//Natives Count : 432
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
	var uLocal_517 = 0;
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
	fLocal_50 = 0.2f;
	fLocal_51 = 0.2f;
	iLocal_52 = 0;
	iLocal_53 = 0;
	bLocal_63 = false;
	iLocal_104 = 4;
	Local_68 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_405();
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
	while (Function_239())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_68 };
		Function_214();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x29D / 669
{
	int iVar0;
	
	Function_212();
	if (iLocal_25)
	{
		Function_211(4, 1);
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
	if (Function_210())
	{
		Function_209();
	}
	SET_DRAW_ACTOR(GET_PLAYER_ACTOR(0), true);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(true);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(Function_208());
	Function_203();
	Function_202();
	RELEASE_LAYOUT_REF(bLocal_26);
	if (Function_210())
	{
		if (!(bLocal_4 || iLocal_3) || iLocal_9 != 2)
		{
			Function_198();
		}
		else
		{
			Function_194(Function_208(), 1);
		}
	}
	else
	{
		Function_192(1);
		Function_191(1);
		Function_191(4);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(Function_208(), 1);
		if (iLocal_3)
		{
			Function_50(Local_68, 1, 1, 1, 0);
		}
		else if (bLocal_4)
		{
			Function_46(Local_68);
			if (!Function_45(Global_76846, 512))
			{
				Function_39(Function_208(), 512, 1, 0);
			}
		}
		else
		{
			Function_19(Local_68);
		}
	}
	SET_ACTOR_INVULNERABILITY(Function_208(), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_15();
	Function_14(Function_208());
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
	SET_ACTOR_UPDATE_PRIORITY(Function_208(), true);
	Function_18(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_208()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_17();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
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
	
	if (!Function_37(bParam0))
	{
		Function_35();
		return;
	}
	iVar0 = Function_34(bParam0);
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
	
	if (!Function_37(bParam1))
	{
		return;
	}
	switch (Function_34(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_29(Function_32(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_34(bParam1), Function_32(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_34(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_34(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_34(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_34(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_34(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_29(int iParam0) //Position: 0x8F5 / 2293
{
	char* cVar0[16];
	
	if (!Function_30())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_30() //Position: 0x92F / 2351
{
	if (Function_31(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_31(bool bParam0, int iParam1) //Position: 0x94A / 2378
{
	return (bParam0 && iParam1) == 0;
}

int Function_32(bool bParam0) //Position: 0x957 / 2391
{
	if (!Function_33(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_33(int iParam0) //Position: 0x977 / 2423
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_34(bool bParam0) //Position: 0x98E / 2446
{
	if (!Function_33(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_35() //Position: 0x9A9 / 2473
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
			Function_36(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_36(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBF0 / 3056
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_37(int iParam0) //Position: 0xC19 / 3097
{
	if (!Function_33(iParam0))
	{
		return 0;
	}
	if (!Function_38(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_38(int iParam0) //Position: 0xC3D / 3133
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC52 / 3154
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_41(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_40(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_40(char* cParam0, int iParam1) //Position: 0xCBE / 3262
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0xCF5 / 3317
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
		if (Function_43(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_42(uVar0))
		{
			case 0x00000002:
				if (!Function_45(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_42(char* cParam0) //Position: 0xD6D / 3437
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

int Function_43(int iParam0) //Position: 0xE0E / 3598
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_44(&iVar1, 2147483648);
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

void Function_44(int iParam0, int iParam1) //Position: 0xE4B / 3659
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0xE5E / 3678
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(int iParam0) //Position: 0xE71 / 3697
{
	Function_47(iParam0);
	Function_23(2);
	Function_20(12);
	Function_21((15 - Function_22(105)));
	return;
}

void Function_47(bool bParam0) //Position: 0xE8F / 3727
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_37(bParam0))
	{
		return;
	}
	iVar0 = Function_34(bParam0);
	if (StackVal == 2)
	{
		Function_28("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_48(Global_6269) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_48(int iParam0) //Position: 0xF35 / 3893
{
	char* cVar0[16];
	
	if (!Function_30())
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

struct<24> Function_49(char* cParam0) //Position: 0xF74 / 3956
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

void Function_50(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x11CA / 4554
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_20(12);
	Function_23(2);
	Function_21((15 - Function_22(105)));
	if (Function_34(bParam0) == 1)
	{
		iVar2 = Function_32(bParam0);
		Function_186(&(Global_3422[iVar240]));
		Function_185(4194304);
		if (bParam3)
		{
			Function_137(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_131(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_137(iVar2, &uVar0, 0);
		}
		bVar1 = Function_130();
		if (bParam1)
		{
			Function_114(iVar2, bParam0, bVar1);
			Function_113();
		}
	}
	Function_56(bParam0, bParam1, uParam2, bVar1);
	if (Function_34(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_55(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_34(bParam0) == 1)
		{
			iVar2 = Function_32(bParam0);
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
	Function_51();
}

void Function_51() //Position: 0x12B7 / 4791
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_52(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_52(int iParam0, bool bParam1) //Position: 0x12E7 / 4839
{
	int iVar0;
	
	iVar0 = Function_53(iParam0);
	if (!Function_33(iVar0))
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

int Function_53(int iParam0) //Position: 0x1324 / 4900
{
	if (!Function_54(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_54(int iParam0) //Position: 0x133E / 4926
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1354 / 4948
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_55(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_55(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_55(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_55(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_55(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_55(57, 0);
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

void Function_56(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x164B / 5707
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_37(bParam0))
	{
		Function_35();
		return;
	}
	bVar0 = Function_34(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_112())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_32(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_48(Global_6269) };
		}
		if (Function_112())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_108();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_112())
	{
		Function_107();
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
			Function_101(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_32(bParam0))
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
			Function_60(1);
			Function_58(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_57(bParam0, &Var14);
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

void Function_57(int iParam0, int iParam1) //Position: 0x189F / 6303
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_58(bool bParam0, int iParam1) //Position: 0x18D9 / 6361
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_59())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_59() //Position: 0x191B / 6427
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_60(bool bParam0) //Position: 0x1924 / 6436
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_90();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_61();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_44(&Global_63095, 1);
		Function_44(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_61() //Position: 0x1975 / 6517
{
	Function_88();
	Function_87();
	Function_87();
	Function_86();
	Function_86();
	Function_85();
	Function_85();
	Function_68(0);
	Function_68(0);
	if (!Function_59())
	{
		Function_66();
		Function_65();
		Function_64();
		Function_63();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_62();
	return;
}

void Function_62() //Position: 0x19C7 / 6599
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

void Function_63() //Position: 0x1ACD / 6861
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

void Function_64() //Position: 0x1B00 / 6912
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

void Function_65() //Position: 0x1C8E / 7310
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

void Function_66() //Position: 0x1E42 / 7746
{
	Function_67(&Global_28260, 1, 0);
	return;
}

void Function_67(int iParam0, bool bParam1, int iParam2) //Position: 0x1E50 / 7760
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
	bool bVar13;
	
	bVar0 = Function_208();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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

struct<8> Function_68(int iParam0) //Position: 0x2041 / 8257
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
					iVar2 = ((Function_84((50 + iVar4)) + Function_84((183 + iVar4))) + Function_84((90 + iVar4)));
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
	Function_69(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x20E7 / 8423
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
		Function_83(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_82(iParam0);
	if (bParam2)
	{
		Function_70(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_70(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2382 / 9090
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_81(390))), 32);
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
					bVar19 = (Function_80(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_80(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_78(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_75(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_72(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_71(), &Var9);
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

var Function_71() //Position: 0x29AF / 10671
{
	int iVar0;
	
	return iVar0;
}

var Function_72(int iParam0) //Position: 0x29B7 / 10679
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x29C8 / 10696
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_74(char* cParam0, bool bParam1) //Position: 0x2ABD / 10941
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_75(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2AD6 / 10966
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_77(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_76(Function_77(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

bool Function_76(int iParam0, int iParam1) //Position: 0x2B3B / 11067
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_77(int iParam0, bool bParam1) //Position: 0x2B4D / 11085
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_78(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2B5F / 11103
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
	if (((Function_79(iParam0) != 19 || Function_79(iParam0) != 17) || Function_79(iParam0) != 10) || Function_79(iParam0) != 9)
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

int Function_79(int iParam0) //Position: 0x2C8F / 11407
{
	return Global_35278[iParam020].f_48;
}

float Function_80(int iParam0) //Position: 0x2C9E / 11422
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_81(int iParam0) //Position: 0x2CD7 / 11479
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_82(int iParam0) //Position: 0x2D14 / 11540
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

int Function_83(int iParam0, bool bParam1, bool bParam2) //Position: 0x2EAE / 11950
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

int Function_84(bool bParam0) //Position: 0x30F2 / 12530
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_85() //Position: 0x3133 / 12595
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
		iVar2 = ((Function_84((50 + iVar3) + 15) + Function_84((183 + iVar3) + 15)) + Function_84((90 + iVar3) + 15));
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
	Function_69(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_86() //Position: 0x31BC / 12732
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
			iVar2 = ((Function_84((50 + iVar3) + 8) + Function_84((183 + iVar3) + 8)) + Function_84((90 + iVar3) + 8));
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
	Function_69(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_87() //Position: 0x3253 / 12883
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
		iVar2 = ((Function_84((50 + iVar3)) + Function_84((183 + iVar3))) + Function_84((90 + iVar3)));
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
	Function_69(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_88() //Position: 0x32D2 / 13010
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_89(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_69(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_89(int iParam0, bool bParam1, int iParam2) //Position: 0x330B / 13067
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
	Function_83(iParam0, bParam1, 1);
	Function_82(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_70(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_90() //Position: 0x3515 / 13589
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_30())
	{
		Function_98(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_98(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_92(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_92(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_91(StackVal, StackVal, vVar0))
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

bool Function_91(vector3 vParam0) //Position: 0x35D0 / 13776
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_92(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x35E8 / 13800
{
	int iVar0;
	
	iVar0 = Function_96(uParam2, uParam3);
	if (Function_95(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_94(&Global_63095, 1);
			Function_44(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_94(&Global_63095, 2);
			Function_44(&Global_63095, 1);
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
		Function_94(&Global_63095, 2);
		Function_44(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_93();
	return StackVal, StackVal, Function_93();
}

vector3 Function_93() //Position: 0x36CF / 14031
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_94(int iParam0, int iParam1) //Position: 0x36D8 / 14040
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_95(int iParam0) //Position: 0x36E7 / 14055
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_96(bool bParam0, bool bParam1) //Position: 0x36FD / 14077
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
				fVar2 = Function_97(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_97(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_95(bVar0) && !bParam1)
	{
		bVar0 = Function_96(bParam0, 1);
	}
	return bVar0;
}

float Function_97(vector3 vParam0, vector3 vParam3) //Position: 0x37C4 / 14276
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_98(var uParam0, int iParam1) //Position: 0x37E1 / 14305
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_100(Global_34573, &vVar4);
	if (!Function_99(Global_30640[0]))
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
	if (!Function_99(Global_30640[2]))
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
	if (!Function_99(Global_30640[1]))
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
	if (!Function_99(Global_30658[1]))
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
	if (!Function_99(Global_30658[3]))
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
	if (!Function_99(Global_30658[2]))
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
	if (!Function_99(Global_30658[4]))
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
	if (!Function_99(Global_30668[0]))
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
	if (!Function_99(Global_30668[1]))
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
	if (!Function_99(Global_30668[2]))
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
	if (!Function_99(Global_30679[0]))
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
	if (!Function_99(Global_30685[0]))
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
	if (!Function_99(Global_30685[1]))
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
	if (!Function_99(Global_30685[2]))
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
	if (!Function_99(Global_30693[0]))
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
	if (!Function_99(Global_30693[1]))
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
	if (!Function_99(Global_30693[2]))
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
	if (!Function_99(Global_30707[2]))
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
	if (!Function_99(Global_30707[3]))
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
	if (!Function_99(Global_30707[0]))
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
	if (!Function_99(Global_30717[0]))
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
	if (!Function_99(Global_30723[2]))
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
	if (!Function_99(Global_30723[1]))
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
	if (!Function_99(Global_30723[0]))
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
	if (!Function_99(Global_30679[1]))
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
	if (!Function_99(Global_30707[1]))
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
	Function_94(&Global_63095, 2);
	Function_44(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_91(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_99(int iParam0) //Position: 0x4008 / 16392
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_31(uVar0, 0x1000000) || Function_31(uVar0, 0x2000000)) || Function_31(uVar0, 0x4000000)) || !Function_31(uVar0, 0x10000000));
}

void Function_100(bool bParam0, int iParam1) //Position: 0x4043 / 16451
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_101(bool bParam0) //Position: 0x4050 / 16464
{
	int iVar0;
	int iVar1;
	
	if (!Function_33(bParam0))
	{
		return;
	}
	switch (Function_34(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_32(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_106(12, 1, 0, 0);
				Function_105(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_106(13, 1, 0, 0);
				Function_105(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_106(14, 1, 0, 0);
				Function_105(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_106(15, 1, 0, 0);
				Function_105(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_106(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_32(bParam0))
			{
				case 0x00000000:
					if (Function_104(bParam0) == 1)
					{
						iVar0 = Function_103(bParam0);
						if (Function_102(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_105(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_105(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_105(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_105(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_105(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_105(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_105(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_105(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_105(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_105(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_105(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_105(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_105(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_105(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_105(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_105(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_105(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_105(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_105(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_105(4, 19);
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
								Function_106(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_106(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_106(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_103(bParam0) == 0)
			{
				if (Function_104(bParam0) == 1)
				{
					Function_106(458, 1, 0, 0);
					iVar0 = Function_32(bParam0);
					if (Function_102(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_105(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_105(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_105(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_105(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_105(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_105(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_105(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_105(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_104(bParam0) == 1)
			{
				Function_106(400, 1, 0, 0);
			}
			switch (Function_32(bParam0))
			{
				case 0x00000001:
					Function_106(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_105(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_105(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_105(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_106(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_105(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_105(6, 9);
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

bool Function_102(int iParam0) //Position: 0x452C / 17708
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_103(bool bParam0) //Position: 0x4542 / 17730
{
	if (!Function_33(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_104(bool bParam0) //Position: 0x4561 / 17761
{
	if (!Function_33(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_105(int iParam0, bool bParam1) //Position: 0x457B / 17787
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

int Function_106(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x45E2 / 17890
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
	Function_83(iParam0, TO_FLOAT(bParam1), 1);
	Function_82(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_70(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_107() //Position: 0x4802 / 18434
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_84(0));
	PLAYSTAT_INT("HC_FAME", Function_84(3));
	PLAYSTAT_INT("HC_HONOR", Function_84(1));
	return;
}

void Function_108() //Position: 0x495A / 18778
{
	int iVar0;
	int iVar1;
	
	if (!Function_54(Global_6269))
	{
		return;
	}
	iVar0 = Function_84(24);
	iVar1 = Function_53(Global_6269);
	if (!Function_54(iVar0) && Function_111(iVar1) < 0)
	{
		Function_69(24, Global_6269, 0);
		Function_109(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_111(Function_53(iVar0)))
	{
		Function_69(24, Global_6269, 0);
		Function_109(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_109(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x49DA / 18906
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
		Function_110(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_110(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4D2C / 19756
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

int Function_111(int iParam0) //Position: 0x4DAF / 19887
{
	if (!Function_37(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_112() //Position: 0x4DC9 / 19913
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_113() //Position: 0x4DF4 / 19956
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

void Function_114(int iParam0, int iParam1, bool bParam2) //Position: 0x4E22 / 20002
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
	
	if (!Function_54(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_129(iParam0);
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
				bVar0 = (Function_84(42) - Global_34165.f_116);
				bVar1 = (Function_84(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_29(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_81(49)) - Global_34165.f_124);
				bVar3 = (Function_84(49) - Global_34165.f_128);
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
				bVar4 = (Function_84(355) - Global_34165.f_116);
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
		iVar15 = Function_128(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_115(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_48(iParam0) };
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

void Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x50BE / 20670
{
	int iVar0;
	bool bVar1;
	
	if (Function_127(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_112())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_84(3);
	Function_124();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_122(3, bVar1);
		if (!bParam2)
		{
			if (!Function_45(Global_76848, 4))
			{
				Function_39(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_106(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_80(3));
	iVar0 = Function_84(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_117(4, Function_121(Global_12976.f_156), 1);
				Function_116(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_117(4, Function_121(Global_12976.f_156), 1);
				Function_116(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_117(4, Function_121(Global_12976.f_156), 1);
				Function_116(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_117(4, Function_121(Global_12976.f_156), 1);
				Function_116(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_117(4, Function_121(Global_12976.f_156), 1);
				Function_116(Global_12976.f_152, Global_12976.f_156);
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

void Function_116(int iParam0, int iParam1) //Position: 0x528D / 21133
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_117(int iParam0, char* cParam1, bool bParam2) //Position: 0x54EB / 21739
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
	Function_109(iParam0, cParam1, 0, 1);
	iVar1 = Function_118();
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

int Function_118() //Position: 0x5670 / 22128
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
	Function_119();
	return 0;
}

void Function_119() //Position: 0x570F / 22287
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
		Function_120(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_120(int iParam0) //Position: 0x57BE / 22462
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

var Function_121(int iParam0) //Position: 0x581C / 22556
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

int Function_122(int iParam0, bool bParam1) //Position: 0x58AB / 22699
{
	bool bVar0;
	int iVar1;
	
	Function_106(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_123(iParam0, 4294967295);
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
	iVar1 = Function_118();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_123(int iParam0, int iParam1) //Position: 0x5A48 / 23112
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

void Function_124() //Position: 0x5A89 / 23177
{
	Function_126(3, 0.0f);
	Function_125(3, 10000.0f);
	return;
}

int Function_125(int iParam0, int iParam1) //Position: 0x5A9F / 23199
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_126(int iParam0, int iParam1) //Position: 0x5ADF / 23263
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_127(int iParam0) //Position: 0x5B1F / 23327
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_128(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5B2E / 23342
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

int Function_129(int iParam0) //Position: 0x5CF6 / 23798
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

var Function_130() //Position: 0x5D8B / 23947
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_131(int iParam0) //Position: 0x5DB0 / 23984
{
	if (!Function_54(iParam0))
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
			Function_115(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_115(25, 1, 0);
			Function_136(1, 1);
			break;
		
		case 0x00000015:
			Function_136(50, 1);
			Function_115(250, 1, 0);
			Function_132(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_115(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_136(50, 1);
			Function_115(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_136(5, 1);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_115(75, 1, 0);
			Function_132(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_136(5, 1);
			Function_115(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_136(25, 1);
			Function_115(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_136(10, 1);
			Function_115(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_115(50, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_115(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_132(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_136(20, 1);
			Function_115(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_136(25, 1);
			Function_115(150, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_136(10, 1);
			Function_115(150, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_115(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_132(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_132(100, 1, 0);
			Function_136(5, 1);
			break;
		
		case 0x0000000F:
			Function_136(3, 1);
			Function_115(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_132(125, 1, 0);
			Function_115(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_136(50, 1);
			Function_115(100, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_136(50, 1);
			Function_115(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_136(75, 1);
			Function_115(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_115(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_115(250, 1, 0);
			Function_132(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_115(75, 1, 0);
			Function_132(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_115(200, 1, 0);
			Function_132(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_115(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_115(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_136(50, 1);
			Function_115(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_136(100, 1);
			Function_115(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_115(200, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_115(300, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_115(300, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_115(300, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_115(500, 1, 0);
			Function_132(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_115(150, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_132(25, 1, 0);
			Function_136(100, 1);
			break;
		
		case 0x0000002A:
			Function_115(150, 1, 0);
			Function_132(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_132(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_132(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_132(150, 1, 0);
			Function_136(100, 1);
			break;
		
		case 0x00000035:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_132(150, 1, 0);
			Function_136(100, 1);
			break;
		
		case 0x00000032:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_132(int iParam0, bool bParam1, bool bParam2) //Position: 0x626B / 25195
{
	int iVar0;
	bool bVar1;
	
	if (Function_127(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_112())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_84(1);
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
			Function_122(1, bVar1);
			if (!bParam2)
			{
				if (!Function_45(Global_76848, 1))
				{
					Function_39(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_135(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_45(Global_76848, 2))
				{
					Function_39(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_106(1, bVar1, 0, 0);
	}
	else
	{
		Function_134(1, (4294967295 * bVar1), 0);
	}
	if (Function_84(1) <= 4294962296)
	{
		Function_69(1, 4294962296, 0);
	}
	else if (Function_84(1) >= 5000)
	{
		Function_69(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_80(1));
	iVar0 = Function_84(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_117(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_117(2, Function_133(Global_12976.f_152), 0);
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
				Function_117(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_117(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_117(2, Function_133(Global_12976.f_152), 1);
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
				Function_117(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_117(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_117(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_117(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_117(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_117(2, Function_133(Global_12976.f_152), 1);
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
				Function_117(2, Function_133(Global_12976.f_152), 0);
			}
			break;
	}
	Function_116(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_133(int iParam0) //Position: 0x658C / 25996
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

int Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0x662F / 26159
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
	Function_82(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_70(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_135(int iParam0, bool bParam1) //Position: 0x682A / 26666
{
	bool bVar0;
	int iVar1;
	
	Function_134(iParam0, bParam1, 0);
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
	iVar1 = Function_123(iParam0, 4294967295);
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
	iVar1 = Function_118();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_136(bool bParam0, bool bParam1) //Position: 0x69C6 / 27078
{
	bool bVar0;
	
	bVar0 = Function_84(0);
	if ((Function_84(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_106(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_84(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_106(597, bParam0, 0, 0);
	}
	if ((Function_84(597) + Function_84(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_137(int iParam0, var uParam1, bool bParam2) //Position: 0x6A91 / 27281
{
	struct<4> Var0;
	
	if (!Function_54(iParam0))
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
			Function_183(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_180(Global_30640[0]);
			Function_180(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_178(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_180(Global_30668[0]);
			Function_170(0);
			Function_168(2, 1);
			Function_168(0, 1);
			Function_168(1, 1);
			break;
		
		case 0x00000003:
			Function_180(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_180(Global_30668[0]);
			Function_180(Global_30640[0]);
			Function_166(0, 1);
			Function_166(15, 1);
			Function_166(9, 1);
			Function_166(12, 1);
			Function_166(16, 1);
			Function_168(3, 1);
			break;
		
		case 0x00000005:
			Function_180(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_178(21, bParam2, 4);
			Function_180(Global_30668[0]);
			Function_168(39, 1);
			break;
		
		case 0x00000007:
			Function_180(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_180(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_165())
				{
					if (!Function_164(4))
					{
						Function_154(4, 0, 0, 1, 0);
					}
				}
			}
			Function_180(Global_30640[0]);
			Function_180(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_180(Global_30640[0]);
			Function_180(Global_30668[2]);
			Function_153(&(Global_29008[Global_30668[2]]), 32768);
			Function_152(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_178(9, bParam2, 4);
			Function_180(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_180(Global_30640[0]);
			Function_180(Global_30658[0]);
			Function_153(&(Global_29008[Global_30658[0]]), 32768);
			Function_152(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_180(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_180(Global_30640[0]);
			Function_180(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_180(Global_30640[1]);
			Function_180(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_180(Global_30679[0]);
			Function_180(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_180(Global_30658[5]);
			Function_180(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_178(21, bParam2, 4);
			Function_180(Global_30640[4]);
			Function_180(Global_30658[4]);
			Function_151(&Global_76847, 0x2000000);
			Function_151(&Global_76847, 0x4000000);
			Function_151(&Global_76847, 4096);
			Function_151(&Global_76847, 8);
			Function_151(&Global_76847, 8388608);
			Function_151(&Global_76847, 524288);
			Function_151(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_180(Global_30640[4]);
			Function_180(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_152(&(Global_29008[Global_30640[4]]), 256);
			Function_180(Global_30640[4]);
			Function_180(Global_30658[0]);
			Function_153(&(Global_29008[Global_30658[0]]), 32768);
			Function_152(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_180(Global_30640[0]);
			Function_180(Global_30640[5]);
			Function_178(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_180(Global_30658[3]);
			Function_153(&(Global_29008[Global_30658[3]]), 32768);
			Function_152(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_178(9, bParam2, 4);
			Function_180(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_153(&(Global_29008[Global_30679[1]]), 32768);
			Function_180(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_178(12, bParam2, 4);
			Function_152(&(Global_29008[Global_30679[1]]), 256);
			Function_180(Global_30668[3]);
			Function_180(Global_30693[0]);
			Function_180(Global_30685[0]);
			Function_170(4);
			Function_166(13, 1);
			Function_166(1, 1);
			Function_166(18, 1);
			Function_168(34, 1);
			Function_168(44, 1);
			Function_168(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_178(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_180(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_180(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_180(Global_30693[0]);
			Function_180(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_180(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_180(Global_30685[0]);
			Function_180(Global_30693[0]);
			Function_180(Global_30693[1]);
			Function_180(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_178(23, bParam2, 3);
			Function_166(23, 1);
			Function_180(Global_30685[0]);
			Function_180(Global_30685[2]);
			Function_153(&(Global_29008[Global_30685[2]]), 32768);
			Function_152(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_178(19, bParam2, 4);
			Function_180(Global_30685[0]);
			Function_180(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_178(24, bParam2, 3);
			Function_166(24, 1);
			Function_180(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_180(Global_30685[0]);
			Function_180(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_180(Global_30693[12]);
			Function_180(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_180(Global_30693[12]);
			Function_180(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_178(25, bParam2, 10);
			Function_180(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_180(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_180(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_178(13, bParam2, 4);
			Function_180(Global_30693[2]);
			Function_180(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_164(8))
				{
					Function_154(8, 0, 0, 1, 0);
				}
			}
			Function_180(Global_30685[0]);
			Function_170(9);
			Function_166(7, 1);
			Function_166(11, 1);
			Function_166(3, 1);
			Function_166(20, 1);
			Function_168(57, 1);
			break;
		
		case 0x0000002A:
			Function_178(2, bParam2, 4);
			Function_180(Global_30717[0]);
			Function_180(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_180(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_180(Global_30717[0]);
			Function_180(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_180(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_180(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_180(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_178(17, bParam2, 4);
			Function_180(Global_30723[0]);
			Function_180(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_149(15))
				{
					Function_144(15, 0, 1);
				}
			}
			Function_105(2, 26);
			Function_152(&(Global_29008[Global_30717[1]]), 256);
			Function_170(11);
			Function_180(Global_30717[1]);
			Function_180(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_180(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_180(Global_30717[1]);
			Function_180(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_180(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_180(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_180(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_180(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_180(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_180(Global_30717[1]);
			Function_138(11);
			Function_170(12);
			Global_16537[1121].f_40 = 0;
			Function_168(56, 1);
			if (!bParam2)
			{
				if (!Function_164(9))
				{
					Function_154(9, 0, 0, 0, 0);
				}
				if (!Function_164(10))
				{
					Function_154(10, 0, 0, 1, 0);
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

void Function_138(int iParam0) //Position: 0x738F / 29583
{
	bool bVar0;
	
	if (!Function_95(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_143(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_143(Global_16537[iParam021].f_72, 0);
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
			Function_139(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_139(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x74FE / 29950
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
		Function_141(Function_142(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_141(Function_142(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_141(StackVal);
				vVar1 = { StackVal, StackVal, Function_141(StackVal) };
				if (Function_140(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_140(vector3 vParam0, vector3 vParam3) //Position: 0x7604 / 30212
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_141(bool bParam0) //Position: 0x7631 / 30257
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_142(vector3 vParam0) //Position: 0x7688 / 30344
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

void Function_143(bool bParam0, bool bParam1) //Position: 0x76D6 / 30422
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

void Function_144(bool bParam0, bool bParam1, bool bParam2) //Position: 0x772A / 30506
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_148(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_149(bParam0))
	{
		if (!Function_164(bParam0))
		{
			Function_154(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_106(457, 1, 0, 0);
		Function_147(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_146(0, 0, 1, 1))
			{
				Function_60(1);
				Function_58(1, 0);
			}
			else
			{
				Function_145();
			}
		}
	}
	return;
}

void Function_145() //Position: 0x78C9 / 30921
{
	return;
}

bool Function_146(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x78CF / 30927
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

void Function_147(bool bParam0, int iParam1) //Position: 0x7973 / 31091
{
	if (!Function_148(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_148(int iParam0) //Position: 0x79C8 / 31176
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_149(int iParam0) //Position: 0x79DE / 31198
{
	if (!Function_148(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_150(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_150(int iParam0, int iParam1) //Position: 0x7A2F / 31279
{
	int iVar0;
	
	if (!Function_148(iParam0))
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

void Function_151(var uParam0, int iParam1) //Position: 0x7A5C / 31324
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_152(var uParam0, int iParam1) //Position: 0x7A6B / 31339
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_153(var uParam0, int iParam1) //Position: 0x7A82 / 31362
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7A91 / 31377
{
	struct<8> Var0;
	
	if (!Function_148(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_163(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_164(bParam0))
	{
		Function_106(456, 1, 0, 0);
		Function_147(bParam0, 2);
		if (bParam2)
		{
			if (!Function_146(0, 0, 1, 1))
			{
				Function_60(1);
				Function_58(1, 5);
			}
			else
			{
				Function_145();
			}
		}
		Function_157(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_156() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_156() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_155(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_30())
		{
			if (!Function_45(Global_76846, 2))
			{
				Function_39(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_155(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7BE6 / 31718
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_48(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_156() //Position: 0x7C61 / 31841
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_157(bool bParam0) //Position: 0x7C8E / 31886
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
			if (Function_161(bParam0, Function_162(bVar24)))
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
			if (Function_161(bParam0, Function_162(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_160(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_159(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_158(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_158(int iParam0) //Position: 0x7E3E / 32318
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_148(iParam0))
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

void Function_159(char* cParam0, int iParam1) //Position: 0x7E95 / 32405
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_160(int iParam0) //Position: 0x7EBA / 32442
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_148(iParam0))
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

bool Function_161(bool bParam0, int iParam1) //Position: 0x7F10 / 32528
{
	int iVar0;
	
	if (!Function_148(bParam0))
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

int Function_162(bool bParam0) //Position: 0x7F6F / 32623
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_163(int iParam0) //Position: 0x7F7B / 32635
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_164(int iParam0) //Position: 0x7F97 / 32663
{
	if (!Function_148(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_150(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_165() //Position: 0x7FE9 / 32745
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_31(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_166(int iParam0, int iParam1) //Position: 0x802B / 32811
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_167(iParam0, iParam1);
	Function_39(Global_34573, 1, 4, 1);
	return 1;
}

int Function_167(int iParam0, int iParam1) //Position: 0x809E / 32926
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_168(int iParam0, int iParam1) //Position: 0x80FA / 33018
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_169(iParam0, iParam1);
	Function_39(Global_34573, 1, 4, 1);
	return 1;
}

int Function_169(int iParam0, int iParam1) //Position: 0x816B / 33131
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_170(int iParam0) //Position: 0x81C5 / 33221
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_95(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_177(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_177(Global_16537[iParam021].f_72, 0);
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
			Function_106(468, 1, 0, 0);
			Function_105(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_155("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_139(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_154(14, 1, 0, 0, 0);
				Function_171(14, 1, 0, 0, 0);
			}
			if (!Function_146(0, 0, 1, 1))
			{
				Function_60(1);
				Function_58(1, 6);
			}
			else
			{
				Function_145();
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
			Function_155("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_106(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_105(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_171(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8472 / 33906
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_148(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_163(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_150(bParam0, 2))
	{
		Function_106(456, 1, 0, 0);
		Function_147(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_155(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_161(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_147(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_146(0, 0, 1, 1))
			{
				Function_60(1);
				Function_58(1, 0);
			}
			else
			{
				Function_145();
			}
		}
		Function_157(bParam0);
		if (StackVal && !Function_31(((((!Function_156() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_31((((Function_156() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_30())
		{
			if (!Function_45(Global_76846, 2))
			{
				Function_39(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_173();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_172(3, bParam1);
				break;
			
			case 0x00000005:
				Function_172(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_172(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_172(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_172(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_172(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_105(2, 24);
				break;
			
			case 0x00000003:
				Function_105(2, 25);
				break;
			
			case 0x0000000F:
				Function_105(2, 26);
				break;
			
			case 0x0000000D:
				Function_105(2, 27);
				break;
			
			case 0x0000000E:
				Function_105(2, 28);
				break;
			}
	}
}

void Function_172(int iParam0, bool bParam1) //Position: 0x8708 / 34568
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_173() //Position: 0x8773 / 34675
{
	if (Function_148(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_176(Global_28180);
			Global_28180.f_8 = Function_174(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_176(Global_28180);
			Global_28180.f_8 = Function_174(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_174(int iParam0, int iParam1) //Position: 0x87EE / 34798
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
					if (Function_52(6, 0) || Function_52(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_175(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_52(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_175(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_175(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_175(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_175(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_52(26, 0))
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
					if (Function_175(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_175(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_175(27) && iVar18)
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
					if (Function_175(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_175(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_175(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_175(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_52(17, 0) && iVar15)
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
					if (Function_175(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_52(6, 0) && Function_175(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_175(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_52(9, 0) && Function_175(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_175(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_52(8, 0) && iVar19)
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
	if (Function_91(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_91(StackVal, StackVal, vVar3))
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
	if (!Function_91(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_175(int iParam0) //Position: 0x93DF / 37855
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x93F4 / 37876
{
	int iVar0;
	int iVar1;
	
	if (!Function_148(iParam0))
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

void Function_177(bool bParam0, bool bParam1) //Position: 0x9443 / 37955
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

void Function_178(bool bParam0, bool bParam1, int iParam2) //Position: 0x9494 / 38036
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_179(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_183(bParam0, 0, 0);
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

bool Function_179(int iParam0, int iParam1) //Position: 0x9502 / 38146
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_180(int iParam0) //Position: 0x9515 / 38165
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_182(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_153(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_106(473, 1, 0, 0);
		iVar0 = Function_181(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_106(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_106(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_106(476, 1, 0, 0);
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
		Function_105(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_105(7, 30);
	}
	if (Function_80(473) <= Function_81(473))
	{
		if (!Function_59())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_181(int iParam0) //Position: 0x9614 / 38420
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_102(iParam0))
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

bool Function_182(var uParam0, int iParam1) //Position: 0x966C / 38508
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_183(bool bParam0, bool bParam1, int iParam2) //Position: 0x9688 / 38536
{
	if (!Function_184(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_208(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_208(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_208(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_184(int iParam0) //Position: 0x96DF / 38623
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_185(int iParam0) //Position: 0x96F1 / 38641
{
	int iVar0;
	
	if (Function_31(iParam0, 1) && Function_31(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_186(int iParam0) //Position: 0x9725 / 38693
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_187(4, 0, 0);
		}
	}
	return;
}

void Function_187(int iParam0, int iParam1, int iParam2) //Position: 0x978C / 38796
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_188(Global_16524, iVar0, 1);
	}
	return;
}

void Function_188(int iParam0, bool bParam1, bool bParam2) //Position: 0x9872 / 39026
{
	int iVar0;
	
	Function_190(iParam0);
	Function_25(bParam1);
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
	Function_189();
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

void Function_189() //Position: 0x99EB / 39403
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_190(int iParam0) //Position: 0x99F7 / 39415
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

void Function_191(int iParam0) //Position: 0x9A3D / 39485
{
	if (Function_31(iParam0, 1) && !Function_31(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_192(int iParam0) //Position: 0x9A6A / 39530
{
	Function_193(&Global_28842, iParam0);
	return;
}

void Function_193(var uParam0, int iParam1) //Position: 0x9A78 / 39544
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_194(bool bParam0, int iParam1) //Position: 0x9A93 / 39571
{
	struct<5> Var0;
	
	Function_197(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_195(256))
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

bool Function_195(int iParam0) //Position: 0x9AE9 / 39657
{
	return Function_196(Global_78617.f_52, iParam0);
}

int Function_196(var uParam0, int iParam1) //Position: 0x9AFA / 39674
{
	return (uParam0 && iParam1) == 0;
}

void Function_197(int iParam0, bool bParam1) //Position: 0x9B07 / 39687
{
	if (bParam1)
	{
		Function_94(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_44(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

int Function_198() //Position: 0x9B42 / 39746
{
	if (Function_201(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_199(16);
	return 1;
}

void Function_199(int iParam0) //Position: 0x9B60 / 39776
{
	Function_200(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_200(var uParam0, int iParam1) //Position: 0x9B99 / 39833
{
	Function_44(uParam0, iParam1);
	return;
}

bool Function_201(var uParam0) //Position: 0x9BA6 / 39846
{
	return Function_196(Global_79336, uParam0);
}

void Function_202() //Position: 0x9BB5 / 39861
{
	return;
}

void Function_203() //Position: 0x9BBB / 39867
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_204(&bLocal_487);
	return;
}

void Function_204(int iParam0) //Position: 0x9BCA / 39882
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_205(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_205(var uParam0, int iParam1) //Position: 0x9BF0 / 39920
{
	if (Function_207(uParam0[iParam13], 4))
	{
		if (Function_207(uParam0[iParam13], 1))
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
			Function_206(uParam0[iParam13], 1);
			Function_206(uParam0[iParam13], 2);
			Function_206(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_206(var uParam0, int iParam1) //Position: 0x9D1E / 40222
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_207(int iParam0, int iParam1) //Position: 0x9D38 / 40248
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_208() //Position: 0x9D55 / 40277
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_209() //Position: 0x9D6A / 40298
{
	FLASH_SET_INT("numberSystem", "nshowTimer", false);
	return;
}

bool Function_210() //Position: 0x9D90 / 40336
{
	return Local_68.f_52;
}

void Function_211(bool bParam0, bool bParam1) //Position: 0x9D9A / 40346
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

void Function_212() //Position: 0x9F0D / 40717
{
	Function_213(9);
	Function_213(8);
	Function_213(7);
	Function_213(6);
	Function_213(5);
	Function_213(4);
	Function_213(3);
	Function_213(2);
	Function_213(1);
	Function_213(0);
	return;
}

int Function_213(int iParam0) //Position: 0x9F47 / 40775
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_214() //Position: 0x9F53 / 40787
{
	int iVar0[3];
	int iVar4;
	
	if (Function_237(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_223(&uLocal_16, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_217();
			Function_216(0);
		}
		else if (iVar4 == 1)
		{
			Function_217();
			Function_216(1);
		}
		else if (iVar4 == 2)
		{
			Function_217();
			Function_216(2);
		}
	}
	else
	{
		Function_215(10, 3);
	}
	return;
}

void Function_215(int iParam0, int iParam1) //Position: 0x9FE1 / 40929
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_216(int iParam0) //Position: 0xA118 / 41240
{
	iLocal_1 = 3;
	iLocal_2 = 0;
	iLocal_9 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: PASS", false, false, false, false);
			break;
		
		case 0x00000001:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: FAIL", false, false, false, false);
			break;
		
		case 0x00000002:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: CANCEL", false, false, false, false);
			break;
		
		default:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: <SOME OTHER REASON>", false, false, false, false);
			break;
	}
	return;
}

void Function_217() //Position: 0xA20A / 41482
{
	Function_218();
	Function_215(10, 3);
	return;
}

void Function_218() //Position: 0xA219 / 41497
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_222())
	{
		Function_221(10, 3);
	}
	else
	{
		Function_219();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_208(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_208());
	UI_POP("nDebugMenu");
	return;
}

void Function_219() //Position: 0xA264 / 41572
{
	Function_220(25, 2);
	return;
}

void Function_220(int iParam0, int iParam1) //Position: 0xA270 / 41584
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0xA46E / 42094
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_222() //Position: 0xA5A5 / 42405
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
				if (!Function_31(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA60C / 42508
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_236(&Var15, &Var0);
	uVar20 = Function_235(*uParam1, &Var15);
	Function_234(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_233(uParam0, uVar20);
	Function_231(StackVal, uParam0, Var15.f_12);
	Function_229(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_228(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_225(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_224(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_224(int iParam0, int iParam1, int iParam2) //Position: 0xA6D3 / 42707
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_225(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA72F / 42799
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
				Function_227(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_227(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
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
				Function_224(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_226(bParam1->f_32);
	}
	else
	{
		Function_226(bParam1->f_32);
	}
	return 0;
}

void Function_226(bool bParam0) //Position: 0xA8B5 / 43189
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_227(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xA8EF / 43247
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_228(int iParam0, var uParam1, int iParam2) //Position: 0xA99D / 43421
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_229(var uParam0, int iParam1, int iParam2) //Position: 0xA9C1 / 43457
{
	switch (Function_230())
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

int Function_230() //Position: 0xAA5D / 43613
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

void Function_231(var uParam0, int iParam1, int iParam2) //Position: 0xAA99 / 43673
{
	switch (Function_232(uParam0))
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

int Function_232(int iParam0) //Position: 0xAB31 / 43825
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_208()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_31(*iParam0, 0x40000000))
		{
			Function_94(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_31(*iParam0, 0x40000000))
		{
			Function_94(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_44(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_208()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_31(*iParam0, 0x20000000))
		{
			Function_94(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_31(*iParam0, 0x20000000))
		{
			Function_94(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_44(iParam0, 0x20000000);
	return 0;
}

var Function_233(var uParam0, int iParam1) //Position: 0xAC7C / 44156
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

void Function_234(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xADCB / 44491
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_235(int iParam0, int iParam1) //Position: 0xAE5E / 44638
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_236(var uParam0, int iParam1) //Position: 0xAE78 / 44664
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_237(int iParam0) //Position: 0xAEC6 / 44742
{
	if (!Function_238(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_238(int iParam0) //Position: 0xAEDA / 44762
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

bool Function_239() //Position: 0xAEFE / 44798
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(Function_208()))
	{
		Function_404();
		return 0;
	}
	bLocal_515 = (GET_CURRENT_GAME_TIME() - fLocal_516);
	if (bLocal_515 < 0.033333f)
	{
		bLocal_515 = 0.0333333f;
	}
	fLocal_516 = GET_CURRENT_GAME_TIME();
	Function_89(432, bLocal_515, 0);
	if (Function_210())
	{
		Function_402(3);
		Function_401();
		Function_398(uLocal_684, &Local_105);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_68 + 4)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_68 + 4)[iVar0]) == Function_208())
			{
				Function_404();
				return 0;
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_404();
		return 0;
	}
	iLocal_3 = 0;
	bLocal_4 = false;
	switch (iLocal_1)
	{
		case 0x00000063:
			Function_396(&Local_105);
			iLocal_1 = 0;
			break;
		
		case 0x00000000:
			Function_383();
			break;
		
		case 0x00000001:
			Function_268();
			break;
		
		case 0x00000003:
			Function_259();
			break;
		
		case 0x00000065:
			iLocal_3 = 1;
			break;
		
		case 0x00000029:
			if (Function_250(&uLocal_64, &iLocal_29))
			{
				Function_216(0);
			}
			break;
		
		default:
			return 0;
	}
	if (iLocal_3)
	{
		Function_240();
		return 0;
	}
	if (bLocal_4)
	{
		Function_404();
		return 0;
	}
	return 1;
}

void Function_240() //Position: 0xB016 / 45078
{
	if (Global_29006 == Global_30707[2])
	{
		Function_249(7, Global_30707[2]);
	}
	if (Function_248(50) && Local_68 != Function_243(Global_30668[1], 7, 4))
	{
		Function_241(64, 1, 0);
	}
	iLocal_3 = 1;
	Function_1();
	return;
}

int Function_241(bool bParam0, bool bParam1, int iParam2) //Position: 0xB057 / 45143
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_242(bParam0), Function_208()) == 0)
		{
			ADD_ITEM(Function_242(bParam0), Function_208(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_242(bParam0), Function_208(), iParam2);
	return 1;
}

var Function_242(bool bParam0) //Position: 0xB0A2 / 45218
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

int Function_243(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB193 / 45459
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_247(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_244(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_244(bParam0, bParam1, bParam2, 4294967295);
}

int Function_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB1F1 / 45553
{
	var uVar0;
	
	if (!Function_246(bParam2))
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
	uVar0 = Function_247(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_245(uVar0);
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

int Function_245(int iParam0) //Position: 0xB346 / 45894
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

bool Function_246(int iParam0) //Position: 0xB384 / 45956
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_247(int iParam0, int iParam1, int iParam2) //Position: 0xB399 / 45977
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_248(int iParam0) //Position: 0xB3B9 / 46009
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_249(int iParam0, int iParam1) //Position: 0xB3CE / 46030
{
	if (!Function_163(3))
	{
		return;
	}
	if (Function_59())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3() || Function_165())
				{
					Function_171(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_171(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_171(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_171(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_171(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_171(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_171(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_164(2) && !Function_149(2))
				{
					Function_171(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_250(var uParam0, int iParam1) //Position: 0xB4E0 / 46304
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
				Function_213(6);
				Function_213(5);
				Function_213(4);
				Function_213(3);
				Function_213(2);
				Function_213(1);
				Function_213(0);
				Function_155("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_257(iParam1);
				iLocal_2 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_251(iParam1, 10.5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_251(var uParam0, int iParam1) //Position: 0xB581 / 46465
{
	if (Function_253(uParam0, iParam1))
	{
		Function_252(uParam0);
		return 1;
	}
	return 0;
}

void Function_252(int iParam0) //Position: 0xB599 / 46489
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_253(int iParam0, float fParam1) //Position: 0xB5AD / 46509
{
	if (Function_256(iParam0))
	{
		if (Function_254(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_254(int iParam0) //Position: 0xB5C9 / 46537
{
	if (Function_256(iParam0))
	{
		if (Function_255(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_255(int iParam0) //Position: 0xB691 / 46737
{
	return Function_31(*iParam0, 2);
}

bool Function_256(int iParam0) //Position: 0xB69E / 46750
{
	return Function_31(*iParam0, 1);
}

void Function_257(int iParam0) //Position: 0xB6AB / 46763
{
	Function_258(iParam0, 0.0f);
	return;
}

void Function_258(var uParam0, float fParam1) //Position: 0xB6B7 / 46775
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_94(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_259() //Position: 0xB6D8 / 46808
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
			Function_212();
			Function_16();
			if (iLocal_9 != 0 && !Function_267(Function_34(Local_68), Function_32(Local_68)))
			{
				Function_106(410, 1, 0, 0);
				Function_105(6, 13);
			}
			iLocal_2 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_105 + 1420)[Local_105.f_15043])
			{
				Function_266(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_49));
				Function_262(&Local_105, Function_264(1));
			}
			if (Function_210())
			{
				EQUIP_ACCESSORY(Function_208(), 0, 1);
				EQUIP_ACCESSORY(Function_208(), 1, 1);
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
				Function_261(GET_GRINGO_FROM_OBJECT(StackVal));
				iVar0++;
			}
			Function_260(&Local_105);
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

void Function_260(int iParam0) //Position: 0xB988 / 47496
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

void Function_261(bool bParam0) //Position: 0xBA05 / 47621
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (iVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			SHOW_PHYSINST(bVar3);
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
	}
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0xBA74 / 47732
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
	Function_263(iParam0[iParam159] + 36, 5);
	DESTROY_OBJECT(iParam0[iParam159]->f_88);
	iParam0[iParam159]->f_68 = 1000;
	strcpy(iParam0[iParam159] + 4, "", 32);
	iParam0->f_1496 = (iParam0->f_1496 - 1);
	return;
}

void Function_263(var uParam0, int iParam1) //Position: 0xBB64 / 47972
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

int Function_264(int iParam0) //Position: 0xBB9A / 48026
{
	return Function_265(Local_105.f_1504, iParam0);
}

int Function_265(int iParam0, int iParam1) //Position: 0xBBAA / 48042
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

void Function_266(var uParam0, bool bParam1) //Position: 0xBC32 / 48178
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
		fVar12 = 0.6f;
		fVar13 = 1.0f;
		fVar14 = 1.3f;
		fVar15 = 0.4f;
		fVar16 = 1.2f;
		fVar17 = -0.4f;
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

bool Function_267(int iParam0, int iParam1) //Position: 0xBDA5 / 48549
{
	int iVar0;
	
	if (!Function_246(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_34(iVar0) != iParam0 && Function_32(iVar0) != iParam1)
		{
			if (Function_104(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_268() //Position: 0xBDEA / 48618
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
		Function_258(&iLocal_29, (Function_254(&iLocal_29) + 0.2f));
	}
	bVar2 = "";
	if ((*&Local_105 + 1420)[Local_105.f_15003])
	{
		bVar2 = Local_105[Function_382(1)59];
	}
	else if (Function_210())
	{
		if (!iLocal_48)
		{
			iLocal_48 = 1;
			Function_381(27, 1);
			Function_212();
		}
	}
	Function_378(&Local_105);
	if (!Function_210())
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			if ((iLocal_101 == 0 && iLocal_101 == 10) && iLocal_101 == 15)
			{
				if (IS_BUTTON_PRESSED(Function_377(), 3, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_102 = iLocal_101;
					Function_381(26, 0);
					bLocal_44 = true;
				}
			}
		}
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		if ((IS_BUTTON_PRESSED(Function_377(), 6, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) && iLocal_101 == 10)
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			Function_376(&uLocal_61);
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
				Function_375();
				Function_381(iLocal_102, 0);
			}
			break;
		
		case 0x00000000:
			iLocal_104 = 0;
			if (bLocal_44)
			{
				Function_16();
				Function_375();
				SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_264(1)59], "liars_dice/idle");
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_44 = false;
			}
			if (Function_370(&uLocal_61, 0))
			{
				Function_155("LiarsDice_AnteHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			AUDIO_RESET_SPEECH_HISTORY();
			UI_EXIT("Dice");
			UI_ENTER("Scores");
			UI_EXIT("nScores.s1");
			UI_EXIT("nScores.s2");
			UI_LABEL_SET_TEXT("nScores.s0", "LiarsDice_CashLabel");
			UI_LABEL_SET_VALUE("nScores.s0", Function_369());
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_AnteOrQuitValue", Function_367(Local_68.f_48), "", "", "", 0, 2, 0, 0, 0);
			}
			iLocal_48 = 0;
			if (IS_BUTTON_PRESSED(Function_377(), 7, 1, 0))
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Function_366(Local_68.f_48, 0);
				UI_LABEL_SET_VALUE("nScores.s0", Function_369());
				SAY_SINGLE_LINE_CONTEXT(Local_105[Function_264(1)59], 479, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				Function_381(1, 0);
				if (Function_210())
				{
					Function_365(&bLocal_49);
				}
			}
			break;
		
		case 0x0000000D:
			Function_364(bLocal_103);
			Function_381(14, 0);
			break;
		
		case 0x0000000E:
			memcpy(&uVar21, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("ACKNOWLEDGE: ", I2STR(bLocal_103)), 6);
			if (Function_350(bLocal_103, 0, 0x3f800000))
			{
				Function_381(bLocal_103, 0);
			}
			break;
		
		case 0x00000001:
			iLocal_104 = 3;
			if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_44)
			{
				Function_16();
				Function_381(2, 1);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING(bVar2, "liars_dice/idle") || bLocal_44)
			{
				UI_EXIT("Scores");
				Function_381(3, 1);
			}
			break;
		
		case 0x00000003:
			Function_365(&bLocal_49);
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
					if (Local_105[Function_265(iVar0, 1)59].f_60 == 3)
					{
						Function_262(&Local_105, Function_265(iVar0, 1));
					}
					else
					{
						Local_105[Function_265(iVar0, 1)59].f_96 = 1;
						Local_105[Function_265(iVar0, 1)59].f_100 = 1;
					}
				}
				iVar0++;
			}
			Function_381(4, 0);
			break;
		
		case 0x00000004:
			iLocal_47 = 0;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					iVar3 = Function_265(iVar0, 1);
					if (Function_349(&Local_105, iVar3))
					{
						if (!Function_210() || iVar3 != Function_264(1))
						{
							Function_347(&Local_105, iVar3);
						}
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/cup_shuffle_pre");
					}
					else if (iVar3 == Function_264(1))
					{
						Function_345(&vLocal_519[Function_346(&Local_105, Function_264(1))9] + 28);
					}
				}
				iVar0++;
			}
			if (Function_370(&uLocal_61, 1))
			{
				Function_155("LiarsDice_ShuffleHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_381(5, 0);
			break;
		
		case 0x00000005:
			if (!Function_210())
			{
				Function_381(6, 0);
			}
			else if (Function_344())
			{
				Function_342();
				Function_381(6, 1);
			}
			break;
		
		case 0x00000006:
			Function_341(&Local_105);
			if (Function_340(&Local_105) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_381(7, 1);
			}
			else if (bLocal_44)
			{
				Function_338(&Local_105);
				Function_381(7, 1);
			}
			break;
		
		case 0x00000007:
			if (Function_210())
			{
				NET_OBJECT_REPLICATION_MODE_START(17, 0);
			}
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					iVar3 = Function_265(iVar0, 1);
					bVar1 = false;
					while (bVar1 <= Function_337(&Local_105, iVar3))
					{
						if (!IS_OBJECT_VALID(bVar33))
						{
							bVar33 = CREATE_OBJECT_LOCATOR(Local_105[iVar359].f_88, Function_71());
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
						if (Function_210() && iVar3 == Function_264(1))
						{
						}
						else
						{
							(*&Local_105[iVar359] + 36)[bVar1] = CREATE_PROP_IN_LAYOUT(bLocal_26, Function_71(), "$/fragments/p_gen_dice01x", vVar34, vVar37, 0);
						}
						Function_334(Function_336(&Local_105, iVar3, bVar1), &Local_105[iVar359] + 36[bVar1]);
						bVar1++;
					}
				}
				iVar0++;
			}
			if (Function_210())
			{
				NET_OBJECT_REPLICATION_MODE_END(17);
			}
			REMOVE_ALL_OBJECT_ATTACHMENTS(Local_105[Function_382(1)59].f_88);
			Function_381(8, 0);
			break;
		
		case 0x00000008:
			iVar3 = Function_382(1);
			iVar40 = Local_105[iVar359].f_60;
			if (uLocal_45 && iVar40 == 2)
			{
				iVar40 = 1;
			}
			iLocal_104 = 1;
			if (Function_349(&Local_105, iVar3))
			{
				switch (iVar40)
				{
					case 0x00000001:
						if (GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1) >= 0.1f && Local_105.f_1524 != 0.0f)
						{
							if (iLocal_28 || bLocal_44)
							{
								Function_332(&bLocal_49, bVar2, Local_105[Function_264(1)59], 1);
							}
							else
							{
								Function_332(&bLocal_49, bVar2, Local_105[Function_264(1)59], 0);
							}
						}
						Local_105[iVar359].f_100 = Local_105.f_1516;
						Local_105[iVar359].f_96 = Local_105.f_1512;
						if (Function_210())
						{
							Function_331();
						}
						Function_257(&iLocal_32);
						Function_257(&iLocal_29);
						Function_381(10, 0);
						break;
					
					case 0x00000000:
						if (GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1) >= 0.1f && Local_105.f_1524 != 0.0f)
						{
							if (iLocal_28 || bLocal_44)
							{
								Function_332(&bLocal_49, bVar2, Local_105[Function_264(1)59], 1);
							}
							else
							{
								Function_332(&bLocal_49, bVar2, Local_105[Function_264(1)59], 0);
							}
						}
						Function_381(11, 0);
						break;
					
					case 0x00000002:
						if (GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1) >= 0.1f && Local_105.f_1524 != 0.0f)
						{
							if (iLocal_28)
							{
								Function_332(&bLocal_49, bVar2, Local_105[Function_264(1)59], 1);
							}
							else
							{
								Function_332(&bLocal_49, bVar2, Local_105[Function_264(1)59], 0);
							}
						}
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(Function_382(1), &Local_105) };
						PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						Function_381(12, 0);
						break;
					
					case 0x00000003:
						NET_LOG(false, "nLiarsDice", "Encountered Linkdead player", false, false, false, false);
						Function_381(12, 0);
						break;
				}
			}
			else
			{
				Function_381(9, 0);
			}
			Function_326(&Local_105);
			break;
		
		case 0x00000009:
			Local_105.f_1500 = Function_325(&Local_105 + 1420, Local_105.f_1500);
			Function_212();
			Function_381(8, 0);
			Function_326(&Local_105);
			break;
		
		case 0x0000000C:
			iVar3 = Function_382(1);
			Function_324(&Local_105);
			if (Local_105[iVar359].f_60 == 3)
			{
				if (Function_323(&Local_105))
				{
					Function_322(&Local_105, &vLocal_681 + 8, &vLocal_681 + 4);
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
						if (Function_370(&uLocal_61, 4))
						{
							Function_155("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						Local_105[iVar359].f_96 = vLocal_681.z;
						Local_105[iVar359].f_100 = vLocal_681.y;
						Function_321(&Local_105, iVar3, vLocal_681.x != 6);
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/verbal_bid");
						Function_381(16, 0);
						break;
					
					case 0x00000002:
					case 0x00000005:
						if (Function_370(&uLocal_61, 5))
						{
							Function_155("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						iLocal_47 = 0;
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iVar3, &Local_105) };
						if (vLocal_681.x == 2)
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_AutoCallOutBluff", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/verbal_callout");
						Function_381(17, 0);
						break;
					
					case 0x00000003:
						if (Function_370(&uLocal_61, 6))
						{
							Function_155("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iVar3, &Local_105) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Call_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						iLocal_47 = 1;
						SET_ACTION_NODE_FOR_ACTOR(Local_105[iVar359], "liars_dice/verbal_bid");
						Function_381(17, 0);
						break;
					
					default:
						break;
				}
				Function_257(&iLocal_29);
				vLocal_681.x = 0;
			}
			Function_326(&Local_105);
			break;
		
		case 0x0000000A:
			Function_319();
			iLocal_104 = 2;
			if (bLocal_44)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_44 = false;
			}
			bVar20 = (Local_105.f_1512 != Function_318(&Local_105) && Local_105.f_1516 != 6);
			if (bVar20 && Function_370(&uLocal_61, 9))
			{
				Function_155("LiarsDice_MaxBidHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_370(&uLocal_61, 2))
			{
				Function_155("LiarsDice_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_317(&Local_105, Function_382(1)))
			{
				if (Function_370(&uLocal_61, 6))
				{
					Function_155("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			if (!Function_210())
			{
				bVar41 = RAND_INT_RANGE(false, true);
				switch (bVar41)
				{
					case 0x00000000:
						iVar42 = Function_325(&Local_105 + 1420, Local_105.f_1500);
						break;
					
					case 0x00000001:
						iVar42 = Function_316(&Local_105 + 1420, Local_105.f_1500);
						break;
				}
				if (!iVar42 != 4294967295 && !iVar42 != Local_105.f_1500)
				{
					bVar43 = RAND_INT_RANGE(false, (100 * CEIL(Function_254(&iLocal_32))));
					if (bVar43 > 30 && Function_254(&iLocal_29) < 4.0f)
					{
						if (IS_ACTION_NODE_PLAYING(Local_105[Function_265(iVar42, 1)59], "liars_dice/cup_idle"))
						{
							if (!bLocal_44)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_265(iVar42, 1)59], "liars_dice/check_lift");
							}
							Function_257(&iLocal_29);
						}
					}
					else if (Function_254(&iLocal_29) < 1.0f)
					{
						if (IS_ACTION_NODE_PLAYING(Local_105[Function_265(iVar42, 1)59], "liars_dice/check_idle"))
						{
							if (!bLocal_44)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_265(iVar42, 1)59], "liars_dice/check_close");
							}
							Function_257(&iLocal_29);
						}
					}
				}
			}
			if (!bVar20)
			{
				Function_313(&Local_105);
				Function_324(&Local_105);
			}
			else
			{
				Function_312(&Local_105);
			}
			if (!HUD_IS_SHOWING_HELP_TEXT() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_254(&iLocal_35) < 8.0f)
				{
					if (Local_105.f_1512 == 0)
					{
						Function_311("LiarsDice_EnterFirstBid", -1.0f, 1, 2, 0, 0, 0, 0);
					}
					else if (bVar20)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_MaxBid", Function_367(Local_105.f_1512), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else if (Local_105.f_1512 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid_Single", Function_367(Local_105.f_1512), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid", Function_367(Local_105.f_1512), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			Function_306(&Local_105, bVar20);
			if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_49) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_49) != 1)
			{
				Function_305(&bLocal_49, &Local_105, Function_264(1), 0);
			}
			if (GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1) < 0.1f)
			{
				if (!IS_ACTION_NODE_PLAYING(bVar2, "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bVar2, "liars_dice/check_sweep");
					fLocal_57 = 0.0f;
					fLocal_60 = -1.0f;
				}
				Function_304(&bLocal_49, &Local_105, Function_382(1), 1);
				Function_381(15, 0);
				Function_303(1);
			}
			else
			{
				Function_303(0);
			}
			break;
		
		case 0x0000000F:
			Function_319();
			if ((GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1) != 0.0f && Local_105.f_1524 != 0.0f) || bLocal_44)
			{
				Function_381(10, 0);
				Function_302(&bLocal_49, &Local_105, Function_382(1), 1, 0.0f);
				Function_301();
				SET_ACTION_NODE_FOR_ACTOR(bVar2, "liars_dice/cup_idle");
			}
			else
			{
				Function_304(&bLocal_49, &Local_105, Function_382(1), 1);
			}
			Function_300(&Local_105, bVar2);
			bVar20 = (Local_105.f_1512 != Function_318(&Local_105) && Local_105.f_1516 != 6);
			if (!bVar20)
			{
				Function_313(&Local_105);
				Function_324(&Local_105);
			}
			else
			{
				Function_312(&Local_105);
			}
			Function_306(&Local_105, bVar20);
			break;
		
		case 0x00000010:
			if ((Function_254(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				Function_16();
				Function_381(9, 1);
			}
			else
			{
				Function_324(&Local_105);
			}
			Function_326(&Local_105);
			break;
		
		case 0x0000000B:
			Function_257(&iLocal_29);
			if (Function_297(&Local_105, Function_382(1)))
			{
				if (Function_370(&uLocal_61, 4))
				{
					Function_155("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_381(16, 0);
			}
			else
			{
				if (Function_370(&uLocal_61, 5))
				{
					Function_155("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_381(17, 0);
			}
			Function_326(&Local_105);
			break;
		
		case 0x00000011:
			iLocal_104 = 3;
			if ((Function_254(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_370(&uLocal_61, 7))
				{
					Function_155("LiarsDice_RevealHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				if (IS_ACTION_NODE_PLAYING(Local_105[Function_264(1)59], "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_264(1)59], "liars_dice/cup_idle");
				}
				Function_212();
				Function_365(&bLocal_49);
				if (!bLocal_44)
				{
					iVar0 = 0;
					while (iVar0 <= 6)
					{
						if ((*&Local_105 + 1420)[iVar03])
						{
							if (Function_349(&Local_105, Function_265(iVar0, 1)))
							{
								if (Function_210() && Local_105[Function_265(iVar0, 1)59].f_60 == 1)
								{
									Function_296(Function_265(iVar0, 1));
								}
								SET_ACTION_NODE_FOR_ACTOR(Local_105[Function_265(iVar0, 1)59], "liars_dice/cup_reveal");
							}
						}
						iVar0++;
					}
				}
				Function_257(&iLocal_29);
				iLocal_54 = Local_105.f_1500;
				bLocal_63 = false;
				Function_381(18, 1);
			}
			else
			{
				Function_312(&Local_105);
				Function_326(&Local_105);
			}
			break;
		
		case 0x00000012:
			if (((IS_ACTION_NODE_PLAYING(Local_105[Function_382(1)59], "liars_dice/idle") && Function_254(&iLocal_29) < 2.0f) && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				Function_295(&bLocal_49, &Local_105, Function_382(1), 1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				bVar44 = Function_294(&(vLocal_519[Function_346(&Local_105, Function_382(1))9]), Local_105.f_1516);
				bLocal_63 = (bLocal_63 + bVar44);
				if (Function_382(1) == Function_264(1))
				{
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_None", Function_292(), Function_310(Local_105.f_1516), I2STR(bLocal_63), false, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_Single", Function_292(), Function_367(bVar44), Function_310(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show", Function_292(), Function_367(bVar44), Function_310(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(Function_382(1), &Local_105) };
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_None", &Var4, Function_310(Local_105.f_1516), I2STR(bLocal_63), false, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_Single", &Var4, Function_367(bVar44), Function_310(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show", &Var4, Function_367(bVar44), Function_310(Local_105.f_1516), I2STR(bLocal_63), 0, 2, 0, 0, 0);
					}
				}
				Function_257(&iLocal_29);
				Function_381(19, 0);
			}
			else
			{
				Function_312(&Local_105);
			}
			break;
		
		case 0x00000013:
			if ((Function_254(&iLocal_29) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				Local_105.f_1500 = Function_291(&Local_105, Local_105.f_1500);
				if (Local_105.f_1500 != iLocal_54 || (bLocal_63 <= Local_105.f_1512 && !iLocal_47))
				{
					Local_105.f_1500 = iLocal_54;
					Function_381(20, 1);
				}
				else
				{
					Function_381(18, 0);
				}
			}
			else
			{
				Function_312(&Local_105);
			}
			break;
		
		case 0x00000014:
			Function_365(&bLocal_49);
			bVar45 = Function_290(&Local_105, Local_105.f_1516);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (iLocal_47)
			{
				if (bVar45 == Local_105.f_1512)
				{
					iVar46 = Local_105[Function_382(1)59].f_64;
					iLocal_55 = StackVal;
					if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn_Single", Function_367(bVar45), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn", Function_367(bVar45), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_257(&iLocal_29);
					Function_381(21, 1);
				}
				else
				{
					iLocal_55 = Local_105.f_1520;
					if (bVar45 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_None", Function_310(Local_105.f_1516), false, false, false, 0, 2, 0, 0, 0);
					}
					else if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_Single", Function_367(bVar45), Function_310(Local_105.f_1516), false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn", Function_367(bVar45), Function_310(Local_105.f_1516), false, false, 0, 2, 0, 0, 0);
					}
					Function_257(&iLocal_29);
					Function_381(22, 1);
				}
			}
			else
			{
				iLocal_55 = Local_105.f_1520;
				if (bVar45 <= Local_105.f_1512)
				{
					if (bVar45 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_None", Function_310(Local_105.f_1516), "", "", "", 0, 2, 0, 0, 0);
					}
					else if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_Single", Function_367(bVar45), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong", Function_367(bVar45), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_257(&iLocal_29);
					Function_381(21, 1);
				}
				else
				{
					if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight_Single", Function_367(Local_105.f_1512), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight", Function_367(Local_105.f_1512), Function_310(Local_105.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_257(&iLocal_29);
					Function_381(22, 1);
				}
			}
			break;
		
		case 0x00000015:
			if ((Function_254(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_370(&uLocal_61, 8))
				{
					Function_155("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iLocal_55, &Local_105) };
				if (iLocal_47)
				{
					if (Function_337(&Local_105, iLocal_55) >= 1)
					{
						if (iLocal_55 == Function_264(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_55 == Function_264(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
				}
				else if (Function_337(&Local_105, iLocal_55) >= 1)
				{
					if (iLocal_55 == Function_264(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_55 == Function_264(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
				}
				Function_381(23, 0);
			}
			else
			{
				Function_312(&Local_105);
			}
			break;
		
		case 0x00000016:
			if ((Function_254(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_370(&uLocal_61, 8))
				{
					Function_155("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				iLocal_55 = Function_382(1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iLocal_55, &Local_105) };
				if (iLocal_47)
				{
					if (Function_337(&Local_105, Function_382(1)) >= 1)
					{
						if (iLocal_55 == Function_264(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_55 == Function_264(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
					iLocal_47 = 0;
				}
				else if (Function_337(&Local_105, Function_382(1)) >= 1)
				{
					if (iLocal_55 == Function_264(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_55 == Function_264(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
				}
				Function_381(23, 0);
			}
			else
			{
				Function_312(&Local_105);
			}
			break;
		
		case 0x00000017:
			Function_289(&bLocal_49, Local_105[iLocal_5559]);
			Function_287(&Local_105, iLocal_55);
			if (Function_337(&Local_105, Function_382(1)) >= 0)
			{
				if (!HUD_IS_FADED())
				{
					if (iLocal_55 == Function_264(1))
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 480, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_286())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 277, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[Function_264(1)59], 481, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			else if (iLocal_55 == Function_264(1))
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
					if (Function_286())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[iLocal_5559], 279, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_105[Function_264(1)59], 483, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_248(50) && Local_68 != Function_243(Global_30668[1], 7, 4))
				{
					Function_241(64, 1, 0);
				}
			}
			Function_381(25, 0);
			break;
		
		case 0x00000019:
			if (!Function_210() || Function_284(Function_346(&Local_105, iLocal_55)))
			{
				Function_342();
				Function_257(&iLocal_29);
				iLocal_56 = Function_337(&Local_105, iLocal_55);
				uLocal_517 = ATTACH_OBJECTS((*&Local_105[iLocal_5559] + 36)[iLocal_56], GET_OBJECT_FROM_ACTOR(Local_105[iLocal_5559]), "hip_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				SET_ACTION_NODE_FOR_ACTOR(Local_105[iLocal_5559], "liars_dice/dice_toss");
				Function_381(24, 0);
			}
			break;
		
		case 0x00000018:
			if (IS_ACTION_NODE_PLAYING(Local_105[iLocal_5559], "liars_dice/idle") || bLocal_44)
			{
				if (IS_ATTACHMENT_VALID(uLocal_517))
				{
					REMOVE_OBJECT_ATTACHMENT(uLocal_517);
					SET_OBJECT_POSITION((*&Local_105[iLocal_5559] + 36)[iLocal_56], *(&Local_105[iLocal_5559] + 104[iLocal_563]));
					SET_OBJECT_ORIENTATION((*&Local_105[iLocal_5559] + 36)[iLocal_56], *(&Local_105[iLocal_5559] + 168[iLocal_563]));
					bVar47 = RAND_INT_RANGE(true, 6);
					Function_334(bVar47, &Local_105[iLocal_5559] + 36[iLocal_56]);
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
						iLocal_55 = Function_265(Function_291(&Local_105, iVar48), 1);
						Function_381(21, 0);
					}
				}
				else if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_44)
				{
					if (!Function_210())
					{
						if (Function_280(&(Local_105[Function_264(1)59])) && Function_279(&Local_105) < 1)
						{
							Local_105.f_1500 = Local_105[iLocal_5559].f_64;
							Function_381(3, 0);
						}
						else
						{
							Function_381(27, 0);
						}
					}
					else if (Function_279(&Local_105) >= 1)
					{
						Local_105.f_1500 = Local_105[iLocal_5559].f_64;
						Function_381(3, 1);
					}
					else
					{
						Function_381(27, 1);
					}
				}
			}
			break;
		
		case 0x0000001B:
			if (Function_279(&Local_105) == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if ((*&Local_105 + 1420)[iVar03])
					{
						if (Function_349(&Local_105, Function_265(iVar0, 1)))
						{
							iVar50 = Function_265(iVar0, 1);
						}
					}
					iVar0++;
				}
				Function_289(&bLocal_49, Local_105[iVar5059]);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iVar50, &Local_105) };
				if (iVar50 == Function_264(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner", &Var4, false, false, false, 0, 2, 0, 0, 0);
				}
				if (!HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(Local_105[iVar5059], 278, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (!Function_210())
				{
					if (iVar50 == Function_264(1))
					{
						bLocal_27 = true;
						Function_136((Local_68.f_48 * Function_278(&Local_105)), 1);
						PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
						bVar51 = Function_337(&Local_105, Function_264(1));
						PRINTSTRING("Player has won and he has a die count of ");
						PRINTINT(bVar51);
						PRINTNL();
						if (bVar51 == 5)
						{
							Function_106(431, 1, 0, 0);
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(10))
							{
								AWARD_ACHIEVEMENT(10);
							}
						}
						if (!HUD_IS_FADED())
						{
							SAY_SINGLE_LINE_CONTEXT(Local_105[Function_264(1)59], 484, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						Function_106(429, ((Local_68.f_48 * Function_278(&Local_105)) - Local_68.f_48), 0, 0);
						Function_106(450, ((Local_68.f_48 * Function_278(&Local_105)) - Local_68.f_48), 0, 0);
						if ((Function_84(597) + Function_84(450)) >= 10000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
							{
								AWARD_ACHIEVEMENT(24);
							}
						}
					}
					else
					{
						Function_106(430, 1, 0, 0);
						Function_134(429, Local_68.f_48, 0);
						Function_134(450, Local_68.f_48, 0);
						bVar52 = DECOR_GET_INT(Local_105[iVar5059], "iAdditionalMoney");
						DECOR_SET_INT(Local_105[iVar5059], "iAdditionalMoney", (bVar52 + (Local_68.f_48 * Function_277(&Local_105))));
					}
				}
				Function_257(&iLocal_29);
			}
			else
			{
				Function_106(430, 1, 0, 0);
				Function_134(429, Local_68.f_48, 0);
				Function_134(450, Local_68.f_48, 0);
				Local_105.f_1508 = 0;
			}
			Function_276(&Local_105);
			Function_381(29, 1);
			break;
		
		case 0x0000001D:
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_105 + 1420)[iVar03])
				{
					Function_275(&Local_105, Function_265(iVar0, 1), 5);
				}
				iVar0++;
			}
			Function_381(30, 0);
			break;
		
		case 0x0000001E:
			if (!Function_210() || Function_344())
			{
				Function_342();
				Function_381(28, 0);
			}
			break;
		
		case 0x0000001C:
			if ((Function_254(&iLocal_29) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_44)
			{
				if (Function_210())
				{
					Function_216(0);
				}
				else
				{
					Function_289(&bLocal_49, Function_208());
					Local_105.f_1500 = Local_105.f_1504;
					Function_381(0, 1);
				}
			}
			break;
		
		case 0x0000001F:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_208()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_208()), "bQuitMinigame"))
				{
					if (bLocal_27)
					{
						Function_216(0);
					}
					else
					{
						Function_216(1);
					}
				}
				else
				{
					Function_381(iLocal_102, 0);
				}
				UI_EXIT("Liarsdice_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_208()), "bQuitMinigame");
			}
			break;
	}
	Function_274(&Local_105);
	Function_273(&Local_105, Function_264(1));
	if (!Function_210())
	{
		if ((IS_BUTTON_RELEASED(Function_377(), 5, 1, true) && !HUD_IS_FADING()) && !HUD_IS_FADED())
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_208()), "bQuitMinigame"))
			{
				UI_ENTER("Liarsdice_Quit_Confirmation_Popup");
			}
			iLocal_102 = iLocal_101;
			iLocal_101 = 31;
		}
	}
	Function_212();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_104)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(2, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_269(1, 3, "LiarsDice_Ante", 1, 0, 0, 0, 0);
				Function_269(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(4, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_269(3, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
				Function_269(1, 6, "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_269(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(3, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_269(1, 6, "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_269(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				if (!IS_BUTTON_DOWN(Function_377(), 1, 1, false))
				{
					Function_269(8, 17, "LiarsDice_LookAround", 1, 0, 0, 0, 0);
				}
				Function_269(7, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
				if (!bVar20)
				{
					Function_269(5, 12, "LiarsDice_DieAmount", 1, 0, 0, 0, 0);
					Function_269(4, 16, "LiarsDice_DieType", 1, 0, 0, 0, 0);
				}
				if (Local_105.f_1520 != 4294967295)
				{
					Function_269(3, 3, "LiarsDice_CallBluff", 1, 0, 0, 0, 0);
					Function_269(2, 4, "LiarsDice_SpotOn", 1, 0, 0, 0, 0);
				}
				if (!bVar20)
				{
					Function_269(1, 1, "LiarsDice_Bid", 1, 0, 0, 0, 0);
				}
				Function_269(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			}
	}
	return;
}

int Function_269(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE332 / 58162
{
	if (!Function_272(iParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_271(iParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_270(iParam0, iParam2);
}

int Function_270(var uParam0, int iParam1) //Position: 0xE36C / 58220
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE37A / 58234
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_272(var uParam0, int iParam1) //Position: 0xE3B4 / 58292
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_273(var uParam0, int iParam1) //Position: 0xE3C2 / 58306
{
	if (iParam1 >= 4294967295)
	{
		SET_CURRENT_MINIGAME_INT("_pxxChipsAmount", uParam0[iParam159]->f_68);
	}
	return;
}

void Function_274(int iParam0) //Position: 0xE3EC / 58348
{
	SET_CURRENT_MINIGAME_INT("_pxxPotAmount", iParam0->f_1508);
	return;
}

void Function_275(int iParam0, int iParam1, int iParam2) //Position: 0xE40B / 58379
{
	int iVar0;
	
	if (!Function_210() || iParam0[iParam159]->f_60 != 1)
	{
		iVar0 = Function_346(iParam0, iParam1);
		vLocal_519[iVar09].f_24 = iParam2;
		Function_345(&vLocal_519[iVar09] + 28);
	}
	return;
}

void Function_276(int iParam0) //Position: 0xE443 / 58435
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1420)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			Function_263(iParam0[StackVal59] + 36, 5);
		}
		iVar0++;
	}
	return;
}

int Function_277(int iParam0) //Position: 0xE480 / 58496
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_280(iParam0[Function_265(iVar0, 1)59]))
			{
				if ((iParam0[Function_265(iVar0, 1)59])->f_68 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_278(int iParam0) //Position: 0xE4CF / 58575
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

int Function_279(int iParam0) //Position: 0xE4FE / 58622
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_349(iParam0, Function_265(iVar0, 1)))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_280(int iParam0) //Position: 0xE53B / 58683
{
	return Function_281(iParam0) < 0;
}

int Function_281(int iParam0) //Position: 0xE548 / 58696
{
	return vLocal_519[Function_282(iParam0)9].f_24;
}

int Function_282(int iParam0) //Position: 0xE55A / 58714
{
	if (Function_210())
	{
		return Function_283(*iParam0);
	}
	return iParam0->f_64;
}

int Function_283(bool bParam0) //Position: 0xE571 / 58737
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

bool Function_284(int iParam0) //Position: 0xE5B3 / 58803
{
	return Function_285(&(uLocal_664[iParam0]), &vLocal_519[iParam09] + 28);
}

bool Function_285(var uParam0, bool bParam1) //Position: 0xE5CC / 58828
{
	return *uParam0 == *bParam1;
}

bool Function_286() //Position: 0xE5D9 / 58841
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

void Function_287(var uParam0, int iParam1) //Position: 0xE5F4 / 58868
{
	if (uParam0[iParam159]->f_60 == 2)
	{
		return;
	}
	Function_288(uParam0, iParam1, 4294967295);
	return;
}

void Function_288(int iParam0, int iParam1, int iParam2) //Position: 0xE60F / 58895
{
	int iVar0;
	
	iVar0 = Function_346(iParam0, iParam1);
	vLocal_519[iVar09].f_24 = (vLocal_519[iVar09].f_24 + iParam2);
	Function_345(&vLocal_519[iVar09] + 28);
	return;
}

void Function_289(bool bParam0, bool bParam1) //Position: 0xE63F / 58943
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(-1.1f, -1.1f, -1.1f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.1f);
	vVar9 = { StackVal, StackVal, vVar0 };
	vVar9.f_4 = (vVar9.y + 1.05f);
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

var Function_290(int iParam0, int iParam1) //Position: 0xE6CA / 59082
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = (iVar1 + Function_294(&(vLocal_519[Function_346(iParam0, Function_265(iVar0, 1))9]), iParam1));
		}
		iVar0++;
	}
	return iVar1;
}

int Function_291(int iParam0, int iParam1) //Position: 0xE70D / 59149
{
	int iVar0;
	
	iVar0 = Function_325(iParam0 + 1420, iParam1);
	while (!Function_349(iParam0, Function_265(iVar0, 1)) && iVar0 == iParam1)
	{
		iVar0 = Function_325(iParam0 + 1420, iVar0);
	}
	if (iParam1 == iVar0)
	{
		return 4294967295;
	}
	return iVar0;
}

var Function_292() //Position: 0xE751 / 59217
{
	if (!Function_210())
	{
		UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	}
	else
	{
		UI_SET_STRING("Generic_Dbuffer32_0", Function_293(GET_LOCAL_SLOT(), 1));
	}
	return "Generic_DBuffer32_0";
}

var Function_293(var uParam0, int iParam1) //Position: 0xE7BD / 59325
{
	return NET_GET_GAMER_HEX_COLOR(uParam0, iParam1);
}

bool Function_294(var uParam0, int iParam1) //Position: 0xE7CA / 59338
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

void Function_295(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE7FB / 59387
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
		fVar10 = -0.26f;
		fVar11 = 1.0f;
		fVar12 = 0.83f;
		fVar13 = 0.08f;
	}
	else if (ACTOR_HAS_ANIM_SET((*iParam1)[iParam259], "liars_dice_gped"))
	{
		fVar10 = -0.26f;
		fVar11 = 1.0f;
		fVar12 = 0.63f;
		fVar13 = 0.07f;
	}
	else if (ACTOR_HAS_ANIM_SET((*iParam1)[iParam259], "liars_dice_hillb"))
	{
		fVar10 = -0.13f;
		fVar11 = 1.0f;
		fVar12 = 0.93f;
		fVar13 = 0.06f;
	}
	else
	{
		fVar10 = -0.26f;
		fVar11 = 1.0f;
		fVar12 = 0.83f;
		fVar13 = 0.08f;
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
	SET_CAMERA_NEAR_CLIP_PLANE(*uParam0, 0.1f);
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

void Function_296(int iParam0) //Position: 0xE9C0 / 59840
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = Function_337(&Local_105, iParam0);
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
		(*&Local_105[iParam059] + 36)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_26, Function_71(), "$/fragments/p_gen_dice01x", vVar2, vVar5, 0);
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

bool Function_297(int iParam0, int iParam1) //Position: 0xEA5F / 59999
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<16> Var5;
	bool bVar21;
	bool bVar22;
	
	bVar0 = Function_294(&(vLocal_519[Function_346(iParam0, iParam1)9]), iParam0->f_1516);
	bVar1 = (Function_318(iParam0) - Function_337(iParam0, iParam1));
	bVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (iParam0->f_1512 == 1)
	{
		bVar3 = 1.8f;
	}
	else
	{
		bVar3 = (TO_FLOAT((iParam0->f_1512 - bVar0)) / bVar2);
	}
	if (Function_318(iParam0) <= ((5 * iParam0->f_1496) / 2))
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
	Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iParam1, iParam0) };
	if (bVar3 < 1.8f)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		HUD_CLEAR_OBJECTIVE();
		PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var5, false, false, false, 0, 2, 0, 0, 0);
		if (!HUD_IS_FADED())
		{
			if (Function_286())
			{
				SAY_SINGLE_LINE_CONTEXT((*iParam0)[iParam159], 275, Function_208(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else if (iParam0[Function_264(1)59]->f_96 != iParam0->f_1512 && iParam0[Function_264(1)59]->f_100 != iParam0->f_1516)
			{
				SAY_SINGLE_LINE_CONTEXT((*iParam0)[Function_264(1)59], 489, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
		if (IS_AMBIENT_SPEECH_PLAYING((*iParam0)[iParam159]))
		{
			SET_ACTION_NODE_FOR_ACTOR((*iParam0)[iParam159], "liars_dice/verbal_callout");
		}
		return 0;
	}
	bVar21 = Function_299(&(vLocal_519[Function_346(iParam0, iParam1)9]));
	bVar0 = Function_294(&(vLocal_519[Function_346(iParam0, iParam1)9]), bVar21);
	bVar1 = (Function_318(iParam0) - Function_337(iParam0, iParam1));
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
	if (bVar3 < 1.5f)
	{
		if (iParam0->f_1516 <= 6)
		{
			iParam0[iParam159]->f_100 = RAND_INT_RANGE(iParam0->f_1516 + 1, 6);
			bVar0 = Function_294(&(vLocal_519[Function_346(iParam0, iParam1)9]), iParam0[iParam159]->f_100);
			iParam0[iParam159]->f_96 = (iParam0->f_1512 + RAND_INT_RANGE(false, bVar4));
			bVar3 = (TO_FLOAT((iParam0[iParam159]->f_96 - bVar0)) / bVar2);
		}
		if (bVar3 < 1.5f)
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
				iParam0[iParam159]->f_100 = Function_298(iParam0);
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
	Function_321(iParam0, iParam1, 0);
	if (!HUD_IS_FADED())
	{
		if (Function_286())
		{
			SAY_SINGLE_LINE_CONTEXT((*iParam0)[iParam159], 276, Function_208(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT((*iParam0)[Function_264(1)59], 490, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
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

var Function_298(int iParam0) //Position: 0xEFA4 / 61348
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
			if (Function_349(iParam0, iVar2))
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

var Function_299(int iParam0) //Position: 0xF01A / 61466
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
		iVar3 = Function_294(iParam0, iVar2);
		if (iVar3 >= iVar1)
		{
			iVar1 = iVar3;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

void Function_300(var uParam0, bool bParam1) //Position: 0xF052 / 61522
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1);
	bVar1 = (fVar0 - uParam0->f_1524);
	if (FABS(bVar1) > 0.1f)
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
	uParam0->f_1524 = ((fLocal_59 / 2.0f) + 0.5f);
	fLocal_57 = fLocal_58;
	fLocal_60 = fLocal_59;
	SET_PANIM_PHASE(bParam1, uParam0->f_1524);
	return;
}

void Function_301() //Position: 0xF0F6 / 61686
{
	fLocal_10 = 0.0f;
	fLocal_11 = 0.0f;
	fLocal_12 = 0.0f;
	fLocal_13 = 0.0f;
	return;
}

void Function_302(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xF108 / 61704
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
	vVar9.f_4 = (vVar9.y + 1.4f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 0.85f);
	iVar15 = Function_325(iParam1 + 1420, iParam1[iParam259]->f_64);
	iVar16 = Function_316(iParam1 + 1420, iParam1[iParam259]->f_64);
	if (bParam4 > (0.0f - 0.2f))
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
			vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS((bParam4 * 0.65f))), vVar26, vVar9), StackVal, StackVal) };
		}
	}
	else if (bParam4 < (0.0f + 0.2f))
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
			vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS((bParam4 * 0.65f))), vVar26, vVar9), StackVal, StackVal) };
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

void Function_303(int iParam0) //Position: 0xF34D / 62285
{
	if (Function_210() && NET_IS_IN_SESSION())
	{
		vLocal_519[GET_LOCAL_SLOT()9].f_32 = iParam0;
	}
	return;
}

void Function_304(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF369 / 62313
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
		fVar15 = 0.05f;
		fVar16 = 0.95f;
		fVar17 = 0.25f;
		fVar18 = -0.18f;
		fVar19 = 0.75f;
		fVar20 = -0.5f;
	}
	else if (ACTOR_HAS_ANIM_SET((*uParam1)[iParam259], "liars_dice_gped"))
	{
		fVar15 = 0.05f;
		fVar16 = 0.95f;
		fVar17 = 0.45f;
		fVar18 = -0.13f;
		fVar19 = 0.75f;
		fVar20 = -0.5f;
	}
	else if (ACTOR_HAS_ANIM_SET((*uParam1)[iParam259], "liars_dice_hillb"))
	{
		fVar15 = 0.1f;
		fVar16 = 0.95f;
		fVar17 = 0.25f;
		fVar18 = 0.22f;
		fVar19 = 0.75f;
		fVar20 = -0.5f;
	}
	else
	{
		fVar15 = 0.05f;
		fVar16 = 0.95f;
		fVar17 = 0.25f;
		fVar18 = -0.18f;
		fVar19 = 0.75f;
		fVar20 = -0.5f;
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
	SET_CAMERA_NEAR_CLIP_PLANE(*bParam0, 0.1f);
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

void Function_305(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF599 / 62873
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
	fVar10 = GET_STICK_X(Function_377(), 1, 1);
	if (fVar10 < -0.5f && fVar10 > 0.5f)
	{
		fVar10 = 0.0f;
	}
	fVar11 = 0.0f;
	if (fVar11 < -0.2f && fVar11 > 0.2f)
	{
		fVar11 = 0.0f;
	}
	fVar12 = (fVar10 * 2.0f);
	fVar13 = (fVar11 * 1.0f);
	fVar14 = (-1.0f * fLocal_12);
	fVar15 = (fVar14 + fVar12);
	fVar16 = (-0.5f * fLocal_13);
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
	vVar24.f_4 = (vVar24.y + 1.4f);
	vVar24 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar24, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	GET_POSITION(bVar0, &vVar1);
	GET_ACTOR_AXIS(bVar0, &vVar4, 2);
	GET_ACTOR_AXIS(bVar0, &vVar7, 0);
	vVar27 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal), StackVal) * Vector(fVar22, fVar22, fVar22), StackVal, StackVal) };
	vVar27.f_4 = (vVar27.y + 0.85f);
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

void Function_306(int iParam0, bool bParam1) //Position: 0xF7AB / 63403
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = Function_382(1);
	bVar1 = (*iParam0)[iVar059];
	bVar2 = Function_309(&iLocal_32);
	if ((IS_BUTTON_PRESSED(Function_377(), 6, 1, 0) && !bParam1) || (bVar2 && Function_323(iParam0)))
	{
		if (bVar2)
		{
			Function_322(iParam0, iParam0[iVar059] + 96, iParam0[iVar059] + 100);
		}
		if (iParam0[iVar059]->f_96 < iParam0->f_1512 || (iParam0[iVar059]->f_100 < iParam0->f_1516 && iParam0[iVar059]->f_96 <= iParam0->f_1512))
		{
			HUD_CLEAR_OBJECTIVE();
			Function_321(iParam0, iVar0, bVar2);
			Function_257(&iLocal_29);
			Function_212();
			SAY_SINGLE_LINE_CONTEXT(bVar1, 486, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_bid");
			}
			if (bVar2)
			{
				Function_308(6, iParam0->f_1516, iParam0->f_1512);
			}
			else
			{
				Function_308(1, iParam0->f_1516, iParam0->f_1512);
			}
			SET_DRAW_ACTOR(bVar1, true);
			Function_381(16, 0);
			if (Function_210())
			{
				Function_209();
			}
		}
		else
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_OBJECTIVE();
			Function_257(&iLocal_35);
			Function_307("LiarsDice_IllegalBid", 0x40800000, 0, 2, 1, 0);
		}
		return;
	}
	if (!iParam0->f_1520 != 4294967295)
	{
		if (IS_BUTTON_PRESSED(Function_377(), 7, 1, 0) || bVar2)
		{
			Function_212();
			Function_257(&iLocal_29);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (bVar2)
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "LiarsDice_AutoCallOutBluff_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "LiarsDice_CallOutBluff_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
			}
			SAY_SINGLE_LINE_CONTEXT(bVar1, 487, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Function_370(&uLocal_61, 5))
			{
				Function_155("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_callout");
			}
			if (bVar2)
			{
				Function_308(5, 0, 0);
			}
			else
			{
				Function_308(2, 0, 0);
			}
			SET_DRAW_ACTOR(bVar1, true);
			Function_381(17, 0);
			if (Function_210())
			{
				Function_209();
			}
			return;
		}
		if (IS_BUTTON_PRESSED(Function_377(), 4, 1, 0))
		{
			SAY_SINGLE_LINE_CONTEXT(bVar1, 488, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Function_370(&uLocal_61, 6))
			{
				Function_155("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_212();
			Function_257(&iLocal_29);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_FORMAT(7.5f, "LiarsDice_Call_SpotOn_You", Function_292(), false, false, false, 0, 2, 0, 0, 0);
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_bid");
			}
			Function_308(3, 0, 0);
			SET_DRAW_ACTOR(bVar1, true);
			iLocal_47 = 1;
			Function_381(17, 0);
			if (Function_210())
			{
				Function_209();
			}
			return;
		}
	}
	return;
}

void Function_307(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFAD3 / 64211
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_48(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

void Function_308(int iParam0, int iParam1, int iParam2) //Position: 0xFB4A / 64330
{
	struct<9> Var0;
	
	if (!Function_210())
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

int Function_309(int iParam0) //Position: 0xFBB0 / 64432
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_210())
	{
		return 0;
	}
	bVar0 = (30.0f - Function_254(iParam0));
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
				Function_155("Minigame_Timeout_Warning", 5.0f, 1, 0, 2, 1, 0);
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

var Function_310(bool bParam0) //Position: 0xFD00 / 64768
{
	switch (bParam0)
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

void Function_311(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xFDEA / 65002
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_48(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_312(int iParam0) //Position: 0xFE6F / 65135
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

void Function_313(int iParam0) //Position: 0xFFAF / 65455
{
	if ((IS_BUTTON_PRESSED(Function_377(), 12, 1, 0) || IS_BUTTON_DOWN(Function_377(), 12, 1, false)) || GET_STICK_Y(Function_377(), 0, 1) > -0.3f)
	{
		if (iLocal_52 == 1)
		{
			fLocal_50 = (fLocal_50 - 0.004f);
		}
		else
		{
			fLocal_50 = 0.2f;
		}
		iLocal_52 = 1;
		if (Function_254(&iLocal_38) < fLocal_50)
		{
			iParam0[Function_382(1)59]->f_96++;
			Function_257(&iLocal_38);
			if (Function_315(&Local_105, iParam0[Function_382(1)59]->f_96) == iParam0[Function_382(1)59]->f_96)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if ((IS_BUTTON_PRESSED(Function_377(), 14, 1, 0) || IS_BUTTON_DOWN(Function_377(), 14, 1, false)) || GET_STICK_Y(Function_377(), 0, 1) < 0.3f)
	{
		if (iLocal_52 == 4294967295)
		{
			fLocal_50 = (fLocal_50 - 0.004f);
		}
		else
		{
			fLocal_50 = 0.2f;
		}
		iLocal_52 = 4294967295;
		if (Function_254(&iLocal_38) < fLocal_50)
		{
			iParam0[Function_382(1)59]->f_96 = (iParam0[Function_382(1)59]->f_96 - 1);
			Function_257(&iLocal_38);
			if (Function_315(&Local_105, iParam0[Function_382(1)59]->f_96) == iParam0[Function_382(1)59]->f_96)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_52 = 0;
		fLocal_50 = 0.2f;
	}
	iParam0[Function_382(1)59]->f_96 = Function_315(iParam0, iParam0[Function_382(1)59]->f_96);
	if (GET_STICK_Y(Function_377(), 1, 1) > -0.3f)
	{
		if (iLocal_53 == 1)
		{
			fLocal_51 = (fLocal_51 - 0.004f);
		}
		else
		{
			fLocal_51 = 0.2f;
		}
		iLocal_53 = 1;
		if (Function_254(&iLocal_41) < fLocal_51)
		{
			iParam0[Function_382(1)59]->f_100++;
			Function_257(&iLocal_41);
			if (Function_314(iParam0[Function_382(1)59]->f_100) == iParam0[Function_382(1)59]->f_100)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if (GET_STICK_Y(Function_377(), 1, 1) < 0.3f)
	{
		if (iLocal_53 == 4294967295)
		{
			fLocal_51 = (fLocal_51 - 0.004f);
		}
		else
		{
			fLocal_51 = 0.2f;
		}
		iLocal_53 = 4294967295;
		if (Function_254(&iLocal_41) < fLocal_51)
		{
			iParam0[Function_382(1)59]->f_100 = (iParam0[Function_382(1)59]->f_100 - 1);
			Function_257(&iLocal_41);
			if (Function_314(iParam0[Function_382(1)59]->f_100) == iParam0[Function_382(1)59]->f_100)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_53 = 0;
		fLocal_51 = 0.2f;
	}
	iParam0[Function_382(1)59]->f_100 = Function_314(iParam0[Function_382(1)59]->f_100);
	return;
}

int Function_314(int iParam0) //Position: 0x10262 / 66146
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

int Function_315(int iParam0, int iParam1) //Position: 0x1027F / 66175
{
	return Function_76(1, Function_77(Function_318(iParam0), Function_76(iParam1, iParam0->f_1512)));
}

var Function_316(var uParam0, int iParam1) //Position: 0x1029B / 66203
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

bool Function_317(int iParam0, int iParam1) //Position: 0x10339 / 66361
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_294(&(vLocal_519[Function_346(iParam0, iParam1)9]), iParam0->f_1516);
	bVar1 = (Function_318(iParam0) - Function_337(iParam0, iParam1));
	fVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (iParam0->f_1512 == 1)
	{
		fVar3 = 1.8f;
	}
	else
	{
		fVar3 = (TO_FLOAT((iParam0->f_1512 - iVar0)) / fVar2);
	}
	if (FABS((1.8f - fVar3)) >= 0.7f)
	{
		return 1;
	}
	PRINTSTRING("TABLE_BID_IS_GOOD_CANDIDATE_FOR_SPOT_ON returning ");
	PRINTFLOAT(FABS((1.8f - fVar3)));
	PRINTNL();
	return 0;
}

int Function_318(int iParam0) //Position: 0x103F3 / 66547
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = (iVar1 + Function_337(iParam0, Function_265(iVar0, 1)));
		}
		iVar0++;
	}
	return iVar1;
}

void Function_319() //Position: 0x1042C / 66604
{
	bool bVar0;
	int iVar1;
	
	if (Function_210())
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			if ((*&Local_105 + 1420)[iVar13] && iVar1 == Local_105.f_1504)
			{
				bVar0 = Local_105[Function_265(iVar1, 1)59];
				if (Function_320(Function_283(bVar0)))
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

bool Function_320(int iParam0) //Position: 0x1050F / 66831
{
	return vLocal_519[iParam09].f_32;
}

void Function_321(int iParam0, int iParam1, bool bParam2) //Position: 0x1051E / 66846
{
	bool bVar0;
	struct<16> Var1;
	
	iParam0->f_1512 = iParam0[iParam159]->f_96;
	iParam0->f_1516 = iParam0[iParam159]->f_100;
	iParam0->f_1520 = iParam1;
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(iParam1, iParam0) };
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
		PRINT_OBJECTIVE_FORMAT(7.5f, bVar0, Function_292(), Function_367(iParam0[iParam159]->f_96), Function_310(iParam0[iParam159]->f_100), false, 0, 2, 0, 0, 0);
	}
	else
	{
		PRINT_OBJECTIVE_FORMAT(7.5f, bVar0, &Var1, Function_367(iParam0[iParam159]->f_96), Function_310(iParam0[iParam159]->f_100), false, 0, 2, 0, 0, 0);
	}
	return;
}

void Function_322(int iParam0, var uParam1, int iParam2) //Position: 0x106F9 / 67321
{
	*uParam1 = iParam0->f_1512 + 1;
	*iParam2 = 1;
	return;
}

bool Function_323(int iParam0) //Position: 0x1070D / 67341
{
	return iParam0->f_1512 > Function_318(iParam0);
}

void Function_324(int iParam0) //Position: 0x1071E / 67358
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

int Function_325(var uParam0, int iParam1) //Position: 0x10875 / 67701
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

void Function_326(int iParam0) //Position: 0x10914 / 67860
{
	bool bVar0;
	bool bVar1;
	
	Function_319();
	bVar0 = false;
	if ((*iParam0 + 1420)[iParam0->f_15043])
	{
		if (Function_280(iParam0[Function_264(1)59]))
		{
			if (Function_382(0) != Function_264(0))
			{
				bVar1 = (*iParam0)[Function_264(1)59];
				if ((GET_ANALOG_BUTTON_VALUE(Function_377(), 1, 1) < 0.1f || Local_105.f_1524 == 0.0f) && !bLocal_44)
				{
					if (!IS_ACTION_NODE_PLAYING(bVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/check_sweep");
						fLocal_57 = 0.0f;
						fLocal_60 = -1.0f;
					}
					Function_304(&bLocal_49, iParam0, Function_264(1), 1);
					Function_300(iParam0, bVar1);
					Function_213(6);
					Function_303(1);
				}
				else
				{
					Function_269(6, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
					if (IS_ACTION_NODE_PLAYING(bVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/cup_idle");
						bVar0 = true;
					}
					Function_303(0);
				}
			}
		}
		else
		{
			Function_303(0);
		}
	}
	else
	{
		Function_303(0);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (Function_382(0) >= 4294967295)
		{
			if (Function_382(0) != Function_264(0))
			{
				Function_332(&bLocal_49, Local_105[Function_382(0)59], Local_105[Function_264(1)59], 1);
			}
		}
	}
	return;
}

struct<64> Function_327(int iParam0, int iParam1) //Position: 0x10A75 / 68213
{
	struct<16> Var0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
	}
	if (!Function_328((*iParam1)[iParam059], &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam1[iParam059] + 4), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_328(bool bParam0, char* cParam1) //Position: 0x10AAE / 68270
{
	struct<8> Var0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_210())
		{
			if (Function_329(bParam0, &Var0))
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

bool Function_329(bool bParam0, char* cParam1) //Position: 0x10B09 / 68361
{
	var uVar0;
	
	uVar0 = Function_283(bParam0);
	strcpy(cParam1, Function_330(uVar0), 32);
	return 1;
}

var Function_330(int iParam0) //Position: 0x10B20 / 68384
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

void Function_331() //Position: 0x10D34 / 68916
{
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	FLASH_SET_INT("numberSystem", "nshowTimer", true);
	FLASH_SET_STRING("numberSystem", "nTimerText", "Minigame_RemainingTime", 1);
	FLASH_SET_INT("numberSystem", "TimerColor", false);
	FLASH_SET_INT("numberSystem", "TimerAlert", false);
	return;
}

void Function_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10DE7 / 69095
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
	vVar9.f_4 = (vVar9.y + 1.4f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	GET_ACTOR_AXIS(bParam1, &vVar6, 0);
	if (bParam1 == bParam2)
	{
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
		vVar12.f_4 = (vVar12.y + 0.85f);
	}
	else
	{
		vVar12 = { StackVal, StackVal, vVar0 };
		vVar12.f_4 = (vVar12.y + 1.07f);
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
				bLocal_685 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_26, Function_71());
			}
			if (!IS_OBJECT_VALID(bLocal_686))
			{
				bLocal_686 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_26, Function_71());
			}
			Function_333(bLocal_685);
			Function_333(bLocal_686);
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
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*bParam0, bLocal_685, bLocal_686, 0.75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*bParam0, bLocal_686, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_28 = 0;
}

void Function_333(bool bParam0) //Position: 0x10FEB / 69611
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_334(bool bParam0, int iParam1) //Position: 0x10FFC / 69628
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
	Function_335(*iParam1);
	SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, Function_335(*iParam1), *iParam1));
	return;
}

vector3 Function_335(bool bParam0) //Position: 0x110D0 / 69840
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

var Function_336(int iParam0, int iParam1, int iParam2) //Position: 0x110F7 / 69879
{
	return vLocal_519[Function_346(iParam0, iParam1)9][iParam2];
}

int Function_337(int iParam0, int iParam1) //Position: 0x1110D / 69901
{
	return vLocal_519[Function_346(iParam0, iParam1)9].f_24;
}

void Function_338(int iParam0) //Position: 0x11121 / 69921
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_349(iParam0, Function_265(iVar0, 1)))
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0)[Function_265(iVar0, 1)59], "liars_dice/cup_idle_skip");
				if (IS_ATTACHMENT_VALID((iParam0[Function_265(iVar0, 1)59])->f_92))
				{
					REMOVE_OBJECT_ATTACHMENT((iParam0[Function_265(iVar0, 1)59])->f_92);
				}
				Function_339((*iParam0)[Function_265(iVar0, 1)59], &vVar1, &vVar4, 0);
				SET_OBJECT_POSITION((iParam0[Function_265(iVar0, 1)59])->f_88, vVar1);
				SET_OBJECT_ORIENTATION((iParam0[Function_265(iVar0, 1)59])->f_88, vVar4);
			}
		}
		iVar0++;
	}
	return;
}

void Function_339(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x111D7 / 70103
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ACTOR_HAS_ANIM_SET(bParam0, "liars_dice"))
		{
			if (bParam3)
			{
				vVar0 = { -0.1758f, 0.9004f, -0.1056f };
				vVar3 = { 0.0f, -174.7526f, 180.0f };
			}
			else
			{
				vVar0 = { -0.0554f, 0.9f, -0.0912f };
				vVar3 = { 0.0f, -165.8963f, 180.0f };
			}
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "liars_dice_hillb"))
		{
			if (bParam3)
			{
				vVar0 = { 0.2916f, 0.9002f, -0.0912f };
				vVar3 = { 0.0f, -23.3589f, 180.0f };
			}
			else
			{
				vVar0 = { 0.1794f, 0.9f, -0.0529f };
				vVar3 = { 0.0f, -22.6924f, 180.0f };
			}
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "liars_dice_gped"))
		{
			if (bParam3)
			{
				vVar0 = { -0.159f, 0.9f, 0.025f };
				vVar3 = { 0.0f, 193.498f, 180.0f };
			}
			else
			{
				vVar0 = { -0.038f, 0.9f, 0.052f };
				vVar3 = { 0.0f, 211.495f, 180.0f };
			}
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
		PRINTSTRING("Marker Position returning ");
		PRINTVECTOR(*uParam1);
		PRINTNL();
		PRINTSTRING("Marker Orientation returning ");
		PRINTVECTOR(*bParam2);
		PRINTNL();
	}
}

int Function_340(int iParam0) //Position: 0x1138A / 70538
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_349(iParam0, Function_265(iVar0, 1)))
			{
				if (!IS_ACTION_NODE_PLAYING((*iParam0)[Function_265(iVar0, 1)59], "liars_dice/cup_idle"))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_341(int iParam0) //Position: 0x113E6 / 70630
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
					Function_263(StackVal, Function_337(iParam0[StackVal59] + 36, iParam0));
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_342() //Position: 0x11481 / 70785
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_519, bVar0))
		{
			Function_343(&(uLocal_664[bVar0]), &vLocal_519[bVar09] + 28);
		}
		bVar0++;
	}
	return;
}

void Function_343(var uParam0, var uParam1) //Position: 0x114B8 / 70840
{
	*uParam0 = *uParam1;
	return;
}

bool Function_344() //Position: 0x114C4 / 70852
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_519, bVar0))
		{
			if (!Function_285(&(uLocal_664[bVar0]), &vLocal_519[bVar09] + 28))
			{
				return 0;
			}
			iVar1 = 1;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_345(int iParam0) //Position: 0x11509 / 70921
{
	*iParam0++;
	return;
}

int Function_346(int iParam0, int iParam1) //Position: 0x11517 / 70935
{
	return Function_282(iParam0[iParam159]);
}

void Function_347(var uParam0, int iParam1) //Position: 0x11526 / 70950
{
	int iVar0;
	
	if (uParam0[iParam159]->f_60 == 2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Function_337(uParam0, iParam1))
	{
		Function_348(&(vLocal_519[Function_346(uParam0, iParam1)9][iVar0]));
		iVar0++;
	}
	Function_345(&vLocal_519[Function_346(uParam0, iParam1)9] + 28);
	return;
}

void Function_348(int iParam0) //Position: 0x11575 / 71029
{
	*iParam0 = RAND_INT_RANGE(true, 6);
	return;
}

bool Function_349(int iParam0, int iParam1) //Position: 0x11583 / 71043
{
	return Function_337(iParam0, iParam1) < 0;
}

bool Function_350(bool bParam0, bool bParam1, float fParam2) //Position: 0x11592 / 71058
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_364(bParam0);
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
	if (Function_363(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_362(&Var0, 0);
		Function_5(&Var0);
		Function_7();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_361(bParam0, iVar6, &uVar7))
	{
		if (Function_360())
		{
			if (!Function_359(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_358(&Var0, 1);
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
				if (Function_351(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
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

bool Function_351(int iParam0) //Position: 0x117E5 / 71653
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_356(iVar0))
		{
			iVar1 = Function_352(iVar0);
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

int Function_352(int iParam0) //Position: 0x11828 / 71720
{
	int iVar0;
	
	Function_355(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_13(&iVar0);
	}
	else
	{
		Function_354(&iVar0, iParam0);
	}
	return Function_353(&iVar0);
}

int Function_353(int iParam0) //Position: 0x1184F / 71759
{
	return *iParam0;
}

void Function_354(var uParam0, int iParam1) //Position: 0x11858 / 71768
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_355(int iParam0) //Position: 0x1186B / 71787
{
	Function_11(iParam0, 4294967286);
	return;
}

bool Function_356(int iParam0) //Position: 0x11879 / 71801
{
	return Function_357(iParam0);
}

int Function_357(bool bParam0) //Position: 0x11884 / 71812
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

void Function_358(int iParam0, bool bParam1) //Position: 0x11925 / 71973
{
	if (bParam1)
	{
		Function_94(iParam0, 2);
	}
	else
	{
		Function_44(iParam0, 2);
	}
	return;
}

bool Function_359(bool bParam0) //Position: 0x1193F / 71999
{
	return Function_31(*bParam0, 2);
}

bool Function_360() //Position: 0x1194C / 72012
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

bool Function_361(int iParam0, var uParam1, int iParam2) //Position: 0x1196A / 72042
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
		if (Function_356(iVar0))
		{
			iVar1 = Function_352(iVar0);
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

void Function_362(int iParam0, bool bParam1) //Position: 0x119BB / 72123
{
	if (bParam1)
	{
		Function_94(iParam0, 1);
	}
	else
	{
		Function_44(iParam0, 1);
	}
	return;
}

bool Function_363(int iParam0) //Position: 0x119D5 / 72149
{
	return Function_31(*iParam0, 1);
}

void Function_364(int iParam0) //Position: 0x119E2 / 72162
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_13(&iVar1);
	if (Function_353(&iVar1) != bVar0)
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
			if (Function_31(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_8(bVar0);
		Function_358(&Var2, 0);
		Function_5(&Var2);
	}
	return;
}

void Function_365(bool bParam0) //Position: 0x11ADF / 72415
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	
	vVar0 = { StackVal, StackVal, *(&Local_68 + 32) };
	vVar0.f_4 = (vVar0.y + 0.2f);
	bVar6 = Function_208();
	GET_ACTOR_AXIS(bVar6, &vVar7, 0);
	GET_ACTOR_AXIS(bVar6, &vVar10, 1);
	GET_ACTOR_AXIS(bVar6, &vVar13, 2);
	Function_100(bVar6, &vVar3);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, vVar3, StackVal) * Vector(-1.2f, -1.2f, -1.2f), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar3, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar13, vVar3, StackVal) * Vector(1.2f, 1.2f, 1.2f), StackVal, StackVal) };
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

int Function_366(bool bParam0, bool bParam1) //Position: 0x11BA9 / 72617
{
	bool bVar0;
	
	bVar0 = Function_84(0);
	if ((Function_84(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_134(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_84(0));
	return 1;
}

var Function_367(bool bParam0) //Position: 0x11C39 / 72761
{
	bool bVar0;
	
	bVar0 = Function_368();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_368() //Position: 0x11C50 / 72784
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

int Function_369() //Position: 0x11D0C / 72972
{
	return Function_84(0);
}

bool Function_370(var uParam0, int iParam1) //Position: 0x11D16 / 72982
{
	if (!Function_374(uParam0, iParam1))
	{
		Function_371(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_371(var uParam0, int iParam1) //Position: 0x11D31 / 73009
{
	Function_94(uParam0[Function_373(iParam1)], Function_372(iParam1));
	return;
}

int Function_372(int iParam0) //Position: 0x11D48 / 73032
{
	return Function_162((iParam0 % 32));
}

int Function_373(int iParam0) //Position: 0x11D56 / 73046
{
	return (iParam0 / 32);
}

bool Function_374(var uParam0, bool bParam1) //Position: 0x11D61 / 73057
{
	return Function_31((*uParam0)[Function_373(bParam1)], Function_372(bParam1));
}

void Function_375() //Position: 0x11D78 / 73080
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_376(var uParam0) //Position: 0x11D8A / 73098
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

int Function_377() //Position: 0x11DA9 / 73129
{
	bool bVar0;
	
	bVar0 = Function_208();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_378(int iParam0) //Position: 0x11DC3 / 73155
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
				Function_380(iParam0[StackVal59]);
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
				Function_379(iParam0[StackVal59], iVar2);
			}
		}
		iVar0++;
	}
	return;
}

void Function_379(var uParam0, bool bParam1) //Position: 0x11F50 / 73552
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ATTACHMENT_VALID(uParam0->f_92))
	{
		if (bParam1)
		{
		}
		REMOVE_OBJECT_ATTACHMENT(uParam0->f_92);
		Function_339(*uParam0, &vVar0, &vVar3, bParam1);
		SET_OBJECT_POSITION(uParam0->f_88, vVar0);
		SET_OBJECT_ORIENTATION(uParam0->f_88, vVar3);
	}
	return;
}

void Function_380(int iParam0) //Position: 0x11F93 / 73619
{
	if (!IS_ATTACHMENT_VALID(iParam0->f_92))
	{
		iParam0->f_92 = ATTACH_OBJECTS_USING_LOCATOR(iParam0->f_88, *iParam0, "pelvis_attachment", "grab", 4294967295);
	}
	return;
}

void Function_381(bool bParam0, bool bParam1) //Position: 0x11FCE / 73678
{
	if (Function_210())
	{
		if (bParam1)
		{
			bLocal_103 = bParam0;
			iLocal_101 = 13;
			NET_LOG(true, "nLiarsDice", "Locking to State %s via %s", I2STR(bParam0), I2STR(iLocal_101), false, false);
		}
		else
		{
			bLocal_101 = bParam0;
			NET_LOG(true, "nLiarsDice", "Moving to State %s", I2STR(bParam0), false, false, false);
		}
	}
	else
	{
		bLocal_101 = bParam0;
	}
	return;
}

int Function_382(int iParam0) //Position: 0x1205B / 73819
{
	return Function_265(Local_105.f_1500, iParam0);
}

void Function_383() //Position: 0x1206B / 73835
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (Function_384())
			{
				if (Function_210())
				{
					Local_105.f_1500 = 0;
				}
				else
				{
					Local_105.f_1500 = Local_105.f_1504;
				}
				Function_289(&bLocal_49, Local_105[Function_264(1)59]);
				if (Function_210())
				{
					NET_OBJECT_REPLICATION_MODE_START(17, 0);
				}
				iVar0 = 0;
				while (iVar0 <= Local_105.f_1420)
				{
					if ((*&Local_105 + 1420)[iVar03])
					{
						Function_339(Local_105[Function_265(iVar0, 1)59], &vVar1, &vVar4, 1);
						Local_105[Function_265(iVar0, 1)59].f_88 = CREATE_PROP_IN_LAYOUT(bLocal_26, Function_71(), "$/fragments/p_gen_diceCup01x", vVar1, vVar4, 1);
					}
					iVar0++;
				}
				if (Function_210())
				{
					NET_OBJECT_REPLICATION_MODE_END(17);
				}
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_257(&iLocal_29);
				iLocal_2 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_1 = 1;
				if (Function_210())
				{
					Function_381(3, 1);
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

bool Function_384() //Position: 0x12177 / 74103
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
					Function_395(bLocal_518);
				}
				else
				{
					bLocal_518 = CREATE_OBJECTSET_IN_LAYOUT(Function_71(), bLocal_26, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_14, bLocal_518, 0, 1);
				bVar0 = false;
				while (bVar0 <= iVar1)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_518));
					if (!Function_394(bVar2))
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
						Function_395(bLocal_518);
					}
					else
					{
						bLocal_518 = CREATE_OBJECTSET_IN_LAYOUT(Function_71(), bLocal_26, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_14, bLocal_518, 0, 1);
					bVar0 = false;
					while (bVar0 <= iVar1)
					{
						bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_518));
						if (!Function_394(bVar2))
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
					Function_388((*&Local_68 + 4)[bVar0], &Local_105, bVar0);
					if (*&Local_68 + 4)[bVar0] != Function_208()
					{
						SET_DRAW_ACTOR((*&Local_68 + 4)[bVar0], false);
					}
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 <= 6)
			{
				Function_387(GET_GRINGO_FROM_OBJECT(StackVal));
				if (!(*&Local_105 + 1420)[bVar03])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), false);
				}
				bVar0++;
			}
			Function_385();
			SAY_SINGLE_LINE_CONTEXT(Local_105[Function_264(1)59], 485, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_15 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING(Function_208(), "liars_dice/idle"))
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
				if (Function_210())
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
			if (Function_350(1008, 1, 0x3f800000))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_385() //Position: 0x123E0 / 74720
{
	int iVar0;
	bool bVar1;
	
	Function_386(Function_208());
	if (Function_210())
	{
		DEEQUIP_ACCESSORY(Function_208(), 0);
		DEEQUIP_ACCESSORY(Function_208(), 1);
	}
	if (Function_127(4))
	{
		iLocal_25 = 1;
		Function_211(4, 0);
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
	if (!Function_210())
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

void Function_386(bool bParam0) //Position: 0x124A7 / 74919
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

void Function_387(bool bParam0) //Position: 0x124CC / 74956
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (iVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			HIDE_PHYSINST(bVar3);
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
	}
	return;
}

int Function_388(bool bParam0, int iParam1, int iParam2) //Position: 0x1253B / 75067
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam2 == 4294967295 && !(*iParam1 + 1420)[iParam23])
	{
		Function_392(iParam1[iParam1->f_149659], bParam0, iParam2);
		(*iParam1 + 1420)[iParam23] = 1;
		(iParam1 + 1420[iParam23])->f_4 = iParam1->f_1496;
		iParam1->f_1496++;
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		if (Function_210())
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
				bVar0 = (Function_391(Function_283(bParam0)) % 3);
				bVar1 = Function_390(bVar0);
			}
			if (!SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, bVar1, 1, 0, 1))
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
			if (!Function_59())
			{
				bVar2 = GET_OBJECT_FROM_ACTOR(bParam0);
				bVar2 = GET_OBJECT_FROM_ACTOR(Function_208());
				Function_389(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_49));
			}
			if (!SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 0, 0, 1))
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
			TASK_PRIORITY_SET(bParam0, 1);
		}
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
		return 0;
	}
	return 1;
}

void Function_389(var uParam0, bool bParam1) //Position: 0x1281D / 75805
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
		fVar12 = 0.6f;
		fVar13 = 1.0f;
		fVar14 = 0.75f;
		fVar15 = 0.4f;
		fVar16 = 1.13f;
		fVar17 = -0.4f;
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

var Function_390(int iParam0) //Position: 0x12990 / 76176
{
	iParam0 = iParam0;
	return "UseCase2";
}

int Function_391(int iParam0) //Position: 0x129A5 / 76197
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

void Function_392(int iParam0, bool bParam1, int iParam2) //Position: 0x129E0 / 76256
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
	else if (Function_283(bParam1) >= 4294967295)
	{
		iParam0->f_60 = 2;
	}
	else
	{
		iParam0->f_60 = 0;
	}
	Function_393(&(vLocal_519[Function_282(iParam0)9]));
	iParam0->f_72 = 0;
	iParam0->f_76 = 0;
	iParam0->f_84 = 0;
	iParam0->f_80 = 0;
	strcpy(iParam0 + 4, "__invalid__", 32);
	if (Function_210())
	{
		if (!Function_329(*iParam0, iParam0 + 4))
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
		*(iParam0 + 104[bVar03]) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, *(iParam0 + 104[bVar03]), StackVal) * Vector(0.25f, 0.25f, 0.25f), StackVal, StackVal) };
		*(iParam0 + 168[bVar03]) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_68 + 32), *(iParam0 + 104[bVar03]), StackVal) };
		(iParam0 + 168[bVar03])->f_4 = UNK_0x9C40E671(iParam0 + 168[bVar03]);
		bVar0++;
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
	return;
}

void Function_393(int iParam0) //Position: 0x12B3D / 76605
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

bool Function_394(bool bParam0) //Position: 0x12B68 / 76648
{
	int iVar0;
	
	if (bParam0 == Function_208())
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

void Function_395(bool bParam0) //Position: 0x12BAB / 76715
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

void Function_396(int iParam0) //Position: 0x12BE3 / 76771
{
	iParam0->f_1524 = 0.0f;
	iParam0->f_1512 = 0;
	iParam0->f_1516 = 1;
	iParam0->f_1520 = 4294967295;
	iParam0->f_1496 = 0;
	iParam0->f_1500 = 0;
	Function_397(iParam0 + 1420);
	return;
}

void Function_397(int iParam0) //Position: 0x12C15 / 76821
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
		DECOR_SET_BOOL(StackVal, "ForceAllowRain", true);
		iVar0++;
	}
	return;
}

void Function_398(bool bParam0, int iParam1) //Position: 0x12D1E / 77086
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
			NET_LOG(true, "Net Minigame", "Quit because I believed I was alone. NUM_PLAYERS=%s, GAMER_COUNT=%s", I2STR(GET_NUM_PLAYERS()), I2STR(NET_GET_SESSION_GAMER_COUNT()), false, false);
			iLocal_1 = 41;
			iLocal_2 = 0;
		}
	}
	else
	{
		bVar0 = "";
		iVar1 = Function_400(bParam0, &bVar0);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (iVar1 == 69)
			{
				if (DECOR_GET_INT_VERBOSE(bVar0, "Slot", &bVar2))
				{
					NET_LOG(true, "Net Minigame", "Slot #%s has caught by eGamerRemoved!", I2STR(bVar2), false, false, false);
					if (GET_LOCAL_SLOT() != bVar2)
					{
						bVar5 = false;
						bVar4 = false;
						while (bVar4 > 6 && !bVar5)
						{
							if (IS_ACTOR_VALID((*iParam1)[bVar459]))
							{
								bVar3 = Function_283((*iParam1)[bVar459]);
								if (bVar3 == bVar2)
								{
									Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_327(bVar4, iParam1) };
									NET_LOG(true, "Net Minigame", "MARKED PLAYER '%s' AS LINKDEAD. WAS PLAYER #%s", &Var6, I2STR(bVar4), false, false);
									PRINT_HELP_FORMAT(10.0f, "Poker_Player_LeftSession", &Var6, "", "", "", 2, 0, 0);
									iParam1[bVar459]->f_60 = 3;
									bVar5 = true;
								}
							}
							bVar4++;
						}
						if (!bVar5)
						{
							NET_LOG(true, "Net Minigame", "Player %s left the game, but we didn't know about them! (may be okay?)", I2STR(bVar3), false, false, false);
						}
					}
				}
			}
			iVar1 = Function_400(bParam0, &bVar0);
		}
	}
	Function_399(bParam0);
	return;
}

void Function_399(bool bParam0) //Position: 0x12F73 / 77683
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

int Function_400(bool bParam0, bool bParam1) //Position: 0x12F86 / 77702
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

void Function_401() //Position: 0x12FC5 / 77765
{
	Function_402(4);
	return;
}

void Function_402(int iParam0) //Position: 0x12FCF / 77775
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
			Function_403(iParam0);
		}
	}
	return;
}

void Function_403(bool bParam0) //Position: 0x13001 / 77825
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_404() //Position: 0x13010 / 77840
{
	bLocal_4 = true;
	Function_1();
	return;
}

void Function_405() //Position: 0x1301C / 77852
{
	int iVar0;
	
	HUD_ENABLE(false);
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(8);
	Function_425();
	bLocal_26 = CREATE_LAYOUT("LiarsDiceDynamic");
	Function_424();
	Function_415();
	Function_414(&iLocal_29);
	Function_414(&iLocal_32);
	Function_414(&iLocal_35);
	Function_414(&iLocal_38);
	Function_414(&iLocal_41);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_516 = GET_CURRENT_GAME_TIME();
	bLocal_49 = CREATE_CAMERA_IN_LAYOUT(bLocal_26, "LiarsDiceCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(bLocal_49, "nliarsdice");
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_49);
	iLocal_1 = 99;
	if (Function_210())
	{
		Function_408();
	}
	Function_406(&uLocal_61);
	if (Function_267(4, 7) || iLocal_0)
	{
		Function_376(&uLocal_61);
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
	bLocal_14 = CREATE_VOLUME_IN_LAYOUT(bLocal_26, "LiarsDice_StayOutvol", 2, *(&Local_68 + 32), 0.0f, 0.0f, 0.0f, 2.75f, 2.0f, 2.75f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_14);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_14);
	return;
}

void Function_406(int iParam0) //Position: 0x13149 / 78153
{
	Function_407(iParam0);
	return;
}

void Function_407(var uParam0) //Position: 0x13154 / 78164
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

void Function_408() //Position: 0x13173 / 78195
{
	Function_412(1);
	uLocal_684 = Function_410("LiarsDiceEvents");
	vLocal_681.x = 0;
	NET_SCRIPTMSG_REGISTER_HANDLER(31, 78251);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&vLocal_519, 145);
	return;
}

void Function_409(bool bParam0) //Position: 0x131AB / 78251
{
	vector3 vVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 3);
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

var Function_410(bool bParam0) //Position: 0x1323F / 78399
{
	bool bVar0;
	
	bVar0 = Function_411();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_411() //Position: 0x13253 / 78419
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_412(bool bParam0) //Position: 0x1328F / 78479
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
	Var0.f_8 = 4294967286;
	if (bParam0)
	{
		Function_94(&Var0, 4);
	}
	Function_5(&Var0);
	Function_6();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 78561);
	return;
}

void Function_413(bool bParam0) //Position: 0x132E1 / 78561
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	Function_12(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_13(&iVar7);
	if (Function_363(&Var2))
	{
	}
	bVar8 = Function_353(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_362(&Var2, 1);
	Function_5(&Var2);
	return;
}

void Function_414(var uParam0) //Position: 0x133E4 / 78820
{
	if (!Function_256(uParam0))
	{
		Function_258(uParam0, 0.0f);
	}
	return;
}

void Function_415() //Position: 0x133F9 / 78841
{
	Function_422(&bLocal_487, "liars_dice", 5, 0);
	Function_422(&bLocal_487, "liars_dice_gped", 5, 0);
	Function_422(&bLocal_487, "liars_dice_hillb", 5, 0);
	Function_422(&bLocal_487, "$/fragments/p_gen_diceCup01x", 0, 1);
	Function_422(&bLocal_487, "$/fragments/p_gen_dice01x", 0, 1);
	Function_422(&bLocal_487, "liars_dice", 1, 0);
	Function_422(&bLocal_487, "fake_liars_dice", 1, 0);
	Function_422(&bLocal_487, "nminigames", 10, 0);
	while (!Function_416(&bLocal_487) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	UI_PUSH("Minigame");
	if (!Function_210())
	{
		while (!UNK_0x9D20BDC4("numberSystem") && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	return;
}

bool Function_416(int iParam0) //Position: 0x1352D / 79149
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_421();
	iVar1 = 0;
	if (!Function_207(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_420(iParam0[iVar03], 8);
		}
		else if (Function_419())
		{
			iVar1 = 1;
			Function_420(iParam0[iVar03], 8);
		}
		Function_420(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_207(iParam0[iVar03], 4))
		{
			if (!Function_207(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_207(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_207(iParam0[03], 8) || iVar1));
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
				Function_420(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_207(iParam0[iVar03], 4))
		{
			if (!Function_207(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_420(iParam0[iVar03], 2);
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
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_420(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_420(iParam0[iVar03], 2);
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
	Function_417();
	return 1;
}

void Function_417() //Position: 0x138A8 / 80040
{
	if (!Function_418(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_418(int iParam0) //Position: 0x138E8 / 80104
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_419() //Position: 0x13904 / 80132
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

void Function_420(var uParam0, int iParam1) //Position: 0x1392F / 80175
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_421() //Position: 0x13940 / 80192
{
	if (!Function_418(128))
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

var Function_422(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x13982 / 80258
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_423(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_420(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_423(var uParam0, int iParam1, int iParam2) //Position: 0x139BA / 80314
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_207(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_420(uParam0[iVar03], 4);
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

void Function_424() //Position: 0x13A7E / 80510
{
	return;
}

void Function_425() //Position: 0x13A84 / 80516
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_16();
	Function_426();
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

void Function_426() //Position: 0x13AB4 / 80564
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

