//Decompiled with MagicRDR v1.0
//Function Count : 557
//Statics Count : 513
//Natives Count : 535
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 3;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 13;
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
	var uLocal_50 = 0;
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
	var uLocal_66 = 14;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_98 = 6;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 9;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
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
	var uLocal_136 = 5;
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
	var uLocal_150 = 2;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 7;
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
	var uLocal_176 = 5;
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
	var uLocal_190 = 4;
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
	var uLocal_206 = 6;
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
	var uLocal_344 = 2;
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
	float fLocal_492 = 0.0f;
	int iLocal_493 = 0;
	bool bLocal_494 = false;
	bool bLocal_495 = false;
	bool bLocal_496 = false;
	bool bLocal_497 = false;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	bool bLocal_500 = false;
	float fLocal_501 = 0.0f;
	int iLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	bool bLocal_505 = false;
	bool bLocal_506 = false;
	int iLocal_507 = 0;
	bool bLocal_508 = false;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<189> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	fLocal_492 = 1.0f;
	iLocal_502 = 4294967295;
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_511 = 0;
	iLocal_512 = 0;
	Global_6661 = 0;
	PRINTSTRING("********************************************");
	PRINTNL();
	PRINTSTRING("                 MAIN.SC");
	PRINTNL();
	PRINTSTRING("SCRIPTS ARE COMPILED WITH STANDALONE DEFINED");
	PRINTNL();
	PRINTSTRING("********************************************");
	PRINTNL();
	DLC_UNMOUNT_PACK("RDRUNDEADNGHTPAK");
	SET_ZOMBIE_DLC_IS_ACTIVE(0);
	DLC_PRE_INIT_CONTENT();
	SET_AGRESSIVE_EVENT_ON(0);
	SET_DLC_FALLBACK_AVATAR(869);
	Function_556(0);
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (!Global_6604)
	{
		Global_140676 = Var0.f_188;
	}
	if (Var0.f_16)
	{
		Global_10964 = Var0;
		Global_6624 = 1;
		Global_6606 = 1;
		UI_DISABLE("PM_Stats");
		UI_EXCLUDE("JournalTab_Complete");
	}
	else
	{
		UI_ENABLE("PM_Stats");
		UI_INCLUDE("JournalTab_Complete");
	}
	if (Function_555(&uVar24, &iVar25, &iVar26))
	{
		Function_554(2048);
		Global_42263 = uVar24;
		if (Global_42263 < 0 && Global_42263 >= 6)
		{
			Function_553(Global_42263);
			Global_53524 = Function_553(Global_42263);
			if (iVar26 == 4294967295 && iVar25 <= 0)
			{
				Global_40060.f_4424 = iVar26;
				Function_552(Global_40060.f_4424, iVar25);
			}
			Function_551(&Global_99144, 2);
			Function_550(&Global_99144, 1);
		}
		else
		{
			Global_42263 = 1;
			Function_553(1);
			Global_53524 = Function_553(1);
		}
	}
	Function_549();
	if (Var0.f_68)
	{
		Global_53524.f_48++;
		Function_548(&Global_53524 + 12, &Global_53524 + 16);
		Global_53524 = Function_548(&Global_53524 + 12, &Global_53524 + 16);
		Global_53524.f_24 = Function_547();
	}
	if ((Global_53524.f_44 || Global_124157) || _WAS_LAST_RESET_FOR_MULTIPLAYER())
	{
		Global_53524.f_44 = 1;
		bLocal_495 = false;
		Global_6606 = 0;
	}
	else if (IS_LAUNCH_RETAIL() && Global_6605)
	{
		bLocal_495 = true;
		Global_6606 = 1;
		Function_546();
	}
	if (!Global_53524.f_44)
	{
		STREAMING_ENABLE_POI_STREAMING(0);
	}
	if (Function_545("npressDemo"))
	{
		Global_6664 = 1;
	}
	if (Function_545("pressDemo3"))
	{
		Global_6665 = 1;
	}
	if (Function_545("pax"))
	{
		Global_6666 = 1;
		bLocal_495 = false;
		Global_6606 = 0;
	}
	if (Function_545("devmode"))
	{
		bLocal_495 = false;
		Global_6606 = 0;
	}
	if (Function_545("d11CutsceneHack") || IS_D11_CUTSCENE_HACK())
	{
		Global_99145 = 1;
	}
	if (Function_545("d11KeyboardControls"))
	{
		Global_99174 = 1;
	}
	if (IS_LAUNCH_RETAIL())
	{
		Global_6606 = !Global_53524.f_44;
	}
	TOGGLE_COVER_PROPS(0);
	Global_47341.f_4 = 4294967295;
	Global_47341.f_8 = 4294967295;
	Global_47341 = 0;
	Global_6607 = 0;
	Function_544();
	if (Function_545("performanceTestHen"))
	{
		bLocal_508 = false;
		bLocal_496 = true;
	}
	else if (Function_545("performanceTestArm"))
	{
		bLocal_508 = true;
		bLocal_496 = true;
	}
	else if (Function_545("performanceTestFire"))
	{
		bLocal_508 = 2;
		bLocal_496 = true;
	}
	else if (Function_545("performanceTestStream"))
	{
		bLocal_508 = 3;
		bLocal_496 = true;
	}
	else if (Function_545("performancetestgringo"))
	{
		bLocal_508 = 4;
		bLocal_496 = true;
	}
	bLocal_497 = Function_543("soaktest");
	if (bLocal_497 != 4294967295 && Function_545("soaktest"))
	{
		bLocal_497 = false;
	}
	if (Function_545("noDDA"))
	{
		Global_119941 = 0;
	}
	else
	{
		Global_119941 = 1;
	}
	Global_6634 = 1;
	if (Global_6605)
	{
		LOG_MESSAGE("Initializing deed array");
		Function_542();
	}
	iVar27 = Function_538(0, 1, 1);
	if (Global_53524.f_28)
	{
		if (Global_53524.f_28)
		{
			LOG_MESSAGE("Resetting from mission");
			Global_53524.f_36 = 1;
		}
	}
	else
	{
		bLocal_494 = true;
	}
	if (Var0.f_16)
	{
		if (Global_10964 == 1)
		{
			if (!Global_53524.f_28)
			{
				Global_53524 = Vector(857,329f, 78,453f, 1238,027f);
				Global_99147 = 1;
				Function_537(16385);
			}
			else
			{
				Global_53524 = Vector(-2208,91f, 16,5062f, 2605,41f);
			}
		}
		else if (Global_10964 == 2)
		{
			Global_53524 = Vector(-839,352f, 92,547f, 2372,48f);
			Global_53524.f_12 = 170,951f;
		}
		else if (Global_10964 == 48)
		{
			Global_53524 = Vector(-170,176f, 124,375f, 1723,22f);
			Global_53524.f_12 = 286,845f;
		}
		else
		{
			Global_53524 = *(&Var0 + 4);
		}
		bLocal_494 = false;
	}
	else if (Global_6666)
	{
		Global_53524 = Vector(-2137,46f, 16,38f, 2605,633f);
		Global_53524.f_12 = 265.0f;
	}
	else if (Global_6605 || !Global_53524.f_28)
	{
		if (IS_STARTPOS_IN_COMMANDLINE())
		{
			GET_COMMANDLINE_START_POS(&Global_53524, &Global_53524 + 12);
			Global_53524.f_24 = 4294967295;
		}
		else if (!Global_53524.f_32)
		{
			if (!bLocal_495)
			{
				if (Function_545("randomstartloc"))
				{
					bVar41 = FLOOR(TO_FLOAT((RAND_INT_RANGE(false, Var28 * 1000) / 1000)));
					if (bVar41 <= 0)
					{
						bVar41 = false;
					}
					else if (bVar41 > Var28)
					{
						bVar41 = (Var28 - 1);
					}
					Var28[02] = Vector(-837,534f, 92,062f, 2379,602f);
					Var28[12] = Vector(-2103,409f, 16,449f, 2604,172f);
					Var28[22] = Vector(108,881f, 73,304f, 2322,866f);
					Var28[32] = Vector(-4296,771f, 22,116f, 4406,287f);
					Var28[42] = Vector(-2730,71f, 32,353f, 4251,411f);
					Var28[52] = Vector(661,31f, 77,936f, 1214,231f);
					Global_53524 = Var28[bVar412];
				}
				else
				{
					Global_53524 = Vector(-837,534f, 92,062f, 2379,602f);
				}
			}
			else if ((Global_6606 && !Global_6624) && !Global_53524.f_28)
			{
				if (StackVal && StackVal != 3 != 4)
				{
					if (!Global_99145)
					{
						Global_99147 = 1;
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_ACTIVATE("nCutscenes");
						}
					}
					Function_537(16385);
					Global_53524 = Vector(736,489f, 90,334f, 1199,335f);
				}
			}
		}
		else if ((Global_6606 && !Global_6624) && !Global_53524.f_28)
		{
			iVar42 = Function_538(0, 2, 1);
			iVar43 = Function_538(2, 47, 1);
			iVar44 = Function_538(2, 48, 1);
			if (StackVal && StackVal != 3 != 4)
			{
				Global_53524 = Vector(-839,352f, 92,547f, 2372,48f);
				Global_53524.f_12 = 170,951f;
			}
			else if (StackVal && (StackVal && !(StackVal || StackVal != 3 != 4) != 3) != 4)
			{
				Global_53524 = Vector(-170,176f, 124,375f, 1723,22f);
				Global_53524.f_12 = 286,845f;
			}
		}
		if ((!Global_6606 && !Global_6666) && !IS_STARTPOS_IN_COMMANDLINE())
		{
			Global_53524.f_12 = 176,588f;
		}
	}
	if (Function_536(2048))
	{
		bLocal_494 = false;
	}
	if (bLocal_496)
	{
		switch (bLocal_508)
		{
			case 0x00000000:
				Global_53524 = Vector(-837,534f, 92,062f, 2379,602f);
				break;
			
			case 0x00000001:
				Global_53524 = Vector(-2201,96f, 16,581f, 2614,463f);
				break;
			
			case 0x00000002:
				Global_53524 = Vector(-703,695f, 63,002f, 3334,63f);
				break;
			
			case 0x00000004:
				Global_53524 = Vector(-687,803f, 66,482f, 3293,021f);
				break;
			}
	}
	Function_534();
	if (!Global_53524.f_44)
	{
		SET_START_POS(Global_53524, Global_53524.f_12, 0);
	}
	Global_53524.f_40 = 0;
	Global_21576 = Vector(0.0f, 0.0f, 0.0f);
	Global_21576.f_120 = 4294967295;
	Function_523();
	if (Function_522(64))
	{
		if (Function_521(599) <= 0)
		{
			Function_520(599, 0, 0);
		}
	}
	Function_518();
	if (Global_6605)
	{
		Function_517();
	}
	uVar45 = 13;
	Function_515(&uVar45, "$/content/scripting/DesignerDefined/Player", 4, 0);
	Function_515(&uVar45, "$/content/init/rdr2init_each_load", 4, 0);
	Function_515(&uVar45, "$/content/scripting/DesignerDefined/short_update_thread", 4, 0);
	Function_515(&uVar45, "$/content/scripting/DesignerDefined/medium_update_thread", 4, 0);
	Function_515(&uVar45, "$/content/scripting/DesignerDefined/long_update_thread", 4, 0);
	Function_515(&uVar45, "$/content/scripting/DesignerDefined/UI/FuiEventMonitor", 4, 0);
	Function_515(&uVar45, "$/content/scripting/DesignerDefined/Pause", 4, 0);
	if (Global_53524.f_44)
	{
		Function_515(&uVar45, "$/content/multiplayer/multiplayer_update_thread", 4, 0);
	}
	else
	{
		Function_515(&uVar45, "$/content/scripting/gringo/SimpleGringo/hogtie", 1, 0);
		Function_515(&uVar45, "$/content/scripting/gringo/SimpleGringo/hogtie_pickup", 1, 0);
		Function_515(&uVar45, "$/content/scripting/gringo/SimpleGringo/Loot_Corpse", 1, 0);
		Function_515(&uVar45, "$/content/scripting/gringo/SimpleGringo/Skin_Animal", 1, 0);
		Function_515(&uVar45, "$/content/scripting/gringo/SimpleGringo/Pluck_Feather", 1, 0);
		Function_515(&uVar45, "$/content/scripting/gringo/GringoBrains/SmallBrains/Drunk", 1, 0);
	}
	if (Global_53524.f_44)
	{
		REQUEST_ASSET("$/content/Multiplayer/Action_Areas/GenericMP_AA", 4);
	}
	fLocal_501 = 0.0f;
	while (!Function_510(&uVar45))
	{
		WAIT(false);
	}
	if (!Function_509(Global_99144, 1))
	{
		Function_550(&Global_99130 + 40, 65536);
		Function_550(&Global_99130 + 40, 2);
		Function_550(&Global_99130 + 40, 1);
	}
	else
	{
		bLocal_506 = true;
	}
	uVar72 = LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/Player", 0);
	fLocal_501 = 0.0f;
	while (!IS_SCRIPT_VALID(&uVar72))
	{
		WAIT(false);
	}
	fLocal_501 = 0.0f;
	while (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PlayerLayout")))
	{
		WAIT(false);
	}
	fLocal_501 = 0.0f;
	if (Global_53524.f_44)
	{
	}
	while (!IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), "player")) && !Global_53524.f_44)
	{
		WAIT(false);
	}
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/UI/FuiEventMonitor", 0);
	if (bLocal_496)
	{
		switch (bLocal_508)
		{
			case 0x00000000:
				uVar73 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test01_hen", 0);
				break;
			
			case 0x00000001:
				uVar73 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test02_arm", 0);
				break;
			
			case 0x00000002:
				uVar73 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test03_firefight", 0);
				break;
			
			case 0x00000003:
				uVar73 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test04_streaming", 0);
				break;
			
			case 0x00000004:
				uVar73 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test05_gringo", 0);
				break;
		}
		uVar74 = MAKE_TIME_OF_DAY(false, false, 0);
		SET_WEATHER(true, &uVar74);
		while (!IS_SCRIPT_VALID(&uVar73))
		{
			WAIT(false);
		}
		while (!STREAMING_IS_WORLD_LOADED())
		{
			WAIT(false);
		}
		HUD_FADE_IN(2.0f, 1065353216);
		CAMERA_RESET(0);
		STREAMING_SET_CUTSCENE_MODE(0);
		if (bLocal_508 != 3)
		{
			while (IS_SCRIPT_VALID(&uVar73))
			{
				WAIT(false);
			}
			TERMINATE_THIS_SCRIPT();
		}
	}
	Function_508();
	Function_507();
	LAUNCH_NEW_SCRIPT("init/rdr2init_each_load", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/short_update_thread", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/medium_update_thread", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/long_update_thread", 0);
	Function_464();
	Global_6618 = 1;
	Global_6620 = 1;
	Global_6622 = 0;
	Global_6623 = 0;
	Global_6629 = 0;
	Global_6645 = 1;
	if (!IS_LAYOUTREF_VALID(&Global_10992))
	{
		Global_10992 = CREATE_LAYOUT("GlobalChar");
	}
	if (!IS_LAYOUTREF_VALID(&Global_10994))
	{
		Global_10994 = CREATE_LAYOUT("RegionChar");
	}
	if (!IS_LAYOUTREF_VALID(&Global_10996))
	{
		Global_10996 = CREATE_LAYOUT("nLocalChar");
	}
	Function_462();
	Function_461();
	Function_460();
	CLEAR_REGIONS();
	Function_458();
	Global_46722[0] = Function_456("$/content/Frontier/PR_Frontier", "fro", 4294967295, 0, 1, 0, 0, 0, 1, 0);
	Global_46722[1] = Function_456("$/content/Mexico/PR_Mexico", "mex", Global_46722[0], 0, 1, 1, 0, 0, 1, 0);
	Global_46722[2] = Function_456("$/content/North/PR_North", "nor", Global_46722[1], 0, 1, 2, 0, 0, 1, 0);
	Global_46722[3] = Function_456("$/content/Homestead/PR_Homestead", "hom", Global_46722[2], 0, 1, 3, 0, 0, 1, 0);
	Global_46722[4] = Function_456("$/content/Homestead/PR_End", "end", Global_46722[3], 0, 1, 4, 0, 0, 1, 0);
	Global_46736[0] = Function_456("$/content/Frontier/Cholla_Springs/ChollaSprings", "cho", Global_46722[0], &iLocal_4 + 240, 2, 5, 0, 1, 1, 0);
	Global_46746[1] = Function_456("$/content/Mexico/Diez_Coronas/DiezCoronas", "dzc", Global_46722[1], &iLocal_4 + 784, 2, 52, 0, 1, 1, 0);
	Global_46736[1] = Function_456("$/content/Frontier/Gaptooth_Ridge/GaptoothRidge", "gtr", Global_46722[0], &iLocal_4 + 368, 2, 6, 0, 0, 1, 0);
	Global_46754[0] = Function_456("$/content/North/Great_Plains/GreatPlains", "grt", Global_46722[2], &iLocal_4 + 608, 2, 83, 0, 1, 1, 0);
	Global_46736[2] = Function_456("$/content/Frontier/Hennigans_Stead/HennigansStead", "hgn", Global_46722[0], &iLocal_4 + 520, 2, 8, 0, 1, 1, 0);
	Global_46746[2] = Function_456("$/content/Mexico/Perdido/Perdido", "prd", Global_46722[1], &iLocal_4 + 736, 2, 51, 0, 1, 1, 0);
	Global_46746[0] = Function_456("$/content/Mexico/Punta_Orgullo/PuntaOrgullo", "pun", Global_46722[1], &iLocal_4 + 680, 2, 50, 0, 1, 1, 0);
	Global_46736[3] = Function_456("$/content/Frontier/Rio_Bravo/RioBravo", "rio", Global_46722[0], &iLocal_4 + 432, 2, 7, 0, 0, 1, 0);
	Global_46754[1] = Function_456("$/content/North/Tall_Trees/TallTrees", "tal", Global_46722[2], &iLocal_4 + 576, 2, 82, 0, 0, 1, 0);
	Global_46866[2] = Function_456("$/content/Mexico/Perdido/Agave_Viejo/AgaveViejo", "agv", Global_46746[2], &iLocal_4 + 1512, 4, 62, 0, 1, 0, 0);
	Global_46760[0] = Function_456("$/content/Frontier/Cholla_Springs/Armadillo/Armadillo", "arm", Global_46736[0], &iLocal_4 + 64, 3, 9, 0, 1, 1, 0);
	Global_46914[1] = Function_456("$/content/North/Great_Plains/BeechersHope/BeechersHope", "beh", Global_46754[0], &iLocal_4 + 968, 4, 95, 0, 0, 1, 0);
	Global_46796[4] = Function_456("$/content/Frontier/Gaptooth_Ridge/Benedict_Point/BenedictPoint", "ben", Global_46736[1], &iLocal_4 + 872, 4, 30, 0, 0, 1, 0);
	Global_46914[0] = Function_456("$/content/North/Great_Plains/Blackwater/Blackwater", "blk", Global_46754[0], &iLocal_4 + 944, 3, 94, 0, 0, 1, 0);
	Global_46894[2] = Function_456("$/content/Mexico/Diez_Coronas/Casa_Madrugada/CasaMadrugada", "cas", Global_46746[1], &iLocal_4 + 920, 4, 75, 0, 1, 1, 0);
	Global_46866[0] = Function_456("$/content/Mexico/Perdido/Chuparosa/Chuparosa", "chu", Global_46746[2], &iLocal_4 + 904, 3, 60, 0, 1, 1, 0);
	Global_46926[0] = Function_456("$/content/North/Tall_Trees/Cochinay/Cochinay", "coc", Global_46754[1], &iLocal_4 + 1384, 4, 84, 0, 0, 0, 0);
	Global_46760[4] = Function_456("$/content/Frontier/Cholla_Springs/Coots_Chapel/CootsChapel", "coo", Global_46736[0], &iLocal_4 + 1000, 4, 11, 0, 0, 0, 0);
	Global_46894[0] = Function_456("$/content/Mexico/Diez_Coronas/El_Matadero_Town/ElMataderoTown", "emt", Global_46746[1], &iLocal_4 + 1336, 4, 73, 0, 0, 1, 0);
	Global_46894[1] = Function_456("$/content/Mexico/Diez_Coronas/El_Presidio/ElPresidio", "fod", Global_46746[1], &iLocal_4 + 936, 4, 74, 0, 1, 1, 0);
	Global_46850[0] = Function_456("$/content/Mexico/Punta_Orgullo/Escalera/Escalera", "esc", Global_46746[0], &iLocal_4 + 888, 3, 53, 0, 1, 1, 0);
	Global_46866[1] = Function_456("$/content/Mexico/Perdido/Las_Hermanas/LasHermanas", "lsh", Global_46746[2], &iLocal_4 + 1504, 4, 61, 0, 1, 1, 0);
	Global_46816[0] = Function_456("$/content/Frontier/Hennigans_Stead/Hennigans_Ranch/HennigansRanch", "hen", Global_46736[2], &iLocal_4 + 800, 3, 40, 0, 0, 1, 0);
	Global_46926[1] = Function_456("$/content/North/Tall_Trees/Manzanita_Post/ManzanitaPost", "mtp", Global_46754[1], &iLocal_4 + 952, 4, 85, 0, 0, 1, 0);
	Global_46926[2] = Function_456("$/content/North/Tall_Trees/Pacific_Union_Railroad_Camp/PacificUnionRailroadCamp", "upr", Global_46754[1], &iLocal_4 + 960, 4, 86, 0, 0, 1, 0);
	Global_46838[0] = Function_456("$/content/Frontier/Rio_Bravo/Plainview/Plainview", "pln", Global_46736[3], &iLocal_4 + 1448, 4, 35, 0, 0, 1, 0);
	Global_46760[1] = Function_456("$/content/Frontier/Cholla_Springs/Ridgewood_Farm/RidgewoodFarm", "rwf", Global_46736[0], &iLocal_4 + 88, 4, 10, 0, 0, 1, 0);
	Global_46796[1] = Function_456("$/content/Frontier/Gaptooth_Ridge/Rathskeller_Fork/RathskellerFork", "rat", Global_46736[1], &iLocal_4 + 120, 4, 27, 0, 0, 1, 0);
	Global_46816[1] = Function_456("$/content/Frontier/Hennigans_Stead/Thieves_Landing/ThievesLanding", "thi", Global_46736[2], &iLocal_4 + 792, 3, 41, 0, 0, 1, 0);
	Global_46894[3] = Function_456("$/content/Mexico/Diez_Coronas/Torquemada/Torquemada", "tor", Global_46746[1], &iLocal_4 + 928, 4, 76, 0, 0, 0, 0);
	Global_46838[1] = Function_456("$/content/Frontier/Rio_Bravo/Fort_Mercer/FortMercer", "fom", Global_46736[3], &iLocal_4 + 72, 5, 36, 0, 0, 0, 0);
	Global_46796[3] = Function_456("$/content/Frontier/Gaptooth_Ridge/Gaptooth_Breach/GaptoothBreach", "gap", Global_46736[1], &iLocal_4 + 104, 5, 29, 0, 0, 0, 0);
	Global_46850[1] = Function_456("$/content/Mexico/Punta_Orgullo/Nosalida/Nosalida", "nos", Global_46746[0], &iLocal_4 + 880, 5, 54, 0, 1, 0, 0);
	if (Global_53524.f_44)
	{
		Global_46816[2] = Function_456("$/content/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin", "pik", Global_46736[2], &iLocal_4 + 1608, 5, 42, 0, 0, 0, 0);
	}
	else
	{
		Global_46816[2] = Function_456("$/content/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin", "pik", Global_46736[2], &iLocal_4 + 864, 5, 42, 0, 0, 0, 0);
	}
	if (IS_PS3())
	{
		Global_46796[2] = Function_456("$/content/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly", "sol", Global_46736[1], &iLocal_4 + 112, 5, 28, 0, 0, 0, 0);
	}
	Global_46850[2] = Function_456("$/content/Mexico/Punta_Orgullo/Tesoro_Azul/TesoroAzul", "tes", Global_46746[0], &iLocal_4 + 912, 5, 55, 0, 1, 0, 0);
	Global_46796[0] = Function_456("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/Tumbleweed", "tum", Global_46736[1], &iLocal_4 + 96, 5, 26, 0, 0, 0, 0);
	Global_46760[2] = Function_456("$/content/Frontier/Cholla_Springs/Twin_Rocks/TwinRocks", "twr", Global_46736[0], &iLocal_4 + 80, 5, 12, 0, 0, 0, 0);
	Global_46894[5] = Function_456("", "cab", Global_46746[1], &iLocal_4 + 1144, 6, 78, 0, 0, 0, 0);
	Global_46926[5] = Function_456("", "aur", Global_46754[1], &iLocal_4 + 1288, 6, 89, 1, 0, 0, 0);
	Global_46866[3] = Function_456("", "bar", Global_46746[2], &iLocal_4 + 1176, 6, 63, 1, 0, 0, 1);
	Global_46926[6] = Function_456("", "bcc", Global_46754[1], &iLocal_4 + 1416, 6, 90, 1, 0, 0, 1);
	Global_46796[8] = Function_456("", "bep", Global_46736[3], &iLocal_4 + 1440, 6, 34, 0, 0, 0, 0);
	Global_46816[3] = Function_456("", "brb", Global_46736[2], &iLocal_4 + 1104, 6, 43, 1, 0, 0, 1);
	Global_46816[4] = Function_456("", "but", Global_46736[2], &iLocal_4 + 1112, 6, 44, 0, 0, 0, 0);
	Global_46866[12] = Function_456("", "mir", Global_46746[2], &iLocal_4 + 1496, 6, 72, 0, 1, 0, 0);
	Global_46838[4] = Function_456("", "dlr", Global_46736[3], &iLocal_4 + 1432, 6, 39, 0, 0, 0, 0);
	Global_46866[5] = Function_456("", "tro", Global_46746[2], &iLocal_4 + 1200, 6, 65, 0, 0, 0, 0);
	Global_46866[7] = Function_456("", "dia", Global_46746[2], &iLocal_4 + 1208, 6, 67, 1, 0, 0, 0);
	Global_46914[4] = Function_456("", "dix", Global_46754[0], &iLocal_4 + 1560, 6, 98, 0, 0, 0, 0);
	Global_46838[2] = Function_456("", "frb", Global_46736[3], &iLocal_4 + 1080, 6, 37, 0, 0, 0, 0);
	Global_46816[5] = Function_456("", "grn", Global_46736[2], &iLocal_4 + 1096, 6, 45, 0, 0, 0, 1);
	Global_46760[9] = Function_456("", "ham", Global_46736[0], &iLocal_4 + 1024, 6, 18, 0, 0, 0, 1);
	Global_46760[6] = Function_456("", "han", Global_46736[0], &iLocal_4 + 1008, 6, 15, 1, 0, 0, 0);
	Global_46866[10] = Function_456("", "hnd", Global_46746[2], &iLocal_4 + 1488, 6, 70, 1, 1, 0, 1);
	Global_46760[8] = Function_456("", "jor", Global_46736[0], &iLocal_4 + 976, 6, 17, 0, 0, 0, 0);
	Global_46866[8] = Function_456("", "lag", Global_46746[2], &iLocal_4 + 1480, 6, 68, 1, 1, 0, 1);
	Global_46760[5] = Function_456("", "ldj", Global_46736[0], &iLocal_4 + 992, 6, 14, 0, 0, 0, 1);
	Global_46894[8] = Function_456("", "mnt", Global_46746[1], &iLocal_4 + 1424, 6, 81, 0, 0, 0, 0);
	Global_46926[7] = Function_456("", "msb", Global_46754[1], &iLocal_4 + 1552, 6, 91, 0, 0, 0, 0);
	Global_46760[11] = Function_456("", "mcr", Global_46736[0], &iLocal_4 + 1320, 6, 20, 1, 0, 0, 1);
	Global_46894[7] = Function_456("", "lun", Global_46746[1], &iLocal_4 + 1152, 6, 80, 0, 0, 0, 0);
	Global_46816[6] = Function_456("", "mes", Global_46736[2], &iLocal_4 + 1240, 6, 46, 1, 0, 0, 1);
	Global_46926[9] = Function_456("", "mtf", Global_46754[1], &iLocal_4 + 1584, 6, 93, 0, 0, 0, 0);
	Global_46926[3] = Function_456("", "nek", Global_46754[1], &iLocal_4 + 1304, 6, 87, 1, 0, 0, 0);
	Global_46760[12] = Function_456("", "odd", Global_46736[0], &iLocal_4 + 1312, 6, 21, 0, 0, 0, 0);
	Global_46816[8] = Function_456("", "bac", Global_46736[2], &iLocal_4 + 1120, 6, 48, 0, 0, 0, 1);
	Global_46850[5] = Function_456("", "plt", Global_46746[0], &iLocal_4 + 1216, 6, 58, 1, 0, 0, 0);
	Global_46760[10] = Function_456("", "ple", Global_46736[0], &iLocal_4 + 1328, 6, 19, 0, 0, 0, 0);
	Global_46866[9] = Function_456("", "pri", Global_46746[2], &iLocal_4 + 1456, 6, 69, 1, 1, 0, 1);
	Global_46850[6] = Function_456("", "pch", Global_46746[0], &iLocal_4 + 1568, 6, 59, 0, 0, 0, 0);
	Global_46866[6] = Function_456("", "ram", Global_46746[2], &iLocal_4 + 1088, 6, 66, 0, 1, 0, 0);
	Global_46760[7] = Function_456("", "rtl", Global_46736[0], &iLocal_4 + 1016, 6, 16, 1, 0, 0, 0);
	Global_46838[3] = Function_456("", "rep", Global_46736[3], &iLocal_4 + 1072, 6, 38, 1, 0, 0, 0);
	Global_46760[3] = Function_456("", "bat", Global_46736[0], &iLocal_4 + 984, 6, 13, 0, 0, 0, 1);
	Global_46866[4] = Function_456("", "sep", Global_46746[2], &iLocal_4 + 1168, 6, 64, 1, 1, 0, 0);
	Global_46850[3] = Function_456("", "sid", Global_46746[0], &iLocal_4 + 896, 6, 56, 0, 1, 0, 0);
	Global_46894[6] = Function_456("", "sms", Global_46746[1], &iLocal_4 + 1160, 6, 79, 0, 0, 0, 0);
	if (!IS_PS3())
	{
		if (Function_455())
		{
			Global_46796[2] = Function_456("$/content/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly", "sol", Global_46736[1], &iLocal_4 + 112, 5, 28, 0, 0, 0, 0);
		}
		else
		{
			Global_46796[2] = Function_456("", "sol", Global_46736[1], &iLocal_4 + 112, 6, 28, 0, 0, 0, 1);
		}
	}
	Global_46816[7] = Function_456("", "stl", Global_46736[2], &iLocal_4 + 1248, 6, 47, 0, 1, 1, 1);
	Global_46926[4] = Function_456("", "tnr", Global_46754[1], &iLocal_4 + 1296, 6, 88, 1, 0, 0, 1);
	Global_46926[8] = Function_456("", "tns", Global_46754[1], &iLocal_4 + 1576, 6, 92, 0, 0, 0, 0);
	Global_46760[14] = Function_456("", "tcr", Global_46736[0], &iLocal_4 + 1408, 6, 23, 0, 0, 0, 1);
	Global_46914[3] = Function_456("", "ser", Global_46754[0], &iLocal_4 + 1280, 6, 96, 0, 0, 0, 1);
	if (Global_53524.f_44)
	{
		if (Function_522(64))
		{
			Global_46914[2] = Function_456("$/content/DLC/MPModePack/Hunting/brokenWildernessAA", "brk", Global_46754[0], &iLocal_4 + 1272, 7, 97, 0, 0, 0, 0);
			Global_46760[15] = Function_456("$/content/DLC/MPModePack/ActionAreas/CRI/CRI", "cri", Global_46736[0], &iLocal_4 + 1528, 7, 24, 0, 1, 0, 0);
			Global_46850[4] = Function_456("$/content/DLC/MPModePack/ActionAreas/CRK/CRK", "crk", Global_46746[0], &iLocal_4 + 1232, 7, 57, 0, 1, 0, 0);
			Global_46796[5] = Function_456("$/content/DLC/MPModePack/ActionAreas/CUE/CuevaSeca", "cue", Global_46736[1], &iLocal_4 + 1040, 7, 71, 1, 1, 0, 1);
			Global_46760[13] = Function_456("$/content/DLC/MPModePack/Hunting/rioWildernessAA", "lob", Global_46736[0], &iLocal_4 + 1192, 7, 22, 1, 0, 0, 1);
			Global_46894[4] = Function_456("$/content/DLC/MPModePack/Hunting/bobcatWildernessAA", "roc", Global_46746[1], &iLocal_4 + 1136, 7, 77, 0, 0, 0, 0);
			Global_46796[6] = Function_456("$/content/DLC/MPModePack/ActionAreas/SCR/SCR", "scr", Global_46736[1], &iLocal_4 + 1056, 7, 32, 0, 0, 0, 1);
			Global_46796[7] = Function_456("$/content/DLC/MPModePack/Hunting/steadWildernessAA", "sil", Global_46736[1], &iLocal_4 + 1352, 7, 33, 1, 0, 0, 1);
			Global_46760[16] = Function_456("$/content/DLC/MPModePack/ActionAreas/VEN/VEN", "ven", Global_46736[0], &iLocal_4 + 1544, 7, 25, 0, 1, 0, 0);
			Global_46866[11] = Function_456("$/content/DLC/MPModePack/ActionAreas/RNP/RanchoPolvo", "rnp", Global_46746[2], &iLocal_4 + 1472, 7, 71, 1, 1, 0, 1);
			Global_46816[9] = Function_456("$/content/DLC/MPModePack/ActionAreas/WAR/WarthingtonRanch", "war", Global_46736[2], &iLocal_4 + 1600, 7, 71, 1, 1, 0, 1);
		}
		else
		{
			Global_46914[2] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "brk", Global_46754[0], &iLocal_4 + 1272, 7, 97, 0, 0, 0, 0);
			Global_46760[15] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "cri", Global_46736[0], &iLocal_4 + 1528, 7, 24, 0, 1, 0, 0);
			Global_46850[4] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "crk", Global_46746[0], &iLocal_4 + 1232, 7, 57, 0, 1, 0, 0);
			Global_46796[5] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "cue", Global_46736[1], &iLocal_4 + 1040, 7, 71, 1, 1, 0, 1);
			Global_46760[13] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "lob", Global_46736[0], &iLocal_4 + 1192, 7, 22, 1, 0, 0, 1);
			Global_46894[4] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "roc", Global_46746[1], &iLocal_4 + 1136, 7, 77, 0, 0, 0, 0);
			Global_46796[6] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "scr", Global_46736[1], &iLocal_4 + 1056, 7, 32, 0, 0, 0, 1);
			Global_46796[7] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "sil", Global_46736[1], &iLocal_4 + 1352, 7, 33, 1, 0, 0, 1);
			Global_46760[16] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "ven", Global_46736[0], &iLocal_4 + 1544, 7, 25, 0, 1, 0, 0);
			Global_46866[11] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "rnp", Global_46746[2], &iLocal_4 + 1472, 7, 71, 1, 1, 0, 1);
			Global_46816[9] = Function_456("$/content/Multiplayer/Action_Areas/GenericMP_AA", "war", Global_46736[2], &iLocal_4 + 1600, 7, 71, 1, 1, 0, 1);
		}
	}
	else
	{
		Global_46914[2] = Function_456("", "brk", Global_46754[0], &iLocal_4 + 1264, 6, 97, 0, 0, 0, 0);
		Global_46760[15] = Function_456("", "cri", Global_46736[0], &iLocal_4 + 1520, 6, 24, 0, 1, 0, 0);
		Global_46850[4] = Function_456("", "crk", Global_46746[0], &iLocal_4 + 1224, 6, 57, 0, 1, 0, 0);
		Global_46796[5] = Function_456("", "cue", Global_46736[1], &iLocal_4 + 1032, 6, 31, 0, 0, 0, 0);
		Global_46760[13] = Function_456("", "lob", Global_46736[0], &iLocal_4 + 1184, 6, 22, 1, 0, 0, 1);
		Global_46894[4] = Function_456("", "roc", Global_46746[1], &iLocal_4 + 1128, 6, 77, 0, 0, 0, 0);
		Global_46796[6] = Function_456("", "scr", Global_46736[1], &iLocal_4 + 1048, 6, 32, 0, 0, 0, 1);
		Global_46796[7] = Function_456("", "sil", Global_46736[1], &iLocal_4 + 1344, 6, 33, 1, 0, 0, 1);
		Global_46760[16] = Function_456("", "ven", Global_46736[0], &iLocal_4 + 1536, 6, 25, 0, 1, 0, 0);
		Global_46866[11] = Function_456("", "rnp", Global_46746[2], &iLocal_4 + 1464, 6, 71, 1, 1, 0, 1);
		Global_46816[9] = Function_456("", "war", Global_46736[2], &iLocal_4 + 1592, 6, 49, 0, 0, 0, 0);
	}
	Function_454();
	SET_FLOCK_DEFAULT_POPULATION_MAX_PER_CELL(1);
	SET_INDIVIDUAL_DEFAULT_POPULATION_MAX_PER_CELL(15);
	if (!Global_53524.f_44)
	{
		Global_46948 = Function_538(0, Global_46760[2], 3);
		Global_46949 = Function_538(0, Global_46796[2], 3);
		Global_46950 = Function_538(0, Global_46816[2], 3);
		Global_46951 = Function_538(0, Global_46796[0], 3);
		Global_46952 = Function_538(0, Global_46796[3], 3);
		Global_46953 = Function_538(0, Global_46838[1], 3);
		Global_46954 = Function_538(0, Global_46850[1], 3);
		Global_46955 = Function_538(0, Global_46850[2], 3);
		Function_453(&Global_21684[Global_469487] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469507] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469517] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469527] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469537] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469547] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469557] + 40);
		PRINTNL();
		Function_453(&Global_21684[Global_469497] + 40);
		PRINTNL();
		Function_452();
		WAIT(false);
		Function_451();
		WAIT(false);
		Function_449(StackVal, 0, Global_46816[0], Vector(-819,6454f, 93,80083f, 2436,405f));
		Function_449(StackVal, 1, Global_46850[0], Vector(-4355,349f, 30,16f, 4384,089f));
		Function_448(&(Global_43791[Global_46722[0]]), 1024);
		Function_448(&(Global_43791[Global_46722[1]]), 1024);
		Function_448(&(Global_43791[Global_46722[2]]), 1024);
		Function_448(&(Global_43791[Global_46722[3]]), 1024);
		fLocal_501 = 0.0f;
		while (!Global_6617)
		{
			WAIT(false);
		}
		if (!Global_6606)
		{
			if (!Global_53524.f_28 && !Global_6666)
			{
				Function_426(Function_447(1), 0, 1, 1, 0);
				Function_426(Function_447(2), 0, 1, 1, 0);
				Function_425(&Global_119934, 2);
				Function_425(&Global_119934, 4);
			}
		}
		else if (Global_6605)
		{
			Global_46720 = 0;
		}
		if (Global_6605 && Global_6606)
		{
			Function_424();
		}
		if (Function_423())
		{
			if (!Function_422(11, 18))
			{
				if (!iLocal_509)
				{
					bVar76 = false;
					while (bVar76 <= Global_43791)
					{
						if (StackVal && StackVal == 1 == 0)
						{
							bVar77 = (Global_44085[bVar769].f_64 - 5);
							iVar78 = 8;
							while (bVar77 >= 30)
							{
								bVar77 = (bVar77 - 31);
								iVar78++;
							}
							if (iVar78 < 10)
							{
								if (Function_422(iVar78, bVar77))
								{
									if (!Function_421(&(Global_43791[bVar76]), 4096))
									{
										Function_420(&(Global_43791[bVar76]), 4096);
										iLocal_510 = 1;
									}
								}
								else if (Function_421(&(Global_43791[bVar76]), 4096))
								{
									Function_448(&(Global_43791[bVar76]), 4096);
									iLocal_510 = 1;
								}
							}
							else if (bVar76 == Global_46914[4])
							{
								if (Function_422(7, 30))
								{
									if (!Function_421(&(Global_43791[bVar76]), 4096))
									{
										Function_420(&(Global_43791[bVar76]), 4096);
										iLocal_510 = 1;
									}
								}
								else if (Function_421(&(Global_43791[bVar76]), 4096))
								{
									Function_448(&(Global_43791[bVar76]), 4096);
									iLocal_510 = 1;
								}
							}
						}
						bVar76++;
					}
					if (iLocal_510)
					{
						Global_54086[473] = 0.0f;
						Global_54086[474] = 0.0f;
						Global_54086[475] = 0.0f;
						Global_54086[476] = 0.0f;
						bVar76 = false;
						while (bVar76 <= Global_43791)
						{
							if (StackVal && StackVal == 1 == 0)
							{
								if (Function_421(&(Global_43791[bVar76]), 4096))
								{
									Function_418(473, 1, 0, 0);
									iVar79 = Function_417(bVar76);
									if (iVar79 == Global_46722[0])
									{
										Function_418(474, 1, 0, 0);
									}
									else if (iVar79 == Global_46722[1])
									{
										Function_418(475, 1, 0, 0);
									}
									else if (iVar79 == Global_46722[2])
									{
										Function_418(476, 1, 0, 0);
									}
								}
							}
							bVar76++;
						}
					}
					iLocal_509 = 1;
				}
				if (!iLocal_511)
				{
					bVar81 = false;
					bVar82 = false;
					bVar83 = false;
					bVar80 = false;
					while (bVar80 <= 20)
					{
						bVar76 = Function_416(bVar80);
						bVar84 = Function_538(bVar76, 0, 2);
						if (Function_422(4, bVar80))
						{
							if (Function_415(bVar84) == 0)
							{
								Function_414(bVar84, 1);
								iLocal_512 = 1;
							}
							if (bVar80 <= 8)
							{
								bVar81++;
							}
							else if (bVar80 <= 16)
							{
								bVar82++;
							}
							else
							{
								bVar83++;
							}
						}
						else if (Function_415(bVar84) >= 0)
						{
							Function_414(bVar84, 0);
							iLocal_512 = 1;
						}
						bVar80++;
					}
					if (iLocal_512)
					{
						Function_520(363, bVar81, 0);
						Function_520(364, bVar82, 0);
						Function_520(365, bVar83, 0);
					}
					iLocal_511 = 1;
				}
				if (iLocal_512 || iLocal_510)
				{
					Function_413();
					iLocal_512 = 0;
					iLocal_510 = 0;
				}
				if (iLocal_509 && iLocal_511)
				{
					Function_412(11, 18);
					iLocal_509 = 0;
					iLocal_511 = 0;
				}
			}
		}
	}
	Global_47149 = 0;
	if (Global_53524.f_44)
	{
		Function_394();
	}
	UI_INCLUDE("LbCat_DLC5");
	if (UI_GET_NUM_CHILDREN("LB_DLC5_Tabs") <= 1)
	{
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "144");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "145");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "146");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "147");
	}
	DLC_INIT_CONTENT();
	Function_389();
	Function_388();
	Function_387();
	Function_386();
	Function_385();
	Global_47341 = 0;
	Function_384("");
	if (!Global_53524.f_44)
	{
		Function_382(33039);
		Function_381(1178687);
		Function_554(0x4218003f);
		Function_554(258048);
		Function_380(0xc400000);
		Function_379(0);
		Function_378();
		Function_377();
		SET_ALL_DOOR_LOCKS_VISIBLE(0);
		if (Global_6664)
		{
			Function_376(256);
			Function_537(8192);
			Function_537(1048576);
		}
		if (Global_6666)
		{
			Function_376(256);
			Function_537(1056768);
		}
		if (Global_6606)
		{
			if (Function_375(StackVal, StackVal, Global_47341))
			{
				bLocal_494 = false;
			}
			if (!Function_374(1, 0) || !Function_374(2, 0))
			{
				bLocal_494 = false;
			}
			if (Function_374(47, 0) && !Function_374(48, 0))
			{
				bLocal_494 = false;
			}
		}
		if (Global_6605)
		{
			if (Function_545("missionStart"))
			{
				Global_47341.f_4 = Function_543("missionStart");
				PRINTINT(StackVal);
				PRINTNL();
			}
			if (Function_545("missionStartChapter"))
			{
				Global_47341.f_8 = Function_543("missionStartChapter");
				PRINTINT(StackVal);
				PRINTNL();
			}
		}
		if (StackVal && StackVal < 4294967295 < 4294967295)
		{
			if (Function_375(StackVal, StackVal, 1))
			{
				PRINTINT(StackVal);
				PRINTSTRING("-");
				PRINTINT(StackVal);
				PRINTNL();
				bLocal_494 = false;
				Global_47341 = 1;
			}
		}
		if (Function_545("nnoIdleCam") || Global_6664)
		{
			Function_537(4096);
		}
		SET_AMBIENT_ACTOR_SPEED_SCALE_RANGE(0,8f, 1,35f);
		SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
		ENABLE_AMBIENT_SPAWNING(Function_373(1));
		switch (Global_46720)
		{
			case 0x00000001:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase1b", 0);
				break;
			
			case 0x00000002:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase2", 0);
				break;
			
			case 0x00000003:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				break;
		}
		if (Function_545("startAmbientWorldOff"))
		{
			Function_537(128543);
			Function_380(15);
			Function_554(256);
			Function_372(&Global_43580, 1);
		}
		if (Global_6605)
		{
			Function_369(0);
		}
	}
	else
	{
		Function_365();
		Function_364();
		Function_363();
		if (Var0.f_16)
		{
			Var0 = 4294967295;
			Var0.f_16 = 0;
			Var0.f_20 = 0;
			Var0.f_24 = 0;
			STORE_GAME_STATE(&Var0, 48, 1);
		}
		Function_376(33081);
		Function_382(22);
		SET_ALL_DOOR_LOCKS_VISIBLE(1);
		Function_381(41);
		Function_537(31254);
		Function_554(139303);
		Function_554(118808);
		Function_380(524288);
		Function_380(0xc400000);
		Function_379(0);
		Function_378();
		Function_377();
		ENABLE_AMBIENT_SPAWNING(false);
		LAUNCH_NEW_SCRIPT("multiplayer/multiplayer_update_thread", 0);
	}
	Global_47310 = 4294967295;
	Global_6632 = 1;
	UI_SET_STRING("LOCAL_PLAYER_GAMERTAG", NET_GET_LOCAL_GAMER_NAME());
	fLocal_501 = 0.0f;
	Function_361();
	ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
	Function_356();
	Function_355();
	SET_PAUSE_SCRIPT("$/content/scripting/DesignerDefined/Pause");
	Global_99473 = MAKE_TIME_OF_DAY(5, false, 0);
	Global_99475 = MAKE_TIME_OF_DAY(7, false, 0);
	Global_99477 = MAKE_TIME_OF_DAY(11, false, 0);
	Global_99479 = MAKE_TIME_OF_DAY(14, false, 0);
	Global_99481 = MAKE_TIME_OF_DAY(18, false, 0);
	Global_99483 = MAKE_TIME_OF_DAY(22, false, 0);
	Global_99471 = 30.0f;
	SET_TIME_ACCELERATION(Global_99471);
	LIGHTS_SET_ON_TIME(17, 30);
	LIGHTS_SET_OFF_TIME(6, 0);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	if (Global_6665)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(2, 12, 0, 0));
		Function_353(&Global_26182, 0);
	}
	else if (Global_6666)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(2, 12, 0, 0));
		Function_353(&Global_26182, 0);
	}
	else if (Global_53524.f_44)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 7, 0, 0));
		Function_353(&Global_26182, 0);
	}
	else if (Global_6605 && Global_6606)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 10, 0, 0));
		Function_353(&Global_26182, 1);
		Function_352(&Global_26174, RAND_FLOAT_GAUSSIAN(0,3f, 0,15f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_6605)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 7, 0, 0));
		bVar85 = false;
		bVar86 = RAND_INT_RANGE(false, 10000);
		if (bVar86 <= 250)
		{
			bVar85 = 4;
		}
		else if (bVar86 <= 500)
		{
			bVar85 = 3;
		}
		else if (bVar86 <= 3000)
		{
			bVar85 = 2;
		}
		else if (bVar86 <= 6000)
		{
			bVar85 = true;
		}
		if (Global_6606)
		{
			bVar85 = false;
		}
		Function_353(&Global_26182, bVar85);
		Function_352(&Global_26174, RAND_FLOAT_GAUSSIAN(0,3f, 0,15f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else
	{
		SET_TIME_OF_DAY(&Global_53524 + 56);
		Function_350();
		Function_353(&Global_26182, Global_26182);
	}
	if (Function_349(Global_53524.f_24) && !Global_53524.f_44)
	{
		Global_43788 = Global_53524.f_24;
		Function_347(Global_53524.f_24, 0);
	}
	if (Global_6606 && !Global_53524.f_44)
	{
		Function_345();
		Function_343();
		Function_341();
		Function_336();
		Function_326(1);
	}
	if (bLocal_494 && !Global_53524.f_44)
	{
		SET_AMBIENT_FORCE_WAIT_STATE(0);
		Function_317(&iLocal_498, &fLocal_501, 0, 1);
		WAIT(false);
		fLocal_501 = 0.0f;
		while (Global_47148 >= 0)
		{
			WAIT(false);
		}
		fLocal_501 = 0.0f;
		while (!IS_LAYOUTREF_VALID(&Global_46715))
		{
			Function_317(&iLocal_498, &fLocal_501, 0, 1);
			WAIT(false);
		}
		fLocal_501 = 0.0f;
		while (StackVal && Function_316(DECOR_GET_INT(&Global_46715, "regid")) != 2)
		{
			WAIT(false);
		}
		Function_315();
	}
	if (!Function_522(64) && !Function_522(2048))
	{
		Function_313();
	}
	if (Global_6666)
	{
		SET_WEAPONENUM_LOCKED(4, 0);
		SET_WEAPONENUM_LOCKED(5, 0);
		SET_WEAPONENUM_LOCKED(8, 0);
		SET_WEAPONENUM_LOCKED(9, 0);
		SET_WEAPONENUM_LOCKED(16, 0);
		Function_537(1163264);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 4, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 8, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 5, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 9, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 16, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 22, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, 0.0f, 0, 1);
		ADD_ITEM(Function_312(3), &Global_54076, 0);
		ADD_ITEM(Function_312(3), &Global_54076, 0);
		ADD_ITEM(Function_312(3), &Global_54076, 0);
		ADD_ITEM(Function_312(15), &Global_54076, 0);
		ADD_ITEM(Function_312(19), &Global_54076, 0);
		ADD_ITEM(Function_312(20), &Global_54076, 0);
		Function_311();
		Function_310(200, 0, 1);
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, true);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	}
	else if (Global_6605 && !Global_53524.f_44)
	{
		if (Global_6606)
		{
			if (Global_6624)
			{
				DELETE_WEAPON_FROM_ACTOR(&Global_54076, 4);
				_ADD_AMMO_OF_TYPE(&Global_54076, 7, 24.0f, 1, 0);
				GIVE_WEAPON_TO_ACTOR(&Global_54076, 4, 0.0f, 0, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			}
			else
			{
				ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 0, 0);
			}
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 22, 0.0f, 0, 1);
			Function_309();
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 8, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 22, 0.0f, 0, 1);
			ADD_ITEM(Function_312(3), &Global_54076, 0);
			ADD_ITEM(Function_312(3), &Global_54076, 0);
			ADD_ITEM(Function_312(3), &Global_54076, 0);
			ADD_ITEM(Function_312(15), &Global_54076, 0);
			ADD_ITEM(Function_312(19), &Global_54076, 0);
			ADD_ITEM(Function_312(20), &Global_54076, 0);
			Function_311();
			Function_310(200, 0, 1);
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
		}
	}
	else if (Global_6624 && !Global_53524.f_44)
	{
		if (!Global_53524.f_28)
		{
			Function_309();
		}
		_ADD_AMMO_OF_TYPE(&Global_54076, 7, 24.0f, 1, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	}
	if (!Global_6605 && !Global_53524.f_32)
	{
		Function_308();
	}
	else
	{
		Global_53524.f_164 = 4294967295;
	}
	if (bLocal_494)
	{
		fLocal_501 = 0.0f;
		while (!STREAMING_IS_WORLD_LOADED() || (1 && !Global_6617))
		{
			WAIT(false);
		}
	}
	Global_77930 = GET_CURRENT_GAME_TIME();
	if (Var0.f_16)
	{
		bLocal_494 = false;
		Global_6624 = 1;
		Global_10964 = Var0;
		Global_6667[Var028].f_168 = 1;
		switch (Function_307(Var0))
		{
			case 0x00000001:
				if (Var0 > 36)
				{
					LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase1b", 0);
				}
				Function_426(Function_538(0, 24, 1), 0, 1, 1, 0);
				break;
			
			case 0x00000002:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				Function_426(Function_538(0, 24, 1), 0, 1, 1, 0);
				Function_426(Function_538(1, 41, 1), 0, 1, 1, 0);
				break;
			
			case 0x00000003:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				Function_426(Function_538(0, 24, 1), 0, 1, 1, 0);
				Function_426(Function_538(1, 41, 1), 0, 1, 1, 0);
				Function_426(Function_538(2, 48, 1), 0, 1, 1, 0);
				break;
			
			default:
				break;
		}
	}
	else
	{
		if (Function_306(Var0) && !Var0 != 4294967295)
		{
			Global_21684[StackVal + 17].f_8 = StackVal;
			if (Var0.f_24)
			{
				Global_21684[Global_21684[StackVal7].f_12 + 17].f_12 = StackVal;
				if (!Var0.f_20)
				{
					Global_6662 = 1;
					Function_299(&Var0);
					Function_298(Var0, 0);
					Function_288();
					Function_287();
					Function_281(1);
					Function_280(1, 4);
				}
			}
			Var0 = 4294967295;
			Var0.f_16 = 0;
			Var0.f_20 = 0;
			Var0.f_24 = 0;
			STORE_GAME_STATE(&Var0, 48, 1);
		}
		Global_6624 = 0;
	}
	if (bLocal_494)
	{
		if (Global_53524.f_44)
		{
		}
		else
		{
			fLocal_501 = 0.0f;
			while (!Function_278())
			{
				WAIT(false);
			}
			if (Global_21369.f_256 != 0)
			{
				Function_273(Global_21369.f_256, 0, 1);
				Global_21369.f_256 = 0;
			}
			if (Global_21369.f_252 != 0)
			{
				Function_264(Global_21369.f_252, 0, 1);
				Global_21369.f_252 = 0;
			}
			if (!bLocal_506)
			{
				STREAMING_RELEASE_MAIN_POI();
				HUD_FADE_IN_NOW(2.0f, 1065353216);
				CAMERA_RESET(0);
				if (Function_521(468) > 2 && Function_374(4, 0))
				{
					Global_39290[11] = 0;
				}
			}
		}
	}
	Global_6634 = 0;
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_521(0));
	if (!Global_53524.f_44)
	{
		Function_263(1);
		Function_261((15 - Function_262(90)));
		Function_260((15 - Function_262(90)));
		Function_259(2);
		Function_258((15 - Function_262(90)));
		Function_257((15 - Function_262(60)));
		Function_256((15 - Function_262(105)));
		Function_255(6);
		Function_254((15 - Function_262(200)));
		Function_244();
		if (Global_6605)
		{
			Function_242();
		}
	}
	Function_241();
	if (Global_6605 || !Global_53524.f_28)
	{
		Function_556(2);
		if (!Global_53524.f_44)
		{
			Function_281(1);
		}
		else
		{
			SAVE_SOFT_SAVE(2);
		}
	}
	if (GET_USER_DEFINED_WAYPOINT(&Var87))
	{
		Var87.f_4 = 25.0f;
		if (!Function_240(StackVal, StackVal, Var87, Vector(0.0f, 0.0f, 0.0f)))
		{
			Function_238(StackVal, Var87);
		}
	}
	Global_6659 = 4294967295;
	Global_6655 = 0;
	Function_237(1);
	Function_234();
	Global_6605 = 0;
	Global_6607 = 1;
	iLocal_498 = 0;
	iLocal_500 = 0;
	bVar89 = false;
	iVar90 = 0;
	Global_39873 = GET_CURRENT_GAME_TIME();
	Global_119940 = 300;
	iVar91 = 0;
	if (!IS_LAUNCH_RETAIL() && 1)
	{
		Function_232("no_autosave", 0x41200000, 1, 0, 2, 1, 0);
	}
	WAIT(false);
	if (((StackVal || StackVal != 3 != 4) || Global_6624) && bLocal_494)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (Global_6666 && bLocal_494)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	SET_PLAYER_CONTROL_RUMBLE(0, 1);
	SCRIPT_DONE_LOADING();
	switch (bLocal_497)
	{
		case 0x00000000:
			PRINTSTRING("Launching soak test.");
			LAUNCH_NEW_SCRIPT("systemTest/SoakTests/soaktest", 0);
			break;
	}
	if (!Function_231())
	{
		Function_230(IS_GOLDEN_GUNS_ON());
	}
	while (!IS_EXITFLAG_SET())
	{
		if (bLocal_505)
		{
			PRINTSTRING("Time for Exec:");
			PRINTINT(iLocal_500);
			PRINTSTRING(":");
			fVar92 = GET_PROFILE_TIME();
		}
		switch (bLocal_500)
		{
			case 0x00000000:
				if (Function_317(&iLocal_498, &fLocal_501, 1, 0))
				{
					iLocal_498 = 0;
					bLocal_500 = true;
				}
				iVar90++;
				bVar89 = false;
				break;
			
			case 0x00000001:
				Function_229();
				bLocal_500 = 2;
				iVar90++;
				bVar89 = false;
				break;
			
			case 0x00000002:
				if (Global_6619)
				{
					iLocal_499 = 0;
					bLocal_500 = true;
					Global_6619 = 0;
				}
				else if (Function_220(&iLocal_499))
				{
					bLocal_500 = 3;
					iLocal_499 = 0;
				}
				iVar90++;
				bVar89 = false;
				break;
			
			case 0x00000003:
				if (Function_219(1, 2) == 0)
				{
					if (Global_6623)
					{
						Global_6623 = 0;
						CLEAR_PRINTED_OBJECTIVE();
						Function_218();
					}
				}
				if (Function_219(2, 2) != 0 && Function_219(2, 1) != 0)
				{
					if (Global_6625)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_6625 = 0;
					}
				}
				if (Function_219(4, 2) == 0)
				{
					if (Global_6627)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_6627 = 0;
					}
				}
				if (Function_219(6, 2) == 0)
				{
					if (Global_6635)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_6635 = 0;
					}
				}
				else
				{
					Global_6635 = 1;
				}
				if (Function_219(3, 2) == 0)
				{
					if (Global_6628)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_6628 = 0;
					}
				}
				iVar90++;
				bVar89 = false;
				bLocal_500 = 4;
				break;
			
			case 0x00000004:
				Global_99472 = Function_217();
				if (!Global_6652)
				{
					if (Global_99472 == 32)
					{
						if (Global_99471 == 30.0f)
						{
							Global_99471 = 30.0f;
							SET_TIME_ACCELERATION(Global_99471);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0,5f);
						}
					}
					else if (Global_99472 != 1 || Global_99472 != 2)
					{
						if (GET_HOUR(GET_TIME_OF_DAY()) < 5 && GET_HOUR(GET_TIME_OF_DAY()) > 9)
						{
							if (Global_99471 == 15.0f)
							{
								Global_99471 = 15.0f;
								SET_TIME_ACCELERATION(Global_99471);
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0,75f);
								if (Global_43787 == 1 || Function_216())
								{
									Global_26182.f_44++;
								}
							}
						}
						else if (Global_99471 == 30.0f)
						{
							Global_99471 = 30.0f;
							SET_TIME_ACCELERATION(Global_99471);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
						}
					}
					else if (Global_99472 != 8 || Global_99472 != 16)
					{
						if (GET_HOUR(GET_TIME_OF_DAY()) < 15 && GET_HOUR(GET_TIME_OF_DAY()) > 19)
						{
							if (Global_99471 == 15.0f)
							{
								Global_99471 = 15.0f;
								SET_TIME_ACCELERATION(Global_99471);
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0,85f);
							}
						}
						else if (Global_99471 == 30.0f)
						{
							Global_99471 = 30.0f;
							SET_TIME_ACCELERATION(Global_99471);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
						}
					}
					else if (Global_99471 == 30.0f)
					{
						Global_99471 = 30.0f;
						SET_TIME_ACCELERATION(Global_99471);
						SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
					}
				}
				iVar90++;
				bVar89 = false;
				bLocal_500 = 5;
				break;
			
			case 0x00000005:
				Function_97();
				Function_89();
				Function_80(&iLocal_502, &uLocal_503);
				Function_77();
				Function_26();
				if (((((!Global_6623 && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !Global_6638) && !Global_6624) && !Global_6639)
				{
					if (Global_21369.f_256 != 0)
					{
						Function_273(Global_21369.f_256, 1, 1);
						Global_21369.f_256 = 0;
					}
					if (Global_21369.f_252 != 0)
					{
						Function_264(Global_21369.f_252, 1, 1);
						Global_21369.f_252 = 0;
					}
				}
				if (Global_43786 > 3)
				{
					if (!Function_509((*&Global_21369 + 260)[2], 1))
					{
						if (Function_374(48, 0))
						{
							Function_412(2, 0);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 2))
					{
						if (Function_374(49, 0))
						{
							Function_412(2, 1);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 4))
					{
						if (Function_374(50, 0))
						{
							Function_412(2, 2);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 8))
					{
						if (Function_374(51, 0))
						{
							Function_412(2, 3);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 16))
					{
						if (Function_374(52, 0))
						{
							Function_412(2, 4);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 32))
					{
						if (Function_374(53, 0))
						{
							Function_412(2, 5);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 64))
					{
						if (Function_374(54, 0))
						{
							Function_412(2, 6);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 128))
					{
						if (Function_374(55, 0))
						{
							Function_412(2, 7);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 256))
					{
						if (Function_374(56, 0))
						{
							Function_412(2, 8);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 512))
					{
						if (Function_374(57, 0))
						{
							Function_412(2, 9);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 0x1000000))
					{
						if (Function_23(10))
						{
							Function_412(2, 24);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[2], 0x4000000))
					{
						if (Function_23(15))
						{
							Function_412(2, 26);
						}
					}
					if (!Function_509((*&Global_21369 + 260)[7], 0x40000000))
					{
						if (Function_22(Global_46914[4]))
						{
							Function_412(7, 30);
						}
					}
				}
				if (IntToFloat(Function_521(474)) < Function_21(474))
				{
					Function_418(476, 1, 0, 0);
					Function_8(474, 1, 0);
				}
				if (IntToFloat(Function_521(476)) < Function_21(476))
				{
					Function_418(475, 1, 0, 0);
					Function_8(476, 1, 0);
				}
				if (IntToFloat(Function_521(475)) < Function_21(475))
				{
					Function_418(474, 1, 0, 0);
					Function_8(475, 1, 0);
				}
				if (Function_521(363) >= 8)
				{
					Function_418(365, 1, 0, 0);
					Function_8(363, 1, 0);
				}
				if (Function_521(365) >= 4)
				{
					Function_418(364, 1, 0, 0);
					Function_8(365, 1, 0);
				}
				if (Function_521(364) >= 8)
				{
					Function_418(363, 1, 0, 0);
					Function_8(364, 1, 0);
				}
				if (Global_47150)
				{
					PREVENT_DESPAWN_CLEAR();
					Global_47150 = 0;
				}
				if (!iLocal_507)
				{
					if (NET_IS_UNLOCKED(11))
					{
						Global_6603 = (Global_6603 + 1.0f);
					}
					iLocal_507 = 1;
				}
				bVar89 = (1000 - iVar90 * 33);
				iVar90 = 0;
				bLocal_500 = false;
				break;
		}
		if (bLocal_505)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar92));
			PRINTNL();
		}
		WAIT(bVar89);
	}
	Function_4(&uVar45);
	Function_3();
	if (!HUD_IS_FADED())
	{
		HUD_FADE_OUT(0,5f, 1f, 1);
	}
	Function_2();
	Function_1();
	Function_363();
	Function_364();
	RELEASE_LAYOUT_REF(FIND_NAMED_LAYOUT("Formations"));
	RELEASE_LAYOUT_REF(FIND_NAMED_LAYOUT("aispeech"));
	RELEASE_LAYOUT_REF(&Global_93250);
	RELEASE_LAYOUT_REF(&Global_10992);
	RELEASE_LAYOUT_REF(&Global_10994);
	RELEASE_LAYOUT_REF(&Global_10996);
	DESTROY_GC_OBJECTS(1, 1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x48C8 / 18632
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_16865)
	{
		if (IS_BLIP_VALID(&(Global_16865[iVar0])))
		{
			REMOVE_BLIP(&(Global_16865[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_2() //Position: 0x48FB / 18683
{
	Function_4(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_3() //Position: 0x490E / 18702
{
	ANIMAL_SPECIES_GRINGO_CLEAR_ALL();
	return;
}

void Function_4(int iParam0) //Position: 0x4917 / 18711
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_5(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(struct<2>[] Param0, int iParam1) //Position: 0x493F / 18751
{
	if (Function_7(&(Param0[iParam12]), 4))
	{
		if (Function_7(&(Param0[iParam12]), 1))
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
			Function_6(&(Param0[iParam12]), 1);
			Function_6(&(Param0[iParam12]), 2);
			Function_6(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_6(struct<13> Param0) //Position: 0x4A8A / 19082
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_7(struct<13> Param0) //Position: 0x4AA7 / 19111
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_8(int iParam0, bool bParam1, bool bParam2) //Position: 0x4AC5 / 19141
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
	Function_20(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_9(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_9(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x4CC2 / 19650
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_21(390))), 32);
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
					bVar19 = (Function_19(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_19(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_17(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_14(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_11(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_10(), &Var9);
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

var Function_10() //Position: 0x5300 / 21248
{
	int iVar0;
	
	return &iVar0;
}

var Function_11(int iParam0) //Position: 0x5309 / 21257
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_12(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x531A / 21274
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_13(char* cParam0) //Position: 0x5411 / 21521
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_14(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x542C / 21548
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_16(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_15(Function_16(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_15(int iParam0, int iParam1) //Position: 0x5493 / 21651
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_16(int iParam0, bool bParam1) //Position: 0x54A5 / 21669
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_17(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x54B7 / 21687
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
	if (((Function_18(iParam0) != 19 || Function_18(iParam0) != 17) || Function_18(iParam0) != 10) || Function_18(iParam0) != 9)
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

int Function_18(int iParam0) //Position: 0x55EB / 21995
{
	return Global_55480[iParam016].f_96;
}

float Function_19(int iParam0) //Position: 0x55FA / 22010
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_20(int iParam0) //Position: 0x5633 / 22067
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

float Function_21(int iParam0) //Position: 0x57CD / 22477
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

bool Function_22(int iParam0) //Position: 0x580A / 22538
{
	if (!Function_349(iParam0))
	{
		return 0;
	}
	return Function_421(&(Global_43791[iParam0]), 4096);
}

bool Function_23(int iParam0) //Position: 0x5828 / 22568
{
	if (!Function_25(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_24(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_24(int iParam0, int iParam1) //Position: 0x5879 / 22649
{
	int iVar0;
	
	if (!Function_25(iParam0))
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

bool Function_25(int iParam0) //Position: 0x58A6 / 22694
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_26() //Position: 0x58BC / 22716
{
	int iVar0;
	
	if ((((((((Global_99146 || Global_6627) || Global_6638) || Global_6639) || Global_6624) || !IS_ACTOR_ALIVE(&Global_54076)) || HUD_IS_FADED()) || HUD_IS_FADING()) || (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (!Global_39428[iVar0])
		{
			if (NET_IS_UNLOCKED(iVar0))
			{
				Function_27(iVar0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_27(int iParam0) //Position: 0x5920 / 22816
{
	int iVar0;
	
	if (!Function_76(iParam0) && 0)
	{
		return;
	}
	iVar0 = 1;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_75(3))
			{
				if (!Function_23(1))
				{
					if (!Function_374(2, 0))
					{
						return;
					}
					Function_74(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_75(3))
			{
				if (!Function_23(2) && !Function_73(2))
				{
					Function_72(2, 0, 1, 1, 1);
					Function_50(2, 1);
					iVar0 = 0;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_39428[iParam0])
			{
				Function_49(992, 0, 1);
				Function_48(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_30(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_30(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_30(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_30(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_30(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_30(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_30(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_30(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_30(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_30(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_30(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_30(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_30(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_30(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_30(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_30(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_30(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_30(4);
			break;
		
		case 0x00000023:
			if (Function_29(0, 0, 1, 1))
			{
				return;
			}
			break;
		
		case 0x00000028:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(60))
			{
				AWARD_ACHIEVEMENT(60);
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			iVar0 = 0;
			break;
		
		case 0x00000008:
			if (!Function_374(2, 0))
			{
				return;
			}
			Function_28(11);
			break;
		
		case 0x00000000:
			if (!Function_374(2, 0))
			{
				return;
			}
			Function_28(6);
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			return;
			break;
		
		default:
			iVar0 = 0;
			LOG_ERROR("Unimplemented Net Unlock - please do!");
			break;
	}
	iVar0 = iVar0;
	Global_39428[iParam0] = 1;
	return;
}

void Function_28(int iParam0) //Position: 0x5C0F / 23567
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_232("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

bool Function_29(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5C46 / 23622
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

bool Function_30(bool bParam0) //Position: 0x5CF5 / 23797
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_545("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_231())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_6667[Global_1096628] + 16);
		}
	}
	if (bParam0 != 4)
	{
		Function_31();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

void Function_31() //Position: 0x5D5C / 23900
{
	Function_43();
	Function_42();
	Function_42();
	Function_41();
	Function_41();
	Function_40();
	Function_40();
	Function_39(0);
	Function_39(0);
	Function_36();
	Function_35();
	Function_34();
	Function_33();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_32();
	return;
}

void Function_32() //Position: 0x5DA7 / 23975
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

void Function_33() //Position: 0x5EAD / 24237
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

void Function_34() //Position: 0x5EE0 / 24288
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

void Function_35() //Position: 0x6073 / 24691
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

void Function_36() //Position: 0x622C / 25132
{
	Function_37(&Global_42918, 1, 0);
	return;
}

void Function_37(struct<2317> Param0) //Position: 0x623A / 25146
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
	
	uVar0 = Function_38();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
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

var Function_38() //Position: 0x6457 / 25687
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_39(char* cParam0) //Position: 0x646C / 25708
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_521((50 + iVar4)) + Function_521((183 + iVar4))) + Function_521((90 + iVar4)));
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
	Function_520(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_40() //Position: 0x6513 / 25875
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
		iVar2 = ((Function_521((50 + iVar3) + 15) + Function_521((183 + iVar3) + 15)) + Function_521((90 + iVar3) + 15));
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
	Function_520(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_41() //Position: 0x659C / 26012
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
			iVar2 = ((Function_521((50 + iVar3) + 8) + Function_521((183 + iVar3) + 8)) + Function_521((90 + iVar3) + 8));
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
	Function_520(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_42() //Position: 0x6633 / 26163
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_521((50 + iVar3)) + Function_521((183 + iVar3))) + Function_521((90 + iVar3)));
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
	Function_520(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_43() //Position: 0x66B2 / 26290
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_44(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_520(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_44(int iParam0, bool bParam1, int iParam2) //Position: 0x66EF / 26351
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
	Function_45(iParam0, bParam1, 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_9(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_45(int iParam0, bool bParam1, bool bParam2) //Position: 0x68FB / 26875
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

struct<16> Function_46() //Position: 0x6B3F / 27455
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_47(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_116927[iVar06].f_40 < Global_116927[iVar16].f_40)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16);
	}
	if (Global_21684[Function_447(Global_10966)7].f_32 < Global_116927[iVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[iVar143] + 4);
}

bool Function_47(int iParam0) //Position: 0x6BDC / 27612
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_48(bool bParam0, bool bParam1, int iParam2) //Position: 0x6BF1 / 27633
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_312(bParam0), Function_38()) == 0)
		{
			ADD_ITEM(Function_312(bParam0), Function_38(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_312(bParam0), Function_38(), &iParam2);
	return 1;
}

void Function_49(var uParam0, bool bParam1, bool bParam2) //Position: 0x6C3F / 27711
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_551(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_551(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_50(bool bParam0, bool bParam1) //Position: 0x6C6E / 27758
{
	bool bVar0;
	int iVar1;
	
	if (Function_47(20))
	{
		Function_51(bParam0, 16, 1, 0, &bParam1);
	}
	bVar0 = Function_538(0, Global_46760[2], 3);
	iVar1 = Function_415(bVar0);
	if (iVar1 >= 0)
	{
		Function_51(bParam0, 2, 1, 0, &bParam1);
	}
	return;
}

void Function_51(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6CAD / 27821
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_75(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_24(bParam0, 2))
	{
		Function_418(456, 1, 0, 0);
		Function_71(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_232(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_70(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_71(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_29(0, 0, 1, 1))
			{
				Function_281(1);
				Function_280(1, 0);
			}
			else
			{
				Function_69();
			}
		}
		Function_64(bParam0);
		if (StackVal && !Function_509(((((!Function_63() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_509((((Function_63() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_231())
		{
			if (!Function_62(Global_119934, 2))
			{
				Function_57(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_53();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_52(3, bParam1);
				break;
			
			case 0x00000005:
				Function_52(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_52(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_52(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_52(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_52(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_412(2, 24);
				break;
			
			case 0x00000003:
				Function_412(2, 25);
				break;
			
			case 0x0000000F:
				Function_412(2, 26);
				break;
			
			case 0x0000000D:
				Function_412(2, 27);
				break;
			
			case 0x0000000E:
				Function_412(2, 28);
				break;
			}
	}
}

void Function_52(int iParam0, bool bParam1) //Position: 0x6F4C / 28492
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

void Function_53() //Position: 0x6FBB / 28603
{
	if (Function_25(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_56(Global_42827);
			*(&Global_42827 + 8) = Function_54(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_56(Global_42827);
			*(&Global_42827 + 8) = Function_54(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_54(int iParam0, int iParam1) //Position: 0x703B / 28731
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
					if (Function_374(6, 0) || Function_374(12, 0))
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
					if (Function_47(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_374(5, 0))
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
					if (Function_47(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_47(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_47(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_47(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_374(26, 0))
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
					if (Function_47(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_47(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_47(27) && iVar16)
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
					if (Function_47(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_47(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_47(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_47(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_374(17, 0) && iVar13)
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
					if (Function_47(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_374(6, 0) && Function_47(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_47(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_374(9, 0) && Function_47(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_47(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_374(8, 0) && iVar17)
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
	if (Function_55(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_55(StackVal, vVar2))
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
	if (!Function_55(StackVal, vVar2))
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

bool Function_55(char* cParam0) //Position: 0x7C9E / 31902
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_56(int iParam0) //Position: 0x7CB6 / 31926
{
	int iVar0;
	int iVar1;
	
	if (!Function_25(iParam0))
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

void Function_57(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7D05 / 32005
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_59(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_58(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_58(char* cParam0) //Position: 0x7D7A / 32122
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

bool Function_59(int iParam0, var uParam1, int iParam2) //Position: 0x7DB4 / 32180
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
		if (Function_61(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_60(uVar0))
		{
			case 0x00000002:
				if (!Function_62(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_60(char* cParam0) //Position: 0x7E30 / 32304
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

int Function_61(int iParam0) //Position: 0x7ED1 / 32465
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_550(&iVar1, 2147483648);
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

bool Function_62(int iParam0, int iParam1) //Position: 0x7F0E / 32526
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_63() //Position: 0x7F21 / 32545
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_64(bool bParam0) //Position: 0x7F4E / 32590
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
			if (Function_70(bParam0, Function_68(bVar24)))
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
			if (Function_70(bParam0, Function_68(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_67(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_66(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_65(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_65(int iParam0) //Position: 0x8100 / 33024
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_25(iParam0))
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

void Function_66(char* cParam0, bool bParam1) //Position: 0x8157 / 33111
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_67(int iParam0) //Position: 0x817C / 33148
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_25(iParam0))
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

int Function_68(bool bParam0) //Position: 0x81D2 / 33234
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_69() //Position: 0x81DE / 33246
{
	return;
}

bool Function_70(bool bParam0, int iParam1) //Position: 0x81E4 / 33252
{
	int iVar0;
	
	if (!Function_25(bParam0))
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

void Function_71(bool bParam0, int iParam1) //Position: 0x8243 / 33347
{
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_72(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8298 / 33432
{
	char* cVar0[32];
	
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_75(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_73(bParam0))
	{
		Function_418(456, 1, 0, 0);
		Function_71(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_29(0, 0, 1, 1))
			{
				Function_281(1);
				Function_280(1, 5);
			}
			else
			{
				Function_69();
			}
		}
		Function_64(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_63() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_63() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_232(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_231())
		{
			if (!Function_62(Global_119934, 2))
			{
				Function_57(&Global_54076, 2, 1, 0);
			}
		}
	}
}

bool Function_73(int iParam0) //Position: 0x83F4 / 33780
{
	if (!Function_25(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_24(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_74(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8446 / 33862
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_23(bParam0))
	{
		if (!Function_73(bParam0))
		{
			Function_72(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_418(457, 1, 0, 0);
		Function_71(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_29(0, 0, 1, 1))
			{
				Function_281(1);
				Function_280(1, 0);
			}
			else
			{
				Function_69();
			}
		}
	}
	return;
}

bool Function_75(int iParam0) //Position: 0x85E7 / 34279
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_76(int iParam0) //Position: 0x8603 / 34307
{
	switch (iParam0)
	{
		case 0x00000028:
			return 1;
			break;
		
		case 0x00000023:
			return 1;
			break;
	}
	return 0;
}

void Function_77() //Position: 0x8627 / 34343
{
	Function_78(7);
	Function_78(8);
	Function_78(10);
	Function_78(6);
	Function_78(9);
	Function_78(11);
	return;
}

void Function_78(bool bParam0) //Position: 0x8649 / 34377
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		fVar0 = (1.0f - (_GET_AMMO_AMOUNT(&Global_54076, bParam0, 0) / _GET_MAX_AMMO_AMOUNT(&Global_54076, bParam0)));
		if (fVar0 > 0.0f)
		{
			fVar0 = 0.0f;
		}
		else if (fVar0 < 1.0f)
		{
			fVar0 = 1.0f;
		}
		if (Function_79())
		{
			fVar0 = (fVar0 * 0,5f);
		}
		SET_AMMO_DROP_BIAS(bParam0, fVar0);
	}
	return;
}

bool Function_79() //Position: 0x869F / 34463
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_80(float fParam0, int iParam1) //Position: 0x86CA / 34506
{
	int iVar0;
	struct<2> Var1;
	
	if ((Function_29(0, 0, 1, 1) | 0 || Global_6646) || Global_6647)
	{
		if (IS_BLIP_VALID(&iParam1))
		{
			REMOVE_BLIP(&iParam1);
		}
		return;
	}
	iVar0 = Function_88(1, 0);
	if (!Function_87(iVar0) && !Global_26651)
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
		Var1 = Vector(-2833,843f, 50,332f, 2418,003f);
	}
	else
	{
		Var1 = Global_26200[iVar014];
	}
	if (fParam0 != iVar0 && IS_BLIP_VALID(&iParam1))
	{
		if (Function_86(StackVal, StackVal, Global_54078, Var1) > 4.0f)
		{
			REMOVE_BLIP(&iParam1);
		}
		return;
	}
	if (IS_BLIP_VALID(&iParam1))
	{
		REMOVE_BLIP(&iParam1);
	}
	fParam0 = iVar0;
	if (StackVal && !Function_55(Function_86(StackVal, StackVal, Global_54078, Var1) < 4,5f, Var1))
	{
		iParam1 = ADD_BLIP_FOR_COORD(&Var1, 326, 0, 2, 0);
		if (fParam0 != 4294967295)
		{
			UNK_0x1E98AFEC(&iParam1, 1);
			Function_81(StackVal, Global_26200[fParam014].f_48, 16, Var1, 63);
		}
	}
	return;
}

int Function_81(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x87CA / 34762
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_349(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_55(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_85(iParam1);
	iVar1 = 4294967295;
	iVar3 = Function_84(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_83(iVar3);
		Var6 = Function_83(iVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_83(StackVal);
				Var4 = Function_83(StackVal);
				if (Function_240(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = iVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_82(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_82(int iParam0) //Position: 0x89B3 / 35251
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

struct<8> Function_83(int iParam0) //Position: 0x8AEA / 35562
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

int Function_84(vector3 vParam0) //Position: 0x8B41 / 35649
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

int Function_85(int iParam0) //Position: 0x8B8F / 35727
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

float Function_86(struct<2> Param0, struct<2> Param2) //Position: 0x8C47 / 35911
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

bool Function_87(int iParam0) //Position: 0x8C64 / 35940
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_88(bool bParam0, bool bParam1) //Position: 0x8C7A / 35962
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_86(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_86(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_87(bVar0) && !&bParam1)
	{
		bVar0 = Function_88(&bParam0, 1);
	}
	return bVar0;
}

void Function_89() //Position: 0x8D46 / 36166
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (Function_29(0, 0, 1, 1) | 0 || !Global_39290[11])
	{
		iVar0 = 0;
		while (iVar0 <= Global_26200)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iVar014] + 72))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
			}
			if (IS_OBJECT_VALID(&Global_26200[iVar014] + 56))
			{
				DESTROY_OBJECT(&Global_26200[iVar014] + 56);
			}
			if (IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
			{
				DESTROY_OBJECT(&Global_26200[iVar014] + 64);
			}
			if (!Global_39290[11])
			{
				if (Function_316(Global_26200[iVar014].f_48))
				{
					if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
					{
						uVar1 = DECOR_GET_OBJECT(&Global_26200[iVar014] + 80, "roomvol");
						if (IS_OBJECT_VALID(&uVar1))
						{
							if (IS_DOOR_LOCKED(&Global_26200[iVar014] + 80))
							{
								if (IS_ACTOR_IN_VOLUME(&Global_54076, GET_VOLUME_FROM_OBJECT(&uVar1)))
								{
									Function_96(&Global_26200[iVar014] + 80, 1);
									if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
									{
										Function_96(&Global_26200[iVar014] + 88, 1);
									}
								}
							}
							else if (!IS_ACTOR_IN_VOLUME(&Global_54076, GET_VOLUME_FROM_OBJECT(&uVar1)))
							{
								Function_95(&Global_26200[iVar014] + 80, 1);
								if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
								{
									Function_95(&Global_26200[iVar014] + 88, 1);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Global_26200)
	{
		if (Global_26200[iVar014].f_40 != 2 || Global_26200[iVar014].f_40 != 1)
		{
			if (Global_26200[iVar014].f_52 == Global_43787)
			{
				if (Function_316(Global_26200[iVar014].f_48))
				{
					if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
					{
						uVar2 = DECOR_GET_OBJECT(&Global_26200[iVar014] + 80, "roomvol");
						if (IS_OBJECT_VALID(&uVar2))
						{
							if (IS_DOOR_LOCKED(&Global_26200[iVar014] + 80))
							{
								if (IS_ACTOR_IN_VOLUME(&Global_54076, GET_VOLUME_FROM_OBJECT(&uVar2)))
								{
									Function_96(&Global_26200[iVar014] + 80, 1);
									if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
									{
										Function_96(&Global_26200[iVar014] + 88, 1);
									}
								}
							}
							else if (!IS_ACTOR_IN_VOLUME(&Global_54076, GET_VOLUME_FROM_OBJECT(&uVar2)))
							{
								Function_95(&Global_26200[iVar014] + 80, 1);
								if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
								{
									Function_95(&Global_26200[iVar014] + 88, 1);
								}
							}
						}
					}
					if (StackVal && (IS_OBJECT_VALID(&Global_26200[iVar014] + 56) || Function_55(IS_OBJECT_VALID(&Global_26200[iVar014] + 64), (&Global_26200[iVar014] + 28))))
					{
						if (GATEWAY_UPDATE(&Global_26200[iVar014] + 56))
						{
							DESTROY_OBJECT(&Global_26200[iVar014] + 56);
							if (Global_26200[iVar014].f_40 == 2)
							{
								*(&Global_26200[iVar014] + 72) = ADD_SCRIPT_USE_CONTEXT("house_purchase", true, "@GENERIC.USE", I2STR(Global_26200[iVar014].f_44), 0, 0, 0, 4294967295, 0);
							}
							else
							{
								*(&Global_26200[iVar014] + 72) = ADD_SCRIPT_USE_CONTEXT("house_rent", true, "@GENERIC.USE", I2STR(Global_26200[iVar014].f_44), 0, 0, 0, 4294967295, 0);
							}
						}
						if (IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
						{
							if (GATEWAY_UPDATE(&Global_26200[iVar014] + 64))
							{
								DESTROY_OBJECT(&Global_26200[iVar014] + 64);
								if (Global_26200[iVar014].f_40 == 2)
								{
									*(&Global_26200[iVar014] + 72) = ADD_SCRIPT_USE_CONTEXT("house_purchase", true, "@GENERIC.USE", I2STR(Global_26200[iVar014].f_44), 0, 0, 0, 4294967295, 0);
								}
								else
								{
									*(&Global_26200[iVar014] + 72) = ADD_SCRIPT_USE_CONTEXT("house_rent", true, "@GENERIC.USE", I2STR(Global_26200[iVar014].f_44), 0, 0, 0, 4294967295, 0);
								}
							}
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iVar014] + 72))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Global_26200[iVar014] + 72))
						{
							if (Function_94() > Global_26200[iVar014].f_44)
							{
								Function_93(Global_26200[iVar014].f_44, 1);
								RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
								Function_91(iVar0);
								if (IS_OBJECT_VALID(&Global_26200[iVar014] + 56))
								{
									DESTROY_OBJECT(&Global_26200[iVar014] + 56);
								}
								if (IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
								{
									DESTROY_OBJECT(&Global_26200[iVar014] + 64);
								}
							}
							else
							{
								Function_232("house_no_cash", 0x41200000, 1, 0, 2, 1, 0);
								RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
							}
						}
						else if (StackVal && (StackVal || Function_86(StackVal, Function_55(Function_86(StackVal, StackVal, Global_54078, *(&Global_26200[iVar014] + 16)) < 3.0f, *(&Global_26200[iVar014] + 28)), Global_54078, *(&Global_26200[iVar014] + 28)) < 3.0f))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
						}
					}
					else
					{
						uVar3 = Function_90();
						if (!IS_OBJECT_VALID(&Global_26200[iVar014] + 56))
						{
							*(&Global_26200[iVar014] + 56) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &uVar3, Function_10(), *(&Global_26200[iVar014] + 16), Vector(0.0f, 0.0f, 0.0f), Vector(2,5f, 1,5f, 2,5f), 3, Function_38(), 3, 4294967295, 0, 1, 1);
							if (Global_26200[iVar014].f_40 == 2)
							{
								ADD_BLIP_FOR_OBJECT(&Global_26200[iVar014] + 56, 420, 0f, 2, 0);
								UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(&Global_26200[iVar014] + 56), 1);
								SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(&Global_26200[iVar014] + 56), 1,25f);
								Function_81(StackVal, Global_26200[iVar014].f_48, 17, Global_26200[iVar014], 63);
							}
							else
							{
								ADD_BLIP_FOR_OBJECT(&Global_26200[iVar014] + 56, 421, 0f, 2, 0);
								UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(&Global_26200[iVar014] + 56), 1);
								Function_81(StackVal, Global_26200[iVar014].f_48, 18, Global_26200[iVar014], 63);
								SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(&Global_26200[iVar014] + 56), 1,25f);
							}
						}
						if (!Function_55(StackVal, *(&Global_26200[iVar014] + 28)))
						{
							if (!IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
							{
								*(&Global_26200[iVar014] + 64) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &uVar3, Function_10(), *(&Global_26200[iVar014] + 28), Vector(0.0f, 0.0f, 0.0f), Vector(2,5f, 1,5f, 2,5f), 3, Function_38(), 3, 4294967295, 0, 1, 1);
							}
						}
					}
				}
				else
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iVar014] + 72))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
					}
					if (IS_OBJECT_VALID(&Global_26200[iVar014] + 56))
					{
						DESTROY_OBJECT(&Global_26200[iVar014] + 56);
					}
					if (IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
					{
						DESTROY_OBJECT(&Global_26200[iVar014] + 64);
					}
				}
			}
			else
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iVar014] + 72))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
				}
				if (IS_OBJECT_VALID(&Global_26200[iVar014] + 56))
				{
					DESTROY_OBJECT(&Global_26200[iVar014] + 56);
				}
				if (IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
				{
					DESTROY_OBJECT(&Global_26200[iVar014] + 64);
				}
			}
		}
		else
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iVar014] + 72))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iVar014] + 72);
			}
			if (IS_OBJECT_VALID(&Global_26200[iVar014] + 56))
			{
				DESTROY_OBJECT(&Global_26200[iVar014] + 56);
			}
			if (IS_OBJECT_VALID(&Global_26200[iVar014] + 64))
			{
				DESTROY_OBJECT(&Global_26200[iVar014] + 64);
			}
		}
		iVar0++;
	}
	return;
}

var Function_90() //Position: 0x94BB / 38075
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(&iVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return &iVar0;
}

void Function_91(int iParam0) //Position: 0x952C / 38188
{
	var uVar0;
	var uVar1;
	
	if (!Function_87(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_96(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_96(&Global_26200[iParam014] + 88, 0);
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
			Function_418(468, 1, 0, 0);
			Function_412(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_232("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_92(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_72(14, 1, 0, 0, 0);
				Function_51(14, 1, 0, 0, 0);
			}
			if (!Function_29(0, 0, 1, 1))
			{
				Function_281(1);
				Function_280(1, 6);
			}
			else
			{
				Function_69();
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
			Function_232("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_418(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_412(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_92(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x97EC / 38892
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
		Function_83(Function_84(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_83(Function_84(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_83(StackVal);
				Var1 = Function_83(StackVal);
				if (Function_240(StackVal, StackVal, Var1, Var3))
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

int Function_93(bool bParam0, bool bParam1) //Position: 0x98F7 / 39159
{
	bool bVar0;
	
	bVar0 = Function_521(0);
	if ((Function_521(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_8(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_521(0));
	return 1;
}

int Function_94() //Position: 0x9988 / 39304
{
	return Function_521(0);
}

void Function_95(var uParam0, int iParam1) //Position: 0x9992 / 39314
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

void Function_96(var uParam0, int iParam1) //Position: 0x99ED / 39405
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

void Function_97() //Position: 0x9A45 / 39493
{
	var uVar0;
	
	uVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(&uVar0))
	{
		return;
	}
	if (Function_215(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_213(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_212(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_211(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_210(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_208(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_205(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_202(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_201(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_199(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_197(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_194(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_193(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_192(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_186(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_177(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_176(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_175(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_174(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_173(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_170(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_168(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_167(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_164(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_163(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_162(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_160(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_156(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_155(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_139(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_138(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_137(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_136(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_135(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_134(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_133(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_132(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_130(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_129(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_128(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_127(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_126(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_125(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_124(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_122(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_119(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_117(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_116(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_115(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_114(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_113(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_107(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_106(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_105(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_101(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_100(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_99(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_98(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_98(int iParam0) //Position: 0x9D4D / 40269
{
	if (STRING_CONTAINS_STRING(&iParam0, "playermeds"))
	{
		Function_48(3, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0) //Position: 0x9D73 / 40307
{
	var uVar0;
	var uVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "playemitteroncurve"))
	{
		uVar0 = GET_CURVE_BY_NAME("rsdEFFECTCURVE_TNTFuse", 20);
		uVar1 = CREATE_RMPTFX_EMITTER_ON_CURVE("TNTFuse", "muzzle_dynamite", &uVar0, 5.0f);
		UNK_0x6745191B(StackVal, &uVar1, Vector(180.0f, 0.0f, 0.0f));
		return 1;
	}
	return 0;
}

bool Function_100(int iParam0) //Position: 0x9DF0 / 40432
{
	if (STRING_CONTAINS_STRING(&iParam0, "makeswim"))
	{
		DECOR_SET_BOOL(&Global_54076, "swimming", 1);
		return 1;
	}
	return 0;
}

bool Function_101(int iParam0) //Position: 0x9E21 / 40481
{
	if (STRING_CONTAINS_STRING(&iParam0, "regions_reset"))
	{
		Function_102(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_102(var uParam0, bool bParam1, int iParam2) //Position: 0x9E49 / 40521
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_349(Global_43789))
		{
			Function_420(&(Global_43791[Global_43789]), 131072);
			Function_448(&(Global_43791[Global_43789]), 2097152);
			Function_103(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_421(&(Global_43791[iVar0]), 4) || Function_421(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_448(&(Global_43791[iVar0]), 2097155);
					Function_420(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_103(int iParam0) //Position: 0x9F55 / 40789
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_104())
			{
				return;
			}
		}
		if (!Function_421(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_104() //Position: 0x9FD4 / 40916
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_421(&(Global_43791[iVar0]), 4) || Function_421(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_105(int iParam0) //Position: 0xA03D / 41021
{
	if (STRING_CONTAINS_STRING(&iParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(false);
		}
		SET_ANIM_SET_FOR_ACTOR(&Global_54076, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(&Global_54076, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_106(int iParam0) //Position: 0xA123 / 41251
{
	char* cVar0[32];
	var uVar8;
	var uVar9;
	struct<2> Var11;
	var uVar13;
	
	if (STRING_CONTAINS_STRING(&iParam0, "nghostscan"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			stradd(&cVar0, "v_region", 32);
			uVar8 = FIND_VOLUME_IN_LAYOUT(&Global_46715, &cVar0);
			uVar9 = Vector(0.0f, 0.0f, 0.0f);
			Var11 = Vector(0.0f, 0.0f, 0.0f);
			uVar13 = Vector(0.0f, 0.0f, 0.0f);
			GET_VOLUME_CENTER(&uVar8, &uVar9);
			FIND_GROUND_INTERSECTION(&uVar9, 10.0f, &Var11, &uVar13);
			AMBIENT_RESET_FILTER(0);
			AMBIENT_SET_SEARCH_CENTER(Var11);
			AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_IN_AREA_INCLUDES_FILTER(0, 0);
			AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 0.0f, 0);
			UNK_0x30C67D05(0);
			AMBIENT_ENABLE_DISTANCE_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_AT_POINT_FILTER(0);
			AMBIENT_SET_ELEVATION_FILTER(-1.0f, 2.0f);
			AMBIENT_ENABLE_QUADRANT_FILTER(0);
			AMBIENT_ENABLE_SLOPE_FILTER(0);
			return 1;
		}
	}
	return 0;
}

bool Function_107(int iParam0) //Position: 0xA1D4 / 41428
{
	var uVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(&uVar0);
			Function_108(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_108(int iParam0, bool bParam1) //Position: 0xA215 / 41493
{
	bool bVar0;
	int iVar1;
	
	Function_44(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_112(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + bParam1);
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_109();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 0;
	return 1;
}

int Function_109() //Position: 0xA3B0 / 41904
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
	Function_110();
	return 0;
}

void Function_110() //Position: 0xA451 / 42065
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
		Function_111(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_111(int iParam0) //Position: 0xA50F / 42255
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

var Function_112(int iParam0, int iParam1) //Position: 0xA575 / 42357
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

bool Function_113(int iParam0) //Position: 0xA5BA / 42426
{
	var uVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(&uVar0);
			Function_108(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_114(int iParam0) //Position: 0xA5F4 / 42484
{
	var uVar0;
	var uVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "killRC"))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_10996);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 24);
		uVar1 = START_OBJECT_ITERATOR(&uVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(&uVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar1));
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		return 1;
	}
	return 0;
}

bool Function_115(char* cParam0) //Position: 0xA651 / 42577
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(&cParam0, "pass_all"))
	{
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(&cParam0))
		{
			if (STRING_LENGTH(&cParam0) >= 0)
			{
				strcpy(&cVar0, &cParam0, 64);
				STRING_UPPER(&cVar0);
				PRINTSTRING("PASSING ALL MISSIONS IN STRAND: ");
				PRINTSTRING(&cVar0);
				PRINTNL();
				if (STRING_CONTAINS_STRING(&cVar0, "INTRO"))
				{
					Function_426(Function_538(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_426(Function_538(0, 24, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_426(Function_538(0, 12, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 13, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_426(Function_538(0, 8, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 9, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 23, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_426(Function_538(0, 10, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 11, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 17, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_426(Function_538(0, 18, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 19, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_426(Function_538(0, 2, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 3, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 22, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 6, 1), 0, 1, 1, 0);
					Function_426(Function_538(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_426(Function_538(1, 30, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 33, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 32, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_426(Function_538(1, 34, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_426(Function_538(1, 27, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 26, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 28, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 29, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_426(Function_538(1, 39, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 37, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 38, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 41, 1), 0, 1, 1, 0);
					Function_426(Function_538(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_426(Function_538(2, 45, 1), 0, 1, 1, 0);
					Function_426(Function_538(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_426(Function_538(2, 43, 1), 0, 1, 1, 0);
					Function_426(Function_538(2, 47, 1), 0, 1, 1, 0);
					Function_426(Function_538(2, 48, 1), 0, 1, 1, 0);
					Function_426(Function_538(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_426(Function_538(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_426(Function_538(3, 49, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 55, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 56, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 52, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 53, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 54, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 50, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 51, 1), 0, 1, 1, 0);
					Function_426(Function_538(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_116(int iParam0) //Position: 0xAAEE / 43758
{
	if (STRING_CONTAINS_STRING(&iParam0, "scantest"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(&iParam0, "quad"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_quadrant", 0);
		}
		else if (STRING_CONTAINS_STRING(&iParam0, "noffscreen"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_offscreen", 0);
		}
		else if (STRING_CONTAINS_STRING(&iParam0, "nelevation"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_elevation", 0);
		}
		else if (STRING_CONTAINS_STRING(&iParam0, "material"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_material", 0);
		}
		else if (STRING_CONTAINS_STRING(&iParam0, "slope"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_slope", 0);
		}
		else if (STRING_CONTAINS_STRING(&iParam0, "range"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_distance", 0);
		}
		else if (STRING_CONTAINS_STRING(&iParam0, "all"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		else
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		return 1;
	}
	return 0;
}

bool Function_117(char* cParam0) //Position: 0xAD6B / 44395
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(&cParam0, "save"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "SAVE"))
		{
			return 0;
		}
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(&cParam0))
		{
			if (STRING_LENGTH(&cParam0) >= 0)
			{
				strcpy(&cVar1, &cParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					Function_118();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_118();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_280(0, 4294967295);
					PRINTSTRING("SAVED MULTIPLAYER GAME");
					PRINTNL();
					LOG_ERROR("MP GAME SAVED!");
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT SAVE - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		Function_118();
		if (Function_30(bVar0))
		{
			PRINTSTRING("SAVED GAME TO SLOT: ");
			PRINTINT(bVar0);
			PRINTNL();
			LOG_ERROR("GAME SAVED!");
		}
		else
		{
			LOG_ERROR("SAVE FAILED!");
		}
		return 1;
	}
	return 0;
}

void Function_118() //Position: 0xAF63 / 44899
{
	struct<5> Var0;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	Var0.f_4 = (StackVal + 1.0f);
	FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	Global_53524.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_24 = Global_43788;
	if (Function_349(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_119(char* cParam0) //Position: 0xAFD2 / 45010
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(&cParam0, "load"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "LOAD"))
		{
			return 0;
		}
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(&cParam0))
		{
			if (STRING_LENGTH(&cParam0) >= 0)
			{
				strcpy(&cVar1, &cParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					LOAD_SOFT_SAVE(0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					LOAD_SOFT_SAVE(1);
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_121();
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT LOAD - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		PRINTSTRING("LOADING GAME FROM SLOT: ");
		PRINTINT(bVar0);
		PRINTNL();
		Function_120(bVar0);
		return 1;
	}
	return 0;
}

int Function_120(bool bParam0) //Position: 0xB0F1 / 45297
{
	if (bParam0 != 4)
	{
		if (Function_545("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				if (DOES_FILE_EXIST(SS_GET_STRING(2, bParam0)))
				{
					return LOAD_GAME(SS_GET_STRING(2, bParam0));
				}
			}
		}
	}
	SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, bParam0));
	return 1;
}

var Function_121() //Position: 0xB134 / 45364
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, 0, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_122(int iParam0) //Position: 0xB16F / 45423
{
	char[] cVar0[4];
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<2> Var9;
	struct<2> Var11;
	var uVar13;
	var uVar15;
	var uVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	struct<2> Var20;
	var uVar22;
	
	iParam0 = &iParam0;
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_123(&cVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var9);
		VSCALE(&Var7, -7.0f);
		Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var9, StackVal);
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			uVar16 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			bVar17 = GET_ACTORENUM_FROM_STRING(&uVar16);
			bVar18 = bVar17;
			if (bVar18 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(bVar18, 1, false);
			while (!STREAMING_IS_ACTOR_LOADED(bVar18, 4294967295))
			{
				WAIT(false);
			}
			uVar19 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar19), &Var3);
			GET_POSITION(&uVar19, &uVar5);
			Var20 = Vector(IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f);
			uVar22 = Vector(StackVal, StackVal, StackVal) + Vector(Var20, Var9, StackVal);
			FIND_GROUND_INTERSECTION(&uVar22, 80.0f, &Var11, &uVar13);
			uVar15 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), Function_10(), bVar17, Vector(Var11, (0.0f + 180.0f), 0.0f));
			TASK_STAND_STILL(&uVar15, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar18, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_123(char* cParam0) //Position: 0xB2D0 / 45776
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

bool Function_124(int iParam0) //Position: 0xB2FD / 45821
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<5> Var4;
	struct<2> Var10;
	var uVar12;
	var uVar14;
	
	uVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_123(&uVar0, "streamanddropactor"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar1 = GET_ACTORENUM_FROM_STRING(&iParam0);
		bVar2 = bVar1;
		if (bVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(bVar2, 1, false);
		while (!STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			WAIT(false);
		}
		uVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var6);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var8);
		VSCALE(&Var6, -7.0f);
		Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Var6, Var8, StackVal);
		FIND_GROUND_INTERSECTION(&Var8, 80.0f, &Var10, &uVar12);
		uVar14 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), Function_10(), bVar1, Vector(Var10, (0.0f + 180.0f), 0.0f));
		TASK_STAND_STILL(&uVar14, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_125(int iParam0) //Position: 0xB408 / 46088
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "suicide"))
	{
		uVar0 = Function_38();
		if (IS_ACTOR_VALID(&uVar0))
		{
			KILL_ACTOR(&uVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_126(int iParam0) //Position: 0xB439 / 46137
{
	if (STRING_CONTAINS_STRING(&iParam0, "nframetime"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(&iParam0, "false") || STRING_CONTAINS_STRING(&iParam0, "off"))
		{
			PRINT_FRAME_TIME(0);
		}
		else
		{
			PRINT_FRAME_TIME(1);
		}
		return 1;
	}
	return 0;
}

bool Function_127(int iParam0) //Position: 0xB487 / 46215
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "decor"))
	{
		uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(&uVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), &uVar0, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0) //Position: 0xB4BE / 46270
{
	if (STRING_CONTAINS_STRING(&iParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		return 1;
	}
	return 0;
}

bool Function_129(int iParam0) //Position: 0xB57A / 46458
{
	int iVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "ncockfight"))
	{
		*(&iVar0 + 72 + 28) = 1;
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Mini_Games/Cockfighting/Cockfighting", &iVar0, 62, 0);
		return 1;
	}
	return 0;
}

bool Function_130(int iParam0) //Position: 0xB5DF / 46559
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	if (STRING_CONTAINS_STRING(&iParam0, "pickdoor"))
	{
		uVar6 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(&uVar6, &Var4, 2);
		GET_POSITION(&uVar6, &Var0);
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal);
		uVar7 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(&uVar7))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		Function_131();
		CREATE_GRINGO_IN_LAYOUT(&uVar7, Function_10(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", Var2, Function_131());
		return 1;
	}
	return 0;
}

struct<8> Function_131() //Position: 0xB69C / 46748
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_132(int iParam0) //Position: 0xB6A6 / 46758
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	var uVar8;
	
	if (STRING_CONTAINS_STRING(&iParam0, "droplocker"))
	{
		uVar6 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(&uVar6, &Var4, 2);
		GET_POSITION(&uVar6, &Var0);
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal);
		uVar7 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(&uVar7))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		uVar8 = CREATE_PROP_IN_LAYOUT(StackVal, &uVar7, Function_10(), "$/fragments/p_gen_footlocker01x", Var2, Vector(0.0f, 0.0f, 0.0f), 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&uVar8, "stand_open_chest"));
		Function_131();
		CREATE_GRINGO_ON_OBJECT(StackVal, &uVar8, Function_10(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", Vector(-0,3f, 0,1f, -0,3f), Function_131());
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0) //Position: 0xB7CA / 47050
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (STRING_CONTAINS_STRING(&iParam0, "nkillbunny"))
	{
		uVar7 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(&uVar7, &Var4, 2);
		GET_POSITION(&uVar7, &Var0);
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal);
		uVar8 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(&uVar8))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		uVar9 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar8, Function_10(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", Var2, Vector(0.0f, 0.0f, 0.0f));
		uVar6 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar8, Function_10(), 1078, Var2, Vector(0.0f, 0.0f, 0.0f));
		SNAP_ACTOR_TO_GRINGO(&uVar6, &uVar9, "UseCase1", true, 0, 0);
		if (!IS_ACTOR_VALID(&uVar6))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0) //Position: 0xB8D3 / 47315
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 14, 0);
		return 1;
	}
	return 0;
}

bool Function_135(int iParam0) //Position: 0xB928 / 47400
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(&iParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0, 4294967295, 4294967295, 3212836864, 0);
			PRINTSTRING("Playing ");
			PRINTSTRING(&cVar0);
			PRINTSTRING(" - ");
			PRINTSTRING(&cVar8);
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Please use in the following format: playsong songname mood");
		}
		return 1;
	}
	return 0;
}

bool Function_136(int iParam0) //Position: 0xB9D3 / 47571
{
	bool bVar0;
	
	bVar0 = false;
	if (STRING_CONTAINS_STRING(&iParam0, "show_locked_weapons"))
	{
		bVar0 = false;
		while (bVar0 < 39)
		{
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar0));
			if (IS_WEAPONENUM_LOCKED(bVar0))
			{
				PRINTSTRING(" - LOCKED!");
			}
			else
			{
				PRINTSTRING("  - unlocked");
			}
			PRINTNL();
			bVar0++;
		}
		return 1;
	}
	return 0;
}

bool Function_137(int iParam0) //Position: 0xBA49 / 47689
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(&iParam0, "ai_ignore_player"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			if (STRINGS_ARE_EQUAL(&cVar0, "1"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "0"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "on"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "off"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else
			{
				LOG_ERROR("Must provide 0 or 1 to toggle off or on");
			}
		}
		else
		{
			LOG_ERROR("Must provide 0 or 1 to toggle off or on");
		}
		return 1;
	}
	return 0;
}

bool Function_138(int iParam0) //Position: 0xBB2F / 47919
{
	char* cVar0[64];
	var uVar16;
	bool bVar17;
	int iVar18;
	char* cVar19[64];
	bool bVar35;
	int iVar36;
	bool bVar37;
	char* cVar38[64];
	bool bVar54;
	char* cVar55[64];
	bool bVar71;
	bool bVar72;
	int iVar73;
	
	if (STRING_CONTAINS_STRING(&iParam0, "remove"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			uVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar18 = 39;
				bVar35 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar19, "WE_", 64);
					stradd(&cVar19, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar19);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar19))
					{
						bVar35 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar35));
						PRINTNL();
						DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), bVar35);
					}
					bVar17++;
				}
				if (bVar35 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				iVar36 = 17;
				bVar17 = false;
				bVar54 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar36)
				{
					strcpy(&cVar38, "AMMO_", 64);
					stradd(&cVar38, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar38);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar38))
					{
						bVar54 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar54));
						bVar37 = STRING_TO_FLOAT(&uVar16);
						bVar37 = (bVar37 * -1.0f);
						if (bVar37 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, bVar37, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar37);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar54), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar54 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar71 = 4294967295;
				iVar73 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar55, "ITEM_", 64);
					stradd(&cVar55, Function_312(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar55, &cVar0))
					{
						bVar71 = bVar17;
						PRINTSTRING("removing from player ");
						PRINTSTRING(&cVar55);
						PRINTSTRING(" - x");
						bVar72 = STRING_TO_INT(&uVar16);
						if (bVar72 >= 0)
						{
							iVar73 = 1;
							while (iVar73 < bVar72)
							{
								iVar73++;
							}
							PRINTINT(bVar72);
						}
						else
						{
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not remove from the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				bVar17 = false;
				while (bVar17 < (8 - 1))
				{
					DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), GET_WEAPON_EQUIPPED(GET_PLAYER_ACTOR(0), bVar17));
					bVar17++;
				}
				DELETE_ALL_INVENTORY_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				PRINTSTRING("Took all the player's stuff away");
				PRINTNL();
			}
			else
			{
				LOG_ERROR("remove must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to remove from the player");
		}
		return 1;
	}
	return 0;
}

bool Function_139(bool bParam0) //Position: 0xBEF8 / 48888
{
	char* cVar0[64];
	var uVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	char* cVar20[64];
	char* cVar36[64];
	char* cVar52[64];
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	int iVar74;
	bool bVar75;
	
	if (STRING_CONTAINS_STRING(&bParam0, "give"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			uVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			iVar18 = 17;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar19 = 39;
				bVar68 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar20))
					{
						bVar68 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68));
						PRINTNL();
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
						if (STRING_CONTAINS_STRING(&bParam0, "givewna"))
						{
							bVar69 = GET_AMMOENUM_FOR_WEAPONENUM(bVar68);
							if (bVar69 != 4294967295)
							{
								PRINTSTRING("Being nice and giving the player ");
								PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar69));
								PRINTNL();
								_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar69, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar69), 0, 1);
							}
							else
							{
								PRINTSTRING("Weapon doesn't have a valid ammo type, so not able to be nice.");
								PRINTNL();
							}
						}
					}
					bVar17++;
				}
				if (bVar68 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				bVar17 = false;
				bVar71 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar36))
					{
						bVar71 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar71));
						bVar70 = STRING_TO_FLOAT(&uVar16);
						if (bVar70 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, bVar70, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar70);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar71), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar72 = 4294967295;
				iVar74 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_312(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_140(&Global_39906, Function_153(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(&uVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_312(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_312(bVar72), GET_PLAYER_ACTOR(0), 1);
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar72 == 4294967295)
				{
					PRINTSTRING("Could not give the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "LIST"))
			{
				iVar18 = 17;
				iVar19 = 39;
				PRINTSTRING("WEAPONS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					PRINTSTRING(&cVar20);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("AMMO:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					PRINTSTRING(&cVar36);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("ITEMS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_312(bVar17), 64);
					PRINTSTRING(&cVar52);
					PRINTNL();
					bVar17++;
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				iVar18 = 17;
				iVar19 = 39;
				bVar17 = true;
				while (bVar17 < (iVar19 - 2))
				{
					bVar68 = bVar17;
					if ((((!STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DEFAULT") && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TURRET")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "CANNON")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TEST")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DUALPISTOL"))
					{
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
					}
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (iVar18 - 1))
				{
					_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar17, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar17), 0, 1);
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					ADD_ITEM(Function_312(bVar17), GET_PLAYER_ACTOR(0), 1);
					bVar17++;
				}
				PRINTSTRING("Gave the player friggin' everything.");
				PRINTNL();
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "$"))
			{
				uVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
				STRING_CLEAR_TOKENIZER();
				SET_OWNERSHIP_STRAGGLER(&uVar16, "$");
				if (STRING_NUM_TOKENS() >= 0)
				{
					uVar16 = STRING_GET_TOKEN(0);
					bVar75 = STRING_TO_INT(&uVar16);
					if (bVar75 >= 0)
					{
						Function_310(ABS(bVar75), 1, 1);
					}
					else
					{
						Function_93(ABS(bVar75), 1);
					}
				}
				else
				{
					LOG_ERROR("GIVE $ must be followed by a valid dollar amount");
				}
				STRING_CLEAR_TOKENIZER();
			}
			else
			{
				LOG_ERROR("GIVE must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to give to the player");
		}
		return 1;
	}
	return 0;
}

int Function_140(struct<25> Param0) //Position: 0xC5B0 / 50608
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_152())
	{
		return 0;
	}
	Param0.f_16 = Function_151(&iParam1);
	if (&iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (&iParam1 == 4294967295)
	{
		iParam1 = Function_153();
	}
	if (&iParam4 > 0 || &iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_39906.f_12 = &iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_150(&Var96, iVar1) == 1)
		{
			if (Function_149(Var96.f_24) == Global_46722[Global_43787])
			{
				if (Var96.f_32 == &iParam3)
				{
					if (((&iParam1 != 4294967295 || &iParam1 <= Var96.f_12) || (&iParam1 != 0 && Var96.f_12 != 3)) || (&iParam1 != 0 && Var96.f_12 != 4))
					{
						if (&iParam4 != 0 || &iParam4 != Function_148(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (&iParam5 == 1)
							{
								if (!Function_147(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_150(&Param0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_20));
			PRINTNL();
			Param0.f_24 = Function_141(&Param0, &iParam4, 80, 20000, Param0.f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (&iParam2 != 4294967294)
	{
		Param0.f_24 = &iParam2;
	}
	return iVar0;
}

var Function_141(struct<25> Param0) //Position: 0xC835 / 51253
{
	var uVar0;
	var uVar1;
	
	uVar0 = Param0.f_24;
	uParam3 = &uParam3;
	uParam2 = &uParam2;
	if (StackVal || Param0.f_24 != 4294967295 != 1)
	{
		uVar1 = Function_142(uVar0, 80.0f, 20000.0f, &uParam1, 1, &uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = Param0.f_24;
	}
	return uVar1;
}

var Function_142(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC8CB / 51403
{
	int iVar0;
	int iVar1[146];
	bool bVar148[146];
	int iVar295;
	struct<2> Var296;
	struct<2> Var298;
	bool bVar300;
	bool bVar301;
	bool bVar302[146];
	bool bVar449[146];
	bool bVar596;
	int iVar597;
	int iVar598;
	bool bVar599;
	bool bVar600;
	int iVar601;
	struct<8> Var602;
	
	iVar0 = 4294967295;
	bVar301 = 1,001638E+07.0f;
	bVar599 = false;
	bVar600 = false;
	iVar601 = 0;
	bVar596 = false;
	while (bVar596 < 145)
	{
		iVar1[bVar596] = 4294967295;
		bVar148[bVar596] = 4294967295;
		bVar596++;
	}
	if (!Function_349(iParam0))
	{
		iParam0 = Global_43788;
	}
	iVar295 = Function_149(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	bVar596 = false;
	while (bVar596 < 145)
	{
		Function_146(&Global_44085[bVar5969] + 8);
		Var296 = Function_146(&Global_44085[bVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[bVar5969] + 8) && (iVar295 != Function_149(Global_44085[bVar5969]) || iParam0 != 4294967295)) != 1) && Function_421(&(Global_43791[bVar596]), 8192)) && bVar596 == 0)
		{
			if (bVar596 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar300 > bVar301)
			{
				bVar301 = bVar300;
				iVar598 = bVar596;
			}
			if (bVar300 < &fParam1 && bVar300 > &fParam2)
			{
				iVar1[bVar599] = bVar596;
				bVar302[bVar599] = bVar300;
				bVar599++;
				if (Function_415(Function_538(bVar596, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					bVar148[bVar600] = bVar596;
					bVar449[bVar600] = bVar300;
					bVar600++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar599 == iVar1)
		{
			bVar596 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		bVar596++;
	}
	if (&iParam5 != 4294967295)
	{
		Function_145(&iVar1, &bVar302, bVar599);
		Function_145(&bVar148, &bVar449, bVar600);
	}
	if (bVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_16(3, bVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_16(5, bVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_16(7, bVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_16(10, bVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_16(5, bVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = bVar148[iVar597];
		if (Function_349(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_144();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_146(&Global_44085[iVar09] + 8);
		Var296 = Function_146(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else if (bVar599 >= 0)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_16(3, bVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_16(5, bVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_16(7, bVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_16(10, bVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_16(5, bVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar1[iVar597];
		if (Function_349(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_144();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_146(&Global_44085[iVar09] + 8);
		Var296 = Function_146(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar598;
	}
	return iVar0;
}

struct<32> Function_143(int iParam0) //Position: 0xCF7D / 53117
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_349(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_144() //Position: 0xD03F / 53311
{
	if (Global_43787 == 0)
	{
		return Global_46760[6];
	}
	if (Global_43787 == 1)
	{
		return Global_46866[3];
	}
	return Global_46926[5];
}

void Function_145(bool[] bParam0, bool[] bParam1, int iParam2) //Position: 0xD06D / 53357
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = bParam1[iVar0];
		uVar2 = bParam0[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if (bParam1[iVar1] < fVar3)
			{
				bParam1[iVar1 + 1] = bParam1[iVar1];
				bParam0[iVar1 + 1] = bParam0[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		bParam0[iVar1 + 1] = uVar2;
		bParam1[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

struct<8> Function_146(int iParam0) //Position: 0xD104 / 53508
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_147(bool bParam0) //Position: 0xD116 / 53526
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_39906 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_148(bool bParam0) //Position: 0xD168 / 53608
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_149(int iParam0) //Position: 0xD217 / 53783
{
	return Function_417(iParam0);
}

bool Function_150(struct<41> Param0) //Position: 0xD222 / 53794
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			Param0.f_12 = 3;
			Param0.f_20 = 415;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 26;
			break;
		
		case 0x00000001:
			Param0.f_12 = 3;
			Param0.f_20 = 416;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 27;
			break;
		
		case 0x00000002:
			Param0.f_12 = 5;
			Param0.f_20 = 422;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 28;
			break;
		
		case 0x00000003:
			Param0.f_12 = 5;
			Param0.f_20 = 423;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 29;
			break;
		
		case 0x00000004:
			Param0.f_12 = 4;
			Param0.f_20 = 418;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 30;
			break;
		
		case 0x00000005:
			Param0.f_12 = 4;
			Param0.f_20 = 419;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 31;
			break;
		
		case 0x00000006:
			Param0.f_12 = 2;
			Param0.f_20 = 397;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 12;
			break;
		
		case 0x00000007:
			Param0.f_12 = 4;
			Param0.f_20 = 398;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 32;
			break;
		
		case 0x00000008:
			Param0.f_12 = 5;
			Param0.f_20 = 403;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 33;
			break;
		
		case 0x00000009:
			Param0.f_12 = 5;
			Param0.f_20 = 404;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 34;
			break;
		
		case 0x0000000A:
			Param0.f_12 = 4;
			Param0.f_20 = 400;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 35;
			break;
		
		case 0x0000000B:
			Param0.f_12 = 5;
			Param0.f_20 = 401;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 36;
			break;
		
		case 0x0000000C:
			Param0.f_12 = 2;
			Param0.f_20 = 496;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 13;
			break;
		
		case 0x0000000D:
			Param0.f_12 = 2;
			Param0.f_20 = 497;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 14;
			break;
		
		case 0x0000000E:
			Param0.f_12 = 4;
			Param0.f_20 = 502;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 17;
			break;
		
		case 0x0000000F:
			Param0.f_12 = 4;
			Param0.f_20 = 503;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 5;
			break;
		
		case 0x00000010:
			Param0.f_12 = 3;
			Param0.f_20 = 499;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 18;
			break;
		
		case 0x00000011:
			Param0.f_12 = 3;
			Param0.f_20 = 500;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 19;
			break;
		
		case 0x00000012:
			Param0.f_12 = 1;
			Param0.f_20 = 477;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 1;
			break;
		
		case 0x00000013:
			Param0.f_12 = 1;
			Param0.f_20 = 478;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 42;
			break;
		
		case 0x00000014:
			Param0.f_12 = 3;
			Param0.f_20 = 483;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 41;
			break;
		
		case 0x00000015:
			Param0.f_12 = 3;
			Param0.f_20 = 484;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 2;
			break;
		
		case 0x00000016:
			Param0.f_12 = 2;
			Param0.f_20 = 480;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 3;
			break;
		
		case 0x00000017:
			Param0.f_12 = 2;
			Param0.f_20 = 481;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 4;
			break;
		
		case 0x00000018:
			Param0.f_12 = 1;
			Param0.f_20 = 505;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 43;
			break;
		
		case 0x00000019:
			Param0.f_12 = 1;
			Param0.f_20 = 506;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 44;
			break;
		
		case 0x0000001A:
			Param0.f_12 = 3;
			Param0.f_20 = 513;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 15;
			break;
		
		case 0x0000001B:
			Param0.f_12 = 3;
			Param0.f_20 = 514;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 6;
			break;
		
		case 0x0000001C:
			Param0.f_12 = 2;
			Param0.f_20 = 508;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 16;
			break;
		
		case 0x0000001D:
			Param0.f_12 = 2;
			Param0.f_20 = 509;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 7;
			break;
		
		case 0x0000001E:
			Param0.f_12 = 1;
			Param0.f_20 = 486;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 45;
			break;
		
		case 0x0000001F:
			Param0.f_12 = 1;
			Param0.f_20 = 487;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 46;
			break;
		
		case 0x00000020:
			Param0.f_12 = 3;
			Param0.f_20 = 492;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 8;
			break;
		
		case 0x00000021:
			Param0.f_12 = 3;
			Param0.f_20 = 493;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 9;
			break;
		
		case 0x00000022:
			Param0.f_12 = 2;
			Param0.f_20 = 489;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 10;
			break;
		
		case 0x00000023:
			Param0.f_12 = 2;
			Param0.f_20 = 490;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 11;
			break;
		
		case 0x00000024:
			Param0.f_12 = 3;
			Param0.f_20 = 467;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 47;
			break;
		
		case 0x00000025:
			Param0.f_12 = 3;
			Param0.f_20 = 468;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 48;
			break;
		
		case 0x00000026:
			Param0.f_12 = 2;
			Param0.f_20 = 406;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 20;
			break;
		
		case 0x00000027:
			Param0.f_12 = 3;
			Param0.f_20 = 407;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 21;
			break;
		
		case 0x00000028:
			Param0.f_12 = 4;
			Param0.f_20 = 412;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 22;
			break;
		
		case 0x00000029:
			Param0.f_12 = 4;
			Param0.f_20 = 413;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 23;
			break;
		
		case 0x0000002A:
			Param0.f_12 = 3;
			Param0.f_20 = 410;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 24;
			break;
		
		case 0x0000002B:
			Param0.f_12 = 3;
			Param0.f_20 = 411;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 25;
			break;
		
		case 0x0000002C:
			Param0.f_12 = 2;
			Param0.f_20 = 787;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_151(int iParam0) //Position: 0xDA76 / 55926
{
	int iVar0;
	
	switch (&iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_152() //Position: 0xDB45 / 56133
{
	return Function_509(StackVal, 1);
}

var Function_153() //Position: 0xDB54 / 56148
{
	int iVar0;
	
	iVar0 = Function_154(0);
	return iVar0;
}

var Function_154(int iParam0) //Position: 0xDB62 / 56162
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_521(358) + Function_521(359));
	if (&iParam0 == 1)
	{
		iVar2 = Function_16(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_43787 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_43787 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_155(int iParam0) //Position: 0xDBE7 / 56295
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 14, 0);
		return 1;
	}
	return 0;
}

bool Function_156(bool bParam0) //Position: 0xDC42 / 56386
{
	var uVar0;
	struct<5> Var2;
	struct<2> Var8;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (STRING_CONTAINS_STRING(&bParam0, "dropcougar"))
	{
		uVar12 = GET_PLAYER_ACTOR(0);
		GET_POSITION(&uVar12, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar12), &Var2);
		Var4 = Vector(0.0f, 0.0f, -3.0f);
		Var6 = Var4;
		Var8 = -Vector(Var4, StackVal, StackVal);
		ROTATE_VECTOR_XZ(StackVal, &Var4, 0);
		uVar13 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(&uVar13))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		uVar10 = Function_157(StackVal, StackVal, StackVal, &uVar13, Function_10(), 1118, Vector(Var6, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar12));
		uVar11 = Function_157(StackVal, StackVal, StackVal, &uVar13, Function_10(), 1087, Vector(Var8, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar12));
		if (!IS_ACTOR_VALID(&uVar10) || !IS_ACTOR_VALID(&uVar11))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_157(var uParam0, char* cParam1, bool bParam2, struct<2> Param3, struct<2> Param5, bool bParam7) //Position: 0xDD33 / 56627
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Param3;
	Var2 = Param5;
	Function_158(&bParam7, 0, &Var0, &Var2);
	uVar4 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &cParam1, bParam2, Var0, Var2);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&uVar4), 50.0f, false, 1092616192);
	return &uVar4;
}

void Function_158(var uParam0, bool bParam1, struct<2> Param2) //Position: 0xDD82 / 56706
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_159(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_159(vector3 vParam0) //Position: 0xDEAF / 57007
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_55(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_55(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_160(bool bParam0) //Position: 0xDF25 / 57125
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	
	if (STRING_CONTAINS_STRING(&bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(&bParam0, 7);
		uVar0 = GET_ASSET_ID(&bParam0, 7);
		STREAMING_REQUEST_PROPSET(&uVar0);
		while (!STREAMING_IS_PROPSET_LOADED(&uVar0))
		{
			WAIT(false);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &Var5, 2);
		Var7 = Var5;
		VNORMALIZE(&Var7);
		VSCALE(&Var7, -20.0f);
		Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var1, StackVal);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &Var3);
		Function_161(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_10(), &bParam0, Var1, Var3, 4294967295);
		STREAMING_EVICT_PROPSET(&uVar0);
		return 1;
	}
	return 0;
}

var Function_161(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xDFD2 / 57298
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	bool bVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					bVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, bVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

bool Function_162(int iParam0) //Position: 0xE129 / 57641
{
	var uVar0;
	var uVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "killvehicle"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		uVar0 = GET_PLAYER_ACTOR(0);
		uVar1 = GET_VEHICLE(&uVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			KILL_ACTOR(&uVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_163(int iParam0) //Position: 0xE16F / 57711
{
	bool bVar1;
	struct<5> Var2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "getmat"))
	{
		FIND_GROUND_INTERSECTION(&Global_54078, 2.0f, &Var2, &uVar4);
		Var2.f_4 = (StackVal + 1.0f);
		bVar1 = GET_MATERIAL_AT_VECTOR(&Var2);
		PRINTSTRING("Material flags ");
		PRINTINT(bVar1);
		PRINTSTRING(" found at player position: ");
		PRINTVECTOR(Global_54078);
		PRINTNL();
		if (bVar1 <= 0)
		{
			PRINTSTRING("   AIMATERIALFLAG_INVALID");
		}
		else
		{
			while (bVar1 > 0)
			{
				if (bVar1 > 512)
				{
					PRINTSTRING("   AIMATERIALFLAG_WATER");
					bVar1 = (bVar1 - 512);
				}
				else if (bVar1 > 256)
				{
					PRINTSTRING("   AIMATERIALFLAG_RESERVED");
					bVar1 = (bVar1 - 256);
				}
				else if (bVar1 > 128)
				{
					PRINTSTRING("   AIMATERIALFLAG_TRAINTRACKS");
					bVar1 = (bVar1 - 128);
				}
				else if (bVar1 > 64)
				{
					PRINTSTRING("   AIMATERIALFLAG_VEHICLEPATH");
					bVar1 = (bVar1 - 64);
				}
				else if (bVar1 > 32)
				{
					PRINTSTRING("   AIMATERIALFLAG_HORSEPATH");
					bVar1 = (bVar1 - 32);
				}
				else if (bVar1 > 16)
				{
					PRINTSTRING("   AIMATERIALFLAG_PEDPATH");
					bVar1 = (bVar1 - 16);
				}
				else if (bVar1 > 8)
				{
					PRINTSTRING("   AIMATERIALFLAG_GENERICSPAWN");
					bVar1 = (bVar1 - 8);
				}
				else if (bVar1 > 1)
				{
					PRINTSTRING("   AIMATERIALFLAG_TERRAIN");
					bVar1 = (bVar1 - 1);
				}
				else if (bVar1 == 0)
				{
					PRINTSTRING("   AIMATERIALFLAG_ANY");
					bVar1 = 4294967295;
				}
				PRINTNL();
			}
		}
		LOG_ERROR("Printed materials to output");
		return 1;
	}
	return 0;
}

bool Function_164(int iParam0) //Position: 0xE3F6 / 58358
{
	var uVar0;
	struct<5> Var2;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	var uVar12;
	char* cVar13[32];
	var uVar21;
	
	if (STRING_CONTAINS_STRING(&iParam0, "dropai"))
	{
		uVar12 = GET_CONSOLE_COMMAND_TOKEN(1);
		uVar10 = GET_PLAYER_ACTOR(0);
		GET_POSITION(&uVar10, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar10), &Var2);
		uVar4 = Vector(0.0f, 0.0f, -3.0f);
		ROTATE_VECTOR_XZ(StackVal, &uVar4, 0);
		strcpy(&cVar13, "ndroppedAI", 32);
		cVar13 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar13) };
		uVar21 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(&uVar21))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		if (STRINGS_ARE_EQUAL(&uVar12, "bigfist"))
		{
			iVar11 = 375;
		}
		else
		{
			iVar11 = 397;
		}
		uVar8 = Function_157(StackVal, StackVal, StackVal, &uVar21, &cVar13, iVar11, Vector(Var6, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar10));
		if (!IS_ACTOR_VALID(&uVar8))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(&uVar12, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar8);
			GIVE_WEAPON_TO_ACTOR(&uVar8, 22, false, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(&uVar8, 22, 1);
			TASK_KILL_CHAR(&uVar8, &uVar10);
		}
		else if (STRINGS_ARE_EQUAL(&uVar12, "bigfist"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar8);
			TASK_MELEE_ATTACK(&uVar8, &uVar10, -1.0f);
		}
		else if (STRINGS_ARE_EQUAL(&uVar12, "horse"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar8);
			strcpy(&cVar13, "droppedHorse", 32);
			cVar13 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar13) };
			uVar9 = Function_157(StackVal, StackVal, StackVal, &uVar21, &cVar13, 976, Vector(Var6, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar10));
			ACTOR_MOUNT_ACTOR(&uVar8, &uVar9);
		}
		else
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar8);
		}
		return 1;
	}
	return 0;
}

struct<32> Function_165(char* cParam0) //Position: 0xE5AF / 58799
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_166("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_166(char* cParam0) //Position: 0xE61B / 58907
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_167(int iParam0) //Position: 0xE63D / 58941
{
	iParam0 = &iParam0;
	return 0;
}

bool Function_168(int iParam0) //Position: 0xE64A / 58954
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "unlock"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(&uVar0, "map"))
			{
				uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
				if (STRING_CONTAINS_STRING(&uVar1, "all"))
				{
					iVar2 = 0;
					while (iVar2 <= Global_43791)
					{
						Function_169(iVar2);
						iVar2++;
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= Global_43791)
					{
						if (STRING_CONTAINS_STRING(&Global_44085[iVar29] + 32, &uVar1))
						{
							Function_169(iVar2);
						}
						iVar2++;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

void Function_169(int iParam0) //Position: 0xE6DF / 59103
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_421(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_420(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_418(473, 1, 0, 0);
		iVar0 = Function_417(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_418(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_418(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_418(476, 1, 0, 0);
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
		Function_412(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_412(7, 30);
	}
	if (Function_19(473) <= Function_21(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

bool Function_170(int iParam0) //Position: 0xE7D0 / 59344
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (STRING_CONTAINS_STRING(&iParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(&uVar0);
			bVar4 = STRING_TO_FLOAT(&uVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (bVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_108(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_171(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_171(int iParam0, bool bParam1) //Position: 0xE847 / 59463
{
	bool bVar0;
	int iVar1;
	
	Function_172(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_112(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + bParam1);
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_109();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 2;
	return 1;
}

int Function_172(int iParam0, bool bParam1, int iParam2) //Position: 0xE9E2 / 59874
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - bParam1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_9(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

bool Function_173(int iParam0) //Position: 0xEBCF / 60367
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "chartest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 0;
			while (iVar2 <= Global_43791)
			{
				if (STRINGS_ARE_EQUAL(&Global_44085[iVar29] + 32, &uVar0))
				{
					Global_98253 = iVar2;
				}
				iVar2++;
			}
			Global_98255 = STRING_TO_INT(&uVar1);
			if (Global_98253 <= 0)
			{
				Global_98253 = 0;
			}
			if (Global_98255 <= 0)
			{
				Global_98255 = 0;
			}
		}
		else
		{
			Global_98253 = 0;
			Global_98255 = 0;
		}
		Global_98252 = 1;
		return 1;
	}
	return 0;
}

bool Function_174(int iParam0) //Position: 0xEC63 / 60515
{
	if (STRING_CONTAINS_STRING(&iParam0, "regiontest"))
	{
		Global_98251 = 1;
		return 1;
	}
	return 0;
}

bool Function_175(int iParam0) //Position: 0xEC87 / 60551
{
	var uVar0;
	var uVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "missiontest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			Global_98253 = STRING_TO_INT(&uVar0);
			Global_98254 = STRING_TO_INT(&uVar1);
			if (Global_98253 <= 0)
			{
				Global_98253 = 0;
			}
			if (Global_98254 <= 0)
			{
				Global_98254 = 0;
			}
		}
		else
		{
			Global_98253 = 0;
			Global_98254 = 0;
		}
		Global_98250 = 1;
		return 1;
	}
	return 0;
}

bool Function_176(int iParam0) //Position: 0xECFC / 60668
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (STRING_CONTAINS_STRING(&iParam0, "ppp"))
	{
		iVar0 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar1 = 0;
		PRINTSTRING("Console Print: ");
		iVar1 = 1;
		while (iVar1 < iVar0)
		{
			uVar2 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			PRINTSTRING(&uVar2);
			PRINTSTRING(" ");
			iVar1++;
		}
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() == 2)
		{
			uVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(&uVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_177(int iParam0) //Position: 0xED74 / 60788
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<2> Var4;
	int iVar6;
	
	if (STRING_CONTAINS_STRING(&iParam0, "crime"))
	{
		uVar3 = &Global_39554;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(&uVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &Var4);
				ITERATE_IN_SPHERE(&uVar3, Var4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(&uVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(&uVar3) < 0 && IS_LAYOUTREF_VALID(&Global_39918))
				{
					iVar6 = START_OBJECT_ITERATOR(&uVar3);
					if (IS_OBJECT_VALID(&iVar6))
					{
						Function_178(1, 0, GET_PLAYER_ACTOR(0), &iVar6, 0);
						GET_OBJECT_POSITION(&iVar6, &Var4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(Var4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(&uVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(&Global_39918))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(&uVar0, "report"))
			{
				uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
				if (IS_ITERATOR_VALID(&uVar1))
				{
					ITERATE_EVERYWHERE(&uVar1);
					ITERATE_ON_OBJECT_TYPE(&uVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(&uVar1) >= 0)
					{
						uVar2 = START_OBJECT_ITERATOR(&uVar1);
						while (IS_OBJECT_VALID(&uVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(&uVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(&uVar2), 3);
								DESTROY_ITERATOR(&uVar1);
								return 1;
							}
							uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
						}
					}
				}
				DESTROY_ITERATOR(&uVar1);
			}
			else if (STRING_CONTAINS_STRING(&uVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &Var4);
				ITERATE_IN_SPHERE(&uVar3, Var4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(&uVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(&uVar3) < 0 && IS_LAYOUTREF_VALID(&Global_39918))
				{
					iVar6 = START_OBJECT_ITERATOR(&uVar3);
					if (IS_OBJECT_VALID(&iVar6))
					{
						Function_178(2, 0, GET_PLAYER_ACTOR(0), &iVar6, 0);
						GET_OBJECT_POSITION(&iVar6, &Var4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(Var4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(&uVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(&Global_39918))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(&uVar0, "finish"))
			{
				uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
				if (IS_ITERATOR_VALID(&uVar1))
				{
					ITERATE_EVERYWHERE(&uVar1);
					ITERATE_ON_OBJECT_TYPE(&uVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(&uVar1) >= 0)
					{
						uVar2 = START_OBJECT_ITERATOR(&uVar1);
						while (IS_OBJECT_VALID(&uVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(&uVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(&uVar2), 0);
								DESTROY_ITERATOR(&uVar1);
								return 1;
							}
							uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
						}
					}
				}
				DESTROY_ITERATOR(&uVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_178(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xF029 / 61481
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_185(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_184(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_181(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_10(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_179();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&bParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_179() //Position: 0xF2DC / 62172
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_180(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_180(var uParam0, int iParam1) //Position: 0xF34F / 62287
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_181(bool bParam0) //Position: 0xF385 / 62341
{
	if (Function_536(256))
	{
		return 0;
	}
	if (Function_536(262144))
	{
		return 0;
	}
	if (Function_183())
	{
		return 0;
	}
	if (!Function_536(1))
	{
		return 0;
	}
	if (!Function_536(4096))
	{
		return 0;
	}
	if (bParam0 && Function_182(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_536(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_182(int iParam0) //Position: 0xF3FB / 62459
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_183() //Position: 0xF40C / 62476
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_184(int iParam0) //Position: 0xF425 / 62501
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_185(int iParam0) //Position: 0xF43B / 62523
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_186(int iParam0) //Position: 0xF450 / 62544
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 1;
			if (STRINGS_ARE_EQUAL(&uVar0, "fair"))
			{
				iVar2 = 1;
			}
			else if (STRINGS_ARE_EQUAL(&uVar0, "rainy"))
			{
				iVar2 = 3;
			}
			else if (STRINGS_ARE_EQUAL(&uVar0, "stormy"))
			{
				iVar2 = 4;
			}
			else if (STRINGS_ARE_EQUAL(&uVar0, "snowy"))
			{
				iVar2 = 5;
			}
			else if (STRINGS_ARE_EQUAL(&uVar0, "clear"))
			{
				iVar2 = 0;
			}
			Function_187(iVar2, FLOOR(STRING_TO_FLOAT(&uVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_187(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xF50E / 62734
{
	int iVar0;
	bool bVar1;
	
	Function_191(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_190(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_188(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_188(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF588 / 62856
{
	int iVar0;
	
	Function_191(bParam0);
	Function_453(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_189();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
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

void Function_189() //Position: 0xF707 / 63239
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_190(bool bParam0, bool bParam1) //Position: 0xF713 / 63251
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_191(bParam0);
	Function_453(&bVar0);
	PRINTNL();
	Function_188(bParam0, &bVar0, &bParam1);
	return;
}

void Function_191(int iParam0) //Position: 0xF73C / 63292
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

bool Function_192(int iParam0) //Position: 0xF782 / 63362
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			uVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(&uVar0), STRING_TO_FLOAT(&uVar1), STRING_TO_FLOAT(&uVar2));
		}
		return 1;
	}
	if (STRING_CONTAINS_STRING(&iParam0, "autowind"))
	{
		SET_AUTO_WIND();
		return 1;
	}
	return 0;
}

bool Function_193(int iParam0) //Position: 0xF7EE / 63470
{
	if (STRING_CONTAINS_STRING(&iParam0, "invert_y"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(&iParam0, "false"))
		{
			SET_LOOKSTICK_INVERT_Y(0);
		}
		else
		{
			SET_LOOKSTICK_INVERT_Y(1);
		}
		return 1;
	}
	return 0;
}

bool Function_194(int iParam0) //Position: 0xF82E / 63534
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<8> Var7;
	
	if (STRING_CONTAINS_STRING(&iParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			uVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Var5 = Vector(STRING_TO_FLOAT(&uVar0), STRING_TO_FLOAT(&uVar1), STRING_TO_FLOAT(&uVar2));
			Function_196(1.0f, 0.0f, 1.0f);
			Function_238(StackVal, Vector(STRING_TO_FLOAT(&uVar0), STRING_TO_FLOAT(&uVar1), STRING_TO_FLOAT(&uVar2)));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			iVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_195(&iVar3);
			if (Function_349(iVar4))
			{
				GET_OBJECT_POSITION(&Global_44085[iVar49] + 8, &Var5);
				Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iVar4) };
				Function_238(StackVal, Var5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_195(int iParam0) //Position: 0xF8D9 / 63705
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < (Global_43791 - 1))
	{
		if (STRING_CONTAINS_STRING(&Global_44085[iVar09] + 32, &iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	uVar1 = FIND_NAMED_LAYOUT("regions_layout");
	if (IS_LAYOUTREF_VALID(&uVar1))
	{
		uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
		if (IS_ITERATOR_VALID(&uVar2))
		{
			iVar3 = START_OBJECT_ITERATOR(&uVar2);
			while (IS_OBJECT_VALID(&iVar3))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&iVar3), &iParam0))
				{
					iVar0 = 0;
					while (iVar0 < (Global_43791 - 1))
					{
						if (GET_VOLUME_FROM_OBJECT(&iVar3) == &Global_44085[iVar09] + 8)
						{
							return iVar0;
						}
						iVar0++;
					}
				}
				iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
			}
			DESTROY_ITERATOR(&uVar2);
		}
	}
	return 4294967295;
}

void Function_196(var uParam0, var uParam1, int iParam2) //Position: 0xF9A2 / 63906
{
	Global_42834.f_68 = 5;
	Global_42834.f_72 = uParam0;
	Global_42834.f_76 = uParam1;
	Global_42834.f_80 = iParam2;
	return;
}

bool Function_197(bool bParam0) //Position: 0xF9C3 / 63939
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(&bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			uVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_198(StackVal, Vector(STRING_TO_FLOAT(&uVar0), STRING_TO_FLOAT(&uVar1), STRING_TO_FLOAT(&uVar2)), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_198(struct<2> Param0, char* cParam2) //Position: 0xFA2B / 64043
{
	Global_21576.f_120 = 4294967295;
	Global_21576 = Param0;
	strcpy(&Global_21576 + 24, &cParam2, 24);
	strcpy(&Global_21576 + 72, &cParam3, 24);
	Global_21576.f_124 = &uParam4;
	Global_21576.f_128 = &uParam5;
}

bool Function_199(int iParam0) //Position: 0xFA65 / 64101
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_195(&uVar0);
			if (Function_349(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iVar1), 4);
				Function_200(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_200(var uParam0, char* cParam1) //Position: 0xFACF / 64207
{
	Global_21576.f_120 = uParam0;
	Global_21576 = Vector(0.0f, 0.0f, 0.0f);
	strcpy(&Global_21576 + 24, &cParam1, 24);
	strcpy(&Global_21576 + 72, &cParam2, 24);
	Global_21576.f_124 = &fParam3;
	Global_21576.f_128 = &uParam4;
}

bool Function_201(int iParam0) //Position: 0xFB0A / 64266
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "print"))
	{
		iVar1 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar2 = 0;
		PRINTSTRING("Console Print: ");
		iVar2 = 1;
		while (iVar2 < iVar1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(iVar2);
			PRINTSTRING(&uVar0);
			PRINTSTRING(" ");
			iVar2++;
		}
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_202(int iParam0) //Position: 0xFB6C / 64364
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "toggle"))
	{
		uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(&uVar0, "channel"))
			{
				return Function_204();
			}
			if (STRINGS_ARE_EQUAL(&uVar0, "flag"))
			{
				return Function_203();
			}
			return 0;
		}
	}
	return 0;
}

int Function_203() //Position: 0xFBC9 / 64457
{
	var uVar0;
	
	uVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(&uVar0, "ambient"))
	{
		if (Function_373(4))
		{
			Function_537(4);
		}
		else
		{
			Function_381(4);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "missions"))
	{
		if (Global_6617 == 1)
		{
			Global_6617 = 0;
		}
		else
		{
			Global_6617 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "ntutorials"))
	{
		if (Global_6618 == 1)
		{
			Global_6618 = 0;
		}
		else
		{
			Global_6618 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "ambientpop"))
	{
		if (Function_373(1))
		{
			Function_537(1);
		}
		else
		{
			Function_381(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_373(1));
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "locname"))
	{
		if (Function_373(32))
		{
			Function_537(32);
		}
		else
		{
			Function_381(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "clock"))
	{
		if (Function_373(64))
		{
			Function_537(64);
		}
		else
		{
			Function_381(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "adebug"))
	{
		if (Function_373(128))
		{
			Function_537(128);
		}
		else
		{
			Function_381(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "law"))
	{
		if (!Function_536(256))
		{
			Function_554(256);
		}
		else
		{
			Function_380(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_204() //Position: 0xFD2F / 64815
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	uVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(&uVar1, "ncallstack"))
	{
		iVar0 = 0;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "global"))
	{
		iVar0 = 7;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "ambient"))
	{
		iVar0 = 1;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "regional"))
	{
		iVar0 = 3;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "mission"))
	{
		iVar0 = 2;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "launcher"))
	{
		iVar0 = 5;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "gringo"))
	{
		iVar0 = 8;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "layout"))
	{
		iVar0 = 9;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "tutorial"))
	{
		iVar0 = 6;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "ncompanion"))
	{
		iVar0 = 10;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "law"))
	{
		iVar0 = 11;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "traffic"))
	{
		iVar0 = 12;
	}
	else if (STRINGS_ARE_EQUAL(&uVar1, "weather"))
	{
		iVar0 = 14;
	}
	else
	{
		return 0;
	}
	if (Global_47151[iVar0])
	{
		Global_47151[iVar0] = 0;
	}
	else
	{
		Global_47151[iVar0] = 1;
	}
	return 1;
}

bool Function_205(int iParam0) //Position: 0xFEAA / 65194
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<2> Var33;
	struct<2> Var35;
	var uVar37;
	
	if (STRING_CONTAINS_STRING(&iParam0, "stamb"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		*(&iVar2 + 72 + 28) = 1;
		while (iVar1 < 6)
		{
			uVar0 = Function_207(iVar1, &iParam0);
			if (DOES_SCRIPT_EXIST(&uVar0))
			{
				Var35 = Vector(0.0f, 0.0f, -95.0f);
				uVar37 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(&uVar37, Var35, &Var33);
				if (!Function_206(&Var33, 50.0f, &iVar2 + 16, 4294967295))
				{
					*(&iVar2 + 16) = Var33;
				}
				*(&iVar2 + 28) = Vector(0.0f, 0.0f, 0.0f);
				LAUNCH_NEW_SCRIPT_WITH_ARGS(&uVar0, &iVar2, 62, 0);
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(&uVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_206(struct<2> Param0, struct<5> Param2) //Position: 0xFFE8 / 65512
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_55(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_55(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

var Function_207(char* cParam0, int iParam1) //Position: 0x1012C / 65836
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "AMBIENT", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(&iParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_208(int iParam0) //Position: 0x10161 / 65889
{
	var uVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "end"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			uVar0 = Function_209(iVar1, &iParam0);
			if (UNK_0x4417C9F2(&uVar0))
			{
				Global_47312 = 1;
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(&uVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

var Function_209(char* cParam0, int iParam1) //Position: 0x10241 / 66113
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "Frontier/Missions", 64);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "Frontier/Mini_Games", 64);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "Mexico/Missions", 64);
			break;
		
		case 0x00000003:
			strcpy(&cVar0, "Mexico/Mini_Games", 64);
			break;
		
		case 0x00000004:
			strcpy(&cVar0, "North/Missions", 64);
			break;
		
		case 0x00000005:
			strcpy(&cVar0, "North/Mini_Games", 64);
			break;
		
		case 0x00000006:
			strcpy(&cVar0, "systemtest", 64);
			break;
		
		default:
			strcpy(&cVar0, "systemtest", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(&iParam1);
	FILE_ADD_TO_PATH(&iParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_210(int iParam0) //Position: 0x10355 / 66389
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(&iParam0, "start"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			cVar0 = Function_209(iVar1, &iParam0);
			if (DOES_SCRIPT_EXIST(&cVar0))
			{
				strcpy(&cVar2, "$/content/", 64);
				stradd(&cVar2, &cVar0, 64);
				Global_47310 = GET_ASSET_ID(&cVar2, 4);
				if (&Global_47310 == "")
				{
					Global_47310 = 4294967295;
					LOG_ERROR("Attempting to start a mission script that exists, but does not have a valid asset_ID. Please add the script to init/rdr2init_script.sc");
				}
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(&cVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_211(int iParam0) //Position: 0x104EF / 66799
{
	var uVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "nterminate"))
	{
		if (STRING_CONTAINS_STRING(&iParam0, "\\") || STRING_CONTAINS_STRING(&iParam0, "/"))
		{
			if (UNK_0x4417C9F2(&iParam0))
			{
				UNK_0x05719022(&iParam0);
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script is not running.");
				PRINTSTRING("ScriptConsole: This script is not running - ");
				PRINTSTRING(&iParam0);
				PRINTNL();
				return 1;
			}
		}
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(&iParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If terminating a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			while (iVar1 < 6)
			{
				uVar0 = Function_209(iVar1, &iParam0);
				if (UNK_0x4417C9F2(&uVar0))
				{
					UNK_0x05719022(&uVar0);
					iVar1 = 6;
				}
				else if (iVar1 == 6)
				{
					LOG_ERROR("ScriptConsole: The script is not running. Try to specify a path.");
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_212(int iParam0) //Position: 0x106A2 / 67234
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (STRING_CONTAINS_STRING(&iParam0, "run"))
	{
		if (STRING_CONTAINS_STRING(&iParam0, "netrun"))
		{
			iVar1 = 1;
		}
		if (STRING_CONTAINS_STRING(&iParam0, "\\") || STRING_CONTAINS_STRING(&iParam0, "/"))
		{
			iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (DOES_SCRIPT_EXIST(&iParam0))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(&iParam0, 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(&iParam0, 0);
				}
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script file could not be found. Please check the path you typed.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(&iParam0);
				PRINTNL();
				return 1;
			}
		}
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(&iParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If running a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			FILE_START_PATH("systemtest/GeneralTest");
			FILE_ADD_TO_PATH(&iParam0);
			FILE_END_PATH();
			if (DOES_SCRIPT_EXIST(FILE_GET_CURRENT_PATH()))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				return 1;
			}
			while (iVar2 < 6)
			{
				uVar0 = Function_209(iVar2, &iParam0);
				if (DOES_SCRIPT_EXIST(&uVar0))
				{
					if (iVar1 == 1)
					{
						NET_START_NEW_SCRIPT(&uVar0, 0);
					}
					else
					{
						LAUNCH_NEW_SCRIPT(&uVar0, 0);
					}
					iVar2 = 6;
				}
				else if (iVar2 == 6)
				{
					LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
					PRINTSTRING("ScriptConsole: This script file could not be found - ");
					PRINTSTRING(&uVar0);
					PRINTNL();
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_213(int iParam0) //Position: 0x10954 / 67924
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	if (STRING_CONTAINS_STRING(&iParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar1 = GET_ACTOR_ENUM_FROM_STRING(&uVar0);
			if (Function_214(iVar1))
			{
				bVar2 = 4294967295;
				if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
				{
					uVar3 = GET_CONSOLE_COMMAND_TOKEN(3);
					bVar2 = STRING_TO_INT(&uVar3);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(iVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(iVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(iVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_214(int iParam0) //Position: 0x10A07 / 68103
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_215(int iParam0) //Position: 0x10A1E / 68126
{
	if (STRING_CONTAINS_STRING(&iParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

var Function_216() //Position: 0x10A49 / 68169
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_217() //Position: 0x10A5C / 68188
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99473, &Global_99475))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99475, &Global_99477))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99477, &Global_99479))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99479, &Global_99481))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99481, &Global_99483))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99483, &Global_99473))
	{
		return 32;
	}
	return 32;
}

void Function_218() //Position: 0x10AFA / 68346
{
	Function_554(512);
	Global_42252 = 0.0f;
	UNK_0x598815BD(Global_42252);
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	return;
}

int Function_219(int iParam0, int iParam1) //Position: 0x10B3A / 68410
{
	return Global_26088[iParam18][iParam0];
}

bool Function_220(int iParam0) //Position: 0x10B4B / 68427
{
	bool bVar0;
	float fVar1;
	
	fVar1 = GET_PROFILE_TIME();
	bVar0 = iParam0;
	while (bVar0 < (Global_21684 - 1))
	{
		if (Function_226(bVar0) == 4294967295 && Function_223(Function_224(bVar0)))
		{
			Global_26088[Function_226(bVar0)8][Function_224(bVar0)]++;
		}
		if ((GET_PROFILE_TIME() - fVar1) < 300.0f)
		{
			iParam0 = bVar0;
			return 0;
		}
		bVar0++;
	}
	Function_221();
	return 1;
}

void Function_221() //Position: 0x10BC1 / 68545
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
			Function_222(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_222(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x10E08 / 69128
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_223(int iParam0) //Position: 0x10E34 / 69172
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

int Function_224(bool bParam0) //Position: 0x10E49 / 69193
{
	if (!Function_225(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_225(int iParam0) //Position: 0x10E64 / 69220
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_226(bool bParam0) //Position: 0x10E7B / 69243
{
	if (!Function_227(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_227(int iParam0) //Position: 0x10E95 / 69269
{
	if (!Function_225(iParam0))
	{
		return 0;
	}
	if (!Function_228(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_228(int iParam0) //Position: 0x10EB9 / 69305
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_229() //Position: 0x10ECE / 69326
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (5 - 1))
	{
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			Global_26088[iVar18][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	return;
}

void Function_230(var uParam0) //Position: 0x10F0E / 69390
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if (bVar0 <= 21)
		{
			SET_WEAPON_GOLD(&Global_54076, bVar0, &uParam0);
		}
		bVar0++;
	}
	return;
}

bool Function_231() //Position: 0x10F3A / 69434
{
	if (Function_509(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_232(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x10F55 / 69461
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_233(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_233(int iParam0) //Position: 0x10FE0 / 69600
{
	char* cVar0[16];
	
	if (!Function_231())
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

void Function_234() //Position: 0x1101F / 69663
{
	int iVar0;
	
	if (Global_6606 && !Global_53524.f_44)
	{
		PRINTSTRING("Current time is ");
		Function_453(GET_TIME_OF_DAY());
		PRINTNL();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (iVar0 != 0 || iVar0 != 1)
			{
				PRINTSTRING("Current pursuit time for faction is ");
				Function_453(&Global_39922 + 148[iVar0]);
				PRINTNL();
				if (!Function_236(&Global_39922 + 148[iVar0]) && !Global_6605)
				{
					if (IS_EARLIER_THAN(&Global_39922 + 148[iVar0], 0))
					{
						Function_235(iVar0, 0, 0, Function_262(RAND_INT_RANGE(30, 75)), 0);
					}
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_235(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4) //Position: 0x110E1 / 69857
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &bParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_236(&Global_39922 + 148[iParam0]))
	{
		(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

bool Function_236(int iParam0) //Position: 0x11131 / 69937
{
	return (((GET_DAY(&iParam0) != 0 && GET_HOUR(&iParam0) != 0) && GET_MINUTE(&iParam0) != 0) && GET_SECOND(&iParam0) != 1);
}

void Function_237(bool bParam0) //Position: 0x1115A / 69978
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26200)
	{
		if (Global_26200[iVar014].f_40 == 4)
		{
			Global_26200[iVar014].f_40 = 1;
			if (&bParam0)
			{
				DECOR_SET_BOOL(&Global_54076, "OnLoad_ForceSpawnPlayerHorse", 1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_238(struct<2> Param0) //Position: 0x111B9 / 70073
{
	*(&Global_42862 + 32) = Param0;
	*(&Global_42862 + 44) = Param0;
	Global_42862 = 1;
	Global_42862.f_4 = 0;
	Global_42862.f_68 = 3;
	Global_42862.f_24 = 393264;
	if (!IS_OBJECTSET_VALID(&Global_42862 + 16))
	{
		*(&Global_42862 + 16) = CREATE_OBJECTSET_IN_LAYOUT("UserGPSPath", &Global_42862 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42862 + 16) >= 0)
	{
		Function_239(&Global_42862 + 16);
		CLEAN_OBJECTSET(&Global_42862 + 16);
	}
	Global_42862.f_100 = 1;
	Global_42862.f_104 = 1;
	return;
}

void Function_239(int iParam0) //Position: 0x11244 / 70212
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

bool Function_240(struct<2> Param0, struct<2> Param2) //Position: 0x1128D / 70285
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_241() //Position: 0x112B9 / 70329
{
	if (UNK_0xD3FE15FB())
	{
		Global_98250 = 1;
		if (UNK_0xD34F7B3A() < 4294967295 && UNK_0x913A5CB6() < 4294967295)
		{
			Global_98253 = UNK_0x913A5CB6();
			Global_98254 = UNK_0xD34F7B3A();
		}
		else
		{
			Global_98253 = 4294967294;
			Global_98254 = 4294967295;
		}
	}
	return;
}

void Function_242() //Position: 0x112F5 / 70389
{
	Function_243(StackVal, 0, 6, Global_46816[0], 0, Vector(-839,76f, 92,55f, 2372,67f), 0);
	Function_243(StackVal, 1, 2, Global_46760[0], 0, Vector(-2157.0f, 20.0f, 2603.0f), 50);
	Function_243(StackVal, 13, 1, Global_46760[1], 0, Vector(-3217,549f, 17,83068f, 2714,036f), 5);
	Function_243(StackVal, 2, 2, Global_46816[1], 0, Vector(124,9729f, 76,74391f, 2235,933f), 100);
	Function_243(StackVal, 3, 2, Global_46796[1], 0, Vector(-3652,31f, 42,81397f, 2086,111f), 100);
	Function_243(StackVal, 14, 1, Global_46838[0], 0, Vector(-3196,344f, 41,34254f, 3752,696f), 5);
	Function_243(StackVal, 4, 6, Global_46746[0], 1, Vector(-3837,73f, 2,734276f, 4225,234f), 0);
	Function_243(StackVal, 6, 2, Global_46866[0], 1, Vector(-2688,45f, 31,55404f, 4294,648f), 200);
	Function_243(StackVal, 7, 2, Global_46894[2], 1, Vector(-809,4502f, 16,66866f, 3705,639f), 250);
	Function_243(StackVal, 5, 2, Global_46850[0], 1, Vector(-4328,384f, 22,34859f, 4461,055f), 150);
	Function_243(StackVal, 8, 2, Global_46894[0], 1, Vector(-434,7641f, 22,53568f, 3929,63f), 150);
	Function_243(StackVal, 9, 6, Global_46914[0], 2, Vector(710,5591f, 82,67567f, 1320,149f), 0);
	Function_243(StackVal, 10, 2, Global_46926[1], 2, Vector(-442,8723f, 153,7947f, 1669,459f), 400);
	Function_243(StackVal, 11, 6, Global_46914[1], 2, Vector(-100,4297f, 119,5743f, 1354,821f), 0);
	Function_243(StackVal, 12, 6, Global_46914[1], 2, Vector(-100,4297f, 119,5743f, 1354,821f), 0);
	return;
}

void Function_243(int iParam0, int iParam1, int iParam2, float fParam3, struct<2> Param4, int iParam6) //Position: 0x114BE / 70846
{
	if (!Function_87(iParam0))
	{
		return;
	}
	if (Global_6606)
	{
		Global_26200[iParam014].f_40 = iParam1;
	}
	else if (iParam1 != 2 || iParam1 != 6)
	{
		Global_26200[iParam014].f_40 = 3;
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	else
	{
		Global_26200[iParam014].f_40 = iParam1;
		if (Global_26200[iParam014].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
			}
		}
	}
	Global_26200[iParam014] = Param4;
	Global_26200[iParam014].f_48 = iParam2;
	Global_26200[iParam014].f_44 = &iParam6;
	Global_26200[iParam014].f_52 = fParam3;
}

void Function_244() //Position: 0x115D9 / 71129
{
	if (Global_6605)
	{
		Function_253(0, 0);
		Function_253(1, 0);
		Function_253(2, 0);
		Function_253(4, 0);
		Function_253(5, 0);
		Function_253(6, 0);
		Function_253(7, 0);
		Function_253(12, 0);
		Function_253(14, 0);
		Function_253(13, 0);
		Function_253(19, 0);
		Function_253(9, 0);
		Function_253(10, 0);
		Function_253(16, 0);
		Function_253(15, 0);
		Function_253(17, 0);
		Function_253(25, 0);
		Function_253(23, 0);
		Function_253(24, 0);
		Function_252(3, 0);
		Function_252(1, 0);
		Function_252(0, 0);
		Function_252(2, 0);
		Function_252(57, 0);
		Function_252(56, 0);
		Function_252(34, 0);
		Function_252(44, 0);
		Function_252(47, 0);
		Function_252(30, 0);
		Function_252(36, 0);
		Function_252(39, 0);
	}
	Function_251(22, 50.0f, "KNIFE", "nKNIFE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	Function_251(0, 100.0f, "VOLCANIC", "VOLCANIC_DES", "p_gen_buySellBox02x", 1, Function_250(0), 1);
	Function_251(1, 300.0f, "nSEMI_AUTO", "SEMI_AUTO_DES", "p_gen_buySellBox02x", 1, Function_250(1), 1);
	Function_251(2, 400.0f, "HIGH_POWER", "HIGH_P_DES", "p_gen_buySellBox02x", 1, Function_250(2), 1);
	Function_251(3, 800.0f, "MAUSER", "MAUSER_DES", "p_gen_buySellBox02x", 1, 1, 1);
	Function_251(8, 50.0f, "CARBINE", "CARBINE_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_251(9, 350.0f, "WINCHESTER", "WIN_DES", "p_gen_buySellBox01x", 2, Function_250(9), 1);
	Function_251(10, 600.0f, "HENRY", "nHENRY_DES", "p_gen_buySellBox01x", 2, Function_250(10), 1);
	Function_251(11, 1000.0f, "EVANS", "nEVANS_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_251(4, 35.0f, "nCATTLEMAN", "CATTLEMAN_DES", "p_gen_buySellBox02x", 1, Function_250(4), 1);
	Function_251(5, 250.0f, "nSCHOFIELD", "SCHOFIELD_DES", "p_gen_buySellBox02x", 1, Function_250(5), 1);
	Function_251(6, 375.0f, "DOUBLEACTION", "DOUBLEACT_DES", "p_gen_buySellBox02x", 1, Function_250(6), 1);
	Function_251(7, 1250.0f, "LAMAT", "nLEMAT_DES", "p_gen_buySellBox02x", 1, Function_250(7), 1);
	Function_251(14, 475.0f, "BUFFALO", "BUFFALO_DES", "p_gen_buySellBox01x", 2, Function_250(14), 1);
	Function_251(12, 300.0f, "SPRINGFIELD", "SPRINGF_DES", "p_gen_buySellBox01x", 2, Function_250(12), 1);
	Function_251(13, 750.0f, "BOLTACTION", "BOLTACTION_DES", "p_gen_buySellBox01x", 2, Function_250(13), 1);
	if (Function_522(64))
	{
		Function_251(31, 10000.0f, "ANTITANK", "ANTITANK_DES", "p_gen_buySellBox01x", 2, 1, 1);
	}
	Function_251(15, 250.0f, "nSAWED_OFF", "SAWED_OFF_DES", "p_gen_buySellBox01x", 2, Function_250(15), 1);
	Function_251(16, 150.0f, "DOUBLE_BARREL", "D_BARREL_DES", "p_gen_buySellBox01x", 2, Function_250(16), 1);
	Function_251(17, 600.0f, "PUMP_ACTION", "P_ACTION_DES", "p_gen_buySellBox01x", 2, Function_250(17), 1);
	Function_251(18, 1000.0f, "SEMI_SHOTGUN", "SEMI_SG_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_251(19, 500.0f, "ROLLING_BLOCK", "ROLLING_B_DES", "p_gen_buySellBox01x", 2, Function_250(19), 1);
	Function_251(20, 1100.0f, "CARCANO", "CARCANO_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_251(23, 25.0f, "FIREBOTTLE", "FIREBOTTLE_DES", "p_gen_buySellBox02x", 1, Function_250(23), 1);
	Function_251(24, 45.0f, "DYNAMITE", "DYNAMITE_DES", "p_gen_buySellBox02x", 1, Function_250(24), 1);
	Function_251(25, 20.0f, "nTRW_KNIFE", "TRW_KNIFE_DES", "p_gen_buySellBox02x", 1, Function_250(25), 1);
	if (Function_522(32))
	{
		Function_251(29, 20.0f, "TOMAHAWK", "TOMAHAWK_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	Function_249(16, 175.0f, "nCAMP_LVL1", "CAMP_LVL1_DES", "p_gen_buySellBox01x", 2, 1, 0);
	Function_249(0, 30.0f, "nSNAKE_OIL", "SNAKE_OIL_DES", "p_gen_bottleBeer01x", 3, Function_248(0), 0);
	Function_249(1, 60.0f, "nMOONSHINE", "MOONSHINE_DES", "p_gen_bottleBeer01x", 3, Function_248(1), 0);
	Function_249(2, 35.0f, "CHEWING_TOBACCO", "CHEWING_TOBACCO_DES", "p_gen_bottleBeer01x", 3, Function_248(2), 0);
	Function_249(3, 25.0f, "nMEDS_LVL1", "MEDS_LVL1_DES", "p_gen_bottleBeer01x", 3, Function_248(3), 0);
	Function_249(8, 20.0f, "HORSE_PILLS", "HORSE_PILLS_DES", "p_gen_buySellBox02x", 1, 1, 0);
	Function_249(7, 1.0f, "APPLE", "nAPPLE_DES", "p_gen_buySellBox02x", 0, 1, 0);
	Function_249(9, 200.0f, "PARDON_LETTER", "PARDON_LETTER_DES", "p_gen_buySellBox01x", 0, 1, 0);
	Function_249(17, 25.0f, "RABBITS_FOOT", "RABBITS_FOOT_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(6, 15.0f, "BAIT", "BAIT_DES", "p_gen_buySellBox03x", 0, 1, 0);
	Function_249(13, 15.0f, "WANTED_POSTER", "WANTED_POSTER_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(19, 20.0f, "BANDANA", "BANDANA_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(20, 125.0f, "nBANDOLIER", "BANDOLIER_DES", "p_gen_buySellBox03x", 0, 1, 1);
	if (Function_70(3, 1))
	{
		Function_249(10, 70.0f, "ELEGANT_SUIT", "ELEGANT_SUIT_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_249(10, 70.0f, "ELEGANT_SUIT", "ELEGANT_SUIT_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_70(7, 32))
	{
		Function_249(53, 50.0f, "SCRAP_BANDITO", "SCRAP_BANDITO_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_249(53, 50.0f, "SCRAP_BANDITO", "SCRAP_BANDITO_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_70(5, 32))
	{
		Function_249(54, 100.0f, "SCRAP_CATTLE", "SCRAP_CATTLE_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_249(54, 100.0f, "SCRAP_CATTLE", "SCRAP_CATTLE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (IS_PS3() || Function_455())
	{
		if (Function_70(4, 32))
		{
			Function_249(55, 150.0f, "SCRAP_DRUNK", "SCRAP_DRUNK_DES", "p_gen_buySellBox02x", 1, 0, 1);
		}
		else
		{
			Function_249(55, 150.0f, "SCRAP_DRUNK", "SCRAP_DRUNK_DES", "p_gen_buySellBox02x", 1, 1, 1);
		}
	}
	else
	{
		Function_249(55, 150.0f, "SCRAP_DRUNK", "SCRAP_DRUNK_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	if (Function_70(9, 32))
	{
		Function_249(56, 200.0f, "SCRAP_MILITARY", "SCRAP_MILITARY_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_249(56, 200.0f, "SCRAP_MILITARY", "SCRAP_MILITARY_DES", "p_gen_buySellBox02x", 1, Function_248(56), 1);
	}
	if (Function_70(6, 32))
	{
		Function_249(58, 250.0f, "SCRAP_TREASURE", "SCRAP_TREASURE_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_249(58, 250.0f, "SCRAP_TREASURE", "SCRAP_TREASURE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_70(8, 32))
	{
		Function_249(57, 100.0f, "SCRAP_REBEL", "SCRAP_REBEL_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_249(57, 100.0f, "SCRAP_REBEL", "SCRAP_REBEL_DES", "p_gen_buySellBox02x", 1, Function_248(57), 1);
	}
	if (Function_79())
	{
		Function_249(30, 3000.0f, "HORSE_AMERICAN", "HORSE_AMERICAN_DES", "p_gen_buySellBox02x", 0, Function_248(30), 1);
		Function_249(31, 1000.0f, "HORSE_ARDENNAIS", "HORSE_ARDENNAIS_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(32, 1000.0f, "HORSE_CLEVELAND", "HORSE_CLEVELAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(33, 1000.0f, "HORSE_DUTCH", "HORSE_DUTCH_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(34, 400.0f, "HORSE_HEDOR", "HORSE_HEDOR_DES", "p_gen_buySellBox02x", 0, Function_248(34), 1);
		Function_249(35, 1000.0f, "HORSE_HIGHLAND", "HORSE_HIGHLAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(36, 3000.0f, "HORSE_HUNGARIAN", "HORSE_HUNGARIAN_DES", "p_gen_buySellBox02x", 0, Function_248(36), 1);
		Function_249(37, 200.0f, "HORSE_INFESTED", "HORSE_INFESTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(38, 200.0f, "HORSE_JADED", "HORSE_JADED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(39, 3000.0f, "HORSE_KENTUCKY", "HORSE_KENTUCKY_DES", "p_gen_buySellBox02x", 0, Function_248(39), 1);
		Function_249(40, 1000.0f, "HORSE_LUSITANO", "HORSE_LUSITANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(41, 200.0f, "nHORSE_NAG", "HORSE_NAG_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(42, 1000.0f, "HORSE_PAINTED", "HORSE_PAINTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(43, 1000.0f, "HORSE_PAINTSTD", "HORSE_PAINTSTD_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(44, 400.0f, "HORSE_PICOR", "HORSE_PICOR_DES", "p_gen_buySellBox02x", 0, Function_248(44), 1);
		Function_249(45, 1000.0f, "HORSE_PINTO", "HORSE_PINTO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(46, 1000.0f, "HORSE_QUARTER", "HORSE_QUARTER_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(47, 400.0f, "HORSE_SENOR", "HORSE_SENOR_DES", "p_gen_buySellBox02x", 0, Function_248(47), 1);
		Function_249(48, 1000.0f, "HORSE_TERSK", "HORSE_TERSK_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(49, 1000.0f, "HORSE_TOBIANO", "HORSE_TOBIANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(50, 1000.0f, "HORSE_TURKMEN", "HORSE_TURKMEN_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(51, 1000.0f, "HORSE_WELSH", "HORSE_WELSH_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(52, 10000.0f, "nHORSE_WAR", "HORSE_WAR_DES", "p_gen_buySellBox02x", 0, 1, 1);
	}
	else
	{
		Function_249(30, 1500.0f, "HORSE_AMERICAN", "HORSE_AMERICAN_DES", "p_gen_buySellBox02x", 0, Function_248(30), 1);
		Function_249(31, 500.0f, "HORSE_ARDENNAIS", "HORSE_ARDENNAIS_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(32, 500.0f, "HORSE_CLEVELAND", "HORSE_CLEVELAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(33, 500.0f, "HORSE_DUTCH", "HORSE_DUTCH_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(34, 200.0f, "HORSE_HEDOR", "HORSE_HEDOR_DES", "p_gen_buySellBox02x", 0, Function_248(34), 1);
		Function_249(35, 500.0f, "HORSE_HIGHLAND", "HORSE_HIGHLAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(36, 1500.0f, "HORSE_HUNGARIAN", "HORSE_HUNGARIAN_DES", "p_gen_buySellBox02x", 0, Function_248(36), 1);
		Function_249(37, 100.0f, "HORSE_INFESTED", "HORSE_INFESTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(38, 100.0f, "HORSE_JADED", "HORSE_JADED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(39, 1500.0f, "HORSE_KENTUCKY", "HORSE_KENTUCKY_DES", "p_gen_buySellBox02x", 0, Function_248(39), 1);
		Function_249(40, 500.0f, "HORSE_LUSITANO", "HORSE_LUSITANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(41, 100.0f, "nHORSE_NAG", "HORSE_NAG_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(42, 500.0f, "HORSE_PAINTED", "HORSE_PAINTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(43, 500.0f, "HORSE_PAINTSTD", "HORSE_PAINTSTD_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(44, 200.0f, "HORSE_PICOR", "HORSE_PICOR_DES", "p_gen_buySellBox02x", 0, Function_248(44), 1);
		Function_249(45, 500.0f, "HORSE_PINTO", "HORSE_PINTO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(46, 500.0f, "HORSE_QUARTER", "HORSE_QUARTER_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(47, 200.0f, "HORSE_SENOR", "HORSE_SENOR_DES", "p_gen_buySellBox02x", 0, Function_248(47), 1);
		Function_249(48, 500.0f, "HORSE_TERSK", "HORSE_TERSK_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(49, 500.0f, "HORSE_TOBIANO", "HORSE_TOBIANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(50, 500.0f, "HORSE_TURKMEN", "HORSE_TURKMEN_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(51, 500.0f, "HORSE_WELSH", "HORSE_WELSH_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_249(52, 10000.0f, "nHORSE_WAR", "HORSE_WAR_DES", "p_gen_buySellBox02x", 0, 1, 1);
	}
	Function_249(12, 25.0f, "SURVIVALIST_MAP", "SURVIVALIST_MAP_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(25, 25.0f, "nE_MAP_HGN", "E_MAP_HGN_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(21, 30.0f, "nE_MAP_CHO", "E_MAP_CHO_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(28, 35.0f, "nE_MAP_RIO", "E_MAP_RIO_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(23, 40.0f, "nE_MAP_GTR", "E_MAP_GTR_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(27, 45.0f, "nE_MAP_PUN", "E_MAP_PUN_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(26, 50.0f, "nE_MAP_PRD", "E_MAP_PRD_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(22, 55.0f, "nE_MAP_DZC", "E_MAP_DZC_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(24, 60.0f, "nE_MAP_GRT", "E_MAP_GRT_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_249(29, 65.0f, "nE_MAP_TAL", "E_MAP_TAL_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_247(6, 15.0f, "AM_PIST", "AM_PIST_DES", "p_gen_buySellBox03x", 0, 0);
	Function_247(8, 25.0f, "nAM_REPEAT", "AM_REPEAT_DES", "p_gen_buySellBox03x", 0, 0);
	Function_247(7, 12.0f, "AM_REVOL", "AM_REVOL_DES", "p_gen_buySellBox03x", 0, 0);
	Function_247(9, 20.0f, "AM_RIFLE", "AM_RIFLE_DES", "p_gen_buySellBox03x", 0, 0);
	if (Function_522(64))
	{
		Function_247(13, 20.0f, "AM_AT", "nAM_AT_DES", "p_gen_buySellBox03x", 0, 0);
	}
	Function_247(10, 30.0f, "AM_SHOT", "AM_SHOT_DES", "p_gen_buySellBox03x", 0, 0);
	Function_247(11, 40.0f, "AM_SNIPR", "AM_SNIPR_DES", "p_gen_buySellBox03x", 0, 0);
	if (Function_79())
	{
		Function_245(492, 1.0f, "sn_h_bw_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(491, 1.0f, "sn_h_ds_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(494, 2.0f, "sn_h_gc_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(496, 2.0f, "sn_h_hs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(493, 2.0f, "sn_h_po_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(490, 1.0f, "sn_h_pp_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(498, 1.0f, "sn_h_rs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(497, 3.0f, "sn_h_vs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(499, 1.0f, "sn_h_wf_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(495, 2.0f, "sn_h_wo_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(500, 1.0f, "sn_a1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(501, 2.0f, "sn_a1_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(502, 2.0f, "sn_b1_w_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(503, 3.0f, "sn_b2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(504, 5.0f, "sn_b2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(505, 4.0f, "sn_b2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(506, 3.0f, "sn_b2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(507, 2.0f, "sn_b3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(508, 5.0f, "sn_b3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(509, 2.0f, "sn_b4_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(510, 3.0f, "sn_b4_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(511, 5.0f, "sn_b4_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(512, 2.0f, "sn_b5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(513, 2.0f, "sn_b5_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(514, 3.0f, "sn_b5_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(515, 2.0f, "sn_b6_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(516, 3.0f, "sn_b6_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(517, 5.0f, "sn_b6_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(518, 2.0f, "sn_b7_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(519, 2.0f, "sn_b7_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(520, 3.0f, "sn_b7_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(521, 4.0f, "sn_b8_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(522, 5.0f, "sn_b8_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(523, 3.0f, "sn_b8_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(524, 1.0f, "sn_c1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(529, 1.0f, "sn_c5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(530, 1.0f, "sn_c5_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(525, 2.0f, "sn_c2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(526, 3.0f, "sn_c2_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(527, 5.0f, "sn_c2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(528, 3.0f, "sn_c2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(531, 1.0f, "sn_c3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(532, 2.0f, "sn_c3_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(533, 1.0f, "sn_c4_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(534, 2.0f, "sn_d1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(535, 2.0f, "sn_d1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(537, 1.0f, "sn_d3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(536, 1.0f, "sn_d3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(538, 1.0f, "sn_d2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(539, 3.0f, "sn_e1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(540, 3.0f, "sn_e2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(541, 4.0f, "sn_e2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(542, 5.0f, "sn_e2_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(543, 2.0f, "sn_f1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(544, 5.0f, "sn_f1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(545, 2.0f, "sn_g1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(546, 3.0f, "sn_g2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(547, 5.0f, "sn_g2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(548, 3.0f, "sn_g2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(549, 5.0f, "sn_g2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(550, 6.0f, "sn_g2_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(551, 1.0f, "sn_g3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(552, 2.0f, "sn_h1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(580, 1.0f, "sn_h2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(581, 1.0f, "sn_h2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(553, 1.0f, "sn_m1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(596, 1.0f, "sn_m1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(554, 16.0f, "sn_xw_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(555, 24.0f, "sn_xw_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(556, 22.0f, "sn_xw_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(557, 18.0f, "sn_xb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(558, 24.0f, "sn_xb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(559, 18.0f, "sn_xb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(560, 16.0f, "sn_xb_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(561, 22.0f, "sn_xb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(562, 16.0f, "sn_xc_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(563, 12.0f, "sn_xc_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(564, 18.0f, "sn_xc_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(565, 21.0f, "sn_xc_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(566, 16.0f, "sn_nb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(567, 18.0f, "sn_nb_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(568, 24.0f, "sn_nb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(569, 18.0f, "sn_nb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(570, 1.0f, "sn_o1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(571, 2.0f, "sn_p1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(572, 1.0f, "sn_r1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(573, 1.0f, "sn_r2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(574, 2.0f, "sn_r2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(575, 2.0f, "sn_s1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(576, 2.0f, "sn_s1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(577, 1.0f, "sn_s2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(578, 2.0f, "sn_s2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(579, 2.0f, "sn_s3_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(582, 1.0f, "sn_sb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(583, 1.0f, "sn_v_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(584, 3.0f, "sn_w1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(585, 3.0f, "sn_w1_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(586, 5.0f, "sn_w1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	}
	else
	{
		Function_245(492, 2.0f, "sn_h_bw_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(491, 1.0f, "sn_h_ds_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(494, 4.0f, "sn_h_gc_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(496, 5.0f, "sn_h_hs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(493, 4.0f, "sn_h_po_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(490, 2.0f, "sn_h_pp_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(498, 2.0f, "sn_h_rs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(497, 6.0f, "sn_h_vs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(499, 1.0f, "sn_h_wf_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(495, 3.0f, "sn_h_wo_des", "p_gen_package01x", "Pouch_01", 0);
		Function_245(500, 3.0f, "sn_a1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(501, 5.0f, "sn_a1_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(502, 5.0f, "sn_b1_w_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(503, 8.0f, "sn_b2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(504, 12.0f, "sn_b2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(505, 8.0f, "sn_b2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(506, 8.0f, "sn_b2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(507, 5.0f, "sn_b3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(508, 12.0f, "sn_b3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(509, 5.0f, "sn_b4_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(510, 8.0f, "sn_b4_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(511, 12.0f, "sn_b4_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(512, 5.0f, "sn_b5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(513, 3.0f, "sn_b5_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(514, 8.0f, "sn_b5_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(515, 5.0f, "sn_b6_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(516, 8.0f, "sn_b6_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(517, 12.0f, "sn_b6_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(518, 5.0f, "sn_b7_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(519, 6.0f, "sn_b7_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(520, 8.0f, "sn_b7_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(521, 10.0f, "sn_b8_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(522, 12.0f, "sn_b8_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(523, 8.0f, "sn_b8_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(524, 1.0f, "sn_c1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(529, 4.0f, "sn_c5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(530, 4.0f, "sn_c5_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(525, 5.0f, "sn_c2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(526, 8.0f, "sn_c2_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(527, 12.0f, "sn_c2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(528, 8.0f, "sn_c2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(531, 3.0f, "sn_c3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(532, 5.0f, "sn_c3_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(533, 3.0f, "sn_c4_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(534, 4.0f, "sn_d1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(535, 6.0f, "sn_d1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(537, 2.0f, "sn_d3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(536, 1.0f, "sn_d3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(538, 2.0f, "sn_d2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(539, 8.0f, "sn_e1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(540, 8.0f, "sn_e2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(541, 9.0f, "sn_e2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(542, 12.0f, "sn_e2_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(543, 5.0f, "sn_f1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(544, 12.0f, "sn_f1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(545, 5.0f, "sn_g1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(546, 8.0f, "sn_g2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(547, 12.0f, "sn_g2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(548, 8.0f, "sn_g2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(549, 12.0f, "sn_g2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(550, 16.0f, "sn_g2_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(551, 2.0f, "sn_g3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(552, 6.0f, "sn_h1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(580, 2.0f, "sn_h2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(581, 2.0f, "sn_h2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(553, 1.0f, "sn_m1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(596, 1.0f, "sn_m1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(554, 32.0f, "sn_xw_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(555, 48.0f, "sn_xw_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(556, 44.0f, "sn_xw_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(557, 36.0f, "sn_xb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(558, 48.0f, "sn_xb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(559, 36.0f, "sn_xb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(560, 32.0f, "sn_xb_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(561, 44.0f, "sn_xb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(562, 32.0f, "sn_xc_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(563, 24.0f, "sn_xc_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(564, 36.0f, "sn_xc_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(565, 42.0f, "sn_xc_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(566, 32.0f, "sn_nb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(567, 36.0f, "sn_nb_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(568, 48.0f, "sn_nb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(569, 36.0f, "sn_nb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(570, 4.0f, "sn_o1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(571, 5.0f, "sn_p1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(572, 3.0f, "sn_r1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(573, 3.0f, "sn_r2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(574, 5.0f, "sn_r2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(575, 5.0f, "sn_s1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(576, 6.0f, "sn_s1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(577, 3.0f, "sn_s2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(578, 5.0f, "sn_s2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(579, 6.0f, "sn_s3_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(582, 5.0f, "sn_sb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(583, 3.0f, "sn_v_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(584, 8.0f, "sn_w1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(585, 10.0f, "sn_w1_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_245(586, 12.0f, "sn_w1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	}
	Function_245(587, 100.0f, "sn_t_1_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(588, 125.0f, "sn_t_2_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(589, 150.0f, "sn_t_3_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(590, 175.0f, "sn_t_4_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(591, 200.0f, "sn_t_5_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(592, 225.0f, "sn_t_6_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(593, 300.0f, "sn_t_7_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(594, 400.0f, "sn_t_8_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_245(595, 500.0f, "sn_t_9_DES", "p_gen_package01x", "Pouch_01", 0);
	return;
}

int Function_245(int iParam0, var uParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x1665D / 91741
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtCollectableDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(&iParam3))
	{
		uVar0 = GET_ASSET_ID(&iParam3, 0);
		if (!UNK_0x214AFB8C(&uVar0))
		{
			LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtPropName is invalid!");
			return 0;
		}
	}
	if (!IS_STRING_VALID(&cParam4))
	{
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtCollectibleIconName is invalid!");
		return 0;
	}
	if (Function_18(iParam0) == 2)
	{
		iVar3 = Global_96573[iParam0];
		if (iVar3 <= 107)
		{
			Function_246(iParam0);
			Var1 = { StackVal, Function_246(iParam0) };
			Global_94645[iVar39].f_4 = STRING_TO_HASH(&Var1);
			Global_94645[iVar39] = uParam1;
			Global_94645[iVar39].f_8 = STRING_TO_HASH(&uParam2);
			*(&Global_94645[iVar39] + 48) = &uVar0;
			Global_94645[iVar39].f_56 = iParam5;
			Global_94645[iVar39].f_60 = iParam0;
			strcpy(&Global_94645[iVar39] + 12, &cParam4, 16);
			return 1;
		}
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: Reached CONST_MAX_COLLECTABLES limit, ask Christian to increase it!");
		return 0;
	}
	LOG_ERROR("SHOP_REGISTER_COLLECTABLE: theCollectable is invalid!");
	return 0;
	return 0;
}

struct<8> Function_246(int iParam0) //Position: 0x16896 / 92310
{
	struct<2> Var0;
	
	Var0 = { StackVal, Global_55480[iParam016] };
	return StackVal, Var0;
}

int Function_247(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x168AD / 92333
{
	var uVar0;
	
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SHOP_REGISTER_AMMO: txtAmmoName is invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&iParam3))
	{
		LOG_ERROR("SHOP_REGISTER_AMMO: txtAmmoDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(&bParam4))
	{
		uVar0 = GET_ASSET_ID(&bParam4, 0);
		if (!UNK_0x214AFB8C(&uVar0))
		{
			LOG_ERROR("SHOP_REGISTER_AMMO: txtPropName is invalid!");
			return 0;
		}
	}
	if (!iParam0 != 4294967295)
	{
		Global_94463[iParam05] = uParam1;
		Global_94463[iParam05].f_4 = STRING_TO_HASH(GET_AMMO_ENUM_ICON_NAME(iParam0));
		Global_94463[iParam05].f_8 = STRING_TO_HASH(&iParam3);
		*(&Global_94463[iParam05] + 16) = &uVar0;
		Global_94463[iParam05].f_24 = iParam5;
		Global_94463[iParam05].f_32 = &iParam6;
		return 1;
	}
	return 0;
}

int Function_248(bool bParam0) //Position: 0x169EC / 92652
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_GET_SAVED_AMMO_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	return Global_98050[bParam0];
}

int Function_249(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7) //Position: 0x16A49 / 92745
{
	var uVar0;
	
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SHOP_REGISTER_ITEM: txtItemName is invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&iParam3))
	{
		LOG_ERROR("SHOP_REGISTER_ITEM: txtItemDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(&fParam4))
	{
		uVar0 = GET_ASSET_ID(&fParam4, 0);
		if (!UNK_0x214AFB8C(&uVar0))
		{
			LOG_ERROR("SHOP_REGISTER_ITEM: txtPropName is invalid!");
			return 0;
		}
	}
	if (!iParam0 != 4294967295)
	{
		Global_93661[iParam05] = uParam1;
		Global_93661[iParam05].f_4 = STRING_TO_HASH(&uParam2);
		Global_93661[iParam05].f_8 = STRING_TO_HASH(&iParam3);
		*(&Global_93661[iParam05] + 16) = &uVar0;
		Global_93661[iParam05].f_24 = bParam5;
		Global_93661[iParam05].f_32 = &iParam6;
		Global_93661[iParam05].f_36 = &iParam7;
		return 1;
	}
	return 0;
}

int Function_250(bool bParam0) //Position: 0x16B93 / 93075
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_GET_SAVED_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	return Global_97968[bParam0];
}

int Function_251(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7) //Position: 0x16BF2 / 93170
{
	var uVar0;
	
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SHOP_REGISTER_WEAPON: txtWeaponName is invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&iParam3))
	{
		LOG_ERROR("SHOP_REGISTER_WEAPON: txtWeaponDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(&fParam4))
	{
		uVar0 = GET_ASSET_ID(&fParam4, 0);
		if (!UNK_0x214AFB8C(&uVar0))
		{
			LOG_ERROR("SHOP_REGISTER_WEAPON: txtPropName is invalid!");
			return 0;
		}
	}
	if (!iParam0 != 4294967295)
	{
		Global_93259[iParam05] = uParam1;
		Global_93259[iParam05].f_4 = STRING_TO_HASH(GET_WEAPON_INTERNAL_NAME(iParam0));
		Global_93259[iParam05].f_8 = STRING_TO_HASH(&iParam3);
		*(&Global_93259[iParam05] + 16) = &uVar0;
		Global_93259[iParam05].f_24 = bParam5;
		Global_93259[iParam05].f_32 = &iParam6;
		Global_93259[iParam05].f_36 = &iParam7;
		return 1;
	}
	return 0;
}

int Function_252(int iParam0, int iParam1) //Position: 0x16D48 / 93512
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

int Function_253(int iParam0, int iParam1) //Position: 0x16DA3 / 93603
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

void Function_254(int iParam0) //Position: 0x16E00 / 93696
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_262(200)), 0);
	return;
}

void Function_255(int iParam0) //Position: 0x16E23 / 93731
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_256(int iParam0) //Position: 0x16E40 / 93760
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_262(105)), 0);
	return;
}

void Function_257(int iParam0) //Position: 0x16E63 / 93795
{
	*(&Global_21369 + 32) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 32, 0, 0, (&iParam0 + Function_262(90)), 0);
	return;
}

void Function_258(int iParam0) //Position: 0x16E86 / 93830
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_262(90)), 0);
	return;
}

void Function_259(int iParam0) //Position: 0x16EA9 / 93865
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_453(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_453(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_453(&Global_21369 + 48);
	PRINTNL();
	Function_258(&iParam0);
	return;
}

void Function_260(int iParam0) //Position: 0x16F4B / 94027
{
	Global_21369 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369, 0, 0, (&iParam0 + Function_262(90)), 0);
	return;
}

void Function_261(int iParam0) //Position: 0x16F6A / 94058
{
	*(&Global_21369 + 16) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 16, 0, 0, (&iParam0 + Function_262(90)), 0);
	return;
}

int Function_262(bool bParam0) //Position: 0x16F8D / 94093
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_263(bool bParam0) //Position: 0x16FA4 / 94116
{
	if (bParam0)
	{
		Function_381(512);
	}
	else
	{
		Function_537(512);
	}
	return;
}

void Function_264(int iParam0, bool bParam1, bool bParam2) //Position: 0x16FBE / 94142
{
	int iVar0;
	bool bVar1;
	
	if (Function_272(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_79())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_521(1);
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
			Function_271(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_62(Global_119936, 1))
				{
					Function_57(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_270(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_62(Global_119936, 2))
				{
					Function_57(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_418(1, bVar1, 0, 0);
	}
	else
	{
		Function_8(1, (4294967295 * bVar1), 0);
	}
	if (Function_521(1) <= 4294962296)
	{
		Function_520(1, 4294962296, 0);
	}
	else if (Function_521(1) >= 5000)
	{
		Function_520(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_19(1));
	iVar0 = Function_521(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_266(2, Function_269(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_266(2, Function_269(Global_21369.f_244), 0);
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
				Function_266(2, Function_269(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_266(2, Function_269(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_266(2, Function_269(Global_21369.f_244), 1);
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
				Function_266(2, Function_269(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_266(2, Function_269(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_266(2, Function_269(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_266(2, Function_269(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_266(2, Function_269(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_266(2, Function_269(Global_21369.f_244), 1);
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
				Function_266(2, Function_269(Global_21369.f_244), 0);
			}
			break;
	}
	Function_265(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0x172E5 / 94949
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

int Function_266(int iParam0, char* cParam1) //Position: 0x1754F / 95567
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
	Function_267(iParam0, &cParam1, 0, 1);
	iVar1 = Function_109();
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

int Function_267(int iParam0, char* cParam1) //Position: 0x176DF / 95967
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
		Function_268(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_268(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x17A36 / 96822
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

var Function_269(int iParam0) //Position: 0x17ABE / 96958
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

int Function_270(int iParam0, bool bParam1) //Position: 0x17B61 / 97121
{
	bool bVar0;
	int iVar1;
	
	Function_8(iParam0, bParam1, 0);
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
	iVar1 = Function_112(iParam0, 4294967295);
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
	iVar1 = Function_109();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_271(int iParam0, bool bParam1) //Position: 0x17D0C / 97548
{
	bool bVar0;
	int iVar1;
	
	Function_418(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_112(iParam0, 4294967295);
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
	iVar1 = Function_109();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_272(int iParam0) //Position: 0x17EB8 / 97976
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_273(int iParam0, bool bParam1, bool bParam2) //Position: 0x17EC7 / 97991
{
	int iVar0;
	bool bVar1;
	
	if (Function_272(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_79())
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
	iVar0 = Function_521(3);
	Function_275();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_271(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_62(Global_119936, 4))
			{
				Function_57(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_418(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_19(3));
	iVar0 = Function_521(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_266(4, Function_274(Global_21369.f_248), 1);
				Function_265(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_266(4, Function_274(Global_21369.f_248), 1);
				Function_265(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_266(4, Function_274(Global_21369.f_248), 1);
				Function_265(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_266(4, Function_274(Global_21369.f_248), 1);
				Function_265(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_266(4, Function_274(Global_21369.f_248), 1);
				Function_265(Global_21369.f_244, Global_21369.f_248);
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

var Function_274(int iParam0) //Position: 0x1809D / 98461
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

void Function_275() //Position: 0x1812C / 98604
{
	Function_277(3, 0.0f);
	Function_276(3, 10000.0f);
	return;
}

int Function_276(int iParam0, int iParam1) //Position: 0x18142 / 98626
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_277(int iParam0, int iParam1) //Position: 0x18182 / 98690
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_278() //Position: 0x181C2 / 98754
{
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (!Function_279(&Global_21369 + 72, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_279(var uParam0, bool bParam1, float fParam2) //Position: 0x181EA / 98794
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&uParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&uParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&uParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&uParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_280(bool bParam0, int iParam1) //Position: 0x1828C / 98956
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

void Function_281(bool bParam0) //Position: 0x182CB / 99019
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_282();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_31();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_550(&Global_99144, 1);
		Function_550(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_282() //Position: 0x18320 / 99104
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_231())
	{
		Function_284(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_284(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_283(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_283(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_55(StackVal, Var0))
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

struct<8> Function_283(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x183D7 / 99287
{
	int iVar0;
	
	iVar0 = Function_88(&uParam2, &uParam3);
	if (Function_87(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_551(&Global_99144, 1);
			Function_550(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_551(&Global_99144, 2);
			Function_550(&Global_99144, 1);
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
		Function_551(&Global_99144, 2);
		Function_550(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_131();
	return StackVal, Function_131();
}

struct<8> Function_284(float fParam0, int iParam1) //Position: 0x184CF / 99535
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_286(&Global_54076, &Var3);
	if (!Function_285(Global_46760[0]))
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
	if (!Function_285(Global_46760[2]))
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
	if (!Function_285(Global_46760[1]))
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
	if (!Function_285(Global_46796[1]))
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
	if (!Function_285(Global_46796[3]))
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
	if (!Function_285(Global_46796[2]))
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
	if (!Function_285(Global_46796[4]))
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
	if (!Function_285(Global_46816[0]))
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
	if (!Function_285(Global_46816[1]))
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
	if (!Function_285(Global_46816[2]))
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
	if (!Function_285(Global_46838[0]))
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
	if (!Function_285(Global_46850[0]))
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
	if (!Function_285(Global_46850[1]))
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
	if (!Function_285(Global_46850[2]))
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
	if (!Function_285(Global_46866[0]))
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
	if (!Function_285(Global_46866[1]))
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
	if (!Function_285(Global_46866[2]))
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
	if (!Function_285(Global_46894[2]))
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
	if (!Function_285(Global_46894[3]))
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
	if (!Function_285(Global_46894[0]))
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
	if (!Function_285(Global_46914[0]))
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
	if (!Function_285(Global_46926[2]))
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
	if (!Function_285(Global_46926[1]))
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
	if (!Function_285(Global_46926[0]))
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
	if (!Function_285(Global_46838[1]))
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
	if (!Function_285(Global_46894[1]))
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
	Function_551(&Global_99144, 2);
	Function_550(&Global_99144, 1);
	iParam1 = 0;
	if (Function_55(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_285(int iParam0) //Position: 0x18CFB / 101627
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_509(bVar0, 0x1000000) || Function_509(bVar0, 0x2000000)) || Function_509(bVar0, 0x4000000)) || !Function_509(bVar0, 0x10000000));
}

void Function_286(var uParam0, var uParam1) //Position: 0x18D36 / 101686
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

void Function_287() //Position: 0x18D45 / 101701
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

void Function_288() //Position: 0x18D73 / 101747
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = 0.0f;
	iVar1 = Function_297();
	iVar2 = Function_296();
	iVar3 = Function_295();
	bVar0 = (bVar0 + (24.0f * Function_294(1.0f, (IntToFloat(Function_521(12)) / 24.0f))));
	bVar0 = (bVar0 + (17.0f * Function_294(1.0f, (IntToFloat(Function_521(13)) / 17.0f))));
	bVar0 = (bVar0 + (7.0f * Function_294(1.0f, (IntToFloat(Function_521(14)) / 7.0f))));
	bVar0 = (bVar0 + (9.0f * Function_294(1.0f, (IntToFloat(Function_521(15)) / 9.0f))));
	bVar0 = (bVar0 + (4,5f * Function_294(1.0f, (IntToFloat(iVar1) / 9.0f))));
	bVar0 = (bVar0 + (3,5f * Function_294(1.0f, (IntToFloat(iVar3) / 7.0f))));
	bVar0 = (bVar0 + (2.0f * Function_294(1.0f, (IntToFloat(((Function_521(363) + Function_521(364)) + Function_521(365))) / 20.0f))));
	bVar0 = (bVar0 + (2,5f * Function_294(1.0f, (IntToFloat(Function_521(469)) / 5.0f))));
	bVar0 = (bVar0 + (2,5f * Function_294(1.0f, (IntToFloat(Function_521(400)) / 5.0f))));
	bVar0 = (bVar0 + (3.0f * Function_294(1.0f, (IntToFloat(Function_521(410)) / 6.0f))));
	bVar0 = (bVar0 + (3.0f * Function_294(1.0f, (Function_19(474) / Function_21(474)))));
	bVar0 = (bVar0 + (2.0f * Function_294(1.0f, (Function_19(475) / Function_21(475)))));
	bVar0 = (bVar0 + (1.0f * Function_294(1.0f, (Function_19(476) / Function_21(476)))));
	bVar0 = (bVar0 + (9.0f * Function_294(1.0f, (IntToFloat(iVar2) / 18.0f))));
	bVar0 = (bVar0 + (2.0f * Function_294(1.0f, (Function_19(468) / 13.0f))));
	if (Function_293(3) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(3) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	if (Function_293(0) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(0) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	if (Function_293(2) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(2) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	if (Function_293(1) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(1) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	Function_291();
	if (Global_47151[7])
	{
		Function_290(iVar1, iVar2, iVar3);
	}
	if (bVar0 < Function_19(5))
	{
		Function_289(5, bVar0, 0);
		Function_290(iVar1, iVar2, iVar3);
	}
	if (bVar0 <= 100.0f && Global_6662)
	{
		if (!Function_23(12))
		{
			Function_74(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (bVar0 <= 75.0f)
	{
		if (!Function_73(12))
		{
			Function_72(12, 0, 1, 1, 0);
		}
	}
	bVar4 = (bVar4 + Function_521(12));
	bVar4 = (bVar4 + Function_521(13));
	bVar4 = (bVar4 + Function_521(14));
	bVar4 = (bVar4 + Function_521(15));
	bVar4 = (bVar4 + Function_521(457));
	bVar4 = (bVar4 + Function_521(458));
	bVar4 = (bVar4 + Function_521(363));
	bVar4 = (bVar4 + Function_521(364));
	bVar4 = (bVar4 + Function_521(365));
	bVar4 = (bVar4 + Function_521(469));
	bVar4 = (bVar4 + Function_521(400));
	bVar4 = (bVar4 + Function_521(410));
	bVar4 = (bVar4 + Function_521(474));
	bVar4 = (bVar4 + Function_521(475));
	bVar4 = (bVar4 + Function_521(476));
	bVar4 = (bVar4 + Function_521(407));
	bVar4 = (bVar4 + Function_521(468));
	bVar4 = (bVar4 + Function_521(409));
	bVar4 = (bVar4 + Function_293(3));
	bVar4 = (bVar4 + Function_293(0));
	bVar4 = (bVar4 + Function_293(2));
	bVar4 = (bVar4 + Function_293(1));
	if (bVar4 >= Function_521(6))
	{
		Function_520(6, bVar4, 0);
	}
	return;
}

int Function_289(int iParam0, bool bParam1, bool bParam2) //Position: 0x190F1 / 102641
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_45(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_20(iParam0);
	if (&bParam2)
	{
		Function_9(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_290(int iParam0, int iParam1, int iParam2) //Position: 0x1935E / 103262
{
	if (Function_293(3) > 10)
	{
	}
	else if (Function_293(3) > 5)
	{
	}
	if (Function_293(0) > 10)
	{
	}
	else if (Function_293(0) > 5)
	{
	}
	if (Function_293(2) > 10)
	{
	}
	else if (Function_293(2) > 5)
	{
	}
	if (Function_293(1) > 10)
	{
	}
	else if (Function_293(1) > 5)
	{
	}
	return;
}

void Function_291() //Position: 0x193B4 / 103348
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = (Function_292(2, Function_293(1)) - 1);
	bVar1 = SHIFT_LEFT((Function_292(2, Function_293(0)) - 1), 10);
	bVar2 = SHIFT_LEFT((Function_292(2, Function_293(2)) - 1), 20);
	bVar3 = SHIFT_LEFT((Function_292(2, Function_293(3)) - 1), 20);
	Function_52(5, ((iVar0 || bVar1) || bVar2));
	Function_52(4, bVar3);
	return;
}

int Function_292(int iParam0, int iParam1) //Position: 0x1940B / 103435
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < iParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

int Function_293(int iParam0) //Position: 0x19438 / 103480
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

float Function_294(float fParam0, float fParam1) //Position: 0x19460 / 103520
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var Function_295() //Position: 0x19473 / 103539
{
	int iVar0;
	
	if (Function_415(Global_46948) >= 0)
	{
		iVar0++;
	}
	if (Function_415(Global_46950) >= 0)
	{
		iVar0++;
	}
	if (Function_415(Global_46952) >= 0)
	{
		iVar0++;
	}
	if (Function_415(Global_46951) >= 0)
	{
		iVar0++;
	}
	if (Function_415(Global_46953) >= 0)
	{
		iVar0++;
	}
	if (Function_415(Global_46955) >= 0)
	{
		iVar0++;
	}
	if (Function_415(Global_46954) >= 0)
	{
		iVar0++;
	}
	return iVar0;
}

var Function_296() //Position: 0x194EB / 103659
{
	int iVar0;
	bool bVar1;
	
	if (Function_47(3))
	{
		bVar1 = (bVar1 || 1);
		iVar0++;
	}
	if (Function_47(9))
	{
		bVar1 = (bVar1 || 2);
		iVar0++;
	}
	if (Function_47(14))
	{
		bVar1 = (bVar1 || 4);
		iVar0++;
	}
	if (Function_47(20))
	{
		bVar1 = (bVar1 || 8);
		iVar0++;
	}
	if (Function_47(22))
	{
		bVar1 = (bVar1 || 16);
		iVar0++;
	}
	if (Function_47(27))
	{
		bVar1 = (bVar1 || 32);
		iVar0++;
	}
	if (Function_47(31))
	{
		bVar1 = (bVar1 || 64);
		iVar0++;
	}
	if (Function_47(34))
	{
		bVar1 = (bVar1 || 128);
		iVar0++;
	}
	if (Function_47(37))
	{
		bVar1 = (bVar1 || 256);
		iVar0++;
	}
	if (Function_47(44))
	{
		bVar1 = (bVar1 || 512);
		iVar0++;
	}
	if (Function_47(48))
	{
		bVar1 = (bVar1 || 1024);
		iVar0++;
	}
	if (Function_47(53))
	{
		bVar1 = (bVar1 || 2048);
		iVar0++;
	}
	if (Function_47(56))
	{
		bVar1 = (bVar1 || 4096);
		iVar0++;
	}
	if (Function_47(59))
	{
		bVar1 = (bVar1 || 8192);
		iVar0++;
	}
	if (Function_47(63))
	{
		bVar1 = (bVar1 || 16384);
		iVar0++;
	}
	if (Function_47(67))
	{
		bVar1 = (bVar1 || 32768);
		iVar0++;
	}
	if (Function_47(71))
	{
		bVar1 = (bVar1 || 65536);
		iVar0++;
	}
	if (Function_47(76))
	{
		bVar1 = (bVar1 || 131072);
		iVar0++;
	}
	Function_52(7, bVar1);
	return iVar0;
}

var Function_297() //Position: 0x1967C / 104060
{
	int iVar0;
	
	if (Function_23(9))
	{
		iVar0++;
	}
	if (Function_23(10))
	{
		iVar0++;
	}
	if (Function_23(3))
	{
		iVar0++;
	}
	if (Function_23(15))
	{
		iVar0++;
	}
	if (Function_23(14))
	{
		iVar0++;
	}
	if (Function_23(5))
	{
		iVar0++;
	}
	if (Function_23(6))
	{
		iVar0++;
	}
	if (Function_23(7))
	{
		iVar0++;
	}
	if (Function_23(8))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_298(int iParam0, bool bParam1) //Position: 0x196FE / 104190
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
							Function_57(&Global_54076, 0x1000000, 3, 0);
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
							Function_57(&Global_54076, 0x1000000, 3, 0);
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
							Function_57(&Global_54076, 0x1000000, 3, 0);
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
							Function_57(&Global_54076, 0x1000000, 3, 0);
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
							Function_57(&Global_54076, 0x1000000, 3, 0);
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
							Function_57(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_298(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_298(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_298(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_298(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_298(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_298(57, 0);
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

void Function_299(struct<41> Param0) //Position: 0x199FB / 104955
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	char* cVar5[16];
	
	iVar0 = Param0;
	iVar1 = Function_305(Param0);
	bVar2 = StackVal;
	iVar4 = Function_304(iVar0, iVar1, Global_21684[bVar27].f_32, Global_21684[bVar27].f_28, Global_21684[bVar27].f_20);
	if (Global_21684[bVar27].f_32 < Param0.f_40 || Global_21684[bVar27].f_32 > 1.0f)
	{
		Global_21684[bVar27].f_32 = Param0.f_40;
		cVar5 = { StackVal, StackVal, StackVal, Function_303(iVar0) };
		stradd(&cVar5, "_Float2", 16);
		UPDATE_PROFILE_STAT(&cVar5, Param0.f_40, 1);
	}
	switch (iVar1)
	{
		case 0x00000000:
			if (Global_21684[bVar27].f_20 <= Param0.f_28)
			{
				Global_21684[bVar27].f_20 = Param0.f_28;
				cVar5 = { StackVal, StackVal, StackVal, Function_303(iVar0) };
				stradd(&cVar5, "_Int1", 16);
				UPDATE_PROFILE_STAT(&cVar5, TO_FLOAT(Param0.f_28), 1);
			}
			if (Global_21684[bVar27].f_24 <= Param0.f_32)
			{
				Global_21684[bVar27].f_24 = Param0.f_32;
			}
		
		case 0x00000001:
			if (Global_21684[bVar27].f_28 > Param0.f_36)
			{
				Global_21684[bVar27].f_28 = Param0.f_36;
				cVar5 = { StackVal, StackVal, StackVal, Function_303(iVar0) };
				stradd(&cVar5, "_Float1", 16);
				UPDATE_PROFILE_STAT(&cVar5, Param0.f_36, 1);
			}
			break;
		
		case 0x00000002:
			if (Global_21684[bVar27].f_28 > Param0.f_36)
			{
				Global_21684[bVar27].f_28 = Param0.f_36;
				cVar5 = { StackVal, StackVal, StackVal, Function_303(iVar0) };
				stradd(&cVar5, "_Float1", 16);
				UPDATE_PROFILE_STAT(&cVar5, Param0.f_36, 1);
			}
			if (Global_21684[bVar27].f_20 <= Param0.f_28)
			{
				Global_21684[bVar27].f_20 = Param0.f_28;
				cVar5 = { StackVal, StackVal, StackVal, Function_303(iVar0) };
				stradd(&cVar5, "_Int1", 16);
				UPDATE_PROFILE_STAT(&cVar5, TO_FLOAT(Param0.f_28), 1);
			}
			break;
	}
	if (StackVal != 4 && !Param0.f_20)
	{
		Global_21684[bVar27].f_4 = 3;
		Function_300(bVar2);
	}
	iVar3 = Function_304(iVar0, iVar1, Global_21684[bVar27].f_32, Global_21684[bVar27].f_28, Global_21684[bVar27].f_20);
	if (iVar4 == 1 && iVar3 != 1)
	{
		Function_273(50, 1, 0);
		if (!Function_231())
		{
			if (!Function_62(Global_119934, 131072))
			{
				Function_57(Function_38(), 131072, 1, 1);
			}
		}
		if (iVar1 == 0)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
			{
				AWARD_ACHIEVEMENT(28);
			}
		}
	}
	SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Global_6667[iVar028] + 16), iVar3);
	return;
}

void Function_300(bool bParam0) //Position: 0x19C76 / 105590
{
	int iVar0;
	int iVar1;
	
	if (!Function_225(bParam0))
	{
		return;
	}
	switch (Function_224(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_302(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_418(12, 1, 0, 0);
				Function_412(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_418(13, 1, 0, 0);
				Function_412(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_418(14, 1, 0, 0);
				Function_412(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_418(15, 1, 0, 0);
				Function_412(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_418(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_302(bParam0))
			{
				case 0x00000000:
					if (Function_415(bParam0) == 1)
					{
						iVar0 = Function_301(bParam0);
						if (Function_349(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_412(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_412(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_412(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_412(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_412(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_412(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_412(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_412(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_412(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_412(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_412(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_412(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_412(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_412(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_412(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_412(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_412(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_412(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_412(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_412(4, 19);
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
								Function_418(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_418(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_418(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_301(bParam0) == 0)
			{
				if (Function_415(bParam0) == 1)
				{
					Function_418(458, 1, 0, 0);
					iVar0 = Function_302(bParam0);
					if (Function_349(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_412(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_412(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_412(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_412(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_412(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_412(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_412(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_412(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_415(bParam0) == 1)
			{
				Function_418(400, 1, 0, 0);
			}
			switch (Function_302(bParam0))
			{
				case 0x00000001:
					Function_418(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_412(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_412(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_412(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_418(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_412(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_412(6, 9);
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

int Function_301(bool bParam0) //Position: 0x1A152 / 106834
{
	if (!Function_225(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_302(bool bParam0) //Position: 0x1A171 / 106865
{
	if (!Function_225(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

struct<16> Function_303(int iParam0) //Position: 0x1A191 / 106897
{
	char* cVar0[16];
	
	if (!Function_231())
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

int Function_304(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x1A1CB / 106955
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

int Function_305(int iParam0) //Position: 0x1A393 / 107411
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

bool Function_306(int iParam0) //Position: 0x1A428 / 107560
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_307(int iParam0) //Position: 0x1A43E / 107582
{
	if (!Function_306(iParam0))
	{
		return 5;
	}
	return Global_6667[iParam028];
}

void Function_308() //Position: 0x1A456 / 107606
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

void Function_309() //Position: 0x1A4A7 / 107687
{
	PRINTSTRING("Locking advanced weapons...");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(false, 1);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(12, 1);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(19, 1);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(8, 1);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 1);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	return;
}

int Function_310(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A55F / 107871
{
	bool bVar0;
	
	bVar0 = Function_521(0);
	if ((Function_521(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_418(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_521(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_418(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_521(597) + Function_521(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_311() //Position: 0x1A631 / 108081
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_6606)
	{
		return;
	}
	uVar2 = Function_38();
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		bVar3 = GET_AMMO_ENUM(bVar1);
		if (bVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

var Function_312(bool bParam0) //Position: 0x1A70A / 108298
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

void Function_313() //Position: 0x1A7FE / 108542
{
	struct<413> Var0;
	
	*(&Var0 + 24) = "RIFLE_Antitank";
	Var0.f_8 = 42;
	Var0.f_12 = 4294967295;
	Var0.f_16 = 80;
	Var0.f_20 = 13;
	*(&Var0 + 40) = "rifle_buffalo01x";
	*(&Var0 + 48) = "WEAPONS_RIFLE_BUFFALO";
	*(&Var0 + 56) = "WEAPONS_RIFLE_BUFFALO";
	*(&Var0 + 32) = "ANTITANK";
	*(&Var0 + 88) = "RIF_Explosive";
	Var0.f_96 = 4000.0f;
	*(&Var0 + 104) = "rfl";
	*(&Var0 + 112) = "rfl_buf";
	*(&Var0 + 120) = "Rifle_bltStrip";
	*(&Var0 + 128) = "rifle_1892Win";
	*(&Var0 + 136) = "rifle_1892Win";
	Var0.f_144 = 1.0f;
	Var0.f_148 = 110.0f;
	Var0.f_152 = 80.0f;
	Var0.f_156 = 0,5f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,6f;
	Var0.f_168 = 120.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 0,4f;
	Var0.f_180 = 1,2f;
	*(&Var0 + 184) = "MUZZLE_FLASH2";
	*(&Var0 + 192) = "RUMBLE_RIFLE_HI";
	*(&Var0 + 200) = "wrist_r_Attachment";
	Var0.f_208 = 0.0f;
	Var0.f_212 = 0.0f;
	Var0.f_216 = 0.0f;
	Var0.f_220 = 0.0f;
	Var0.f_224 = 40.0f;
	Var0.f_228 = 100.0f;
	Var0.f_232 = 0,3f;
	Var0.f_236 = 40.0f;
	Var0.f_240 = 100.0f;
	Var0.f_244 = 0,3f;
	Var0.f_248 = 0.0f;
	Var0.f_252 = 1.0f;
	Var0.f_256 = 0.0f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 1;
	Var0.f_276 = 0;
	Var0.f_280 = 1,8f;
	Var0.f_284 = 0,2f;
	Var0.f_288 = 0,5f;
	Var0.f_292 = 1.0f;
	Var0.f_296 = 1.0f;
	Var0.f_300 = 65.0f;
	Var0.f_304 = 65.0f;
	Var0.f_308 = 65.0f;
	Var0.f_312 = 70.0f;
	Var0.f_316 = 300.0f;
	*(&Var0 + 320) = "";
	Var0.f_328 = 0;
	Var0.f_332 = 10.0f;
	Var0.f_336 = 60.0f;
	Var0.f_340 = 70.0f;
	Var0.f_344 = 5.0f;
	Var0.f_348 = 1.0f;
	Var0.f_352 = 4.0f;
	Var0.f_356 = 50.0f;
	Var0.f_360 = 1.0f;
	Var0.f_364 = 0;
	Var0.f_368 = 20.0f;
	*(&Var0 + 376) = "Single";
	Var0.f_384 = 0,5f;
	Var0.f_392 = 1.0f;
	Var0.f_396 = 1.0f;
	Var0.f_400 = 500.0f;
	Var0.f_404 = 1,8f;
	Var0.f_408 = 0,5f;
	Var0.f_388 = 1.0f;
	Var0.f_412 = 1.0f;
	Var0.f_64 = 4294967295;
	Var0.f_68 = 1.0f;
	Var0.f_72 = 0,7f;
	Var0.f_76 = 0,27f;
	Var0.f_80 = 0,7f;
	Var0.f_84 = 0,1f;
	Function_314(31, "base_rifle", &Var0);
	return;
}

void Function_314(var uParam0, var uParam1, var uParam2) //Position: 0x1AB69 / 109417
{
	INIT_NATIVE_WEAPONENUM_RIFLE(uParam0, &uParam1, &uParam2);
	return;
}

void Function_315() //Position: 0x1AB7A / 109434
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_382(16384);
	}
	return;
}

bool Function_316(int iParam0) //Position: 0x1AB96 / 109462
{
	if (!Function_349(iParam0))
	{
		return 1;
	}
	return Function_421(&(Global_43791[iParam0]), 4);
}

bool Function_317(int iParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x1ABB2 / 109490
{
	struct<2> Var0;
	char* cVar2[64];
	var uVar18;
	int iVar19;
	float fVar20;
	
	if (!Function_325(&Var0))
	{
		return 1;
	}
	if (Global_53524.f_44)
	{
		if (Function_323(32))
		{
			return 1;
		}
	}
	if (Global_46719 != 4294967295)
	{
		if (!Function_231())
		{
			strcpy(&cVar2, "$/content/init/pop/", 64);
			stradd(&cVar2, &Global_44085[Global_467199] + 32, 64);
			stradd(&cVar2, "_population", 64);
		}
		else
		{
			strcpy(&cVar2, "$/content/dlc/zombiepack/init/pop/", 64);
			stradd(&cVar2, &Global_44085[Global_467199] + 32, 64);
			stradd(&cVar2, "_population_z", 64);
		}
		uVar18 = Global_46719;
		if (!&Global_44085[Global_467199] + 24 != 4294967295)
		{
			if (IS_SCRIPT_VALID(&Global_46717))
			{
				TERMINATE_SCRIPT(&Global_46717);
			}
			Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar2, &uVar18, 2, 0);
		}
		Global_46719 = 4294967295;
	}
	fVar20 = GET_PROFILE_TIME();
	iVar19 = iParam0;
	while (iVar19 < 145)
	{
		if (StackVal == 1)
		{
			if (!Function_421(&(Global_43791[iVar19]), 1) && !Function_421(&(Global_43791[iVar19]), 4))
			{
				if (!Function_421(&(Global_43791[iVar19]), 1024))
				{
					if (Global_44085[iVar199] == 4294967295)
					{
						Function_347(iVar19, 0);
					}
					else if (Function_421(&(Global_43791[Global_44085[iVar199]]), 1024))
					{
						Function_347(iVar19, 0);
						Function_320(Global_44085[iVar199]);
					}
				}
			}
		}
		else if (!Global_53524.f_36)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar199] + 8))
			{
				if (IS_POINT_IN_VOLUME(Var0, &Global_44085[iVar199] + 8) || DECOR_CHECK_EXIST(&Global_44085[iVar199] + 8, "nforceLoad"))
				{
					if (!Function_421(&(Global_43791[iVar19]), 4) && !Function_421(&(Global_43791[iVar19]), 1))
					{
						if (StackVal == 2)
						{
							if (StackVal && (Function_421(&(Global_43791[Global_43788]), 4) || Function_421(&(Global_43791[Global_43788]), 1)) != 2)
							{
								Function_420(&(Global_43791[Global_43788]), 2);
								Function_320(Global_43788);
							}
							Global_43788 = iVar19;
						}
						Function_347(iVar19, &iParam3);
					}
					else if (StackVal == 6)
					{
						if (!Function_231())
						{
							Function_318(iVar19);
						}
					}
					Global_44085[iVar199].f_16 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_421(&(Global_43791[iVar19]), 4) || Function_421(&(Global_43791[iVar19]), 1))
				{
					if (!StackVal != 2)
					{
						if (!Function_421(&(Global_43791[iVar19]), 2097152))
						{
							if (Global_44085[iVar199].f_16 + 5.0f) > GET_CURRENT_GAME_TIME()
							{
								Function_320(iVar19);
							}
							else if (!Function_421(&(Global_43791[iVar19]), 2))
							{
								Function_420(&(Global_43791[iVar19]), 2);
							}
						}
					}
				}
			}
		}
		if (&bParam2)
		{
			if ((GET_PROFILE_TIME() - fVar20) < 200.0f)
			{
				iParam0 = iVar19 + 1;
				return 0;
			}
		}
		iVar19++;
	}
	return 1;
}

void Function_318(int iParam0) //Position: 0x1AEC0 / 110272
{
	struct<2> Var0;
	
	if (!Function_421(&(Global_43791[iParam0]), 65536))
	{
		return;
	}
	if (Function_421(&(Global_43791[iParam0]), 1048576))
	{
		return;
	}
	if (Global_21498.f_16 + 10.0f) < GET_CURRENT_GAME_TIME()
	{
		return;
	}
	if (IS_ACTOR_RIDING(&Global_54076) && Function_319(&Global_54076, 1) < 2.0f)
	{
		return;
	}
	if (Function_29(0, 0, 1, 1))
	{
		Function_420(&(Global_43791[iParam0]), 1048576);
		return;
	}
	if (IS_ANY_SPEECH_PLAYING(&Global_54076))
	{
		return;
	}
	GET_OBJECT_POSITION(&Global_44085[iParam09] + 8, &Var0);
	if (Function_86(StackVal, StackVal, Global_54078, Var0) > 25.0f)
	{
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 360, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		Function_420(&(Global_43791[iParam0]), 1048576);
	}
	return;
}

float Function_319(var uParam0, bool bParam1) //Position: 0x1AF7D / 110461
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_320(int iParam0) //Position: 0x1AF9E / 110494
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	char* cVar4[64];
	int iVar20;
	
	if (!Function_349(iParam0))
	{
		return;
	}
	Function_448(&(Global_43791[iParam0]), 262147);
	if (StackVal == 6)
	{
		Function_448(&(Global_43791[iParam0]), 4);
		if (!Global_6623 && 1)
		{
			if (Function_349(Global_44085[iParam09]))
			{
			}
		}
		return;
	}
	if (IS_SCRIPT_VALID(&Global_44085[iParam09] + 40))
	{
		TERMINATE_SCRIPT(&Global_44085[iParam09] + 40);
	}
	if (!Function_325(&Var0))
	{
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 5) != 4)
	{
		Function_448(&(Global_43791[iParam0]), 131072);
		iVar2 = Function_322(StackVal, Global_54078, 1);
		if (!Function_349(iVar2))
		{
			iVar2 = Global_43788;
			bVar3 = true;
		}
		else
		{
			bVar3 = IS_POINT_IN_VOLUME(Var0, &Global_44085[iVar29] + 8);
		}
		if (bVar3)
		{
			if (!Function_321(Global_44085[iParam09], iParam0))
			{
				if (!Function_231())
				{
					strcpy(&cVar4, "ninit/pop/", 64);
					stradd(&cVar4, &Global_44085[iVar29] + 32, 64);
					stradd(&cVar4, "_population", 64);
				}
				else
				{
					strcpy(&cVar4, "$/content/dlc/zombiepack/init/pop/", 64);
					stradd(&cVar4, &Global_44085[iVar29] + 32, 64);
					stradd(&cVar4, "_population_z", 64);
				}
				iVar20 = iVar2;
				if (&Global_44085[iParam09] + 24 != 4294967295)
				{
					if (IS_SCRIPT_VALID(&Global_46717))
					{
						TERMINATE_SCRIPT(&Global_46717);
					}
					Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar4, &iVar20, 2, 0);
				}
				Global_43790 = StackVal;
			}
		}
		else if (!bVar3)
		{
		}
	}
	return;
}

bool Function_321(int iParam0, int iParam1) //Position: 0x1B15E / 110942
{
	int iVar0;
	struct<2> Var1;
	
	if (!Function_325(&Var1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (Global_43791 - 1))
	{
		if (!iVar0 != iParam1)
		{
			if (Global_44085[iVar09] == iParam0)
			{
				if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
				{
					if (IS_POINT_IN_VOLUME(Var1, &Global_44085[iVar09] + 8))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_322(struct<2> Param0, bool bParam2) //Position: 0x1B1D7 / 111063
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_323(int iParam0) //Position: 0x1B243 / 111171
{
	return Function_324(Global_123163.f_84, iParam0);
}

int Function_324(var uParam0, int iParam1) //Position: 0x1B254 / 111188
{
	return (uParam0 && iParam1) == 0;
}

bool Function_325(int iParam0) //Position: 0x1B261 / 111201
{
	var uVar0;
	
	uVar0 = Function_38();
	if (IS_ACTOR_VALID(&uVar0))
	{
		GET_POSITION(&uVar0, &iParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(&iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void Function_326(bool bParam0) //Position: 0x1B290 / 111248
{
	Function_327(&bParam0);
	Function_327(&bParam0);
	Function_327(&bParam0);
	Function_327(&bParam0);
	return;
}

int Function_327(bool bParam0) //Position: 0x1B2B2 / 111282
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	char* cVar6[32];
	struct<4> Var14;
	
	if (!IS_OBJECT_VALID(&Global_54076))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!&bParam0 && !Function_373(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(&Global_54076, "tutorial");
	bVar2 = DECOR_GET_INT(&Global_54076, "ntutorial2");
	bVar3 = DECOR_GET_INT(&Global_54076, "ntutorial3");
	bVar4 = DECOR_GET_INT(&Global_54076, "ntutorial4");
	if (!Function_62(Global_119937, 4))
	{
		if (Function_335(bVar4, 4))
		{
			Function_425(&Global_119937, 4);
			Function_334(&Global_54076, 4, 4);
			if (!&bParam0)
			{
				Function_232("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_62(Global_119934, 0x4000000) && !(((((((Global_6623 || Global_6637) || Global_6625) || Global_6610) || Global_6608) || Global_99146) || Global_6638) || Global_6639))
	{
		if (Function_335(bVar1, 0x4000000))
		{
			Function_425(&Global_119934, 0x4000000);
			if (!&bParam0)
			{
				Function_232("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_6606 && !Function_62(Global_119937, 8)) && !((((Global_6610 || Global_99146) || Global_6627) || Global_6638) || Global_6639))
	{
		if (((GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) * 0,3f) && HAS_ITEM(Function_312(3), &Global_54076)) && IS_ACTOR_ALIVE(&Global_54076)) && !IS_ACTOR_IN_WATER(&Global_54076))
		{
			Function_425(&Global_119937, 8);
			if (!&bParam0)
			{
				Function_232("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!&bParam0 && ((((((((((Global_93258 || Global_6623) || Global_6625) || Global_6608) || Global_99146) || Global_6638) || Global_6637) || Global_6627) || Global_6610) || Global_6639) || !IS_ACTOR_ALIVE(&Global_54076)))
	{
		return 0;
	}
	if (!&bParam0 && ((Function_63() || HUD_IS_FADED()) || HUD_IS_FADING()))
	{
		return 0;
	}
	if (!&bParam0 && (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!&bParam0)
	{
		iVar5 = 0;
		while (iVar5 <= Global_6667)
		{
			if (Function_333(&Global_6667[iVar528] + 184, 16))
			{
				if (((Global_10966 != Global_6667[iVar528].f_188 || Global_10966 != Global_6667[iVar528].f_192) || Global_10966 != Global_6667[iVar528].f_196) || Global_10966 != Global_6667[iVar528].f_200)
				{
					if (Global_6667[iVar528].f_180)
					{
						if (IS_BLIP_VALID(&Global_6667[iVar528] + 144))
						{
							SET_BLIP_BLINK(&Global_6667[iVar528] + 144, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_303(iVar5) };
						strcpy(&cVar6, "comp_intro_", 32);
						stradd(&cVar6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_332(&cVar6, 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							Function_232(&cVar6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_331(&Global_6667[iVar528] + 184, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_493)
	{
		case 0x00000000:
			if (!Function_62(Global_119935, 0x10000000))
			{
				if (Function_335(bVar2, 0x10000000))
				{
					Function_425(&Global_119935, 0x10000000);
					Function_334(&Global_54076, 0x10000000, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 1))
			{
				if (Function_335(bVar2, 1))
				{
					Function_425(&Global_119935, 1);
					Function_334(&Global_54076, 1, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 2))
			{
				if (Function_335(bVar2, 2))
				{
					Function_425(&Global_119935, 2);
					Function_334(&Global_54076, 2, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 4))
			{
				if (Function_335(bVar2, 4))
				{
					Function_425(&Global_119935, 4);
					Function_334(&Global_54076, 4, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 4194304))
			{
				if (Function_335(bVar2, 4194304))
				{
					Function_425(&Global_119935, 4194304);
					Function_334(&Global_54076, 4194304, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 0x2000000))
			{
				if (Function_335(bVar2, 0x2000000))
				{
					Function_425(&Global_119935, 0x2000000);
					Function_334(&Global_54076, 0x2000000, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 0x4000000))
			{
				if (Function_62(Global_119935, 0x2000000))
				{
					Function_425(&Global_119935, 0x4000000);
					if (!&bParam0)
					{
						Function_232("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 0x8000000))
			{
				if (Function_335(bVar2, 0x8000000))
				{
					Function_425(&Global_119935, 0x8000000);
					Function_334(&Global_54076, 0x8000000, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_335(bVar2, 32768))
			{
				Function_425(&Global_119935, 32768);
				Function_334(&Global_54076, 32768, 2);
				Function_232("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_335(bVar2, 128))
			{
				if (Function_62(Global_119935, 65536))
				{
					Function_425(&Global_119935, 128);
					Function_334(&Global_54076, 128, 2);
					Function_232("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_335(bVar2, 256))
			{
				if (Function_62(Global_119935, 131072))
				{
					Function_425(&Global_119935, 256);
					Function_334(&Global_54076, 256, 2);
					Function_232("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_335(bVar2, 512))
			{
				if (Function_62(Global_119935, 262144))
				{
					Function_425(&Global_119935, 512);
					Function_334(&Global_54076, 512, 2);
					Function_232("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_335(bVar2, 1024))
			{
				if (Function_62(Global_119935, 131072))
				{
					Function_425(&Global_119935, 1024);
					Function_334(&Global_54076, 1024, 2);
					Function_232("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_62(Global_119935, 64))
			{
				if (Function_335(bVar2, 64))
				{
					Function_425(&Global_119935, 64);
					Function_334(&Global_54076, 64, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 16384))
			{
				if (Function_335(bVar2, 16384))
				{
					Function_425(&Global_119935, 16384);
					Function_334(&Global_54076, 16384, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 0x1000000))
			{
				if (Function_335(bVar2, 0x1000000))
				{
					Function_425(&Global_119935, 0x1000000);
					Function_334(&Global_54076, 0x1000000, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 8))
			{
				if (Global_6646 && Global_39922.f_308)
				{
					Function_425(&Global_119935, 8);
					if (!&bParam0)
					{
						Function_232("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 8388608))
			{
				if (Function_335(bVar2, 8388608))
				{
					Function_425(&Global_119935, 8388608);
					if (!&bParam0)
					{
						Function_232("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 32))
			{
				if (Function_335(bVar2, 32))
				{
					Function_425(&Global_119935, 32);
					Function_334(&Global_54076, 32, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 4096))
			{
				if (Function_335(bVar2, 4096))
				{
					Function_425(&Global_119935, 4096);
					Function_334(&Global_54076, 4096, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 16) && Function_62(Global_119935, 8))
			{
				if (Function_335(bVar2, 16))
				{
					Function_425(&Global_119935, 16);
					Function_334(&Global_54076, 16, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 2048))
			{
				if (Function_335(bVar2, 2048))
				{
					Function_425(&Global_119935, 2048);
					Function_334(&Global_54076, 2048, 2);
					if (!&bParam0)
					{
						Function_232("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119935, 8192))
			{
				if (Function_335(bVar2, 8192))
				{
					Function_425(&Global_119935, 8192);
					Function_334(&Global_54076, 8192, 2);
					if (!&bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_62(Global_119936, 16384))
			{
				if (Function_335(bVar3, 16384))
				{
					Function_425(&Global_119936, 16384);
					Function_334(&Global_54076, 16384, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 32768))
			{
				if (Function_335(bVar3, 32768))
				{
					Function_425(&Global_119936, 32768);
					Function_334(&Global_54076, 32768, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 65536))
			{
				if (Function_335(bVar3, 65536))
				{
					Function_425(&Global_119936, 65536);
					Function_334(&Global_54076, 65536, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 131072))
			{
				if (Function_335(bVar3, 131072))
				{
					Function_425(&Global_119936, 131072);
					Function_334(&Global_54076, 131072, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 262144))
			{
				if (Function_335(bVar3, 262144))
				{
					Function_425(&Global_119936, 262144);
					Function_334(&Global_54076, 262144, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_335(bVar2, 524288))
			{
				Function_425(&Global_119935, 524288);
				Function_334(&Global_54076, 524288, 2);
				Function_232("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_62(Global_119935, 1048576))
			{
				if (Function_62(Global_119935, 524288))
				{
					Function_425(&Global_119935, 1048576);
					if (!&bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_335(bVar2, 2097152))
			{
				Function_425(&Global_119935, 2097152);
				Function_334(&Global_54076, 2097152, 2);
				Function_232("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_335(bVar2, 65536))
			{
				Function_425(&Global_119935, 65536);
				Function_334(&Global_54076, 65536, 2);
				Function_232("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_335(bVar2, 131072))
			{
				Function_425(&Global_119935, 131072);
				Function_334(&Global_54076, 131072, 2);
				Function_232("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_335(bVar2, 262144))
			{
				Function_425(&Global_119935, 262144);
				Function_334(&Global_54076, 262144, 2);
				Function_232("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_62(Global_119936, 0x2000000))
			{
				if (Function_335(bVar3, 0x2000000))
				{
					Function_425(&Global_119936, 0x2000000);
					Function_334(&Global_54076, 0x2000000, 3);
					Function_232("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_6646 || Global_6647)
			{
				break;
			}
			if (!Function_62(Global_119934, 0x20000000))
			{
				if (Function_374(8, 0))
				{
					Function_425(&Global_119934, 0x20000000);
					if (!&bParam0)
					{
						Function_232("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 0x4000000))
			{
				if (Function_374(8, 0))
				{
					Function_425(&Global_119934, 0x4000000);
					if (!&bParam0)
					{
						Function_232("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 0x8000000))
			{
				if (Function_335(bVar3, 0x8000000))
				{
					Function_425(&Global_119936, 0x8000000);
					if (!&bParam0)
					{
						Function_232("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 8))
			{
				if (Function_335(bVar1, 8))
				{
					Function_425(&Global_119934, 8);
					if (!&bParam0)
					{
						Function_232("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076) && !(Function_374(4, 0) || Function_374(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(&Global_54076)))
					{
						Function_425(&Global_119934, 1);
						if (!&bParam0)
						{
							Function_232("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_62(Global_119934, 64))
			{
				if (Function_335(bVar1, 64))
				{
					Function_425(&Global_119934, 64);
					Function_334(&Global_54076, 64, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 256))
			{
				if (Function_335(bVar1, 256))
				{
					Function_425(&Global_119934, 256);
					Function_334(&Global_54076, 256, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 128))
			{
				if (Function_335(bVar1, 128))
				{
					Function_330(5.0f);
					Function_425(&Global_119934, 128);
					Function_334(&Global_54076, 128, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 2097152))
			{
				if (Function_335(bVar1, 2097152))
				{
					Function_425(&Global_119934, 2097152);
					Function_334(&Global_54076, 2097152, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 4194304))
			{
				if (Function_62(Global_119934, 2097152))
				{
					Function_425(&Global_119934, 4194304);
					Function_334(&Global_54076, 4194304, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 8388608))
			{
				if (Function_62(Global_119934, 4194304))
				{
					Function_425(&Global_119934, 8388608);
					Function_334(&Global_54076, 8388608, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 2))
			{
				if (Function_335(bVar1, 2))
				{
					Function_425(&Global_119934, 2);
					Function_334(&Global_54076, 2, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 4))
			{
				if (Function_62(Global_119934, 2))
				{
					Function_425(&Global_119934, 4);
					if (!&bParam0)
					{
						Function_232("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_23(3))
			{
				if (!Function_62(Global_119934, 512))
				{
					if (Function_335(bVar1, 512))
					{
						Function_425(&Global_119934, 512);
						Function_334(&Global_54076, 512, 1);
						if (!&bParam0)
						{
							Function_232("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_72(3, 0, 1, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 4096))
			{
				if ((Global_43790 != 2 && !Global_6631) && !Function_29(0, 0, 1, 6))
				{
					Function_425(&Global_119934, 4096);
					if (!&bParam0)
					{
						Function_232("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 8192))
			{
				if (Function_62(Global_119934, 4096))
				{
					Function_425(&Global_119934, 8192);
					if (!&bParam0)
					{
						Function_232("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 1024))
			{
				if (((Global_43790 != 2 && !Global_6631) && !Function_29(0, 0, 1, 1)) && Function_374(4, 0))
				{
					Function_425(&Global_119934, 1024);
					if (!&bParam0)
					{
						Function_232("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 2048))
			{
				if (Function_62(Global_119934, 1024))
				{
					Function_425(&Global_119934, 2048);
					if (!&bParam0)
					{
						Function_232("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 16))
			{
				if (Function_335(bVar1, 16) && !Global_6623)
				{
					Function_425(&Global_119934, 16);
					Function_334(&Global_54076, 16, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 32))
			{
				if (Function_62(Global_119934, 16))
				{
					Function_425(&Global_119934, 32);
					if (!&bParam0)
					{
						Function_232("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 32768))
			{
				if (Function_335(bVar1, 32768))
				{
					Function_425(&Global_119934, 32768);
					if (!&bParam0)
					{
						Function_232("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 65536))
			{
				if (Function_335(bVar1, 65536))
				{
					Function_334(&Global_54076, 65536, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 131072))
			{
				if (Function_335(bVar1, 131072))
				{
					Function_425(&Global_119934, 131072);
					if (!&bParam0)
					{
						Function_232("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 524288))
			{
				if (Function_335(bVar1, 524288))
				{
					Function_425(&Global_119934, 524288);
					if (!&bParam0)
					{
						Function_232("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 1048576))
			{
				if (Function_335(bVar1, 1048576))
				{
					Function_425(&Global_119934, 1048576);
					if (!&bParam0)
					{
						Function_232("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 0x1000000))
			{
				if (Function_335(bVar1, 0x1000000))
				{
					Function_425(&Global_119934, 0x1000000);
					if (!&bParam0)
					{
						Function_232("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 0x2000000))
			{
				if (Function_62(Global_119934, 0x1000000))
				{
					Function_425(&Global_119934, 0x2000000);
					if (!&bParam0)
					{
						Function_232("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 4194304))
			{
				if (Function_335(bVar3, 4194304))
				{
					Function_425(&Global_119936, 4194304);
					if (!&bParam0)
					{
						Function_232("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 524288))
			{
				if (Function_335(bVar3, 524288))
				{
					Function_425(&Global_119936, 524288);
					if (!&bParam0)
					{
						Function_232("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 1048576))
			{
				if (Function_62(Global_119936, 524288))
				{
					Function_425(&Global_119936, 1048576);
					if (!&bParam0)
					{
						Function_232("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 2097152))
			{
				if (Function_335(bVar3, 2097152))
				{
					Function_425(&Global_119936, 2097152);
					if (!&bParam0)
					{
						Function_232("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Global_6646 || Global_6647)
			{
				break;
			}
			if (!Function_62(Global_119934, 262144))
			{
				if (Function_335(bVar1, 262144))
				{
					Function_425(&Global_119934, 262144);
					if (!&bParam0)
					{
						Function_232("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 1))
			{
				if (Function_335(bVar3, 1))
				{
					Function_425(&Global_119936, 1);
					Function_334(&Global_54076, 1, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 2))
			{
				if (Function_335(bVar3, 2))
				{
					Function_425(&Global_119936, 2);
					Function_334(&Global_54076, 2, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 4))
			{
				if (Function_335(bVar3, 4))
				{
					Function_425(&Global_119936, 4);
					Function_334(&Global_54076, 4, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 8))
			{
				if (Function_329() == 0)
				{
					Function_425(&Global_119936, 8);
					if (!&bParam0)
					{
						Function_232("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 16))
			{
				if (Function_329() == 1)
				{
					Function_425(&Global_119936, 16);
					if (!&bParam0)
					{
						Function_232("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 32))
			{
				if (Function_329() == 2)
				{
					Function_425(&Global_119936, 32);
					if (!&bParam0)
					{
						Function_232("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 64))
			{
				if (Function_329() == 4)
				{
					Function_425(&Global_119936, 64);
					if (!&bParam0)
					{
						Function_232("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 128))
			{
				if (Function_329() == 5)
				{
					Function_425(&Global_119936, 128);
					if (!&bParam0)
					{
						Function_232("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 256))
			{
				if (Function_329() == 6)
				{
					Function_425(&Global_119936, 256);
					if (!&bParam0)
					{
						Function_232("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 512))
			{
				if (Function_328() == 1)
				{
					Function_425(&Global_119936, 512);
					if (!&bParam0)
					{
						Function_232("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 1024))
			{
				if (Function_328() == 2)
				{
					Function_425(&Global_119936, 1024);
					if (!&bParam0)
					{
						Function_232("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 2048))
			{
				if (Function_328() == 3)
				{
					Function_425(&Global_119936, 2048);
					if (!&bParam0)
					{
						Function_232("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 4096))
			{
				if (Function_328() == 4)
				{
					Function_425(&Global_119936, 4096);
					if (!&bParam0)
					{
						Function_232("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 8192))
			{
				if (Function_328() == 5)
				{
					Function_425(&Global_119936, 8192);
					if (!&bParam0)
					{
						Function_232("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 8388608))
			{
				if (Function_335(bVar3, 8388608))
				{
					Function_425(&Global_119936, 8388608);
					Function_334(&Global_54076, 8388608, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119936, 0x1000000))
			{
				if (Function_335(bVar3, 0x1000000))
				{
					Function_425(&Global_119936, 0x1000000);
					Function_334(&Global_54076, 0x1000000, 3);
					if (!&bParam0)
					{
						Function_232("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119934, 0x8000000))
			{
				if (Function_335(bVar1, 0x8000000))
				{
					Function_425(&Global_119934, 0x8000000);
					Function_334(&Global_54076, 0x8000000, 1);
					if (!&bParam0)
					{
						Function_232("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_335(bVar4, 1) && Function_374(4, 0))
			{
				Function_334(&Global_54076, 1, 4);
				if (!&bParam0)
				{
					Function_232("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_62(Global_119935, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_312(53), &Global_54076) || HAS_ITEM(Function_312(54), &Global_54076)) || HAS_ITEM(Function_312(55), &Global_54076)) || HAS_ITEM(Function_312(56), &Global_54076)) || HAS_ITEM(Function_312(57), &Global_54076)) || HAS_ITEM(Function_312(58), &Global_54076)) || HAS_ITEM(Function_312(10), &Global_54076))
				{
					Function_425(&Global_119935, 0x20000000);
					if (!&bParam0)
					{
						Function_232("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_335(bVar4, 2) && Function_374(4, 0))
			{
				if (Function_62(Global_119937, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_21369.f_224)
					{
						if (!&bParam0)
						{
							Function_232("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_21369.f_224 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_62(Global_119937, 2))
				{
					if (!&bParam0)
					{
						Function_425(&Global_119937, 2);
						Function_232("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_21369.f_224 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119937, 16))
			{
				if (Function_374(9, 0))
				{
					Function_425(&Global_119937, 16);
					if (!&bParam0)
					{
						Function_232("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_119937, 32))
			{
				if (Function_335(bVar4, 32))
				{
					Function_425(&Global_119937, 32);
					Function_334(&Global_54076, 32, 4);
					if (!&bParam0)
					{
						Function_232("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_493++;
	if (iLocal_493 >= 3)
	{
		iLocal_493 = 0;
	}
	return 0;
}

int Function_328() //Position: 0x1D565 / 120165
{
	return Global_21369.f_248;
}

int Function_329() //Position: 0x1D570 / 120176
{
	return Global_21369.f_244;
}

void Function_330(float fParam0) //Position: 0x1D57B / 120187
{
	if (fParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", fParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_331(var uParam0, bool bParam1) //Position: 0x1D600 / 120320
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_332(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x1D61A / 120346
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
			Var0 = { StackVal, StackVal, StackVal, Function_233(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

bool Function_333(var uParam0, int iParam1) //Position: 0x1D6AF / 120495
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_334(var uParam0, int iParam1, int iParam2) //Position: 0x1D6CC / 120524
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	Function_58(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

bool Function_335(bool bParam0, int iParam1) //Position: 0x1D720 / 120608
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_336() //Position: 0x1D736 / 120630
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		Global_39290[iVar0] = !Global_6606;
		switch (iVar0)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Global_6606)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_6606);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_6606);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Global_6606)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_6606);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_6606);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Global_6606)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_6606);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_6606);
				}
				break;
			
			case 0x00000003:
			case 0x00000005:
			case 0x00000004:
			case 0x00000006:
			case 0x00000007:
			case 0x00000008:
				break;
			
			case 0x0000000B:
			case 0x00000009:
				if (Global_6666)
				{
					Global_39290[iVar0] = 0;
				}
				break;
			
			case 0x0000000C:
				Function_340(1);
				break;
			
			case 0x0000000A:
				if (Global_6664 || Global_6666)
				{
					Global_39290[iVar0] = 0;
				}
				break;
			
			case 0x0000000D:
				if (Global_6605)
				{
					Global_39290[iVar0] = 0;
				}
				break;
			
			case 0x0000000E:
				if (Global_6605)
				{
					Global_39290[iVar0] = 0;
					SET_WEAPONENUM_LOCKED(14, 0);
				}
				break;
			
			case 0x0000000F:
				if (Global_6605)
				{
					Global_39290[iVar0] = 0;
				}
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
				break;
		}
		iVar0++;
	}
	if (Global_6606)
	{
		Function_337(0);
	}
	return;
}

void Function_337(bool bParam0) //Position: 0x1D8EB / 121067
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[32];
	char* cVar11[32];
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		if ((!Global_39290[iVar0] && (!&bParam0 || !Function_63())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_374(2, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_276(390, 3.0f);
						Function_520(390, 1, &bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_374(11, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_276(390, 3.0f);
						Function_520(390, 2, &bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_374(30, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_276(390, 3.0f);
						Function_520(390, 3, &bParam0);
					}
					break;
				
				case 0x00000003:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_374(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "taxi_coach", 32);
					}
					break;
				
				case 0x00000005:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_374(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&cVar3, "shop_feature_1", 32);
						strcpy(&cVar11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_374(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_374(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_374(37, 0))
					{
						Global_39290[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_374(2, 0) && !Function_545("npressDemo"))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_374(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&cVar3, "house_feature_1", 32);
						strcpy(&cVar11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_339(1))
					{
						Function_340(1);
						Global_39290[iVar0] = 1;
					}
					else
					{
						Function_340(0);
						Global_39290[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_293(0) == 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_293(1) > 5)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_338(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_293(0) != 10 && Function_293(1) != 10) && Function_293(2) != 10) && Function_293(3) != 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_74(11, 0, 1);
					}
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
					break;
			}
			if (bVar1 && !&bParam0)
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1 && bParam0)
	{
		stradd(&cVar3, "_help", 32);
		Function_232(&cVar3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&cVar11, "_help", 32);
			Function_232(&cVar11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_338(int iParam0, int iParam1) //Position: 0x1DCC1 / 122049
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_253(iParam0, iParam1);
	Function_57(&Global_54076, 1, 4, 1);
	return 1;
}

bool Function_339(int iParam0) //Position: 0x1DD36 / 122166
{
	int iVar0;
	
	if (!Function_306(iParam0))
	{
		return 0;
	}
	iVar0 = Function_447(iParam0);
	if (!Function_227(Function_447(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_340(bool bParam0) //Position: 0x1DD6C / 122220
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_341() //Position: 0x1DDE3 / 122339
{
	int iVar0;
	int iVar1;
	
	if (Global_6606)
	{
		Function_342();
	}
	else if (Global_6666)
	{
		iVar0 = 0;
		while (iVar0 <= Global_39266)
		{
			Global_39266[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_39266)
		{
			Global_39266[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_342() //Position: 0x1DE36 / 122422
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39266)
	{
		if (!Global_39266[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_374(3, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_23(1))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_374(4, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					Global_39266[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_374(25, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000005:
					if (Function_374(5, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					if (Function_374(10, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000008:
					if (Function_374(3, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000009:
					Global_39266[bVar0] = 1;
					break;
				
				case 0x0000000A:
					if (Function_374(37, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a MinigameType that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_343() //Position: 0x1DF96 / 122774
{
	int iVar0;
	
	if (Global_6606)
	{
		Function_344();
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= Global_39258)
		{
			Global_39258[iVar0] = 1;
			iVar0++;
		}
	}
	return;
}

void Function_344() //Position: 0x1DFC4 / 122820
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39258)
	{
		if (!Global_39258[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (Function_374(2, 0))
					{
						Global_39258[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_374(6, 0))
					{
						Global_39258[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a JobType that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_345() //Position: 0x1E065 / 122981
{
	int iVar0;
	int iVar1;
	
	if (Global_6606)
	{
		Function_346();
	}
	else if (Global_6666)
	{
		iVar0 = 0;
		while (iVar0 <= Global_39248)
		{
			Global_39248[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_39248)
		{
			Global_39248[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_346() //Position: 0x1E0B8 / 123064
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39248)
	{
		if (!Global_39248[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_374(8, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_374(16, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_374(13, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					if (Function_374(34, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a ProcTheme that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_347(int iParam0, int iParam1) //Position: 0x1E188 / 123272
{
	char* cVar0[64];
	int iVar16;
	
	if (!Function_349(iParam0))
	{
		return;
	}
	if (StackVal && !Global_99147 != 1)
	{
		return;
	}
	if (Global_6638 || Global_6639)
	{
		return;
	}
	if ((!Global_10967 != 0 && !Global_10967 != 8) && !Global_10967 != 4)
	{
		return;
	}
	Function_420(&(Global_43791[iParam0]), 1);
	if (DECOR_CHECK_EXIST(&Global_44085[iParam09] + 8, "nforceLoad"))
	{
		DECOR_REMOVE(&Global_44085[iParam09] + 8, "nforceLoad");
		iParam1 = 1;
	}
	if (StackVal == 6)
	{
		Function_169(iParam0);
		Function_420(&(Global_43791[iParam0]), 4);
		if (!Global_6623 && 1)
		{
		}
		if (Global_44085[iParam09].f_16 + 60.0f) > GET_CURRENT_GAME_TIME()
		{
			if (Function_349(Global_44085[iParam09]))
			{
				Function_348(&Global_44085[Global_44085[iParam09]9] + 32, &Global_44085[iParam09] + 32);
			}
			Global_21498 = &Global_44085[iParam09] + 8;
			Global_21498.f_12 = 4;
			Global_21498.f_8 = 0;
		}
		return;
	}
	if (StackVal == 2)
	{
		if ((!Global_44085[iParam09] != Global_46722[Global_43787] && Function_349(Global_44085[iParam09])) || iParam1)
		{
			strcpy(&cVar0, "init/rdr2init_gringo_", 64);
			stradd(&cVar0, &Global_44085[Global_44085[iParam09]9] + 32, 64);
			LAUNCH_NEW_SCRIPT(&cVar0, 0);
		}
	}
	iVar16 = iParam0;
	if (!&Global_44085[iParam09] + 24 != 4294967295)
	{
		(&Global_44085[iParam09] + 40) = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&Global_44085[iParam09] + 24, 4), &iVar16, 2, 0);
	}
	Function_448(&(Global_43791[iParam0]), 131072);
	Function_103(iParam0);
	return;
}

void Function_348(var uParam0, int iParam1) //Position: 0x1E341 / 123713
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_349(int iParam0) //Position: 0x1E34E / 123726
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_350() //Position: 0x1E364 / 123748
{
	int iVar0;
	struct<77> Var1;
	
	*(&Var1 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var1, 48, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_351(&Var1 + 80[iVar02]);
		iVar0++;
	}
	Var1.f_76 = 0;
	STORE_GAME_STATE(&Var1, 48, 1);
	return;
}

void Function_351(vector3 vParam0) //Position: 0x1E3A5 / 123813
{
	int iVar0;
	
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("COPY_BEAT_DATA_LOAD");
		PRINTNL();
	}
	if (vParam0.z)
	{
		if (Global_47151[16])
		{
			PRINTSTRING("beatIdx Valid: ");
			PRINTSTRING(GET_ASSET_NAME(&Global_27462[vParam0.y52] + 160, 4));
			PRINTNL();
		}
		iVar0 = GET_TIME_OF_DAY();
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("TIME_OF_DAY: ");
			Function_453(&iVar0);
		}
		ADD_TIME(&iVar0, 0, 10, false, 0);
		Global_26652[vParam0.y4] = &iVar0;
		*(&Global_27462[vParam0.y52] + 376) = &iVar0;
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("New Run time: ");
			Function_453(&(Global_26652[vParam0.y4]));
		}
		Global_26652[vParam0.y4].f_16 = vParam0;
		Global_26652[vParam0.y4].f_8 = StackVal + 1;
		Global_26652[vParam0.y4].f_12++;
		vParam0.f_8 = 0;
	}
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("COPY_BEAT_DATA_LOAD END");
	}
	return;
}

void Function_352(struct<21> Param0) //Position: 0x1E50A / 124170
{
	Param0 = &fParam1;
	Param0.f_4 = &iParam2;
	Param0.f_8 = -1.0f;
	Param0.f_12 = -1.0f;
	Param0.f_16 = 0;
	Param0.f_20 = GET_CURRENT_GAME_TIME();
	if (Param0 > 0,1f)
	{
		Param0 = 0,1f;
	}
	SET_WIND(StackVal, Param0, 5.0f);
	return;
}

void Function_353(struct<49> Param0) //Position: 0x1E55C / 124252
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var8;
	float fVar12[24];
	
	Param0 = bParam1;
	Param0.f_8 = 4294967295;
	Param0.f_4 = 4294967295;
	Param0.f_24 = 0;
	if (Global_6605)
	{
		*(&Param0 + 16) = GET_TIME_OF_DAY();
		Function_453(&Param0 + 16);
		PRINTNL();
		ADD_TIME(&Param0 + 16, 0, 16, false, 0);
		*(&Param0 + 56) = GET_TIME_OF_DAY();
		*(&Param0 + 64) = GET_TIME_OF_DAY();
		Param0.f_48 = 4294967295;
	}
	iVar1 = GET_MINUTES_FROM_TIME_OF_DAY(&Param0 + 56);
	bVar3 = (GET_MINUTES_FROM_TIME_OF_DAY(GET_TIME_OF_DAY()) - iVar1);
	bVar2 = (GET_MINUTES_FROM_TIME_OF_DAY(&Param0 + 64) - iVar1);
	if (Global_47151[14])
	{
		Var4 = { StackVal, StackVal, StackVal, Function_354(&Param0 + 16) };
		Var8 = { StackVal, StackVal, StackVal, Function_354(&Param0 + 64) };
	}
	if ((((Global_6605 || Param0.f_48 != 4294967295) || bVar3 >= 0) || bVar3 <= bVar2) || bVar2 >= 0)
	{
		SET_WEATHER(bParam1, &uVar0);
	}
	else
	{
		fVar12[Param0.f_48] = (1.0f - (TO_FLOAT(bVar3) / TO_FLOAT(bVar2)));
		fVar12[Param0] = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
		SET_WEATHER_COMPLEX(&uVar0, fVar12[0], fVar12[1], fVar12[2], fVar12[3], fVar12[4], fVar12[5], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_WEATHER(bParam1, MAKE_TIME_OF_DAY(false, (bVar2 - bVar3), 0));
	}
	Global_26182.f_8 = bParam1;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam1 != 3 || bParam1 != 4)
		{
			if (RAND_INT_RANGE(false, 10000) <= 7500)
			{
				SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
				SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			}
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
		}
		else if (bParam1 != 3 || bParam1 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam1 != 3 || bParam1 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	PRINTSTRING("Weather Init");
	PRINTNL();
	return;
}

struct<16> Function_354(var uParam0) //Position: 0x1E774 / 124788
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Day ", 16);
	straddi(&cVar0, GET_DAY(&uParam0), 16);
	stradd(&cVar0, ": ", 16);
	straddi(&cVar0, GET_HOUR(&uParam0), 16);
	stradd(&cVar0, ":", 16);
	straddi(&cVar0, GET_MINUTE(&uParam0), 16);
	stradd(&cVar0, ":", 16);
	straddi(&cVar0, GET_SECOND(&uParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_355() //Position: 0x1E7CC / 124876
{
	return;
}

void Function_356() //Position: 0x1E7D2 / 124882
{
	Function_360(Function_447(1), 95);
	Function_360(Function_447(24), 95);
	Function_360(Function_447(12), 95);
	Function_360(Function_447(13), 93);
	Function_360(Function_447(14), 95);
	Function_360(Function_447(8), 93);
	Function_360(Function_447(9), 98);
	Function_360(Function_447(23), 90);
	Function_360(Function_447(21), 93);
	Function_360(Function_447(10), 90);
	Function_360(Function_447(11), 85);
	Function_360(Function_447(16), 95);
	Function_360(Function_447(17), 90);
	Function_360(Function_447(15), 90);
	Function_360(Function_447(18), 95);
	Function_360(Function_447(19), 95);
	Function_360(Function_447(20), 95);
	Function_360(Function_447(2), 95);
	Function_360(Function_447(4), 93);
	Function_360(Function_447(3), 93);
	Function_360(Function_447(22), 88);
	Function_360(Function_447(6), 95);
	Function_360(Function_447(5), 95);
	Function_360(Function_447(7), 88);
	Function_360(Function_447(25), 93);
	Function_360(Function_447(30), 90);
	Function_360(Function_447(33), 80);
	Function_360(Function_447(32), 80);
	Function_360(Function_447(31), 90);
	Function_360(Function_447(34), 93);
	Function_360(Function_447(35), 90);
	Function_360(Function_447(27), 93);
	Function_360(Function_447(26), 93);
	Function_360(Function_447(28), 95);
	Function_360(Function_447(29), 90);
	Function_360(Function_447(36), 93);
	Function_360(Function_447(39), 85);
	Function_360(Function_447(37), 90);
	Function_360(Function_447(38), 93);
	Function_360(Function_447(41), 80);
	Function_360(Function_447(40), 80);
	Function_360(Function_447(45), 95);
	Function_360(Function_447(46), 95);
	Function_360(Function_447(43), 90);
	Function_360(Function_447(47), 90);
	Function_360(Function_447(48), 90);
	Function_360(Function_447(42), 90);
	Function_360(Function_447(44), 95);
	Function_360(Function_447(49), 93);
	Function_360(Function_447(55), 95);
	Function_360(Function_447(56), 95);
	Function_360(Function_447(52), 95);
	Function_360(Function_447(53), 90);
	Function_360(Function_447(54), 93);
	Function_360(Function_447(50), 90);
	Function_360(Function_447(51), 90);
	Function_360(Function_447(57), 98);
	Function_358(0, 95);
	Function_358(1, 70);
	Function_358(2, 70);
	Function_358(3, 80);
	Function_358(4, 70);
	Function_358(5, 70);
	Function_358(6, 90);
	Function_358(7, 95);
	Function_358(8, 85);
	Function_358(9, 85);
	Function_358(10, 85);
	Function_358(11, 90);
	Function_358(12, 70);
	Function_358(13, 75);
	Function_358(39, 90);
	Function_358(14, 85);
	Function_358(15, 50);
	Function_358(16, 80);
	Function_358(17, 90);
	Function_358(18, 50);
	Function_358(19, 70);
	Function_358(20, 80);
	Function_358(21, 90);
	Function_358(22, 100);
	Function_358(23, 95);
	Function_358(24, 90);
	Function_358(27, 50);
	Function_358(25, 50);
	Function_358(26, 100);
	Function_358(28, 95);
	Function_358(29, 90);
	Function_358(30, 80);
	Function_358(31, 85);
	Function_358(32, 80);
	Function_358(33, 95);
	Function_358(34, 80);
	Function_358(35, 50);
	Function_358(36, 95);
	Function_358(37, 95);
	Function_358(38, 50);
	Function_358(40, 95);
	Function_358(41, 90);
	Function_358(42, 90);
	Function_358(43, 50);
	Function_358(44, 95);
	Function_357(0, 50);
	Function_357(1, 50);
	Function_357(2, 50);
	Function_357(3, 50);
	Function_357(4, 70);
	Function_357(5, 70);
	Function_357(6, 70);
	Function_357(7, 70);
	Function_357(8, 70);
	Function_357(9, 70);
	Function_357(10, 90);
	Function_357(11, 90);
	Function_357(12, 90);
	Function_357(13, 90);
	Function_357(14, 90);
	Function_357(15, 50);
	Function_357(16, 50);
	Function_357(17, 50);
	Function_357(18, 50);
	Function_357(19, 50);
	Function_357(20, 50);
	Function_357(21, 90);
	Function_357(22, 90);
	Function_357(23, 50);
	Function_357(24, 50);
	Function_357(25, 50);
	Function_357(26, 50);
	Function_357(27, 50);
	Function_357(28, 90);
	Function_357(29, 90);
	Function_357(30, 90);
	Function_357(31, 90);
	Function_357(32, 80);
	Function_357(33, 80);
	Function_357(34, 80);
	Function_357(35, 85);
	Function_357(36, 85);
	Function_357(37, 85);
	Function_357(38, 90);
	Function_357(39, 90);
	Function_357(40, 90);
	Function_357(41, 90);
	Function_357(42, 90);
	Function_357(43, 90);
	Function_357(44, 90);
	Function_357(45, 90);
	Function_357(46, 90);
	Function_357(47, 90);
	Function_357(48, 90);
	Function_357(49, 85);
	Function_357(50, 85);
	Function_357(51, 85);
	Function_357(52, 85);
	Function_357(53, 85);
	Function_357(54, 75);
	Function_357(55, 75);
	Function_357(56, 75);
	Function_357(57, 90);
	Function_357(58, 90);
	Function_357(59, 90);
	Function_357(60, 90);
	Function_357(61, 90);
	Function_357(62, 90);
	Function_357(63, 90);
	Function_357(64, 95);
	Function_357(65, 95);
	Function_357(66, 95);
	Function_357(67, 95);
	Function_357(68, 90);
	Function_357(69, 90);
	Function_357(70, 90);
	Function_357(71, 90);
	Function_357(72, 95);
	Function_357(73, 95);
	Function_357(74, 95);
	Function_357(75, 95);
	Function_357(76, 95);
	Function_360(Function_538(0, Global_46838[1], 3), 90);
	Function_360(Function_538(0, Global_46796[3], 3), 80);
	Function_360(Function_538(0, Global_46850[1], 3), 70);
	Function_360(Function_538(0, Global_46816[2], 3), 90);
	Function_360(Function_538(0, Global_46796[2], 3), 90);
	Function_360(Function_538(0, Global_46850[2], 3), 90);
	Function_360(Function_538(0, Global_46796[0], 3), 90);
	Function_360(Function_538(0, Global_46760[2], 3), 90);
	return;
}

void Function_357(int iParam0, int iParam1) //Position: 0x1ED67 / 126311
{
	if (iParam0 >= 4294967295 || iParam0 <= 77)
	{
		return;
	}
	Global_99725[iParam043].f_268 = iParam1;
	return;
}

void Function_358(int iParam0, int iParam1) //Position: 0x1ED88 / 126344
{
	if (!Function_359(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_412 = iParam1;
	return;
}

bool Function_359(int iParam0) //Position: 0x1EDA4 / 126372
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

void Function_360(bool bParam0, int iParam1) //Position: 0x1EDBA / 126394
{
	if (!Function_227(bParam0))
	{
		return;
	}
	Global_25536[bParam0] = iParam1;
	return;
}

void Function_361() //Position: 0x1EDD3 / 126419
{
	var uVar0;
	
	if (!IS_ITERATOR_VALID(&Global_39554))
	{
		uVar0 = FIND_NAMED_LAYOUT("regions_layout");
		if (!IS_LAYOUTREF_VALID(&uVar0))
		{
			LOG_ERROR("Attempting to create a new ambient iterator, but regions_layout is not valid. Bad things, man, bad things");
			return;
		}
		Global_39554 = CREATE_OBJECT_ITERATOR(&uVar0);
	}
	Function_362(&Global_39554);
	ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
	return;
}

int Function_362(int iParam0) //Position: 0x1EE90 / 126608
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_10());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_10());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_363() //Position: 0x1EEC6 / 126662
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_364() //Position: 0x1EEDB / 126683
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_365() //Position: 0x1EEED / 126701
{
	Function_368();
	Function_367();
	Function_366();
	return;
}

void Function_366() //Position: 0x1EEFC / 126716
{
	if (Global_42890 == 3)
	{
		Global_42890.f_4 = 3;
	}
	*(&Global_42890 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42890 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_367() //Position: 0x1EF27 / 126759
{
	if (Global_42862 == 1)
	{
		Global_42862.f_4 = 3;
	}
	*(&Global_42862 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42862 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(0);
	return;
}

void Function_368() //Position: 0x1EF52 / 126802
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_369(int iParam0) //Position: 0x1EF7D / 126845
{
	Function_371(0);
	Function_370();
	Global_39906.f_12 = 4294967295;
	Global_39906.f_16 = 0;
	Global_39906.f_20 = 4294967295;
	Global_39906.f_24 = 4294967295;
	Global_39906.f_32 = 0;
	Global_39906.f_36 = 0;
	Global_39906.f_40 = 0;
	if (&iParam0 == 1)
	{
		Function_550(&Global_39906 + 8, 4096);
	}
	return;
}

void Function_370() //Position: 0x1EFC6 / 126918
{
	Function_550(&Global_39906 + 8, 2);
	Function_550(&Global_39906 + 8, 4);
	Function_550(&Global_39906 + 8, 8);
	Function_550(&Global_39906 + 8, 16);
	Function_550(&Global_39906 + 8, 32);
	Function_550(&Global_39906 + 8, 64);
	Function_550(&Global_39906 + 8, 128);
	Function_550(&Global_39906 + 8, 256);
	Function_550(&Global_39906 + 8, 512);
	Function_550(&Global_39906 + 8, 1024);
	Function_550(&Global_39906 + 8, 2048);
	Function_550(&Global_39906 + 8, 131072);
	Function_550(&Global_39906 + 8, 262144);
	Function_550(&Global_39906 + 8, 524288);
	return;
}

void Function_371(int iParam0) //Position: 0x1F060 / 127072
{
	if (iParam0 == 1)
	{
		Function_551(&Global_39906 + 8, 1);
	}
	else
	{
		Function_550(&Global_39906 + 8, 1);
	}
	return;
}

void Function_372(var uParam0, int iParam1) //Position: 0x1F081 / 127105
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_373(int iParam0) //Position: 0x1F0A9 / 127145
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_374(int iParam0, bool bParam1) //Position: 0x1F0C5 / 127173
{
	int iVar0;
	
	iVar0 = Function_447(iParam0);
	if (!Function_225(iVar0))
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

bool Function_375(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1F103 / 127235
{
	int iVar0;
	
	iVar0 = Function_538(bParam0, bParam1, bParam2);
	return Function_227(iVar0);
}

void Function_376(int iParam0) //Position: 0x1F119 / 127257
{
	Function_372(&Global_43580, iParam0);
	return;
}

void Function_377() //Position: 0x1F127 / 127271
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_378() //Position: 0x1F14D / 127309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_379(bool bParam0) //Position: 0x1F173 / 127347
{
	if (bParam0)
	{
		Function_554(0x10000000);
	}
	else
	{
		Function_380(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_380(int iParam0) //Position: 0x1F198 / 127384
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_381(bool bParam0) //Position: 0x1F1B5 / 127413
{
	if (Function_509(bParam0, 1) && !Function_509(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_382(int iParam0) //Position: 0x1F1E2 / 127458
{
	Function_383(&Global_43580, iParam0);
	return;
}

void Function_383(var uParam0, int iParam1) //Position: 0x1F1F0 / 127472
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_384(char* cParam0) //Position: 0x1F20F / 127503
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_385() //Position: 0x1F27B / 127611
{
	Global_47151[0] = 0;
	Global_47151[1] = 0;
	Global_47151[2] = 0;
	Global_47151[3] = 0;
	Global_47151[5] = 0;
	Global_47151[6] = 0;
	Global_47151[7] = 0;
	Global_47151[8] = 0;
	Global_47151[9] = 0;
	Global_47151[10] = 0;
	Global_47151[11] = 0;
	Global_47151[32] = 0;
	Global_47151[19] = 0;
	Global_47151[20] = 0;
	Global_47151[50] = 0;
	Global_47151[12] = 0;
	Global_47151[23] = 0;
	Global_47151[52] = 0;
	Global_47151[43] = 0;
	Global_47151[24] = 0;
	Global_47151[46] = 0;
	Global_47151[47] = 0;
	Global_47151[14] = 0;
	Global_6620 = 1;
	Global_6622 = 0;
	Global_6623 = 0;
	Global_6629 = 0;
	return;
}

void Function_386() //Position: 0x1F342 / 127810
{
	return;
}

void Function_387() //Position: 0x1F348 / 127816
{
	return;
}

void Function_388() //Position: 0x1F34E / 127822
{
	return;
}

void Function_389() //Position: 0x1F354 / 127828
{
	int iVar0;
	int iVar1;
	
	iVar1 = (Global_6602 - 1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ADD_PLAYLIST_TO_DB(Global_0[iVar0165].f_128, &(Global_0[iVar0165])))
		{
			if (Global_0[iVar0165].f_128 == 38)
			{
				if (iVar0 >= 0)
				{
					Global_0[0165] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0165] };
					Function_390(&(Global_0[iVar0165]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
				}
			}
			else
			{
				Function_390(&(Global_0[iVar0165]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
				Global_6602 = (Global_6602 - 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Global_6602 - 1))
	{
		iVar0++;
	}
	return;
}

void Function_390(struct<1309> Param0) //Position: 0x1F429 / 128041
{
	strcpy(&Param0, &cParam1, 32);
	strcpy(&Param0 + 64, &cParam2, 32);
	Param0.f_132 = iParam5;
	Param0.f_128 = iParam3;
	Param0.f_1308 = iParam6;
	Function_393(&Param0, 1014);
	if (IS_STRING_VALID(&iParam8))
	{
		if (!_IS_TYPE_ID_VALID_BY_STRING(&iParam8, 7))
		{
		}
		*(&Param0 + 1312) = GET_ASSET_ID(&iParam8, 7);
	}
	else
	{
		(&Param0 + 1312) = "";
	}
	Param0.f_1300 = (iParam7 || Function_392(iParam4));
	Function_391(&Param0);
}

void Function_391(struct<137> Param0) //Position: 0x1F4A5 / 128165
{
	int iVar0;
	
	Param0.f_136 = 0;
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		strcpy(&Param0 + 140[iVar04], "NONE", 16);
		iVar0++;
	}
	return;
}

var Function_392(bool bParam0) //Position: 0x1F4D6 / 128214
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_393(struct<1305> Param0) //Position: 0x1F4E3 / 128227
{
	Param0.f_1304 = uParam1;
	return;
}

void Function_394() //Position: 0x1F4F1 / 128241
{
	int iVar0;
	int iVar165;
	
	*(&iVar0 + 140) = 36;
	*(&iVar165 + 140) = 36;
	if (!Function_410(Function_411()))
	{
		Function_390(&iVar0, "net_name_hcfm", "", Function_409(), 0, 16, 411, 0, 0);
		Function_408(&iVar0, 1);
	}
	if (!Function_410(Function_407()))
	{
		Function_390(&iVar0, "net_name_friendlyfm", "", Function_406(), 0, 16, 411, 0, 0);
		Function_408(&iVar0, 1);
	}
	NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
	Function_390(&iVar0, "MULTI_ROTATION_QUICK_MATCH", "", 33, 3, 16, 411, 0, 0);
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_CASUAL", "", 34, 3, 16, 449, 23562, 0);
	Function_405(&iVar0, "TDM_ARM");
	Function_405(&iVar0, "CFA_UPR");
	Function_405(&iVar0, "TDM_LSH");
	Function_405(&iVar0, "DM_CHU");
	Function_405(&iVar0, "CTF_DZC");
	Function_405(&iVar0, "DM_ARM");
	Function_405(&iVar0, "CFS_TUM");
	Function_405(&iVar0, "TDM_CHU");
	Function_405(&iVar0, "CFA_LSH");
	Function_405(&iVar0, "TDM_TUM");
	Function_405(&iVar0, "DM_HEN");
	Function_405(&iVar0, "CTF_ARM");
	Function_405(&iVar0, "DM_LSH");
	Function_405(&iVar0, "CFS_TES");
	Function_405(&iVar0, "TDM_HEN");
	Function_405(&iVar0, "CFA_CHU");
	Function_405(&iVar0, "TDM_LSH");
	Function_405(&iVar0, "DM_CHU");
	Function_405(&iVar0, "CTF_TES");
	Function_405(&iVar0, "DM_HEN");
	Function_405(&iVar0, "CFS_CHU");
	Function_405(&iVar0, "TDM_ARM");
	Function_405(&iVar0, "CFA_HEN");
	Function_405(&iVar0, "TDM_TUM");
	Function_405(&iVar0, "DM_LSH");
	Function_405(&iVar0, "CTF_CHU");
	Function_405(&iVar0, "DM_TUM");
	Function_405(&iVar0, "CFS_ARM");
	Function_405(&iVar0, "TDM_CHU");
	Function_405(&iVar0, "CFA_ARM");
	Function_405(&iVar0, "TDM_HEN");
	Function_405(&iVar0, "DM_ARM");
	Function_405(&iVar0, "CTF_LSH");
	Function_405(&iVar0, "DM_TUM");
	Function_405(&iVar0, "CFS_W2");
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_TEAM", "TEAM_Barker", 35, 2, 16, 445, 32770, "$/tune/refGroups/refGroups/mp_teamgames");
	Function_405(&iVar0, "TDM_ARM");
	Function_405(&iVar0, "CTF_CHU");
	Function_405(&iVar0, "TDM_LSH");
	Function_405(&iVar0, "CFS_TUM");
	Function_405(&iVar0, "TDM_CHU");
	Function_405(&iVar0, "CTF_ARM");
	Function_405(&iVar0, "TDM_TUM");
	Function_405(&iVar0, "CFS_TES");
	Function_405(&iVar0, "TDM_HEN");
	Function_405(&iVar0, "CTF_DZC");
	Function_405(&iVar0, "TDM_ARM");
	Function_405(&iVar0, "CFS_CHU");
	Function_405(&iVar0, "TDM_LSH");
	Function_405(&iVar0, "CTF_TES");
	Function_405(&iVar0, "TDM_CHU");
	Function_405(&iVar0, "CFS_ARM");
	Function_405(&iVar0, "TDM_TUM");
	Function_405(&iVar0, "CTF_LSH");
	Function_405(&iVar0, "TDM_HEN");
	Function_405(&iVar0, "CFS_W2");
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_FFA", "FFA_Barker", 36, 3, 16, 446, 32770, "$/tune/refGroups/refGroups/mp_ffa");
	Function_405(&iVar0, "DM_ARM");
	Function_405(&iVar0, "CFA_LSH");
	Function_405(&iVar0, "DM_HEN");
	Function_405(&iVar0, "DM_CHU");
	Function_405(&iVar0, "CFA_UPR");
	Function_405(&iVar0, "DM_TUM");
	Function_405(&iVar0, "DM_HEN");
	Function_405(&iVar0, "CFA_ARM");
	Function_405(&iVar0, "DM_CHU");
	Function_405(&iVar0, "DM_LSH");
	Function_405(&iVar0, "CFA_CHU");
	Function_405(&iVar0, "DM_ARM");
	Function_405(&iVar0, "DM_TUM");
	Function_405(&iVar0, "CFA_HEN");
	Function_405(&iVar0, "DM_LSH");
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_HARD_TEAM", "", 39, 2, 16, 445, 9750, 0);
	if (Function_404(35, &iVar165))
	{
		Function_403(&iVar165, &iVar0);
	}
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_HARD_FFA", "", 40, 3, 16, 446, 9750, 0);
	if (Function_404(36, &iVar165))
	{
		Function_403(&iVar165, &iVar0);
	}
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_VET_TEAM", "", 41, 2, 16, 445, 75030, 0);
	if (Function_404(35, &iVar165))
	{
		Function_403(&iVar165, &iVar0);
	}
	Function_408(&iVar0, 1);
	Function_390(&iVar0, "MULTI_ROTATION_VET_FFA", "", 42, 3, 16, 446, 75030, 0);
	if (Function_404(36, &iVar165))
	{
		Function_403(&iVar165, &iVar0);
	}
	Function_408(&iVar0, 1);
	Function_402(StackVal, 36, Vector(-2129,431f, 16,39f, 2605,05f), 0, 4294967295, 4294967295);
	Function_402(StackVal, 36, Vector(-2621,622f, 30,118f, 4261,624f), 232,5f, 4294967295, 4294967295);
	Function_402(StackVal, 36, Vector(-1707,78f, 8,034f, 4229,91f), 0, 4294967295, 4294967295);
	Function_402(StackVal, 36, Vector(-865,57f, 91,402f, 2391,45f), 45.0f, 4294967295, 4294967295);
	Function_402(StackVal, 36, Vector(-3300,284f, 17,5f, 2680,583f), 20.0f, Global_46796[0], 4294967295);
	Function_401(StackVal, 36, Vector(-277,801f, 84,34f, 2119,444f), "CFA_UPR", 187,5f, 4294967295);
	Function_402(StackVal, 35, Vector(-2188,603f, 16,364f, 2593,315f), 75.0f, 4294967295, 4294967295);
	Function_402(StackVal, 35, Vector(-2703,85f, 32,038f, 4239,5f), 37,5f, 4294967295, 4294967295);
	Function_401(StackVal, 35, Vector(-471,798f, 20,379f, 3887,847f), "CTF_DZC", 0, 4294967295);
	Function_402(StackVal, 35, Vector(-1737,93f, 7,304f, 4202,1f), 90.0f, 4294967295, 4294967295);
	Function_402(StackVal, 35, Vector(-889,824f, 90,353f, 2429,62f), 195.0f, 4294967295, 4294967295);
	Function_401(StackVal, 35, Vector(-3389,631f, 55,04f, 4743,534f), "CFS_TES", 0, 4294967295);
	Function_402(StackVal, 35, Vector(-3264,534f, 15,443f, 2745,565f), 142,5f, Global_46796[0], 4294967295);
	Function_401(StackVal, 35, Vector(-1941,536f, 26,911f, 2248,267f), "CFS_W2", 270.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-932,201f, 90,669f, 2416,194f), 0, 4294967295);
	Function_400(StackVal, 72, Vector(124,655f, 73,287f, 2298,732f), 270.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-2173,881f, 16,449f, 2632,591f), 270.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-191,351f, 83,425f, 2070,354f), 262,5f, 4294967295);
	Function_400(StackVal, 72, Vector(-74,442f, 116,861f, 1413,149f), 240.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-416,726f, 151,086f, 1610,745f), 292,5f, 4294967295);
	Function_400(StackVal, 72, Vector(681,17f, 78,31f, 1344,55f), 90.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-3259,457f, 15,972f, 2705,493f), 0, 4294967295);
	Function_400(StackVal, 72, Vector(-3684,166f, 8,982f, 3489,312f), 0, 4294967295);
	Function_400(StackVal, 72, Vector(-3639,929f, 42,273f, 2138,375f), 150.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-3094,139f, 45,177f, 3765,219f), 270.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-1695,843f, 8,032f, 4263,501f), 0, 4294967295);
	Function_400(StackVal, 72, Vector(-2759,2f, 32,125f, 4276,01f), 232,5f, 4294967295);
	Function_400(StackVal, 72, Vector(-4279,463f, 18,303f, 4470,403f), 60.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-790,971f, 13,006f, 3734,266f), 45.0f, 4294967295);
	Function_400(StackVal, 72, Vector(-692,579f, 63,247f, 3323,76f), 307,5f, 4294967295);
	Function_400(StackVal, 72, Vector(-446,919f, 21,247f, 3926,11f), 262,5f, 4294967295);
	Function_400(StackVal, 73, Vector(-843,511f, 92,359f, 2372,548f), 293.0f, 4294967295);
	Function_400(StackVal, 73, Vector(-2185,64f, 16,37f, 2618,4f), 97,5f, 4294967295);
	Function_400(StackVal, 73, Vector(702,371f, 78,306f, 1344,654f), 180.0f, 4294967295);
	Function_400(StackVal, 73, Vector(-2691,558f, 31,122f, 4272,169f), 172,5f, 4294967295);
	Function_400(StackVal, 73, Vector(-1683,17f, 8,031f, 4232,5f), 270.0f, 4294967295);
	Function_400(StackVal, 73, Vector(-4261,85f, 18,281f, 4453,5f), 37,5f, 4294967295);
	if (Function_522(64))
	{
		Function_402(StackVal, 54, Vector(-789,002f, 12,715f, 3698,875f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 54, Vector(168,1746f, 73,29424f, 2222,892f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 54, Vector(-4289,077f, 26,292f, 4380,94f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 53, Vector(-2157,657f, 16,427f, 2595,523f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 53, Vector(-138,8952f, 118,769f, 1343,499f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 53, Vector(-795,0887f, 12,715f, 3699,661f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 53, Vector(-800,8856f, 92,304f, 2375,189f), 0, 4294967295, 4294967295);
		Function_402(StackVal, 53, Vector(163,9887f, 73,304f, 2231,428f), 0, 4294967295, 4294967295);
	}
	else
	{
		Function_399("MULTI_ROTATION_POKER", "POKER_Barker", 53, 433, 0);
		Function_399("MULTI_ROTATION_LIARSDICE", "LIARSDICE_Barker", 54, 426, 0);
		Function_398(StackVal, 54, "nbuy_LandC", Vector(-789,002f, 12,715f, 3698,875f), 0, 4294967295);
		Function_398(StackVal, 54, "nbuy_LandC", Vector(168,1746f, 73,29424f, 2222,892f), 0, 4294967295);
		Function_398(StackVal, 54, "nbuy_LandC", Vector(-4289,077f, 26,292f, 4380,94f), 0, 4294967295);
		Function_398(StackVal, 53, "nbuy_LandC", Vector(-2157,657f, 16,427f, 2595,523f), 0, 4294967295);
		Function_398(StackVal, 53, "nbuy_LandC", Vector(-138,8952f, 118,769f, 1343,499f), 0, 4294967295);
		Function_398(StackVal, 53, "nbuy_LandC", Vector(-795,0887f, 12,715f, 3699,661f), 0, 4294967295);
		Function_398(StackVal, 53, "nbuy_LandC", Vector(-800,8856f, 92,304f, 2375,189f), 0, 4294967295);
		Function_398(StackVal, 53, "nbuy_LandC", Vector(163,9887f, 73,304f, 2231,428f), 0, 4294967295);
	}
	Function_395(StackVal, 61, Vector(-2162,95f, 19,95f, 2600,85f), "FRD_ARM", 225.0f, 0 + 50);
	Function_395(StackVal, 61, Vector(-2665,14f, 31,387f, 4250,96f), "FRD_CHU", 262,1f, 1 + 50);
	Function_395(StackVal, 61, Vector(-823,25f, 96,96f, 2431,58f), "FRD_HEN", 27,5f, 2 + 50);
	Function_395(StackVal, 61, Vector(139,59f, 75,43f, 2343,11f), "FRD_THI", 0.0f, 3 + 50);
	Function_395(StackVal, 61, Vector(767,56f, 78,306f, 1318,513f), "FRD_BLK", -125.0f, 4 + 50);
	Function_395(StackVal, 61, Vector(-4298,98f, 22,044f, 4410,49f), "FRD_ESC", 127,1f, 5 + 50);
	Function_395(StackVal, 61, Vector(-1700,19f, 8,08f, 4220,47f), "FRD_LSH", 180.0f, 6 + 50);
	return;
}

void Function_395(int iParam0, struct<2> Param1, char* cParam3) //Position: 0x2036B / 131947
{
	int iVar0;
	
	iVar0 = Function_396(StackVal, iParam0, Param1, &fParam4, &bParam5);
	if (iVar0 >= 4294967295)
	{
		(&Global_123163 + 232[iVar07])->f_16 = 146;
		strcpy(&Global_123163 + 232[iVar07] + 20, &cParam3, 16);
	}
}

var Function_396(var uParam0, struct<2> Param1, var uParam3, bool bParam4) //Position: 0x203A9 / 132009
{
	if (&bParam4 == 4294967295)
	{
		bParam4 = (&Global_123163 + 232)->f_3368;
		if (Function_397(&bParam4))
		{
			return 4294967295;
		}
		(&Global_123163 + 232)->f_3368++;
	}
	else if (Function_397(&bParam4))
	{
		return 4294967295;
	}
	*(&Global_123163 + 232[&bParam47]) = Param1;
	(&Global_123163 + 232[&bParam47])->f_12 = uParam3;
	(&Global_123163 + 232[&bParam47])->f_52 = uParam0;
	return &bParam4;
}

bool Function_397(bool bParam0) //Position: 0x20426 / 132134
{
	return (&Global_123163 + 232[bParam07])->f_52 == 0;
}

void Function_398(int iParam0, char* cParam1, bool bParam5) //Position: 0x2043A / 132154
{
	int iVar0;
	
	iVar0 = Function_396(StackVal, iParam0, Param2, &iParam4, &bParam5);
	if (iVar0 >= 4294967295)
	{
		(&Global_123163 + 232[iVar07])->f_16 = 4294967293;
		strcpy(&Global_123163 + 232[iVar07] + 20, &cParam1, 16);
	}
}

void Function_399(char* cParam0) //Position: 0x20479 / 132217
{
	struct<1309> Var0;
	
	*(&Var0 + 140) = 36;
	strcpy(&Var0, &cParam0, 32);
	strcpy(&Var0 + 64, &cParam1, 32);
	Var0.f_128 = bParam2;
	Var0.f_1308 = iParam3;
	if (IS_STRING_VALID(&iParam4))
	{
		if (!_IS_TYPE_ID_VALID_BY_STRING(&iParam4, 7))
		{
		}
		*(&Var0 + 1312) = GET_ASSET_ID(&iParam4, 7);
	}
	else
	{
		(&Var0 + 1312) = "";
	}
	Function_391(&Var0);
	Function_408(&Var0, 0);
}

void Function_400(float fParam0, struct<2> Param1, float fParam3, bool bParam4) //Position: 0x204E0 / 132320
{
	int iVar0;
	
	iVar0 = Function_396(StackVal, fParam0, Param1, &fParam3, &bParam4);
	if (iVar0 >= 4294967295)
	{
		(&Global_123163 + 232[iVar07])->f_16 = 146;
		strcpy(&Global_123163 + 232[iVar07] + 20, "", 16);
	}
}

void Function_401(int iParam0, struct<2> Param1, char* cParam3) //Position: 0x2051E / 132382
{
	int iVar0;
	
	iVar0 = Function_396(StackVal, iParam0, Param1, &iParam4, &bParam5);
	if (iVar0 >= 4294967295)
	{
		(&Global_123163 + 232[iVar07])->f_16 = 4294967294;
		strcpy(&Global_123163 + 232[iVar07] + 20, &cParam3, 16);
	}
}

void Function_402(float fParam0, struct<2> Param1, float fParam3, int iParam4, int iParam5) //Position: 0x2055D / 132445
{
	int iVar0;
	
	iVar0 = Function_396(StackVal, fParam0, Param1, &fParam3, &iParam5);
	if (iVar0 >= 4294967295)
	{
		(&Global_123163 + 232[iVar07])->f_16 = &iParam4;
		strcpy(&Global_123163 + 232[iVar07] + 20, "", 16);
	}
}

void Function_403(struct<137> Param0) //Position: 0x2059C / 132508
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_136 - 1))
	{
		Function_405(&iParam1, &Param0 + 140[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_404(int iParam0, int iParam1) //Position: 0x205CA / 132554
{
	if (GET_PLAYLIST_FROM_DB(iParam0, &iParam1))
	{
		return 1;
	}
	return 0;
}

int Function_405(struct<137> Param0) //Position: 0x205DE / 132574
{
	var uVar0;
	char* cVar26[64];
	char* cVar42[64];
	
	if (!UNK_0xFAD5A270(&cParam1, &uVar0))
	{
		strcpy(&cVar26, "Can't add nonexistent "", 64);
		stradd(&cVar26, &cParam1, 64);
		stradd(&cVar26, "" to playlist", 64);
	}
	if (Param0.f_136 <= 36)
	{
		strcpy(&Param0 + 140[Param0.f_1364], &cParam1, 16);
		Param0.f_136++;
		return 1;
	}
	strcpy(&cVar42, """, 64);
	stradd(&cVar42, &cParam1, 64);
	stradd(&cVar42, "" puts playlist "", 64);
	stradd(&cVar42, &Param0, 64);
	stradd(&cVar42, "" over the limit", 64);
	return 0;
}

int Function_406() //Position: 0x20698 / 132760
{
	return 31;
}

int Function_407() //Position: 0x206A0 / 132768
{
	return 31;
}

int Function_408(struct<1301> Param0) //Position: 0x206A8 / 132776
{
	if (ADD_PLAYLIST_TO_DB(Param0.f_128, &Param0))
	{
		if (&bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(&Param0, Param0.f_128, Param0.f_132);
			if (Function_509(Param0.f_1300, 4))
			{
				NET_SET_PLAYLIST_LOCKED(&Param0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int Function_409() //Position: 0x206EC / 132844
{
	return 32;
}

bool Function_410(int iParam0) //Position: 0x206F4 / 132852
{
	struct<137> Var0;
	
	*(&Var0 + 140) = 36;
	if (Function_404(iParam0, &Var0))
	{
		if (Var0.f_136 >= 0)
		{
			return 1;
		}
		if ((iParam0 != 33 || iParam0 != 32) || iParam0 != 31)
		{
			return 1;
		}
	}
	return 0;
}

int Function_411() //Position: 0x2072F / 132911
{
	return 32;
}

void Function_412(int iParam0, int iParam1) //Position: 0x20737 / 132919
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

void Function_413() //Position: 0x207A1 / 133025
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = 0.0f;
	iVar1 = Function_297();
	iVar2 = Function_296();
	iVar3 = Function_295();
	bVar0 = (bVar0 + (24.0f * Function_294(1.0f, (IntToFloat(Function_521(12)) / 24.0f))));
	bVar0 = (bVar0 + (17.0f * Function_294(1.0f, (IntToFloat(Function_521(13)) / 17.0f))));
	bVar0 = (bVar0 + (7.0f * Function_294(1.0f, (IntToFloat(Function_521(14)) / 7.0f))));
	bVar0 = (bVar0 + (9.0f * Function_294(1.0f, (IntToFloat(Function_521(15)) / 9.0f))));
	bVar0 = (bVar0 + (4,5f * Function_294(1.0f, (IntToFloat(iVar1) / 9.0f))));
	bVar0 = (bVar0 + (3,5f * Function_294(1.0f, (IntToFloat(iVar3) / 7.0f))));
	bVar0 = (bVar0 + (2.0f * Function_294(1.0f, (IntToFloat(((Function_521(363) + Function_521(364)) + Function_521(365))) / 20.0f))));
	bVar0 = (bVar0 + (2,5f * Function_294(1.0f, (IntToFloat(Function_521(469)) / 5.0f))));
	bVar0 = (bVar0 + (2,5f * Function_294(1.0f, (IntToFloat(Function_521(400)) / 5.0f))));
	bVar0 = (bVar0 + (3.0f * Function_294(1.0f, (IntToFloat(Function_521(410)) / 6.0f))));
	bVar0 = (bVar0 + (3.0f * Function_294(1.0f, (Function_19(474) / Function_21(474)))));
	bVar0 = (bVar0 + (2.0f * Function_294(1.0f, (Function_19(475) / Function_21(475)))));
	bVar0 = (bVar0 + (1.0f * Function_294(1.0f, (Function_19(476) / Function_21(476)))));
	bVar0 = (bVar0 + (9.0f * Function_294(1.0f, (IntToFloat(iVar2) / 18.0f))));
	bVar0 = (bVar0 + (2.0f * Function_294(1.0f, (Function_19(468) / 13.0f))));
	if (Function_293(3) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(3) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	if (Function_293(0) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(0) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	if (Function_293(2) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(2) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	if (Function_293(1) > 10)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	else if (Function_293(1) > 5)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	Function_291();
	Function_289(5, bVar0, 0);
	Function_290(iVar1, iVar2, iVar3);
	if (bVar0 <= 100.0f)
	{
		if (!Function_23(12))
		{
			Function_74(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (bVar0 <= 75.0f)
	{
		if (!Function_73(12))
		{
			Function_72(12, 0, 1, 1, 0);
		}
	}
	return;
}

void Function_414(bool bParam0, int iParam1) //Position: 0x20A08 / 133640
{
	if (!Function_227(bParam0))
	{
		return;
	}
	Global_21684[bParam07].f_12 = iParam1;
	return;
}

int Function_415(bool bParam0) //Position: 0x20A23 / 133667
{
	if (!Function_225(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

int Function_416(int iParam0) //Position: 0x20A3D / 133693
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46760[6];
			break;
		
		case 0x00000001:
			return Global_46760[7];
			break;
		
		case 0x00000002:
			return Global_46760[11];
			break;
		
		case 0x00000003:
			return Global_46760[13];
			break;
		
		case 0x00000004:
			return Global_46796[7];
			break;
		
		case 0x00000005:
			return Global_46838[3];
			break;
		
		case 0x00000006:
			return Global_46816[3];
			break;
		
		case 0x00000007:
			return Global_46816[6];
			break;
		
		case 0x00000008:
			return Global_46850[5];
			break;
		
		case 0x00000009:
			return Global_46866[4];
			break;
		
		case 0x0000000A:
			return Global_46866[3];
			break;
		
		case 0x0000000B:
			return Global_46866[7];
			break;
		
		case 0x0000000C:
			return Global_46866[11];
			break;
		
		case 0x0000000D:
			return Global_46866[9];
			break;
		
		case 0x0000000E:
			return Global_46866[8];
			break;
		
		case 0x0000000F:
			return Global_46866[10];
			break;
		
		case 0x00000010:
			return Global_46926[6];
			break;
		
		case 0x00000011:
			return Global_46926[3];
			break;
		
		case 0x00000012:
			return Global_46926[5];
			break;
		
		case 0x00000013:
			return Global_46926[4];
			break;
	}
	return Global_46760[6];
}

int Function_417(int iParam0) //Position: 0x20B96 / 134038
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_349(iParam0))
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

int Function_418(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x20BEE / 134126
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_9(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_419(iParam0);
	return 1;
}

void Function_419(int iParam0) //Position: 0x20E16 / 134678
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

void Function_420(var uParam0, int iParam1) //Position: 0x20EB4 / 134836
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_421(var uParam0, int iParam1) //Position: 0x20EC5 / 134853
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_422(int iParam0, bool bParam1) //Position: 0x20EE2 / 134882
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	if (((*&Global_21369 + 260)[iParam0] && bVar0) != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_423() //Position: 0x20F48 / 134984
{
	return HAS_STRING_TABLE_LOADED("jp");
}

void Function_424() //Position: 0x20F56 / 134998
{
	Function_420(&(Global_43791[Global_46914[1]]), 256);
	Function_420(&(Global_43791[Global_46760[4]]), 256);
	Function_420(&(Global_43791[Global_46816[2]]), 256);
	Function_448(&(Global_43791[Global_46816[2]]), 32768);
	Function_420(&(Global_43791[Global_46796[3]]), 256);
	Function_448(&(Global_43791[Global_46796[3]]), 32768);
	Function_420(&(Global_43791[Global_46850[2]]), 256);
	Function_448(&(Global_43791[Global_46850[2]]), 32768);
	Function_420(&(Global_43791[Global_46838[1]]), 256);
	Function_448(&(Global_43791[Global_46838[1]]), 32768);
	return;
}

void Function_425(var uParam0, int iParam1) //Position: 0x2100A / 135178
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_426(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x2101B / 135195
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_255(12);
	Function_259(2);
	Function_256((15 - Function_262(105)));
	if (Function_224(bParam0) == 1)
	{
		iVar2 = Function_302(bParam0);
		Function_445(&(Global_6667[iVar228]));
		Function_537(4194304);
		if (&bParam3)
		{
			Function_438(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_437(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_438(iVar2, &uVar0, 0);
		}
		bVar1 = Function_436();
		if (&bParam1)
		{
			Function_435(iVar2, bParam0, bVar1);
			Function_287();
		}
	}
	Function_428(bParam0, &bParam1, &iParam2, bVar1);
	if (Function_224(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_298(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_224(bParam0) == 1)
		{
			iVar2 = Function_302(bParam0);
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
	Function_427();
}

void Function_427() //Position: 0x2110F / 135439
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_374(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_428(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x21141 / 135489
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_227(bParam0))
	{
		Function_221();
		return;
	}
	bVar0 = Function_224(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_79())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_302(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_233(Global_10966) };
		}
		if (Function_79())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_432();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_79())
	{
		Function_431();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_430("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_300(bParam0);
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
						switch (Function_302(bParam0))
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
			Function_281(1);
			Function_280(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_429(bParam0, &Var14);
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

void Function_429(int iParam0, struct<41> Param1) //Position: 0x2139F / 136095
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_430(var uParam0, bool bParam1) //Position: 0x213DD / 136157
{
	struct<4> Var0;
	
	if (!Function_227(bParam1))
	{
		return;
	}
	switch (Function_224(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_303(Function_302(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_224(bParam1), Function_302(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_431() //Position: 0x21507 / 136455
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
	PLAYSTAT_INT("HC_MONEY", Function_521(0));
	PLAYSTAT_INT("HC_FAME", Function_521(3));
	PLAYSTAT_INT("HC_HONOR", Function_521(1));
	return;
}

void Function_432() //Position: 0x21669 / 136809
{
	int iVar0;
	int iVar1;
	
	if (!Function_306(Global_10966))
	{
		return;
	}
	iVar0 = Function_521(24);
	iVar1 = Function_447(Global_10966);
	if (!Function_306(iVar0) && Function_433(iVar1) < 0)
	{
		Function_520(24, Global_10966, 0);
		Function_267(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_433(Function_447(iVar0)))
	{
		Function_520(24, Global_10966, 0);
		Function_267(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_433(int iParam0) //Position: 0x216E9 / 136937
{
	if (!Function_227(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_434(char* cParam0) //Position: 0x21703 / 136963
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

void Function_435(int iParam0, int iParam1, bool bParam2) //Position: 0x21959 / 137561
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
	
	if (!Function_306(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_305(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_303(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_521(42) - Global_53524.f_168);
				bVar1 = (Function_521(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_303(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_21(49)) - Global_53524.f_176);
				bVar3 = (Function_521(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_303(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_521(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_303(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_303(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_304(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_273(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_233(iParam0) };
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

var Function_436() //Position: 0x21BF5 / 138229
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_437(int iParam0) //Position: 0x21C1A / 138266
{
	if (!Function_306(iParam0))
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
			Function_273(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_273(25, 1, 0);
			Function_310(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_310(50, 1, 1);
			Function_273(250, 1, 0);
			Function_264(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_273(75, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_273(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_310(50, 1, 1);
			Function_273(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_310(5, 1, 1);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_273(75, 1, 0);
			Function_264(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_310(5, 1, 1);
			Function_273(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_273(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_264(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_310(25, 1, 1);
			Function_273(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_310(10, 1, 1);
			Function_273(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_273(50, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_273(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_273(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_264(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_310(20, 1, 1);
			Function_273(75, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_310(25, 1, 1);
			Function_273(150, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_310(10, 1, 1);
			Function_273(150, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_273(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_264(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_264(100, 1, 0);
			Function_310(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_310(3, 1, 1);
			Function_273(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_264(125, 1, 0);
			Function_273(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_310(50, 1, 1);
			Function_273(100, 1, 0);
			Function_264(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_310(50, 1, 1);
			Function_273(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_310(75, 1, 1);
			Function_273(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_273(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_273(75, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_273(250, 1, 0);
			Function_264(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_273(75, 1, 0);
			Function_264(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_273(200, 1, 0);
			Function_264(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_273(75, 1, 0);
			Function_264(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_273(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_310(50, 1, 1);
			Function_273(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_310(100, 1, 1);
			Function_273(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_273(200, 1, 0);
			Function_264(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_273(300, 1, 0);
			Function_264(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_273(300, 1, 0);
			Function_264(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_273(300, 1, 0);
			Function_264(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_273(500, 1, 0);
			Function_264(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_273(150, 1, 0);
			Function_264(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_264(25, 1, 0);
			Function_310(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_273(150, 1, 0);
			Function_264(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_264(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_264(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_264(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_264(150, 1, 0);
			Function_310(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_264(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_264(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_264(150, 1, 0);
			Function_310(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_264(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_264(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_438(int iParam0, var uParam1, bool bParam2) //Position: 0x220E9 / 139497
{
	struct<4> Var0;
	
	if (!Function_306(iParam0))
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
			Function_443(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_169(Global_46760[0]);
			Function_169(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_441(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_169(Global_46816[0]);
			Function_91(0);
			Function_440(2, 1);
			Function_440(0, 1);
			Function_440(1, 1);
			break;
		
		case 0x00000003:
			Function_169(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_169(Global_46816[0]);
			Function_169(Global_46760[0]);
			Function_338(0, 1);
			Function_338(15, 1);
			Function_338(9, 1);
			Function_338(12, 1);
			Function_338(16, 1);
			Function_440(3, 1);
			break;
		
		case 0x00000005:
			Function_169(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_441(21, &bParam2, 4);
			Function_169(Global_46816[0]);
			Function_440(39, 1);
			break;
		
		case 0x00000007:
			Function_169(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_169(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_455())
				{
					if (!Function_73(4))
					{
						Function_72(4, 0, 0, 1, 0);
					}
				}
			}
			Function_169(Global_46760[0]);
			Function_169(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_169(Global_46760[0]);
			Function_169(Global_46816[2]);
			Function_420(&(Global_43791[Global_46816[2]]), 32768);
			Function_448(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_441(9, &bParam2, 4);
			Function_169(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_169(Global_46760[0]);
			Function_169(Global_46796[0]);
			Function_420(&(Global_43791[Global_46796[0]]), 32768);
			Function_448(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_169(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_169(Global_46760[0]);
			Function_169(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_169(Global_46760[1]);
			Function_169(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_169(Global_46838[0]);
			Function_169(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_169(Global_46796[5]);
			Function_169(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_441(21, &bParam2, 4);
			Function_169(Global_46760[4]);
			Function_169(Global_46796[4]);
			Function_425(&Global_119935, 0x2000000);
			Function_425(&Global_119935, 0x4000000);
			Function_425(&Global_119935, 4096);
			Function_425(&Global_119935, 8);
			Function_425(&Global_119935, 8388608);
			Function_425(&Global_119935, 524288);
			Function_425(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_169(Global_46760[4]);
			Function_169(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_448(&(Global_43791[Global_46760[4]]), 256);
			Function_169(Global_46760[4]);
			Function_169(Global_46796[0]);
			Function_420(&(Global_43791[Global_46796[0]]), 32768);
			Function_448(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_169(Global_46760[0]);
			Function_169(Global_46760[5]);
			Function_441(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_169(Global_46796[3]);
			Function_420(&(Global_43791[Global_46796[3]]), 32768);
			Function_448(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_441(9, &bParam2, 4);
			Function_169(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_420(&(Global_43791[Global_46838[1]]), 32768);
			Function_169(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_441(12, &bParam2, 4);
			Function_448(&(Global_43791[Global_46838[1]]), 256);
			Function_169(Global_46816[3]);
			Function_169(Global_46866[0]);
			Function_169(Global_46850[0]);
			Function_91(4);
			Function_338(13, 1);
			Function_338(1, 1);
			Function_338(18, 1);
			Function_440(34, 1);
			Function_440(44, 1);
			Function_440(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_441(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_169(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_169(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_169(Global_46866[0]);
			Function_169(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_169(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_169(Global_46850[0]);
			Function_169(Global_46866[0]);
			Function_169(Global_46866[1]);
			Function_169(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_441(23, &bParam2, 3);
			Function_338(23, 1);
			Function_169(Global_46850[0]);
			Function_169(Global_46850[2]);
			Function_420(&(Global_43791[Global_46850[2]]), 32768);
			Function_448(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_441(19, &bParam2, 4);
			Function_169(Global_46850[0]);
			Function_169(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_441(24, &bParam2, 3);
			Function_338(24, 1);
			Function_169(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_169(Global_46850[0]);
			Function_169(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_169(Global_46866[12]);
			Function_169(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_169(Global_46866[12]);
			Function_169(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_441(25, &bParam2, 10);
			Function_169(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_169(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_169(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_441(13, &bParam2, 4);
			Function_169(Global_46866[2]);
			Function_169(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_73(8))
				{
					Function_72(8, 0, 0, 1, 0);
				}
			}
			Function_169(Global_46850[0]);
			Function_91(9);
			Function_338(7, 1);
			Function_338(11, 1);
			Function_338(3, 1);
			Function_338(20, 1);
			Function_440(57, 1);
			break;
		
		case 0x0000002A:
			Function_441(2, &bParam2, 4);
			Function_169(Global_46914[0]);
			Function_169(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_169(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_169(Global_46914[0]);
			Function_169(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_169(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_169(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_169(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_441(17, &bParam2, 4);
			Function_169(Global_46926[0]);
			Function_169(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_23(15))
				{
					Function_74(15, 0, 1);
				}
			}
			Function_412(2, 26);
			Function_448(&(Global_43791[Global_46914[1]]), 256);
			Function_91(11);
			Function_169(Global_46914[1]);
			Function_169(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_169(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_169(Global_46914[1]);
			Function_169(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_169(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_169(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_169(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_169(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_169(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_169(Global_46914[1]);
			Function_439(11);
			Function_91(12);
			Global_26200[1114].f_40 = 0;
			Function_440(56, 1);
			if (!&bParam2)
			{
				if (!Function_73(9))
				{
					Function_72(9, 0, 0, 0, 0);
				}
				if (!Function_73(10))
				{
					Function_72(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_303(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_439(int iParam0) //Position: 0x22A04 / 141828
{
	var uVar0;
	
	if (!Function_87(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_95(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_95(&Global_26200[iParam014] + 88, 0);
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
			Function_92(Global_26200[iParam014].f_48, 16, 0, 0);
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

int Function_440(int iParam0, int iParam1) //Position: 0x22B81 / 142209
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_252(iParam0, iParam1);
	Function_57(&Global_54076, 1, 4, 1);
	return 1;
}

void Function_441(bool bParam0, bool bParam1, int iParam2) //Position: 0x22BF4 / 142324
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_442(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_443(bParam0, 0, 0);
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

bool Function_442(int iParam0, int iParam1) //Position: 0x22C67 / 142439
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_443(bool bParam0, bool bParam1, int iParam2) //Position: 0x22C7B / 142459
{
	if (!Function_444(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_38(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_38(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_38(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_444(int iParam0) //Position: 0x22CD5 / 142549
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_445(struct<185> Param0) //Position: 0x22CE7 / 142567
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_446(4, 0, 0);
		}
	}
	return;
}

void Function_446(bool bParam0, var uParam1, int iParam2) //Position: 0x22D52 / 142674
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
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_188(Global_26182, &uVar0, 1);
	}
	return;
}

bool Function_447(int iParam0) //Position: 0x22E3C / 142908
{
	if (!Function_306(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_448(var uParam0, int iParam1) //Position: 0x22E56 / 142934
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_449(int iParam0, float fParam1, struct<2> Param2) //Position: 0x22E70 / 142960
{
	if (!Function_450(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = fParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

bool Function_450(int iParam0) //Position: 0x22ED1 / 143057
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_451() //Position: 0x22EE6 / 143078
{
	Global_99725[043].f_216 = 4294967295;
	Global_99725[143].f_216 = Global_46760[0];
	Global_99725[243].f_216 = Global_46760[0];
	Global_99725[343].f_216 = Global_46736[0];
	Global_99725[443].f_216 = Global_46746[0];
	Global_99725[543].f_216 = Global_46746[0];
	Global_99725[643].f_216 = Global_46746[2];
	Global_99725[743].f_216 = Global_46746[1];
	Global_99725[843].f_216 = Global_46894[0];
	Global_99725[943].f_216 = Global_46894[0];
	Global_99725[1043].f_216 = Global_46736[1];
	Global_99725[1143].f_216 = Global_46736[1];
	Global_99725[1243].f_216 = Global_46736[1];
	Global_99725[1343].f_216 = Global_46736[1];
	Global_99725[1443].f_216 = Global_46760[0];
	Global_99725[1543].f_216 = Global_46760[0];
	Global_99725[1643].f_216 = 4294967295;
	Global_99725[1743].f_216 = Global_46760[0];
	Global_99725[1843].f_216 = 4294967295;
	Global_99725[1943].f_216 = Global_46760[0];
	Global_99725[2043].f_216 = 4294967295;
	Global_99725[2143].f_216 = Global_46736[2];
	Global_99725[2243].f_216 = Global_46736[2];
	Global_99725[2343].f_216 = Global_46866[0];
	Global_99725[2443].f_216 = Global_46850[1];
	Global_99725[2543].f_216 = Global_46894[0];
	Global_99725[2643].f_216 = Global_46866[0];
	Global_99725[2743].f_216 = Global_46866[0];
	Global_99725[2843].f_216 = Global_46796[4];
	Global_99725[2943].f_216 = Global_46796[3];
	Global_99725[3043].f_216 = Global_46816[2];
	Global_99725[3143].f_216 = Global_46850[2];
	Global_99725[3243].f_216 = Global_46796[1];
	Global_99725[3343].f_216 = 4294967295;
	Global_99725[3443].f_216 = Global_46796[1];
	Global_99725[3543].f_216 = Global_46746[1];
	Global_99725[3643].f_216 = Global_46746[1];
	Global_99725[3743].f_216 = Global_46746[1];
	Global_99725[3843].f_216 = Global_46736[2];
	Global_99725[3943].f_216 = Global_46816[1];
	Global_99725[4043].f_216 = Global_46746[1];
	Global_99725[4143].f_216 = Global_46866[1];
	Global_99725[4243].f_216 = Global_46914[1];
	Global_99725[4343].f_216 = Global_46736[0];
	Global_99725[4443].f_216 = Global_46736[0];
	Global_99725[4543].f_216 = Global_46894[2];
	Global_99725[4643].f_216 = Global_46894[2];
	Global_99725[4743].f_216 = Global_46866[1];
	Global_99725[4843].f_216 = Global_46746[2];
	Global_99725[4943].f_216 = 4294967295;
	Global_99725[5043].f_216 = Global_46816[1];
	Global_99725[5143].f_216 = Global_46796[4];
	Global_99725[5243].f_216 = 4294967295;
	Global_99725[5343].f_216 = Global_46926[2];
	Global_99725[5443].f_216 = Global_46894[0];
	Global_99725[5543].f_216 = Global_46894[0];
	Global_99725[5643].f_216 = Global_46866[0];
	Global_99725[5743].f_216 = Global_46914[0];
	Global_99725[5843].f_216 = Global_46914[0];
	Global_99725[5943].f_216 = Global_46914[0];
	Global_99725[6043].f_216 = Global_46914[0];
	Global_99725[6143].f_216 = Global_46914[0];
	Global_99725[6243].f_216 = Global_46914[0];
	Global_99725[6343].f_216 = Global_46914[0];
	Global_99725[6443].f_216 = Global_46914[0];
	Global_99725[6543].f_216 = Global_46736[0];
	Global_99725[6643].f_216 = Global_46746[2];
	Global_99725[6743].f_216 = 4294967295;
	Global_99725[6843].f_216 = Global_46736[2];
	Global_99725[6943].f_216 = Global_46736[0];
	Global_99725[7043].f_216 = Global_46736[0];
	Global_99725[7143].f_216 = Global_46736[2];
	Global_99725[7243].f_216 = Global_46914[0];
	Global_99725[7343].f_216 = Global_46914[0];
	Global_99725[7443].f_216 = Global_46914[0];
	Global_99725[7543].f_216 = Global_46914[0];
	Global_99725[7643].f_216 = Global_46914[0];
	Global_99725[043].f_252 = 4294967295;
	Global_99725[143].f_252 = 4294967295;
	Global_99725[243].f_252 = 4294967295;
	Global_99725[343].f_252 = 4294967295;
	Global_99725[443].f_252 = 4294967295;
	Global_99725[543].f_252 = 4294967295;
	Global_99725[643].f_252 = 4294967295;
	Global_99725[743].f_252 = 4294967295;
	Global_99725[843].f_252 = 4294967295;
	Global_99725[943].f_252 = 4294967295;
	Global_99725[1043].f_252 = 4294967295;
	Global_99725[1143].f_252 = 4294967295;
	Global_99725[1243].f_252 = 4294967295;
	Global_99725[1343].f_252 = 4294967295;
	Global_99725[1443].f_252 = 4294967295;
	Global_99725[1543].f_252 = 4294967295;
	Global_99725[1643].f_252 = 4294967295;
	Global_99725[1743].f_252 = 4294967295;
	Global_99725[1843].f_252 = 4294967295;
	Global_99725[1943].f_252 = 4294967295;
	Global_99725[2043].f_252 = 4294967295;
	Global_99725[2143].f_252 = 4294967295;
	Global_99725[2243].f_252 = 4294967295;
	Global_99725[2343].f_252 = 4294967295;
	Global_99725[2443].f_252 = 4294967295;
	Global_99725[2543].f_252 = 4294967295;
	Global_99725[2643].f_252 = 4294967295;
	Global_99725[2743].f_252 = 4294967295;
	Global_99725[2843].f_252 = 4294967295;
	Global_99725[2943].f_252 = 4294967295;
	Global_99725[3043].f_252 = 4294967295;
	Global_99725[3143].f_252 = 4294967295;
	Global_99725[3243].f_252 = 4294967295;
	Global_99725[3343].f_252 = 4294967295;
	Global_99725[3443].f_252 = 4294967295;
	Global_99725[3543].f_252 = 4294967295;
	Global_99725[3643].f_252 = 4294967295;
	Global_99725[3743].f_252 = 4294967295;
	Global_99725[3843].f_252 = 4294967295;
	Global_99725[3943].f_252 = 4294967295;
	Global_99725[4043].f_252 = 4294967295;
	Global_99725[4143].f_252 = 4294967295;
	Global_99725[4243].f_252 = 4294967295;
	Global_99725[4343].f_252 = 4294967295;
	Global_99725[4443].f_252 = 4294967295;
	Global_99725[4543].f_252 = 4294967295;
	Global_99725[4643].f_252 = 4294967295;
	Global_99725[4743].f_252 = 4294967295;
	Global_99725[4843].f_252 = 4294967295;
	Global_99725[4943].f_252 = 4294967295;
	Global_99725[5043].f_252 = 4294967295;
	Global_99725[5143].f_252 = 4294967295;
	Global_99725[5243].f_252 = 4294967295;
	Global_99725[5343].f_252 = 4294967295;
	Global_99725[5443].f_252 = 4294967295;
	Global_99725[5543].f_252 = 4294967295;
	Global_99725[5643].f_252 = 4294967295;
	Global_99725[5743].f_252 = 4294967295;
	Global_99725[5843].f_252 = 4294967295;
	Global_99725[5943].f_252 = 4294967295;
	Global_99725[6043].f_252 = 4294967295;
	Global_99725[6143].f_252 = 4294967295;
	Global_99725[6243].f_252 = 4294967295;
	Global_99725[6343].f_252 = 4294967295;
	Global_99725[6443].f_252 = 4294967295;
	Global_99725[6543].f_252 = 4294967295;
	Global_99725[6643].f_252 = 4294967295;
	Global_99725[6743].f_252 = 4294967295;
	Global_99725[6843].f_252 = 4294967295;
	Global_99725[6943].f_252 = 4294967295;
	Global_99725[7043].f_252 = 4294967295;
	Global_99725[7143].f_252 = 4294967295;
	Global_99725[7243].f_252 = 4294967295;
	Global_99725[7343].f_252 = 4294967295;
	Global_99725[7443].f_252 = 4294967295;
	Global_99725[7543].f_252 = 4294967295;
	Global_99725[7643].f_252 = 4294967295;
	return;
}

void Function_452() //Position: 0x236D3 / 145107
{
	int iVar0;
	var uVar1;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= Global_16865)
	{
		if (StackVal != 0)
		{
			iVar3 = Function_85(StackVal);
			Function_83(StackVal);
			uVar1 = Function_83(StackVal);
			Global_16865[iVar0] = ADD_BLIP_FOR_COORD(StackVal, Function_82(&uVar1), 0.0f, 2, iVar3);
			if (StackVal == 23)
			{
				SET_BLIP_COLOR(&(Global_16865[iVar0]), 1.0f, 1.0f, 1.0f, 0,5f);
				SET_BLIP_NAME(&(Global_16865[iVar0]), "BLIP_CHANCE");
			}
			else if (StackVal == 11)
			{
				SET_BLIP_NAME(&(Global_16865[iVar0]), "BLIP_HORSEBREAKING");
			}
			else if (StackVal == 24)
			{
				SET_BLIP_NAME(&(Global_16865[iVar0]), "BLIP_CHANCE");
			}
			UNK_0xFF3DB575(&(Global_16865[iVar0]), 1);
			SET_BLIP_PRIORITY(&(Global_16865[iVar0]), true);
		}
		iVar0++;
	}
	return;
}

void Function_453(bool bParam0) //Position: 0x237E1 / 145377
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_454() //Position: 0x2382B / 145451
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 3;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_222(Global_21684[iVar07], &iVar1, &iVar2, &uVar3);
			if (iVar1 == 0)
			{
				if (StackVal == 3)
				{
					iVar4 = 4294967295;
					if (iVar2 == Global_46760[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("TwinRocksJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46816[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("PBJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46796[0])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("TumbleweedJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46796[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("SOLJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46796[3])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("GAPJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46838[1])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("FM_JournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46850[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("tes_JournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_46850[1])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("NOS_JournalID", 3, 4294967295, 0);
					}
					if (iVar4 != 4294967295)
					{
						APPEND_JOURNAL_ENTRY(iVar4, 1);
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

bool Function_455() //Position: 0x239BA / 145850
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_509(GET_GAME_EDITION(), 16);
	}
	return 0;
}

var Function_456(var uParam0, char* cParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x239EA / 145898
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<9> Var4;
	
	bVar0 = Function_457(&cParam1);
	if (bVar0 == 4294967295)
	{
		LOG_ERROR("Too many regions, increase the gRegions array size!!!!");
		return 4294967295;
	}
	if (Global_6605)
	{
		Global_43791[bVar0] = 0;
	}
	else
	{
		Function_448(&(Global_43791[bVar0]), 0x403ee3ff);
	}
	*(&Global_44085[bVar09] + 8) = &iParam3;
	Global_44085[bVar09] = iParam2;
	if (STRING_LENGTH(&uParam0) >= 0)
	{
		*(&Global_44085[bVar09] + 24) = GET_ASSET_ID(&uParam0, 4);
	}
	else
	{
		*(&Global_44085[bVar09] + 24) = 4294967295;
	}
	Global_44085[bVar09].f_4 = iParam4;
	strcpy(&Global_44085[bVar09] + 32, &cParam1, 4);
	(&Global_44085[bVar09] + 40) = "";
	if (&bParam6)
	{
		Function_420(&(Global_43791[bVar0]), 8192);
	}
	if (&bParam7)
	{
		Function_420(&(Global_43791[bVar0]), 16384);
	}
	if (&bParam8)
	{
		Function_420(&(Global_43791[bVar0]), 32768);
	}
	if (&bParam9)
	{
		Function_420(&(Global_43791[bVar0]), 65536);
	}
	switch (iParam4)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (Function_349(iParam2))
			{
				AMBIENCE_AUDIO_VALIDATE_REGION(&Global_44085[iParam29] + 32, &cParam1);
			}
			break;
		
		case 0x00000002:
			AMBIENCE_AUDIO_VALIDATE_REGION(&cParam1, "");
			break;
		
		default:
			break;
	}
	if (((IS_OBJECT_VALID(&iParam3) && iParam4 == 1) && iParam4 == 2) && iParam4 == 0)
	{
		switch (iParam4)
		{
			case 0x00000003:
				iVar1 = 63;
				break;
			
			case 0x00000004:
			case 0x00000005:
				iVar1 = 60;
				break;
			
			case 0x00000006:
			case 0x00000007:
				iVar1 = 48;
				break;
			
			default:
				break;
		}
		GET_OBJECT_POSITION(&iParam3, &fVar2);
		if (GET_OBJECT_TYPE(&iParam3) == 9)
		{
			GET_VOLUME_SCALE(&iParam3, &vVar4);
		}
		else
		{
			vVar4 = Vector(125.0f, 125.0f, 125.0f);
		}
		if (Function_231())
		{
			if (STRINGS_ARE_EQUAL("blk", &cParam1))
			{
				fVar2 = Vector(323,835f, 114,447f, 1252,132f);
			}
			else if (STRINGS_ARE_EQUAL("upr", &cParam1))
			{
				fVar2 = Vector(-495,718f, 144,757f, 1918,028f);
			}
			else if (STRINGS_ARE_EQUAL("thi", &cParam1))
			{
				fVar2 = Vector(366,715f, 90,202f, 2308,272f);
			}
			else if (STRINGS_ARE_EQUAL("odd", &cParam1))
			{
				fVar2 = Vector(-2923,858f, 19,593f, 2651,791f);
			}
			else if (STRINGS_ARE_EQUAL("pln", &cParam1))
			{
				fVar2 = Vector(-3167,428f, 45,588f, 3621,723f);
			}
			else if (STRINGS_ARE_EQUAL("mtf", &cParam1))
			{
				fVar2 = Vector(-460,607f, 75,493f, 2162,597f);
			}
			else if (STRINGS_ARE_EQUAL("aur", &cParam1))
			{
				fVar2 = Vector(-969,358f, 193,02f, 1322,21f);
			}
			else if (STRINGS_ARE_EQUAL("grn", &cParam1))
			{
				fVar2 = Vector(-1130,731f, 26,515f, 3123,629f);
			}
			else if (STRINGS_ARE_EQUAL("brb", &cParam1))
			{
				fVar2 = Vector(-493,719f, 20,081f, 3021,842f);
			}
			else if (STRINGS_ARE_EQUAL("bcc", &cParam1))
			{
				fVar2 = Vector(-533,88f, 164,916f, 1809,747f);
			}
		}
		Global_44085[bVar09].f_48 = APPEND_REGION(GET_OBJECT_NAME(&iParam3), &fVar2, ((vVar4.x + vVar4.z) / 2.0f), iVar1, Function_421(&(Global_43791[bVar0]), 4096), 0, 0);
	}
	else if (IS_OBJECT_VALID(&iParam3) && iParam4 != 2)
	{
		if (STRINGS_ARE_EQUAL("hgn", &cParam1))
		{
			uVar6 = Vector(-1189,689f, 111,072f, 2203,254f);
		}
		else if (STRINGS_ARE_EQUAL("cho", &cParam1))
		{
			uVar6 = Vector(-2562,781f, 25,953f, 2316,282f);
		}
		else if (STRINGS_ARE_EQUAL("rio", &cParam1))
		{
			uVar6 = Vector(-2948,654f, 40,521f, 3196,021f);
		}
		else if (STRINGS_ARE_EQUAL("gtr", &cParam1))
		{
			uVar6 = Vector(-4200,715f, 22,615f, 2592,929f);
		}
		else if (STRINGS_ARE_EQUAL("pun", &cParam1))
		{
			uVar6 = Vector(-4567,712f, 14,362f, 4147,449f);
		}
		else if (STRINGS_ARE_EQUAL("prd", &cParam1))
		{
			uVar6 = Vector(-2266,155f, 9,958f, 4085,551f);
		}
		else if (STRINGS_ARE_EQUAL("dzc", &cParam1))
		{
			uVar6 = Vector(-345,969f, 22,996f, 3436,474f);
		}
		else if (STRINGS_ARE_EQUAL("grt", &cParam1))
		{
			uVar6 = Vector(90,633f, 110,101f, 1037,087f);
		}
		else if (STRINGS_ARE_EQUAL("tal", &cParam1))
		{
			uVar6 = Vector(-842,584f, 186,831f, 1282,891f);
		}
		Global_44085[bVar09].f_48 = APPEND_REGION(GET_OBJECT_NAME(&iParam3), &uVar6, 125.0f, 63, 1, 0, 0);
	}
	else
	{
		Global_44085[bVar09].f_48 = 4294967295;
	}
	Global_44085[bVar09].f_64 = &iParam5;
	if (IS_VOLUME_VALID(&Global_44085[bVar09] + 8))
	{
		DECOR_SET_INT(&Global_44085[bVar09] + 8, "regid", bVar0);
	}
	if (!iParam4 != 1)
	{
		Function_276(473, (Function_21(473) + 1.0f));
		iVar8 = Function_417(bVar0);
		if (iVar8 == Global_46722[0])
		{
			Function_276(474, (Function_21(474) + 1.0f));
		}
		else if (iVar8 == Global_46722[1])
		{
			Function_276(475, (Function_21(475) + 1.0f));
		}
		else if (iVar8 == Global_46722[2])
		{
			Function_276(476, (Function_21(476) + 1.0f));
		}
	}
	else
	{
		Function_420(&(Global_43791[bVar0]), 4096);
	}
	return bVar0;
}

var Function_457(int iParam0) //Position: 0x23FCE / 147406
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal == 0)
		{
			return iVar0;
		}
		if (STRINGS_ARE_EQUAL(&Global_44085[iVar09] + 32, &iParam0) && !STRINGS_ARE_EQUAL(&iParam0, ""))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_458() //Position: 0x2401F / 147487
{
	var uVar0;
	
	Function_459(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("regions_layout");
	*(&iLocal_4 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chov_armadillo", 4,203895E-45f, Vector(-2148,081f, 16,097f, 2611,195f), Vector(0.0f, 0.0f, 0.0f), Vector(150.0f, 154,3634f, 150.0f));
	*(&iLocal_4 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "riov_fortmercer", 4,203895E-45f, Vector(-2678,089f, 67,263f, 3450,585f), Vector(0.0f, 20.0f, 0.0f), Vector(150.0f, 50.0f, 150.0f));
	*(&iLocal_4 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chov_twinrocks", 4,203895E-45f, Vector(-2428.0f, 24,627f, 2144f), Vector(0.0f, 20.0f, 0.0f), Vector(175.0f, 50.0f, 175.0f));
	*(&iLocal_4 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chov_ridgewood", 4,203895E-45f, Vector(-3260,67f, 15,999f, 2705,505f), Vector(0.0f, 20.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrv_tumbleweed", 4,203895E-45f, Vector(-3946,923f, 28,894f, 2948,856f), Vector(0.0f, 9,238991f, 0.0f), Vector(176,1309f, 64,53324f, 159,0415f));
	*(&iLocal_4 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrv_gaptooth", 4,203895E-45f, Vector(-4450,974f, 20,923f, 3194,357f), Vector(0.0f, 20.0f, 0.0f), Vector(187,8394f, 71,9055f, 196,0643f));
	*(&iLocal_4 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrv_solomons", 4,203895E-45f, Vector(-3881,611f, 8,032f, 3660,03f), Vector(0.0f, 20.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrv_rathskeller", 4,203895E-45f, Vector(-3660f, 42,235f, 2136.0f), Vector(0.0f, 20.0f, 0.0f), Vector(100.0f, 50.0f, 100.0f));
	*(&iLocal_4 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "frov_cholla_set");
	*(&iLocal_4 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla01", 4,203895E-45f, Vector(-2602,73f, 33,40513f, 2665,931f), Vector(0.0f, 0,05652091f, 0.0f), Vector(910,5437f, 150.0f, 450.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[0]);
	*(&iLocal_4 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla02", 4,203895E-45f, Vector(-2199,864f, 33,40513f, 2155,363f), Vector(0.0f, 14,90549f, 0.0f), Vector(503,9865f, 150.0f, 326,1552f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[1]);
	*(&iLocal_4 + 128[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla03", 4,203895E-45f, Vector(-3359,402f, 33,40513f, 2400,197f), Vector(0.0f, -31,93789f, 0.0f), Vector(239,5854f, 85,69038f, 130,7859f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[2]);
	*(&iLocal_4 + 128[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla04", 4,203895E-45f, Vector(-1862,122f, 33,40513f, 2982,551f), Vector(0.0f, -25,86499f, 0.0f), Vector(477,1432f, 150.0f, 292,3265f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[3]);
	*(&iLocal_4 + 128[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla05", 4,203895E-45f, Vector(-2057,968f, 33,40513f, 3247,92f), Vector(0.0f, -36,65475f, 0.0f), Vector(570,6682f, 150.0f, 176,8855f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[4]);
	*(&iLocal_4 + 128[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla06", 4,203895E-45f, Vector(-3210,272f, 33,40513f, 2897,85f), Vector(0.0f, 0,05652091f, 0.0f), Vector(260,1258f, 80,80408f, 198,9715f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[5]);
	*(&iLocal_4 + 128[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla07", 4,203895E-45f, Vector(-3371,573f, 33,40513f, 2692,565f), Vector(0.0f, 2,758052f, 0.0f), Vector(125.0f, 150.0f, 297,8613f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[6]);
	*(&iLocal_4 + 128[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla08", 4,203895E-45f, Vector(-2389,001f, 33,40513f, 2055,168f), Vector(0.0f, -76,20333f, 0.0f), Vector(240,372f, 150.0f, 349,7114f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[7]);
	*(&iLocal_4 + 128[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla09", 4,203895E-45f, Vector(-1878,934f, 33,40513f, 2351,455f), Vector(0.0f, -30,36887f, 0.0f), Vector(125.0f, 150.0f, 183,2645f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[8]);
	*(&iLocal_4 + 128[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla010", 4,203895E-45f, Vector(-1767,727f, 33,40513f, 2752,065f), Vector(0.0f, 0,05652091f, 0.0f), Vector(157,8653f, 150.0f, 172,4045f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[9]);
	*(&iLocal_4 + 128[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla011", 4,203895E-45f, Vector(-2425,848f, 33,40513f, 3055,122f), Vector(0.0f, -24,74285f, 0.0f), Vector(279,884f, 150.0f, 144,233f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[10]);
	*(&iLocal_4 + 128[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla012", 4,203895E-45f, Vector(-2790,744f, 37,32828f, 2229,882f), Vector(0.0f, 33,13997f, 0.0f), Vector(168,0747f, 150.0f, 111,0339f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[11]);
	*(&iLocal_4 + 128[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_cholla013", 4,203895E-45f, Vector(-3224,248f, 33,40513f, 2310,521f), Vector(0.0f, -8,591194f, 0.0f), Vector(151,5101f, 100,2558f, 90,35665f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 240, &iLocal_4 + 128[12]);
	*(&iLocal_4 + 368) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "frov_gaptooth_set");
	*(&iLocal_4 + 248[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth1", 4,203895E-45f, Vector(-3969,955f, 40.0f, 2804,408f), Vector(0.0f, 0.0f, 0.0f), Vector(425,0244f, 200.0f, 532,4791f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[0]);
	*(&iLocal_4 + 248[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth2", 4,203895E-45f, Vector(-4209,322f, 40.0f, 3599,196f), Vector(0.0f, -26,05212f, 0.0f), Vector(371,451f, 200.0f, 205,1757f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[1]);
	*(&iLocal_4 + 248[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth3", 4,203895E-45f, Vector(-4026,704f, 40.0f, 3358,218f), Vector(0.0f, -26,05212f, 0.0f), Vector(371,451f, 200.0f, 205,1757f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[2]);
	*(&iLocal_4 + 248[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth4", 4,203895E-45f, Vector(-4479,839f, 40.0f, 2492,048f), Vector(0.0f, -106,8796f, 0.0f), Vector(371,451f, 200.0f, 205,1757f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[3]);
	*(&iLocal_4 + 248[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth5", 4,203895E-45f, Vector(-3792,116f, 40.0f, 2371,747f), Vector(0.0f, -121,7228f, 0.0f), Vector(371,451f, 200.0f, 125,6738f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[4]);
	*(&iLocal_4 + 248[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth6", 4,203895E-45f, Vector(-3902,983f, 40.0f, 3626,558f), Vector(0.0f, -121,7228f, 0.0f), Vector(175,9137f, 200.0f, 168,6144f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[5]);
	*(&iLocal_4 + 248[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth7", 4,203895E-45f, Vector(-4701,729f, 40.0f, 3081,416f), Vector(0.0f, -91,91017f, 0.0f), Vector(622,3319f, 204,2115f, 533,3927f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[6]);
	*(&iLocal_4 + 248[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth8", 4,203895E-45f, Vector(-3723,264f, 12.0f, 3466,478f), Vector(0.0f, -27,09326f, 0.0f), Vector(105.0f, 50.0f, 130.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[7]);
	*(&iLocal_4 + 248[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth9", 4,203895E-45f, Vector(-4706,59f, 13,051f, 3682,356f), Vector(0.0f, 20.0f, 0.0f), Vector(187,5346f, 84,43104f, 149,7965f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[8]);
	*(&iLocal_4 + 248[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth10", 4,203895E-45f, Vector(-4472,15f, 13,051f, 3646,979f), Vector(0.0f, 20.0f, 0.0f), Vector(187,5346f, 84,43104f, 149,7965f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[9]);
	*(&iLocal_4 + 248[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth11", 4,203895E-45f, Vector(-4360,223f, 0,4618087f, 3691,596f), Vector(0,206538f, -12,38739f, -0,8785428f), Vector(187,5346f, 84,43104f, 108,0804f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[10]);
	*(&iLocal_4 + 248[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth12", 4,203895E-45f, Vector(-4147,811f, -11,15957f, 3808,613f), Vector(-0,9516244f, -38,17848f, 1,679624f), Vector(187,5346f, 84,43104f, 87,76409f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[11]);
	*(&iLocal_4 + 248[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth13", 4,203895E-45f, Vector(-3949,441f, -11,15957f, 3940,317f), Vector(-0,9516244f, -38,17848f, 1,679624f), Vector(189,331f, 85,23979f, 107,984f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[12]);
	*(&iLocal_4 + 248[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_gaptooth14", 4,203895E-45f, Vector(-3891,702f, -11,43176f, 3817,105f), Vector(5,824818f, -97,39114f, -4,68537f), Vector(100,7107f, 85,23979f, 79,91846f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 248[13]);
	*(&iLocal_4 + 432) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "frov_riobravo_set");
	*(&iLocal_4 + 376[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_riobravo0", 4,203895E-45f, Vector(-2911,346f, 63,4446f, 3486,49f), Vector(0.0f, 0.0f, 0.0f), Vector(648,2305f, 275,4488f, 354,9236f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 432, &iLocal_4 + 376[0]);
	*(&iLocal_4 + 376[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_riobravo1", 4,203895E-45f, Vector(-3441,621f, 63,4446f, 3718,957f), Vector(0.0f, 48,84464f, 0.0f), Vector(436,935f, 279,3885f, 222,3333f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 432, &iLocal_4 + 376[1]);
	*(&iLocal_4 + 376[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_riobravo2", 4,203895E-45f, Vector(-2372,235f, 63,46845f, 3677,2f), Vector(0.0f, 30,47767f, 0.0f), Vector(299,4622f, 261,6896f, 157,2439f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 432, &iLocal_4 + 376[2]);
	*(&iLocal_4 + 376[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_riobravo3", 4,203895E-45f, Vector(-3460,174f, 63,4446f, 3251,896f), Vector(0.0f, 30,47767f, 0.0f), Vector(184,1259f, 236,5031f, 156,5505f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 432, &iLocal_4 + 376[3]);
	*(&iLocal_4 + 376[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_riobravo4", 4,203895E-45f, Vector(-2517,998f, 63,4446f, 3766,027f), Vector(0.0f, 2,464206f, 0.0f), Vector(299,4622f, 261,6896f, 157,2439f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 432, &iLocal_4 + 376[4]);
	*(&iLocal_4 + 376[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_riobravo5", 4,203895E-45f, Vector(-3120,765f, 63,4446f, 3811,641f), Vector(0.0f, 25,83067f, 0.0f), Vector(144,4332f, 265,1125f, 192,7761f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 432, &iLocal_4 + 376[5]);
	*(&iLocal_4 + 520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "frov_hen_set");
	*(&iLocal_4 + 440[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan0", 4,203895E-45f, Vector(-654,6435f, -0,572317f, 2513,387f), Vector(0.0f, 90,32787f, 0.0f), Vector(284,3203f, 640,8917f, 1015,424f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[0]);
	*(&iLocal_4 + 440[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan1", 4,203895E-45f, Vector(-792,6554f, -0,572317f, 2377,834f), Vector(0.0f, 159,6195f, 0.0f), Vector(396,5943f, 666,2946f, 309,2861f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[1]);
	*(&iLocal_4 + 440[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan2", 4,203895E-45f, Vector(-1391,018f, -0,572317f, 2373,582f), Vector(0.0f, 110,2352f, 0.0f), Vector(463,2761f, 652,4385f, 268,773f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[2]);
	*(&iLocal_4 + 440[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan3", 4,203895E-45f, Vector(-706,7838f, -0,572317f, 2868,703f), Vector(0.0f, 110,2352f, 0.0f), Vector(268,7076f, 652,4385f, 675,9031f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[3]);
	*(&iLocal_4 + 440[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan4", 4,203895E-45f, Vector(-1259,285f, -0,572317f, 2758,507f), Vector(0.0f, 110,2352f, 0.0f), Vector(320,8498f, 652,4385f, 258,9835f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[4]);
	*(&iLocal_4 + 440[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan5", 4,203895E-45f, Vector(-1219,818f, -0,572317f, 3107,28f), Vector(0.0f, 134,4942f, 0.0f), Vector(126,499f, 688,3062f, 205,6273f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[5]);
	*(&iLocal_4 + 440[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan6", 4,203895E-45f, Vector(80,50993f, -0,572317f, 2265,647f), Vector(0.0f, 169,9944f, 0.0f), Vector(167,0905f, 688,3062f, 214,8033f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[6]);
	*(&iLocal_4 + 440[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan7", 4,203895E-45f, Vector(-1278,678f, -0,572317f, 2084,858f), Vector(0.0f, 246,3853f, 0.0f), Vector(167,0905f, 688,3062f, 338,9639f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[7]);
	*(&iLocal_4 + 440[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "frov_hennigan8", 4,203895E-45f, Vector(-1562,09f, -0,572317f, 1962,695f), Vector(0.0f, 212,4582f, 0.0f), Vector(89,96301f, 688,3062f, 190,3966f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 520, &iLocal_4 + 440[8]);
	*(&iLocal_4 + 576) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "norv_talltrees_set");
	*(&iLocal_4 + 528[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_talltrees01", 4,203895E-45f, Vector(-603,6162f, 100.0f, 1668,403f), Vector(0.0f, 11,39583f, 0.0f), Vector(425,5292f, 621,0958f, 405,257f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 528[0]);
	*(&iLocal_4 + 528[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_talltrees02", 4,203895E-45f, Vector(-860,4616f, 100.0f, 1043,82f), Vector(0.0f, -21,02844f, 0.0f), Vector(506,3877f, 650.0f, 410,6267f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 528[1]);
	*(&iLocal_4 + 528[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_talltrees03", 4,203895E-45f, Vector(-948,3646f, 100.0f, 1483,085f), Vector(0.0f, 7,118113f, 0.0f), Vector(369,6403f, 695,7256f, 413,5833f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 528[2]);
	*(&iLocal_4 + 528[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_talltrees04", 4,203895E-45f, Vector(-295,1738f, 100.0f, 2009,13f), Vector(0.0f, 7,118113f, 0.0f), Vector(250.0f, 650.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 528[3]);
	*(&iLocal_4 + 528[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_talltrees09", 4,203895E-45f, Vector(-221,3179f, 100.0f, 1842,906f), Vector(0.0f, 21,17577f, 0.0f), Vector(110,2175f, 650.0f, 232,1736f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 528[4]);
	*(&iLocal_4 + 608) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "norv_greatplains_set");
	*(&iLocal_4 + 584[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_greatplains0", 4,203895E-45f, Vector(385,7805f, 50.0f, 1398,548f), Vector(0,04069565f, 37,93713f, -0,07905933f), Vector(597,0989f, 650.0f, 777,3274f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 584[0]);
	*(&iLocal_4 + 584[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "norv_greatplains1", 4,203895E-45f, Vector(-235,6304f, 50.0f, 1242,495f), Vector(0,03415427f, -7,712558f, -0,1062401f), Vector(117,4279f, 650.0f, 127,3956f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 584[1]);
	*(&iLocal_4 + 680) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "mexv_puntaorgullo_set");
	*(&iLocal_4 + 616[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo3", 4,203895E-45f, Vector(-3908,31f, 100,8937f, 4547,261f), Vector(0.0f, 90,32787f, 0.0f), Vector(426,758f, 640,8917f, 1015,68f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[0]);
	*(&iLocal_4 + 616[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo2", 4,203895E-45f, Vector(-4537,572f, 100,2876f, 4007,03f), Vector(0.0f, 90,32787f, 0.0f), Vector(167,637f, 232,9514f, 235,1425f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[1]);
	*(&iLocal_4 + 616[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo1", 4,203895E-45f, Vector(-4674,773f, 100,8937f, 4831,357f), Vector(0.0f, 90,32787f, 0.0f), Vector(289,5066f, 640,8917f, 481,8735f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[2]);
	*(&iLocal_4 + 616[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo0", 4,203895E-45f, Vector(-3250,339f, 100,8937f, 4251,694f), Vector(0.0f, 90,32787f, 0.0f), Vector(214,0201f, 640,8917f, 208,7931f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[3]);
	*(&iLocal_4 + 616[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo4", 4,203895E-45f, Vector(-4379,823f, 94,99134f, 3960,021f), Vector(-11,72191f, 79,01791f, -9,020085f), Vector(98,07817f, 100,8917f, 230,4239f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[4]);
	*(&iLocal_4 + 616[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo5", 4,203895E-45f, Vector(-4152,083f, 102,1011f, 4060,414f), Vector(-3,983634f, 56,14435f, -0,8168986f), Vector(77,13268f, 100,8917f, 230,4239f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[5]);
	*(&iLocal_4 + 616[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_puntaorgullo6", 4,203895E-45f, Vector(-4506,897f, 100,8937f, 4130,898f), Vector(15,41098f, 83,84049f, 15,19284f), Vector(206,3981f, 232,9514f, 413,039f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 680, &iLocal_4 + 616[6]);
	*(&iLocal_4 + 736) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "mexv_perdido_set");
	*(&iLocal_4 + 688[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_perdido0", 4,203895E-45f, Vector(-1893,859f, 54,86121f, 4684,601f), Vector(0.0f, 90,32787f, 0.0f), Vector(608,0305f, 640,8917f, 900.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 688[0]);
	*(&iLocal_4 + 688[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_perdido1", 4,203895E-45f, Vector(-2450,241f, 54,86121f, 4283,085f), Vector(0.0f, 68,25627f, 0.0f), Vector(278,5218f, 640,8917f, 625,5054f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 688[1]);
	*(&iLocal_4 + 688[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_perdido2", 4,203895E-45f, Vector(-1938,71f, 54,86121f, 4044,273f), Vector(0.0f, 113,8802f, 0.0f), Vector(278,5218f, 640,8917f, 675,4775f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 688[2]);
	*(&iLocal_4 + 688[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_perdido3", 4,203895E-45f, Vector(-2824,411f, 54,86121f, 4388,975f), Vector(0.0f, 43,21671f, 0.0f), Vector(75.0f, 650.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 688[3]);
	*(&iLocal_4 + 688[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_perdido4", 4,203895E-45f, Vector(-2352,672f, 54,86121f, 4003,182f), Vector(0.0f, 15,84f, 0.0f), Vector(129,0348f, 640,8917f, 67,42111f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 688[4]);
	*(&iLocal_4 + 784) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "mexv_diez_set");
	*(&iLocal_4 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_diez1", 4,203895E-45f, Vector(-162,3152f, 40,93773f, 4314,125f), Vector(0.0f, 90,32787f, 0.0f), Vector(608,0305f, 640,8917f, 915.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 784, &iLocal_4 + 744[0]);
	*(&iLocal_4 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_diez2", 4,203895E-45f, Vector(-330,4504f, 40,93773f, 3804,267f), Vector(0.0f, 83,96482f, 0.0f), Vector(608,0305f, 640,8917f, 939,0677f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 784, &iLocal_4 + 744[1]);
	*(&iLocal_4 + 744[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_diez3", 4,203895E-45f, Vector(346,4795f, 40,93773f, 3484,432f), Vector(0.0f, 83,96482f, 0.0f), Vector(608,0305f, 640,8917f, 939,0677f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 784, &iLocal_4 + 744[2]);
	*(&iLocal_4 + 744[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mexv_diez4", 4,203895E-45f, Vector(220,3329f, 40,93773f, 2921,959f), Vector(0.0f, 115.0f, 0.0f), Vector(200.0f, 500.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 784, &iLocal_4 + 744[3]);
	*(&iLocal_4 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_thieves", 4,203895E-45f, Vector(119,5282f, 73,31f, 2284,021f), Vector(0.0f, 0.0f, 0.0f), Vector(200.0f, 50.0f, 225.0f));
	*(&iLocal_4 + 800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_hennigan", 4,203895E-45f, Vector(-861,2434f, 90,476f, 2421,146f), Vector(0.0f, 38,98653f, 0.0f), Vector(150.0f, 100.0f, 150.0f));
	*(&iLocal_4 + 864) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "hgnv_pikesbasin_set");
	*(&iLocal_4 + 808[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin1", 2,802597E-45f, Vector(-1582,008f, 71,79928f, 2439,541f), Vector(0.0f, -32,21291f, 0.0f), Vector(163,7029f, 93,59687f, 80,09351f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 864, &iLocal_4 + 808[0]);
	*(&iLocal_4 + 808[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin2", 2,802597E-45f, Vector(-1419,968f, 71,79928f, 2437,603f), Vector(0.0f, -0,4750807f, 0.0f), Vector(249,2493f, 93,59687f, 154,2642f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 864, &iLocal_4 + 808[1]);
	*(&iLocal_4 + 808[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin3", 2,802597E-45f, Vector(-1281,553f, 71,79928f, 2492,5f), Vector(0.0f, -0,5973046f, 0.0f), Vector(150,2953f, 93,59687f, 140,3786f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 864, &iLocal_4 + 808[2]);
	*(&iLocal_4 + 808[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin4", 2,802597E-45f, Vector(-1197,996f, 71,79928f, 2370,546f), Vector(0.0f, 0.0f, 0.0f), Vector(268,4048f, 93,59687f, 160,5412f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 864, &iLocal_4 + 808[3]);
	*(&iLocal_4 + 808[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin5", 2,802597E-45f, Vector(-1279,899f, 71,79928f, 2228,296f), Vector(0.0f, 75.0f, 0.0f), Vector(346,6916f, 93,59687f, 152,3171f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 864, &iLocal_4 + 808[4]);
	*(&iLocal_4 + 808[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin6", 2,802597E-45f, Vector(-1448,279f, 71,79928f, 2274,595f), Vector(0.0f, -0,4750807f, 0.0f), Vector(189,0762f, 93,59687f, 219,553f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 864, &iLocal_4 + 808[5]);
	*(&iLocal_4 + 872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrv_benedict", 4,203895E-45f, Vector(-3682.0f, 8,765f, 3472.0f), Vector(0.0f, -27,09326f, 0.0f), Vector(94,88051f, 50.0f, 125.0f));
	*(&iLocal_4 + 880) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punv_nosalida", 4,203895E-45f, Vector(-4687,928f, 2,909f, 4022,312f), Vector(0.0f, 31,92022f, 0.0f), Vector(175.0f, 50.0f, 175.0f));
	*(&iLocal_4 + 888) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punv_escalera", 4,203895E-45f, Vector(-4334,821f, 33,945f, 4372,996f), Vector(0.0f, 16,41127f, 0.0f), Vector(125.0f, 50.0f, 173,6178f));
	*(&iLocal_4 + 896) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punv_sidewinder", 4,203895E-45f, Vector(-3691.0f, 20,57f, 4673,848f), Vector(0.0f, 45.0f, 0.0f), Vector(261,6631f, 50.0f, 198,2934f));
	*(&iLocal_4 + 904) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdv_chuparosa", 4,203895E-45f, Vector(-2695,956f, 31,296f, 4260,416f), Vector(0.0f, 0.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 912) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punv_tesoro", 4,203895E-45f, Vector(-3263.0f, 38,149f, 4546.0f), Vector(0.0f, 0.0f, 0.0f), Vector(160.0f, 50.0f, 137,8573f));
	*(&iLocal_4 + 920) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcv_casamad", 4,203895E-45f, Vector(-818,1281f, 13,051f, 3745,837f), Vector(0.0f, 0.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 928) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcv_torquemada", 4,203895E-45f, Vector(412,5369f, 35,453f, 3352,117f), Vector(0.0f, 188,8143f, 0.0f), Vector(126,4749f, 97,74591f, 180,2787f));
	*(&iLocal_4 + 936) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcv_elpresidio", 4,203895E-45f, Vector(-707,7241f, 63,247f, 3303,276f), Vector(0.0f, 0.0f, 0.0f), Vector(109,8154f, 43,92617f, 109,8154f));
	*(&iLocal_4 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtv_blackwater", 4,203895E-45f, Vector(732,721f, 78,306f, 1337,66f), Vector(0.0f, 0.0f, 0.0f), Vector(268,7039f, 100.0f, 232,677f));
	*(&iLocal_4 + 952) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talv_manzanitas", 4,203895E-45f, Vector(-439,412f, 152,371f, 1618,365f), Vector(0.0f, 147,969f, 0.0f), Vector(125.0f, 50.0f, 109,1198f));
	*(&iLocal_4 + 960) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ntalv_purc", 4,203895E-45f, Vector(-274,131f, 84,308f, 2114,746f), Vector(0.0f, 0.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 968) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtv_beecher", 4,203895E-45f, Vector(-90,10365f, 118,448f, 1382,781f), Vector(0.0f, 13,333f, 0.0f), Vector(157,6699f, 50.0f, 183,9702f));
	*(&iLocal_4 + 976) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_jorge", 4,203895E-45f, Vector(-2613,24f, 26,102f, 2858,589f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 984) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_riley", 4,203895E-45f, Vector(-2322,426f, 17,067f, 3181,13f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 992) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_donjulio", 4,203895E-45f, Vector(-1868,701f, 16.0f, 3249,414f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1000) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chov_coots", 4,203895E-45f, Vector(-1803,427f, 23,09f, 2796,09f), Vector(0.0f, 20.0f, 0.0f), Vector(125.0f, 50.0f, 175.0f));
	*(&iLocal_4 + 1008) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_hangingrock", 4,203895E-45f, Vector(-1921,839f, 28,748f, 2257,471f), Vector(0.0f, 20.0f, 0.0f), Vector(65,86879f, 110,4106f, 65,86879f));
	*(&iLocal_4 + 1016) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_rattlesnake", 4,203895E-45f, Vector(-2850,711f, 63,71f, 2191,967f), Vector(0.0f, 32,08811f, 0.0f), Vector(53,50481f, 49,44629f, 39,655f));
	*(&iLocal_4 + 1024) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_hamlins", 4,203895E-45f, Vector(-3429,002f, 23,968f, 2496,709f), Vector(0.0f, 162,611f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1032) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_cueva", 4,203895E-45f, Vector(-4335,932f, 25,984f, 2756,106f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1040) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_cueva_MP", 4,203895E-45f, Vector(-4320,846f, 25,984f, 2739,974f), Vector(0.0f, 20.0f, 0.0f), Vector(150.0f, 150.0f, 150.0f));
	*(&iLocal_4 + 1048) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_scratching", 4,203895E-45f, Vector(-4313,584f, 5,097f, 3743,516f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1056) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_scratching_MP", 4,203895E-45f, Vector(-4313,584f, 5,097f, 3743,516f), Vector(0.0f, 20.0f, 0.0f), Vector(150.0f, 50.0f, 150.0f));
	*(&iLocal_4 + 1064) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "geof_coronado", 4,203895E-45f, Vector(-4914,604f, 85,823f, 2862,304f), Vector(0.0f, 0.0f, 0.0f), Vector(407,5577f, 50.0f, 1178,424f));
	*(&iLocal_4 + 1072) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "riop_repentance", 4,203895E-45f, Vector(-3152,253f, 53,349f, 3312,079f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1080) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "riop_frontera", 4,203895E-45f, Vector(-3533,55f, 9,718f, 4177,727f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1088) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_ramita", 4,203895E-45f, Vector(-2357,972f, 13,942f, 3996,78f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1096) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_greenhollow", 4,203895E-45f, Vector(-1235,523f, 22,219f, 3208,881f), Vector(0.0f, 280,821f, 0.0f), Vector(75.0f, 200.0f, 75.0f));
	*(&iLocal_4 + 1104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_brittlebrush", 4,203895E-45f, Vector(-493,7191f, 20,081f, 3021,845f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 200.0f, 75.0f));
	*(&iLocal_4 + 1112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_manteca", 4,203895E-45f, Vector(29,748f, 94,712f, 2737,473f), Vector(0.0f, 217,1f, 0.0f), Vector(75.0f, 200.0f, 75.0f));
	*(&iLocal_4 + 1120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_bacchus", 4,203895E-45f, Vector(121,9778f, 72,423f, 2676,006f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 200.0f, 75.0f));
	*(&iLocal_4 + 1128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcp_madera", 4,203895E-45f, Vector(-1324,474f, 77,302f, 3635,33f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcp_madera_MP", 4,203895E-45f, Vector(-1291,597f, 77,302f, 3623,148f), Vector(0.0f, 48,11329f, 0.0f), Vector(88,47202f, 50.0f, 74,38153f));
	*(&iLocal_4 + 1144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcp_cabeza", 4,203895E-45f, Vector(-628,843f, 22,086f, 4015,825f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcp_laluna", 4,203895E-45f, Vector(-644,01f, 33,693f, 3820,264f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcp_sol", 4,203895E-45f, Vector(-532,6394f, 43,793f, 3558,351f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdv_sepulcro", 4,203895E-45f, Vector(-1339,889f, 13,051f, 4306,565f), Vector(0.0f, 20.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 1176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_barranca", 4,203895E-45f, Vector(-2240,46f, 23,09f, 4451,865f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_dellobo", 4,203895E-45f, Vector(-1938,2f, 30,981f, 3466,862f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_dellobo_MP", 4,203895E-45f, Vector(-1921,624f, 30,981f, 3460,829f), Vector(0.0f, 20.0f, 0.0f), Vector(81,17854f, 50.0f, 82,7708f));
	*(&iLocal_4 + 1200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_deltoro", 4,203895E-45f, Vector(-2810,675f, 16,09f, 3996,908f), Vector(0.0f, 275,408f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_diablo", 4,203895E-45f, Vector(-2734,759f, 47,677f, 4595,501f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punp_plata", 4,203895E-45f, Vector(-3378.0f, 56.0f, 4748.0f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punp_crooked", 4,203895E-45f, Vector(-3859,845f, 7,875f, 4308,219f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punp_crooked_MP", 4,203895E-45f, Vector(-3859,845f, 7,875f, 4308,219f), Vector(0.0f, 20.0f, 0.0f), Vector(150.0f, 50.0f, 150.0f));
	*(&iLocal_4 + 1240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_mescalero", 4,203895E-45f, Vector(-1288,191f, 108,424f, 2739,145f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 200.0f, 75.0f));
	*(&iLocal_4 + 1248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_stillwater", 4,203895E-45f, Vector(-189,05f, 73,615f, 2335,81f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 200.0f, 75.0f));
	*(&iLocal_4 + 1256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_matchbook", 4,203895E-45f, Vector(-313,5471f, 132,827f, 1887,214f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtp_broken", 4,203895E-45f, Vector(149,864f, 128,655f, 1386,829f), Vector(0.0f, 71,373f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtp_broken_MP", 4,203895E-45f, Vector(173,7221f, 128,655f, 1378,211f), Vector(0.0f, 71,373f, 0.0f), Vector(103,6885f, 50.0f, 96,51997f));
	*(&iLocal_4 + 1280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtp_wreck", 4,203895E-45f, Vector(342,6059f, 71,415f, 1945,118f), Vector(0.0f, 42,9068f, 0.0f), Vector(75.0f, 50.0f, 88,21992f));
	*(&iLocal_4 + 1288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_aurora", 4,203895E-45f, Vector(-1043,265f, 184,053f, 1377,212f), Vector(0.0f, 0,543f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_tanner", 4,203895E-45f, Vector(-850,223f, 189,687f, 1590,618f), Vector(0.0f, 169,6865f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_nekoti", 4,203895E-45f, Vector(-706,0563f, 208,26f, 1129,094f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_oddfellowsrest", 4,203895E-45f, Vector(-2912.0f, 19,075f, 2694.0f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_mercerstation", 4,203895E-45f, Vector(-2829.0f, 20,079f, 3077.0f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_pleasancehouse", 4,203895E-45f, Vector(-2829,5f, 50,341f, 2416.0f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcv_elmataderotown", 4,203895E-45f, Vector(-384,5921f, 16,953f, 3944,378f), Vector(0.0f, -12,25531f, 0.0f), Vector(192,0324f, 105,4195f, 153,3512f));
	*(&iLocal_4 + 1344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_silent", 4,203895E-45f, Vector(-4015,325f, 21,468f, 2401,67f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_silent_MP", 4,203895E-45f, Vector(-4011,384f, 21,468f, 2412,499f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1384) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "talv_cochinay_set");
	*(&iLocal_4 + 1360[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grzv_cochinay1", 4,203895E-45f, Vector(-790,3881f, 209,8834f, 788,6389f), Vector(0.0f, 0.0f, 0.0f), Vector(155,4279f, 80,69572f, 126,2354f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1360[0]);
	*(&iLocal_4 + 1360[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grzv_cochinay2", 4,203895E-45f, Vector(-887,9458f, 185,5259f, 996,4893f), Vector(0.0f, -15,98936f, 0.0f), Vector(133,6408f, 130,9943f, 255,0045f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1360[1]);
	*(&iLocal_4 + 1392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talv_cochinayMP", 4,203895E-45f, Vector(-857,1129f, 209.0f, 956,5495f), Vector(0.0f, 131,3724f, 0.0f), Vector(360.0f, 200.0f, 360.0f));
	*(&iLocal_4 + 1400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talv_cochinay_z", 4,203895E-45f, Vector(-872,5234f, 209.0f, 944,145f), Vector(0.0f, 134,52f, 0.0f), Vector(95.0f, 95.0f, 95.0f));
	*(&iLocal_4 + 1408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_2crows", 4,203895E-45f, Vector(-2315,766f, 23,09f, 2992,637f), Vector(0.0f, 309,896f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1416) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_bearclaw", 4,203895E-45f, Vector(-495,718f, 144,911f, 1918,029f), Vector(0.0f, 48,557f, 0.0f), Vector(100.0f, 50.0f, 100.0f));
	*(&iLocal_4 + 1424) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "dzcp_mantecafalls", 4,203895E-45f, Vector(-68,74f, 68,267f, 2793,727f), Vector(0.0f, 169,6865f, 0.0f), Vector(75.0f, 100.0f, 75.0f));
	*(&iLocal_4 + 1432) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "riop_delloborock", 4,203895E-45f, Vector(-2002,259f, 45,176f, 3596,785f), Vector(0.0f, 169,6865f, 0.0f), Vector(75.0f, 100.0f, 75.0f));
	*(&iLocal_4 + 1440) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gtrp_benedictpass", 4,203895E-45f, Vector(-3539,92f, 9,442f, 3133,353f), Vector(0.0f, 169,6865f, 0.0f), Vector(75.0f, 100.0f, 75.0f));
	*(&iLocal_4 + 1448) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "riov_plainview", 4,203895E-45f, Vector(-3191,322f, 41,131f, 3764,382f), Vector(0.0f, 279,7464f, 0.0f), Vector(159,5616f, 75.0f, 178,7948f));
	*(&iLocal_4 + 1456) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_primero_quebrada", 4,203895E-45f, Vector(-1187,887f, 18,072f, 4976,144f), Vector(0.0f, 64,308f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_rancho_polvo", 4,203895E-45f, Vector(-1145,186f, 27,988f, 4817,662f), Vector(0.0f, 248,306f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_rancho_polvo_MP", 4,203895E-45f, Vector(-1175,964f, 27,988f, 4895,028f), Vector(0.0f, 248,306f, 0.0f), Vector(185,3346f, 60,00013f, 154,0057f));
	*(&iLocal_4 + 1480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_laguna_borrego", 4,203895E-45f, Vector(-1448,826f, 19,691f, 4909,078f), Vector(0.0f, 197,284f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_hendidura_grande", 4,203895E-45f, Vector(-1756,155f, 30,368f, 4819,781f), Vector(0.0f, 167,282f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1496) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdp_campo_mirada", 4,203895E-45f, Vector(-2149,709f, 18,074f, 4976,483f), Vector(0.0f, 20.0f, 0.0f), Vector(75.0f, 50.0f, 75.0f));
	*(&iLocal_4 + 1504) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdv_lashermanas", 4,203895E-45f, Vector(-1700,197f, 8,071f, 4227,977f), Vector(0.0f, 0.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 1512) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "prdv_agaveviejo", 4,203895E-45f, Vector(-1494,28f, 16,9f, 3896,205f), Vector(0.0f, 0.0f, 0.0f), Vector(125.0f, 50.0f, 125.0f));
	*(&iLocal_4 + 1520) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_Critchley", 4,203895E-45f, Vector(-2921,532f, 13,051f, 2940,276f), Vector(0.0f, 23,02f, 0.0f), Vector(105,945f, 50.0f, 94,39014f));
	*(&iLocal_4 + 1528) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "chop_Critchley_MP", 4,203895E-45f, Vector(-2921,532f, 13,051f, 2940,276f), Vector(0.0f, 23,02f, 0.0f), Vector(150.0f, 50.0f, 150.0f));
	*(&iLocal_4 + 1536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Chop_Venters_Place", 4,203895E-45f, Vector(-2015,928f, 42,041f, 3030,2f), Vector(0.0f, 20.0f, 0.0f), Vector(59,02263f, 67,07185f, 56,02647f));
	*(&iLocal_4 + 1544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Chop_Venters_Place_MP", 4,203895E-45f, Vector(-2015,928f, 42,041f, 3030,2f), Vector(0.0f, 20.0f, 0.0f), Vector(150.0f, 75.0f, 150.0f));
	*(&iLocal_4 + 1552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_Masons", 4,203895E-45f, Vector(-147,371f, 80,369f, 2203,543f), Vector(0.0f, 20.0f, 0.0f), Vector(45,26587f, 80,49738f, 56,03757f));
	*(&iLocal_4 + 1560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtp_Dixons", 4,203895E-45f, Vector(173,296f, 73,482f, 2082,252f), Vector(0.0f, -6,194558f, 0.0f), Vector(33,01608f, 77,15987f, 34,41447f));
	*(&iLocal_4 + 1568) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "punp_Puerto_Cuchillo", 4,203895E-45f, Vector(-3842,145f, 2,766f, 4220,753f), Vector(0.0f, -10,85164f, 0.0f), Vector(15,79383f, 27,52902f, 13,09824f));
	*(&iLocal_4 + 1576) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_Tanners_Span", 4,203895E-45f, Vector(-567,478f, 104,603f, 2082,163f), Vector(0.0f, 20.0f, 0.0f), Vector(26,72707f, 103,3651f, 13,55009f));
	*(&iLocal_4 + 1584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "talp_Montana_ford", 4,203895E-45f, Vector(-480,7349f, 71,037f, 2186,415f), Vector(0.0f, 20.0f, 0.0f), Vector(12,45525f, 71,31406f, 13,03489f));
	*(&iLocal_4 + 1592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_warthington", 4,203895E-45f, Vector(-946,211f, 103,654f, 2735,125f), Vector(0.0f, 20.0f, 0.0f), Vector(54,4305f, 103,6033f, 54,15482f));
	*(&iLocal_4 + 1600) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnp_warthington_MP", 4,203895E-45f, Vector(-946,211f, 103,654f, 2735,125f), Vector(0.0f, 20.0f, 0.0f), Vector(150.0f, 150.0f, 150.0f));
	*(&iLocal_4 + 1608) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "hgnv_pikesbasin_MP", 4,203895E-45f, Vector(-1345,505f, 111,1438f, 2314,189f), Vector(0.0f, 0.0f, 0.0f), Vector(325,8785f, 59,18049f, 278,2251f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Merchant04", 4,203895E-45f, Vector(-4331,516f, 27,71106f, 2746,448f), Vector(0.0f, 20.0f, 0.0f), Vector(21,41067f, 9,142949f, 22,89105f));
	*(&iLocal_4 + 1616) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Ranch07", 2,802597E-45f, Vector(-790,8589f, 93,863f, 2412,262f), Vector(-0,005042201f, -34,04364f, -0,3053975f), Vector(12,11379f, 5,005472f, 14,78417f));
	*(&iLocal_4 + 1624) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Ranch08", 2,802597E-45f, Vector(-845,1255f, 92,74963f, 2458,445f), Vector(0.0f, 24,12969f, 0.0f), Vector(28,4539f, 11,48647f, 44,94153f));
	*(&iLocal_4 + 1632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Marshal", 2,802597E-45f, Vector(-2091,528f, 16,57267f, 2606,137f), Vector(0.0f, 24,46099f, 0.0f), Vector(6,486022f, 5,303829f, 8,774861f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Merchant01", 4,203895E-45f, Vector(-1696,57f, 29,634f, 3066,021f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 19,21686f, 15.0f));
	*(&iLocal_4 + 1640) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Merchant05", 2,802597E-45f, Vector(-3264,162f, 17,84678f, 2728,371f), Vector(0.0f, 69,13892f, 0.0f), Vector(11,20773f, 9,987062f, 21,77856f));
	*(&iLocal_4 + 1648) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Outlaw01", 2,802597E-45f, Vector(-2163,299f, 17,25398f, 2571,01f), Vector(0.0f, 0.0f, 0.0f), Vector(6,837639f, 6,845285f, 7,475767f));
	*(&iLocal_4 + 1656) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Outlaw02", 2,802597E-45f, Vector(-3667,912f, 9,824644f, 3494,536f), Vector(1,317f, 17,73706f, -1,249027f), Vector(13,07529f, 7,034909f, 16,78192f));
	*(&iLocal_4 + 1664) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Outlaw03", 2,802597E-45f, Vector(175,5428f, 74,677f, 2222,393f), Vector(0.0f, -30,63849f, 0.0f), Vector(13,42699f, 3,225995f, 2,953852f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Grave01", 4,203895E-45f, Vector(-1802,117f, 24,427f, 2865,854f), Vector(0.0f, 13,333f, 0.0f), Vector(4,9f, 4,9f, 4,9f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Grave02", 4,203895E-45f, Vector(-1777,091f, 24,093f, 2849,859f), Vector(0.0f, 13,333f, 0.0f), Vector(16,32322f, 16,32322f, 16,32322f));
	*(&iLocal_4 + 1672) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Grave03", 2,802597E-45f, Vector(-3915,643f, 32,52577f, 2900,555f), Vector(0.0f, -36,86835f, 0.0f), Vector(12,07889f, 10.0f, 11,04155f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Fort01", 4,203895E-45f, Vector(-2744,267f, 79,1f, 3600,36f), Vector(0.0f, 20.0f, 0.0f), Vector(25.0f, 50.0f, 25.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Fort02", 4,203895E-45f, Vector(-482,8044f, 22,37143f, 3039,961f), Vector(0.0f, 20.0f, 0.0f), Vector(10,69004f, 10,69004f, 10,69004f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Gun01", 4,203895E-45f, Vector(-2699,101f, 31,28048f, 4255,511f), Vector(0.0f, 0.0f, 0.0f), Vector(60.0f, 50.0f, 45.0f));
	*(&iLocal_4 + 1680) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Gun02", 2,802597E-45f, Vector(-2690,058f, 33,08378f, 4286,954f), Vector(0.0f, -1,921356f, 0.0f), Vector(12,07097f, 3,541116f, 5,509146f));
	*(&iLocal_4 + 1688) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Gun05", 2,802597E-45f, Vector(-2698,733f, 31,217f, 4277,214f), Vector(0.0f, 0.0f, 0.0f), Vector(12,4142f, 7,487773f, 13,50782f));
	*(&iLocal_4 + 1696) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_MexGirl", 2,802597E-45f, Vector(-2147,349f, 18,239f, 4967,502f), Vector(0.0f, 0.0f, 0.0f), Vector(15,61093f, 15,61093f, 16,50205f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_MexArmy05", 4,203895E-45f, Vector(-4356,495f, 44,261f, 4342,515f), Vector(0.0f, 13,333f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_MexArmy04", 4,203895E-45f, Vector(-4354,919f, 41,964f, 4329,449f), Vector(0.0f, 24,49f, 0.0f), Vector(45.0f, 50.0f, 40.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_MexArmy03", 4,203895E-45f, Vector(-4376,89f, 38,71617f, 4362,818f), Vector(0.0f, 13,333f, 0.0f), Vector(9,644364f, 52,77525f, 10,16607f));
	*(&iLocal_4 + 1704) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_MexArmy02", 2,802597E-45f, Vector(-4379,67f, 38,7f, 4364,811f), Vector(0,8604763f, -16,92756f, 3,638983f), Vector(7,5f, 12,70456f, 11,49584f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_MexArmy01", 4,203895E-45f, Vector(-4355,753f, 45,466f, 4342,309f), Vector(0.0f, 13,333f, 0.0f), Vector(11.0f, 50.0f, 11.0f));
	*(&iLocal_4 + 1712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Rebel02", 2,802597E-45f, Vector(-2287,178f, 22,76f, 4954,236f), Vector(0.0f, -36,32032f, 0.0f), Vector(15,49476f, 24,87981f, 23,93099f));
	*(&iLocal_4 + 1720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Rebel03", 2,802597E-45f, Vector(-1466,879f, 19,23789f, 3947,904f), Vector(0.0f, 13,75014f, 0.0f), Vector(20,10171f, 15,29672f, 21,09918f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Rebel04", 4,203895E-45f, Vector(-2265,303f, 21,45937f, 4932,479f), Vector(0.0f, 41,64869f, 0.0f), Vector(60,54074f, 25.0f, 37,75085f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Rebel05", 4,203895E-45f, Vector(-4248,815f, 22,147f, 4376,133f), Vector(0.0f, 20.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Home02Son02", 4,203895E-45f, Vector(-101,336f, 117,748f, 1404,77f), Vector(0.0f, 52,19895f, 0.0f), Vector(7,5f, 10.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Home02Son01", 4,203895E-45f, Vector(-59,33513f, 121,133f, 1388,977f), Vector(0.0f, 13,333f, 0.0f), Vector(7,5f, 10.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Home02Ranch03", 4,203895E-45f, Vector(-5,259f, 130,659f, 1445,75f), Vector(0.0f, 13,333f, 0.0f), Vector(7,5f, 10.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Home02Ranch01", 4,203895E-45f, Vector(-76,984f, 116,861f, 1395,304f), Vector(0.0f, 13,333f, 0.0f), Vector(7,5f, 10.0f, 7,5f));
	*(&iLocal_4 + 1728) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Home01", 2,802597E-45f, Vector(-110,6957f, 120,997f, 1367,876f), Vector(0.0f, -33,02065f, 0.0f), Vector(22,98656f, 13,91831f, 43,69495f));
	*(&iLocal_4 + 1736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "_MeterAndHalfTest", 4,203895E-45f, Vector(-1694,394f, 29,634f, 3068,558f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&iLocal_4 + 1744) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "grtv_blackwater_z", 4,203895E-45f, Vector(732,721f, 78,306f, 1337,66f), Vector(0.0f, 0.0f, 0.0f), Vector(387,4395f, 100.0f, 265,6876f));
	*(&iLocal_4 + 1752) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Zombie02", 4,203895E-45f, Vector(-3861,369f, 7,974345f, 3667,904f), Vector(0.0f, 20.0f, 0.0f), Vector(9,936728f, 9,936728f, 9,936728f));
	*(&iLocal_4 + 1760) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "blackwater_gy_blip_vol", 4,203895E-45f, Vector(541,393f, 95,73611f, 1194,55f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&iLocal_4 + 1768) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "tumbleweed_gy_blip_vol", 4,203895E-45f, Vector(-3918,393f, 31,97537f, 2911,855f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&iLocal_4 + 1776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "sepulcro_gy_blip_vol", 4,203895E-45f, Vector(-1363,326f, 13,07964f, 4299,217f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&iLocal_4 + 1784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "coots_gy_blip_vol", 4,203895E-45f, Vector(-1772,132f, 25,73093f, 2845,038f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&iLocal_4 + 1792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "oddfellows_gy_blip_vol", 4,203895E-45f, Vector(-2905,756f, 19,24284f, 2699,376f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&iLocal_4 + 1800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "launch_Zombie03", 4,203895E-45f, Vector(-4345,656f, 50,12865f, 4330,488f), Vector(0.0f, 0.0f, 0.0f), Vector(32,84954f, 26,69517f, 29,77877f));
	*(&iLocal_4 + 1808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "blackwater_surv_blip_vol", 2,802597E-45f, Vector(694,919f, 84,878f, 1282,856f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_4 + 1816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "treasure_hunting_2", "treasure_hunting_2", Vector(-1989,681f, 32,14432f, 3617,284f), Vector(0.0f, 96,96473f, 0.0f));
	*(&iLocal_4 + 1824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "treasure_hunting_7", "treasure_hunting_7", Vector(-1529,021f, 61,63215f, 3708,159f), Vector(0.0f, 94,8173f, 0.0f));
	*(&iLocal_4 + 1832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "treasure_hunting_6", "treasure_hunting_6", Vector(-2748,208f, 54,5189f, 4654,738f), Vector(0.0f, 1,314279f, 0.0f));
	return;
}

void Function_459(int iParam0, int iParam1) //Position: 0x282C0 / 164544
{
	switch (&iParam1)
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

void Function_460() //Position: 0x2830A / 164618
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26200)
	{
		(&Global_26200[iVar014] + 56) = "";
		(&Global_26200[iVar014] + 64) = "";
		(&Global_26200[iVar014] + 72) = "";
		(&Global_26200[iVar014] + 80) = "";
		(&Global_26200[iVar014] + 88) = "";
		(&Global_26200[iVar014] + 96) = "";
		(&Global_26200[iVar014] + 104) = "";
		iVar0++;
	}
	return;
}

int Function_461() //Position: 0x28378 / 164728
{
	Function_515(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_2", 1, 0);
	Function_515(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_7", 1, 0);
	Function_515(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_6", 1, 0);
	if (Function_510(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

void Function_462() //Position: 0x28460 / 164960
{
	Global_39591[0] = Function_463("AllowedToInvestigate", 1);
	Global_39591[1] = Function_463("BumpedIntoMeJustNow", 1);
	Global_39591[2] = Function_463("CanCombatFight", 1);
	Global_39591[3] = Function_463("CanHotspotMoveTo", 0);
	Global_39591[4] = Function_463("CanHotspotUse", 0);
	Global_39591[5] = Function_463("CanInvestigateBody", 1);
	Global_39591[6] = Function_463("HasFightCapabilities", 0);
	Global_39591[7] = Function_463("ShouldInvestigateBody", 1);
	Global_39591[8] = Function_463("CanCombatTakeDownFromMount", 1);
	return;
}

int Function_463(int iParam0, int iParam1) //Position: 0x2858C / 165260
{
	int iVar0;
	
	iVar0 = AI_PREDICATE_FIND_NAMED(&iParam0, iParam1);
	if (!AI_PREDICATE_IS_VALID(&iVar0))
	{
		LOG_ERROR("GET_NAMED_PREDICATE did not find the given predicate: ");
		LOG_ERROR(&iParam0);
	}
	return &iVar0;
}

void Function_464() //Position: 0x285EC / 165356
{
	Function_506();
	Function_505();
	Function_504();
	Function_503();
	Function_502();
	Function_501();
	Function_500();
	Function_499();
	Function_498();
	Function_497();
	Function_496();
	Function_495();
	Function_494();
	Function_493();
	Function_492();
	Function_491();
	Function_490();
	Function_489();
	Function_488();
	Function_487();
	Function_486();
	Function_485();
	Function_484();
	Function_483();
	Function_482();
	Function_481();
	Function_480();
	Function_479();
	Function_478();
	Function_477();
	Function_476();
	Function_475();
	Function_474();
	Function_473();
	Function_472();
	Function_471();
	Function_470();
	Function_466();
	Function_465();
	return;
}

void Function_465() //Position: 0x28667 / 165479
{
	return;
}

void Function_466() //Position: 0x2866D / 165485
{
	Function_467(&Global_12760, &Global_15380, 0, 7, "tb/gen_brain");
	return;
}

void Function_467(struct<2>[] Param0, vector3[] vParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x2868D / 165517
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = uParam2;
	vParam1[iVar03] = iParam3;
	if (!STRINGS_ARE_EQUAL(&cParam4, ""))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/", 64);
		stradd(&cVar1, &cParam4, 64);
		*(&vParam1[iVar03] + 8) = GET_ASSET_ID(&cVar1, 1);
	}
	else
	{
		(&vParam1[iVar03] + 8) = "";
	}
	Function_469(&(Param0[iVar02]), 1);
	Function_468(&(Param0[iVar02]), 2);
	Function_469(&(Param0[iVar02]), 8);
	Function_469(&(Param0[iVar02]), 16);
}

void Function_468(var uParam0, int iParam1) //Position: 0x28732 / 165682
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_469(var uParam0, int iParam1) //Position: 0x28743 / 165699
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_470() //Position: 0x2875D / 165725
{
	Function_467(&Global_12644, &Global_15208, 0, 325, "upr/upr_Worker1.xml");
	Function_467(&Global_12644, &Global_15208, 1, 201, "upr/upr_Worker2.xml");
	Function_467(&Global_12644, &Global_15208, 2, 176, "upr/upr_Worker3.xml");
	Function_467(&Global_12644, &Global_15208, 3, 177, "upr/upr_Worker4.xml");
	Function_467(&Global_12644, &Global_15208, 4, 40, "upr/upr_Worker5.xml");
	Function_467(&Global_12644, &Global_15208, 5, 41, "upr/upr_Worker6.xml");
	Function_467(&Global_12644, &Global_15208, 6, 27, "upr/upr_Worker7.xml");
	Function_467(&Global_12644, &Global_15208, 7, 177, "upr/upr_Worker8.xml");
	Function_467(&Global_12644, &Global_15208, 8, 197, "upr/upr_Worker9.xml");
	Function_467(&Global_12644, &Global_15208, 9, 175, "upr/upr_Worker10.xml");
	Function_467(&Global_12644, &Global_15208, 10, 132, "upr/upr_Worker11.xml");
	Function_467(&Global_12644, &Global_15208, 11, 174, "upr/upr_Worker12.xml");
	Function_467(&Global_12644, &Global_15208, 12, 43, "upr/upr_Worker13.xml");
	Function_467(&Global_12644, &Global_15208, 13, 10, "upr/upr_Worker14.xml");
	Function_467(&Global_12644, &Global_15208, 14, 42, "upr/upr_Worker15.xml");
	Function_467(&Global_12644, &Global_15208, 15, 9, "upr/upr_Worker16.xml");
	Function_467(&Global_12644, &Global_15208, 16, 173, "upr/upr_Worker17.xml");
	return;
}

void Function_471() //Position: 0x289AE / 166318
{
	Function_467(&Global_12714, &Global_15312, 0, 198, "mtp/Husband_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 1, 52, "mtp/Wife_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 2, 236, "mtp/GrandPa_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 3, 86, "mtp/MTP_Br_Smith");
	Function_467(&Global_12714, &Global_15312, 4, 168, "mtp/Worker01_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 5, 198, "mtp/Worker02_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 6, 36, "mtp/Worker03_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 7, 204, "mtp/Traveler_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 8, 149, "mtp/Worker04_Br_MTP");
	Function_467(&Global_12714, &Global_15312, 9, 203, "mtp/Traveler_Br_2MTP");
	Function_467(&Global_12714, &Global_15312, 10, 166, "mtp/Worker05_Br_MTP");
	return;
}

void Function_472() //Position: 0x28B22 / 166690
{
	return;
}

void Function_473() //Position: 0x28B28 / 166696
{
	return;
}

void Function_474() //Position: 0x28B2E / 166702
{
	Function_467(&Global_12488, &Global_14976, 11, 25, "blk/blkSmith_br_BLK");
	Function_467(&Global_12488, &Global_14976, 12, 189, "blk/pastor_br_BLK");
	Function_467(&Global_12488, &Global_14976, 13, 452, "blk/fbiDir_br_BLK");
	Function_467(&Global_12488, &Global_14976, 14, 449, "blk/fbiAgent_br_BLK");
	Function_467(&Global_12488, &Global_14976, 15, 91, "blk/theatreMgr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 16, 166, "blk/theatreWkr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 17, 105, "blk/doctor_br_BLK");
	Function_467(&Global_12488, &Global_14976, 18, 82, "blk/bartender_br_BLK");
	Function_467(&Global_12488, &Global_14976, 19, 58, "blk/waitress_br_BLK");
	Function_467(&Global_12488, &Global_14976, 20, 193, "blk/trainStn_br_BLK");
	Function_467(&Global_12488, &Global_14976, 21, 192, "blk/freightStn_br_BLK");
	Function_467(&Global_12488, &Global_14976, 22, 90, "blk/photographer_br_BLK");
	Function_467(&Global_12488, &Global_14976, 23, 96, "blk/ferryWkr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 24, 219, "blk/hotelOwnr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 25, 18, "blk/bankWkr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 26, 89, "blk/bankWkr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 27, 119, "blk/genStoreMgr_br_BLK");
	Function_467(&Global_12488, &Global_14976, 31, 146, "blk/gunShop_br_BLK");
	Function_467(&Global_12488, &Global_14976, 32, 220, "blk/tailor_br_BLK");
	Function_467(&Global_12488, &Global_14976, 33, 257, "blk/blkSmith_br_BLK");
	Function_467(&Global_12488, &Global_14976, 34, 6, "blk/bjdealer_br_BLK");
	return;
}

void Function_475() //Position: 0x28E08 / 167432
{
	Function_467(&Global_12482, &Global_14968, 0, 1041, "bch/bch_dog.xml");
	return;
}

void Function_476() //Position: 0x28E2D / 167469
{
	Function_467(&Global_12422, &Global_14880, 1, 392, "emt/MexGuard1");
	Function_467(&Global_12422, &Global_14880, 2, 396, "emt/MexGuard2");
	Function_467(&Global_12422, &Global_14880, 3, 393, "emt/MexGuard3");
	Function_467(&Global_12422, &Global_14880, 4, 391, "emt/MexGuard4");
	Function_467(&Global_12422, &Global_14880, 0, 395, "emt/emt_Lead.xml");
	Function_467(&Global_12422, &Global_14880, 5, 9, "emt/emt_Wrk1.xml");
	Function_467(&Global_12422, &Global_14880, 6, 10, "emt/emt_Wrk2.xml");
	Function_467(&Global_12422, &Global_14880, 7, 17, "emt/emt_Wrk3.xml");
	Function_467(&Global_12422, &Global_14880, 8, 11, "emt/emt_Wrk4.xml");
	Function_467(&Global_12422, &Global_14880, 9, 13, "emt/emt_Wrk5.xml");
	Function_467(&Global_12422, &Global_14880, 10, 14, "emt/emt_Wrk6.xml");
	Function_467(&Global_12422, &Global_14880, 11, 15, "emt/emt_Wrk7.xml");
	return;
}

void Function_477() //Position: 0x28FA0 / 167840
{
	Function_467(&Global_12392, &Global_14836, 0, 393, "tor/officer_Br_TOR");
	Function_467(&Global_12392, &Global_14836, 1, 379, "tor/sentry_early_Br_TOR");
	Function_467(&Global_12392, &Global_14836, 2, 380, "tor/sentry_late_Br_TOR");
	Function_467(&Global_12392, &Global_14836, 3, 391, "tor/tor_grunt");
	Function_467(&Global_12392, &Global_14836, 4, 393, "tor/tor_grunt1");
	Function_467(&Global_12392, &Global_14836, 5, 379, "tor/tor_grunt2");
	Function_467(&Global_12392, &Global_14836, 6, 379, "tor/tor_grunt3");
	return;
}

void Function_478() //Position: 0x2908C / 168076
{
	Function_467(&Global_12342, &Global_14762, 0, 395, "elp/elp_Gen");
	Function_467(&Global_12342, &Global_14762, 3, 391, "elp/Guard_Brain_elp");
	Function_467(&Global_12342, &Global_14762, 1, 394, "elp/elp_Major");
	Function_467(&Global_12342, &Global_14762, 2, 379, "elp/elp_Cmder");
	Function_467(&Global_12342, &Global_14762, 10, 320, "elp/elp_prisoner");
	Function_467(&Global_12342, &Global_14762, 11, 260, "elp/elp_Blacksmt");
	Function_467(&Global_12342, &Global_14762, 4, 392, "elp/Guard_Brain_elp1");
	Function_467(&Global_12342, &Global_14762, 5, 393, "elp/Guard_Brain_elp2");
	Function_467(&Global_12342, &Global_14762, 6, 396, "elp/Guard_Brain_elp3");
	Function_467(&Global_12342, &Global_14762, 7, 380, "elp/Guard_Brain_elp4");
	Function_467(&Global_12342, &Global_14762, 8, 381, "elp/Guard_Brain_elp5");
	Function_467(&Global_12342, &Global_14762, 9, 391, "elp/Guard_Brain_elp6");
	return;
}

void Function_479() //Position: 0x29226 / 168486
{
	Function_467(&Global_12284, &Global_14676, 0, 254, "cas/cas_barTend.xml");
	Function_467(&Global_12284, &Global_14676, 1, 258, "cas/cas_Blacksmth.xml");
	Function_467(&Global_12284, &Global_14676, 2, 308, "cas/cas_Train.xml");
	Function_467(&Global_12284, &Global_14676, 3, 245, "cas/cas_Whore.xml");
	Function_467(&Global_12284, &Global_14676, 4, 246, "cas/cas_Whore1.xml");
	Function_467(&Global_12284, &Global_14676, 5, 247, "cas/cas_Whore2.xml");
	Function_467(&Global_12284, &Global_14676, 6, 315, "cas/cas_Whore3.xml");
	Function_467(&Global_12284, &Global_14676, 7, 250, "cas/cas_Whore4.xml");
	Function_467(&Global_12284, &Global_14676, 8, 248, "cas/cas_Whore5.xml");
	Function_467(&Global_12284, &Global_14676, 9, 249, "cas/cas_Whore6.xml");
	Function_467(&Global_12284, &Global_14676, 10, 133, "cas/cas_Scott.xml");
	Function_467(&Global_12284, &Global_14676, 11, 280, "cas/cas_BdyGrd.xml");
	Function_467(&Global_12284, &Global_14676, 12, 281, "cas/cas_BdyGrd1.xml");
	Function_467(&Global_12284, &Global_14676, 13, 282, "cas/cas_BdyGrd2.xml");
	return;
}

void Function_480() //Position: 0x29406 / 168966
{
	Function_467(&Global_12472, &Global_14954, 0, 305, "cas/cas_Preacher");
	return;
}

void Function_481() //Position: 0x2942C / 169004
{
	Function_467(&Global_12232, &Global_14600, 0, 321, "agv/RanchOwnr");
	Function_467(&Global_12232, &Global_14600, 1, 237, "agv/LydiaBrain");
	Function_467(&Global_12232, &Global_14600, 2, 268, "agv/LeadRanchHand");
	Function_467(&Global_12232, &Global_14600, 3, 286, "agv/WorkRanchHand");
	Function_467(&Global_12232, &Global_14600, 4, 287, "agv/WorkRanchHand1");
	Function_467(&Global_12232, &Global_14600, 5, 288, "agv/RanchHand");
	Function_467(&Global_12232, &Global_14600, 6, 289, "agv/RanchHand1");
	Function_467(&Global_12232, &Global_14600, 7, 290, "agv/BlcksmthHand");
	Function_467(&Global_12232, &Global_14600, 8, 529, "agv/BodyGrdBrain");
	Function_467(&Global_12232, &Global_14600, 9, 530, "agv/BodyGrdBrain1");
	return;
}

void Function_482() //Position: 0x2956E / 169326
{
	Function_467(&Global_12150, &Global_14478, 0, 613, "lsh/lsh_Head_nun");
	Function_467(&Global_12150, &Global_14478, 1, 294, "lsh/lsh_LeadWrk");
	Function_467(&Global_12150, &Global_14478, 2, 260, "lsh/lsh_blksmth");
	Function_467(&Global_12150, &Global_14478, 4, 295, "lsh/lsh_GenWrk");
	Function_467(&Global_12150, &Global_14478, 5, 296, "lsh/lsh_GenWrk1");
	Function_467(&Global_12150, &Global_14478, 6, 297, "lsh/lsh_GenWrk2");
	Function_467(&Global_12150, &Global_14478, 7, 298, "lsh/lsh_GenWrk3");
	Function_467(&Global_12150, &Global_14478, 8, 309, "lsh/lsh_RailWrk");
	Function_467(&Global_12150, &Global_14478, 9, 62, "lsh/lsh_Nun");
	Function_467(&Global_12150, &Global_14478, 10, 242, "lsh/lsh_Nun1");
	Function_467(&Global_12150, &Global_14478, 11, 62, "lsh/lsh_Nun2");
	Function_467(&Global_12150, &Global_14478, 12, 243, "lsh/lsh_Nun3");
	Function_467(&Global_12150, &Global_14478, 13, 62, "lsh/lsh_Nun4");
	Function_467(&Global_12150, &Global_14478, 14, 61, "lsh/lsh_Nun5");
	Function_467(&Global_12150, &Global_14478, 15, 63, "lsh/lsh_WrkNun");
	Function_467(&Global_12150, &Global_14478, 16, 62, "lsh/lsh_WrkNun1");
	Function_467(&Global_12150, &Global_14478, 17, 243, "lsh/lsh_WrkNun2");
	Function_467(&Global_12150, &Global_14478, 18, 242, "lsh/lsh_WrkNun3");
	Function_467(&Global_12150, &Global_14478, 19, 244, "lsh/lsh_WrkNun4");
	return;
}

void Function_483() //Position: 0x297A3 / 169891
{
	Function_467(&Global_12048, &Global_14326, 0, 255, "chu/Bartender_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 1, 259, "chu/CHU_Br_Smith");
	Function_467(&Global_12048, &Global_14326, 2, 239, "chu/Maid_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 3, 273, "chu/Merchant_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 4, 264, "chu/Old_Woman_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 5, 247, "chu/Waitress_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 6, 300, "chu/Musician_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 7, 307, "chu/TrainStation_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 8, 267, "chu/Doctor_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 9, 290, "chu/NewsPaper_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 10, 460, "chu/Deputy_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 12, 268, "chu/MerchGrain_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 13, 237, "chu/MerchCorn_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 14, 283, "chu/MerchAxe_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 15, 290, "chu/MerchMeat_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 16, 276, "chu/MerchGen01_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 17, 238, "chu/MerchGen02_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 19, 269, "chu/MerchGen04_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 21, 294, "chu/MerchCrate_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 22, 245, "chu/Whore01_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 23, 246, "chu/Whore01_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 24, 250, "chu/Whore01_Br_CHU");
	Function_467(&Global_12048, &Global_14326, 11, 265, "chu/BlackJack_Br_CHU");
	return;
}

void Function_484() //Position: 0x29AD6 / 170710
{
	return;
}

void Function_485() //Position: 0x29ADC / 170716
{
	Function_467(&Global_11988, &Global_14238, 0, 411, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 1, 410, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 2, 414, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 3, 408, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 4, 409, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 5, 413, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 6, 406, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 7, 407, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 8, 413, "actionarea/AA_Brain");
	Function_467(&Global_11988, &Global_14238, 9, 410, "actionarea/AA_Brain");
	return;
}

void Function_486() //Position: 0x29C42 / 171074
{
	Function_467(&Global_11946, &Global_14176, 0, 516, "actionarea/AA_Brain");
	Function_467(&Global_11946, &Global_14176, 1, 517, "actionarea/AA_Brain");
	Function_467(&Global_11946, &Global_14176, 3, 522, "actionarea/AA_Brain");
	Function_467(&Global_11946, &Global_14176, 5, 530, "actionarea/AA_Brain");
	Function_467(&Global_11946, &Global_14176, 6, 521, "actionarea/AA_Brain");
	Function_467(&Global_11946, &Global_14176, 7, 531, "actionarea/AA_Brain");
	Function_467(&Global_11946, &Global_14176, 9, 518, "actionarea/AA_Brain");
	return;
}

void Function_487() //Position: 0x29D3E / 171326
{
	Function_467(&Global_11836, &Global_14012, 0, 261, "esc/ESC_Br_Smith");
	Function_467(&Global_11836, &Global_14012, 1, 274, "esc/Merchant_br_ESC");
	Function_467(&Global_11836, &Global_14012, 2, 319, "esc/Vendor02_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 3, 275, "esc/Vendor03_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 4, 277, "esc/Vendor04_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 5, 299, "esc/StableBoy_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 6, 256, "esc/Bartender_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 7, 250, "esc/Whore01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 8, 248, "esc/Whore02_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 9, 283, "esc/Gunsmith_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 10, 266, "esc/Doctor_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 11, 313, "esc/Old_Woman_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 12, 382, "esc/Soldier01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 13, 380, "esc/Soldier02_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 14, 383, "esc/Soldier01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 15, 384, "esc/Soldier02_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 16, 392, "esc/Soldier01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 17, 379, "esc/Officer01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 18, 380, "esc/Officer01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 19, 381, "esc/Officer01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 20, 394, "esc/Officer03_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 21, 240, "esc/Maid01_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 22, 241, "esc/Maid02_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 23, 304, "esc/Musician_Br_ESC");
	Function_467(&Global_11836, &Global_14012, 24, 239, "esc/Cook_Br_ESC");
	return;
}

void Function_488() //Position: 0x2A0B4 / 172212
{
	return;
}

void Function_489() //Position: 0x2A0BA / 172218
{
	Function_467(&Global_11492, &Global_13504, 0, 194, "ben/ben_CabeOwnr");
	Function_467(&Global_11492, &Global_13504, 1, 196, "ben/ben_TrainMstr");
	Function_467(&Global_11492, &Global_13504, 2, 85, "ben/ben_Traveler_Brain");
	Function_467(&Global_11492, &Global_13504, 3, 204, "ben/ben_Traveler_Brain1");
	Function_467(&Global_11492, &Global_13504, 4, 311, "ben/ben_Traveler_Brain2");
	Function_467(&Global_11492, &Global_13504, 5, 166, "ben/ben_Traveler_Brain3");
	return;
}

void Function_490() //Position: 0x2A197 / 172439
{
	Function_467(&Global_11752, &Global_13888, 0, 496, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 1, 499, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 2, 497, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 3, 498, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 4, 500, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 5, 496, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 6, 499, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 7, 499, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 8, 500, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 9, 497, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 13, 496, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 14, 501, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 15, 497, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 10, 496, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 11, 500, "actionarea/AA_Brain");
	Function_467(&Global_11752, &Global_13888, 12, 498, "actionarea/AA_Brain");
	return;
}

void Function_491() //Position: 0x2A3D5 / 173013
{
	Function_467(&Global_11726, &Global_13850, 0, 178, "pln/pln_lead");
	Function_467(&Global_11726, &Global_13850, 1, 10, "pln/pln_worker1");
	Function_467(&Global_11726, &Global_13850, 2, 36, "pln/pln_worker2");
	Function_467(&Global_11726, &Global_13850, 3, 168, "pln/pln_worker3");
	Function_467(&Global_11726, &Global_13850, 4, 169, "pln/pln_worker4");
	Function_467(&Global_11726, &Global_13850, 5, 286, "pln/pln_worker5");
	return;
}

void Function_492() //Position: 0x2A48D / 173197
{
	return;
}

void Function_493() //Position: 0x2A493 / 173203
{
	Function_467(&Global_11704, &Global_13818, 0, 477, "actionarea/aa_brain");
	Function_467(&Global_11704, &Global_13818, 1, 478, "actionarea/aa_brain");
	Function_467(&Global_11704, &Global_13818, 2, 482, "actionarea/aa_brain");
	Function_467(&Global_11704, &Global_13818, 3, 481, "actionarea/aa_brain");
	Function_467(&Global_11704, &Global_13818, 4, 483, "actionarea/aa_brain");
	return;
}

void Function_494() //Position: 0x2A548 / 173384
{
	Function_467(&Global_11646, &Global_13732, 0, 147, "thi/gunsmith_br_THI");
	Function_467(&Global_11646, &Global_13732, 1, 83, "thi/bartender_br_THI");
	Function_467(&Global_11646, &Global_13732, 2, 26, "thi/THI_Br_Smith");
	Function_467(&Global_11646, &Global_13732, 3, 139, "tb/nightwatch_brain01");
	Function_467(&Global_11646, &Global_13732, 4, 97, "thi/Harbormaster_br_THI");
	Function_467(&Global_11646, &Global_13732, 5, 129, "thi/genstore_br_THI");
	Function_467(&Global_11646, &Global_13732, 6, 106, "thi/doctor_br_THI");
	Function_467(&Global_11646, &Global_13732, 7, 138, "thi/Butcher_Br_THI");
	Function_467(&Global_11646, &Global_13732, 8, 140, "thi/TicketShop_Br_THI");
	Function_467(&Global_11646, &Global_13732, 9, 137, "thi/dealer_br_THI");
	if (IS_PS3() || Function_455())
	{
		Function_467(&Global_11646, &Global_13732, 10, 93, "thi/TailorShopBr_THIPS3");
	}
	else
	{
		Function_467(&Global_11646, &Global_13732, 10, 93, "thi/TailorShopBr_THIXBX");
	}
	Function_467(&Global_11646, &Global_13732, 11, 163, "thi/NewsPaper_Br_THI");
	Function_467(&Global_11646, &Global_13732, 13, 60, "thi/Madam_Br_THI");
	Function_467(&Global_11646, &Global_13732, 12, 94, "thi/BlackJack_Br_THI");
	return;
}

void Function_495() //Position: 0x2A761 / 173921
{
	Function_467(&Global_11544, &Global_13580, 0, 153, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 1, 154, "hen/RanchForeman_Brain");
	Function_467(&Global_11544, &Global_13580, 2, 155, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 3, 156, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 4, 288, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 5, 33, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 6, 34, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 7, 161, "hen/FieldWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 8, 162, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 9, 107, "hen/Doctor_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 10, 164, "hen/RanchWkr_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 11, 157, "hen/Newspaper_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 12, 175, "hen/PL_JG_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 13, 160, "hen/Lazy_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 14, 85, "hen/HEN_br_Smith");
	Function_467(&Global_11544, &Global_13580, 15, 289, "hen/Nightwatch_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 16, 159, "hen/Nightwatch01_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 17, 35, "hen/NW_JG_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 18, 195, "hen/TE_JG_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 22, 127, "hen/StoreOwner_Brain");
	Function_467(&Global_11544, &Global_13580, 23, 53, "hen/Maid_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 24, 54, "hen/Maid_Br_HEN");
	Function_467(&Global_11544, &Global_13580, 21, 550, "hen/RanchForeman_Brain");
	return;
}

void Function_496() //Position: 0x2AA6E / 174702
{
	Function_467(&Global_11518, &Global_13542, 0, 174, "war/warbrain1");
	Function_467(&Global_11518, &Global_13542, 1, 215, "war/warbrain1");
	Function_467(&Global_11518, &Global_13542, 2, 48, "hgn/bac_husband");
	Function_467(&Global_11518, &Global_13542, 3, 56, "hgn/bac_wife");
	return;
}

void Function_497() //Position: 0x2AAE5 / 174821
{
	Function_467(&Global_11398, &Global_13366, 0, 486, "actionarea/AA_Brain");
	Function_467(&Global_11398, &Global_13366, 1, 487, "actionarea/AA_Brain");
	Function_467(&Global_11398, &Global_13366, 2, 489, "actionarea/AA_Brain");
	Function_467(&Global_11398, &Global_13366, 3, 490, "actionarea/AA_Brain");
	Function_467(&Global_11398, &Global_13366, 4, 493, "actionarea/AA_Brain");
	return;
}

void Function_498() //Position: 0x2AB9A / 175002
{
	Function_467(&Global_11284, &Global_13196, 0, 508, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 1, 506, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 2, 507, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 3, 505, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 4, 507, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 5, 508, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 6, 505, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 7, 510, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 8, 505, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 9, 506, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 10, 508, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 11, 510, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 12, 505, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 13, 506, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 14, 508, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 15, 509, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 16, 507, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 17, 509, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 18, 506, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 19, 505, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 20, 506, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 21, 510, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 22, 511, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 23, 506, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 24, 507, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 25, 505, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 26, 508, "actionarea/AA_Brain");
	Function_467(&Global_11284, &Global_13196, 27, 509, "actionarea/AA_Brain");
	return;
}

void Function_499() //Position: 0x2AF88 / 176008
{
	Function_467(&Global_11420, &Global_13398, 0, 400, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 1, 398, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 2, 399, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 3, 402, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 4, 401, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 5, 397, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 6, 405, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 7, 404, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 8, 404, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 9, 402, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 10, 419, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 11, 398, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 12, 399, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 13, 403, "actionarea/AA_Brain");
	Function_467(&Global_11420, &Global_13398, 14, 397, "actionarea/AA_Brain");
	return;
}

void Function_500() //Position: 0x2B1A2 / 176546
{
	Function_467(&Global_11222, &Global_13104, 0, 229, "rat/Judge.xml");
	Function_467(&Global_11222, &Global_13104, 1, 179, "rat/kid.xml");
	Function_467(&Global_11222, &Global_13104, 2, 155, "rat/kid1.xml");
	Function_467(&Global_11222, &Global_13104, 3, 152, "rat/kid2.xml");
	Function_467(&Global_11222, &Global_13104, 4, 150, "rat/kid3.xml");
	Function_467(&Global_11222, &Global_13104, 5, 142, "rat/kid4.xml");
	Function_467(&Global_11222, &Global_13104, 6, 155, "rat/kid5.xml");
	Function_467(&Global_11222, &Global_13104, 7, 142, "rat/kid6.xml");
	Function_467(&Global_11222, &Global_13104, 8, 133, "rat/kid7.xml");
	Function_467(&Global_11222, &Global_13104, 9, 178, "rat/kid8.xml");
	Function_467(&Global_11222, &Global_13104, 10, 159, "rat/kid9.xml");
	Function_467(&Global_11222, &Global_13104, 11, 158, "rat/kid10.xml");
	Function_467(&Global_11222, &Global_13104, 12, 154, "rat/kid11.xml");
	Function_467(&Global_11222, &Global_13104, 13, 143, "rat/kid12.xml");
	Function_467(&Global_11222, &Global_13104, 14, 179, "rat/bjdealer.xml");
	return;
}

void Function_501() //Position: 0x2B344 / 176964
{
	return;
}

void Function_502() //Position: 0x2B34A / 176970
{
	Function_467(&Global_11000, &Global_12776, 2, 112, "coo/Pat_Brain");
	Function_467(&Global_11000, &Global_12776, 0, 231, "coo/Dick_Brain");
	Function_467(&Global_11000, &Global_12776, 1, 111, "coo/DickJR_Brain");
	return;
}

void Function_503() //Position: 0x2B3A8 / 177064
{
	Function_467(&Global_11146, &Global_12992, 0, 234, "rwf/Lead_Br_RWF");
	Function_467(&Global_11146, &Global_12992, 1, 173, "rwf/Farmer1");
	Function_467(&Global_11146, &Global_12992, 2, 37, "rwf/JobGiver_Br_RWF");
	Function_467(&Global_11146, &Global_12992, 3, 38, "rwf/Farmer3");
	Function_467(&Global_11146, &Global_12992, 4, 175, "rwf/Farmer4");
	Function_467(&Global_11146, &Global_12992, 5, 174, "rwf/Farmer5");
	Function_467(&Global_11146, &Global_12992, 6, 39, "rwf/Farmer6");
	Function_467(&Global_11146, &Global_12992, 7, 170, "rwf/Farmer7");
	Function_467(&Global_11146, &Global_12992, 8, 171, "rwf/Farmer8");
	Function_467(&Global_11146, &Global_12992, 9, 172, "rwf/Farmer2");
	Function_467(&Global_11146, &Global_12992, 10, 55, "nrwf/Maid1");
	Function_467(&Global_11146, &Global_12992, 11, 56, "nrwf/Maid2");
	Function_467(&Global_11146, &Global_12992, 12, 51, "rwf/HouseKeep");
	return;
}

void Function_504() //Position: 0x2B50A / 177418
{
	Function_467(&Global_11120, &Global_12954, 0, 486, "tb/Lazy_Bandit_Brain");
	Function_467(&Global_11120, &Global_12954, 1, 487, "tb/Lazy_Bandit_Brain");
	Function_467(&Global_11120, &Global_12954, 2, 489, "tb/Lazy_Bandit_Brain");
	Function_467(&Global_11120, &Global_12954, 3, 493, "tb/Lazy_Bandit_Brain");
	Function_467(&Global_11120, &Global_12954, 4, 491, "tb/Lazy_Bandit_Brain");
	Function_467(&Global_11120, &Global_12954, 5, 490, "tb/Lazy_Bandit_Brain");
	return;
}

void Function_505() //Position: 0x2B5E8 / 177640
{
	Function_467(&Global_11014, &Global_12796, 0, 103, "arm/doctor_brain");
	Function_467(&Global_11014, &Global_12796, 1, 145, "arm/gunsmith_brain");
	Function_467(&Global_11014, &Global_12796, 2, 81, "arm/bartender_brain_ARM");
	Function_467(&Global_11014, &Global_12796, 3, 84, "arm/ARM_Br_Smith");
	Function_467(&Global_11014, &Global_12796, 4, 80, "arm/banker_brain");
	Function_467(&Global_11014, &Global_12796, 5, 190, "arm/preacher_brain");
	Function_467(&Global_11014, &Global_12796, 6, 428, "arm/deputy_brain");
	Function_467(&Global_11014, &Global_12796, 7, 429, "arm/deputy_brain01");
	Function_467(&Global_11014, &Global_12796, 8, 116, "arm/saloonowner_brain");
	Function_467(&Global_11014, &Global_12796, 9, 492, "arm/gangleader_brain");
	Function_467(&Global_11014, &Global_12796, 10, 488, "arm/gangmember1_brain");
	Function_467(&Global_11014, &Global_12796, 11, 209, "arm/undertaker_brain");
	Function_467(&Global_11014, &Global_12796, 12, 191, "arm/trainguy_brain");
	Function_467(&Global_11014, &Global_12796, 13, 118, "arm/genstore_brain");
	Function_467(&Global_11014, &Global_12796, 14, 114, "arm/freightguy_brain");
	Function_467(&Global_11014, &Global_12796, 15, 104, "arm/barberdentist_brain");
	Function_467(&Global_11014, &Global_12796, 16, 70, "arm/Whore_Brain_ARM");
	Function_467(&Global_11014, &Global_12796, 17, 68, "arm/Whore_Brain2_ARM");
	Function_467(&Global_11014, &Global_12796, 18, 180, "arm/pianoplayer_brain");
	Function_467(&Global_11014, &Global_12796, 19, 183, "arm/fiddleplayer_brain");
	Function_467(&Global_11014, &Global_12796, 20, 199, "arm/liveryworker_brain");
	Function_467(&Global_11014, &Global_12796, 21, 144, "arm/docholiday_brain");
	Function_467(&Global_11014, &Global_12796, 22, 165, "arm/NewsPaper_Brain");
	Function_467(&Global_11014, &Global_12796, 23, 164, "arm/TrainWorker_Brain");
	Function_467(&Global_11014, &Global_12796, 24, 47, "arm/CarryCorn_Brain");
	Function_467(&Global_11014, &Global_12796, 25, 231, "arm/ARM_old_farmer");
	return;
}

void Function_506() //Position: 0x2B971 / 178545
{
	Function_467(&Global_11200, &Global_13072, 0, 232, "cho/cri_husband");
	Function_467(&Global_11200, &Global_13072, 1, 213, "cho/cri_wife");
	Function_467(&Global_11200, &Global_13072, 2, 172, "war/warbrain1");
	return;
}

void Function_507() //Position: 0x2B9CC / 178636
{
	int iVar0;
	
	Global_93250 = CREATE_LAYOUT("Shop");
	*(&Global_93250 + 8) = CREATE_EVENT_TRAP("shopItemPurchase", 96, &Global_93250);
	EVENT_TRAP_STORE_EVENTS(&Global_93250 + 8, 1);
	*(&Global_93250 + 16) = CREATE_EVENT_TRAP("shopSellPurchase", 97, &Global_93250);
	EVENT_TRAP_STORE_EVENTS(&Global_93250 + 16, 1);
	*(&Global_93250 + 24) = CREATE_EVENT_TRAP("shopTabChanged", 98, &Global_93250);
	EVENT_TRAP_STORE_EVENTS(&Global_93250 + 24, 1);
	iVar0 = 0;
	while (iVar0 <= Global_93259)
	{
		Global_93259[iVar05] = 0.0f;
		Global_93259[iVar05].f_4 = 0;
		Global_93259[iVar05].f_8 = 0;
		(&Global_93259[iVar05] + 16) = "";
		Global_93259[iVar05].f_24 = 4294967295;
		Global_93259[iVar05].f_32 = 0;
		Global_93259[iVar05].f_36 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Global_94463)
	{
		Global_94463[iVar05] = 0.0f;
		Global_94463[iVar05].f_4 = 0;
		Global_94463[iVar05].f_8 = 0;
		(&Global_94463[iVar05] + 16) = "";
		Global_94463[iVar05].f_24 = 4294967295;
		Global_94463[iVar05].f_32 = 0;
		Global_94463[iVar05].f_36 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Global_93661)
	{
		Global_93661[iVar05] = 0.0f;
		Global_93661[iVar05].f_4 = 0;
		Global_93661[iVar05].f_8 = 0;
		(&Global_93661[iVar05] + 16) = "";
		Global_93661[iVar05].f_24 = 4294967295;
		Global_93661[iVar05].f_32 = 0;
		Global_93661[iVar05].f_36 = 0;
		iVar0++;
	}
	return;
}

void Function_508() //Position: 0x2BB92 / 179090
{
	DISABLE_GRINGO_STREAMING_CHECKS();
	ANIMAL_SPECIES_GRINGO_LOAD_ALL();
	ENABLE_GRINGO_STREAMING_CHECKS();
	return;
}

bool Function_509(bool bParam0, int iParam1) //Position: 0x2BBA1 / 179105
{
	return (bParam0 && iParam1) == 0;
}

bool Function_510(struct<2>[] Param0) //Position: 0x2BBAE / 179118
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_514();
	iVar1 = 0;
	if (!Function_7(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_513(&(Param0[iVar02]), 8);
		}
		else if (Function_512())
		{
			iVar1 = 1;
			Function_513(&(Param0[iVar02]), 8);
		}
		Function_513(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_7(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_7(&(Param0[02]), 8) || iVar1));
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
				Function_513(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_513(&(Param0[iVar02]), 2);
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
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_513(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_513(&(Param0[iVar02]), 2);
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
	Function_511();
	return 1;
}

void Function_511() //Position: 0x2BF70 / 180080
{
	if (!Function_373(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_512() //Position: 0x2BFB0 / 180144
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

void Function_513(struct<13> Param0) //Position: 0x2BFDE / 180190
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_514() //Position: 0x2BFF1 / 180209
{
	if (!Function_373(128))
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

var Function_515(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x2C033 / 180275
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_516(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_513(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_516(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x2C071 / 180337
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_513(&(Param0[iVar02]), 4);
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

void Function_517() //Position: 0x2C140 / 180544
{
	return;
}

void Function_518() //Position: 0x2C146 / 180550
{
	int iVar0;
	char* cVar1[64];
	char* cVar17[64];
	bool bVar33;
	bool bVar34;
	
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		bVar33 = false;
		bVar34 = false;
		switch (iVar0)
		{
			case 0x00000000:
				strcpy(&cVar1, "HE gives strength to the weak", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000001:
				strcpy(&cVar1, "I don't understand imnfinity", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000002:
				strcpy(&cVar1, "make hay while the sun shines", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000003:
				strcpy(&cVar1, "abundance is everywhere", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000006:
				strcpy(&cVar1, "The root of all evil, we thank you!", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000008:
				strcpy(&cVar1, "Beasts and man together", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000009:
				strcpy(&cVar1, "Now who put that there?", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000C:
				strcpy(&cVar1, "They sell souls cheap here", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000E:
				strcpy(&cVar1, "It's my constitutional right", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000F:
				strcpy(&cVar1, "I'm an American. I need guns", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000013:
				strcpy(&cVar1, "I am one of them famous fellas", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000014:
				strcpy(&cVar1, "Humility before the Lord", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000015:
				strcpy(&cVar1, "It aint pride. It's honor", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001B:
				strcpy(&cVar1, "The old ways is the best ways", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000021:
				strcpy(&cVar1, "You got yourself a fine pair of eyes", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000022:
				strcpy(&cVar1, "Oh my son, my blessed son", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001E:
				strcpy(&cVar1, "Don't you look fine and dandy", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001F:
				strcpy(&cVar1, "I love a man in uniform", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000020:
				strcpy(&cVar1, "You think you tough, mister?", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001D:
				strcpy(&cVar1, "I'm drunk as a skunk and twice as smelly", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000A:
				strcpy(&cVar1, "I wish I worked for Uncle Sam", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000019:
			case 0x00000004:
			case 0x00000007:
			case 0x0000000B:
			case 0x0000000D:
			case 0x00000010:
			case 0x00000011:
			case 0x00000012:
			case 0x00000018:
			case 0x0000001A:
			case 0x00000016:
			case 0x00000017:
			case 0x0000001C:
			case 0x00000023:
			case 0x00000024:
			case 0x00000025:
			case 0x00000026:
			case 0x00000027:
				strcpy(&cVar1, "NetCode", 64);
				straddi(&cVar1, iVar0, 64);
				strcpy(&cVar17, "AllNetCheats", 64);
				bVar33 = true;
				bVar34 = true;
				Function_519(iVar0);
				break;
			
			case 0x00000028:
			case 0x00000029:
			case 0x0000002A:
			case 0x0000002B:
				bVar33 = false;
				break;
			
			default:
				break;
		}
		if (bVar33)
		{
			if (UI_CHEAT_GET_STATE(iVar0) == 4294967295)
			{
				UI_CHEAT_SET_STATE(iVar0, 0);
			}
			if (!bVar34)
			{
				UI_CHEAT_SET_CODE(iVar0, &cVar1);
			}
			UI_CHEAT_SET_VALUE(iVar0, 0);
		}
		iVar0++;
	}
	RESET_GLOBAL_ACTOR_WEAPON_BIAS();
	HORSE_SET_INFINITE_FRESHNESS_CHEAT(0);
	FIRE_SET_GUNS_BLAZING_ACTIVE(0);
	if (Global_116927[1996].f_24 == 1)
	{
		UI_SET_HAS_CHEATED(1);
	}
	else
	{
		UI_SET_HAS_CHEATED(0);
	}
	return;
}

void Function_519(int iParam0) //Position: 0x2C7A7 / 182183
{
	if (UI_CHEAT_GET_STATE(iParam0) != 1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000019:
			Function_412(11, 19);
			break;
		
		case 0x00000004:
			Function_412(11, 20);
			break;
		
		case 0x0000000D:
			Function_412(11, 21);
			break;
		
		case 0x00000010:
			Function_412(11, 22);
			break;
		
		case 0x00000011:
			Function_412(11, 23);
			break;
		
		case 0x00000012:
			Function_412(11, 24);
			break;
		
		case 0x0000001C:
			Function_412(11, 25);
			break;
		
		case 0x00000023:
			Function_412(11, 26);
			break;
		
		case 0x00000024:
			Function_412(11, 27);
			break;
		
		case 0x00000027:
			Function_412(11, 28);
			break;
	}
	return;
}

int Function_520(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C854 / 182356
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
		Function_45(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_20(iParam0);
	if (&bParam2)
	{
		Function_9(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_521(int iParam0) //Position: 0x2CAF0 / 183024
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_522(int iParam0) //Position: 0x2CB31 / 183089
{
	return Function_324(Global_131807.f_1304, iParam0);
}

void Function_523() //Position: 0x2CB43 / 183107
{
	int iVar0;
	char* cVar1[8];
	int iVar3;
	
	Function_532();
	Function_531();
	Function_530();
	Function_529(0, 0.0f, "sn_mny", 21, 5, 1, 3, 3212836864, 0);
	Function_529(597, 0.0f, "sn_cmny", 15, 2, 1, 3, 3212836864, 0);
	Function_529(1, 0.0f, "sn_hnrr", 9, 2, 1, 0, 1000.0f, -1000.0f);
	Function_529(2, 0.0f, "sn_hnr", 20, 2, 1, 0, 3212836864, 0);
	Function_529(3, 0.0f, "sn_ntrr", 10, 2, 1, 1, 1000.0f, 0.0f);
	Function_529(4, 0.0f, "sn_ntr", 20, 2, 1, 1, 3212836864, 0);
	Function_529(5, 0.0f, "sn_gmpt", 7, 2, 1, 2, 3212836864, 0);
	Function_529(6, 0.0f, "sn_gmpd", 15, 2, 1, 2, 329.0f, 0);
	Function_529(7, 0.0f, "sn_gmtm", 23, 2, 3, 2, 3212836864, 0);
	Function_529(8, 0.0f, "sn_days", 25, 2, 1, 2, 3212836864, 0);
	Function_529(9, 0.0f, "sn_miss", 1, 2, 1, 2, 3212836864, 0);
	Function_529(10, 0.0f, "sn_misf", 1, 2, 1, 2, 3212836864, 0);
	Function_529(11, 0.0f, "sn_misr", 1, 2, 1, 2, 3212836864, 0);
	Function_529(12, 0.0f, "sn_frms", 4, 2, 1, 2, 3212836864, 0);
	Function_529(13, 0.0f, "sn_mxms", 4, 2, 1, 2, 3212836864, 0);
	Function_529(14, 0.0f, "sn_nrms", 4, 2, 1, 2, 3212836864, 0);
	Function_529(15, 0.0f, "sn_hmms", 4, 2, 1, 2, 3212836864, 0);
	Function_529(16, 0.0f, "sn_ambs", 4, 2, 1, 2, 3212836864, 0);
	Function_529(17, 0.0f, "sn_skps", 4, 2, 1, 2, 3212836864, 0);
	Function_529(473, 0.0f, "sn_regd", 14, 2, 1, 2, 0.0f, 0);
	Function_529(474, 0.0f, "sn_frgd", 14, 2, 1, 2, 0.0f, 0);
	Function_529(475, 0.0f, "sn_mrgd", 14, 2, 1, 2, 0.0f, 0);
	Function_529(476, 0.0f, "sn_nrgd", 14, 2, 1, 2, 0.0f, 0);
	Function_529(18, 0.0f, "sn_lmst", 15, 9, 1, 2, 3212836864, 0);
	Function_529(19, 0.0f, "sn_cutb", 15, 9, 1, 2, 3212836864, 0);
	Function_529(20, 0.0f, "sn_cutk", 15, 9, 1, 2, 3212836864, 0);
	Function_529(21, 0.0f, "sn_cute", 15, 9, 1, 2, 3212836864, 0);
	Function_529(22, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_529(23, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_529(24, 0.0f, "sn_mmrt", 15, 9, 1, 2, 3212836864, 0);
	Function_529(25, 0.0f, "sn_lmcn", 15, 9, 1, 2, 3212836864, 0);
	Function_529(472, TO_FLOAT(4294967295), "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_529(458, 0.0f, "sn_aacm", 0, 2, 3, 2, 3212836864, 0);
	Function_529(459, 0.0f, "sn_aatr", 13, 2, 3, 2, 3212836864, 0);
	Function_529(460, 0.0f, "sn_aasf", 13, 2, 3, 2, 3212836864, 0);
	Function_529(461, 0.0f, "sn_aatw", 13, 2, 3, 2, 3212836864, 0);
	Function_529(462, 0.0f, "sn_aapb", 13, 2, 3, 2, 3212836864, 0);
	Function_529(463, 0.0f, "sn_aagb", 13, 2, 3, 2, 3212836864, 0);
	Function_529(464, 0.0f, "sn_aafm", 13, 2, 3, 2, 3212836864, 0);
	Function_529(465, 0.0f, "sn_aata", 13, 2, 3, 2, 3212836864, 0);
	Function_529(466, 0.0f, "sn_aano", 13, 2, 3, 2, 3212836864, 0);
	Function_529(467, 0.0f, "sn_chst", 0, 9, 1, 2, 3212836864, 0);
	Function_529(468, 0.0f, "sn_hous", 3, 2, 1, 2, 3212836864, 0);
	Function_529(469, 0.0f, "sn_rwep", 3, 2, 3, 2, 3212836864, 0);
	Function_529(470, 0.0f, "sn_chea", 15, 9, 1, 2, 3212836864, 0);
	Function_529(471, 0.0f, "sn_bino", 23, 9, 1, 2, 3212836864, 0);
	Function_529(477, 0.0f, "sn_snoi", 3, 9, 1, 2, 3212836864, 0);
	Function_529(478, 0.0f, "sn_moon", 3, 9, 1, 2, 3212836864, 0);
	Function_529(479, 0.0f, "sn_chta", 3, 9, 1, 2, 3212836864, 0);
	Function_529(480, 0.0f, "sn_medi", 3, 9, 1, 2, 3212836864, 0);
	Function_529(481, 0.0f, "sn_bait", 3, 9, 1, 2, 3212836864, 0);
	Function_529(482, 0.0f, "sn_hopi", 3, 9, 1, 2, 3212836864, 0);
	Function_529(483, 0.0f, "sn_appl", 3, 9, 1, 2, 3212836864, 0);
	Function_529(484, 0.0f, "sn_pale", 3, 9, 1, 2, 3212836864, 0);
	Function_529(485, 0.0f, "sn_vitl", 3, 9, 1, 2, 3212836864, 0);
	Function_529(486, 0.0f, "sn_tonc", 3, 9, 1, 2, 3212836864, 0);
	Function_529(400, 0.0f, "sn_jobs", 0, 2, 1, 2, 3212836864, 0);
	Function_529(401, 0.0f, "sn_favj", 20, 2, 1, 2, 3212836864, 0);
	Function_529(402, 0.0f, "sn_nwj", 0, 2, 1, 2, 3212836864, 0);
	Function_529(403, 0.0f, "sn_hbj", 0, 2, 1, 2, 3212836864, 0);
	Function_529(404, 0.0f, "sn_fvjl", 20, 2, 1, 2, 3212836864, 0);
	Function_529(405, 0.0f, "sn_horb", 0, 2, 1, 2, 3212836864, 0);
	Function_529(406, 0.0f, "sn_rcmm", 3, 2, 1, 2, 3212836864, 0);
	Function_529(407, 0.0f, "sn_rcmc", 3, 2, 1, 2, 3212836864, 0);
	Function_529(408, 0.0f, "sn_btin", 3, 2, 1, 2, 3212836864, 0);
	Function_529(409, 0.0f, "sn_btcm", 3, 2, 1, 2, 3212836864, 0);
	Function_529(410, 0.0f, "sn_mini", 3, 8, 1, 2, 3212836864, 0);
	Function_529(412, 0.0f, "sn_mlap", 0, 8, 1, 2, 3212836864, 0);
	Function_529(413, 0.0f, "sn_bpwp", 21, 8, 1, 2, 3212836864, 0);
	Function_529(411, 0.0f, "sn_mwap", 21, 5, 1, 2, 3212836864, 0);
	Function_529(428, 0.0f, "sn_pwpc", 7, 8, 1, 2, 0.0f, 0.0f);
	Function_529(414, 0.0f, "sn_phc", 0, 8, 1, 2, 3212836864, 0);
	Function_529(415, 0.0f, "sn_ppai", 0, 8, 1, 2, 3212836864, 0);
	Function_529(416, 0.0f, "sn_ptp", 0, 8, 1, 2, 3212836864, 0);
	Function_529(417, 0.0f, "sn_ptok", 0, 8, 1, 2, 3212836864, 0);
	Function_529(418, 0.0f, "sn_pstr", 0, 8, 1, 2, 3212836864, 0);
	Function_529(419, 0.0f, "sn_pfh", 0, 8, 1, 2, 3212836864, 0);
	Function_529(420, 0.0f, "sn_pflu", 0, 8, 1, 2, 3212836864, 0);
	Function_529(421, 0.0f, "sn_pfok", 0, 8, 1, 2, 3212836864, 0);
	Function_529(422, 0.0f, "sn_pstf", 0, 8, 1, 2, 3212836864, 0);
	Function_529(423, 0.0f, "sn_prf", 0, 8, 1, 2, 3212836864, 0);
	Function_529(424, 0.0f, "sn_phwb", 0, 8, 1, 2, 3212836864, 0);
	Function_529(426, 0.0f, "sn_tcc", 0, 8, 1, 2, 3212836864, 0);
	Function_529(427, 0.0f, "sn_tcnc", 0, 8, 1, 2, 3212836864, 0);
	Function_529(425, 0.0f, "sn_tspp", 23, 8, 1, 2, 3212836864, 0);
	Function_529(429, 0.0f, "sn_twld", 21, 5, 1, 2, 3212836864, 0);
	Function_529(430, 0.0f, "sn_mlld", 0, 8, 1, 2, 3212836864, 0);
	Function_529(431, 0.0f, "sn_ldwz", 0, 8, 1, 2, 3212836864, 0);
	Function_529(432, 0.0f, "sn_tsld", 23, 8, 1, 2, 3212836864, 0);
	Function_529(433, 0.0f, "sn_mwah", 21, 5, 1, 2, 3212836864, 0);
	Function_529(434, 0.0f, "sn_ring", 0, 8, 1, 2, 3212836864, 0);
	Function_529(435, 0.0f, "sn_orin", 0, 8, 1, 2, 3212836864, 0);
	Function_529(436, 0.0f, "sn_tsph", 23, 8, 1, 2, 3212836864, 0);
	Function_529(437, 0.0f, "sn_mwaf", 21, 5, 1, 2, 3212836864, 0);
	Function_529(438, 0.0f, "sn_ffgl", 0, 8, 1, 2, 3212836864, 0);
	Function_529(439, 0.0f, "sn_ffws", 0, 8, 1, 2, 3212836864, 0);
	Function_529(440, 0.0f, "sn_tsff", 23, 8, 1, 2, 3212836864, 0);
	Function_529(441, 0.0f, "sn_mwaa", 21, 5, 1, 2, 3212836864, 0);
	Function_529(443, 0.0f, "sn_awl", 0, 8, 1, 2, 3212836864, 0);
	Function_529(444, 0.0f, "sn_lawm", 23, 8, 1, 2, 3212836864, 0);
	Function_529(442, 0.0f, "sn_tsaw", 23, 8, 1, 2, 3212836864, 0);
	Function_529(445, 0.0f, "sn_mwab", 21, 5, 1, 2, 3212836864, 0);
	Function_529(447, 0.0f, "sn_hlab", 0, 8, 1, 2, 3212836864, 0);
	Function_529(446, 0.0f, "sn_mwbj", 21, 8, 1, 2, 3212836864, 0);
	Function_529(448, 0.0f, "sn_bjh", 0, 8, 1, 2, 3212836864, 0);
	Function_529(449, 0.0f, "sn_drin", 0, 8, 1, 2, 3212836864, 0);
	Function_529(450, 0.0f, "sn_tmwg", 21, 5, 1, 2, 3212836864, 0);
	Function_529(451, 0.0f, "sn_duew", 0, 6, 1, 2, 3212836864, 0);
	Function_529(452, 0.0f, "sn_duec", 15, 6, 1, 2, 3212836864, 0);
	Function_529(453, 0.0f, "sn_duet", 0, 6, 1, 2, 3212836864, 0);
	Function_529(454, 0.0f, "sn_dued", 0, 6, 1, 2, 3212836864, 0);
	Function_529(455, 0.0f, "sn_dueh", 0, 6, 1, 2, 3212836864, 0);
	Function_529(26, 0.0f, "sn_kani", 1, 6, 3, 2, 3212836864, 0);
	Function_529(27, 0.0f, "sn_khum", 1, 6, 3, 2, 3212836864, 0);
	Function_529(28, 0.0f, "sn_kciv", 1, 6, 1, 2, 3212836864, 0);
	Function_529(29, 0.0f, "sn_klaw", 4, 6, 1, 2, 3212836864, 0);
	Function_529(30, 0.0f, "sn_kmar", 4, 6, 1, 2, 3212836864, 0);
	Function_529(31, 0.0f, "sn_karm", 4, 6, 1, 2, 3212836864, 0);
	Function_529(32, 0.0f, "sn_kmlw", 4, 6, 1, 2, 3212836864, 0);
	Function_529(33, 0.0f, "sn_kmxr", 4, 6, 1, 2, 3212836864, 0);
	Function_529(34, 0.0f, "sn_kcri", 1, 6, 3, 2, 3212836864, 0);
	Function_529(35, 0.0f, "sn_kcat", 4, 6, 3, 2, 3212836864, 0);
	Function_529(36, 0.0f, "sn_kdnd", 4, 6, 3, 2, 3212836864, 0);
	Function_529(37, 0.0f, "sn_ktre", 4, 6, 3, 2, 3212836864, 0);
	Function_529(38, 0.0f, "sn_kban", 4, 6, 3, 2, 3212836864, 0);
	Function_529(39, 0.0f, "sn_kreb", 4, 6, 3, 2, 3212836864, 0);
	Function_529(40, 0.0f, "sn_kdut", 4, 6, 3, 2, 3212836864, 0);
	Function_529(41, 0.0f, "sn_keh", 1, 6, 3, 2, 3212836864, 0);
	iVar0 = 50;
	Function_529(49, 0.0f, "sn_hbul", 7, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0, 0.0f, "sn_hpvo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 1, 0.0f, "sn_hpsa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 2, 0.0f, "sn_hphp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 3, 0.0f, "sn_hpms", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 4, 0.0f, "sn_hrca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 5, 0.0f, "sn_hrsc", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 6, 0.0f, "sn_hrda", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 7, 0.0f, "sn_hrlm", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 8, 0.0f, "sn_hrcr", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 9, 0.0f, "sn_hrwi", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 10, 0.0f, "sn_hrhe", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 11, 0.0f, "sn_hrev", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 12, 0.0f, "sn_hrsp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 13, 0.0f, "sn_hrbo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 14, 0.0f, "sn_hrbu", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 15, 0.0f, "sn_hsso", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 16, 0.0f, "sn_hsdb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 17, 0.0f, "sn_hspa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 18, 0.0f, "sn_hssa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 19, 0.0f, "sn_hsrb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 20, 0.0f, "sn_hsca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 31, 0.0f, "sn_hsat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 21, 0.0f, "sn_hlas", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 22, 0.0f, "sn_hknf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 23, 0.0f, "sn_hfir", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 24, 0.0f, "sn_hdyn", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 25, 0.0f, "sn_htkf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 29, 0.0f, "sn_htmk", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 26, 0.0f, "sn_hgat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 27, 0.0f, "sn_hbro", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_529(iVar0 + 28, 0.0f, "sn_hcan", 11, 6, 3, 7, 0.0f, 0.0f);
	if (Function_522(1024))
	{
		Function_529(iVar0 + 33, 0.0f, "sn_hsto", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_529(iVar0 + 34, 0.0f, "sn_hsbl", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_529(iVar0 + 35, 0.0f, "sn_hshw", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_529(iVar0 + 36, 0.0f, "sn_hszb", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_529(iVar0 + 37, 0.0f, "sn_hsbb", 11, 6, 2, 7, 0.0f, 0.0f);
	}
	iVar0 = 90;
	Function_529(89, 0.0f, "sn_sbul", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 1, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 2, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 3, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 4, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 5, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 6, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 7, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 8, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 9, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 10, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 11, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 12, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 13, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 14, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 15, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 16, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 17, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 18, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 19, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 20, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 31, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 21, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 22, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 23, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 24, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 25, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 29, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 26, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 27, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_529(iVar0 + 28, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	if (Function_522(1024))
	{
		Function_529(iVar0 + 33, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_529(iVar0 + 34, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_529(iVar0 + 35, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_529(iVar0 + 36, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_529(iVar0 + 37, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
	}
	Function_529(129, 0.0f, "sn_roal", 0, 6, 3, 2, 3212836864, 0);
	Function_529(130, 0.0f, "sn_roh", 0, 6, 3, 2, 3212836864, 0);
	Function_529(131, 0.0f, "sn_roc", 0, 6, 3, 2, 3212836864, 0);
	Function_529(132, 0.0f, "sn_row", 0, 6, 3, 2, 3212836864, 0);
	Function_529(133, 0.0f, "sn_ros", 0, 6, 3, 2, 3212836864, 0);
	Function_529(134, 0.0f, "sn_scr", 0, 6, 3, 2, 3212836864, 0);
	Function_529(135, 0.0f, "sn_sfc", 0, 6, 3, 2, 3212836864, 0);
	Function_529(136, 0.0f, "sn_sfh", 0, 6, 3, 2, 3212836864, 0);
	Function_529(137, 0.0f, "sn_sfv", 0, 6, 3, 2, 3212836864, 0);
	Function_529(138, 0.0f, "sn_akft", 0, 6, 1, 2, 3212836864, 0);
	Function_529(139, 0.0f, "sn_pkft", 0, 6, 1, 2, 3212836864, 0);
	iVar0 = 183;
	Function_529(iVar0, 0.0f, "sn_wpvo", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 1, 0.0f, "sn_wpsa", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 2, 0.0f, "sn_wphp", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 3, 0.0f, "sn_wpms", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 4, 0.0f, "sn_wrca", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 5, 0.0f, "sn_wrsc", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 6, 0.0f, "sn_wrda", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 7, 0.0f, "sn_wrlm", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 8, 0.0f, "sn_wrcr", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 9, 0.0f, "sn_wrwi", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 10, 0.0f, "sn_wrhe", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 11, 0.0f, "sn_wrev", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 12, 0.0f, "sn_wrsp", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 13, 0.0f, "sn_wrbo", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 14, 0.0f, "sn_wrbu", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 15, 0.0f, "sn_wsso", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 16, 0.0f, "sn_wsdb", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 17, 0.0f, "sn_wspa", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 18, 0.0f, "sn_wssa", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 19, 0.0f, "sn_wsrb", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 20, 0.0f, "sn_wsca", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 31, 0.0f, "sn_wsat", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 21, 0.0f, "sn_wlas", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 22, 0.0f, "sn_wknf", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 23, 0.0f, "sn_wfir", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 24, 0.0f, "sn_wdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 25, 0.0f, "sn_wtkf", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 29, 0.0f, "sn_wtmk", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 26, 0.0f, "sn_wgat", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 27, 0.0f, "sn_wbro", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 28, 0.0f, "sn_wcan", 3, 6, 3, 2, 3212836864, 0);
	if (Function_522(1024))
	{
		Function_529(iVar0 + 33, 0.0f, "sn_wsto", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 34, 0.0f, "sn_wsbl", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 35, 0.0f, "sn_wshw", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 36, 0.0f, "sn_wszb", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 37, 0.0f, "sn_wsbb", 3, 6, 2, 2, 3212836864, 0);
	}
	iVar0 = 140;
	Function_529(iVar0, 0.0f, "sn_spvo", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 1, 0.0f, "sn_spsa", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 2, 0.0f, "sn_sphp", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 3, 0.0f, "sn_spms", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 4, 0.0f, "sn_srca", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 5, 0.0f, "sn_srsc", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 6, 0.0f, "sn_srda", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 7, 0.0f, "sn_srlm", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 8, 0.0f, "sn_srcr", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 9, 0.0f, "sn_srwi", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 10, 0.0f, "sn_srhe", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 11, 0.0f, "sn_srev", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 12, 0.0f, "sn_srsp", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 13, 0.0f, "sn_srbo", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 14, 0.0f, "sn_srbu", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 15, 0.0f, "sn_ssso", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 16, 0.0f, "sn_ssdb", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 17, 0.0f, "sn_sspa", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 18, 0.0f, "sn_sssa", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 19, 0.0f, "sn_ssrb", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 20, 0.0f, "sn_ssca", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 31, 0.0f, "sn_ssat", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 21, 0.0f, "sn_slas", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 22, 0.0f, "sn_sknf", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 23, 0.0f, "sn_sfir", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 24, 0.0f, "sn_sdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 25, 0.0f, "sn_stkf", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 29, 0.0f, "sn_stmk", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 26, 0.0f, "sn_sgat", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 27, 0.0f, "sn_sbro", 3, 6, 3, 2, 3212836864, 0);
	Function_529(iVar0 + 28, 0.0f, "sn_scan", 3, 6, 3, 2, 3212836864, 0);
	if (Function_522(1024))
	{
		Function_529(iVar0 + 33, 0.0f, "sn_ssto", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 34, 0.0f, "sn_ssbl", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 35, 0.0f, "sn_sshw", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 36, 0.0f, "sn_sszb", 3, 6, 2, 2, 3212836864, 0);
		Function_529(iVar0 + 37, 0.0f, "sn_ssbb", 3, 6, 2, 2, 3212836864, 0);
	}
	Function_529(179, 0.0f, "sn_fvp", 20, 9, 3, 2, 3212836864, 0);
	Function_529(180, 0.0f, "sn_fvr", 20, 9, 3, 2, 3212836864, 0);
	Function_529(181, 0.0f, "sn_fvs", 20, 9, 3, 2, 3212836864, 0);
	Function_529(182, 0.0f, "sn_fvw", 20, 9, 3, 2, 3212836864, 0);
	Function_529(43, 0.0f, "sn_knck", 1, 6, 3, 2, 3212836864, 0);
	Function_529(42, 0.0f, "sn_hdst", 1, 6, 3, 2, 3212836864, 0);
	Function_529(44, 0.0f, "sn_xect", 1, 6, 1, 2, 3212836864, 0);
	Function_529(45, 0.0f, "sn_htst", 1, 6, 3, 2, 3212836864, 0);
	Function_529(46, 0.0f, "sn_darm", 1, 6, 3, 2, 3212836864, 0);
	Function_529(47, 0.0f, "sn_hdss", 1, 6, 3, 2, 3212836864, 0);
	Function_529(48, 0.0f, "sn_dars", 1, 6, 3, 2, 3212836864, 0);
	Function_529(222, 0.0f, "sn_bttl", 21, 3, 1, 5, 3212836864, 0);
	Function_529(223, 0.0f, "sn_btus", 21, 3, 1, 5, 3212836864, 0);
	Function_529(224, 0.0f, "sn_btmx", 21, 3, 1, 5, 3212836864, 0);
	Function_529(225, 0.0f, "sn_tijl", 25, 3, 1, 5, 3212836864, 0);
	Function_529(226, 0.0f, "sn_cvnd", 1, 3, 1, 5, 3212836864, 0);
	Function_529(227, 0.0f, "sn_cvnv", 1, 3, 1, 5, 3212836864, 0);
	Function_529(228, 0.0f, "sn_cpde", 1, 3, 1, 5, 3212836864, 0);
	Function_529(229, 0.0f, "sn_cpdv", 1, 3, 1, 5, 3212836864, 0);
	Function_529(230, 0.0f, "sn_cars", 1, 3, 3, 5, 3212836864, 0);
	Function_529(231, 0.0f, "sn_cass", 1, 3, 3, 5, 3212836864, 0);
	Function_529(232, 0.0f, "sn_casl", 1, 3, 3, 5, 3212836864, 0);
	Function_529(233, 0.0f, "sn_cash", 1, 3, 3, 5, 3212836864, 0);
	Function_529(234, 0.0f, "sn_casc", 1, 3, 3, 5, 3212836864, 0);
	Function_529(235, 0.0f, "sn_casa", 1, 3, 3, 5, 3212836864, 0);
	Function_529(236, 0.0f, "sn_cmrd", 1, 3, 3, 5, 3212836864, 0);
	Function_529(237, 0.0f, "sn_cmrl", 1, 3, 3, 5, 3212836864, 0);
	Function_529(238, 0.0f, "sn_cmrh", 1, 3, 3, 5, 3212836864, 0);
	Function_529(239, 0.0f, "sn_cmrc", 1, 3, 3, 5, 3212836864, 0);
	Function_529(240, 0.0f, "sn_cmra", 1, 3, 3, 5, 3212836864, 0);
	Function_529(241, 0.0f, "sn_cthh", 1, 3, 3, 5, 3212836864, 0);
	Function_529(242, 0.0f, "sn_cthv", 1, 3, 3, 5, 3212836864, 0);
	Function_529(243, 0.0f, "sn_ckid", 1, 3, 1, 5, 3212836864, 0);
	Function_529(244, 0.0f, "sn_ckdl", 1, 3, 1, 5, 3212836864, 0);
	Function_529(245, 0.0f, "sn_csaf", 1, 3, 1, 5, 3212836864, 0);
	Function_529(251, 0.0f, "sn_fsc", 23, 8, 1, 5, 3212836864, 0);
	Function_529(246, 0.0f, "sn_csrb", 15, 3, 1, 5, 3212836864, 0);
	Function_529(247, 0.0f, "sn_ctrs", 1, 3, 1, 5, 3212836864, 0);
	Function_529(248, 0.0f, "sn_cprb", 1, 3, 1, 5, 3212836864, 0);
	Function_529(249, 0.0f, "sn_ccht", 15, 3, 1, 5, 3212836864, 0);
	Function_529(250, 0.0f, "sn_ctht", 1, 3, 1, 5, 3212836864, 0);
	Function_529(252, 0.0f, "sn_bbo", 21, 3, 3, 5, 3212836864, 0);
	Function_529(253, 0.0f, "sn_bpd", 1, 3, 1, 5, 3212836864, 0);
	Function_529(254, 0.0f, "sn_bbop", 21, 3, 1, 5, 3212836864, 0);
	Function_529(255, 0.0f, "sn_bbrp", 21, 3, 1, 5, 3212836864, 0);
	Function_529(256, 0.0f, "sn_bboa", 21, 3, 1, 5, 3212836864, 0);
	Function_529(257, 0.0f, "sn_psen", 1, 3, 1, 5, 3212836864, 0);
	Function_529(258, 0.0f, "sn_lpls", 23, 3, 1, 5, 3212836864, 0);
	Function_529(259, 0.0f, "sn_lpm", 23, 3, 1, 5, 3212836864, 0);
	Function_529(260, 0.0f, "sn_tmw", 1, 3, 1, 5, 3212836864, 0);
	Function_529(386, 0.0f, "sn_mwmp", 1, 3, 2, 5, 3212836864, 0);
	Function_529(261, 0.0f, "sn_cpm", 1, 3, 1, 5, 3212836864, 0);
	Function_529(262, 0.0f, "sn_kdns", 1, 3, 1, 5, 3212836864, 0);
	Function_529(273, 0.0f, "sn_h_tv", 21, 7, 3, 2, 3212836864, 0);
	Function_529(348, 0.0f, "sn_mlbs", 1, 7, 1, 2, 3212836864, 0);
	Function_528(492, 265, 0.0f, "sn_h_bw", "sd_h_bw", "sn_h_bw", "sl_h_bw", 7, 3);
	Function_528(491, 264, 0.0f, "sn_h_ds", "sd_h_ds", "sn_h_ds", "sl_h_ds", 7, 3);
	Function_528(494, 267, 0.0f, "sn_h_gc", "sd_h_gc", "sn_h_gc", "sl_h_gc", 7, 3);
	Function_528(496, 269, 0.0f, "sn_h_hs", "sd_h_hs", "sn_h_hs", "sl_h_hs", 7, 3);
	Function_528(493, 266, 0.0f, "sn_h_po", "sd_h_pp", "sn_h_po", "sl_h_pp", 7, 3);
	Function_528(490, 263, 0.0f, "sn_h_pp", "sd_h_pp", "sn_h_pp", "sl_h_pp", 7, 3);
	Function_528(498, 271, 0.0f, "sn_h_rs", "sd_h_rs", "sn_h_rs", "sl_h_rs", 7, 3);
	Function_528(497, 270, 0.0f, "sn_h_vs", "sd_h_vs", "sn_h_vs", "sl_h_vs", 7, 3);
	Function_528(495, 268, 0.0f, "sn_h_wo", "sd_h_wo", "sn_h_wo", "sl_h_wo", 7, 3);
	Function_528(499, 272, 0.0f, "sn_h_wf", "sd_h_wf", "sn_h_wf", "sl_h_wf", 7, 3);
	Function_529(274, 0.0f, "sn_skar", 4, 7, 1, 4, 3212836864, 0);
	Function_529(275, 0.0f, "sn_skbw", 4, 7, 1, 4, 3212836864, 0);
	Function_529(276, 0.0f, "sn_skbe", 4, 7, 1, 4, 3212836864, 0);
	Function_529(277, 0.0f, "sn_skbv", 4, 7, 1, 4, 3212836864, 0);
	Function_529(278, 0.0f, "sn_skbi", 4, 7, 1, 4, 3212836864, 0);
	Function_529(279, 0.0f, "sn_skbo", 4, 7, 1, 4, 3212836864, 0);
	Function_529(280, 0.0f, "sn_skbb", 4, 7, 1, 4, 3212836864, 0);
	Function_529(281, 0.0f, "sn_skbk", 4, 7, 1, 4, 3212836864, 0);
	Function_529(282, 0.0f, "sn_skbu", 4, 7, 1, 4, 3212836864, 0);
	Function_529(283, 0.0f, "sn_skch", 4, 7, 1, 4, 3212836864, 0);
	Function_529(284, 0.0f, "sn_skco", 4, 7, 1, 4, 3212836864, 0);
	Function_529(286, 0.0f, "sn_skcy", 4, 7, 1, 4, 3212836864, 0);
	Function_529(285, 0.0f, "sn_skcw", 4, 7, 1, 4, 3212836864, 0);
	Function_529(287, 0.0f, "sn_skcr", 4, 7, 1, 4, 3212836864, 0);
	Function_529(288, 0.0f, "sn_skde", 4, 7, 1, 4, 3212836864, 0);
	Function_529(289, 0.0f, "sn_skdo", 4, 7, 1, 4, 3212836864, 0);
	Function_529(290, 0.0f, "sn_skdu", 4, 7, 1, 4, 3212836864, 0);
	Function_529(291, 0.0f, "sn_skea", 4, 7, 1, 4, 3212836864, 0);
	Function_529(292, 0.0f, "sn_skel", 4, 7, 1, 4, 3212836864, 0);
	Function_529(293, 0.0f, "sn_skfo", 4, 7, 1, 4, 3212836864, 0);
	Function_529(299, 0.0f, "sn_skxr", 15, 7, 1, 4, 3212836864, 0);
	Function_529(301, 0.0f, "sn_skxb", 15, 7, 1, 4, 3212836864, 0);
	Function_529(300, 0.0f, "sn_skxc", 15, 7, 1, 4, 3212836864, 0);
	Function_529(298, 0.0f, "sn_skxw", 15, 7, 1, 4, 3212836864, 0);
	Function_529(294, 0.0f, "sn_skgo", 4, 7, 1, 4, 3212836864, 0);
	Function_529(296, 0.0f, "sn_skha", 4, 7, 1, 4, 3212836864, 0);
	Function_529(312, 0.0f, "sn_skho", 4, 7, 1, 4, 3212836864, 0);
	Function_529(297, 0.0f, "sn_skmu", 4, 7, 1, 4, 3212836864, 0);
	Function_529(302, 0.0f, "sn_skow", 4, 7, 1, 4, 3212836864, 0);
	Function_529(303, 0.0f, "sn_skpi", 4, 7, 1, 4, 3212836864, 0);
	Function_529(304, 0.0f, "sn_skrb", 4, 7, 1, 4, 3212836864, 0);
	Function_529(305, 0.0f, "sn_skra", 4, 7, 1, 4, 3212836864, 0);
	Function_529(295, 0.0f, "sn_skgu", 4, 7, 1, 4, 3212836864, 0);
	Function_529(306, 0.0f, "sn_sksh", 4, 7, 1, 4, 3212836864, 0);
	Function_529(307, 0.0f, "sn_sksk", 4, 7, 1, 4, 3212836864, 0);
	Function_529(308, 0.0f, "sn_sksn", 4, 7, 1, 4, 3212836864, 0);
	Function_529(309, 0.0f, "sn_skso", 4, 7, 1, 4, 3212836864, 0);
	Function_529(310, 0.0f, "sn_skv", 4, 7, 1, 4, 3212836864, 0);
	Function_529(311, 0.0f, "sn_skw", 4, 7, 1, 4, 3212836864, 0);
	Function_529(598, 0.0f, "sn_skjk", 4, 7, 1, 4, 3212836864, 0);
	Function_529(313, 0.0f, "sn_kiar", 4, 9, 3, 2, 3212836864, 0);
	Function_529(314, 0.0f, "sn_kibw", 4, 9, 3, 2, 3212836864, 0);
	Function_529(315, 0.0f, "sn_kibe", 4, 9, 3, 2, 3212836864, 0);
	Function_529(316, 0.0f, "sn_kibv", 4, 9, 3, 2, 3212836864, 0);
	Function_529(317, 0.0f, "sn_kibi", 4, 9, 3, 2, 3212836864, 0);
	Function_529(318, 0.0f, "sn_kibo", 4, 9, 3, 2, 3212836864, 0);
	Function_529(319, 0.0f, "sn_kibb", 4, 9, 3, 2, 3212836864, 0);
	Function_529(320, 0.0f, "sn_kibu", 4, 9, 3, 2, 3212836864, 0);
	Function_529(321, 0.0f, "sn_kich", 4, 9, 3, 2, 3212836864, 0);
	Function_529(322, 0.0f, "sn_kico", 4, 9, 3, 2, 3212836864, 0);
	Function_529(323, 0.0f, "sn_kicw", 4, 9, 3, 2, 3212836864, 0);
	Function_529(324, 0.0f, "sn_kicy", 4, 9, 3, 2, 3212836864, 0);
	Function_529(325, 0.0f, "sn_kicr", 4, 9, 3, 2, 3212836864, 0);
	Function_529(326, 0.0f, "sn_kide", 4, 9, 3, 2, 3212836864, 0);
	Function_529(327, 0.0f, "sn_kido", 4, 9, 3, 2, 3212836864, 0);
	Function_529(328, 0.0f, "sn_kidu", 4, 9, 3, 2, 3212836864, 0);
	Function_529(329, 0.0f, "sn_kiea", 4, 9, 3, 2, 3212836864, 0);
	Function_529(330, 0.0f, "sn_kiel", 4, 9, 3, 2, 3212836864, 0);
	Function_529(331, 0.0f, "sn_kifo", 4, 9, 3, 2, 3212836864, 0);
	Function_529(332, 0.0f, "sn_kigo", 4, 9, 3, 2, 3212836864, 0);
	Function_529(333, 0.0f, "sn_kiha", 4, 9, 3, 2, 3212836864, 0);
	Function_529(334, 0.0f, "sn_kiho", 4, 9, 3, 2, 3212836864, 0);
	Function_529(335, 0.0f, "sn_kiwh", 4, 9, 3, 2, 3212836864, 0);
	Function_529(336, 0.0f, "sn_kimu", 4, 9, 3, 2, 3212836864, 0);
	Function_529(337, 0.0f, "sn_kiow", 4, 9, 3, 2, 3212836864, 0);
	Function_529(338, 0.0f, "sn_kipi", 4, 9, 3, 2, 3212836864, 0);
	Function_529(339, 0.0f, "sn_kirb", 4, 9, 3, 2, 3212836864, 0);
	Function_529(340, 0.0f, "sn_kira", 4, 9, 3, 2, 3212836864, 0);
	Function_529(341, 0.0f, "sn_kise", 4, 9, 3, 2, 3212836864, 0);
	Function_529(342, 0.0f, "sn_kish", 4, 9, 3, 2, 3212836864, 0);
	Function_529(343, 0.0f, "sn_kisk", 4, 9, 3, 2, 3212836864, 0);
	Function_529(344, 0.0f, "sn_kisn", 4, 9, 3, 2, 3212836864, 0);
	Function_529(345, 0.0f, "sn_kiso", 4, 9, 3, 2, 3212836864, 0);
	Function_529(346, 0.0f, "sn_kiv", 4, 9, 3, 2, 3212836864, 0);
	Function_529(347, 0.0f, "sn_kiw", 4, 9, 3, 2, 3212836864, 0);
	Function_529(349, 0.0f, "sn_sca1", 4, 9, 3, 2, 3212836864, 0);
	Function_529(350, 0.0f, "sn_sca2", 4, 9, 3, 2, 3212836864, 0);
	Function_529(351, 0.0f, "sn_sca3", 4, 9, 3, 2, 3212836864, 0);
	Function_529(352, 0.0f, "sn_sca4", 4, 9, 3, 2, 3212836864, 0);
	Function_529(353, 0.0f, "sn_sca5", 4, 9, 3, 2, 3212836864, 0);
	Function_529(354, 0.0f, "sn_spek", 1, 9, 3, 2, 3212836864, 0);
	Function_528(500, 274, 0.0f, "sn_a1_m", "sd_sold", "", "", 9, 1);
	Function_528(501, 4294967295, 0.0f, "sn_a1_c", "sd_sold", "", "", 9, 1);
	Function_528(502, 275, 0.0f, "sn_b1_w", "sd_sold", "", "", 9, 1);
	Function_528(503, 276, 0.0f, "sn_b2_m", "sd_sold", "", "", 9, 1);
	Function_528(505, 4294967295, 0.0f, "sn_b2_c", "sd_sold", "", "", 9, 1);
	Function_528(504, 4294967295, 0.0f, "sn_b2_f", "sd_sold", "", "", 9, 1);
	Function_528(506, 4294967295, 0.0f, "sn_b2_t", "sd_sold", "", "", 9, 1);
	Function_528(507, 277, 0.0f, "sn_b3_m", "sd_sold", "", "", 9, 1);
	Function_528(508, 4294967295, 0.0f, "sn_b3_f", "sd_sold", "", "", 9, 1);
	Function_528(509, 278, 0.0f, "sn_b4_m", "sd_sold", "", "", 9, 1);
	Function_528(511, 4294967295, 0.0f, "sn_b4_h", "sd_sold", "", "", 9, 1);
	Function_528(510, 4294967295, 0.0f, "sn_b4_s", "sd_sold", "", "", 9, 1);
	Function_528(512, 279, 0.0f, "sn_b5_m", "sd_sold", "", "", 9, 1);
	Function_528(513, 4294967295, 0.0f, "sn_b5_s", "sd_sold", "", "", 9, 1);
	Function_528(514, 4294967295, 0.0f, "sn_b5_t", "sd_sold", "", "", 9, 1);
	Function_528(515, 280, 0.0f, "sn_b6_m", "sd_sold", "", "", 9, 1);
	Function_528(517, 4294967295, 0.0f, "sn_b6_c", "sd_sold", "", "", 9, 1);
	Function_528(516, 4294967295, 0.0f, "sn_b6_f", "sd_sold", "", "", 9, 1);
	Function_528(518, 281, 0.0f, "sn_b7_m", "sd_sold", "", "", 9, 1);
	Function_528(520, 4294967295, 0.0f, "sn_b7_a", "sd_sold", "", "", 9, 1);
	Function_528(519, 4294967295, 0.0f, "sn_b7_s", "sd_sold", "", "", 9, 1);
	Function_528(521, 282, 0.0f, "sn_b8_m", "sd_sold", "", "", 9, 1);
	Function_528(523, 4294967295, 0.0f, "sn_b8_h", "sd_sold", "", "", 9, 1);
	Function_528(522, 4294967295, 0.0f, "sn_b8_s", "sd_sold", "", "", 9, 1);
	Function_528(524, 283, 0.0f, "sn_c1_f", "sd_sold", "", "", 9, 1);
	Function_528(529, 285, 0.0f, "sn_c5_m", "sd_sold", "", "", 9, 1);
	Function_528(530, 4294967295, 0.0f, "sn_c5_h", "sd_sold", "", "", 9, 1);
	Function_528(525, 284, 0.0f, "sn_c2_m", "sd_sold", "", "", 9, 1);
	Function_528(527, 4294967295, 0.0f, "sn_c2_c", "sd_sold", "", "", 9, 1);
	Function_528(528, 4294967295, 0.0f, "sn_c2_f", "sd_sold", "", "", 9, 1);
	Function_528(526, 4294967295, 0.0f, "sn_c2_p", "sd_sold", "", "", 9, 1);
	Function_528(531, 286, 0.0f, "sn_c3_m", "sd_sold", "", "", 9, 1);
	Function_528(532, 4294967295, 0.0f, "sn_c3_p", "sd_sold", "", "", 9, 1);
	Function_528(533, 287, 0.0f, "sn_c4_f", "sd_sold", "", "", 9, 1);
	Function_528(534, 288, 0.0f, "sn_d1_m", "sd_sold", "", "", 9, 1);
	Function_528(535, 4294967295, 0.0f, "sn_d1_s", "sd_sold", "", "", 9, 1);
	Function_528(536, 289, 0.0f, "sn_d3_m", "sd_sold", "", "", 9, 1);
	Function_528(537, 4294967295, 0.0f, "sn_d3_f", "sd_sold", "", "", 9, 1);
	Function_528(538, 290, 0.0f, "sn_d2_f", "sd_sold", "", "", 9, 1);
	Function_528(539, 291, 0.0f, "sn_e1_f", "sd_sold", "", "", 9, 1);
	Function_528(540, 292, 0.0f, "sn_e2_m", "sd_sold", "", "", 9, 1);
	Function_528(542, 4294967295, 0.0f, "sn_e2_a", "sd_sold", "", "", 9, 1);
	Function_528(541, 4294967295, 0.0f, "sn_e2_s", "sd_sold", "", "", 9, 1);
	Function_528(543, 293, 0.0f, "sn_f1_m", "sd_sold", "", "", 9, 1);
	Function_528(544, 4294967295, 0.0f, "sn_f1_f", "sd_sold", "", "", 9, 1);
	Function_528(545, 294, 0.0f, "sn_g1_m", "sd_sold", "", "", 9, 1);
	Function_528(546, 276, 0.0f, "sn_g2_m", "sd_sold", "", "", 9, 1);
	Function_528(548, 4294967295, 0.0f, "sn_g2_c", "sd_sold", "", "", 9, 1);
	Function_528(549, 4294967295, 0.0f, "sn_g2_t", "sd_sold", "", "", 9, 1);
	Function_528(547, 4294967295, 0.0f, "sn_g2_f", "sd_sold", "", "", 9, 1);
	Function_528(550, 4294967295, 0.0f, "sn_g2_h", "sd_sold", "", "", 9, 1);
	Function_528(551, 295, 0.0f, "sn_g3_f", "sd_sold", "", "", 9, 1);
	Function_528(552, 296, 0.0f, "sn_h1_f", "sd_sold", "", "", 9, 1);
	Function_528(553, 297, 0.0f, "sn_m1_h", "sd_sold", "", "", 9, 1);
	Function_528(596, 4294967295, 0.0f, "sn_m1_m", "sd_sold", "", "", 9, 1);
	Function_528(554, 298, 0.0f, "sn_xw_m", "sd_sold", "", "", 9, 1);
	Function_528(556, 311, 0.0f, "sn_xw_h", "sd_sold", "", "", 9, 1);
	Function_528(555, 4294967295, 0.0f, "sn_xw_f", "sd_sold", "", "", 9, 1);
	Function_528(557, 299, 0.0f, "sn_xb_m", "sd_sold", "", "", 9, 1);
	Function_528(561, 4294967295, 0.0f, "sn_xb_t", "sd_sold", "", "", 9, 1);
	Function_528(560, 4294967295, 0.0f, "sn_xb_c", "sd_sold", "", "", 9, 1);
	Function_528(559, 4294967295, 0.0f, "sn_xb_h", "sd_sold", "", "", 9, 1);
	Function_528(558, 276, 0.0f, "sn_xb_f", "sd_sold", "", "", 9, 1);
	Function_528(562, 300, 0.0f, "sn_xc_m", "sd_sold", "", "", 9, 1);
	Function_528(563, 284, 0.0f, "sn_xc_p", "sd_sold", "", "", 9, 1);
	Function_528(565, 4294967295, 0.0f, "sn_xc_f", "sd_sold", "", "", 9, 1);
	Function_528(564, 4294967295, 0.0f, "sn_xc_h", "sd_sold", "", "", 9, 1);
	Function_528(566, 301, 0.0f, "sn_nb_m", "sd_sold", "", "", 9, 1);
	Function_528(569, 279, 0.0f, "sn_nb_t", "sd_sold", "", "", 9, 1);
	Function_528(567, 4294967295, 0.0f, "sn_nb_s", "sd_sold", "", "", 9, 1);
	Function_528(568, 4294967295, 0.0f, "sn_nb_h", "sd_sold", "", "", 9, 1);
	Function_528(570, 302, 0.0f, "sn_o1_f", "sd_sold", "", "", 9, 1);
	Function_528(571, 303, 0.0f, "sn_p1_m", "sd_sold", "", "", 9, 1);
	Function_528(572, 304, 0.0f, "sn_r1_m", "sd_sold", "", "", 9, 1);
	Function_528(573, 305, 0.0f, "sn_r2_m", "sd_sold", "", "", 9, 1);
	Function_528(574, 4294967295, 0.0f, "sn_r2_f", "sd_sold", "", "", 9, 1);
	Function_528(575, 306, 0.0f, "sn_s1_m", "sd_sold", "", "", 9, 1);
	Function_528(576, 4294967295, 0.0f, "sn_s1_s", "sd_sold", "", "", 9, 1);
	Function_528(577, 307, 0.0f, "sn_s2_m", "sd_sold", "", "", 9, 1);
	Function_528(578, 4294967295, 0.0f, "sn_s2_f", "sd_sold", "", "", 9, 1);
	Function_528(579, 308, 0.0f, "sn_s3_s", "sd_sold", "", "", 9, 1);
	Function_528(582, 309, 0.0f, "sn_sb_f", "sd_sold", "", "", 9, 1);
	Function_528(583, 310, 0.0f, "sn_v_f", "sd_sold", "", "", 9, 1);
	Function_528(584, 311, 0.0f, "sn_w1_m", "sd_sold", "", "", 9, 1);
	Function_528(585, 4294967295, 0.0f, "sn_w1_p", "sd_sold", "", "", 9, 1);
	Function_528(586, 4294967295, 0.0f, "sn_w1_h", "sd_sold", "", "", 9, 1);
	Function_528(580, 312, 0.0f, "sn_h2_m", "sd_sold", "", "", 9, 1);
	Function_528(581, 4294967295, 0.0f, "sn_h2_s", "sd_sold", "", "", 9, 1);
	Function_529(357, 0.0f, "sn_trea", 4, 7, 1, 4, 3212836864, 0);
	Function_528(587, 357, 0.0f, "sn_t_1", "sd_sold", "", "", 9, 3);
	Function_528(588, 357, 0.0f, "sn_t_2", "sd_sold", "", "", 9, 3);
	Function_528(589, 357, 0.0f, "sn_t_3", "sd_sold", "", "", 9, 3);
	Function_528(590, 357, 0.0f, "sn_t_4", "sd_sold", "", "", 9, 3);
	Function_528(591, 357, 0.0f, "sn_t_5", "sd_sold", "", "", 9, 3);
	Function_528(592, 357, 0.0f, "sn_t_6", "sd_sold", "", "", 9, 3);
	Function_528(593, 357, 0.0f, "sn_t_7", "sd_sold", "", "", 9, 3);
	Function_528(594, 357, 0.0f, "sn_t_8", "sd_sold", "", "", 9, 3);
	Function_528(595, 357, 0.0f, "sn_t_9", "sd_sold", "", "", 9, 3);
	Function_529(355, 0.0f, "sn_hdc", 4, 8, 1, 2, 3212836864, 0);
	Function_529(356, 0.0f, "sn_hdh", 4, 8, 1, 2, 3212836864, 0);
	Function_529(359, 0.0f, "sn_bha", 3, 8, 1, 2, 3212836864, 0);
	Function_529(358, 0.0f, "sn_bhd", 3, 8, 1, 2, 3212836864, 0);
	Function_529(360, 0.0f, "sn_bhf", 3, 8, 1, 2, 3212836864, 0);
	Function_529(361, 0.0f, "sn_bhm", 3, 8, 1, 2, 3212836864, 0);
	Function_529(362, 0.0f, "sn_bhn", 3, 8, 1, 2, 3212836864, 0);
	Function_529(363, 0.0f, "sn_blf", 3, 8, 1, 2, 3212836864, 0);
	Function_529(364, 0.0f, "sn_blm", 3, 8, 1, 2, 3212836864, 0);
	Function_529(365, 0.0f, "sn_bln", 3, 8, 1, 2, 3212836864, 0);
	Function_529(367, 0.0f, "sn_mat", 3, 6, 1, 2, 3212836864, 0);
	Function_529(368, 0.0f, "sn_mdf", 3, 6, 1, 2, 3212836864, 0);
	Function_529(370, 0.0f, "sn_swb", 7, 3, 1, 2, 0.0f, 0.0f);
	Function_529(371, 0.0f, "sn_nwb", 15, 6, 1, 2, 3212836864, 0);
	Function_529(372, 0.0f, "sn_mtof", 24, 4, 3, 2, 3212836864, 0);
	Function_529(373, 0.0f, "sn_mtoh", 24, 4, 3, 2, 3212836864, 0);
	Function_529(374, 0.0f, "sn_mtwh", 24, 4, 1, 2, 3212836864, 0);
	Function_529(375, 0.0f, "sn_mtoc", 24, 4, 1, 2, 3212836864, 0);
	Function_529(376, 0.0f, "sn_mtos", 24, 4, 3, 2, 3212836864, 0);
	Function_529(377, 0.0f, "sn_mcar", 24, 4, 1, 2, 3212836864, 0);
	Function_529(378, 0.0f, "sn_mtot", 24, 4, 1, 2, 3212836864, 0);
	Function_529(381, 0.0f, "sn_mtrp", 24, 4, 3, 2, 3212836864, 0);
	Function_529(382, 0.0f, "sn_mtrs", 24, 4, 3, 2, 3212836864, 0);
	Function_529(383, 0.0f, "sn_mtap", 24, 4, 3, 2, 3212836864, 0);
	Function_529(379, 0.0f, "sn_dff", 0, 4, 3, 2, 3212836864, 0);
	Function_529(380, 0.0f, "sn_hdff", 0, 4, 3, 2, 3212836864, 0);
	Function_529(384, 0.0f, "sn_tpfs", 21, 4, 1, 2, 3212836864, 0);
	Function_529(385, 0.0f, "sn_rpof", 0, 4, 3, 2, 3212836864, 0);
	Function_529(387, 0.0f, "sn_bfs", 24, 4, 3, 2, 3212836864, 0);
	Function_529(388, 0.0f, "sn_bfsh", 24, 4, 3, 2, 3212836864, 0);
	Function_529(369, 0.0f, "sn_esc", 3, 4, 1, 2, 3212836864, 0);
	Function_529(366, 0.0f, "sn_trn", 3, 4, 1, 2, 3212836864, 0);
	Function_529(390, 0.0f, "sn_dlvl", 15, 2, 1, 2, 3.0f, 0.0f);
	Function_529(391, 0.0f, "sn_kde", 0, 6, 3, 2, 3212836864, 0);
	Function_529(392, 0.0f, "sn_kode", 0, 6, 3, 2, 3212836864, 0);
	Function_529(393, 0.0f, "sn_dode", 0, 6, 3, 2, 3212836864, 0);
	Function_529(394, 0.0f, "sn_tdet", 23, 6, 3, 2, 3212836864, 0);
	Function_529(395, 0.0f, "sn_tode", 0, 6, 3, 2, 3212836864, 0);
	Function_529(396, 0.0f, "sn_plas", 15, 2, 1, 2, 3212836864, 0);
	Function_529(397, 0.0f, "sn_phog", 15, 2, 1, 2, 3212836864, 0);
	Function_529(398, 0.0f, "sn_nhog", 0, 2, 1, 2, 3212836864, 0);
	Function_529(399, 0.0f, "sn_fhog", 0, 2, 1, 2, 3212836864, 0);
	Function_529(389, 0.0f, "sn_mlas", 24, 2, 1, 2, 3212836864, 0);
	Function_529(487, 0.0f, "sn_mpex", 6, 9, 2, 2, 3212836864, 0);
	Function_529(488, 0.0f, "sn_KC", 1, 9, 2, 2, 3212836864, 0);
	if (Function_522(64))
	{
		Function_529(599, 0.0f, "sn_dlcm", 15, 2, 2, 3, 3212836864, 0);
		Function_529(600, 0.0f, "sn_hide", 15, 9, 2, 2, 3212836864, 0);
		Function_529(601, 0.0f, "sn_hide", 15, 9, 2, 2, 3212836864, 0);
		Function_529(603, 0.0f, "sn_dlcw", 15, 2, 2, 3, 3212836864, 0);
	}
	Function_529(456, 0.0f, "sn_otfd", 3, 9, 1, 2, 3212836864, 0);
	Function_529(457, 0.0f, "sn_otft", 3, 9, 1, 2, 3212836864, 0);
	Function_267(4, Function_274(Global_21369.f_248), 0, 1);
	Function_267(2, Function_269(Global_21369.f_244), 0, 1);
	Function_267(401, Function_527(0), 0, 1);
	Function_267(404, Function_526(0), 0, 1);
	Function_42();
	cVar1 = { StackVal, Function_42() };
	Function_267(179, &cVar1, 0, 1);
	Function_41();
	cVar1 = { StackVal, Function_41() };
	Function_267(180, &cVar1, 0, 1);
	Function_40();
	cVar1 = { StackVal, Function_40() };
	Function_267(181, &cVar1, 0, 1);
	Function_39(0);
	cVar1 = { StackVal, Function_39(0) };
	Function_267(182, &cVar1, 0, 1);
	iVar3 = 0;
	while (iVar3 <= 38)
	{
		Function_276((50 + iVar3), Function_19((90 + iVar3)));
		iVar3++;
	}
	Function_276(49, Function_19(89));
	Function_276(370, Function_19(371));
	Function_275();
	Function_525();
	if (Function_521(598) <= 0)
	{
		Function_520(598, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_19(3));
	SET_PLAYER_CURRENT_HONOR(0, Function_19(1));
	Function_524();
	return;
}

void Function_524() //Position: 0x31150 / 201040
{
	SET_SAGPLAYER_STAT_FLOAT(0, Global_54086[372]);
	SET_SAGPLAYER_STAT_FLOAT(1, Global_54086[373]);
	SET_SAGPLAYER_STAT_FLOAT(2, Global_54086[374]);
	SET_SAGPLAYER_STAT_FLOAT(3, Global_54086[375]);
	SET_SAGPLAYER_STAT_FLOAT(4, Global_54086[376]);
	SET_SAGPLAYER_STAT_FLOAT(5, Global_54086[377]);
	SET_SAGPLAYER_STAT_FLOAT(6, Global_54086[378]);
	SET_SAGPLAYER_STAT_FLOAT(7, Global_54086[381]);
	SET_SAGPLAYER_STAT_FLOAT(8, Global_54086[382]);
	SET_SAGPLAYER_STAT_FLOAT(9, Global_54086[383]);
	SET_SAGPLAYER_STAT_FLOAT(10, Global_54086[387]);
	SET_SAGPLAYER_STAT_FLOAT(11, Global_54086[388]);
	SET_SAGPLAYER_STAT_FLOAT(12, Global_54086[394]);
	SET_SAGPLAYER_STAT_INT(0, Global_54086[385]);
	SET_SAGPLAYER_STAT_INT(1, Global_54086[379]);
	SET_SAGPLAYER_STAT_INT(2, Global_54086[380]);
	SET_SAGPLAYER_STAT_INT(3, Global_54086[44]);
	SET_SAGPLAYER_STAT_INT(4, Global_54086[392]);
	SET_SAGPLAYER_STAT_INT(6, Global_54086[391]);
	SET_SAGPLAYER_STAT_INT(5, Global_54086[393]);
	SET_SAGPLAYER_STAT_INT(7, Global_54086[395]);
	return;
}

void Function_525() //Position: 0x31256 / 201302
{
	Function_277(1, -5000.0f);
	Function_276(1, 5000.0f);
	return;
}

var Function_526(bool bParam0) //Position: 0x31270 / 201328
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = 0;
	iVar8 = "fav_non";
	if (&bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_222(Global_21684[iVar97], &iVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 != 0)
				{
					if (iVar0 == Global_46914[0])
					{
						iVar4 = (StackVal + (iVar4 + Global_21684[iVar97].f_12));
					}
					else if (iVar0 == Global_46866[0])
					{
						iVar5 = (StackVal + (iVar5 + Global_21684[iVar97].f_12));
					}
					else if (iVar0 == Global_46816[0])
					{
						iVar6 = (StackVal + (iVar6 + Global_21684[iVar97].f_12));
					}
					else if (iVar0 == Global_46760[1])
					{
						iVar7 = (StackVal + (iVar7 + Global_21684[iVar97].f_12));
					}
				}
			}
			iVar9++;
		}
		if (iVar4 >= 0)
		{
			iVar8 = "fav_blk";
			iVar3 = iVar4;
		}
		if (iVar5 >= iVar3)
		{
			iVar8 = "fav_chu";
			iVar3 = iVar5;
		}
		if (iVar6 >= iVar3)
		{
			iVar8 = "fav_hen";
			iVar3 = iVar6;
		}
		if (iVar7 >= iVar3)
		{
			iVar8 = "fav_rwf";
			iVar3 = iVar7;
		}
	}
	return &iVar8;
}

var Function_527(bool bParam0) //Position: 0x313B6 / 201654
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar8;
	int iVar9;
	
	iVar3 = 0;
	iVar8 = "fav_non";
	if (&bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_222(Global_21684[iVar97], &uVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 > 0 || iVar1 < 3)
				{
					LOG_ERROR("GET_FAVORITE_JOB_LABEL: minorIdent out of bounds");
				}
				else
				{
					iVar4[iVar1] = (StackVal + (iVar4[iVar1] + Global_21684[iVar97].f_12));
				}
			}
			iVar9++;
		}
		if (iVar4[1] >= 0)
		{
			iVar8 = "fjob_1";
			iVar3 = iVar4[1];
		}
		if (iVar4[2] >= iVar3)
		{
			iVar8 = "fjob_2";
			iVar3 = iVar4[2];
		}
	}
	return &iVar8;
}

int Function_528(int iParam0, int iParam1, int iParam2, char* cParam3, bool bParam5, float fParam6, bool bParam7, int iParam8) //Position: 0x314A5 / 201893
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("COLLECTION_REGISTER: Attempting to register a Stat out of bounds.");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam3))
	{
		LOG_ERROR("COLLECTION_REGISTER: LabelForCollectionName parameter cannot be an Invalid String.");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam4))
	{
		LOG_ERROR("COLLECTION_REGISTER: LabelForCollectionDescription parameter cannot be an Invalid String.");
		return 0;
	}
	bVar1 = false;
	if (iParam1 != 4294967295)
	{
		if (!IS_STRING_VALID(&(Global_55480[iParam116])))
		{
			bVar1 = true;
			if (!IS_STRING_VALID(&bParam5))
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatName parameter cannot be an Invalid String.");
				return 0;
			}
			if (STRING_LENGTH(&bParam5) >= 7)
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatName parameter cannot be more than 7 characters.");
				return 0;
			}
			if (!IS_STRING_VALID(&fParam6))
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatDescription parameter cannot be an Invalid String.");
				return 0;
			}
			if (STRING_LENGTH(&fParam6) >= 7)
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatDescription parameter cannot be more than 7 characters.");
				return 0;
			}
		}
		Global_55480[iParam116].f_96 = 5;
	}
	if (IS_STRING_VALID(&(Global_55480[iParam016])))
	{
		if (STRING_LENGTH(&(Global_55480[iParam016])) >= 0)
		{
			PRINTSTRING("COLLECTION_REGISTER: You are not allowed to overwrite this already registered Collection: ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("COLLECTION_REGISTER: You are not allowed to overwrite an already registered Collection.");
			return 0;
		}
	}
	if (Global_6605)
	{
		Global_54086[iParam0] = iParam2;
	}
	strcpy(&(Global_55480[iParam016]), &cParam3, 8);
	strcpy(&Global_55480[iParam016] + 16, &cParam4, 8);
	strcpy(&Global_55480[iParam016] + 32, "0", 32);
	Global_55480[iParam016].f_96 = 2;
	Global_55480[iParam016].f_100 = iParam1;
	Global_55480[iParam016].f_124 = 4;
	if (bVar1)
	{
		Function_529(iParam1, iParam2, &bParam5, 5, &bParam7, &iParam8, 4, 3212836864, 0);
	}
	Global_97967++;
	if (Global_97967 > 107)
	{
		LOG_ERROR("COLLECTION_REGISTER: Cannot add any more COLLECTABLES, we have reached CONST_MAX_COLLECTABLES. Please increae it!");
		return 0;
	}
	Global_96573[iParam0] = Global_97967;
	Global_94645[Global_979679] = 1.0f;
	Global_94645[Global_979679].f_4 = STRING_TO_HASH(&cParam3);
	Global_94645[Global_979679].f_8 = STRING_TO_HASH(&cParam4);
	*(&Global_94645[Global_979679] + 48) = GET_ASSET_ID("p_gen_package01x", 0);
	Global_94645[Global_979679].f_56 = 0;
	Global_94645[Global_979679].f_60 = iParam0;
	return 1;
}

int Function_529(int iParam0, int iParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8) //Position: 0x31A03 / 203267
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_REGISTER: Attempting to register a Stat out of bounds.");
		return 0;
	}
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_REGISTER: eStatID parameter cannot be STAT_INVALID (-1).");
		return 0;
	}
	if (iParam3 == 2)
	{
		LOG_ERROR("STAT_REGISTER: you are not allowed to register a Collectible with this command, please use COLLECTION_REGISTER.");
		return 0;
	}
	if (!IS_STRING_VALID(&Param2))
	{
		LOG_ERROR("STAT_REGISTER: LabelForStatName parameter cannot be an Invalid String.");
		return 0;
	}
	if (STRING_LENGTH(&Param2) >= 7)
	{
		LOG_ERROR("STAT_REGISTER: LabelForStatName parameter cannot be more than 7 characters.");
		return 0;
	}
	if (IS_STRING_VALID(&(Global_55480[iParam016])))
	{
		if (STRING_LENGTH(&(Global_55480[iParam016])) >= 0)
		{
			PRINTSTRING("STAT_REGISTER: You are not allowed to overwrite this already registered Stat: ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_REGISTER: You are not allowed to overwrite an already registered Stat.");
			return 0;
		}
	}
	if (Global_6605)
	{
		Global_54086[iParam0] = iParam1;
	}
	strcpy(&(Global_55480[iParam016]), &Param2, 8);
	strcpy(&Global_55480[iParam016] + 16, &Param2, 8);
	if (iParam3 != 20)
	{
		strcpy(&Global_55480[iParam016] + 32, "0", 32);
	}
	Global_55480[iParam016].f_96 = iParam3;
	Global_55480[iParam016].f_104 = &iParam4;
	if (iParam3 == 21)
	{
		Global_55480[iParam016].f_124 = 3;
	}
	else
	{
		Global_55480[iParam016].f_124 = &iParam6;
	}
	Global_55480[iParam016].f_108 = &iParam8;
	if (iParam3 != 7 || iParam3 != 11)
	{
		if (&fParam7 != -1.0f)
		{
			Global_55480[iParam016].f_112 = 100.0f;
		}
	}
	else if (&fParam7 == -1.0f)
	{
		Global_55480[iParam016].f_112 = &fParam7;
	}
	if (iParam3 > 15 || iParam3 < 18)
	{
		CREATE_STAT(&Param2, "", &iParam4, &iParam5);
	}
	else if ((((iParam0 != 597 || iParam0 != 19) || iParam0 != 20) || iParam0 != 21) || iParam0 != 603)
	{
		CREATE_STAT(&Param2, "", &iParam4, &iParam5);
	}
	return 1;
}

void Function_530() //Position: 0x31DC3 / 204227
{
	int iVar0;
	
	Global_97967 = 4294967295;
	iVar0 = 0;
	while (iVar0 < (Global_94645 - 1))
	{
		Global_94645[iVar09] = -1.0f;
		Global_94645[iVar09].f_4 = 0;
		Global_94645[iVar09].f_8 = 0;
		*(&Global_94645[iVar09] + 48) = 4294967295;
		Global_94645[iVar09].f_56 = 4294967295;
		Global_94645[iVar09].f_60 = 4294967295;
		iVar0++;
	}
	return;
}

void Function_531() //Position: 0x31E26 / 204326
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_96573 - 1))
	{
		Global_96573[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_532() //Position: 0x31E4C / 204364
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_54086 - 1))
	{
		if (Global_6605)
		{
			Global_54086[iVar0] = -1.0f;
		}
		strcpy(&(Global_55480[iVar016]), "", 8);
		strcpy(&Global_55480[iVar016] + 16, "", 8);
		strcpy(&Global_55480[iVar016] + 32, "", 32);
		Global_55480[iVar016].f_96 = 4294967295;
		Global_55480[iVar016].f_100 = 4294967295;
		Global_55480[iVar016].f_104 = 4294967295;
		Global_55480[iVar016].f_116 = 4294967295;
		Global_55480[iVar016].f_120 = 4294967295;
		iVar0++;
	}
	Function_533();
	return;
}

void Function_533() //Position: 0x31ED3 / 204499
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_77754 - 1))
	{
		Global_77754[iVar0] = -1.0f;
		strcpy(&(Global_77766[iVar016]), "", 8);
		strcpy(&Global_77766[iVar016] + 16, "", 8);
		strcpy(&Global_77766[iVar016] + 32, "", 32);
		Global_77766[iVar016].f_96 = 4294967295;
		Global_77766[iVar016].f_104 = 4294967295;
		Global_77766[iVar016].f_116 = 4294967295;
		Global_77766[iVar016].f_120 = 4294967295;
		iVar0++;
	}
	return;
}

void Function_534() //Position: 0x31F50 / 204624
{
	int iVar0;
	
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	DISABLE_CHILD_SECTOR("ram_missionProps01x");
	DISABLE_CHILD_SECTOR("tes_wall02x");
	DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
	DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
	DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
	DISABLE_CHILD_SECTOR("mp_tes_coop02x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	DISABLE_CHILD_SECTOR("mp_fom_coop01x");
	DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
	DISABLE_CHILD_SECTOR("mp_wld_base03x");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
	DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	DISABLE_CHILD_SECTOR("arm_flags01x");
	DISABLE_CHILD_SECTOR("chu_flags01x");
	DISABLE_CHILD_SECTOR("esc_flags01x");
	DISABLE_CHILD_SECTOR("han_flags01x");
	DISABLE_CHILD_SECTOR("hen_flags01x");
	DISABLE_CHILD_SECTOR("mtp_flags01x");
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	DISABLE_CHILD_SECTOR("mp_pik_base01x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
	DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
	DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
	DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	DISABLE_CHILD_SECTOR("sp_outlaw03x");
	DISABLE_CHILD_SECTOR("sp_grave03x");
	DISABLE_CHILD_SECTOR("sp_marshal02x");
	DISABLE_CHILD_SECTOR("sep_graveEva01x");
	ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
	DISABLE_CHILD_SECTOR("sp_marshal03x");
	DISABLE_CHILD_SECTOR("sp_marshal04ax");
	DISABLE_CHILD_SECTOR("sp_marshal04bx");
	DISABLE_CHILD_SECTOR("coc_fence01bx");
	ENABLE_CHILD_SECTOR("coc_fence01x");
	ENABLE_CHILD_SECTOR("coc_gates01x");
	DISABLE_CHILD_SECTOR("coc_gates02x");
	DISABLE_CHILD_SECTOR("coc_fence03x");
	ENABLE_CHILD_SECTOR("coc_fence03bx");
	DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
	ENABLE_CHILD_SECTOR("thi_gates01x");
	ENABLE_CHILD_SECTOR("thi_gates02x");
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve361rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve427", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve366rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve404", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve394", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve104", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve454", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_pathdetachedCurve4detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve80", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve155", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve157", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve158", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve507", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve214", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve219", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve220", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve221", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve163", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve164", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve165", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve166", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve168", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve333rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve334rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve329rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve330rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve331rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve332rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve206rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve207", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve208", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve209rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve210", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve213", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve460", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve337rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve324rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve377rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve326rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve127", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve126rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve125", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve124", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve123", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve122", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve120", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve119", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve118rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve117", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve116", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve112", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve131", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve218rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_mac_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_hen_thi_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_butterBridge_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve617", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01", 18)), 30);
	iVar0 = 0;
	while (iVar0 <= Global_39324)
	{
		Global_39324[iVar0] = !Global_6606;
		switch (iVar0)
		{
			case 0x00000000:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("ramitaBayaAfter");
					ENABLE_WORLD_SECTOR("ramitaBayaBefore");
					ENABLE_CURVE("rsdROAD_frb_road", false);
					ENABLE_CURVE("rsdROAD_fom_frb_road", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("ramitaBayaAfter");
					DISABLE_WORLD_SECTOR("ramitaBayaBefore");
					ENABLE_CURVE("rsdROAD_frb_road", true);
					ENABLE_CURVE("rsdROAD_fom_frb_road", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
				}
				break;
			
			case 0x00000001:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeA");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000002:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeB");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000003:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeA");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000004:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("tannersSpanAfter");
					ENABLE_WORLD_SECTOR("tannersSpanBefore");
				}
				else
				{
					ENABLE_WORLD_SECTOR("tannersSpanAfter");
					DISABLE_WORLD_SECTOR("tannersSpanBefore");
				}
				break;
			
			case 0x00000005:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("dixonCrossingAfter");
					ENABLE_WORLD_SECTOR("dixonCrossingBefore");
					ENABLE_CURVE("rsdROAD_thi_blk_road", false);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("dixonCrossingAfter");
					DISABLE_WORLD_SECTOR("dixonCrossingBefore");
					ENABLE_CURVE("rsdROAD_thi_blk_road", true);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
				}
				break;
			
			case 0x00000006:
				DISABLE_CHILD_SECTOR("hen_barn02x");
				DISABLE_CHILD_SECTOR("hen_barn02props01x");
				ENABLE_CHILD_SECTOR("hen_barn01x");
				ENABLE_CHILD_SECTOR("hen_barn01props01x");
				break;
			
			case 0x00000007:
				break;
			
			case 0x00000008:
				DISABLE_WORLD_SECTOR("campoMiradaAfter");
				ENABLE_WORLD_SECTOR("campoMiradaBefore");
				break;
			
			case 0x00000009:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
					ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
				}
				else
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
				}
				break;
			
			case 0x0000000A:
				ENABLE_CHILD_SECTOR("fod_gates01x");
				DISABLE_CHILD_SECTOR("fod_gates02x");
				DISABLE_CHILD_SECTOR("fod_gates02Doors01x");
				break;
			
			case 0x0000000B:
				break;
			
			case 0x0000000C:
				if (Global_6606)
				{
					DISABLE_WORLD_SECTOR("masonBridgeAfter");
					ENABLE_WORLD_SECTOR("masonBridgeBefore");
				}
				else
				{
					ENABLE_WORLD_SECTOR("masonBridgeAfter");
					DISABLE_WORLD_SECTOR("masonBridgeBefore");
				}
				break;
			
			case 0x0000000D:
				if (Global_6606)
				{
					DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
					ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
				}
				break;
			
			case 0x0000000E:
				DISABLE_WORLD_SECTOR("morningStar");
				DISABLE_CHILD_SECTOR("blk_barge01Props01x");
				DISABLE_CHILD_SECTOR("blk_barge01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_01x");
				DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_bank_int_02x");
				ENABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
				DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
				DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
				DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
				DISABLE_CHILD_SECTOR("blk_church_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_church_int_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_01x");
				DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_01x");
				DISABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
				ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
				DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				ENABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
				ENABLE_CHILD_SECTOR("mor_morningStar_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
				DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
				ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
				DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
				break;
			
			case 0x00000010:
				DISABLE_CHILD_SECTOR("beh_silo01x");
				ENABLE_CHILD_SECTOR("beh_silo02x");
				break;
			
			case 0x00000011:
				if (Global_6606)
				{
					ENABLE_CHILD_SECTOR("beh_house02x");
					ENABLE_CHILD_SECTOR("beh_house02props01x");
					DISABLE_CHILD_SECTOR("beh_house01x");
					DISABLE_CHILD_SECTOR("beh_house01props01x");
				}
				else
				{
					DISABLE_CHILD_SECTOR("beh_house02x");
					DISABLE_CHILD_SECTOR("beh_house02props01x");
					ENABLE_CHILD_SECTOR("beh_house01x");
					ENABLE_CHILD_SECTOR("beh_house01props01x");
				}
				break;
			
			case 0x00000012:
				DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
				ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
				DISABLE_CHILD_SECTOR("sp_mexArmy03x");
				break;
			
			case 0x00000013:
				DISABLE_CHILD_SECTOR("esc_villaWall05x");
				ENABLE_CHILD_SECTOR("esc_villaWall04x");
				DISABLE_CHILD_SECTOR("sp_rebel05x");
				break;
			
			case 0x00000014:
				DISABLE_CHILD_SECTOR("icarus");
				break;
			
			case 0x00000015:
				DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
				DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
				break;
			
			case 0x00000016:
				DISABLE_CHILD_SECTOR("sp_anthro01x");
				break;
			
			case 0x00000017:
				DISABLE_CHILD_SECTOR("beh_grave01x");
				DISABLE_CHILD_SECTOR("beh_grave02x");
				DISABLE_CHILD_SECTOR("beh_grave03x");
				break;
			
			case 0x00000018:
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve44", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_curve69", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_road", !Global_6606);
				ENABLE_CURVE("rsdROAD_frb_road", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_6606);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve637", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve638", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve70", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve297", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve71", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve72", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_6606);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_6606);
				break;
			
			case 0x00000019:
				if (Global_6606)
				{
					ENABLE_CHILD_SECTOR("emt_caveDoor01x");
					DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				}
				break;
			
			case 0x0000001A:
				if (Global_6606)
				{
					ENABLE_CHILD_SECTOR("thi_window01x");
					DISABLE_CHILD_SECTOR("thi_window02x");
				}
				break;
			
			default:
				LOG_ERROR("world state error!");
				break;
		}
		iVar0++;
	}
	if (Global_6606)
	{
		Function_535();
	}
	return;
}

void Function_535() //Position: 0x353CF / 218063
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39324)
	{
		if (!Global_39324[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_374(25, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_374(25, 0) && !Function_374(26, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_374(25, 0) && Function_374(26, 0)) && !Function_374(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_374(25, 0) && Function_374(26, 0)) && Function_374(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_374(22, 0) && !Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_374(22, 0) && Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_374(34, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_374(26, 0) || Function_374(30, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_374(40, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_374(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_374(21, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_374(57, 0) || Function_339(57))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_374(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_374(28, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_374(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_47(37))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_374(57, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_374(25, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", true);
						ENABLE_CURVE("rsdTRAIL_curve44", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_curve69", true);
						ENABLE_CURVE("rsdROAD_las_road", true);
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", true);
						ENABLE_CURVE("rsdTRAIL_curve637", true);
						ENABLE_CURVE("rsdTRAIL_curve638", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_curve70", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", true);
						ENABLE_CURVE("rsdTRAIL_curve297", true);
						ENABLE_CURVE("rsdTRAIL_curve71", true);
						ENABLE_CURVE("rsdTRAIL_curve72", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", true);
					}
					break;
				
				case 0x00000019:
					if (Function_374(32, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_374(20, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("thi_window02x");
						DISABLE_CHILD_SECTOR("thi_window01x");
					}
					break;
				
				default:
					LOG_ERROR("world state error");
					break;
				}
		}
		iVar0++;
	}
	return;
}

bool Function_536(int iParam0) //Position: 0x36BA4 / 224164
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_537(int iParam0) //Position: 0x36BC2 / 224194
{
	int iVar0;
	
	if (Function_509(iParam0, 1) && Function_509(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_538(bool bParam0, bool bParam1, bool bParam2) //Position: 0x36BF6 / 224246
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_541(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_539(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_539(bParam0, bParam1, bParam2, 4294967295);
}

int Function_539(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x36C54 / 224340
{
	var uVar0;
	
	if (!Function_223(bParam2))
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
	uVar0 = Function_541(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_540(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_540(int iParam0) //Position: 0x36DB8 / 224696
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_541(int iParam0, int iParam1, bool bParam2) //Position: 0x36DF6 / 224758
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_542() //Position: 0x36E16 / 224790
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Global_21684 - 1))
	{
		Global_21684[iVar07].f_4 = 4294967295;
		Global_21684[iVar07] = 0;
		Global_21684[iVar07].f_8 = 0;
		Global_21684[iVar07].f_12 = 0;
		Global_21684[iVar07].f_16 = 0;
		Global_21684[iVar07].f_20 = 0;
		Global_21684[iVar07].f_24 = 0;
		Global_21684[iVar07].f_28 = 0.0f;
		Global_21684[iVar07].f_32 = 0.0f;
		*(&Global_21684[iVar07] + 40) = GET_TIME_OF_DAY();
		(&Global_21684[iVar07] + 48) = "";
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (5 - 1))
	{
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			Global_26088[iVar18][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	return;
}

var Function_543(int iParam0) //Position: 0x36EDD / 224989
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&bVar0))
	{
		return STRING_TO_INT(&bVar0);
	}
	return 4294967295;
}

void Function_544() //Position: 0x36F04 / 225028
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_390(&(Global_0[iVar0165]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
		iVar0++;
	}
	Global_6602 = 0;
	return;
}

bool Function_545(bool bParam0) //Position: 0x36F4B / 225099
{
	int iVar0;
	
	iVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&iVar0))
	{
		return 1;
	}
	return 0;
}

void Function_546() //Position: 0x36F6D / 225133
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

var Function_547() //Position: 0x36FAA / 225194
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_64;
}

struct<8> Function_548(var uParam0, var uParam1) //Position: 0x36FC5 / 225221
{
	struct<61> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	uParam0 = Var0.f_56;
	uParam1 = Var0.f_60;
	return StackVal, *(&Var0 + 44);
}

void Function_549() //Position: 0x37013 / 225299
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Global_53349.f_4 = Var0.f_136;
	Global_53349.f_8 = Var0.f_140;
	Global_53349.f_12 = Var0.f_144;
	Global_53349.f_16 = Var0.f_148;
	return;
}

void Function_550(int iParam0, int iParam1) //Position: 0x3704E / 225358
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_551(var uParam0, int iParam1) //Position: 0x37064 / 225380
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_552(int iParam0, bool bParam1) //Position: 0x37075 / 225397
{
	if (!Function_450(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_289((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_289(222, TO_FLOAT((Function_521(223) + Function_521(224))), 0);
	return;
}

struct<8> Function_553(int iParam0) //Position: 0x370B6 / 225462
{
	switch (iParam0)
	{
		case 0x00000001:
			return StackVal, Vector(-819,6454f, 93,80083f, 2436,405f);
			break;
		
		case 0x00000002:
			return StackVal, Vector(-2080,289f, 16,962f, 2603,609f);
			break;
		
		case 0x00000003:
			return StackVal, Vector(772,1412f, 79,45659f, 1241,604f);
			break;
		
		case 0x00000004:
			return StackVal, Vector(-2647,498f, 31,386f, 4247,398f);
			break;
		
		case 0x00000005:
			return StackVal, Vector(-724,92f, 63,349f, 3297,469f);
			break;
		
		case 0x00000006:
			return StackVal, Vector(-4355,349f, 30,16f, 4384,089f);
			break;
	}
	Function_131();
	return StackVal, Function_131();
}

void Function_554(int iParam0) //Position: 0x37162 / 225634
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_555(var uParam0, var uParam1, int iParam2) //Position: 0x37175 / 225653
{
	struct<185> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_184)
	{
		iVar24 = 1;
		uParam0 = Var0.f_172;
		uParam1 = Var0.f_176;
		iParam2 = Var0.f_180;
	}
	Var0.f_172 = 0;
	Var0.f_176 = 0;
	Var0.f_180 = 0;
	Var0.f_184 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return iVar24;
}

void Function_556(int iParam0) //Position: 0x371CC / 225740
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

