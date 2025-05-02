//Decompiled with MagicRDR v1.0
//Function Count : 338
//Statics Count : 523
//Natives Count : 420
//Parameters Count : 30

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	float fLocal_18 = 0.0f;
	float fLocal_19 = 0.0f;
	float fLocal_20 = 0.0f;
	float fLocal_21 = 0.0f;
	float fLocal_22 = 0.0f;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	float fLocal_25 = 0.0f;
	float fLocal_26 = 0.0f;
	float fLocal_27 = 0.0f;
	float fLocal_28 = 0.0f;
	float fLocal_29 = 0.0f;
	float fLocal_30 = 0.0f;
	float fLocal_31 = 0.0f;
	float fLocal_32 = 0.0f;
	float fLocal_33 = 0.0f;
	float fLocal_34 = 0.0f;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	bool bLocal_38 = false;
	var uLocal_39 = 0;
	float fLocal_40 = 0.0f;
	float fLocal_41 = 0.0f;
	float fLocal_42 = 0.0f;
	float fLocal_43 = 0.0f;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0.0f;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	float fLocal_61 = 0.0f;
	bool bLocal_62 = false;
	float fLocal_63 = 0.0f;
	float fLocal_64 = 0.0f;
	float fLocal_65 = 0.0f;
	bool bLocal_66 = false;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<15> Local_69 = { 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<66> Local_99 = { 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_274 = 2;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 2;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 2;
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
	var uLocal_365 = 4;
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
	var uLocal_404 = 2;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 2;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 2;
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
	bool bLocal_427 = false;
	float fLocal_428 = 0.0f;
	bool bLocal_429 = false;
	int iLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	bool bLocal_436 = false;
	float fLocal_437 = 0.0f;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	struct<6> Local_443 = { 2, 0, 0, 0, 0, 0 } ;
	var uLocal_449 = 2;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	float fLocal_455 = 0.0f;
	float fLocal_456 = 0.0f;
	float fLocal_457 = 0.0f;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	int iLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 4;
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
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	struct<15> ScriptParam_0 = { 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[64];
	
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	fLocal_22 = 0,65f;
	fLocal_23 = 0,78f;
	fLocal_24 = -0,3f;
	fLocal_25 = 0,3f;
	fLocal_26 = -0,75f;
	fLocal_27 = 0,75f;
	fLocal_28 = 5.0f;
	fLocal_29 = 1.0f;
	fLocal_30 = 0.0f;
	fLocal_31 = 0,15f;
	fLocal_32 = -1.0f;
	fLocal_33 = -1.0f;
	fLocal_34 = fLocal_23;
	bLocal_35 = false;
	fLocal_42 = 0.0f;
	fLocal_43 = 0,03f;
	iLocal_44 = 0;
	fLocal_57 = 0,2f;
	iLocal_67 = 0;
	iLocal_68 = 9;
	iLocal_440 = 4294967295;
	iLocal_441 = 0;
	fLocal_455 = 2,5f;
	fLocal_456 = 0,5f;
	iLocal_458 = 0;
	iLocal_459 = 0;
	Local_69 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bVar0 = false;
	while (bVar0 <= 4)
	{
		strcpy(&cVar2, "Seat ", 64);
		stradd(&cVar2, I2STR(bVar0), 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": isOccupied", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iPlayerIndex", 64);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 2)
	{
		strcpy(&cVar2, "Player ", 64);
		stradd(&cVar2, I2STR(bVar0), 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, "n: iSeatId", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iNumWins", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iCurrentHorseShoeId", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iScore", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iPreviousScore", 64);
		stradd(&cVar2, ".Shoe[", 64);
		bVar1 = false;
		while (bVar1 <= 2)
		{
			cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
			stradd(&cVar18, I2STR(bVar1), 64);
			stradd(&cVar18, "].Distance", 64);
			bVar1++;
		}
		bVar0++;
	}
	Function_312();
	while (Function_216())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_69 };
		Function_192();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x226 / 550
{
	int iVar0;
	
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED() || HUD_IS_FADING())
		{
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	SET_GLOBAL_DISABLE_SPU_COLLIDER_UPDATE(0);
	GRINGO_ALLOW_ACTIVATION(&Local_69 + 104, true);
	GRINGO_ALLOW_ACTIVATION(&Local_69 + 112, true);
	ALLOW_TUMBLEWEEDS(1);
	SET_AUTO_CONVERSATION_LOOK(GET_PLAYER_ACTOR(0), 1);
	if (IS_ACTOR_VALID(&Local_69 + 4[0]))
	{
		AI_RESET_NAV_SUBGRID_CELL_SIZE(&Local_69 + 4[0]);
		SET_ACTOR_UPDATE_PRIORITY(&Local_69 + 4[0], bLocal_16);
		SET_AUTO_CONVERSATION_LOOK(&Local_69 + 4[0], 1);
		DEREFERENCE_ACTOR(&Local_69 + 4[0]);
		REMOVE_ALL_OBJECT_ATTACHMENTS(&Local_69 + 4[0]);
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_69 + 4[0]);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (IS_OBJECT_VALID(&Local_99[066] + 164[iVar0]))
			{
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&Local_99[066] + 164[iVar0]));
			}
			iVar0++;
		}
	}
	AI_RESET_NAV_SUBGRID_CELL_SIZE(Function_191());
	Function_190(Function_191());
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_69 + 72);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_69 + 72);
	RESET_TREE_TYPE_CLEARING();
	SET_ANIMATION_OVERRIDE_SCALE(Function_191(), 1.0f);
	Function_189();
	UI_EXIT("HorseShoes");
	UI_EXIT("Scorebox");
	UI_EXIT("Scorebox_Cash");
	UI_EXIT("Scorebox_Bet");
	Function_187();
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	RESET_ANIM_SET_FOR_ACTOR(GET_PLAYER_ACTOR(0), 0);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	Function_183();
	HUD_ENABLE(1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(GET_PLAYER_ACTOR(0));
	Function_178();
	Function_177();
	RELEASE_LAYOUT_REF(&bLocal_38);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(GET_PLAYER_ACTOR(0), 1);
	Function_175(1);
	Function_174(1);
	Function_174(4);
	if (bLocal_2)
	{
		Function_26(Local_69, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_22(Local_69);
	}
	else
	{
		Function_2(Local_69);
	}
	TASK_CLEAR(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x3E0 / 992
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x401 / 1025
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x41E / 1054
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x441 / 1089
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x458 / 1112
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x4FA / 1274
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x51D / 1309
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_9() //Position: 0x567 / 1383
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x580 / 1408
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x5D3 / 1491
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x6FD / 1789
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x737 / 1847
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x752 / 1874
{
	return (bParam0 && iParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x75F / 1887
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x77F / 1919
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x796 / 1942
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x7B1 / 1969
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9F8 / 2552
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0xA24 / 2596
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0xA48 / 2632
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0xA5D / 2653
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0xA7B / 2683
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xB21 / 2849
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0xB60 / 2912
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xDB6 / 3510
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_169(&(Global_6667[iVar228]));
		Function_168(4194304);
		if (&bParam3)
		{
			Function_120(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_114(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_120(iVar2, &uVar0, 0);
		}
		bVar1 = Function_113();
		if (&bParam1)
		{
			Function_97(iVar2, iParam0, bVar1);
			Function_96();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_27();
}

void Function_27() //Position: 0xEAA / 3754
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xEDC / 3804
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
	if (!Function_16(iVar0))
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

int Function_29(int iParam0) //Position: 0xF1A / 3866
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xF34 / 3892
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xF4A / 3914
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
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1247 / 4679
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x12BC / 4796
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x12F6 / 4854
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1372 / 4978
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1385 / 4997
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

int Function_37(int iParam0) //Position: 0x1426 / 5158
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&iVar1, 2147483648);
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

void Function_38(int iParam0, int iParam1) //Position: 0x1463 / 5219
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1479 / 5241
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_95())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_95())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_91();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_95())
	{
		Function_90();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_83(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
						switch (Function_15(iParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_40(int iParam0, struct<41> Param1) //Position: 0x16D7 / 5847
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1715 / 5909
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_42(bool bParam0) //Position: 0x1754 / 5972
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_72();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x17A9 / 6057
{
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_67();
	Function_67();
	Function_50(0);
	Function_50(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x17F4 / 6132
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

void Function_45() //Position: 0x18FA / 6394
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

void Function_46() //Position: 0x192D / 6445
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_47() //Position: 0x1AC0 / 6848
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_48() //Position: 0x1C79 / 7289
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1C87 / 7303
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
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_191();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
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

struct<8> Function_50(int iParam0) //Position: 0x1EA4 / 7844
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
					iVar2 = ((Function_66((50 + iVar4)) + Function_66((183 + iVar4))) + Function_66((90 + iVar4)));
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
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F4B / 8011
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
		Function_65(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_64(iParam0);
	if (&bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x21E7 / 8679
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_63(390))), 32);
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
					bVar19 = (Function_62(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_62(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_60(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_57(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_54(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_53(), &Var9);
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

int Function_53() //Position: 0x2825 / 10277
{
	int iVar0;
	
	return &iVar0;
}

var Function_54(int iParam0) //Position: 0x282E / 10286
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x283F / 10303
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_56(char* cParam0) //Position: 0x2936 / 10550
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2951 / 10577
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_59(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x29B8 / 10680
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x29CA / 10698
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29DC / 10716
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
	if (((Function_61(iParam0) != 19 || Function_61(iParam0) != 17) || Function_61(iParam0) != 10) || Function_61(iParam0) != 9)
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

int Function_61(int iParam0) //Position: 0x2B10 / 11024
{
	return Global_55480[iParam016].f_96;
}

float Function_62(int iParam0) //Position: 0x2B1F / 11039
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2B58 / 11096
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_64(int iParam0) //Position: 0x2B95 / 11157
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D2F / 11567
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

int Function_66(bool bParam0) //Position: 0x2F73 / 12147
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_67() //Position: 0x2FB4 / 12212
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
		iVar2 = ((Function_66((50 + iVar3) + 15) + Function_66((183 + iVar3) + 15)) + Function_66((90 + iVar3) + 15));
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
	Function_51(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_68() //Position: 0x303D / 12349
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
			iVar2 = ((Function_66((50 + iVar3) + 8) + Function_66((183 + iVar3) + 8)) + Function_66((90 + iVar3) + 8));
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
	Function_51(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x30D4 / 12500
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
		iVar2 = ((Function_66((50 + iVar3)) + Function_66((183 + iVar3))) + Function_66((90 + iVar3)));
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
	Function_51(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_70() //Position: 0x3153 / 12627
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x3190 / 12688
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
	Function_65(iParam0, bParam1, 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_72() //Position: 0x339C / 13212
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_80(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_80(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_74(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_74(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_73(StackVal, Var0))
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
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_73(char* cParam0) //Position: 0x3453 / 13395
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_74(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x346B / 13419
{
	int iVar0;
	
	iVar0 = Function_78(&uParam2, &fParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_76(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_76(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_76(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_75();
	return StackVal, Function_75();
}

struct<8> Function_75() //Position: 0x3563 / 13667
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_76(int iParam0, int iParam1) //Position: 0x356D / 13677
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x357E / 13694
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3594 / 13716
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
				fVar2 = Function_79(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_79(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(iVar0) && !&bParam1)
	{
		iVar0 = Function_78(&bParam0, 1);
	}
	return iVar0;
}

float Function_79(struct<2> Param0, struct<2> Param2) //Position: 0x3660 / 13920
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_80(float fParam0, int iParam1) //Position: 0x367D / 13949
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_82(&Global_54076, &Var3);
	if (!Function_81(Global_46760[0]))
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
	if (!Function_81(Global_46760[2]))
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
	if (!Function_81(Global_46760[1]))
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
	if (!Function_81(Global_46796[1]))
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
	if (!Function_81(Global_46796[3]))
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
	if (!Function_81(Global_46796[2]))
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
	if (!Function_81(Global_46796[4]))
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
	if (!Function_81(Global_46816[0]))
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
	if (!Function_81(Global_46816[1]))
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
	if (!Function_81(Global_46816[2]))
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
	if (!Function_81(Global_46838[0]))
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
	if (!Function_81(Global_46850[0]))
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
	if (!Function_81(Global_46850[1]))
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
	if (!Function_81(Global_46850[2]))
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
	if (!Function_81(Global_46866[0]))
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
	if (!Function_81(Global_46866[1]))
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
	if (!Function_81(Global_46866[2]))
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
	if (!Function_81(Global_46894[2]))
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
	if (!Function_81(Global_46894[3]))
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
	if (!Function_81(Global_46894[0]))
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
	if (!Function_81(Global_46914[0]))
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
	if (!Function_81(Global_46926[2]))
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
	if (!Function_81(Global_46926[1]))
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
	if (!Function_81(Global_46926[0]))
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
	if (!Function_81(Global_46838[1]))
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
	if (!Function_81(Global_46894[1]))
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
	Function_76(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_73(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_81(int iParam0) //Position: 0x3EA9 / 16041
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_14(uVar0, 0x1000000) || Function_14(uVar0, 0x2000000)) || Function_14(uVar0, 0x4000000)) || !Function_14(uVar0, 0x10000000));
}

void Function_82(var uParam0, int iParam1) //Position: 0x3EE4 / 16100
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_83(int iParam0) //Position: 0x3EF3 / 16115
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_88(12, 1, 0, 0);
				Function_87(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_88(13, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_88(14, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_88(15, 1, 0, 0);
				Function_87(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_88(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_86(iParam0) == 1)
					{
						iVar0 = Function_85(iParam0);
						if (Function_84(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_87(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_87(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_87(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_87(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_87(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_87(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_87(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_87(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_87(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_87(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_87(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_87(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_87(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_87(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_87(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_87(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_87(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_87(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_87(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_87(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_88(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_88(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_88(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_85(iParam0) == 0)
			{
				if (Function_86(iParam0) == 1)
				{
					Function_88(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_84(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_87(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_87(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_87(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_87(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_87(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_87(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_87(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_87(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_86(iParam0) == 1)
			{
				Function_88(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_88(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_87(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_87(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_88(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_87(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 9);
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

bool Function_84(int iParam0) //Position: 0x43D0 / 17360
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_85(int iParam0) //Position: 0x43E6 / 17382
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_86(int iParam0) //Position: 0x4405 / 17413
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_87(int iParam0, int iParam1) //Position: 0x441F / 17439
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4489 / 17545
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
	Function_65(iParam0, TO_FLOAT(bParam1), 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_89(iParam0);
	return 1;
}

void Function_89(int iParam0) //Position: 0x46B1 / 18097
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

void Function_90() //Position: 0x474F / 18255
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_66(0));
	PLAYSTAT_INT("HC_FAME", Function_66(3));
	PLAYSTAT_INT("HC_HONOR", Function_66(1));
	return;
}

void Function_91() //Position: 0x48B1 / 18609
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_94(iVar1) < 0)
	{
		Function_51(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_94(Function_29(iVar0)))
	{
		Function_51(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_92(int iParam0, char* cParam1) //Position: 0x4931 / 18737
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4C88 / 19592
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_94(int iParam0) //Position: 0x4D10 / 19728
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95() //Position: 0x4D2A / 19754
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_96() //Position: 0x4D55 / 19797
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_97(int iParam0, int iParam1, bool bParam2) //Position: 0x4D83 / 19843
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
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_112(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_66(42) - Global_53524.f_168);
				bVar1 = (Function_66(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_63(49)) - Global_53524.f_176);
				bVar3 = (Function_66(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_66(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_111(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_98(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_98(int iParam0, bool bParam1, bool bParam2) //Position: 0x501F / 20511
{
	int iVar0;
	bool bVar1;
	
	if (Function_110(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_66(3);
	Function_107();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_105(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_88(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_62(3));
	iVar0 = Function_66(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_99(int iParam0, int iParam1) //Position: 0x51F3 / 20979
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_100(int iParam0, char* cParam1) //Position: 0x545D / 21597
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_92(iParam0, &cParam1, 0, 1);
	iVar1 = Function_101();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_101() //Position: 0x55ED / 21997
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_102();
	return 0;
}

void Function_102() //Position: 0x568E / 22158
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_103(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_103(int iParam0) //Position: 0x574C / 22348
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_104(int iParam0) //Position: 0x57B2 / 22450
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

int Function_105(int iParam0, bool bParam1) //Position: 0x5841 / 22593
{
	bool bVar0;
	int iVar1;
	
	Function_88(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_106(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_101();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_106(int iParam0, int iParam1) //Position: 0x59ED / 23021
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_107() //Position: 0x5A32 / 23090
{
	Function_109(3, 0.0f);
	Function_108(3, 10000.0f);
	return;
}

int Function_108(int iParam0, int iParam1) //Position: 0x5A48 / 23112
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5A88 / 23176
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_110(int iParam0) //Position: 0x5AC8 / 23240
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_111(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5AD7 / 23255
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
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
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
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
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
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

int Function_112(int iParam0) //Position: 0x5C9F / 23711
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

var Function_113() //Position: 0x5D34 / 23860
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_114(int iParam0) //Position: 0x5D59 / 23897
{
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_98(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_98(25, 1, 0);
			Function_119(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			Function_115(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_119(50, 1, 1);
			Function_98(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_119(5, 1, 1);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_98(75, 1, 0);
			Function_115(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_119(5, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_119(25, 1, 1);
			Function_98(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_119(10, 1, 1);
			Function_98(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_98(50, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_98(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_115(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_119(20, 1, 1);
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_119(25, 1, 1);
			Function_98(150, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_119(10, 1, 1);
			Function_98(150, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_98(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_115(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_115(100, 1, 0);
			Function_119(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_119(3, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_115(125, 1, 0);
			Function_98(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_119(50, 1, 1);
			Function_98(100, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_119(75, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_98(250, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_98(75, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_98(200, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_98(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_119(100, 1, 1);
			Function_98(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_98(200, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_98(500, 1, 0);
			Function_115(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_98(150, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_115(25, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_98(150, 1, 0);
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_115(150, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_115(150, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x6228 / 25128
{
	int iVar0;
	bool bVar1;
	
	if (Function_110(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_66(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_105(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_118(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_88(1, bVar1, 0, 0);
	}
	else
	{
		Function_117(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_62(1));
	iVar0 = Function_66(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_100(2, Function_116(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_100(2, Function_116(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			break;
	}
	Function_99(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_116(int iParam0) //Position: 0x654F / 25935
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

int Function_117(int iParam0, bool bParam1, int iParam2) //Position: 0x65F2 / 26098
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_118(int iParam0, bool bParam1) //Position: 0x67EF / 26607
{
	bool bVar0;
	int iVar1;
	
	Function_117(iParam0, bParam1, 0);
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
	iVar1 = Function_106(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_101();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x699A / 27034
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_88(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_88(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_66(597) + Function_66(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_120(int iParam0, var uParam1, bool bParam2) //Position: 0x6A6C / 27244
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_166(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_163(Global_46816[0]);
			Function_153(0);
			Function_151(2, 1);
			Function_151(0, 1);
			Function_151(1, 1);
			break;
		
		case 0x00000003:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_163(Global_46816[0]);
			Function_163(Global_46760[0]);
			Function_149(0, 1);
			Function_149(15, 1);
			Function_149(9, 1);
			Function_149(12, 1);
			Function_149(16, 1);
			Function_151(3, 1);
			break;
		
		case 0x00000005:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_161(21, &bParam2, 4);
			Function_163(Global_46816[0]);
			Function_151(39, 1);
			break;
		
		case 0x00000007:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_148())
				{
					if (!Function_147(4))
					{
						Function_137(4, 0, 0, 1, 0);
					}
				}
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_163(Global_46760[0]);
			Function_163(Global_46816[2]);
			Function_136(&(Global_43791[Global_46816[2]]), 32768);
			Function_135(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_161(9, &bParam2, 4);
			Function_163(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_163(Global_46760[0]);
			Function_163(Global_46796[0]);
			Function_136(&(Global_43791[Global_46796[0]]), 32768);
			Function_135(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_163(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_163(Global_46760[1]);
			Function_163(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_163(Global_46838[0]);
			Function_163(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_163(Global_46796[5]);
			Function_163(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_161(21, &bParam2, 4);
			Function_163(Global_46760[4]);
			Function_163(Global_46796[4]);
			Function_134(&Global_119935, 0x2000000);
			Function_134(&Global_119935, 0x4000000);
			Function_134(&Global_119935, 4096);
			Function_134(&Global_119935, 8);
			Function_134(&Global_119935, 8388608);
			Function_134(&Global_119935, 524288);
			Function_134(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_163(Global_46760[4]);
			Function_163(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_135(&(Global_43791[Global_46760[4]]), 256);
			Function_163(Global_46760[4]);
			Function_163(Global_46796[0]);
			Function_136(&(Global_43791[Global_46796[0]]), 32768);
			Function_135(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_163(Global_46760[0]);
			Function_163(Global_46760[5]);
			Function_161(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_163(Global_46796[3]);
			Function_136(&(Global_43791[Global_46796[3]]), 32768);
			Function_135(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_161(9, &bParam2, 4);
			Function_163(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_136(&(Global_43791[Global_46838[1]]), 32768);
			Function_163(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_161(12, &bParam2, 4);
			Function_135(&(Global_43791[Global_46838[1]]), 256);
			Function_163(Global_46816[3]);
			Function_163(Global_46866[0]);
			Function_163(Global_46850[0]);
			Function_153(4);
			Function_149(13, 1);
			Function_149(1, 1);
			Function_149(18, 1);
			Function_151(34, 1);
			Function_151(44, 1);
			Function_151(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_161(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_163(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_163(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_163(Global_46866[0]);
			Function_163(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_163(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_163(Global_46850[0]);
			Function_163(Global_46866[0]);
			Function_163(Global_46866[1]);
			Function_163(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_161(23, &bParam2, 3);
			Function_149(23, 1);
			Function_163(Global_46850[0]);
			Function_163(Global_46850[2]);
			Function_136(&(Global_43791[Global_46850[2]]), 32768);
			Function_135(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_161(19, &bParam2, 4);
			Function_163(Global_46850[0]);
			Function_163(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_161(24, &bParam2, 3);
			Function_149(24, 1);
			Function_163(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_163(Global_46850[0]);
			Function_163(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_163(Global_46866[12]);
			Function_163(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_163(Global_46866[12]);
			Function_163(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_161(25, &bParam2, 10);
			Function_163(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_163(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_163(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_161(13, &bParam2, 4);
			Function_163(Global_46866[2]);
			Function_163(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_147(8))
				{
					Function_137(8, 0, 0, 1, 0);
				}
			}
			Function_163(Global_46850[0]);
			Function_153(9);
			Function_149(7, 1);
			Function_149(11, 1);
			Function_149(3, 1);
			Function_149(20, 1);
			Function_151(57, 1);
			break;
		
		case 0x0000002A:
			Function_161(2, &bParam2, 4);
			Function_163(Global_46914[0]);
			Function_163(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_163(Global_46914[0]);
			Function_163(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_161(17, &bParam2, 4);
			Function_163(Global_46926[0]);
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_132(15))
				{
					Function_127(15, 0, 1);
				}
			}
			Function_87(2, 26);
			Function_135(&(Global_43791[Global_46914[1]]), 256);
			Function_153(11);
			Function_163(Global_46914[1]);
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_163(Global_46914[1]);
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_163(Global_46914[1]);
			Function_121(11);
			Function_153(12);
			Global_26200[1114].f_40 = 0;
			Function_151(56, 1);
			if (!&bParam2)
			{
				if (!Function_147(9))
				{
					Function_137(9, 0, 0, 0, 0);
				}
				if (!Function_147(10))
				{
					Function_137(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_121(int iParam0) //Position: 0x7387 / 29575
{
	var uVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_126(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_126(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_122(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_122(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7504 / 29956
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_124(Function_125(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_124(Function_125(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_124(StackVal);
				Var1 = Function_124(StackVal);
				if (Function_123(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_123(struct<2> Param0, struct<2> Param2) //Position: 0x760F / 30223
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_124(int iParam0) //Position: 0x763B / 30267
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_125(vector3 vParam0) //Position: 0x7692 / 30354
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

void Function_126(var uParam0, int iParam1) //Position: 0x76E0 / 30432
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

void Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x773B / 30523
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		if (!Function_147(bParam0))
		{
			Function_137(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_88(457, 1, 0, 0);
		Function_130(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
	}
	return;
}

void Function_128() //Position: 0x78DC / 30940
{
	return;
}

bool Function_129(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x78E2 / 30946
{
	iParam0 = &iParam0;
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
	if (Global_6636 && iParam2)
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
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_130(bool bParam0, int iParam1) //Position: 0x7991 / 31121
{
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_131(int iParam0) //Position: 0x79E6 / 31206
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_132(int iParam0) //Position: 0x79FC / 31228
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x7A4D / 31309
{
	int iVar0;
	
	if (!Function_131(iParam0))
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

void Function_134(var uParam0, int iParam1) //Position: 0x7A7A / 31354
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x7A8B / 31371
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7AA5 / 31397
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7AB6 / 31414
{
	char* cVar0[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_146(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_147(bParam0))
	{
		Function_88(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_128();
			}
		}
		Function_140(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_139() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_139() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_138(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_138(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7C12 / 31762
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_139() //Position: 0x7C9D / 31901
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_140(bool bParam0) //Position: 0x7CCA / 31946
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_144(bParam0, Function_145(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_144(bParam0, Function_145(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_143(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_142(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_141(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_141(int iParam0) //Position: 0x7E7A / 32378
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_142(char* cParam0, int iParam1) //Position: 0x7ED1 / 32465
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

var Function_143(int iParam0) //Position: 0x7EF6 / 32502
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_144(bool bParam0, int iParam1) //Position: 0x7F4C / 32588
{
	int iVar0;
	
	if (!Function_131(bParam0))
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

int Function_145(bool bParam0) //Position: 0x7FAB / 32683
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_146(int iParam0) //Position: 0x7FB7 / 32695
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_147(int iParam0) //Position: 0x7FD3 / 32723
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_148() //Position: 0x8044 / 32836
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_149(int iParam0, int iParam1) //Position: 0x8074 / 32884
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_150(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x80E9 / 33001
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x8146 / 33094
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_152(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x81B9 / 33209
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_153(int iParam0) //Position: 0x8214 / 33300
{
	var uVar0;
	var uVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_160(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_160(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_88(468, 1, 0, 0);
			Function_87(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_138("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_122(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_137(14, 1, 0, 0, 0);
				Function_154(14, 1, 0, 0, 0);
			}
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_128();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_138("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_88(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_87(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_154(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x84D4 / 34004
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_146(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_138(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_144(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_130(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_140(bParam0);
		if (StackVal && !Function_14(((((!Function_139() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_139() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_156();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_155(3, bParam1);
				break;
			
			case 0x00000005:
				Function_155(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_155(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_155(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_155(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_155(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_155(int iParam0, bool bParam1) //Position: 0x8773 / 34675
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_156() //Position: 0x87E2 / 34786
{
	if (Function_131(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_159(Global_42827);
			(&Global_42827 + 8) = Function_157(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_159(Global_42827);
			*(&Global_42827 + 8) = Function_157(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_157(int iParam0, int iParam1) //Position: 0x8862 / 34914
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					if (Function_158(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
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
					if (Function_158(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
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
					if (Function_158(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_158(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_158(27) && iVar16)
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
					if (Function_158(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
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
					if (Function_158(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_158(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_158(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_158(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_158(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
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
	if (Function_73(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_73(StackVal, vVar2))
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
	if (!Function_73(StackVal, vVar2))
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

int Function_158(int iParam0) //Position: 0x94C5 / 38085
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_159(int iParam0) //Position: 0x94DA / 38106
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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

void Function_160(var uParam0, int iParam1) //Position: 0x9529 / 38185
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

void Function_161(bool bParam0, bool bParam1, int iParam2) //Position: 0x9581 / 38273
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_162(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_166(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_162(int iParam0, int iParam1) //Position: 0x95F4 / 38388
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_163(int iParam0) //Position: 0x9608 / 38408
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_165(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_136(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_88(473, 1, 0, 0);
		iVar0 = Function_164(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_88(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_88(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_88(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_87(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_87(7, 30);
	}
	if (Function_62(473) <= Function_63(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_164(int iParam0) //Position: 0x96F9 / 38649
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_84(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_165(var uParam0, int iParam1) //Position: 0x9751 / 38737
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_166(bool bParam0, bool bParam1, int iParam2) //Position: 0x976E / 38766
{
	if (!Function_167(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_191(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_191(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_191(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_167(int iParam0) //Position: 0x97C8 / 38856
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_168(int iParam0) //Position: 0x97DA / 38874
{
	int iVar0;
	
	if (Function_14(iParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_169(struct<185> Param0) //Position: 0x980E / 38926
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_170(4, 0, 0);
		}
	}
	return;
}

void Function_170(int iParam0, var uParam1, int iParam2) //Position: 0x9879 / 39033
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_171(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_171(bool bParam0, int iParam1, bool bParam2) //Position: 0x9963 / 39267
{
	int iVar0;
	
	Function_173(bParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &iParam1);
	Function_172();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_172() //Position: 0x9AE2 / 39650
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_173(int iParam0) //Position: 0x9AEE / 39662
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

void Function_174(int iParam0) //Position: 0x9B34 / 39732
{
	if (Function_14(iParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_175(int iParam0) //Position: 0x9B61 / 39777
{
	Function_176(&Global_43580, iParam0);
	return;
}

void Function_176(var uParam0, var uParam1) //Position: 0x9B6F / 39791
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_177() //Position: 0x9B8E / 39822
{
	return;
}

void Function_178() //Position: 0x9B94 / 39828
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_179(&uLocal_472);
	REMOVE_ANIM_SET("horseshoe_gped");
	STREAMING_UNLOAD_BOUNDS();
	return;
}

void Function_179(int iParam0) //Position: 0x9BBA / 39866
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_180(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_180(struct<2>[] Param0, int iParam1) //Position: 0x9BE2 / 39906
{
	if (Function_182(&(Param0[iParam12]), 4))
	{
		if (Function_182(&(Param0[iParam12]), 1))
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
			Function_181(&(Param0[iParam12]), 1);
			Function_181(&(Param0[iParam12]), 2);
			Function_181(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_181(struct<13> Param0) //Position: 0x9D2D / 40237
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_182(struct<13> Param0) //Position: 0x9D4A / 40266
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_183() //Position: 0x9D68 / 40296
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_191(), true);
	Function_186(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_191()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_185();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(1);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_184();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_184() //Position: 0x9DEB / 40427
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_185() //Position: 0x9E00 / 40448
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_186(var uParam0) //Position: 0x9E16 / 40470
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

void Function_187() //Position: 0x9E29 / 40489
{
	Function_188(0);
	Function_188(1);
	Function_188(2);
	Function_188(3);
	Function_188(4);
	Function_188(5);
	Function_188(6);
	Function_188(7);
	return;
}

int Function_188(int iParam0) //Position: 0x9E57 / 40535
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_189() //Position: 0x9E63 / 40547
{
	if (VMAG((&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

void Function_190(var uParam0) //Position: 0x9F95 / 40853
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&uParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

int Function_191() //Position: 0x9FBB / 40891
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_192() //Position: 0x9FD0 / 40912
{
	var uVar0[3];
	int iVar4;
	
	if (Function_214(0))
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		iVar4 = Function_200(&uLocal_8, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_193();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_17 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_193();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_17 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_193();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_17 = 2;
		}
	}
	return;
}

void Function_193() //Position: 0xA067 / 41063
{
	Function_195();
	Function_194(10, 3);
	return;
}

void Function_194(int iParam0, int iParam1) //Position: 0xA076 / 41078
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_195() //Position: 0xA1C3 / 41411
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_199())
	{
		Function_198(10, 3);
	}
	else
	{
		Function_196();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_191(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_191());
	UI_POP("nDebugMenu");
	return;
}

void Function_196() //Position: 0xA20E / 41486
{
	Function_197(25, 2);
	return;
}

void Function_197(int iParam0, int iParam1) //Position: 0xA21A / 41498
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0xA446 / 42054
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_199() //Position: 0xA593 / 42387
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_200(struct<17> Param0) //Position: 0xA5FB / 42491
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_213(&Var12, &Var0);
	uVar15 = Function_212(uParam1, &Var12);
	Function_211(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_210(&Param0, uVar15);
	Function_208(StackVal, &Param0, Var12.f_12);
	Function_206(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_205(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_202(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_201(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_201(int iParam0, int iParam1, int iParam2) //Position: 0xA6EF / 42735
{
	var uVar0;
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
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_202(struct<17> Param0) //Position: 0xA74F / 42831
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_204(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_204(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_201(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_203(Param1.f_64);
	}
	else
	{
		Function_203(Param1.f_64);
	}
	return 0;
}

void Function_203(bool bParam0) //Position: 0xA8E2 / 43234
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_204(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xA920 / 43296
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_205(int iParam0, struct<21> Param1) //Position: 0xA9D6 / 43478
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_206(vector3 vParam0) //Position: 0xA9FD / 43517
{
	switch (Function_207())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_207() //Position: 0xAAA9 / 43689
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

void Function_208(vector3 vParam0) //Position: 0xAAE5 / 43749
{
	switch (Function_209(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_209(int iParam0) //Position: 0xAB8E / 43918
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_76(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_76(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_76(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_76(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&iParam0, 0x20000000);
	return 0;
}

var Function_210(struct<21> Param0) //Position: 0xACAE / 44206
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_211(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xAE68 / 44648
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_212(int iParam0, struct<13> Param1) //Position: 0xAF04 / 44804
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_213(struct<17> Param0) //Position: 0xAF20 / 44832
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_214(int iParam0) //Position: 0xAF7A / 44922
{
	if (!Function_215(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_215(int iParam0) //Position: 0xAF8F / 44943
{
	if (iParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

bool Function_216() //Position: 0xAFB6 / 44982
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Function_311())
	{
		Function_309(3);
		Function_308();
	}
	if (IS_VOLUME_VALID(&Local_69 + 72))
	{
		if (IS_OBJECTSET_VALID(&uLocal_58))
		{
			Function_307(&uLocal_58);
		}
		else
		{
			uLocal_58 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), &bLocal_38, 15, 1);
		}
		iLocal_60 = LOCATE_ACTORS_IN_VOLUME(&Local_69 + 72, &uLocal_58, 0, 1);
		bVar0 = false;
		while (bVar0 <= iLocal_60)
		{
			iVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_58));
			if (!IS_ACTOR_PLAYER(&iVar1) && &iVar1 == &Local_69 + 4[0])
			{
				AI_SET_NAV_ACTOR_WIDTH(&iVar1, 0,5f);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iVar1, &Local_69 + 72, 4, 1);
			}
			bVar0++;
		}
	}
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_306();
		return 0;
	}
	if (Function_311() && GET_NUM_PLAYERS() > 2)
	{
		Function_304();
		return 0;
	}
	bLocal_427 = (GET_CURRENT_GAME_TIME() - fLocal_428);
	if (bLocal_427 < 0,033333f)
	{
		bLocal_427 = 0,0333333f;
	}
	fLocal_428 = GET_CURRENT_GAME_TIME();
	Function_71(436, bLocal_427, 0);
	if (IS_EXITFLAG_SET())
	{
		Function_306();
		return 0;
	}
	if (IS_ACTOR_RIDING(Function_191()))
	{
		Function_306();
		return 0;
	}
	iVar2 = 0;
	while (StackVal <= iVar2)
	{
		if (IS_ACTOR_VALID(&Local_69 + 4[iVar2]))
		{
			if (GET_LAST_ATTACKER(&Local_69 + 4[iVar2]) == Function_191())
			{
				Function_306();
				return 0;
			}
		}
		Function_306();
		return 0;
		iVar2++;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			Function_299();
			break;
		
		case 0x00000001:
			Function_222();
			break;
		
		case 0x00000003:
			Function_217();
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000065:
			bLocal_2 = true;
			break;
		
		default:
			return 0;
	}
	if (bLocal_2)
	{
		Function_304();
		return 0;
	}
	if (bLocal_3)
	{
		Function_306();
		return 0;
	}
	return 1;
}

void Function_217() //Position: 0xB165 / 45413
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (iLocal_17 == 0)
			{
				if (!Function_220(Function_17(Local_69), Function_15(Local_69)))
				{
					Function_88(410, 1, 0, 0);
					Function_87(6, 12);
				}
			}
			iLocal_1 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_99 + 1064)[Local_99.f_12084])
			{
				Function_219(StackVal, &Local_99);
			}
			TASK_CLEAR(&(Local_99[066]));
			MAKE_ACTOR_READY_FOR_ACTION(&(Local_99[066]), 1);
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&(Local_99[066]))))
			{
				GRINGO_ALLOW_ACTIVATION(&Local_69 + 104, true);
				GRINGO_ALLOW_ACTIVATION(&Local_69 + 112, true);
				Function_218(GET_OBJECT_FROM_GRINGO(&Local_69 + 104));
				Function_218(GET_OBJECT_FROM_GRINGO(&Local_69 + 112));
				if (VDIST(Global_54078, Function_218(GET_OBJECT_FROM_GRINGO(&Local_69 + 104))) > VDIST(Global_54078, Function_218(GET_OBJECT_FROM_GRINGO(&Local_69 + 112))))
				{
					TASK_USE_GRINGO(&(Local_99[066]), &Local_69 + 104, "UseCase1", 1, 1);
				}
				else
				{
					TASK_USE_GRINGO(&(Local_99[066]), &Local_69 + 112, "UseCase1", 1, 1);
				}
				TASK_PRIORITY_SET(&(Local_99[066]), 2);
				iLocal_1 = 8;
			}
			break;
		
		case 0x00000008:
			if (iLocal_17 == 0)
			{
				bLocal_2 = true;
			}
			else if (iLocal_17 == 1)
			{
				bLocal_3 = true;
			}
			else if (iLocal_17 == 2)
			{
				Function_1();
			}
			break;
	}
	return;
}

struct<8> Function_218(bool bParam0) //Position: 0xB2AD / 45741
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_219(struct<1205> Param0) //Position: 0xB2D6 / 45782
{
	int iVar0;
	
	(*&Param0 + 1064)[Param0[iParam166].f_1364] = 0;
	(&Param0 + 1064[Param0[iParam166].f_1364])->f_4 = 4294967295;
	TASK_CLEAR(&(Param0[iParam166]));
	GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&Param0 + 1064[Param0[iParam166].f_1364] + 8));
	MAKE_ACTOR_READY_FOR_ACTION(&(Param0[iParam166]), 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&(Param0[iParam166]), 1);
	REMOVE_ALL_OBJECT_ATTACHMENTS(GET_OBJECT_FROM_ACTOR(&(Param0[iParam166])));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (IS_OBJECT_VALID(&Param0[iParam166] + 164[iVar0]))
		{
			ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&Param0[iParam166] + 164[iVar0]));
		}
		iVar0++;
	}
	ACTOR_END_FORCE_HOLSTER(&(Param0[iParam166]));
	Param0[iParam166] = "";
	Param0[iParam166].f_136 = 4294967295;
	strcpy(&Param0[iParam166] + 8, "", 64);
	Param0.f_1204 = (Param0.f_1204 - 1);
	return;
}

bool Function_220(int iParam0, int iParam1) //Position: 0xB3C5 / 46021
{
	int iVar0;
	
	if (!Function_221(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (Function_17(iVar0) != iParam0 && Function_15(iVar0) != iParam1)
		{
			if (Function_86(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_221(int iParam0) //Position: 0xB40A / 46090
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_222() //Position: 0xB41F / 46111
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	struct<2> Var13;
	char* cVar15[16];
	var uVar19;
	struct<2> Var20;
	bool bVar24;
	int iVar25;
	float fVar26;
	bool bVar27;
	float fVar28;
	bool bVar29;
	int iVar30;
	struct<9> Var31;
	struct<5> Var40;
	bool bVar45;
	int iVar46;
	bool bVar47;
	
	bVar1 = (!Function_311() || Function_298(&Local_99));
	if ((!Local_69.f_84 && !iLocal_491 != 6) && !HUD_IS_FADING())
	{
		if (Local_99[066].f_136 > Local_99[166].f_136 || !Function_311())
		{
			UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_99[066] + 8);
			UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_99[166] + 8);
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_99[066].f_512);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_99[166].f_512);
			UI_LABEL_SET_VALUE_B("Scorebox_Player1", 11);
			UI_LABEL_SET_VALUE_B("Scorebox_Player2", 11);
		}
		else
		{
			UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_99[166] + 8);
			UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_99[066] + 8);
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_99[166].f_512);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_99[066].f_512);
			UI_LABEL_SET_VALUE_B("Scorebox_Player1", 11);
			UI_LABEL_SET_VALUE_B("Scorebox_Player2", 11);
		}
	}
	if (!Function_311() && !iLocal_491 != 35)
	{
		if (!Local_69.f_84)
		{
			if ((((((((!Function_298(&Local_99) && !Function_297(32)) && ((((((iLocal_491 != 17 || iLocal_491 != 9) || iLocal_491 != 10) || iLocal_491 != 13) || iLocal_491 != 14) || iLocal_491 != 15) || iLocal_491 != 16)) && !Function_297(64)) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && !HUD_IS_SHOWING_HELP_TEXT()) && !UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0)) || (((((Function_298(&Local_99) && !Function_297(32)) && (((iLocal_491 != 8 || iLocal_491 != 17) || iLocal_491 != 9) || iLocal_491 != 10)) && Local_99[Local_99.f_120066].f_160 != 0) && !HUD_IS_FADED()) && !HUD_IS_FADING()))
			{
				if (UNK_0xDA674AE0("@HORSESHOES.SKIP_TO_PLAYER", 1, 0))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_464 = iLocal_491;
					Function_296(27, 0);
					Function_295(32, 1);
				}
			}
			else if (HUD_IS_SHOWING_HELP_TEXT() && UNK_0xDA674AE0("@HORSESHOES.SKIP_TO_PLAYER", 1, 0))
			{
				HUD_CLEAR_HELP();
			}
		}
		else if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			if (UNK_0xDA674AE0("@HORSESHOES.SKIP_TO_PLAYER", 1, 0))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_464 = 3;
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_296(27, 0);
			}
		}
	}
	bVar8 = false;
	iVar9 = 0;
	switch (iLocal_491)
	{
		case 0x00000000:
			if (Function_311())
			{
				Local_99.f_1200 = StackVal;
			}
			else
			{
				Local_99.f_1200 = 0;
			}
			if (Local_69.f_96 == 0)
			{
				Local_99.f_1308 = 1;
			}
			else
			{
				Local_99.f_1308 = 0;
			}
			Local_99.f_1212 = 1;
			if (Function_297(128))
			{
				Local_99.f_1200 = Function_294(&Local_99);
			}
			if (Local_69.f_84)
			{
				Function_296(1, 0);
			}
			else
			{
				Function_296(6, 0);
			}
			iLocal_442 = 0;
			if (Local_99[166].f_136 != 1 || Local_99[166].f_136 != 3)
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[166]), "horseshoe/look");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[166]), "horseshoe/look_right");
			}
			break;
		
		case 0x00000001:
			iLocal_68 = 0;
			if (Local_99.f_1200 == 0)
			{
				if (Local_99[Local_99.f_120066].f_160 == 0)
				{
					Function_293();
					Function_138("HorseShoes_Tutorial_0", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_292();
					Function_138("HorseShoes_Tutorial_1", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else if (Local_99[Local_99.f_120066].f_160 == 0)
			{
				Function_138("HorseShoes_Tutorial_2", 0x41200000, 1, 0, 2, 1, 0);
			}
			Function_296(2, 0);
			break;
		
		case 0x00000002:
			iLocal_68 = 0;
			Function_296(8, 0);
			break;
		
		case 0x00000006:
			iLocal_68 = 2;
			iVar10 = Local_99.f_1212;
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[066]), "horseshoe/look/mid") && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[066]), "horseshoe/look_right/mid"))
			{
				if (Local_99[066].f_136 != 1 || Local_99[066].f_136 != 3)
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/look/mid");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/look_right/mid");
				}
			}
			if (UNK_0xDA674AE0("@MINIGAME.INCREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.INCREASE_BET", 1, 0))
			{
				if (Function_291(&iLocal_468) < fLocal_57 && Function_291(&iLocal_468) < (1.0f / 30.0f))
				{
					Local_99.f_1212++;
					Local_99.f_1212 = Function_290(Local_99.f_1212);
					Function_288(&iLocal_468);
				}
				fLocal_57 = (fLocal_57 - (0,008f * Function_287()));
			}
			else if (UNK_0xDA674AE0("@MINIGAME.DECREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.DECREASE_BET", 1, 0))
			{
				if (Function_291(&iLocal_468) < fLocal_57 && Function_291(&iLocal_468) < (1.0f / 30.0f))
				{
					Local_99.f_1212 = (Local_99.f_1212 - 1);
					Local_99.f_1212 = Function_290(Local_99.f_1212);
					Function_288(&iLocal_468);
				}
				fLocal_57 = (fLocal_57 - (0,008f * Function_287()));
			}
			else
			{
				fLocal_57 = 0,2f;
			}
			iVar10 = (iVar10 - Local_99.f_1212);
			if (iVar10 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_286("HorseShoes_EnterBetObjective", -1.0f, 1, 2, 0, 0, 0, 0);
			}
			UI_ENTER("Scorebox");
			UI_ENTER("Scorebox_Bet");
			UI_ENTER("Scorebox_Cash");
			UI_ENTER("Scorebox_Player1");
			UI_ENTER("Scorebox_Player2");
			UI_LABEL_SET_VALUE("Scorebox_Player1", false);
			UI_LABEL_SET_VALUE("Scorebox_Player2", false);
			UI_LABEL_SET_TEXT("Scorebox_Cash", "Horseshoes_CashLabel");
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_285());
			UI_REFRESH("Scorebox_Cash");
			UI_LABEL_SET_TEXT("Scorebox_Bet", "HorseShoes_Bet");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_99.f_1212);
			UI_REFRESH("Scorebox_Bet");
			if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
			{
				Function_284(Local_99.f_1212, 0);
				UI_LABEL_SET_TEXT("Scorebox_Cash", "Horseshoes_CashLabel");
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_285());
				UI_REFRESH("Scorebox_Cash");
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				DECOR_SET_INT(&(Local_99[066]), "iAdditionalMoney", Local_99.f_1212);
				Function_296(7, 1);
				fVar11 = (TO_FLOAT(Local_99.f_1212) / TO_FLOAT(Local_69.f_88));
				Function_283(fVar11);
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[066]), "horseshoe/look/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/look/pst");
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[066]), "horseshoe/look_right/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/look_right/pst");
				}
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[066]), "horseshoe/look_right/pst") && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[066]), "horseshoe/look/pst"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/idle");
				Function_296(8, 0);
			}
			break;
		
		case 0x00000008:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 4;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (Local_69.f_84)
			{
				if (Local_99.f_1200 != 1 && !Function_297(8))
				{
					Function_295(8, 1);
					Function_286("HorseShoes_Tutorial_Objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			if ((IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/idle") || Function_297(32)) || (Function_311() && !Function_298(&Local_99)))
			{
				if (!Local_69.f_84)
				{
					Function_184();
				}
				Function_288(&iLocal_45);
				if (bVar1)
				{
					if (Function_297(32))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/grab2");
					}
					else if (!SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/grab"))
					{
					}
				}
				Function_288(&iLocal_45);
				if (!UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
				{
					Function_281(StackVal, &Local_99, -Local_99[((&Local_99 + 1064[Local_99.f_12084] + 4))66].f_148, 0);
				}
				Function_296(9, 0);
			}
			else
			{
				Function_280(&Local_99, 8);
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[Local_99.f_120066]), "horseshoe/look/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/look/pst");
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[Local_99.f_120066]), "horseshoe/look_right/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/look_right/pst");
				}
			}
			break;
		
		case 0x00000009:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				if (Local_99[Local_99.f_120066].f_160 == 0)
				{
					iLocal_68 = 4;
				}
				else
				{
					iLocal_68 = 5;
				}
			}
			else
			{
				iLocal_68 = 3;
			}
			if (Local_99[Local_99.f_120066].f_160 == 1)
			{
				if (Function_298(&Local_99))
				{
					if (!Function_297(2))
					{
						if (Function_279(&Local_99, Local_99.f_1200, 0))
						{
							if (Function_278())
							{
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 272, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 470, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							Function_295(2, 1);
							Function_138("HorseShoes_LongThrowHelp", 12.0f, 1, 0, 2, 1, 0);
						}
					}
					if (!Function_297(4))
					{
						if (Function_277(&Local_99, Local_99.f_1200, 0))
						{
							Function_295(4, 1);
							if (Function_278())
							{
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 272, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_41 < fLocal_34)
							{
								Function_138("HorseShoes_ShortThrowLateReleaseHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 470, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_40 > 2,5f)
							{
								Function_138("HorseShoes_ShortThrowLowVelocityHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 471, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if ((Function_274(1, 1, &Local_99) > Function_274(0, 1, &Local_99) && Function_274(1, 1, &Local_99) > Function_274(0, 0, &Local_99)) || (Function_274(1, 0, &Local_99) > Function_274(0, 1, &Local_99) && Function_274(1, 0, &Local_99) > Function_274(0, 0, &Local_99)))
					{
						iVar12 = 1;
					}
					if ((!Function_277(&Local_99, Local_99.f_1200, 0) && !Function_279(&Local_99, Local_99.f_1200, 0)) && iVar12)
					{
						if (Function_278())
						{
							SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 271, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 472, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 272, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Function_279(&Local_99, Local_99.f_1200, 0) || Function_277(&Local_99, Local_99.f_1200, 0))
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 473, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_274(Local_99.f_1200, 0, &Local_99) > 1.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 474, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			if (!Function_297(16) && !Local_69.f_84)
			{
				Function_295(16, 1);
				Function_286("HorseShoes_Objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_288(&iLocal_49);
			}
			if ((IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/grab2") || Function_297(32)) || (Function_311() && !Function_298(&Local_99)))
			{
				if (StackVal == Local_99.f_1200)
				{
					Local_99[Local_99.f_120066].f_148 = RAND_FLOAT_RANGE(-0,5f, 0,5f);
					Local_99[Local_99.f_120066].f_156 = -Local_99[Local_99.f_120066].f_148;
				}
				else
				{
					Local_99[Local_99.f_120066].f_156 = 0.0f;
				}
				if ((!HUD_IS_FADED() && (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_36) || CAMERA_GET_CURRENT_TRANSITION_TYPE(&iLocal_36) != 1)) && !UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
				{
					Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 0);
				}
				if (!IS_OBJECT_VALID(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]))
				{
					strcpy(&cVar15, "hsh", 16);
					stradd(&cVar15, I2STR(Local_99.f_1200), 16);
					stradd(&cVar15, I2STR(Local_99[Local_99.f_120066].f_160), 16);
					GET_OBJECT_POSITION(&Local_99 + 1064[Local_99[Local_99.f_120066].f_1364] + 8, &Var13);
					NET_OBJECT_REPLICATION_MODE_START(17, 1);
					if (Function_311())
					{
						if (Function_298(&Local_99))
						{
							if (GET_LOCAL_SLOT() <= Function_273())
							{
								uVar19 = "$/fragments/p_gen_horseshoe03x";
							}
							else
							{
								uVar19 = "$/fragments/p_gen_horseshoe04x";
							}
						}
						else if (Function_273() <= GET_LOCAL_SLOT())
						{
							uVar19 = "$/fragments/p_gen_horseshoe03x";
						}
						else
						{
							uVar19 = "$/fragments/p_gen_horseshoe04x";
						}
						*(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]) = CREATE_PROP_IN_LAYOUT(StackVal, &bLocal_38, &cVar15, &uVar19, Var13, Vector(0.0f, 0.0f, 0.0f), 0);
						if (Function_298(&Local_99))
						{
							if (!NET_REQUEST_OBJECT(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]))
							{
								NET_LOG(true, "Horseshoes Net Prop", "Somehow failed to send ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_99.f_1200), I2STR(Local_99[Local_99.f_120066].f_160), 0, 0);
							}
							else
							{
								NET_LOG(true, "Horseshoes Net Prop", "Requested ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_99.f_1200), I2STR(Local_99[Local_99.f_120066].f_160), 0, 0);
							}
						}
						else
						{
							NET_LOG(true, "Horseshoes Net Prop", "Didn't need to request ownership of Players[%s]'s horseshoe[%s]", I2STR(Local_99.f_1200), I2STR(Local_99[Local_99.f_120066].f_160), 0, 0);
						}
					}
					else if (Function_298(&Local_99))
					{
						*(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]) = CREATE_PROP_IN_LAYOUT(StackVal, &bLocal_38, &cVar15, "$/fragments/p_gen_horseshoe04x", Var13, Vector(0.0f, 0.0f, 0.0f), 0);
					}
					else
					{
						*(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]) = CREATE_PROP_IN_LAYOUT(StackVal, &bLocal_38, &cVar15, "$/fragments/p_gen_horseshoe03x", Var13, Vector(0.0f, 0.0f, 0.0f), 0);
					}
					NET_OBJECT_REPLICATION_MODE_END(17);
					*(&Local_99[Local_99.f_120066] + 188[Local_99[Local_99.f_120066].f_160]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_38, Function_53(), 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(0,11f, 0,01f, 0,14f));
					ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&Local_99[Local_99.f_120066] + 188[Local_99[Local_99.f_120066].f_160]), &Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160], Function_53(), Vector(0.0f, 0,002f, -0,093f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				}
				SET_PROP_COLLIDE_WITH_MOVABLES(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160], 0);
				ATTACH_OBJECTS_USING_LOCATOR(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160], GET_OBJECT_FROM_ACTOR(&(Local_99[Local_99.f_120066])), "wrist_r_attachment", "grab", 4294967295);
				Function_295(4, 0);
				if (Function_311() && !Function_298(&Local_99))
				{
					Function_296(30, 0);
				}
				else
				{
					Function_296(10, 0);
				}
			}
			else
			{
				Function_280(&Local_99, 9);
			}
			break;
		
		case 0x0000000A:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				if (Local_99[Local_99.f_120066].f_160 == 0)
				{
					iLocal_68 = 4;
				}
				else
				{
					iLocal_68 = 5;
				}
			}
			else
			{
				iLocal_68 = 3;
			}
			if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/pre") || Function_297(32))
			{
				if (!UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
				{
					Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 0);
				}
				Function_288(&iLocal_45);
				if (Function_298(&Local_99))
				{
					fLocal_65 = 0,112f;
					fLocal_63 = 0,5f;
				}
				else
				{
					fLocal_65 = 0.0f;
					fLocal_63 = -1,5f;
				}
				Local_99[Local_99.f_120066].f_144 = ((fLocal_65 / 2.0f) + 0,5f);
				Local_99[Local_99.f_120066].f_152 = 0.0f;
				if (Function_298(&Local_99))
				{
					Function_296(11, 0);
				}
				else
				{
					Function_296(13, 0);
				}
			}
			else
			{
				Function_280(&Local_99, 10);
			}
			break;
		
		case 0x0000000B:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				if (Local_99[Local_99.f_120066].f_160 == 0)
				{
					iLocal_68 = 4;
				}
				else
				{
					iLocal_68 = 5;
				}
			}
			else
			{
				iLocal_68 = 3;
			}
			if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/Sweep"))
			{
				Function_288(&iLocal_53);
				Function_272(&iLocal_53);
				if (Function_297(32) && &Local_99[Local_99.f_120066] != GET_PLAYER_ACTOR(0))
				{
					GET_OBJECT_POSITION(&Local_99 + 1064[Local_99[Local_99.f_120066].f_1364] + 8, &Var20);
					bVar24 = GET_OBJECT_HEADING(&Local_99 + 1064[Local_99[Local_99.f_120066].f_1364] + 8);
					TELEPORT_ACTOR_WITH_HEADING(&(Local_99[Local_99.f_120066]), Var20, bVar24, 0, 1, 1);
					HUD_FADE_IN(1.0f, 1065353216);
					iLocal_464 = 12;
					Function_296(28, 0);
				}
				else
				{
					Function_296(12, 0);
				}
				Local_99[Local_99.f_120066].f_144 = 0,5f;
				SET_PANIM_PARAMS(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_148, 0.0f);
				SET_PANIM_PHASE(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_144);
			}
			else
			{
				SET_PANIM_PARAMS(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_148, 0.0f);
				Function_280(&Local_99, 11);
			}
			break;
		
		case 0x0000000C:
			iLocal_68 = 5;
			if (UNK_0x062C5047("@HORSESHOES.AIM", 1, 0) || UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				UI_EXIT("HorseShoes");
			}
			else
			{
				UI_ENTER("HorseShoes");
				UI_ENTER("HorseShoes_target");
				UI_ENTER("HorseShoes_target_offset");
				UI_LABEL_SET_VALUE("HorseShoes_target", ROUND((0,65f * 100.0f)));
				UI_LABEL_SET_VALUE("HorseShoes_target_offset", ROUND(((0,78f - 0,65f) * 100.0f)));
			}
			UI_LABEL_SET_TEXT("HorseShoes", "Horseshoes_ArmSpeedandPositionLabel");
			if (fLocal_62 > 2,5f)
			{
				iVar25 = (100 - FLOOR(((fLocal_62 / 2,5f) * 50.0f)));
			}
			else
			{
				fVar26 = ((fLocal_62 - 2,5f) / (3,16f - 2,5f));
				iVar25 = (100 - FLOOR(((fVar26 * 50.0f) + 50.0f)));
			}
			if (iVar25 >= 100)
			{
				iVar25 = 100;
			}
			else if (iVar25 <= 0)
			{
				iVar25 = 0;
			}
			bVar27 = FLOOR((Local_99[Local_99.f_120066].f_144 * 100.0f));
			if (bVar27 >= 100)
			{
				bVar27 = 100;
			}
			else if (bVar27 <= 0)
			{
				bVar27 = false;
			}
			UI_LABEL_SET_VALUE("HorseShoes", bVar27);
			UI_LABEL_SET_VALUE_B("HorseShoes", iVar25);
			if (UNK_0x062C5047("@HORSESHOES.AIM", 1, 0))
			{
				fVar2 = ((2.0f * 3.0f) * (((0,85f - 0,5f) * 2.0f) - fLocal_65));
			}
			else
			{
				fVar2 = (-2.0f * fLocal_65);
			}
			if (UNK_0xDA674AE0("@HORSESHOES.AIM", 1, 0) || UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				fVar3 = 0.0f;
			}
			else if (UNK_0x062C5047("@HORSESHOES.SWING_BACKWARD", 1, 0))
			{
				fVar3 = (1,4f * -1.0f);
			}
			else if (UNK_0x062C5047("@HORSESHOES.SWING_FORWARD", 1, 0))
			{
				fVar3 = (1,4f * 1.0f);
			}
			if (fVar3 >= (0,2f * 1,4f) && fVar3 <= (-0,2f * 1,4f))
			{
				fVar3 = 0.0f;
			}
			fLocal_61 = ((fVar2 + fVar3) * Function_287());
			fVar4 = 0.0f;
			if (UNK_0x062C5047("@HORSESHOES.AIM", 1, 0))
			{
				fVar5 = (((-fLocal_63 * 1.0f) * 5.0f) * bLocal_427);
			}
			else
			{
				fVar5 = ((-fLocal_63 * 1.0f) * bLocal_427);
			}
			fLocal_62 = (((fLocal_63 + (fLocal_61 / 10.0f)) + fVar5) + fVar4);
			fLocal_64 = (fLocal_65 + (fLocal_62 * bLocal_427));
			if (fLocal_64 > -1.0f)
			{
				fLocal_62 = 0.0f;
				fLocal_64 = -1.0f;
			}
			else if (fLocal_64 < 1.0f)
			{
				fLocal_62 = 0.0f;
				fLocal_64 = 1.0f;
			}
			Local_99[Local_99.f_120066].f_144 = ((fLocal_64 / 2.0f) + 0,5f);
			SET_PANIM_PHASE(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_144);
			fLocal_63 = fLocal_62;
			fLocal_65 = fLocal_64;
			if (UNK_0x062C5047("@HORSESHOES.AIM_LEFT", 1, 0))
			{
				Local_99[Local_99.f_120066].f_148 = (Local_99[Local_99.f_120066].f_148 + (0,05f * Function_287()));
				if (Local_99[Local_99.f_120066].f_148 < 1.0f)
				{
					Local_99[Local_99.f_120066].f_148 = 1.0f;
				}
			}
			else if (UNK_0x062C5047("@HORSESHOES.AIM_RIGHT", 1, 0))
			{
				Local_99[Local_99.f_120066].f_148 = (Local_99[Local_99.f_120066].f_148 - (0,05f * Function_287()));
				if (Local_99[Local_99.f_120066].f_148 > -1.0f)
				{
					Local_99[Local_99.f_120066].f_148 = -1.0f;
				}
			}
			SET_PANIM_PARAMS(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_148, 0.0f);
			Function_269(&Local_99);
			if (UNK_0xFC7766A0())
			{
				bVar8 = true;
			}
			else
			{
				bVar8 = false;
				fLocal_42 = (fLocal_42 + bLocal_427);
				if (fLocal_42 < fLocal_43)
				{
					bVar8 = true;
					fLocal_42 = (fLocal_42 - fLocal_43);
					if (fLocal_42 > 0.0f)
					{
						fLocal_42 = 0.0f;
					}
				}
				if (iLocal_44 && bVar8)
				{
					iVar9 = 1;
					iLocal_44 = 0;
				}
			}
			if (UNK_0xDA674AE0("@HORSESHOES.RELEASE", 1, 0))
			{
				if (bVar8)
				{
					iVar9 = 1;
				}
				else
				{
					iLocal_44 = 1;
				}
			}
			if (((iVar9 && fLocal_62 < 0.0f) && !UNK_0x062C5047("@HORSESHOES.AIM", 1, 0)) && !UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				Function_296(15, 0);
				iVar9 = 0;
				iLocal_44 = 0;
			}
			if (((((fVar3 != 0.0f && Local_99[Local_99.f_120066].f_152 != 0.0f) && FABS(fLocal_62) > 0,5f) && Local_99[Local_99.f_120066].f_144 < 0,3f) && Local_99[Local_99.f_120066].f_144 > 0,7f) && !UNK_0x062C5047("@HORSESHOES.AIM", 1, 0))
			{
				if (Function_268(&iLocal_53))
				{
					Function_266(&iLocal_53);
				}
				if (Function_291(&iLocal_53) < 5.0f)
				{
					if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/sweep_idle");
					}
				}
			}
			else
			{
				Function_288(&iLocal_53);
				Function_272(&iLocal_53);
				if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/sweep_idle"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/sweep");
				}
			}
			break;
		
		case 0x0000000D:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/Sweep") || Function_297(32))
			{
				if (Function_297(32))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Sweep");
				}
				SET_PANIM_PARAMS(&(Local_99[Local_99.f_120066]), 0.0f, 0.0f);
				SET_PANIM_PHASE(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_144);
				iLocal_440 = 0;
				fLocal_437 = fLocal_29;
				bLocal_439 = RAND_FLOAT_RANGE(fLocal_30, fLocal_31);
				bLocal_438 = RAND_FLOAT_RANGE(fLocal_22, fLocal_23);
				fVar28 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (fVar28 > fLocal_28)
				{
					bLocal_436 = 0.0f;
					bVar29 = RAND_INT_RANGE(0, true);
					if (bVar29 == 0)
					{
						bLocal_438 = 0,65f;
						bLocal_439 = 0,09f;
					}
					else if (bVar29 == 1)
					{
						bLocal_438 = 0,75f;
						bLocal_439 = 0,04f;
					}
				}
				else if (Function_278())
				{
					bLocal_436 = RAND_FLOAT_RANGE(fLocal_24, fLocal_25);
				}
				else
				{
					bLocal_436 = RAND_FLOAT_RANGE(-fLocal_25, -fLocal_24);
				}
				iLocal_441 = 0;
				PRINTSTRING("fRandXForce = ");
				PRINTFLOAT(bLocal_436);
				PRINTNL();
				PRINTSTRING("fRandReleasePoint = ");
				PRINTFLOAT(bLocal_438);
				PRINTNL();
				PRINTSTRING("fRandBackTossDone = ");
				PRINTFLOAT(bLocal_439);
				PRINTNL();
				Function_296(14, 0);
			}
			else
			{
				Function_280(&Local_99, 13);
			}
			break;
		
		case 0x0000000E:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (Local_99[Local_99.f_120066].f_160 == 1)
			{
				if (Local_99.f_1200 == 0)
				{
					iVar30 = 1;
				}
				else
				{
					iVar30 = 0;
				}
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[iVar3066]), "horseshoe/look/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[iVar3066]), "horseshoe/look/pst");
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_99[iVar3066]), "horseshoe/look_right/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[iVar3066]), "horseshoe/look_right/pst");
				}
			}
			if (Local_99[Local_99.f_120066].f_144 >= bLocal_439 && fLocal_437 < 0.0f)
			{
				fLocal_437 = RAND_FLOAT_RANGE(fLocal_32, fLocal_33);
			}
			else if (Local_99[Local_99.f_120066].f_144 <= bLocal_438)
			{
				if (iLocal_441 <= iLocal_440)
				{
					fLocal_437 = fLocal_29;
					iLocal_441++;
				}
				else if (fLocal_437 >= fLocal_33)
				{
					Function_296(15, 0);
				}
			}
			fVar2 = (-2.0f * fLocal_65);
			fVar3 = (1,4f * -fLocal_437);
			fLocal_61 = ((fVar2 + fVar3) * Function_287());
			fVar4 = 0.0f;
			fVar5 = ((-fLocal_63 * 1.0f) * bLocal_427);
			bLocal_62 = (((fLocal_63 + (fLocal_61 / 10.0f)) + fVar5) + fVar4);
			fLocal_64 = (fLocal_65 + (bLocal_62 * bLocal_427));
			if (fLocal_64 > -1.0f)
			{
				fLocal_64 = -1.0f;
			}
			else if (fLocal_64 < 1.0f)
			{
				fLocal_64 = 1.0f;
			}
			Local_99[Local_99.f_120066].f_144 = ((fLocal_64 / 2.0f) + 0,5f);
			SET_PANIM_PHASE(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_144);
			fLocal_63 = bLocal_62;
			fLocal_65 = fLocal_64;
			Local_99[Local_99.f_120066].f_148 = -Function_265(&Local_99, bLocal_436, Local_99.f_1200);
			SET_PANIM_PARAMS(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_148, 0.0f);
			if (Function_297(32))
			{
				Function_296(15, 0);
			}
			Function_280(&Local_99, 14);
			break;
		
		case 0x0000001E:
			if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			Function_280(&Local_99, 30);
			if (iLocal_442 != 0)
			{
				switch (iLocal_442)
				{
					case 0x00000002:
						uLocal_433 = Vector(0.0f, 0.0f, 0.0f);
						Function_264("Player just dropped the damned thing", 0x40800000, 0, 2, 1, 0);
					
					case 0x00000001:
						Function_296(15, 0);
						iLocal_442 = 0;
						break;
					
					case 0x00000003:
						bLocal_2 = true;
						break;
					}
			}
			break;
		
		case 0x0000000F:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			fLocal_40 = bLocal_62;
			fLocal_41 = Local_99[Local_99.f_120066].f_144;
			PLAY_SOUND_FROM_ACTOR(&(Local_99[Local_99.f_120066]), "HORSESHOES_RELEASE_MASTER", 0);
			REMOVE_ALL_OBJECT_ATTACHMENTS(GET_OBJECT_FROM_ACTOR(&(Local_99[Local_99.f_120066])));
			if (!Function_311() || Function_298(&Local_99))
			{
				if (IS_LOCAL_PLAYER(&(Local_99[Local_99.f_120066])))
				{
					Function_263(&Local_99, Local_99.f_1200, -Local_99[Local_99.f_120066].f_148, bLocal_62);
					uLocal_433 = Function_263(&Local_99, Local_99.f_1200, -Local_99[Local_99.f_120066].f_148, bLocal_62);
				}
				else
				{
					Function_263(&Local_99, Local_99.f_1200, -Local_99[Local_99.f_120066].f_148, bLocal_62);
					uLocal_433 = Function_263(&Local_99, Local_99.f_1200, -Local_99[Local_99.f_120066].f_148, bLocal_62);
				}
			}
			if (Function_262(Local_99.f_1200, Local_99[Local_99.f_120066].f_160, "in HSH_RELEASE_SHOE!", &Local_99))
			{
				SET_PROP_COLLIDE_WITH_MOVABLES(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160], 1);
				if (Function_297(32))
				{
					GET_VOLUME_CENTER(&Local_99 + 1220[Local_99.f_1308], &vVar31);
					fVar33 = RAND_FLOAT_RANGE(0.0f, 100.0f);
					if (fVar33 >= fLocal_28)
					{
						Var34 = Vector((vVar31.x + RAND_FLOAT_RANGE(-0,1f, 0.0f)), vVar31.y, (vVar31.z + RAND_FLOAT_RANGE(-0,1f, 0.0f)));
						Var36 = Vector(0.0f, IntToFloat(RAND_INT_RANGE(260, 280)), 0.0f);
					}
					else
					{
						Var34 = Vector((vVar31.x + RAND_FLOAT_RANGE(fLocal_26, fLocal_27)), vVar31.y, (vVar31.z + RAND_FLOAT_RANGE(fLocal_26, fLocal_27)));
						Var36 = Vector(RAND_FLOAT_RANGE(0.0f, 360.0f), RAND_FLOAT_RANGE(0.0f, 360.0f), RAND_FLOAT_RANGE(0.0f, 360.0f));
					}
					SET_OBJECT_POSITION(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160], Var34);
					SET_OBJECT_ORIENTATION(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160], Var36);
					ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]));
				}
				else
				{
					SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]), &uLocal_433);
					if (!Function_311() || Function_298(&Local_99))
					{
						if (Local_99[Local_99.f_120066].f_148 < 0.0f)
						{
							iLocal_430 = Vector((RAND_FLOAT_RANGE(-Local_99[Local_99.f_120066].f_148, Local_99[Local_99.f_120066].f_148) * 1.0f), (RAND_FLOAT_RANGE(-Local_99[Local_99.f_120066].f_148, Local_99[Local_99.f_120066].f_148) * 1.0f), (RAND_FLOAT_RANGE(Local_99[Local_99.f_120066].f_148, Local_99[Local_99.f_120066].f_148) * 1.0f));
						}
						else
						{
							iLocal_430 = Vector((RAND_FLOAT_RANGE(Local_99[Local_99.f_120066].f_148, -Local_99[Local_99.f_120066].f_148) * 1.0f), (RAND_FLOAT_RANGE(Local_99[Local_99.f_120066].f_148, -Local_99[Local_99.f_120066].f_148) * 1.0f), (RAND_FLOAT_RANGE(Local_99[Local_99.f_120066].f_148, -Local_99[Local_99.f_120066].f_148) * 1.0f));
						}
						Function_261(1, &uLocal_433, &iLocal_430);
						if (!NET_REQUEST_OBJECT(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]))
						{
							NET_LOG(true, "Horseshoes Net Prop", "Somehow failed to send ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_99.f_1200), I2STR(Local_99[Local_99.f_120066].f_160), 0, 0);
						}
						else
						{
							NET_LOG(true, "Horseshoes Net Prop", "Requested ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_99.f_1200), I2STR(Local_99[Local_99.f_120066].f_160), 0, 0);
						}
					}
					SET_PROP_ANGULAR_VELOCITY_DEGS(GET_PHYSINST_FROM_OBJECT(&Local_99[Local_99.f_120066] + 164[Local_99[Local_99.f_120066].f_160]), &iLocal_430);
				}
			}
			Function_288(&iLocal_45);
			Function_187();
			fLocal_457 = 0.0f;
			Function_296(16, 0);
			break;
		
		case 0x00000010:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			if ((Function_291(&iLocal_45) < 2.0f || IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/grab2")) || Function_297(32))
			{
				if (!Function_297(64) || Function_297(32))
				{
					if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/Sweep") || IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/sweep_idle"))
					{
						if (((Local_99[Local_99.f_120066].f_160 != 0 || Function_297(128)) || Function_297(256)) && (!Local_69.f_84 || Local_99.f_1200 != 1))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Low/Straight");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Low/Straight");
						}
					}
					Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 0);
					Function_296(17, 1);
				}
			}
			if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/Sweep"))
			{
				if (Local_99[Local_99.f_120066].f_144 < 0,99f && Local_99[Local_99.f_120066].f_144 >= 1.0f)
				{
					if (((Local_99[Local_99.f_120066].f_160 != 0 || Function_297(128)) || Function_297(256)) && (!Local_69.f_84 || Local_99.f_1200 != 1))
					{
						if (Local_99[Local_99.f_120066].f_148 < (0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/High/Left");
						}
						else if (Local_99[Local_99.f_120066].f_148 > (-0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/High/Right");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/High/Straight");
						}
					}
					else if (Local_99[Local_99.f_120066].f_148 < (0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/High/Left");
					}
					else if (Local_99[Local_99.f_120066].f_148 > (-0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/High/Right");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/High/Straight");
					}
				}
				else if ((Local_99[Local_99.f_120066].f_144 <= 0,7f && Local_99[Local_99.f_120066].f_144 > 0,75f) && FABS((fLocal_41 - 0,7f)) < 0,05f)
				{
					if (((Local_99[Local_99.f_120066].f_160 != 0 || Function_297(128)) || Function_297(256)) && (!Local_69.f_84 || Local_99.f_1200 != 1))
					{
						if (Local_99[Local_99.f_120066].f_148 < (0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Middle/Left");
						}
						else if (Local_99[Local_99.f_120066].f_148 > (-0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Middle/Right");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Middle/Straight");
						}
					}
					else if (Local_99[Local_99.f_120066].f_148 < (0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Middle/Left");
					}
					else if (Local_99[Local_99.f_120066].f_148 > (-0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Middle/Right");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Middle/Straight");
					}
				}
				else if ((Local_99[Local_99.f_120066].f_144 <= 0,55f && Local_99[Local_99.f_120066].f_144 > 0,6f) && FABS((fLocal_41 - 0,55f)) < 0,05f)
				{
					if (((Local_99[Local_99.f_120066].f_160 != 0 || Function_297(128)) || Function_297(256)) && (!Local_69.f_84 || Local_99.f_1200 != 1))
					{
						if (Local_99[Local_99.f_120066].f_148 < (0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Low/Left");
						}
						else if (Local_99[Local_99.f_120066].f_148 > (-0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Low/Right");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Pickup/Low/Straight");
						}
					}
					else if (Local_99[Local_99.f_120066].f_148 < (0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Low/Left");
					}
					else if (Local_99[Local_99.f_120066].f_148 > (-0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Low/Right");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_99[Local_99.f_120066]), "horseshoe/Pst/Low/Straight");
					}
				}
				else
				{
					fLocal_61 = fLocal_61;
					fVar4 = 0.0f;
					fVar5 = ((-fLocal_63 * 1.0f) * bLocal_427);
					bLocal_62 = (((fLocal_63 + (fLocal_61 / 10.0f)) + fVar5) + fVar4);
					fLocal_64 = (fLocal_65 + (bLocal_62 * bLocal_427));
					if (fLocal_64 > -1.0f)
					{
						fLocal_64 = -1.0f;
					}
					else if (fLocal_64 < 1.0f)
					{
						fLocal_64 = 1.0f;
					}
					Local_99[Local_99.f_120066].f_144 = ((fLocal_64 / 2.0f) + 0,5f);
					SET_PANIM_PHASE(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_144);
					fLocal_63 = bLocal_62;
					fLocal_65 = fLocal_64;
				}
			}
			if (!bLocal_35)
			{
				Function_259(&Local_99, Function_294(&Local_99), Local_99.f_1200, -Local_99[Function_294(&Local_99)66].f_148);
			}
			Function_280(&Local_99, 16);
			break;
		
		case 0x00000011:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 4;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (Local_99[Local_99.f_120066].f_160 == 1)
			{
				if (Function_298(&Local_99))
				{
					if (!Function_297(2))
					{
						if (Function_279(&Local_99, Local_99.f_1200, 1))
						{
							if (Function_278())
							{
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 272, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 470, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							Function_295(2, 1);
							Function_138("HorseShoes_LongThrowHelp", 12.0f, 1, 0, 2, 1, 0);
						}
					}
					if (!Function_297(4))
					{
						if (Function_277(&Local_99, Local_99.f_1200, 1))
						{
							if (Function_278())
							{
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 272, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_41 < fLocal_34)
							{
								Function_138("HorseShoes_ShortThrowLateReleaseHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 470, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_40 > 2,5f)
							{
								Function_138("HorseShoes_ShortThrowLowVelocityHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 471, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if ((Function_274(1, 1, &Local_99) > Function_274(0, 1, &Local_99) && Function_274(1, 1, &Local_99) > Function_274(0, 0, &Local_99)) || (Function_274(1, 0, &Local_99) > Function_274(0, 1, &Local_99) && Function_274(1, 0, &Local_99) > Function_274(0, 0, &Local_99)))
					{
						iVar38 = 1;
					}
					if ((!Function_277(&Local_99, Local_99.f_1200, 1) && !Function_279(&Local_99, Local_99.f_1200, 1)) && iVar38)
					{
						if (Function_278())
						{
							SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 271, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 472, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 272, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Function_279(&Local_99, Local_99.f_1200, 0) || Function_277(&Local_99, Local_99.f_1200, 0))
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 473, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_274(Local_99.f_1200, 1, &Local_99) > 1.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 474, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			if ((Function_291(&iLocal_45) < 0.0f || (!Function_311() && UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))) || Function_297(32))
			{
				Local_99[Local_99.f_120066].f_160++;
				if (Local_99[Local_99.f_120066].f_160 <= 2 && !Function_297(128))
				{
					if (Local_99.f_1200 == 0)
					{
						if (Local_99[066].f_136 != 1 || Local_99[066].f_136 != 3)
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/look");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/look_right");
						}
					}
					Local_99.f_1200 = (Local_99.f_1200 + 1 % 2);
					if (Local_99[Local_99.f_120066].f_160 == 2)
					{
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							Local_99[iVar066].f_160 = 0;
							iVar0++;
						}
						if (Local_69.f_84)
						{
							Function_296(3, 0);
						}
						else
						{
							Function_296(29, 1);
						}
					}
					else if (Local_69.f_84)
					{
						Function_296(1, 0);
					}
					else
					{
						Function_296(8, 1);
					}
				}
				else if (Local_69.f_84 && Local_99.f_1200 != 0)
				{
					Function_296(1, 0);
				}
				else
				{
					Function_296(9, 0);
				}
			}
			break;
		
		case 0x00000003:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_187();
				Function_283(0,5f);
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					Local_99[iVar066].f_160 = 0;
					iVar0++;
				}
				Local_99.f_1200 = 0;
				Function_296(20, 0);
			}
			else
			{
				Function_280(&Local_99, 3);
			}
			break;
		
		case 0x0000001D:
			if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			UI_EXIT("HorseShoes");
			if (Function_311())
			{
				bVar39 = Function_294(&Local_99);
			}
			else
			{
				bVar39 = (Local_99.f_1200 + 1 % 2);
			}
			if (!Function_262(bVar39, (Local_99[bVar3966].f_160 + 1 % 2), "in HSH_PRE_DETERMINE_WINNER!", &Local_99))
			{
			}
			else if (!Function_258(&Local_99[bVar3966] + 164[(Local_99[bVar3966].f_160 + 1 % 2)]) || Function_257(&Local_99, &Local_99[bVar3966] + 164[(Local_99[bVar3966].f_160 + 1 % 2)]))
			{
				if (!Function_297(1))
				{
					Function_295(1, 1);
					Function_138("HorseShoes_ScoreHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
				bVar6 = false;
				while (bVar6 <= 2)
				{
					bVar7 = false;
					while (bVar7 <= 2)
					{
						if (!Function_311() || bVar6 != bVar39)
						{
							if (Function_262(bVar6, bVar7, "while scoring in HSH_PRE_DETERMINE_WINNER", &Local_99))
							{
								Function_256(&Local_99[bVar666] + 164[bVar7]);
								Var40 = Function_256(&Local_99[bVar666] + 164[bVar7]);
								Var40.f_4 = StackVal;
								fVar42 = Function_274(bVar6, bVar7, &Local_99);
								(*&Local_99[bVar666] + 212)[bVar718] = Function_255(fVar42);
							}
							else
							{
								(*&Local_99[bVar666] + 212)[bVar718] = 100.0f;
							}
							(&Local_99[bVar666] + 212[bVar718])->f_4 = FLOOR((*&Local_99[bVar666] + 212)[bVar718]);
							if (FLOOR((*&Local_99[bVar666] + 212)[bVar718]) == 1)
							{
								strcpy(&Local_99[bVar666] + 212[bVar718] + 12, "HorseShoes_Foot", 32);
							}
							else
							{
								strcpy(&Local_99[bVar666] + 212[bVar718] + 12, "HorseShoes_Feet", 32);
							}
							(&Local_99[bVar666] + 212[bVar718])->f_8 = FLOOR((((*&Local_99[bVar666] + 212)[bVar718] - IntToFloat(FLOOR((*&Local_99[bVar666] + 212)[bVar718]))) * 12.0f));
							if (FLOOR((((*&Local_99[bVar666] + 212)[bVar718] - IntToFloat(FLOOR((*&Local_99[bVar666] + 212)[bVar718]))) * 12.0f)) == 1)
							{
								strcpy(&Local_99[bVar666] + 212[bVar718] + 76, "HorseShoes_Inch", 32);
							}
							else
							{
								strcpy(&Local_99[bVar666] + 212[bVar718] + 76, "HorseShoes_Inches", 32);
							}
							if (Global_47151[2])
							{
								PRINTSTRING("Did the math for player ");
								PRINTINT(bVar6);
								PRINTSTRING("'s ");
								PRINTINT(bVar7);
								PRINTSTRING("th horseshoe (");
								PRINTFLOAT((*&Local_99[bVar666] + 212)[bVar718]);
								PRINTSTRING(")");
								PRINTNL();
							}
						}
						bVar7++;
					}
					bVar6++;
				}
				if (Function_311())
				{
					Function_253((*&Local_99[Function_294(&Local_99)66] + 212)[018], (*&Local_99[Function_294(&Local_99)66] + 212)[118], Function_254(Function_294(&Local_99), 0, &Local_99), Function_254(Function_294(&Local_99), 1, &Local_99));
					Function_296(33, 0);
				}
				else
				{
					Function_296(18, 0);
				}
			}
			break;
		
		case 0x00000021:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (Function_297(1024))
			{
				Function_295(1024, 0);
				bVar7 = false;
				while (bVar7 < 1)
				{
					(*&Local_99[Function_252(&Local_99)66] + 212)[bVar718] = (*&Local_443 + 24)[bVar7];
					(&Local_99[Function_252(&Local_99)66] + 212[bVar718])->f_4 = FLOOR((*&Local_443 + 24)[bVar7]);
					(&Local_99[Function_252(&Local_99)66] + 212[bVar718])->f_8 = FLOOR((((*&Local_443 + 24)[bVar7] - IntToFloat(FLOOR((*&Local_443 + 24)[bVar7]))) * 12.0f));
					bVar7++;
				}
				Function_296(18, 1);
			}
			break;
		
		case 0x00000012:
			if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
			{
				iLocal_68 = 7;
			}
			else if (Function_298(&Local_99))
			{
				iLocal_68 = 5;
			}
			else
			{
				iLocal_68 = 3;
			}
			if (!Function_297(1))
			{
				Function_295(1, 1);
				Function_138("HorseShoes_ScoreHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				Local_99[iVar066].f_508 = Local_99[iVar066].f_512;
				Local_99[iVar066].f_520 = 0;
				iVar43 = 0;
				while (iVar43 <= 2)
				{
					if (Function_254(iVar0, iVar43, &Local_99))
					{
						Local_99[iVar066].f_520++;
						Local_99[iVar066].f_512 += 3;
						(*&Local_99[iVar066] + 212)[iVar4318] = 9999.0f;
					}
					iVar43++;
				}
				iVar0++;
			}
			while (Local_99[066].f_520 < 0 && Local_99[166].f_520 < 0)
			{
				Local_99[066].f_512 = (Local_99[066].f_512 - 3);
				Local_99[066].f_520 = (Local_99[066].f_520 - 1);
				Local_99[166].f_520 = (Local_99[166].f_520 - 1);
				Local_99[166].f_512 = (Local_99[166].f_512 - 3);
			}
			if (Local_99[166].f_520 > 1)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(11))
				{
					AWARD_ACHIEVEMENT(11);
				}
			}
			Local_99[066].f_524 = (Local_99[066].f_524 + Local_99[066].f_520);
			Local_99[166].f_524 = (Local_99[166].f_524 + Local_99[166].f_520);
			if (IntToFloat(Local_99[166].f_524) < Function_62(435))
			{
				Function_51(435, Local_99[166].f_524, 0);
			}
			Function_88(434, Local_99[166].f_520, 0, 0);
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (iVar0 == 0)
				{
					iVar44 = 1;
				}
				else if (iVar0 == 1)
				{
					iVar44 = 0;
				}
				if (Function_254(iVar0, 0, &Local_99))
				{
				}
				else if (((*&Local_99[iVar066] + 212)[018] > (*&Local_99[iVar4466] + 212)[018] && (*&Local_99[iVar066] + 212)[018] > (*&Local_99[iVar4466] + 212)[118]) && Local_99[iVar4466].f_520 != 0)
				{
					iLocal_467 = 0;
					Local_99[iVar066].f_512++;
				}
				if (Function_254(iVar0, 1, &Local_99))
				{
				}
				else if (((*&Local_99[iVar066] + 212)[118] > (*&Local_99[iVar4466] + 212)[018] && (*&Local_99[iVar066] + 212)[118] > (*&Local_99[iVar4466] + 212)[118]) && Local_99[iVar4466].f_520 != 0)
				{
					iLocal_467 = 1;
					Local_99[iVar066].f_512++;
				}
				iVar0++;
			}
			if (Local_99[066].f_512 >= Local_99[066].f_508)
			{
				iLocal_466 = 0;
				iLocal_465 = (Local_99[066].f_512 - Local_99[066].f_508);
				if (iLocal_465 > 3)
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 475, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			else if (Local_99[166].f_512 >= Local_99[166].f_508)
			{
				iLocal_466 = 1;
				iLocal_465 = (Local_99[166].f_512 - Local_99[166].f_508);
				if (iLocal_465 > 3)
				{
					if (Function_278())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 269, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 476, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			else
			{
				iLocal_466 = 4294967295;
			}
			Function_288(&iLocal_45);
			Function_296(19, 1);
			break;
		
		case 0x00000013:
			iLocal_68 = 8;
			if (!HUD_IS_SHOWING_HELP_TEXT() || UNK_0x062C5047("@HORSESHOES.SKIP_TO_PLAYER", 1, 0))
			{
				Function_251(&Local_99);
				if (iLocal_466 == 4294967295)
				{
					Function_286("HorseShoes_NoWinner", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					UI_SET_STRING("GENERIC_DBUFFER64_0", UI_GET_STRING(&Local_99[iLocal_46666] + 8));
					UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER10_0"));
					UI_SET_STRING("GENERIC_DBUFFER10_1", UI_GET_STRING(&Local_99[iLocal_46666] + 212[iLocal_46718] + 12));
					UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER10_2"));
					UI_SET_STRING("GENERIC_DBUFFER10_3", UI_GET_STRING(&Local_99[iLocal_46666] + 212[iLocal_46718] + 76));
					if (StackVal == 0)
					{
						bVar45 = false;
					}
					else
					{
						bVar45 = true;
					}
					if (iLocal_465 == 2)
					{
						if (iLocal_467 == 0)
						{
							iVar46 = 1;
						}
						else
						{
							iVar46 = 0;
						}
						UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER32_0"));
						UI_SET_STRING("GENERIC_DBUFFER32_1", UI_GET_STRING(&Local_99[iLocal_46666] + 212[iVar4618] + 12));
						UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER32_2"));
						UI_SET_STRING("GENERIC_DBUFFER32_3", UI_GET_STRING(&Local_99[iLocal_46666] + 212[iVar4618] + 76));
					}
					if (StackVal == 0)
					{
						bVar47 = false;
					}
					else
					{
						bVar47 = true;
					}
					if (iLocal_466 == Function_294(&Local_99))
					{
						switch (iLocal_465)
						{
							case 0x00000001:
								if (bVar45)
								{
									Function_286("HorseShoes_OnePoint_Self", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_286("HorseShoes_OnePoint_Self_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								break;
							
							case 0x00000002:
								if (bVar45 && bVar47)
								{
									Function_286("HorseShoes_TwoPoint_Self", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else if (!bVar45 && bVar47)
								{
									Function_286("HorseShoes_TwoPoint_Self_First_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else if (bVar45 && !bVar47)
								{
									Function_286("HorseShoes_TwoPoint_Self_Second_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_286("HorseShoes_TwoPoint_Self_Both_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								break;
							
							case 0x00000003:
								Function_286("HorseShoes_ThreePoint_Self", 0x40f00000, 1, 2, 0, 0, 0, 0);
								break;
							
							case 0x00000004:
								if (bVar45)
								{
									Function_286("HorseShoes_FourPoint_Self", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_286("HorseShoes_FourPoint_Self_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								break;
							
							case 0x00000006:
								Function_286("HorseShoes_SixPoint_Self", 0x40f00000, 1, 2, 0, 0, 0, 0);
								break;
						}
					}
					else
					{
						switch (iLocal_465)
						{
							case 0x00000001:
								if (bVar45)
								{
									Function_286("HorseShoes_OnePoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_286("HorseShoes_OnePoint_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								break;
							
							case 0x00000002:
								if (bVar45 && bVar47)
								{
									Function_286("HorseShoes_TwoPoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else if (!bVar45 && bVar47)
								{
									Function_286("HorseShoes_TwoPoint_First_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else if (bVar45 && !bVar47)
								{
									Function_286("HorseShoes_TwoPoint_Second_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_286("HorseShoes_TwoPoint_Both_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								break;
							
							case 0x00000003:
								Function_286("HorseShoes_ThreePoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
								break;
							
							case 0x00000004:
								if (bVar45)
								{
									Function_286("HorseShoes_FourPoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_286("HorseShoes_FourPoint_No_Feet", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								break;
							
							case 0x00000006:
								Function_286("HorseShoes_SixPoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
								break;
							}
						}
				}
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/idle");
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[166]), "horseshoe/idle");
				Function_187();
				Function_288(&iLocal_45);
				if (Local_99[166].f_512 <= 11 && (Local_99[166].f_512 - Local_99[066].f_512) <= 2)
				{
					Function_288(&iLocal_45);
					Function_296(24, 0);
				}
				else if (Local_99[066].f_512 <= 11 && (Local_99[066].f_512 - Local_99[166].f_512) <= 2)
				{
					Function_288(&iLocal_45);
					Function_296(24, 0);
				}
				else
				{
					Function_296(20, 1);
				}
			}
			else
			{
				Function_280(&Local_99, 19);
			}
			break;
		
		case 0x00000014:
			if ((!HUD_IS_SHOWING_OBJECTIVE() || Function_291(&iLocal_45) < (4.0f * 2.0f)) || UNK_0xDA674AE0("@HORSESHOES.SKIP_TO_PLAYER", 1, 0))
			{
				iLocal_68 = 9;
				HUD_CLEAR_OBJECTIVE();
				Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 1);
				Local_99.f_1308++;
				if (Local_99.f_1308 > 2)
				{
					Local_99.f_1308 = 0;
				}
				if (Function_311())
				{
					switch (Local_99[066].f_136)
					{
						case 0x00000000:
							Function_250(&Local_99, 0, 3);
							break;
						
						case 0x00000003:
							Function_250(&Local_99, 0, 0);
							break;
						
						case 0x00000001:
							Function_250(&Local_99, 0, 2);
							break;
						
						case 0x00000002:
							Function_250(&Local_99, 0, 1);
							break;
					}
					switch (Local_99[166].f_136)
					{
						case 0x00000000:
							Function_250(&Local_99, 1, 3);
							break;
						
						case 0x00000003:
							Function_250(&Local_99, 1, 0);
							break;
						
						case 0x00000001:
							Function_250(&Local_99, 1, 2);
							break;
						
						case 0x00000002:
							Function_250(&Local_99, 1, 1);
							break;
					}
				}
				else
				{
					switch (Local_99.f_1308)
					{
						case 0x00000000:
							Function_250(&Local_99, 0, 3);
							Function_250(&Local_99, 1, 2);
							break;
						
						case 0x00000001:
							Function_250(&Local_99, 0, 0);
							Function_250(&Local_99, 1, 1);
							break;
						}
				}
				Function_288(&iLocal_45);
				iLocal_67++;
				if ((iLocal_67 % 4) == 0)
				{
					AUDIO_RESET_SPEECH_HISTORY();
				}
				Function_296(21, 0);
			}
			break;
		
		case 0x00000015:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (Function_291(&iLocal_45) < 1.0f)
			{
				if (!HUD_IS_FADED())
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Local_69.f_84 = 0;
				Function_296(22, 0);
			}
			break;
		
		case 0x00000016:
			if (HUD_IS_FADED())
			{
				bVar6 = false;
				while (bVar6 <= 2)
				{
					bVar7 = false;
					while (bVar7 <= 2)
					{
						if (Function_262(bVar6, bVar7, "in HSH_WAIT_FOR_FADE", &Local_99))
						{
							DESTROY_OBJECT(&Local_99[bVar666] + 164[bVar7]);
						}
						if (Function_249(bVar6, bVar7, "in HSH_WAIT_FOR_FADE", &Local_99))
						{
							DESTROY_VOLUME(&Local_99[bVar666] + 188[bVar7]);
						}
						bVar7++;
					}
					bVar6++;
				}
				UI_EXIT("HorseShoes");
				TASK_CLEAR(&(Local_99[066]));
				TASK_CLEAR(&(Local_99[166]));
				if (Function_311())
				{
					SNAP_ACTOR_TO_GRINGO(&(Local_99[Function_294(&Local_99)66]), &Local_99 + 1064[Local_99.f_12084] + 8, "UseCase1", true, 0, 0);
				}
				else
				{
					SNAP_ACTOR_TO_GRINGO(&(Local_99[066]), &Local_99 + 1064[Local_99[066].f_1364] + 8, "UseCase1", false, 0, 0);
					SNAP_ACTOR_TO_GRINGO(&(Local_99[166]), &Local_99 + 1064[Local_99[166].f_1364] + 8, "UseCase1", false, 0, 0);
				}
				TASK_USE_GRINGO(&(Local_99[066]), GET_GRINGO_FROM_OBJECT(&Local_99 + 1064[Local_99[066].f_1364] + 8), "UseCase1", 1, 1);
				TASK_USE_GRINGO(&(Local_99[166]), GET_GRINGO_FROM_OBJECT(&Local_99 + 1064[Local_99[166].f_1364] + 8), "UseCase1", 1, 1);
				Function_296(23, 1);
			}
			break;
		
		case 0x00000017:
			if ((Function_311() || (IS_ACTION_NODE_PLAYING(&(Local_99[066]), "horseshoe/idle") && IS_ACTION_NODE_PLAYING(&(Local_99[166]), "horseshoe/idle"))) && !HUD_IS_FADING())
			{
				TELEPORT_ACTOR(&(Local_99[166]), &Local_99 + 1064[Local_99[166].f_1364] + 16, 1, 1, 1);
				if (Local_99[166].f_136 != 1 || Local_99[166].f_136 != 3)
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[166]), "horseshoe/look/mid");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_99[166]), "horseshoe/look_right/mid");
				}
				HUD_FADE_IN(1.0f, 1065353216);
				Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 1);
				Local_99[RAND_FLOAT_RANGE(-0,5f, 0,5f)66].f_148 = StackVal;
				if (Local_99[066].f_512 != 0 && Local_99[166].f_512 != 0)
				{
					Function_296(6, 1);
				}
				else
				{
					Function_296(8, 1);
				}
			}
			break;
		
		case 0x0000001F:
			Function_248(iLocal_490);
			Function_296(32, 0);
			break;
		
		case 0x00000020:
			if (Function_227(iLocal_490, 0, 0x3f800000))
			{
				Function_296(iLocal_490, 0);
			}
			break;
		
		case 0x00000018:
			if ((!HUD_IS_SHOWING_OBJECTIVE() && Function_291(&iLocal_45) < (4.0f * 2.0f)) || UNK_0xDA674AE0("@HORSESHOES.SKIP_TO_PLAYER", 1, 0))
			{
				if (Local_99[166].f_512 <= 11 && (Local_99[166].f_512 - Local_99[066].f_512) <= 2)
				{
					Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 1);
					if (Function_278() || IS_AMBIENT_SPEECH_PLAYING(&(Local_99[166])))
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 273, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 477, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					UI_EXIT("Scorebox");
					UI_EXIT("HorseShoes");
					Function_119(Local_99.f_1212 * 2, 1, 1);
					PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
					DECOR_SET_INT(&(Local_99[066]), "iAdditionalMoney", false);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "HorseShoes_Win_Self", &Local_99[166] + 8, "", "", "", 0, 2, 0, 0, 0);
					Function_88(433, Local_99.f_1212, 0, 0);
					Function_88(450, Local_99.f_1212, 0, 0);
					if ((Function_66(597) + Function_66(450)) < 10000 && Local_99.f_1212 < 0)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
						{
							AWARD_ACHIEVEMENT(24);
						}
					}
					Function_288(&iLocal_45);
					Function_296(25, 0);
				}
				else if (Local_99[066].f_512 <= 11 && (Local_99[066].f_512 - Local_99[166].f_512) <= 2)
				{
					Function_281(StackVal, StackVal, -Local_99[&Local_9966].f_148, 1);
					if (Function_278())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[066]), 270, &(Local_99[166]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_99[166]), 478, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "HorseShoes_Win", &Local_99[066] + 8, "", "", "", 0, 2, 0, 0, 0);
					Function_117(433, Local_99.f_1212, 0);
					Function_117(450, Local_99.f_1212, 0);
					Function_288(&iLocal_45);
					Function_296(26, 0);
				}
			}
			break;
		
		case 0x00000019:
			if ((!IS_AMBIENT_SPEECH_PLAYING(&(Local_99[066])) && !IS_AMBIENT_SPEECH_PLAYING(&(Local_99[166]))) || Function_291(&iLocal_45) < 5.0f)
			{
				Function_187();
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_17 = 0;
			}
			break;
		
		case 0x0000001A:
			if ((!IS_AMBIENT_SPEECH_PLAYING(&(Local_99[066])) && !IS_AMBIENT_SPEECH_PLAYING(&(Local_99[166]))) || Function_291(&iLocal_45) < 5.0f)
			{
				if (Global_43787 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_43787 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_43787 == 2)
				{
					AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				Function_187();
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_17 = 1;
			}
			break;
		
		case 0x0000001B:
			if (HUD_IS_FADED())
			{
				Function_184();
				Function_296(iLocal_464, 0);
			}
			break;
		
		case 0x0000001C:
			if (!HUD_IS_FADING())
			{
				Function_295(32, 0);
				Function_296(iLocal_464, 0);
			}
			else if (IS_ACTION_NODE_PLAYING(&(Local_99[Local_99.f_120066]), "horseshoe/sweep"))
			{
				SET_PANIM_PHASE(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_144);
				SET_PANIM_PARAMS(&(Local_99[Local_99.f_120066]), Local_99[Local_99.f_120066].f_148, 0.0f);
			}
			break;
		
		case 0x00000023:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_191()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_191()), "bQuitMinigame"))
				{
					Function_187();
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_17 = 2;
				}
				else
				{
					Function_296(iLocal_464, 0);
				}
				UI_EXIT("Horseshoes_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_191()), "bQuitMinigame");
			}
			break;
	}
	if (((!Function_311() && !HUD_IS_FADING()) && !HUD_IS_FADED()) && !iLocal_491 != 35)
	{
		if (UNK_0x973F30EE("@UI.CANCELMINIGAME", 1, 1))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_191()), "bQuitMinigame"))
			{
				UI_ENTER("Horseshoes_Quit_Confirmation_Popup");
			}
			iLocal_464 = iLocal_491;
			Function_296(35, 0);
		}
	}
	Function_187();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_68)
		{
			case 0x00000000:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(3, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(3, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(1, "{@MINIGAME.INCREASE_BET}{@MINIGAME.DECREASE_BET}", "HorseShoes_ChangeBet", 1, 0, 0, 0, 0);
				Function_223(0, "{@UI.ACCEPT}", "HorseShoes_EnterBet", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(4, "{@HORSESHOES.ZOOM_AT_STAKE}", "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				Function_223(3, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000004:
				Function_223(6, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(5, "{@HORSESHOES.ZOOM_AT_STAKE}", "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_223(0, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000005:
				Function_223(6, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(5, "{@HORSESHOES.ZOOM_AT_STAKE}", "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				Function_223(4, "{@HORSESHOES.AIM}", "HorseShoes_AimCamera", 1, 0, 0, 0, 0);
				Function_223(3, "{@HORSESHOES.AIM_LEFT}{@HORSESHOES.AIM_RIGHT}", "HorseShoes_Aim", 1, 0, 0, 0, 0);
				Function_223(2, "{@HORSESHOES.SWING_FORWARD}{@HORSESHOES.SWING_BACKWARD}", "HorseShoes_Swing", 1, 0, 0, 0, 0);
				Function_223(1, "{@HORSESHOES.RELEASE}", "HorseShoes_Release", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_223(0, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000006:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(4, "{@HORSESHOES.ZOOM_AT_STAKE}", "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				Function_223(2, "{@HORSESHOES.AIM_LEFT}{@HORSESHOES.AIM_RIGHT}", "HorseShoes_Aim", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_223(0, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000007:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(3, "{@HORSESHOES.LOOK_AROUND_UP}{@HORSESHOES.LOOK_AROUND_LEFT}{@HORSESHOES.LOOK_AROUND_DOWN}{@HORSESHOES.LOOK_AROUND_RIGHT}", "HorseShoes_LookAround", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_223(0, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000008:
				Function_223(5, "{@UI.CANCELMINIGAME}", "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_223(3, "{@HORSESHOES.SKIP_TO_PLAYER}", "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000009:
				break;
			}
	}
	return;
}

int Function_223(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1077B / 67451
{
	if (!Function_226(uParam0, &uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_225(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_224(uParam0, &iParam2);
}

int Function_224(var uParam0, int iParam1) //Position: 0x107BE / 67518
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x107CD / 67533
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_226(var uParam0, int iParam1) //Position: 0x1080C / 67596
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

bool Function_227(bool bParam0, bool bParam1, float fParam2) //Position: 0x1081B / 67611
{
	struct<17> Var0;
	
	if (&bParam1)
	{
		Function_248(bParam0);
	}
	Function_247(&Var0);
	fVar3 = 0.0f;
	iVar4 = 0;
	if ((fVar3 - Var0.f_12) <= &fParam2)
	{
		Var0.f_12 = fVar3;
		iVar4 = 1;
		Function_246(&Var0);
	}
	if (Function_245(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_244(&Var0, 0);
		Function_246(&Var0);
		Function_241();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_240(bParam0, iVar4, &uVar5))
	{
		if (Function_239())
		{
			if (!Function_238(&Var0))
			{
				Var6 = bParam0;
				Var6.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var6, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var6)));
				Function_237(&Var0, 1);
				Function_246(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar3;
			Function_246(&Var0);
		}
		else
		{
			fVar7 = (fVar3 - Var0.f_16);
			if (fVar7 <= 60.0f || (uVar5 && fVar7 <= 25.0f))
			{
				if (Function_228(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var8 = GET_LOCAL_SLOT();
					Var8.f_4 = fVar3;
					NET_SCRIPTMSG_SEND(1, 104, &Var8, 4, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_246(&Var0);
	}
	return 0;
}

bool Function_228(int iParam0) //Position: 0x10A6E / 68206
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_235(iVar0))
		{
			iVar1 = Function_229(iVar0);
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

int Function_229(int iParam0) //Position: 0x10AB1 / 68273
{
	int iVar0;
	
	Function_233(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_232(&iVar0);
	}
	else
	{
		Function_231(&iVar0, iParam0);
	}
	return Function_230(&iVar0);
}

int Function_230(int iParam0) //Position: 0x10AD8 / 68312
{
	return iParam0;
}

void Function_231(int iParam0, int iParam1) //Position: 0x10AE2 / 68322
{
	iParam0 = &Global_120101[iParam188] + 184;
	return;
}

void Function_232(int iParam0) //Position: 0x10AF7 / 68343
{
	iParam0 = &Global_122919 + 184;
	return;
}

void Function_233(int iParam0) //Position: 0x10B08 / 68360
{
	Function_234(&iParam0, 4294967286);
	return;
}

void Function_234(var uParam0, int iParam1) //Position: 0x10B17 / 68375
{
	uParam0 = iParam1;
	return;
}

bool Function_235(int iParam0) //Position: 0x10B23 / 68387
{
	return Function_236(iParam0);
}

int Function_236(bool bParam0) //Position: 0x10B2E / 68398
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

void Function_237(int iParam0, bool bParam1) //Position: 0x10BCF / 68559
{
	if (bParam1)
	{
		Function_76(&iParam0, 2);
	}
	else
	{
		Function_38(&iParam0, 2);
	}
	return;
}

bool Function_238(bool bParam0) //Position: 0x10BEB / 68587
{
	return Function_14(bParam0, 2);
}

bool Function_239() //Position: 0x10BF9 / 68601
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	return 0;
}

bool Function_240(int iParam0, var uParam1, bool bParam2) //Position: 0x10C0D / 68621
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
		if (Function_235(iVar0))
		{
			iVar1 = Function_229(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					bParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_241() //Position: 0x10C5F / 68703
{
	Function_242(4294967286);
	return;
}

void Function_242(bool bParam0) //Position: 0x10C6B / 68715
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_232(&uVar0);
		Function_247(&vVar1);
		vVar1.z = uVar0;
		Function_246(&vVar1);
	}
	Function_234(&uVar0, bParam0);
	Function_243(&uVar0);
	return;
}

void Function_243(int iParam0) //Position: 0x10C9A / 68762
{
	*(&Global_122919 + 184) = &iParam0;
	return;
}

void Function_244(int iParam0, bool bParam1) //Position: 0x10CAB / 68779
{
	if (bParam1)
	{
		Function_76(&iParam0, 1);
	}
	else
	{
		Function_38(&iParam0, 1);
	}
	return;
}

bool Function_245(int iParam0) //Position: 0x10CC7 / 68807
{
	return Function_14(iParam0, 1);
}

void Function_246(vector3 vParam0) //Position: 0x10CD5 / 68821
{
	Global_123163 = { StackVal, StackVal, vParam0 };
	return;
}

void Function_247(vector3 vParam0) //Position: 0x10CE6 / 68838
{
	vParam0 = { StackVal, StackVal, Global_123163 };
	return;
}

void Function_248(int iParam0) //Position: 0x10CF7 / 68855
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar21;
	
	bVar0 = iParam0;
	Function_232(&iVar1);
	if (Function_230(&iVar1) != bVar0)
	{
		Function_247(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar5, "Next lockstep state same as last state (", 64);
			stradd(&cVar5, I2STR(bVar0), 64);
			stradd(&cVar5, "). May be fine.", 64);
			if (Function_14(Var2, 4))
			{
			}
		}
		bVar21 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar21), I2STR(bVar21), I2STR(bVar0), 0);
		Var2.f_12 = 0.0f;
		Function_242(bVar0);
		Function_237(&Var2, 0);
		Function_246(&Var2);
	}
	return;
}

bool Function_249(bool bParam0, bool bParam1, bool bParam2, struct<66>[] Param3) //Position: 0x10DF2 / 69106
{
	if (!IS_OBJECT_VALID(&Param3[bParam066] + 188[bParam1]))
	{
		NET_LOG(true, "Horseshoes Net Prop Error", "ERROR: Horseshoe volume %s for player %s is invalid %s", I2STR(bParam1), I2STR(bParam0), &bParam2, 0);
		return 0;
	}
	return 1;
}

void Function_250(struct<66> Param0) //Position: 0x10E7B / 69243
{
	int iVar0;
	var uVar1;
	
	iVar0 = Param0[iParam166].f_136;
	Param0[iParam166].f_136 = iParam2;
	(*&Param0 + 1064)[iVar04] = 0;
	(*&Param0 + 1064)[iParam24] = 1;
	(&Param0 + 1064[iParam24])->f_4 = iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(&(Param0[iParam166])))
	{
		Param0.f_1208 = iParam2;
	}
	if (!Function_311() || IS_ACTOR_LOCAL_PLAYER(&(Param0[iParam166])))
	{
		GET_OBJECT_POSITION(&Param0 + 1064[iParam24] + 8, &uVar1);
		TASK_GO_TO_COORD(&(Param0[iParam166]), &uVar1, 1);
		TASK_PRIORITY_SET(&(Param0[iParam166]), true);
	}
	return;
}

void Function_251(struct<1309> Param0) //Position: 0x10F11 / 69393
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	var uVar10;
	struct<2> Var12;
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
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	
	iLocal_458 = 0;
	iLocal_459 = 1;
	if (Local_99.f_1308 == 0)
	{
		Var0 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 1268[02]), *(&Param0 + 1268[12]), StackVal);
	}
	else
	{
		Var0 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 1268[12]), *(&Param0 + 1268[02]), StackVal);
	}
	Var2 = Var0;
	VSCALE(&Var0, 0,2f);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, *(&Local_99 + 1268[Param0.f_13082]), StackVal);
	Var4.f_4 = (StackVal + 3.0f);
	Var6 = *(&Local_99 + 1268[Param0.f_13082]);
	VSCALE(&Var2, -0,025f);
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var6, StackVal);
	FIND_GROUND_INTERSECTION(&Local_99 + 1268[Param0.f_13082], 10.0f, &uVar8, &uVar10);
	VNORMALIZE(&Var0);
	VNORMALIZE(&uVar10);
	VCROSS(&uVar10, &Var0, &Var12);
	VNORMALIZE(&Var12);
	VSCALE(&Var12, 0,5f);
	fVar14 = GET_ANALOGUE_ACTION("@HORSESHOES.LOOK_AROUND_X", 1);
	fVar15 = GET_ANALOGUE_ACTION("@HORSESHOES.LOOK_AROUND_Y", 1);
	fVar16 = (fVar14 * 1.0f);
	fVar17 = (fVar15 * 1.0f);
	fVar18 = (-0,5f * fLocal_20);
	fVar19 = (fVar18 + fVar16);
	fVar20 = (-0,5f * fLocal_21);
	fVar21 = (fVar20 + fVar17);
	fVar22 = ((-fLocal_18 * 5.0f) * bLocal_427);
	fVar23 = ((-fLocal_19 * 5.0f) * bLocal_427);
	fVar24 = ((fLocal_18 + (fVar19 / 1.0f)) + fVar22);
	fVar25 = ((fLocal_19 + (fVar21 / 1.0f)) + fVar23);
	fVar26 = (fLocal_20 + (fVar24 * bLocal_427));
	fVar27 = (fLocal_21 + (fVar25 * bLocal_427));
	if (fVar26 > -1.0f)
	{
		fVar24 = 0.0f;
		fVar26 = -1.0f;
	}
	else if (fVar26 < 1.0f)
	{
		fVar24 = 0.0f;
		fVar26 = 1.0f;
	}
	if (fVar27 > -1.0f)
	{
		fVar25 = 0.0f;
		fVar27 = -1.0f;
	}
	else if (fVar27 < 1.0f)
	{
		fVar25 = 0.0f;
		fVar27 = 1.0f;
	}
	fLocal_18 = fVar24;
	fLocal_20 = fVar26;
	fLocal_19 = fVar25;
	fLocal_21 = fVar27;
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var12, Var6, StackVal) * Vector(fVar26, fVar26, fVar26), StackVal, StackVal);
	if (GET_LOOKSTICK_INVERT_Y())
	{
		Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var0, Var6, StackVal) * Vector(fVar27, fVar27, fVar27), StackVal, StackVal);
	}
	else
	{
		Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var6, StackVal) * Vector(fVar27, fVar27, fVar27), StackVal, StackVal);
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_36) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&iLocal_36);
	}
	SET_CAMERA_POSITION(&iLocal_36, Var4);
	SET_CAMERA_TARGET_POSITION(&iLocal_36, Var6, 0);
	SET_CAMERA_FOV(&iLocal_36, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iLocal_36, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iLocal_36, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

int Function_252(struct<1209> Param0) //Position: 0x11187 / 70023
{
	return StackVal;
}

void Function_253(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0x111A1 / 70049
{
	int iVar0[2];
	
	if (!Function_311())
	{
		return;
	}
	*(&iVar0 + 24) = 2;
	iVar0[0] = iParam2;
	iVar0[1] = iParam3;
	(*&iVar0 + 24)[0] = uParam0;
	(*&iVar0 + 24)[1] = uParam1;
	NET_SCRIPTMSG_SEND(3, 26, &iVar0, 12, 0);
}

bool Function_254(int iParam0, int iParam1, struct<66> Param2) //Position: 0x111EC / 70124
{
	struct<5> Var0;
	struct<5> Var5;
	float fVar10;
	float fVar11;
	var uVar12;
	
	if (!Function_249(iParam0, iParam1, "in IS_RINGER", &Param2))
	{
		return 0;
	}
	if (Function_311() && iParam0 == Function_294(&Param2))
	{
		return Local_443[iParam1];
	}
	Var0 = *(&Local_69 + 28[Param2.f_13082]);
	GET_VOLUME_SCALE(&Param2 + 1220[Param2.f_1308], &uVar2);
	fVar4 = uVar2;
	Var0.f_4 = 0.0f;
	if (!GET_OBJECT_AXIS(&Param2[iParam066] + 164[iParam1], &Var5, 2))
	{
		LOG_ERROR("Couldn't retireve z-axis for horshoe. Unable to perform ringer detection.");
		return 0;
	}
	Var5.f_4 = 0.0f;
	VNORMALIZE(&Var5);
	uVar9 = CREATE_OBJECT_LOCATOR(&Param2[iParam066] + 164[iParam1], "tip01wrapper");
	if (!IS_OBJECT_VALID(&uVar9))
	{
		LOG_ERROR("Failed to create object wrapper for 'tip01' locator. Cancelling ringer detection.");
		return 0;
	}
	if (!OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar9, &Param2[iParam066] + 164[iParam1], "tip01", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Failed to attach 'rTip01Wrapper' to fragment locator. Cancelling ringer detection.");
		DESTROY_OBJECT(&uVar9);
		return 0;
	}
	if (!GET_OBJECT_POSITION(&uVar9, &Var7))
	{
		LOG_ERROR("Could not get locator offsets for locator 'tip01' on the horseshoe. Cancelling ringer detection.");
		DESTROY_OBJECT(&uVar9);
		return 0;
	}
	Var7.f_4 = 0.0f;
	fVar10 = VDOT(&Var7, &Var5);
	fVar11 = (VDOT(&Var5, &Var0) - fVar10);
	if (fVar11 > fVar4)
	{
		DESTROY_OBJECT(&uVar9);
		return 0;
	}
	if (!GET_OBJECT_AXIS(&uVar9, &Var5, 0))
	{
		LOG_ERROR("Couldn't retireve x-axis for rTip01Wrapper. Unable to perform ringer detection.");
		DESTROY_OBJECT(&uVar9);
		return 0;
	}
	DESTROY_OBJECT(&uVar9);
	Var5.f_4 = 0.0f;
	VNORMALIZE(&Var5);
	fVar10 = VDOT(&Var7, &Var5);
	fVar11 = (VDOT(&Var5, &Var0) - fVar10);
	if (fVar11 > fVar4)
	{
		PRINTSTRING("Failed right plane detection");
		PRINTNL();
		return 0;
	}
	if (!GET_OBJECT_AXIS(&Param2[iParam066] + 164[iParam1], &Var5, 2))
	{
		LOG_ERROR("Couldn't retireve z-axis for horshoe. Unable to perform ringer detection.");
		return 0;
	}
	VSCALE(&Var5, -1.0f);
	Var5.f_4 = 0.0f;
	VNORMALIZE(&Var5);
	if (!GET_OBJECT_POSITION(&Param2[iParam066] + 164[iParam1], &Var7))
	{
		LOG_ERROR("Could not retrieve position of horshoe. This is a problem. Ringer detection aborted.");
		return 0;
	}
	Var7.f_4 = 0.0f;
	fVar10 = VDOT(&Var7, &Var5);
	fVar11 = (VDOT(&Var5, &Var0) - fVar10);
	if (fVar11 > fVar4)
	{
		return 0;
	}
	uVar12 = CREATE_OBJECT_LOCATOR(&Param2[iParam066] + 164[iParam1], "tip02wrapper");
	if (!IS_OBJECT_VALID(&uVar12))
	{
		LOG_ERROR("Failed to create object wrapper for 'tip02' locator. Cancelling ringer detection.");
		return 0;
	}
	if (!OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar12, &Param2[iParam066] + 164[iParam1], "tip02", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Failed to attach 'rTip02Wrapper' to fragment locator. Cancelling ringer detection.");
		DESTROY_OBJECT(&uVar12);
		return 0;
	}
	if (!GET_OBJECT_POSITION(&uVar12, &Var7))
	{
		LOG_ERROR("Could not get locator offsets for locator 'tip02' on the horseshoe. Cancelling ringer detection.");
		return 0;
	}
	if (!GET_OBJECT_AXIS(&uVar12, &Var5, 0))
	{
		LOG_ERROR("Couldn't retireve x-axis for horshoe. Unable to perform ringer detection.");
		DESTROY_OBJECT(&uVar12);
		return 0;
	}
	DESTROY_OBJECT(&uVar12);
	VSCALE(&Var5, -1.0f);
	Var5.f_4 = 0.0f;
	VNORMALIZE(&Var5);
	Var7.f_4 = 0.0f;
	fVar10 = VDOT(&Var7, &Var5);
	fVar11 = (VDOT(&Var5, &Var0) - fVar10);
	if (fVar11 > fVar4)
	{
		return 0;
	}
	return 1;
}

var Function_255(float fParam0) //Position: 0x1186E / 71790
{
	return (fParam0 * 3,28084f);
}

struct<8> Function_256(int iParam0) //Position: 0x1187C / 71804
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_257(struct<66>[] Param0) //Position: 0x118EA / 71914
{
	struct<5> Var0;
	
	GET_POSITION(&(Param0[166]), &Var0);
	GET_OBJECT_POSITION(&iParam1, &Var2);
	if (StackVal > (StackVal - 10.0f))
	{
		LOG_ERROR("Horseshoe fell through world. It is at least 10 meters below player");
		return 1;
	}
	return 0;
}

bool Function_258(int iParam0) //Position: 0x11966 / 72038
{
	struct<9> Var0;
	
	GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&iParam0), &vVar0);
	return (((vVar0.x * vVar0.x) < 0,001f || (vVar0.z * vVar0.z) < 0,001f) || (vVar0.y * vVar0.y) < 0,001f);
}

void Function_259(struct<66>[] Param0, int iParam1, int iParam2, float fParam3) //Position: 0x119A3 / 72099
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<5> Var11;
	float fVar17;
	
	uVar0 = &Local_99 + 1064[Local_99[iParam166].f_1364] + 8;
	GET_OBJECT_POSITION(&uVar0, &Var1);
	GET_OBJECT_AXIS(&uVar0, &Var3, 2);
	Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal);
	Var5.f_4 = (StackVal + 2,5f);
	GET_OBJECT_AXIS(&uVar0, &Var7, 0);
	if (Param0[iParam166].f_136 != 1 || Param0[iParam166].f_136 != 3)
	{
		Var5 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var7, Var5, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal);
	}
	else
	{
		Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var5, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal);
	}
	Function_260(StackVal, StackVal, *(&Local_99 + 1268[12]), *(&Local_99 + 1268[02]));
	Var9 = Function_260(StackVal, StackVal, *(&Local_99 + 1268[12]), *(&Local_99 + 1268[02]));
	Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var9, StackVal) * Vector(fParam3, fParam3, fParam3), StackVal, StackVal);
	Function_218(&Param0[iParam266] + 164[Param0[iParam266].f_160]);
	Var11 = Function_218(&Param0[iParam266] + 164[Param0[iParam266].f_160]);
	Var13 = *(&Local_99 + 1268[Local_99.f_13082]);
	if (StackVal < (StackVal + 1,1f))
	{
		fVar17 = GET_PHYSINST_FROM_OBJECT(&Param0[iParam266] + 164[Param0[iParam266].f_160]);
		GET_PHYSINST_VELOCITY(&fVar17, &Var15);
		if (StackVal < (StackVal + fLocal_455))
		{
			Var11.f_4 = (StackVal + fLocal_455);
		}
		if (StackVal < fLocal_457)
		{
			fLocal_457 = StackVal;
		}
		if (StackVal >= 0.0f)
		{
			Var11.f_4 = fLocal_457;
		}
		if (Function_291(&iLocal_45) > fLocal_456)
		{
			Var9.f_4 = (StackVal + (((StackVal - (StackVal + 1,1f)) * Function_291(&iLocal_45)) / fLocal_456));
		}
		else
		{
			Var9.f_4 = (StackVal + (StackVal - (StackVal + 1,1f)));
		}
		iLocal_458 = 0;
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_36) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&iLocal_36);
		}
		SET_CAMERA_POSITION(&iLocal_36, Var5);
		SET_CAMERA_TARGET_POSITION(&iLocal_36, Var9, 0);
		SET_CAMERA_FOV(&iLocal_36, 31.0f);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iLocal_36, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&iLocal_36, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
		}
	}
}

struct<8> Function_260(struct<2> Param0, struct<2> Param2) //Position: 0x11BAD / 72621
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param2, Param0, StackVal);
	Var0 = Vector(Var0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param2, Var0, StackVal);
	return StackVal, Var0;
}

void Function_261(var uParam0, struct<2> Param1) //Position: 0x11BDF / 72671
{
	int iVar0;
	
	if (!Function_311())
	{
		return;
	}
	iVar0 = uParam0;
	*(&iVar0 + 4) = Param1;
	*(&iVar0 + 16) = Param2;
	NET_SCRIPTMSG_SEND(3, 25, &iVar0, 8, 0);
	return;
}

bool Function_262(bool bParam0, bool bParam1, bool bParam2, struct<66>[] Param3) //Position: 0x11C11 / 72721
{
	if (!IS_OBJECT_VALID(&Param3[bParam066] + 164[bParam1]))
	{
		NET_LOG(true, "Horseshoes Net Prop Error", "ERROR: Horseshoe %s for player %s is invalid %s", I2STR(bParam1), I2STR(bParam0), &bParam2, 0);
		return 0;
	}
	return 1;
}

struct<8> Function_263(struct<1309> Param0) //Position: 0x11C93 / 72851
{
	struct<2> Var0;
	float fVar2;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	var uVar9;
	float fVar11;
	
	Var0 = Vector(0.0f, -1.0f, 0.0f);
	fVar2 = (10.0f + (Local_99[iParam166].f_144 * ((180.0f - 10.0f) - 10.0f)));
	uVar3 = Vector(fVar2, 0.0f, 0.0f);
	UNK_0xF76F2BB3(&Var0, &uVar3, 0, 4);
	GET_OBJECT_POSITION(&Param0[iParam166] + 164[Param0[iParam166].f_160], &Var5);
	GET_VOLUME_CENTER(&Param0 + 1220[Param0.f_1308], &Var7);
	uVar9 = Vector(StackVal, StackVal, StackVal) - Vector(Var5, Var7, StackVal);
	fVar11 = UNK_0x9C40E671(&uVar9);
	uVar3 = Vector(0.0f, (fVar11 + (-fParam2 * 20.0f)), 0.0f);
	UNK_0xF76F2BB3(&Var0, &uVar3, 0, 4);
	VSCALE(&Var0, (fParam3 * 3,5f));
	return StackVal, Var0;
}

void Function_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x11D43 / 73027
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

float Function_265(struct<66>[] Param0, float fParam1, int iParam2) //Position: 0x11DC8 / 73160
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	fVar0 = 0.0f;
	if (iParam2 == Function_294(&Param0))
	{
		if (fParam1 < -0,2f && fParam1 > 0,2f)
		{
			fParam1 = 0.0f;
		}
	}
	fVar1 = (fParam1 * 2.0f);
	fVar2 = (fVar1 + fVar0);
	fVar3 = 0.0f;
	fVar4 = ((-Param0[iParam266].f_152 * 6.0f) * 0,03333333f);
	fVar5 = (((Param0[iParam266].f_152 + (fVar2 / 10.0f)) + fVar4) + fVar3);
	iVar6 = (Param0[iParam266].f_156 + (fVar5 * bLocal_427));
	if (iVar6 > -0,5f)
	{
		fVar5 = 0.0f;
		iVar6 = -0,5f;
	}
	else if (iVar6 < 0,5f)
	{
		fVar5 = 0.0f;
		iVar6 = 0,5f;
	}
	Param0[iParam266].f_152 = fVar5;
	Param0[iParam266].f_156 = iVar6;
	return iVar6;
}

void Function_266(vector3 vParam0) //Position: 0x11E88 / 73352
{
	if (Function_267(&vParam0))
	{
		if (Function_268(&vParam0))
		{
			vParam0.f_4 = (GET_CURRENT_GAME_TIME() - vParam0.z);
			vParam0.f_8 = 0.0f;
			Function_38(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_267(int iParam0) //Position: 0x11F55 / 73557
{
	return Function_14(iParam0, 1);
}

bool Function_268(int iParam0) //Position: 0x11F63 / 73571
{
	return Function_14(iParam0, 2);
}

void Function_269(struct<66> Param0) //Position: 0x11F71 / 73585
{
	if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
	{
		Function_187();
		iLocal_68 = 7;
		Function_251(&Param0);
	}
	else if (UNK_0x062C5047("@HORSESHOES.AIM", 1, 0))
	{
		iLocal_68 = 6;
		Function_271();
		Function_270(StackVal, StackVal, -Param0[&Local_99[&Param066]66].f_148);
	}
	else
	{
		Function_271();
		if (Function_298(&Param0))
		{
			iLocal_68 = 5;
		}
		else
		{
			iLocal_68 = 3;
		}
		Function_281(&Param0, Function_294(&Param0), -Param0[Function_294(&Param0)66].f_148, 1);
	}
	return;
}

void Function_270(struct<1309> Param0) //Position: 0x1202E / 73774
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	
	iLocal_458 = 0;
	GET_POSITION(&vParam1, &Var0);
	GET_ACTOR_AXIS(&vParam1, &Var2, 2);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(0,4f, 0,4f, 0,4f), StackVal, StackVal);
	Var4.f_4 = (StackVal + 1,55f);
	GET_ACTOR_AXIS(&vParam1, &Var6, 0);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var4, StackVal) * Vector(0,26f, 0,26f, 0,26f), StackVal, StackVal);
	Var8 = (&Param0 + 1268[Param0.f_13082]);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var8, StackVal) * Vector(fParam2, fParam2, fParam2), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_36) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&iLocal_36);
	}
	SET_CAMERA_POSITION(&iLocal_36, Var4);
	SET_CAMERA_TARGET_POSITION(&iLocal_36, Var8, 0);
	SET_CAMERA_FOV(&iLocal_36, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iLocal_36, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iLocal_36, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uLocal_460, 0,1f);
	return;
}

void Function_271() //Position: 0x12110 / 74000
{
	fLocal_18 = 0.0f;
	fLocal_19 = 0.0f;
	fLocal_20 = 0.0f;
	fLocal_21 = 0.0f;
	return;
}

void Function_272(vector3 vParam0) //Position: 0x12122 / 74018
{
	if (Function_267(&vParam0))
	{
		if (!Function_268(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_76(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_273() //Position: 0x121E6 / 74214
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 != GET_LOCAL_SLOT())
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	return 4294967295;
}

float Function_274(bool bParam0, int iParam1, struct<66>[] Param2) //Position: 0x12213 / 74259
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	GET_VOLUME_CENTER(&Param2[bParam066] + 188[iParam1], &vVar2);
	Function_276(StackVal, vVar2.x, vVar2.z, (*&Local_99 + 1268)[Local_99.f_13082], vVar2.x, vVar2.z, 0,075f, &iVar0, &iVar1);
	iVar4 = Function_275(StackVal, iVar0, iVar1, (*&Local_99 + 1268)[Local_99.f_13082]);
	iVar5 = Vector(iVar0, vVar2.y, iVar1);
	return iVar4;
}

float Function_275(float fParam0, float fParam1, float fParam2, float fParam3) //Position: 0x1228F / 74383
{
	float fVar0;
	
	fVar0 = SQRT((((fParam2 - fParam0) * (fParam2 - fParam0)) + ((fParam3 - fParam1) * (fParam3 - fParam1))));
	return fVar0;
}

void Function_276(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8) //Position: 0x122B5 / 74421
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = (fParam2 - fParam0);
	fVar1 = (fParam3 - fParam1);
	uVar2 = Vector(fParam2, 92,45f, fParam3);
	uVar2 = Vector(fParam0, 92,45f, fParam1);
	fVar9 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	fVar10 = (2.0f * ((fVar0 * (fParam0 - fParam4)) + (fVar1 * (fParam1 - fParam5))));
	fVar11 = ((((fParam0 - fParam4) * (fParam0 - fParam4)) + ((fParam1 - fParam5) * (fParam1 - fParam5))) - (fParam6 * fParam6));
	fVar12 = ((fVar10 * fVar10) - ((4.0f * fVar9) * fVar11));
	if (fVar9 >= 1E-07f || fVar12 > 0.0f)
	{
		fParam7 = fParam2;
		fParam8 = fParam3;
	}
	else if (fVar12 != 0.0f)
	{
		fVar4 = (-fVar10 / (2.0f * fVar9));
		fParam7 = (fParam0 + (fVar4 * fVar0));
		fParam8 = (fParam1 + (fVar4 * fVar1));
	}
	else
	{
		fVar4 = ((-fVar10 + SQRT(fVar12)) / (2.0f * fVar9));
		fVar5 = (fParam0 + (fVar4 * fVar0));
		fVar6 = (fParam1 + (fVar4 * fVar1));
		fVar4 = ((-fVar10 - SQRT(fVar12)) / (2.0f * fVar9));
		fVar7 = (fParam0 + (fVar4 * fVar0));
		fVar8 = (fParam1 + (fVar4 * fVar1));
		uVar2 = Vector(fVar5, 92,45f, fVar6);
		uVar2 = Vector(fVar7, 92,45f, fVar8);
		if (Function_275(fVar5, fVar6, fParam2, fParam3) > Function_275(fVar7, fVar8, fParam2, fParam3))
		{
			fParam7 = fVar5;
			fParam8 = fVar6;
		}
		else
		{
			fParam7 = fVar7;
			fParam8 = fVar8;
		}
	}
}

bool Function_277(struct<1309> Param0) //Position: 0x12417 / 74775
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	Function_218(&Param0[iParam166] + 164[iParam2]);
	Var0 = Function_218(&Param0[iParam166] + 164[iParam2]);
	if (Param0.f_1308 == 1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	bVar3 = VDIST(*(&Param0 + 1268[iVar22]), Var0);
	if (bVar3 > (bLocal_429 - 2.0f))
	{
		return 1;
	}
	return 0;
}

bool Function_278() //Position: 0x1246A / 74858
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(0, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
	return 0;
}

bool Function_279(struct<1309> Param0) //Position: 0x12487 / 74887
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	Function_218(&Param0[iParam166] + 164[iParam2]);
	Var0 = Function_218(&Param0[iParam166] + 164[iParam2]);
	if (Param0.f_1308 == 1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	bVar3 = VDIST(*(&Param0 + 1268[iVar22]), Var0);
	if (bVar3 < (bLocal_429 + 2.0f))
	{
		return 1;
	}
	return 0;
}

void Function_280(struct<66>[] Param0) //Position: 0x124DA / 74970
{
	bool bVar0;
	
	if (UNK_0x062C5047("@HORSESHOES.ZOOM_AT_STAKE", 1, 0))
	{
		Function_187();
		iLocal_68 = 7;
		Function_251(&Param0);
	}
	else
	{
		Function_271();
		if (Function_298(&Param0))
		{
			if ((Param0[166].f_160 != 0 && !IS_ACTION_NODE_PLAYING(&(Local_99[166]), "horseshoe/sweep")) && !IS_ACTION_NODE_PLAYING(&(Local_99[166]), "horseshoe/sweep_idle"))
			{
				iLocal_68 = 4;
			}
			else
			{
				iLocal_68 = 5;
			}
		}
		else
		{
			iLocal_68 = 3;
		}
		if ((iParam1 == 12 && iParam1 == 16) && iParam1 == 17)
		{
			bVar0 = false;
			if (iLocal_459)
			{
				bVar0 = true;
			}
			iLocal_459 = 0;
			Function_281(&Param0, Function_294(&Param0), -Param0[Function_294(&Param0)66].f_148, bVar0);
		}
	}
	return;
}

void Function_281(struct<66>[] Param0, int iParam1, float fParam2, bool bParam3) //Position: 0x125BA / 75194
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	struct<2> Var13;
	
	uVar0 = &Local_99 + 1064[Local_99[iParam166].f_1364] + 8;
	GET_OBJECT_POSITION(&uVar0, &Var1);
	GET_OBJECT_AXIS(&uVar0, &Var3, 2);
	Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal);
	Var5.f_4 = (StackVal + 2,5f);
	GET_OBJECT_AXIS(&uVar0, &Var7, 0);
	if (Param0[iParam166].f_136 != 1 || Param0[iParam166].f_136 != 3)
	{
		Var5 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var7, Var5, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal);
	}
	else
	{
		Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var5, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal);
	}
	Function_260(StackVal, StackVal, *(&Local_99 + 1268[12]), *(&Param0 + 1268[02]));
	Var9 = Function_260(StackVal, StackVal, *(&Local_99 + 1268[12]), *(&Param0 + 1268[02]));
	Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var9, StackVal) * Vector(fParam2, fParam2, fParam2), StackVal, StackVal);
	GET_CAMERA_POSITION(&iLocal_36, &Var11);
	GET_CAMERA_DIRECTION(&iLocal_36, &Var13);
	if (iLocal_458 && (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_36) || CAMERA_GET_CURRENT_TRANSITION_TYPE(&iLocal_36) != 1))
	{
		iLocal_458 = 0;
	}
	if (!iLocal_458)
	{
		if (!IS_OBJECT_VALID(&uLocal_460))
		{
			uLocal_460 = CREATE_CAMERASHOT_IN_LAYOUT(&bLocal_38, "CameraShotA");
		}
		if (!IS_OBJECT_VALID(&iLocal_462))
		{
			iLocal_462 = CREATE_CAMERASHOT_IN_LAYOUT(&bLocal_38, "CameraShotB");
		}
		Function_282(&uLocal_460);
		Function_282(&iLocal_462);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_36) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&iLocal_36);
		}
		SET_CAMERASHOT_POSITION(&uLocal_460, Var11);
		SET_CAMERASHOT_DIRECTION(&uLocal_460, Var13, 0);
		SET_CAMERASHOT_FOV(&uLocal_460, 31.0f);
		SET_CAMERASHOT_POSITION(&iLocal_462, Var5);
		SET_CAMERASHOT_TARGET_POSITION(&iLocal_462, Var9, 0);
		SET_CAMERASHOT_FOV(&iLocal_462, 31.0f);
		if (bParam3)
		{
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(&iLocal_36, &iLocal_462, 4294967295);
			iLocal_458 = 0;
		}
		else
		{
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(&iLocal_36, &uLocal_460, &iLocal_462, 0,75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(&iLocal_36, &iLocal_462, 4294967295);
			iLocal_458 = 1;
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iLocal_36, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iLocal_36, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
}

void Function_282(int iParam0) //Position: 0x127BA / 75706
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	return;
}

void Function_283(bool bParam0) //Position: 0x127CD / 75725
{
	PRINTFLOAT(bParam0);
	PRINTNL();
	fLocal_22 = (0,6f + (0,04f * bParam0));
	fLocal_23 = (0,78f - (0,04f * bParam0));
	fLocal_25 = (0,25f - (0,2f * bParam0));
	fLocal_24 = (0,15f - (0,15f * bParam0));
	fLocal_27 = (1.0f - (0,7f * bParam0));
	fLocal_26 = (0,4f - (0,4f * bParam0));
	fLocal_28 = (0.0f + (7.0f * bParam0));
	fLocal_29 = 1.0f;
	fLocal_30 = (0.0f + (0,08f * bParam0));
	fLocal_31 = (0,2f - (0,08f * bParam0));
	fLocal_32 = -1.0f;
	fLocal_33 = -1.0f;
	return;
}

int Function_284(bool bParam0, bool bParam1) //Position: 0x12864 / 75876
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_117(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	return 1;
}

int Function_285() //Position: 0x128F5 / 76021
{
	return Function_66(0);
}

void Function_286(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x128FF / 76031
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

float Function_287() //Position: 0x12994 / 76180
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

void Function_288(int iParam0) //Position: 0x129A3 / 76195
{
	Function_289(&iParam0, 0.0f);
	return;
}

void Function_289(vector3 vParam0) //Position: 0x129B0 / 76208
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_290(int iParam0) //Position: 0x129D5 / 76245
{
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam0 > Local_69.f_88)
	{
		iParam0 = Local_69.f_88;
	}
	if (iParam0 > Function_285())
	{
		iParam0 = Function_285();
	}
	return iParam0;
}

float Function_291(vector3 vParam0) //Position: 0x12A02 / 76290
{
	if (Function_267(&vParam0))
	{
		if (Function_268(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_292() //Position: 0x12ACF / 76495
{
	fLocal_22 = 0,65f;
	fLocal_23 = 0,65f;
	fLocal_24 = 0.0f;
	fLocal_25 = 0.0f;
	fLocal_29 = 1.0f;
	fLocal_30 = 0,15f;
	fLocal_31 = 0,15f;
	fLocal_32 = -1.0f;
	fLocal_33 = -1.0f;
	return;
}

void Function_293() //Position: 0x12B00 / 76544
{
	fLocal_22 = 0,65f;
	fLocal_23 = 0,65f;
	fLocal_24 = 0.0f;
	fLocal_25 = 0.0f;
	fLocal_29 = 1.0f;
	fLocal_30 = 0.0f;
	fLocal_31 = 0.0f;
	fLocal_32 = -1.0f;
	fLocal_33 = -1.0f;
	return;
}

int Function_294(struct<1209> Param0) //Position: 0x12B29 / 76585
{
	return StackVal;
}

void Function_295(int iParam0, bool bParam1) //Position: 0x12B3F / 76607
{
	if (bParam1)
	{
		Function_76(&bLocal_66, iParam0);
	}
	else
	{
		Function_38(&bLocal_66, iParam0);
	}
	return;
}

void Function_296(int iParam0, int iParam1) //Position: 0x12B5B / 76635
{
	if (Function_311() && iParam1)
	{
		iLocal_490 = iParam0;
		iLocal_491 = 31;
	}
	else
	{
		iLocal_491 = iParam0;
	}
	return;
}

bool Function_297(int iParam0) //Position: 0x12B7D / 76669
{
	return Function_14(bLocal_66, iParam0);
}

bool Function_298(struct<1201> Param0) //Position: 0x12B8A / 76682
{
	return Param0.f_1200 != Function_294(&Param0);
}

void Function_299() //Position: 0x12B9D / 76701
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_300())
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[066]), "horseshoe/idle");
				SET_ACTION_NODE_FOR_ACTOR(&(Local_99[166]), "horseshoe/idle");
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_288(&iLocal_45);
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Local_99.f_1216 = 0;
				iLocal_0 = 1;
				Function_296(0, 0);
			}
			break;
	}
	return;
}

bool Function_300() //Position: 0x12C26 / 76838
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	switch (iLocal_492)
	{
		case 0x000003E8:
			iLocal_492 = 1005;
			if (IS_VOLUME_VALID(&Local_69 + 72))
			{
				if (IS_OBJECTSET_VALID(&uLocal_58))
				{
					Function_307(&uLocal_58);
				}
				else
				{
					uLocal_58 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), &bLocal_38, 15, 1);
				}
				iLocal_60 = LOCATE_ACTORS_IN_VOLUME(&Local_69 + 72, &uLocal_58, 0, 1);
				bVar1 = false;
				while (bVar1 <= iLocal_60)
				{
					iVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_58));
					if (!IS_ACTOR_PLAYER(&iVar0) && &iVar0 == &Local_69 + 4[0])
					{
						if ((IS_ACTOR_HOGTIED(&iVar0) || IS_ACTOR_CRIPPLED(&iVar0, 5)) || IS_ACTOR_VEHICLE(&iVar0))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_492 = 1004;
						}
					}
					bVar1++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(&Local_69 + 72))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(&Local_69 + 72);
					if (IS_OBJECTSET_VALID(&uLocal_58))
					{
						Function_307(&uLocal_58);
					}
					else
					{
						uLocal_58 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), &bLocal_38, 15, 1);
					}
					iLocal_60 = LOCATE_ACTORS_IN_VOLUME(&Local_69 + 72, &uLocal_58, 0, 1);
					bVar2 = false;
					while (bVar2 <= iLocal_60)
					{
						iVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uLocal_58));
						if (!IS_ACTOR_PLAYER(&iVar0) && &iVar0 == &Local_69 + 4[0])
						{
							if ((IS_ACTOR_HOGTIED(&iVar0) || IS_ACTOR_CRIPPLED(&iVar0, 5)) || IS_ACTOR_VEHICLE(&iVar0))
							{
								DESTROY_ACTOR(&iVar0);
							}
						}
						bVar2++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_492 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (IS_ACTOR_VALID(&Local_69 + 4[0]))
			{
				bLocal_16 = GET_ACTOR_UPDATE_PRIORITY(&Local_69 + 4[0]);
				SET_ACTOR_UPDATE_PRIORITY(&Local_69 + 4[0], false);
				Function_302(&Local_69 + 4[0], &Local_99, Local_69.f_96, GET_ACTOR_ENUM_STRING(&Local_69 + 4[0]));
			}
			if (IS_ACTOR_VALID(&Local_69 + 4[1]))
			{
				Function_302(&Local_69 + 4[1], &Local_99, Local_69.f_92, GET_ACTOR_ENUM_STRING(&Local_69 + 4[1]));
			}
			Function_301(Function_191());
			UI_PUSH("Minigame");
			HUD_ENABLE(0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			Function_281(&Local_99, 1, 0.0f, 1);
			GRINGO_ALLOW_ACTIVATION(&Local_69 + 104, false);
			GRINGO_ALLOW_ACTIVATION(&Local_69 + 112, false);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_69 + 4[0]);
			Function_288(&iLocal_45);
			iLocal_492 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_191(), "horseshoe/Idle"))
			{
				return 1;
			}
			if (Function_291(&iLocal_45) < 12.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_17 = 2;
			}
			break;
	}
	return 0;
}

void Function_301(int iParam0) //Position: 0x12E97 / 77463
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&iParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_302(int iParam0, struct<1209> Param1) //Position: 0x12EBD / 77501
{
	int iVar0;
	int iVar1;
	
	if (!bParam2 != 4294967295 && !(*&Param1 + 1064)[bParam24])
	{
		iVar0 = 0;
		while (iVar0 < Param1.f_1204)
		{
			if (&Param1[iVar066] == "")
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
		Function_303(&(Param1[iVar166]), &iParam0, bParam2, &iParam3);
		(*&Param1 + 1064)[bParam24] = 1;
		(&Param1 + 1064[bParam24])->f_4 = iVar1;
		Param1.f_1204++;
		if (&iParam0 == GET_PLAYER_ACTOR(0))
		{
			if (Global_47151[2])
			{
				PRINTSTRING("--- ADDED A LOCAL HUMAN TO SEAT #");
				PRINTINT(bParam2);
				PRINTNL();
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param1 + 1064[bParam24] + 8), true);
			SNAP_ACTOR_TO_GRINGO(&iParam0, &Param1 + 1064[bParam24] + 8, "UseCase1", false, 0, 0);
			TASK_PRIORITY_SET(&iParam0, true);
			Param1.f_1208 = bParam2;
		}
		else if (!IS_ACTOR_PLAYER(&iParam0))
		{
			if (Global_47151[2])
			{
				PRINTSTRING("--- ADDED AN AI TO SEAT #");
				PRINTINT(bParam2);
				PRINTNL();
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param1 + 1064[bParam24] + 8), true);
			TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 1064[bParam24] + 8), "UseCase1", 1, 1);
			TASK_PRIORITY_SET(&iParam0, true);
		}
		else if (Global_47151[2])
		{
			PRINTSTRING("--- ADDED A REMOTE HUMAN TO SEAT #");
			PRINTINT(bParam2);
			PRINTNL();
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(&iParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_303(struct<525> Param0) //Position: 0x1311A / 78106
{
	AI_SET_NAV_SUBGRID_CELL_SIZE(&cParam1, 0,4f);
	Param0.f_140 = 0;
	Param0.f_160 = 0;
	Param0.f_512 = 0;
	Param0.f_524 = 0;
	(*&Param0 + 212)[018] = -1.0f;
	(*&Param0 + 212)[118] = -1.0f;
	Param0 = &cParam1;
	Param0.f_136 = uParam2;
	if (&cParam1 == GET_PLAYER_ACTOR(0))
	{
		if (Function_311())
		{
			strcpy(&Param0 + 8, GET_SLOT_NAME(GET_LOCAL_SLOT()), 64);
		}
		else
		{
			strcpy(&Param0 + 8, "Poker_Name_P", 64);
		}
		Param0.f_148 = RAND_FLOAT_RANGE(-0,5f, 0,5f);
	}
	else
	{
		strcpy(&Param0 + 8, &cParam3, 64);
	}
	ACTOR_HOLSTER_WEAPON(&Param0, 1);
}

void Function_304() //Position: 0x131C5 / 78277
{
	if (Global_43789 == Global_46816[0])
	{
		Function_305(5, Global_46816[0]);
	}
	bLocal_2 = true;
	Function_1();
	return;
}

void Function_305(int iParam0, int iParam1) //Position: 0x131E7 / 78311
{
	if (!Function_146(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_148())
				{
					Function_154(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_154(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_154(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_154(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_154(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_154(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_154(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_147(2) && !Function_132(2))
				{
					Function_154(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_306() //Position: 0x132F2 / 78578
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_307(var uParam0) //Position: 0x132FE / 78590
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
	}
	return;
}

void Function_308() //Position: 0x1333E / 78654
{
	Function_309(4);
	return;
}

void Function_309(int iParam0) //Position: 0x13348 / 78664
{
	var uVar0;
	var uVar1;
	
	return;
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_310(iParam0);
		}
	}
	return;
}

void Function_310(var uParam0) //Position: 0x13373 / 78707
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

bool Function_311() //Position: 0x13382 / 78722
{
	return Local_69.f_80;
}

void Function_312() //Position: 0x1338C / 78732
{
	int iVar0;
	
	SET_GLOBAL_DISABLE_SPU_COLLIDER_UPDATE(1);
	HUD_SET_MINIGAME_TYPE_LAYOUT(6);
	Function_336(1);
	Function_168(1);
	Function_168(4);
	Function_334();
	bLocal_38 = CREATE_LAYOUT("HorseShoes_layout");
	Function_333();
	Function_324();
	Function_323(&iLocal_45);
	Function_323(&iLocal_49);
	Function_323(&iLocal_468);
	Function_323(&iLocal_53);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_69 + 4[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Local_69 + 4[iVar0], 1);
			CLEAR_LAST_HIT(&Local_69 + 4[iVar0]);
			REFERENCE_ACTOR(&Local_69 + 4[iVar0]);
		}
		iVar0++;
	}
	if (IS_VOLUME_VALID(&Local_69 + 72))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_69 + 72);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_69 + 72);
	}
	fLocal_428 = GET_CURRENT_GAME_TIME();
	SET_AUTO_CONVERSATION_LOOK(GET_PLAYER_ACTOR(0), 0);
	if (IS_ACTOR_VALID(&Local_69 + 4[0]))
	{
		SET_AUTO_CONVERSATION_LOOK(&Local_69 + 4[0], 0);
	}
	iLocal_0 = 0;
	iLocal_492 = 1000;
	bLocal_429 = VDIST((&Local_69 + 28[02]), *(&Local_69 + 28[12]));
	if (Function_311())
	{
		Function_317();
		Function_315();
		Function_295(1, 1);
		Function_295(2, 1);
		Function_295(4, 1);
	}
	if (Function_220(4, 5))
	{
		Local_69.f_84 = 0;
		Function_295(16, 1);
	}
	Function_313(&Local_99);
	iLocal_36 = CREATE_CAMERA_IN_LAYOUT(&bLocal_38, "HorseshoesCamera", 2);
	ALLOW_TUMBLEWEEDS(0);
	CLEAR_TUMBLEWEEDS();
	return;
}

void Function_313(struct<1205> Param0) //Position: 0x134EA / 79082
{
	struct<2> Var0;
	
	Param0.f_1204 = 0;
	Function_314(&Param0 + 1064, &Local_69 + 28);
	Var0 = *(&Local_69 + 28[02]);
	Var0.f_4 = (StackVal + 0,235f);
	*(&Param0 + 1220[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bLocal_38, Function_53(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(0,012f, 0,22f, 0,012f));
	Var0 = *(&Local_69 + 28[12]);
	Var0.f_4 = (StackVal + 0,235f);
	*(&Param0 + 1220[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bLocal_38, Function_53(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(0,012f, 0,22f, 0,012f));
	*(&Param0 + 1268[02]) = *(&Local_69 + 28[02]);
	*(&Param0 + 1268[12]) = *(&Local_69 + 28[12]);
	return;
}

void Function_314(struct<4>[] Param0) //Position: 0x135B6 / 79286
{
	var uVar0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	
	uVar0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1[02], Param1[12], StackVal);
	FIND_GROUND_INTERSECTION(&(Param1[02]), 10.0f, &Var2, &uVar6);
	VNORMALIZE(&uVar0);
	VNORMALIZE(&uVar6);
	VCROSS(&uVar6, &uVar0, &Var8);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 0,5f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[02], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1[12], StackVal);
	Var4 = Vector(0.0f, UNK_0x9C40E671(&Var4), 0.0f);
	*(&Param0[04] + 8) = CREATE_GRINGO_IN_LAYOUT(&bLocal_38, Function_53(), "/content/scripting/gringo/SimpleGringo/horseshoe", Var2, Var4);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 1,508075f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[02], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	*(&Param0[04] + 16) = Var2;
	VCROSS(&uVar0, &uVar6, &Var8);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 0,5f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[02], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1[12], StackVal);
	Var4 = Vector(0.0f, UNK_0x9C40E671(&Var4), 0.0f);
	*(&Param0[14] + 8) = CREATE_GRINGO_IN_LAYOUT(&bLocal_38, Function_53(), "/content/scripting/gringo/SimpleGringo/horseshoe", Var2, Var4);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 1,508075f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[02], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	*(&Param0[14] + 16) = Var2;
	uVar0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1[12], Param1[02], StackVal);
	FIND_GROUND_INTERSECTION(&(Param1[12]), 10.0f, &Var2, &uVar6);
	VNORMALIZE(&uVar0);
	VNORMALIZE(&uVar6);
	VCROSS(&uVar6, &uVar0, &Var8);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 0,5f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[12], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1[02], StackVal);
	Var4 = Vector(0.0f, UNK_0x9C40E671(&Var4), 0.0f);
	*(&Param0[24] + 8) = CREATE_GRINGO_IN_LAYOUT(&bLocal_38, Function_53(), "/content/scripting/gringo/SimpleGringo/horseshoe", Var2, Var4);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 1,508075f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[12], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	*(&Param0[24] + 16) = Var2;
	VCROSS(&uVar0, &uVar6, &Var8);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 0,5f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[12], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1[02], StackVal);
	Var4 = Vector(0.0f, UNK_0x9C40E671(&Var4), 0.0f);
	*(&Param0[34] + 8) = CREATE_GRINGO_IN_LAYOUT(&bLocal_38, Function_53(), "/content/scripting/gringo/SimpleGringo/horseshoe", Var2, Var4);
	VNORMALIZE(&Var8);
	VSCALE(&Var8, 1,508075f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Param1[12], StackVal);
	FIND_GROUND_INTERSECTION(&Var2, 50.0f, &Var2, &uVar6);
	*(&Param0[34] + 16) = Var2;
	return;
}

void Function_315() //Position: 0x13986 / 80262
{
	Function_316(1024, 1, 0);
	Function_316(1, 0, 0);
	return;
}

void Function_316(int iParam0, bool bParam1, bool bParam2) //Position: 0x1399A / 80282
{
	bParam2 = &bParam2;
	if (bParam1)
	{
		Function_76(&Global_120031 + 260, iParam0);
	}
	else
	{
		Function_38(&Global_120031 + 260, iParam0);
	}
	return;
}

void Function_317() //Position: 0x139C6 / 80326
{
	Function_320(1);
	NET_SCRIPTMSG_REGISTER_HANDLER(25, 80523);
	NET_SCRIPTMSG_REGISTER_HANDLER(26, 80356);
	return;
}

void Function_318(var uParam0) //Position: 0x139E4 / 80356
{
	int iVar0;
	bool bVar6;
	
	iVar0 = 2;
	*(&iVar0 + 24) = 2;
	NET_SCRIPTMSG_GETNEXT(uParam0, &iVar0, 12);
	Local_443 = { StackVal, StackVal, StackVal, StackVal, StackVal, iVar0 };
	Function_295(1024, 1);
	if (Global_47151[38])
	{
		bVar6 = false;
		while (bVar6 <= 2)
		{
			PRINTSTRING("ShoeId #");
			PRINTINT(bVar6);
			PRINTSTRING(": ");
			PRINTFLOAT((*&iVar0 + 24)[bVar6]);
			PRINTSTRING(": ");
			if (iVar0[bVar6])
			{
				PRINTSTRING("IS ringer!");
			}
			else
			{
				PRINTSTRING("NOT ringer.");
			}
			PRINTNL();
			bVar6++;
		}
	}
	return;
}

void Function_319(var uParam0) //Position: 0x13A8B / 80523
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &iVar0, 8);
	uLocal_433 = *(&iVar0 + 4);
	iLocal_430 = *(&iVar0 + 16);
	iLocal_442 = iVar0;
	return;
}

void Function_320(bool bParam0) //Position: 0x13AB4 / 80564
{
	struct<17> Var0;
	
	Function_247(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar3, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar3));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (&bParam0)
	{
		Function_76(&Var0, 4);
	}
	Function_246(&Var0);
	Function_322();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 80647);
	return;
}

void Function_321(var uParam0) //Position: 0x13B07 / 80647
{
	struct<5> Var0;
	bool bVar5;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 2);
	Function_247(&Var1);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_232(&iVar4);
	if (Function_245(&Var1))
	{
	}
	bVar5 = Function_230(&iVar4);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar5), 0, 0);
	if (bVar5 < 4294967286 && bVar5 == Var0)
	{
	}
	Function_244(&Var1, 1);
	Function_246(&Var1);
	return;
}

void Function_322() //Position: 0x13C0A / 80906
{
	Function_241();
	return;
}

void Function_323(var uParam0) //Position: 0x13C13 / 80915
{
	if (!Function_267(&uParam0))
	{
		Function_289(&uParam0, 0.0f);
	}
	return;
}

void Function_324() //Position: 0x13C2A / 80938
{
	Function_331(&uLocal_472, "$/fragments/p_gen_horseshoe03x", 0, 1);
	Function_331(&uLocal_472, "$/fragments/p_gen_horseshoe04x", 0, 1);
	Function_331(&uLocal_472, "nhorseshoe", 1, 0);
	Function_331(&uLocal_472, "nminigames", 10, 0);
	REQUEST_ANIM_SET("horseshoe_gped", 0);
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\HORSESHOES");
	STREAMING_LOAD_BOUNDS(*(&Local_69 + 28[02]), 5.0f, 1);
	STREAMING_LOAD_BOUNDS(*(&Local_69 + 28[12]), 5.0f, 1);
	while (((!Function_325(&uLocal_472) || !HAS_ANIM_SET_LOADED("horseshoe_gped")) || !REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\HORSESHOES")) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	return;
}

bool Function_325(struct<2>[] Param0) //Position: 0x13D57 / 81239
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_330();
	iVar1 = 0;
	if (!Function_182(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_329(&(Param0[iVar02]), 8);
		}
		else if (Function_328())
		{
			iVar1 = 1;
			Function_329(&(Param0[iVar02]), 8);
		}
		Function_329(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_182(&(Param0[iVar02]), 4))
		{
			if (!Function_182(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_182(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_182(&(Param0[02]), 8) || iVar1));
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
				Function_329(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_182(&(Param0[iVar02]), 4))
		{
			if (!Function_182(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_329(&(Param0[iVar02]), 2);
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
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_329(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_329(&(Param0[iVar02]), 2);
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
	Function_326();
	return 1;
}

void Function_326() //Position: 0x1411B / 82203
{
	if (!Function_327(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_327(int iParam0) //Position: 0x1415B / 82267
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_328() //Position: 0x14177 / 82295
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

void Function_329(struct<13> Param0) //Position: 0x141A5 / 82341
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_330() //Position: 0x141B8 / 82360
{
	if (!Function_327(128))
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

var Function_331(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x141FA / 82426
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_332(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_329(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_332(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x14238 / 82488
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_182(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_329(&(Param0[iVar02]), 4);
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

void Function_333() //Position: 0x14307 / 82695
{
	return;
}

void Function_334() //Position: 0x1430D / 82701
{
	Global_42259 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_184();
	Function_335();
	if (!Global_6627)
	{
		Global_6627 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_335() //Position: 0x1433D / 82749
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_336(int iParam0) //Position: 0x14353 / 82771
{
	Function_337(&Global_43580, iParam0);
	return;
}

void Function_337(var uParam0, var uParam1) //Position: 0x14361 / 82785
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

