//Decompiled with MagicRDR v1.0
//Function Count : 466
//Statics Count : 644
//Natives Count : 515
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
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 11;
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
	var uLocal_532 = 11;
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
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	int iLocal_582 = 0;
	bool bLocal_583 = false;
	float fLocal_584 = 0.0f;
	bool bLocal_585 = false;
	bool bLocal_586 = false;
	int iLocal_587 = 0;
	bool bLocal_588 = false;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	struct<189> Local_593 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar27;
	struct<2> Var28[6];
	bool bVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	var uVar53;
	struct<2> Var54;
	float fVar56;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	uLocal_642 = "";
	Global_6661 = 1;
	PRINTSTRING("********************************************");
	PRINTNL();
	PRINTSTRING("                 MAIN_Z.SC");
	PRINTNL();
	PRINTSTRING("SCRIPTS ARE COMPILED WITH STANDALONE DEFINED");
	PRINTNL();
	PRINTSTRING("********************************************");
	PRINTNL();
	SET_ZOMBIE_DLC_IS_ACTIVE(1);
	DLC_PRE_INIT_CONTENT();
	STREAMING_ENABLE_POI_STREAMING(0);
	Function_465(0);
	SET_ALL_DOOR_LOCKS_VISIBLE(1);
	TOGGLE_COVER_PROPS(0);
	SET_AGRESSIVE_EVENT_ON(0);
	UI_EXCLUDE("StatTab_Crimes");
	UI_EXCLUDE("StatTab_Score");
	UI_EXCLUDE("StatTab_Money");
	UI_EXCLUDE("StatTab_Missions");
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_463();
	Global_47149 = 0;
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	SET_AMBIENT_ACTOR_SPEED_SCALE_RANGE(0,8f, 1,35f);
	SET_FLOCK_DEFAULT_POPULATION_MAX_PER_CELL(1);
	SET_INDIVIDUAL_DEFAULT_POPULATION_MAX_PER_CELL(15);
	if (IS_LAUNCH_RETAIL())
	{
		Global_6606 = 1;
	}
	Global_6607 = 0;
	Global_6634 = 1;
	if (Function_462("noDDA"))
	{
		Global_119941 = 0;
	}
	else
	{
		Global_119941 = 1;
	}
	Global_47310 = 4294967295;
	Function_456();
	Function_455();
	Function_453();
	if (IS_LAUNCH_RETAIL() && Global_6605)
	{
		bLocal_588 = true;
		Global_6606 = 1;
		Function_452();
	}
	UI_SET_STRING("LOCAL_PLAYER_GAMERTAG", NET_GET_LOCAL_GAMER_NAME());
	if (!Global_6604)
	{
		Global_140676 = Local_593.f_188;
	}
	if (Function_462("zombiePressDemo"))
	{
		Global_6666 = 1;
		bLocal_588 = false;
		Global_6606 = 0;
		UI_EXCLUDE("JournalTab_Challenges_Panel");
		UI_EXCLUDE("JournalTab_Quest_Panel");
	}
	RETRIEVE_GAME_STATE(&Local_593, 48, 1);
	UI_ENABLE("PM_Stats");
	Function_451();
	if (Local_593.f_68)
	{
		Global_53524.f_48++;
		Function_450(&Global_53524 + 12, &Global_53524 + 16);
		Global_53524 = Function_450(&Global_53524 + 12, &Global_53524 + 16);
		Global_53524.f_24 = Function_449();
	}
	if (Global_6605)
	{
		LOG_MESSAGE("Initializing deed array!");
		Function_448();
	}
	if (Global_53524.f_28)
	{
		if (Global_53524.f_28)
		{
			LOG_MESSAGE("Resetting from mission!");
			Global_53524.f_36 = 1;
		}
	}
	else
	{
		bLocal_585 = true;
	}
	iVar0 = 13;
	Function_446(&iVar0, "ZombiePackGringos", 12, 0);
	while (!Function_441(&iVar0))
	{
		WAIT(false);
	}
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_locatorDummy02x", "$/content/DLC/ZombiePack/Gringos/ZombiePack_HorseHitch", "horseHitch1", Vector(1,05f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_locatorDummy02x", "$/content/DLC/ZombiePack/Gringos/ZombiePack_HorseHitch2", "horseHitch2", Vector(-1,05f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_coffin04x", "$/content/DLC/ZombiePack/Gringos/DLC_player_burn_coffin", "LootCoffin", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_safe02x", "$/content/scripting/gringo/SimpleGringo/horse_drinking", "Player_Lockpick_Safe", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "pickSafe", "horse_drinking", "Player_Lockpick_Safe", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "openArmoire", "horse_drinking", "stand_armoir", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "openCredenza", "horse_drinking", "open_credenza", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "nopenChest", "horse_drinking", "stand_open_chest", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	iVar27 = Function_437(0, 1, 1);
	if (Global_6666)
	{
		Global_53524 = Vector(-2899,875f, 19,075f, 2710,246f);
		Global_53524.f_12 = 24,269f;
	}
	else if (Local_593.f_16)
	{
		bLocal_585 = false;
		if (Global_10964 == 1)
		{
			if (!Global_53524.f_28)
			{
				Global_53524 = Vector(-115,997f, 118,869f, 1373,4f);
				Global_99147 = 1;
				Function_436(16385);
			}
			else
			{
				Global_53524 = Vector(-115,997f, 118,869f, 1373,4f);
			}
		}
		else
		{
			Global_53524 = (&Local_593 + 4);
		}
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
			if (!bLocal_588)
			{
				if (Function_462("randomstartloc"))
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
					Global_53524 = Vector(-115,997f, 118,869f, 1373,4f);
				}
			}
			else if (Global_6606 && !Global_53524.f_28)
			{
				if (StackVal && StackVal != 3 != 4)
				{
					Global_99147 = 1;
					Function_436(16385);
					if (!UI_ISACTIVE("nCutscenes"))
					{
						UI_ACTIVATE("nCutscenes");
					}
					Global_53524 = Vector(-115,997f, 118,869f, 1373,4f);
				}
			}
		}
		if (!Global_6606 && !IS_STARTPOS_IN_COMMANDLINE())
		{
			Global_53524.f_12 = 176,588f;
		}
	}
	SET_START_POS(Global_53524, Global_53524.f_12, 0);
	Function_435();
	Global_21576 = Function_435();
	Global_21576.f_120 = 4294967295;
	if (!Function_434(Global_99144, 1))
	{
		Function_433(&Global_99130 + 40, 65536);
		Function_433(&Global_99130 + 40, 2);
		Function_433(&Global_99130 + 40, 1);
	}
	else
	{
		iLocal_587 = 1;
	}
	if (StackVal && Global_6606 == 3)
	{
		Function_432();
		Function_431();
	}
	Function_429();
	Function_427();
	Function_426();
	if (!Function_425(1024))
	{
		WAIT(false);
	}
	iVar42 = 1;
	LOAD_AUDIO_BANK("DLC_00", "DLC6\\ZOMBIE_MISC_1");
	while (iVar42 == 1)
	{
		iVar42 = GET_AUDIO_BANK_LOADING_STATUS("DLC_00", "DLC6\\ZOMBIE_MISC_1");
		WAIT(false);
	}
	if (iVar42 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_00");
	}
	iVar42 = 1;
	LOAD_AUDIO_BANK("DLC_01", "DLC6\\ZOMBIE_MISC_3");
	while (iVar42 == 1)
	{
		iVar42 = GET_AUDIO_BANK_LOADING_STATUS("DLC_01", "DLC6\\ZOMBIE_MISC_3");
		WAIT(false);
	}
	if (iVar42 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_01");
	}
	iVar42 = 1;
	LOAD_AUDIO_BANK("DLC_02", "DLC6\\ZOMBIE_MISC_4");
	while (iVar42 == 1)
	{
		iVar42 = GET_AUDIO_BANK_LOADING_STATUS("DLC_02", "DLC6\\ZOMBIE_MISC_4");
		WAIT(false);
	}
	if (iVar42 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_02");
	}
	iVar42 = 1;
	LOAD_AUDIO_BANK("DLC_03", "DLC6\\ZOMBIE_MISC_2");
	while (iVar42 == 1)
	{
		iVar42 = GET_AUDIO_BANK_LOADING_STATUS("DLC_03", "DLC6\\ZOMBIE_MISC_2");
		WAIT(false);
	}
	if (iVar42 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_03");
	}
	if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\ranch08"))
	{
		WAIT(false);
	}
	DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE", &uLocal_642);
	Function_424();
	Function_446(&iVar0, "$/content/DLC/ZombiePack/system/Player_z", 4, 0);
	Function_446(&iVar0, "$/content/init/rdr2init_each_load", 4, 0);
	Function_446(&iVar0, "$/content/DLC/ZombiePack/system/short_update_thread_z", 4, 0);
	Function_446(&iVar0, "$/content/DLC/ZombiePack/system/medium_update_thread_z", 4, 0);
	Function_446(&iVar0, "$/content/DLC/ZombiePack/system/long_update_thread_z", 4, 0);
	Function_446(&iVar0, "$/content/DLC/ZombiePack/system/DesignerDefined/UI/FuiEventMonitor_z", 4, 0);
	Function_446(&iVar0, "$/content/DLC/ZombiePack/system/Pause_z", 4, 0);
	Function_446(&iVar0, "$/content/scripting/gringo/SimpleGringo/hogtie", 1, 0);
	Function_446(&iVar0, "$/content/scripting/gringo/SimpleGringo/hogtie_pickup", 1, 0);
	Function_446(&iVar0, "$/content/scripting/gringo/SimpleGringo/Loot_Corpse", 1, 0);
	Function_446(&iVar0, "ZombiePackGringos", 12, 0);
	Function_446(&iVar0, "z_dlc_z_roar", 5, 0);
	Function_446(&iVar0, "custom/z_dlc_z_roar", 8, 0);
	while (!Function_441(&iVar0))
	{
		WAIT(false);
	}
	Function_423();
	uLocal_589 = LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/Player_z", 0);
	while (!IS_SCRIPT_VALID(&uLocal_589))
	{
		WAIT(false);
	}
	while (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PlayerLayout")))
	{
		WAIT(false);
	}
	while (!IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), "player")))
	{
		WAIT(false);
	}
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/DesignerDefined/UI/FuiEventMonitor_z", 0);
	LAUNCH_NEW_SCRIPT("init/rdr2init_each_load", 0);
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/short_update_thread_z", 0);
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/medium_update_thread_z", 0);
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/long_update_thread_z", 0);
	Global_6629 = 0;
	Global_6618 = 1;
	Global_6620 = 1;
	Global_6622 = 0;
	Global_6623 = 0;
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
	Function_422();
	CLEAR_REGIONS();
	Function_420();
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant04"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch07"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch08"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Marshal"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy04"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel04"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "_MeterAndHalfTest"));
	Function_417();
	Function_416();
	Function_412();
	Global_46722[0] = Function_410("$/content/Frontier/PR_Frontier", "fro", 4294967295, 0, 1, 0, 0, 0, 1, 0);
	Global_46722[1] = Function_410("$/content/Mexico/PR_Mexico", "mex", Global_46722[0], 0, 1, 1, 0, 0, 1, 0);
	Global_46722[2] = Function_410("$/content/North/PR_North", "nor", Global_46722[1], 0, 1, 2, 0, 0, 1, 0);
	Global_46722[3] = Function_410("$/content/Homestead/PR_Homestead", "hom", Global_46722[2], 0, 1, 3, 0, 0, 1, 0);
	Global_46722[4] = Function_410("$/content/Homestead/PR_End", "end", Global_46722[3], 0, 1, 4, 0, 0, 1, 0);
	Global_46736[0] = Function_410("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/ChollaSprings_z", "cho", Global_46722[0], &iLocal_4 + 240, 2, 5, 0, 1, 1, 0);
	Global_46746[1] = Function_410("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/DiezCoronas_z", "dzc", Global_46722[1], &iLocal_4 + 784, 2, 52, 0, 1, 1, 0);
	Global_46736[1] = Function_410("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/GaptoothRidge_z", "gtr", Global_46722[0], &iLocal_4 + 368, 2, 6, 0, 0, 1, 0);
	Global_46754[0] = Function_410("$/content/DLC/ZombiePack/North/Great_Plains/GreatPlains_z", "grt", Global_46722[2], &iLocal_4 + 608, 2, 83, 0, 1, 1, 0);
	Global_46736[2] = Function_410("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/HennigansStead_z", "hgn", Global_46722[0], &iLocal_4 + 520, 2, 8, 0, 1, 1, 0);
	Global_46746[2] = Function_410("$/content/DLC/ZombiePack/Mexico/Perdido/Perdido_z", "prd", Global_46722[1], &iLocal_4 + 736, 2, 51, 0, 1, 1, 0);
	Global_46746[0] = Function_410("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/PuntaOrgullo_z", "pun", Global_46722[1], &iLocal_4 + 680, 2, 50, 0, 1, 1, 0);
	Global_46736[3] = Function_410("$/content/DLC/ZombiePack/Frontier/Rio_Bravo/RioBravo_z", "rio", Global_46722[0], &iLocal_4 + 432, 2, 7, 0, 0, 1, 0);
	Global_46754[1] = Function_410("$/content/DLC/ZombiePack/North/Tall_Trees/TallTrees_z", "tal", Global_46722[2], &iLocal_4 + 576, 2, 82, 0, 0, 1, 0);
	Global_46866[2] = Function_410("$/content/DLC/ZombiePack/Mexico/Perdido/Agave_Viejo/AgaveViejo_z", "agv", Global_46746[2], &iLocal_4 + 1512, 4, 62, 0, 1, 0, 0);
	Global_46760[0] = Function_410("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Armadillo/Armadillo_z", "arm", Global_46736[0], &iLocal_4 + 64, 3, 9, 0, 1, 1, 0);
	Global_46914[1] = Function_410("$/content/DLC/ZombiePack/North/Great_Plains/BeechersHope/BeechersHope_z", "beh", Global_46754[0], &iLocal_4 + 968, 4, 95, 0, 0, 1, 0);
	Global_46796[4] = Function_410("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Benedict_Point/BenedictPoint_z", "ben", Global_46736[1], &iLocal_4 + 872, 4, 30, 0, 0, 1, 0);
	Global_46914[0] = Function_410("$/content/DLC/ZombiePack/North/Great_Plains/Blackwater/Blackwater_z", "blk", Global_46754[0], &iLocal_4 + 1744, 3, 94, 0, 0, 1, 0);
	Global_46894[2] = Function_410("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/Casa_Madrugada/CasaMadrugada_z", "cas", Global_46746[1], &iLocal_4 + 920, 4, 75, 0, 1, 1, 0);
	Global_46866[0] = Function_410("$/content/DLC/ZombiePack/Mexico/Perdido/Chuparosa/Chuparosa_z", "chu", Global_46746[2], &iLocal_4 + 904, 3, 60, 0, 1, 1, 0);
	Global_46926[0] = Function_410("$/content/DLC/ZombiePack/North/Tall_Trees/Cochinay/Cochinay_z", "coc", Global_46754[1], &iLocal_4 + 1400, 4, 84, 0, 0, 0, 0);
	Global_46760[4] = Function_410("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Coots_Chapel/CootsChapel_z", "coo", Global_46736[0], &iLocal_4 + 1000, 5, 11, 0, 0, 0, 0);
	Global_46894[0] = Function_410("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/El_Matadero_Town/ElMataderoTown_z", "emt", Global_46746[1], &iLocal_4 + 1336, 4, 73, 0, 0, 1, 0);
	Global_46894[1] = Function_410("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/El_Presidio/ElPresidio_z", "fod", Global_46746[1], &iLocal_4 + 936, 4, 74, 0, 1, 1, 0);
	Global_46850[0] = Function_410("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/Escalera/Escalera_z", "esc", Global_46746[0], &iLocal_4 + 888, 3, 53, 0, 1, 1, 0);
	Global_46838[1] = Function_410("$/content/DLC/ZombiePack/Frontier/Rio_Bravo/Fort_Mercer/FortMercer_z", "fom", Global_46736[3], &iLocal_4 + 72, 4, 36, 0, 0, 0, 0);
	Global_46796[3] = Function_410("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Gaptooth_Breach/GaptoothBreach_z", "gap", Global_46736[1], &iLocal_4 + 104, 4, 29, 0, 0, 0, 0);
	Global_46816[0] = Function_410("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/Hennigans_Ranch/HennigansRanch_z", "hen", Global_46736[2], &iLocal_4 + 800, 3, 40, 0, 0, 1, 0);
	Global_46866[1] = Function_410("$/content/DLC/ZombiePack/Mexico/Perdido/Las_Hermanas/LasHermanas_z", "lsh", Global_46746[2], &iLocal_4 + 1504, 4, 61, 0, 1, 1, 0);
	Global_46926[1] = Function_410("$/content/DLC/ZombiePack/North/Tall_Trees/Manzanita_Post/ManzanitaPost_z", "mtp", Global_46754[1], &iLocal_4 + 952, 4, 85, 0, 0, 1, 0);
	Global_46850[1] = Function_410("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/Nosalida/Nosalida_z", "nos", Global_46746[0], &iLocal_4 + 880, 4, 54, 0, 1, 0, 0);
	Global_46760[12] = Function_410("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Odd_Fellows_Rest/OddFellowsRest_z", "odd", Global_46736[0], &iLocal_4 + 1312, 5, 21, 0, 0, 0, 0);
	Global_46926[2] = Function_410("$/content/DLC/ZombiePack/North/Tall_Trees/Pacific_Union_Railroad_Camp/PacificUnionRailroadCamp_z", "upr", Global_46754[1], &iLocal_4 + 960, 4, 86, 0, 0, 1, 0);
	Global_46816[2] = Function_410("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin_z", "pik", Global_46736[2], &iLocal_4 + 1608, 4, 42, 0, 0, 0, 0);
	Global_46838[0] = Function_410("$/content/DLC/ZombiePack/Frontier/Rio_Bravo/Plainview/Plainview_z", "pln", Global_46736[3], &iLocal_4 + 1448, 4, 35, 0, 0, 1, 0);
	Global_46796[1] = Function_410("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Rathskeller_Fork/RathskellerFork_z", "rat", Global_46736[1], &iLocal_4 + 120, 4, 27, 0, 0, 1, 0);
	Global_46760[1] = Function_410("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Ridgewood_Farm/RidgewoodFarm_z", "rwf", Global_46736[0], &iLocal_4 + 88, 4, 10, 0, 0, 1, 0);
	Global_46866[4] = Function_410("$/content/DLC/ZombiePack/Mexico/Perdido/Sepulcro/Sepulcro_z", "sep", Global_46746[2], &iLocal_4 + 1168, 5, 64, 1, 1, 0, 0);
	Global_46796[2] = Function_410("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly_z", "sol", Global_46736[1], &iLocal_4 + 112, 4, 28, 0, 0, 0, 0);
	Global_46850[2] = Function_410("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/Tesoro_Azul/TesoroAzul_z", "tes", Global_46746[0], &iLocal_4 + 912, 4, 55, 0, 1, 0, 0);
	Global_46816[1] = Function_410("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/Thieves_Landing/ThievesLanding_z", "thi", Global_46736[2], &iLocal_4 + 792, 3, 41, 0, 0, 1, 0);
	Global_46894[3] = Function_410("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/Torquemada/Torquemada_z", "tor", Global_46746[1], &iLocal_4 + 928, 4, 76, 0, 0, 0, 0);
	Global_46796[0] = Function_410("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Tumbleweed/Tumbleweed_z", "tum", Global_46736[1], &iLocal_4 + 96, 5, 26, 0, 0, 0, 0);
	Global_46760[2] = Function_410("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Twin_Rocks/TwinRocks_z", "twr", Global_46736[0], &iLocal_4 + 80, 4, 12, 0, 0, 0, 0);
	Global_46894[5] = Function_410("", "cab", Global_46746[1], &iLocal_4 + 1144, 6, 78, 0, 0, 0, 0);
	Global_46926[5] = Function_410("", "aur", Global_46754[1], &iLocal_4 + 1288, 6, 89, 1, 0, 0, 0);
	Global_46866[3] = Function_410("", "bar", Global_46746[2], &iLocal_4 + 1176, 6, 63, 1, 0, 0, 1);
	Global_46926[6] = Function_410("", "bcc", Global_46754[1], &iLocal_4 + 1416, 6, 90, 1, 0, 0, 1);
	Global_46796[8] = Function_410("", "bep", Global_46736[3], &iLocal_4 + 1440, 6, 34, 0, 0, 0, 0);
	Global_46816[3] = Function_410("", "brb", Global_46736[2], &iLocal_4 + 1104, 6, 43, 1, 0, 0, 1);
	Global_46914[2] = Function_410("", "brk", Global_46754[0], &iLocal_4 + 1264, 6, 97, 0, 0, 0, 0);
	Global_46816[4] = Function_410("", "but", Global_46736[2], &iLocal_4 + 1112, 6, 44, 0, 0, 0, 0);
	Global_46866[12] = Function_410("", "mir", Global_46746[2], &iLocal_4 + 1496, 6, 72, 0, 1, 0, 0);
	Global_46760[15] = Function_410("", "cri", Global_46736[0], &iLocal_4 + 1520, 6, 24, 0, 1, 0, 0);
	Global_46850[4] = Function_410("", "crk", Global_46746[0], &iLocal_4 + 1224, 6, 57, 0, 1, 0, 0);
	Global_46796[5] = Function_410("", "cue", Global_46736[1], &iLocal_4 + 1032, 6, 31, 0, 0, 0, 0);
	Global_46760[13] = Function_410("", "lob", Global_46736[0], &iLocal_4 + 1184, 6, 22, 1, 0, 0, 1);
	Global_46838[4] = Function_410("", "dlr", Global_46736[3], &iLocal_4 + 1432, 6, 39, 0, 0, 0, 0);
	Global_46866[5] = Function_410("", "tro", Global_46746[2], &iLocal_4 + 1200, 6, 65, 0, 0, 0, 0);
	Global_46866[7] = Function_410("", "dia", Global_46746[2], &iLocal_4 + 1208, 6, 67, 1, 0, 0, 0);
	Global_46914[4] = Function_410("", "dix", Global_46754[0], &iLocal_4 + 1560, 6, 98, 0, 0, 0, 0);
	Global_46838[2] = Function_410("", "frb", Global_46736[3], &iLocal_4 + 1080, 6, 37, 0, 0, 0, 0);
	Global_46816[5] = Function_410("", "grn", Global_46736[2], &iLocal_4 + 1096, 6, 45, 0, 0, 0, 1);
	Global_46760[9] = Function_410("", "ham", Global_46736[0], &iLocal_4 + 1024, 6, 18, 0, 0, 0, 1);
	Global_46760[6] = Function_410("", "han", Global_46736[0], &iLocal_4 + 1008, 6, 15, 1, 0, 0, 0);
	Global_46866[10] = Function_410("", "hnd", Global_46746[2], &iLocal_4 + 1488, 6, 70, 1, 1, 0, 1);
	Global_46760[8] = Function_410("", "jor", Global_46736[0], &iLocal_4 + 976, 6, 17, 0, 0, 0, 0);
	Global_46866[8] = Function_410("", "lag", Global_46746[2], &iLocal_4 + 1480, 6, 68, 1, 1, 0, 1);
	Global_46760[5] = Function_410("", "ldj", Global_46736[0], &iLocal_4 + 992, 6, 14, 0, 0, 0, 1);
	Global_46894[8] = Function_410("", "mnt", Global_46746[1], &iLocal_4 + 1424, 6, 81, 0, 0, 0, 0);
	Global_46926[7] = Function_410("", "msb", Global_46754[1], &iLocal_4 + 1552, 6, 91, 0, 0, 0, 0);
	Global_46760[11] = Function_410("", "mcr", Global_46736[0], &iLocal_4 + 1320, 6, 20, 1, 0, 0, 1);
	Global_46894[7] = Function_410("", "lun", Global_46746[1], &iLocal_4 + 1152, 6, 80, 0, 0, 0, 0);
	Global_46816[6] = Function_410("", "mes", Global_46736[2], &iLocal_4 + 1240, 6, 46, 1, 0, 0, 1);
	Global_46926[9] = Function_410("", "mtf", Global_46754[1], &iLocal_4 + 1584, 6, 93, 0, 0, 0, 0);
	Global_46926[3] = Function_410("", "nek", Global_46754[1], &iLocal_4 + 1304, 6, 87, 1, 0, 0, 0);
	Global_46816[8] = Function_410("", "bac", Global_46736[2], &iLocal_4 + 1120, 6, 48, 0, 0, 0, 1);
	Global_46850[5] = Function_410("", "plt", Global_46746[0], &iLocal_4 + 1216, 6, 58, 1, 0, 0, 0);
	Global_46760[10] = Function_410("", "ple", Global_46736[0], &iLocal_4 + 1328, 6, 19, 0, 0, 0, 0);
	Global_46866[9] = Function_410("", "pri", Global_46746[2], &iLocal_4 + 1456, 6, 69, 1, 1, 0, 1);
	Global_46850[6] = Function_410("", "pch", Global_46746[0], &iLocal_4 + 1568, 6, 59, 0, 0, 0, 0);
	Global_46866[6] = Function_410("", "ram", Global_46746[2], &iLocal_4 + 1088, 6, 66, 0, 1, 0, 0);
	Global_46866[11] = Function_410("", "rnp", Global_46746[2], &iLocal_4 + 1464, 6, 71, 1, 1, 0, 1);
	Global_46760[7] = Function_410("", "rtl", Global_46736[0], &iLocal_4 + 1016, 6, 16, 1, 0, 0, 0);
	Global_46838[3] = Function_410("", "rep", Global_46736[3], &iLocal_4 + 1072, 6, 38, 1, 0, 0, 0);
	Global_46760[3] = Function_410("", "bat", Global_46736[0], &iLocal_4 + 984, 6, 13, 0, 0, 0, 1);
	Global_46894[4] = Function_410("", "roc", Global_46746[1], &iLocal_4 + 1128, 6, 77, 0, 0, 0, 0);
	Global_46796[6] = Function_410("", "scr", Global_46736[1], &iLocal_4 + 1048, 6, 32, 0, 0, 0, 1);
	Global_46850[3] = Function_410("", "sid", Global_46746[0], &iLocal_4 + 896, 6, 56, 0, 1, 0, 0);
	Global_46796[7] = Function_410("", "sil", Global_46736[1], &iLocal_4 + 1344, 6, 33, 1, 0, 0, 1);
	Global_46894[6] = Function_410("", "sms", Global_46746[1], &iLocal_4 + 1160, 6, 79, 0, 0, 0, 0);
	Global_46816[7] = Function_410("", "stl", Global_46736[2], &iLocal_4 + 1248, 6, 47, 0, 1, 1, 1);
	Global_46926[4] = Function_410("", "tnr", Global_46754[1], &iLocal_4 + 1296, 6, 88, 1, 0, 0, 1);
	Global_46926[8] = Function_410("", "tns", Global_46754[1], &iLocal_4 + 1576, 6, 92, 0, 0, 0, 0);
	Global_46760[14] = Function_410("", "tcr", Global_46736[0], &iLocal_4 + 1408, 6, 23, 0, 0, 0, 1);
	Global_46760[16] = Function_410("", "ven", Global_46736[0], &iLocal_4 + 1536, 6, 25, 0, 1, 0, 0);
	Global_46816[9] = Function_410("", "war", Global_46736[2], &iLocal_4 + 1592, 6, 49, 0, 0, 0, 0);
	Global_46914[3] = Function_410("", "ser", Global_46754[0], &iLocal_4 + 1280, 6, 96, 0, 0, 0, 1);
	Function_409(&(Global_43791[Global_46722[0]]), 1024);
	Function_409(&(Global_43791[Global_46722[1]]), 1024);
	Function_409(&(Global_43791[Global_46722[2]]), 1024);
	Function_409(&(Global_43791[Global_46722[3]]), 1024);
	Function_408();
	Global_46948 = Function_437(1, Global_46914[0], 3);
	Global_46949 = Function_437(1, Global_46760[4], 3);
	Global_46952 = Function_437(1, Global_46760[12], 3);
	Global_46950 = Function_437(1, Global_46866[4], 3);
	Global_46951 = Function_437(1, Global_46796[0], 3);
	Function_407(&Global_21684[Global_469487] + 40);
	PRINTNL();
	Function_407(&Global_21684[Global_469497] + 40);
	PRINTNL();
	Function_407(&Global_21684[Global_469527] + 40);
	PRINTNL();
	Function_407(&Global_21684[Global_469507] + 40);
	PRINTNL();
	Function_407(&Global_21684[Global_469517] + 40);
	PRINTNL();
	if (!Global_6666)
	{
		while (!Global_6617)
		{
			WAIT(false);
		}
	}
	if (!Global_6606)
	{
		if (!Global_53524.f_28)
		{
			Function_404(Function_406(1), 0, 1, 1, 0);
		}
	}
	if (Global_6605 && Global_6606)
	{
		Function_403();
	}
	DLC_INIT_CONTENT();
	Function_383();
	Function_374();
	Function_373();
	Function_372();
	Global_47341.f_4 = 4294967295;
	Global_47341.f_8 = 4294967295;
	Global_47341 = 0;
	Function_371();
	if (Global_6606)
	{
		if (Function_370(StackVal, StackVal, Global_47341))
		{
			bLocal_585 = false;
		}
		if (!Function_369(1, 0) || (Function_369(3, 0) && !Function_369(4, 0)))
		{
			bLocal_585 = false;
		}
	}
	if (Global_6605)
	{
		if (Function_462("missionStart"))
		{
			Global_47341.f_4 = Function_368("missionStart");
			PRINTINT(StackVal);
			PRINTNL();
		}
		if (Function_462("missionStartChapter"))
		{
			Global_47341.f_8 = Function_368("missionStartChapter");
			PRINTINT(StackVal);
			PRINTNL();
		}
	}
	if (StackVal && StackVal < 4294967295 < 4294967295)
	{
		if (Function_370(StackVal, StackVal, 1))
		{
			PRINTINT(StackVal);
			PRINTSTRING("-");
			PRINTINT(StackVal);
			PRINTNL();
			bLocal_585 = false;
			Global_47341 = 1;
		}
	}
	Function_366();
	ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
	Function_364(33039);
	Function_363(1178687);
	Function_362();
	Function_361();
	if (Function_462("nnoIdleCam"))
	{
		Function_436(4096);
	}
	if (Function_462("startAmbientWorldOff"))
	{
		Function_436(128543);
		Function_360(15);
		Function_359(256);
		Function_358(&Global_43580, 1);
	}
	if (Global_6606)
	{
		Function_355();
		Function_351(1);
	}
	Function_350(&Global_98980);
	if (Global_6666)
	{
		Function_349(1);
		Function_436(1061911);
	}
	Global_6632 = 1;
	SET_PAUSE_SCRIPT("$/content/DLC/ZombiePack/system/Pause_z");
	Global_99473 = MAKE_TIME_OF_DAY(5, false, 0);
	Global_99475 = MAKE_TIME_OF_DAY(7, false, 0);
	Global_99477 = MAKE_TIME_OF_DAY(11, false, 0);
	Global_99479 = MAKE_TIME_OF_DAY(14, false, 0);
	Global_99481 = MAKE_TIME_OF_DAY(18, false, 0);
	Global_99483 = MAKE_TIME_OF_DAY(22, false, 0);
	Global_99471 = (30.0f * 0,8f);
	SET_TIME_ACCELERATION(Global_99471);
	LIGHTS_SET_ON_TIME(17, 30);
	LIGHTS_SET_OFF_TIME(6, 0);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	if (Global_6666)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 13, 0, 0));
		Function_347(&Global_26182, 13);
		Function_346(&Global_26174, RAND_FLOAT_GAUSSIAN(1,35f, 0,25f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_6605 && Global_6606)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 6, 0, 0));
		Function_347(&Global_26182, 13);
		Function_346(&Global_26174, RAND_FLOAT_GAUSSIAN(1,35f, 0,25f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_6605)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 6, 0, 0));
		bVar43 = 13;
		bVar44 = RAND_INT_RANGE(false, 10000);
		if (bVar44 >= 9000)
		{
			bVar43 = 3;
		}
		else if (bVar44 >= 8000)
		{
			bVar43 = 2;
		}
		else if (bVar44 >= 7000)
		{
			bVar43 = 17;
		}
		Function_347(&Global_26182, bVar43);
		Function_346(&Global_26174, RAND_FLOAT_GAUSSIAN(1,35f, 0,25f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else
	{
		SET_TIME_OF_DAY(&Global_53524 + 56);
		Function_344();
		Function_347(&Global_26182, Global_26182);
	}
	ENABLE_WEATHER_SPHERE(31, false);
	ENABLE_WEATHER_SPHERE(30, false);
	ENABLE_WEATHER_SPHERE(32, false);
	ENABLE_WEATHER_SPHERE(33, false);
	ENABLE_WEATHER_SPHERE(29, false);
	ENABLE_WEATHER_SPHERE(23, false);
	if (Function_343(Global_53524.f_24))
	{
		Global_43788 = Global_53524.f_24;
		Function_341(Global_53524.f_24, 0);
	}
	if (bLocal_585)
	{
		fLocal_584 = 0.0f;
		SET_AMBIENT_FORCE_WAIT_STATE(0);
		Function_332(&iLocal_591, &fLocal_584, 0, 1);
		WAIT(false);
		while (Global_47148 >= 0)
		{
			WAIT(false);
		}
		while (!IS_LAYOUTREF_VALID(&Global_46715))
		{
			Function_332(&iLocal_591, &fLocal_584, 0, 1);
			WAIT(false);
		}
		while (StackVal && Function_331(DECOR_GET_INT(&Global_46715, "regid")) != 2)
		{
			WAIT(false);
		}
		Function_330();
	}
	if (!Function_425(64))
	{
		Function_328();
	}
	if (Global_6666)
	{
		Function_327();
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, true);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		SET_WEAPONENUM_LOCKED(21, 1);
		SET_WEAPONENUM_LOCKED(33, 0);
		SET_WEAPONENUM_LOCKED(5, 0);
		SET_WEAPONENUM_LOCKED(9, 0);
		SET_WEAPONENUM_LOCKED(34, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 15, 5.0f, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 33, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 4, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 5, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, false, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 8, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 9, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 16, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 34, 0.0f, 0, 1);
		ADD_ITEM(Function_326(3), &Global_54076, 0);
		ADD_ITEM(Function_326(3), &Global_54076, 0);
		ADD_ITEM(Function_326(3), &Global_54076, 0);
		ADD_ITEM(Function_326(3), &Global_54076, 0);
		ADD_ITEM(Function_326(3), &Global_54076, 0);
		ADD_ITEM(Function_326(1), &Global_54076, 0);
		ADD_ITEM(Function_326(1), &Global_54076, 0);
		ADD_ITEM(Function_326(1), &Global_54076, 0);
		ADD_ITEM(Function_326(1), &Global_54076, 0);
		ADD_ITEM(Function_326(1), &Global_54076, 0);
		ADD_ITEM(Function_326(20), &Global_54076, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 6, 0);
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 16);
		ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 16, 0);
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	else if (Global_6605)
	{
		Function_327();
		if (!Global_6606)
		{
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 16, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 22, 0.0f, 0, 1);
			ADD_ITEM(Function_326(3), &Global_54076, 0);
			ADD_ITEM(Function_326(3), &Global_54076, 0);
			ADD_ITEM(Function_326(3), &Global_54076, 0);
			ADD_ITEM(Function_326(15), &Global_54076, 0);
			ADD_ITEM(Function_326(19), &Global_54076, 0);
			ADD_ITEM(Function_326(20), &Global_54076, 0);
			Function_325();
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
		}
	}
	if (!Global_6605 && !Global_53524.f_32)
	{
		Function_324();
	}
	else
	{
		Global_53524.f_164 = 4294967295;
	}
	if (bLocal_585)
	{
		while (!STREAMING_IS_WORLD_LOADED() || (!Global_6617 && !Global_6666))
		{
			WAIT(false);
		}
	}
	Global_77930 = GET_CURRENT_GAME_TIME();
	Local_593 = 4294967295;
	Local_593.f_16 = 0;
	Local_593.f_20 = 0;
	Local_593.f_24 = 0;
	STORE_GAME_STATE(&Local_593, 48, 1);
	if (bLocal_585)
	{
		while (!Function_322())
		{
			WAIT(false);
		}
		iLocal_587 = iLocal_587;
		if ((*&Global_53524 + 76)[9] == 1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
			SET_PLAYER_POSTURE(0, 0, 0);
			ACTOR_DRAW_ANY_WEAPON(&Global_54076, 1);
		}
		(*&Global_53524 + 76)[9] = 0;
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		STREAMING_RELEASE_MAIN_POI();
		HUD_FADE_IN_NOW(2.0f, 1065353216);
		CAMERA_RESET(0);
		if (!Global_6666)
		{
			Function_314(GET_CURRENT_GAME_TIME() > 120.0f);
		}
		Global_39290[11] = 0;
	}
	Global_6634 = 0;
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_313(0));
	Function_311((15 - Function_312(90)));
	Function_310((15 - Function_312(90)));
	Function_309(2);
	Function_308((15 - Function_312(90)));
	Function_307((15 - Function_312(60)));
	Function_306((15 - Function_312(105)));
	Function_305(6);
	Function_304((15 - Function_312(200)));
	Function_303();
	if (Global_6605 || !Global_53524.f_28)
	{
		Function_465(2);
		Function_295(1);
	}
	Global_6659 = 4294967295;
	Global_6655 = 0;
	Function_294(1);
	Function_291();
	Global_6605 = 0;
	Global_6607 = 1;
	iLocal_591 = 0;
	iLocal_641 = 0;
	bVar45 = false;
	iVar46 = 0;
	Global_39873 = GET_CURRENT_GAME_TIME();
	Global_119940 = 300;
	iVar47 = 0;
	if (!Global_6605)
	{
		if (!Function_290(Global_119934, 16384))
		{
			bVar48 = false;
			iVar50 = 0;
			iVar49 = 1;
			while (iVar49 < (28 - 1))
			{
				iVar51 = iVar49;
				if (iVar51 != 0)
				{
					iVar52 = Function_289(iVar51);
					if (iVar52 != 4294967295)
					{
						uVar53 = Global_43791[iVar52];
						if (Function_434(uVar53, 0x10000000))
						{
							if (!Function_287(iVar52))
							{
								if (iVar52 == Global_43789)
								{
									bVar48 = true;
								}
								iVar50++;
							}
						}
					}
				}
				iVar49++;
			}
			if (bVar48)
			{
				if (iVar50 >= 1)
				{
					Function_282(&Global_54076, 16384, 1, 0);
				}
			}
		}
	}
	if (!IS_LAUNCH_RETAIL() && !Global_6666)
	{
		Function_281("no_autosave", 0x41200000, 1, 0, 2, 1, 0);
		WAIT(false);
	}
	if (bLocal_585 || Global_6666)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	SET_PLAYER_CONTROL_RUMBLE(0, 1);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
	SCRIPT_DONE_LOADING();
	bLocal_583 = Function_368("soaktest");
	if (bLocal_583 != 4294967295 && Function_462("soaktest"))
	{
		bLocal_583 = false;
	}
	switch (bLocal_583)
	{
		case 0x00000000:
			PRINTSTRING("Launching soak test!");
			LAUNCH_NEW_SCRIPT("systemTest/SoakTests/soaktest", 0);
			break;
	}
	if (GET_USER_DEFINED_WAYPOINT(&Var54))
	{
		Var54.f_4 = 25.0f;
		if (!Function_280(StackVal, StackVal, Var54, Vector(0.0f, 0.0f, 0.0f)))
		{
			Function_278(StackVal, Var54);
		}
	}
	Function_277(IS_GOLDEN_GUNS_ON());
	while (!IS_EXITFLAG_SET())
	{
		if (bLocal_586)
		{
			PRINTSTRING("Time for Exec:");
			PRINTINT(iLocal_641);
			PRINTSTRING(":");
			fVar56 = GET_PROFILE_TIME();
		}
		switch (bLocal_641)
		{
			case 0x00000000:
				if (Function_332(&iLocal_591, &fLocal_584, 1, 0))
				{
					iLocal_591 = 0;
					bLocal_641 = true;
				}
				iVar46++;
				bVar45 = false;
				break;
			
			case 0x00000001:
				Function_276();
				iVar46++;
				bVar45 = false;
				bLocal_641 = 2;
				break;
			
			case 0x00000002:
				if (Global_6619)
				{
					Global_6619 = 0;
					iLocal_592 = 0;
					bLocal_641 = true;
				}
				else if (Function_273(&iLocal_592))
				{
					iLocal_592 = 0;
					bLocal_641 = 3;
				}
				iVar46++;
				bVar45 = false;
				break;
			
			case 0x00000003:
				if (Function_272(1, 2) == 0)
				{
					if (Global_6623)
					{
						Global_6623 = 0;
						Function_271();
					}
				}
				if (Function_272(2, 2) != 0 && Function_272(2, 1) != 0)
				{
					if (Global_6625)
					{
						Global_6625 = 0;
					}
				}
				iVar46++;
				bVar45 = false;
				bLocal_641 = 4;
				break;
			
			case 0x00000004:
				Global_99472 = Function_270();
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
								Global_26182.f_44++;
							}
						}
						else if (Global_99471 == (30.0f * 0,8f))
						{
							Global_99471 = (30.0f * 0,8f);
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
						else if (Global_99471 == (30.0f * 0,8f))
						{
							if (GET_HOUR(GET_TIME_OF_DAY()) < 15)
							{
							}
							Global_99471 = (30.0f * 0,8f);
							SET_TIME_ACCELERATION(Global_99471);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
						}
					}
					else if (Global_99471 == (30.0f * 0,8f))
					{
						Global_99471 = (30.0f * 0,8f);
						SET_TIME_ACCELERATION(Global_99471);
						SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
					}
				}
				iVar46++;
				bVar45 = false;
				bLocal_641 = 5;
				break;
			
			case 0x00000005:
				Function_58();
				Function_55();
				Function_18();
				Function_10();
				if (Global_47150)
				{
					PREVENT_DESPAWN_CLEAR();
					Global_47150 = 0;
				}
				bVar45 = (1000 - iVar46 * 33);
				iVar46 = 0;
				bLocal_641 = false;
				break;
		}
		if (bLocal_586)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar56));
			PRINTNL();
		}
		WAIT(bVar45);
	}
	if (!HUD_IS_FADED())
	{
		HUD_FADE_OUT(0,5f, 1f, 1);
	}
	DYNAMICMIXER_DETRIGGERSTATE(&uLocal_642, 0);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_locatorDummy02x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "horseHitch1", Vector(1,05f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_locatorDummy02x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "horseHitch2", Vector(-1,05f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_coffin04x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "LootCoffin", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	Function_6(&iVar0);
	Function_5();
	Function_4();
	Function_3();
	Function_2();
	Function_1();
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

void Function_1() //Position: 0x3E39 / 15929
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_2() //Position: 0x3E4B / 15947
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_3() //Position: 0x3E60 / 15968
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

void Function_4() //Position: 0x3E93 / 16019
{
	Function_6(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_5() //Position: 0x3EA6 / 16038
{
	ANIMAL_SPECIES_GRINGO_CLEAR_ALL();
	return;
}

void Function_6(int iParam0) //Position: 0x3EAF / 16047
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x3ED7 / 16087
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0x4022 / 16418
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x403F / 16447
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x405D / 16477
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_369(4, 0))
	{
		UNK_0xBAEC56D1(4294967295);
		if (!DECOR_CHECK_EXIST(&Global_54076, "zMarston"))
		{
			DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		}
		return;
	}
	if (!Function_17(5) || Function_12(3))
	{
		UNK_0xBAEC56D1(4294967295);
		return;
	}
	iVar0 = 180000;
	iVar1 = 60000;
	iVar2 = (iVar1 + ROUND((((100.0f - Function_11(5)) / 100.0f) * IntToFloat((iVar0 - iVar1)))));
	UNK_0xBAEC56D1(iVar2);
	return;
}

float Function_11(int iParam0) //Position: 0x40DC / 16604
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_12(int iParam0) //Position: 0x4115 / 16661
{
	int iVar0;
	
	if (!Function_16(iParam0))
	{
		return 0;
	}
	iVar0 = Function_406(iParam0);
	if (!Function_13(Function_406(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_13(int iParam0) //Position: 0x414B / 16715
{
	if (!Function_15(iParam0))
	{
		return 0;
	}
	if (!Function_14(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_14(int iParam0) //Position: 0x416F / 16751
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_15(int iParam0) //Position: 0x4184 / 16772
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0x419B / 16795
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_17(int iParam0) //Position: 0x41B1 / 16817
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x41C6 / 16838
{
	int iVar0;
	
	if (((((((((Global_99146 || Global_6627) || Global_6638) || Global_6639) || Global_6624) || !IS_ACTOR_ALIVE(&Global_54076)) || HUD_IS_FADED()) || HUD_IS_FADING()) || Function_54()) || (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (!Global_39428[iVar0])
		{
			if (NET_IS_UNLOCKED(iVar0) && !Function_54())
			{
				Function_19(iVar0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_19(int iParam0) //Position: 0x4233 / 16947
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000004:
			iVar0 = 0;
			break;
		
		case 0x00000009:
			if (!Global_39428[iParam0])
			{
				Function_52(992, 0, 1);
				Function_51(52, 1, 0);
				iVar0 = 1;
				PRINT_HELP_B("unlock_help_9", 7,5f, 1, 0, 2, 1, 0, 0);
			}
			break;
		
		case 0x0000000A:
			iVar0 = 1;
			if (!Global_39428[iParam0])
			{
				PRINT_HELP_B("unlock_help_10", 7,5f, 1, 0, 2, 1, 0, 0);
			}
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_20(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_20(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_20(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_20(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_20(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_20(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_20(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_20(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_20(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_20(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_20(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_20(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_20(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_20(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_20(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_20(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_20(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_20(4);
			break;
		
		case 0x00000023:
		case 0x00000028:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000000:
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			iVar0 = 0;
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

bool Function_20(bool bParam0) //Position: 0x44D9 / 17625
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_462("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_50())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_49() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_6667[Global_1096628] + 16);
		}
	}
	if (bParam0 != 4)
	{
		Function_21();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

void Function_21() //Position: 0x4540 / 17728
{
	Function_47();
	Function_46();
	Function_46();
	Function_45();
	Function_45();
	Function_44();
	Function_44();
	Function_29(0);
	Function_29(0);
	Function_26();
	Function_25();
	Function_24();
	Function_23();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_22();
	return;
}

void Function_22() //Position: 0x458B / 17803
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

void Function_23() //Position: 0x4691 / 18065
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

void Function_24() //Position: 0x46C4 / 18116
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

void Function_25() //Position: 0x4857 / 18519
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

void Function_26() //Position: 0x4A10 / 18960
{
	Function_27(&Global_42918, 1, 0);
	return;
}

void Function_27(struct<2317> Param0) //Position: 0x4A1E / 18974
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
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_28();
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

var Function_28() //Position: 0x4C3B / 19515
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_29(int iParam0) //Position: 0x4C50 / 19536
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
					iVar2 = ((Function_313((50 + iVar4)) + Function_313((183 + iVar4))) + Function_313((90 + iVar4)));
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
	Function_30(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x4CF7 / 19703
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
		Function_43(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_42(iParam0);
	if (&bParam2)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x4F93 / 20371
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_41(390))), 32);
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
					bVar19 = (Function_11(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_11(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_39(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_36(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_33(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_32() //Position: 0x55D1 / 21969
{
	int iVar0;
	
	return &iVar0;
}

var Function_33(int iParam0) //Position: 0x55DA / 21978
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x55EB / 21995
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_35(char* cParam0) //Position: 0x56E2 / 22242
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_36(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x56FD / 22269
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_38(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_37(Function_38(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_37(int iParam0, int iParam1) //Position: 0x5764 / 22372
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_38(int iParam0, bool bParam1) //Position: 0x5776 / 22390
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_39(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5788 / 22408
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
	if (((Function_40(iParam0) != 19 || Function_40(iParam0) != 17) || Function_40(iParam0) != 10) || Function_40(iParam0) != 9)
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

int Function_40(int iParam0) //Position: 0x58BC / 22716
{
	return Global_55480[iParam016].f_96;
}

float Function_41(int iParam0) //Position: 0x58CB / 22731
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_42(int iParam0) //Position: 0x5908 / 22792
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

int Function_43(int iParam0, bool bParam1, bool bParam2) //Position: 0x5AA2 / 23202
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

struct<8> Function_44() //Position: 0x5CE6 / 23782
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
		iVar2 = ((Function_313((50 + iVar3) + 15) + Function_313((183 + iVar3) + 15)) + Function_313((90 + iVar3) + 15));
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
	Function_30(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_45() //Position: 0x5D6F / 23919
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
			iVar2 = ((Function_313((50 + iVar3) + 8) + Function_313((183 + iVar3) + 8)) + Function_313((90 + iVar3) + 8));
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
	Function_30(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_46() //Position: 0x5E06 / 24070
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
		iVar2 = ((Function_313((50 + iVar3)) + Function_313((183 + iVar3))) + Function_313((90 + iVar3)));
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
	Function_30(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_47() //Position: 0x5E85 / 24197
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_48(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_30(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_48(int iParam0, bool bParam1, int iParam2) //Position: 0x5EC2 / 24258
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
	Function_43(iParam0, bParam1, 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_31(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

struct<16> Function_49() //Position: 0x60CE / 24782
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_17(iVar0))
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
	if (Global_21684[Function_406(Global_10966)7].f_32 < Global_116927[iVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[iVar143] + 4);
}

bool Function_50() //Position: 0x616B / 24939
{
	if (Function_434(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_51(bool bParam0, bool bParam1, int iParam2) //Position: 0x6186 / 24966
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_326(bParam0), Function_28()) == 0)
		{
			ADD_ITEM(Function_326(bParam0), Function_28(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_326(bParam0), Function_28(), &iParam2);
	return 1;
}

void Function_52(var uParam0, bool bParam1, bool bParam2) //Position: 0x61D4 / 25044
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_53(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_53(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x6203 / 25091
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_54() //Position: 0x6214 / 25108
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_55() //Position: 0x6241 / 25153
{
	Function_56(7);
	Function_56(8);
	Function_56(10);
	Function_56(6);
	Function_56(9);
	Function_56(11);
	return;
}

void Function_56(bool bParam0) //Position: 0x6263 / 25187
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
		if (Function_57())
		{
			fVar0 = (fVar0 * 0,5f);
		}
		SET_AMMO_DROP_BIAS(bParam0, fVar0);
	}
	return;
}

bool Function_57() //Position: 0x62B9 / 25273
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_58() //Position: 0x62E4 / 25316
{
	var uVar0;
	
	uVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(&uVar0))
	{
		return;
	}
	if (Function_269(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_267(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_266(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_265(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_264(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_262(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_259(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_255(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_254(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_252(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_250(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_247(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_246(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_245(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_242(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_232(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_231(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_230(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_229(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_228(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_225(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_224(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_223(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_220(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_219(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_218(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_216(&uVar0))
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
	if (Function_191(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_190(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_189(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_188(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_187(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_186(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_185(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_184(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_183(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_182(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_181(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_180(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_178(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_175(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_173(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_172(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_78(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_77(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_76(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_70(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_69(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_68(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_62(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_61(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_60(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_59(&uVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_59(int iParam0) //Position: 0x65EC / 26092
{
	if (STRING_CONTAINS_STRING(&iParam0, "playermeds"))
	{
		Function_51(3, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_60(int iParam0) //Position: 0x6612 / 26130
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

bool Function_61(int iParam0) //Position: 0x668F / 26255
{
	if (STRING_CONTAINS_STRING(&iParam0, "makeswim"))
	{
		DECOR_SET_BOOL(&Global_54076, "swimming", 1);
		return 1;
	}
	return 0;
}

bool Function_62(int iParam0) //Position: 0x66C0 / 26304
{
	if (STRING_CONTAINS_STRING(&iParam0, "regions_reset"))
	{
		Function_63(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_63(var uParam0, bool bParam1, int iParam2) //Position: 0x66E8 / 26344
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
		if (Function_343(Global_43789))
		{
			Function_67(&(Global_43791[Global_43789]), 131072);
			Function_409(&(Global_43791[Global_43789]), 2097152);
			Function_65(Global_43789);
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
				if (Function_64(&(Global_43791[iVar0]), 4) || Function_64(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_409(&(Global_43791[iVar0]), 2097155);
					Function_67(&(Global_43791[iVar0]), 262144);
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

bool Function_64(var uParam0, int iParam1) //Position: 0x67F4 / 26612
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_65(int iParam0) //Position: 0x6811 / 26641
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_66())
			{
				return;
			}
		}
		if (!Function_64(&(Global_43791[iParam0]), 2048))
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

bool Function_66() //Position: 0x6890 / 26768
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_64(&(Global_43791[iVar0]), 4) || Function_64(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_67(var uParam0, int iParam1) //Position: 0x68F9 / 26873
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_68(int iParam0) //Position: 0x690A / 26890
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

bool Function_69(int iParam0) //Position: 0x69F0 / 27120
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

bool Function_70(int iParam0) //Position: 0x6AA1 / 27297
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
			Function_71(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_71(int iParam0, bool bParam1) //Position: 0x6AE2 / 27362
{
	bool bVar0;
	int iVar1;
	
	Function_48(iParam0, bParam1, 0);
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
	iVar1 = Function_75(iParam0, 4294967295);
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
	iVar1 = Function_72();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 0;
	return 1;
}

int Function_72() //Position: 0x6C7D / 27773
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
	Function_73();
	return 0;
}

void Function_73() //Position: 0x6D1E / 27934
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
		Function_74(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_74(int iParam0) //Position: 0x6DDC / 28124
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

var Function_75(int iParam0, int iParam1) //Position: 0x6E42 / 28226
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

bool Function_76(int iParam0) //Position: 0x6E87 / 28295
{
	var uVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(&uVar0);
			Function_71(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_77(int iParam0) //Position: 0x6EC1 / 28353
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

bool Function_78(char* cParam0) //Position: 0x6F1E / 28446
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
					Function_79(Function_437(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_79(Function_437(0, 24, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_79(Function_437(0, 12, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 13, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_79(Function_437(0, 8, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 9, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 23, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_79(Function_437(0, 10, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 11, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 17, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_79(Function_437(0, 18, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 19, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_79(Function_437(0, 2, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 3, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 22, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 6, 1), 0, 1, 1, 0);
					Function_79(Function_437(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_79(Function_437(1, 30, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 33, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 32, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_79(Function_437(1, 34, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_79(Function_437(1, 27, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 26, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 28, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 29, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_79(Function_437(1, 39, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 37, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 38, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 41, 1), 0, 1, 1, 0);
					Function_79(Function_437(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_79(Function_437(2, 45, 1), 0, 1, 1, 0);
					Function_79(Function_437(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_79(Function_437(2, 43, 1), 0, 1, 1, 0);
					Function_79(Function_437(2, 47, 1), 0, 1, 1, 0);
					Function_79(Function_437(2, 48, 1), 0, 1, 1, 0);
					Function_79(Function_437(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_79(Function_437(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_79(Function_437(3, 49, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 55, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 56, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 52, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 53, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 54, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 50, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 51, 1), 0, 1, 1, 0);
					Function_79(Function_437(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_79(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x73BB / 29627
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_305(12);
	Function_309(2);
	Function_306((15 - Function_312(105)));
	if (Function_171(bParam0) == 1)
	{
		iVar2 = Function_170(bParam0);
		Function_165(&(Global_6667[iVar228]));
		Function_436(4194304);
		if (&bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_116(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		bVar1 = Function_115();
		if (&bParam1)
		{
			Function_103(iVar2, bParam0, bVar1);
			Function_102();
		}
	}
	Function_82(bParam0, &bParam1, &bParam2, bVar1);
	if (Function_171(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_81(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_171(bParam0) == 1)
		{
			iVar2 = Function_170(bParam0);
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
	Function_80();
}

void Function_80() //Position: 0x74AF / 29871
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_369(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_81(int iParam0, bool bParam1) //Position: 0x74E1 / 29921
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
							Function_282(&Global_54076, 0x1000000, 3, 0);
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
							Function_282(&Global_54076, 0x1000000, 3, 0);
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
							Function_282(&Global_54076, 0x1000000, 3, 0);
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
							Function_282(&Global_54076, 0x1000000, 3, 0);
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
							Function_282(&Global_54076, 0x1000000, 3, 0);
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
							Function_282(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_81(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_81(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_81(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_81(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_81(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_81(57, 0);
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

void Function_82(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x77DE / 30686
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_13(bParam0))
	{
		Function_100();
		return;
	}
	bVar0 = Function_171(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_57())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_170(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_99(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_98(Global_10966) };
		}
		if (Function_57())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_94();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_57())
	{
		Function_93();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_91("DEED_COMPLETE", bParam0);
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
			Function_85(bParam0);
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
						switch (Function_170(bParam0))
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
			Function_295(1);
			Function_84(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_83(bParam0, &Var14);
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

void Function_83(int iParam0, struct<41> Param1) //Position: 0x7A3C / 31292
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_84(int iParam0, int iParam1) //Position: 0x7A7A / 31354
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_85(bool bParam0) //Position: 0x7AB9 / 31417
{
	int iVar0;
	int iVar1;
	
	if (!Function_15(bParam0))
	{
		return;
	}
	switch (Function_171(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_170(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_170(bParam0))
			{
				case 0x00000000:
					if (Function_87(bParam0) == 1)
					{
						iVar0 = Function_86(bParam0);
						if (Function_343(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(bParam0) == 0)
			{
				if (Function_87(bParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_170(bParam0);
					if (Function_343(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(bParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_170(bParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

int Function_86(bool bParam0) //Position: 0x7F95 / 32661
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x7FB4 / 32692
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x7FCE / 32718
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x805E / 32862
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
	Function_43(iParam0, TO_FLOAT(bParam1), 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x8286 / 33414
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

void Function_91(var uParam0, bool bParam1) //Position: 0x8324 / 33572
{
	struct<4> Var0;
	
	if (!Function_13(bParam1))
	{
		return;
	}
	switch (Function_171(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_92(Function_170(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_171(bParam1), Function_170(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_171(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_171(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_171(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_171(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_171(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_92(int iParam0) //Position: 0x844E / 33870
{
	char* cVar0[16];
	
	if (!Function_50())
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

void Function_93() //Position: 0x8488 / 33928
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
	PLAYSTAT_INT("HC_MONEY", Function_313(0));
	PLAYSTAT_INT("HC_FAME", Function_313(3));
	PLAYSTAT_INT("HC_HONOR", Function_313(1));
	return;
}

void Function_94() //Position: 0x85EA / 34282
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(Global_10966))
	{
		return;
	}
	iVar0 = Function_313(24);
	iVar1 = Function_406(Global_10966);
	if (!Function_16(iVar0) && Function_97(iVar1) < 0)
	{
		Function_30(24, Global_10966, 0);
		Function_95(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_97(Function_406(iVar0)))
	{
		Function_30(24, Global_10966, 0);
		Function_95(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_95(int iParam0, char* cParam1) //Position: 0x866A / 34410
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
		Function_96(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_96(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x89C1 / 35265
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

int Function_97(int iParam0) //Position: 0x8A49 / 35401
{
	if (!Function_13(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_98(int iParam0) //Position: 0x8A63 / 35427
{
	char* cVar0[16];
	
	if (!Function_50())
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

struct<24> Function_99(char* cParam0) //Position: 0x8AA2 / 35490
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

void Function_100() //Position: 0x8CF8 / 36088
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
			Function_101(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_101(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8F3F / 36671
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_102() //Position: 0x8F6B / 36715
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

void Function_103(int iParam0, bool bParam1, bool bParam2) //Position: 0x8F99 / 36761
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
	
	if (!Function_16(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_114(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[bParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[bParam17].f_32)
		{
			Global_21684[bParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_313(42) - Global_53524.f_168);
				bVar1 = (Function_313(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[bParam17].f_20)
				{
					Global_21684[bParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_41(49)) - Global_53524.f_176);
				bVar3 = (Function_313(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[bParam17].f_28)
				{
					Global_21684[bParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_313(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[bParam17].f_20)
				{
					Global_21684[bParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[bParam17].f_28)
				{
					Global_21684[bParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_113(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_104(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_98(iParam0) };
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

void Function_104(int iParam0, bool bParam1, bool bParam2) //Position: 0x9235 / 37429
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_57())
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
	iVar0 = Function_313(3);
	Function_109();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_108(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_290(Global_119936, 4))
			{
				Function_282(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_11(3));
	iVar0 = Function_313(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_106(4, Function_107(Global_21369.f_248), 1);
				Function_105(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_106(4, Function_107(Global_21369.f_248), 1);
				Function_105(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_106(4, Function_107(Global_21369.f_248), 1);
				Function_105(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_106(4, Function_107(Global_21369.f_248), 1);
				Function_105(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_106(4, Function_107(Global_21369.f_248), 1);
				Function_105(Global_21369.f_244, Global_21369.f_248);
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

void Function_105(int iParam0, int iParam1) //Position: 0x9409 / 37897
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

int Function_106(int iParam0, char* cParam1) //Position: 0x9673 / 38515
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
	Function_95(iParam0, &cParam1, 0, 1);
	iVar1 = Function_72();
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

var Function_107(int iParam0) //Position: 0x9803 / 38915
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

int Function_108(int iParam0, bool bParam1) //Position: 0x9892 / 39058
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_75(iParam0, 4294967295);
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
	iVar1 = Function_72();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

void Function_109() //Position: 0x9A3E / 39486
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x9A54 / 39508
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x9A94 / 39572
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_112(int iParam0) //Position: 0x9AD4 / 39636
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x9AE3 / 39651
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

int Function_114(int iParam0) //Position: 0x9CAB / 40107
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

var Function_115() //Position: 0x9D40 / 40256
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x9D65 / 40293
{
	if (!Function_16(iParam0))
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
			Function_104(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_104(25, 1, 0);
			Function_121(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_121(50, 1, 1);
			Function_104(250, 1, 0);
			Function_117(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_104(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_104(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_121(50, 1, 1);
			Function_104(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_121(5, 1, 1);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_104(75, 1, 0);
			Function_117(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_121(5, 1, 1);
			Function_104(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_104(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_121(25, 1, 1);
			Function_104(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_121(10, 1, 1);
			Function_104(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_104(50, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_104(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_104(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_121(20, 1, 1);
			Function_104(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_121(25, 1, 1);
			Function_104(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_121(10, 1, 1);
			Function_104(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_104(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_117(100, 1, 0);
			Function_121(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_121(3, 1, 1);
			Function_104(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_117(125, 1, 0);
			Function_104(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_121(50, 1, 1);
			Function_104(100, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_121(50, 1, 1);
			Function_104(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_121(75, 1, 1);
			Function_104(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_104(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_104(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_104(250, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_104(75, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_104(200, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_104(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_104(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_121(50, 1, 1);
			Function_104(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_121(100, 1, 1);
			Function_104(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_104(200, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_104(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_104(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_104(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_104(500, 1, 0);
			Function_117(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_104(150, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_117(25, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_104(150, 1, 0);
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_117(150, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_117(150, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0xA234 / 41524
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_57())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_313(1);
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
			Function_108(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_290(Global_119936, 1))
				{
					Function_282(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_120(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_290(Global_119936, 2))
				{
					Function_282(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_119(1, (4294967295 * bVar1), 0);
	}
	if (Function_313(1) <= 4294962296)
	{
		Function_30(1, 4294962296, 0);
	}
	else if (Function_313(1) >= 5000)
	{
		Function_30(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_11(1));
	iVar0 = Function_313(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_106(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_106(2, Function_118(Global_21369.f_244), 0);
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
				Function_106(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_106(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_106(2, Function_118(Global_21369.f_244), 1);
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
				Function_106(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_106(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_106(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_106(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_106(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_106(2, Function_118(Global_21369.f_244), 1);
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
				Function_106(2, Function_118(Global_21369.f_244), 0);
			}
			break;
	}
	Function_105(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_118(int iParam0) //Position: 0xA55B / 42331
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0xA5FE / 42494
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
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_120(int iParam0, bool bParam1) //Position: 0xA7FB / 43003
{
	bool bVar0;
	int iVar1;
	
	Function_119(iParam0, bParam1, 0);
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
	iVar1 = Function_75(iParam0, 4294967295);
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
	iVar1 = Function_72();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA9A6 / 43430
{
	bool bVar0;
	
	bVar0 = Function_313(0);
	if ((Function_313(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_313(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_313(597) + Function_313(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0xAA78 / 43640
{
	struct<4> Var0;
	
	if (!Function_16(iParam0))
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
			Function_163(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(Global_46760[0]);
			Function_161(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_159(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_161(Global_46816[0]);
			Function_151(0);
			Function_149(2, 1);
			Function_149(0, 1);
			Function_149(1, 1);
			break;
		
		case 0x00000003:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_161(Global_46816[0]);
			Function_161(Global_46760[0]);
			Function_147(0, 1);
			Function_147(15, 1);
			Function_147(9, 1);
			Function_147(12, 1);
			Function_147(16, 1);
			Function_149(3, 1);
			break;
		
		case 0x00000005:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_159(21, &bParam2, 4);
			Function_161(Global_46816[0]);
			Function_149(39, 1);
			break;
		
		case 0x00000007:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_146())
				{
					if (!Function_145(4))
					{
						Function_137(4, 0, 0, 1, 0);
					}
				}
			}
			Function_161(Global_46760[0]);
			Function_161(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_161(Global_46760[0]);
			Function_161(Global_46816[2]);
			Function_67(&(Global_43791[Global_46816[2]]), 32768);
			Function_409(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_159(9, &bParam2, 4);
			Function_161(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_161(Global_46760[0]);
			Function_161(Global_46796[0]);
			Function_67(&(Global_43791[Global_46796[0]]), 32768);
			Function_409(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_161(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(Global_46760[0]);
			Function_161(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_161(Global_46760[1]);
			Function_161(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_161(Global_46838[0]);
			Function_161(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_161(Global_46796[5]);
			Function_161(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_159(21, &bParam2, 4);
			Function_161(Global_46760[4]);
			Function_161(Global_46796[4]);
			Function_136(&Global_119935, 0x2000000);
			Function_136(&Global_119935, 0x4000000);
			Function_136(&Global_119935, 4096);
			Function_136(&Global_119935, 8);
			Function_136(&Global_119935, 8388608);
			Function_136(&Global_119935, 524288);
			Function_136(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_161(Global_46760[4]);
			Function_161(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_409(&(Global_43791[Global_46760[4]]), 256);
			Function_161(Global_46760[4]);
			Function_161(Global_46796[0]);
			Function_67(&(Global_43791[Global_46796[0]]), 32768);
			Function_409(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_161(Global_46760[0]);
			Function_161(Global_46760[5]);
			Function_159(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_161(Global_46796[3]);
			Function_67(&(Global_43791[Global_46796[3]]), 32768);
			Function_409(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_159(9, &bParam2, 4);
			Function_161(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_67(&(Global_43791[Global_46838[1]]), 32768);
			Function_161(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_159(12, &bParam2, 4);
			Function_409(&(Global_43791[Global_46838[1]]), 256);
			Function_161(Global_46816[3]);
			Function_161(Global_46866[0]);
			Function_161(Global_46850[0]);
			Function_151(4);
			Function_147(13, 1);
			Function_147(1, 1);
			Function_147(18, 1);
			Function_149(34, 1);
			Function_149(44, 1);
			Function_149(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_159(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_161(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_161(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_161(Global_46866[0]);
			Function_161(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_161(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_161(Global_46850[0]);
			Function_161(Global_46866[0]);
			Function_161(Global_46866[1]);
			Function_161(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_159(23, &bParam2, 3);
			Function_147(23, 1);
			Function_161(Global_46850[0]);
			Function_161(Global_46850[2]);
			Function_67(&(Global_43791[Global_46850[2]]), 32768);
			Function_409(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_159(19, &bParam2, 4);
			Function_161(Global_46850[0]);
			Function_161(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_159(24, &bParam2, 3);
			Function_147(24, 1);
			Function_161(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_161(Global_46850[0]);
			Function_161(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_161(Global_46866[12]);
			Function_161(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_161(Global_46866[12]);
			Function_161(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_159(25, &bParam2, 10);
			Function_161(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_161(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_161(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_159(13, &bParam2, 4);
			Function_161(Global_46866[2]);
			Function_161(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_145(8))
				{
					Function_137(8, 0, 0, 1, 0);
				}
			}
			Function_161(Global_46850[0]);
			Function_151(9);
			Function_147(7, 1);
			Function_147(11, 1);
			Function_147(3, 1);
			Function_147(20, 1);
			Function_149(57, 1);
			break;
		
		case 0x0000002A:
			Function_159(2, &bParam2, 4);
			Function_161(Global_46914[0]);
			Function_161(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_161(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_161(Global_46914[0]);
			Function_161(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_161(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_161(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_161(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_159(17, &bParam2, 4);
			Function_161(Global_46926[0]);
			Function_161(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_134(15))
				{
					Function_129(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_409(&(Global_43791[Global_46914[1]]), 256);
			Function_151(11);
			Function_161(Global_46914[1]);
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_161(Global_46914[1]);
			Function_161(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_161(Global_46914[1]);
			Function_123(11);
			Function_151(12);
			Global_26200[1114].f_40 = 0;
			Function_149(56, 1);
			if (!&bParam2)
			{
				if (!Function_145(9))
				{
					Function_137(9, 0, 0, 0, 0);
				}
				if (!Function_145(10))
				{
					Function_137(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(int iParam0) //Position: 0xB393 / 45971
{
	var uVar0;
	
	if (!Function_128(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_127(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_127(&Global_26200[iParam014] + 88, 0);
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
			Function_124(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB510 / 46352
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
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_280(StackVal, StackVal, Var1, Var3))
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

struct<8> Function_125(int iParam0) //Position: 0xB61B / 46619
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

int Function_126(vector3 vParam0) //Position: 0xB672 / 46706
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

void Function_127(var uParam0, int iParam1) //Position: 0xB6C0 / 46784
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

bool Function_128(int iParam0) //Position: 0xB71B / 46875
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB731 / 46897
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0))
	{
		if (!Function_145(bParam0))
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_132(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_295(1);
				Function_84(1, 0);
			}
			else
			{
				Function_130();
			}
		}
	}
	return;
}

void Function_130() //Position: 0xB8D2 / 47314
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB8D8 / 47320
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

void Function_132(bool bParam0, int iParam1) //Position: 0xB987 / 47495
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0xB9DC / 47580
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0xB9F2 / 47602
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_135(int iParam0, int iParam1) //Position: 0xBA43 / 47683
{
	int iVar0;
	
	if (!Function_133(iParam0))
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

void Function_136(var uParam0, int iParam1) //Position: 0xBA70 / 47728
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBA81 / 47745
{
	struct<8> Var0;
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_144(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_145(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_295(1);
				Function_84(1, 5);
			}
			else
			{
				Function_130();
			}
		}
		Function_138(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_54() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_54() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_281(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_50())
		{
			if (!Function_290(Global_119934, 2))
			{
				Function_282(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_138(bool bParam0) //Position: 0xBBDD / 48093
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
			if (Function_142(bParam0, Function_143(bVar24)))
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
			if (Function_142(bParam0, Function_143(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_141(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_140(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_139(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_139(int iParam0) //Position: 0xBD8D / 48525
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

void Function_140(char* cParam0, bool bParam1) //Position: 0xBDE4 / 48612
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

var Function_141(int iParam0) //Position: 0xBE09 / 48649
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

bool Function_142(bool bParam0, int iParam1) //Position: 0xBE5F / 48735
{
	int iVar0;
	
	if (!Function_133(bParam0))
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

int Function_143(bool bParam0) //Position: 0xBEBE / 48830
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_144(int iParam0) //Position: 0xBECA / 48842
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_145(int iParam0) //Position: 0xBEE6 / 48870
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_146() //Position: 0xBF38 / 48952
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_434(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_147(int iParam0, int iParam1) //Position: 0xBF68 / 49000
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_148(iParam0, iParam1);
	Function_282(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_148(int iParam0, int iParam1) //Position: 0xBFDD / 49117
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_149(int iParam0, int iParam1) //Position: 0xC052 / 49234
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_150(iParam0, iParam1);
	Function_282(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0xC0C5 / 49349
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_151(int iParam0) //Position: 0xC120 / 49440
{
	var uVar0;
	var uVar1;
	
	if (!Function_128(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_158(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_158(&Global_26200[iParam014] + 88, 0);
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
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_281("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_124(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_137(14, 1, 0, 0, 0);
				Function_152(14, 1, 0, 0, 0);
			}
			if (!Function_131(0, 0, 1, 1))
			{
				Function_295(1);
				Function_84(1, 6);
			}
			else
			{
				Function_130();
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
			Function_281("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_152(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xC3E0 / 50144
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_144(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_135(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (!&bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_281(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_142(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_132(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_295(1);
				Function_84(1, 0);
			}
			else
			{
				Function_130();
			}
		}
		Function_138(bParam0);
		if (StackVal && !Function_434(((((!Function_54() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_434((((Function_54() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_50())
		{
			if (!Function_290(Global_119934, 2))
			{
				Function_282(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_154();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_153(3, bParam1);
				break;
			
			case 0x00000005:
				Function_153(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_153(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_153(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_153(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_153(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_153(int iParam0, bool bParam1) //Position: 0xC67F / 50815
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

void Function_154() //Position: 0xC6EE / 50926
{
	if (Function_133(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_157(Global_42827);
			*(&Global_42827 + 8) = Function_155(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_157(Global_42827);
			*(&Global_42827 + 8) = Function_155(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_155(int iParam0, int iParam1) //Position: 0xC76E / 51054
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
					if (Function_369(6, 0) || Function_369(12, 0))
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
					if (Function_17(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_369(5, 0))
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
					if (Function_17(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_17(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_17(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_17(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_369(26, 0))
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
					if (Function_17(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_17(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_17(27) && iVar16)
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
					if (Function_17(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_17(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_17(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_17(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_369(17, 0) && iVar13)
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
					if (Function_17(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_369(6, 0) && Function_17(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_17(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_369(9, 0) && Function_17(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_17(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_369(8, 0) && iVar17)
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
	if (Function_156(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_156(StackVal, vVar2))
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
	if (!Function_156(StackVal, vVar2))
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

bool Function_156(char* cParam0) //Position: 0xD3D1 / 54225
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_157(int iParam0) //Position: 0xD3E9 / 54249
{
	int iVar0;
	int iVar1;
	
	if (!Function_133(iParam0))
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

void Function_158(var uParam0, int iParam1) //Position: 0xD438 / 54328
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

void Function_159(bool bParam0, bool bParam1, int iParam2) //Position: 0xD490 / 54416
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_160(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_163(bParam0, 0, 0);
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

bool Function_160(int iParam0, int iParam1) //Position: 0xD503 / 54531
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_161(int iParam0) //Position: 0xD517 / 54551
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_64(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_67(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_162(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
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
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_11(473) <= Function_41(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

int Function_162(int iParam0) //Position: 0xD608 / 54792
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_343(iParam0))
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

int Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0xD660 / 54880
{
	if (!Function_164(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_28(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_28(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_28(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_164(int iParam0) //Position: 0xD6BA / 54970
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_165(struct<185> Param0) //Position: 0xD6CC / 54988
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
			Function_166(4, 0, 0);
		}
	}
	return;
}

void Function_166(bool bParam0, var uParam1, int iParam2) //Position: 0xD737 / 55095
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
		Function_167(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_167(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD821 / 55329
{
	int iVar0;
	
	Function_169(bParam0);
	Function_407(&bParam1);
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
	Function_168();
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

void Function_168() //Position: 0xD9A0 / 55712
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_169(int iParam0) //Position: 0xD9AC / 55724
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

int Function_170(bool bParam0) //Position: 0xD9F2 / 55794
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

int Function_171(bool bParam0) //Position: 0xDA12 / 55826
{
	if (!Function_15(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_172(int iParam0) //Position: 0xDA2D / 55853
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

bool Function_173(char* cParam0) //Position: 0xDCAA / 56490
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
					Function_174();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_174();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_84(0, 4294967295);
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
		Function_174();
		if (Function_20(bVar0))
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

void Function_174() //Position: 0xDEA2 / 56994
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
	if (Function_343(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_175(char* cParam0) //Position: 0xDF11 / 57105
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
					Function_177();
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
		Function_176(bVar0);
		return 1;
	}
	return 0;
}

int Function_176(bool bParam0) //Position: 0xE030 / 57392
{
	if (bParam0 != 4)
	{
		if (Function_462("xmlsave"))
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

var Function_177() //Position: 0xE073 / 57459
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, 0, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_178(int iParam0) //Position: 0xE0AE / 57518
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
	if (Function_179(&cVar0, "streamanddropactorlineup"))
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
			uVar15 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), Function_32(), bVar17, Vector(Var11, (0.0f + 180.0f), 0.0f));
			TASK_STAND_STILL(&uVar15, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar18, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_179(char* cParam0) //Position: 0xE20F / 57871
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

bool Function_180(int iParam0) //Position: 0xE23C / 57916
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
	if (Function_179(&uVar0, "streamanddropactor"))
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
		uVar14 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), Function_32(), bVar1, Vector(Var10, (0.0f + 180.0f), 0.0f));
		TASK_STAND_STILL(&uVar14, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_181(int iParam0) //Position: 0xE347 / 58183
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "suicide"))
	{
		uVar0 = Function_28();
		if (IS_ACTOR_VALID(&uVar0))
		{
			KILL_ACTOR(&uVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_182(int iParam0) //Position: 0xE378 / 58232
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

bool Function_183(int iParam0) //Position: 0xE3C6 / 58310
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

bool Function_184(int iParam0) //Position: 0xE3FD / 58365
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

bool Function_185(int iParam0) //Position: 0xE4B9 / 58553
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

bool Function_186(int iParam0) //Position: 0xE51E / 58654
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
		Function_435();
		CREATE_GRINGO_IN_LAYOUT(&uVar7, Function_32(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", Var2, Function_435());
		return 1;
	}
	return 0;
}

bool Function_187(int iParam0) //Position: 0xE5DB / 58843
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
		uVar8 = CREATE_PROP_IN_LAYOUT(StackVal, &uVar7, Function_32(), "$/fragments/p_gen_footlocker01x", Var2, Vector(0.0f, 0.0f, 0.0f), 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&uVar8, "stand_open_chest"));
		Function_435();
		CREATE_GRINGO_ON_OBJECT(StackVal, &uVar8, Function_32(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", Vector(-0,3f, 0,1f, -0,3f), Function_435());
		return 1;
	}
	return 0;
}

bool Function_188(int iParam0) //Position: 0xE6FF / 59135
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
		uVar9 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar8, Function_32(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", Var2, Vector(0.0f, 0.0f, 0.0f));
		uVar6 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar8, Function_32(), 1078, Var2, Vector(0.0f, 0.0f, 0.0f));
		SNAP_ACTOR_TO_GRINGO(&uVar6, &uVar9, "UseCase1", true, 0, 0);
		if (!IS_ACTOR_VALID(&uVar6))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_189(int iParam0) //Position: 0xE808 / 59400
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 14, 0);
		return 1;
	}
	return 0;
}

bool Function_190(int iParam0) //Position: 0xE85D / 59485
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

bool Function_191(int iParam0) //Position: 0xE908 / 59656
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

bool Function_192(int iParam0) //Position: 0xE97E / 59774
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

bool Function_193(int iParam0) //Position: 0xEA64 / 60004
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
					stradd(&cVar55, Function_326(bVar17), 64);
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

bool Function_194(int iParam0) //Position: 0xEE2D / 60973
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
	
	if (STRING_CONTAINS_STRING(&iParam0, "give"))
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
						if (STRING_CONTAINS_STRING(&iParam0, "givewna"))
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
					stradd(&cVar52, Function_326(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_196(&Global_39906, Function_209(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(&uVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_326(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_326(bVar72), GET_PLAYER_ACTOR(0), 1);
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
					stradd(&cVar52, Function_326(bVar17), 64);
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
					ADD_ITEM(Function_326(bVar17), GET_PLAYER_ACTOR(0), 1);
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
						Function_121(ABS(bVar75), 1, 1);
					}
					else
					{
						Function_195(ABS(bVar75), 1);
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

int Function_195(int iParam0, bool bParam1) //Position: 0xF4E3 / 62691
{
	bool bVar0;
	
	bVar0 = Function_313(0);
	if ((Function_313(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_119(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_313(0));
	return 1;
}

int Function_196(struct<25> Param0) //Position: 0xF574 / 62836
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_208())
	{
		return 0;
	}
	Param0.f_16 = Function_207(&iParam1);
	if (&iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (&iParam1 == 4294967295)
	{
		iParam1 = Function_209();
	}
	if (&iParam4 > 0 || &iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_39906.f_12 = &iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_206(&Var96, iVar1) == 1)
		{
			if (Function_205(Var96.f_24) == Global_46722[Global_43787])
			{
				if (Var96.f_32 == &iParam3)
				{
					if (((&iParam1 != 4294967295 || &iParam1 <= Var96.f_12) || (&iParam1 != 0 && Var96.f_12 != 3)) || (&iParam1 != 0 && Var96.f_12 != 4))
					{
						if (&iParam4 != 0 || &iParam4 != Function_204(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (&iParam5 == 1)
							{
								if (!Function_203(iVar1))
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
		if (Function_206(&Param0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_20));
			PRINTNL();
			Param0.f_24 = Function_197(&Param0, &iParam4, 80, 20000, Param0.f_12);
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

var Function_197(struct<25> Param0) //Position: 0xF7F9 / 63481
{
	var uVar0;
	var uVar1;
	
	uVar0 = Param0.f_24;
	uParam3 = &uParam3;
	uParam2 = &uParam2;
	if (StackVal || Param0.f_24 != 4294967295 != 1)
	{
		uVar1 = Function_198(uVar0, 80.0f, 20000.0f, &uParam1, 1, &uParam4);
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

var Function_198(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF88F / 63631
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
	if (!Function_343(iParam0))
	{
		iParam0 = Global_43788;
	}
	iVar295 = Function_205(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	bVar596 = false;
	while (bVar596 < 145)
	{
		Function_202(&Global_44085[bVar5969] + 8);
		Var296 = Function_202(&Global_44085[bVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[bVar5969] + 8) && (iVar295 != Function_205(Global_44085[bVar5969]) || iParam0 != 4294967295)) != 1) && Function_64(&(Global_43791[bVar596]), 8192)) && bVar596 == 0)
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
				if (Function_87(Function_437(bVar596, 0, 2)) == 0)
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
		Function_201(&iVar1, &bVar302, bVar599);
		Function_201(&bVar148, &bVar449, bVar600);
	}
	if (bVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_38(3, bVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_38(5, bVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_38(7, bVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_38(10, bVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_38(5, bVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = bVar148[iVar597];
		if (Function_343(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_200();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_202(&Global_44085[iVar09] + 8);
		Var296 = Function_202(&Global_44085[iVar09] + 8);
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
				iVar601 = Function_38(3, bVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_38(5, bVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_38(7, bVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_38(10, bVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_38(5, bVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar1[iVar597];
		if (Function_343(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_200();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_202(&Global_44085[iVar09] + 8);
		Var296 = Function_202(&Global_44085[iVar09] + 8);
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

struct<32> Function_199(int iParam0) //Position: 0xFF41 / 65345
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_343(iParam0))
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

int Function_200() //Position: 0x10004 / 65540
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

void Function_201(bool[] bParam0, bool[] bParam1, int iParam2) //Position: 0x10032 / 65586
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

struct<8> Function_202(int iParam0) //Position: 0x100C9 / 65737
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_203(bool bParam0) //Position: 0x100DB / 65755
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

int Function_204(bool bParam0) //Position: 0x1012D / 65837
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

int Function_205(int iParam0) //Position: 0x101DC / 66012
{
	return Function_162(iParam0);
}

bool Function_206(struct<41> Param0) //Position: 0x101E7 / 66023
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

var Function_207(int iParam0) //Position: 0x10A3B / 68155
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

bool Function_208() //Position: 0x10B0A / 68362
{
	return Function_434(StackVal, 1);
}

var Function_209() //Position: 0x10B19 / 68377
{
	int iVar0;
	
	iVar0 = Function_210(0);
	return iVar0;
}

var Function_210(int iParam0) //Position: 0x10B27 / 68391
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_313(358) + Function_313(359));
	if (&iParam0 == 1)
	{
		iVar2 = Function_38(iVar1, 7);
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

bool Function_211(int iParam0) //Position: 0x10BAC / 68524
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 14, 0);
		return 1;
	}
	return 0;
}

bool Function_212(bool bParam0) //Position: 0x10C07 / 68615
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
		uVar10 = Function_213(StackVal, StackVal, StackVal, &uVar13, Function_32(), 1118, Vector(Var6, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar12));
		uVar11 = Function_213(StackVal, StackVal, StackVal, &uVar13, Function_32(), 1087, Vector(Var8, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar12));
		if (!IS_ACTOR_VALID(&uVar10) || !IS_ACTOR_VALID(&uVar11))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_213(var uParam0, char* cParam1, bool bParam2, struct<2> Param3, struct<2> Param5, bool bParam7) //Position: 0x10CF8 / 68856
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Param3;
	Var2 = Param5;
	Function_214(&bParam7, 0, &Var0, &Var2);
	uVar4 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &cParam1, bParam2, Var0, Var2);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&uVar4), 50.0f, false, 1092616192);
	return &uVar4;
}

void Function_214(var uParam0, bool bParam1, struct<2> Param2) //Position: 0x10D47 / 68935
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_215(&Var0, &Param2))
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

bool Function_215(vector3 vParam0) //Position: 0x10E74 / 69236
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_156(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_156(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_216(bool bParam0) //Position: 0x10EEA / 69354
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
		Function_217(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_32(), &bParam0, Var1, Var3, 4294967295);
		STREAMING_EVICT_PROPSET(&uVar0);
		return 1;
	}
	return 0;
}

var Function_217(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x10F97 / 69527
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

bool Function_218(int iParam0) //Position: 0x110EE / 69870
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

bool Function_219(int iParam0) //Position: 0x11134 / 69940
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

bool Function_220(int iParam0) //Position: 0x113BB / 70587
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
		cVar13 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_221(&cVar13) };
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
		uVar8 = Function_213(StackVal, StackVal, StackVal, &uVar21, &cVar13, iVar11, Vector(Var6, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar10));
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
			cVar13 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_221(&cVar13) };
			uVar9 = Function_213(StackVal, StackVal, StackVal, &uVar21, &cVar13, 976, Vector(Var6, (0.0f + 180.0f), 0.0f), GET_OBJECT_FROM_ACTOR(&uVar10));
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

struct<32> Function_221(char* cParam0) //Position: 0x11574 / 71028
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_222("0", &cVar8, ""), 4);
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

struct<32> Function_222(char* cParam0) //Position: 0x115E0 / 71136
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_223(int iParam0) //Position: 0x11602 / 71170
{
	iParam0 = &iParam0;
	return 0;
}

bool Function_224(int iParam0) //Position: 0x1160F / 71183
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
						Function_161(iVar2);
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
							Function_161(iVar2);
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

bool Function_225(int iParam0) //Position: 0x116A4 / 71332
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
					Function_71(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_226(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_226(int iParam0, bool bParam1) //Position: 0x1171B / 71451
{
	bool bVar0;
	int iVar1;
	
	Function_227(iParam0, bParam1, 0);
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
	iVar1 = Function_75(iParam0, 4294967295);
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
	iVar1 = Function_72();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 2;
	return 1;
}

int Function_227(int iParam0, bool bParam1, int iParam2) //Position: 0x118B6 / 71862
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
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_31(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_228(int iParam0) //Position: 0x11AA3 / 72355
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

bool Function_229(int iParam0) //Position: 0x11B37 / 72503
{
	if (STRING_CONTAINS_STRING(&iParam0, "regiontest"))
	{
		Global_98251 = 1;
		return 1;
	}
	return 0;
}

bool Function_230(int iParam0) //Position: 0x11B5B / 72539
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

bool Function_231(int iParam0) //Position: 0x11BD0 / 72656
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

bool Function_232(int iParam0) //Position: 0x11C48 / 72776
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
						Function_233(1, 0, GET_PLAYER_ACTOR(0), &iVar6, 0);
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
						Function_233(2, 0, GET_PLAYER_ACTOR(0), &iVar6, 0);
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

var Function_233(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x11EFD / 73469
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_241(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_240(iParam1))
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
	if (!Function_236(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_234();
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

void Function_234() //Position: 0x121B0 / 74160
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_235(&uVar0, &uVar1);
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

void Function_235(var uParam0, int iParam1) //Position: 0x12223 / 74275
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

bool Function_236(bool bParam0) //Position: 0x12259 / 74329
{
	if (Function_239(256))
	{
		return 0;
	}
	if (Function_239(262144))
	{
		return 0;
	}
	if (Function_238())
	{
		return 0;
	}
	if (!Function_239(1))
	{
		return 0;
	}
	if (!Function_239(4096))
	{
		return 0;
	}
	if (bParam0 && Function_237(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_239(2048))
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

int Function_237(int iParam0) //Position: 0x122CF / 74447
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_238() //Position: 0x122E0 / 74464
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

bool Function_239(int iParam0) //Position: 0x122F9 / 74489
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_240(int iParam0) //Position: 0x12317 / 74519
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_241(int iParam0) //Position: 0x1232D / 74541
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_242(int iParam0) //Position: 0x12342 / 74562
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
			Function_243(iVar2, FLOOR(STRING_TO_FLOAT(&uVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_243(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x12400 / 74752
{
	int iVar0;
	bool bVar1;
	
	Function_169(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_244(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_167(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_244(bool bParam0, bool bParam1) //Position: 0x1247A / 74874
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_169(bParam0);
	Function_407(&bVar0);
	PRINTNL();
	Function_167(bParam0, &bVar0, &bParam1);
	return;
}

bool Function_245(int iParam0) //Position: 0x124A3 / 74915
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

bool Function_246(int iParam0) //Position: 0x1250F / 75023
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

bool Function_247(int iParam0) //Position: 0x1254F / 75087
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
			Function_249(1.0f, 0.0f, 1.0f);
			Function_278(StackVal, Vector(STRING_TO_FLOAT(&uVar0), STRING_TO_FLOAT(&uVar1), STRING_TO_FLOAT(&uVar2)));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			iVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_248(&iVar3);
			if (Function_343(iVar4))
			{
				GET_OBJECT_POSITION(&Global_44085[iVar49] + 8, &Var5);
				Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar4) };
				Function_278(StackVal, Var5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_248(int iParam0) //Position: 0x125FA / 75258
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

void Function_249(var uParam0, var uParam1, int iParam2) //Position: 0x126C3 / 75459
{
	Global_42834.f_68 = 5;
	Global_42834.f_72 = uParam0;
	Global_42834.f_76 = uParam1;
	Global_42834.f_80 = iParam2;
	return;
}

bool Function_250(bool bParam0) //Position: 0x126E4 / 75492
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
			Function_251(StackVal, Vector(STRING_TO_FLOAT(&uVar0), STRING_TO_FLOAT(&uVar1), STRING_TO_FLOAT(&uVar2)), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_251(struct<2> Param0, char* cParam2) //Position: 0x1274C / 75596
{
	Global_21576.f_120 = 4294967295;
	Global_21576 = Param0;
	strcpy(&Global_21576 + 24, &cParam2, 24);
	strcpy(&Global_21576 + 72, &cParam3, 24);
	Global_21576.f_124 = &uParam4;
	Global_21576.f_128 = &uParam5;
}

bool Function_252(int iParam0) //Position: 0x12786 / 75654
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(&iParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_248(&uVar0);
			if (Function_343(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar1), 4);
				Function_253(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_253(var uParam0, char* cParam1) //Position: 0x127F0 / 75760
{
	Global_21576.f_120 = uParam0;
	Global_21576 = Vector(0.0f, 0.0f, 0.0f);
	strcpy(&Global_21576 + 24, &cParam1, 24);
	strcpy(&Global_21576 + 72, &cParam2, 24);
	Global_21576.f_124 = &fParam3;
	Global_21576.f_128 = &uParam4;
}

bool Function_254(int iParam0) //Position: 0x1282B / 75819
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

bool Function_255(int iParam0) //Position: 0x1288D / 75917
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(&iParam0, "toggle"))
	{
		uVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(&uVar0, "channel"))
			{
				return Function_258();
			}
			if (STRINGS_ARE_EQUAL(&uVar0, "flag"))
			{
				return Function_256();
			}
			return 0;
		}
	}
	return 0;
}

int Function_256() //Position: 0x128EA / 76010
{
	var uVar0;
	
	uVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(&uVar0, "ambient"))
	{
		if (Function_257(4))
		{
			Function_436(4);
		}
		else
		{
			Function_363(4);
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
		if (Function_257(1))
		{
			Function_436(1);
		}
		else
		{
			Function_363(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_257(1));
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "locname"))
	{
		if (Function_257(32))
		{
			Function_436(32);
		}
		else
		{
			Function_363(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "clock"))
	{
		if (Function_257(64))
		{
			Function_436(64);
		}
		else
		{
			Function_363(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "adebug"))
	{
		if (Function_257(128))
		{
			Function_436(128);
		}
		else
		{
			Function_363(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(&uVar0, "law"))
	{
		if (!Function_239(256))
		{
			Function_359(256);
		}
		else
		{
			Function_360(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_257(int iParam0) //Position: 0x12A50 / 76368
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_258() //Position: 0x12A6C / 76396
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

bool Function_259(int iParam0) //Position: 0x12BE7 / 76775
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
			uVar0 = Function_261(iVar1, &iParam0);
			if (DOES_SCRIPT_EXIST(&uVar0))
			{
				Var35 = Vector(0.0f, 0.0f, -95.0f);
				uVar37 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(&uVar37, Var35, &Var33);
				if (!Function_260(&Var33, 50.0f, &iVar2 + 16, 4294967295))
				{
					(&iVar2 + 16) = Var33;
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

bool Function_260(struct<2> Param0, struct<5> Param2) //Position: 0x12D25 / 77093
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
		if (!Function_156(StackVal, Param2))
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
			if (!Function_156(StackVal, Param2))
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

var Function_261(char* cParam0, int iParam1) //Position: 0x12E68 / 77416
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

bool Function_262(int iParam0) //Position: 0x12E9D / 77469
{
	var uVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(&iParam0, "end"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			uVar0 = Function_263(iVar1, &iParam0);
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

var Function_263(char* cParam0, int iParam1) //Position: 0x12F7D / 77693
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

bool Function_264(int iParam0) //Position: 0x13091 / 77969
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(&iParam0, "start"))
	{
		iParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			cVar0 = Function_263(iVar1, &iParam0);
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

bool Function_265(int iParam0) //Position: 0x1322B / 78379
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
				uVar0 = Function_263(iVar1, &iParam0);
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

bool Function_266(int iParam0) //Position: 0x133DE / 78814
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
				uVar0 = Function_263(iVar2, &iParam0);
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

bool Function_267(int iParam0) //Position: 0x13690 / 79504
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
			if (Function_268(iVar1))
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

bool Function_268(int iParam0) //Position: 0x13743 / 79683
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_269(int iParam0) //Position: 0x1375A / 79706
{
	if (STRING_CONTAINS_STRING(&iParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

int Function_270() //Position: 0x13785 / 79749
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

void Function_271() //Position: 0x13823 / 79907
{
	Function_359(512);
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

int Function_272(int iParam0, int iParam1) //Position: 0x13863 / 79971
{
	return Global_26088[iParam18][iParam0];
}

bool Function_273(int iParam0) //Position: 0x13874 / 79988
{
	bool bVar0;
	float fVar1;
	
	fVar1 = GET_PROFILE_TIME();
	bVar0 = iParam0;
	while (bVar0 < (Global_21684 - 1))
	{
		if (Function_275(bVar0) == 4294967295 && Function_274(Function_171(bVar0)))
		{
			Global_26088[Function_275(bVar0)8][Function_171(bVar0)]++;
		}
		if ((GET_PROFILE_TIME() - fVar1) < 300.0f)
		{
			iParam0 = bVar0;
			return 0;
		}
		bVar0++;
	}
	Function_100();
	return 1;
}

bool Function_274(int iParam0) //Position: 0x138EA / 80106
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

int Function_275(bool bParam0) //Position: 0x138FF / 80127
{
	if (!Function_13(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_276() //Position: 0x13919 / 80153
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

void Function_277(int iParam0) //Position: 0x13959 / 80217
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if (bVar0 <= 21)
		{
			SET_WEAPON_GOLD(&Global_54076, bVar0, &iParam0);
		}
		bVar0++;
	}
	return;
}

void Function_278(struct<2> Param0) //Position: 0x13985 / 80261
{
	(&Global_42862 + 32) = Param0;
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
		Function_279(&Global_42862 + 16);
		CLEAN_OBJECTSET(&Global_42862 + 16);
	}
	Global_42862.f_100 = 1;
	Global_42862.f_104 = 1;
	return;
}

void Function_279(int iParam0) //Position: 0x13A10 / 80400
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

bool Function_280(struct<2> Param0, struct<2> Param2) //Position: 0x13A59 / 80473
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x13A85 / 80517
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_98(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_282(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x13B10 / 80656
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_284(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_283(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_283(char* cParam0) //Position: 0x13B85 / 80773
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

bool Function_284(int iParam0, var uParam1, int iParam2) //Position: 0x13BBF / 80831
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
		if (Function_286(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_285(uVar0))
		{
			case 0x00000002:
				if (!Function_290(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_285(char* cParam0) //Position: 0x13C3B / 80955
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

int Function_286(int iParam0) //Position: 0x13CDC / 81116
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_433(&iVar1, 2147483648);
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

bool Function_287(int iParam0) //Position: 0x13D19 / 81177
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_46894[2] || iParam0 != Global_46894[1]) || iParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[iParam0];
	return (((Function_434(uVar0, 0x1000000) || Function_434(uVar0, 0x2000000)) || Function_434(uVar0, 0x4000000)) || Function_288(iParam0));
}

var Function_288(int iParam0) //Position: 0x13D8C / 81292
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

var Function_289(int iParam0) //Position: 0x13DA9 / 81321
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

bool Function_290(int iParam0, int iParam1) //Position: 0x13F2F / 81711
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_291() //Position: 0x13F42 / 81730
{
	int iVar0;
	
	if (Global_6606 && !Global_53524.f_44)
	{
		PRINTSTRING("Current time is ");
		Function_407(GET_TIME_OF_DAY());
		PRINTNL();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (iVar0 != 0 || iVar0 != 1)
			{
				PRINTSTRING("Current pursuit time for faction is ");
				Function_407(&Global_39922 + 148[iVar0]);
				PRINTNL();
				if (!Function_293(&Global_39922 + 148[iVar0]) && !Global_6605)
				{
					if (IS_EARLIER_THAN(&Global_39922 + 148[iVar0], 0))
					{
						Function_292(iVar0, 0, 0, Function_312(RAND_INT_RANGE(30, 75)), 0);
					}
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_292(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4) //Position: 0x14006 / 81926
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &bParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_293(&Global_39922 + 148[iParam0]))
	{
		(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

bool Function_293(int iParam0) //Position: 0x14056 / 82006
{
	return (((GET_DAY(&iParam0) != 0 && GET_HOUR(&iParam0) != 0) && GET_MINUTE(&iParam0) != 0) && GET_SECOND(&iParam0) != 1);
}

void Function_294(bool bParam0) //Position: 0x1407F / 82047
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

void Function_295(bool bParam0) //Position: 0x140DE / 82142
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_296();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_21();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_433(&Global_99144, 1);
		Function_433(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_296() //Position: 0x14133 / 82227
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_50())
	{
		Function_300(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_300(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_297(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_297(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_156(StackVal, Var0))
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

struct<8> Function_297(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x141EA / 82410
{
	int iVar0;
	
	iVar0 = Function_298(&uParam2, &uParam3);
	if (Function_128(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_53(&Global_99144, 1);
			Function_433(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_53(&Global_99144, 2);
			Function_433(&Global_99144, 1);
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
		Function_53(&Global_99144, 2);
		Function_433(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_435();
	return StackVal, Function_435();
}

int Function_298(bool bParam0, bool bParam1) //Position: 0x142E2 / 82658
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
				fVar2 = Function_299(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_299(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_128(iVar0) && !&bParam1)
	{
		iVar0 = Function_298(&bParam0, 1);
	}
	return iVar0;
}

float Function_299(struct<2> Param0, struct<2> Param2) //Position: 0x143AE / 82862
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_300(float fParam0, int iParam1) //Position: 0x143CB / 82891
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_302(&Global_54076, &Var3);
	if (!Function_301(Global_46760[0]))
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
	if (!Function_301(Global_46760[2]))
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
	if (!Function_301(Global_46760[1]))
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
	if (!Function_301(Global_46796[1]))
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
	if (!Function_301(Global_46796[3]))
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
	if (!Function_301(Global_46796[2]))
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
	if (!Function_301(Global_46796[4]))
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
	if (!Function_301(Global_46816[0]))
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
	if (!Function_301(Global_46816[1]))
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
	if (!Function_301(Global_46816[2]))
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
	if (!Function_301(Global_46838[0]))
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
	if (!Function_301(Global_46850[0]))
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
	if (!Function_301(Global_46850[1]))
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
	if (!Function_301(Global_46850[2]))
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
	if (!Function_301(Global_46866[0]))
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
	if (!Function_301(Global_46866[1]))
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
	if (!Function_301(Global_46866[2]))
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
	if (!Function_301(Global_46894[2]))
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
	if (!Function_301(Global_46894[3]))
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
	if (!Function_301(Global_46894[0]))
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
	if (!Function_301(Global_46914[0]))
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
	if (!Function_301(Global_46926[2]))
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
	if (!Function_301(Global_46926[1]))
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
	if (!Function_301(Global_46926[0]))
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
	if (!Function_301(Global_46838[1]))
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
	if (!Function_301(Global_46894[1]))
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
	Function_53(&Global_99144, 2);
	Function_433(&Global_99144, 1);
	iParam1 = 0;
	if (Function_156(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_301(int iParam0) //Position: 0x14BF7 / 84983
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_434(uVar0, 0x1000000) || Function_434(uVar0, 0x2000000)) || Function_434(uVar0, 0x4000000)) || !Function_434(uVar0, 0x10000000));
}

void Function_302(var uParam0, var uParam1) //Position: 0x14C32 / 85042
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

void Function_303() //Position: 0x14C41 / 85057
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

void Function_304(int iParam0) //Position: 0x14C7D / 85117
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_312(200)), 0);
	return;
}

void Function_305(int iParam0) //Position: 0x14CA0 / 85152
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_306(int iParam0) //Position: 0x14CBD / 85181
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_312(105)), 0);
	return;
}

void Function_307(int iParam0) //Position: 0x14CE0 / 85216
{
	*(&Global_21369 + 32) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 32, 0, 0, (&iParam0 + Function_312(90)), 0);
	return;
}

void Function_308(int iParam0) //Position: 0x14D03 / 85251
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_312(90)), 0);
	return;
}

void Function_309(int iParam0) //Position: 0x14D26 / 85286
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_407(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_407(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_407(&Global_21369 + 48);
	PRINTNL();
	Function_308(&iParam0);
	return;
}

void Function_310(int iParam0) //Position: 0x14DC8 / 85448
{
	Global_21369 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369, 0, 0, (&iParam0 + Function_312(90)), 0);
	return;
}

void Function_311(int iParam0) //Position: 0x14DE7 / 85479
{
	*(&Global_21369 + 16) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 16, 0, 0, (&iParam0 + Function_312(90)), 0);
	return;
}

int Function_312(bool bParam0) //Position: 0x14E0A / 85514
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

int Function_313(int iParam0) //Position: 0x14E21 / 85537
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_314(bool bParam0) //Position: 0x14E62 / 85602
{
	var uVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_369(1, 0))
	{
		Function_321("ZOMBIE_STORY_1_OBJ");
		if (!Function_17(2))
		{
			uVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_17(4) && !Function_319(0))
	{
		uVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_17(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_317(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_321("ZOMBIE_STORY_2Nigel_OBJ");
		Function_321("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_17(8) && !Function_17(6))
		{
			uVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_17(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_317(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_17(8))
		{
			uVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_17(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_317(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_17(6))
		{
			uVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_316(&Global_6667[228] + 184, 2) || ((((((Function_17(14) && Function_17(18)) && Function_17(37)) && Function_17(7)) && Function_17(11)) && Function_17(5)) && Function_17(21)))
	{
		Function_321("ZOMBIE_STORY_3_OBJ");
		if (!Function_369(2, 0))
		{
			uVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_369(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_317(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_321("ZOMBIE_STORY_4_OBJ");
		if (!Function_17(24))
		{
			uVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_316(&Global_6667[328] + 184, 2) || ((Function_17(27) && Function_17(1)) && Function_17(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_317(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_321("ZOMBIE_STORY_5_OBJ");
		if (!Function_369(3, 0))
		{
			uVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_369(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_317(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_17(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[243].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[443].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[343].f_224);
		bVar1 = false;
		if (Function_17(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[243] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[243].f_224, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_17(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_17(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[443] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_87(Global_46948)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[443].f_224, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_87(Global_46948) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater3_OBJ", 4, 0);
			}
			if (Function_87(Global_46948) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_313(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_313(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_17(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_17(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_17(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[643].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[743].f_224);
		if (Function_17(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[643].f_224, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_17(6) && Function_87(Global_46949) < 0) && Function_87(Global_46951) < 0) && Function_87(Global_46952) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[643].f_224, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[743].f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_17(11))
	{
		if (Function_17(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_99725[843].f_224);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_313(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_313(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_313(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_313(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_313(491) <= 5 && Function_313(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_17(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_17(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[1043].f_224, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (bParam0 && IS_STRING_VALID(&uVar0))
	{
		Function_315(&uVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

void Function_315(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x15783 / 87939
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
			Var0 = { StackVal, StackVal, StackVal, Function_98(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_316(int iParam0, int iParam1) //Position: 0x15818 / 88088
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_317() //Position: 0x15835 / 88117
{
	return STRING_TO_HASH(Function_318());
}

var Function_318() //Position: 0x15841 / 88129
{
	return "ZOMBIE_STORY";
}

bool Function_319(int iParam0) //Position: 0x15856 / 88150
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_320(iParam0)7].f_12 < 0;
}

int Function_320(int iParam0) //Position: 0x158BC / 88252
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

void Function_321(var uParam0) //Position: 0x1597E / 88446
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_317(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_318(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_317(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_317(), &uParam0, 0, 3, false);
	Function_140(Function_317(), 0);
	return;
}

bool Function_322() //Position: 0x159C7 / 88519
{
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (!Function_323(&Global_21369 + 72, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_323(int iParam0, bool bParam1, float fParam2) //Position: 0x159EF / 88559
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&iParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&iParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&iParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&iParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_324() //Position: 0x15A91 / 88721
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

void Function_325() //Position: 0x15AE2 / 88802
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
	uVar2 = Function_28();
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

var Function_326(bool bParam0) //Position: 0x15BBB / 89019
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

void Function_327() //Position: 0x15CAF / 89263
{
	PRINTSTRING("Locking advanced weapons...");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(false, 0);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(8, 0);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(12, 0);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(31, 1);
	SET_WEAPONENUM_LOCKED(19, 0);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	SET_WEAPONENUM_LOCKED(29, 1);
	SET_WEAPONENUM_LOCKED(22, 1);
	SET_WEAPONENUM_LOCKED(21, 0);
	SET_WEAPONENUM_LOCKED(32, 0);
	SET_WEAPONENUM_LOCKED(33, 1);
	SET_WEAPONENUM_LOCKED(34, 1);
	SET_WEAPONENUM_LOCKED(35, 1);
	SET_WEAPONENUM_LOCKED(36, 1);
	SET_WEAPONENUM_LOCKED(37, 1);
	return;
}

void Function_328() //Position: 0x15D9D / 89501
{
	struct<413> Var0;
	
	(&Var0 + 24) = "RIFLE_Antitank";
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
	Function_329(31, "base_rifle", &Var0);
	return;
}

void Function_329(var uParam0, var uParam1, var uParam2) //Position: 0x16108 / 90376
{
	INIT_NATIVE_WEAPONENUM_RIFLE(uParam0, &uParam1, &uParam2);
	return;
}

void Function_330() //Position: 0x16119 / 90393
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_364(16384);
	}
	return;
}

bool Function_331(int iParam0) //Position: 0x16135 / 90421
{
	if (!Function_343(iParam0))
	{
		return 1;
	}
	return Function_64(&(Global_43791[iParam0]), 4);
}

bool Function_332(int iParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x16151 / 90449
{
	struct<2> Var0;
	char* cVar2[64];
	var uVar18;
	int iVar19;
	float fVar20;
	
	if (!Function_340(&Var0))
	{
		return 1;
	}
	if (Global_53524.f_44)
	{
		if (Function_338(32))
		{
			return 1;
		}
	}
	if (Global_46719 != 4294967295)
	{
		if (!Function_50())
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
			if (!Function_64(&(Global_43791[iVar19]), 1) && !Function_64(&(Global_43791[iVar19]), 4))
			{
				if (!Function_64(&(Global_43791[iVar19]), 1024))
				{
					if (Global_44085[iVar199] == 4294967295)
					{
						Function_341(iVar19, 0);
					}
					else if (Function_64(&(Global_43791[Global_44085[iVar199]]), 1024))
					{
						Function_341(iVar19, 0);
						Function_335(Global_44085[iVar199]);
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
					if (!Function_64(&(Global_43791[iVar19]), 4) && !Function_64(&(Global_43791[iVar19]), 1))
					{
						if (StackVal == 2)
						{
							if (StackVal && (Function_64(&(Global_43791[Global_43788]), 4) || Function_64(&(Global_43791[Global_43788]), 1)) != 2)
							{
								Function_67(&(Global_43791[Global_43788]), 2);
								Function_335(Global_43788);
							}
							Global_43788 = iVar19;
						}
						Function_341(iVar19, &iParam3);
					}
					else if (StackVal == 6)
					{
						if (!Function_50())
						{
							Function_333(iVar19);
						}
					}
					Global_44085[iVar199].f_16 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_64(&(Global_43791[iVar19]), 4) || Function_64(&(Global_43791[iVar19]), 1))
				{
					if (!StackVal != 2)
					{
						if (!Function_64(&(Global_43791[iVar19]), 2097152))
						{
							if (Global_44085[iVar199].f_16 + 5.0f) > GET_CURRENT_GAME_TIME()
							{
								Function_335(iVar19);
							}
							else if (!Function_64(&(Global_43791[iVar19]), 2))
							{
								Function_67(&(Global_43791[iVar19]), 2);
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

void Function_333(int iParam0) //Position: 0x1645F / 91231
{
	struct<2> Var0;
	
	if (!Function_64(&(Global_43791[iParam0]), 65536))
	{
		return;
	}
	if (Function_64(&(Global_43791[iParam0]), 1048576))
	{
		return;
	}
	if (Global_21498.f_16 + 10.0f) < GET_CURRENT_GAME_TIME()
	{
		return;
	}
	if (IS_ACTOR_RIDING(&Global_54076) && Function_334(&Global_54076, 1) < 2.0f)
	{
		return;
	}
	if (Function_131(0, 0, 1, 1))
	{
		Function_67(&(Global_43791[iParam0]), 1048576);
		return;
	}
	if (IS_ANY_SPEECH_PLAYING(&Global_54076))
	{
		return;
	}
	GET_OBJECT_POSITION(&Global_44085[iParam09] + 8, &Var0);
	if (Function_299(StackVal, StackVal, Global_54078, Var0) > 25.0f)
	{
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 360, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		Function_67(&(Global_43791[iParam0]), 1048576);
	}
	return;
}

float Function_334(var uParam0, bool bParam1) //Position: 0x1651C / 91420
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_335(int iParam0) //Position: 0x1653D / 91453
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	char* cVar4[64];
	int iVar20;
	
	if (!Function_343(iParam0))
	{
		return;
	}
	Function_409(&(Global_43791[iParam0]), 262147);
	if (StackVal == 6)
	{
		Function_409(&(Global_43791[iParam0]), 4);
		if (!Global_6623 && 1)
		{
			if (Function_343(Global_44085[iParam09]))
			{
			}
		}
		return;
	}
	if (IS_SCRIPT_VALID(&Global_44085[iParam09] + 40))
	{
		TERMINATE_SCRIPT(&Global_44085[iParam09] + 40);
	}
	if (!Function_340(&Var0))
	{
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 5) != 4)
	{
		Function_409(&(Global_43791[iParam0]), 131072);
		iVar2 = Function_337(StackVal, Global_54078, 1);
		if (!Function_343(iVar2))
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
			if (!Function_336(Global_44085[iParam09], iParam0))
			{
				if (!Function_50())
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

bool Function_336(int iParam0, int iParam1) //Position: 0x166FD / 91901
{
	int iVar0;
	struct<2> Var1;
	
	if (!Function_340(&Var1))
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

var Function_337(struct<2> Param0, bool bParam2) //Position: 0x16776 / 92022
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

bool Function_338(int iParam0) //Position: 0x167E2 / 92130
{
	return Function_339(Global_123163.f_84, iParam0);
}

int Function_339(var uParam0, int iParam1) //Position: 0x167F3 / 92147
{
	return (uParam0 && iParam1) == 0;
}

bool Function_340(int iParam0) //Position: 0x16800 / 92160
{
	var uVar0;
	
	uVar0 = Function_28();
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

void Function_341(int iParam0, int iParam1) //Position: 0x1682F / 92207
{
	char* cVar0[64];
	int iVar16;
	
	if (!Function_343(iParam0))
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
	Function_67(&(Global_43791[iParam0]), 1);
	if (DECOR_CHECK_EXIST(&Global_44085[iParam09] + 8, "nforceLoad"))
	{
		DECOR_REMOVE(&Global_44085[iParam09] + 8, "nforceLoad");
		iParam1 = 1;
	}
	if (StackVal == 6)
	{
		Function_161(iParam0);
		Function_67(&(Global_43791[iParam0]), 4);
		if (!Global_6623 && 1)
		{
		}
		if (Global_44085[iParam09].f_16 + 60.0f) > GET_CURRENT_GAME_TIME()
		{
			if (Function_343(Global_44085[iParam09]))
			{
				Function_342(&Global_44085[Global_44085[iParam09]9] + 32, &Global_44085[iParam09] + 32);
			}
			Global_21498 = &Global_44085[iParam09] + 8;
			Global_21498.f_12 = 4;
			Global_21498.f_8 = 0;
		}
		return;
	}
	if (StackVal == 2)
	{
		if ((!Global_44085[iParam09] != Global_46722[Global_43787] && Function_343(Global_44085[iParam09])) || iParam1)
		{
			strcpy(&cVar0, "init/rdr2init_gringo_", 64);
			stradd(&cVar0, &Global_44085[Global_44085[iParam09]9] + 32, 64);
			LAUNCH_NEW_SCRIPT(&cVar0, 0);
		}
	}
	iVar16 = iParam0;
	if (!&Global_44085[iParam09] + 24 != 4294967295)
	{
		*(&Global_44085[iParam09] + 40) = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&Global_44085[iParam09] + 24, 4), &iVar16, 2, 0);
	}
	Function_409(&(Global_43791[iParam0]), 131072);
	Function_65(iParam0);
	return;
}

void Function_342(var uParam0, int iParam1) //Position: 0x169E8 / 92648
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_343(int iParam0) //Position: 0x169F5 / 92661
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_344() //Position: 0x16A0B / 92683
{
	int iVar0;
	struct<77> Var1;
	
	*(&Var1 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var1, 48, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_345(&Var1 + 80[iVar02]);
		iVar0++;
	}
	Var1.f_76 = 0;
	STORE_GAME_STATE(&Var1, 48, 1);
	return;
}

void Function_345(vector3 vParam0) //Position: 0x16A4C / 92748
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
			Function_407(&iVar0);
		}
		ADD_TIME(&iVar0, 0, 10, false, 0);
		Global_26652[vParam0.y4] = &iVar0;
		*(&Global_27462[vParam0.y52] + 376) = &iVar0;
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("New Run time: ");
			Function_407(&(Global_26652[vParam0.y4]));
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

void Function_346(struct<21> Param0) //Position: 0x16BB1 / 93105
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

void Function_347(struct<49> Param0) //Position: 0x16C03 / 93187
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
		Function_407(&Param0 + 16);
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
		Var4 = { StackVal, StackVal, StackVal, Function_348(&Param0 + 16) };
		Var8 = { StackVal, StackVal, StackVal, Function_348(&Param0 + 64) };
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

struct<16> Function_348(var uParam0) //Position: 0x16E1B / 93723
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

void Function_349(int iParam0) //Position: 0x16E73 / 93811
{
	Function_358(&Global_43580, iParam0);
	return;
}

void Function_350(int iParam0) //Position: 0x16E81 / 93825
{
	int iVar0;
	
	if (iParam0 & 1073741824 > 1073741824)
	{
		iVar0 = iParam0 & 1073741824;
		iParam0 = (iParam0 - iVar0);
	}
	return;
}

void Function_351(bool bParam0) //Position: 0x16EB0 / 93872
{
	Function_352(&bParam0);
	Function_352(&bParam0);
	Function_352(&bParam0);
	Function_352(&bParam0);
	return;
}

int Function_352(bool bParam0) //Position: 0x16ED2 / 93906
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Global_6606)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&Global_54076))
	{
		return 0;
	}
	if (!&bParam0 && !Function_257(8192))
	{
		return 0;
	}
	if (!&bParam0 && (((Function_54() || HUD_IS_FADED()) || HUD_IS_FADING()) || UI_ISACTIVE("SG_SaveFile")))
	{
		return 0;
	}
	if (!&bParam0 && (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!&bParam0 && ((((((((((Global_93258 || Global_6623) || Global_6625) || Global_6608) || Global_99146) || Global_6638) || Global_6637) || Global_6627) || Global_6610) || Global_6639) || !IS_ACTOR_ALIVE(&Global_54076)))
	{
		return 0;
	}
	bVar0 = DECOR_GET_INT(&Global_54076, "tutorial");
	bVar1 = DECOR_GET_INT(&Global_54076, "ntutorial2");
	bVar2 = DECOR_GET_INT(&Global_54076, "ntutorial3");
	switch (iLocal_582)
	{
		case 0x00000000:
			if (!Function_290(Global_119934, 1))
			{
				if (Function_354(bVar0, 1))
				{
					Function_136(&Global_119934, 1);
					Function_353(&Global_54076, 1, 1);
					if (!&bParam0)
					{
						Function_281("tut_zombie_fast", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 2))
			{
				if (Function_354(bVar0, 2))
				{
					Function_136(&Global_119934, 2);
					Function_353(&Global_54076, 2, 1);
					if (!&bParam0)
					{
						Function_281("tut_zombie_bruiser", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 4))
			{
				if (Function_354(bVar0, 4))
				{
					Function_136(&Global_119934, 4);
					Function_353(&Global_54076, 4, 1);
					if (!&bParam0)
					{
						Function_281("tut_zombie_toxic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 8))
			{
				if (Function_354(bVar0, 8))
				{
					Function_136(&Global_119934, 8);
					Function_353(&Global_54076, 8, 1);
					if (!&bParam0)
					{
						Function_281("tut_weapon_torch", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 16))
			{
				if (Function_354(bVar0, 16))
				{
					Function_136(&Global_119934, 16);
					Function_353(&Global_54076, 16, 1);
					if (!&bParam0)
					{
						Function_281("tut_weapon_holy_water", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 32))
			{
				if (Function_354(bVar0, 32))
				{
					Function_136(&Global_119934, 32);
					Function_353(&Global_54076, 32, 1);
					if (!&bParam0)
					{
						Function_281("tut_weapon_phosphorus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 64))
			{
				if (Function_354(bVar0, 64))
				{
					Function_136(&Global_119934, 64);
					Function_353(&Global_54076, 64, 1);
					if (!&bParam0)
					{
						Function_281("tut_weapon_blunderbuss", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 128))
			{
				if (Function_354(bVar0, 128))
				{
					Function_136(&Global_119934, 128);
					Function_353(&Global_54076, 128, 1);
					if (!&bParam0)
					{
						Function_281("tut_weapon_zombie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 256))
			{
				if (Function_354(bVar0, 256))
				{
					Function_136(&Global_119934, 256);
					Function_353(&Global_54076, 256, 1);
					if (!&bParam0)
					{
						Function_281("tut_weapon_boomie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 512))
			{
				if (Function_354(bVar0, 512))
				{
					Function_136(&Global_119934, 512);
					Function_353(&Global_54076, 512, 1);
					if (!&bParam0)
					{
						Function_281("tut_ambient_use_deadeye", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 1024))
			{
				if (Function_354(bVar0, 1024))
				{
					Function_136(&Global_119934, 1024);
					Function_353(&Global_54076, 1024, 1);
					if (!&bParam0)
					{
						Function_281("tut_ambient_conserve_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 2048))
			{
				if (Function_354(bVar0, 2048))
				{
					Function_136(&Global_119934, 2048);
					Function_353(&Global_54076, 2048, 1);
					if (!&bParam0)
					{
						Function_281("tut_ambient_dead_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 4096))
			{
				if (Function_354(bVar0, 4096))
				{
					Function_136(&Global_119934, 4096);
					Function_353(&Global_54076, 4096, 1);
					if (!&bParam0)
					{
						Function_281("tut_ambient_zombie_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 8192))
			{
				if (Function_354(bVar0, 8192))
				{
					Function_136(&Global_119934, 8192);
					Function_353(&Global_54076, 8192, 1);
					if (!&bParam0)
					{
						Function_281("tut_ambient_ruined_quest", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 16384))
			{
				if (Function_354(bVar0, 16384))
				{
					Function_136(&Global_119934, 16384);
					Function_353(&Global_54076, 16384, 1);
					if (!&bParam0)
					{
						Function_281("tut_ambient_fast_travel", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 32768))
			{
				if (Function_354(bVar0, 32768))
				{
					Function_136(&Global_119934, 32768);
					Function_353(&Global_54076, 32768, 1);
					return 0;
				}
			}
			if (!Function_290(Global_119934, 65536))
			{
				if (Function_354(bVar0, 65536))
				{
					Function_136(&Global_119934, 65536);
					Function_353(&Global_54076, 65536, 1);
					return 0;
				}
			}
			if (!Function_290(Global_119934, 131072))
			{
				if (Function_354(bVar0, 131072))
				{
					Function_136(&Global_119934, 131072);
					Function_353(&Global_54076, 131072, 1);
					if (!&bParam0)
					{
						Function_281("tut_firsttime_fort_mercer", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 262144))
			{
				if (Function_354(bVar0, 262144))
				{
					Function_136(&Global_119934, 262144);
					Function_353(&Global_54076, 262144, 1);
					if (!&bParam0)
					{
						Function_281("tut_firsttime_el_presidio", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 524288))
			{
				if (Function_354(bVar0, 524288))
				{
					Function_136(&Global_119934, 524288);
					Function_353(&Global_54076, 524288, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_bullet_waste", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 1048576))
			{
				if (Function_354(bVar0, 1048576))
				{
					Function_136(&Global_119934, 1048576);
					Function_353(&Global_54076, 1048576, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_loot_got_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 2097152))
			{
				if (Function_354(bVar0, 2097152))
				{
					Function_136(&Global_119934, 2097152);
					Function_353(&Global_54076, 2097152, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_loot_got_parts", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 4194304))
			{
				if (Function_354(bVar0, 4194304))
				{
					Function_136(&Global_119934, 4194304);
					Function_353(&Global_54076, 4194304, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_lead_no_talk", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 8388608))
			{
				if (Function_354(bVar0, 8388608))
				{
					Function_136(&Global_119934, 8388608);
					Function_353(&Global_54076, 8388608, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_talk_no_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x1000000))
			{
				if (Function_354(bVar0, 0x1000000))
				{
					Function_136(&Global_119934, 0x1000000);
					Function_353(&Global_54076, 0x1000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_save_rewarded", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x2000000))
			{
				if (Function_354(bVar0, 0x2000000))
				{
					Function_136(&Global_119934, 0x2000000);
					Function_353(&Global_54076, 0x2000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_save_and_leave", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x4000000))
			{
				if (Function_354(bVar0, 0x4000000))
				{
					Function_136(&Global_119934, 0x4000000);
					Function_353(&Global_54076, 0x4000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_town_check_map", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x8000000))
			{
				if (Function_354(bVar0, 0x8000000))
				{
					Function_136(&Global_119934, 0x8000000);
					Function_353(&Global_54076, 0x8000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_town_reattack", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x10000000))
			{
				if (Function_354(bVar0, 0x10000000))
				{
					Function_136(&Global_119934, 0x10000000);
					Function_353(&Global_54076, 0x10000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_town_taken", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x20000000))
			{
				if (Function_354(bVar0, 0x20000000))
				{
					Function_136(&Global_119934, 0x20000000);
					Function_353(&Global_54076, 0x20000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_town_lost_guy", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119934, 0x40000000))
			{
				if (Function_354(bVar0, 0x40000000))
				{
					Function_136(&Global_119934, 0x40000000);
					Function_353(&Global_54076, 0x40000000, 1);
					if (!&bParam0)
					{
						Function_281("tut_survivor_town_lost_forever", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_290(Global_119935, 2))
			{
				if (Function_354(bVar1, 2))
				{
					Function_136(&Global_119935, 2);
					Function_353(&Global_54076, 2, 2);
					if (!&bParam0)
					{
						Function_281("tut_zombie02_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 4))
			{
				if (Function_354(bVar1, 4))
				{
					Function_136(&Global_119935, 4);
					Function_353(&Global_54076, 4, 2);
					if (!&bParam0)
					{
						Function_281("tut_mother4_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 16))
			{
				if (Function_354(bVar1, 16))
				{
					Function_136(&Global_119935, 16);
					Function_353(&Global_54076, 16, 2);
					if (!&bParam0)
					{
						Function_281("tut_zombie_john", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 32))
			{
				if (Function_354(bVar1, 32))
				{
					Function_136(&Global_119935, 32);
					Function_353(&Global_54076, 32, 2);
					if (!&bParam0)
					{
						Function_281("tut_zombie_grapple", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 64))
			{
				if (Function_354(bVar1, 64))
				{
					Function_136(&Global_119935, 64);
					Function_353(&Global_54076, 64, 2);
					if (!&bParam0)
					{
						Function_281("tut_weapon_holy_relic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 128))
			{
				if (Function_354(bVar1, 128))
				{
					Function_136(&Global_119935, 128);
					Function_353(&Global_54076, 128, 2);
					if (!&bParam0)
					{
						Function_281("tut_lowhealth_usemeds", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 256))
			{
				if (Function_354(bVar1, 256))
				{
					Function_136(&Global_119935, 256);
					Function_353(&Global_54076, 256, 2);
					if (!&bParam0)
					{
						Function_281("tut_hogtieonhorse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 512))
			{
				if (Function_354(bVar1, 512))
				{
					Function_136(&Global_119935, 512);
					Function_353(&Global_54076, 512, 2);
					if (!&bParam0)
					{
						Function_281("tut_navigation_foot_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 1024))
			{
				if (Function_354(bVar1, 1024))
				{
					Function_136(&Global_119935, 1024);
					Function_353(&Global_54076, 1024, 2);
					if (!&bParam0)
					{
						if (IS_USING_KEYBOARD_AND_MOUSE())
						{
							if (UNK_0x968F0317())
							{
								Function_281("intro01_first_tut_2_hold", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_281("intro01_first_tut_2", 0x41200000, 1, 0, 2, 1, 0);
							}
						}
						else
						{
							Function_281("intro01_first_tut_2", 0x41200000, 1, 0, 2, 1, 0);
						}
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 8))
			{
				if (Function_354(bVar1, 8))
				{
					Function_136(&Global_119935, 8);
					Function_353(&Global_54076, 8, 2);
					if (!&bParam0)
					{
						Function_281("tut_horse_whistle", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 2048))
			{
				if (Function_354(bVar1, 2048))
				{
					Function_136(&Global_119935, 2048);
					Function_353(&Global_54076, 2048, 2);
					if (!&bParam0)
					{
						Function_281("tut_navigation_horse_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 4096))
			{
				if (Function_354(bVar1, 4096))
				{
					Function_136(&Global_119935, 4096);
					Function_353(&Global_54076, 4096, 2);
					if (!&bParam0)
					{
						Function_281("tut_navigation_horse_gallop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 8192))
			{
				if (Function_354(bVar1, 8192))
				{
					Function_136(&Global_119935, 8192);
					Function_353(&Global_54076, 8192, 2);
					if (!&bParam0)
					{
						Function_281("tut_navigation_horse_stamina", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 16384))
			{
				if (Function_354(bVar1, 16384))
				{
					Function_136(&Global_119935, 16384);
					Function_353(&Global_54076, 16384, 2);
					if (!&bParam0)
					{
						Function_281("tut_weapon_reload", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 32768))
			{
				if (Function_354(bVar1, 32768))
				{
					Function_136(&Global_119935, 32768);
					Function_353(&Global_54076, 32768, 2);
					if (!&bParam0)
					{
						Function_281("tut_loot_corpse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 65536))
			{
				if (Function_354(bVar1, 65536))
				{
					Function_136(&Global_119935, 65536);
					Function_353(&Global_54076, 65536, 2);
					if (!&bParam0)
					{
						Function_281("tut_weapon_new", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 131072))
			{
				if (Function_354(bVar1, 131072))
				{
					Function_136(&Global_119935, 131072);
					Function_353(&Global_54076, 131072, 2);
					if (!&bParam0)
					{
						Function_281("tut_new_weapon_choose", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 1048576))
			{
				if (Function_354(bVar1, 1048576))
				{
					Function_136(&Global_119935, 1048576);
					Function_353(&Global_54076, 1048576, 2);
					if (!&bParam0)
					{
						Function_281("tut_deadeye_activation", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 2097152))
			{
				if (Function_354(bVar1, 2097152))
				{
					Function_136(&Global_119935, 2097152);
					Function_353(&Global_54076, 2097152, 2);
					if (!&bParam0)
					{
						Function_281("tut_deadeye_locks", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 4194304))
			{
				if (Function_354(bVar1, 4194304))
				{
					Function_136(&Global_119935, 4194304);
					Function_353(&Global_54076, 4194304, 2);
					if (!&bParam0)
					{
						Function_281("tut_deadeye_exit", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 8388608))
			{
				if (Function_354(bVar1, 8388608))
				{
					Function_136(&Global_119935, 8388608);
					Function_353(&Global_54076, 8388608, 2);
					if (!&bParam0)
					{
						Function_281("tut_thrown_arc", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 0x1000000))
			{
				if (Function_354(bVar1, 0x1000000))
				{
					Function_136(&Global_119935, 0x1000000);
					Function_353(&Global_54076, 0x1000000, 2);
					if (!&bParam0)
					{
						Function_281("tut_hitch_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 0x2000000))
			{
				if (Function_354(bVar1, 0x2000000))
				{
					Function_136(&Global_119935, 0x2000000);
					Function_353(&Global_54076, 0x2000000, 2);
					if (!&bParam0)
					{
						Function_281("tut_hitch_horse_return", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 0x4000000))
			{
				if (Function_354(bVar1, 0x4000000))
				{
					Function_136(&Global_119935, 0x4000000);
					Function_353(&Global_54076, 0x4000000, 2);
					if (!&bParam0)
					{
						Function_281("tut_house_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 0x10000000))
			{
				if (Function_354(bVar1, 0x10000000))
				{
					Function_136(&Global_119935, 0x10000000);
					Function_353(&Global_54076, 0x10000000, 2);
					if (!&bParam0)
					{
						Function_281("tut_satchel_open", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 0x20000000))
			{
				if (Function_354(bVar1, 0x20000000))
				{
					Function_136(&Global_119935, 0x20000000);
					Function_353(&Global_54076, 0x20000000, 2);
					if (!&bParam0)
					{
						Function_281("tut_new_weapon_range", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119935, 0x40000000))
			{
				if (Function_354(bVar1, 0x40000000))
				{
					Function_136(&Global_119935, 0x40000000);
					Function_353(&Global_54076, 0x40000000, 2);
					if (!&bParam0)
					{
						Function_281("tut_melee_lockon", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!Function_290(Global_119936, 2))
			{
				if (Function_354(bVar2, 2))
				{
					Function_136(&Global_119936, 2);
					Function_353(&Global_54076, 2, 3);
					if (!&bParam0)
					{
						Function_281("tut_health_death", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 4))
			{
				if (Function_354(bVar2, 4))
				{
					Function_136(&Global_119936, 4);
					Function_353(&Global_54076, 4, 3);
					if (!&bParam0)
					{
						Function_281("tut_health_regen", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 8))
			{
				if (Function_354(bVar2, 8))
				{
					Function_136(&Global_119936, 8);
					Function_353(&Global_54076, 8, 3);
					if (!&bParam0)
					{
						Function_281("tut_horse_roads", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 16))
			{
				if (Function_354(bVar2, 16))
				{
					Function_136(&Global_119936, 16);
					Function_353(&Global_54076, 16, 3);
					if (!&bParam0)
					{
						Function_281("tut_ledgeplay_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 32))
			{
				if (Function_354(bVar2, 32))
				{
					Function_136(&Global_119936, 32);
					Function_353(&Global_54076, 32, 3);
					if (!&bParam0)
					{
						Function_281("tut_ledgeplay_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 64))
			{
				if (Function_354(bVar2, 64))
				{
					Function_136(&Global_119936, 64);
					Function_353(&Global_54076, 64, 3);
					if (!&bParam0)
					{
						Function_281("tut_sniper_zoom", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 256))
			{
				if (Function_354(bVar2, 256))
				{
					Function_136(&Global_119936, 256);
					Function_353(&Global_54076, 256, 3);
					if (!&bParam0)
					{
						if (GET_PLAYER_COMBATMODE() == 1)
						{
							if (IS_USING_KEYBOARD_AND_MOUSE())
							{
								Function_281("tut_weapon_aim_expert_KBM", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_281("tut_weapon_aim_expert", 0x41200000, 1, 0, 2, 1, 0);
							}
						}
						else if (GET_PLAYER_COMBATMODE() == 2)
						{
							Function_281("tut_weapon_aim_normal", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_281("tut_weapon_aim_casual", 0x41200000, 1, 0, 2, 1, 0);
						}
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 2048))
			{
				if (Function_354(bVar2, 2048))
				{
					Function_136(&Global_119936, 2048);
					Function_353(&Global_54076, 2048, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_DEATH", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 4096))
			{
				if (Function_354(bVar2, 4096))
				{
					Function_136(&Global_119936, 4096);
					Function_353(&Global_54076, 4096, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_DEATH_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 8192))
			{
				if (Function_354(bVar2, 8192))
				{
					Function_136(&Global_119936, 8192);
					Function_353(&Global_54076, 8192, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_WAR", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 16384))
			{
				if (Function_354(bVar2, 16384))
				{
					Function_136(&Global_119936, 16384);
					Function_353(&Global_54076, 16384, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_WAR_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 32768))
			{
				if (Function_354(bVar2, 32768))
				{
					Function_136(&Global_119936, 32768);
					Function_353(&Global_54076, 32768, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_PEST", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 65536))
			{
				if (Function_354(bVar2, 65536))
				{
					Function_136(&Global_119936, 65536);
					Function_353(&Global_54076, 65536, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_PEST_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 131072))
			{
				if (Function_354(bVar2, 131072))
				{
					Function_136(&Global_119936, 131072);
					Function_353(&Global_54076, 131072, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_FAM", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 262144))
			{
				if (Function_354(bVar2, 262144))
				{
					Function_136(&Global_119936, 262144);
					Function_353(&Global_54076, 262144, 3);
					if (!&bParam0)
					{
						Function_281("AMZFH_HLP_FAM_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 128))
			{
				if (Function_354(bVar2, 128))
				{
					Function_136(&Global_119936, 128);
					Function_353(&Global_54076, 128, 3);
					if (!&bParam0)
					{
						Function_281("tut_horse_mount", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 512))
			{
				if (Function_354(bVar2, 512))
				{
					Function_136(&Global_119936, 512);
					Function_353(&Global_54076, 512, 3);
					if (!&bParam0)
					{
						Function_281("tut_undead_nightmare", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_290(Global_119936, 1024))
			{
				if (Function_354(bVar2, 1024))
				{
					Function_136(&Global_119936, 1024);
					Function_353(&Global_54076, 1024, 3);
					if (!&bParam0)
					{
						Function_281("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			break;
	}
	iLocal_582++;
	if (iLocal_582 >= 2)
	{
		iLocal_582 = 0;
	}
	return 0;
}

void Function_353(var uParam0, int iParam1, int iParam2) //Position: 0x18BE5 / 101349
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
	Function_283(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

bool Function_354(bool bParam0, int iParam1) //Position: 0x18C39 / 101433
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_355() //Position: 0x18C4F / 101455
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		Global_39290[iVar0] = !Global_6606;
		switch (iVar0)
		{
			case 0x00000000:
			case 0x00000002:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_110(390, 3.0f);
					Function_30(390, 3, 0);
				}
				break;
			
			case 0x00000003:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000004:
				if (Function_17(2) || !Global_6606)
				{
					Global_39290[iVar0] = 1;
					Function_363(1);
					ENABLE_AMBIENT_SPAWNING(true);
				}
				else
				{
					Global_39290[iVar0] = 0;
					Function_436(1);
					ENABLE_AMBIENT_SPAWNING(false);
				}
				break;
			
			case 0x00000005:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000009:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000006:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000007:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000008:
				if (Function_17(4))
				{
					Global_39290[iVar0] = 1;
				}
				else
				{
					Global_39290[iVar0] = 0;
				}
				break;
			
			case 0x0000000A:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x0000000B:
				if (Function_319(0) || !Global_6606)
				{
					Global_39290[iVar0] = 1;
				}
				break;
			
			case 0x0000000C:
				Function_357(1);
				Global_39290[iVar0] = 1;
				break;
			
			case 0x0000000D:
			case 0x0000000F:
			case 0x0000000E:
				Global_39290[iVar0] = 0;
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
				break;
		}
		iVar0++;
	}
	if (Global_6606)
	{
		Function_356(0);
	}
	return;
}

void Function_356(bool bParam0) //Position: 0x18E26 / 101926
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	bVar0 = false;
	while (bVar0 <= Global_39290)
	{
		if ((!Global_39290[bVar0] && (!&bParam0 || !Function_54())) && !bVar1)
		{
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000002:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x00000001:
					Global_39290[bVar0] = 1;
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_110(390, 3.0f);
					Function_30(390, 3, 0);
					break;
				
				case 0x00000003:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_17(2))
					{
						Global_39290[bVar0] = 1;
						Function_363(1);
						ENABLE_AMBIENT_SPAWNING(true);
					}
					break;
				
				case 0x00000005:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x00000009:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x00000006:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x00000007:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x00000008:
					if (Function_17(4))
					{
						Global_39290[bVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					Global_39290[bVar0] = 1;
					break;
				
				case 0x0000000B:
					if (Function_319(0) || !Global_6606)
					{
						Global_39290[bVar0] = 1;
					}
					break;
				
				case 0x0000000C:
					Global_39290[bVar0] = 1;
					Function_357(1);
					break;
				
				case 0x0000000F:
				case 0x0000000D:
				case 0x0000000E:
					Global_39290[bVar0] = 0;
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_357(bool bParam0) //Position: 0x18FDC / 102364
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

void Function_358(var uParam0, int iParam1) //Position: 0x19053 / 102483
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_359(int iParam0) //Position: 0x1907B / 102523
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_360(int iParam0) //Position: 0x1908E / 102542
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_361() //Position: 0x190AB / 102571
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

void Function_362() //Position: 0x190D1 / 102609
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

void Function_363(int iParam0) //Position: 0x190F7 / 102647
{
	if (Function_434(iParam0, 1) && !Function_434(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_364(int iParam0) //Position: 0x19124 / 102692
{
	Function_365(&Global_43580, iParam0);
	return;
}

void Function_365(var uParam0, var uParam1) //Position: 0x19132 / 102706
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_366() //Position: 0x19151 / 102737
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
	Function_367(&Global_39554);
	ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
	return;
}

int Function_367(int iParam0) //Position: 0x1920E / 102926
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_32());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_32());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_368(int iParam0) //Position: 0x19244 / 102980
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return STRING_TO_INT(&uVar0);
	}
	return 4294967295;
}

bool Function_369(int iParam0, bool bParam1) //Position: 0x1926B / 103019
{
	int iVar0;
	
	iVar0 = Function_406(iParam0);
	if (!Function_15(iVar0))
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

bool Function_370(bool bParam0, bool bParam1, bool bParam2) //Position: 0x192A9 / 103081
{
	int iVar0;
	
	iVar0 = Function_437(bParam0, bParam1, bParam2);
	return Function_13(iVar0);
}

void Function_371() //Position: 0x192BF / 103103
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

void Function_372() //Position: 0x19386 / 103302
{
	return;
}

void Function_373() //Position: 0x1938C / 103308
{
	return;
}

void Function_374() //Position: 0x19392 / 103314
{
	Function_380(1, &Global_77932[118] + 8, &Global_77932[118] + 12);
	Function_379(0, &Global_77932[018] + 8, &Global_77932[018] + 12);
	Function_375(2, &Global_77932[218] + 8, &Global_77932[218] + 12);
	return;
}

void Function_375(bool bParam0, var uParam1, int iParam2) //Position: 0x193DA / 103386
{
	bool bVar0;
	
	switch (uParam1)
	{
		case 0x00000004:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
			Function_376(bParam0, iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
			break;
	}
	return;
}

void Function_376(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x1941A / 103450
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_378(bParam0), fParam1, 1, 0);
	if (&bParam2)
	{
		if (((bParam0 != 12 || bParam0 != 13) || bParam0 != 10) || bParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(bParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_78078[bParam018] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (&bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(&bParam3));
			}
			if (&bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(&bParam4));
			}
			if (&bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(&bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_378(bParam0), &cVar0, 2, 2, false);
			Function_140(Function_378(bParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(bParam0) };
			if (0 | Global_53524.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (&bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((&iParam6 + 1)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(&bParam3));
			}
			if (&bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((&iParam6 + 2)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(&bParam4));
			}
			if (&bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((&iParam6 + 3)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(&bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_378(bParam0), &cVar20, 2, 2, true);
			Function_140(Function_378(bParam0), 0);
		}
	}
}

struct<24> Function_377(bool bParam0) //Position: 0x195B4 / 103860
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[bParam018] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[bParam018] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_378(bool bParam0) //Position: 0x19628 / 103976
{
	if (0 | Global_53524.f_44)
	{
		return Global_78078[bParam018].f_32;
	}
	return Global_77932[bParam018].f_32;
}

void Function_379(bool bParam0, var uParam1, int iParam2) //Position: 0x19650 / 104016
{
	bool bVar0;
	
	switch (uParam1)
	{
		case 0x00000000:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
			Function_376(bParam0, iParam2, 1, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000001:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
			Function_376(bParam0, iParam2, 1, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000002:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
			Function_376(bParam0, iParam2, 0, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000003:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
			Function_376(bParam0, iParam2, 0, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000004:
			Global_77932[bParam018].f_36 = 0;
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
			Function_376(bParam0, iParam2, 1, bVar0, 4294967295, 4294967295, 22);
			break;
	}
	return;
}

void Function_380(bool bParam0, var uParam1, int iParam2) //Position: 0x1976A / 104298
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	switch (uParam1)
	{
		case 0x00000000:
			bVar1 = Function_381(bParam0, 1, 1);
			bVar2 = Function_381(bParam0, 2, 1);
			Global_77932[bParam018].f_36 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(125));
			Function_376(bParam0, iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
			break;
		
		case 0x00000001:
			bVar1 = Function_381(bParam0, 1, 1);
			bVar2 = Function_381(bParam0, 2, 1);
			Global_77932[bParam018].f_36 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(40));
			Function_376(bParam0, iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
			break;
		
		case 0x00000002:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(2));
			Function_376(bParam0, iParam2, 0, bVar0, 4294967295, 4294967295, 19);
			break;
		
		case 0x00000003:
			bVar1 = Function_381(bParam0, 1, 1);
			bVar2 = Function_381(bParam0, 2, 1);
			bVar3 = Function_381(bParam0, 3, 1);
			Global_77932[bParam018].f_36 = ((CEIL(bVar1) + CEIL(bVar2)) + CEIL(bVar3));
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
			Function_376(bParam0, iParam2, 1, CEIL(bVar1), CEIL(bVar2), CEIL(bVar3), 19);
			break;
		
		case 0x00000004:
			bVar0 = Global_77932[bParam018].f_36;
			iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(true));
			Function_376(bParam0, iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
			break;
	}
	return;
}

bool Function_381(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19916 / 104726
{
	char* cVar0[16];
	bool bVar4;
	
	if (&bParam2)
	{
		if (0 | Global_53524.f_44)
		{
			return (*&Global_78078[bParam018] + 44)[bParam1];
		}
		return (*&Global_77932[bParam018] + 44)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_382();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(&bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

var Function_382() //Position: 0x199DD / 104925
{
	var uVar0;
	
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &uVar0;
}

void Function_383() //Position: 0x19A2E / 105006
{
	Function_400();
	Function_391();
	Function_384();
	return;
}

void Function_384() //Position: 0x19A3D / 105021
{
	Function_385(0);
	Function_385(1);
	Function_385(3);
	Function_385(2);
	return;
}

void Function_385(bool bParam0) //Position: 0x19A53 / 105043
{
	if (!Function_390(bParam0, 2))
	{
		Function_389(bParam0, 2);
		Function_386(bParam0, 0);
	}
	return;
}

void Function_386(bool bParam0, bool bParam1) //Position: 0x19A6F / 105071
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_378(bParam0));
	if ((bParam1 && Function_390(bParam0, 4)) || !&bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_378(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_388(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_387(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_378(bParam0), &Var6, 0, 2, Function_390(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_378(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!&bParam1)
		{
			Function_389(bParam0, 4);
		}
	}
	return;
}

struct<24> Function_387(bool bParam0) //Position: 0x19AF9 / 105209
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(bParam0) };
	if (Global_53524.f_44 | 0)
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(bParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_388(bool bParam0) //Position: 0x19B54 / 105300
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[bParam018] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[bParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_389(bool bParam0, int iParam1) //Position: 0x19BC0 / 105408
{
	if (0 | Global_53524.f_44)
	{
		Function_53(&Global_78078[bParam018] + 40, iParam1);
	}
	else
	{
		Function_53(&Global_77932[bParam018] + 40, iParam1);
	}
	return;
}

bool Function_390(bool bParam0, bool bParam1) //Position: 0x19BF1 / 105457
{
	if (0 | Global_53524.f_44)
	{
		return Function_434(Global_78078[bParam018].f_40, bParam1);
	}
	return Function_434(Global_77932[bParam018].f_40, bParam1);
}

void Function_391() //Position: 0x19C23 / 105507
{
	if (!Global_53524.f_44)
	{
		Function_392(0, &Global_77932, "AMZSS", 3, 0, "UN_UNDEADSHARPSHOOTER");
		Function_392(1, &Global_77932, "AMZMH", 3, 0, "UN_UNDEADHUNTER");
		Function_392(2, &Global_77932, "AMZFH", 3, 0, "UN_FOURHORSES");
		Function_392(3, &Global_77932, "AMZTH", 3, 0, "UN_UNDEADTREASUREHUNTER");
	}
	return;
}

void Function_392(bool bParam0, struct<18>[] Param1, char* cParam2, bool bParam4, int iParam5) //Position: 0x19CCE / 105678
{
	int iVar0;
	var uVar1;
	
	strcpy(&Param1[bParam018] + 16, &cParam2, 8);
	Param1[bParam018] = bParam0;
	Param1[bParam018].f_140 = &bParam4;
	if (Global_6605 || Global_131807.f_1332)
	{
		Param1[bParam018].f_8 = 0;
		if (Global_53524.f_44)
		{
			Global_78078[bParam018].f_36 = 0;
			Global_78078[bParam018].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_78078[bParam018] + 44)[iVar0] = 0.0f;
				iVar0++;
			}
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
			Global_77932[bParam018].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_77932[bParam018] + 44)[iVar0] = 0.0f;
				iVar0++;
			}
		}
	}
	if (Global_131807.f_1332)
	{
		Function_399(bParam0, 4);
		Function_399(bParam0, 2);
		Function_398(bParam0, 0);
		Function_398(bParam0, 1);
		uVar1 = Function_397(bParam0);
		Function_396(&uVar1);
		Function_395(bParam0, 1);
	}
	if (&bParam4)
	{
		if (!Global_53524.f_44)
		{
			Param1[bParam018].f_4 = 1;
			Param1[bParam018].f_8 = 0;
			return;
		}
	}
	if (!IS_STRING_VALID(&iParam5))
	{
		iParam5 = "challenge_04";
	}
	Function_394(bParam0, uParam3, &iParam5);
	Function_386(bParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_393(bParam0);
	}
	else
	{
		Param1[bParam018].f_4 = 0;
		Param1[bParam018].f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_378(bParam0), 0.0f, 1, 0);
	}
}

void Function_393(bool bParam0) //Position: 0x19E56 / 106070
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Function_378(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_388(bParam0) };
	if (0 | Global_53524.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_77932[bParam018] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_387(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_378(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_378(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_378(bParam0), 1.0f, 0, 0);
	return;
}

var Function_394(int iParam0, var uParam1, int iParam2) //Position: 0x19ED2 / 106194
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_388(iParam0) };
	if (0 | Global_53524.f_44)
	{
		Global_78078[iParam018].f_32 = CREATE_JOURNAL_ENTRY(&Var0, &uParam1, false, &iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(iParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_78078[iParam018].f_32;
	}
	Global_77932[iParam018].f_32 = CREATE_JOURNAL_ENTRY(&Var0, &uParam1, false, &iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(iParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_77932[iParam018].f_32;
}

void Function_395(bool bParam0, bool bParam1) //Position: 0x19F57 / 106327
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = false;
	cVar1 = Function_382();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (&bParam1)
	{
		if (0 | Global_53524.f_44)
		{
			Global_78078[bParam018].f_36 = 0;
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
		}
	}
	return;
}

void Function_396(var uParam0) //Position: 0x1A122 / 106786
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(&uParam0) >= bVar0)
		{
			iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				if (DECOR_CHECK_EXIST(&iVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(&iVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(&iVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(&uParam0) >= bVar0)
				{
					iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
				}
				else
				{
					iVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(&uParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

var Function_397(int iParam0) //Position: 0x1A218 / 107032
{
	int iVar0;
	char* cVar1[16];
	
	cVar1 = Function_382();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, iParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&cVar1, &cVar2));
	}
	return &iVar0;
}

void Function_398(int iParam0, int iParam1) //Position: 0x1A254 / 107092
{
	if (Global_53524.f_44)
	{
		REMOVE_JOURNAL_ENTRY(Global_78078[iParam018].f_32, &iParam1);
	}
	else
	{
		REMOVE_JOURNAL_ENTRY(Global_77932[iParam018].f_32, &iParam1);
	}
	return;
}

void Function_399(int iParam0, int iParam1) //Position: 0x1A285 / 107141
{
	if (Global_53524.f_44)
	{
		Function_433(&Global_78078[iParam018] + 40, iParam1);
	}
	else
	{
		Function_433(&Global_77932[iParam018] + 40, iParam1);
	}
	return;
}

void Function_400() //Position: 0x1A2B4 / 107188
{
	bool bVar0;
	var uVar1;
	var uVar2;
	char* cVar3[16];
	char* cVar7[16];
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (Global_98983 - 1))
	{
		Function_402(bVar0);
		bVar0++;
	}
	uVar1 = Function_382();
	uVar2 = Function_401();
	if (Global_53524.f_44)
	{
		bVar0 = false;
		while (bVar0 < 35)
		{
			strcpy(&cVar3, "nAM_OBJSET", 16);
			stradd(&cVar3, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar3, &uVar1, 4294967295, 0);
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 3)
		{
			strcpy(&cVar7, "nAM_OBJSET", 16);
			stradd(&cVar7, INT_TO_STRING(bVar0), 16);
			if (!IS_OBJECTSET_VALID(GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uVar1, &cVar7))))
			{
				CREATE_OBJECTSET_IN_LAYOUT(&cVar7, &uVar1, 4294967295, 0);
			}
			bVar0++;
		}
	}
	ITERATE_EVERYWHERE(&uVar2);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 3);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	return;
}

var Function_401() //Position: 0x1A385 / 107397
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_382();
	iVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(&iVar1))
	{
		iVar1 = CREATE_NAMED_OBJECT_ITERATOR(&uVar0, "AmbientMissions_Iterator");
	}
	return &iVar1;
}

void Function_402(int iParam0) //Position: 0x1A3E9 / 107497
{
	Global_98983[iParam07] = 4294967295;
	Global_98983[iParam07].f_4 = 4294967295;
	strcpy(&Global_98983[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_98983[iParam07] + 40, "NHIL", 8);
	return;
}

void Function_403() //Position: 0x1A429 / 107561
{
	Function_67(&(Global_43791[Global_46914[1]]), 256);
	Function_67(&(Global_43791[Global_46760[4]]), 256);
	Function_67(&(Global_43791[Global_46816[2]]), 256);
	Function_409(&(Global_43791[Global_46816[2]]), 32768);
	Function_67(&(Global_43791[Global_46796[3]]), 256);
	Function_409(&(Global_43791[Global_46796[3]]), 32768);
	Function_67(&(Global_43791[Global_46850[2]]), 256);
	Function_409(&(Global_43791[Global_46850[2]]), 32768);
	Function_67(&(Global_43791[Global_46838[1]]), 256);
	Function_409(&(Global_43791[Global_46838[1]]), 32768);
	return;
}

void Function_404(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1A4DD / 107741
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_305(12);
	Function_309(2);
	Function_306((15 - Function_312(105)));
	if (Function_171(bParam0) == 1)
	{
		iVar2 = Function_170(bParam0);
		Function_165(&(Global_6667[iVar228]));
		Function_436(4194304);
		if (&bParam3)
		{
			Function_405(iVar2, &uVar0, 0);
		}
		else if (&bParam4)
		{
			Function_405(iVar2, &uVar0, 0);
		}
		uVar1 = Function_115();
		if (&bParam1)
		{
			Function_103(iVar2, bParam0, uVar1);
			Function_102();
		}
	}
	Global_53524.f_64 = 0;
	Global_53524.f_68 = 0;
	Global_21684[bParam07].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_82(bParam0, &bParam1, &uParam2, uVar1);
	if (Function_171(bParam0) == 1)
	{
		if (&bParam1)
		{
		}
	}
	Function_314(0);
	iVar2 = Function_170(bParam0);
	if (iVar2 == 1)
	{
		Function_315("ZOMBIE_STORY_1_SHORT", (7,5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_315("ZOMBIE_STORY_4_SHORT", 7,5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_405(int iParam0, var uParam1, bool bParam2) //Position: 0x1A5EC / 108012
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_16(iParam0))
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
			Function_163(21, &bParam2, 0);
			Function_163(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_406(int iParam0) //Position: 0x1A68E / 108174
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_407(bool bParam0) //Position: 0x1A6A8 / 108200
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

void Function_408() //Position: 0x1A6F2 / 108274
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
			Function_101(Global_21684[iVar07], &iVar1, &iVar2, &uVar3);
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

void Function_409(var uParam0, bool bParam1) //Position: 0x1A881 / 108673
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

var Function_410(var uParam0, char* cParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x1A89B / 108699
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<9> Var4;
	
	bVar0 = Function_411(&cParam1);
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
		Function_409(&(Global_43791[bVar0]), 0x403ee3ff);
	}
	(&Global_44085[bVar09] + 8) = &iParam3;
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
		Function_67(&(Global_43791[bVar0]), 8192);
	}
	if (&bParam7)
	{
		Function_67(&(Global_43791[bVar0]), 16384);
	}
	if (&bParam8)
	{
		Function_67(&(Global_43791[bVar0]), 32768);
	}
	if (&bParam9)
	{
		Function_67(&(Global_43791[bVar0]), 65536);
	}
	switch (iParam4)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (Function_343(iParam2))
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
		if (Function_50())
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
		Global_44085[bVar09].f_48 = APPEND_REGION(GET_OBJECT_NAME(&iParam3), &fVar2, ((vVar4.x + vVar4.z) / 2.0f), iVar1, Function_64(&(Global_43791[bVar0]), 4096), 0, 0);
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
		Function_110(473, (Function_41(473) + 1.0f));
		iVar8 = Function_162(bVar0);
		if (iVar8 == Global_46722[0])
		{
			Function_110(474, (Function_41(474) + 1.0f));
		}
		else if (iVar8 == Global_46722[1])
		{
			Function_110(475, (Function_41(475) + 1.0f));
		}
		else if (iVar8 == Global_46722[2])
		{
			Function_110(476, (Function_41(476) + 1.0f));
		}
	}
	else
	{
		Function_67(&(Global_43791[bVar0]), 4096);
	}
	return bVar0;
}

var Function_411(int iParam0) //Position: 0x1AE7F / 110207
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

void Function_412() //Position: 0x1AECD / 110285
{
	Function_415(&(Global_12342[102]), 2);
	Function_413(&Global_12342, &Global_14762, 0, 268, "zombieBrains/RM_Br_Z");
	Function_413(&Global_12342, &Global_14762, 3, 269, "zombieBrains/RM_Br_Z");
	Function_413(&Global_12342, &Global_14762, 1, 276, "zombieBrains/RM_Br_Z");
	Function_413(&Global_12342, &Global_14762, 2, 283, "zombieBrains/RM_Br_Z");
	Function_413(&Global_12342, &Global_14762, 11, 289, "zombieBrains/RM_Br_Z");
	Function_413(&Global_12342, &Global_14762, 4, 391, "zombieBrains/SBrain_Z");
	Function_413(&Global_12342, &Global_14762, 5, 392, "zombieBrains/SBrain_Z");
	Function_413(&Global_12342, &Global_14762, 6, 393, "zombieBrains/SBrain_Z");
	Function_413(&Global_12342, &Global_14762, 7, 394, "zombieBrains/SBrain_Z");
	Function_413(&Global_12342, &Global_14762, 8, 395, "zombieBrains/SBrain_Z");
	Function_413(&Global_12342, &Global_14762, 9, 396, "zombieBrains/SBrain_Z");
	return;
}

void Function_413(struct<2>[] Param0, vector3[] vParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x1B073 / 110707
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
	Function_415(&(Param0[iVar02]), 1);
	Function_414(&(Param0[iVar02]), 2);
	Function_415(&(Param0[iVar02]), 8);
	Function_415(&(Param0[iVar02]), 16);
}

void Function_414(var uParam0, int iParam1) //Position: 0x1B118 / 110872
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_415(var uParam0, int iParam1) //Position: 0x1B129 / 110889
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_416() //Position: 0x1B143 / 110915
{
	Function_413(&Global_11752, &Global_13888, 0, 15, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 1, 24, "zombieBrains/RF_Br_Z");
	Function_413(&Global_11752, &Global_13888, 2, 420, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 3, 36, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 4, 38, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 5, 39, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 6, 54, "zombieBrains/RF_Br_Z");
	Function_413(&Global_11752, &Global_13888, 7, 55, "zombieBrains/RF_Br_Z");
	Function_413(&Global_11752, &Global_13888, 8, 56, "zombieBrains/RF_Br_Z");
	Function_413(&Global_11752, &Global_13888, 9, 404, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 13, 400, "zombieBrains/RM_Br_Z");
	Function_413(&Global_11752, &Global_13888, 14, 372, "zombieBrains/SBrain_Z");
	Function_413(&Global_11752, &Global_13888, 15, 373, "zombieBrains/SBrain_Z");
	Function_413(&Global_11752, &Global_13888, 10, 374, "zombieBrains/SBrain_Z");
	Function_413(&Global_11752, &Global_13888, 11, 375, "zombieBrains/SBrain_Z");
	Function_413(&Global_11752, &Global_13888, 12, 376, "zombieBrains/SBrain_Z");
	return;
}

void Function_417() //Position: 0x1B38D / 111501
{
	int iVar0;
	var uVar1;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= Global_16865)
	{
		if (StackVal != 0)
		{
			iVar3 = Function_419(StackVal);
			Function_125(StackVal);
			uVar1 = Function_125(StackVal);
			Global_16865[iVar0] = ADD_BLIP_FOR_COORD(StackVal, Function_418(&uVar1), 0.0f, 2, iVar3);
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

int Function_418(int iParam0) //Position: 0x1B49B / 111771
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

int Function_419(int iParam0) //Position: 0x1B5D2 / 112082
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

void Function_420() //Position: 0x1B68A / 112266
{
	var uVar0;
	
	Function_421(4, 1);
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

void Function_421(int iParam0, int iParam1) //Position: 0x1F92D / 129325
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

int Function_422() //Position: 0x1F977 / 129399
{
	Function_446(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_2", 1, 0);
	Function_446(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_7", 1, 0);
	Function_446(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/treasure_hunting_6", 1, 0);
	if (Function_441(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

void Function_423() //Position: 0x1FA5F / 129631
{
	Function_416();
	Function_412();
	return;
}

void Function_424() //Position: 0x1FA6B / 129643
{
	DISABLE_GRINGO_STREAMING_CHECKS();
	ANIMAL_SPECIES_GRINGO_LOAD_ALL();
	ENABLE_GRINGO_STREAMING_CHECKS();
	return;
}

bool Function_425(int iParam0) //Position: 0x1FA7A / 129658
{
	return Function_339(Global_131807.f_1304, iParam0);
}

void Function_426() //Position: 0x1FA8C / 129676
{
	Global_99725[3143].f_216 = Global_46926[4];
	Global_99725[3243].f_216 = 4294967295;
	Global_99725[3343].f_216 = 4294967295;
	Global_99725[3443].f_216 = 4294967295;
	Global_99725[3543].f_216 = 4294967295;
	Global_99725[3643].f_216 = 4294967295;
	Global_99725[3743].f_216 = 4294967295;
	Global_99725[243].f_216 = Global_46914[0];
	Global_99725[343].f_216 = Global_46914[0];
	Global_99725[443].f_216 = Global_46914[0];
	Global_99725[543].f_216 = Global_46914[0];
	Global_99725[1243].f_216 = Global_46816[0];
	Global_99725[1343].f_216 = Global_46816[0];
	Global_99725[1443].f_216 = Global_46816[0];
	Global_99725[643].f_216 = Global_46816[8];
	Global_99725[743].f_216 = Global_46816[8];
	Global_99725[843].f_216 = Global_46838[1];
	Global_99725[943].f_216 = Global_46838[3];
	Global_99725[1043].f_216 = Global_46760[3];
	Global_99725[1143].f_216 = Global_46838[3];
	Global_99725[043].f_216 = Global_46838[0];
	Global_99725[143].f_216 = Global_46838[0];
	Global_99725[1543].f_216 = Global_46760[0];
	Global_99725[1643].f_216 = Global_46760[0];
	Global_99725[1743].f_216 = Global_46760[0];
	Global_99725[1843].f_216 = Global_46760[0];
	Global_99725[1943].f_216 = Global_46838[1];
	Global_99725[2043].f_216 = Global_46760[10];
	Global_99725[2143].f_216 = Global_46838[1];
	Global_99725[2243].f_216 = Global_46894[2];
	Global_99725[2343].f_216 = Global_46894[2];
	Global_99725[2443].f_216 = Global_46866[1];
	Global_99725[2543].f_216 = Global_46866[1];
	Global_99725[2643].f_216 = Global_46866[1];
	Global_99725[2743].f_216 = Global_46866[1];
	Global_99725[2843].f_216 = Global_46914[1];
	Global_99725[2943].f_216 = Global_46914[1];
	Global_99725[3043].f_216 = Global_46914[1];
	Global_99725[3143].f_252 = 4294967295;
	Global_99725[3243].f_252 = 4294967295;
	Global_99725[3343].f_252 = 4294967295;
	Global_99725[3443].f_252 = 4294967295;
	Global_99725[3543].f_252 = 4294967295;
	Global_99725[3643].f_252 = 4294967295;
	Global_99725[3743].f_252 = 4294967295;
	Global_99725[243].f_252 = 4294967295;
	Global_99725[343].f_252 = 4294967295;
	Global_99725[443].f_252 = 4294967295;
	Global_99725[543].f_252 = 4294967295;
	Global_99725[1243].f_252 = 4294967295;
	Global_99725[1343].f_252 = 4294967295;
	Global_99725[1443].f_252 = 4294967295;
	Global_99725[643].f_252 = 4294967295;
	Global_99725[743].f_252 = 4294967295;
	Global_99725[843].f_252 = 4294967295;
	Global_99725[943].f_252 = 4294967295;
	Global_99725[1043].f_252 = 4294967295;
	Global_99725[1143].f_252 = 4294967295;
	Global_99725[043].f_252 = 4294967295;
	Global_99725[143].f_252 = 4294967295;
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
	return;
}

void Function_427() //Position: 0x1FE69 / 130665
{
	int iVar0;
	
	*(&Global_99725[3143] + 36) = 31;
	Global_99725[3143] = 3;
	strcpy(&Global_99725[3143] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3143] + 76, "sasquatch1_OBJ", 16);
	*(&Global_99725[3143] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch1", 4);
	Global_99725[3143].f_256 = 5;
	Global_99725[3143].f_264 = 1;
	Global_99725[3143].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3143] + 44, "INVALID", 16);
	Global_99725[3143].f_212 = 4294967295;
	Global_99725[3143].f_220 = 1273;
	Global_99725[3143].f_152 = 411;
	Global_99725[3143].f_176 = 3;
	Global_99725[3143].f_180 = 6.0f;
	*(&Global_99725[3143] + 184) = Vector(-856,241f, 189,719f, 1586,376f);
	*(&Global_99725[3143] + 196) = Vector(-856,241f, 189,719f, 1586,376f);
	Global_99725[3143].f_208 = 349,652f;
	*(&Global_99725[3143] + 136) = GET_ASSET_ID("$/cutscene/sasquatch_1_cs/sasquatch_1_cs", 9);
	Global_99725[3143].f_232 = 1;
	Global_99725[3143].f_144 = 150.0f;
	Global_99725[3143].f_148 = 200.0f;
	*(&Global_99725[3143] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3143] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3143].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3143]), 31, iVar0);
	}
	*(&Global_99725[3143] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3143].f_248 = 0;
	*(&Global_99725[3243] + 36) = 31;
	Global_99725[3243] = 3;
	strcpy(&Global_99725[3243] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3243] + 76, "sasquatch2_OBJ", 16);
	*(&Global_99725[3243] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch2", 4);
	Global_99725[3243].f_256 = 31;
	Global_99725[3243].f_264 = 1;
	Global_99725[3243].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3243] + 44, "INVALID", 16);
	Global_99725[3243].f_212 = 4294967295;
	Global_99725[3243].f_220 = 4294967295;
	Global_99725[3243].f_152 = 4294967295;
	Global_99725[3243].f_176 = 3;
	Global_99725[3243].f_180 = 6.0f;
	*(&Global_99725[3243] + 184) = Vector(-827,227f, 183,717f, 1311,458f);
	*(&Global_99725[3243] + 196) = Vector(-827,227f, 183,717f, 1311,458f);
	Global_99725[3243].f_208 = 349,652f;
	Global_99725[3243].f_232 = 1;
	Global_99725[3243].f_144 = 200.0f;
	Global_99725[3243].f_148 = 250.0f;
	*(&Global_99725[3243] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3243] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3243].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3243]), 32, iVar0);
	}
	*(&Global_99725[3243] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3243].f_248 = 0;
	*(&Global_99725[3343] + 36) = 31;
	Global_99725[3343] = 3;
	strcpy(&Global_99725[3343] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3343] + 76, "sasquatch3_OBJ", 16);
	*(&Global_99725[3343] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch3", 4);
	Global_99725[3343].f_256 = 32;
	Global_99725[3343].f_264 = 1;
	Global_99725[3343].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3343] + 44, "INVALID", 16);
	Global_99725[3343].f_212 = 4294967295;
	Global_99725[3343].f_220 = 4294967295;
	Global_99725[3343].f_152 = 4294967295;
	Global_99725[3343].f_176 = 3;
	Global_99725[3343].f_180 = 3.0f;
	*(&Global_99725[3343] + 184) = Vector(-506,035f, 150,625f, 1239,386f);
	*(&Global_99725[3343] + 196) = Vector(-506,035f, 150,625f, 1239,386f);
	Global_99725[3343].f_208 = 349,652f;
	Global_99725[3343].f_232 = 1;
	Global_99725[3343].f_144 = 200.0f;
	Global_99725[3343].f_148 = 250.0f;
	*(&Global_99725[3343] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3343] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3343].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3343]), 33, iVar0);
	}
	*(&Global_99725[3343] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3343].f_248 = 0;
	*(&Global_99725[3443] + 36) = 31;
	Global_99725[3443] = 3;
	strcpy(&Global_99725[3443] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3443] + 76, "sasquatch4_OBJ", 16);
	*(&Global_99725[3443] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch4", 4);
	Global_99725[3443].f_256 = 33;
	Global_99725[3443].f_264 = 1;
	Global_99725[3443].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3443] + 44, "INVALID", 16);
	Global_99725[3443].f_212 = 4294967295;
	Global_99725[3443].f_220 = 4294967295;
	Global_99725[3443].f_152 = 4294967295;
	Global_99725[3443].f_176 = 3;
	Global_99725[3443].f_180 = 3.0f;
	*(&Global_99725[3443] + 184) = Vector(-598,856f, 168,113f, 1093,197f);
	*(&Global_99725[3443] + 196) = Vector(-598,856f, 168,113f, 1093,197f);
	Global_99725[3443].f_208 = 349,652f;
	Global_99725[3443].f_232 = 1;
	Global_99725[3443].f_144 = 200.0f;
	Global_99725[3443].f_148 = 250.0f;
	*(&Global_99725[3443] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3443] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3443].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3443]), 34, iVar0);
	}
	*(&Global_99725[3443] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3443].f_248 = 0;
	*(&Global_99725[3543] + 36) = 31;
	Global_99725[3543] = 3;
	strcpy(&Global_99725[3543] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3543] + 76, "sasquatch5_OBJ", 16);
	*(&Global_99725[3543] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch5", 4);
	Global_99725[3543].f_256 = 34;
	Global_99725[3543].f_264 = 1;
	Global_99725[3543].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3543] + 44, "INVALID", 16);
	Global_99725[3543].f_212 = 4294967295;
	Global_99725[3543].f_220 = 4294967295;
	Global_99725[3543].f_152 = 4294967295;
	Global_99725[3543].f_176 = 3;
	Global_99725[3543].f_180 = 3.0f;
	*(&Global_99725[3543] + 184) = Vector(-687,347f, 172,025f, 748,897f);
	*(&Global_99725[3543] + 196) = Vector(-687,347f, 172,025f, 748,897f);
	Global_99725[3543].f_208 = 349,652f;
	Global_99725[3543].f_232 = 1;
	Global_99725[3543].f_144 = 200.0f;
	Global_99725[3543].f_148 = 250.0f;
	*(&Global_99725[3543] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3543] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3543].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3543]), 35, iVar0);
	}
	*(&Global_99725[3543] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3543].f_248 = 0;
	*(&Global_99725[3643] + 36) = 31;
	Global_99725[3643] = 3;
	strcpy(&Global_99725[3643] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3643] + 76, "sasquatch6_OBJ", 16);
	*(&Global_99725[3643] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch6", 4);
	Global_99725[3643].f_256 = 35;
	Global_99725[3643].f_264 = 1;
	Global_99725[3643].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3643] + 44, "INVALID", 16);
	Global_99725[3643].f_212 = 4294967295;
	Global_99725[3643].f_220 = 4294967295;
	Global_99725[3643].f_152 = 4294967295;
	Global_99725[3643].f_176 = 3;
	Global_99725[3643].f_180 = 3.0f;
	*(&Global_99725[3643] + 184) = Vector(-649,376f, 138,192f, 696,213f);
	*(&Global_99725[3643] + 196) = Vector(-649,376f, 138,192f, 696,213f);
	Global_99725[3643].f_208 = 349,652f;
	Global_99725[3643].f_232 = 1;
	Global_99725[3643].f_144 = 200.0f;
	Global_99725[3643].f_148 = 250.0f;
	*(&Global_99725[3643] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3643] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3643].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3643]), 36, iVar0);
	}
	*(&Global_99725[3643] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3643].f_248 = 0;
	*(&Global_99725[3743] + 36) = 31;
	Global_99725[3743] = 3;
	strcpy(&Global_99725[3743] + 4, "nSASQUATCH", 16);
	strcpy(&Global_99725[3743] + 76, "Sasquatch_END", 16);
	*(&Global_99725[3743] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch7", 4);
	Global_99725[3743].f_256 = 36;
	Global_99725[3743].f_264 = 1;
	Global_99725[3743].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[3743] + 44, "INVALID", 16);
	Global_99725[3743].f_212 = 4294967295;
	Global_99725[3743].f_220 = 1263;
	Global_99725[3743].f_152 = 411;
	Global_99725[3743].f_176 = 3;
	Global_99725[3743].f_180 = 20.0f;
	*(&Global_99725[3743] + 184) = Vector(-586,023f, 128,504f, 562,594f);
	*(&Global_99725[3743] + 196) = Vector(-586,023f, 128,504f, 562,594f);
	Global_99725[3743].f_208 = 349,652f;
	*(&Global_99725[3743] + 136) = GET_ASSET_ID("$/cutscene/sasquatch_2_cs/sasquatch_2_cs", 9);
	Global_99725[3743].f_232 = 1;
	Global_99725[3743].f_144 = 200.0f;
	Global_99725[3743].f_148 = 250.0f;
	*(&Global_99725[3743] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3743] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3743].f_224 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3743]), 37, iVar0);
	}
	*(&Global_99725[3743] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3743].f_248 = 0;
	*(&Global_99725[243] + 36) = 2;
	Global_99725[243] = 3;
	strcpy(&Global_99725[243] + 4, "BLACKWATER", 16);
	strcpy(&Global_99725[243] + 76, "blackwater1_OBJ", 16);
	*(&Global_99725[243] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater1", 4);
	Global_99725[243].f_256 = 4294967295;
	Global_99725[243].f_264 = 1;
	Global_99725[243].f_260 = 2018;
	iVar0 = 0;
	strcpy(&Global_99725[243] + 44, "INVALID", 16);
	Global_99725[243].f_212 = 4294967295;
	Global_99725[243].f_220 = 561;
	Global_99725[243].f_152 = 312;
	Global_99725[243].f_176 = 3;
	Global_99725[243].f_180 = 16.0f;
	*(&Global_99725[243] + 184) = Vector(742,66f, 78,425f, 1276,422f);
	*(&Global_99725[243] + 196) = Vector(736,29f, 78,306f, 1283,925f);
	Global_99725[243].f_208 = 349,652f;
	*(&Global_99725[243] + 136) = GET_ASSET_ID("$/cutscene/fenway_1_cs/fenway_1_cs", 9);
	Global_99725[243].f_232 = 1;
	Global_99725[243].f_144 = 150.0f;
	Global_99725[243].f_148 = 200.0f;
	*(&Global_99725[243] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[243] + 160) = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	Global_99725[243].f_224 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[243]), 2, iVar0);
	}
	*(&Global_99725[243] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[243].f_248 = 0;
	*(&Global_99725[343] + 36) = 2;
	Global_99725[343] = 3;
	strcpy(&Global_99725[343] + 4, "BLACKWATER", 16);
	strcpy(&Global_99725[343] + 76, "blackwater2_OBJ", 16);
	*(&Global_99725[343] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater2", 4);
	Global_99725[343].f_256 = 4;
	Global_99725[343].f_264 = 1;
	Global_99725[343].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[343] + 44, "INVALID", 16);
	Global_99725[343].f_212 = 4294967295;
	Global_99725[343].f_220 = 4294967295;
	Global_99725[343].f_152 = 312;
	Global_99725[343].f_176 = 3;
	Global_99725[343].f_180 = 11.0f;
	*(&Global_99725[343] + 184) = Vector(696,531f, 78,466f, 1341,583f);
	*(&Global_99725[343] + 196) = Vector(696,531f, 78,466f, 1341,583f);
	Global_99725[343].f_208 = 349,652f;
	*(&Global_99725[343] + 136) = GET_ASSET_ID("$/cutscene/fenway_2_cs/fenway_2_cs", 9);
	Global_99725[343].f_232 = 1;
	Global_99725[343].f_144 = 150.0f;
	Global_99725[343].f_148 = 200.0f;
	*(&Global_99725[343] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[343] + 160) = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	Global_99725[343].f_224 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[343]), 3, iVar0);
	}
	*(&Global_99725[343] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[343].f_248 = 0;
	*(&Global_99725[443] + 36) = 2;
	Global_99725[443] = 3;
	strcpy(&Global_99725[443] + 4, "BLACKWATER", 16);
	strcpy(&Global_99725[443] + 76, "blackwater3_OBJ", 16);
	*(&Global_99725[443] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater3", 4);
	Global_99725[443].f_256 = 2;
	Global_99725[443].f_264 = 1;
	Global_99725[443].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[443] + 44, "INVALID", 16);
	Global_99725[443].f_212 = 4294967295;
	Global_99725[443].f_220 = 4294967295;
	*(&Global_99725[443] + 120) = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/cower", 1);
	Global_99725[443].f_152 = 312;
	Global_99725[443].f_176 = 3;
	Global_99725[443].f_180 = 5.0f;
	*(&Global_99725[443] + 184) = Vector(769,958f, 78,622f, 1295,529f);
	*(&Global_99725[443] + 196) = Vector(765,561f, 78,484f, 1291,115f);
	Global_99725[443].f_208 = 12,931f;
	*(&Global_99725[443] + 136) = GET_ASSET_ID("$/cutscene/fenway_3_pt_a_cs/fenway_3_pt_a_cs", 9);
	Global_99725[443].f_232 = 1;
	Global_99725[443].f_144 = 150.0f;
	Global_99725[443].f_148 = 200.0f;
	*(&Global_99725[443] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[443] + 160) = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	Global_99725[443].f_224 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[443]), 4, iVar0);
	}
	*(&Global_99725[443] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[443].f_248 = 0;
	*(&Global_99725[543] + 36) = 2;
	Global_99725[543] = 3;
	strcpy(&Global_99725[543] + 4, "BLACKWATER", 16);
	strcpy(&Global_99725[543] + 76, "blackwater5_OBJ", 16);
	*(&Global_99725[543] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater5", 4);
	Global_99725[543].f_256 = 3;
	Global_99725[543].f_264 = 1;
	Global_99725[543].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[543] + 44, "INVALID", 16);
	Global_99725[543].f_212 = 4294967295;
	Global_99725[543].f_220 = 4294967295;
	Global_99725[543].f_152 = 312;
	Global_99725[543].f_176 = 3;
	Global_99725[543].f_180 = 15.0f;
	*(&Global_99725[543] + 184) = Vector(699,74f, 78,306f, 1387,809f);
	*(&Global_99725[543] + 196) = Vector(699,74f, 78,306f, 1387,809f);
	Global_99725[543].f_208 = 349,652f;
	*(&Global_99725[543] + 136) = GET_ASSET_ID("$/cutscene/FENWAY_CS_SEQ/FENWAY_CS_SEQ", 9);
	Global_99725[543].f_232 = 1;
	Global_99725[543].f_144 = 150.0f;
	Global_99725[543].f_148 = 200.0f;
	*(&Global_99725[543] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[543] + 160) = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	Global_99725[543].f_224 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[543]), 5, iVar0);
	}
	*(&Global_99725[543] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[543].f_248 = 0;
	*(&Global_99725[1243] + 36) = 12;
	Global_99725[1243] = 3;
	strcpy(&Global_99725[1243] + 4, "BONNIE", 16);
	strcpy(&Global_99725[1243] + 76, "bonnie1_OBJ", 16);
	*(&Global_99725[1243] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Bonnie/RCM_Bonnie1", 4);
	Global_99725[1243].f_256 = 5;
	Global_99725[1243].f_264 = 1;
	Global_99725[1243].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[1243] + 44, "INVALID", 16);
	Global_99725[1243].f_212 = 4294967295;
	Global_99725[1243].f_220 = 551;
	Global_99725[1243].f_152 = 411;
	Global_99725[1243].f_176 = 3;
	Global_99725[1243].f_180 = 6.0f;
	*(&Global_99725[1243] + 184) = Vector(-788,792f, 93,106f, 2411,903f);
	*(&Global_99725[1243] + 196) = Vector(-788,792f, 93,106f, 2411,903f);
	Global_99725[1243].f_208 = 349,652f;
	*(&Global_99725[1243] + 136) = GET_ASSET_ID("$/cutscene/bonnie_rcm_1_pt_a_cs/bonnie_rcm_1_pt_a_cs", 9);
	Global_99725[1243].f_232 = 1;
	Global_99725[1243].f_144 = 150.0f;
	Global_99725[1243].f_148 = 200.0f;
	*(&Global_99725[1243] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1243] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1243].f_224 = STRING_TO_HASH("BONNIE");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1243]), 12, iVar0);
	}
	*(&Global_99725[1243] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1243].f_248 = 0;
	*(&Global_99725[1343] + 36) = 12;
	Global_99725[1343] = 3;
	strcpy(&Global_99725[1343] + 4, "BONNIE", 16);
	strcpy(&Global_99725[1343] + 76, "bonnie2_OBJ", 16);
	*(&Global_99725[1343] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Bonnie/RCM_Bonnie2", 4);
	Global_99725[1343].f_256 = 12;
	Global_99725[1343].f_264 = 1;
	Global_99725[1343].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1343] + 44, "INVALID", 16);
	Global_99725[1343].f_212 = 4294967295;
	Global_99725[1343].f_220 = 551;
	Global_99725[1343].f_152 = 300;
	Global_99725[1343].f_176 = 3;
	Global_99725[1343].f_180 = 7,373f;
	*(&Global_99725[1343] + 184) = Vector(-843,05f, 99,418f, 2465,063f);
	*(&Global_99725[1343] + 196) = Vector(-843,05f, 99,418f, 2465,063f);
	Global_99725[1343].f_208 = 349,652f;
	*(&Global_99725[1343] + 136) = GET_ASSET_ID("$/cutscene/bonnie_rcm_2_cs/bonnie_rcm_2_cs", 9);
	Global_99725[1343].f_232 = 1;
	Global_99725[1343].f_144 = 150.0f;
	Global_99725[1343].f_148 = 200.0f;
	*(&Global_99725[1343] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1343] + 160) = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	Global_99725[1343].f_224 = STRING_TO_HASH("BONNIE");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1343]), 13, iVar0);
	}
	*(&Global_99725[1343] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1343].f_248 = 0;
	*(&Global_99725[1443] + 36) = 12;
	Global_99725[1443] = 1;
	strcpy(&Global_99725[1443] + 4, "BONNIE", 16);
	strcpy(&Global_99725[1443] + 76, "bonnie3_OBJ", 16);
	*(&Global_99725[1443] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Bonnie/RCM_Bonnie3", 4);
	Global_99725[1443].f_256 = 13;
	Global_99725[1443].f_264 = 1;
	Global_99725[1443].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[1443] + 44, "INVALID", 16);
	Global_99725[1443].f_212 = 4294967295;
	Global_99725[1443].f_220 = 551;
	*(&Global_99725[1443] + 120) = GET_ASSET_ID("$/content/DLC/ZombiePack/Gringos/DLC_Bonnie_sit_rifle", 1);
	Global_99725[1443].f_152 = 300;
	Global_99725[1443].f_176 = 3;
	Global_99725[1443].f_180 = 8,5f;
	*(&Global_99725[1443] + 184) = Vector(-789,3f, 93,61f, 2406,08f);
	*(&Global_99725[1443] + 196) = Vector(-791,727f, 93,345f, 2409,668f);
	Global_99725[1443].f_208 = 145,656f;
	*(&Global_99725[1443] + 136) = GET_ASSET_ID("$/cutscene/bonnie_rcm_3_cs/bonnie_rcm_3_cs", 9);
	Global_99725[1443].f_232 = 1;
	Global_99725[1443].f_144 = 150.0f;
	Global_99725[1443].f_148 = 200.0f;
	*(&Global_99725[1443] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1443] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1443].f_224 = STRING_TO_HASH("BONNIE");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1443]), 14, iVar0);
	}
	*(&Global_99725[1443] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1443].f_248 = 0;
	*(&Global_99725[643] + 36) = 6;
	Global_99725[643] = 3;
	strcpy(&Global_99725[643] + 4, "SETH", 16);
	strcpy(&Global_99725[643] + 76, "nseth1_OBJ", 16);
	*(&Global_99725[643] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Seth/RCM_Seth1", 4);
	Global_99725[643].f_256 = 5;
	Global_99725[643].f_264 = 1;
	Global_99725[643].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[643] + 44, "INVALID", 16);
	Global_99725[643].f_212 = 4294967295;
	Global_99725[643].f_220 = 545;
	Global_99725[643].f_152 = 312;
	Global_99725[643].f_176 = 3;
	Global_99725[643].f_180 = 16.0f;
	*(&Global_99725[643] + 184) = Vector(127,228f, 72,476f, 2674,703f);
	*(&Global_99725[643] + 196) = Vector(127,228f, 72,476f, 2674,703f);
	Global_99725[643].f_208 = 349,652f;
	*(&Global_99725[643] + 136) = GET_ASSET_ID("$/cutscene/THE_DEAD_RISE_AGAIN_1_CS_SEQ/THE_DEAD_RISE_AGAIN_1_CS_SEQ", 9);
	Global_99725[643].f_232 = 1;
	Global_99725[643].f_144 = 150.0f;
	Global_99725[643].f_148 = 200.0f;
	*(&Global_99725[643] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[643] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[643].f_224 = STRING_TO_HASH("SETH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[643]), 6, iVar0);
	}
	*(&Global_99725[643] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[643].f_248 = 0;
	*(&Global_99725[743] + 36) = 6;
	Global_99725[743] = 3;
	strcpy(&Global_99725[743] + 4, "SETH", 16);
	strcpy(&Global_99725[743] + 76, "nseth2_OBJ", 16);
	*(&Global_99725[743] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Seth/RCM_Seth2", 4);
	Global_99725[743].f_256 = 6;
	Global_99725[743].f_264 = 1;
	Global_99725[743].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[743] + 44, "INVALID", 16);
	Global_99725[743].f_212 = 4294967295;
	Global_99725[743].f_220 = 4294967295;
	Global_99725[743].f_152 = 303;
	Global_99725[743].f_176 = 3;
	Global_99725[743].f_180 = 15.0f;
	*(&Global_99725[743] + 184) = Vector(117,104f, 72,283f, 2672,258f);
	*(&Global_99725[743] + 196) = Vector(117,104f, 72,283f, 2672,258f);
	Global_99725[743].f_208 = 349,652f;
	*(&Global_99725[743] + 136) = GET_ASSET_ID("$/cutscene/the_dead_rise_again_2_pt_a_cs/the_dead_rise_again_2_pt_a_cs", 9);
	Global_99725[743].f_232 = 1;
	Global_99725[743].f_144 = 150.0f;
	Global_99725[743].f_148 = 200.0f;
	*(&Global_99725[743] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[743] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[743].f_224 = STRING_TO_HASH("SETH");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[743]), 7, iVar0);
	}
	*(&Global_99725[743] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[743].f_248 = 0;
	*(&Global_99725[843] + 36) = 8;
	Global_99725[843] = 3;
	strcpy(&Global_99725[843] + 4, "MERCHANT", 16);
	strcpy(&Global_99725[843] + 76, "merchant1_OBJ", 16);
	*(&Global_99725[843] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant1", 4);
	Global_99725[843].f_256 = 5;
	Global_99725[843].f_264 = 1;
	Global_99725[843].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[843] + 44, "INVALID", 16);
	Global_99725[843].f_212 = 4294967295;
	Global_99725[843].f_220 = 4294967295;
	*(&Global_99725[843] + 120) = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/stand_announce", 1);
	Global_99725[843].f_152 = 312;
	Global_99725[843].f_176 = 3;
	Global_99725[843].f_180 = 20.0f;
	*(&Global_99725[843] + 184) = Vector(-2647,772f, 67,263f, 3415,886f);
	*(&Global_99725[843] + 196) = Vector(-2647,772f, 67,263f, 3415,886f);
	Global_99725[843].f_208 = 203,713f;
	*(&Global_99725[843] + 136) = GET_ASSET_ID("$/cutscene/CURE_FOR_ALL_1_CS_SEQ/CURE_FOR_ALL_1_CS_SEQ", 9);
	Global_99725[843].f_232 = 1;
	Global_99725[843].f_144 = 150.0f;
	Global_99725[843].f_148 = 200.0f;
	*(&Global_99725[843] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[843] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[843].f_224 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[843]), 8, iVar0);
	}
	*(&Global_99725[843] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[843].f_248 = 0;
	*(&Global_99725[943] + 36) = 8;
	Global_99725[943] = 3;
	strcpy(&Global_99725[943] + 4, "MERCHANT", 16);
	strcpy(&Global_99725[943] + 76, "merchant2_OBJ", 16);
	*(&Global_99725[943] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant2", 4);
	Global_99725[943].f_256 = 8;
	Global_99725[943].f_264 = 1;
	Global_99725[943].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[943] + 44, "INVALID", 16);
	Global_99725[943].f_212 = 4294967295;
	Global_99725[943].f_220 = 4294967295;
	Global_99725[943].f_152 = 311;
	Global_99725[943].f_176 = 3;
	Global_99725[943].f_180 = 12.0f;
	*(&Global_99725[943] + 184) = Vector(-3121,211f, 48,6f, 3400,985f);
	*(&Global_99725[943] + 196) = Vector(-3121,211f, 48,6f, 3400,985f);
	Global_99725[943].f_208 = 196,229f;
	*(&Global_99725[943] + 136) = GET_ASSET_ID("$/cutscene/CURE_FOR_ALL_2_CS_SEQ/CURE_FOR_ALL_2_CS_SEQ", 9);
	Global_99725[943].f_232 = 1;
	Function_53(&Global_99725[943] + 228, 1024);
	Global_99725[943].f_144 = 150.0f;
	Global_99725[943].f_148 = 200.0f;
	*(&Global_99725[943] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[943] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[943].f_224 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[943]), 9, iVar0);
	}
	*(&Global_99725[943] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[943].f_248 = 0;
	*(&Global_99725[1043] + 36) = 8;
	Global_99725[1043] = 3;
	strcpy(&Global_99725[1043] + 4, "MERCHANT", 16);
	strcpy(&Global_99725[1043] + 76, "merchant3_OBJ", 16);
	*(&Global_99725[1043] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant3", 4);
	Global_99725[1043].f_256 = 9;
	Global_99725[1043].f_264 = 1;
	Global_99725[1043].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1043] + 44, "INVALID", 16);
	Global_99725[1043].f_212 = 4294967295;
	Global_99725[1043].f_220 = 4294967295;
	*(&Global_99725[1043] + 120) = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/RCM_AztecGold_Treasure", 1);
	Global_99725[1043].f_152 = 311;
	Global_99725[1043].f_176 = 3;
	Global_99725[1043].f_180 = 10.0f;
	*(&Global_99725[1043] + 184) = Vector(-2291,542f, 17,418f, 3157,479f);
	*(&Global_99725[1043] + 196) = Vector(-2291,542f, 17,418f, 3157,479f);
	Global_99725[1043].f_208 = 96,474f;
	Global_99725[1043].f_232 = 1;
	Global_99725[1043].f_144 = 150.0f;
	Global_99725[1043].f_148 = 200.0f;
	*(&Global_99725[1043] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1043] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1043].f_224 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1043]), 10, iVar0);
	}
	*(&Global_99725[1043] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1043].f_248 = 0;
	*(&Global_99725[1143] + 36) = 8;
	Global_99725[1143] = 3;
	strcpy(&Global_99725[1143] + 4, "MERCHANT", 16);
	strcpy(&Global_99725[1143] + 76, "merchant4_OBJ", 16);
	*(&Global_99725[1143] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant4", 4);
	Global_99725[1143].f_256 = 10;
	Global_99725[1143].f_264 = 1;
	Global_99725[1143].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1143] + 44, "INVALID", 16);
	Global_99725[1143].f_212 = 4294967295;
	Global_99725[1143].f_220 = 4294967295;
	Global_99725[1143].f_152 = 311;
	Global_99725[1143].f_176 = 3;
	Global_99725[1143].f_180 = 10.0f;
	*(&Global_99725[1143] + 184) = Vector(-3692,98f, 8,04f, 3513,669f);
	*(&Global_99725[1143] + 196) = Vector(-3692,98f, 8,04f, 3513,669f);
	Global_99725[1143].f_208 = 96,474f;
	*(&Global_99725[1143] + 136) = GET_ASSET_ID("$/cutscene/cure_for_all_3_pt_a_cs/cure_for_all_3_pt_a_cs", 9);
	Global_99725[1143].f_232 = 1;
	Global_99725[1143].f_144 = 150.0f;
	Global_99725[1143].f_148 = 200.0f;
	*(&Global_99725[1143] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1143] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1143].f_224 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1143]), 11, iVar0);
	}
	*(&Global_99725[1143] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1143].f_248 = 0;
	*(&Global_99725[043] + 36) = 0;
	Global_99725[043] = 3;
	strcpy(&Global_99725[043] + 4, "MACKENNA", 16);
	strcpy(&Global_99725[043] + 76, "mackenna1_OBJ", 16);
	*(&Global_99725[043] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mackenna/RCM_Mackenna1", 4);
	Global_99725[043].f_256 = 5;
	Global_99725[043].f_264 = 1;
	Global_99725[043].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[043] + 44, "INVALID", 16);
	Global_99725[043].f_212 = 4294967295;
	Global_99725[043].f_220 = 4294967295;
	*(&Global_99725[043] + 120) = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/RCM_12_CS03_fix_wing", 1);
	Global_99725[043].f_152 = 411;
	Global_99725[043].f_176 = 3;
	Global_99725[043].f_180 = 10.0f;
	*(&Global_99725[043] + 184) = Vector(-3188,574f, 40,922f, 3713,593f);
	*(&Global_99725[043] + 196) = Vector(-3188,574f, 40,922f, 3713,593f);
	Global_99725[043].f_208 = 39,918f;
	*(&Global_99725[043] + 136) = GET_ASSET_ID("$/cutscene/mckenna_1_pt_a_cs/mckenna_1_pt_a_cs", 9);
	Global_99725[043].f_232 = 1;
	Function_53(&Global_99725[043] + 228, 1024);
	Global_99725[043].f_144 = 150.0f;
	Global_99725[043].f_148 = 200.0f;
	*(&Global_99725[043] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[043] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[043].f_224 = STRING_TO_HASH("MACKENNA");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[043]), 0, iVar0);
	}
	*(&Global_99725[043] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[043].f_248 = 0;
	*(&Global_99725[143] + 36) = 0;
	Global_99725[143] = 3;
	strcpy(&Global_99725[143] + 4, "MACKENNA", 16);
	strcpy(&Global_99725[143] + 76, "mackenna1_OBJ", 16);
	*(&Global_99725[143] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mackenna/RCM_Mackenna2", 4);
	Global_99725[143].f_256 = 0;
	Global_99725[143].f_264 = 1;
	Global_99725[143].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[143] + 44, "INVALID", 16);
	Global_99725[143].f_212 = 4294967295;
	Global_99725[143].f_220 = 4294967295;
	*(&Global_99725[143] + 120) = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/RCM_12_CS03_fix_wing", 1);
	Global_99725[143].f_152 = 525;
	Global_99725[143].f_176 = 3;
	Global_99725[143].f_180 = 12.0f;
	*(&Global_99725[143] + 184) = Vector(-3183,772f, 41,453f, 3723,894f);
	*(&Global_99725[143] + 196) = Vector(-3183,772f, 41,453f, 3723,894f);
	Global_99725[143].f_208 = 26,926f;
	*(&Global_99725[143] + 136) = GET_ASSET_ID("$/cutscene/mckenna_2_pt_a_cs/mckenna_2_pt_a_cs", 9);
	Global_99725[143].f_232 = 1;
	Function_53(&Global_99725[143] + 228, 1024);
	Global_99725[143].f_144 = 150.0f;
	Global_99725[143].f_148 = 200.0f;
	*(&Global_99725[143] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[143] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[143].f_224 = STRING_TO_HASH("MACKENNA");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[143]), 1, iVar0);
	}
	*(&Global_99725[143] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[143].f_248 = 0;
	*(&Global_99725[1543] + 36) = 15;
	Global_99725[1543] = 1;
	strcpy(&Global_99725[1543] + 4, "MARSHAL", 16);
	strcpy(&Global_99725[1543] + 76, "marshal1_OBJ", 16);
	*(&Global_99725[1543] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal1", 4);
	Global_99725[1543].f_256 = 5;
	Global_99725[1543].f_264 = 1;
	Global_99725[1543].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1543] + 44, "INVALID", 16);
	Global_99725[1543].f_212 = 4294967295;
	Global_99725[1543].f_220 = 547;
	Global_99725[1543].f_152 = 411;
	Global_99725[1543].f_176 = 3;
	Global_99725[1543].f_180 = 15.0f;
	*(&Global_99725[1543] + 184) = Vector(-2088,415f, 16,982f, 2601,308f);
	*(&Global_99725[1543] + 196) = Vector(-2089,727f, 17,042f, 2605,469f);
	Global_99725[1543].f_208 = 349,652f;
	*(&Global_99725[1543] + 136) = GET_ASSET_ID("$/cutscene/MARSHAL_RCM_1_CS_SEQ/MARSHAL_RCM_1_CS_SEQ", 9);
	Global_99725[1543].f_232 = 1;
	Global_99725[1543].f_144 = 150.0f;
	Global_99725[1543].f_148 = 200.0f;
	*(&Global_99725[1543] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1543] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1543].f_224 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1543]), 15, iVar0);
	}
	*(&Global_99725[1543] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1543].f_248 = 0;
	*(&Global_99725[1643] + 36) = 15;
	Global_99725[1643] = 1;
	strcpy(&Global_99725[1643] + 4, "MARSHAL", 16);
	strcpy(&Global_99725[1643] + 76, "marshal2_OBJ", 16);
	*(&Global_99725[1643] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal2", 4);
	Global_99725[1643].f_256 = 15;
	Global_99725[1643].f_264 = 1;
	Global_99725[1643].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[1643] + 44, "INVALID", 16);
	Global_99725[1643].f_212 = 4294967295;
	Global_99725[1643].f_220 = 118;
	Global_99725[1643].f_152 = 304;
	Global_99725[1643].f_176 = 3;
	Global_99725[1643].f_180 = 1,572f;
	*(&Global_99725[1643] + 184) = Vector(-2152,08f, 16,827f, 2623,437f);
	*(&Global_99725[1643] + 196) = Vector(-2144,896f, 16,774f, 2622,544f);
	Global_99725[1643].f_208 = -87,554f;
	*(&Global_99725[1643] + 136) = GET_ASSET_ID("$/cutscene/MARSHAL_RCM_2_CS_SEQ/MARSHAL_RCM_2_CS_SEQ", 9);
	Global_99725[1643].f_232 = 1;
	Global_99725[1643].f_144 = 150.0f;
	Global_99725[1643].f_148 = 200.0f;
	*(&Global_99725[1643] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1643] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1643].f_224 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1643]), 16, iVar0);
	}
	*(&Global_99725[1643] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1643].f_248 = 0;
	*(&Global_99725[1743] + 36) = 15;
	Global_99725[1743] = 1;
	strcpy(&Global_99725[1743] + 4, "MARSHAL", 16);
	strcpy(&Global_99725[1743] + 76, "marshal3_OBJ", 16);
	*(&Global_99725[1743] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal3", 4);
	Global_99725[1743].f_256 = 16;
	Global_99725[1743].f_264 = 1;
	Global_99725[1743].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1743] + 44, "INVALID", 16);
	Global_99725[1743].f_212 = 4294967295;
	Global_99725[1743].f_220 = 1236;
	Global_99725[1743].f_152 = 304;
	Global_99725[1743].f_176 = 3;
	Global_99725[1743].f_180 = 11,328f;
	*(&Global_99725[1743] + 184) = Vector(-2173,109f, 16,164f, 2534,515f);
	*(&Global_99725[1743] + 196) = Vector(-2173,109f, 16,164f, 2534,515f);
	Global_99725[1743].f_208 = 349,652f;
	*(&Global_99725[1743] + 136) = GET_ASSET_ID("$/cutscene/marshal_rcm_3_cs/marshal_rcm_3_cs", 9);
	Global_99725[1743].f_232 = 1;
	Global_99725[1743].f_144 = 150.0f;
	Global_99725[1743].f_148 = 200.0f;
	*(&Global_99725[1743] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1743] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1743].f_224 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1743]), 17, iVar0);
	}
	*(&Global_99725[1743] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1743].f_248 = 0;
	*(&Global_99725[1843] + 36) = 15;
	Global_99725[1843] = 1;
	strcpy(&Global_99725[1843] + 4, "MARSHAL", 16);
	strcpy(&Global_99725[1843] + 76, "marshal4_OBJ", 16);
	*(&Global_99725[1843] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal4", 4);
	Global_99725[1843].f_256 = 17;
	Global_99725[1843].f_264 = 1;
	Global_99725[1843].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1843] + 44, "INVALID", 16);
	Global_99725[1843].f_212 = 4294967295;
	Global_99725[1843].f_220 = 547;
	Global_99725[1843].f_152 = 304;
	Global_99725[1843].f_176 = 3;
	Global_99725[1843].f_180 = 15.0f;
	*(&Global_99725[1843] + 184) = Vector(-2084,073f, 16,965f, 2606,185f);
	*(&Global_99725[1843] + 196) = Vector(-2089,727f, 17,042f, 2605,469f);
	Global_99725[1843].f_208 = 73,721f;
	*(&Global_99725[1843] + 136) = GET_ASSET_ID("$/cutscene/marshal_rcm_4_cs/marshal_rcm_4_cs", 9);
	Global_99725[1843].f_232 = 1;
	Global_99725[1843].f_144 = 150.0f;
	Global_99725[1843].f_148 = 200.0f;
	*(&Global_99725[1843] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1843] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1843].f_224 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1843]), 18, iVar0);
	}
	*(&Global_99725[1843] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1843].f_248 = 0;
	*(&Global_99725[1943] + 36) = 19;
	Global_99725[1943] = 3;
	strcpy(&Global_99725[1943] + 4, "MISSING", 16);
	strcpy(&Global_99725[1943] + 76, "missing1_OBJ", 16);
	*(&Global_99725[1943] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Missing/RCM_Missing1", 4);
	Global_99725[1943].f_256 = 9;
	Global_99725[1943].f_264 = 1;
	Global_99725[1943].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[1943] + 44, "INVALID", 16);
	Global_99725[1943].f_212 = 4294967295;
	Global_99725[1943].f_220 = 4294967295;
	Global_99725[1943].f_152 = 549;
	Global_99725[1943].f_176 = 3;
	Global_99725[1943].f_180 = 11.0f;
	*(&Global_99725[1943] + 184) = Vector(-2648,236f, 67,263f, 3416,121f);
	*(&Global_99725[1943] + 196) = Vector(-2648,236f, 67,263f, 3416,121f);
	Global_99725[1943].f_208 = 230.0f;
	*(&Global_99725[1943] + 136) = GET_ASSET_ID("$/cutscene/missing_persons_1_cs/missing_persons_1_cs", 9);
	Global_99725[1943].f_232 = 1;
	Global_99725[1943].f_144 = 150.0f;
	Global_99725[1943].f_148 = 200.0f;
	*(&Global_99725[1943] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[1943] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[1943].f_224 = STRING_TO_HASH("MISSING");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[1943]), 19, iVar0);
	}
	*(&Global_99725[1943] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[1943].f_248 = 0;
	*(&Global_99725[2043] + 36) = 19;
	Global_99725[2043] = 3;
	strcpy(&Global_99725[2043] + 4, "MISSING", 16);
	strcpy(&Global_99725[2043] + 76, "missing2_OBJ", 16);
	*(&Global_99725[2043] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Missing/RCM_Missing2", 4);
	Global_99725[2043].f_256 = 19;
	Global_99725[2043].f_264 = 1;
	Global_99725[2043].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[2043] + 44, "INVALID", 16);
	Global_99725[2043].f_212 = 4294967295;
	Global_99725[2043].f_220 = 4294967295;
	Global_99725[2043].f_152 = 549;
	Global_99725[2043].f_176 = 3;
	Global_99725[2043].f_180 = 18.0f;
	*(&Global_99725[2043] + 184) = Vector(-2831,261f, 50,332f, 2414,595f);
	*(&Global_99725[2043] + 196) = Vector(-2831,261f, 50,332f, 2414,595f);
	Global_99725[2043].f_208 = 271.0f;
	*(&Global_99725[2043] + 136) = GET_ASSET_ID("$/cutscene/missing_persons_2_cs/missing_persons_2_cs", 9);
	Global_99725[2043].f_232 = 1;
	Global_99725[2043].f_144 = 150.0f;
	Global_99725[2043].f_148 = 200.0f;
	*(&Global_99725[2043] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2043] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2043].f_224 = STRING_TO_HASH("MISSING");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2043]), 20, iVar0);
	}
	*(&Global_99725[2043] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2043].f_248 = 0;
	*(&Global_99725[2143] + 36) = 19;
	Global_99725[2143] = 3;
	strcpy(&Global_99725[2143] + 4, "MISSING", 16);
	strcpy(&Global_99725[2143] + 76, "missing3_OBJ", 16);
	*(&Global_99725[2143] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Missing/RCM_Missing3", 4);
	Global_99725[2143].f_256 = 19;
	Global_99725[2143].f_264 = 1;
	Global_99725[2143].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[2143] + 44, "INVALID", 16);
	Global_99725[2143].f_212 = 4294967295;
	Global_99725[2143].f_220 = 4294967295;
	Global_99725[2143].f_152 = 330;
	Global_99725[2143].f_176 = 3;
	Global_99725[2143].f_180 = 11.0f;
	*(&Global_99725[2143] + 184) = Vector(-2648,048f, 67,263f, 3415,614f);
	*(&Global_99725[2143] + 196) = Vector(-2648,048f, 67,263f, 3415,614f);
	Global_99725[2143].f_208 = 349,652f;
	*(&Global_99725[2143] + 136) = GET_ASSET_ID("$/cutscene/MISSING_PERSONS_3_CS_SEQ/MISSING_PERSONS_3_CS_SEQ", 9);
	Global_99725[2143].f_232 = 1;
	Global_99725[2143].f_144 = 150.0f;
	Global_99725[2143].f_148 = 200.0f;
	*(&Global_99725[2143] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2143] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2143].f_224 = STRING_TO_HASH("MISSING");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2143]), 21, iVar0);
	}
	*(&Global_99725[2143] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2143].f_248 = 0;
	*(&Global_99725[2243] + 36) = 22;
	Global_99725[2243] = 3;
	strcpy(&Global_99725[2243] + 4, "RICKETTS", 16);
	strcpy(&Global_99725[2243] + 76, "ricketts1_OBJ", 16);
	*(&Global_99725[2243] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Ricketts/RCM_Ricketts1", 4);
	Global_99725[2243].f_256 = 4294967295;
	Global_99725[2243].f_264 = 2;
	Global_99725[2243].f_260 = 2018;
	iVar0 = 0;
	strcpy(&Global_99725[2243] + 44, "INVALID", 16);
	Global_99725[2243].f_212 = 4294967295;
	Global_99725[2243].f_220 = 4294967295;
	Global_99725[2243].f_152 = 411;
	Global_99725[2243].f_176 = 3;
	Global_99725[2243].f_180 = 9.0f;
	*(&Global_99725[2243] + 184) = Vector(-800,82f, 14,8f, 3710,07f);
	*(&Global_99725[2243] + 196) = Vector(-800,82f, 14,8f, 3710,07f);
	Global_99725[2243].f_208 = 349,652f;
	*(&Global_99725[2243] + 136) = GET_ASSET_ID("$/cutscene/LANDON_RICKETTS_1_CS_SEQ/LANDON_RICKETTS_1_CS_SEQ", 9);
	Global_99725[2243].f_232 = 1;
	Global_99725[2243].f_144 = 150.0f;
	Global_99725[2243].f_148 = 200.0f;
	*(&Global_99725[2243] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2243] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2243].f_224 = STRING_TO_HASH("RICKETTS");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2243]), 22, iVar0);
	}
	*(&Global_99725[2243] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2243].f_248 = 0;
	*(&Global_99725[2343] + 36) = 22;
	Global_99725[2343] = 1;
	strcpy(&Global_99725[2343] + 4, "RICKETTS", 16);
	strcpy(&Global_99725[2343] + 76, "ricketts2_OBJ", 16);
	*(&Global_99725[2343] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Ricketts/RCM_Ricketts2", 4);
	Global_99725[2343].f_256 = 22;
	Global_99725[2343].f_264 = 2;
	Global_99725[2343].f_260 = 2019;
	iVar0 = 0;
	strcpy(&Global_99725[2343] + 44, "INVALID", 16);
	Global_99725[2343].f_212 = 4294967295;
	Global_99725[2343].f_220 = 558;
	Global_99725[2343].f_152 = 301;
	Global_99725[2343].f_176 = 3;
	Global_99725[2343].f_180 = 8,5f;
	*(&Global_99725[2343] + 184) = Vector(-802,5f, 14,8f, 3725,68f);
	*(&Global_99725[2343] + 196) = Vector(-802,5f, 14,8f, 3725,68f);
	Global_99725[2343].f_208 = 349,652f;
	*(&Global_99725[2343] + 136) = GET_ASSET_ID("$/cutscene/LANDON_RICKETTS_2_CS_SEQ/LANDON_RICKETTS_2_CS_SEQ", 9);
	Global_99725[2343].f_232 = 1;
	Global_99725[2343].f_144 = 150.0f;
	Global_99725[2343].f_148 = 200.0f;
	*(&Global_99725[2343] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2343] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2343].f_224 = STRING_TO_HASH("RICKETTS");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2343]), 23, iVar0);
	}
	*(&Global_99725[2343] + 240) = MAKE_TIME_OF_DAY_EX(false, 2, 30, 0);
	Global_99725[2343].f_248 = 1;
	*(&Global_99725[2443] + 36) = 24;
	Global_99725[2443] = 3;
	strcpy(&Global_99725[2443] + 4, "MOTHER", 16);
	strcpy(&Global_99725[2443] + 76, "mother1_OBJ", 16);
	*(&Global_99725[2443] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother1", 4);
	Global_99725[2443].f_256 = 4294967295;
	Global_99725[2443].f_264 = 2;
	Global_99725[2443].f_260 = 2018;
	iVar0 = 0;
	strcpy(&Global_99725[2443] + 44, "INVALID", 16);
	Global_99725[2443].f_212 = 4294967295;
	Global_99725[2443].f_220 = 613;
	Global_99725[2443].f_152 = 312;
	Global_99725[2443].f_176 = 3;
	Global_99725[2443].f_180 = 12.0f;
	*(&Global_99725[2443] + 184) = Vector(-1661,962f, 8,502f, 4278,853f);
	*(&Global_99725[2443] + 196) = Vector(-1661,962f, 8,502f, 4278,853f);
	Global_99725[2443].f_208 = 152.0f;
	*(&Global_99725[2443] + 136) = GET_ASSET_ID("$/cutscene/MOTHER_SUPERIOR_1_CS_SEQ/MOTHER_SUPERIOR_1_CS_SEQ", 9);
	Global_99725[2443].f_232 = 1;
	Global_99725[2443].f_144 = 150.0f;
	Global_99725[2443].f_148 = 200.0f;
	*(&Global_99725[2443] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2443] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2443].f_224 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2443]), 24, iVar0);
	}
	*(&Global_99725[2443] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2443].f_248 = 0;
	Function_53(&Global_99725[2443] + 228, 65536);
	*(&Global_99725[2543] + 36) = 24;
	Global_99725[2543] = 3;
	strcpy(&Global_99725[2543] + 4, "MOTHER", 16);
	strcpy(&Global_99725[2543] + 76, "mother2_OBJ", 16);
	*(&Global_99725[2543] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother2", 4);
	Global_99725[2543].f_256 = 24;
	Global_99725[2543].f_264 = 2;
	Global_99725[2543].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[2543] + 44, "INVALID", 16);
	Global_99725[2543].f_212 = 4294967295;
	Global_99725[2543].f_220 = 613;
	Global_99725[2543].f_152 = 304;
	Global_99725[2543].f_176 = 3;
	Global_99725[2543].f_180 = 6,03f;
	*(&Global_99725[2543] + 184) = Vector(-1663,993f, 8,501f, 4282,997f);
	*(&Global_99725[2543] + 196) = Vector(-1663,993f, 8,501f, 4282,997f);
	Global_99725[2543].f_208 = 349,652f;
	*(&Global_99725[2543] + 136) = GET_ASSET_ID("$/cutscene/mother_superior_has_a_gun_2_pt_a_cs/mother_superior_has_a_gun_2_pt_a_cs", 9);
	Global_99725[2543].f_232 = 1;
	Global_99725[2543].f_144 = 150.0f;
	Global_99725[2543].f_148 = 200.0f;
	*(&Global_99725[2543] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2543] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2543].f_224 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2543]), 25, iVar0);
	}
	*(&Global_99725[2543] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2543].f_248 = 0;
	*(&Global_99725[2643] + 36) = 24;
	Global_99725[2643] = 3;
	strcpy(&Global_99725[2643] + 4, "MOTHER", 16);
	strcpy(&Global_99725[2643] + 76, "mother3_OBJ", 16);
	*(&Global_99725[2643] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother3", 4);
	Global_99725[2643].f_256 = 25;
	Global_99725[2643].f_264 = 2;
	Global_99725[2643].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[2643] + 44, "INVALID", 16);
	Global_99725[2643].f_212 = 4294967295;
	Global_99725[2643].f_220 = 613;
	Global_99725[2643].f_152 = 304;
	Global_99725[2643].f_176 = 3;
	Global_99725[2643].f_180 = 4,629f;
	*(&Global_99725[2643] + 184) = Vector(-1702,423f, 8,071f, 4255,994f);
	*(&Global_99725[2643] + 196) = Vector(-1702,423f, 8,071f, 4255,994f);
	Global_99725[2643].f_208 = 232.0f;
	*(&Global_99725[2643] + 136) = GET_ASSET_ID("$/cutscene/mother_superior_has_a_gun_3_pt_a_cs/mother_superior_has_a_gun_3_pt_a_cs", 9);
	Global_99725[2643].f_232 = 1;
	Global_99725[2643].f_144 = 150.0f;
	Global_99725[2643].f_148 = 200.0f;
	*(&Global_99725[2643] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2643] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2643].f_224 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2643]), 26, iVar0);
	}
	*(&Global_99725[2643] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2643].f_248 = 0;
	*(&Global_99725[2743] + 36) = 24;
	Global_99725[2743] = 1;
	strcpy(&Global_99725[2743] + 4, "MOTHER", 16);
	strcpy(&Global_99725[2743] + 76, "mother4_OBJ", 16);
	*(&Global_99725[2743] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother4", 4);
	Global_99725[2743].f_256 = 26;
	Global_99725[2743].f_264 = 2;
	Global_99725[2743].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[2743] + 44, "INVALID", 16);
	Global_99725[2743].f_212 = 4294967295;
	Global_99725[2743].f_220 = 613;
	Global_99725[2743].f_152 = 304;
	Global_99725[2743].f_176 = 3;
	Global_99725[2743].f_180 = 6.0f;
	*(&Global_99725[2743] + 184) = Vector(-1695,865f, 8,642f, 4187,109f);
	*(&Global_99725[2743] + 196) = Vector(-1695,865f, 8,642f, 4187,109f);
	Global_99725[2743].f_208 = 349,652f;
	*(&Global_99725[2743] + 136) = GET_ASSET_ID("$/cutscene/MOTHER_SUPERIOR_4_CS_SEQ/MOTHER_SUPERIOR_4_CS_SEQ", 9);
	Global_99725[2743].f_232 = 1;
	Global_99725[2743].f_144 = 150.0f;
	Global_99725[2743].f_148 = 200.0f;
	*(&Global_99725[2743] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2743] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2743].f_224 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2743]), 27, iVar0);
	}
	*(&Global_99725[2743] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2743].f_248 = 0;
	Function_53(&Global_99725[2743] + 228, 65536);
	*(&Global_99725[2843] + 36) = 28;
	Global_99725[2843] = 3;
	strcpy(&Global_99725[2843] + 4, "RETURN", 16);
	strcpy(&Global_99725[2843] + 76, "false1_OBJ", 16);
	*(&Global_99725[2843] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/False/RCM_False1", 4);
	Global_99725[2843].f_256 = 4294967295;
	Global_99725[2843].f_264 = 3;
	Global_99725[2843].f_260 = 2022;
	iVar0 = 0;
	strcpy(&Global_99725[2843] + 44, "INVALID", 16);
	Global_99725[2843].f_212 = 4294967295;
	Global_99725[2843].f_220 = 4294967295;
	Global_99725[2843].f_152 = 314;
	Global_99725[2843].f_176 = 3;
	Global_99725[2843].f_180 = 3.0f;
	*(&Global_99725[2843] + 184) = Vector(-115,751f, 118,869f, 1373,431f);
	*(&Global_99725[2843] + 196) = Vector(-115,751f, 118,869f, 1373,431f);
	Global_99725[2843].f_208 = 349,652f;
	Global_99725[2843].f_232 = 1;
	Global_99725[2843].f_144 = 150.0f;
	Global_99725[2843].f_148 = 200.0f;
	*(&Global_99725[2843] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2843] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2843].f_224 = STRING_TO_HASH("RETURN");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2843]), 28, iVar0);
	}
	*(&Global_99725[2843] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2843].f_248 = 0;
	*(&Global_99725[2943] + 36) = 29;
	Global_99725[2943] = 3;
	strcpy(&Global_99725[2943] + 4, "RETURN", 16);
	strcpy(&Global_99725[2943] + 76, "return1_OBJ", 16);
	*(&Global_99725[2943] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Return/RCM_Return1", 4);
	Global_99725[2943].f_256 = 4294967295;
	Global_99725[2943].f_264 = 3;
	Global_99725[2943].f_260 = 2022;
	iVar0 = 0;
	strcpy(&Global_99725[2943] + 44, "INVALID", 16);
	Global_99725[2943].f_212 = 4294967295;
	Global_99725[2943].f_220 = 4294967295;
	Global_99725[2943].f_152 = 314;
	Global_99725[2943].f_176 = 3;
	Global_99725[2943].f_180 = 3.0f;
	*(&Global_99725[2943] + 184) = Vector(-115,751f, 118,869f, 1373,431f);
	*(&Global_99725[2943] + 196) = Vector(-115,751f, 118,869f, 1373,431f);
	Global_99725[2943].f_208 = 349,652f;
	Global_99725[2943].f_232 = 1;
	Global_99725[2943].f_144 = 150.0f;
	Global_99725[2943].f_148 = 200.0f;
	*(&Global_99725[2943] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[2943] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[2943].f_224 = STRING_TO_HASH("RETURN");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[2943]), 29, iVar0);
	}
	*(&Global_99725[2943] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[2943].f_248 = 0;
	*(&Global_99725[3043] + 36) = 29;
	Global_99725[3043] = 3;
	strcpy(&Global_99725[3043] + 4, "RETURN", 16);
	strcpy(&Global_99725[3043] + 76, "return2_OBJ", 16);
	*(&Global_99725[3043] + 112) = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Return/RCM_Return2", 4);
	Global_99725[3043].f_256 = 29;
	Global_99725[3043].f_264 = 3;
	Global_99725[3043].f_260 = 2023;
	iVar0 = 0;
	strcpy(&Global_99725[3043] + 44, "INVALID", 16);
	Global_99725[3043].f_212 = 4294967295;
	Global_99725[3043].f_220 = 4294967295;
	Global_99725[3043].f_152 = 314;
	Global_99725[3043].f_176 = 3;
	Global_99725[3043].f_180 = 3.0f;
	*(&Global_99725[3043] + 184) = Vector(-115,751f, 118,869f, 1373,431f);
	*(&Global_99725[3043] + 196) = Vector(-115,751f, 118,869f, 1373,431f);
	Global_99725[3043].f_208 = 349,652f;
	Global_99725[3043].f_232 = 1;
	Global_99725[3043].f_144 = 150.0f;
	Global_99725[3043].f_148 = 200.0f;
	*(&Global_99725[3043] + 168) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	*(&Global_99725[3043] + 160) = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_99725[3043].f_224 = STRING_TO_HASH("RETURN");
	if (iVar0 != 0)
	{
		Function_428(&(Global_99725[3043]), 30, iVar0);
	}
	*(&Global_99725[3043] + 240) = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_99725[3043].f_248 = 0;
	return;
}

void Function_428(struct<261> Param0) //Position: 0x24F7A / 151418
{
	int iVar0;
	
	iVar0 = Param0.f_260;
	iParam1 = iParam1;
	if (iParam2 & 2 == 0)
	{
		iVar0 |= 64;
		iVar0 = (iVar0 - 64);
	}
	if (iParam2 & 4 == 0)
	{
		iVar0 |= 128;
		iVar0 = (iVar0 - 128);
	}
	if (iParam2 & 8 == 0)
	{
		iVar0 |= 256;
		iVar0 = (iVar0 - 256);
	}
	if (iParam2 & 16 == 0)
	{
		iVar0 |= 512;
		iVar0 = (iVar0 - 512);
	}
	if (iParam2 & 32 == 0)
	{
		iVar0 |= 1024;
		iVar0 = (iVar0 - 1024);
	}
	if (iParam2 & 1 == 0)
	{
		iVar0 |= 32;
		iVar0 = (iVar0 - 32);
	}
	Param0.f_260 = iVar0;
	return;
}

void Function_429() //Position: 0x25021 / 151585
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 77)
	{
		Global_99725[iVar043] = 0;
		strcpy(&Global_99725[iVar043] + 4, "INVALID", 16);
		*(&Global_99725[iVar043] + 36) = 4294967295;
		strcpy(&Global_99725[iVar043] + 44, "", 16);
		strcpy(&Global_99725[iVar043] + 76, "", 16);
		(&Global_99725[iVar043] + 112) = "";
		(&Global_99725[iVar043] + 120) = "";
		(&Global_99725[iVar043] + 128) = "";
		(&Global_99725[iVar043] + 136) = "";
		Global_99725[iVar043].f_144 = 0.0f;
		Global_99725[iVar043].f_148 = 0.0f;
		Global_99725[iVar043].f_152 = 4294967295;
		*(&Global_99725[iVar043] + 160) = Function_430();
		*(&Global_99725[iVar043] + 168) = Function_430();
		Global_99725[iVar043].f_176 = 4294967295;
		Global_99725[iVar043].f_180 = 0.0f;
		Function_435();
		*(&Global_99725[iVar043] + 184) = Function_435();
		Function_435();
		*(&Global_99725[iVar043] + 196) = Function_435();
		Global_99725[iVar043].f_208 = 0.0f;
		Global_99725[iVar043].f_212 = 4294967295;
		Global_99725[iVar043].f_216 = 4294967295;
		Global_99725[iVar043].f_220 = 4294967295;
		Global_99725[iVar043].f_224 = 4294967295;
		Global_99725[iVar043].f_228 = 0;
		Global_99725[iVar043].f_232 = 0;
		Global_99725[iVar043].f_236 = 0;
		*(&Global_99725[iVar043] + 240) = Function_430();
		Global_99725[iVar043].f_248 = 0;
		Global_99725[iVar043].f_252 = 4294967295;
		Global_99725[iVar043].f_256 = 4294967295;
		Global_99725[iVar043].f_260 = 0;
		Global_99725[iVar043].f_264 = 4294967295;
		Global_99725[iVar043].f_268 = 4294967295;
		iVar0++;
	}
	return;
}

var Function_430() //Position: 0x251D2 / 152018
{
	return MAKE_TIME_OF_DAY_EX(false, false, 0, 1);
}

void Function_431() //Position: 0x251DF / 152031
{
	Global_116927[316].f_20 = 1;
	Global_116927[26].f_20 = 1;
	Global_116927[36].f_20 = 1;
	Global_116927[46].f_20 = 1;
	Global_116927[126].f_20 = 1;
	Global_116927[146].f_20 = 1;
	Global_116927[66].f_20 = 1;
	Global_116927[76].f_20 = 1;
	Global_116927[86].f_20 = 1;
	Global_116927[06].f_20 = 1;
	Global_116927[16].f_20 = 1;
	Global_116927[156].f_20 = 1;
	Global_116927[186].f_20 = 1;
	Global_116927[196].f_20 = 1;
	Global_116927[216].f_20 = 1;
	Global_116927[226].f_20 = 1;
	Global_116927[236].f_20 = 1;
	Global_116927[246].f_20 = 1;
	Global_116927[256].f_20 = 1;
	Global_116927[266].f_20 = 1;
	Global_116927[276].f_20 = 1;
	Global_116927[296].f_20 = 1;
	Global_116927[306].f_20 = 1;
	return;
}

void Function_432() //Position: 0x252DB / 152283
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Global_116927[316] = 1;
		iVar0++;
	}
	return;
}

void Function_433(int iParam0, int iParam1) //Position: 0x252FD / 152317
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_434(bool bParam0, bool bParam1) //Position: 0x25313 / 152339
{
	return (bParam0 && bParam1) == 0;
}

struct<8> Function_435() //Position: 0x25320 / 152352
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_436(int iParam0) //Position: 0x2532A / 152362
{
	int iVar0;
	
	if (Function_434(iParam0, 1) && Function_434(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_437(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2535E / 152414
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_440(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_438(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_438(bParam0, bParam1, bParam2, 4294967295);
}

int Function_438(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x253BC / 152508
{
	var uVar0;
	
	if (!Function_274(bParam2))
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
	uVar0 = Function_440(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_439(uVar0);
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

var Function_439(int iParam0) //Position: 0x25520 / 152864
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

var Function_440(int iParam0, int iParam1, int iParam2) //Position: 0x2555E / 152926
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_441(struct<2>[] Param0) //Position: 0x2557E / 152958
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_445();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_444(&(Param0[iVar02]), 8);
		}
		else if (Function_443())
		{
			iVar1 = 1;
			Function_444(&(Param0[iVar02]), 8);
		}
		Function_444(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_444(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_444(&(Param0[iVar02]), 2);
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
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_444(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_444(&(Param0[iVar02]), 2);
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
	Function_442();
	return 1;
}

void Function_442() //Position: 0x25940 / 153920
{
	if (!Function_257(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_443() //Position: 0x25980 / 153984
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

void Function_444(struct<13> Param0) //Position: 0x259AE / 154030
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_445() //Position: 0x259C1 / 154049
{
	if (!Function_257(128))
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

var Function_446(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x25A03 / 154115
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_447(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_444(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_447(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x25A41 / 154177
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_444(&(Param0[iVar02]), 4);
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

void Function_448() //Position: 0x25B10 / 154384
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

var Function_449() //Position: 0x25BD7 / 154583
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_64;
}

struct<8> Function_450(var uParam0, var uParam1) //Position: 0x25BF2 / 154610
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

void Function_451() //Position: 0x25C40 / 154688
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

void Function_452() //Position: 0x25C7B / 154747
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

void Function_453() //Position: 0x25CB8 / 154808
{
	int iVar0;
	
	DISABLE_WORLD_SECTOR("dlc02x");
	DISABLE_WORLD_SECTOR("dlc05x");
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
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	ENABLE_CHILD_SECTOR("thi_gates01x");
	ENABLE_CHILD_SECTOR("thi_gates02x");
	ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
	DISABLE_CHILD_SECTOR("sp_grave03x");
	DISABLE_CHILD_SECTOR("sp_outlaw03x");
	DISABLE_CHILD_SECTOR("sp_marshal02x");
	DISABLE_CHILD_SECTOR("sp_marshal03x");
	DISABLE_CHILD_SECTOR("sp_marshal04ax");
	DISABLE_CHILD_SECTOR("sp_marshal04bx");
	DISABLE_CHILD_SECTOR("sep_graveEva01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	DISABLE_CHILD_SECTOR("ram_missionProps01x");
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	if (!Function_462("noZombieFireArt"))
	{
		ENABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		DISABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	}
	ENABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
	ENABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
	ENABLE_CHILD_SECTOR("dlc_arm_generalStoreProps01x");
	DISABLE_CHILD_SECTOR("arm_generalStoreProps01x");
	ENABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
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
					ENABLE_WORLD_SECTOR("ramitaBayaBefore");
					DISABLE_WORLD_SECTOR("ramitaBayaAfter");
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
			case 0x00000002:
				break;
			
			case 0x00000003:
				if (Global_6606)
				{
					ENABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
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
					ENABLE_WORLD_SECTOR("tannersSpanBefore");
					DISABLE_WORLD_SECTOR("tannersSpanAfter");
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
					ENABLE_WORLD_SECTOR("dixonCrossingBefore");
					DISABLE_WORLD_SECTOR("dixonCrossingAfter");
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
				break;
			
			case 0x00000007:
				ENABLE_CHILD_SECTOR("hen_barn01x");
				ENABLE_CHILD_SECTOR("hen_barn02props01x");
				DISABLE_CHILD_SECTOR("hen_barn02x");
				DISABLE_CHILD_SECTOR("hen_barn01props01x");
				break;
			
			case 0x00000008:
				ENABLE_WORLD_SECTOR("campoMiradaAfter");
				DISABLE_WORLD_SECTOR("campoMiradaBefore");
				break;
			
			case 0x00000009:
				if (Global_6606)
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
					DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
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
				ENABLE_CHILD_SECTOR("coc_fence01bx");
				ENABLE_CHILD_SECTOR("coc_fence03bx");
				ENABLE_CHILD_SECTOR("dlc_coc_gates02x");
				DISABLE_CHILD_SECTOR("coc_fence01x");
				DISABLE_CHILD_SECTOR("coc_fence03x");
				DISABLE_CHILD_SECTOR("coc_gates01x");
				DISABLE_CHILD_SECTOR("coc_gates02x");
				break;
			
			case 0x0000000C:
				if (Global_6606)
				{
					ENABLE_WORLD_SECTOR("masonBridgeBefore");
					DISABLE_WORLD_SECTOR("masonBridgeAfter");
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
					ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
					DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
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
				ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
				ENABLE_CHILD_SECTOR("dlc_blk_bank01_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
				ENABLE_CHILD_SECTOR("blk_bank_int_02x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
				DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
				DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
				ENABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
				ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_church_int_01x");
				ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
				ENABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_freightstation_int_01x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_01x");
				ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_tailor_int_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_gunshop_int_01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
				ENABLE_CHILD_SECTOR("dlc_blk_hotel01Props01x");
				DISABLE_CHILD_SECTOR("blk_hotel01Props01x");
				ENABLE_CHILD_SECTOR("dlc_blk_tailor01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
				DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
				ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
				DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
				DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
				break;
			
			case 0x00000010:
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_silo02x");
				break;
			
			case 0x00000011:
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				break;
			
			case 0x00000012:
				ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
				DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
				DISABLE_CHILD_SECTOR("sp_mexArmy03x");
				break;
			
			case 0x00000013:
				ENABLE_CHILD_SECTOR("esc_villaWall04x");
				DISABLE_CHILD_SECTOR("esc_villaWall05x");
				DISABLE_CHILD_SECTOR("sp_rebel05x");
				ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
				ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
				ENABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
				DISABLE_CHILD_SECTOR("esc_bullRing01x");
				DISABLE_CHILD_SECTOR("esc_bullRing01props01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
				break;
			
			case 0x00000014:
				DISABLE_CHILD_SECTOR("icarus");
				break;
			
			case 0x00000015:
				DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
				DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
				if (Global_6606)
				{
					DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
				}
				break;
			
			case 0x00000016:
				DISABLE_CHILD_SECTOR("sp_anthro01x");
				break;
			
			case 0x00000017:
				if (Global_6606)
				{
					DISABLE_CHILD_SECTOR("beh_grave01x");
					DISABLE_CHILD_SECTOR("beh_grave02x");
					DISABLE_CHILD_SECTOR("beh_grave03x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("beh_grave01x");
					DISABLE_CHILD_SECTOR("beh_grave02x");
					DISABLE_CHILD_SECTOR("beh_grave03x");
				}
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
				ENABLE_CHILD_SECTOR("emt_caveDoor01x");
				DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				if (Global_6606)
				{
					DISABLE_CHILD_SECTOR("dlc_fom_ladders01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
				}
				break;
			
			case 0x0000001A:
				ENABLE_CHILD_SECTOR("thi_window01x");
				DISABLE_CHILD_SECTOR("thi_window02x");
				break;
			
			default:
				LOG_ERROR("world state error!");
				break;
		}
		iVar0++;
	}
	if (Global_6606)
	{
		Function_454();
	}
	return;
}

void Function_454() //Position: 0x29F17 / 171799
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
					if (Function_369(2, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
				case 0x00000002:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000003:
					if (Function_369(2, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
						DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
					}
					break;
				
				case 0x00000004:
					if (Function_17(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
					}
					break;
				
				case 0x00000005:
					if (Function_17(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
				case 0x00000007:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000008:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_12(2) || Function_369(2, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
					}
					break;
				
				case 0x0000000A:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x0000000B:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x0000000C:
					if (Function_17(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
					}
					break;
				
				case 0x0000000D:
					if (Function_17(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
					}
					break;
				
				case 0x0000000E:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x0000000F:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000010:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000011:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000012:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000013:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000014:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000015:
					if (Function_17(24))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
					}
					break;
				
				case 0x00000016:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000017:
					if (Function_369(4, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_369(2, 0))
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
					if (Function_17(8))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
					}
					break;
				
				case 0x0000001A:
					Global_39324[iVar0] = 1;
					break;
				
				default:
					LOG_ERROR("World state error!");
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_455() //Position: 0x2B281 / 176769
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
	SET_PHOSPHORUS_AMMO_ACTIVE(0);
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

void Function_456() //Position: 0x2B8E1 / 178401
{
	int iVar0;
	char* cVar1[8];
	int iVar3;
	
	Function_460();
	Function_459(5, 0.0f, "sn_gmpt", 7, 2, 1, 2, 3212836864, 0);
	Function_459(7, 0.0f, "sn_gmtm", 23, 2, 3, 2, 3212836864, 0);
	Function_459(8, 0.0f, "sn_days", 25, 2, 1, 2, 3212836864, 0);
	Function_459(660, 0.0f, "sn_zsur", 4, 2, 1, 2, 0.0f, 0);
	Function_459(9, 0.0f, "sn_miss", 1, 2, 1, 2, 3212836864, 0);
	Function_459(10, 0.0f, "sn_misf", 1, 2, 1, 2, 3212836864, 0);
	Function_459(11, 0.0f, "sn_misr", 1, 2, 1, 2, 3212836864, 0);
	Function_459(658, 0.0f, "sn_zuas", 4, 2, 1, 2, 0.0f, 0);
	Function_459(659, 0.0f, "sn_ztas", 4, 2, 1, 2, 0.0f, 0);
	Function_459(661, 0.0f, "sn_zsup", 4, 2, 1, 2, 0.0f, 0);
	Function_459(18, 0.0f, "sn_lmst", 15, 9, 1, 2, 3212836864, 0);
	Function_459(19, 0.0f, "sn_cutb", 15, 9, 1, 2, 3212836864, 0);
	Function_459(20, 0.0f, "sn_cutk", 15, 9, 1, 2, 3212836864, 0);
	Function_459(21, 0.0f, "sn_cute", 15, 9, 1, 2, 3212836864, 0);
	Function_459(22, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_459(23, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_459(24, 0.0f, "sn_mmrt", 15, 9, 1, 2, 3212836864, 0);
	Function_459(25, 0.0f, "sn_lmcn", 15, 9, 1, 2, 3212836864, 0);
	Function_459(472, TO_FLOAT(4294967295), "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_459(656, 0.0f, "sn_zgyc", 4, 2, 3, 2, 3212836864, 0);
	Function_459(662, 0.0f, "sn_zblk", 13, 2, 3, 2, 3212836864, 0);
	Function_459(663, 0.0f, "sn_zcoo", 13, 2, 3, 2, 3212836864, 0);
	Function_459(664, 0.0f, "sn_ztum", 13, 2, 3, 2, 3212836864, 0);
	Function_459(665, 0.0f, "sn_zodd", 13, 2, 3, 2, 3212836864, 0);
	Function_459(666, 0.0f, "sn_zsep", 13, 2, 3, 2, 3212836864, 0);
	Function_459(467, 0.0f, "sn_chst", 0, 9, 1, 2, 3212836864, 0);
	Function_459(477, 0.0f, "sn_snoi", 3, 9, 1, 2, 3212836864, 0);
	Function_459(478, 0.0f, "sn_moon", 3, 9, 1, 2, 3212836864, 0);
	Function_459(479, 0.0f, "sn_chta", 3, 9, 1, 2, 3212836864, 0);
	Function_459(480, 0.0f, "sn_medi", 3, 9, 1, 2, 3212836864, 0);
	Function_459(482, 0.0f, "sn_hopi", 3, 9, 1, 2, 3212836864, 0);
	Function_459(483, 0.0f, "sn_appl", 3, 9, 1, 2, 3212836864, 0);
	Function_459(667, 0.0f, "sn_zpho", 3, 9, 1, 2, 3212836864, 0);
	Function_459(668, 0.0f, "sn_zzbc", 3, 9, 1, 2, 3212836864, 0);
	Function_459(669, 0.0f, "sn_zbbc", 3, 9, 1, 2, 3212836864, 0);
	Function_459(670, 0.0f, "sn_zblc", 3, 9, 1, 2, 3212836864, 0);
	Function_459(405, 0.0f, "sn_horb", 0, 2, 1, 2, 3212836864, 0);
	Function_459(406, 0.0f, "sn_zrcm", 3, 2, 1, 2, 3212836864, 0);
	Function_459(407, 0.0f, "sn_zrcc", 3, 2, 1, 2, 3212836864, 0);
	Function_459(408, 0.0f, "sn_btin", 3, 2, 1, 2, 3212836864, 0);
	Function_459(409, 0.0f, "sn_btcm", 3, 2, 1, 2, 3212836864, 0);
	Function_459(26, 0.0f, "sn_kani", 1, 6, 3, 2, 3212836864, 0);
	Function_459(27, 0.0f, "sn_khum", 1, 6, 3, 2, 3212836864, 0);
	Function_459(671, 0.0f, "sn_zkud", 4, 6, 3, 2, 3212836864, 0);
	Function_459(672, 0.0f, "sn_zkfr", 4, 6, 3, 2, 3212836864, 0);
	Function_459(673, 0.0f, "sn_zkbr", 4, 6, 3, 2, 3212836864, 0);
	Function_459(674, 0.0f, "sn_zkbo", 4, 6, 3, 2, 3212836864, 0);
	Function_459(675, 0.0f, "sn_zkre", 4, 6, 3, 2, 3212836864, 0);
	Function_459(602, 0.0f, "sn_zksq", 4, 6, 3, 2, 3212836864, 0);
	Function_459(679, 0.0f, "sn_zkch", 4, 6, 3, 2, 3212836864, 0);
	iVar0 = 50;
	Function_459(49, 0.0f, "sn_hbul", 7, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0, 0.0f, "sn_hpvo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 1, 0.0f, "sn_hpsa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 2, 0.0f, "sn_hphp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 3, 0.0f, "sn_hpms", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 4, 0.0f, "sn_hrca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 5, 0.0f, "sn_hrsc", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 6, 0.0f, "sn_hrda", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 7, 0.0f, "sn_hrlm", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 8, 0.0f, "sn_hrcr", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 9, 0.0f, "sn_hrwi", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 10, 0.0f, "sn_hrhe", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 11, 0.0f, "sn_hrev", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 12, 0.0f, "sn_hrsp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 13, 0.0f, "sn_hrbo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 14, 0.0f, "sn_hrbu", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 15, 0.0f, "sn_hsso", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 16, 0.0f, "sn_hsdb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 17, 0.0f, "sn_hspa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 18, 0.0f, "sn_hssa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 19, 0.0f, "sn_hsrb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 20, 0.0f, "sn_hsca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 31, 0.0f, "sn_hsat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 21, 0.0f, "sn_hlas", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 22, 0.0f, "sn_hknf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 23, 0.0f, "sn_hfir", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 24, 0.0f, "sn_hdyn", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 25, 0.0f, "sn_htkf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 29, 0.0f, "sn_htmk", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 26, 0.0f, "sn_hgat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 27, 0.0f, "sn_hbro", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 28, 0.0f, "sn_hcan", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 33, 0.0f, "sn_hsto", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 34, 0.0f, "sn_hsbl", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 35, 0.0f, "sn_hshw", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 36, 0.0f, "sn_hszb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_459(iVar0 + 37, 0.0f, "sn_hsbb", 11, 6, 3, 7, 0.0f, 0.0f);
	iVar0 = 90;
	Function_459(89, 0.0f, "sn_sbul", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 1, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 2, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 3, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 4, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 5, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 6, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 7, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 8, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 9, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 10, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 11, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 12, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 13, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 14, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 15, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 16, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 17, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 18, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 19, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 20, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 31, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 21, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 22, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 23, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 24, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 25, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 29, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 26, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 27, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 28, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 33, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 34, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 35, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 36, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(iVar0 + 37, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_459(129, 0.0f, "sn_roal", 0, 6, 3, 2, 3212836864, 0);
	Function_459(130, 0.0f, "sn_roh", 0, 6, 3, 2, 3212836864, 0);
	Function_459(134, 0.0f, "sn_scr", 0, 6, 3, 2, 3212836864, 0);
	Function_459(135, 0.0f, "sn_sfc", 0, 6, 3, 2, 3212836864, 0);
	Function_459(136, 0.0f, "sn_sfh", 0, 6, 3, 2, 3212836864, 0);
	iVar0 = 183;
	Function_459(iVar0, 0.0f, "sn_wpvo", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 1, 0.0f, "sn_wpsa", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 2, 0.0f, "sn_wphp", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 3, 0.0f, "sn_wpms", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 4, 0.0f, "sn_wrca", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 5, 0.0f, "sn_wrsc", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 6, 0.0f, "sn_wrda", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 7, 0.0f, "sn_wrlm", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 8, 0.0f, "sn_wrcr", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 9, 0.0f, "sn_wrwi", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 10, 0.0f, "sn_wrhe", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 11, 0.0f, "sn_wrev", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 12, 0.0f, "sn_wrsp", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 13, 0.0f, "sn_wrbo", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 14, 0.0f, "sn_wrbu", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 15, 0.0f, "sn_wsso", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 16, 0.0f, "sn_wsdb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 17, 0.0f, "sn_wspa", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 18, 0.0f, "sn_wssa", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 19, 0.0f, "sn_wsrb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 20, 0.0f, "sn_wsca", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 31, 0.0f, "sn_wsat", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 21, 0.0f, "sn_wlas", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 22, 0.0f, "sn_wknf", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 23, 0.0f, "sn_wfir", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 24, 0.0f, "sn_wdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 25, 0.0f, "sn_wtkf", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 29, 0.0f, "sn_wtmk", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 26, 0.0f, "sn_wgat", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 27, 0.0f, "sn_wbro", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 28, 0.0f, "sn_wcan", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 33, 0.0f, "sn_wsto", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 34, 0.0f, "sn_wsbl", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 35, 0.0f, "sn_wshw", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 36, 0.0f, "sn_wszb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 37, 0.0f, "sn_wsbb", 3, 6, 3, 2, 3212836864, 0);
	iVar0 = 140;
	Function_459(iVar0, 0.0f, "sn_spvo", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 1, 0.0f, "sn_spsa", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 2, 0.0f, "sn_sphp", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 3, 0.0f, "sn_spms", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 4, 0.0f, "sn_srca", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 5, 0.0f, "sn_srsc", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 6, 0.0f, "sn_srda", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 7, 0.0f, "sn_srlm", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 8, 0.0f, "sn_srcr", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 9, 0.0f, "sn_srwi", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 10, 0.0f, "sn_srhe", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 11, 0.0f, "sn_srev", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 12, 0.0f, "sn_srsp", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 13, 0.0f, "sn_srbo", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 14, 0.0f, "sn_srbu", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 15, 0.0f, "sn_ssso", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 16, 0.0f, "sn_ssdb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 17, 0.0f, "sn_sspa", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 18, 0.0f, "sn_sssa", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 19, 0.0f, "sn_ssrb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 20, 0.0f, "sn_ssca", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 31, 0.0f, "sn_ssat", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 21, 0.0f, "sn_slas", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 22, 0.0f, "sn_sknf", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 23, 0.0f, "sn_sfir", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 24, 0.0f, "sn_sdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 25, 0.0f, "sn_stkf", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 29, 0.0f, "sn_stmk", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 26, 0.0f, "sn_sgat", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 27, 0.0f, "sn_sbro", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 28, 0.0f, "sn_scan", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 33, 0.0f, "sn_ssto", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 34, 0.0f, "sn_ssbl", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 35, 0.0f, "sn_sshw", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 36, 0.0f, "sn_sszb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(iVar0 + 37, 0.0f, "sn_ssbb", 3, 6, 3, 2, 3212836864, 0);
	Function_459(179, 0.0f, "sn_fvp", 20, 9, 3, 2, 3212836864, 0);
	Function_459(180, 0.0f, "sn_fvr", 20, 9, 3, 2, 3212836864, 0);
	Function_459(181, 0.0f, "sn_fvs", 20, 9, 3, 2, 3212836864, 0);
	Function_459(182, 0.0f, "sn_fvw", 20, 9, 3, 2, 3212836864, 0);
	Function_459(42, 0.0f, "sn_hdst", 1, 6, 3, 2, 3212836864, 0);
	Function_459(44, 0.0f, "sn_xect", 1, 6, 1, 2, 3212836864, 0);
	Function_459(47, 0.0f, "sn_hdss", 1, 6, 3, 2, 3212836864, 0);
	Function_459(676, 0.0f, "sn_zhed", 4, 6, 3, 2, 3212836864, 0);
	Function_459(677, 0.0f, "sn_zexe", 4, 6, 1, 2, 3212836864, 0);
	Function_459(273, 0.0f, "sn_h_tv", 21, 7, 3, 2, 3212836864, 0);
	Function_458(492, 265, 0.0f, "sn_h_bw", "sd_h_bw", "sn_h_bw", "sl_h_bw", 7, 3);
	Function_458(491, 264, 0.0f, "sn_h_ds", "sd_h_ds", "sn_h_ds", "sl_h_ds", 7, 3);
	Function_458(494, 267, 0.0f, "sn_h_gc", "sd_h_gc", "sn_h_gc", "sl_h_gc", 7, 3);
	Function_458(496, 269, 0.0f, "sn_h_hs", "sd_h_hs", "sn_h_hs", "sl_h_hs", 7, 3);
	Function_458(493, 266, 0.0f, "sn_h_po", "sd_h_pp", "sn_h_po", "sl_h_pp", 7, 3);
	Function_458(490, 263, 0.0f, "sn_h_pp", "sd_h_pp", "sn_h_pp", "sl_h_pp", 7, 3);
	Function_458(498, 271, 0.0f, "sn_h_rs", "sd_h_rs", "sn_h_rs", "sl_h_rs", 7, 3);
	Function_458(497, 270, 0.0f, "sn_h_vs", "sd_h_vs", "sn_h_vs", "sl_h_vs", 7, 3);
	Function_458(495, 268, 0.0f, "sn_h_wo", "sd_h_wo", "sn_h_wo", "sl_h_wo", 7, 3);
	Function_458(499, 272, 0.0f, "sn_h_wf", "sd_h_wf", "sn_h_wf", "sl_h_wf", 7, 3);
	Function_459(310, 0.0f, "sn_skv", 4, 7, 1, 4, 3212836864, 0);
	Function_459(346, 0.0f, "sn_kiv", 4, 9, 3, 2, 3212836864, 0);
	Function_458(583, 310, 0.0f, "sn_v_f", "sd_sold", "", "", 9, 1);
	Function_459(609, 0.0f, "sn_z_zl", 4, 9, 3, 2, 3212836864, 0);
	Function_459(614, 0.0f, "sn_z_zb", 4, 9, 3, 2, 3212836864, 0);
	Function_459(619, 0.0f, "sn_z_zc", 4, 9, 3, 2, 3212836864, 0);
	Function_459(624, 0.0f, "sn_z_zy", 4, 9, 3, 2, 3212836864, 0);
	Function_459(629, 0.0f, "sn_z_zw", 4, 9, 3, 2, 3212836864, 0);
	Function_459(632, 0.0f, "sn_z_zh", 4, 9, 3, 2, 3212836864, 0);
	Function_459(637, 0.0f, "sn_z_ch", 4, 9, 3, 2, 3212836864, 0);
	Function_459(641, 0.0f, "sn_z_sq", 4, 9, 3, 2, 3212836864, 0);
	Function_459(644, 0.0f, "sn_z_un", 4, 9, 3, 2, 3212836864, 0);
	Function_459(646, 0.0f, "sn_z_ba", 4, 9, 3, 2, 3212836864, 0);
	Function_459(649, 0.0f, "sn_z_d", 4, 9, 3, 2, 3212836864, 0);
	Function_459(652, 0.0f, "sn_z_bu", 4, 9, 3, 2, 3212836864, 0);
	Function_459(655, 0.0f, "sn_z_bo", 4, 9, 3, 2, 3212836864, 0);
	Function_458(604, 4294967295, 0.0f, "sn_z_t", "sd_sold", "", "", 9, 1);
	Function_458(605, 4294967295, 0.0f, "sn_z_e", "sd_sold", "", "", 9, 1);
	Function_458(606, 4294967295, 0.0f, "sn_z_to", "sd_sold", "", "", 9, 1);
	Function_458(607, 4294967295, 0.0f, "sn_z_r", "sd_sold", "", "", 9, 1);
	Function_458(608, 4294967295, 0.0f, "sn_z_ea", "sd_sold", "", "", 9, 1);
	Function_458(611, 4294967295, 0.0f, "sn_zb_t", "sd_sold", "", "", 9, 1);
	Function_458(610, 4294967295, 0.0f, "sn_zb_e", "sd_sold", "", "", 9, 1);
	Function_458(612, 4294967295, 0.0f, "sn_zb_c", "sd_sold", "", "", 9, 1);
	Function_458(613, 4294967295, 0.0f, "sn_zb_h", "sd_sold", "", "", 9, 1);
	Function_458(616, 4294967295, 0.0f, "sn_zc_t", "sd_sold", "", "", 9, 1);
	Function_458(617, 4294967295, 0.0f, "sn_zc_c", "sd_sold", "", "", 9, 1);
	Function_458(615, 4294967295, 0.0f, "sn_zc_e", "sd_sold", "", "", 9, 1);
	Function_458(618, 4294967295, 0.0f, "sn_zc_h", "sd_sold", "", "", 9, 1);
	Function_458(621, 4294967295, 0.0f, "sn_zy_t", "sd_sold", "", "", 9, 1);
	Function_458(620, 4294967295, 0.0f, "sn_zy_e", "sd_sold", "", "", 9, 1);
	Function_458(622, 4294967295, 0.0f, "sn_zy_c", "sd_sold", "", "", 9, 1);
	Function_458(623, 4294967295, 0.0f, "sn_zy_h", "sd_sold", "", "", 9, 1);
	Function_458(626, 4294967295, 0.0f, "sn_zw_t", "sd_sold", "", "", 9, 1);
	Function_458(625, 4294967295, 0.0f, "sn_zw_e", "sd_sold", "", "", 9, 1);
	Function_458(627, 4294967295, 0.0f, "sn_zw_c", "sd_sold", "", "", 9, 1);
	Function_458(628, 4294967295, 0.0f, "sn_zw_h", "sd_sold", "", "", 9, 1);
	Function_458(630, 4294967295, 0.0f, "sn_zh_e", "sd_sold", "", "", 9, 1);
	Function_458(631, 4294967295, 0.0f, "sn_zh_h", "sd_sold", "", "", 9, 1);
	Function_458(634, 4294967295, 0.0f, "sn_zchT", "sd_sold", "", "", 9, 1);
	Function_458(633, 4294967295, 0.0f, "sn_zchE", "sd_sold", "", "", 9, 1);
	Function_458(635, 4294967295, 0.0f, "sn_zchC", "sd_sold", "", "", 9, 1);
	Function_458(636, 4294967295, 0.0f, "sn_zchH", "sd_sold", "", "", 9, 1);
	Function_458(639, 4294967295, 0.0f, "sn_zsqT", "sd_sold", "", "", 9, 1);
	Function_458(638, 4294967295, 0.0f, "sn_zsqE", "sd_sold", "", "", 9, 1);
	Function_458(640, 4294967295, 0.0f, "sn_zsqH", "sd_sold", "", "", 9, 1);
	Function_458(642, 4294967295, 0.0f, "sn_zunH", "sd_sold", "", "", 9, 1);
	Function_458(643, 4294967295, 0.0f, "sn_zunR", "sd_sold", "", "", 9, 1);
	Function_458(645, 4294967295, 0.0f, "sn_zbat", "sd_sold", "", "", 9, 1);
	Function_458(647, 4294967295, 0.0f, "sn_zd_t", "sd_sold", "", "", 9, 1);
	Function_458(648, 4294967295, 0.0f, "sn_zd_e", "sd_sold", "", "", 9, 1);
	Function_458(650, 4294967295, 0.0f, "sn_zbuH", "sd_sold", "", "", 9, 1);
	Function_458(651, 4294967295, 0.0f, "sn_zbuE", "sd_sold", "", "", 9, 1);
	Function_458(653, 4294967295, 0.0f, "sn_zboT", "sd_sold", "", "", 9, 1);
	Function_458(654, 4294967295, 0.0f, "sn_zboE", "sd_sold", "", "", 9, 1);
	Function_459(357, 0.0f, "sn_trea", 4, 7, 1, 4, 3212836864, 0);
	Function_458(587, 357, 0.0f, "sn_t_1", "sd_sold", "", "", 9, 3);
	Function_458(588, 357, 0.0f, "sn_t_2", "sd_sold", "", "", 9, 3);
	Function_458(589, 357, 0.0f, "sn_t_3", "sd_sold", "", "", 9, 3);
	Function_458(590, 357, 0.0f, "sn_t_4", "sd_sold", "", "", 9, 3);
	Function_458(591, 357, 0.0f, "sn_t_5", "sd_sold", "", "", 9, 3);
	Function_459(657, 0.0f, "sn_zmsp", 4, 2, 1, 2, 3212836864, 0);
	Function_459(372, 0.0f, "sn_mtof", 24, 4, 3, 2, 3212836864, 0);
	Function_459(373, 0.0f, "sn_mtoh", 24, 4, 3, 2, 3212836864, 0);
	Function_459(374, 0.0f, "sn_mtwh", 24, 4, 1, 2, 3212836864, 0);
	Function_459(379, 0.0f, "sn_dff", 0, 4, 3, 2, 3212836864, 0);
	Function_459(380, 0.0f, "sn_hdff", 0, 4, 3, 2, 3212836864, 0);
	Function_459(385, 0.0f, "sn_rpof", 0, 4, 3, 2, 3212836864, 0);
	Function_459(387, 0.0f, "sn_bfs", 24, 4, 3, 2, 3212836864, 0);
	Function_459(388, 0.0f, "sn_bfsh", 24, 4, 3, 2, 3212836864, 0);
	Function_459(390, 0.0f, "sn_dlvl", 15, 2, 1, 2, 3.0f, 0.0f);
	Function_459(391, 0.0f, "sn_kde", 0, 6, 3, 2, 3212836864, 0);
	Function_459(392, 0.0f, "sn_kode", 0, 6, 3, 2, 3212836864, 0);
	Function_459(394, 0.0f, "sn_tdet", 23, 6, 3, 2, 3212836864, 0);
	Function_459(395, 0.0f, "sn_tode", 0, 6, 3, 2, 3212836864, 0);
	Function_459(398, 0.0f, "sn_nhog", 0, 2, 1, 2, 3212836864, 0);
	Function_459(389, 0.0f, "sn_mlas", 24, 2, 1, 2, 3212836864, 0);
	Function_459(678, 0.0f, "sn_zhog", 0, 2, 1, 2, 3212836864, 0);
	Function_459(456, 0.0f, "sn_otfd", 3, 9, 1, 2, 3212836864, 0);
	Function_459(457, 0.0f, "sn_otft", 3, 9, 1, 2, 3212836864, 0);
	Function_46();
	cVar1 = { StackVal, Function_46() };
	Function_95(179, &cVar1, 0, 1);
	Function_45();
	cVar1 = { StackVal, Function_45() };
	Function_95(180, &cVar1, 0, 1);
	Function_44();
	cVar1 = { StackVal, Function_44() };
	Function_95(181, &cVar1, 0, 1);
	Function_29(0);
	cVar1 = { StackVal, Function_29(0) };
	Function_95(182, &cVar1, 0, 1);
	iVar3 = 0;
	while (iVar3 <= 38)
	{
		Function_110((50 + iVar3), Function_11((90 + iVar3)));
		iVar3++;
	}
	Function_110(49, Function_11(89));
	Function_457();
	return;
}

void Function_457() //Position: 0x2DD5B / 187739
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

int Function_458(int iParam0, int iParam1, int iParam2, char* cParam3, bool bParam5, float fParam6, bool bParam7, int iParam8) //Position: 0x2DE61 / 188001
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
		Function_459(iParam1, iParam2, &bParam5, 5, &bParam7, &iParam8, 4, 3212836864, 0);
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

int Function_459(int iParam0, int iParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8) //Position: 0x2E3BF / 189375
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_REGISTER_Z: Attempting to register a Stat out of bounds.");
		return 0;
	}
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_REGISTER_Z: eStatID parameter cannot be STAT_INVALID (-1).");
		return 0;
	}
	if (iParam3 == 2)
	{
		LOG_ERROR("STAT_REGISTER_Z: you are not allowed to register a Collectible with this command, please use COLLECTION_REGISTER.");
		return 0;
	}
	if (!IS_STRING_VALID(&Param2))
	{
		LOG_ERROR("STAT_REGISTER_Z: LabelForStatName parameter cannot be an Invalid String.");
		return 0;
	}
	if (STRING_LENGTH(&Param2) >= 7)
	{
		LOG_ERROR("STAT_REGISTER_Z: LabelForStatName parameter cannot be more than 7 characters.");
		return 0;
	}
	if (IS_STRING_VALID(&(Global_55480[iParam016])))
	{
		if (STRING_LENGTH(&(Global_55480[iParam016])) >= 0)
		{
			PRINTSTRING("STAT_REGISTER_Z: You are not allowed to overwrite this already registered Stat: ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_REGISTER_Z: You are not allowed to overwrite an already registered Stat.");
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

void Function_460() //Position: 0x2E78D / 190349
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
	Function_461();
	return;
}

void Function_461() //Position: 0x2E814 / 190484
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

bool Function_462(bool bParam0) //Position: 0x2E891 / 190609
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_463() //Position: 0x2E8B3 / 190643
{
	Global_39591[0] = Function_464("AllowedToInvestigate", 1);
	Global_39591[1] = Function_464("BumpedIntoMeJustNow", 1);
	Global_39591[2] = Function_464("CanCombatFight", 1);
	Global_39591[3] = Function_464("CanHotspotMoveTo", 0);
	Global_39591[4] = Function_464("CanHotspotUse", 0);
	Global_39591[5] = Function_464("CanInvestigateBody", 1);
	Global_39591[6] = Function_464("HasFightCapabilities", 0);
	Global_39591[7] = Function_464("ShouldInvestigateBody", 1);
	Global_39591[8] = Function_464("CanCombatTakeDownFromMount", 1);
	return;
}

int Function_464(var uParam0, int iParam1) //Position: 0x2E9DF / 190943
{
	int iVar0;
	
	iVar0 = AI_PREDICATE_FIND_NAMED(&uParam0, iParam1);
	if (!AI_PREDICATE_IS_VALID(&iVar0))
	{
		LOG_ERROR("GET_NAMED_PREDICATE did not find the given predicate: ");
		LOG_ERROR(&uParam0);
	}
	return &iVar0;
}

void Function_465(int iParam0) //Position: 0x2EA3F / 191039
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

