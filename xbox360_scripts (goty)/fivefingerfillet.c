//Decompiled with MagicRDR v1.0
//Function Count : 320
//Statics Count : 544
//Natives Count : 416
//Parameters Count : 46

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	bool bLocal_21 = false;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33[6] = { false, false, false, false, false, false };
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0.0f;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	struct<46> Local_61 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	float fLocal_109 = 0.0f;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<50> Local_113 = { 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0 } ;
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
	var uLocal_192 = 2;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 2;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 2;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 2;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 2;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 2;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 2;
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
	var uLocal_230 = 34;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 4;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 4;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 4;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 4;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 4;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 4;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 4;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 4;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 4;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 4;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 4;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 4;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 4;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 4;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 4;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 4;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 4;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 4;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 4;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 4;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 4;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 4;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 4;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 4;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 4;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 4;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 4;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 4;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 4;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 4;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 4;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 4;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 4;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 4;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 11;
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
	bool bLocal_482 = true;
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
	struct<46> ScriptParam_0 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	iLocal_9 = 1000;
	bLocal_21 = true;
	iLocal_28 = 0;
	iLocal_30 = 2;
	iLocal_43 = 4294967295;
	fLocal_50 = 0.2f;
	iLocal_51 = 2;
	bLocal_52 = false;
	iLocal_53 = 0;
	iLocal_54 = 0;
	iLocal_55 = 0;
	bLocal_107 = 99;
	Local_61 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_301();
	while (Function_216())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_61 };
		Function_193();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x6B / 107
{
	int iVar0;
	
	if (IS_OBJECT_VALID(bLocal_31))
	{
		DESTROY_OBJECT(bLocal_31);
	}
	AI_STOP_IGNORING_ACTORS();
	Function_191(Function_192());
	iVar0 = 0;
	while (iVar0 <= Local_61.f_28)
	{
		if (IS_ACTOR_VALID((*&Local_61 + 4)[iVar0]))
		{
			SET_DRAW_ACTOR((*&Local_61 + 4)[iVar0], 1);
			TASK_CLEAR((*&Local_61 + 4)[iVar0]);
			DEREFERENCE_ACTOR((*&Local_61 + 4)[iVar0]);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_61 + 4)[iVar0]);
		}
		iVar0++;
	}
	ALLOW_TUMBLEWEEDS(1);
	SET_ANIMATION_OVERRIDE_SCALE(GET_PLAYER_ACTOR(0), 1.0f);
	Function_188();
	UI_EXIT("Hands");
	UI_EXIT("Scorebox");
	UI_EXIT("Scorebox_Bet");
	UI_EXIT("Scorebox_Cash");
	UI_EXIT("Scorebox_Player1");
	UI_EXIT("Scorebox_Player2");
	Function_187();
	CLEAR_PLAYER_BLOOD();
	SET_PLAYER_BLOOD_FADE_RATE(30.0f);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(GET_PLAYER_ACTOR(0), 1);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	if (IS_OBJECT_VALID(bLocal_32))
	{
		UNK_0x7246F438(bLocal_32);
		DESTROY_OBJECT(bLocal_32);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CANCEL_TIME_WARP(0);
	HUD_ENABLE(1);
	HUD_TIMER_DISPLAY(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_185(1);
	Function_184(1);
	Function_184(2);
	Function_179();
	Function_178();
	RELEASE_LAYOUT_REF(bLocal_29);
	if (iLocal_2)
	{
		Function_30(Local_61, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_26(Local_61);
	}
	else
	{
		Function_6(Local_61);
	}
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_2();
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_25);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_25);
	AUDIO_MG_FILLET_END();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x1EC / 492
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_192(), true);
	Function_5(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_192()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_4();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(1);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_3();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_3() //Position: 0x26E / 622
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_4() //Position: 0x283 / 643
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_5(int iParam0) //Position: 0x297 / 663
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_6(int iParam0) //Position: 0x2AA / 682
{
	Function_14(iParam0);
	Function_13();
	Function_10(2);
	Function_8((15 - Function_9(105)));
	Function_7(12);
	return;
}

void Function_7(bool bParam0) //Position: 0x2CB / 715
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_8(int iParam0) //Position: 0x2E6 / 742
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_9(105)), 0);
	return;
}

int Function_9(int iParam0) //Position: 0x307 / 775
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_10(bool bParam0) //Position: 0x31D / 797
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_12(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_12(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_12(Global_12976.f_24);
	PRINTNL();
	Function_11(bParam0);
	return;
}

void Function_11(int iParam0) //Position: 0x3B9 / 953
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_9(90)), 0);
	return;
}

void Function_12(bool bParam0) //Position: 0x3DA / 986
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

void Function_13() //Position: 0x420 / 1056
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_14(bool bParam0) //Position: 0x439 / 1081
{
	int iVar0;
	
	if (!Function_24(bParam0))
	{
		Function_22();
		return;
	}
	iVar0 = Function_21(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_15("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_15(char* cParam0, bool bParam1) //Position: 0x48C / 1164
{
	struct<4> Var0;
	
	if (!Function_24(bParam1))
	{
		return;
	}
	switch (Function_21(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_16(Function_19(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_21(bParam1), Function_19(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_21(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_21(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_21(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_21(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_21(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_16(int iParam0) //Position: 0x5B0 / 1456
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0x5EA / 1514
{
	if (Function_18(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_18(bool bParam0, int iParam1) //Position: 0x605 / 1541
{
	return (bParam0 && iParam1) == 0;
}

int Function_19(bool bParam0) //Position: 0x612 / 1554
{
	if (!Function_20(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_20(int iParam0) //Position: 0x632 / 1586
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_21(bool bParam0) //Position: 0x649 / 1609
{
	if (!Function_20(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_22() //Position: 0x664 / 1636
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
			Function_23(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_23(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8AB / 2219
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_24(int iParam0) //Position: 0x8D4 / 2260
{
	if (!Function_20(iParam0))
	{
		return 0;
	}
	if (!Function_25(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_25(int iParam0) //Position: 0x8F8 / 2296
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_26(int iParam0) //Position: 0x90D / 2317
{
	Function_27(iParam0);
	Function_10(2);
	Function_7(12);
	Function_8((15 - Function_9(105)));
	return;
}

void Function_27(bool bParam0) //Position: 0x92B / 2347
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_24(bParam0))
	{
		return;
	}
	iVar0 = Function_21(bParam0);
	if (StackVal == 2)
	{
		Function_15("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_28(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_28(int iParam0) //Position: 0x9D1 / 2513
{
	char* cVar0[16];
	
	if (!Function_17())
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

struct<24> Function_29(char* cParam0) //Position: 0xA10 / 2576
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

void Function_30(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC66 / 3174
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_7(12);
	Function_10(2);
	Function_8((15 - Function_9(105)));
	if (Function_21(bParam0) == 1)
	{
		iVar2 = Function_19(bParam0);
		Function_173(&(Global_3422[iVar240]));
		Function_172(4194304);
		if (bParam3)
		{
			Function_124(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_118(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_124(iVar2, &uVar0, 0);
		}
		bVar1 = Function_117();
		if (bParam1)
		{
			Function_101(iVar2, bParam0, bVar1);
			Function_100();
		}
	}
	Function_43(bParam0, bParam1, uParam2, bVar1);
	if (Function_21(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_35(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_21(bParam0) == 1)
		{
			iVar2 = Function_19(bParam0);
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
	Function_31();
}

void Function_31() //Position: 0xD53 / 3411
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_32(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_32(int iParam0, bool bParam1) //Position: 0xD83 / 3459
{
	int iVar0;
	
	iVar0 = Function_33(iParam0);
	if (!Function_20(iVar0))
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

int Function_33(int iParam0) //Position: 0xDC0 / 3520
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_34(int iParam0) //Position: 0xDDA / 3546
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_35(int iParam0, bool bParam1) //Position: 0xDF0 / 3568
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
							Function_36(Global_34573, 0x1000000, 3, 0);
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
							Function_36(Global_34573, 0x1000000, 3, 0);
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
							Function_36(Global_34573, 0x1000000, 3, 0);
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
							Function_36(Global_34573, 0x1000000, 3, 0);
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
							Function_36(Global_34573, 0x1000000, 3, 0);
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
							Function_36(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_35(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_35(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_35(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_35(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_35(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_35(57, 0);
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

void Function_36(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10E7 / 4327
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_38(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_37(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_37(char* cParam0, int iParam1) //Position: 0x1153 / 4435
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

bool Function_38(bool bParam0, var uParam1, int iParam2) //Position: 0x118A / 4490
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
				if (!Function_39(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_39(var uParam0, int iParam1) //Position: 0x1202 / 4610
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_40(char* cParam0) //Position: 0x1215 / 4629
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

int Function_41(int iParam0) //Position: 0x12B6 / 4790
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

void Function_42(int iParam0, int iParam1) //Position: 0x12F3 / 4851
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1306 / 4870
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_24(bParam0))
	{
		Function_22();
		return;
	}
	bVar0 = Function_21(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_99())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_19(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_28(Global_6269) };
		}
		if (Function_99())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_95();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_99())
	{
		Function_94();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_15("DEED_COMPLETE", bParam0);
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
			Function_88(bParam0);
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
						switch (Function_19(bParam0))
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
			Function_47(1);
			Function_45(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_44(bParam0, &Var14);
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

void Function_44(int iParam0, int iParam1) //Position: 0x155A / 5466
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_45(bool bParam0, int iParam1) //Position: 0x1594 / 5524
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_46())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_46() //Position: 0x15D6 / 5590
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_47(bool bParam0) //Position: 0x15DF / 5599
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_77();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_42(&Global_63095, 1);
		Function_42(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_48() //Position: 0x1630 / 5680
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_55(0);
	Function_55(0);
	if (!Function_46())
	{
		Function_53();
		Function_52();
		Function_51();
		Function_50();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_49();
	return;
}

void Function_49() //Position: 0x1682 / 5762
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

void Function_50() //Position: 0x1788 / 6024
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

void Function_51() //Position: 0x17BB / 6075
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

void Function_52() //Position: 0x1949 / 6473
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

void Function_53() //Position: 0x1AFD / 6909
{
	Function_54(&Global_28260, 1, 0);
	return;
}

void Function_54(int iParam0, bool bParam1, int iParam2) //Position: 0x1B0B / 6923
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
	
	bVar0 = Function_192();
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

struct<8> Function_55(int iParam0) //Position: 0x1CFC / 7420
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
					iVar2 = ((Function_71((50 + iVar4)) + Function_71((183 + iVar4))) + Function_71((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DA2 / 7586
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
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (bParam2)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x203D / 8253
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_68(390))), 32);
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
					bVar19 = (Function_67(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_67(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_65(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_62(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_58(), &Var9);
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

var Function_58() //Position: 0x266A / 9834
{
	int iVar0;
	
	return iVar0;
}

var Function_59(int iParam0) //Position: 0x2672 / 9842
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2683 / 9859
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_61(char* cParam0, bool bParam1) //Position: 0x2778 / 10104
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2791 / 10129
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_64(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_63(int iParam0, int iParam1) //Position: 0x27F6 / 10230
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_64(int iParam0, bool bParam1) //Position: 0x2808 / 10248
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x281A / 10266
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
	if (((Function_66(iParam0) != 19 || Function_66(iParam0) != 17) || Function_66(iParam0) != 10) || Function_66(iParam0) != 9)
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

int Function_66(int iParam0) //Position: 0x294A / 10570
{
	return Global_35278[iParam020].f_48;
}

float Function_67(int iParam0) //Position: 0x2959 / 10585
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_68(int iParam0) //Position: 0x2992 / 10642
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_69(int iParam0) //Position: 0x29CF / 10703
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B69 / 11113
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

int Function_71(bool bParam0) //Position: 0x2DAD / 11693
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_72() //Position: 0x2DEE / 11758
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
		iVar2 = ((Function_71((50 + iVar3) + 15) + Function_71((183 + iVar3) + 15)) + Function_71((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x2E77 / 11895
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
			iVar2 = ((Function_71((50 + iVar3) + 8) + Function_71((183 + iVar3) + 8)) + Function_71((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x2F0E / 12046
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
		iVar2 = ((Function_71((50 + iVar3)) + Function_71((183 + iVar3))) + Function_71((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_75() //Position: 0x2F8D / 12173
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x2FC6 / 12230
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
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77() //Position: 0x31D0 / 12752
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_17())
	{
		Function_85(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_85(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_78(StackVal, StackVal, vVar0))
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

bool Function_78(vector3 vParam0) //Position: 0x328B / 12939
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_79(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x32A3 / 12963
{
	int iVar0;
	
	iVar0 = Function_83(uParam2, uParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_81(&Global_63095, 1);
			Function_42(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_81(&Global_63095, 2);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_81(&Global_63095, 2);
		Function_42(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_80();
	return StackVal, StackVal, Function_80();
}

vector3 Function_80() //Position: 0x338A / 13194
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_81(int iParam0, int iParam1) //Position: 0x3393 / 13203
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_82(int iParam0) //Position: 0x33A2 / 13218
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x33B8 / 13240
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
				fVar2 = Function_84(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(bVar0) && !bParam1)
	{
		bVar0 = Function_83(bParam0, 1);
	}
	return bVar0;
}

float Function_84(vector3 vParam0, vector3 vParam3) //Position: 0x347F / 13439
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_85(var uParam0, int iParam1) //Position: 0x349C / 13468
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_87(Global_34573, &vVar4);
	if (!Function_86(Global_30640[0]))
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
	if (!Function_86(Global_30640[2]))
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
	if (!Function_86(Global_30640[1]))
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
	if (!Function_86(Global_30658[1]))
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
	if (!Function_86(Global_30658[3]))
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
	if (!Function_86(Global_30658[2]))
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
	if (!Function_86(Global_30658[4]))
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
	if (!Function_86(Global_30668[0]))
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
	if (!Function_86(Global_30668[1]))
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
	if (!Function_86(Global_30668[2]))
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
	if (!Function_86(Global_30679[0]))
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
	if (!Function_86(Global_30685[0]))
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
	if (!Function_86(Global_30685[1]))
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
	if (!Function_86(Global_30685[2]))
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
	if (!Function_86(Global_30693[0]))
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
	if (!Function_86(Global_30693[1]))
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
	if (!Function_86(Global_30693[2]))
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
	if (!Function_86(Global_30707[2]))
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
	if (!Function_86(Global_30707[3]))
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
	if (!Function_86(Global_30707[0]))
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
	if (!Function_86(Global_30717[0]))
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
	if (!Function_86(Global_30723[2]))
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
	if (!Function_86(Global_30723[1]))
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
	if (!Function_86(Global_30723[0]))
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
	if (!Function_86(Global_30679[1]))
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
	if (!Function_86(Global_30707[1]))
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
	Function_81(&Global_63095, 2);
	Function_42(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_78(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_86(int iParam0) //Position: 0x3CC1 / 15553
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_18(uVar0, 0x1000000) || Function_18(uVar0, 0x2000000)) || Function_18(uVar0, 0x4000000)) || !Function_18(uVar0, 0x10000000));
}

void Function_87(bool bParam0, int iParam1) //Position: 0x3CFC / 15612
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_88(bool bParam0) //Position: 0x3D09 / 15625
{
	int iVar0;
	int iVar1;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	switch (Function_21(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_19(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_93(12, 1, 0, 0);
				Function_92(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_93(13, 1, 0, 0);
				Function_92(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_93(14, 1, 0, 0);
				Function_92(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_93(15, 1, 0, 0);
				Function_92(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_93(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_19(bParam0))
			{
				case 0x00000000:
					if (Function_91(bParam0) == 1)
					{
						iVar0 = Function_90(bParam0);
						if (Function_89(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_92(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_92(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_92(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_92(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_92(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_92(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_92(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_92(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_92(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_92(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_92(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_92(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_92(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_92(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_92(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_92(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_92(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_92(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_92(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_92(4, 19);
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
								Function_93(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_93(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_93(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_90(bParam0) == 0)
			{
				if (Function_91(bParam0) == 1)
				{
					Function_93(458, 1, 0, 0);
					iVar0 = Function_19(bParam0);
					if (Function_89(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_92(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_92(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_92(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_92(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_92(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_92(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_92(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_92(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_91(bParam0) == 1)
			{
				Function_93(400, 1, 0, 0);
			}
			switch (Function_19(bParam0))
			{
				case 0x00000001:
					Function_93(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_92(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_92(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_92(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_93(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_92(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_92(6, 9);
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

bool Function_89(int iParam0) //Position: 0x41E6 / 16870
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_90(bool bParam0) //Position: 0x41FC / 16892
{
	if (!Function_20(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_91(bool bParam0) //Position: 0x421B / 16923
{
	if (!Function_20(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_92(int iParam0, bool bParam1) //Position: 0x4235 / 16949
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

int Function_93(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x429C / 17052
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_94() //Position: 0x44BC / 17596
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
	PLAYSTAT_INT("HC_MONEY", Function_71(0));
	PLAYSTAT_INT("HC_FAME", Function_71(3));
	PLAYSTAT_INT("HC_HONOR", Function_71(1));
	return;
}

void Function_95() //Position: 0x4614 / 17940
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(Global_6269))
	{
		return;
	}
	iVar0 = Function_71(24);
	iVar1 = Function_33(Global_6269);
	if (!Function_34(iVar0) && Function_98(iVar1) < 0)
	{
		Function_56(24, Global_6269, 0);
		Function_96(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_98(Function_33(iVar0)))
	{
		Function_56(24, Global_6269, 0);
		Function_96(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_96(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4694 / 18068
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
		Function_97(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_97(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x49E6 / 18918
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

int Function_98(int iParam0) //Position: 0x4A69 / 19049
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_99() //Position: 0x4A83 / 19075
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_100() //Position: 0x4AAE / 19118
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

void Function_101(int iParam0, int iParam1, bool bParam2) //Position: 0x4ADC / 19164
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
	
	if (!Function_34(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_116(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_71(42) - Global_34165.f_116);
				bVar1 = (Function_71(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_68(49)) - Global_34165.f_124);
				bVar3 = (Function_71(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_71(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_115(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_102(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_28(iParam0) };
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

void Function_102(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D78 / 19832
{
	int iVar0;
	bool bVar1;
	
	if (Function_114(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_99())
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
	iVar0 = Function_71(3);
	Function_111();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_109(3, bVar1);
		if (!bParam2)
		{
			if (!Function_39(Global_76848, 4))
			{
				Function_36(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_93(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_67(3));
	iVar0 = Function_71(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
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

void Function_103(int iParam0, int iParam1) //Position: 0x4F47 / 20295
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

int Function_104(int iParam0, char* cParam1, bool bParam2) //Position: 0x51A5 / 20901
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
	Function_96(iParam0, cParam1, 0, 1);
	iVar1 = Function_105();
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

int Function_105() //Position: 0x532A / 21290
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
	Function_106();
	return 0;
}

void Function_106() //Position: 0x53C9 / 21449
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
		Function_107(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_107(int iParam0) //Position: 0x5478 / 21624
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

var Function_108(int iParam0) //Position: 0x54D6 / 21718
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

int Function_109(int iParam0, bool bParam1) //Position: 0x5565 / 21861
{
	bool bVar0;
	int iVar1;
	
	Function_93(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_110(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_110(int iParam0, int iParam1) //Position: 0x5702 / 22274
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

void Function_111() //Position: 0x5743 / 22339
{
	Function_113(3, 0.0f);
	Function_112(3, 10000.0f);
	return;
}

int Function_112(int iParam0, int iParam1) //Position: 0x5759 / 22361
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_113(int iParam0, int iParam1) //Position: 0x5799 / 22425
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_114(int iParam0) //Position: 0x57D9 / 22489
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x57E8 / 22504
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

int Function_116(int iParam0) //Position: 0x59B0 / 22960
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

var Function_117() //Position: 0x5A45 / 23109
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_118(int iParam0) //Position: 0x5A6A / 23146
{
	if (!Function_34(iParam0))
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
			Function_102(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_102(25, 1, 0);
			Function_123(1, 1);
			break;
		
		case 0x00000015:
			Function_123(50, 1);
			Function_102(250, 1, 0);
			Function_119(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_123(50, 1);
			Function_102(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_123(5, 1);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_102(75, 1, 0);
			Function_119(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_123(5, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_123(25, 1);
			Function_102(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_123(10, 1);
			Function_102(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_102(50, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_102(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_119(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_123(20, 1);
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_123(25, 1);
			Function_102(150, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_123(10, 1);
			Function_102(150, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_102(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_119(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_119(100, 1, 0);
			Function_123(5, 1);
			break;
		
		case 0x0000000F:
			Function_123(3, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_119(125, 1, 0);
			Function_102(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_123(50, 1);
			Function_102(100, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_123(50, 1);
			Function_102(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_123(75, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_102(250, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_102(75, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_102(200, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_102(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_123(50, 1);
			Function_102(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_123(100, 1);
			Function_102(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_102(200, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_102(500, 1, 0);
			Function_119(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_102(150, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_119(25, 1, 0);
			Function_123(100, 1);
			break;
		
		case 0x0000002A:
			Function_102(150, 1, 0);
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_119(150, 1, 0);
			Function_123(100, 1);
			break;
		
		case 0x00000035:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_119(150, 1, 0);
			Function_123(100, 1);
			break;
		
		case 0x00000032:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_119(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F25 / 24357
{
	int iVar0;
	bool bVar1;
	
	if (Function_114(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_99())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_71(1);
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
			Function_109(1, bVar1);
			if (!bParam2)
			{
				if (!Function_39(Global_76848, 1))
				{
					Function_36(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_122(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_39(Global_76848, 2))
				{
					Function_36(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_93(1, bVar1, 0, 0);
	}
	else
	{
		Function_121(1, (4294967295 * bVar1), 0);
	}
	if (Function_71(1) <= 4294962296)
	{
		Function_56(1, 4294962296, 0);
	}
	else if (Function_71(1) >= 5000)
	{
		Function_56(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_67(1));
	iVar0 = Function_71(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_104(2, Function_120(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_104(2, Function_120(Global_12976.f_152), 0);
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
				Function_104(2, Function_120(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_104(2, Function_120(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_104(2, Function_120(Global_12976.f_152), 1);
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
				Function_104(2, Function_120(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_104(2, Function_120(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_104(2, Function_120(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_104(2, Function_120(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_104(2, Function_120(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_104(2, Function_120(Global_12976.f_152), 1);
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
				Function_104(2, Function_120(Global_12976.f_152), 0);
			}
			break;
	}
	Function_103(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_120(int iParam0) //Position: 0x6246 / 25158
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

int Function_121(int iParam0, bool bParam1, int iParam2) //Position: 0x62E9 / 25321
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
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_122(int iParam0, bool bParam1) //Position: 0x64E4 / 25828
{
	bool bVar0;
	int iVar1;
	
	Function_121(iParam0, bParam1, 0);
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
	iVar1 = Function_110(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_123(bool bParam0, bool bParam1) //Position: 0x6680 / 26240
{
	bool bVar0;
	
	bVar0 = Function_71(0);
	if ((Function_71(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_93(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_93(597, bParam0, 0, 0);
	}
	if ((Function_71(597) + Function_71(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_124(int iParam0, var uParam1, bool bParam2) //Position: 0x674B / 26443
{
	struct<4> Var0;
	
	if (!Function_34(iParam0))
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
			Function_170(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_167(Global_30640[0]);
			Function_167(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_167(Global_30668[0]);
			Function_157(0);
			Function_155(2, 1);
			Function_155(0, 1);
			Function_155(1, 1);
			break;
		
		case 0x00000003:
			Function_167(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_167(Global_30668[0]);
			Function_167(Global_30640[0]);
			Function_153(0, 1);
			Function_153(15, 1);
			Function_153(9, 1);
			Function_153(12, 1);
			Function_153(16, 1);
			Function_155(3, 1);
			break;
		
		case 0x00000005:
			Function_167(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_165(21, bParam2, 4);
			Function_167(Global_30668[0]);
			Function_155(39, 1);
			break;
		
		case 0x00000007:
			Function_167(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_167(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_152())
				{
					if (!Function_151(4))
					{
						Function_141(4, 0, 0, 1, 0);
					}
				}
			}
			Function_167(Global_30640[0]);
			Function_167(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_167(Global_30640[0]);
			Function_167(Global_30668[2]);
			Function_140(&(Global_29008[Global_30668[2]]), 32768);
			Function_139(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_165(9, bParam2, 4);
			Function_167(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_167(Global_30640[0]);
			Function_167(Global_30658[0]);
			Function_140(&(Global_29008[Global_30658[0]]), 32768);
			Function_139(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_167(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_167(Global_30640[0]);
			Function_167(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_167(Global_30640[1]);
			Function_167(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_167(Global_30679[0]);
			Function_167(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_167(Global_30658[5]);
			Function_167(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_165(21, bParam2, 4);
			Function_167(Global_30640[4]);
			Function_167(Global_30658[4]);
			Function_138(&Global_76847, 0x2000000);
			Function_138(&Global_76847, 0x4000000);
			Function_138(&Global_76847, 4096);
			Function_138(&Global_76847, 8);
			Function_138(&Global_76847, 8388608);
			Function_138(&Global_76847, 524288);
			Function_138(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_167(Global_30640[4]);
			Function_167(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_139(&(Global_29008[Global_30640[4]]), 256);
			Function_167(Global_30640[4]);
			Function_167(Global_30658[0]);
			Function_140(&(Global_29008[Global_30658[0]]), 32768);
			Function_139(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_167(Global_30640[0]);
			Function_167(Global_30640[5]);
			Function_165(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_167(Global_30658[3]);
			Function_140(&(Global_29008[Global_30658[3]]), 32768);
			Function_139(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_165(9, bParam2, 4);
			Function_167(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_140(&(Global_29008[Global_30679[1]]), 32768);
			Function_167(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_165(12, bParam2, 4);
			Function_139(&(Global_29008[Global_30679[1]]), 256);
			Function_167(Global_30668[3]);
			Function_167(Global_30693[0]);
			Function_167(Global_30685[0]);
			Function_157(4);
			Function_153(13, 1);
			Function_153(1, 1);
			Function_153(18, 1);
			Function_155(34, 1);
			Function_155(44, 1);
			Function_155(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_165(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_167(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_167(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_167(Global_30693[0]);
			Function_167(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_167(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_167(Global_30685[0]);
			Function_167(Global_30693[0]);
			Function_167(Global_30693[1]);
			Function_167(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_165(23, bParam2, 3);
			Function_153(23, 1);
			Function_167(Global_30685[0]);
			Function_167(Global_30685[2]);
			Function_140(&(Global_29008[Global_30685[2]]), 32768);
			Function_139(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_165(19, bParam2, 4);
			Function_167(Global_30685[0]);
			Function_167(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_165(24, bParam2, 3);
			Function_153(24, 1);
			Function_167(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_167(Global_30685[0]);
			Function_167(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_167(Global_30693[12]);
			Function_167(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_167(Global_30693[12]);
			Function_167(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_165(25, bParam2, 10);
			Function_167(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_167(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_167(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_165(13, bParam2, 4);
			Function_167(Global_30693[2]);
			Function_167(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_151(8))
				{
					Function_141(8, 0, 0, 1, 0);
				}
			}
			Function_167(Global_30685[0]);
			Function_157(9);
			Function_153(7, 1);
			Function_153(11, 1);
			Function_153(3, 1);
			Function_153(20, 1);
			Function_155(57, 1);
			break;
		
		case 0x0000002A:
			Function_165(2, bParam2, 4);
			Function_167(Global_30717[0]);
			Function_167(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_167(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_167(Global_30717[0]);
			Function_167(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_167(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_167(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_167(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_165(17, bParam2, 4);
			Function_167(Global_30723[0]);
			Function_167(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_136(15))
				{
					Function_131(15, 0, 1);
				}
			}
			Function_92(2, 26);
			Function_139(&(Global_29008[Global_30717[1]]), 256);
			Function_157(11);
			Function_167(Global_30717[1]);
			Function_167(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_167(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_167(Global_30717[1]);
			Function_167(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_167(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_167(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_167(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_167(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_167(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_167(Global_30717[1]);
			Function_125(11);
			Function_157(12);
			Global_16537[1121].f_40 = 0;
			Function_155(56, 1);
			if (!bParam2)
			{
				if (!Function_151(9))
				{
					Function_141(9, 0, 0, 0, 0);
				}
				if (!Function_151(10))
				{
					Function_141(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_125(int iParam0) //Position: 0x7049 / 28745
{
	bool bVar0;
	
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_130(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_130(Global_16537[iParam021].f_72, 0);
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
			Function_126(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x71B8 / 29112
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
		Function_128(Function_129(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_128(Function_129(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_128(StackVal);
				vVar1 = { StackVal, StackVal, Function_128(StackVal) };
				if (Function_127(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_127(vector3 vParam0, vector3 vParam3) //Position: 0x72BE / 29374
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_128(bool bParam0) //Position: 0x72EB / 29419
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

var Function_129(vector3 vParam0) //Position: 0x7342 / 29506
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

void Function_130(bool bParam0, bool bParam1) //Position: 0x7390 / 29584
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

void Function_131(bool bParam0, bool bParam1, bool bParam2) //Position: 0x73E4 / 29668
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_136(bParam0))
	{
		if (!Function_151(bParam0))
		{
			Function_141(bParam0, 1, 0, 0, 1);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_93(457, 1, 0, 0);
		Function_134(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 0);
			}
			else
			{
				Function_132();
			}
		}
	}
	return;
}

void Function_132() //Position: 0x7583 / 30083
{
	return;
}

bool Function_133(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7589 / 30089
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

void Function_134(bool bParam0, int iParam1) //Position: 0x762D / 30253
{
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_135(int iParam0) //Position: 0x7682 / 30338
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_136(int iParam0) //Position: 0x7698 / 30360
{
	if (!Function_135(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_137(int iParam0, int iParam1) //Position: 0x76E9 / 30441
{
	int iVar0;
	
	if (!Function_135(iParam0))
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

void Function_138(var uParam0, int iParam1) //Position: 0x7716 / 30486
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0x7725 / 30501
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0x773C / 30524
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_141(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x774B / 30539
{
	struct<8> Var0;
	
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_150(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_151(bParam0))
	{
		Function_93(456, 1, 0, 0);
		Function_134(bParam0, 2);
		if (bParam2)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 5);
			}
			else
			{
				Function_132();
			}
		}
		Function_144(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_143() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_143() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_142(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_17())
		{
			if (!Function_39(Global_76846, 2))
			{
				Function_36(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x78A0 / 30880
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_28(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_143() //Position: 0x791B / 31003
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_144(bool bParam0) //Position: 0x7948 / 31048
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
			if (Function_148(bParam0, Function_149(bVar24)))
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
			if (Function_148(bParam0, Function_149(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_147(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_146(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_145(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_145(int iParam0) //Position: 0x7AF8 / 31480
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_135(iParam0))
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

void Function_146(var uParam0, int iParam1) //Position: 0x7B4F / 31567
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

var Function_147(int iParam0) //Position: 0x7B74 / 31604
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_135(iParam0))
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

bool Function_148(bool bParam0, int iParam1) //Position: 0x7BCA / 31690
{
	int iVar0;
	
	if (!Function_135(bParam0))
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

int Function_149(bool bParam0) //Position: 0x7C29 / 31785
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_150(int iParam0) //Position: 0x7C35 / 31797
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_151(int iParam0) //Position: 0x7C51 / 31825
{
	if (!Function_135(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_152() //Position: 0x7CA3 / 31907
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_18(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7CD3 / 31955
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_154(iParam0, iParam1);
	Function_36(Global_34573, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x7D46 / 32070
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_155(int iParam0, int iParam1) //Position: 0x7DA2 / 32162
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_156(iParam0, iParam1);
	Function_36(Global_34573, 1, 4, 1);
	return 1;
}

int Function_156(int iParam0, int iParam1) //Position: 0x7E13 / 32275
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_157(int iParam0) //Position: 0x7E6D / 32365
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_164(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_164(Global_16537[iParam021].f_72, 0);
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
			Function_93(468, 1, 0, 0);
			Function_92(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_142("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_126(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_141(14, 1, 0, 0, 0);
				Function_158(14, 1, 0, 0, 0);
			}
			if (!Function_133(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 6);
			}
			else
			{
				Function_132();
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
			Function_142("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_93(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_92(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_158(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x811B / 33051
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_150(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_137(bParam0, 2))
	{
		Function_93(456, 1, 0, 0);
		Function_134(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_142(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_148(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_134(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 0);
			}
			else
			{
				Function_132();
			}
		}
		Function_144(bParam0);
		if (StackVal && !Function_18(((((!Function_143() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_18((((Function_143() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_17())
		{
			if (!Function_39(Global_76846, 2))
			{
				Function_36(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_160();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_159(3, bParam1);
				break;
			
			case 0x00000005:
				Function_159(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_159(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_159(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_159(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_159(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_92(2, 24);
				break;
			
			case 0x00000003:
				Function_92(2, 25);
				break;
			
			case 0x0000000F:
				Function_92(2, 26);
				break;
			
			case 0x0000000D:
				Function_92(2, 27);
				break;
			
			case 0x0000000E:
				Function_92(2, 28);
				break;
			}
	}
}

void Function_159(int iParam0, bool bParam1) //Position: 0x83B1 / 33713
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

void Function_160() //Position: 0x841C / 33820
{
	if (Function_135(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_163(Global_28180);
			Global_28180.f_8 = Function_161(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_163(Global_28180);
			Global_28180.f_8 = Function_161(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_161(int iParam0, int iParam1) //Position: 0x8497 / 33943
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
					if (Function_32(6, 0) || Function_32(12, 0))
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
					if (Function_162(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_32(5, 0))
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
					if (Function_162(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_162(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_162(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_162(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_32(26, 0))
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
					if (Function_162(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_162(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_162(27) && iVar18)
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
					if (Function_162(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_162(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_162(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_162(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_32(17, 0) && iVar15)
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
					if (Function_162(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_32(6, 0) && Function_162(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_162(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_32(9, 0) && Function_162(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_162(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_32(8, 0) && iVar19)
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
	if (Function_78(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_78(StackVal, StackVal, vVar3))
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
	if (!Function_78(StackVal, StackVal, vVar3))
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

int Function_162(int iParam0) //Position: 0x9088 / 37000
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_163(int iParam0) //Position: 0x909D / 37021
{
	int iVar0;
	int iVar1;
	
	if (!Function_135(iParam0))
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

void Function_164(bool bParam0, bool bParam1) //Position: 0x90EC / 37100
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

void Function_165(bool bParam0, bool bParam1, int iParam2) //Position: 0x913D / 37181
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_166(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_170(bParam0, 0, 0);
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

bool Function_166(int iParam0, int iParam1) //Position: 0x91AB / 37291
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_167(int iParam0) //Position: 0x91BE / 37310
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_169(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_140(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_93(473, 1, 0, 0);
		iVar0 = Function_168(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_93(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_93(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_93(476, 1, 0, 0);
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
		Function_92(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_92(7, 30);
	}
	if (Function_67(473) <= Function_68(473))
	{
		if (!Function_46())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_168(int iParam0) //Position: 0x92BD / 37565
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_89(iParam0))
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

bool Function_169(var uParam0, int iParam1) //Position: 0x9315 / 37653
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_170(bool bParam0, bool bParam1, int iParam2) //Position: 0x9331 / 37681
{
	if (!Function_171(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_192(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_192(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_192(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_171(int iParam0) //Position: 0x9388 / 37768
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_172(int iParam0) //Position: 0x939A / 37786
{
	int iVar0;
	
	if (Function_18(iParam0, 1) && Function_18(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_173(int iParam0) //Position: 0x93CE / 37838
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
			Function_174(4, 0, 0);
		}
	}
	return;
}

void Function_174(int iParam0, int iParam1, int iParam2) //Position: 0x9435 / 37941
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
		Function_175(Global_16524, iVar0, 1);
	}
	return;
}

void Function_175(int iParam0, bool bParam1, bool bParam2) //Position: 0x951B / 38171
{
	int iVar0;
	
	Function_177(iParam0);
	Function_12(bParam1);
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
	Function_176();
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

void Function_176() //Position: 0x9694 / 38548
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_177(int iParam0) //Position: 0x96A0 / 38560
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

void Function_178() //Position: 0x96E6 / 38630
{
	return;
}

void Function_179() //Position: 0x96EC / 38636
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_180(&bLocal_482);
	return;
}

void Function_180(int iParam0) //Position: 0x96FB / 38651
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_181(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_181(var uParam0, int iParam1) //Position: 0x9721 / 38689
{
	if (Function_183(uParam0[iParam13], 4))
	{
		if (Function_183(uParam0[iParam13], 1))
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
			Function_182(uParam0[iParam13], 1);
			Function_182(uParam0[iParam13], 2);
			Function_182(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_182(var uParam0, int iParam1) //Position: 0x984F / 38991
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_183(var uParam0, int iParam1) //Position: 0x9869 / 39017
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_184(int iParam0) //Position: 0x9886 / 39046
{
	if (Function_18(iParam0, 1) && !Function_18(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0) //Position: 0x98B3 / 39091
{
	Function_186(&Global_28842, iParam0);
	return;
}

void Function_186(var uParam0, var uParam1) //Position: 0x98C1 / 39105
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_187() //Position: 0x98DC / 39132
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_188() //Position: 0x99F6 / 39414
{
	Function_189();
	return;
}

void Function_189() //Position: 0x99FF / 39423
{
	Function_190(0);
	Function_190(1);
	Function_190(2);
	Function_190(3);
	Function_190(4);
	Function_190(5);
	return;
}

int Function_190(int iParam0) //Position: 0x9A23 / 39459
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_191(bool bParam0) //Position: 0x9A2F / 39471
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

int Function_192() //Position: 0x9A54 / 39508
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_193() //Position: 0x9A69 / 39529
{
	var uVar0[3];
	int iVar4;
	
	if (Function_215())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		iVar4 = Function_201(&uLocal_10, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_8 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_8 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_8 = 2;
		}
	}
	return;
}

void Function_194() //Position: 0x9AFC / 39676
{
	Function_196();
	Function_195(10, 3);
	return;
}

void Function_195(int iParam0, int iParam1) //Position: 0x9B0B / 39691
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

void Function_196() //Position: 0x9C42 / 40002
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_200())
	{
		Function_199(10, 3);
	}
	else
	{
		Function_197();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_192(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_192());
	UI_POP("nDebugMenu");
	return;
}

void Function_197() //Position: 0x9C8D / 40077
{
	Function_198(25, 2);
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0x9C99 / 40089
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

void Function_199(int iParam0, int iParam1) //Position: 0x9E97 / 40599
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

bool Function_200() //Position: 0x9FCE / 40910
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
				if (!Function_18(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_201(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA035 / 41013
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_214(&Var15, &Var0);
	uVar20 = Function_213(*uParam1, &Var15);
	Function_212(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_211(uParam0, uVar20);
	Function_209(StackVal, uParam0, Var15.f_12);
	Function_207(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_206(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_203(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_202(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_202(int iParam0, int iParam1, int iParam2) //Position: 0xA0FC / 41212
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

bool Function_203(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA158 / 41304
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
				Function_205(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_205(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_202(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_204(bParam1->f_32);
	}
	else
	{
		Function_204(bParam1->f_32);
	}
	return 0;
}

void Function_204(bool bParam0) //Position: 0xA2DE / 41694
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

void Function_205(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xA318 / 41752
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

var Function_206(int iParam0, var uParam1, int iParam2) //Position: 0xA3C6 / 41926
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_207(var uParam0, int iParam1, int iParam2) //Position: 0xA3EA / 41962
{
	switch (Function_208())
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

int Function_208() //Position: 0xA486 / 42118
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

void Function_209(var uParam0, int iParam1, int iParam2) //Position: 0xA4C2 / 42178
{
	switch (Function_210(uParam0))
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

int Function_210(int iParam0) //Position: 0xA55A / 42330
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_192()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_18(*iParam0, 0x40000000))
		{
			Function_81(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_18(*iParam0, 0x40000000))
		{
			Function_81(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_42(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_192()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_18(*iParam0, 0x20000000))
		{
			Function_81(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_18(*iParam0, 0x20000000))
		{
			Function_81(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_42(iParam0, 0x20000000);
	return 0;
}

var Function_211(var uParam0, int iParam1) //Position: 0xA6A5 / 42661
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

void Function_212(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA7F4 / 42996
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

var Function_213(int iParam0, int iParam1) //Position: 0xA887 / 43143
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_214(var uParam0, var uParam1) //Position: 0xA8A1 / 43169
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_215() //Position: 0xA8EF / 43247
{
	return Global_30920;
}

bool Function_216() //Position: 0xA8F8 / 43256
{
	int iVar0;
	bool bVar1;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_300();
		return 0;
	}
	bLocal_108 = (GET_CURRENT_GAME_TIME() - fLocal_109);
	if (bLocal_108 < 0.033333f)
	{
		bLocal_108 = 0.0333333f;
	}
	fLocal_109 = GET_CURRENT_GAME_TIME();
	Function_76(440, bLocal_108, 0);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_61 + 4)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_61 + 4)[iVar0]) == Function_192())
			{
				Function_300();
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_113.f_404)
	{
		if ((*&Local_113 + 404)[iVar03])
		{
			bVar1 = Local_113[StackVal50];
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1)) > 1.0f && GET_LAST_ATTACKER(bVar1) != GET_PLAYER_ACTOR(0))
				{
					HUD_CLEAR_OBJECTIVE();
					PRINT_OBJECTIVE_FORMAT(StackVal, StackVal, 4.0f, &Local_113[&Local_113["Poker_Attacks"50] + 450] + 4, "", "", 0, 2, 0, 0, 0);
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 1;
					Function_300();
					return 0;
				}
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_300();
		return 0;
	}
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			Function_298(&Local_113);
			iLocal_0 = 0;
			break;
		
		case 0x00000000:
			Function_287();
			break;
		
		case 0x00000001:
			Function_228();
			break;
		
		case 0x00000003:
			Function_219();
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000065:
			iLocal_2 = 1;
			break;
		
		default:
			return 0;
	}
	if (iLocal_2)
	{
		Function_217();
		return 0;
	}
	if (bLocal_3)
	{
		Function_300();
		return 0;
	}
	return 1;
}

void Function_217() //Position: 0xAA91 / 43665
{
	if (Global_29006 == Global_30707[3])
	{
		Function_218(8, Global_30707[3]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_218(int iParam0, int iParam1) //Position: 0xAAB4 / 43700
{
	if (!Function_150(3))
	{
		return;
	}
	if (Function_46())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3() || Function_152())
				{
					Function_158(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_158(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_158(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_158(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_158(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_158(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_158(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_151(2) && !Function_136(2))
				{
					Function_158(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_219() //Position: 0xABC6 / 43974
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (iLocal_8 == 1)
			{
			}
			else if (iLocal_8 == 0)
			{
				Function_227("5Fillet_PlayerWin", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (IS_ACTOR_VALID(Local_113[050]))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Local_113[050]), "ff_stop_looping"))
				{
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Local_113[050]), "ff_stop_looping");
				}
			}
			if (iLocal_8 == 1)
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
				if (Local_113.f_460 <= Local_61.f_28)
				{
					bVar1 = RAND_INT_RANGE(Local_113.f_460, (Local_61.f_28 - 1));
					bVar2 = RAND_INT_RANGE(0, true);
					if (IS_ACTOR_VALID((*&Local_61 + 4)[bVar1]))
					{
						if (bVar2 == 0)
						{
							SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[bVar1], 61, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else if (bVar2 == 1)
						{
							SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[bVar1], 60, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			Function_188();
			UI_EXIT("Hands");
			UI_EXIT("Scorebox");
			UI_EXIT("Scorebox_Bet");
			UI_EXIT("Scorebox_Cash");
			UI_EXIT("Scorebox_Player1");
			UI_EXIT("Scorebox_Player2");
			Function_3();
			if (iLocal_8 != 0 && !Function_225(Function_21(Local_61), Function_19(Local_61)))
			{
				Function_93(410, 1, 0, 0);
				Function_92(6, 15);
			}
			if (iLocal_8 != 0)
			{
				Global_13172[Local_6111].f_20 = 0;
			}
			iLocal_1 = 12;
			break;
		
		case 0x0000000C:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				DESTROY_OBJECT(Local_113[iVar050].f_84);
				iVar0++;
			}
			if (IS_ACTOR_VALID(Local_113[050]))
			{
				SET_DRAW_ACTOR(Local_113[050], 0);
			}
			if ((*&Local_113 + 404)[Local_113.f_4363])
			{
				Function_224(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_42));
				Function_223(StackVal, &Local_113);
			}
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_113.f_404)
			{
				if ((*&Local_113 + 404)[iVar03])
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_113[StackVal50], "fivefingerfillet/Fake/ready/enter");
				}
				iVar0++;
			}
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if ((Function_222(&Local_113) && GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0)) != "") && !IS_ACTION_NODE_PLAYING(Function_192(), "fivefingerfillet/stand"))
			{
				Function_221(4, 1);
				if (IS_ACTOR_VALID(Local_113[050]))
				{
					SET_DRAW_ACTOR(Local_113[050], 1);
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					Function_220(GET_GRINGO_FROM_OBJECT(StackVal));
					iVar0++;
				}
				if (iLocal_8 == 0)
				{
					iLocal_2 = 1;
				}
				else if (iLocal_8 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_8 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_220(bool bParam0) //Position: 0xAF8C / 44940
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
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
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			bVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar4, bParam0);
			if (IS_PHYSINST_VALID(bVar5))
			{
				SHOW_PHYSINST(bVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_221(int iParam0, bool bParam1) //Position: 0xB074 / 45172
{
	switch (iParam0)
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

int Function_222(int iParam0) //Position: 0xB1E7 / 45543
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_404)
	{
		if ((*iParam0 + 404)[iVar03])
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL((*iParam0)[StackVal50], "fivefingerfillet/Fake"))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void Function_223(int iParam0, int iParam1) //Position: 0xB245 / 45637
{
	(*iParam0 + 404)[iParam0[iParam150]->f_683] = 0;
	(iParam0 + 404[iParam0[iParam150]->f_683])->f_4 = 4294967295;
	TASK_CLEAR((*iParam0)[iParam150]);
	if (!(*iParam0)[iParam150] != GET_PLAYER_ACTOR(0))
	{
		TASK_WANDER((*iParam0)[iParam150], 3212836864);
		SET_ACTOR_STAY_OUTSIDE_OF_VOLUME((*iParam0)[iParam150], bLocal_25, 1, 1);
		AI_SET_NAV_SUBGRID_CELL_SIZE((*iParam0)[iParam150], 0.35f);
	}
	if (*iParam0)[iParam150] == GET_PLAYER_ACTOR(0)
	{
		GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(StackVal));
	}
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*iParam0)[iParam150], 1);
	SET_ANIMATION_OVERRIDE_SCALE((*iParam0)[iParam150], 1.0f);
	ACTOR_END_FORCE_HOLSTER((*iParam0)[iParam150]);
	(*iParam0)[iParam150] = "";
	iParam0[iParam150]->f_68 = 4294967295;
	strcpy(iParam0[iParam150] + 4, "", 64);
	iParam0->f_432 = (iParam0->f_432 - 1);
	if (IS_ATTACHMENT_VALID(iParam0[iParam150]->f_88))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0[iParam150]->f_88);
	}
	return;
}

void Function_224(var uParam0, bool bParam1) //Position: 0xB334 / 45876
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
		fVar14 = 1.2f;
		fVar15 = 0.4f;
		fVar16 = 1.24f;
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
		LOG_ERROR("LOOK_AT_FIVEFINGERFILLET_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

bool Function_225(int iParam0, int iParam1) //Position: 0xB4B2 / 46258
{
	int iVar0;
	
	if (!Function_226(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_21(iVar0) != iParam0 && Function_19(iVar0) != iParam1)
		{
			if (Function_91(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_226(bool bParam0) //Position: 0xB4F7 / 46327
{
	if (bParam0 >= 0 || bParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_227(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xB50C / 46348
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
			Var0 = { StackVal, StackVal, StackVal, Function_28(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_228() //Position: 0xB591 / 46481
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	struct<25> Var16;
	
	UI_LABEL_SET_VALUE("Scorebox_Player2", Local_113[150].f_76);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (IS_ATTACHMENT_VALID(Local_113[iVar950].f_88))
		{
			if ((((((((!IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "npc_loop") && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "player_loop")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/npc_loop/loop_or_quit/countme")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/ready/idle")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/ready/enter")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/ready/exit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/win")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/lose")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_113[iVar950], "fivefingerfillet/time_loss"))
			{
				REMOVE_OBJECT_ATTACHMENT(Local_113[iVar950].f_88);
				Function_286(Local_113[iVar950], &vVar3, &vVar6);
				SET_OBJECT_POSITION(Local_113[iVar950].f_84, vVar3);
				SET_OBJECT_ORIENTATION(Local_113[iVar950].f_84, vVar6);
			}
		}
		iVar9++;
	}
	switch (iLocal_1)
	{
		case 0x00000023:
			Local_113.f_456 = 1;
			Local_113.f_456 = Function_285(Local_113.f_456, &Local_113);
			UI_ENTER("Scorebox");
			UI_ENTER("Scorebox_Bet");
			UI_ENTER("Scorebox_Cash");
			UI_ENTER("Scorebox_Player1");
			UI_ENTER("Scorebox_Player2");
			UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_113[050] + 4);
			UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_113[150] + 4);
			UI_LABEL_SET_VALUE_B("Scorebox_Player1", 2);
			UI_LABEL_SET_VALUE_B("Scorebox_Player2", 2);
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_113[050].f_76);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_113[150].f_76);
			UI_LABEL_SET_TEXT("Scorebox_Bet", "5Fillet_BetAmount");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
			UI_REFRESH("Scorebox_Bet");
			UI_LABEL_SET_TEXT("Scorebox_Cash", "5Fillet_CashLabel");
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			UI_REFRESH("Scorebox_Cash");
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_41);
			Function_280(Local_113[150]);
			Function_279(&Local_113, 1);
			Local_113[150].f_76 = 0;
			Local_113.f_1472 = 0;
			SAY_SINGLE_LINE_CONTEXT(Local_113[050], 262, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
			Function_278();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_227("5Fillet_EnterBetObjective", -1.0f, 1, 2, 0, 0, 0, 0);
			iLocal_1 = 45;
			break;
		
		case 0x0000002D:
			iVar10 = Local_113.f_456;
			if ((GET_STICK_Y(Function_277(), 0, 1) > -0.3f || IS_BUTTON_PRESSED(Function_277(), 12, 1, 0)) || IS_BUTTON_DOWN(Function_277(), 12, 1, false))
			{
				if (Function_276(&iLocal_110) < fLocal_50)
				{
					if (fLocal_50 < 0.0f)
					{
						Local_113.f_456++;
					}
					else if (fLocal_50 < -0.5f)
					{
						Local_113.f_456 += 10;
					}
					else
					{
						Local_113.f_456 += 100;
					}
					Local_113.f_456 = Function_285(Local_113.f_456, &Local_113);
					Function_275(&iLocal_110);
				}
				fLocal_50 = (fLocal_50 - 0.008f);
			}
			else if ((GET_STICK_Y(Function_277(), 0, 1) < 0.3f || IS_BUTTON_PRESSED(Function_277(), 14, 1, 0)) || IS_BUTTON_DOWN(Function_277(), 14, 1, false))
			{
				if (Function_276(&iLocal_110) < fLocal_50)
				{
					if (fLocal_50 < 0.0f)
					{
						Local_113.f_456 = (Local_113.f_456 - 1);
					}
					else if (fLocal_50 < -0.5f)
					{
						Local_113.f_456 = (Local_113.f_456 - 10);
					}
					else
					{
						Local_113.f_456 = (Local_113.f_456 - 100);
					}
					Local_113.f_456 = Function_285(Local_113.f_456, &Local_113);
					Function_275(&iLocal_110);
				}
				fLocal_50 = (fLocal_50 - 0.008f);
			}
			else
			{
				fLocal_50 = 0.2f;
			}
			iVar10 = (iVar10 - Local_113.f_456);
			if (iVar10 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			Function_271(3, 12, "5Fillet_ChangeBet", 1, 0, 0, 0, 0);
			Function_271(2, 1, "5Fillet_EnterBet", 1, 0, 0, 0, 0);
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			if (IS_BUTTON_PRESSED(Function_277(), 6, 1, 0))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_190(4);
				Function_190(3);
				Function_190(2);
				Function_270(Local_113.f_456, 0);
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				DECOR_SET_INT(Local_113[050], "iAdditionalMoney", Local_113.f_456);
				SAY_SINGLE_LINE_CONTEXT(Local_113[150], 455, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				if (Local_113.f_456 >= ((Local_113[050].f_184 - Local_113[050].f_180) * 3 / 4))
				{
					if (Local_113[050].f_124 == 0)
					{
						Local_113[050].f_124 = 1;
					}
					else if (Local_113[050].f_124 == 1)
					{
						Local_113[050].f_124 = 2;
					}
					else if (Local_113[050].f_124 == 2)
					{
						Local_113[050].f_124 = 3;
					}
					else if (Local_113[050].f_124 == 3)
					{
						(*&Local_113[050] + 164)[0]++;
						(*&Local_113[050] + 164)[1]++;
					}
				}
				else if (Local_113.f_456 >= ((Local_113[050].f_184 - Local_113[050].f_180) / 2))
				{
					(*&Local_113[050] + 164)[0]++;
					(*&Local_113[050] + 164)[1]++;
				}
				if (bLocal_52)
				{
					iLocal_1 = 48;
				}
				else
				{
					iLocal_1 = 0;
				}
			}
			Function_278();
			break;
		
		case 0x00000000:
			Function_3();
			Function_266();
			Local_113[050].f_88 = ATTACH_OBJECTS_USING_LOCATOR(Local_113[050].f_84, GET_OBJECT_FROM_ACTOR(Local_113[050]), "pelvis_attachment", "grab", 4294967295);
			SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/ready/enter");
			Function_275(&iLocal_44);
			SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/idle_watching");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			SAY_SINGLE_LINE_CONTEXT(Local_113[050], 263, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
			Function_278();
			iLocal_1 = 15;
			break;
		
		case 0x0000000F:
			if (IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/ready/idle"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(Local_113[050], ((*&Local_113[050] + 112)[Local_113.f_1472] * 0.75f));
				SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/npc_loop");
				Function_275(&iLocal_44);
				Local_113[050].f_92 = 0;
				Local_113[050].f_176 = 0;
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Local_113[050]), "ff_stop_looping");
				UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
				if (bLocal_21)
				{
					UI_ENTER("Hands");
					UI_EXIT("Hands.s0");
					UI_EXIT("Hands.s1");
					UI_EXIT("Hands.s2");
					UI_EXIT("Hands.s3");
					UI_EXIT("Hands.s4");
					if (Local_113[050].f_76 == 1)
					{
						UI_ENTER("Hands.s0");
					}
					else if (Local_113[050].f_76 == 2)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
					}
					else if (Local_113[050].f_76 == 3)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
					}
					else if (Local_113[050].f_76 == 4)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
						UI_ENTER("Hands.s3");
					}
					UI_ENTER("HandsTimer");
					UI_LABEL_SET_TEXT("HandsTimer", "5Fillet_TimeToBeat");
					Function_275(&iLocal_22);
				}
				Function_265(&Local_113);
				Function_264(Local_113[150]);
				iLocal_1 = 46;
			}
			else if (IS_BUTTON_PRESSED(Function_277(), 6, 1, 0))
			{
				if (bLocal_21)
				{
					UI_ENTER("Hands");
					UI_EXIT("Hands.s0");
					UI_EXIT("Hands.s1");
					UI_EXIT("Hands.s2");
					UI_EXIT("Hands.s3");
					UI_EXIT("Hands.s4");
					if (Local_113[050].f_76 == 1)
					{
						UI_ENTER("Hands.s0");
					}
					else if (Local_113[050].f_76 == 2)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
					}
					else if (Local_113[050].f_76 == 3)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
					}
					else if (Local_113[050].f_76 == 4)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
						UI_ENTER("Hands.s3");
					}
					UI_ENTER("HandsTimer");
					UI_LABEL_SET_TEXT("HandsTimer", "5Fillet_TimeToBeat");
					UI_LABEL_SET_VALUE("HandsTimer", CEIL((*&Local_113[050] + 188)[Local_113.f_1472]));
					Function_263(&iLocal_22, (*&Local_113[050] + 188)[Local_113.f_1472]);
					Function_261(&iLocal_22);
				}
				Function_190(0);
				iLocal_1 = 48;
			}
			else
			{
				Function_271(0, 1, "5Fillet_Skip", 1, 0, 0, 0, 0);
			}
			Function_278();
			break;
		
		case 0x0000002E:
			if (((IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/win/win_A") || IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/win/win_B")) || IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/win/win_C")) || IS_BUTTON_PRESSED(Function_277(), 6, 1, 0))
			{
				if (IS_BUTTON_PRESSED(Function_277(), 6, 1, 0))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
				}
				if (bLocal_21)
				{
					Function_261(&iLocal_22);
					if (!IS_BUTTON_PRESSED(Function_277(), 6, 1, 0))
					{
						(*&Local_113[050] + 188)[Local_113.f_1472] = Function_276(&iLocal_22);
					}
					Function_263(&iLocal_22, (*&Local_113[050] + 188)[Local_113.f_1472]);
					Function_261(&iLocal_22);
				}
				iVar9 = 0;
				while (iVar9 <= 6)
				{
					if (IS_OBJECT_VALID(bLocal_33[iVar9]))
					{
						DESTROY_OBJECT(bLocal_33[iVar9]);
					}
					iVar9++;
				}
				DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Local_113[050]), "ff_stop_looping", true);
				Function_190(0);
				SET_ANIMATION_OVERRIDE_SCALE(Local_113[050], 1.0f);
				iLocal_1 = 48;
			}
			else if (IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/npc_loop/loop_or_quit/countme"))
			{
				Local_113[050].f_176++;
				if (Local_113[050].f_176 > (*&Local_113[050] + 164)[Local_113.f_1472])
				{
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Local_113[050]), "ff_stop_looping", true);
				}
			}
			else
			{
				Function_271(0, 1, "5Fillet_Skip", 1, 0, 0, 0, 0);
			}
			UI_LABEL_SET_VALUE("HandsTimer", CEIL(Function_276(&iLocal_22)));
			Function_278();
			break;
		
		case 0x00000030:
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_113.f_1472 + 1);
			Local_113[150].f_88 = ATTACH_OBJECTS_USING_LOCATOR(Local_113[150].f_84, GET_OBJECT_FROM_ACTOR(Local_113[150]), "pelvis_attachment", "grab", 4294967295);
			SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/ready/enter");
			Local_113[150].f_92 = 0;
			SAY_SINGLE_LINE_CONTEXT(Local_113[150], 456, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			UI_ENTER("Hands");
			UI_EXIT("Hands.s0");
			UI_EXIT("Hands.s1");
			UI_EXIT("Hands.s2");
			UI_EXIT("Hands.s3");
			UI_EXIT("Hands.s4");
			if (Local_113[050].f_76 == 1)
			{
				UI_ENTER("Hands.s0");
			}
			else if (Local_113[050].f_76 == 2)
			{
				UI_ENTER("Hands.s0");
				UI_ENTER("Hands.s1");
			}
			else if (Local_113[050].f_76 == 3)
			{
				UI_ENTER("Hands.s0");
				UI_ENTER("Hands.s1");
				UI_ENTER("Hands.s2");
			}
			else if (Local_113[050].f_76 == 4)
			{
				UI_ENTER("Hands.s0");
				UI_ENTER("Hands.s1");
				UI_ENTER("Hands.s2");
				UI_ENTER("Hands.s3");
			}
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_227("5Fillet_HowToPlayHelp", 0x40f00000, 1, 2, 0, 0, 0, 0);
			iLocal_1 = 49;
			Function_278();
			break;
		
		case 0x00000031:
			if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/ready/idle"))
			{
				Function_279(&Local_113, 1);
				Function_275(&iLocal_44);
				Function_261(&iLocal_44);
				switch (iLocal_30)
				{
					case 0x00000000:
						Function_280(Local_113[150]);
						break;
					
					case 0x00000001:
						Function_260(Local_113[150]);
						break;
					
					case 0x00000002:
						Function_264(Local_113[150]);
						break;
				}
				HUD_CLEAR_OBJECTIVE();
				SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/player_loop");
				iLocal_60 = 1;
				Function_275(&iLocal_47);
				iLocal_1 = 6;
			}
			else
			{
				UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
				if (IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/ready/idle"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/ready/exit");
				}
			}
			Function_278();
			break;
		
		case 0x00000006:
			if (IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/idle"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/idle_watching");
			}
			if (IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/ready/idle"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/ready/exit");
			}
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_113.f_456);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			if (iLocal_60 != 1)
			{
				if (Local_113.f_460 <= Local_61.f_28)
				{
					if (Function_276(&iLocal_47) < 0.5f)
					{
						bVar11 = RAND_INT_RANGE(0, 100);
						if (bVar11 <= 1)
						{
							bVar12 = RAND_INT_RANGE(Local_113.f_460, (Local_61.f_28 - 1));
							bVar13 = RAND_INT_RANGE(0, true);
							Function_275(&iLocal_47);
							if (bVar13 == 0)
							{
								SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[bVar12], 61, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[bVar12], 60, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
				}
			}
			switch (iLocal_60)
			{
				case 0x00000001:
					if (IS_BUTTON_PRESSED(Function_277(), 6, 1, 0) || iLocal_28)
					{
						Function_190(5);
						Function_190(0);
						if (bLocal_21)
						{
							Function_275(&iLocal_22);
						}
						Function_258(&Local_113);
						iLocal_60 = 7;
					}
					else
					{
						Function_278();
						if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/ready/idle"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/player_loop");
						}
						if (StackVal == DECOR_GET_INT(Local_113[150], "icon_on"))
						{
							SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], 0.0f);
							Function_254(&Local_113);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_276(&iLocal_44) < 0.5f)
					{
						SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], (*&Local_113[050] + 112)[Local_113.f_1472]);
						iLocal_60 = 4;
					}
					break;
				
				case 0x00000004:
					if (DECOR_GET_INT(Local_113[150], "icon_on") == 99)
					{
					}
					else
					{
						Function_254(&Local_113);
						iLocal_60 = 5;
					}
					if ((((IS_BUTTON_PRESSED(Function_277(), 6, 1, 0) || IS_BUTTON_PRESSED(Function_277(), 5, 1, 0)) || IS_BUTTON_PRESSED(Function_277(), 4, 1, 0)) || IS_BUTTON_PRESSED(Function_277(), 7, 1, 0)) || iLocal_28)
					{
						Function_253(&Local_113);
					}
					break;
				
				case 0x00000005:
					if (StackVal == DECOR_GET_INT(Local_113[150], "icon_on"))
					{
						SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], ((*&Local_113[050] + 112)[Local_113.f_1472] / (*&Local_113[050] + 140)[Local_113.f_1472]));
						Function_252(&Local_113);
						if (IS_BUTTON_PRESSED(Function_277(), bLocal_27, 1, 0) || iLocal_28)
						{
							Function_258(&Local_113);
							iLocal_60 = 7;
						}
						else if (Function_251())
						{
							Function_248(&Local_113);
						}
					}
					else
					{
						Function_252(&Local_113);
						if (IS_BUTTON_PRESSED(Function_277(), bLocal_27, 1, 0) || iLocal_28)
						{
							Function_258(&Local_113);
							iLocal_60 = 7;
						}
						else if (Function_251())
						{
							Function_248(&Local_113);
						}
						else
						{
							UNK_0x7246F438(bLocal_32);
							DESTROY_OBJECT(bLocal_32);
							iLocal_51 = 2;
							iLocal_60 = 6;
						}
					}
					break;
				
				case 0x00000006:
					if (IS_BUTTON_PRESSED(Function_277(), bLocal_27, 1, 0) || iLocal_28)
					{
						Function_258(&Local_113);
						iLocal_60 = 7;
					}
					else if (Function_251())
					{
						Function_248(&Local_113);
					}
					else if (iLocal_51 == 0)
					{
						Function_248(&Local_113);
					}
					else
					{
						iLocal_51 = (iLocal_51 - 1);
					}
					break;
				
				case 0x00000007:
					if (IS_ACTOR_ANIM_PHASE_LOCKED(Local_113[150]))
					{
						iLocal_43 = (*&Local_113[050] + 128)[Local_113.f_1472];
						if (iLocal_43 == 0)
						{
							RELEASE_ACTOR_ANIM_PHASE_LOCK(Local_113[150]);
							SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], (*&Local_113[050] + 112)[Local_113.f_1472]);
							GET_OBJECT_POSITION(bLocal_31, &vVar0);
							AUDIO_MG_FILLET_PULL_FROM_TABLE();
							Function_247(&Local_113);
						}
						else
						{
							iLocal_43 = (iLocal_43 - 1);
							iLocal_60 = 8;
						}
					}
					break;
				
				case 0x00000008:
					if (iLocal_43 == 0)
					{
						RELEASE_ACTOR_ANIM_PHASE_LOCK(Local_113[150]);
						SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], (*&Local_113[050] + 112)[Local_113.f_1472]);
						AUDIO_MG_FILLET_PULL_FROM_TABLE();
						PLAY_SOUND_FROM_POSITION("KNIFE_OUT_WOOD_MASTER", vVar0);
						Function_247(&Local_113);
					}
					else
					{
						iLocal_43 = (iLocal_43 - 1);
					}
					break;
			}
			if (iLocal_1 != 86)
			{
				if (bLocal_21)
				{
					if (!Function_246(&Local_113))
					{
						if (!Function_245(&iLocal_22))
						{
							bVar14 = CEIL(((*&Local_113[050] + 188)[Local_113.f_1472] - Function_276(&iLocal_22)));
							if (bVar14 < 2)
							{
								if (bLocal_26 != bVar14)
								{
									PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
								}
							}
							UI_LABEL_SET_VALUE("HandsTimer", bVar14);
							bLocal_26 = bVar14;
							if (((*&Local_113[050] + 188)[Local_113.f_1472] - Function_276(&iLocal_22)) >= 0.0f)
							{
								if (Local_113[050].f_76 + 1 <= 5)
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
									Function_227("5Fillet_TimesUp", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
									Function_227("5Fillet_PlayerLose", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								Function_244(&Local_113);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000056:
			iLocal_43 = (iLocal_43 - 1);
			if (iLocal_43 < 0)
			{
				SAY_SINGLE_LINE_CONTEXT(Local_113[150], 457, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				if (Local_113[050].f_76 + 1 <= 5 && !bLocal_52)
				{
					Function_227("5Fillet_PlayerLose", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				if (Local_113[050].f_76 == 0)
				{
					UI_ENTER("Hands.s0");
				}
				else if (Local_113[050].f_76 == 1)
				{
					UI_ENTER("Hands.s1");
				}
				else if (Local_113[050].f_76 == 2)
				{
					UI_ENTER("Hands.s2");
				}
				else if (Local_113[050].f_76 == 3)
				{
					UI_ENTER("Hands.s3");
				}
				else if (Local_113[050].f_76 == 4)
				{
					UI_ENTER("Hands.s4");
				}
				Function_243(&Local_113, 1);
				iLocal_1 = 11;
				if (bLocal_21)
				{
					Function_261(&iLocal_22);
					UI_LABEL_SET_VALUE("HandsTimer", CEIL((*&Local_113[050] + 188)[Local_113.f_1472]));
				}
			}
			break;
		
		case 0x00000068:
			SAY_SINGLE_LINE_CONTEXT(Local_113[150], 458, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Local_113[050].f_76 == 0)
			{
				UI_ENTER("Hands.s0");
			}
			else if (Local_113[050].f_76 == 1)
			{
				UI_ENTER("Hands.s1");
			}
			else if (Local_113[050].f_76 == 2)
			{
				UI_ENTER("Hands.s2");
			}
			else if (Local_113[050].f_76 == 3)
			{
				UI_ENTER("Hands.s3");
			}
			else if (Local_113[050].f_76 == 4)
			{
				UI_ENTER("Hands.s4");
			}
			iLocal_1 = 11;
			if (bLocal_21)
			{
				Function_261(&iLocal_22);
				UI_LABEL_SET_VALUE("HandsTimer", CEIL((*&Local_113[050] + 188)[Local_113.f_1472]));
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/ready/idle"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], 1.0f);
				iLocal_1 = 8;
			}
			else if ((IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/win/win_A") || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/win/win_B")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/win/player/win_A"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], 1.0f);
				iLocal_1 = 7;
			}
			else if ((((((((((IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/s_0/s_0_pst") || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_1/0_1_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/1_0/1_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_2/0_2_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/2_0/2_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/3_0/3_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_3/0_3_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_4/0_4_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/4_0/4_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_5/0_5_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/5_0/5_0_pst"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(Local_113[150], 1.0f);
				RELEASE_ACTOR_ANIM_PHASE_LOCK(Local_113[150]);
				if (!IS_OBJECT_VALID(Local_113[150].f_104))
				{
					Function_242(&Local_113);
					if (((((IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/s_0/s_0_pst") || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/1_0/1_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/2_0/2_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/3_0/3_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/4_0/4_0_pst")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/5_0/5_0_pst"))
					{
						bVar15 = false;
					}
					else if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_1/0_1_pst"))
					{
						bVar15 = true;
					}
					else if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_2/0_2_pst"))
					{
						bVar15 = 2;
					}
					else if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_3/0_3_pst"))
					{
						bVar15 = 3;
					}
					else if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_4/0_4_pst"))
					{
						bVar15 = 4;
					}
					else if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_5/0_5_pst"))
					{
						bVar15 = 4;
					}
					PRINTSTRING("Pricking finger ");
					PRINTINT(bVar15);
					PRINTNL();
					PRICK_PLAYER_FINGER(bVar15);
				}
			}
			else if ((((((((((IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/s_0") || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_1")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/1_0")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_2")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/2_0")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/3_0")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_3")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_4")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/4_0")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/0_5")) || IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/lose/player/5_0"))
			{
			}
			break;
		
		case 0x00000007:
			Function_3();
			HUD_CLEAR_OBJECTIVE();
			Function_275(&iLocal_44);
			UI_EXIT("HandsTimer");
			Local_113[150].f_76++;
			if (Local_113[150].f_76 <= 2 || (iLocal_54 && Local_113[150].f_76 != 1))
			{
				UI_EXIT("Hands");
				Function_123(Local_113.f_456 * 2, 0);
				DECOR_SET_INT(Local_113[050], "iAdditionalMoney", false);
				PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
				Function_93(437, Local_113.f_456, 0, 0);
				Function_93(450, Local_113.f_456, 0, 0);
				if ((Function_71(597) + Function_71(450)) >= 10000)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
					{
						AWARD_ACHIEVEMENT(24);
					}
				}
				Global_13172[Local_6111].f_20++;
				if (Global_13172[Local_6111].f_20 >= Function_71(439))
				{
					Function_56(439, Global_13172[Local_6111].f_20, 0);
				}
				if (Local_113.f_460 == Local_61.f_28)
				{
					if (Function_241())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_113[050], 267, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_113[150], 459, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 0;
				}
				else
				{
					if (Function_241())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_113[050], 264, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_113[150], 460, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					Function_240(GET_PLAYER_ACTOR(0));
					*(&Var16 + 12) = { StackVal, StackVal, Function_240(GET_PLAYER_ACTOR(0)) };
					Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
					Var16 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0))) };
					Var16.f_24 = 0;
					bLocal_41 = Function_236(bLocal_29, 0, &Var16, 1, 0, 0);
					bLocal_40 = Local_113[050];
					Function_223(&Local_113, 0);
					iLocal_1 = 9;
				}
			}
			else
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_227("FiveFingerFillet_RoundWon", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (Function_241())
				{
					SAY_SINGLE_LINE_CONTEXT(Local_113[050], 264, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Local_113[150], 460, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(bLocal_32))
			{
				UNK_0x7246F438(bLocal_32);
				DESTROY_OBJECT(bLocal_32);
			}
			if (Local_113.f_460 != Local_61.f_28)
			{
				SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[Local_113.f_460], 61, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			HUD_CLEAR_OBJECTIVE();
			Function_275(&iLocal_44);
			if (Local_113[050].f_76 + 1 <= 5 && !bLocal_52)
			{
				Function_121(437, Local_113.f_456, 0);
				Function_121(450, Local_113.f_456, 0);
				Global_13172[Local_6111].f_20 = 0;
				SAY_SINGLE_LINE_CONTEXT(Local_113[150], 461, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_93(438, 1, 0, 0);
				if (Local_113.f_460 <= Local_61.f_28)
				{
					bVar23 = RAND_INT_RANGE(Local_113.f_460, (Local_61.f_28 - 1));
					bVar24 = RAND_INT_RANGE(0, true);
					Function_275(&iLocal_47);
					SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[bVar23], 60, Local_113[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 1;
			}
			else
			{
				iLocal_1 = 10;
			}
			break;
		
		case 0x00000009:
			if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/idle"))
			{
				Function_3();
				if (Local_113[150].f_76 <= 2 || (iLocal_54 && Local_113[150].f_76 != 1))
				{
					Local_113[050].f_76 = 0;
					if (Local_113.f_460 == 1)
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/first_callout");
					}
					else if (Local_113.f_460 <= Local_61.f_28)
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/second_callout");
					}
					if (Local_113.f_460 != Local_61.f_28)
					{
						if (!IS_ACTION_NODE_PLAYING(bLocal_40, "fivefingerfillet/stand"))
						{
							DESTROY_ACTOR(bLocal_40);
						}
						SAY_SINGLE_LINE_CONTEXT((*&Local_61 + 4)[Local_113.f_460], 160, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						SAY_SINGLE_LINE_CONTEXT(Local_113[150], 462, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_113[150], 463, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					iLocal_1 = 106;
				}
				else
				{
					Local_113.f_1472 = Local_113[150].f_76;
					if (bLocal_52)
					{
						iLocal_1 = 48;
					}
					else
					{
						iLocal_1 = 0;
					}
				}
			}
			break;
		
		case 0x0000000A:
			Function_3();
			Local_113[050].f_76++;
			iLocal_1 = 106;
			break;
		
		case 0x0000006A:
			DESTROY_OBJECT(Local_113[150].f_104);
			DESTROY_OBJECT(Local_113[150].f_108);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			if (Local_113[150].f_76 <= 2 || (iLocal_54 && Local_113[150].f_76 != 1))
			{
				Function_275(&iLocal_44);
				if (Local_113.f_460 != Local_61.f_28)
				{
					if (!IS_ACTION_NODE_PLAYING(bLocal_40, "fivefingerfillet/stand"))
					{
						DESTROY_ACTOR(bLocal_40);
						if (IS_GRINGO_VALID(GET_CURRENT_GRINGO((*&Local_61 + 4)[Local_113.f_460])))
						{
							GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO((*&Local_61 + 4)[Local_113.f_460]));
						}
						Function_275(&iLocal_44);
						iLocal_1 = 34;
					}
				}
				else
				{
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 0;
				}
			}
			else if (Local_113[050].f_76 <= 5 && !bLocal_52)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 1;
			}
			else
			{
				Function_278();
				iLocal_1 = 47;
			}
			break;
		
		case 0x00000022:
			if ((GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1") != "" && !IS_ACTOR_VALID(bLocal_40)) && MAKE_ACTOR_READY_FOR_ACTION((*&Local_61 + 4)[Local_113.f_460], 1))
			{
				Function_233((*&Local_61 + 4)[Local_113.f_460], &Local_113, 0, GET_ACTOR_ENUM_STRING((*&Local_61 + 4)[Local_113.f_460]), ((4 - Local_61.f_28) + Local_113.f_460), 1);
				Local_113.f_460++;
				Function_275(&iLocal_44);
				iLocal_1 = 40;
			}
			else if (Local_113.f_460 != Local_61.f_28)
			{
				if (!IS_ACTION_NODE_PLAYING(bLocal_40, "fivefingerfillet/stand"))
				{
					DESTROY_ACTOR(bLocal_40);
				}
			}
			if (Function_276(&iLocal_44) < 10.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 2;
			}
			break;
		
		case 0x00000028:
			if (IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/Fake/sit"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_41);
				Function_240(GET_PLAYER_ACTOR(0));
				*(&Var25 + 12) = { StackVal, StackVal, Function_240(GET_PLAYER_ACTOR(0)) };
				Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var25 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0))) };
				Var25.f_24 = 0;
				bLocal_41 = Function_229(bLocal_29, 0, &Var25, 1, 0, 0);
				Function_275(&iLocal_44);
				iLocal_1 = 36;
			}
			if (Function_276(&iLocal_44) < 10.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 2;
			}
			break;
		
		case 0x00000024:
			if (!IS_ACTION_NODE_PLAYING(Local_113[050], "fivefingerfillet/Fake/sit"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/idle");
				iLocal_1 = 35;
			}
			if (Function_276(&iLocal_44) < 10.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 2;
			}
			break;
		
		case 0x0000002F:
			Local_113[150].f_92 = 0;
			if (IS_ACTION_NODE_PLAYING(Local_113[150], "fivefingerfillet/ready/idle"))
			{
				Function_279(&Local_113, 1);
				SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/player_loop");
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000016:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
				{
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 2;
				}
				else
				{
					iLocal_1 = iLocal_19;
					iLocal_0 = iLocal_20;
				}
				UI_EXIT("Fivefingerfillet_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame");
			}
			break;
	}
	return;
}

bool Function_229(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xDE50 / 56912
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Fillet_OppSit", 2, 1);
	}
	Function_230(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_230(var uParam0, int iParam1) //Position: 0xDED4 / 57044
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_232(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_231(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 0, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 1);
	return;
}

void Function_231(var uParam0, bool bParam1) //Position: 0xDF16 / 57110
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -0.840515f, 0.917482f, 1.675858f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.131741f, 1.124052f, 0.087639f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_232(var uParam0, bool bParam1) //Position: 0xE006 / 57350
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.086689f, 0.929619f, 1.843185f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.12188f, 1.12377f, 0.056633f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_233(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xE0F6 / 57590
{
	int iVar0;
	int iVar1;
	
	if (!iParam2 != 4294967295 && !(*iParam1 + 404)[iParam23])
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_432)
		{
			if ((*iParam1)[iVar050] == "")
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
		Function_235(iParam1[iVar150], bParam0, iParam2, iParam3, iParam4);
		(*iParam1 + 404)[iParam23] = 1;
		(iParam1 + 404[iParam23])->f_4 = iVar1;
		iParam1->f_432++;
		if (bParam0 == GET_PLAYER_ACTOR(0))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			iParam1->f_436 = iParam2;
			Function_234(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_42));
			if (!SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase1", 0, 0, 1))
			{
			}
		}
		else
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
			if (bParam5)
			{
				SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase1", 0, 0, 0);
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 4294967295, 1);
			}
			else
			{
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 4294967295, 1);
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "fivefingerfillet/idle");
			}
			TASK_PRIORITY_SET(bParam0, 1);
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_234(var uParam0, bool bParam1) //Position: 0xE2F3 / 58099
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
		fVar14 = 0.8f;
		fVar15 = 0.4f;
		fVar16 = 1.16f;
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
		LOG_ERROR("LOOK_AT_FIVEFINGERFILLET_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_235(int iParam0, bool bParam1, var uParam2, char* cParam3, int iParam4) //Position: 0xE471 / 58481
{
	if (!AI_IGNORE_ACTOR(cParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(bParam1, 1);
	iParam0->f_76 = 0;
	iParam0->f_72 = 1.0f;
	*iParam0 = bParam1;
	iParam0->f_68 = uParam2;
	if (bParam1 == GET_PLAYER_ACTOR(0))
	{
		strcpy(iParam0 + 4, "Poker_Name_P", 64);
	}
	else
	{
		strcpy(iParam0 + 4, cParam3, 64);
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
	iParam0->f_80 = iParam4;
	switch (iParam4)
	{
		case 0xFFFFFFFF:
			(*iParam0 + 112)[0] = -1.0f;
			break;
		
		case 0x00000000:
			(*iParam0 + 112)[0] = 0.8f;
			(*iParam0 + 112)[1] = 1.2f;
			(*iParam0 + 128)[0] = 1;
			(*iParam0 + 128)[1] = 1;
			(*iParam0 + 140)[0] = 2.0f;
			(*iParam0 + 140)[1] = 2.0f;
			(*iParam0 + 152)[0] = 128.0f;
			(*iParam0 + 152)[1] = 128.0f;
			(*iParam0 + 164)[0] = 1;
			(*iParam0 + 164)[1] = 2;
			iParam0->f_124 = 0;
			iParam0->f_180 = 1;
			if (Function_99())
			{
				iParam0->f_184 = 3;
			}
			else
			{
				iParam0->f_184 = 5;
			}
			(*iParam0 + 188)[0] = 7.0f;
			(*iParam0 + 188)[1] = 9.0f;
			break;
		
		case 0x00000001:
			(*iParam0 + 112)[0] = 0.8f;
			(*iParam0 + 112)[1] = 1.3f;
			(*iParam0 + 128)[0] = 1;
			(*iParam0 + 128)[1] = 1;
			(*iParam0 + 140)[0] = 2.0f;
			(*iParam0 + 140)[1] = 2.0f;
			(*iParam0 + 152)[0] = 128.0f;
			(*iParam0 + 152)[1] = 128.0f;
			(*iParam0 + 164)[0] = 1;
			(*iParam0 + 164)[1] = 2;
			iParam0->f_124 = 1;
			if (Function_99())
			{
				iParam0->f_180 = 1;
				iParam0->f_184 = 5;
			}
			else
			{
				iParam0->f_180 = 3;
				iParam0->f_184 = 10;
			}
			(*iParam0 + 188)[0] = 7.0f;
			(*iParam0 + 188)[1] = 8.0f;
			break;
		
		case 0x00000002:
			(*iParam0 + 112)[0] = 1.0f;
			(*iParam0 + 112)[1] = 1.3f;
			(*iParam0 + 128)[0] = 0;
			(*iParam0 + 128)[1] = 0;
			(*iParam0 + 140)[0] = 2.0f;
			(*iParam0 + 140)[1] = 2.0f;
			(*iParam0 + 152)[0] = 128.0f;
			(*iParam0 + 152)[1] = 128.0f;
			(*iParam0 + 164)[0] = 1;
			(*iParam0 + 164)[1] = 2;
			iParam0->f_124 = 2;
			if (Function_99())
			{
				iParam0->f_180 = 3;
				iParam0->f_184 = 12;
			}
			else
			{
				iParam0->f_180 = 10;
				iParam0->f_184 = 25;
			}
			(*iParam0 + 188)[0] = 6.0f;
			(*iParam0 + 188)[1] = 8.0f;
			break;
		
		case 0x00000003:
			(*iParam0 + 112)[0] = 1.1f;
			(*iParam0 + 112)[1] = 1.4f;
			(*iParam0 + 128)[0] = 0;
			(*iParam0 + 128)[1] = 0;
			(*iParam0 + 140)[0] = 2.0f;
			(*iParam0 + 140)[1] = 2.0f;
			(*iParam0 + 152)[0] = 128.0f;
			(*iParam0 + 152)[1] = 128.0f;
			(*iParam0 + 164)[0] = 1;
			(*iParam0 + 164)[1] = 3;
			iParam0->f_124 = 3;
			if (Function_99())
			{
				iParam0->f_180 = 5;
				iParam0->f_184 = 25;
			}
			else
			{
				iParam0->f_180 = 25;
				iParam0->f_184 = 100;
			}
			(*iParam0 + 188)[0] = 5.0f;
			(*iParam0 + 188)[1] = 11.0f;
			break;
	}
}

bool Function_236(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xE782 / 59266
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Finger_ChangeOpponent", 1, 1);
	}
	Function_237(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_237(var uParam0, int iParam1) //Position: 0xE80E / 59406
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_238(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 1);
	return;
}

void Function_238(var uParam0, bool bParam1) //Position: 0xE83E / 59454
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.018317f, 0.975367f, -2.003327f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.004787f, 1.099193f, -0.072784f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 2);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

vector3 Function_239(bool bParam0) //Position: 0xE936 / 59702
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_240(bool bParam0) //Position: 0xE95D / 59741
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_241() //Position: 0xE96E / 59758
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(0, 100);
	if (bVar0 >= 50)
	{
		return 1;
	}
	return 0;
}

void Function_242(int iParam0) //Position: 0xE989 / 59785
{
	struct<5> Var0;
	float fVar6;
	bool bVar7;
	
	if (IS_OBJECT_VALID(iParam0[150]->f_84) && !IS_OBJECT_VALID(iParam0[150]->f_104))
	{
		GET_OBJECT_POSITION(iParam0[150]->f_84, &Var3);
		GET_OBJECT_POSITION(bLocal_31, &Var0);
		fVar6 = (StackVal - StackVal);
		iParam0[150]->f_104 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_58(), "script_fivefingers_blood_drip", "pelvis_attachment", GET_OBJECT_FROM_ACTOR((*iParam0)[150]), 0.0f, fVar6, 0.0f, bLocal_29);
		if (IS_OBJECT_VALID(iParam0[150]->f_104))
		{
			UNK_0x6745191B(iParam0[150]->f_104, 0.0f, 0.0f, 0.0f);
		}
		else
		{
			LOG_ERROR("Table.Players[1].oKnifeBloodParticle is not valid");
		}
	}
	else
	{
		LOG_ERROR("Table.Players[1].oKnife is NOT valid");
	}
	if (!IS_OBJECT_VALID(iParam0[150]->f_108))
	{
		switch (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR((*iParam0)[150]), "finger"))
		{
			case 0x00000000:
				bVar7 = "thumb_03_l";
				break;
			
			case 0x00000001:
				bVar7 = "finger_13_l";
				break;
			
			case 0x00000002:
				bVar7 = "finger_23_l";
				break;
			
			case 0x00000003:
				bVar7 = "finger_33_l";
				break;
			
			case 0x00000004:
				bVar7 = "finger_43_l";
				break;
		}
		iParam0[150]->f_108 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_58(), "script_fivefingers_blood", bVar7, GET_OBJECT_FROM_ACTOR((*iParam0)[150]), 0.0f, 0.0f, 0.0f, bLocal_29);
		UNK_0x6745191B(iParam0[150]->f_108, 0.0f, 0.0f, 0.0f);
	}
	return;
}

void Function_243(var uParam0, bool bParam1) //Position: 0xEB81 / 60289
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (IS_OBJECT_VALID(uParam0[150]->f_84))
	{
		GET_OBJECT_POSITION(bLocal_31, &vVar0);
		if (bParam1)
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = 1;
		}
		iVar4 = 0;
		while (iVar4 <= iVar3)
		{
			if (bParam1)
			{
				iVar6 = 1;
				fVar5 = 0.1f;
			}
			else
			{
				iVar6 = 1;
				fVar5 = 0.01f;
			}
			CREATE_DECAL(iVar6, vVar0, fVar5, 1, 0);
			iVar4++;
		}
	}
	return;
}

void Function_244(int iParam0) //Position: 0xEBE6 / 60390
{
	PRINTSTRING("Do Hit Time Up");
	PRINTNL();
	SET_ACTION_NODE_FOR_ACTOR((*iParam0)[150], "fivefingerfillet/time_loss");
	RELEASE_ACTOR_ANIM_PHASE_LOCK((*iParam0)[150]);
	SET_ANIMATION_OVERRIDE_SCALE((*iParam0)[150], (*iParam0[050] + 112)[iParam0->f_1472]);
	UNK_0x7246F438(bLocal_32);
	DESTROY_OBJECT(bLocal_32);
	Function_189();
	iLocal_1 = 104;
	return;
}

bool Function_245(int iParam0) //Position: 0xEC59 / 60505
{
	return Function_18(*iParam0, 2);
}

bool Function_246(int iParam0) //Position: 0xEC66 / 60518
{
	if (iParam0[150]->f_92 > 11)
	{
		if (iParam0[150]->f_176 + 1 > (*iParam0[050] + 164)[iParam0->f_1472])
		{
			return 1;
		}
	}
	return 0;
}

void Function_247(int iParam0) //Position: 0xEC95 / 60565
{
	if (iParam0[150]->f_92 > 11)
	{
		iParam0[150]->f_176++;
		if (iParam0[150]->f_176 > (*iParam0[050] + 164)[iParam0->f_1472])
		{
			HUD_TIMER_PAUSE();
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR((*iParam0)[150]), "ff_stop_looping", true);
			Function_189();
			iLocal_1 = 11;
		}
		else
		{
			iParam0[150]->f_92 = 1;
			iLocal_60 = 4;
		}
	}
	else
	{
		iLocal_60 = 4;
	}
	return;
}

void Function_248(int iParam0) //Position: 0xED0C / 60684
{
	PRINTSTRING("Supposed to hit - ");
	PRINTINT(bLocal_107);
	PRINTNL();
	SET_ACTION_NODE_FOR_ACTOR((*iParam0)[150], Function_250(iParam0, 0));
	SET_ANIMATION_OVERRIDE_SCALE((*iParam0)[150], 0.0f);
	SAY_SINGLE_LINE_CONTEXT((*iParam0)[050], 266, (*iParam0)[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
	Function_249();
	UNK_0x7246F438(bLocal_32);
	DESTROY_OBJECT(bLocal_32);
	Function_189();
	iLocal_1 = 86;
	iLocal_43 = 2;
	return;
}

void Function_249() //Position: 0xED79 / 60793
{
	var uVar0;
	
	GET_OBJECT_POSITION(bLocal_31, &uVar0);
	AUDIO_MG_FILLET_HIT_FINGER();
	return;
}

var Function_250(var uParam0, bool bParam1) //Position: 0xED8A / 60810
{
	bool bVar0;
	
	if (bParam1)
	{
		bVar0 = (uParam0[150]->f_92 - 1);
	}
	else
	{
		bVar0 = uParam0[150]->f_92;
	}
	switch (bVar0)
	{
		case 0x00000000:
			return "fivefingerfillet/lose/player/s_0/s_0_pst";
			break;
		
		case 0x00000001:
			return "fivefingerfillet/lose/player/0_1/0_1_pst";
			break;
		
		case 0x00000002:
			return "fivefingerfillet/lose/player/1_0/1_0_pst";
			break;
		
		case 0x00000003:
			return "fivefingerfillet/lose/player/0_2/0_2_pst";
			break;
		
		case 0x00000004:
			return "fivefingerfillet/lose/player/2_0/2_0_pst";
			break;
		
		case 0x00000005:
			return "fivefingerfillet/lose/player/0_3/0_3_pst";
			break;
		
		case 0x00000006:
			return "fivefingerfillet/lose/player/3_0/3_0_pst";
			break;
		
		case 0x00000007:
			return "fivefingerfillet/lose/player/0_4/0_4_pst";
			break;
		
		case 0x00000008:
			return "fivefingerfillet/lose/player/4_0/4_0_pst";
			break;
		
		case 0x00000009:
			return "fivefingerfillet/lose/player/0_5/0_5_pst";
			break;
		
		case 0x0000000A:
			return "fivefingerfillet/lose/player/5_0/5_0_pst";
			break;
	}
	return "";
}

bool Function_251() //Position: 0xEFFD / 61437
{
	if (IS_BUTTON_PRESSED(Function_277(), 6, 1, 0) && !bLocal_27 != 6)
	{
		return 1;
	}
	if (IS_BUTTON_PRESSED(Function_277(), 5, 1, 0) && !bLocal_27 != 5)
	{
		return 1;
	}
	if (IS_BUTTON_PRESSED(Function_277(), 4, 1, 0) && !bLocal_27 != 4)
	{
		return 1;
	}
	if (IS_BUTTON_PRESSED(Function_277(), 7, 1, 0) && !bLocal_27 != 7)
	{
		return 1;
	}
	return 0;
}

void Function_252(int iParam0) //Position: 0xF060 / 61536
{
	switch (iParam0[050]->f_124)
	{
		case 0x00000000:
			bLocal_27 = 6;
			break;
		
		case 0x00000001:
			switch ((*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124])
			{
				case 0x00000000:
					bLocal_27 = 6;
					break;
				
				case 0x00000003:
					bLocal_27 = 5;
					break;
				
				case 0x00000002:
					bLocal_27 = 5;
					break;
				
				case 0x00000001:
					bLocal_27 = 5;
					break;
			}
			break;
		
		case 0x00000002:
			switch ((*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124])
			{
				case 0x00000000:
					bLocal_27 = 6;
					break;
				
				case 0x00000003:
					bLocal_27 = 5;
					break;
				
				case 0x00000002:
					bLocal_27 = 4;
					break;
				
				case 0x00000001:
					bLocal_27 = 5;
					break;
			}
			break;
		
		case 0x00000003:
			switch ((*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124])
			{
				case 0x00000000:
					bLocal_27 = 6;
					break;
				
				case 0x00000003:
					bLocal_27 = 5;
					break;
				
				case 0x00000002:
					bLocal_27 = 4;
					break;
				
				case 0x00000001:
					bLocal_27 = 7;
					break;
			}
			break;
	}
	return;
}

void Function_253(int iParam0) //Position: 0xF198 / 61848
{
	PRINTSTRING("Hit Early - Supposed to hit - ");
	PRINTINT(StackVal);
	PRINTNL();
	SET_ACTION_NODE_FOR_ACTOR((*iParam0)[150], Function_250(iParam0, 1));
	SET_ANIMATION_OVERRIDE_SCALE((*iParam0)[150], 0.0f);
	SAY_SINGLE_LINE_CONTEXT((*iParam0)[050], 266, (*iParam0)[150], 0, 0, 0, 4294967295, 4294967295, 0, 1);
	Function_249();
	UNK_0x7246F438(bLocal_32);
	DESTROY_OBJECT(bLocal_32);
	Function_189();
	iLocal_1 = 86;
	iLocal_43 = 2;
	return;
}

void Function_254(int iParam0) //Position: 0xF226 / 61990
{
	if (IS_RMPTFX_FINISHED(bLocal_32) && !IS_OBJECT_VALID(bLocal_32))
	{
		DESTROY_OBJECT(bLocal_32);
		Function_255(iParam0);
	}
	return;
}

void Function_255(int iParam0) //Position: 0xF245 / 62021
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (iParam0[150]->f_92 <= 11)
	{
		Function_257(StackVal, (*iParam0)[150], &vVar0, &vVar3, 0);
		switch (StackVal)
		{
			case 0x00000000:
				bLocal_107 = false;
				bLocal_32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "HitHereParticle", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124]), vVar0);
				UNK_0x6745191B(bLocal_32, vVar3);
				break;
			
			case 0x00000001:
				bLocal_107 = true;
				bLocal_32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "HitHereParticle", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124]), vVar0);
				UNK_0x6745191B(bLocal_32, vVar3);
				break;
			
			case 0x00000002:
				bLocal_107 = 2;
				bLocal_32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "HitHereParticle", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124]), vVar0);
				UNK_0x6745191B(bLocal_32, vVar3);
				break;
			
			case 0x00000003:
				bLocal_107 = 3;
				bLocal_32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "HitHereParticle", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124]), vVar0);
				UNK_0x6745191B(bLocal_32, vVar3);
				break;
			
			case 0x00000004:
				bLocal_107 = 4;
				bLocal_32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "HitHereParticle", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124]), vVar0);
				UNK_0x6745191B(bLocal_32, vVar3);
				break;
			
			case 0x00000005:
				bLocal_107 = 5;
				bLocal_32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "HitHereParticle", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iParam0[150]->f_92]7] + 8)[iParam0[050]->f_124]), vVar0);
				UNK_0x6745191B(bLocal_32, vVar3);
				break;
			}
	}
	return;
}

var Function_256(int iParam0, int iParam1) //Position: 0xF4A7 / 62631
{
	bool bVar0;
	
	switch (iParam0[050]->f_124)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000001:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_sq";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_b";
					}
					break;
				
				case 0x00000002:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_cir";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_b";
					}
					break;
				
				case 0x00000000:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_x";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_a";
					}
					break;
				
				case 0x00000003:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_cir";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_b";
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_cir";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_b";
					}
					break;
				
				case 0x00000002:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_tri";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_y";
					}
					break;
				
				case 0x00000000:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_x";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_a";
					}
					break;
				
				case 0x00000003:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_cir";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_b";
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_sq";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_x";
					}
					break;
				
				case 0x00000002:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_tri";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_y";
					}
					break;
				
				case 0x00000000:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_x";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_a";
					}
					break;
				
				case 0x00000003:
					if (IS_PS3())
					{
						bVar0 = "script_fivefingers_ps3_cir";
					}
					else
					{
						bVar0 = "script_fivefingers_xb_b";
					}
					break;
			}
			break;
		
		case 0x00000000:
			if (IS_PS3())
			{
				bVar0 = "script_fivefingers_ps3_x";
			}
			else
			{
				bVar0 = "script_fivefingers_xb_a";
			}
			break;
	}
	PRINTSTRING(bVar0);
	PRINTNL();
	return bVar0;
}

void Function_257(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF8D2 / 63698
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		switch (bParam3)
		{
			case 0x00000000:
				if (bParam4)
				{
					vVar0 = { 0.1243f, 0.803f, 0.2043f };
					vVar3 = { 0.0f, 315.0f, 0.0f };
				}
				else
				{
					vVar0 = { 0.0864f, 0.803f, 0.1524f };
					vVar3 = { 0.0f, 90.0f, 0.0f };
				}
				break;
			
			case 0x00000001:
				if (bParam4)
				{
					vVar0 = { 0.1494f, 0.803f, 0.1482f };
					vVar3 = { 0.0f, 315.0f, 0.0f };
				}
				else
				{
					vVar0 = { 0.1115f, 0.803f, 0.0963f };
					vVar3 = { 0.0f, 90.0f, 0.0f };
				}
				break;
			
			case 0x00000002:
				if (bParam4)
				{
					vVar0 = { 0.1595f, 0.803f, 0.0821f };
					vVar3 = { 0.0f, 315.0f, 0.0f };
				}
				else
				{
					vVar0 = { 0.1216f, 0.803f, 0.0302f };
					vVar3 = { 0.0f, 125.0f, 0.0f };
				}
				break;
			
			case 0x00000003:
				if (bParam4)
				{
					vVar0 = { 0.1239f, 0.803f, 0.0472f };
					vVar3 = { 0.0f, 315.0f, 0.0f };
				}
				else
				{
					vVar0 = { 0.086f, 0.803f, -0.0047f };
					vVar3 = { 0.0f, 140.0f, 0.0f };
				}
				break;
			
			case 0x00000004:
				if (bParam4)
				{
					vVar0 = { 0.0773f, 0.803f, 0.0404f };
					vVar3 = { 0.0f, 315.0f, 0.0f };
				}
				else
				{
					vVar0 = { 0.0393f, 0.803f, -0.0115f };
					vVar3 = { 0.0f, 175.0f, 0.0f };
				}
				break;
			
			case 0x00000005:
				if (bParam4)
				{
					vVar0 = { 0.0265f, 0.803f, 0.0558f };
					vVar3 = { 0.0f, 315.0f, 0.0f };
				}
				else
				{
					vVar0 = { -0.0114f, 0.803f, 0.0039f };
					vVar3 = { 0.0f, 185.0f, 0.0f };
				}
				break;
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

void Function_258(int iParam0) //Position: 0xFB26 / 64294
{
	Function_259();
	SET_ACTOR_ANIM_PHASE_LOCK((*iParam0)[150], (*iParam0 + 468)[(*iParam0 + 1424)[iParam0[150]->f_92]7]);
	iParam0[150]->f_92++;
	if (IS_OBJECT_VALID(bLocal_32))
	{
		UNK_0x7246F438(bLocal_32);
		DESTROY_OBJECT(bLocal_32);
	}
	SET_ANIMATION_OVERRIDE_SCALE((*iParam0)[150], ((*iParam0[050] + 112)[iParam0->f_1472] * (*iParam0[050] + 152)[iParam0->f_1472]));
	if (iParam0[150]->f_92 > 11)
	{
		if (iParam0[150]->f_176 + 1 > (*iParam0[050] + 164)[iParam0->f_1472])
		{
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR((*iParam0)[150]), "ff_stop_looping", true);
		}
	}
	return;
}

void Function_259() //Position: 0xFBD9 / 64473
{
	var uVar0;
	
	GET_OBJECT_POSITION(bLocal_31, &uVar0);
	AUDIO_MG_FILLET_HIT_TABLE();
	return;
}

void Function_260(bool bParam0) //Position: 0xFBEA / 64490
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	GET_POSITION(bParam0, &vVar0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	GET_ACTOR_AXIS(bParam0, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.6f, 0.6f, 0.6f), StackVal, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0.65f, 0.65f, 0.65f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 2.4f);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.18f, 0.18f, 0.18f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(0.2f, 0.2f, 0.2f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 0.9f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_42) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_42);
	}
	SET_CAMERA_POSITION(bLocal_42, vVar9);
	SET_CAMERA_TARGET_POSITION(bLocal_42, vVar12, 0);
	SET_CAMERA_FOV(bLocal_42, 43.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_42, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_42, 0, 0.5f, 0.5f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_261(int iParam0) //Position: 0xFCC7 / 64711
{
	if (Function_262(iParam0))
	{
		if (!Function_245(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_81(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_262(int iParam0) //Position: 0xFD86 / 64902
{
	return Function_18(*iParam0, 1);
}

void Function_263(int iParam0, float fParam1) //Position: 0xFD93 / 64915
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_81(iParam0, 1);
	Function_42(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_264(bool bParam0) //Position: 0xFDB4 / 64948
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	GET_POSITION(bParam0, &vVar0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	GET_ACTOR_AXIS(bParam0, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.41f, 0.41f, 0.41f), StackVal, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0.47f, 0.47f, 0.47f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1.46f);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.02f, 1.02f, 1.02f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(1.53f, 1.53f, 1.53f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + -0.37f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_42) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_42);
	}
	SET_CAMERA_POSITION(bLocal_42, vVar9);
	SET_CAMERA_TARGET_POSITION(bLocal_42, vVar12, 0);
	SET_CAMERA_FOV(bLocal_42, 43.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(bLocal_42, 0.1f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_42, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_42, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_265(int iParam0) //Position: 0xFE93 / 65171
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		switch (iVar0)
		{
			case 0x00000000:
				iVar7 = 0;
				break;
			
			case 0x00000001:
				iVar7 = 1;
				break;
			
			case 0x00000002:
				iVar7 = 3;
				break;
			
			case 0x00000003:
				iVar7 = 5;
				break;
			
			case 0x00000004:
				iVar7 = 7;
				break;
			
			case 0x00000005:
				iVar7 = 9;
				break;
		}
		Function_257(StackVal, (*iParam0)[050], &vVar1, &vVar4, 1);
		switch (StackVal)
		{
			case 0x00000000:
				bLocal_33[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "AIHitHereParticles_0", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iVar7]7] + 8)[iParam0[050]->f_124]), vVar1);
				UNK_0x6745191B(bLocal_33[iVar0], vVar4);
				break;
			
			case 0x00000001:
				bLocal_33[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "AIHitHereParticles_1", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iVar7]7] + 8)[iParam0[050]->f_124]), vVar1);
				UNK_0x6745191B(bLocal_33[iVar0], vVar4);
				break;
			
			case 0x00000002:
				bLocal_33[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "AIHitHereParticles_2", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iVar7]7] + 8)[iParam0[050]->f_124]), vVar1);
				UNK_0x6745191B(bLocal_33[iVar0], vVar4);
				break;
			
			case 0x00000003:
				bLocal_33[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "AIHitHereParticles_3", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iVar7]7] + 8)[iParam0[050]->f_124]), vVar1);
				UNK_0x6745191B(bLocal_33[iVar0], vVar4);
				break;
			
			case 0x00000004:
				bLocal_33[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "AIHitHereParticles_4", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iVar7]7] + 8)[iParam0[050]->f_124]), vVar1);
				UNK_0x6745191B(bLocal_33[iVar0], vVar4);
				break;
			
			case 0x00000005:
				bLocal_33[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_29, "AIHitHereParticles_5", Function_256(iParam0, (*iParam0 + 468[(*iParam0 + 1424)[iVar7]7] + 8)[iParam0[050]->f_124]), vVar1);
				UNK_0x6745191B(bLocal_33[iVar0], vVar4);
				break;
		}
		iVar0++;
	}
	return;
}

void Function_266() //Position: 0x10164 / 65892
{
	struct<25> Var0;
	
	Function_240(GET_PLAYER_ACTOR(0));
	*(&Var0 + 12) = { StackVal, StackVal, Function_240(GET_PLAYER_ACTOR(0)) };
	Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
	Var0 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0))) };
	Var0.f_24 = 0;
	if (IS_OBJECT_VALID(bLocal_41))
	{
		DESTROY_OBJECT(bLocal_41);
	}
	bLocal_41 = Function_267(bLocal_29, 0, &Var0, 1, 0, 0);
	return;
}

bool Function_267(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x101A4 / 65956
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Finger_Opponent", 1, 1);
	}
	Function_268(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_268(var uParam0, int iParam1) //Position: 0x1022A / 66090
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_269(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_269(var uParam0, bool bParam1) //Position: 0x10250 / 66128
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 26.00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.513374f, 1.189849f, 0.195869f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.034489f, 1.173827f, -0.23905f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

int Function_270(bool bParam0, bool bParam1) //Position: 0x10340 / 66368
{
	bool bVar0;
	
	bVar0 = Function_71(0);
	if ((Function_71(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_121(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	return 1;
}

int Function_271(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x103D0 / 66512
{
	if (!Function_274(iParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_273(iParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_272(iParam0, iParam2);
}

int Function_272(var uParam0, int iParam1) //Position: 0x1040A / 66570
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x10418 / 66584
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_274(var uParam0, int iParam1) //Position: 0x10452 / 66642
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_275(int iParam0) //Position: 0x10460 / 66656
{
	Function_263(iParam0, 0.0f);
	return;
}

float Function_276(int iParam0) //Position: 0x1046C / 66668
{
	if (Function_262(iParam0))
	{
		if (Function_245(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

int Function_277() //Position: 0x10534 / 66868
{
	bool bVar0;
	
	bVar0 = Function_192();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_278() //Position: 0x1054E / 66894
{
	Function_271(5, 2, "5Fillet_Quit", 1, 0, 0, 0, 0);
	if (IS_BUTTON_RELEASED(Function_277(), 5, 1, true))
	{
		if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
		{
			UI_ENTER("Fivefingerfillet_Quit_Confirmation_Popup");
		}
		PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
		iLocal_19 = iLocal_1;
		iLocal_20 = iLocal_0;
		iLocal_1 = 22;
		iLocal_0 = 1;
	}
	return;
}

void Function_279(var uParam0, int iParam1) //Position: 0x105F6 / 67062
{
	iLocal_60 = 1;
	iLocal_43 = 4294967295;
	bLocal_107 = 99;
	SET_ANIMATION_OVERRIDE_SCALE((*uParam0)[iParam150], (*uParam0[050] + 112)[uParam0->f_1472]);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR((*uParam0)[iParam150]), "ff_early");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR((*uParam0)[iParam150]), "ff_late");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR((*uParam0)[iParam150]), "ff_stop_looping");
	uParam0[iParam150]->f_92 = 0;
	uParam0[iParam150]->f_176 = 0;
	return;
}

void Function_280(bool bParam0) //Position: 0x1067D / 67197
{
	struct<25> Var0;
	
	Function_240(bParam0);
	*(&Var0 + 12) = { StackVal, StackVal, Function_240(bParam0) };
	Function_239(GET_OBJECT_FROM_ACTOR(bParam0));
	Var0 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(bParam0)) };
	Var0.f_24 = 0;
	bLocal_41 = Function_281(bLocal_29, 0, &Var0, 1, 0, 0);
	return;
}

bool Function_281(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x106AC / 67244
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Fillet_Bet", 1, 1);
	}
	Function_282(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_282(var uParam0, int iParam1) //Position: 0x1072D / 67373
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_283(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_283(var uParam0, bool bParam1) //Position: 0x10753 / 67411
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 26.00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.883446f, 1.198896f, -0.840721f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.121666f, 1.013283f, -0.073273f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 16.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

int Function_284() //Position: 0x1083B / 67643
{
	return Function_71(0);
}

var Function_285(int iParam0, int iParam1) //Position: 0x10845 / 67653
{
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam0 < iParam1[050]->f_180)
	{
		iParam0 = iParam1[050]->f_180;
	}
	if (iParam1[050]->f_184 == 4294967295)
	{
		if (iParam0 > Function_284())
		{
			iParam0 = Function_284();
		}
	}
	else if (iParam0 > iParam1[050]->f_184)
	{
		iParam0 = iParam1[050]->f_184;
	}
	if (iParam0 > Function_284())
	{
		iParam0 = Function_284();
	}
	return iParam0;
}

void Function_286(bool bParam0, var uParam1, bool bParam2) //Position: 0x108A8 / 67752
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 == Function_192())
		{
			vVar0 = { 0.3968f, 1.0426f, -0.007f };
			vVar3 = { -166.0f, -20.0f, 8.0f };
		}
		else
		{
			vVar0 = { 0.4602f, 1.0426f, 0.1558f };
			vVar3 = { -166.0f, -20.0f, 8.0f };
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_287() //Position: 0x10925 / 67877
{
	struct<25> Var0;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_292())
			{
				Function_240(GET_PLAYER_ACTOR(0));
				*(&Var0 + 12) = { StackVal, StackVal, Function_240(GET_PLAYER_ACTOR(0)) };
				Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var0 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0))) };
				Var0.f_24 = 0;
				bLocal_41 = Function_288(bLocal_29, 0, &Var0, 1, 0, 0);
				SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_41), "minigame");
				Function_275(&iLocal_44);
				if (!IS_OBJECT_VALID(Local_113[150].f_84))
				{
					Local_113[150].f_84 = CREATE_PROP_IN_LAYOUT(bLocal_29, Function_58(), "$/fragments/melee_knife05x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					Function_286(Local_113[150], &vVar7, &vVar10);
					SET_OBJECT_POSITION(Local_113[150].f_84, vVar7);
					SET_OBJECT_ORIENTATION(Local_113[150].f_84, vVar10);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(Local_113[150].f_84, 0);
					SET_PROP_AI_OBSTACLE_ENABLED(Local_113[150].f_84, 0);
					bLocal_31 = CREATE_OBJECT_LOCATOR(Local_113[150].f_84, Function_58());
					OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bLocal_31, Local_113[150].f_84, "tip", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				}
				if (!IS_OBJECT_VALID(Local_113[050].f_84))
				{
					Local_113[050].f_84 = CREATE_PROP_IN_LAYOUT(bLocal_29, Function_58(), "$/fragments/melee_knife05x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					Function_286(Local_113[050], &vVar7, &vVar10);
					SET_OBJECT_POSITION(Local_113[050].f_84, vVar7);
					SET_OBJECT_ORIENTATION(Local_113[050].f_84, vVar10);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(Local_113[050].f_84, 0);
					SET_PROP_AI_OBSTACLE_ENABLED(Local_113[050].f_84, 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(Local_113[050], "fivefingerfillet/intro");
				SET_ACTION_NODE_FOR_ACTOR(Local_113[150], "fivefingerfillet/intro");
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_275(&iLocal_44);
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(bLocal_41) != 1 || IS_BUTTON_PRESSED(Function_277(), 6, 1, 0))
				{
					END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_41);
					DESTROY_OBJECT(bLocal_41);
					Function_280(Local_113[150]);
					Function_190(0);
					iLocal_0 = 1;
					iLocal_1 = 35;
				}
				else
				{
					Function_278();
					Function_271(0, 1, "5Fillet_Skip", 1, 0, 0, 0, 0);
				}
			}
			break;
	}
	return;
}

var Function_288(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x10B72 / 68466
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Finger_Intro", 2, 1);
	}
	Function_289(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_289(var uParam0, int iParam1) //Position: 0x10BF5 / 68597
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_291(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_290(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 1);
	return;
}

void Function_290(var uParam0, bool bParam1) //Position: 0x10C37 / 68663
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 26.00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.883446f, 1.198896f, -0.840721f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.121666f, 1.013283f, -0.073273f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 16.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_291(var uParam0, bool bParam1) //Position: 0x10D1F / 68895
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -4.821865f, 1.261886f, -0.822046f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.088856f, 0.940627f, -0.596203f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 7.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 2);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

bool Function_292() //Position: 0x10E0B / 69131
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_9)
	{
		case 0x000003E8:
			iLocal_9 = 1005;
			if (IS_VOLUME_VALID(bLocal_25))
			{
				if (IS_OBJECTSET_VALID(bLocal_58))
				{
					Function_297(bLocal_58);
				}
				else
				{
					bLocal_58 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), bLocal_29, 15, 1);
				}
				iLocal_59 = LOCATE_ACTORS_IN_VOLUME(bLocal_25, bLocal_58, 0, 1);
				bVar0 = false;
				while (bVar0 <= iLocal_59)
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_58));
					if (!Function_296(bVar1))
					{
						if (((IS_ACTOR_HOGTIED(bVar1) || IS_ACTOR_CRIPPLED(bVar1, 5)) || IS_ACTOR_VEHICLE(bVar1)) || IS_ACTOR_HORSE(bVar1))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_9 = 1004;
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(bLocal_25))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_25);
					if (IS_OBJECTSET_VALID(bLocal_58))
					{
						Function_297(bLocal_58);
					}
					else
					{
						bLocal_58 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), bLocal_29, 15, 1);
					}
					iLocal_59 = LOCATE_ACTORS_IN_VOLUME(bLocal_25, bLocal_58, 0, 1);
					bVar0 = false;
					while (bVar0 <= iLocal_59)
					{
						bVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_58));
						if (!Function_296(bVar1))
						{
							if (((IS_ACTOR_HOGTIED(bVar1) || IS_ACTOR_CRIPPLED(bVar1, 5)) || IS_ACTOR_VEHICLE(bVar1)) || IS_ACTOR_HORSE(bVar1))
							{
								DESTROY_ACTOR(bVar1);
							}
						}
						bVar0++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_9 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (IS_ACTOR_VALID((*&Local_61 + 4)[0]))
			{
				Function_233((*&Local_61 + 4)[0], &Local_113, 0, GET_ACTOR_ENUM_STRING((*&Local_61 + 4)[0]), (4 - Local_61.f_28), 0);
			}
			if (IS_ACTOR_VALID(Local_61.f_24))
			{
				Function_233(Local_61.f_24, &Local_113, 1, GET_ACTOR_ENUM_STRING(Local_61.f_24), 4294967295, 0);
			}
			SET_DRAW_ACTOR((*&Local_61 + 4)[0], 0);
			SAY_SINGLE_LINE_CONTEXT(Local_113[150], 464, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			bVar0 = false;
			while (bVar0 <= 2)
			{
				Function_295(GET_GRINGO_FROM_OBJECT(StackVal));
				bVar0++;
			}
			Function_294();
			Function_293(Function_192());
			iLocal_9 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_192(), "fivefingerfillet/Idle"))
			{
				SET_DRAW_ACTOR((*&Local_61 + 4)[0], 1);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_293(bool bParam0) //Position: 0x1101A / 69658
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

void Function_294() //Position: 0x1103F / 69695
{
	int iVar0;
	
	Function_221(4, 0);
	iVar0 = 0;
	while (iVar0 <= Local_61.f_28)
	{
		if (IS_ACTOR_VALID((*&Local_61 + 4)[iVar0]))
		{
			if (ACTOR_HAS_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 1, false);
			}
			if (ACTOR_HAS_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 2))
			{
				ACTOR_ENABLE_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 2, false);
			}
			if (ACTOR_HAS_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 3))
			{
				ACTOR_ENABLE_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 3, true);
			}
			if (ACTOR_HAS_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 4))
			{
				ACTOR_ENABLE_VARIABLE_MESH((*&Local_61 + 4)[iVar0], 4, true);
			}
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_61 + 4)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_295(bool bParam0) //Position: 0x110E8 / 69864
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
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
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			bVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar4, bParam0);
			if (IS_PHYSINST_VALID(bVar5))
			{
				HIDE_PHYSINST(bVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	return;
}

bool Function_296(bool bParam0) //Position: 0x111D0 / 70096
{
	int iVar0;
	
	if (bParam0 == GET_PLAYER_ACTOR(0))
	{
		return 1;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_61 + 4)[iVar0]))
		{
			if (bParam0 == (*&Local_61 + 4)[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_297(bool bParam0) //Position: 0x11214 / 70164
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

void Function_298(int iParam0) //Position: 0x1124C / 70220
{
	iParam0->f_432 = 0;
	Function_299(iParam0 + 404);
	iParam0->f_440 = 0.5f;
	iParam0->f_460 = 1;
	iParam0->f_1472 = 0;
	(*iParam0 + 468)[07] = 0.95f;
	(iParam0 + 468[07])->f_4 = 0;
	(*iParam0 + 468[07] + 8)[0] = 0;
	(*iParam0 + 468[07] + 8)[1] = 0;
	(*iParam0 + 468[07] + 8)[2] = 0;
	(*iParam0 + 468[07] + 8)[3] = 0;
	(*iParam0 + 468)[27] = 0.09434f;
	(iParam0 + 468[27])->f_4 = 1;
	(*iParam0 + 468[27] + 8)[0] = 0;
	(*iParam0 + 468[27] + 8)[1] = 3;
	(*iParam0 + 468[27] + 8)[2] = 3;
	(*iParam0 + 468[27] + 8)[3] = 3;
	(*iParam0 + 468)[47] = 0.194969f;
	(iParam0 + 468[47])->f_4 = 0;
	(*iParam0 + 468[47] + 8)[0] = 0;
	(*iParam0 + 468[47] + 8)[1] = 0;
	(*iParam0 + 468[47] + 8)[2] = 0;
	(*iParam0 + 468[47] + 8)[3] = 0;
	(*iParam0 + 468)[87] = 0.295597f;
	(iParam0 + 468[87])->f_4 = 2;
	(*iParam0 + 468[87] + 8)[0] = 0;
	(*iParam0 + 468[87] + 8)[1] = 3;
	(*iParam0 + 468[87] + 8)[2] = 2;
	(*iParam0 + 468[87] + 8)[3] = 2;
	(*iParam0 + 468)[127] = 0.396226f;
	(iParam0 + 468[127])->f_4 = 0;
	(*iParam0 + 468[127] + 8)[0] = 0;
	(*iParam0 + 468[127] + 8)[1] = 0;
	(*iParam0 + 468[127] + 8)[2] = 0;
	(*iParam0 + 468[127] + 8)[3] = 0;
	(*iParam0 + 468)[177] = 0.496855f;
	(iParam0 + 468[177])->f_4 = 3;
	(*iParam0 + 468[177] + 8)[0] = 0;
	(*iParam0 + 468[177] + 8)[1] = 3;
	(*iParam0 + 468[177] + 8)[2] = 3;
	(*iParam0 + 468[177] + 8)[3] = 1;
	(*iParam0 + 468)[227] = 0.597484f;
	(iParam0 + 468[227])->f_4 = 0;
	(*iParam0 + 468[227] + 8)[0] = 0;
	(*iParam0 + 468[227] + 8)[1] = 0;
	(*iParam0 + 468[227] + 8)[2] = 0;
	(*iParam0 + 468[227] + 8)[3] = 0;
	(*iParam0 + 468)[257] = 0.698113f;
	(iParam0 + 468[257])->f_4 = 4;
	(*iParam0 + 468[257] + 8)[0] = 0;
	(*iParam0 + 468[257] + 8)[1] = 3;
	(*iParam0 + 468[257] + 8)[2] = 2;
	(*iParam0 + 468[257] + 8)[3] = 3;
	(*iParam0 + 468)[297] = 0.798742f;
	(iParam0 + 468[297])->f_4 = 0;
	(*iParam0 + 468[297] + 8)[0] = 0;
	(*iParam0 + 468[297] + 8)[1] = 0;
	(*iParam0 + 468[297] + 8)[2] = 0;
	(*iParam0 + 468[297] + 8)[3] = 0;
	(*iParam0 + 468)[317] = 0.899371f;
	(iParam0 + 468[317])->f_4 = 5;
	(*iParam0 + 468[317] + 8)[0] = 0;
	(*iParam0 + 468[317] + 8)[1] = 3;
	(*iParam0 + 468[317] + 8)[2] = 3;
	(*iParam0 + 468[317] + 8)[3] = 2;
	(*iParam0 + 468)[337] = 0.995f;
	(iParam0 + 468[337])->f_4 = 0;
	(*iParam0 + 468[337] + 8)[0] = 0;
	(*iParam0 + 468[337] + 8)[1] = 0;
	(*iParam0 + 468[337] + 8)[2] = 0;
	(*iParam0 + 468[337] + 8)[3] = 0;
	(*iParam0 + 1424)[0] = 0;
	(*iParam0 + 1424)[1] = 2;
	(*iParam0 + 1424)[2] = 4;
	(*iParam0 + 1424)[3] = 8;
	(*iParam0 + 1424)[4] = 12;
	(*iParam0 + 1424)[5] = 17;
	(*iParam0 + 1424)[6] = 22;
	(*iParam0 + 1424)[7] = 25;
	(*iParam0 + 1424)[8] = 29;
	(*iParam0 + 1424)[9] = 31;
	(*iParam0 + 1424)[10] = 33;
	return;
}

void Function_299(var uParam0) //Position: 0x11681 / 71297
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		(*uParam0)[iVar03] = 0;
		switch (iVar0)
		{
			case 0x00000000:
				vVar1 = { StackVal, StackVal, *(&Local_61 + 156[03]) };
				uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar1, 1.0f, 0));
				while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
				{
					uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar1, 1.0f, 0));
					WAIT(false);
				}
				break;
			
			case 0x00000001:
				vVar1 = { StackVal, StackVal, *(&Local_61 + 156[13]) };
				uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_FiveFingerFillet", &vVar1, 1.0f, 0));
				while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
				{
					uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_FiveFingerFillet", &vVar1, 1.0f, 0));
					WAIT(false);
				}
				break;
			
			default:
				LOG_ERROR("Looking for more chairs then we have flags");
				break;
		}
		uParam0[iVar03]->f_4 = 4294967295;
		iVar0++;
	}
	return;
}

void Function_300() //Position: 0x11893 / 71827
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_301() //Position: 0x1189F / 71839
{
	bool bVar0;
	bool bVar1;
	
	AUDIO_MG_FILLET_START(*(&Local_61 + 156[03]));
	Function_188();
	UI_EXIT("Hands");
	UI_EXIT("Scores");
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(9);
	Function_318(1);
	Function_172(1);
	Function_172(2);
	Function_316();
	bLocal_29 = CREATE_LAYOUT(Function_58());
	Function_315();
	Function_306();
	Function_305(&iLocal_44);
	Function_305(&iLocal_47);
	Function_305(&iLocal_110);
	Function_305(&iLocal_22);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	iLocal_0 = 99;
	bLocal_25 = CREATE_VOLUME_IN_LAYOUT(bLocal_29, "Poker_StayOutvol", 2, *(&Local_61 + 156[03]), 0.0f, 0.0f, 0.0f, 3.75f, 4.0f, 3.75f);
	bVar0 = false;
	while (StackVal <= bVar0)
	{
		if (IS_ACTOR_VALID((*&Local_61 + 4)[bVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_61 + 4)[bVar0], 1);
			REFERENCE_ACTOR((*&Local_61 + 4)[bVar0]);
		}
		bVar0++;
	}
	bLocal_58 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), bLocal_29, 15, 1);
	iLocal_59 = LOCATE_ACTORS_IN_VOLUME(bLocal_25, bLocal_58, 0, 1);
	PRINTSTRING("There are ");
	PRINTINT(iLocal_59);
	PRINTSTRING(" actors in the way");
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= bLocal_59)
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_58));
		if (!Function_296(bVar1))
		{
			AI_SET_NAV_ACTOR_WIDTH(bVar1, 0.5f);
			TASK_CLEAR(bVar1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, bLocal_25, 4, 1);
		}
		bVar0++;
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_25);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_25);
	bLocal_42 = CREATE_CAMERA_IN_LAYOUT(bLocal_29, "FiveFingerFilletCamera", 2);
	ALLOW_TUMBLEWEEDS(0);
	CLEAR_TUMBLEWEEDS();
	SET_PLAYER_BLOOD_FADE_RATE(1000.0f);
	Function_303(&uLocal_17);
	if (Function_225(4, 8))
	{
		Function_302(&uLocal_17);
	}
	return;
}

void Function_302(int iParam0) //Position: 0x11A4F / 72271
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_303(int iParam0) //Position: 0x11A6E / 72302
{
	Function_304(iParam0);
	return;
}

void Function_304(int iParam0) //Position: 0x11A79 / 72313
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_305(var uParam0) //Position: 0x11A98 / 72344
{
	if (!Function_262(uParam0))
	{
		Function_263(uParam0, 0.0f);
	}
	return;
}

void Function_306() //Position: 0x11AAD / 72365
{
	Function_313(&bLocal_482, "$/fragments/melee_knife05x", 0, 1);
	Function_313(&bLocal_482, "$/fragments/melee_knife02x", 0, 1);
	Function_313(&bLocal_482, "FiveFingerFillet", 1, 0);
	Function_313(&bLocal_482, "fake_FiveFingerFillet", 1, 0);
	Function_313(&bLocal_482, "nminigames", 10, 0);
	while (!Function_307(&bLocal_482) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	UI_PUSH("Minigame");
	return;
}

bool Function_307(int iParam0) //Position: 0x11B76 / 72566
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_312();
	iVar1 = 0;
	if (!Function_183(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_311(iParam0[iVar03], 8);
		}
		else if (Function_310())
		{
			iVar1 = 1;
			Function_311(iParam0[iVar03], 8);
		}
		Function_311(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_183(iParam0[iVar03], 4))
		{
			if (!Function_183(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_183(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_183(iParam0[03], 8) || iVar1));
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
				Function_311(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_183(iParam0[iVar03], 4))
		{
			if (!Function_183(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_311(iParam0[iVar03], 2);
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
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_311(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_311(iParam0[iVar03], 2);
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
	Function_308();
	return 1;
}

void Function_308() //Position: 0x11EF1 / 73457
{
	if (!Function_309(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_309(int iParam0) //Position: 0x11F31 / 73521
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_310() //Position: 0x11F4D / 73549
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

void Function_311(var uParam0, int iParam1) //Position: 0x11F78 / 73592
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_312() //Position: 0x11F89 / 73609
{
	if (!Function_309(128))
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

var Function_313(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x11FCB / 73675
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_314(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_311(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_314(var uParam0, int iParam1, int iParam2) //Position: 0x12003 / 73731
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_183(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_311(uParam0[iVar03], 4);
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

void Function_315() //Position: 0x120C7 / 73927
{
	return;
}

void Function_316() //Position: 0x120CD / 73933
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_3();
	Function_317();
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

void Function_317() //Position: 0x120FD / 73981
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_318(int iParam0) //Position: 0x12111 / 74001
{
	Function_319(&Global_28842, iParam0);
	return;
}

void Function_319(var uParam0, var uParam1) //Position: 0x1211F / 74015
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

