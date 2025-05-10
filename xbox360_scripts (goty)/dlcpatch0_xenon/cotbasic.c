//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 519
//Natives Count : 193
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
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_162(524288, 0);
	ZOMBIE_DLC_LOAD_ASSETS();
	ENABLE_WEATHER_SPHERE(2, 0);
	UI_EXIT("MPSplash");
	SET_TIME_OF_DAY(Global_63402);
	SET_TIME_ACCELERATION(0.0f);
	Function_160(13, 0);
	Global_83591 = 1;
	if (Function_149())
	{
		Local_39.f_1892 = 180.0f;
		*(&Local_39 + 1896) = { -1802.674f, 22.971f, 2825.056f };
		if (Function_148(Global_76887))
		{
			switch (GET_LOCAL_SLOT())
			{
				case 0x00000000:
					Function_146(845);
					break;
				
				case 0x00000001:
					Function_146(846);
					break;
				
				case 0x00000002:
					Function_146(849);
					break;
				
				case 0x00000003:
					Function_146(851);
					break;
				}
		}
		Function_111(3225419776, 0, 0);
		Function_109(1);
		if (Function_108(Global_79962, 128))
		{
			Function_106(2, 7400, 1200);
			Function_106(1, 6200, 900);
			Function_106(0, 5400, 600);
			Function_104(2, 9.0f, 500);
			Function_104(1, 12.0f, 250);
			Function_104(0, 30.0f, 100);
		}
		else
		{
			Function_106(2, 25000, 1000);
			Function_106(1, 10000, 500);
			Function_106(0, 5000, 200);
			Function_104(2, 20.0f, 1000);
			Function_104(1, 10.0f, 500);
			Function_104(0, 5.0f, 200);
		}
		AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "nIDLE_DARK", 0f, 4294967295, 4294967295, 3212836864, 0);
		while (!IS_EXITFLAG_SET())
		{
			if (Function_103() && Function_102(4))
			{
				Function_104(2, 20.0f, 1000);
				Function_104(1, 10.0f, 500);
				Function_104(0, 5.0f, 200);
			}
			if (Function_101(524288) && !UI_ISACTIVE("NotorietyMeter"))
			{
				Function_162(524288, 0);
				Function_97();
			}
			if (Function_96(1, 1))
			{
				Function_73(12895);
			}
			else
			{
				Function_72();
				Function_70();
				Function_22(8829, 8602, 5946);
			}
			WAIT(0);
		}
		Function_9();
		if (IS_ACTOR_VALID(Function_8()))
		{
			DESTROY_ACTOR(Function_8());
		}
	}
	Function_160(1, 0);
	Function_3(0, 60, 0);
	Function_1();
	UI_EXIT("MPSplash");
	ZOMBIE_DLC_UNLOAD_ASSETS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x237 / 567
{
	struct<33> Var0;
	
	Var0 = "NONE";
	Var0.f_4 = "nammo_none";
	Var0.f_8 = "nammo_none";
	Var0.f_12 = 0.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 1;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 0;
	Var0.f_32 = 0;
	Function_2(0, &Var0);
	Var0 = "TURRETBULLET";
	Var0.f_4 = "ammo_turretbullet";
	Var0.f_8 = "ammo_turretbullet";
	Var0.f_12 = 50.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 1;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 0;
	Var0.f_32 = 0;
	Function_2(1, &Var0);
	Var0 = "CANNONBALL";
	Var0.f_4 = "ammo_cannonball";
	Var0.f_8 = "ammo_cannonball";
	Var0.f_12 = 50.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 1;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 0;
	Var0.f_32 = 0;
	Function_2(2, &Var0);
	Var0 = "KNIFE";
	Var0.f_4 = "ammo_knife";
	Var0.f_8 = "ammo_knife";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(3, &Var0);
	Var0 = "FIREBOTTLE";
	Var0.f_4 = "ammo_fireBottle";
	Var0.f_8 = "ammo_fireBottle";
	Var0.f_12 = 10.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(4, &Var0);
	Var0 = "DYNAMITE";
	Var0.f_4 = "ammo_dynamite";
	Var0.f_8 = "ammo_dynamite";
	Var0.f_12 = 8.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(5, &Var0);
	Var0 = "PISTOL";
	Var0.f_4 = "ammo_pistol";
	Var0.f_8 = "ammo_pistol";
	Var0.f_12 = 100.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 7;
	Var0.f_32 = 8;
	Function_2(6, &Var0);
	Var0 = "REVOLVER";
	Var0.f_4 = "ammo_revolver";
	Var0.f_8 = "ammo_revolver";
	Var0.f_12 = 100.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 6;
	Var0.f_32 = 6;
	Function_2(7, &Var0);
	Var0 = "REPEATER";
	Var0.f_4 = "ammo_repeater";
	Var0.f_8 = "ammo_repeater";
	Var0.f_12 = 100.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 6;
	Var0.f_32 = 10;
	Function_2(8, &Var0);
	Var0 = "RIFLE";
	Var0.f_4 = "ammo_rifle";
	Var0.f_8 = "ammo_rifle";
	Var0.f_12 = 100.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 5;
	Var0.f_32 = 6;
	Function_2(9, &Var0);
	Var0 = "SHOTGUN";
	Var0.f_4 = "ammo_shotgun";
	Var0.f_8 = "ammo_shotgun";
	Var0.f_12 = 100.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 4;
	Var0.f_32 = 6;
	Function_2(10, &Var0);
	Var0 = "SNIPERRIFLE";
	Var0.f_4 = "ammo_sniperrifle";
	Var0.f_8 = "ammo_sniperrifle";
	Var0.f_12 = 50.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 3;
	Var0.f_32 = 5;
	Function_2(11, &Var0);
	Var0 = "TOMAHAWK";
	Var0.f_4 = "ammo_tomahawk";
	Var0.f_8 = "ammo_tomahawk";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(12, &Var0);
	Var0 = "ANTITANK";
	Var0.f_4 = "dlc_1";
	Var0.f_8 = "dlc_1";
	Var0.f_12 = 30.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(13, &Var0);
	Var0 = "TORCH";
	Var0.f_4 = "ammo_tomahawk";
	Var0.f_8 = "ammo_torch";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(14, &Var0);
	Var0 = "BLUNDERBUSS";
	Var0.f_4 = "ammo_shotgun";
	Var0.f_8 = "ammo_blunderbuss";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(15, &Var0);
	Var0 = "DLC_4";
	Var0.f_4 = "dlc_4";
	Var0.f_8 = "dlc_4";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_2(16, &Var0);
	return;
}

void Function_2(int iParam0, int iParam1) //Position: 0x88B / 2187
{
	INIT_NATIVE_WEAPONENUM_AMMO(iParam0, iParam1);
	return;
}

void Function_3(int iParam0, int iParam1, int iParam2) //Position: 0x898 / 2200
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
		Function_4(Global_16524, bVar0, 1);
	}
	return;
}

void Function_4(int iParam0, bool bParam1, bool bParam2) //Position: 0x97E / 2430
{
	int iVar0;
	
	Function_7(iParam0);
	Function_6(bParam1);
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
	Function_5();
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

void Function_5() //Position: 0xAF7 / 2807
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_6(bool bParam0) //Position: 0xB03 / 2819
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

void Function_7(int iParam0) //Position: 0xB49 / 2889
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

var Function_8() //Position: 0xB8F / 2959
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_9() //Position: 0xBA4 / 2980
{
	Function_18(&Local_39 + 1828);
	Function_18(&Local_39 + 1812);
	if (IS_LAYOUTREF_VALID(Local_39.f_1808))
	{
		DESTROY_LAYOUT(Local_39.f_1808);
	}
	Function_15();
	Function_10();
	return;
}

void Function_10() //Position: 0xBD3 / 3027
{
	Function_11();
	return;
}

void Function_11() //Position: 0xBDC / 3036
{
	if (Function_102(4194304))
	{
		Function_12(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_102(8388608))
	{
		Function_12(8388608, 0, 1);
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

void Function_12(int iParam0, bool bParam1, int iParam2) //Position: 0xCE5 / 3301
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_14(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xD0D / 3341
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xD20 / 3360
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_15() //Position: 0xD2F / 3375
{
	bool bVar0;
	
	bVar0 = Function_16(0);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_16(bool bParam0) //Position: 0xD48 / 3400
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_17(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && bParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_17(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_17() //Position: 0xD95 / 3477
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_18(int iParam0) //Position: 0xDC4 / 3524
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_19(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0xDEA / 3562
{
	if (Function_21(uParam0[iParam13], 4))
	{
		if (Function_21(uParam0[iParam13], 1))
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
			Function_20(uParam0[iParam13], 1);
			Function_20(uParam0[iParam13], 2);
			Function_20(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0xF18 / 3864
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_21(var uParam0, int iParam1) //Position: 0xF32 / 3890
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22(int iParam0, int iParam1, int iParam2) //Position: 0xF4F / 3919
{
	if (Function_102(0x4000000))
	{
		Function_30();
		Function_12(0x4000000, 0, 1);
	}
	if (Function_102(0x10000000))
	{
		Function_30();
		Function_12(0x10000000, 0, 1);
	}
	if (Function_102(2) != Function_102(0x2000000))
	{
		Function_30();
		Function_12(0x2000000, Function_102(2), 1);
	}
	if (Function_103())
	{
		Function_29(!Function_102(16));
	}
	if (Function_102(16))
	{
		Function_23(&iParam0, &iParam1, &iParam2);
		if (Function_102(8192))
		{
			if (!Function_102(4194304))
			{
				Function_12(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_102(8388608))
			{
				Function_12(8388608, 1, 1);
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
			Function_11();
		}
		Function_12(16384, 1, 1);
	}
	else if (!Function_102(32))
	{
		Function_11();
	}
	Function_12(32768, 0, 1);
	return;
}

void Function_23(var uParam0, var uParam1, int iParam2) //Position: 0x10E8 / 4328
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_12(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_102(0x40000000);
	bVar3 = !Function_102(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_28(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_26(bVar1, 2048, 1))
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
				if (Function_24(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_102(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, UI_GET_STRING("Common_Null"));
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
			if (Function_24(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "DEBUG");
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

bool Function_24(bool bParam0, int iParam1, int iParam2) //Position: 0x1260 / 4704
{
	var uVar0;
	
	return Function_25(bParam0, iParam1, &uVar0, iParam2);
}

int Function_25(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1271 / 4721
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

bool Function_26(bool bParam0, int iParam1, bool bParam2) //Position: 0x12D6 / 4822
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_96(iParam1, bParam2);
	}
	if (!Function_28(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_27(iParam1), 64);
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

var Function_27(int iParam0) //Position: 0x1357 / 4951
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

bool Function_28(bool bParam0) //Position: 0x1670 / 5744
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

void Function_29(bool bParam0) //Position: 0x1711 / 5905
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_12(16384, 0, 1);
	return;
}

void Function_30() //Position: 0x172B / 5931
{
	Function_12(32768, 1, 0);
	return;
}

int Function_31() //Position: 0x173A / 5946
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 4294966296;
	if (Function_103() && Function_102(4))
	{
		Function_32(&iVar0, &iVar1);
	}
	return 1;
}

void Function_32(var uParam0, int iParam1) //Position: 0x175D / 5981
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	char* cVar12[32];
	var uVar20;
	var uVar21;
	int iVar22;
	var uVar23;
	
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (Function_28(bVar0))
		{
			bVar2 = (bVar2 + Function_57(29, bVar0));
			bVar3 = (bVar3 + Function_57(39, bVar0));
			bVar4 = (bVar4 + Function_57(28, bVar0));
			bVar1 = (bVar1 + Function_54(bVar0));
		}
		bVar0++;
	}
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("coop_total"), Function_53(iParam1));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(1, bVar2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(2, bVar3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(3, bVar4);
	*uParam0++;
	if (vLocal_516.x <= 2)
	{
		return;
	}
	NET_PLAYER_LIST_ADD_ITEM("", Function_53(iParam1));
	*uParam0++;
	bVar5 = DECOR_GET_INT(Function_16(1), "nLifeBonus");
	UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar5));
	Function_52(iParam1, "MP_GY_NDYBonus", 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar5 * 500);
	bVar6 = DECOR_GET_INT(Function_16(1), "nWaveBonus");
	UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar6));
	Function_52(iParam1, "MP_GY_WaveBonus", 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar6 * 1000);
	Function_52(iParam1, "coop_time_spent", 0, 0);
	*uParam0++;
	if (vLocal_516.x <= 3)
	{
		return;
	}
	if (Function_51(&Global_78578 + 96))
	{
		uVar20 = Function_47(&Global_78578 + 96);
		Function_45(1, uVar20);
		if (Function_43() >= 4294967295)
		{
			iVar7 = Function_42(uVar20);
			if (iVar7 >= 4294967295)
			{
				Function_40(iVar7, &uVar20, &bVar11);
			}
		}
	}
	else
	{
		Function_45(1, 0.0f);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar11);
	bVar0 = false;
	while (bVar0 <= iVar8)
	{
		if (bVar0 < vLocal_516.z)
		{
			Function_38(bVar0, &iVar10, &bVar9);
			Function_52(iParam1, "", iVar10, 0);
			*uParam0++;
			if (bVar0 > vLocal_516.z || vLocal_516.x <= 6)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(0, bVar9);
			}
		}
		bVar0++;
	}
	Function_52(iParam1, "COOP_grandTotal", 0, 0);
	*uParam0++;
	Function_37(&bVar9, &iVar7, &uVar21);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, I2STR(bVar9));
	switch (iVar7)
	{
		case 0x00000002:
			iVar22 = "COOP_victory_gold";
			break;
		
		case 0x00000001:
			iVar22 = "COOP_victory_Silver";
			break;
		
		case 0x00000000:
			iVar22 = "COOP_victory_Bronze";
			break;
		
		case 0xFFFFFFFF:
		default:
			iVar22 = "coop_nothing_earned";
			break;
	}
	Function_52(iParam1, iVar22, 0, 0);
	*uParam0++;
	if (iVar7 >= 4294967295)
	{
		Function_33(iVar7, &uVar23, &bVar11, uVar21);
	}
	else
	{
		bVar11 = false;
	}
	strcpy(&cVar12, "<space>   ", 32);
	stradd(&cVar12, I2STR(bVar11), 32);
	stradd(&cVar12, " <MP_XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, &cVar12);
	return;
}

void Function_33(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1A89 / 6793
{
	float fVar0;
	
	*uParam1 = Function_36(uParam0);
	*uParam2 = Function_34(*uParam1, 32, 20);
	*uParam1 = Function_34(*uParam1, 20, 0);
	if (bParam3)
	{
		fVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		fVar0 = (fVar0 / 5.0f);
		*uParam2 = ROUND(fVar0);
		*uParam2 *= 5;
	}
}

var Function_34(var uParam0, int iParam1, int iParam2) //Position: 0x1ADA / 6874
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_35((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_35(int iParam0) //Position: 0x1AF9 / 6905
{
	return SHIFT_LEFT(1, iParam0);
}

var Function_36(int iParam0) //Position: 0x1B05 / 6917
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_37(int iParam0, var uParam1, int iParam2) //Position: 0x1B25 / 6949
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_16(0);
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

int Function_38(int iParam0, int iParam1, int iParam2) //Position: 0x1B78 / 7032
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_16(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_39(iParam0, 1);
	uVar2 = Function_39(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x1BB9 / 7097
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

void Function_40(int iParam0, var uParam1, int iParam2) //Position: 0x1BDF / 7135
{
	float fVar0;
	
	fVar0 = Function_41(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*uParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_41(int iParam0) //Position: 0x1C10 / 7184
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

int Function_42(float fParam0) //Position: 0x1C30 / 7216
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	Function_40(2, &fVar0, &iVar3);
	Function_40(1, &fVar1, &iVar3);
	Function_40(0, &fVar2, &iVar3);
	if (fParam0 <= fVar2)
	{
		if (fParam0 <= fVar1)
		{
			if (fParam0 <= fVar0)
			{
				return 2;
			}
			return 1;
		}
		return 0;
	}
	return 4294967295;
}

int Function_43() //Position: 0x1C6D / 7277
{
	if (!Function_44())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_44() //Position: 0x1C82 / 7298
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_45(int iParam0, int iParam1) //Position: 0x1C8F / 7311
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_46(iParam1) };
	iVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((iVar4 / 10)), I2STR((iVar4 % 10)), 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_46(var uParam0) //Position: 0x1EBC / 7868
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

var Function_47(int iParam0) //Position: 0x1F2D / 7981
{
	if (Function_51(iParam0))
	{
		if (Function_50(iParam0))
		{
			return StackVal;
		}
		Function_48();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_48() //Position: 0x1FFE / 8190
{
	if (!Function_49())
	{
	}
	return;
}

bool Function_49() //Position: 0x200B / 8203
{
	return NET_IS_IN_SESSION();
}

bool Function_50(int iParam0) //Position: 0x2014 / 8212
{
	return Function_108(*iParam0, 2);
}

bool Function_51(int iParam0) //Position: 0x2021 / 8225
{
	return Function_108(*iParam0, 1);
}

void Function_52(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x202E / 8238
{
	if (iParam2 != 0)
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING_BY_HASH(iParam2), Function_53(iParam0));
	}
	else
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(iParam1), Function_53(iParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
	if (bParam3)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
}

var Function_53(int iParam0) //Position: 0x207D / 8317
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0 + 1;
}

int Function_54(int iParam0) //Position: 0x2090 / 8336
{
	return Function_55(0, iParam0);
}

int Function_55(int iParam0, bool bParam1) //Position: 0x209C / 8348
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_56(iParam0);
	}
	if (!Function_28(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_56(int iParam0) //Position: 0x2103 / 8451
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_57(int iParam0, bool bParam1) //Position: 0x2113 / 8467
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_58(iParam0);
	}
	if (!Function_28(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_58(int iParam0) //Position: 0x2181 / 8577
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_59(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x219A / 8602
{
	bool bVar0;
	int iVar1;
	
	Function_61(bParam1, uParam2, uParam3);
	bVar0 = Function_54(bParam0);
	if (!bParam1)
	{
		Function_24(bParam0, bVar0, 0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(5);
	iVar1 = 0;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, bVar0);
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_57(29, bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_57(39, bParam0));
		iVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, Function_57(28, bParam0));
		iVar1++;
		Function_60(iVar1, bParam0);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar1, bVar0);
	}
	return 0;
}

void Function_60(char* cParam0, bool bParam1) //Position: 0x2229 / 8745
{
	if (Function_102(4))
	{
		if (Function_26(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(cParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(cParam0, "");
		}
	}
	return;
}

void Function_61(bool bParam0, int iParam1, char* cParam2) //Position: 0x225C / 8796
{
	if (bParam0)
	{
		if (Function_103())
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

int Function_62() //Position: 0x227D / 8829
{
	if (!Function_65(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_TOP_TEAM(5);
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_revives");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_defends");
	NET_PLAYER_LIST_SET_HEADER(6, Function_64());
	Function_63();
	return 1;
}

void Function_63() //Position: 0x230C / 8972
{
	if (Function_102(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_12(8192, 1, 1);
	}
	else if (Function_102(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_12(8192, 1, 1);
	}
	else
	{
		Function_12(8192, 0, 1);
	}
	return;
}

var Function_64() //Position: 0x2349 / 9033
{
	int iVar0;
	
	return iVar0;
}

bool Function_65(bool bParam0) //Position: 0x2351 / 9041
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_103() || Function_69(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_103())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_66(Function_103());
	return 1;
}

void Function_66(bool bParam0) //Position: 0x23D2 / 9170
{
	if (bParam0 || Function_102(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_102(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_102(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_102(1048576) || Function_102(4)) || Function_96(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_12(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_67(int iParam0) //Position: 0x245B / 9307
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_68(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x246F / 9327
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

int Function_69(bool bParam0, bool bParam1) //Position: 0x24B4 / 9396
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

void Function_70() //Position: 0x24E8 / 9448
{
	if (Function_71(32) && Function_102(16))
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

bool Function_71(int iParam0) //Position: 0x2522 / 9506
{
	return Function_108(StackVal, iParam0);
}

void Function_72() //Position: 0x2535 / 9525
{
	if (IS_LAYOUTREF_VALID(Local_39.f_1808))
	{
		DESTROY_LAYOUT(Local_39.f_1808);
		Function_18(&Local_39 + 1828);
	}
	UNREGISTER_SCRIPT_WITH_AUDIO();
	return;
}

void Function_73(int iParam0) //Position: 0x2559 / 9561
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	Function_90(StackVal, StackVal, 12698, *(&Local_39 + 1896), 1, iParam0);
	bVar1 = true;
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = IS_PLAYER_CONTROLLABLE(0);
	}
	iVar2 = (Function_56(8) - 1);
	if (iVar2 >= 3)
	{
		iVar2 = (iVar2 - 4);
	}
	if (Function_88(1) && !Function_88(2))
	{
		Function_85("COOP_new_challenges", 0x41200000, 1, 0, 2, 1, 0);
		Function_83(2);
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
					UI_SET_STRING_FORMAT(Function_82(iVar0), UI_GET_STRING("COOP_Select"), UI_GET_STRING(Function_81(Local_39[iVar090].f_324, 0)), 0, 0);
					Local_39[iVar090].f_356 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(Function_82(iVar0), Local_39[iVar090].f_352, 0, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Local_39[iVar090].f_356))
				{
					Function_80(&(Local_39[iVar290]));
					Function_80(&Local_39[iVar290] + 48);
					Function_79(8, Local_39[iVar090].f_324 + 1);
					iVar2 = iVar0;
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					PRINT_SMALL_FORMAT(2.5f, "COOP_Selected", Function_81(Local_39[iVar090].f_324, 0), 0, 0, 0, 2, 0, 0);
					RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(Local_39[iVar090].f_328, "HUD_STINGER_TEXT_SELECTION_MASTER"));
					Function_80(&(Local_39[iVar090]));
					Function_80(&Local_39[iVar090] + 48);
					iVar6 = 15790320;
					iVar7 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(Local_39[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_39[iVar090].f_356);
			}
		}
		Function_76(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &(Local_39[iVar090]), vVar3, fVar8, Vector(*(&Local_39[iVar090] + 332), Local_39[iVar090].f_328, fVar9) + Vector(0.0f, 2.725f, 0.0f), 1, 10980, 0, iVar6, iVar0, "", iVar7);
		if (Function_75(Local_39[iVar090].f_352))
		{
			Function_76(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_39[iVar090] + 48, vVar3, fVar8, Vector(*(&Local_39[iVar090] + 332), Local_39[iVar090].f_328, fVar9) + Vector(0.0f, 2.25f, 0.0f), Local_39[iVar090].f_344, 10235, 0, iVar6, iVar0, "", iVar7);
		}
		else
		{
			Function_80(&Local_39[iVar090] + 48);
		}
		iVar0++;
	}
	return;
}

var Function_74(int iParam0, int iParam1) //Position: 0x27FB / 10235
{
	return GET_WEAPON_DISPLAY_NAME((*&Local_39[iParam190] + 96)[iParam0 + 12]);
}

bool Function_75(bool bParam0) //Position: 0x2812 / 10258
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

void Function_76(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2857 / 10327
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
			Function_80(iParam0);
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
					Function_80(iParam0);
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
			uVar14 = Function_77(iParam0->f_36);
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

var Function_77(float fParam0) //Position: 0x2AD6 / 10966
{
	return (fParam0 * 57.29578f);
}

int Function_78(var uParam0, int iParam1) //Position: 0x2AE4 / 10980
{
	uParam0 = uParam0;
	return Function_81(Local_39[iParam190].f_324, 1);
}

void Function_79(int iParam0, int iParam1) //Position: 0x2AFB / 11003
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_80(int iParam0) //Position: 0x2B24 / 11044
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

int Function_81(int iParam0, bool bParam1) //Position: 0x2B4A / 11082
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

var Function_82(int iParam0) //Position: 0x2EBD / 11965
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

void Function_83(int iParam0) //Position: 0x2F54 / 12116
{
	Function_84(&Global_83864 + 1256, iParam0);
	return;
}

void Function_84(var uParam0, int iParam1) //Position: 0x2F66 / 12134
{
	Function_14(uParam0, iParam1);
	return;
}

void Function_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2F73 / 12147
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_86(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_86(int iParam0) //Position: 0x2FEE / 12270
{
	char* cVar0[16];
	
	if (!Function_87())
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

bool Function_87() //Position: 0x302D / 12333
{
	if (Function_108(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_88(bool bParam0) //Position: 0x3048 / 12360
{
	return Function_89(Global_83864.f_1256, bParam0);
}

int Function_89(var uParam0, bool bParam1) //Position: 0x305A / 12378
{
	return (uParam0 && bParam1) == 0;
}

void Function_90(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x3067 / 12391
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_91(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 12597, 1, 125, 0, 0, 0);
	Function_91(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_91(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x30EA / 12522
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(iParam8, 16) + SHIFT_LEFT(iParam9, 8)) + iParam10);
		Function_76(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

var Function_92(int iParam0, var uParam1) //Position: 0x3135 / 12597
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_93() //Position: 0x319A / 12698
{
	int iVar0;
	
	if (VMAG(*(&Local_39 + 1896)) > 3.0f)
	{
		*(&Local_39 + 1896) = { StackVal, StackVal, *(&Global_79349 + 28) };
	}
	iVar0 = CREATE_PROPSET_IN_LAYOUT(Global_83591.f_140, "TalkingStick", "$/tune/refGroups/refGroups/mp_coop", *(&Local_39 + 1896), 0.0f, Local_39.f_1892, 0.0f);
	Function_94(iVar0, 1);
	return iVar0;
}

void Function_94(bool bParam0, int iParam1) //Position: 0x3213 / 12819
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

var Function_95(var uParam0, var uParam1) //Position: 0x325F / 12895
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return "GY_COT_summary";
}

bool Function_96(bool bParam0, bool bParam1) //Position: 0x327E / 12926
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_97() //Position: 0x329E / 12958
{
	if (Function_100(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_98(16);
	return 1;
}

void Function_98(int iParam0) //Position: 0x32BC / 12988
{
	Function_99(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_99(var uParam0, int iParam1) //Position: 0x32F5 / 13045
{
	Function_13(uParam0, iParam1);
	return;
}

bool Function_100(int iParam0) //Position: 0x3302 / 13058
{
	return Function_89(Global_79336, iParam0);
}

bool Function_101(int iParam0) //Position: 0x3311 / 13073
{
	return Function_108((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_102(int iParam0) //Position: 0x3324 / 13092
{
	return Function_108(Global_76905.f_132, iParam0);
}

bool Function_103() //Position: 0x3335 / 13109
{
	return Function_102(32768);
}

void Function_104(int iParam0, float fParam1, int iParam2) //Position: 0x3342 / 13122
{
	Function_105(iParam0, (fParam1 + TO_FLOAT(iParam2 * 1000)));
	return;
}

void Function_105(int iParam0, int iParam1) //Position: 0x3358 / 13144
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_106(int iParam0, int iParam1, int iParam2) //Position: 0x3379 / 13177
{
	Function_107(iParam0, (iParam1 + SHIFT_LEFT(iParam2, 20)));
	return;
}

void Function_107(int iParam0, int iParam1) //Position: 0x338E / 13198
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_108(var uParam0, int iParam1) //Position: 0x33AF / 13231
{
	return (uParam0 && iParam1) == 0;
}

void Function_109(int iParam0) //Position: 0x33BC / 13244
{
	Function_110(8, iParam0);
	return;
}

void Function_110(int iParam0, bool bParam1) //Position: 0x33C9 / 13257
{
	if (bParam1)
	{
		Function_14(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_13(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_111(var uParam0, var uParam1, float fParam2) //Position: 0x33F1 / 13297
{
	vector3 vVar0[5];
	
	Function_145((180.0f + fParam2), 5.0f);
	vVar0[03] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_145((180.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_145((120.0f + fParam2), 5.0f);
	vVar0[13] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_145((120.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_145((60.0f + fParam2), 5.0f);
	vVar0[23] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_145((60.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_145((0.0f + fParam2), 5.0f);
	vVar0[33] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_145((0.0f + fParam2), 5.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_145((90.0f + fParam2), 1.0f);
	vVar0[43] = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_145((90.0f + fParam2), 1.0f), *(&Global_79349 + 28), StackVal), StackVal, StackVal) + Vector(uParam1, 0.0f, uParam0) };
	Function_112(&vVar0, 1);
	return;
}

void Function_112(var uParam0, bool bParam1) //Position: 0x34A8 / 13480
{
	bool bVar1;
	bool bVar2;
	
	Local_39.f_1808 = CREATE_LAYOUT("Coop_Lobby");
	Global_83591.f_140 = Local_39.f_1808;
	while (!Function_139(&Local_39 + 1828) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	Function_138();
	bVar1 = Function_108(Global_79962, 128);
	bVar2 = (Function_56(8) - 1);
	if (bVar2 == 4294967295)
	{
		if (bVar1)
		{
			Function_79(8, GET_LOCAL_SLOT() + 5);
		}
		else
		{
			Function_79(8, GET_LOCAL_SLOT() + 1);
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
		Function_79(8, bVar2 + 1);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	if (bVar1)
	{
		Local_39.f_1804 = 5;
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[090]), *uParam0[03], 4, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[190]), *uParam0[13], 5, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[290]), *uParam0[23], 6, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[390]), *uParam0[33], 7, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[490]), *uParam0[43], 8, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[43]), bParam1);
	}
	else
	{
		Local_39.f_1804 = 4;
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[090]), *uParam0[03], 0, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[190]), *uParam0[13], 1, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[290]), *uParam0[23], 2, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(&(Local_39[390]), *uParam0[33], 3, Local_39.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_113(int iParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x36F1 / 14065
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<9> Var9;
	bool bVar19;
	bool bVar20;
	
	*(iParam0 + 96) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(iParam4, iParam0 + 344) };
	iParam0->f_324 = iParam4;
	if (iParam4 != 8)
	{
		iParam0->f_328 = Function_118(bParam5, &vParam1, fParam6, iParam0 + 96, bParam7);
	}
	else
	{
		iParam0->f_328 = Function_116(bParam5, &vParam1, (fParam6 + 180.0f), bParam7);
		vVar0 = { 0.2f, 1.2f, 0.1f };
		vVar3 = { -10.0f, 0.0f, 0.0f };
		iVar12 = ((SHIFT_LEFT(255, 24) + SHIFT_LEFT(0, 16)) + SHIFT_LEFT(0, 8));
		GET_OBJECT_RELATIVE_POSITION(iParam0->f_328, vVar0, &vVar6);
		GET_OBJECT_RELATIVE_ORIENTATION(iParam0->f_328, vVar3, &vVar9);
		CREATE_MP_TEXT(iParam0->f_328, "", "Custom_deco", vVar6, Function_115(vVar9.x), Function_115(vVar9.y), Function_115(vVar9.z), iVar12);
	}
	*(iParam0 + 332) = { StackVal, StackVal, vParam1 };
	iParam0->f_44 = GET_CURRENT_GAME_TIME();
	(iParam0 + 48)->f_44 = (GET_CURRENT_GAME_TIME() + (0.1f * TO_FLOAT(iParam4)));
	iParam0->f_352 = CREATE_VOLUME_IN_LAYOUT(bParam5, "", 3, *(iParam0 + 332), 0.0f, 0.0f, 0.0f, 2.5f, 3.0f, 2.5f);
	bVar19 = Function_114(iParam4, &vVar13, &vVar16);
	if (STRING_LENGTH(bVar19) >= 0)
	{
		bVar20 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar16, Vector("", bParam5, StackVal) + Vector(*(iParam0 + 332), vVar13, bVar19), StackVal) + Vector(0.0f, fParam6, 0.0f), 1);
		if (IS_OBJECT_VALID(bVar20))
		{
			ATTACH_OBJECTS(bVar20, iParam0->f_328, "", vVar13, vVar16, 4294967295);
		}
	}
}

var Function_114(int iParam0, var uParam1, int iParam2) //Position: 0x386E / 14446
{
	switch (iParam0)
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

float Function_115(float fParam0) //Position: 0x395A / 14682
{
	return (fParam0 * 0.01745329f);
}

var Function_116(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x3968 / 14696
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *uParam1, Function_117()), 0.0f, (fParam2 + 180.0f), 0.0f, 1);
}

bool Function_117() //Position: 0x39D4 / 14804
{
	return "$/fragments/p_gen_dressForm01x";
}

var Function_118(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x39FB / 14843
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_116(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_121((*uParam3)[iVar12], &iVar2))
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
		if (Function_121((*uParam3)[iVar12], &iVar2))
		{
			if (Function_119((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_119(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x3AE9 / 15081
{
	if (!Function_120(bParam0))
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

bool Function_120(int iParam0) //Position: 0x3C7A / 15482
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_121(bool bParam0, int iParam1) //Position: 0x3C8C / 15500
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

struct<228> Function_122(int iParam0, int iParam1) //Position: 0x3CE8 / 15592
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_133(&Var0);
	Function_130(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 9, 10, 1);
				Function_130(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 11, 6, 1);
				Function_130(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 17, 10, 1);
				Function_130(&Var0, 2, 5, 6, 1);
				Function_130(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 18, 10, 1);
				Function_130(&Var0, 2, 5, 8, 1);
				Function_130(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 19, 20, 0);
				Function_130(&Var0, 2, 4, 8, 1);
				Function_130(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 20, 20, 0);
				Function_130(&Var0, 2, 4, 10, 1);
				Function_130(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 6, 10, 1);
				Function_130(&Var0, 2, 8, 8, 1);
				Function_130(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_129(iParam0, &Var0, iParam1))
			{
				Function_130(&Var0, 1, 2, 10, 1);
				Function_130(&Var0, 2, 8, 9, 1);
				Function_130(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_123(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_123(int iParam0, int iParam1) //Position: 0x3ECD / 16077
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
	Function_130(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_128(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_127(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_130(StackVal, iParam0, *iParam1, iVar19, 1);
		}
		iVar0++;
	}
	if (DECOR_GET_INT_VERBOSE(Function_17(), "DLCFM_Weapon", &iVar21))
	{
		iVar23 = 0;
		while (iVar23 <= iVar21)
		{
			strcpy(&cVar24, "DLCFM_Weapon_", 32);
			straddi(&cVar24, iVar23, 32);
			if (DECOR_GET_INT_VERBOSE(Function_17(), &cVar24, &uVar22))
			{
				Function_124(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_128(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_130(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

void Function_124(var uParam0, var uParam1) //Position: 0x400B / 16395
{
	*uParam1 = Function_34(uParam0, Function_125(), 0);
	uParam1->f_4 = Function_34(uParam0, Function_125() + 8, Function_125());
	return;
}

int Function_125() //Position: 0x402E / 16430
{
	return Function_126(39);
}

int Function_126(int iParam0) //Position: 0x4039 / 16441
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

int Function_127(int iParam0, int iParam1) //Position: 0x4067 / 16487
{
	if (Function_128(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_128(int iParam0, int iParam1) //Position: 0x4081 / 16513
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

bool Function_129(int iParam0, var uParam1, int iParam2) //Position: 0x4094 / 16532
{
	if (Function_108(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_130(uParam1, 1, 10, 5, 1);
				Function_130(uParam1, 2, 7, 4, 1);
				Function_130(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_130(uParam1, 1, 17, 6, 1);
				Function_130(uParam1, 2, 6, 4, 1);
				Function_130(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_130(uParam1, 1, 13, 8, 1);
				Function_130(uParam1, 2, 16, 9, 1);
				Function_130(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_130(uParam1, 1, 3, 6, 1);
				Function_130(uParam1, 2, 15, 12, 1);
				Function_130(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_130(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4174 / 16756
{
	if (!Function_132(iParam1))
	{
		return;
	}
	Function_131(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_131(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4197 / 16791
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

bool Function_132(int iParam0) //Position: 0x41C1 / 16833
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_133(int iParam0) //Position: 0x41D1 / 16849
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_135(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_134(iParam0, 0.0f);
	return;
}

void Function_134(var uParam0, int iParam1) //Position: 0x41FE / 16894
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_135(bool bParam0) //Position: 0x420A / 16906
{
	Function_131(bParam0, 4294967295, 0, 1);
	return;
}

float Function_136(vector3 vParam0, vector3 vParam3) //Position: 0x4218 / 16920
{
	var uVar0;
	
	Function_137(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x4232 / 16946
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_138() //Position: 0x4255 / 16981
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

bool Function_139(int iParam0) //Position: 0x4265 / 16997
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_144();
	iVar1 = 0;
	if (!Function_21(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_143(iParam0[iVar03], 8);
		}
		else if (Function_142())
		{
			iVar1 = 1;
			Function_143(iParam0[iVar03], 8);
		}
		Function_143(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_21(iParam0[iVar03], 4))
		{
			if (!Function_21(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_21(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_21(iParam0[03], 8) || iVar1));
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
				Function_143(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_21(iParam0[iVar03], 4))
		{
			if (!Function_21(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
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
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
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
	Function_140();
	return 1;
}

void Function_140() //Position: 0x45E0 / 17888
{
	if (!Function_141(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_141(int iParam0) //Position: 0x4620 / 17952
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_142() //Position: 0x463C / 17980
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

void Function_143(var uParam0, int iParam1) //Position: 0x4667 / 18023
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_144() //Position: 0x4678 / 18040
{
	if (!Function_141(128))
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

vector3 Function_145(float fParam0, float fParam1) //Position: 0x46BA / 18106
{
	return (SIN_DEGREE((180.0f + fParam0)) * fParam1), 0.0f, (COS_DEGREE((180.0f + fParam0)) * fParam1);
}

void Function_146(int iParam0) //Position: 0x46DD / 18141
{
	if (!Function_147(iParam0))
	{
		return;
	}
	if (!(iParam0 <= 837 && iParam0 >= 975) && !(iParam0 <= 1287 && iParam0 >= 1310))
	{
		return;
	}
	Global_76887 = iParam0;
	Function_79(9, Global_76887);
	return;
}

bool Function_147(int iParam0) //Position: 0x4720 / 18208
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_148(int iParam0) //Position: 0x4737 / 18231
{
	if (((((((iParam0 != 964 || iParam0 != 965) || iParam0 != 966) || iParam0 != 967) || iParam0 != 968) || iParam0 != 969) || iParam0 != 970) || iParam0 != 971)
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x477A / 18298
{
	var uVar0;
	bool bVar3;
	int iVar4;
	
	if (Function_159())
	{
		while (!IS_EXITFLAG_SET())
		{
			Function_154(19232, 19059);
			WAIT(0);
		}
		return 0;
	}
	if (Function_108(Global_79349.f_44, 4194304))
	{
		Function_152(&Local_39 + 1812, "dlc_zombiepack_mp_gy", 10, 0);
	}
	else
	{
		Function_152(&Local_39 + 1812, "dlc_mpcooppack_mp_coop", 10, 0);
	}
	Function_152(&Local_39 + 1828, Function_117(), 0, 0);
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		bVar3 = Function_114(iVar4, &uVar0, &uVar0);
		if (STRING_LENGTH(bVar3) >= 0)
		{
			Function_152(&Local_39 + 1828, bVar3, 0, 0);
		}
		iVar4++;
	}
	Function_139(&Local_39 + 1828);
	while (!Function_139(&Local_39 + 1812) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	Function_151("nCOOP_help", 4294967295);
	Function_150();
	if (!Function_108(Global_84364, 2147483648))
	{
		Function_14(&Global_84364, 2147483648);
		Function_85("COOP_lobby_help", 0x41200000, 1, 0, 2, 1, 0);
	}
	return 1;
}

void Function_150() //Position: 0x48AD / 18605
{
	while (!Function_71(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_151(char* cParam0, int iParam1) //Position: 0x48C8 / 18632
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

var Function_152(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x495F / 18783
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_153(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_143(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_153(var uParam0, int iParam1, int iParam2) //Position: 0x4997 / 18839
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_21(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_143(uParam0[iVar03], 4);
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

void Function_154(var uParam0, var uParam1) //Position: 0x4A5B / 19035
{
	Function_22(uParam0, uParam1, 19052);
	return;
}

int Function_155() //Position: 0x4A6C / 19052
{
	return 1;
}

int Function_156(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x4A73 / 19059
{
	bool bVar0;
	char* cVar1;
	
	Function_61(bParam1, iParam2, cParam3);
	bVar0 = Function_54(bParam0);
	if (!bParam1)
	{
		Function_24(bParam0, bVar0, 0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(5);
	cVar1 = 0;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(cVar1, bVar0);
		cVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(cVar1, Function_57(29, bParam0));
		cVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(cVar1, Function_57(39, bParam0));
		cVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(cVar1, Function_157(bParam0));
		cVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(cVar1, Function_57(28, bParam0));
		cVar1++;
		Function_60(cVar1, bParam0);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(cVar1, bVar0);
	}
	return 0;
}

bool Function_157(bool bParam0) //Position: 0x4B13 / 19219
{
	return Function_57(12, bParam0);
}

int Function_158() //Position: 0x4B20 / 19232
{
	if (!Function_65(1))
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
	Function_63();
	return 1;
}

bool Function_159() //Position: 0x4BBE / 19390
{
	return Function_71(2);
}

void Function_160(int iParam0, int iParam1) //Position: 0x4BC8 / 19400
{
	Function_7(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_161(StackVal, iParam1);
	}
	return;
}

void Function_161(int iParam0, int iParam1) //Position: 0x4BF9 / 19449
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_7(iParam0);
	Function_6(uVar0);
	PRINTNL();
	Function_4(iParam0, uVar0, iParam1);
	return;
}

void Function_162(int iParam0, bool bParam1) //Position: 0x4C1E / 19486
{
	if (bParam1)
	{
		Function_14(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_13(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

